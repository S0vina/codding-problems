#include <iostream>
#include <vector>
using namespace std;
using ull = unsigned long long;

unsigned long long geraFibonacci(int pos) {
  if (pos == 0) {
    return 0; 
  }

  unsigned long long fiboNum = 0;
  unsigned long long fiboAux = 1;
  unsigned long long aux;

  for(int i = 0; i < pos; i++) {
    aux = fiboNum;
    if (fiboNum == 0) {
      aux = 1;
    }
    fiboNum += fiboAux;
    fiboAux = aux;
  }

  return fiboAux;
}

int main() {
  int n_testes, pos; 
  unsigned long long fiboNum;

  cin >> n_testes;

  for(int i = 0; i < n_testes; i++) {
    cin >> pos;
    fiboNum = geraFibonacci(pos);
    cout << "Fib(" << pos << ") = " << fiboNum << endl;
  }

  return 0;
}
