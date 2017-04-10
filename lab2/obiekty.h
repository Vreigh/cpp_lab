#include <iostream>
using namespace std;

class Point
{
private:
    double x;
    double y;
public:
    Point();
    Point(double x, double y);
    friend ostream & operator<<(ostream &out, const Point &point);
};

class Matrix
{
private:
    double mxx;
    double myy;
    double mxy;
public:
    Matrix();
    Matrix(double mxx, double myy, double mxy);

    Matrix operator-(Matrix &other);
    void operator-=(Matrix &other);
    bool operator<(Matrix &other);
    operator double();
    double& operator[](int i);
    friend ostream & operator<<(ostream &out, const Matrix &matrix);
    friend Matrix operator*(Matrix &matrix, double p);
    friend Matrix operator*(double p, Matrix &matrix);

    double getW();
};
