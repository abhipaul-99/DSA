class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        bool increase = false;
        bool decrease = false;
        
        for (int i = 1; i < A.size(); i++) {
            if (A[i] < A[i - 1]) {
                decrease = true;
            } else if (A[i] > A[i - 1]) {
                increase = true;
            }
        }
        
        return !(increase && decrease);
    }
};
