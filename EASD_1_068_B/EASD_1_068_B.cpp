#include <iostream>
using namespace std;

const int MAX_SIZE = 88; // 68 + 20 - 2 * 15 + 10 + 20 = 88 (68 = 2 digit nim belakang saya)

void merge(int ojan[], int low, int mid, int high) { // ARR DIGANTI OLEH NICKNAME / NAMA SEBUTAN, NAMA SEBUTAN SAYA OJAN
    int i = low, FR = mid + 1, k = low; //NAMA SAYA : FAUZAN ALTHAF RIANTO, MAKA INISIAL SAYA FR
    int b[MAX_SIZE];
    while (i <= mid && FR <= high) {
        if (ojan[i] <= ojan[FR]) {
            b[k] = ojan[i];
            i++;
        }
        else {
            b[k] = ojan[FR];
            FR++;
        }
        k++;
    }
    while (FR <= high) {
        b[k] = ojan[FR];
        FR++;
        k++;
    }
    while (i <= mid) {
        b[k] = ojan[i];
        i++;
        k++;
    }


   



