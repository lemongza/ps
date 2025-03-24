#include <iostream>
using namespace std;
// help me...e.e..e.e....

int main (){
    int n;
    cin>>n;
    int arr[n+1];
    int cnt[n+1];
    int i=1;

    while(i<n+1){
        cin>>arr[i++];
    }
    
    cnt[0]=0;
    cnt[1]=arr[1]; 
    cnt[2]=arr[1]+arr[2];

    for(int i=3;i<n+1;i++){
        if(arr[i-1]+cnt[i-3]>cnt[i-2]){
            cnt[i]=arr[i]+arr[i-1]+cnt[i-3];
        }
        else{
            cnt[i]=arr[i]+cnt[i-2];
        } 

    }

    cout<<cnt[n]<<"\n";

}