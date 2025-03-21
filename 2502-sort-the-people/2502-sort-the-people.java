class Solution {
    public String[] sortPeople(String[] names, int[] heights) {
        Map<Integer,String> map=new HashMap<>();
        for(int i=0;i<names.length;i++)
        {
            map.put(heights[i],names[i]);
        }
        Arrays.sort(heights);
        int index=0;
        String[] s = new String[names.length];
        for(int i=heights.length-1;i>=0;i--)
        {
            s[index]=map.get(heights[i]);
            index++;
        }
        return s;
    }
}