class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int m=nums1.size();
        int n=nums2.size();
        vector<int>result;
        int i=0;
        int j=0;
        double ans=0.0;
        while(i<m &&j<n)
        {
            if (nums1[i]<nums2[j])
            {
                result.push_back(nums1[i]);
                i++;
            }
            else 
            {
                result.push_back(nums2[j]);
                j++;
                
            }
        }
        while(i<m)
        {
            result.push_back(nums1[i]);
            i++;
        }
        while(j<n)
        {
            result.push_back(nums2[j]);
            j++;
        }
        
        
        if (result.size()%2!=0)
        {
            ans=result[result.size()/2];
            
        }
        else
        {
            
            ans=(result[result.size() / 2] + result[result.size() / 2 - 1]) / 2.0;
        }
        
      return ans;       
    }
};