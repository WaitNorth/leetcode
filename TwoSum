//bf
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        vector<int> result;
        int i =0;
        for(;i<size;i++){
            for(int j=i+1;j<size;j++){
                if((nums.at(i)+nums.at(j))== target){
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
        return result;
    }
};


//hashmap
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        vector<int> result;
        map<int,int> map;
        for(int i =0;i<size;i++){
            int complement = target - nums.at(i);
            if(map.find(complement)!= map.end()){
                result.push_back(map[complement]);
                result.push_back(i);
                return result;
            }
            map[nums.at(i)] = i;
        }
        return result;
    }
};
