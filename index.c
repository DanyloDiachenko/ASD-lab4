#include <stdio.h>
#include <math.h>

float getDistanceByCoordinates(float aX, float aY, float aZ, float bX, float bY, float bZ);

int main() {
    const float xA = 1, yA = 3, zA = 5;
    const float xB = 6, yB = 8, zB = 2;
    const float xC = -1, yC = -4, zC = -7;

    const float xP = 0, yP = 0, zP = 0;

    const float pa = getDistanceByCoordinates(xA, yA, zA, xP, yP, zP);
    const float pb = getDistanceByCoordinates(xB, yB, zB, xP, yP, zP);
    const float pc = getDistanceByCoordinates(xC, yC, zC, xP, yP, zP);

    if (pa < pb && pa < pc) {
        printf("A");
    } else if (pb < pa && pb < pc) {
        printf("B");
    } else if (pc < pa && pc < pb) {
        printf("C");
    } else if (pa == pb && pa < pc) {
        printf("A B");
    } else if (pa == pc && pa < pb) {
        printf("A C");
    } else if (pb == pc && pb < pa) {
        printf("B C");
    } else {
        printf("A B C");
    }

    return 0;
}

float getDistanceByCoordinates(float aX, float aY, float aZ, float bX, float bY, float bZ) {
    return sqrt(pow(bX - aX, 2.0) + pow(bY - aY, 2.0) + pow(bZ - aZ, 2.0));
}