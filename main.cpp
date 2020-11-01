#include <iostream>

using namespace std;

int main()
{
  string uname = "";
  int pass;
  int pil;
  float nhr,nuts,nuas;
  float nilai;

  cout << "--------Login akun--------" << endl;
  cout << "Username     : "; cin >> uname;
  cout << "Password     : "; cin >> pass;
  cout << "--------------------------" << endl;



  if(uname == "Dedsec" && pass == 66613){
    cout << "Login Berhasil" << endl;
    cout << "Input Nilai Mata Kuliah" << endl;
    cout << "1. Algoritma dan Pemrograman   " << endl;
    cout << "2. Kalkulus                    " << endl;
    cout << "Pilih  : "; cin >> pil;
        if(pil == 1 ){
        cout << "Nilai Harian       : "; cin >> nhr;
        cout << "Nilai UTS          : "; cin >> nuts;
        cout << "Nilai UAS          : "; cin >> nuas;
        cout << endl;
        nilai = (nhr+nuts+nuas)/3;

        if(nilai >= 80){
            cout << "Selamat Anda lulus Mata Kuliah Algoritma dan Pemrograman dengan Nilai " << nilai << endl;
        }else{
        cout << "Maaf Anda belum lulus Mata Kuliah Algoritma dan Pemrograman dengan Nilai " << nilai << endl;
        }


    }else if (pil == 2){
        cout << "Nilai Harian       : "; cin >> nhr;
        cout << "Nilai UTS          : "; cin >> nuts;
        cout << "Nilai UAS          : "; cin >> nuas;
        cout << endl;
        nilai = (nhr+nuts+nuas)/3;

        if(nilai >= 80){
            cout << "Selamat Anda lulus Mata Kuliah Kalkulus dengan Nilai " << nilai << endl;
        }else{
        cout << "Maaf Anda belum lulus Mata Kuliah Kalkulus dengan Nilai " << nilai << endl;
        }

    }else{
        cout << " Input anda salah  ";
    }

    }else if (uname == "Dedsec" && pass != 66613){
    cout << "Password anda salah!" << endl;
    }else if (pass == 66613 && uname != "Dedsec"){
    cout << "Username anda salah!" << endl;
    }else if (uname != "Dedsec" && pass != 66613){
    cout << "Username dan Password anda salah!" << endl;
    }
    cout << endl;

    system("pause");
    cin.get();
    return 0;
}
