//clang 3.8.0

#include <iostream>
using namespace std;

int GlobalA = 9;

void secondMain(int aSecondMain)
{
    cout << "In secondMain! " << aSecondMain << "\n";
}

int main()
{
    int aMain = 3;
    int bMain = 9;
    if(aMain == 3)
    {
        aMain = aMain + 1;
    }
    else
    {
        aMain = 2;
    }
    cout << "Score: " << aMain << "\n";
    // secondMain(aMain);
}