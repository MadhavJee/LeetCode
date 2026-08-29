class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> mn(26,100);
        for(string s:words){
            vector<int> cnt(26,0);
            for(char c:s){
                cnt[c-'a']++;
            }
            for(int i=0;i<26;i++){
                mn[i]=min(mn[i],cnt[i]);
            }
        }
        vector<string> ans;
        for(int i=0;i<26;i++){
            while(mn[i]--){
                ans.push_back(string(1,'a'+i));
            }
        }
        return ans;
    }
};