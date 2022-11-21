#include <iostream>
using namespace std;

double C(double);
float C (float);
int C (int);

int main (){
    double suhu1;
    float suhu2;
    int suhu3;

    cout << " \n ==== Program Konversi Suhu Fahrenheit ke Celcius ==== " <<endl;
    cout << " \n Masukkan suhu pertama     : ";
    cin >> suhu1;
    cout << " Masukkan suhu kedua       : ";
    cin >> suhu2;
    cout << " Masukkan suhu ketiga      : ";
    cin >> suhu3;

    cout << " \n Hasil Konversi Fahrenheit suhu pertama     :  " << C(suhu1)<< " derajat Celcius " <<endl;
    cout << " Hasil Konversi Fahrenheit suhu kedua       :  " << C(suhu2)<< " derajat Celcius " <<endl;
    cout << " Hasil Konversi Fahrenheit suhu ketiga      :  " << C(suhu3)<< " derajat Celcius " <<endl;
    return 0;

}

double C(double suhu1){
return((suhu1-32.0)* 5/9);

}

float C(float suhu2){
return((suhu2-32.0)* 5/9);

}

int C(int suhu3){
return((suhu3-32.0)* 5/9);

}

