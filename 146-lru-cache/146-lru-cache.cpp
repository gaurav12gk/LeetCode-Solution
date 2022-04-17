class LRUCache {
public:
    int maxSz ;
    list<pair<int,int>> l;
    unordered_map<int,list<pair<int,int>>::iterator> m;
    LRUCache(int capacity) {
        maxSz = capacity;
    }
    
    int get(int key) {
        if(m.count(key)==0)return -1; 
        auto it = m[key];
        int value = it->second; 
        l.erase(it);
        l.push_front({key,value});
        m[key] = l.begin();
        return value;
    }
    
    void put(int key, int value) {
        //if value is already present 
        if(m.count(key)!=0)
        {
            auto it = m[key];
            l.erase(it);
        }
        else{
            if(l.size()==maxSz)
            {
                auto last = l.back();
                l.pop_back();
                m.erase(last.first);
            }
            
        
        }
        
        pair<int,int> p = {key,value};
        l.push_front(p);
        m[key] = l.begin();
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */