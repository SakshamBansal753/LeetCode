class Node{
    public:
    int val;
    Node*next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class MyLinkedList {
public:
Node*head;
Node*tail;
int length;
    MyLinkedList() {
        head=tail=NULL;
        length=0;
    }
    
    int get(int index) {
        int cnt=0;
        Node*temp=head;
        if(index>=length){
            return-1;
        }
        if(head==NULL){
            return -1;
        }
        while(temp){
          if(cnt==index){
                return temp->val;
            }
            cnt++;
          
            temp=temp->next;

        }
        return -1;
    }
    
    void addAtHead(int val) {
         Node*temp=new Node(val);
        if(head==NULL&&tail==NULL){
            head=temp;
            tail=temp;
            length++;
            return;
        }
       
        temp->next=head;
        head=temp;
        length++;
    }
    
    void addAtTail(int val) {
        Node*temp=new Node(val);
        if(head==NULL&&tail==NULL){
            head=temp;
            tail=temp;
            length++;
            return;
        }
        tail->next=temp;
        tail=temp;
        length++;
    }

    
    void addAtIndex(int index, int val) {
        int cnt=0;
        if(index>length){
            return;
        }
        if(index==length){
            addAtTail(val);
            return;
        }
        if(index==0){
            addAtHead(val);
            return;
        }
        Node*temp=head;
        Node*newNode=new Node(val);
        while(temp){
            if(cnt+1==index){
                break;
            }
            cnt++;
            temp=temp->next;

        }
        Node*x=temp->next;
        temp->next=newNode;
        newNode->next=x;
        length++;
        return;

    }
    
    void deleteAtIndex(int index) {
        if(index>=length||index<0){
            return;
        }
       if(index==0){
        Node*t=head;
        head=head->next;
        delete(t);
        length--;
        return;
       }
      
        int cnt=0;
        Node*temp=head;
        while(temp){
            if(cnt+1==index){
                break;
            }
            cnt++;
            temp=temp->next;
        }
        Node*h=temp->next;
       temp->next = h->next;
       if(h == tail){
    tail = temp;
}
        delete(h);
        length--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */