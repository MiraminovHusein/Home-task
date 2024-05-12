#include <bits/stdc++.h>

using namespace std;

int SumOfDigits(int n)
{
    int a,b,c,d;

    a = n / 1000;
    b = n / 100 % 10;
    c = n / 10 % 10;
    d = n % 10;

    return a + b + c + d;
}
int main(){

    int num;
    cout<<"Enter number: ";
    cin>>num;

    if(num > 9999) cout<<"You must enter number from 0-9999"<<endl;

    else cout<<"Sum of digit: "<<SumOfDigits(num)<<endl;
    main();
}
