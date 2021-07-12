#include <iostream>
using namespace std;

class Meyveler{

public:
  Meyveler(){
    cout << "Ben meyve sınıfıyım." << endl;
  }

};

class Elma : Meyveler{

public:
  Elma(){
    cout << "Yeşil renkteyim." << endl;
  }
};

class Muz : Meyveler{

public:
  Muz(){
    cout << "Sarı renkteyim." << endl;
  }
};

//****************************************

class Hayvan{
  public:
  void yer(){
    cout << "Hayvan burada." << endl;
  }
} ;

class Kopek : Hayvan{
  public:
  void yer(){
    cout << "Köpek burada." << endl;
  }
};

int main(){
  Meyveler meyve;
  Elma elma;
  Muz muz;
  cout << "\n";
  Hayvan hayvan;
  hayvan.yer();
  Kopek kopek;
  kopek.yer();
}