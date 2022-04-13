#include <iostream>
using namespace std;

class Input {
  public :
  void cetak (){
  int a[12], peng=0, uang=0, bulan;
  cout<<"Masukan jumlah Uang Saku ANDI = "; cin>>uang;
  cout<<"Masukan jumlah bulan = "; cin>>bulan;

    for(int i=0; i<bulan; i++){
      cout<<"Masukan pengeluaran bulan ke-"<<i+1<<" : Rp."; cin>>a[i];
      peng = peng + a[i];
    }
    cout<<"==========================="<<endl;
    cout<<" Total pengeluaran Andi : Rp."<<peng<<endl;
    cout<<"sisa uang saku andi : Rp."<<uang-peng;
    }
}; 
  