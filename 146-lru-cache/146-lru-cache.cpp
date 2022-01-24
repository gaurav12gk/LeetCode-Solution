class LRUCache {
public:
    list<pair<int,int>> l;
    unordered_map<int,list<pair<int,int>>::iterator> m;
    int maxSize;
    LRUCache(int capacity) {
        maxSize = capacity;
       
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
        if(m.count(key)!=0)
        {
            auto it = m[key];
            l.erase(it);
        }
        else{
            if(l.size()==maxSize)
            {
                auto it = l.back();
                l.pop_back();
                m.erase(it.first);
            }
          
        }
          pair<int,int> p = {key,value};
            l.push_front(p);
            m[key]= l.begin();
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */