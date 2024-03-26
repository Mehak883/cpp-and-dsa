#include <bits/stdc++.h>
using namespace std;
class node
{
public:

  int data;
  node *left;
  node *right;
  node(int v)
  {
    data = v;
    left = NULL;
    right = NULL;
  }
  void postorder()
  {
    if (this != NULL)
    {
      left->postorder();
      right->postorder();
      cout << this->data << " ";
    }
  }
  void preorder()
  {
    if (this != NULL)
    {
      cout << this->data << " ";
      left->preorder();
      right->preorder();
    }
  }
  void inorder()
  {
    if (this != NULL)
    {
      left->inorder();
      cout << this->data << " ";
      right->inorder();
    }
  }
  void levelorder()
  {
    if (this != NULL)
    {
      queue<node *> q;
      q.push(this);
      while (!q.empty())
      {
        node *temp = q.front();
        cout << temp->data << " ";
        q.pop();
        if (temp->left != NULL)
        {
          q.push(temp->left);
        }
        if (temp->right != NULL)
        {
          q.push(temp->right);
        }
      }
    }
  }
  int height()
  {
    if (this == NULL)
    {
      return 0;
    }
    else
    {
      int lheight = this->left->height();
      int rheight = this->right->height();
      if (lheight > rheight)
      {
        return lheight + 1;
      }
      else
      {
        return rheight + 1;
      }
    }
  }
  void levelorder_rec()
  {
    int h = this->height();
    for (int i = 0; i < h; i++)
    {
      currentlevel(i);
    }
  }
  void currentlevel(int h)
  {
    if (this == NULL)
    {
      return;
    }
    else
    {
      if (h == 0)
      {
        cout << this->data << " ";
      }
      else if (h > 0)
      {
        this->left->currentlevel(h - 1);
        this->right->currentlevel(h - 1);
      }
    }
  }
};
int main()
{
  node *root = new node(2);
  root->left = new node(4);
  root->right = new node(5);
  root->right->left = new node(6);
  root->right->right = new node(7);
  root->right->right->left = new node(8);
  root->right->right->right = new node(9);
  root->right->right->left->left = new node(10);
  root->right->right->left->right = new node(11);
  root->right->right->left->right->left = new node(12);
  cout << "\n\n PREORDER  ->  ";
  root->preorder();
  cout << "\n\n INORDER   ->  ";
  root->inorder();
  cout << "\n\n POSTORDER ->  ";
  root->postorder();
  cout << "\n\nLEVELORDER ->  ";
  root->levelorder();
  return 0;
}