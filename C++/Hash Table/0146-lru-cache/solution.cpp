class LRUCache {
public:
    deque<int>dq;
    unordered_map<int,int>m;
    int size;
    LRUCache(int capacity) {
        size=capacity;
        
    }
    void remove(int key){
        auto it = find(dq.begin(), dq.end(), key);
        if (it != dq.end()) {
            dq.erase(it);
        }
    }
    int get(int key) {
        if(m.find(key)!=m.end()){
            int val=m[key];
            remove(key);
            dq.push_front(key);
            return val;
        }
        return -1;
    }
    
    void put(int key, int value) {
       remove(key);
       m[key]=value;
        dq.push_front(key);
        if(dq.size()>size){
            int k=dq.back();
            dq.pop_back();
            m.erase(k);
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */