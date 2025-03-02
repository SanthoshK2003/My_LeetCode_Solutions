class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int low=0,high=n-1;
        int maxiarea=0;
        while(low<high)
        {
            int maxheight=min(height[low],height[high]);
             maxiarea=max(maxiarea,(high-low)*maxheight);
            if(height[low]<height[high])
            {
                low++;
            }
            else
            {
                high--;
            }
        }
        return maxiarea;
    }
};