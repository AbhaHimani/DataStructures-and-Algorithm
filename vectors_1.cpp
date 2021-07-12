#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    //Demo Vector
    vector<int> arr = {1, 2, 3, 4, 5};
    arr.pop_back(); // removes the last element
    //Fill Constructor
    vector<int> arr(10, 7);
    //makes all the 10 elements = 7

    //Push_Back O(1)
    arr.push_back(16);
    //Print all the elements:
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
        /* code */
    }

    //size of the array :-
    //if we initialise the array, capacity is equal to size
    //But if we push an element to the array, the capacity doubles
    cout << arr.size() << endl;
    cout << arr.capacity() << endl;

    return 0;
}