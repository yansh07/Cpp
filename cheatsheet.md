# Here is will paste all the cheatsheet, macros, and shortcuts - which may help in faster execution, memory efficiency and also help in competitive coding, and leetcode problems.

```
#include <bits/stdc++.h>
using namespace std;

#define int long long      // bade numbers ke liye (optional)
#define INF 1e9            // ~ 1 billion (INT_MAX ke barabar)
#define NINF -1e9          // ~ -1 billion (INT_MIN ke barabar)
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
```

## ⚡ CP Black Book: Must-Know Hidden Gyaan
1️⃣ Fast Input / Output

**Contest me cin/cout slow ho jaata hai → use:**

ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);

**Ye scanf/printf ke barabar fast banata hai.**

## 2️⃣ Macros & Shortcuts
#define int long long     // overflow se bachne ke liye (10^18 problems)
#define INF 1e18          // Large value (infinity ka replacement)
#define NINF -1e18        // Negative infinity
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define yes cout << "YES\n"
#define no cout << "NO\n"


## 3️⃣ STL Hacks

### Max element in vector:
*max_element(all(v))

### Sort descending:
sort(rall(v));

### Erase duplicates:
v.erase(unique(all(v)), v.end());

Map with default 0 → use unordered_map<int,int> mp; mp[x]++;


## 4️⃣ Debugging Template

### Contest ke waqt print karne ka time nahi hota → macro:

#define debug(x) cerr << #x << " = " << x << endl;

Example:
debug(arr[i]);
→ prints: arr[i] = 42 (sirf cerr pe, output kharab nahi hota).


## 5️⃣ Common Constants
const int MOD = 1e9+7;   // modulus (famous prime)
const int MOD2 = 998244353; // doosra contest prime
const int MAXN = 2e5+5;  // array/vector upper bound


## 6️⃣ Binary Search Helpers

Instead of writing custom loop har baar:

auto it = lower_bound(all(v), x); // first >= x
auto it = upper_bound(all(v), x); // first > x


## 7️⃣ Graph Tricks

Adjacency list:
vector<int> g[n+1];

BFS/DFS skeleton ready rakho → time bachega.



## 8️⃣ Custom Comparator

Sorting complex structures ke liye:

sort(all(v), [](auto &a, auto &b){
    return a.second > b.second; // example: sort by second desc
});



## 9️⃣ Infinite Loop Shortcut
while(true) { ... }   // but CP me macro banate hain:
#define forever for(;;)



## 🔟 Ready-Made CP Template

Contest ke liye ekdum boilerplate:

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define INF 1e18
#define MOD 1000000007
#define FAST ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int32_t main() {
    FAST;
    int t; cin >> t;
    while(t--) {
        // solve each test case
    }
    return 0;
}

## 📌 Secret Resources (outside tutorial world)

Codeforces blogs → sabse zyada hidden tricks yahi milti hai.
Search: “CP template”, “tricks”, “macros”.
CP-Algorithms (cp-algorithms.com) → algorithm + STL usage ekdum clean.
Editorials ka code → har contest ke editorial me mast shortcuts milte hain.