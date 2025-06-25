class Solution {
    public int maxArea(int[] nums) {
        int max=0;
        
        int low=0;
        int high=nums.length-1;

        while(low<high)
        {
            int min=Math.min(nums[low],nums[high]);

            max=Math.max(max,(high-low)*min);

            if(nums[low]>nums[high])
            {
                high--;
            }
            else
            {
                low++;
            }
            
        }

        return max;
    }
}