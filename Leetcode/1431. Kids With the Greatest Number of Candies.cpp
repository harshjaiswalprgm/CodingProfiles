class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int h = candies.size();

        int maxC =*max_element(begin(candies), end(candies));
        vector<bool> result (h, false);

        for(int i=0; i<h; i++){
            if(candies[i]+extraCandies >= maxC){
                result [i] =true;

            }
        }
        return result;
    }
};