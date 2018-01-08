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
        ll int s=0, p_sum=0, e_sum=0,c_sum,f_sum=0;
        
        for(i=0; i<n;i++){
            cin>>A[i];
            if(A[i]<0)
                flag =1;
        }
        if(flag==0){
            for(i=0; i<n;i++)
                s+=A[i];
            std::cout << (k*s) << std::endl;
        }
        if(flag==0) continue;
        if(A[0]<0 || A[n-1]<0){
            for(i=0; i<n;i++){
                if(A[i]>=0)
                s+=A[i];}
            cout<<(s)<<endl;
        }else{
            p_sum=A[0];
            int j=1;
            while(A[j]>=0){
                p_sum+=A[j];
                j++;
            }
            e_sum = A[n-1];
            j=n-2;
            while(A[j]>=0){
                p_sum+=A[j];
                j--;
            }
            int c_sum= p_sum+   e_sum;
            
            for(i=0;i<n;i++){
                if(A[i]<0){
                    s=0;
                    
                    f_sum=max(f_sum,s);
                    continue;
                }else{
                    s+=A[i];
                }
            }
            if(s>=c_sum) cout<<s<<endl;
            else cout<<c_sum<<endl;
        }
        
    }
    return 0;
}
