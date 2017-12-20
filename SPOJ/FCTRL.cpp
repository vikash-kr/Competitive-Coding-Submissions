#include <iostream>
#include <algorithm>
using namespace std;
#define pb push_back
#define MOD 1000000007


int main(){
    int t;
    cin>>t;
    unsigned long long int digit;
    while(t--){
        cin>>digit;
        unsigned long long int factor = 5;
        
        unsigned long long int count =0;
        while( (digit/factor)>=1 ){
            count = count + digit/factor;
            factor = factor*5;
        }
        std::cout << count << std::endl;
    }
    return 0;
}
