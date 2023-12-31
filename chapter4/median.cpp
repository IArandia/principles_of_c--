#include "std_lib_facilities.h"

int main()
{
    vector<double> temps; // temperatures

    for (double temp; cin >> temp;) // read into temp
        temps.push_back(temp);      // put temp into vector
    // compute mean temperature:
    double sum = 0;
    for (int x : temps)
        sum += x;
    cout << "Average temperature: " << sum / temps.size() << '\n';
    // compute median temperature:
    sort(temps); // sort temperatures
    if (temps.size() % 2 == 0)
    {
        int m1 = temps[temps.size() / 2];
        cout << "Median temperature: " << m1 << " y " << m1 - 1 << "\n";
    }
    else
    {
        cout << "Median temperature: " << temps[temps.size() / 2] << '\n';
    }

    keep_window_open();
    return 0;
}