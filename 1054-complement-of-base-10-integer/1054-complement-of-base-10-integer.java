class Solution {
    private String complement(String str)
    {
        String result="";
        for(int i=0;i<str.length();i++)
        {
            if(str.charAt(i)=='0')
            {
                result+="1";
            }
            else if(str.charAt(i)=='1')
            {
                result+="0";
            }
        }
        return result;
    }
    public int bitwiseComplement(int n) {
        String binary_str = Integer.toBinaryString(n);
        String complementString = complement(binary_str);
        int ans_decimal = Integer.parseInt(complementString,2);
        return ans_decimal;
    }
}