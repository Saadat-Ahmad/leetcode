class LNode {
public:
    int val;
    int key;
    LNode* next;
    LNode(int adr, int value){
        key = adr;
        val = value;
        next = nullptr;
    }
};
class MyHashMap {
public:
    vector<LNode*> arr {1000, nullptr};
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        LNode* n = new LNode(key,value);
        n->next = arr[key%1000];
        arr[key%1000] = n;
    }
    
    int get(int key) {
        LNode* n = arr[key%1000];
        while(n != nullptr){
            if(n->key == key) return n->val;
            n = n->next;
        }
        return -1;
    }
    
    void remove(int key) {
        LNode* n = arr[key%1000];
        while(n != nullptr){
            if(n->key == key) {
                n->key = -1;
                
            }
            n = n->next;
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */