class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        
        int i = 0, j = n-1;
        int maxiWater = 0;

        while(i<j){
            int w = j-i;
            int h = min(height[i],height[j]);
            int area = w*h;

           maxiWater = max(maxiWater,area);

        //    movie the pointer
         if(height[i]>height[j]){
             j--;
         }else{
             i++;
         }
        }
        return maxiWater;
    }
};