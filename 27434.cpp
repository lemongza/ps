#include <iostream>
using namespace std;

unsigned long long fact (unsigned  long long n){
    if (n<=1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

int main (void) {
    int n;
    cin>>n;
    unsigned long long f;
    f=fact(n);
    cout<<f<<"\n";
    return 0;
}