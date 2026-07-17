#include <iostream>
using namespace std;

int main(){
  int x, y;

  while (true){
    cin >> x;
    cin >> y;

    if (x <= 0 || y <= 0) break;
  
    int sum = 0;

    if (x > y) {
      auto aux = x;
      x = y;
      y = aux;
    }

    while  (x <= y){
      cout << x << " ";
      sum += x;
      x++;
    }
    
    cout << "Sum=" << sum << "\n";

    sum = 0;
  }

  return 0;
}



