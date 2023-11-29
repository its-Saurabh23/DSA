/*
You call a pre-defined API int guess(int num), which returns three possible results:

    -1: Your guess is higher than the number I picked (i.e. num > pick).
    1: Your guess is lower than the number I picked (i.e. num < pick).
    0: your guess is equal to the number I picked (i.e. num == pick).

*/

class Solution {
public:
    int guessNumber(int n) {
    int low = 1;
    int high = n;
    while(low<=high){
        int mid = low + ( high - low)/2;
        int val = guess(mid);
        if(val == 0){
            return mid;
        }
        else if(val == -1){
          high = mid;
        }
        else{
            low = mid + 1;
        }
    }
      return -1;
    }
};