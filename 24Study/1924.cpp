//2007년

#include <iostream>
using namespace std;

void day (int y){
    switch (y%7)
        {
        case 1:
            cout<<"MON"<<endl;
            break;
        case 2:
            cout<<"TUE"<<endl;
            break;
        case 3:
            cout<<"WED"<<endl;
            break;   
        case 4:
            cout<<"THU"<<endl;
            break;  
        case 5:
            cout<<"FRI"<<endl;
            break; 
        case 6:
            cout<<"SAT"<<endl;
            break; 
        default:
            cout<<"SUN"<<endl;
            break;
        }

}

int main (){
    int x,y;
    cin>>x>>y;

    int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};

    if(x<1||x>12){
        return -1;
    }
    
    if(x==1){
        day(y);
    }
    else{
        for (int i=0;i<x-1;i++){
        y+=days[i];
        }
        day(y);
    }


    return 0;
}