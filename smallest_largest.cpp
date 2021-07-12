#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main()
{
    int largest = INT_MIN;
    int smallest = INT_MAX;
    int a[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }
    cout << largest << endl;
    for (int j = 0; j < n; j++)
    {
        if (a[j] < smallest)
        {
            smallest = a[j];
        }
    }
    cout << smallest;

    return 0;
}