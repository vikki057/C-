#include <iostream>
using namespace std;

int binary(int a)
{
    if (a == 0)
    {
        return 0;
    }
    else
    {
        binary(a / 2);

        cout << a % 2;
    }
}

int main()
{
    int a;
    cout << "Enter a number : ";
    cin >> a;

    int bin = binary(a);
}