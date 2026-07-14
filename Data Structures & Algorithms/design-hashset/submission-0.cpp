class MyHashSet {
public:
    
    vector<vector<int>> buckets;
    int size;

    MyHashSet() {
        size = 1000;
        buckets.resize(size);
    }
    
    void add(int key) {
        int index = key % size;

        for(int x : buckets[index]){
            if(x == key) return;
        }

        buckets[index].push_back(key);
    }
    
    void remove(int key) {
        int index = key % size;

        for(int i = 0; i < buckets[index].size(); i++){
            if(buckets[index][i] == key){
                buckets[index].erase(buckets[index].begin() + i);
                return;
            }
        }
    }
    
    bool contains(int key) {
        int index = key % size;

        for(int x : buckets[index]){
            if(x == key) return true;
        }

        return false;
    }
};