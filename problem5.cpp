#include <iostream>
using namespace std;

int main() {
    int count = 0;
    for (char c = 'A'; c <= 'Z'; ++c) {
        cout << c;
        count++;
        if (count % 5 == 0)
            cout << endl;
        else
            cout << " ";
    }
    // To handle the case if total chars are not a multiple of 5
    if (count % 5 != 0)
        cout << endl;

    return 0;
}
