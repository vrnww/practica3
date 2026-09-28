#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int k = (a - b + 1000) / 1000;
    cout << a * k + b * (1 - k) << endl;

    return 0;
}