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
int id, n, choice, temp;
do
{
cout << "      ENTER ANY NUMBER :" << endl;
cout<<"        =================="<<endl;
cout << "1.    Inorder Traversal:" << endl;
cout << "2.    Search Student" << endl;
cout << "3.    Delete Student " << endl;
cout << "4.    Insert Student" << endl;
cout << "5.    Exit" << endl;
cin >> choice;
switch (choice)
{
case 1:
{
cout << "           INORDER ";
cout<<"\n        =================="<<endl;

cout<<"\n Students Id List : ";
InOrder(root);

cout << endl<< endl;
}
break;

case 2:
{
cout << "ENTER ID FOR SEARCH : ";
int s;
cin >> s;

if (Search(root, s) == true)
	{
		cout << "\n Valid Student " << endl;
	}
	else
	{
		cout << "\n Invalid Student  " << endl;
	}

}
break;
case 3:
{
cout << "\n ENTER AN ID FOR DELETE : ";
cin >> id;


 deleteNode(root,id);
}
break;
case 4:
{

cout<<"How Many Id you want to Insert? : ";
int num;
cin>>num;
if(num>1)
cout << "Enter Id's respectively: ";
if (num==1)
    cout<<"Enter Id :";

for(int i=0;i<num; i++)
{

cin >> id;
if (Search(root, id) == true)
    cout<<"\nSorry! Id should be Unique. Can't Insert "<<id<<endl<<endl;
else
root = Insert(root, id);
}

}
break;
case 5:
break;
default:
cout << "\n Wrong Option!" << endl;
}
} while (choice != 5);
return 0;
}

