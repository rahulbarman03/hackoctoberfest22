// Given the root of a binary tree and two integers val and depth, add a row of nodes with value val at the given depth depth.

// Note that the root node is at depth 1.

// The adding rule is:

// Given the integer depth, for each not null tree node cur at the depth depth - 1, create two tree nodes with value val as cur's left subtree root and right subtree root.
// cur's original left subtree should be the left subtree of the new left subtree root.
// cur's original right subtree should be the right subtree of the new right subtree root.
// If depth == 1 that means there is no depth depth - 1 at all, then create a tree node with value val as the new root of the whole original tree, and the original tree is the new root's left subtree.
 


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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        
        if(root==NULL)
            return NULL;
        
        if(depth==1)
        {
            TreeNode* newNode=new TreeNode(val);
            newNode->left=root;
            return newNode;
        }
       
        queue<TreeNode*>q;
        q.push(root);
        
        int height=0;
        
        while(!q.empty())
        {
            height++;
           
            if(height==depth-1)
                break;
            
            int n=q.size();
            while(n--)
            {
                 TreeNode* node= q.front();
                 q.pop();
                    if(node->left)
                    q.push(node->left);

                    if(node->right)
                    q.push(node->right);
            }
        }
        int n=q.size();
        while(n--)
        {
            TreeNode* node= q.front();
                 q.pop();
                TreeNode* newNode = new TreeNode(val);
                newNode -> left = node -> left;
                node -> left = newNode;
     
                
                TreeNode* newNode2 = new TreeNode(val);
                newNode2 -> right = node -> right;
                node -> right = newNode2;

        }
        return root;
    }
};
