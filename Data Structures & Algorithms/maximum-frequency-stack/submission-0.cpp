class FreqStack {
public:
    unordered_map<int,int> freq;          // value -> frequency
    unordered_map<int,stack<int>> group; // frequency -> stack of values
    int maxFreq = 0;

    FreqStack() {}


    void push(int val) {
    freq[val]++;                    // increase frequency
    int f = freq[val];              // current frequency

    group[f].push(val);             // push into its frequency group
    maxFreq = max(maxFreq, f);      // update max frequency
}

    int pop() {
    int val = group[maxFreq].top();
    group[maxFreq].pop();

    freq[val]--;

    if (group[maxFreq].empty()) {
        maxFreq--;
    }

    return val;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */