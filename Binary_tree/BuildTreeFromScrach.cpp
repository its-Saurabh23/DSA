#include<iostream>
using namespace std;


class Node{
  
  public:
  int data;
  Node* left;
  Node* right;
  
  Node(int d){
      
      this->data = d;
      this->left = nullptr;
      this->right = nullptr;
      
  }
  
  static Node* BuildTree(){
      int data;
      std::cout << "Enter the data(-1 means terminate)" << std::endl;
      std::cin >> data;
  
  
  if(data == -1){
      return nullptr;
  }
  
  Node* newNode = new Node(data);
  
  newNode->left = BuildTree();
  newNode->right = BuildTree();
  
  return newNode;
  }
  
};



int main(){
   
   Node* root = Node:: BuildTree();
   
    return  0;
}