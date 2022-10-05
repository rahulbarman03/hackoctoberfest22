#include <bits/stdc++.h>
using namespace std;
//KHUSHBOO NIJHAWAN
class BSTreeNode {
public:
    int val;
    BSTreeNode* left;
    BSTreeNode* right;
    BSTreeNode(int data)
    {
        val = data;
        left = NULL;
        right = NULL;
    }
};
void kthLargest_k(BSTreeNode* root, int K, int& count, int& ans)
{
    if (!root)
        return;
    kthLargest_k(root->right, K, count, ans);
    count++;
    if (count == K) { 
        ans = root->val;
        return;
    }

    kthLargest_k(root->left, K, count, ans);
}
int kthLargest(BSTreeNode* root, int K)
{
    
    int ans = INT_MAX;
    int count = 0;
    kthLargest_k(root, K, count, ans);

    return ans;
}

int main()
{
    BSTreeNode* root = new BSTreeNode(25);
    root->left = new BSTreeNode(17);
    root->left->right = new BSTreeNode(99);
    root->left->right->left = new BSTreeNode(10);
    root->right = new BSTreeNode(59);
    root->right->left = new BSTreeNode(18);
    int k = 1;
    cout << "1st maximum is: " << kthLargest(root, k) << endl;
    k = 5;
    cout << "5th maximum is: " << kthLargest(root, k) << endl;
    cout<< "by Khushboo Nijhawan\n" ;
    cout << "20BML0035";
    return 0;
}
