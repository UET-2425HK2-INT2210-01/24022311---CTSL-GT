#include <iostream>
using namespace std;

int demCacCap(int n, int arr[]) {
    int dem = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                dem++;
            }
        }
    }

    return dem;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << demCacCap(n, arr) << endl;
    return 0;
}
