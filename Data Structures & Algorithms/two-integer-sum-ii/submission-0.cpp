class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        vector<int> ans;
        int l=0;
        int r=n-1;

        while(r>l)
        {
           
           


            if(numbers[l]+numbers[r]>target)
            r--;


           else if(numbers[l]+numbers[r]<target)
            l++;

             else if((numbers[l]+numbers[r])==target)
            {
                ans.push_back(l+1);
                 ans.push_back(r+1);
                 break;
            }
        }
        return ans;
        
    }
};
