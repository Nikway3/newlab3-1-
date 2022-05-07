#pragma once
#include <iostream>
#include <cmath>
using namespace std;
class Matrix
{
public:
    double A [3][3]= {{2,2,2},{2,2,2},{2,2,2}};
    double B [3][3]= {{3,3,3},{3,3,3},{3,3,3}};
    double C ;
    int i,j;
Matrix (double AA[3][3], double BB[3][3]);
void plus ();
void minus();
    /*bool operator != (class Matrix A, class Matrix B)
    {
        for (i=0;i<=2;i++) {
            for (j=0;j<=2;j++)
                if (A.Matrix[i][j]!= B.Matrix[i][j])
                    return true;
            return false;
    }*/
};
bool operator == (class Matrix &AA, class Matrix &BB);
bool operator !=(class Matrix &A, class Matrix &B);
bool operator >(class Matrix &A, class Matrix &B);
bool operator <(class Matrix &A, class Matrix &B);
double  operator * (class Matrix &A, class Matrix &B);


