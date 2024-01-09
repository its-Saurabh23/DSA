/*
 Algorithm

    .Store Indegree of all nodes in Array.
    .Push nodes in Queue whose indegree == 0.
    .Now, For each node in Queue.
        Pop the current node & Store into resultant Array
        Remove indegree count of all neighbours of current node.
        If neighbours indegree becomes 0 the push into queue.
    .Finally, return resultant Array.

*/



class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	   // Topological sort with the help of BFS
	   //step 1 find indegree
	  
	  vector<int>indegree(V,0);
	  
	  for(int i = 0; i<V;i++){
	      
	      for(auto j: adj[i]){
	          indegree[j]++;
	      }
	  }
	// make a queue
    
    queue<int>q;
    // strep 2 push thode node which has 0 indegree
    
    for(int i = 0; i<V; i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }
   
    // step 3 apply BFS logic
    vector<int>ans;
     
     while(!q.empty()){
         
        int front = q.front();
        q.pop();
        
        ans.push_back(front);
        
        for(auto n:adj[front]){
            indegree[n]--;
            
            if(indegree[n] == 0){
                q.push(n);
            }
        }
     }
      return ans;
	}
};