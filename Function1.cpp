#include <iostream>

using namespace std;

void Age(int age){

     if(age > 18 && age < 100)
    {
        cout<<"Welcome, you are "<<age<<" years old and you can work!"<<endl;
    }
    else
    {
        cout<<"Hello you are "<<age<<" years old, and you can't work!"<<endl;
    }
}

int main() {
    int age,n;

    cout<<"Enter your birthday: ";
    cin>>age;

     n = 2024 - age;

    Age(n);

    main();
}

