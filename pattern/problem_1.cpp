#include <iostream>
using namespace std;
int main()
{
   char str[4] = {'a' ,'b','c','\0'};

   for(int i =0; i<3;i++){
      cout<< str[i]<<endl;
       for(int j =0; j<=i; j++){
        cout<<str[j];
       }
   }  

   cout<<endl;
   
   for(int i =1; i<3;i++){
       cout<<str[i]<<endl;
       for(int j =1; j<=i; j++){
           cout<<str[j];
       }
   }

cout<<endl;
    return 0;
}
