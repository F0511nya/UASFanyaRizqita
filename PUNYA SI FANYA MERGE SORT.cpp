#include <iostream>
using namespace std;

// Fungsi untuk menggabungkan dua bagian array
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Membuat array sementara
    int L[n1], R[n2];

    // Menyalin data ke array sementara
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Menggabungkan array sementara kembali ke array utama
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Menyalin elemen yang tersisa
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Fungsi Merge Sort
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Rekursif membagi array menjadi dua bagian
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Menggabungkan kembali hasil pembagian
        merge(arr, left, mid, right);
    }
}

int main() {
	cout << "NAMA : FANYA RIZQITA NASUTION" << endl;
	cout << "NIM : 241011402811" << endl;
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array sebelum diurutkan:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    mergeSort(arr, 0, n - 1);

    cout << "Array setelah diurutkan:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
