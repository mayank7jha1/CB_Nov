// *
// * Definition for a binary tree node.
// * struct TreeNode {
//     *     int val;
//     *     TreeNode *left;
//     *     TreeNode *right;
//     *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//         *
//     };

class Solution {
    unordered_map<TreeNode*, TreeNode*>connection;

    unordered_set<TreeNode*>visited;



    void Parent(TreeNode* root, TreeNode par) {
        if (root == NULL) {
            return;
        }

        connection[root] = par;

        Parent(root->left, root);
        Parent(root->right, root);
    }

    void DFS(TreeNode* target, int k, vector<int>&ans) {
        if (target == NULL or visited.count(target) == 1) {
            return;
        }

        visited.insert(target);

        if (k == 0) {
            ans.push_back(target->val);
        }

        DFS(target->left, k - 1, ans);
        DFS(target->right, k - 1, ans);
        DFS(connection[target], k - 1, ans);
    }

public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int>ans;
        if (root == NULL) {
            return ans;
        }

        Parent(root, NULL);

        //ELement ko pehle search karlo and then dfs laago
        DFS(target, k, ans);
        return ans;
    }
};


//Idea Samaj Araha hain?


