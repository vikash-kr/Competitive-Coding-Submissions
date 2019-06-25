#include<bits/stdc++.h>
using namespace std;

struct node{
	int value;
	struct node *next;

};

struct node *insert_at_end(struct node *start,int data){
	cout<<"Adding "<<data<<endl;
	if(start == NULL){
		struct node *p = (struct node *)malloc(sizeof(struct node));
		p->value = data;
		p->next = NULL;
		start = p;
	}else{
		struct node *p,*tmp=start;
		p = (struct node *)malloc(sizeof(struct node));
		p->value = data;
		while(tmp->next != NULL){
			tmp= tmp->next;
		}
		tmp->next = p;
		p->next = NULL;
	}
	return start;
}

struct node *create_list(struct node *start)
{	
	cout<<"No of element"<<endl;
	int n;
	cin>>n;
	while(n--){
		int data;
		cin>>data;

		start = insert_at_end(start,data);
	}
	return start;
}

void display(struct node *start){
	struct node* p = start;
	while(p!= NULL){
		cout<<p->value<<" -> ";
		p=p->next;

	}
	cout<<"NULL \n";
}

int main(){
	struct node *start = NULL;
	cout<<"1.create_list"<<endl;
	cout<<"2.display"<<endl;
	cout<<"10.end"<<endl;
	int flag =1;
	while(flag){
		int choice;
		cout<<"-------------- \n Enter choice ";
		cin>>choice;
		switch(choice){
			case 1:
				start = create_list(start);
				break;
			case 2:
				display(start);
				break;
			case 10:
				flag = 0;
				break;
			default:
				cout<<"wrong choice"<<endl;

		}

	}
	return 0;
}