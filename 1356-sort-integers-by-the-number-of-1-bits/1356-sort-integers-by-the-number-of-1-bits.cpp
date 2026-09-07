class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>v;
        for(int x:arr){
            int cnt=0,n=x;
            while(n){
                cnt+=n & 1;
                n >>= 1;
            }
            v.push_back({cnt, x});
        }
        sort(v.begin(),v.end());
        for(int i=0;i<arr.size();i++){
            arr[i]=v[i].second;
        }
        return arr;
    }
};