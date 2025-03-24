//그대로 출력하기2 

#include <iostream>
#include <string>
using namespace std;

int main (){
    string str;
    while( getline(cin,str)){
        cout<<str<<endl;
    }

    return 0;
}