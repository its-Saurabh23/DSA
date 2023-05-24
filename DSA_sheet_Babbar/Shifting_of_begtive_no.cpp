// Broute Force 
// Approach 1
#include<bits/stdc++.h> 
using namespace std;

/* int arr1[6]{-1,4,-2,5,-6,3};
int n =6;
int arr2[3];
int arr3[3];
int arrf[6];
int k = 0;
int j = 0;
int i = 0;
for( i;i<n; i++){
  
    if(arr1[i]<0){
       arr2[k++]= arr1[i];
   
    }
    else{
 
        arr3[j++]=arr1[i];
        
    }
}
for(int i= 0;i<3;i++){
    cout<<" "<<arr2[i];
}cout<<endl;

for(j= 0;j<3;j++){
    cout<<" "<<arr3[j];
}
int l = 0;
int m = 0;
int z = 0;
while(m<3){
    arrf[l++] = arr2[m++];
}
while(z<3){
    arrf[l++]= arr3[z++];
}cout<<endl;

// Final array
cout<<"Shifted array "<<endl; 
for(l=0;l<6;l++){
    cout<<" "<<arrf[l];
}*/



/*  Approach 2
//   T.C - nlog(n)
void move(vector<int>& arr){
    sort(arr.begin(),arr.end());
}
vector<int>arr={-1, 2, -3, 4, 5, 6, -7, 8, 9 };
move(arr);
for(int v:arr){
    cout<<v<<" ";
}
*/
//  Approach 3

void Shifting(int arr[],int n){
int j = 0;
for(int i = 0; i<n; i++){
    if(arr[i]<0){
        if(i != j){
            swap(arr[i],arr[j]);
        }
            j++;
        
    }
}
for(int i = 0; i<n;i++){
        cout<<" "<<arr[i];
    }
}
// void printArray(int arr[],int n){
//     for(int i = 0; i<n;i++){
//         cout<<" "<<arr[i];
//     }
// }

int main(){
int arr []={-1,2,-1,5};
int n =4;
Shifting(arr,n);
// printArray(arr,n);
   return 0;
}