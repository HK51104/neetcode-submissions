class MyHashSet {

    vector<int>data;
public:
    MyHashSet() 
    {

    }
    
    void add(int key) 
    {
        if(find(data.begin(),data.end(),key)==data.end())
        {
            data.push_back(key);
        }
    }
    
    void remove(int key) 
    {
        if(find(data.begin(),data.end(),key)!=data.end())
        {
            auto it=find(data.begin(),data.end(),key);
            if(it!=data.end())
            {
            data.erase(it);
            }
            // "erase" needs an iterator to remove as vector isnt a continous address holding container but vector holds memory space from here and there   
            // Compares each element with key and Returns an iterator (position) where the element is found
        }    
    }
    
    bool contains(int key)
    {
        return find(data.begin(),data.end(),key)!=data.end();    
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */