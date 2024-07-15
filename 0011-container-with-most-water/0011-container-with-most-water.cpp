class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0, j = n-1;
        
        int maxwater = 0;
        while(i<j) 
        {
            
            //start from the smallest one and calculate water
            int minheight = min(height[i], height[j]);
            int width = j-i;
            int area = minheight*width;
            maxwater = max(maxwater, area);
            
            if(height[i] < height[j])
                i++;
            else
                j--;
        }
        
        return maxwater;
    }
};