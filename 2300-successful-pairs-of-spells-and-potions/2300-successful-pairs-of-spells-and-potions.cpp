class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        vector<int> res;
        for (int a: spells) {
            long need;
            if (success % a!= 0)
                need = 1 + success/a;
            else
                need = success/a;
            auto it = lower_bound(potions.begin(), potions.end(), need);
            res.push_back(potions.end() - it);
        }
        return res;
        }
};