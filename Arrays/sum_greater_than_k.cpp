#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int K;
    cin >> K;

    int sum = 0;

    for(int i = 0; i < n; i++) {
        if(arr[i] > K) {
            sum += arr[i];
        }
    }

    cout << sum;

    return 0;
}

TC - O(N)
SC - O(1) 
