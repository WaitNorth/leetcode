class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(!nums.size()) return 0;
        int p = 0;
        for(int index =0;index <nums.size();index++){
            if(nums[index]!=val){
                nums[p++] = nums[index];
            }
        }
        return p;
    }
};
