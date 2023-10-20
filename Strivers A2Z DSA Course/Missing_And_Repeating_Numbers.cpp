//using hash array 
vector<int> findMissingRepeatingNumbers(vector < int > a) {

  int n = a.size(); 
  int hash[n+1]{0}; 

  for(int i = 0; i<n;i++){
      //inserting into hash array
      hash[a[i]]++;
  }
  // traverse the hash array
  int missing = -1,repeted = -1;
  for(int i = 1;i<=n;i++){
    
    if(hash[i]== 2) repeted = i;
    else if(hash[i]== 0) missing = i;

    if(missing !=-1 && repeted != -1)break; 
  }
  
  return {repeted,missing};
  
}

// opitimal solution will be
vector<int> findMissingRepeatingNumbers(vector < int > a) {
     long long n = a.size();
     long long sn =(n*(n+1))/2; // sum of n sum 
     long long s2n = (n*(n+1) *(2*n+1))/6;  // sum square of natural number

     // array sum 
     
     long long s = 0,s2 = 0;
     for(int i = 0; i<n; i++){
         // addtion
        s +=a[i];   
        //square
        s2 += (long long) a[i] *(long long)a[i];     
     }
  
  // creating quation
   long long val1 = s-sn;  // x-y;
   long long val2 = s2-s2n;  //X2-Y2;
   val2 = val2 /val1;
   long long x = (val1 +val2)/2; //x+y
   long long y = x - val1; 

   return {(int)x, (int)y};
     
       
}
