#include <iostream>
#include "calc.h"
using namespace std;

int main()
{
    int x = 34;
    int y = 5;
    int answer = 0;

    answer = sum(x, y);

    cout << "答えは " << answer << endl;
}

