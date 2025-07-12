#incldue<bits/stdc++.h>
using namespace std;
class TrieNode{
    public:
        char data;// for string to be stored as char
        TrieNode* children[26]; // number of childre in trie datastructure (its just like treen only).
        bool isTerminal; // will be used into searching space when we have to check for wether char is the end or not.

        TrieNode(har ch){//contstructor 
            data = ch;
            for(int i - 0 ; i < 26; i ++){
                children[i] = NULL; // we want every upcoming char values to be null .
            }
            isTerminal = false;
        }
} ;

class Trie{
    TrieNode* root;

    void insertUtil(TrieNode* root, string word){
        //base case
        if(word.length()==0){
            root->isterminal=true;
        }
        //asumption the word will be in small case
        int index = word[0]-'a';
        TrieNode* child;

        if(root->children[index] !=NULL){
            //present
            child = root->children[index];
        }else{
            child = new TrieNode(word[0]);
            root->children[index]= child;
        }
        //recursion
        insertUtil(child,word.substr(1));

    }

    void insertWord(String word){
        insertUtil(root,word);
    }
}


int main (){

    return 0;
}