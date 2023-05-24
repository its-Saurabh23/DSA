#include<bits/stdc++.h>
using namespace std;

int main()
{

// int n ;
// cin >>n;


int row;
cin>>row;

int col;
cin>>col;

// Creation done
int **arr= new int*[row];
for(int i= 0; i<row; i++)
{
    arr[i] = new int [col];
}




// input taking

for(int i =0; i<row; i++)
{
    for(int j = 0; j<col; j++)
    {
        cin>>arr[i][j];
    }
}
cout<<endl;
// output
for(int i =0; i<row; i++)
{
    for(int j = 0; j<col; j++)
    {
    cout<<arr[i][j]<<" ";
    }cout<<endl;
}


// releasing memory 

for(int i= 0; i<row; i++)
{
    delete[]arr[i];
    // 2 -D array 
}
delete []arr;

    return 0;
}