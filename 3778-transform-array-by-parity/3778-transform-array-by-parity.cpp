class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n);
        int evenCnt=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==0)
            {
               evenCnt++;
            }
        }
        int index=0;
        while(evenCnt!=0)
        {
                res[index]=0;
                index++;
                evenCnt--;
        }
        for(int i=index;i<n;i++)
        {
            res[i]=1;
        }
        return res;
    }
};