class Allocator {
public:
    vector<int> arr;
    int it, s;
    Allocator(int n) {
        arr.resize(n);
        s = n;
    }
    
    int allocate(int size, int mID) {
        int count = 0;
        for(int i = 0; i < s; i++){
            if(arr[i] == 0) count++;
            else count = 0;
            if(count == size){
                fill(arr.begin() + i - count + 1, arr.begin() + i + 1, mID);
                return i - count + 1;
            }
        }
        return -1;
    }
    
    int freeMemory(int mID) {
        int freed = 0;
        for(int i = 0; i < s; i++){
            if(arr[i] == mID) {
                arr[i] = 0;
                freed++;
            }
        }
        return freed;
    }
};

/**
 * Your Allocator object will be instantiated and called as such:
 * Allocator* obj = new Allocator(n);
 * int param_1 = obj->allocate(size,mID);
 * int param_2 = obj->freeMemory(mID);
 */