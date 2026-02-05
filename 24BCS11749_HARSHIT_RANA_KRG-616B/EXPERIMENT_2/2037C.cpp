#include <iostream>
using namespace std;
 
int main() {
    int x;
    cin >> x;
    while (x--) {
        int y;
        cin >> y;
        if (y < 5) {
            cout << -1 << endl;
            continue;
        }
        for (int z = 2; z <= y; z += 2) {
            if (z != 4) {
                cout << z << " ";
            }
        }
        cout << "4 5 ";
        for (int z = 1; z <= y; z += 2) {
            if (z != 5) {
                cout << z << " ";
            }
        }
        cout << endl;
    }
    return 0;
}