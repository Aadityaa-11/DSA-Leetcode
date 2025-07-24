/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    void solve(TreeNode* root, int targetSum , int sum ,vector<vector<int>>&ans , vector<int> ans1){
        if(root == NULL){
            return;
        }
        sum += root->val;
        ans1.push_back(root->val);

        if(root->left == NULL &&  root->right == NULL){
            // it means we are standing on a left node
            if(sum == targetSum){
                ans.push_back(ans1);
            }
            else{ 
                return;
            }
        }
        
        // recursive call
        solve(root->left , targetSum , sum ,ans , ans1);
        solve(root->right , targetSum , sum , ans , ans1);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {

        vector<vector<int>> ans;
        vector<int> ans1;
        int sum = 0;
        solve(root , targetSum , sum ,ans ,  ans1);
        return ans;
        
    }
};
