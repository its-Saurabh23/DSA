#include<iostream>
using namespace std;

int main(){
  int n;
    cin>>n;
    int sum = 0;

    for(int i = 1; i<=n; i++){
        sum += i;
    }
    cout<<"sum of N is "<<sum<<endl;
    return 0;
}