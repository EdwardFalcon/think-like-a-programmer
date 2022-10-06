#include <iostream>
using std::cin;
using std::cout;

// #            #
//  ##        ##
//   ###    ###
//    ########
//    ########
//   ###    ###
//  ##        ##
// #            #

int main()
{
    int hashes;
    int spaces;
    for (int row = 1; row <= 8; row++)
    {
        spaces = 4 - abs(row - 4.5);
        for (int hashNum = 1; hashNum <= spaces; hashNum++)
            cout << " ";
        hashes = 5 - abs(row - 4.5);
        for (int hashNum = 1; hashNum <= hashes; hashNum++)
            cout
                << "#";
        spaces = abs(row - 4.5) * 4 - 2;
        for (int hashNum = 1; hashNum <= spaces; hashNum++)
            cout << " ";
        hashes = 5 - abs(row - 4.5);
        for (int hashNum = 1; hashNum <= hashes; hashNum++)
            cout
                << "#";
        cout << "\n";
    }
    return 0;
}
