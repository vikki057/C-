// #include <iostream>
// using namespace std;

// int main()
// {
//     int a[2][2], b[2][2], c[2][2];
//     int i, j, k;
//     cout << "Enter the elements of array 1:" << endl;
//     for (i = 0; i <= 1; i++)
//     {
//         for (j = 0; j <= 1; j++)
//         {
//             cin >> a[i][j];
//         }
//     }
//     cout << "Enter the elements of array 2:" << endl;
//     for (i = 0; i <= 1; i++)
//     {
//         for (j = 0; j <= 1; j++)
//         {
//             cin >> b[i][j];
//         }
//     }
//     cout << "The array is: "<<endl;
//     for (i = 0; i <= 1; i++)
//     {
//         for (j = 0; j <= 1; j++)
//         {
//             c[i][j] = 0;
//             for (k = 0; k <= 1; k++)
//             {
//                 c[i][j] += a[i][j] * b[i][j];
//             }
//         }
//     }
//     for (i = 0; i <= 1; i++)
//     {
//         for (j = 0; j <= 1; j++)
//         {
//             cout << "\t" << c[i][j];
//         }
//         cout << endl;
//     }
// }
