#include <iostream>
#include <string>
#include <map>

using namespace std;
int n;
int p[200002];
int s[200002];
map<string, int> mp;
void init(int f);
void join(int a, int b);
int find(int a);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int f;
        string s1, s2; // 얘가 문제임 j for문 안에 선언했더니 안됨 ㅡㅡ
        int cnt = 0;
        cin >> f;
        init(f * 2);
        for (int j = 0; j < f; j++)
        {

            cin >> s1 >> s2;

            if (mp[s1] == 0)
                mp[s1] = ++cnt;
            if (mp[s2] == 0)
            {
                mp[s2] = ++cnt;
            }
            // cout<<s1<<" "<<s2<<"\n";
            // cout << mp[s1] << ", " << mp[s2] << "\n";

            join(mp[s1], mp[s2]);
            cout << s[find(mp[s1])] << "\n";
        }
        mp.clear();
    }
}

void init(int f)
{
    for (int i = 0; i < f + 1; i++)
    {
        p[i] = i;
        s[i] = 1;
    }
}

int find(int a)
{
    if (a == p[a])
    {
        return a;
    }
    return p[a] = find(p[a]);
}

void join(int a, int b)
{
    a = find(a);
    b = find(b);
    // cout<<"s"<<a<<b<<"\n";
    if (a == b)
    {
        return;
    }

    if (a < b)
    {
        p[a] = b;
        s[b] += s[a];
    }
    else
    {
        p[b] = a;
        s[a] += s[b];
    }

    return;
}