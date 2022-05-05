                                                    // problem link: https://codeforces.com/problemset/problem/69/A
#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define dd double
#define ld long double
#define PQ priority_queue
#define pii pair<int,int>
#define pll pair<ll,ll>
#define S second
#define F first
#define MP make_pair
#define dpp(arr,val) memset(arr,val,sizeof(arr))
#define endl "\n"
using namespace std;

int main() { IOS
    int n{}; cin >> n;
    int force{}, x{}, y{}, z{};
    for(int i{}; i<n; i++)
        for(int j{}; j<3; j++) {
            cin >> force;
            if(j==0)      x += force;
            else if(j==1) y += force;
            else if(j==2) z += force;
        }
    if(x==0 && y==0 && z==0) cout << "YES";
    else                     cout << "NO";
}
