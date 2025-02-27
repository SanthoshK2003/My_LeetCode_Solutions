class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n=arr.size();
       int c0=0;
       int c1=0;
       int c2=0;
       for(int i=0;i<n;i++)
       {
        if(arr[i]==0)
            c0++;
        if(arr[i]==1)
            c1++;
        if(arr[i]==2)
            c2++;
       }
       for(int j=0;j<c0;j++)
        arr[j]=0;
       for(int j=c0;j<c0+c1;j++)
        arr[j]=1;
       for(int j=c0+c1;j<n;j++)
        arr[j]=2;
    }
};