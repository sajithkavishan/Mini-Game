#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int count = 0;
    do {
        string open;
        cout << "You have " << 3 - count << " Mystery Box. \n";
        cout << "Do you want to open it? ";
        cin >> open;

        for (int i = 0; i < open.length(); i++) {
            open[i] = tolower(open[i]);
        }
        // cout << open << endl;

        if (open == "yes") {
            srand(time(0));
            int randnum = rand() % 10 + 1;

            switch (randnum) {
                case 1:
                    cout << "You win a Bumber sticker. \n \n";
                    break;
                case 2:
                    cout << "You win a lost dog. \n \n";
                    break;
                case 3:
                    cout << "You win nothing. \n \n";
                    break;
                case 4:
                    cout << "You win a free lunch. \n \n";
                    break;
                case 5:
                    cout << "You win a bat. \n \n";
                    break;
                case 6:
                    cout << "You win a fish. \n \n";
                    break;
                case 7:
                    cout << "You win a vibrator. \n \n";
                    break;
                case 8:
                    cout << "You win a free chance. \n \n";
                    break;
                case 9:
                    cout << "You win a socks. \n \n";
                    break;
                case 10:
                    cout << "You win nothing and you suck. \n \n";
                    break;
            }
            count++;
        }
        else if (open == "no") {
            cout << "You choose not to open the Mystery Box. \n \n";
            break;
        }
        else {
            cout << "Please enter yes or no. \n \n";
            count = 0;
        }
        
    } while (count < 3);

    return 0;
}