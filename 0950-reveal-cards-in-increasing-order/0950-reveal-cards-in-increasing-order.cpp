class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        int n= deck.size();
        queue<int>q;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            q.push(i);
        }
        for(int x:deck){
            int idx=q.front();
            q.pop();
            arr[idx]=x;
            if(!q.empty()){
                q.push(q.front());
                q.pop();
            }
        }
        return arr;
    }
};