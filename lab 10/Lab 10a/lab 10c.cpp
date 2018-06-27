
#include<iostream>
#include<queue>
using namespace std;

struct Node {
	char data;
	Node *left;
	Node *right;
};

void LevelOrder(Node *root) {
	if(root == NULL) return;
	queue<Node*> Q;
	Q.push(root);  

	while(!Q.empty()) {
		Node* current = Q.front();
		Q.pop(); 
		cout<<current->data<<" ";
		if(current->left != NULL) Q.push(current->left);
		if(current->right != NULL) Q.push(current->right);
	}
}
Node* Insert(Node *root,char data) {
	if(root == NULL) {
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data) root->left = Insert(root->left,data);
	else root->right = Insert(root->right,data);
	return root;
}

int main() {

	Node* root = NULL;
	root = Insert(root,'0'); root = Insert(root,'2');
	root = Insert(root,'1'); root = Insert(root,'3'); 
	root = Insert(root,'5'); root = Insert(root,'7');
    root = Insert(root,'6'); root = Insert(root,'4');
	LevelOrder(root);
}
