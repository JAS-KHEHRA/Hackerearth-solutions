#include<bits/stdc++.h>
using namespace std;
struct  node
{
	int data;
	node * left, *right;
	
};

void inorder(struct node* root)
{
	if(root!=NULL)
	{
		inorder(root->left);
	    cout<<root->data<<"\t";
	    inorder(root->right);
    }
}

struct node *newnode(int item)
{
	struct node *temp= new node;
	temp->data=item;
	temp->left=temp->right=NULL;
    return temp;
}

void insert(struct node* temp,int key)
{
	queue<struct node*> q;
	q.push(temp);
	while(!q.empty())
	{struct node* temp=q.front();
	q.pop();
		if(!temp->left)
		{
			temp->left=newnode(key);
	    break;
	    }
	    q.push(temp->left);

		if(!temp->right)
		{
			temp->right=newnode(key);
	    break;
	    }
	    q.push(temp->right);

   }
}   

int main()
{
	struct node* root=newnode(10);
	root->left=newnode(11);
	root->left->left=newnode(12);
	root->left->right=newnode(16);
	root->right=newnode(13);
	root->right->right=newnode(14);
   root->right->left=newnode(18);

   inorder(root);

    insert(root,1);
    cout<<"\n\n";
 inorder(root);
 return 0;    


}