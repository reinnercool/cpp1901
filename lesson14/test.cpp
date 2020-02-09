#include <iostream>
using namespace std;

int getValueFromUser();

int main() {
    const short COUNT = getValueFromUser();
    int arr[COUNT];

    for (int i = 0; i < COUNT; i++) {
        cout << "Enter Interger: ";
        cin >> arr[i];
    }

    return 0;
}

int getValueFromUser() {
    cout << "Enter Integer: ";
    int x = 0;
    cin >> x;
    return x;
}
