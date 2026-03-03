//Library
#include<iostream>
using namespace std;
//Deklarasi Global
    float a,t;

//Implementasi Prosedur & Fungsi
 void input()
 {
    cout << "Masukkan Alas : " ;
    cin >> a;
    cout << "Masukkan Tinggi : " ;
    cin >> t;
 }
    
 float LuasSegitiga()
 {
    return a * t * 1 / 2;
 }

 void output ()
 {
    cout << " Hasilnya = " << LuasSegitiga();
 }
 
//Program Utama
 int main()
 {//start
    input();
    output();
 }//end
