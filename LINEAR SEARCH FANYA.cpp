#include <iostream>
using namespace std;

// Fungsi Linear Search
int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x)
            return i; // Elemen ditemukan
    }
    return -1; // Elemen tidak ditemukan
}

int main() {
	cout << "Nama : Fanya Rizqita Nasution" << endl;
	cout << "Nim : 241011402811" << endl;
    int arr[] = {4, 2, 1, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5; // Elemen yang dicari

    int result = linearSearch(arr, n, x);
    if (result != -1)
        cout << "Elemen ditemukan pada indeks: " << result << endl;
    else
        cout << "Elemen tidak ditemukan\n";
    return 0;
}
