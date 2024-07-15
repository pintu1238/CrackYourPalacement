class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();

        int i=0;//denote for 0
        int j=0;// denote for 1
        int k=n-1;//denote for 2

        while(j<=k)
        {
            if(nums[j]==1)
            {
                j++;
            }
            else if(nums[j]==2)
            {
                swap(nums[j], nums[k]);
                k--;
            }
            else
            {
                swap(nums[j], nums[i]);
                i++;
                j++;
            }
        }
    }
};