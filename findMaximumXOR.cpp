class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int max = 0, mask = 0;
        for (int i = 31; i >= 0; i--) {
            set<int> set;
            mask = mask | (1 << i); 
            for (int num : nums) {
                set.insert(num & mask); //取所有数字的高位加入hashset
            }
            int temp = max | (1 << i); //尝试下一位取1
            for (int element : set) {
                if (set.find(element ^ temp) != set.end()) { //与尝试值异或，看是否存在可选的数字
                    max = temp;
                    break;
                }
            }
        }
        return max;
    }
};