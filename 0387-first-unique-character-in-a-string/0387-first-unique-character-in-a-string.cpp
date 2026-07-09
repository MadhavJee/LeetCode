class Solution {
public:
    int firstUniqChar(string s) {
        int freq[26]={0};
        queue<int>q;
        for(int i=0;i<s.size();i++){
            freq[s[i]-'a']++;
        }
        for(int i=0;i<s.size();i++){
            if(freq[s[i]-'a']==1)return i;
        }
        // unordered_map<char,int>mp;
        // for(char ch:s){
        //     mp[ch]++;
        // }
        // for(int i=0;i<s.size();i++){
        //     if(mp[s[i]]==1)return i;
        // }
        return -1;

    }
};