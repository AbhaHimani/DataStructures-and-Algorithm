#include <iostream>
#include <string>
using namespace std;
int binary_search(int a[], int num, int key)
{
    int s = 0;
    int e = num - 1;
    while (s <= e)

    {
        int mid = (s + e) / 2;
        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] < key)
        {
            mid = mid + 1;
        }
        else if (a[mid] > key)
        {
            mid = mid - 1;
        }
    }
    return -1;
}
int main()
{
    //for this array should be sorted
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int keyy;
    cout << "Enter the element you want to search";
    cin >> keyy;
    cout << binary_search(arr, n, keyy);

    return 0;
}