#include <iostream>
using namespace std;

int main() {
  int x, y;

  cin >> x;
  cin >> y;
  if (x > y) {
      int aux = y;
      y = x;
      x = aux;
  }
  
  int sum = 0;

  for (int i = x; i <= y; i++) {
    if((i % 13 != 0)) {
      sum += i;
    }
  }

  cout << sum << "\n";

  return 0;
}
