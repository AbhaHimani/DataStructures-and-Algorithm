#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int key;
    cout << "Enter the element you want to find";
    cin >> key;

    for (int j = 0; j < n; j++)
    {
        if (a[j] == key)
        {
            cout << "Found!";
            break;
        }
        if (j == n - 1)
        {
            cout << "Not Found";
        }
    }

    return 0;
}