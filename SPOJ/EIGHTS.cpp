#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        unsigned long long int a;
        cin>>a;
        cout<<192+(250*(a-1))<<endl;
    }
    return 0;
}


