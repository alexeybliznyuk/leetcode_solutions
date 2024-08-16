class Trie {
public:
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* currNode = root;
        //cout << currNode->isTheEndOfWord;
        //std::cout << this->root->isTheEndOfWord;
        for (char c : word) {
            if (currNode->children.find(c) != currNode->children.end()) {
                currNode = currNode->children[c];
            }
            else {
                currNode->children[c] = new TrieNode();
                currNode = currNode->children[c];
            }
        }
        currNode->isTheEndOfWord = true;
    }
    
    bool search(string word) {
        TrieNode* currNode = root;
        for (int i = 0; i != word.size(); i++) {
            // if (i = word.size - 1 && currNode->children.contains(word[i])) {
            if (currNode->children.contains(word[i])) {
                currNode = currNode->children[word[i]];
                if (i == word.size() - 1 && currNode->isTheEndOfWord == true) {
                    return true;
                }
            }
            else {
                return false;
            }
        }
        return false;
    }
    
    bool startsWith(string prefix) {
        TrieNode* currNode = root;
        for (int i = 0; i != prefix.size(); i++) {
            if (currNode->children.contains(prefix[i])) {
                currNode = currNode->children[prefix[i]];
            }
            else {
                return false;
            }
            
        }
        return true;
    }

    //TrieNode* root;

private:
    class TrieNode {
    public:
        unordered_map<char, TrieNode*> children;
        bool isTheEndOfWord;

        TrieNode() : isTheEndOfWord(false), children() {}
    };

    TrieNode* root;
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
