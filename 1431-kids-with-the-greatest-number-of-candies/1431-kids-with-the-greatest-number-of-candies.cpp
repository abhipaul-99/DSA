class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> v;
        int maxCandies = *max_element(candies.begin(),candies.end());
        for(auto a: candies){
            if(a + extraCandies >= maxCandies){
                v.push_back(true);
            }
            else{
                v.push_back(false);
            }
        }
        
        return v;
        
    }
};