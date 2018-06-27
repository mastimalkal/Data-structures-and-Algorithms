#include<iostream>
using namespace std;

struct Node{

	char data;
		struct Node*left;
	struct Node*right;
};

void Preorder(struct Node*root)
{
	if(root==NULL)	
	return;
	cout<<root->data<<" ";;
	Preorder(root->left);
	Preorder(root->right);
}

void Inorder(struct Node *root)
{
	 if(root == NULL)
	return;
	 cout<<root->data<<" ";;
	 Inorder(root->left);
	 Inorder(root->right);
	
}

void Postorder(struct Node *root)
{
	if(root == NULL)	
	return;
	cout<<root->data<<" ";;
	Postorder(root->left);
	Postorder(root->right);
	
}

Node* Insert(Node *root, char data){
	if(root == NULL){
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data)
		root->left = Insert(root->left, data);
	else
		root->right = Insert(root->right, data);
	return root;
}

int main(){
	Node* root = NULL;
	root = Insert(root, '0');	root = Insert(root, '4');
	root = Insert(root, '2');	root = Insert(root, '5');
	root = Insert(root, '3');	root = Insert(root, '6');
	cout<<"Preorder:"<<" ";;
	Preorder(root);
	cout<<"\n";
	cout<<"Inorder:"<<" ";;
	Inorder(root);
	cout<<"\n";
	cout<<"Postorder:"<<" ";
    Postorder(root);
	cout<<"\n";
}
