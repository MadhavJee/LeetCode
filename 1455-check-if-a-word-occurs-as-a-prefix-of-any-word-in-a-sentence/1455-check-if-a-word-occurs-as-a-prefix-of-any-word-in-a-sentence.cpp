class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int i=1;
        stringstream ss(sentence);
        string word;
        while(ss>>word){
            if(word.find(searchWord)==0)return i;
            i++;
        }
        return -1;
    }
};