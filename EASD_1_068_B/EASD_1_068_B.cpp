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
    for (k = low; k <= high; k++) {
        ojan[k] = b[k];
    }
}
void mergeSort(int ojan[], int low, int high) {
    if (low >= high) {
        return;
    } 
    int mid = (low + high) / 2;
    mergeSort(ojan, low, mid);
    mergeSort(ojan, mid + 1, high);
    merge(ojan, low, mid, high);
}
void input(int ojan[], int& size) {
    cout << "MASUKAN JUMLAH ELEMEN (maksimum " << MAX_SIZE << "): ";
    cin >> size;
    if (size > MAX_SIZE) {
        cout << "JUMLAH ELEMENT MELEBIHI KAPASITAS MAKSIMUM, MERUBAH JUMLAH ELEMENT MENJADI : " << MAX_SIZE << endl;
        size = MAX_SIZE;

    }
    cout << "MASUKAN ELEMENT : ";
    for (int i = 0; i < size; i++) {
        cin >> ojan[i];
    }
}
void display(int ojan[], int size) {
    cout << "Array yang sudah disusun : ";
    for (int i = 0; i < size; i++) {
        cout << ojan[i] << " ";
    }
    cout << endl;
}



   




   



