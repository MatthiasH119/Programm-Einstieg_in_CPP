#include <string>
#include <iostream>
struct warehouse_t {
private:
  std::string lagerdatei{};
  
  //Warenmatrix: [x][.][.][.]: Aufdruck:   x=0: Pink Floyd, x=1: ACDC,  x=2: Eagles, x=3: Rolling Stones;
  //Warenmatrix: [.][x][.][.]: Farbe:      x=0: Schwarz,    x=1: Braun, x=2: Grau,   x=3: Weiß;
  //Warenmatrix: [.][.][x][.]: Größe:      x=0: S,          x=1: M,     x=2: L,      x=3: XL;
  //Warenmatrix: [.][.][.][x]: Variable:   x=0: Bestand,    x=1: Preis;
  
  //Infos: Mehrdimensionale Matrizen https://learn.microsoft.com/de-de/cpp/cpp/arrays-cpp?view=msvc-170

  int inventory [4][4][4][2] = {
    { //[0][.][.][.]
      { //[0][0][.][.] -> Pink Floyd, Schwarz
        {2, 45}, {4, 46}, {3, 50}, {1, 54}
      },
      { //[0][1][.][.] -> Pink Floyd, Braun
        {4, 32}, {5, 34}, {1, 38}, {0, 44}
      },
      { //[0][2][.][.] -> Pink Floyd, Grau
        {3, 31}, {4, 43}, {4, 44}, {5, 40}
      },
      { //[0][3][.][.] -> Pink Floyd, Weiß
        {13, 12}, {23, 15}, {20, 20}, {12, 25}
      },
    },
    { //[1][.][.][.]
      { //[1][0][.][.] -> ACDC, Schwarz
        {1, 45}, {4, 46}, {3, 50}, {1, 54}
      },
      { //[1][1][.][.] -> ACDC, Braun
        {5, 32}, {5, 34}, {4, 38}, {2, 44}
      },
      { //[1][2][.][.] -> ACDC, Grau
        {2, 31}, {4, 43}, {4, 44}, {5, 40}
      },
      { //[1][3][.][.] -> ACDC, Weiß
        {10, 12}, {23, 15}, {20, 20}, {12, 25}
      },
    },
    { //[2][.][.][.]
      { //[2][0][.][.] -> Eagles, Schwarz
        {1, 45}, {4, 46}, {3, 50}, {1, 54}
      },
      { //[2][1][.][.] -> Eagles, Braun
        {5, 32}, {5, 34}, {4, 38}, {2, 44}
      },
      { //[2][2][.][.] -> AEaglesCDC, Grau
        {2, 31}, {4, 43}, {4, 44}, {5, 40}
      },
      { //[2][3][.][.] -> Eagles, Weiß
        {4, 52}, {3, 55}, {2, 60}, {2, 65}
      },
    },
    { //[3][.][.][.]
      { //[3][0][.][.] -> Rolling Stones, Schwarz
        {1, 45}, {4, 46}, {3, 50}, {1, 54}
      },
      { //[3][1][.][.] -> Rolling Stones, Braun
        {5, 32}, {5, 34}, {4, 38}, {2, 44}
      },
      { //[3][2][.][.] -> Rolling Stones, Grau
        {2, 31}, {4, 43}, {4, 44}, {5, 40}
      },
      { //[3][3][.][.] -> Rolling Stones, Weiß
        {10, 12}, {23, 15}, {20, 20}, {12, 25}
      }
    }
  };


public:
  void get_inventory_info(){
    int band, color, size;
    std::cout << "Herzlich wilkommen zur Lagerinfo. Zu welchem Produkt benötigen Sie Informationen?" << std::endl;

    while(true){
      char input{};
      bool isValid{false};

      std::cout << "Welchen Aufdruck hat das gesuchte Produkt?:" << std::endl
                << "(1) Pink Floyd" << std::endl
                << "(2) ACDC" << std::endl
                << "(3) Eagles" << std::endl
                << "(4) Rolling Stones" << std::endl
                << "Ihre Auswahl:" << std::endl;
      std::cin >> input;
      switch (input)
      {
        case '1':
          isValid = true;
          band = 0;
          break;
        case '2':
          isValid = true;
          band = 1;
          break;
        case '3':
          isValid = true;
          band = 2;
          break;
        case '4':
          isValid = true;
          band = 3;
          break;
        default:
          std::cout << "Ungültige Eingabe!" << std::endl;    
          break;
      }
      if(!isValid) continue;
      break;
    }

    while(true){
      char input{};
      bool isValid{false};

      std::cout << "Welche Farbe hat das gesuchte Produkt?:" << std::endl
                << "(1) Schwarz" << std::endl
                << "(2) Braun" << std::endl
                << "(3) Grau" << std::endl
                << "(4) Weiß" << std::endl
                << "Ihre Auswahl:" << std::endl;
      std::cin >> input;
      switch (input)
      {
        case '1':
          isValid = true;
          color = 0;
          break;
        case '2':
          isValid = true;
          color = 1;
          break;
        case '3':
          isValid = true;
          color = 2;
          break;
        case '4':
          isValid = true;
          color = 3;
          break;
        default:
          std::cout << "Ungültige Eingabe!" << std::endl;    
          break;
      }
      if(!isValid) continue;
      break;
    }

    while(true){
      char input{};
      bool isValid{false};

      std::cout << "Welche Größe hat das gesuchte Produkt?:" << std::endl
                << "(1) S" << std::endl
                << "(2) M" << std::endl
                << "(3) L" << std::endl
                << "(4) XL" << std::endl
                << "Ihre Auswahl:" << std::endl;
      std::cin >> input;
      switch (input)
      {
        case '1':
          isValid = true;
          size = 0;
          break;
        case '2':
          isValid = true;
          size = 1;
          break;
        case '3':
          isValid = true;
          size = 2;
          break;
        case '4':
          isValid = true;
          size = 3;
          break;
        default:
          std::cout << "Ungültige Eingabe!" << std::endl;    
          break;
      }
      if(!isValid) continue;
      break;
    }
    if (inventory[band][color][size][0] > 1){
      std::cout << "Produkt gefunden! Im Lagerbestand gibt es " << inventory[band][color][size][0] << " dieser Artikel." << std::endl
                << "Preis: " << inventory[band][color][size][1] << " Euro." << std::endl;
    }
    else if (inventory[band][color][size][0] == 1){
      std::cout << "Produkt gefunden! Im Lagerbestand gibt es nur noch " << inventory[band][color][size][0] << " mal diesen Artikel." << std::endl
                << "Preis: " << inventory[band][color][size][1] << " Euro." << std::endl;
    }
    else {
      std::cout << "Produkt gefunden! Leider lautet der Restbestand: " << inventory[band][color][size][0] << "." << std::endl
                << "Versuchen Sie es später erneut, der Artikel kostet regulär " << inventory[band][color][size][1] << " Euro." << std::endl;
    }
    std::cout << "===========" << std::endl
              << "    END    " << std::endl
              << "===========" << std::endl;
  };


