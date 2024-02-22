// Hikmet Karkour – 23103091057
#include <iostream>
#include <time.h>
using namespace std;

int randomNumber();
string check(int guess, int randomNum);
void printChoices();
string convertWord(int num);

int main()
{
    int guess;
    int randomNum;
    bool run = true;

    while (run)
    {
        randomNum = randomNumber();
        printChoices();
        cin >> guess;
        cout << "Your Choice: " << convertWord(guess) << " , Computer: " << convertWord(randomNum) << endl;
        cout << "Result: " << check(guess, randomNum) << endl;
    }

    return EXIT_SUCCESS;
}

int randomNumber()
{
    srand(time(NULL));

    return rand() % 3 + 1;
}

void printChoices()
{
    cout << "--- New Game ---\n";
    cout << "1.Tas\n2.Kagit\n3.Makas\nEnter choice (1-3): ";
}

string convertWord(int num)
{

    switch (num)
    {
    case 1:
        return "Tas";
    case 2:
        return "Kagit";
    case 3:
        return "Makas";
    default:
        return "Null";
    }
}

string check(int num, int randomNum)
{
    switch (num)
    {
    case 1:
        if (randomNum == 1)
        {
            return "Equality.";
        }
        else if (randomNum == 2)
        {
            return "Computer Win.";
        }
        else
        {

            return "You did Win !!";
        }

    case 2:
        if (randomNum == 1)
        {
            return "You did Win !!";
        }
        else if (randomNum == 2)
        {
            return "Equality.";
        }
        else
        {

            return "Computer Win.";
        }

    case 3:
        if (randomNum == 1)
        {
            return "Computer Win.";
        }
        else if (randomNum == 2)
        {
            return "You did Win !!";
        }
        else
        {
            return "Equality.";
        }
    default:
        return "Error";
    }
}
