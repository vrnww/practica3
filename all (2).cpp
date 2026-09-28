#include <iostream>
using namespace std;

class Chisla
{
    int n, m;
public:
    Chisla(int a, int b)
    {
        n = a;
        m = b;
    }

    int otvet()
    {
        return 1 + ((n % m) * (m % n) != 0);
    }
};

int main()
{
    int n, m;
    cin >> n >> m;

    Chisla c(n, m);
    cout << c.otvet() << endl;

    return 0;
}