// LCS(Longest Common Subsequence, 최장 공통 부분 수열)문제는 두 수열이 주어졌을 때, 모두의 부분 수열이 되는 수열 중 가장 긴 것을 찾는 문제이다.
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;
    s1 = "0" + s1;
    s2 = "0" + s2;

    vector<vector <int> > dp;
    dp.resize(s2.size(), vector<int>(s1.size()));

    for (int i = 0; i < s2.size(); i++)
    {
        for (int j = 0; j < s1.size(); j++)
        {
            if (i==0||j==0)
            {
                dp[i][j]=0;
            }

            else if (s1[j]==s2[i])
            {
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else 
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }

    cout<<dp[s2.size()-1][s1.size()-1]<<"\n";

    return 0;
}
