#include <iostream>

using namespace std;

int main() {
  int insects;
  int aracnids;
  int crustaceans;
  int centipedes;
  int rings;
  int legs;

  cin >> insects;
  cin >> aracnids;
  cin >> crustaceans;
  cin >> centipedes;
  cin >> rings;
  
  legs = insects*6+aracnids*8+crustaceans*10+centipedes*rings*2;
  
  cout << "The total of legs is " << legs;
}
