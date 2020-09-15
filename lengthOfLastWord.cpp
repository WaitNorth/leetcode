class Solution {
public:
    int lengthOfLastWord(string s) {
        int whiteSpace = 0;
        int count=0;
        int index=0;
        int size = s.size();
        while(s[index]!='\0'){
            if(s[index]==' '){
                if(whiteSpace==0){
                    ++whiteSpace;
                }else{
                    ++index;
                    continue;
                }
            }else{
                if(whiteSpace==1){
                    count=1;
                    --whiteSpace;
                }else{
                    ++count;
                }               
            }
            ++index;
        }
        return count;
    }
};