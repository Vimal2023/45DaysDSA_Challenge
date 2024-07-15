#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool isPossible(long long a[], long long b[], int n, long long k) {
        sort(a, a+n);
        sort(b, b+n);
        for(int i = 0; i<n; i++){
            if (a[i] + b[n-1-i] < k) return false;
        }
        return true;
    }
};
int main() {
    long long t = 1;
    while (t--) {
        int n = 4;
        long long k = 10;
        long long a[] = {1, 2, 2, 1};
        long long b[] = {3, 3, 3, 4};
        Solution ob;
        cout << (ob.isPossible(a, b, n, k) ? "YES" : "NO") << endl;
    }
    return 0;
}