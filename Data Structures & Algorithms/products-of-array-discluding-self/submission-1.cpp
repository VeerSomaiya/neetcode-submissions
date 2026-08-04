class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
vector<int> prefix(n);
vector<int> suffix(n);
prefix[0]=1;
suffix[n-1]=1;


int prod=1;
for(int i=1;i<n;i++)
{
    prod*=nums[i-1];
    prefix[i]=prod;
}
prod=1;
for(int i=n-2;i>=0;i--)
{
prod*=nums[i+1];
suffix[i]=prod;
}
vector<int> ans(n);
for(int i=0;i<n;i++)
{
ans[i]=prefix[i]*suffix[i];
}
return ans;
    }
};
