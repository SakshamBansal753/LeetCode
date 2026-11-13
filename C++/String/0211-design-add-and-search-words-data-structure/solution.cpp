class Node{
    public:
    Node*Links[26];
    bool flag=false;
    Node(){
        flag = false;
        for(int i = 0; i < 26; i++)
            Links[i] = nullptr;
    }
    bool containkey(char ch){
        return Links[ch-'a']!=NULL;
    }
    void put(char ch,Node*node){
        Links[ch-'a']=node;
    }
    Node*get(char ch){
        return Links[ch-'a'];
    }
    void setend(){
        flag=true;

    }
   bool isend(){
    return flag;
   }
};

class WordDictionary {
public:
Node*root;
    WordDictionary() {
          root=new Node();
    }
    
    void addWord(string word) {
        Node*node=root;
        for(int i=0;i<word.length();i++){
            if(!node->containkey(word[i])){
                node->put(word[i],new Node());
            }
            node=node->get(word[i]);
        }
        node->setend();
    }
    bool searchword(int idx,string &word,Node *node){
        if(node == NULL)
            return false;

        if(idx == word.size())
            return node->isend();
        if(word[idx]=='.'){
            for(int i=0;i<26;i++){
                if(searchword(idx+1,word,node->get('a'+i))) return true;
               
            }    
            return false;
            
        }
        return searchword(idx+1,word,node->get(word[idx]));
    }
    
    bool search(string word) {
        
        return searchword(0,word,root);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */