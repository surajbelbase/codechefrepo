#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double total;
    int cash;    
    cin >> cash;
    cin >> total;
    if (cash+0.50<= total && cash % 5 == 0)
    {
        total = total - cash - 0.50;
        cout << fixed << setprecision(2) << total;
    }
    else
    {
        cout << fixed << setprecision(2) << total;
    }
    return 0;
}
