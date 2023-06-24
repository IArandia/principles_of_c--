#include "std_lib_facilities.h"

int main()
{
    constexpr double Kroner_per_Yuan = 1.5;
    char currency = 'a';
    double amount = 1.0;
    cout << "type 'K' for Kroner or 'Y' for Yuan follow of the amount of money you want to convert:";
    cin >> currency >> amount;

    switch (currency)
    {

    case 'K':
        cout << "\nThe amount of " << amount << " Kroners is equal to: " << amount / Kroner_per_Yuan << " Yuans\n";
        break;
    case 'Y':
        cout << "The amount of " << amount << " Yuanes is equal to: " << amount * Kroner_per_Yuan << " Kroners\n";
        break;
    default:
        cout << "the currency that you typed is incorrect\n";
        break;
    }
    keep_window_open();
    return 0;
}
