/* 
vector<int> rotateArray(vector<int>arr, int k) {
    
 //   Numebr of reversals
  int n = arr.size();
  k = k%n;

   //   after k reversals 
  reverse(arr.begin()+k,arr.end());

  //  starting  k reversls
  reverse(arr.begin(),arr.begin()+k);

  // whole reversal
  reverse(arr.begin(),arr.end());

 return arr;

}

*/

// two type left or right 