#include "std_lib_facilities.cpp"

int main()
{
    int val1 = 0;
    int val2 = 0;
    int sum = 0;
    int difference = 0;
    int product = 0;
    double ratio = 0;


    cout<<"Enter the first value: \n";
    cin>>val1;
    cout<<"Enter the second value: \n";
    cin>>val2;


    if(val1>val2){
        cout<<"The second value is smaller than the first one\n";
        cout<<"The first value is bigger than the second one\n";
    }
    else{
        cout<<"The first value is smaller thant the second one\n";
        cout<<"The second value is bigger than the first one\n";
    }

    sum = val1 + val2;
    cout<<"the sum between these two values is: "<<sum<<"\n";

    difference = abs(val1-val2); 
    cout<<"the diference between these two values is: "<<difference<<"\n";

    product = val1*val2;
    cout<<"the product between these two values is: "<<product<<"\n";

    ratio = val1/val2;
    cout<<"the ratio between theses two values is: "<<ratio<<"\n";

    keep_window_open();
    return 0;


}