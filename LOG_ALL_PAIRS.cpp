#include <iostream>
#include <string>
using namespace std;

int main()
{

    //Log all pairs of array
    int boxes[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << boxes[i] << boxes[j] << endl;
        }
    }
    //O(n^2)-->Horrible

    return 0;
}