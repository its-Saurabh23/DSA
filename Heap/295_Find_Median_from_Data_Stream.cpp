// class Implement

class MedianFinder {
public:

    double median = 0;
    priority_queue<int> maxi;
    priority_queue<int,vector<int>,greater<int>> mini;
    
    MedianFinder() {
        
    }
    
    int signum(int maxiHeapSize,int minHeapSize){
        if(maxiHeapSize == minHeapSize)
        {
            return 0;
        }
        else if(maxiHeapSize > minHeapSize)return 1;

        else return -1;
    } 

    void addNum(int num) {
      switch(signum(maxi.size(),mini.size()) ){

    case 0:
        
        if(num>median)
        {
            mini.push(num);
            median = mini.top();
        }
        else
        {
            maxi.push(num);
            median = maxi.top();
        }
        break;
        
    case 1: 
        
        if(num>median)
        {
          mini.push(num);
          median  = (mini.top() + maxi.top())/2.0;
        }

        else{
            mini.push(maxi.top());
            maxi.pop();
            maxi.push(num);
            median  = (mini.top() + maxi.top())/2.0;
        }
        break;

    case -1:

        if(num>median)
        {
            maxi.push(mini.top());
            mini.pop();
            mini.push(num);
            median  = (mini.top() + maxi.top())/2.0;
        }
        else
        {
            maxi.push(num);
            median  = (mini.top() + maxi.top())/2.0;
        }
        break;

      }

    }
    
    double findMedian() {
    return median;
    }
};
