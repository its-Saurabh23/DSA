class Solution {
public:
    int pivotInteger(int n) {
        //   T.C.  o(n);
         if(n == 1){
            return  1;
         }

         int totalSum = n * (n+1)/2;
         for(int pivot = 1; pivot<=n; pivot++){

            int L_sum = pivot * (pivot + 1)/2;
        // because inclusively                   
            int R_sum = totalSum - L_sum + pivot; 

            if(L_sum == R_sum){
                 return pivot;
            }   

         }
         return -1;
    }
       
        /*  O(n2) T.C.
        for(int pivot = 1; pivot<=n; pivot++){
            int R_sum = 0; 
            int L_sum = 0;

            for(int i = 1; i<=pivot ;i++){
                 L_sum += i;
            } 

            for(int j = pivot; j<=n ;j++){
                 R_sum += j;
            } 
            if(L_sum == R_sum){
                return pivot;
            }
        }
        return -1;
        */
   
};