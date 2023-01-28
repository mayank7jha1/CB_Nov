#include <iostream>
using namespace std;
#define ll long long
int main() {
    ll n, m;
    cin >> n >> m;
    ll i = (n == m) ? m : m + 1;
    ll grain = n;
    grain = grain - i;
    while (grain > 0) {
        i++;
        grain += m;
        grain -= i;
    }
    ll ans = n < m ? n : i;
    cout << ans << endl;
}


// #include<bits/stdc++.h>

// using namespace std;

// int main() {
//     long long n, m;
//     cin >> n >> m;
//     if (n <= m) {
//         cout << n << endl;
//     }
//     else {
//         long long l = 0, r = 2e9, mid;
//         while (l < r) {
//             mid = (l + r) / 2;
//             long long k = mid * (mid + 1) / 2;
//             if (k >= n - m) {
//                 r = mid;
//             }
//             else {
//                 l = mid + 1;
//             }
//         }
//         cout << m + l;
//     }
// }



#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    if (m >= n) {
        cout << n << endl;
    }
    else {
        long long l = 0, r = 2000000000, mid;
        while (l <= r) {
            mid = (l + r) / 2;
            //yaha ka mid is aapke equation ka "k"
            long long k1 = mid * (mid + 1) / 2;
            long long k2 = (mid - 1) * mid / 2;
            if (k1 >= n - m && k2 < n - m) {
                //Mid is your answer: ye sure hain ki answer will exist:
                break;
            }
            else if (k1 < n - m) {
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }
        cout << m + mid;
    }
}
