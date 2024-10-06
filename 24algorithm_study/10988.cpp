#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
int main(){
    string s,rs;
    cin>>s;
    // rs=s;
    
    // reverse(rs.begin(),rs.end());
    int r;
    
    for(int i=0;i<s.length()/2;i++){
        if(s[i]==s[s.length()-i-1]){
            r=1;
        }
        else{
            cout<<0;
            return 0;
        }
    }
    cout<<r;
    return 0;




}