class MyCircularQueue {
public:
    int s, curS = 0, i = 0, j = 0;
    vector<int> dq;
    MyCircularQueue(int k) {
        dq.resize(k);
        s = k;
    }
    
    bool enQueue(int value) {
        if (curS == s) return false;
        dq[i] = value;
        i = (i+1)%s;
        curS++;
        return true;
    }
    
    bool deQueue() {
        if(curS == 0) return false;
        j = (j + 1)%s;
        curS--;
        return true;
    }
    
    int Front() {
        if(curS == 0) return -1;
        return dq[j];  
    }
    
    int Rear() {
        if(curS == 0) return -1;
        return dq[(i+s-1)%s];
    }
    
    bool isEmpty() {
        return (curS == 0);
    }
    
    bool isFull() {
        return (curS == s);
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */