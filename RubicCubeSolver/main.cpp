#include <iostream>
#include <vector>
using namespace std;

char cube[6][3][3] = { // küp yüzü sayısı; 6 yüz, her yüz 3x3.
    {   // 0. yüz (U) - Beyaz
        {'W','W','W'},
        //0 , 1,  2
        {'W','W','W'},
        {'W','W','W'}
    },//1
    {   // 1. yüz (R) - Kırmızı
        {'R','R','R'},
        {'R','R','R'},
        {'R','R','R'}
    },
    {   // 2. yüz (F) - Yeşil
        {'G','G','G'},
        {'G','G','G'},
        {'G','G','G'}
    },
    {   // 3. yüz (L) - Turuncu
        {'O','O','O'},
        {'O','O','O'},
        {'O','O','O'}
    },
    {   // 4. yüz (B) - Mavi
        {'B','B','B'},
        {'B','B','B'},
        {'B','B','B'}
    },
    {   // 5. yüz (D) - Sarı
        {'Y','Y','Y'},
        {'Y','Y','Y'},
        {'Y','Y','Y'}
    }
};

bool isSolved() {
	for (int face = 0; face < 6; face++) { // Her yüzü sıra sıra alan döngü
        char color = cube[face][0][0]; // döndüde artan yüz sayısının rengini al
        for (int row = 0; row < 3; row++) { // 
            for (int col = 0; col < 3; col++) {
                if (cube[face][row][col] != color) {
                    return false;
                }
            }
        }
    }
    return true;
}

int main() {
    std::cout << cube[0][0][0];
	return 0;
}