#include <iostream>
using namespace std;
int main() {
	int g, b, Gr, Sm;
	cin>>g>>b;
	while(1){
		if(g== -1 && b == -1)
			break;
		if(g==0 && b==0){
			cout<<"0"<<endl;
			cin>>g>>b;
			continue;
		}

		if(g>b){
			Gr = g; Sm = b;
		}
		else if(g<b){
			Gr = b; Sm = g;
		}
		else{
			cout<<"1"<<endl;
			cin>>g>>b;
			continue;
		}

		if(Sm == 0){
			cout<<Gr<<endl;
			cin>>g>>b;
			continue;
		}
		else{
			if(Gr%(Sm+1)==0)
				cout<<Gr/(Sm+1)<<endl;
			else
				cout<<(Gr/(Sm+1))+1<<endl;
		}
		cin>>g>>b;

	}
	return 0;
}
