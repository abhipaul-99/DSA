class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
    stack<int> st;
    int i = 0, j = 0;
    for (int k = 0; k < pushed.size(); k++) {
        st.push(pushed[k]);
        while (!st.empty() && j < popped.size() && st.top() == popped[j]) {
            st.pop();
            j++;
        }
    }
    return st.empty() && j == popped.size();
}

};