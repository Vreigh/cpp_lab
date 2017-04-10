#include <iostream>
#include "obiekty.h"
using namespace std;

int main(){
    Point point = Point();
    cout << point;

    Matrix matrix = Matrix(1.0, 1.5, 1.0);
    Matrix matrix2 = Matrix(1.3, 1.5, 1.1);
    Matrix matrix3 = matrix * 1.8;
    matrix -= matrix3;

    cout << (matrix < matrix2) << endl;

    matrix[3] = 7.0;
    cout << matrix;

    cout << matrix[3] << endl;

    cout << "Hello World!\n";
}
