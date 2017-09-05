//clang 3.8.0

#include <iostream>
using namespace std;

int GlobalA = 9;

void secondMain()
{
    cout << "In secondMain! " << GlobalA << "\n";
}

int main()
{
    int a = 3;
    int b = 4;
    string yourname = "Raymond";
    bool boolVar = true;
    cout << "Score: " << GlobalA << "\n";
    secondMain();
    // thirdMain();
}