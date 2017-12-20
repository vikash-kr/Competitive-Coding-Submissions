#include <iostream>
#include <math.h>
using namespace std;
int main() {
    
  int t, i, j=1, count=1;
  cin>>t;
  for(i=2; i<=t; i++){
    int temp = sqrt(i);
    //cout<<temp<<endl;
    while(j<=temp){
      if(i%j== 0){
        count++;
      }
      j++;
    }
    j=1;
  }
  cout<<count<<endl;
  return 0;
}
