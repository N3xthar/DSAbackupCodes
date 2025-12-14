#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x)
    {
        val = x;
        left = NULL;
        right = NULL;
    }
};

vector<int> topView(TreeNode *root)
{
    vector<int> res;
    if (root == NULL)
        return res;

    map<int, int> hdNode;           // HD -> node value
    queue<pair<TreeNode *, int>> q; // node + HD

    q.push({root, 0});

    while (!q.empty())
    {
        auto p = q.front();
        q.pop();

        TreeNode *node = p.first;
        int hd = p.second;

        // store first node of each horizontal distance
        if (hdNode.find(hd) == hdNode.end())
        {
            hdNode[hd] = node->val;
        }

        if (node->left != NULL)
            q.push({node->left, hd - 1});

        if (node->right != NULL)
            q.push({node->right, hd + 1});
    }

    // store answer from leftmost HD to rightmost HD
    for (auto it : hdNode)
    {
        res.push_back(it.second);
    }

    return res;
}

// ---------- DRIVER CODE ----------
int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    root->right->left->left = new TreeNode(8);

    vector<int> ans = topView(root);

    cout << "Top View: ";
    for (int x : ans)
        cout << x << " ";
    cout << endl;

    return 0;
}
