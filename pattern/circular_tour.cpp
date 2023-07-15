#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};

class Solution{
  public:
    int tour(petrolPump p[],int n)
    {
      int balance = 0;
      int start = 0;
      int kami = 0;
     for(int i = 0; i<n;i++){
      balance+= p[i].petrol - p[i].distance;
// ab mai aage bda petrol le ke or check kiya ki sufficient petrol hai ya nhi agar nhi hai to
      if(balance<0){
        kami += balance; 
        balance = 0;
        start = i+1;
      } 
     }
     
    if(balance + kami>=0){
        return start;
    }
    else{
        return -1;
    }
    }

};