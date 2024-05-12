#include <iostream>

using namespace std;

int FindMinimum(int a, int b, int c, int d )
{
    if(a <= b && a <= c && a <= d) return a;
    else if(b <= a && b <= c && b <= d) return b;
    else if(c <= a && c <= b && c <= d) return c;
    else if(d <= a && d <= b && d <= c) return d;
}
int main(){

     int num1,num2,num3,num4;

     cout<<"Enter number 1: ";
     cin>>num1;
     cout<<"Enter number 2: ";
     cin>>num2;
     cout<<"Enter number 3: ";
     cin>>num3;
     cout<<"Enter number 4: ";
     cin>>num4;

     cout<<"Minimum number is: "<<FindMinimum(num1, num2, num3, num4)<<endl;
     main();

}
