/*
class Solution{
    public:
     
    void rotateArr(int arr[], int d, int n){
        // code here
        
        // number of reversals
        d = d %n;
        
        // for d reversal
        reverse(arr,arr+d);
        
        // after d element reversal
        reverse(arr+d,arr+n);
        
        // whole array reversal 
        reverse(arr,arr+n);
        
    }
};
 

 */


// NOTE - In vector case reverser funciton as follows reverse(nums.begin(),nums.begin()+n-k);
