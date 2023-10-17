/*Generate all thre sub array with rthe productds
  T.C = O(N2)

take two  pointer  prefixSum ,or suffixSum 
    if( one one of them  == 0) start with 1 agin
   
detetrmine the maximum one

T.C = O(n)
S.C = O(1)
*/
#include<bits/stdc++.h>
#include<vector>

int subarrayWithMaxProduct(vector<int> &arr){
	int prefix = 1;
        int suffix = 1;
        int n = arr.size();
        int product = INT_MIN;
        for(int i = 0; i<n;i++){

            if(prefix == 0){
                prefix = 1;
            }
            if(suffix == 0){
                suffix == 1;
            }

            prefix = prefix * arr[i];
            suffix = suffix * arr[n-i-1];
            product = max(product,max(prefix,suffix));
            
        }
        return product;
}