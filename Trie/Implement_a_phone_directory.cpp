// Trie har problem 
// T.C  - O(N*M2)
//  S.C - O (M*N);


class TrieNode{
   public:
   char data;
   TrieNode * children[26];
   bool isTerminal;

   TrieNode(char ch){
    ch = data;
    for(int i = 0; i<26; i++){
        children[i] = NULL;
    }
    isTerminal = false;
   }
}; 

class Trie{
    public:
    TrieNode* root;

    Trie(){
        root = new TrieNode('\0');
    } 

    void insertUtile(TrieNode* root,string word){
        //  base case 
        if(word.length() == 0){
           root->isTerminal = true;
           return;
        }
        
        // assumtion ,that word will be in lowe case
        int index = word[0]-'a';
            
        //   creating a node 
        TrieNode* child;

        // prsent 
        if(root->children[index] != NULL){
            child = root->children[index];
        } 
        else{
            // absent
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        // recursive call
        insertUtile(child,word.substr(1));
    }

    void insertWordSring(string word){
      insertUtile(root,word);
    }

    void printSuggestion(TrieNode* curr,vector<string> &temp,string prefix){

    if(curr->isTerminal){
        temp.push_back(prefix);
    }

    for(char ch = 'a'; ch<='z'; ch++){
        TrieNode* next = curr->children[ch-'a'];

        if(next != NULL){
            prefix.push_back(ch);
            printSuggestion(next,temp,prefix);
            prefix.pop_back();
        } 
    }
}





 vector<vector<string> >getSuggestion(string str){
    TrieNode* prev = root;

    vector<vector<string> > output;
    string prefix = ""; 
    
    for(int i = 0; i<str.length(); i++){
        char lastch = str[i];

        prefix.push_back(lastch);

       // check for lastch 
       TrieNode* curr = prev->children[lastch - 'a'];  
       
       // if not found 
       if(curr == NULL){
           break;
       }

        //    found 
        vector<string>temp;
        printSuggestion(curr,temp,prefix);

        output.push_back(temp);
        temp.clear();
        
        // previous ko current pe lao
        prev = curr;  
    }
    return output;

}
 
};

 
vector<vector<string>> phoneDirectory(vector<string>&contactList, string &queryStr)
{
   Trie *t = new Trie();

   //insertAll the character into the trie;
   for(int i = 0; i<contactList.size(); i++){
       string str = contactList[i];
       t->insertWordSring(str);
   } 

   return t->getSuggestion(queryStr);
}