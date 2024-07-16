class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n = nums.size(); 
        int leftSum = 0, rightSum = 0, maxSum = 0;

        for (int i = 0; i < k; i++) {
            leftSum = leftSum + nums[i];
        }
        maxSum = leftSum;

        int rightIndex = n - 1;
        /*for (int i = k; i >= 0; i--) {
            leftSum = leftSum - nums[i];
            rightSum = rightSum + nums[rightIndex];
            rightIndex = rightIndex - 1;

            if(rightIndex >= 0)
            maxSum = max(maxSum, leftSum + rightSum);
        }*/
        for (int i = k-1; i >= 0; i--) {
            leftSum = leftSum - nums[i];
            rightSum = rightSum + nums[rightIndex];
            rightIndex = rightIndex - 1;

            if(rightIndex >= 0)
            maxSum = max(maxSum, leftSum + rightSum);
        }

        
        
        return maxSum;
    }
};
