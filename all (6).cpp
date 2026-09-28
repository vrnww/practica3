#include <iostream>
using namespace std;

class Para
{
    int a, b;
public:
    Para(int x, int y)
    {
        a = x;
        b = y;
    }

    int bolshee()
    {
        int k = (a - b + 1000) / 1000;
        return a * k + b * (1 - k);
    }
};

int main()
{
    int a, b;
    cin >> a >> b;

    Para p(a, b);
    cout << p.bolshee() << endl;

    return 0;
}