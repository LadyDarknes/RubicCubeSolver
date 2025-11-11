#include <iostream>
#include <string>
#include "cube.h"
using namespace std;

int main() {
    for (int face = 0; face < 6; face++) {
        cout << "Enter 9 colors for face " << face<< endl;
        string input;
        cin >> input;
        int index = 0;
        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
                cube[face][row][col] = input[index];
                index++;
            }
        }
        cout << face << "bellege kaydedildi\n\n";
    }

    return 0;
}
