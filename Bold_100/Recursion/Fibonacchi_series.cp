#include <bits/stdc++.h>
using namespace std;

int fibo(int num) {
    if (num == 0) return 0;  
    if (num == 1) return 1;  
    return fibo(num - 1) + fibo(num - 2);  
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = fibo(num);
    cout<<result<<endl;
    
    return 0;
}


                //pre1  prev2  
// itrative way   0,     1,    1,   2,   3,   5, 
 
 int main(){

    int prev1 = 0 ;
    int prev2 = 1;

    for(int i = 2; i<n; i++){   
       int result = prev1 + prev2;

       cout<<result;
       
       prev1 = prev2;
       prev2 = result;
    }

 }