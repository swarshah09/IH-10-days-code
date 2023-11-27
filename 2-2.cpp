class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int left = 0, right = height.size() - 1;

        while (left < right) {
            int h = std::min(height[left], height[right]);
            int w = right - left;
            int water = h * w;
            
            maxWater = std::max(maxWater, water);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return maxWater;
    }
};