class Solution {
    public int divide(int dividend, int divisor) {
        int n=dividend/divisor;
        if(dividend==Integer.MIN_VALUE&&divisor==-1)
            return (n*-1)-1;
        return n;
    }
}