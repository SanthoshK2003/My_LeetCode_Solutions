class Solution {
    public int lengthOfLastWord(String s) {
        String words[] = s.split(" ");
        String lastword = words[words.length-1];
        int length=lastword.length();
        return length;
    }
}