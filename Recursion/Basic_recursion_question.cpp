#include<bits/stdc++.h>
using namespace std;

class Solution{

    public:
    void solve(int n,int i){
        // base case 
        if(i == n){
            return;
        }
        cout<<i<<" ";
        solve(n,i+1);    // Recursive call
    };

    void solve1(int n){
        //base case
        if(n == 0){
            return;
        }
        solve1(n-1);   //Recursive call
        cout<<n<<" ";
    }

    void SumN(int n,int &sum){
        //base case
        if(n == 0){
            return;
        }
        sum += n;
        SumN(n-1,sum); //Recursive call;
    }

    int factorial(int n){
         //base case
         if(n == 1){
              return n;
         }
         return n * factorial(n-1); // recursive call;
    } 

    int fibonacci(int n){ 
       if(n == 0){
        return n;
       }

       if(n == 1){
            return n;
        return fibonacci(n-1) + fibonacci(n-2);  // recursive call;
    }
   }
 void reverse(vector<int>&v,int left,right){

        // Base case 
        if(left>right){
                return;
        }
        swap(v[left],v[right]);
        reverse(v,left+1,right-1);
    }
   
};



int main(){
    
    Solution obj;
    int n = 10;
    int i = 0;
    
    obj.solve(n,i); 
    obj.solve1(n);

    int sum = 0;
    obj.sumN(n,sum);

    int fact = 5;
    int ans = obje.factorial(fact);
    std::cout<<ans<<std::endl;
    
    int fibN = 5;
    int fibAns = obj.fibonacci(fibN);
    std::cout<<fibAns<<std::endl;

     vector<int>arr = {1,2,3,4,5};
    int size = arr.size()-1;

    obj.reverse(arr,0,size);
    for(const auto &x:arr){
        std::cout<< x <<" ";
    }

    return 0;
}
