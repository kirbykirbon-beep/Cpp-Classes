#include <iostream>

using namespace std;

int main() {
  /*
   * Entrada
   * La entrada está compuesta por cinco números. 
   * El primero indica el número de insectos (6 patas),
   * el segundo el número de arácnidos (8),
   * el tercero el número de crustáceos (10).
   * El cuarto y el quinto representan, respectivamente, el número de escolopendras y el número de anillos de las mismas (todas tienen el mismo). 
   * Recuerda que las escolopendras tienen 2 patas por anillo.

   */
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
