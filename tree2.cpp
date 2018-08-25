#include<iostream>
#include<queue>
using namespace std;

struct node{
	int data;
	node *left;
	node *right;
};


node *create(int n)
{
	 node* ptr = new node;
	 ptr->data = n;
	 ptr->left=ptr->right=NULL;
	 
	 return ptr;
}

void inorder( node *temp)
{
	if(!temp)
	return;
	
	inorder(temp->left);
	cout<<temp->data<<" ";
	inorder(temp->right);
}


void insert(node *temp ,int key)
{
	queue<node*>q;
	q.push(temp);
	
	while(!q.empty())
	{
		 node*temp = q.front();
		q.pop();
		if(!temp->left)
		{
			temp->left = create(key);
			break;
	    }
		else
		q.push(temp->left);
		
		if(!temp->right)
		{
			temp->right = create(key);
			break;
		}
		else
		q.push(temp->right);
	}
}


int main()
{
	int n,m;
	char ch='y';
	cout<<"\n inserting 1st node:\n";
	cin>>n;
	node *root = create(n);
	//cout<<"\ninorder traversal:\n";
	//inorder(root);
	
	while(ch == 'y' || ch=='Y')
	{
		
	    cout<<"\n inserting new node,insert key:\n";
	    cin>>m;
	    insert(root , m);
	    
	    cout<<"\nWant to continue:\n";
	    cin>>ch;
	}
	
	
	cout<<"\ninorder traversal:\n";
	inorder(root);
	
	return 0;
}
