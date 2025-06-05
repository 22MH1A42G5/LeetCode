#include<bits/stdc++.h>
#define vi vector<ll>
#define ll long long
#define ld long double
#define pb push_back
#define f first
#define s second
#define ALL(x) begin(x), end(x)
#define fur(i, n) for (int i = 0; i < n; i++) 
#define rev(x) reverse(x.begin(), x.end());
#define sort(x) sort(x.begin(), x.end())
#define rsort(x) sort(x.rbegin(), x.rend())
#define MAX(x) *max_element(ALL(x))
#define MIN(x) *min_element(ALL(x))
using namespace std;

ll mod_add(ll a, ll b, ll m) {
    a %= m; b %= m;
    return (a + b) % m;
}

ll mod_sub(ll a, ll b, ll m) {
    a %= m; b %= m;
    return (a - b + m) % m;
}

ll mod_mul(ll a, ll b, ll m) {
    a %= m; b %= m;
    return (a * b) % m;
}

ll binpow(ll a, ll b, ll m) {
    ll res = 1;
    a %= m;
    while (b > 0) {
        if (b & 1) res = mod_mul(res, a, m);
        a = mod_mul(a, a, m);
        b >>= 1;
    }
    return res;
}

// Modular inverse for prime modulus using Fermat's Little Theorem
ll mminvprime(ll a, ll m) {
    return binpow(a, m - 2, m);
}

struct Hashing{
    string s;
    int n;
    int primes;
    vector<ll> hashPrimes = {1000000009};
    const ll base = 26;
    vector<vector<ll>> hashValues;
    vector<vector<ll>> powersOfBase;
    vector<vector<ll>> inversePowersOfBase;
    Hashing(string a){
        primes =hashPrimes.size();
        hashValues.resize(primes);
        powersOfBase.resize(primes);
        inversePowersOfBase.resize(primes);
        s = a;
        n = s.length(); 
        for(int i = 0; i < hashPrimes.size(); i++) {
            powersOfBase[i].resize(n + 1);
            inversePowersOfBase[i].resize(n + 1);
            powersOfBase[i][0] = 1;
            for(int j = 1; j <= n; j++){
                powersOfBase[i][j] = (base * powersOfBase[i][j - 1]) % hashPrimes[i];
            }
            inversePowersOfBase[i][n] = mminvprime(powersOfBase[i][n], hashPrimes[i]);
            for(int j = n - 1; j >= 0; j--){
                inversePowersOfBase[i][j] = mod_mul(inversePowersOfBase[i][j + 1], base, hashPrimes[i]);
            } 
        }
        for(int i = 0; i < hashPrimes.size(); i++) {
            hashValues[i].resize(n);
            for(int j = 0; j < n; j++){
                hashValues[i][j] = ((s[j] - 'a' + 1LL) * powersOfBase[i][j]) % hashPrimes[i];
                hashValues[i][j] = (hashValues[i][j] + (j > 0 ? hashValues[i][j - 1] : 0LL)) % hashPrimes[i];
            }
        }
    }
    vector<ll> substringHash(int l, int r){
        vector<ll> hash(primes);
        for(int i = 0; i < primes; i++){
            ll val1 = hashValues[i][r];
            ll val2 = l > 0 ? hashValues[i][l - 1] : 0LL;
            hash[i] = mod_mul(mod_sub(val1, val2, hashPrimes[i]), inversePowersOfBase[i][l], hashPrimes[i]);
        }
        return hash;
    }
};
class Solution {
public:
    string longestPrefix(string str){
        Hashing H(str);
        int n = str.length();
        // for(int i = 0 ; i < str.size() ; i++){
        //     cout << H.hashValues[0][i] << " ";
        // }
        ll i = 0 , j = n-1;
        ll maxSize = 0;
        ll l = -1, r = -1;
        while(i < n && j > 0){
            vector<ll> vec = H.substringHash(j , n-1);
            if(H.hashValues[0][i] == vec[0]){
                if(maxSize < n-j){
                    l = j;
                    r = n-1;
                }
            }
            i++;
            j--;
        }
        if(l == -1){
            return "";
        }
        string ans = "";
        for(int k = l ; k <= r; k++){
            ans += str[k];
        }
        // cout << ans << " ";
        return ans;
    }
};