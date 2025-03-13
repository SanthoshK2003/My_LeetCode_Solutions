class Solution {
    public int secondHighest(String s) {
        Set<Integer> charset= new HashSet<>();
        for(int i=0;i<s.length();i++)
        {
            char ch=s.charAt(i);
            if(Character.isDigit(ch))
            {
                charset.add(Character.getNumericValue(ch));
            }
        }
        List<Integer> list=new ArrayList<>(charset);
        Collections.sort(list);
        if(list.size()<2)
        {
            return -1;
        }
        int  res=list.get(list.size()-2);
        return res;
    }
}