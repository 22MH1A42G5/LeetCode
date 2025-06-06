class TrieNode{
    public:
    int string_going;
    int string_ended;
    TrieNode* children[26];
    TrieNode(){
        string_going = 0;
        string_ended = 0;
        for(int i = 0 ; i < 26 ; i++){
            children[i] = NULL;
        }
    }
};
class Trie{
    public:
    TrieNode* root;
    Trie() {
        root = new TrieNode();
    }
    void insert(string s){
        TrieNode* curr = root;
        for(int i = 0 ; i < s.size() ; i++){
            int ind = s[i] - 'a';
            if(curr->children[ind] == NULL){
                curr -> children[ind] = new TrieNode();
            }
            curr = curr->children[ind];
            curr->string_going++;
        }
        curr->string_ended++;
    }
    string search(string s,int strn){
        TrieNode* curr = root;
        string ans = "";
        for(int i = 0 ; i < s.size() ; i++){
            int ind = s[i] - 'a';
            // cout << curr->children[ind]->string_going << " ";
            // if(curr->children[ind] == NULL){
            //     return "";
            // }
            // curr = curr->children[ind];
            if(curr->children[ind] -> string_going == strn){
                ans += s[i];
                // return ans;
                curr = curr->children[ind];
            }
            else{
                return ans;
            }
            // else if(curr->children[ind] >= 2){
            //     return ans;
            // }
        }
        return ans;

    }
};
class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        Trie T;
        for(int i = 0 ; i < str.size() ; i++){
            T.insert(str[i]);
        }
        return T.search(str[0],str.size());
    }
};