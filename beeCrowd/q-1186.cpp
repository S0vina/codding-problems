#include <iostream>
#include <iomanip>
using namespace std;
using ull = unsigned long long;
constexpr int tam = 4;

int main() {
  cout << fixed << setprecision(1);
  float m[tam][tam], sum;
  int n = 0;
  char op;

  cin >> op;

  for(int i = 0; i < tam; i++) {
    for(int j = 0; j < tam; j++){
      cin >> m[i][j];
    }
  }

  for(int i = 0; i < tam; i++) {
    for(int j = tam - 1; j > (tam - 1) - i; j--) {
      sum += m[i][j];
      n++;
    }
  }

  if(op == 'S') {
    cout << sum;
  }else {
    cout << sum / n;
  }

  cout << "\n";
  return 0;
}
