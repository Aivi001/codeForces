#include <bits/stdc++.h>
    #include <cmath>

            using namespace std;

            #define mp make_pair
            #define pb push_back
            #define f first
            #define s second
            #define lb lower_bound
            #define ub upper_bound


            typedef long long ll;
            typedef vector<int> vi;
            typedef map<int, int> mii;

            ll gcd(ll a, ll b) { return (b == 0 ? a : gcd(b, a % b)); }
            ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }
            bool issquare(ll w ){return trunc(sqrt(w))*trunc(sqrt(w))==w;}
            ll mod(ll to_mod,ll MOD){to_mod%=MOD;while(to_mod<0)to_mod+=MOD;return to_mod%MOD;}
            ll moduloMultiplication(ll a,ll b,ll mod){ll res = 0;a %= mod;while (b){if (b & 1)
                res = (res + a) % mod;a = (2 * a) % mod;b >>= 1;}return res;}
            ll power(ll x, ll y/*,ll p*/){ll res = 1;x = x /*% p*/;
                while (y > 0){if (y & 1)res = (res*x)/* % p*/;y = y>>1;x = (x*x) /*% p*/;}return res;}

            ll _sieve_size;bitset<10000010> bs;vi primes;

            void sieve(ll upperbound) {
              _sieve_size = upperbound + 1;bs.set();bs[0] = bs[1] = 0;
              for (ll i = 2; i <= _sieve_size; i++) if (bs[i]) {
                for (ll j = i * i; j <= _sieve_size; j += i) bs[j] = 0;primes.push_back((int)i); }
             }

            bool isPrime(ll N) {
              if (N <= _sieve_size) return bs[N];
              for (int i = 0; i < (int)primes.size(); i++)if (N % primes[i] == 0) return false;
              return true;
            }

            vi primeFactors(ll N) {
              vi factors;ll PF_idx = 0, PF = primes[PF_idx];
              while (N != 1 && (PF * PF <= N)) {
                while (N % PF == 0) { N /= PF; factors.push_back(PF); }PF = primes[++PF_idx];   }
              if (N != 1) factors.push_back(N);
              return factors;
            }

            ll numPF(ll N) {
              ll PF_idx = 0, PF = primes[PF_idx], ans = 0;
              while (N != 1 && (PF * PF <= N)) {
                while (N % PF == 0) { N /= PF; ans++; }PF = primes[++PF_idx];}
              if (N != 1) ans++;
              return ans;
            }

            ll numDiffPF(ll N) {
              ll PF_idx = 0, PF = primes[PF_idx], ans = 0;
              while (N != 1 && (PF * PF <= N)) {
                if (N % PF == 0) ans++;
                while (N % PF == 0) N /= PF;PF = primes[++PF_idx];}
              if (N != 1) ans++;
              return ans;
            }

            ll sumPF(ll N) {
              ll PF_idx = 0, PF = primes[PF_idx], ans = 0;
              while (N != 1 && (PF * PF <= N)) {
                while (N % PF == 0) { N /= PF; ans += PF; }PF = primes[++PF_idx];}
              if (N != 1) ans += N;
              return ans;
            }

            ll numDiv(ll N) {
              ll PF_idx = 0, PF = primes[PF_idx], ans = 1;
              while (N != 1 && (PF * PF <= N)) {
                ll power = 0;
                while (N % PF == 0) { N /= PF; power++; }ans *= (power + 1);PF = primes[++PF_idx];}
              if (N != 1) ans *= 2;
              return ans;
            }

            ll sumDiv(ll N) {
              ll PF_idx = 0, PF = primes[PF_idx], ans = 1;
              while (N != 1 && (PF * PF <= N)) {
                ll power = 0;
                while (N % PF == 0) { N /= PF; power++; }
                ans *= ((ll)pow((double)PF, power + 1.0) - 1) / (PF - 1);
                PF = primes[++PF_idx];
              }
              if (N != 1) ans *= ((ll)pow((double)N, 2.0) - 1) / (N - 1);
              return ans;
            }

            ll EulerPhi(ll N) {
              ll PF_idx = 0, PF = primes[PF_idx], ans = N;
              while (N != 1 && (PF * PF <= N)) {
                if (N % PF == 0) ans -= ans / PF;
                while (N % PF == 0) N /= PF;
                PF = primes[++PF_idx];
              }
              if (N != 1) ans -= ans / N;
              return ans;
            }

            ll n,ans;



            int main() {
              ios::sync_with_stdio(0);
              cin.tie(NULL);
              sieve(10000000);
              cin >> n;
              if(isPrime(n)){
              	cout <<1;
              }else{
              	for(int i=0;i<primes.size();i++){
              		if(n%primes[i]==0){
              			cout << 1+(n-primes[i])/2;
              			return 0;
              		}
              	}
              	
              }
              


              return 0;
            }