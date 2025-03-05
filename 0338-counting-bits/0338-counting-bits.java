class Solution {
    private int countOnes(String nums)
    {
        int count =0;
        for(int i=0;i<nums.length();i++)
        {
            if(nums.charAt(i)=='1')
            {
                count++;
            }
        }
        return count;
    }
    public int[] countBits(int n) {
        int ans[] = new int[n+1];
        ans[0]=0;
        for(int i=1;i<=n;i++)
        {
            String binary=Integer.toBinaryString(i);
            int one_count=countOnes(binary);
            ans[i]=one_count;
        }
        return ans;
    }
}