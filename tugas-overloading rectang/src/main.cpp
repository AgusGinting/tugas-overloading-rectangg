#include <iostream>
#include <string>
#include "include/rectang.hpp"
using namespace std;

void endProgram();
void startProgram();
void clear();
int optionthis();

int main(){
    while(1){
        startProgram();
        float length, 
            width,
            midpoint_x, 
            midpoint_y;
         string option_str;
        int option_int;
         cout << "INPUTKAN DATA PERSEGI ATAU PERSEGI PANJANG" <<  endl;
         cout << "Persegi panjang 1" <<  endl;
             cout << "Panjang        : ";  cin >> length;      
             cout << "Lebar          : ";  cin >> width;       
             cout << "Titik tengah x : ";  cin >> midpoint_x;  
             cout << "Titik tengah y : ";  cin >> midpoint_y;  
             cout <<  endl;
            rectang obj1(midpoint_x, midpoint_y, length, width);

         cout << "Persegi panjang 2" <<  endl;
             cout << "Panjang        : ";  cin >> length;      
             cout << "Lebar          : ";  cin >> width;       
             cout << "Titik tengah x : ";  cin >> midpoint_x;  
             cout << "Titik tengah y : ";  cin >> midpoint_y;  
            rectang obj2(midpoint_x, midpoint_y, length, width);
        rectang obj3(0,0,0,0);
        clear();
        
        while(1){
            clear();
             cout <<  endl;
            option_int = optionthis();
            switch (option_int){
                case 0:
                    {
                       
                        obj3 = obj1 + obj2;
                        if (obj1==obj2){
                            obj3.output();
                        }
                    }
                    break;
                case 1:
                    {
                         cout <<  endl;
                        obj3 = obj1 - obj2;
                        if (obj1==obj2){
                            obj3.output();
                        }
                    }
                    break;
                case 2:
                    {
                         cout <<  endl;
                        ++obj1;
                        obj1.output();
                        --obj1;
                    }
                    break;
                case 3:
                    {
                         cout <<  endl;
                        ++obj2;
                        obj1.output();
                        --obj2;
                    }
                    break;
                case 4:
                    {
                         cout <<  endl;
                        --obj1;
                        obj1.output();
                        ++obj1;
                    }
                    break;
                case 5:
                    {
                         cout <<  endl;
                     
                        --obj2;
                        obj1.output();
                        ++obj2;
                    }
                    break;
              
                case 6:
                    {
                         cout <<  endl <<  endl;
                 
                        if (obj1==obj2){
                             cout << "Persegi panjang beririsan" <<  endl;
                        }else{
                             cout << "Persegi panjang tidak beririsan" <<  endl;
                        }
                        return 0;
                    }
                    break;
            }
             cout <<  endl;
            cout << "Apakah anda ingin mencoba operator lain (y/n) : ";
            cin >> option_str;
            if(option_str == "N" || option_str == "n"){
                break;
            }
        }
    }
}

void startProgram(){
     cout <<  endl;
     cout << "======================TUGAS OPERATOR OVERLOADING===================" <<  endl;
     cout << "Nama  : AGUS RASI DOANTA GINTING"<< endl<< "NRP   : 5024211018"<< endl<< "Kelas : Pemrograman Lanjut A"<< endl;
     cout << "===================================================================" <<  endl;
     cout << "Klik enter untuk mulai program...";
     cin.get();
    clear();
}
void clear(){
    system("CLS");
}
int optionthis(){
    int option_fungsi;
     cout << "Pilihlah Operasi yang ingin anda lakukan \n 0. Operator + \n 1. Operator - \n 2. Operator ++ Objek 1 \n 3. Operator -- Objek 1 \n 4. Operator ++ Objek 2 \n 5. Operator -- Objek 2   \n 6. Operator == \n Masukan pilihan anda : ";
     cin >> option_fungsi;
    return option_fungsi;
return 1;

}