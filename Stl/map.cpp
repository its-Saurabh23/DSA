#include<bits/stdc++.h>
using namespace std;



int main(){


map<int,int>m;
m.insert({1,2});
m[3]= 5;
m[4]= 8;
m[2]= 20;
// auto val =m.find(4);
// cout<<val->first<<" "<<val->second<<endl;

// if(m.find(5) != m.end()){
//      cout<<"Present "<<endl;
// }
// else{
//     cout<<"Absent "<<endl;
// }


if(m[1]){
     cout<<"Present "<<endl;
}
else{
    cout<<"Absent "<<endl;
}


// for(auto  x:m){
// cout<<x.first<<" "<<x.second<<endl;
// }
return 0;
}