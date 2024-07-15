/* class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0;

        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] != 0) {
                swap(nums[right], nums[left]);
                left++;
            }
        }        
    }
}; */

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;

        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]!=0)
            {
                nums[j]=nums[i];
                j++;
            }
        }
        for(; j<nums.size(); j++)
        {
            nums[j]=0;
        }
    }
          
};