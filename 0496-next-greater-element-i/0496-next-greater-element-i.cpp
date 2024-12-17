class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int>ans(n);
        for(int i=0;i<n;i++)
        {
          ans[i]=-1;
        }
        for(int i=0;i<n;i++)
        {
            int index=-1;
            for(int j=0;j<m;j++)
            {
                if(nums1[i]==nums2[j])
                {
                    index=j;
                    break;
                }
            }
            for(int j=index+1;j<m;j++)
            {
                if(nums2[j]>nums2[index])
                {
                    ans[i]=nums2[j];
                    break; 
                }
            }
        }
        return ans;
    }
};