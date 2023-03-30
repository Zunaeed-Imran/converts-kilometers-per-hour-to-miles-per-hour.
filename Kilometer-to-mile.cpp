#include <iostream>

using namespace std;

int main () {
  double kilometer, mile;

  cout << "Enter The Kilometer Value: ";
  cin >> kilometer;

  mile = kilometer * 1.60934;

  cout << "The Value of Mile is: " << mile << endl;

  return 0;
}