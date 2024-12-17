class Solution {
    public boolean backspaceCompare(String s, String t) {
        
        Stack<Character>s1=new Stack<>();
        Stack<Character>t1=new Stack<>();
        for(char a:s.toCharArray()){
            if(!s1.isEmpty()&&a=='#'){
                s1.pop();
            }
            else if(a!='#'){
                s1.push(a);
            }
        }        
        for(char b:t.toCharArray()){
            if(!t1.isEmpty()&&b=='#'){
                t1.pop();
            }
            else if(b!='#'){
                t1.push(b);
            }
        }        
    return s1.equals(t1);
    }
}