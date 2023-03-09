#include<bits/stdc++.h>
using namespace std;
const int N = 0;


// *
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };


/*
class TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode() {
        val = 0;
        left = NULL;
        right = NULL;
    }

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }

    TreeNode(int x, TreeNode* left_ka_pointer, TreeNode* right_ka_pointer) {
        val = x;
        left = left_ka_pointer;
        right = right_ka_pointer;
    }
};
*/

class Solution {

    //ek path me kuch nodes hain and aise aapke pass kuch path hai.
    //2-d array hona chaahiye.
    vector<int>path;//Ye vector ek single path store karta hain
    vector<vector<int>>ans;//Ye vector saare path store karta hain and hum issi ko return karenge

    void FindPath(TreeNode* root, int sum) {
        if (root == NULL) {
            return;
        }

        path.push_back(root->val);//abhi maine current path me current code maan liya hain.

        if (root->val == sum and !root->left and !root->right) {
            //ek path aapko mil gaya hain
            ans.push_back(path);

        } else {
            //Abhi aapko path nahi mila hain toh aage search karte raho

            FindPath(root->left, sum - root->val);
            FindPath(root->right, sum - root->val);

        }
        //Aapne ya to ek path dhund liya hain ya fir aapko path nahi mila in both
        //of the scenarios aapko ye current path ki need nahi hain so aap
        //path vector me se ye node ko nikla do.

        path.pop_back();
    }

public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        FindPath(root, targetSum);
        return ans;
    }
};

// path: 5 4 11 2:

// ans vector me isko daal do:

//     path vector ko bolo ki last nikal: 5 4 11 and dusra path dundo