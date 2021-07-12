#include <iostream>
using namespace std;

class Oyuncular{
 
  public:
    string ad;
    int numara;
    int basket;
    Oyuncular(string ad, int numara, int basket){
      this->ad = ad;
      this->numara = numara;
      this->basket = basket;
    }
    void bilgiler(){
      cout << "Ad Soyad: " << ad << endl;
      cout << "Numara: " << numara << endl;
      cout << "Basket sayısı: " << basket << endl;
    }

};

class Nokta{

  public:
  int x, y;

  Nokta(int x, int y){
    this->x = x;
    this->y = y;
  }
  void git(int x, int y){
    this->x = x;
    this->y = y;
    cout << x << "," << y << "'ye gidildi." << endl;
  }
  void goster(){
    cout << "Nokta " << x << "," << y << "'de." << endl;
  }
  void sifirda_mi(){
    if(x == 0 && y == 0)
      cout << "Nokta sıfır(0,0) noktasında.";
    else
      cout << "Nokta sıfır noktasında değil.";
  }

};

int main() {
  Oyuncular o1("Ali Erdem" , 9 , 16);
  Oyuncular o2("Kartal Özbalkanlı" , 28 , 9);
  o1.bilgiler();
  o2.bilgiler();
  cout << "\n";
  Nokta nokta(6,8);
  nokta.git(4,0);
  nokta.goster();
  nokta.sifirda_mi();
}