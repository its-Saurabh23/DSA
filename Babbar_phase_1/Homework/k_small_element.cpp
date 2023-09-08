 
#include<bits/stdc++.h>
using namespace std;

 

class Solution{
    public:
    int kthSmallest(int arr[], int l, int r, int k) {
        
        // int n = sizeof(arr) / sizeof(arr[l]);
    //    int n =  arr.size();
        cout<<"n "<<endl;
        sort(arr,arr+r);
        for (int i = 0; i <r; i++)
        {
            cout<<arr[i]<<" ";
        }
        

        // return arr[n-k];
    }
};

 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}
 