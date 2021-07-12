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

void selection_sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        //find out the smallest element index in the unsorted part
        int min_index = i;
        for (int j = i + 1; j < n; j++)

        {

            if (a[j] < a[min_index])
            {
                min_index = j;
            }
        }
        swap(&a[min_index], &a[i]);
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
    selection_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }

    return 0;
}