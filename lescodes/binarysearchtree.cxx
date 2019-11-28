#include<iostream>
#include<vector>
using namespace std;
//BST node
struct node
{
	int value;
	struct node *left, *right;


};
node* GetNewNode(int data){

	node* newnode = new node();
	newnode->value = data;
	newnode->left = newnode->right = NULL;
	return newnode;
}
// to store address of the root node
node* Insert( node* root, int data){
	if(root == NULL){
		root = GetNewNode(data);
	}
	else if(data <= root->value){
		root->left = Insert(root->left, data);
	}
	else if(data > root->value){
		root->right = Insert(root->right, data);
	}
	return root;
}
bool Search(node* root, int data){
	if(root==NULL) return false;
	else if(root->value == data) return true;
	else if(root->value <= data) return Search(root->right,data);
	else return Search(root->left, data);

}

void printalldatainbst(node* root){
	if(root==NULL) return;
	cout<<root->value<<"\n";
	printalldatainbst(root->right);
	printalldatainbst(root->left);
			
}
int main(){
	node* root = NULL;
	root = Insert(root, 15);
	root = Insert(root, 10);
	root = Insert(root, 20);
	root = Insert(root, 25);
	root = Insert(root, 10);
	root = Insert(root, 8);
	printalldatainbst(root);
	int number;
	cout<<"enter the number to be searched\n";
	cin>>number;
	if(Search(root,number)==true) cout<<"Found it!\n";
	else cout<<"Not found :(\n";
	return 0;
}


