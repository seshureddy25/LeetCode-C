class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums2[j]==nums1[i])
                {
                    if((j+1)!=nums2.size())
                    {
                        int count=0;
                        for(int k= j+1; k<nums2.size();k++)
                        {
                            if(nums2[j]<nums2[k])
                            {
                                result.push_back(nums2[k]);
                                count=1;
                                break;
                            }
                        }
                        if(count!=1)
                            result.push_back(-1);
                    }
                    else
                       result.push_back(-1); 
                }
            }
        }
        return result;
    }
};