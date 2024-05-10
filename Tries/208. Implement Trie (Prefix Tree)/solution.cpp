struct TrieNode {
    TrieNode* arr[26];
    bool flag; 
};


class Trie {

private:
    TrieNode* root;

public:
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* cur = root;

        for (int i=0;i<word.size();i++) {
            if (!cur->arr[word[i]-'a'])
                cur->arr[word[i]-'a'] = new TrieNode();
            cur = cur->arr[word[i]-'a'];
        }
        cur->flag = true;
    }
    
    bool search(string word) {
        TrieNode* cur = root;

        for (int i=0;i<word.size();i++) {
            if (!cur->arr[word[i]-'a']) return false;
            cur = cur->arr[word[i]-'a'];
        }
        return cur->flag;
    }
    
    bool startsWith(string prefix) {
        TrieNode* cur = root;

        for (int i=0;i<prefix.size();i++) {
            if (!cur->arr[prefix[i]-'a']) return false;
            cur = cur->arr[prefix[i]-'a'];
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
