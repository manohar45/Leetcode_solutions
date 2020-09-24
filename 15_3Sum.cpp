class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        set<vector<int> >rs;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        //int sum=0;
        for (int i=0; i<n-2 ;i++)
        {
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0)
                {
                    vector<int> temp(3);
                    temp[0]=nums[i];
                    temp[1]=nums[j];
                    temp[2]=nums[k];
                    rs.insert(temp);
                    j++;
                    k--;
                    
                }
                else if (sum>0)
                {
                    k--;
                }
                else if (sum<0)
                {
                    j++;
                }
            }
        }
        vector <vector<int>> result (rs.begin(),rs.end());
        return result;
        
    }
};