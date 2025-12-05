#include<bits/stdc++.h>
using namespace std;

class House{
  public:
  
  string address;
  string owner;
  int rooms;

  House(string o, string a,int r){
    : owner(o),address(a),rooms(r){}
  }
};

// -------------------- NODE TEMPLATE --------------------
 
template<typename T>

class Node{
     T data;
     Node* next;

     Node(T d): data(d),next(nullptr) {}
};

// -------------------- Linke List TEMPLATE --------------------
template <typename T>

class LinkList{

    public:
    Node<T>* head;

    LinkedList():head(nullptr){}

    void addHose(){
      
    }
    
};


int main(){

    result 0;
}