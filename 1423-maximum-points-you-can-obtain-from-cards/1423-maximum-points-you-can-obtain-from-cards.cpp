class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int rsp = cardPoints.size()-k;
        int leftSum = 0;
        int rightSum = 0;
        for(int j= rsp; j < size(cardPoints); j++){
            rightSum += cardPoints[j];
        }
        int best = rightSum;
        for(int i = 0; i<k; i++){
            leftSum += cardPoints[i];
            rightSum -= cardPoints[rsp+i];
            best = max(best,leftSum+rightSum);
        }
        return best;
    }
};