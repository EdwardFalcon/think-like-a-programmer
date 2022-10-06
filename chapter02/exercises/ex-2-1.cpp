#include <iostream>
using std::cin;
using std::cout;

// ########
//  ######
//   ####
//    ##

int main()
{
    for (int row = 1; row <= 4; row++)
    {
        for (int hashNum = 1; hashNum <= row - 1; hashNum++)
            cout << " ";
        for (int hashNum = 1; hashNum <= 10 - (row * 2); hashNum++)
            cout << "#";
        cout << "\n";
    }
    return 0;
}
