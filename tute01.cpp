#include <iostream>
using namespace std;

int main() {
  int dis;

  cout << "Enter the distance(km) : ";
  cin >> dis;

  if (dis >= 0 && dis <= 30) {
    cout << "Amount = Rs." << dis * 50;
  } else if (dis > 30) {
    cout << "Amount = Rs." << 30 * 50 + (dis - 30) * 40;
  } else {
    cout << "Invalid input";
  }

  return 0;
}