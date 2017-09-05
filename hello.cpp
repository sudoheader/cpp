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
    int answer;
    string yourname = "Raymond";
    bool boolVar = true;
    answer = a + b;
    cout << "Score: " << answer << "\n";
    secondMain();
    // thirdMain();
}