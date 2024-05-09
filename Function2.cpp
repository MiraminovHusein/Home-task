#include <bits/stdc++.h>

using namespace std;

int MinDigit(int n){

    int num1,num2;

    num1 = n / 10;
    num2 = n % 10;

    if(num1 >= num2) return num2;
    else return num1;

}
int MaxDigit(int n){

    int num1,num2;

    num1 = n / 10;
    num2 = n % 10;

    if(num1 >= num2) return num1;
    else return num2;

}

int main(){

    int number;

    cout<<"Enter your number: ";
    cin>>number;

    if(number < 0 || number > 99)
    {
        cout<<"You must enter number from 0-99!"<<endl;
    }
    else {
    cout<<"Maximum is: "<<MaxDigit(number)<<endl;
    cout<<"Minimum is: "<<MinDigit(number)<<endl;
    }
    main();
}




