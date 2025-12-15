#include <bits/stdc++.h>
using namespace std;

/*
    Node represents one character of the Trie
*/
class Node
{
public:
    char data;   // character stored at this node
    bool terminal;   // true if a word ends here

    // map of children nodes (next characters)
    unordered_map<char, Node*> children;

    // how many words pass through this node (prefix count)
    int countWordsStarting;

    // how many words end exactly at this node
    int countWordsEndingHere;

    // constructor
    Node(char data)
    {
        this->data = data;
        terminal = false;
        countWordsStarting = 0;
        countWordsEndingHere = 0;
    }
};

/*
    Trie class
*/
class Trie
{
public:
    Node* root;

    // constructor of Trie
    Trie()
    {
        // root does not store any real character
        root = new Node('\0');
    }

    /*
        Insert a word into the Trie
    */
    void insert(string word)
    {
        Node* current = root;

        // traverse each character of the word
        for (char ch : word)
        {
            // if character is not present, create a new node
            if (current->children.count(ch) == 0)
            {
                current->children[ch] = new Node(ch);
            }

            // move to the child node
            current = current->children[ch];

            // one more word is passing through this node
            current->countWordsStarting++;
        }

        // word ends here
        current->countWordsEndingHere++;
        current->terminal = true;
    }

    /*
        Count how many times a word was inserted exactly
    */
    int countWordsEndingTo(string word)
    {
        Node* current = root;

        for (char ch : word)
        {
            // if path breaks, word does not exist
            if (current->children.count(ch) == 0)
                return 0;

            current = current->children[ch];
        }

        // return how many words end here
        return current->countWordsEndingHere;
    }

    /*
        Count how many words start with given prefix
    */
    int countWordsStartingWith(string prefix)
    {
        Node* current = root;

        for (char ch : prefix)
        {
            // if prefix path breaks
            if (current->children.count(ch) == 0)
                return 0;

            current = current->children[ch];
        }

        // number of words having this prefix
        return current->countWordsStarting;
    }

    /*
        Erase one occurrence of a word from the Trie
        (reverse of insert)
    */
    void erase(string word)
    {
        Node* current = root;

        for (char ch : word)
        {
            // if word does not exist, do nothing
            if (current->children.count(ch) == 0)
                return;

            // move to child
            current = current->children[ch];

            // one word removed from this prefix
            current->countWordsStarting--;
        }

        // remove one ending occurrence
        current->countWordsEndingHere--;
    }
};

int main()
{
    Trie trie;

    trie.insert("app");
    trie.insert("app");
    trie.insert("apple");

    cout << trie.countWordsEndingTo("app") << endl;       // 2
    cout << trie.countWordsStartingWith("app") << endl;  // 3

    trie.erase("app");

    cout << trie.countWordsEndingTo("app") << endl;       // 1
}
