#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
int A[1000001];
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,i,flag =0;
        cin>>n>>k;
        
        ll int s=0;
        for(i=0; i<n;i++){
            cin>>A[i];
            if(A[i]<=0)
                flag =1;
        }
        if(flag==0){
            for(i=0; i<n;i++)
                s+=A[i];
            std::cout << (k*s) << std::endl;
        }
        if(flag==0)
            continue;
        
        
    }
    return 0;
}
