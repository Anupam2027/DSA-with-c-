#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};

void level_order(Node *root)
{
    cout << "\nLevelorder:" << " ";
    queue<Node *> qu;
    qu.push(root);
    while (!qu.empty())
    {
        Node *temp = qu.front();
        cout << temp->data << " ";
        qu.pop();
        if (temp->left)
            qu.push(temp->left);
        if (temp->right)
            qu.push(temp->right);
    }
    return;
}

int main()
{
    int x, first, second;
    queue<Node *> q;
    cout << "Enter the root element:";
    cin >> x;
    Node *root = new Node(x);
    q.push(root);
    // build the binary tree
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout << "Enter left element of " << temp->data << ":";
        cin >> first; // left child
        if (first != -1)
        {
            temp->left = new Node(first);
            q.push(temp->left);
        }
        cout << "Enter right element of " << temp->data << ":";
        cin >> second; // right child
        if (second != -1)
        {
            temp->right = new Node(second);
            q.push(temp->right);
        }
    }
    level_order(root);

    return 0;
}