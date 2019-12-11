int heap(Node *root,int data);
bool isHeap(Node * tree)
{
    return heap(tree,tree->data);
}
int heap(Node *root,int data)
{
    if(root==NULL)
    return 1;
    int p;
    p=heap(root->left,root->data);
    if(p==0)
    return 0;
    p=heap(root->right,root->data);
    if(p==0)
    return 0;
    if(root->data>data)
    {
        return 0;
    }
    return 1;
}
