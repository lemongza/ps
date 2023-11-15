#include <iostream>
using namespace std;


int main (){
    int t;
    cin>>t;
    int arr[11]; 

    arr[0]=0;
    arr[1]=1;
    arr[2]=2;
    arr[3]=4;
    

    for(int i=4;i<11;i++){
        int cnt=0;

        for(int k=1;k<=3;k++){
            cnt+=arr[i-k];
        }
        
        arr[i]=cnt;
        
    }

    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        cout<<arr[n]<<"\n";
    }
    
}