#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string thegame = "PARECE QUE O JOGO VIROU";
    reverse(thegame.begin(), thegame.end());
    cout << thegame << endl; // você perdeu, you lost
    return 0;
}
