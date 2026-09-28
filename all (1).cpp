#include <iostream>
using namespace std;

int vvod()
{
    int x;
    cin >> x;
    return x;
}

int proverka(int n, int m)
{
    return 1 + ((n % m) * (m % n) != 0);
}

int main()
{
    int n = vvod();
    int m = vvod();

    cout << proverka(n, m) << endl;
    return 0;
}