#include "std_lib_facilities.cpp"

int main()
{
    char i = 'a';
    int num = i;

    while(i <= 'z'){

        cout<<i<<"  "<<num<<"\n";

        ++i;
        num = i;
    }

    keep_window_open();
    return 0;
}
