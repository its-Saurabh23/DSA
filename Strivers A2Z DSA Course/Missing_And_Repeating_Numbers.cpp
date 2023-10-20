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
