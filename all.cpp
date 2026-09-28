#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    cout << 1 + ((n % m) * (m % n) != 0) << endl;
    return 0;
}