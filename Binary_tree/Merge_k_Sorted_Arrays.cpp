
//custom class

class data {
    public:
   int val;
   int apos;
   int vpos;
   
   data(int v,int ap,int vp){

      val = v;
      apos = ap;
      vpos = vp;
   }
};

struct mycomp{
    bool operator()(data &d1,data &d2){
        return d1.val > d2.val;
    }
};

//end

class Solution
{
    public:
    //Function to merge k sorted arrays.

    // Main code.. 
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        
    vector<int>ans;
        // Min haep
    priority_queue<data,vector<data>,mycomp>pq;
      
      
      for(int i = 0; i<K; i++){
         data d(arr[i][0],i,0);  
         pq.push(d);
      }
      
      while(!pq.empty()){
          data curr = pq.top();
          pq.pop();
          ans.push_back(curr.val);
          
          // age badao..
        int ap = curr.apos , vp = curr.vpos;
        
        if(vp+1 < arr[ap].size()){
         data d(arr[ap][vp+1],ap,vp+1);
         pq.push(d);
    
        }
      }
      return  ans;
    }
};