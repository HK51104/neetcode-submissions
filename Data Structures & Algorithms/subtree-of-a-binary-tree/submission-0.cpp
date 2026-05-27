class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!subRoot)
        {
            return true;
        }
        if(!root)
        {
            return false;
        }
        if(isSametree(root,subRoot))
        {
            return true;
        }
        else
        {
        return isSubtree(root->left,subRoot) ||
               isSubtree(root->right,subRoot);

        }
    }
    bool isSametree(TreeNode* root,TreeNode* subroot)
    {
        if(!root && !subroot)
        {
            return true;
        }
        if(root && subroot && root->val == subroot->val)
        {
            return isSametree(root->left,subroot->left) &&
                   isSametree(root->right,subroot->right);
        }
        return false;
    }
};