/*
int i =0,j =0,ans = 0;
   long long int sum = 0;
   while(j<a.size()){
     
     sum = sum + a[j];
     while(sum>k){
        sum = sum- a[i];
        i++;
     }
     //calculation
     if(sum == k){
         ans = max(ans,j-i+1);  
     }
     j++;
 }
 return ans;
*/
// at very itration we are doing sum but some specific place do some calulation 
// we are determining  the evry possible length of size k 
// do complete dry dun the question
