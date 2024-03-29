class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root)
         return false;
        targetSum -= root ->val;
        if(targetSum == 0 && !root->left && !root->right)
          return true;
        
        bool leftPath = hasPathSum(root->left, targetSum);
        bool rightPath = hasPathSum(root->right, targetSum);


        targetSum += root->val;
        return leftPath ||rightPath;
    }
};
