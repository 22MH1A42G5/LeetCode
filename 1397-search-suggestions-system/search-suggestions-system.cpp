class TrieNode {
    public:
    int string_going;
    int string_ended;
    TrieNode* children[26];
    vector<int>vec;
    TrieNode(){
        string_going = 0;
        string_ended = 0;
        for(int i = 0 ; i < 26 ; i++){
            children[i] = NULL;
        }
    }
};
class Trie {
    public:
    TrieNode* root;
    Trie(){
        root = new TrieNode();
    }
    void insert(string s , int sind){
        TrieNode* curr = root;
        for(int i = 0 ; i < s.size() ;i++){
            int ind = s[i] - 'a';
            if(curr->children[ind] == NULL){
                curr->children[ind] = new TrieNode();
            }
            curr->children[ind]->vec.push_back(sind);
            curr = curr->children[ind];
            curr->string_going++;
        }
        curr->string_ended++;
    }
    vector<vector<string>> search(string s,vector<string>&prod){
        TrieNode* curr = root;
        vector<vector<string>>finans;
        int n;
        for(int i = 0 ; i < s.size() ; i++){
            vector<string>ans;
            int ind = s[i] - 'a';
            if(curr ->children[ind] == NULL){
                while(i < s.size()) {
                    finans.push_back({});
                    i++;
                }
                break;
            }
            n = 3;
            if(curr->children[ind]->vec.size() < 3)
                n = curr->children[ind]->vec.size();
            for(int j = 0 ; j < n ; j++){
                ans.push_back(prod[curr->children[ind]->vec[j]]);
            }
            // cout << curr->children[ind]->vec.size()<< " ";
            curr = curr->children[ind];
            finans.push_back(ans);
        }
        return finans;
    }
};
class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& prod, string sw) {
        sort(prod.begin() , prod.end());
        Trie T;
        for(int i = 0 ; i < prod.size() ; i++){
            T.insert(prod[i], i);
        }
        return T.search(sw , prod);
        // return {{}};
    }
};