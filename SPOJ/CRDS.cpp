#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        long long int n;
        cin>>n;
        cout<<( (  n*(3*n+1) )/2 )%1000007<<endl; 

    }
    return 0;
}


