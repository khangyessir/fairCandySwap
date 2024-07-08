class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int aliceCandies = 0, bobCandies = 0;
        for(int candy : aliceSizes) aliceCandies += candy;
        for(int candy : bobSizes) bobCandies += candy;
        int delta = (aliceCandies - bobCandies) / 2;
        unordered_set<int> bobSet(bobSizes.begin(), bobSizes.end());
        for(int a : aliceSizes){
            if(bobSet.find(a - delta) != bobSet.end()){
                return {a, a - delta};
            }
        }
        return {};
    }
};