class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n=nums.size();
        int freq[101];
        int sum=0;
        for(auto num:nums)
        {
            freq[num]++;
        }
        for(int i=0;i<101;i++)
        {
            if(freq[i]==1)
            {
                sum+=i;
            }
        }
        return sum;
    }
};