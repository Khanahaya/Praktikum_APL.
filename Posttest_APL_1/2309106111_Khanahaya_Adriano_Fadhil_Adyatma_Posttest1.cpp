#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << " Program Konversi Suhu " << endl; 
    cout << "======================= " << endl;

    string nama, nim;
    int salah = 0;
    bool loggedIn = false;
    char lagi;

    while (true) {
        if (!loggedIn) {
            cout << "Masukkan Nama: ";
            cin >> nama;
            cout << "Masukkan NIM: ";
            cin >> nim;

            if (nama != "Fadil" || nim != "2309106111") {
                salah++;
                if (salah == 3) {
                    cout << "Anda telah salah memasukkan Nama atau NIM sebanyak 3 kali. Program berhenti.";
                    break;
                }
                cout << "Nama atau NIM salah. Silahkan coba lagi." << endl;
                continue;
            } else {
                loggedIn = true;
            }
        }

        int pilihan;
        double suhu;
        cout << "\nMenu Konversi Suhu : " << endl;
        cout << "1. Konversi Celcius ke (Reamur, Farenheit, Kelvin)" << endl;
        cout << "2. Konversi Reamur ke (Celcius, Farenheit, Kelvin)" << endl;
        cout << "3. Konversi Farenheit ke (Celcius, Reamur, Kelvin)" << endl;
        cout << "4. Konversi Kelvin ke (Celcius, Reamur, Farenheit)" << endl;
        cout << "Pilih menu (1-4): ";
        cin >> pilihan;

        cout << "Masukkan suhu: ";
        cin >> suhu;

        switch (pilihan) {
            case 1:
                cout << "Konversi Celcius ke:" << endl;
                cout << "Reamur: " << fixed << setprecision(2) << (4.0 / 5.0) * suhu << endl;
                cout << "Farenheit: " << fixed << setprecision(2) << (9.0 / 5.0) * suhu + 32 << endl;
                cout << "Kelvin: " << fixed << setprecision(2) << suhu + 273.15 << endl;
                break;
            case 2:
                cout << "Konversi Reamur ke:" << endl;
                cout << "Celcius: " << fixed << setprecision(2) << (5.0 / 4.0) * suhu << endl;
                cout << "Farenheit: " << fixed << setprecision(2) << (9.0 / 4.0) * suhu + 32 << endl;
                cout << "Kelvin: " << fixed << setprecision(2) << (5.0 / 4.0) * suhu + 273.15 << endl;
                break;
            case 3:
                cout << "Konversi Farenheit ke:" << endl;
                cout << "Celcius: " << fixed << setprecision(2) << (5.0 / 9.0) * (suhu - 32) << endl;
                cout << "Reamur: " << fixed << setprecision(2) << (4.0 / 9.0) * (suhu - 32) << endl;
                cout << "Kelvin: " << fixed << setprecision(2) << (5.0 / 9.0) * (suhu - 32) + 273.15 << endl;
                break;
            case 4:
                cout << "Konversi Kelvin ke:" << endl;
                cout << "Celcius: " << fixed << setprecision(2) << suhu - 273.15 << endl;
                cout << "Reamur: " << fixed << setprecision(2) << (4.0 / 5.0) * (suhu - 273.15) << endl;
                cout << "Farenheit: " << fixed << setprecision(2) << (9.0 / 5.0) * (suhu - 273.15) + 32 << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
        }

        cout << "Apakah anda ingin melanjutkan? (y/t): ";
        cin >> lagi;
        if (lagi != 'y') {
            break;
        }
    }

    return 0;
}