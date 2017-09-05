//clang 3.8.0

#include <iostream>
using namespace std;

void secondMain()
{
    cout << "In secondMain!\n";
}
void thirdMain()
{
    cout << "In thirdMain!\n";
}

int main()
{
    cout << "Hello, world!\n";
    secondMain();
    thirdMain();
}