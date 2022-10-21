#include <iostream>
struct warehouse_t {
private:
  //Warenmatrix: [x][.][.][.]: Aufdruck:   x=0: Pink Floyd, x=1: ACDC,  x=2: Eagles, x=3: Rolling Stones;
  //Warenmatrix: [.][x][.][.]: Größe:      x=0: S,          x=1: M,     x=2: L,      x=3: XL;
  //Warenmatrix: [.][.][x][.]: Farbe:      x=0: Schwarz,    x=1: Braun, x=2: Grau,   x=3: Weiß;
  //Warenmatrix: [.][.][.][x]: Variable:   x=0: Bestand,    x=1: Preis;
  
  //Infos: Mehrdimensionale Matrizen https://learn.microsoft.com/de-de/cpp/cpp/arrays-cpp?view=msvc-170

  int [3][3][3][1] = {
    {0, 1, 2, 3}, {0, 1, 2, 3}, {0, 1, 2, 3}, {0, 1},
    {0, 1, 2, 3}, {0, 1, 2, 3}, {0, 1, 2, 3}, {0, 1},
    {0, 1, 2, 3}, {0, 1, 2, 3}, {0, 1, 2, 3}, {0, 1},
    {0, 1, 2, 3}, {0, 1, 2, 3}, {0, 1, 2, 3}, {0, 1}
  };


public:



};


struct pullover_t {
private:


public:


};
