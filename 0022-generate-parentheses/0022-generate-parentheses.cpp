class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>res;
        backTrack(0,0,"",n,res);
        return res;
    }
private:
    void backTrack(int open,int close,string s,int n,vector<string>&res)
    {
        if(open==n && close==n)
        {
            res.push_back(s);
            return;
        }
        if(open<n)
        {
            backTrack(open+1,close,s+"(",n,res);
        }
        if(close<open)
        {
            backTrack(open,close+1,s+")",n,res);
        }
    }
};