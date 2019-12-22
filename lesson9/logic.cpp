#include <iostream>
using namespace std;

int main()
{
    setprecision(10);
   bool t = true;
   bool f = false;
   short a = 1;
   short b = 2;
   short c = 3;

   if ((a < b) && f || !t && >= a)
   {
       cout << "condition - ";
   }
    // int x = a < b ? a : b;
    // cout << (a , ? a : b) << endl;
   double d1(100-99.99);   //0.01
   double d2(10-9.99);     //0.01


    if (d1 == d2)
        cout << "d1 = d2\n";
    else if (d1 > d2)
        cout << "d1 > d2\n";
    else if (d1 < d2)
        cout << "d1 < d2\n";

   cout << d1 << '\t' << d2 << endl;

   double d = 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1
               + 0.1 + 0.1 + 0.1 + 0.1;
    cout << boolalpha << (d == 1.0) << endl;

