#include <iostream>
#include <vector>

using namespace std;
int main (){
    vector<vector<int> > v;
    v.resize(100);
    v[1].push_back(1);
    v[2].push_back(2);

    cout<<v[2].size()<<"\n";

}