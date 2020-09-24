class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int temp=0;
        unordered_map<int,int>:: iterator it;
        
        for (int i=0;i<nums.size();i++)
        {
            temp=target-nums[i];
            it=mp.find(temp);
            if(it!=mp.end())
            {
                return {it->second,i};
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};