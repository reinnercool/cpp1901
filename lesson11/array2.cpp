#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char number = 10;
    int arr[number];
     cout << sizerof(arr) << endl;
    cout << endl;
    for(int i = 0; i < count; i++)
    {
        //cout << arr[i]*arr[i] << endl;//v1
        cout << pow(arr[i],2) << endl;//v2
    }
    return 0;
}