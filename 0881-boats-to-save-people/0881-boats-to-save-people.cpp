class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        
        int l = 0;
        int r = people.size()-1;
        int boatRequired = 0;
        
        while(l<=r){
            if(l==r){
                boatRequired++;
                l++;
            }
            else if(people[l]+people[r]<=limit){
                boatRequired++;
                r--;
                l++;
            }
            else if(people[l]+people[r]>limit){
                boatRequired++;
                r--;
            }
        }
        
        return boatRequired;
                
    }
};