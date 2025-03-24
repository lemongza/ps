//정수삼각형
#include <iostream>

using namespace std;
 int main (){
    int n;
    cin>>n;
    int dp[500][500]={0,};

   for(int i=0;i<n;i++){
        for(int k=0;k<=i;k++){
            cin>>dp[i][k];
        }
    }

    for(int i=1;i<n;i++){
        for(int k=0;k<=i;k++){
            if (k==0)
            {
                dp[i][k]=dp[i-1][k]+dp[i][k];
            }
            else if(i>k){
                if(dp[i-1][k-1]<dp[i-1][k])
                    dp[i][k]=dp[i-1][k]+dp[i][k];
                else{
                    dp[i][k]=dp[i-1][k-1]+dp[i][k];
                }
            }
            else if (i==k){
                dp[i][k]=dp[i-1][k-1]+dp[i][k];
            }
        }
    }

    int max=0;

    // for(int i=0;i<n;i++){
    //     for(int k=0;k<=i;k++){
    //         cout<<dp[i][k]<<" ";
    //     }
    //     cout<<"\n";
    // }

    for(int i=0;i<n;i++){
        if(dp[n-1][i]>max){
            max=dp[n-1][i];
        }

    }
    cout<<max<<"\n";
 }  