#include <iostream>
using namespace std;

int main()
{
    int a[5] = {1,
                2,
                3,
                4,
                5};
    int even,
        odd;
    for (int i = 1; i < 5; i++)
    {
        if (i % 2 == 0)
        {
            cout << i <<  " is even" << endl;
        }
        else
        {
            cout << i << " is odd" << endl;
        }
    }
}