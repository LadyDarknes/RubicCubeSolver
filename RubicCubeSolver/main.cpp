#include <iostream>
#include <vector>
using namespace std;


#include "cube.h"

int main() {
    initCube();
	cube[0][0][0] = 'W';
	isSolved();
}
