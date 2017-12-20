#include <iostream>
using namespace std;

int main() {
  int a1, a2, a3;
  cin>>a1>>a2>>a3;
  while(a1 !=0 || a2 !=0 || a3 !=0){
      if((a2-a1) == (a3-a2) && a1 != a2){
        int temp = a3 + (a3-a2);
        cout<<"AP"<<" "<<temp<<endl;
      }else if((a3/a2) == (a2/a1)){
        int temp = a3*(a3/a2);
        cout<<"GP"<<" "<<temp<<endl;
    }
    cin>>a1>>a2>>a3;
  }
  
  return 0;
}
