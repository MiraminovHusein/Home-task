#include <bits/stdc++.h>

using namespace std;

float AverageOfNumbers(float a, float b, float c, float d)
{
    return (a + b + c + d)/4;
}
int main(){

     float num1,num2,num3,num4;

     cout<<"Enter number 1: ";
     cin>>num1;
     cout<<"Enter number 2: ";
     cin>>num2;
     cout<<"Enter number 3: ";
     cin>>num3;
     cout<<"Enter number 4: ";
     cin>>num4;

     cout<<"Average number is: "<<AverageOfNumbers(num1, num2, num3, num4)<<endl;
     main();

}
