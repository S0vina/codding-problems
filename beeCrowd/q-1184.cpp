#include <iostream>
#include <iomanip>
using namespace std;
using ull = unsigned long long;
constexpr int tam = 12;

int main() {
  cout << fixed << setprecision(1);
  float m[tam][tam], sum;
  char op;

  cin >> op;

  sum = 0.0;
  for(int i = 0; i < tam; i++) {
    for(int j = 0; j < tam; j++) {
      cin >> m[i][j];
    }
  }
  
  for(int i = 0; i < tam; i++) {
    for(int j = 0; j != i; j++) {
      sum += m[i][j];
    }
  }

  if (op == 'S') {
    cout << sum;
  }else {
    cout << sum / tam;
  }

  cout << endl;

  return 0;
}
