class TrieNode
{
    public:
    char data;
    TrieNode* childeren[26];
    bool isTermianl;

    TrieNode(char ch){
    data = ch;
      for(int i = 0; i<26; i++){
          childeren[i] = NULL;
      }
    isTermianl = false;
    }
};

class Trie {
public:
    TrieNode* root;
    
    Trie() {
        root = new TrieNode('\0');
    }
    
    void insertUtil(TrieNode* root,string word){

        // base case
        if(word.length() == 0){
            root->isTermianl = true;
            return;
        }
      
        int index = word[0]-'a';
      // present
      TrieNode* child;
      if(root->childeren[index] != NULL){
           child = root->childeren[index]; 
      }
      else{
          // not present
         child = new TrieNode(word[0]);
         root->childeren[index] = child;
         child = root->childeren[index];
      }
       
       // recursion call
      insertUtil(child,word.substr(1));
         
    }
    void insert(string word) {
        insertUtil(root,word);
    }
    
    bool searchStr(TrieNode* root,string word){

        // basre case
        if(word.length() == 0){
            return root->isTermianl;
        }  
        
        int index = word[0]- 'a';

       if(root->childeren[index] != NULL){
           return searchStr(root->childeren[index],word.substr(1));
       } 
       return false;
    }
    bool search(string word) {
      return  searchStr(root,word);

    }
    
    bool startPrefix(TrieNode* root, string word ){
        // base case
        if(word.length() == 0){
            return true;
        }
        int index = word[0] -'a';
        if(root->childeren[index] != NULL){
        return startPrefix(root->childeren[index],word.substr(1));
        
        }
        return false;
    }
    bool startsWith(string prefix) {
        
        return startPrefix(root,prefix);
    }
};

 