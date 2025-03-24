//A+B - 4

#include <iostream>
using namespace std;

int main (){
    int A,B;
    while(true){    
        cin>>A>>B;
        if(cin.eof())
            break;
        if(A>0&&B<10){
            cout<<A+B<<"\n";
        }
            
    }

    return 0;
}