//we are using BST but can be used with any tree
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
		if(data <= curr_node->data )
			curr_node->left = insert(curr_node->left,data);
		else
			curr_node->right = insert(curr_node->right,data);
	
		return curr_node;
	}

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

void print_preorder(node *node){
	if(node == NULL)
		return;
	cout<<node->data<<" ";
	print_preorder(node->left);
	
	print_preorder(node->right);
}

void print_inorder(node *node){
	if(node == NULL)
		return;
	print_inorder(node->left);
	cout<<node->data<<" ";
	print_inorder(node->right);
}

void print_postorder(node *node){
	if(node == NULL)
		return;
	print_postorder(node->left);
	print_postorder(node->right);
	cout<<node->data<<" ";
}

void print_BFS(node* node){ //level order
	queue<struct node*> q;
	if(node == NULL){
		cout<<"Empty tree"<<endl;
		return;
	}
	q.push(node);
	while(q.size() > 0)
	{	
		struct node* tmp;
		tmp = q.front();
		q.pop();
		cout<<tmp->data<<" ";
		if(tmp->left)
			q.push(tmp->left);
		if(tmp->right)
			q.push(tmp->right);
	}
}

int main(){
	node * root = NULL;
	cout<<"1.create_tree"<<endl;
	cout<<"2.preorder"<<endl;
	cout<<"3.inorder"<<endl;
	cout<<"4.postorder"<<endl;
	cout<<"5.Breadth first or Level order"<<endl;
	cout<<"10.break"<<endl;
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
				print_preorder(root);
				break;
			case 3:
				print_inorder(root);
				break;
			case 4:
				print_postorder(root);
				break;
			case 5:
				print_BFS(root);
			case 10:
				flag = 0;
				break;
			default:
				cout<<"wrong choice"<<endl;

		}

	}
}