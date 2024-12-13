#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

node *createNewBinaryTree(node *root)
{
    int data;
    cout << "Enter data: ";
    cin >> data;
    root = new node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for left " << data << " ";
    root->left = createNewBinaryTree(root->left);

    cout << "Enter data for right " << data << " ";
    root->right = createNewBinaryTree(root->right);

    return root;
}

void levelOrderTrivarsel(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";

            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

int main()
{
    node *root = NULL;
    root = createNewBinaryTree(root);
    levelOrderTrivarsel(root);

    return 0;
}
