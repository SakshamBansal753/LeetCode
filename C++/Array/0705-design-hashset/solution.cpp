class MyHashSet {
public:
    vector<vector<int>> buckets;
    int size = 1000;

    MyHashSet() {
        buckets.resize(size);
    }

    int hash(int key){
        return key % size;
    }

    void add(int key) {
        int index = hash(key);

        for(int x : buckets[index]){
            if(x == key) return;
        }

        buckets[index].push_back(key);
    }

    void remove(int key) {
        int index = hash(key);

        auto &bucket = buckets[index];

        for(int i = 0; i < bucket.size(); i++){
            if(bucket[i] == key){
                bucket.erase(bucket.begin() + i);
                return;
            }
        }
    }

    bool contains(int key) {
        int index = hash(key);

        for(int x : buckets[index]){
            if(x == key) return true;
        }

        return false;
    }
};