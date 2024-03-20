class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        int s = flowerbed.size();
        if(n == 0){
            return true;
        }

        for(int i = 0; i<s; i++){
            
            if(flowerbed[i] == 0){
             bool left = (i == 0) || (flowerbed[i-1] == 0);
             bool right = (i  == s-1) || (flowerbed[i+1] == 0);  

             if(left && right){
                flowerbed[i] = 1;
                n--;
                
                if(n == 0){
                    return true;
                }
             }           
            }
        }
        return false;
    }
};