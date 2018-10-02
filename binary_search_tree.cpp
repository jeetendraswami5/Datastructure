#include<iostream>
using namespace std;
struct node{
	int data;
	node *left;
	node *right;
};

node *create(int n)
{
	node *np = new node;
	np->data = n;
	np->left = np->right = NULL;
	return np; 
}

node *insert(node *root , int key)
{
	node *temp = root;

	
		if(temp == NULL)
		root = create(key);
		else
		if(key < temp->data)
		{
			temp->left = insert(temp->left,key);
		}
		else
		temp->right = insert(temp->right,key);
	
}

void inorder(node *np)
{
	if(!np)
	return;
	
	inorder(np->left);
	cout<<np->data<<" ";
	inorder(np->right);
}

int main()
{
	int n,m;
	char ch = 'y';
	
	cout<<"element for root:";
	cin>>m;
	node *root = create(m);
	
	while(ch == 'y')
	{
		cout<<"\nenter element to insert: ";
		cin>>n;
		insert(root , n);
		inorder(root);
		
		cout<<"\nmore:";
		cin>>ch;
	}
	
	return 0;
}
