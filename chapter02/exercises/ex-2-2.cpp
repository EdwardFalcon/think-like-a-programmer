#include <iostream>
using std::cin;
using std::cout;

//    ##
//   ####
//  ######
// ########
// ########
//  ######
//   ####
//    ##

int main()
{
    for (int row = 1; row <= 8; row++)
    {
        int hashes = 9 - abs(4.5 - row) * 2;
        int spaces = abs(4.5 - row);
        for (int hashNum = 1; hashNum <= spaces; hashNum++)
            cout << " ";
        for (int hashNum = 1; hashNum <= hashes; hashNum++)
            cout << "#";
        cout << "\n";
    }
    return 0;
}
