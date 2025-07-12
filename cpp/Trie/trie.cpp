#include<bits/stdc++.h>
using namespace std;

class TrieNode {
public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch) {
        data = ch;
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie {
public:
    TrieNode* root;

    Trie() {
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode* node, string word) {
        if (word.length() == 0) {
            node->isTerminal = true;
            return;
        }

        int index = word[0] - 'a';
        TrieNode* child;

        if (node->children[index] != NULL) {
            child = node->children[index];
        } else {
            child = new TrieNode(word[0]);
            node->children[index] = child;
        }

        insertUtil(child, word.substr(1));
    }

    void insertWord(string word) {
        insertUtil(root, word);
    }
};

int main() {
    Trie* t = new Trie();
    t->insertWord("abcd");
    t->insertWord("abduct");

    cout << "Word inserted successfully!" << endl;
    return 0;
}
