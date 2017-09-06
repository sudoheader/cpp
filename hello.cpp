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
    cout << "Score: " << aMain << "\n";
    secondMain(aMain);
}