//O(N)
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cs = 0;
    int ms = 0;
    int a[1000];
    for (int i = 0; i < n; i++)
    {
        cs = cs + a[i];
        if (cs < 0)
        {
            cs = 0;
                }
        ms = max(ms, cs);
    }
}