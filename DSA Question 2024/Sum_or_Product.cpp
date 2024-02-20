#include <bits/stdc++.h> 

const int MOD = 1000000007;

long long int sumOrProduct(long long int n, long long int q)
{    
//   long long  sum = 0,product = 1;
    long long result = 1;
    
	//  for(int i = 1; i<=n; i++){
	// 	 sum = (sum + i)%MOD;
	// 	 product = (product* i)%MOD;
	// }

	if(q == 1){
    result = (n*(n+1)/2)%MOD;  
		// return sum;
	}
	else if(q == 2){
        
		for(int i = 1; i<=n; i++){
			result = (result*i)%MOD;
		}
		// return product;
	}
		return result;
 

}