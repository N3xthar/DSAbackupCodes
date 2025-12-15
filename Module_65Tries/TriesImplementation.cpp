#include <bits/stdc++.h>
using namespace std;

class Trie
{
private:
    struct Node
    {
        char data;                            // for storing the node
        unordered_map<char, Node *> children; // for storing the letter and the address of the next node '
        bool isTerminal;
        // making the constructor for that
        Node(char ch)
        {
            data = ch;
            isTerminal = false;
        }
    };
    Node *root;

    // constructor of tries
public:
    Trie()
    {
        root = new Node('\0'); // root has no character dude
    }

    // method for inserting the character  !!
    void insert(string word)
    {
        Node *curr = root;

        // iterate to each character
        for (auto ch : word)
        {

            // if character ka child exist nahi hai than make it
            if (curr->children.count(ch) == 0)
            {
                // make it
                curr->children[ch] = new Node(ch);
            }
            // move to next element
            curr = curr->children[ch];
        }
        // word ends
        curr->isTerminal = true;
    }

    // function for searching the
    bool search(string word)
    {
        Node *curr = root;

        // for each loop for iterating
        for (char ch : word)
        {
            if (curr->children.count(ch) == 0)
            {
                return false;
            }

            curr = curr->children[ch];
        }
        return curr->isTerminal;
    }
    // function for the string check
    bool startWith(string prefix)
    {
        Node *curr = root;

        // loop to iterate dude
        for (char ch : prefix)
        {
            if (curr->children.count(ch) == 0)
            {
                return false;
            }
            curr = curr->children[ch];
        }
        return true;
    }
};

int main()
{
    Trie trie;
    trie.insert("cat");
    trie.insert("Dog");
    trie.insert("elephant");
    cout << trie.search("cat") << endl;    // 1
    cout << trie.search("ca") << endl;     // 0
    cout << trie.startWith("ca") << endl; // 1
}