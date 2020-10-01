class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
//         int size = nums.size();
//         if(!size) return 1;
//         int mark[size];
//         for(int index=0;index<size;++index){
//             mark[index]=0;
//         }
//         for(int index=0;index<size;++index){
//             if(nums[index]>0 &&nums[index]<=size){
//                 mark[nums[index]-1]++;
//             }
//         }
        
//         int index = 0;
//         while(index<size && mark[index]!=0){
//             index++;
//         }
//         return index+1;
        int n = nums.size();
    
        for(int i = 0; i < n; i++) {
            if(nums[i] <= 0 || nums[i] > n) {
                nums[i] = n + 1;
			}
        }
		
        for(int i = 0; i < n; i++) {
            int num = abs(nums[i]);
            if(num > n) continue;
            num--;
            if(nums[num] > 0) {
                nums[num] = -1 * nums[num];
            }
        }
        
        for(int i = 0; i < n; i++) {
            if(nums[i] > 0) {
                return i + 1;
            }
        }
        
        return n + 1;
    }
};