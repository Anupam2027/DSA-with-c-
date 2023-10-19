class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans=nums[0],mid,start=0,end=nums.size()-1;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            //left side sorted
            if(nums[mid]>=nums[0])
                start=mid+1;
            //right side sorted
            else
            { ans=nums[mid];
                end=mid-1 ;
            }
        }
        return ans;
        
    }
};