// 4 Nov2026
#include <iostream>

using namespace std;

struct node
{
    int data;
    node *left, *right;
};

node* create(int n, int &value)
{
    if (n == 0)
        return NULL;

    node* temp = new node();

    temp->data = value++;

    temp->left = create(n - 1, value);
    temp->right = create(n - 1, value);

    return temp;
}

int countNodes(node* root)
{
    if (root == NULL)
        return 0;

    return 1 + countNodes(root->left)
             + countNodes(root->right);
}

int height(node* root)
{
    if (root == NULL)
        return -1;

    return 1 + max(height(root->left),
                   height(root->right));
}

int main()
{
    int h, value = 1;

    cout << "Enter height: ";
    cin >> h;

    node* root = create(h + 1, value);

    int n = countNodes(root);
    int ht = height(root);

    cout << "\nTotal Nodes = " << n;
    cout << "\nHeight = " << ht;

    if (n == (1 << (ht + 1)) - 1)
        cout << "\nPerfect Binary Tree";
    else
        cout << "\nNot a Perfect Binary Tree";

    return 0;
}
