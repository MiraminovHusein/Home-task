#include <iostream>

using namespace std;

int NextEven(int n){

    return (n % 2) + n;
}
int main(){
    int n;

    cout<<"Enter your number: ";
    cin>>n;

    cout<<"Your next even number is: "<<NextEven(n)<<endl;
    main();

}
