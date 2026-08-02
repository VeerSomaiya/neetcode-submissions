class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;

        }
        vector<pair<int,int>> freq;
        for(auto &c:m)
        {
            freq.push_back({c.second,c.first});
        }
     sort(freq.rbegin(),freq.rend());
     for(int i=0;i<k;i++){
        ans.push_back(freq[i].second);
     }
return ans;
    }
};
