//2009년

#include <iostream>
using namespace std;

void days (int y){
    switch (y%7)
    {
    case 1:
        cout<<"Thursday"<<endl;
        break;
    case 2:
        cout<<"Friday"<<endl;
        break;
    case 3:
        cout<<"Saturday"<<endl;
        break;
    case 4:
        cout<<"Sunday"<<endl;
        break;
    case 5:
        cout<<"Monday"<<endl;
        break;
    case 6:
        cout<<"Tuesday"<<endl;
        break;
    default:
        cout<<"Wednesday"<<endl;
        break;
    }
}

int main (){
    int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int M, D;
    cin>>D>>M;

    if(M==1)
        days(D);
    else{
        for(int i=0;i<M-1;i++)
            D+=month[i];
        days(D);
    }
   
   return 0;
}