class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {

        vector<int>ans;
        unordered_map<int,int>mp;

        for(int val : nums)
        mp[val]++;

        for(int val : nums)
        if(mp[val-1]==0 && mp[val+1] == 0 && mp[val]==1)
        ans.push_back(val);


        return ans;
        
    }
};