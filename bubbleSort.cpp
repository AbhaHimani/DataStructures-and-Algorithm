#include <iostream>
#include <string>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void Bubble_Sort(int a[], int n)
{
    for (int i = 1; i < n - 1; i++)
    {
        //4,7,2,3
        //Pairwise Swapping
        for (int j = 0; j <= n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Bubble_Sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}