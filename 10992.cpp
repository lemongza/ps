//별 찍기 - 17

#include <iostream>
using namespace std;

int main (void){
    unsigned int N;
    cin>>N;

    int mid=(2*N-1)/2;
    int x=0;

    for(int j=0;j<N;j++){
        if(j==N-1){
            for(int i=0;i<2*N-1;i++)
                cout<<"*";
            cout<<endl;
            break;
        }
        

        for(int i=1;i<=2*N-1;i++){
            
            if(i==N-x){
                cout<<"*";
            }
            else if(i==N+x){
                cout<<"*";
            }
            else
                cout<<" ";

            if(i>N+x)
                break;
        }

        cout<<endl;
        x++;
    }

    return 0;
}