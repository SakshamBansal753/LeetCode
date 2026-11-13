class Node{
public:
 Node*prev=NULL;
 Node*next=NULL;
 string url;
 Node(Node*prev,Node*nex,string url){
    this->prev=prev;
    this->next=next;
    this->url=url;
 }
};

class BrowserHistory {
public:
Node*curr=NULL;
    BrowserHistory(string homepage) {
        curr=new Node(NULL,NULL,homepage);
    }
    
    void visit(string url) {
        Node*newpage=new Node(curr,NULL,url);
        curr->next=newpage;
        curr=curr->next;
    }
    
    string back(int steps) {
        while(steps&&curr->prev){
            curr=curr->prev;
            steps--;
        }
        return curr->url;
    }
    
    string forward(int steps) {
        while(steps&&curr->next){
            curr=curr->next;
            steps--;
        }
        return curr->url;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */