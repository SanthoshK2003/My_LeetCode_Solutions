class Solution {
public:
    double average(vector<int>& salary) {
        int n=salary.size();
        int maxi=INT_MIN;
        int mini=INT_MAX;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,salary[i]);
            mini=min(mini,salary[i]);
            sum+=salary[i];
        }
        double newSum=sum-maxi-mini;
        double newLength=n-2;
        return newSum/newLength;
    }
};