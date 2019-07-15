#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
struct node{
	int data;
	struct node *left;
	struct node *right;
};


node *new_node(int data){
	struct node* tmp = new struct node;
	tmp->data = data;
	tmp->left = NULL;
	tmp->right = NULL;
	return tmp; 
}

node* insert(node *curr_node, int data){
	if(curr_node == NULL){
		return new_node(data);
	}
	else{
		if(data < curr_node->data )
			curr_node->left = insert(curr_node->left,data);
		else
			curr_node->right = insert(curr_node->right,data);
	
		return curr_node;
	}

}

void print_inorder(node *node){
	if(node == NULL)
		return;
	print_inorder(node->left);
	cout<<node->data<<" ";
	print_inorder(node->right);
}

node *create_tree(node * root){
	int n,data;
	cout<<"Enter no. of nodes"<<endl;
	cin>>n;
	while(n--){
		cin>>data;
		root = insert(root,data);
	}
	return root;
}

bool search(node *curr_node, int data){
	if(curr_node == NULL)
		return false;
	else if(curr_node->data == data)
		return true;
	else if(data <= curr_node->data)
		return search(curr_node->left,data);
	else
		return search(curr_node->right, data);
}

int Height(node *curr_node){
	if(curr_node == NULL)
		return -1;
	int lHeight,rHeight;
	lHeight = Height(curr_node->left);
	rHeight = Height(curr_node->right);
	return max(lHeight,rHeight) + 1;
}

int main(){
	node * root = NULL;
	cout<<"1.create_tree"<<endl;
	cout<<"2.display"<<endl;
	cout<<"3.search in tree"<<endl;
	cout<<"10.end"<<endl;
	cout<<"4.Height of BST"<<endl;
	int flag =1;
	while(flag){
		int choice,value;
		cout<<"\n -------------- \n Enter choice ";
		cin>>choice;
		switch(choice){
			case 1:
				root = create_tree(root);
				break;
			case 2:
				print_inorder(root);
				break;
			case 3:
				cin>>value;
				bool find;
				find= search(root, value);
				if(find) cout<<value<<" found \n";
				else cout<<value<<" not found \n";
				break;
			case 4:
				cout<<"height is"<<Height(root)<<endl;
			case 10:
				flag = 0;
				break;
			default:
				cout<<"wrong choice"<<endl;

		}

	}
}