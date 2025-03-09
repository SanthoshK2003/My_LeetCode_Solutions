class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int largest=-1;
        int n=candies.size();
        for(int i =0;i<n;i++)
        {
            if(candies[i]>largest)
            {
                largest=candies[i];
            }
        }
        vector<bool>ans;
        for(int  i=0;i<n;i++)
        {
            if(candies[i]+extraCandies>=largest)
            {
                ans.push_back(true);
            }
            else
            {
                 ans.push_back(false);
            }
        }
        return ans;
    }
};