class Solution {
    public int lengthOfLongestSubstring(String s) {
        Set<Character> charset= new HashSet<>();
        int left=0,right=0,maxLength=0,n=s.length();
        while(right<n)
        {
            while(charset.contains(s.charAt(right)))
            {
                charset.remove(s.charAt(left));
                left++;
            }
            charset.add(s.charAt(right));
            maxLength=Math.max(right-left+1,maxLength);
            right++;
        }
        return maxLength;
    }
}