#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;

struct BstNode
{
	int data;
	BstNode* left;
	BstNode* right;

};
BstNode* root;

BstNode* GetNewNode(int data)
{
	BstNode* NewNode = new BstNode();
	NewNode->data = data;
	NewNode->left = NULL;
	NewNode->right = NULL;
	return NewNode;
}

void PreOrder(BstNode* root)
{
	if (root == NULL)
	{
		return;
	}
	cout << root->data << " ";
	PreOrder(root->left);
	PreOrder(root->right);
}
void PostOrder(BstNode* root)
{

	if (root == NULL)
	{
		return;
	}
	PostOrder(root->left);
	PostOrder(root->right);

	cout << root->data << " ";
}
void InOrder(BstNode* root)
{


if (root == NULL)
	{
		return;
	}
	InOrder(root->left);
	cout << root->data << " ";

	InOrder(root->right);

}


BstNode* Insert(BstNode* root, int data)
{
	if (root == NULL)
	{
		root = GetNewNode(data);
	}
	else if (data <= root->data)
	{
		root->left = Insert(root->left, data);
	}
	else
	{
		root->right = Insert(root->right, data);
	}
	return root;
}

BstNode* minValue(BstNode* node){
   BstNode* current = node;
   while (current && current->left != NULL)
      current = current->left;
   return current;
}

bool Search(BstNode* root, int data)
{
	if (root == NULL)
	{
		return false;
	}
	else if (root->data == data)
	{
		return true;
	}
	else if (data <= root->data)
	{
		return Search(root->left, data);
	}
	else
	{
		return Search(root->right, data);
	}
}
BstNode* deleteNode(BstNode* root, int data){
   if (root == NULL) return root;
      if (data < root->data)
         root->left = deleteNode(root->left, data);
      else if (data > root->data)
         root->right = deleteNode(root->right, data);
   else{
      if (root->left == NULL){
         BstNode* temp = root->right;
         free(root);
         return temp;
      }
      else if (root->right == NULL){
         BstNode* temp = root->left;
         free(root);
         return temp;
      }
      BstNode* temp = minValue(root->right);
      root->data = temp->data;
      root->right = deleteNode(root->right, temp->data);
   }
   return root;
}
int main()
{
    int n;

	root = NULL;
	cout<<"How Many Data you want  to take? ";
	cin>>n;
	int a[n];
	cout<<"\n Enter The Data : ";
	for(int i=0;i<n;i++)
    {
        cin>>a[i];
        root = Insert(root, a[i]);
    }

	cout<<"\n PreOrder Traversal : ";
	PreOrder(root);
cout<<"\n InOrder Traversal : ";
	InOrder(root);
cout<<"\n PostOrder Traversal : ";
	PostOrder(root);

	cout << "\n\n Please enter your search item: ";
	int s;
	cin >> s;
	cout << endl;
	if (Search(root, s) == true)
	{
		cout << "found" << endl;
	}
	else
	{
		cout << "Not found" << endl;
	}


cout<<"\n DELETE : ";
int e;
cin>>e;
deleteNode(root,e);
cout<<"\n PreOrder Traversal : ";
	PreOrder(root);
cout<<"\n InOrder Traversal : ";
	InOrder(root);
cout<<"\n PostOrder Traversal : ";
	PostOrder(root);


	getch();
}

