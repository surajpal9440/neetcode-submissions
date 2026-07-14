class MyCircularQueue {
public:
    int capacity;
    int size;

    struct ListNode{
        int value;
        ListNode* next;
        ListNode(int value){
            this->value = value;
            next = NULL;
        }
    };

    ListNode* front = NULL;
    ListNode* rear = NULL;

    MyCircularQueue(int k) {
        capacity = k;
        size = 0;
    }
      
    bool enQueue(int value) {
        if(isFull()){
            return false;
        }

        ListNode* node = new ListNode(value);

        if(isEmpty()){
            front = node;
            rear = node;
        }
        else{
            rear->next = node;
            rear = node;
        }

        size++;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()){
            return false;
        }

        ListNode* temp = front;
        front = front->next;
        delete temp;

        size--;

        if(front == NULL)
            rear = NULL;

        return true;
    }
    
    int Front() {
        if(isEmpty())
            return -1;

        return front->value;
    }
    
    int Rear() {
        if(isEmpty())
            return -1;

        return rear->value;
    }
    
    bool isEmpty() {
        if(size == 0)
            return true;
        else
            return false;
    }
    
    bool isFull() {
        if(capacity == size)
            return true;
        else
            return false;
    }
};