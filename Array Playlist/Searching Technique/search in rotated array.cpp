class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mid,start=0,end=nums.size()-1;
        while(start<=end)
        {
           mid=start+(end-start)/2;
            if(nums[mid]==target)
               return mid;
            //left side sorted 
               else if(nums[mid]>=nums[0])
               {
                if(nums[start]<=target&&nums[mid]>target)
                    end=mid-1;
                   else
                       start=mid+1;
                
               }
            //right side sorted
             else
             {
                 if(nums[end]>=target&&nums[0]<=target)
               {
                 start=mid+1;
                 end=mid-1;
                
               }
             }
            
            
        }
        return -1;
        
    }
};