// Hikmet Karkour – 23103091057
#include <iostream>
#include <time.h>
using namespace std;

int randomNumber();
bool checkGuess(int num, int randomNum);

int main()
{
    int guess;
    bool run = true;
    int totalTry = 0;
    int randomNum = randomNumber();
    cout << randomNum << endl;

    while (run)
    {

        cout << "Enter Guess Num (0-100): ";
        cin >> guess;
        totalTry += 1;
        if (checkGuess(guess, randomNum))
        {
            run = false;
            cout << "Total Try: " << totalTry << endl;
        }
    }

    return 0;
}

int randomNumber()
{
    srand(time(NULL));

    return rand() % 100 + 1;
}

bool checkGuess(int num, int randomNum)
{

    if (randomNum == num)
    {
        cout << "You did win!\n";
        return true;
    }
    else if (randomNum > num)
    {
        cout << "Number you entered smaller.\n";
        return false;
    }
    else
    {
        cout << "Number you entered bigger.\n";
        return false;
    }
}