  warehouse_t(){
    // Hier würde z.B. die Datenbank initialisiert
    // Öffnen eines Webservers
  }

  ~warehouse_t(){
    // Hier würde die Datenbank zurückgespeichert
  }

  int print_options(){
    std::cout << "Was möchten Sie gerne tun?"       << std::endl 
            << "(1) Warenkatalog anzeigen"          << std::endl
            << "(2) Inhalt des Warenkorbs anzeigen" << std::endl
            << "(0) Programm beenden"               << std::endl;
    int nutzerauswahl{};
    std::cin >> nutzerauswahl;

    return nutzerauswahl;
  }

  void zeige_warenkatalog(){
    // std::cout << alles was im Katalog ist
    // optionen anzeigen
    // (1) Objekt in den Warenkorb legen
    // (2) Lagerbestand anzeigen
    // (0) Zurück
    int auswahl{};
    std::cin >> auswahl;

    switch(auswahl){
      case 1:
            std::cout << "Welche Artikelnummer? ";
            int artikelnummer{};
            std::cin >> artikelnummer;
            // add_to_cart(artikelnummer);
            break;
      case 2:
            //print_lagerbestände;
            break;
      case 0:
            return;
      default:
            std::cout << "Ungültige Eingabe!";
            return;
    }

  }

  void zeige_warenkorb(){
    std::cout << inhalte_des_warenkorbs     << std::endl;
    std::cout << "Was möchten Sie tun? "    << std::endl
              << "(1) Einkauf abschließen"  << std::endl
              << "(2) Artikel löschen"      << std::endl;
    int auswahl{};
    std::cin >> auswahl;
    switch(auswahl)......
  }

  int run(){
    print_welcome_dialog();
    while(true){                              //Program Superloop
      int auswahl = print_options();
      switch(auswahl){
        case 1: zeige_warenkatalog();       break;
        case 2: zeige_warenkorb();          break;
        case 0: return 0;                   break;
        default: 
            std::cout << "Ungültige Eingabe!" << std::endl;
            continue;
      }
    }
  }

};