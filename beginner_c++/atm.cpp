//question source: codechef(practice and learn - beginners)


//Pooja would like to withdraw X $US from an ATM. The cash machine will only accept the transaction if X is a multiple of 5, and Pooja's
  //  account balance has enough cash to perform the withdrawal transaction (including bank charges). For each successful withdrawal the 
  //  bank charges 0.50 $US. Calculate Pooja's account balance after an attempted transaction.#include <iostream>
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
