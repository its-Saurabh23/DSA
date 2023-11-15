 double solve(double x,long n){
        if(n==0){
            return 1;
        }
        //negative case 
        if(n <0){
            return solve(1/x,-n);
        }
        // even case
        else if(n%2==0){
            return solve(x*x,n/2);
        }
        // odd case
        return x* solve(x*x,(n-1)/2);

    }
    
    double myPow(double x, int n) {
        return solve(x,(long)n);
    }



// without a negative anser;

     
    long long power(int N,int R)
    {
      int mod = 1000000007;
      
      if(R == 0 ){
        return 1;  
      } 
      
      long long ans = power(N,R/2)%mod;
     
     if(R%2 == 0){
         return (ans*ans)%mod;
     }   
     
     return N*((ans*ans)%mod)%mod;
    }