int maximumFrequency(vector<int> &arr, int n)
{
   unordered_map<int,int>count;
    
    int maxFrequency = 0;
    int maxiAns = -1;
   for(int i = 0; i<n; i++){
       count[arr[i]]++;
       maxFrequency = max(maxFrequency,count[arr[i]]);
   }

   for(int i = 0; i<n;i++){

       if(maxFrequency == count[arr[i]]){
           maxiAns = arr[i];
           break;
       }
   }
   return maxiAns;
}