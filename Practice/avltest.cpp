#include <bits/stdc++.h>
using namespace std;

class avl
{
	public:
	avl *left;
	avl *right;
	int data;
	int height;

	avl()
	{
		height = 0;
	}
	static void findheight(avl *root);
	static void construct(int value);	
	static void singlerotateleft();
	static void inorder(avl *root);
} *root;


void avl::inorder(avl *root)
{
	if (root)
	{
		avl::inorder(root->left);
		cout << root->data << "\n";
		avl::inorder(root->right);
	}
}

void avl::construct(int value)
{
	avl *tempr, *newnode = new avl;
	newnode->data = value;
	newnode->height = 0;
	if (!root)
	{
		root = newnode; 
	}
	else
	{
		tempr = root;
		while(1) {
		    if (value < tempr->data)
		    {
		    	if (!(tempr->left))
		    	{
		    		if !(tempr->right)
		    		{
		    			updateheight(tempr->right);
		    		}
		    		tempr->left = newnode;
		    		break;
		    	} 
		    	else
		    	{
		    	 	tempr = tempr->left;	
		    	}
		    }
		    else if (value > tempr->data)
		    {
		    	if (!(tempr->right))
		    	{
		    	 	tempr->right = newnode;
		    	 	break;
		    	} 
		    	else
		    	{
		    	 	tempr = tempr->right;
		    	}
		    }
		    else
		    {
		    	cout << "Already present\n";
		    	break;
		    }
		}
	}
}
int maxheight = 0;
void avl::findheight(avl *root)
{

	cout << root->data << " : root\n";
		if (root->left)
		{
			root->left->height = root->height + 1;
			findheight(root->left);
		}
		else
		{
			if (maxheight < root->height)
			{
				maxheight = root->height;
			}
			
		}
		if (root->right)
		{
			root->right->height = root->height + 1;
			findheight(root->right);
		}
		else
		{
			if (maxheight < root->height)
			{
				maxheight = root->height;
			}
		}
}

int avl::cwh(avl *root)
{
	if (root)
	{
		if (value < root)
		{
			int x;
			x = cwh(root->left);
			if (x == -1)
			{
				if (root->right)
				{
					return 1;
				}
				else
					return 0;
			}
			else if (x == 1)
			{
				(root->height)++;
				return 1;
			}
			else
				return 0;
		}
		else 
		{
			int x;
			x = cwh(root->right);
			if (x == -1)
			{
				(root->height)++;
				if (!(root->left))
				{
					return 1;
				}
				else
					return 0;
			}
			else if (x == 1)
			{
				(root->height)++;
				return 1;
			}
			else
				return 0;
		}
	}
	else
	{
		avl *newnode = new avl;
		newnode->data = value;
		root = newnode;
		return -1;
	}
}

int main()
{	
	int num,c;
	while(1) {
	    cout << "1.Construct\n2.Height\n3.Inorder\n";
	    cin >> c;
	    switch(c)
	    {
	    	case 1:
	    		cin>>num;
	    		avl::construct(num);
	    		break;
	    	case 2:
	    		// cout << root->data << "\n";
	    		avl::findheight(root);
	    		cout << "maxheight: "<< maxheight <<"\n";
	    		break;
	    	case 3:
	    		avl::inorder(root);
	    		break;
	    	default:
	    		cout << "default\n";
	    		break;
	    }
	}
	return 0;
}
