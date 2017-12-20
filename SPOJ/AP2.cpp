#include <iostream>
using namespace std;
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int a0, a3, a3_last, S;
        cin>>a3>>a3_last>>S;
        int n = (2*S)/(a3+a3_last);
        cout<<n<<endl;
        int d= (a3_last-a3)/(n-5);
        //cout<<"d"<<d<<endl;
        a0 = a3-(2*d);
        for(int i=1; i<=n; i++){
            long long int a = a0 + (i-1)*d;
            cout<<a<<" ";
        }
    }
    return 0;
}
