#include <iostream>
using namespace std;
long long int hcf(long long n1, long long n2);
int main() {
	int t;
	cin>>t;
	while(t--){
			long long int a, b, x,y, HCF;
			cin>>a>>b;
			HCF = hcf(b,a);
			//cout<<HCF<<endl;
			x= b/HCF;
			y= a/HCF;
			cout<<x<<" "<<y<<endl;
 		}
	
	return 0;
}
long long int hcf(long long n1, long long n2){
	    while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    return n1;
}
