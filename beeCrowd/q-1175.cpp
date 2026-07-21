:#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v(20, 0);
  int x = 19;
  int aux;

  for (int i = 0; i < 20; i++) {
    cin >> v[i];
  }
  
  for (int i = 19; i > 9; i--) {
    aux = v[i];
    v[i] = v[i - x];
    v[i - x] = aux;
    x -= 2;
  }

  for (int i = 0; i < 20; i++) {
    cout << "N[" << i << "] = " << v[i] << endl;
  }

  return 0;
}
