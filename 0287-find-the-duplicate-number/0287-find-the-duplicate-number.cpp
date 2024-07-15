class Solution{
    public:
       int findDuplicate(vector<int>& nums)
       {
        //1, 3, 4, 2, 2
        //s
        //         f

        int slow=nums[0];
        int fast=nums[0];
//in above line ye dono phle hi meet kar jayenge isliye 
//hmne slow and fast ko move kar diya
        slow=nums[slow];//ye 1 bar move krega
        fast=nums[nums[fast]];//ye 2 bar move krega

        //detect the cycle
        while(slow!= fast)
        {
            slow=nums[slow];
            fast=nums[nums[fast]];
        }
        //ab slow ko wapis start me bhej do
        slow=nums[0];

        while(slow != fast)
        {
            slow=nums[slow];
            fast=nums[fast];
        }
        return fast;


       }
};
/* class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int left=1;
        int right=nums.size() - 1;

        while(left < right)
        {
            int mid = left+(right-left)/2;
            int count = 0;

            //count the numbers less than or equal to mid
            for(int num:nums)
            {
                if(num <= mid)
                {
                    count++;
                }
            }
            //if count is greater than mid, the duplicate lies in the left half
            if(count>mid){
                right=mid;
            }
            else{//otherwise it lies in the right half
                left=mid+1;
            }
        }
        return left;   
    }
}; */


