#include <iostream>
#include <string>

using namespace std;

class Testing
{
private:
    /* data */
public:
    // Public Variable For Class Testing
    string nama;
    int umur;

    // Construct for Testing
    Testing(string nama, int umur)
    {
        Testing::nama = nama;
        Testing::umur = umur;
    }

    // Methods Tanpa Parameter TanpaReturn
    void tampilData()
    {
        cout << "\nHallo Semua" << endl;
        cout << "Nama Saya " << Testing::nama << endl;
        cout << "Umur Saya " << Testing::umur << endl;
    }

    // Methods Dengan Parameter Tanpa Return
    void ubahData(const char *nama)
    {
        Testing::nama = nama;
    }

    // Methods Tanpa Parameter Dengan Return
    string getNama()
    {
        return Testing::nama;
    }

    int getUmur()
    {
        return Testing::umur;
    }

    // Methods Dengan Parameter dan Return
    int convertTahun(const int &satuan)
    {
        return Testing::umur * satuan;
    }
};

int main(int argc, char const *argv[])
{
    // Basic Output
    // cout << "Hallo Semua \nSaya Chana \nUmur saya 21" << endl;

    // Output dengan Standar Class
    // Testing test;
    // test.nama = "Chana Septiari Oelung";
    // test.umur = 21;

    // cout << "Hallo Semua" << endl;
    // cout << "Nama Saya " << test.nama << endl;
    // cout << "Umur Saya " << test.umur << endl;

    // Output dengan Construct Class
    Testing test = Testing("Chana Septiari Oelung", 21);

    // Output dengan Method Class
    test.tampilData();

    test.ubahData("Kana");
    test.tampilData();

    cout << "\nNama Beliau Adalah " << test.getNama() << endl;
    cout << "Umur Beliau Adalah " << test.getUmur() << endl;
    cout << "Umur Beliau Dalam Hari Adalah " << test.convertTahun(365) << endl;

    return 0;
}
