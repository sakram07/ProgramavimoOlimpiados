#include <iostream>

using namespace std;

void sortboth(int stipris[], int numeris[], int n) {
       int i, key, j, numerkey;
       for (i = 1; i < n; i++) {
           key = stipris[i];
           numerkey = numeris[i];
           j = i - 1;

           while (j >= 0 && stipris[j] > key) {
               stipris[j + 1] = stipris[j];
               numeris[j + 1] = numeris[j];
               j = j - 1;
           }

           stipris[j + 1] = key;
           numeris[j + 1] = numerkey;
       }
}

int main() {
    int n, k;
    cin >> n >> k;

    int stipris[n];
    int numeris[n];

    for (int i = 0; i < n; i++) {
        cin >> stipris[i];
        numeris[i] = i;
    }

    sortboth(stipris, numeris, n);

    for (int i = n - 1; i >= n - k; i--) {
        cout << numeris[i] + 1 << endl;
    }


}
