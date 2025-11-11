#include "cube.h"

char cube[6][3][3];

void initCube() {
    const char colors[6] = { 'W','R','G','O','B','Y' };
    for (int f = 0; f < 6; f++) {
        for (int r = 0; r < 3; r++) {
            for (int c = 0; c < 3; c++) {
                cube[f][r][c] = colors[f];
            }
        }
    }
}

bool isSolved() {
    for (int face = 0; face < 6; face++) {
        char color = cube[face][0][0];
        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
                if (cube[face][row][col] != color) {
                    std::cout << 0 << std::endl;
                    return false;
                }
            }
        }
    }
    std::cout << 1 << std::endl;
	return true;
}
