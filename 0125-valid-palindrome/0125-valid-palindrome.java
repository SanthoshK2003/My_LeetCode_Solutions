class Solution {
    public static boolean checkPalindrome(String s)
    {
        int low=0,high=s.length()-1;
        while(low<high)
        {
            if(s.charAt(low)!=s.charAt(high))
            {
                return false;
            }
            low++;
            high--;
        }
        return true;
    }
    public boolean isPalindrome(String s) {
        StringBuilder sb= new StringBuilder();
        for(int i=0;i<s.length();i++)
        {
            char ch=s.charAt(i);
            if(Character.isLetter(ch)||Character.isDigit(ch))
            {
                sb.append(ch);
            }
        } 
        String result=sb.toString();
        result=result.toLowerCase();
        if(checkPalindrome(result))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}