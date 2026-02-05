#include <iostream>
using namespace std;

int sum(int n) {
  int total = 0;
  for (int i = 1; i <= n; i++) {
    total += i;
  }
  return total;
}

int product(int n) {
  int total = 1;
  for (int i = 1; i <= n; i++) {
      total *= i;
  }
  return total;
}

int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;

  int result = sum(n);
  cout << "The sum from 1 to " << n << " is " << result << endl;

  int prod_result = product(n);
  cout << "The product from 1 to " << n << " is " << prod_result << endl;

  return 0;
}
