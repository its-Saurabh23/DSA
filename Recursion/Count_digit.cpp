#include<bits/stdc++.h>
using namepsace std;

int Countdigits(int num){
    if(n == 0){
        return 1;
    }
    int count = 1;
    while(num != 0){
        num  = num/10;
        ++count;
    }
    return count;
}
  
int CountdigitsRecursionHelper(int n){
    if(n == 0){
        return 1; 
    }
    return 1 +CountdigitsRecursionHelper(n/10);
}

int CountdigitsRecursion(int num,){
    if(n == 0){
        return 1; 
    }
    return CountdigitsRecursionHelper(num);
}


int main(){
    int digit = 1567;    
    int ans =  Countdigits(digit);
    std::cout<<ans<<std::endl;
}
