class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int i,j,k;
        int best=INT_MAX;
        int res=0;
        sort(nums.begin(),nums.end());
        for (i=0;i<n-2;i++)
        {
            j=i+1;
            k=n-1;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if (sum==target)
                {
                    return sum;
                }
                else if (sum>target)
                {
                    if (sum-target<best)
                    {
                        best=sum-target;
                        res=sum;        
                    }          
                k--;
                }
                else if (sum<target)
                {
                    if (target-sum<best)
                    {
                        best=target-sum;
                        res=sum;
                    }
                j++;
                }
            }
        }
        return res;
        
    }
};