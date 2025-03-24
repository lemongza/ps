#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair <int,int> > v; //pair -> .first .second 로 접근

int main()
{
    int n,l; //웅덩이, 널빤지   
    cin>>n>>l;

    for (int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(begin(v),end(v)); //오름차순 ??

    int cnt=0;
    int end=-1;

    for(int i=0;i<v.size();i++){
        if(v[i].first>end){
            end=v[i].first;
        }
        while(end<v[i].second){
            end+=l;
            cnt++;
        }
    
    }
    cout<<cnt<<"\n";
}
