class TrieNode {
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
class Trie {
public:
    TrieNode* root;
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* curr = root;
        for(int i = 0 ; i < word.size() ; i++){
            int ind = word[i] - 'a';
            if(curr->children[ind] == NULL){
                curr->children[ind] = new TrieNode();
            }
            curr = curr->children[ind];
            curr->string_going++;
        }
        curr->string_ended++;
    }
    
    bool search(string word) {
        TrieNode* curr = root;
        for(int i = 0 ;i < word.size() ; i++){
            int ind = word[i] - 'a';
            if(curr->children[ind] == NULL){
                return false;
            }
            curr = curr->children[ind];
        }
        if(curr->string_ended > 0){
            return true;
        }
        return false;
    }
    
    bool startsWith(string prefix) {
        TrieNode* curr = root;
        for(int i = 0 ;i < prefix.size() ; i++){
            int ind = prefix[i] - 'a';
            if(curr->children[ind] == NULL){
                return false;
            }
            curr = curr->children[ind];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */