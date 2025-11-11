#include <iostream>
#include <vector>
using namespace std;

class cube {
public:
    char faces[6][3][3];
    void move_U();
    bool isSolved();
};

int face1[6][3][3] = {
    {{0,0,0},{0,0,0},{0,0,0}}, // Face 0
    {{1,1,1},{1,1,1},{1,1,1}}, // Face 1
    {{2,2,2},{2,2,2},{2,2,2}}, // Face 2
    {{3,3,3},{3,3,3},{3,3,3}}, // Face 3
    {{4,4,4},{4,4,4},{4,4,4}}, // Face 4
    {{5,5,5},{5,5,5},{5,5,5}}  // Face 5
};


int main() {
	cout << face1[0][0][0] << endl;
	return 0;
}