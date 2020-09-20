class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        int min=std::to_string(low).size()-1;
        int max=std::to_string(high).size()-1;
        vector<int> result;
        string validate;
        for(int i=min;i<=max;++i){
            validate="";
            int maxfn;
            if(i!=max){
                maxfn = 9;
            }else{
                maxfn= high / (std::pow(10,max));
            }
            int add = 1;
            while(add<=maxfn){
                int temp = add;
                int e = i;
                while(e-->=0){
                    if(temp<10)validate += std::to_string(temp++);
                }
                int input = std::stoi(validate);
                if(input>=low && input<=high && validate.size()==(i+1)){
                    result.push_back(input); 
                }
                validate = "";
                add++;
            }
        }    
        return result;
    }
};