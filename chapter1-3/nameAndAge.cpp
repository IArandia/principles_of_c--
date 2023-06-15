#include "std_lib_facilities.cpp"
int main()
{
    cout<<"please enter your name and age\n";
    string first_name;
    double age; 
    cin>>first_name>>age;
    cout<<"tu primer nombre es "<<first_name<<" y tienes "<<age*12<<" meses de vida\n";
    keep_window_open();
    return 0;
}