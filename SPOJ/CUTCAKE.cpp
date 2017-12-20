#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007


int main(){
    int t;
    cin>>t;
    ll int person;
    while(t--){
      cin>>person;
      ll int cut=0, currPiece=1;
      while(person>currPiece){
        cut++;
        currPiece = (cut*(cut+1) + 2)/2;
      }
      cout<<cut<<endl;
    }
    return 0;
}
