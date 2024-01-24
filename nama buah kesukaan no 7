#include <iostream>
#include <string>

using namespace std;

int sparse_search(string arr[], int n, string key) {
    int s = 0;
    int e = n - 1;

    while (s <= e) {
        int mid = (s + e) / 2;
        int mid_left = mid - 1;
        int mid_right = mid + 1;

        if (arr[mid] == key) {
            return mid;
        } else if (mid_left >= 0 && arr[mid_left] == key) {
            return mid_left;
        } else if (mid_right < n && arr[mid_right] == key) {
            return mid_right;
        }

        if (arr[mid] < key) {
            s = mid + 2;
        } else {
            e = mid - 2;
        }
    }

    return -1;
}

int main() {
    cout << "Masukkan data pencarian: ";
    string arr[] = {"ai", "robot", "love", "bat", "bird", "blue", "car", "cat", "big", "color", "dog", "music"};
    int n = sizeof(arr) / sizeof(arr[0]);
    string key;
    cin >> key;

    cout << "Sparse search result: " << sparse_search(arr, n, key) << endl;

    return 0;
}
