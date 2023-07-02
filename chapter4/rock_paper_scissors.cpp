#include "std_lib_facilities.h"

int main()
{

    int rps = 0;
    do
    {

        int random = 0;

        cout << "Type the corresponding number if you want to play Rock (1), Paper (2) or Scissors(3): ";
        cin >> rps;

        switch (rps)
        {
        case 1:
            random = rand() % 3;
            if (random == 0)
            {
                cout << "Rock against Rock, IS A DRAW\n";
            }
            if (random == 1)
            {
                cout << "Rock against paper, YOU LOSE\n";
            }
            if (random == 2)
            {
                cout << "Rock against Scissors, YOU WIN\n";
            }

            break;
        case 2:
            random = rand() % 3;
            if (random == 0)
            {
                cout << "Paper against Rock, YOU WIN\n";
            }
            if (random == 1)
            {
                cout << "Paper against paper, IS A DRAW\n";
            }
            if (random == 2)
            {
                cout << "Paper against Scissors, YOU LOSE\n";
            }
            break;
        case 3:
            random = rand() % 3;

            if (random == 0)
            {
                cout << "Scissors against Rock, YOU LOSE\n";
            }
            if (random == 1)
            {
                cout << "Scissors against paper, YOU WIN\n";
            }
            if (random == 2)
            {
                cout << "Scissors against Sicissors, IS A DRAW\n";
            }

            break;

        default:
            cout << "you are a fool, you have to enter a valid number\n";
            break;
        }
        cout << "if you want to play again please type 4 other wise type another character:";
        cin>>rps;
    } while (rps == 4);
    cout<<"thanks for playing\n";

    keep_window_open();
    return 0;
}