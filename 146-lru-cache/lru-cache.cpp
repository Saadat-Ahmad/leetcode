class LNode {
public:
    LNode* next;
    LNode* prev;
    int key, val;
    LNode(int adr,int value){
        key = adr;
        val = value;
        next = nullptr;
        prev = nullptr;
    }
};
class LRUCache {
private:
    void insertNode(LNode* node){
        node->next = head->next;
        node->prev = head;
        node->next->prev = node;
        head->next = node;
        mp[node->key] = node;
    }
    void repositionNode(LNode* node){
        removeNode(node);
        insertNode(node);
    }
    void removeNode(LNode* node){
        node->prev->next = node->next;
        node->next->prev = node->prev;
        mp.erase(node->key);
    }
    void removeLRU(){
        removeNode(tail->prev);
    }
public:
    unordered_map<int, LNode*> mp;
    LNode* head;
    LNode* tail;
    int i;
    LRUCache(int capacity) {
        i = capacity;
        head = new LNode(0, 0);
        tail = new LNode(0, 0);
        head->next = tail;
        tail->prev = head;
    }
    
    int get(int key) {
        if(mp.find(key) == mp.end()) return -1;
        repositionNode(mp[key]);
        return mp[key]->val;
    }
    
    void put(int key, int value) {
        if(mp.find(key) != mp.end()) {
            mp[key]->val = value;
            repositionNode(mp[key]);
            return;
        } else {
            if(mp.size() == i) removeLRU();
            LNode* node = new LNode(key, value);
            node->next = head->next;
            node->next->prev = node;
            node->prev = head;
            head->next = node;
            mp[key] = node;
        }
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */