class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
        return 0;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        m[nums[i]]++;

int ml=1;
for(int i=0;i<n;i++)
{
    if(m[nums[i]-1]==0)
    {
        int l=1;
        int x=nums[i];
        while(m[x+1])
        {
            x++;
            l++;
        }
        ml=max(ml,l);
    }
}
    
        
        return ml;
    }
};
