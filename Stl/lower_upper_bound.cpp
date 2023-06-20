#include<bits/stdc++.h>
using namespace std;

int main(){

int n;
cin>>n;

int arr[n];

for(int i =0; i<n; i++){
    cin>>arr[i];
}
auto itr = lower_bound(arr,arr+n,4)-arr;
 cout<<itr<<endl;

auto itr2 = upper_bound(arr,arr+n,4)-arr-1;
 cout<<itr2<<endl;
    return 0;
}