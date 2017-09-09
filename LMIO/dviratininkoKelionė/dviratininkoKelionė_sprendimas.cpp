#include <iostream>

using namespace std;

int cycletime(int n, int t, int arr[][2]) {
    int result = 0;
    int totaltime = 0;

    while (totaltime < t) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < arr[i][0]; j++) {
                result += arr[i][1];
                totaltime++;
                if (totaltime >= t) {
                    break;
                }
            }
        }
    }
    return result;
}

int main() {
    int n, t;
    cin >> n >> t;

    int arr[n][2];
    for (int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    int answer = cycletime(n, t, arr);
    cout << answer;
}
