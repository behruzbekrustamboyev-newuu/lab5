#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    bool found = false;
    for (int i = 0; i <= n; ++i) {
        if (i % 10 == 0 && i != 0) {
            if (found)
                cout << ", ";
            cout << i;
            found = true;
        }
    }

    if (!found)
        cout << "No numbers divisible by 10 in the given range.";

    cout << endl;
    return 0;
}
