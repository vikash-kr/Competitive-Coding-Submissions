#include <iostream>

using namespace std;
int rev(int i);
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n1, n2, final;
        cin>>n1>>n2;
        n1= rev(n1);
        n2 = rev(n2);
        final = n1+n2;
        final = rev(final);
        cout<<final<<endl;
    }
    return 0;
}

int rev(int i){
    int A[10];
    int count=-1;
    while(i!=0){

        A[++count] = i%10;
        i= i/10;
        //cout<<A[count]<<endl;
    }
    int f=0, mf=1;
    int j=0, k;
    while(A[j]==0){
       j++;
    }
    for(k=count; k>=j; k--){
        f= f+(A[k]*mf);
        mf= mf*10;
    }

    return f;
}
