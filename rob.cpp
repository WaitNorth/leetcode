class Solution {
public:
    int rob(vector<int>& nums) {
        int size = nums.size();
        if(!size) return 0;
        if(size ==1) return nums[0];
        int prehouse = 0;
        int money = 0;
        int money1 = nums[0];
        int money2 = nums[1];
        if(money1>money2){
            money = money1;
        }else{
            money = money2;
            prehouse = 1;
        }
        for(int index = 2; index< size; ++index){
            int add = nums[index];
            if(prehouse){
                if(money1+add > money){
                    money = money1+add;
                    money1 = money2;
                    money2 = money;
                }else{
                    int temp = money2;
                    money2 = money1+add;
                    money1 = temp;
                    prehouse = 0;
                }
            }else{
                money = money1 + add; 
                int temp = money1;
                money2 = money;
                money1 = temp;
                prehouse = 1;
            }
            std::cout<<money<<std::endl;
        }
        return money;
    }
};