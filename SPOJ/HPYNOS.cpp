#include <iostream>
#include <set>
using namespace std;

long long int SqSum(long long  t){
    int temp = t;
	long long int sum=0;
	while(t>=1){
		sum = sum + (t%10)*(t%10);
		t = t/10;
	}
	return sum;
}

int main() {
	long long int t;
	cin>>t;
	set <long long int> s;
	s.insert(t);
	long long int prevCount = 0;
	long long int nextCount = s.size();
	long long int temp = SqSum(t);
	int N = 1;
	while(1){
	    
	    if(temp == 1){
            cout<<N<<endl;
            break;
	    }
	    else{
	        N++;
            temp = SqSum(temp);
            s.insert(temp);
            prevCount= nextCount;
            nextCount = s.size();
            if(prevCount == nextCount){
                cout<<"-1"<<endl;
                break;
            }
        }
	}
	return 0;
}
