#include <iostream>
#include <string>

using namespace std;

bool isOperator(char c)
 {

    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '=' || c == '<' || c == '>' || c == ':') {
        return true;
    } else {
        return false;
    }
}

int main()
 {
    string a;

    cout << "Enter an input : ";
    cin >> a;

    int operatorCount = 0;

    for (int i = 0; i < a.length(); i++)
    {
        if (isOperator(a[i]))
        {
            operatorCount++;
            cout << "Operator " << operatorCount << ": " << a[i] << endl;
        }
    }

    return 0;
}
