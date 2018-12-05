#include <iostream>
using namespace std;

struct node{
	int data;
	struct node *left;
	struct node *right;
};

struct node* newNode(int data){
	struct  node* n = (struct node*)malloc(sizeof(struct node));
	n->data = data;
	n->left = NULL;
	n->right = NULL;
	return n;
}

int Height(struct node *node){
	if(node == NULL)
		return 0;
	else{
		int lHeight = Height(node->left);
		int rHeight = Height(node->right);
	
		if(lHeight>rHeight)
			return lHeight+1;
		else
			return rHeight+1;
	}
}
int dia(struct node* tem){
    if(tem==NULL)
        return 0;
    int lht=Height(tem->left);
    int rht=Height(tem->right);
    int ldia=dia(tem->left);
    int rdia=dia(tem->right);
    return max((lht+rht+1),max(ldia,rdia));
}
void preorder(struct node * tmp){
	if(tmp == NULL)
		return;
	cout<<(tmp->data)<<" ";
	preorder(tmp->left);
	preorder(tmp->right);
}

int main(){
	int t,x;
	cin>>t>>x;
	node *root = newNode(x);
	node * ptr = NULL;
	t--;
	char s[1000];
	while(t--){
	    scanf("%s", &s);
	    //cout<<s<<endl;
	    int i=0;
	    ptr = root;
	    while(s[i] != '\0' && ptr != NULL){
	        if(s[i] == 'L'){
	            if(ptr->left == NULL){
	                ptr->left = newNode(0);
	            }
	            ptr= ptr->left;
	        }else{
	            if(ptr->right == NULL)
	                ptr->right = newNode(0);
	           ptr = ptr->right;
	        }
	        i++;
	    }
	    cin>>x;
	    ptr->data = x;
	}
	//preorder(root);
	int res = dia(root);
	cout<<res<<endl;
	return 0;	
}
