#include <bits/stdc++.h>

using namespace std;

char CheckGrade(int grade){

    if(grade <= 100 && grade >= 90)return 'A';
    else if(grade <= 89 && grade >= 80) return 'B';
    else if(grade <= 79 && grade >= 70) return 'C';
    else if(grade <= 69 && grade >= 60) return 'D';
    else if(grade <= 59 && grade >= 0)  return 'F';

}
int main(){

     int num;

     cout<<"Enter the number : ";
     cin>>num;

     if(num < 0 || num > 100) cout<<"Your number must be between 0 and 100!"<<endl;

     else cout<<"Your grade is: "<<CheckGrade(num)<<endl;
     main();

}
