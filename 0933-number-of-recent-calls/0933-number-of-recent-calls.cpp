class RecentCounter {
    vector<int>v;
public:
    RecentCounter() {
        
    }
    int ping(int t) {
        v.push_back(t);
        while(!v.empty() && v.front()< t-3000){
            v.erase(v.begin());
        }
        return v.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */