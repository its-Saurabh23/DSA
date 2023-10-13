// kadan's algo..
  /*
  int n = a.size();
   map<int,int>mpp;
   int xr = 0;
   mpp[xr]++;

   int cnt = 0;
   for(int i =0; i<n;i++)
   {
       xr = xr ^ a[i];
       // for k
       int x = xr ^ b;
       cnt  += mpp[x];
       mpp[xr]++;
   } 
   return cnt;

   */