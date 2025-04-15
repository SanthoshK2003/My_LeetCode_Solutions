class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n);
        int low=0,high=n-1;
        int i=n-1;
        while(low<=high)
        {
            int leftsq = nums[low]*nums[low];
            int rightsq = nums[high]*nums[high];
            if(leftsq>rightsq)
            {
                res[i]=leftsq;
                low++;
            }
            else
            {
                res[i]=rightsq;
                high--;
            }
            i--;
        }
        return res;
    }
};