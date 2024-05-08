#include <iostream>

using namespace std;

int Reverse(int A){

    return (A/1000)+((A/100%10)*10)+((A%100/10)*100)+((A%100%10)*1000);

}
int main(){

    int num;

    cout<<"Enter your number: ";
    cin>>num;

    cout<<"Your reverse number is: "<<Reverse(num)<<endl;
    main();
}
