class Solution {
public:
    bool isValid(string s) {
        int sLength = s.length();
        if(sLength%2 !=0){
            return false;
        }
        
        stack<char> st;
        
        for(auto c:s){
            if(c=='{' ||c=='[' ||c=='(' ){
                st.push(c);
            }
            else{
                if(st.empty()){
                    return false;
                }
                
                if(st.top()=='{' && c=='}' || st.top()=='[' && c==']' || st.top()=='(' && c==')'){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        
        if(st.empty()){
            return true;
        }
        return false;
    }
};