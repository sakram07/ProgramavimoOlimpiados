#include <iostream>
#include <cstdio>

using namespace std;

int gcd(int a, int b) {
    int t;
    while (b != 0) {
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int lcmm(int arr[], int n) {
    int result = 1;
    for (int i = 0; i < n; i++) {
        result = lcm(arr[i], result);
    }
    return result;
}

int main() {
    //freopen("vaikai.in", "r", stdin);
    //freopen("vaikai.out", "w", stdout);

    int n;
    cin >> n;

    int arr[n];
    string temp;

    for (int i = 0; i < n; i++) {
        cin >> temp >> arr[i];
    }

    cout << lcmm(arr, n);
}
