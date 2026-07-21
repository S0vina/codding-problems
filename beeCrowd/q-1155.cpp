#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  cout << fixed << setprecision(2);
  float sum = 1.00;
  float div = 0;

  for (int i = 2; i < 101; i++) {
    div = 1.00/i;
    sum += div;
  }

  cout << sum << endl;
  return 0;

}

