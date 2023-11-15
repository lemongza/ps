#include <iostream>
using namespace std;

int main (){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n,m;
    cin>>n>>m;
    int arr[n+1];
    arr[0]=0;
    int add[n+1];
    add[0]=0;


    for(int p=1;p<n+1;p++){
        cin>>arr[p];
    }

    for(int p=1;p<n+1;p++){
        add[p]=arr[p]+add[p-1];
    }

    for(int q=0;q<m;q++){
        int i,j;
        cin>>i>>j;
        cout<<add[j]-add[i-1]<<"\n";
    }
    

}