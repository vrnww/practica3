#include <iostream>
using namespace std;

int bolshe(int a, int b)
{
    int k = (a - b + 1000) / 1000;
    return a * k + b * (1 - k);
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << bolshe(a, b) << endl;
    return 0;
}