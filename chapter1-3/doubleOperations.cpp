#include "std_lib_facilities.cpp"

int main()
{
cout << "Please enter an integer value: ";
int n;
double half_n;
cin >> n;
cout << "n == " << n
    << "\nn+1 == " << n+1
    << "\nthree times n == " << 3*n
    << "\ntwice n == " << n+n
    << "\nn squared == " << n*n;
half_n = n/2.0;
cout<<"\nthe half of n == "<<half_n;
double doubleN;
cout<< "\nsquare root of n == " << sqrt(doubleN)
    << '\n'; // another name for newline (“end of line”) in output

    keep_window_open();
    return 0; 

}