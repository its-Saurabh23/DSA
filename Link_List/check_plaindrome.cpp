/*
Apporach first 

#include<vector>

void checkPalindrome(arr){

    int n =arr.size();
    int s =0;
    int e = n-1;

    while(s<=e){
        if(arr[s] != arr[e]){
         return 0;
        }
    }
    s++;
    e--;
    }
    return 1;
}


// function

bool palindreome (Node* head){

vector<int> arr;

Node* temp = head;

while(tmep !=NULL){

    arr.push_back(temp->data);
    temp = temp->next;
}
 return  checkPalindrome(arr);

}

*/