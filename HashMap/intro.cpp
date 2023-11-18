
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // create 
   map<string,int>m;
    
    //insertion 
    
    //1
    
    pair<string,int>p = make_pair("saurabh",3);
    m.insert(p);
    //2

    pair<string,int>pair2("love",3);
    m.insert(pair2);
    
    //3
    
    m["mera"]=1;
    
    // what will happen 
    m["mera"] = 2;
    
    
    // serach
    
    std::cout << m["mera"] << std::endl;
    cout<<m.at("love")<<endl;
   
   
//   current answer will be first 

    // // cout<<m.at("unknown")<<endl;  for this abort
    
    // cout<<m["unknown"]<<endl;  for this it will create a new entry 
    
    cout<<m["unknown"]<<endl;  // it will crearte entry 
    cout<<m.at("unknown")<<endl; // then it will locate 
    
    
    // size 
     cout<<m.size()<<endl;
     
     // to check
    cout<<m.count("love")<<endl;   // if key is present then it will retunr 1 otherwise 0
    
    // erase 
    // m.erase("love");
    cout<<m.size()<<endl;
    
    // itrator 
    
   map<string,int>:: iterator it = m.begin();
   
   while(it != m.end()){
 
    cout<<it->first <<" "<<it->second<<endl;
       it++;
    }
    return 0;
    
}