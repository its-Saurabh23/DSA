 /* Approach

find the first maximum and second maximum, same as find first minimum and second minimum . Then according to question
(a * b) - (c * d).
You can do same thing with another apporach that is sort the vector and and then find the product of last two element and first two element . According to question
Complexity

    Time complexity:O(n long); soritng
    Space complexity: O(1)

Complexity

    Time complexity:O(n);

    Space complexity: O(1)  */

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int max1 = 0, max2 = 0;
        int min1 = INT_MAX, min2 = INT_MAX; 

        for(int i: nums){
            if(i<min1){
                min2 = min1;
                min1 = i;
            }
            else if(i<min2){
                min2 = i;
            }

            if(i> max1){
                max2 = max1;
                max1 = i;
            }
            else if(i> max2){
                max2 = i;
            }
        }
        return max1 * max2 - min1 * min2;
    }
};