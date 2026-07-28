class LNode {
public:
    int key;
    LNode* next;
    LNode(int val){
        key = val;
        next = nullptr;
    }
};
class MyHashSet {
public:
    vector<LNode*> arr {1000, nullptr};
    MyHashSet() {
        
    }
    
    void add(int key) {
        LNode* n = new LNode(key);
        n->next = arr[key%1000];
        arr[key%1000] = n;
    }
    
    void remove(int key) {
        LNode* n = arr[key%1000];
        while(n != nullptr){
            if(n->key == key) n->key = -1;
            n = n->next; 
        }
    }
    
    bool contains(int key) {
        LNode* n = arr[key%1000];
        while(n != nullptr){
            if(n->key == key) return true;
            n = n->next; 
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */