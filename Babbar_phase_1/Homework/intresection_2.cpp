#include<iostream>
#include<vector>
using namespace std;





int main(){
    int n,m;
    int arr1[100];
    int arr2[100];
    cin>>n;
    cout<<"another size of an array "<<endl;
    cin>>m;
    cout<<"Element of first Array "<<endl;
    for (int i = 0; i <n; i++)
    {
        cin>>arr1[i];
    }
    cout<<"second Array element "<<endl;
    for (int i = 0; i <m; i++)
    {
        cin>>arr2[i];
    }
int i =0,j=0;
vector<int> ans;

while (i<n &&j<m)
{
    if (arr1[i]==arr2[j])
    {
        ans.push_back(arr2[i]);
        i++,j++;
    }
    else if (arr1[i]<arr2[j])
    {
        i++; 
    }
    else{ 
    j++;
    }
    
    
}

    return 0;
}
