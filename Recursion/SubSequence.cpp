#include<bits/stdc++.h>
using namespace std;

  void printAllSequences(int index, int arr[], vector<int>&output_Vector, int n){
      if((index >=n)){
         
         for(int i = 0; i<output_Vector.size(); i++){
           std::cout << output_Vector[i]<<" ";
         }  
         cout<<endl;
         return;
      }
      
      printAllSequences(index + 1,arr,output_Vector,n);
      
      output_Vector.push_back(arr[index]);
      
      printAllSequences(index + 1, arr,output_Vector,n);
      
      output_Vector.pop_back();
  }


int main(){
  
  int arr[] = {3,1,2};
  std::vector<int>output_Vector;
  int n  = 3;
  
  printAllSequences(0,arr,output_Vector,n);
  
  return 0;
}