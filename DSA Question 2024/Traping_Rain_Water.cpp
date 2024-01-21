class Solution {
public:
    vector<int> getLeftMax(vector<int>&height,int &n){
        vector<int>leftMax(n);
        leftMax[0] = height[0]; // left most 
        for(int i = 1; i<n; i++){
            leftMax[i] = max(leftMax[i-1],height[i]); 
        }
        return leftMax;
    }

    vector<int>getRightMax(vector<int>&height,int &n){
        vector<int>rightMax(n);
        rightMax[n-1] = height[n-1];  // right most

        for(int i =n-2; i>=0;i--){
            rightMax[i] = max(rightMax[i +1],height[i]);
        }
        return rightMax;
    }
    int trap(vector<int>& height) {
       int  n = height.size();
    //    for every element what should the left max element and right max element
       vector<int>leftMax = getLeftMax(height,n);
       vector<int>rightMax = getRightMax(height,n);  
       int sum = 0;
        for(int i = 0; i<n;i++){
          int h = min(leftMax[i] ,rightMax[i]) - height[i];
          sum += h; 
       }  
       return sum;
    }
};

// others option to do stack , two pointer ,D.p.
