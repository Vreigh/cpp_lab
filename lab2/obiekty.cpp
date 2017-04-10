#include <iostream>
#include "obiekty.h"
using namespace std;

Point::Point(){
    x = 0;
    y = 0;
}

Point::Point(double x, double y){
    this->x = x;
    this->y = y;
}

ostream & operator<<(ostream &out, const Point &point){
    return out << "Wsp x: " << point.x << " Wsp y: " << point.y << endl;
}

Matrix::Matrix(){
    mxx = 0;
    myy = 0;
    mxy = 0;
}

Matrix::Matrix(double mxx, double myy, double mxy){
    this->mxx = mxx;
    this->myy = myy;
    this->mxy = mxy;
}

Matrix Matrix::operator-(Matrix &other){
    Matrix m = Matrix();
    m.mxx = mxx - other.mxx;
    m.myy = myy - other.myy;
    m.mxy = mxy - other.mxy;
    return m;
}
double Matrix::getW(){
    return mxx * myy - mxy*mxy;
}

void Matrix::operator-=(Matrix &other){
    mxx -= other.mxx;
    myy -= other.myy;
    mxy -= other.mxy;
}

bool Matrix::operator<(Matrix &other){
    return getW() < other.getW();
}

Matrix::operator double(){
    return getW();
}

double& Matrix::operator[](int i){
  if(i==0) return mxx;
  else if(i==1 || i==2) return mxy;
  else return myy;
}

ostream & operator<<(ostream &out, const Matrix &matrix){
    return out << "XX: " << matrix.mxx << " YY: " << matrix.myy << " XY " << matrix.mxy << endl;
}

Matrix operator*(Matrix &matrix, double p){
    Matrix m = Matrix();
    m.mxx = matrix.mxx * p;
    m.myy = matrix.myy * p;
    m.mxy = matrix.mxy * p;
    return m;
}
Matrix operator*(double p, Matrix &matrix){
    Matrix m = Matrix();
    m.mxx = matrix.mxx * p;
    m.myy = matrix.myy * p;
    m.mxy = matrix.mxy * p;
    return m;
}
