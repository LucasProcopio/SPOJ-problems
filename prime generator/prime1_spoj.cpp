#include <iostream>
#include <unordered_map>
#include <cmath>

using namespace std;

const int LIMIT = 1000000001;
const int SQRTN = sqrt(LIMIT) + 1;

int main () {

  int t,n,m;
  unordered_map<int, int> composites;
  cin >> t;
  
  while(t--) {
    cin >> n >> m;
    if(n < 2) n = 2;

    for(int i = 2; i <= SQRTN; i++ ) {
      int init = max(2*i, ( (n + i - 1) / i) * i);
      for(int x = init;x <= m;x+=i) {
        composites[x] = 1;
      }
    }

    for(int i = n; i<= m; i++) {
      if(composites.count(i) == 0) {
        cout << i << "\n";
      }
    }
    cout << "\n";
  }

  return 0;
}