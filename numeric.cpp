///token organization part 1
#include <iostream>
#include <string>
using namespace std;

bool x(const string& a) {
    for (char c : a) {
        if (!isdigit(c)) {
            return false;
        }
    }
    return true;
}

int main() {
    string a;

    cout << "Please give an input :";
    cin >> a;

    if (x(a)) {
        cout << "The input you give is a numeric constant" << endl;
    } else {
        cout << "The input you give is not a numeric constant" << endl;
    }

    return 0;
}
