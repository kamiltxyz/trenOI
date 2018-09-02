#include <bits/stdc++.h>
using namespace std;

//////////////////////////// templejt /////////////////////////////////

// krotsze nazwy dlugich typow

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

// rzeczy z io

#define endl "\n"
#define newio() ios_base::sync_with_stdio(false); cout.tie(NULL); cerr.tie(NULL); cin.tie(NULL)
#define precision(x) cout << fixed << setprecision(x)

// kontenery, które często używam

// pary
#define PR pair
#define PII PR<int, int>
#define fi first
#define se second
#define mp make_pair

// wektory
#define VEC vector
#define VL VEC<ll>
#define VI VEC<int>
#define VPI VEC<PII>
#define pb emplace_back
#define rb pop_back
#define bk back()
#define ft front()

// sety
#define SI set<int>
#define SL set<ll>

// mapy
#define umap unordered_map
#define MII map<int, int>
#define MLI map<ll, int>
#define MIL map<int, ll>
#define MSI map<string, int>
#define UMII umap<int, int>
#define UMLI umap<ll, int>
#define UMIL umap<int, ll>
#define UMIS umap<int, string>

// pętle

#define rep(N) for(auto i = 0; i < N; ++i)
#define repp(I, N) for(auto i = I; i < N; ++i)

#define repi(N) for(auto i = N - 1; i >= 0; --i)
#define reppi(I, N) for(auto i = N - 1; i >= I; --i)

#define repk(K) for(auto &v : K)
#define fore(itr, x)   for (__typeof(x.begin()) itr = x.begin(); itr != x.end(); itr ++)
#define forei(itr, x)  for (__typeof(x.end()) itr = x.end() - 1; itr != x.begin() - 1; itr --)

// funkcje do kontenerów

#define sz(x) (int)((x).size())
#define all(x) (x).begin(), (x).end()

template<class T>
ostream &operator<<(ostream& os, vector<T> V) {
  repk(V)
    os << v << " ";
  return os << endl;
}

template<class T>
ostream &operator<<(ostream& os, set<T> V) {
  repk(V)
    os << v << " ";
  return os << endl;
}

template<class T, class Y>
ostream &operator<<(ostream& os, map<T, Y> V) {
  repk(V)
    os << v << " ";
  return os << endl;
}

template<class T, class Y>
ostream &operator<<(ostream& os, umap<T, Y> V) {
  repk(V)
    os << v << " ";
  return os << endl;
}

// debugowanie

#define _DEV // usuń to przed wysłaniem
#ifdef _DEV
#define debug(x) { cerr << #x << " == " << x << endl; }
#else
#define debug(x)
#endif

// kilka liczb pierwszych

VL primes = {
  7, 17, 33, 257, 65537, 1000000007, 1000000009
  //  0,  1,  2,   3,     4,          5,          6
};

///////////////////////////////////////////////////////////////////////



int main() {


  return 0;
}

