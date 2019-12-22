#include <iostream>
#include <cstring>
using namespace std;
int main ()
    char name[20];
    char address[15];

    cout << "Enter your name: ";
    cin.get(name,20);

    cout << "Enter your address: ";
    cin.get(address,15)

    cout << "Enter your age: ";
    cin >> age

    cout << "Your name is " << name << ", and your age is "
        << age << "years old" << endl;
    return 0;
}