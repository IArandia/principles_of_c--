#include "std_lib_facilities.cpp"

int main()
{


    float miles = 0;
    float kilometers = 0;
    cout<<"------------------\n"
        <<"enter the number of miles you want to convert\n";
    cin>>miles;
    kilometers = miles *1.609;
    cout<<"------------------\n"
        <<"the number of kilometers in "<<miles<<" miles is:"<<kilometers<<" kilometers\n";
    keep_window_open();
    return 0;    

}