class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        set<vector<int>>result;
        int sum=0;
        for (int i=0;i<n-3;i++)
        {
            for (int j=i+1;j<n-2;j++)
            {
                int p=j+1;
                int k=n-1;
                while(p<k)
                {
                    sum=nums[i]+nums[j]+nums[p]+nums[k];
                    if (sum==target)
                    {
                        vector<int>rs;
                        rs.push_back(nums[i]);
                        rs.push_back(nums[j]);
                        rs.push_back(nums[p]);
                        rs.push_back(nums[k]);
                        p++;
                        k--;
                        result.insert(rs);
                    }
                    else if (sum>target)
                    {
                        k--;
                    }
                    else if (sum<target)
                    {
                        p++;
                    }
                }
            }
        }
        vector<vector<int>>temp(result.begin(),result.end());
        return temp;
    
        
    }
};