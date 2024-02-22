#include <iostream>

int main()
{
    int n = 6;
    int i, j;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < 13; j++)
        {
            if (j < n - i)
            {
                
            }
            std::cout << "*";
        }

        std::cout << std::endl;
    }

    return 0;
}

/*****$ ****
 ***$$$ ***
 **$$$$$ **
 *$$$$$$$ * */