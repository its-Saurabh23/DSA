#include <bits/stdc++.h>
using namespace std;

int main(){
    // Fibonnaci Series.........
int n;
int t1=0;
int t2=1;
cin>>n;
cout<<t1<<" "<<t2;
int nextValue = 0;
nextValue = t1 + t2;
while (nextValue<=n)
{
    cout<<" "<<nextValue;
    t1= t2;
    t2 = nextValue;
    nextValue = t1+t2;
}

    return 0;
}



// unsigned int coutSetbit(unsigned int n){
//     unsigned int count = 0;
//     while(n!=0){
//     count += n & 1;
//     n>>=1;
//       }    
//     return count;
// }
// int main(){
//  int j;
//  cin>>j;
//     cout<<coutSetbit(j)<<endl;
//     return 0;
// }


// setBit count



