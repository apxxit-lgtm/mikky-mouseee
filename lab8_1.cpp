#include <iostream>
using namespace std;

int main()
{
    char x;
    cout << "Input your rank: ";
    cin >> x;
    if (x == 'S')
        cout << "You have received Super Ultra Rare Unit!!!\n";
    if (x == 'S' || x == 'A')
        cout << "You have received 5 gems.\n";
    if (x == 'S' || x == 'A' || x == 'B')
        cout << "You have received 1 gems.\n";
    if (x == 'S' || x == 'A' || x == 'B' || x =='C')
        cout << "You have received 2000 coins.\n";
    if (x == 'S' || x == 'A' || x == 'B' || x == 'C' || x == 'D')
        cout << "You have received very KAK items.\n";


    return 0;
}


