#include "std_lib_facilities.cpp"

int main()
{
    string disliked = "ignorante";

    for (string word; cin >> word;)
    {
        if (word != disliked)
        {
            cout << word << " ";
        }
        else
        {
            cout << "beep ";
        }
    }
    keep_window_open();
    return 0;
}