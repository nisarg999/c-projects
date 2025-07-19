#include <iostream>
using namespace std;

int main()
{
    int x, y;
    int a = 14;
    int b = 15;
    int area = a * b;

    cout << "guess the area :";
    cin >> x;
    if (x == area)
    {
        cout << "correct \n"
             << endl;
    }
    else
    {
        cout << "wrong" << endl;
    };
    cout << "area is : " << area << endl;

    cout << "length is : " << a << endl
         << "width is: " << b;
    return 0;
}
