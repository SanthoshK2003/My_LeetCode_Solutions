class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n=people.size();
        sort(people.begin(),people.end());
        int low=0,high=n-1,count=0;
        while(low<=high)
        {
            if(people[low]+people[high]<=limit)
            {
                low++;
                high--;
                count++;
            }
            else
            {
                high--;
                count++;
            }
        }
        return count;
    }
};