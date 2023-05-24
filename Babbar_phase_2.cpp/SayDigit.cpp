#include<bits/stdc++.h>
using namespace std;


void sayDigit(int n,string arr[]){
    // Base case
    if(n ==0){
        return ;
    }
    // Processes  Tail Recursion...
    int digit = n%10;
    n = n/10;
    // R.R
  sayDigit(n,arr);
  cout<<arr[digit]<<" ";

}

int main(){
string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n ;
    cin>>n;
    cout<<endl;
    sayDigit(n,arr);
    cout<<endl;
    return 0;
}