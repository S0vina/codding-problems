#include <iostream>
#include <iomanip>
using namespace std; 
using ull = unsigned long long;
constexpr int tam = 12;

int main() {
  cout << fixed <<setprecision(1);

  float m[tam][tam];
  float sum = 0;
  int line;
  char op;

  cin >> line;
  cin >> op;

  for (int i = 0; i < tam; i++) {
    for (int j = 0; j < tam; j++) {
      cin >> m[i][j];
    }
  }
  
  for (int i = 0; i < tam; i++) {
    sum += m[line][i];
  }
  
  if(op == 'S') {
    cout << sum;
  } else {
    cout << (sum/12);
  }

  cout << endl;
  return 0;
}
