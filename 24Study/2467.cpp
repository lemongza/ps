#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main (){
    int n;
    cin>>n;
    vector<int> a;
    a.resize(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }


    vector<int>::iterator it1 =a.begin();
    vector<int>::iterator it2 =a.begin()+n-1;
    
    int anss[2];
    int sum;
    sum=(*it1)+(*it2);
    int ans=sum;
    anss[0]=(*it1);
    anss[1]=(*it2);


    while(ans!=0){
        if(it1==it2){
            break;
        }
        sum=(*it1)+(*it2);
        if(0-abs(sum)>0-abs(ans)){
            ans=sum;
            anss[0]=(*it1);
            anss[1]=(*it2);
        }

        if(sum>0){
            it2--;
        }
        else{
            it1++;
        }
    }
    cout<<anss[0]<<" "<<anss[1]<<"\n";

}