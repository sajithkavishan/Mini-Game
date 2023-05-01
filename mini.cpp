#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int count = 0;
    int invalid_input = 0;

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
                    cout << "You win a Play station 5. \n \n";
                    break;
                case 3:
                    cout << "You win nothing. \n \n";
                    break;
                case 4:
                    cout << "You win a x box. \n \n";
                    break;
                case 5:
                    cout << "You win a free lunch. \n \n";
                    break;
                case 6:
                    cout << "You win a cheap mouse. \n \n";
                    break;
                case 7:
                    cout << "You win a vibrator. \n \n";
                    break;
                case 8:
                    cout << "You win a Mystery Box. \n \n";
                    count--;
                    break;
                case 9:
                    cout << "You win a fake rolex watch. \n \n";
                    break;
                case 10:
                    cout << "You win nothing, you suck. \n \n";
                    break;
            }
            count++;
            invalid_input = 0;
        }
        else if (open == "no") {
            cout << "You choose not to open the Mystery Box. \n \n";
            break;
        }
        else {
            cout << "Please enter yes or no. \n \n";
            invalid_input++;
        }

        if(invalid_input == 3){
            cout << "Too many invalid answers. please try again. \n \n";
            break;
        }
        
    } while (count < 3);

    return 0;
}