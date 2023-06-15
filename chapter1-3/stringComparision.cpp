#include "std_lib_facilities.cpp"
int main()
{
    string previous = " "; // previous word; initialized to “not a word”
    string current; // current word
    while (cin>>current) { // read a stream of words
    if (previous == current) // check if the word is the same as last
        cout << "repeated word: " << current << '\n';
    previous = current;
    }
    keep_window_open();
    return 0;
}