#inlcude<bits/stdc++.h>
using namespace std;

int main(){

   vector<int>V = {1,2,3,4,1,2,3,4,5,6,};

    long long xor_All = 0;

    for(const int num:V){
        xor_All ^= num;
    }
    
     
    long long mask = xor_All & -xor_All;

    int first_distinct = 0;
    int second_distinct = 0;

    for(int i:V){
         
        if(mask & num){
            first_distinct ^= num;
        }else{
           second_distinct ^= num;
        }
    }
   
    cout << "First distinct: " << first_distinct << endl;
    cout << "Second distinct: " << second_distinct << endl;

}
