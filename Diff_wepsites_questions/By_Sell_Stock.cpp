// take the minimum stock 
// at every iteration calculate the profit and store it 

 int mini = INT_MAX;
     int maximimumProfit = 0;
    for(int i =0; i<prices.size();i++){

  // determing the minimum profit bala stock
      mini = min(mini,prices[i]);
        // getting the maximun stock..
     maximimumProfit = max(maximimumProfit,prices[i]-mini);
        
    }
    return maximimumProfit;


// another one 
// if question ask to find all the segmenets of profitalbe stock
 vector<vector<int>>profit;
        for(int i=0;i<n-1;i++)
        {       
          // that means if the current stock is less than the next one that menas its going to profrtable stock 
               if(A[i]<A[i+1])
                profit.push_back({i,i+1});
        }
        return profit;
     }
