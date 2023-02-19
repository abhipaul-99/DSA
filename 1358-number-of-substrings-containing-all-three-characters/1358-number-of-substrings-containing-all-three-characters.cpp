class Solution {
public:
    int numberOfSubstrings(string s) {
        int index_a = -1, index_b= -1,index_c = -1;
        int count =0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'){
                index_a = i;
            }
            else if(s[i]=='b'){
                index_b = i;
            }
            else{
                index_c=i;
            }
            
            if(i>1){
                count += min(index_a,min(index_b,index_c))+1;
            }
        }
        
        return count;
    }
};