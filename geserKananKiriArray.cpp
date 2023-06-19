#include <iostream>
using namespace std;

void geserKanan(int arr[], int n, int jumlahGeser) {
    for (int i = 0; i < jumlahGeser; i++) {
        int temp = arr[n - 1];
        for (int j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }
}

void geserKiri(int arr[], int n, int jumlahGeser) {
    for (int i = 0; i < jumlahGeser; i++) {
        int temp = arr[0];
        for (int j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[n - 1] = temp;
    }
}

int main() {
    int n;
    cout << "Masukkan jumlah elemen dalam array: ";
    cin >> n;

    int arr[n];
    cout << "Masukkan elemen-elemen array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int jumlahGeser;
    cout << "Masukkan jumlah pergeseran: ";
    cin >> jumlahGeser;

    geserKanan(arr, n, jumlahGeser);

    cout << "Array setelah pergeseran ke kanan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    geserKiri(arr, n, jumlahGeser);

    cout << "Array setelah pergeseran ke kiri: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

