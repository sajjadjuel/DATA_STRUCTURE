#include <iostream>
#include <stdlib.h>


using namespace std;

typedef struct bin_tree
{
bin_tree *left, *right;
int data;
} * BST;


BST makenode(int value)
{
BST newnode = new bin_tree;
newnode->data = value;
newnode->left = NULL;
newnode->right = NULL;
return newnode;
}


BST insert_Student(BST ptr, int id)
{
if (ptr == NULL)
{
ptr = makenode(id);
}
else if (id > ptr->data)
{
ptr->right = insert_Student(ptr->right, id);
}
else if (id < ptr->data)
{
ptr->left = insert_Student(ptr->left, id);
}
return ptr;
}
BST search_Student(BST ptr, int id)
{
if (ptr != NULL)
{
if (ptr->data < id)
{
ptr = search_Student(ptr->right, id);
}
else if (ptr->data > id)
{
ptr = search_Student(ptr->left, id);
}
}
return ptr;
}

BST Get_Inorder(BST ptr)
{
BST temp = ptr;
while (temp && temp->left != NULL)
{
temp = temp->left;
}
return temp;
};


BST Delete(BST ptr, int data)
{
if (ptr == NULL)
return ptr;
if (data < ptr->data)
{
ptr->left = Delete(ptr->left, data);
}
else if (data > ptr->data)
{
ptr->right = Delete(ptr->right, data);
}
else
{
if (ptr->left == NULL)
{
BST temp;


temp = ptr->right;
delete (ptr);
return temp;
}
else if (ptr->right == NULL)
{
BST temp;




temp = ptr->left;
delete (ptr);
return temp;


}
BST temp = Get_Inorder(ptr->right);
ptr->data = temp->data;
ptr->right = Delete(ptr->right, temp->data);
}
return ptr;
}



int main()
{
BST root = NULL, temp;
int id, n, choice;
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
cout<<"        =================="<<endl;
BST Get_Inorder(root);
cout << endl;
}
break;

case 2:
{
cout << "ENTER ID FOR SEARCH";
cin >> id;
BST a;
a = search_Student(root, id);
if (a == NULL)
cout << "Invalid Student  " << endl;
else
cout << "Valid Student " << endl;
}
break;
case 3:
{
cout << "ENTER AN ID FOR DELETING: ";
cin >> id;
BST a;
a = Delete(root, id);
if (a == NULL)
cout << "NOT FOUND" << endl;
else
cout << id << " DELETED" << endl;
}
break;
case 4:
{
temp = root;
cout << "Enter id: ";
cin >> id;
temp = insert_Student(temp, id);
}
break;
case 5:
break;
default:
cout << "you choose Wrong option" << endl;
}
} while (choice != 6);
return 0;
}
