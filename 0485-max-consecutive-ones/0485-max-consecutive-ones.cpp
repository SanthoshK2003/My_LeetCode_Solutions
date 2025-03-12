class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int n=arr.size();
        int res=0;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==1)
            {
                count++;
                res=max(res,count);
            }
            else
                count=0;
        }
        return res;
    }
};