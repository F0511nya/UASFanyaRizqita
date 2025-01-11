#include <iostream>
using namespace std;

// Fungsi Binary Search
int binarySearch(int arr[], int left, int right, int x) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Jika elemen ditemukan
        if (arr[mid] == x)
            return mid;

        // Jika elemen berada di sebelah kanan
        if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; // Elemen tidak ditemukan
}

int main() {
	cout << "Nama : Fanya Rizqita Nasution" << endl;
	cout << "Nim : 241011402811" << endl;
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10; // Elemen yang dicari

    int result = binarySearch(arr, 0, n - 1, x);
    if (result != -1)
        cout << "Elemen ditemukan pada indeks: " << result << endl;
    else
        cout << "Elemen tidak ditemukan\n";
    return 0;
}
