/*
int isSorted(int n, vector<int> a) {
    // Write your code here.


    int s =0;
    int e = n-1;

    while(s<e){

        if(a[s]<=a[e]){
            s++;
            e--;
        }
        else{
            return 0;
        }
    }
    return 1;
}

*/
