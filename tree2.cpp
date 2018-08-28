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

void delete_deep(node *root , node*k_node)
{
	queue<node*>q;
	q.push(root);
	
	while(!q.empty())
	{
		node*temp = q.front();
		q.pop();
		
		if(temp->right)
		{
			if(temp->right == k_node)
			{
				temp->right = NULL;
				delete(k_node);
				return;
			}
			else
				q.push(temp->right);
		}
	
		
		if(temp->left)
		{
			if(temp->left == k_node)
			{
				temp->left = NULL;
				delete(k_node);
				return;
			}
			else
		        q.push(temp->left);
		}
	
	}
}

void deletion(node*root ,int key)
{
	queue<node*>q;
	q.push(root);
	node*k_node = NULL;
	node*temp;
	while(!q.empty())
	{
		temp = q.front();
		q.pop();
		
		if(temp->data == key)
		{
			k_node = temp;
		}
		if(temp->left)
			q.push(temp->left);
		if(temp->right)
			q.push(temp->right);
	}
	
	int x = temp->data;
	delete_deep(root,k_node);
	k_node->data = x;
}


int main()
{
	int n,m,d;
	char ch='y';
	char vh = 'y';
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
	
	while (vh == 'y' || vh == 'Y')
	{
		cout<<"\nEnter the key you want to delete:";
		cin>>d;
		
		deletion(root , d);
		cout<<"\nWant to delete more:";
		cin>>vh;
	}
	
	cout<<"\nNow the list is:";
	inorder(root);
	
	return 0;
}
