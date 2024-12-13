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

node *buildTree(node *root)
{
    int data;
    cout << "Enter the data :";
    cin >> data;
    root = new node(data); // creating objet using data

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the left element for :" << data << endl;
    root->left = buildTree(root->left); // return left branch address

    cout << "Enter the right element for :" << data << endl;
    root->right = buildTree(root->right); // return right branch address
    return root;
};

void levelOrderTrivarsel(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop(); // remove element from queue to move forward

        if (temp == NULL) // break the line when any segment ends
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL); // queue still have some elements
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
};

void inOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int main()
{

    node *tree1 = NULL;       // keep the address blank
    tree1 = buildTree(tree1); // get the root address
    levelOrderTrivarsel(tree1);

    cout << "In order tree traverse" << endl;
    inOrder(tree1);
    cout << endl;

    return 0;
}
