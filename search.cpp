// #include <iostream>
// using namespace std;

// int function(int arr[], int key, int high, int low)
// {
//     while (low <= high)
//     {
//         int mid = (low + high) / 2;
//         if (arr[mid] == key)
//         {
//             return mid;
//         }
//         else if (key < arr[mid])
//         {
//             high = mid - 1;
//         }
//         else
//         {
//             low = mid + 1;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int ar[] = {12,13,14,15,16,34};
//     int size = sizeof(ar) / sizeof(ar[0]), el, res;
//     cout << "Enter the elements : ";
//     cin >> el;
//     res = function(ar, el, size - 1, 0);
//     if (res >= 0)
//     {
//         cout << "Element is present at " << res;
//     }
//     else
//     {
//         cout << "not present";
//     }
// }