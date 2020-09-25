class Solution {
public:
    char findTheDifference(string s, string t) {
        int hash[26]={0};
        
        for(int index =0;index<s.size();++index){
            hash[s[index]-97]++;
            
        }
        
        for(int index =0;index<t.size();++index){
            hash[t[index]-97]--;
        }
        int index;
        for(index =0;index<26;++index){
            
            if(hash[index]==-1) break;
        }
        
        return (char)(index+97);
    }
};