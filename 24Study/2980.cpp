#include <iostream>
#include <vector>
#include <tuple>
using namespace std;
vector<vector<pair<int, int>>> v[1001];

int main()
{

    int n, l;
    int curr = 0;
    int t = 0;
    for (int i = 0; i < n; i++)
    {
        int d, r, g;
        cin >> d >> r >> g;
        for (; curr != l; t++)
        { // 여기 조건 뭐로 바꾸냐
            if (curr == d)
            {
                int cycle = r + g;
                if ((t % cycle) < n)
                {
                    continue;
                }
                else
                {
                    curr++;
                }
            }
            else
            {
                curr++;
            }
        }
    }

    cout << t << "\n";
}