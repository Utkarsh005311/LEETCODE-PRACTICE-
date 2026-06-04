class MyHashSet {
public:
int hash[10000000]={};
    MyHashSet() {
        memset(hash,0,sizeof(hash));
    }
    
    void add(int key) {
        {  
            if(hash[key]==0)
            {
                hash[key]+=1;
            }
        }
    }
    
    void remove(int key) {
        if(hash[key]>0)
        {
            hash[key]-=1;
        }
    }
    
    bool contains(int key) {
            if(hash[key]==1)
            {
                return true;
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