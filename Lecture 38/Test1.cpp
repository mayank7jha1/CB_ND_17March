#include<iostream>
#include<algorithm>
using namespace std;
int b[100000001] {0};

int main() {

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);
    int smallest = a[0];
    int largest = a[n - 1];

    for (int i = 0; i < n; i++) {
        b[a[i]] = b[a[i]] + 1;
    }

    int ans = n - (b[smallest] + b[largest]);

    cout << ans << endl;


}