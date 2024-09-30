#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;

    /*
        for (int i = 0; i < n; i++)   // row
        {
            for (int j = 0; j <i+1; j++)  // col
            {
                cout << " * ";
            }
            cout << endl;
        }

     // output
     *
     *  *
     *  *  *
     *  *  *  *
     *  *  *  *  *




     */

    /*
       for (int i = 0; i < n; i++)
       { // row
           for (int j = 0; j < n - i; j++)
           { // col
               cout << " * ";
           }
           cout << endl;
       }
   // output

    *  *  *  *  *
    *  *  *  *
    *  *  *
    *  *
    *
   */

/*
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i + 1; k++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    // output 
      *       
     *  *     
    *  *  *   
   *  *  *  * 
  *  *  *  *  *  
*/
  
  for(int i=1; i<=n; i++){
    
    for(int j=1; j<=n-i; j++){
      cout<<"  ";   //space
    }

    for(int k=1; k<=i;k++){
        cout<< "* ";
    }
    cout<<endl;
  }

    for(int i = 0; i<n; i++){
    if(i == 0){
        for(int j = 0; j<n; j++){
            cout<<"* ";
        }
    }
    else{
        cout<<"* ";
        for(int k =0; k<n-i-2; k++){
            cout<<"  ";
        }   
        if(i == n-1){

        }else{
            cout<<"* ";
        }
    }
    cout<<endl;
}

/*    
// outPut

* * * * * * 
*       *
*     *
*   *
* *
*

 */
    return 0;
}
