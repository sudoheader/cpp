//clang 3.8.0

#include <iostream>
using namespace std;

int secondMain()
{
    cout << "In secondMain!\n";
}

int main()
{
    secondMain();
    cout << "Hello, world!\n";
    secondMain();
}