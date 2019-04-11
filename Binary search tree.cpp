// BST Binary search tree


#include<bits/stdc++.h>
using namespace std;

typedef struct node{
	int data;
	node *leftChild;
	node *rightChild;
};

node *insertNode(node *root,int data);
void inorder_traversal(node *root);
void preorder_traversal(node *root);
void postorder_traversal(node *root);

int main()
{
	int n,i,data;
	node *root,*p;
	root=NULL;

	printf("Enter the number of nodes in Binary Search Tree\n");
	scanf("%d",&n);

	while(n--){
		scanf("%d",&data);
		root=insertNode(root,data);
	}

	printf("inorder_traversal\n");
	inorder_traversal(root);
	printf("preorder_traversal\n");
	preorder_traversal(root);
	printf("postorder_traversal\n");
	postorder_traversal(root);

	return 0;
}

node *insertNode(node *root, int data)
{
	if(root==NULL){
		root=(node *)malloc(sizeof(node));
		// printf("root is NULL creating a new node with address %f\n",&root);
		root->data=data; root->leftChild=NULL; root->rightChild=NULL;
	}else{
		if(data<root->data) root->leftChild=insertNode(root->leftChild,data);
			// printf("inserting in left to %d with address %f\n",root->data,&root);
		else root->rightChild=insertNode(root->rightChild,data);
			// printf("inserting in right to %d with address %f\n",root->data,&root);
	}

	return root;
}

void inorder_traversal(node *root)
{
	if(root==NULL) return;
	inorder_traversal(root->leftChild);
	printf("%d ",root->data);
	inorder_traversal(root->rightChild);
}

void preorder_traversal(node *root)
{
	if(root==NULL) return;
	preorder_traversal(root->leftChild);
	preorder_traversal(root->rightChild);
	printf("%d ",root->data);
}

void postorder_traversal(node *root)
{
	if(root==NULL) return;
	postorder_traversal(root->rightChild);
	postorder_traversal(root->leftChild);
	printf("%d ",root->data);
}
