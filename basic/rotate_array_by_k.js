let arr = [1,2,3,4,5];
let k = 2;
let n = 5;
//output => [3,4,5,1,2]
 
const utilityFuntion =(start,end)=>{
    while(start <= end){ 
        let temp = arr [start];  
        arr[start] = arr[end];   
        arr[end] = temp;
        console.log(arr)
        start++;
        end --;
    } 
}

function reverseKItems(arr,k){

  var start = 0; var end = k-1;
  utilityFuntion(start,end);        // O(n)

  var start = k; var end = arr.length - 1;
  utilityFuntion(start,end);     // O(n)
  

  var start = 0; //var end = arr.length - 1;
  utilityFuntion(start,end);   //O(n)
}





// Reversed Array before K
// arr => [2,1,3,4,5]
// reversed array after K portion
// arr => [2,1,5,4,3]
//Reversed whole array
//=> [3,4,5,1,2]
 
 
 
// reverseKItems(0, k - 1);
// reverseKItems(k, arr.length - 1);  // [5,4,3]
// reverseKItems(0, arr.length - 1);
 
 
reverseKItems(arr,k);

// console.log(arr)