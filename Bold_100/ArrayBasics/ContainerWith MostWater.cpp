class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left = 0;
        int right = n-1;
        int maximumWater = 0;
        
        while(left <right){

          int ht = min(height[left],height[right]);
          int wt = right - left;
          maximumWater = max(maximumWater,ht*wt);

           if(height[left]<height[right]){
            left++;
           }else{
            right--;
           }
        }
        return maximumWater;
    }
};


#include <iostream>

int ContainerWithMostWater(int height[],int n){
     
    int maxWater = 0;
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            // need minimum height 
            int ht = min(height[i],height[j]);
            // x-axis width
            int wt = j - i;
            
            //area of container
            int Cwater = wt*ht;
            maxWater = max(maxWater,Cwater);
        }
    }
    return maxWater;
}

int ContainerWithMostWaterOptimize(int height[],int n){
    
    int left = 0;
    int right = n-1;
    int maxWater = 0;
    
    while(left<right){
        int width = right-left;
        int ht = min(height[left],height[right]);
        maxWater = max(maxWater,width*ht);
        
        if(height[left]<height[right]){
            left++;
        }else{
            right--;
        }
    }
    return maxWater;
}


int main()
{
    std::cout<<"Hello World";

    return 0;
}
