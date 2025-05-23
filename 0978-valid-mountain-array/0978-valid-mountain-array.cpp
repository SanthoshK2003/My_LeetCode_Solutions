class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        if(n<3)
            return false;
        int l=0;
        int r=n-1;
        while(l+1<n && arr[l]<arr[l+1])
            l++;
        while(r>0 &&arr[r-1]>arr[r])
            r--;
        return l>0 && r<n-1 && l==r;
    }
};