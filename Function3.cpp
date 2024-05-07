#include <iostream>

using namespace std;

int AgeInDays(int n){

    return n*365;
}
int main(){
    int age;

    cout<<"Enter your age: ";
    cin>>age;

    cout<<"Your age in days: "<<AgeInDays(age)<<endl;
    main();

}
