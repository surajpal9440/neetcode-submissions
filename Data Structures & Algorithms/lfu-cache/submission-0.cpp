class LFUCache {
public:
    int capacity, minFreq;

    unordered_map<int, pair<int,int>> mp; // key -> {value, freq}
    unordered_map<int, list<int>> freqList; // freq -> keys
    unordered_map<int, list<int>::iterator> pos; // key -> iterator

    LFUCache(int capacity) {
        this->capacity = capacity;
        minFreq = 0;
    }

    int get(int key) {
        if (mp.find(key) == mp.end())
            return -1;

        int value = mp[key].first;
        int freq = mp[key].second;

        // Remove from old freq list
        freqList[freq].erase(pos[key]);

        // If this was last element and was minFreq → increase minFreq
        if (freqList[freq].empty()) {
            freqList.erase(freq);
            if (minFreq == freq) minFreq++;
        }

        // Move to next freq
        freq++;
        freqList[freq].push_front(key);
        pos[key] = freqList[freq].begin();

        mp[key].second = freq;

        return value;
    }

    void put(int key, int value) {
        if (capacity == 0) return;

        // If already exists → update + increase freq
        if (mp.find(key) != mp.end()) {
            mp[key].first = value;
            get(key); // reuse logic
            return;
        }

        // If full → remove LFU
        if (mp.size() == capacity) {
            int keyToRemove = freqList[minFreq].back(); // LRU in minFreq
            freqList[minFreq].pop_back();

            if (freqList[minFreq].empty()) {
                freqList.erase(minFreq);
            }

            mp.erase(keyToRemove);
            pos.erase(keyToRemove);
        }

        // Insert new key with freq = 1
        mp[key] = {value, 1};
        freqList[1].push_front(key);
        pos[key] = freqList[1].begin();
        minFreq = 1;
    }
};