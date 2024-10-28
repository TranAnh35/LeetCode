#include <stdio.h>
#include <math.h>

double largestTriangleArea(int** points, int pointsSize, int* pointsColSize){
    double result = 0;
    for(int i = 0; i < pointsSize; ++i)
        for(int j = i + 1; j < pointsSize; ++j)
            for(int k = j + 1; k < pointsSize; ++k){
                int xA = points[i][0], yA = points[i][1];
                int xB = points[j][0], yB = points[j][1];
                int xC = points[k][0], yC = points[k][1];
                double area = fabs(0.5 * (xB*yC + xA*yB + yA*xC - yA*xB - yB*xC - xA*yC));
                result = (result > area) ? result : area;
            }
    return result;
}

int main() {
    int pointsSize = 5;
    int pointsColSize = 2;
    int points[5][2] = {{0,0},{0,1},{1,0},{0,2},{2,0}};
    int* pointsPtr[5];
    for(int i = 0; i < pointsSize; ++i)
        pointsPtr[i] = points[i];
    printf("%f\n", largestTriangleArea(pointsPtr, pointsSize, &pointsColSize));

    return 0;
}