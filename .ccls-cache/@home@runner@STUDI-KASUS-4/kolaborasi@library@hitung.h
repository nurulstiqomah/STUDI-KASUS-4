//NAMA : NURUL ISTIQAMAH(2100018278) & HERNANDA MAULITA(2100018281)

#include <iostream>
using namespace std;
//bagian Nurul Istiqamah
class hitung {
  public :
  void cetak (){
  int a[12], peng, uang, bulan;
  cout<<"Masukan jumlah Uang Saku ANDI = "; cin>>uang;
  cout<<"Masukan jumlah bulan = "; cin>>bulan;
//bagian Hernanda Maulita
    for(int i=0; i<bulan; i++){
      cout<<"Masukan pengeluaran bulan ke-"<<i+1<<" : Rp."; cin>>a[i];
      peng = peng + a[i];
    }
    cout<<"==========================="<<endl;
    cout<<" Total pengeluaran Andi : Rp."<<peng<<endl;
    cout<<"sisa uang saku andi : Rp."<<uang-peng;
    }
}; 
  