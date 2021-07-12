#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<string> fizzbuzz(int n)
{
    vector<string> result;
    for (int i = 1; i <= n; i++)
    {
        if (i % 15 == 0)
        {
            result.push_back("FizzBuzz");
            /* code */
        }
        else if (i % 3 == 0)
        {
            result.push_back("Buzz");
        }
        else if (i % 5 == 0)
        {
            result.push_back("Fizz");
        }
        else
        {
            result.push_back(to_string(i));
        }
    }
    return result;
}
int main()
{
    int n;
    cin >> n;

    vector<string> output = fizzbuzz(n);
    for (string x : output)
    {
        cout << x << ",";
        /* code */
    }

    return 0;
}