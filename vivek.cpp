// #include <iostream>
// using namespace std;
// int main()
// {
//     float hindi, english, maths, chemistry, physics, total, percentage;
//     cout << "enter the number of 1st sub:";
//     cin >> hindi;
//     cout << "enter the number of second sub:";
//     cin >> english;
//     cout << "enter the number of 3rd sub:";
//     cin >> maths;
//     cout << "enter the number of 4th sub:";
//     cin >> chemistry;
//     cout << "enter the number of 5th sub:";
//     cin >> physics;
//     total = hindi + english + maths + chemistry + physics;
//     percentage = (hindi + english + maths + chemistry + physics) / 5;
//     cout << "total marks:";
//     cout << total;
//     cout << "percentage:";
//     cout << percentage;

//     int r,num,sum;
//     cout<< "enter a number:";
    
//     cin>>num;
//     while(num>0){
//         r=num%10;
//         sum=sum+r;
//         num=num/10;
//     }
//     cout<<sum;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int a,b,sum;
//     cout<<"enter a number:";
//     cin>> b;

//     while(b>0){
//         a=b%10;
//         b=b*10+b;
//         a=a/10;
//     }
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int a,b,rev=0;
//     cout<<"enter a number:";
//     cin>> b;
//     int n=b;

//     while(b>0){
//         a=b%10;
//         rev=rev*10+a;
//         b=b/10;
//     }
//     cout<<rev<<endl;
//     if(rev==n){
//         cout<<"palendrone number";
//     }
//     else{
//         cout<<"not a palendrone number";
//     }
// }