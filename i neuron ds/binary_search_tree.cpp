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
    void DELETION(int item)
    {
        node *temp = this;
        node *upr;
        while (temp != NULL)
        {
            if (item == temp->data)
            {
                if (temp->left == NULL && temp->right == NULL)
                {
                    cout << "first\n";
                    if (upr->data < temp->data)
                    {
                        upr->right = NULL;
                        delete temp;
                    }
                    else
                    {
                        upr->left = NULL;
                        delete temp;
                    }
                    break;
                }
                else if (temp->left == NULL)
                {
                    cout << "hi";
                    node *ptr = temp;
                    if (upr->data < temp->data)
                    {
                        upr->right = temp->right;
                        delete ptr;
                    }
                    else
                    {
                        upr->left = temp->right;
                        delete ptr;
                    }
                    break;
                }
                else if (temp->right == NULL)
                {
                    cout << "hello";
                    node *ptr = temp;
                    if (upr->data < temp->data)
                    {
                        upr->right = temp->left;
                        delete ptr;
                    }
                    else
                    {
                        upr->left = temp->left;
                        delete ptr;
                    }
                    break;
                }
                else
                {
                    node *par, *ptr, *parptr, *one;
                    ptr = temp;
                    par = temp->right;
                    if (par->left != NULL)
                    {
                        while (par->left != NULL)
                        {
                            parptr = par;
                            par = par->left;
                        }
                        parptr->left = par->right;
                    }
                    one = par;
                    delete par;
                    if (upr->data < temp->data)
                    {
                        upr->right = one;
                        one->left = temp->left;
                        one->right = temp->right;
                        delete temp;
                    }
                    else
                    {
                        upr->left = one;
                        one->left = temp->left;
                        one->right = temp->right;
                        delete temp;
                    }
                    break;
                }
            }
            else if (item > temp->data)
            {
                upr = temp;
                temp = temp->right;
            }
            else
            {
                upr = temp;
                temp = temp->left;
            }
        }
        if (temp == NULL)
        {
            cout << " element not exist";
            return;
        }
    }

    node *search(int item)
    {
        if (this != NULL)
        {
            if (item == this->data)
            {
                return this;
            }
            else if (item > this->data)
            {
                this->right->search(item);
            }
            else
            {
                this->left->search(item);
            }
        }
        else
        {
            return NULL;
        }
    }
    node *minimum()
    {
        node *temp = this;
        while (temp->left != NULL)
        {
            temp = temp->left;
        }
        return temp;
    }
    node *maximum()
    {
        node *temp = this;
        if (temp == NULL)
        {
            return NULL;
        }
        else
        {
            while (temp->right != NULL)
            {
                temp = temp->right;
            }
            return temp;
        }
    }
    void insert(int value)
    {
        node *temp = this;
        node *prev;
        node *neew = new node(value);
        while (temp != NULL)
        {
            if (temp->data == value)
            {
                cout << "already exits";
                return;
            }
            else if (temp->data > value)
            {
                prev = temp;
                temp = temp->left;
            }
            else
            {
                prev = temp;
                temp = temp->right;
            }
        }
        if (temp == NULL)
        {
            temp = neew;
            if (prev->data > value)
            {
                prev->left = temp;
            }
            else
            {
                prev->right = temp;
            }
        }
    }
};
int main()
{
    node *root= new node(15);
    root->insert(10);
    root->insert(20);
    root->insert(12);
    root->insert(17);
    root->insert(25);
    root->insert(22);
    root->insert(28);
    root->insert(21);
    root->insert(24);
    root->insert(23);
    cout << "\n\n PREORDER  ->  ";
    root->preorder();
    cout << "\n\n INORDER   ->  ";
    root->inorder();
    cout << "\n\n POSTORDER ->  ";
    root->postorder();
    cout << "\n\nLEVELORDER ->  ";
    root->levelorder();
    int item;
    cout << "\nenter a number to search : ";
    cin >> item;
    node *ans = root->search(item);
    if (ans != NULL)
    {
        cout << ans->data << " is found";
    }
    else
    {
        cout << item << " not found";
    }
    node *min = root->minimum();
    cout << "\nminimum element : " << min->data;
    cout << "\nmaximum element : " << root->maximum()->data;
    root->insert(18);
    root->DELETION(22);
    cout << "\n\n INORDER   ->  ";
    root->inorder();

    return 0;
}