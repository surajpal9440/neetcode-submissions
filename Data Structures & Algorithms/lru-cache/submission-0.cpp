class Node{
public:
    int key;
    int value;
    Node* prev;
    Node* next;

    Node(int k,int val){
        key = k;
        value = val;
        prev = NULL;
        next = NULL;
    }
};

class LRUCache {
public:
    int capacity;
    unordered_map<int,Node*> mp;
    Node* head;
    Node* tail;

    LRUCache(int capacity) {
        this->capacity = capacity;

        head = new Node(-1,-1);
        tail = new Node(-1,-1);

        head->next = tail;
        tail->prev = head;
    }

    void addNode(Node* node){
        node->next = head->next;
        head->next->prev = node;

        head->next = node;
        node->prev = head;
    }

    void deleteNode(Node* node){
        Node* prevNode = node->prev;
        Node* nextNode = node->next;

        prevNode->next = nextNode;
        nextNode->prev = prevNode;
    }

    int get(int key) {

        if(mp.find(key) == mp.end())
            return -1;

        Node* node = mp[key];

        deleteNode(node);
        addNode(node);

        return node->value;
    }

    void put(int key, int value) {

        if(mp.find(key) != mp.end()){
            Node* node = mp[key];
            deleteNode(node);
            mp.erase(key);
        }

        if(mp.size() == capacity){
            Node* node = tail->prev;
            mp.erase(node->key);
            deleteNode(node);
        }

        Node* newNode = new Node(key, value);
        addNode(newNode);
        mp[key] = newNode;
    }
};