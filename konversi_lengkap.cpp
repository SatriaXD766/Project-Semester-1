#include <iostream>
#include <string>
using namespace std;

int hurufKeAngka(char c)
{
    if (c >= '0' && c <= '9')
        return c - '0';
    if (c >= 'A' && c <= 'F')
        return c - 'A' + 10;
    if (c >= 'a' && c <= 'f')
        return c - 'a' + 10;
    return 0;
}

long keDesimal(string input, int basis)
{
    long hasil = 0;
    for (size_t i = 0; i < input.length(); ++i)
    {
        int angka = hurufKeAngka(input[i]);
        hasil = hasil * basis + angka;
    }
    return hasil;
}

string desimalKeBiner(long des)
{
    if (des == 0)
        return "0";
    string hasil = "";
    while (des > 0)
    {
        int sisa = des % 2;
        hasil = char(sisa + '0') + hasil;
        des = des / 2;
    }
    return hasil;
}

string desimalKeOktal(long des)
{
    if (des == 0)
        return "0";
    string hasil = "";
    while (des > 0)
    {
        int sisa = des % 8;
        hasil = char(sisa + '0') + hasil;
        des = des / 8;
    }
    return hasil;
}

string desimalKeHexa(long des)
{
    if (des == 0)
        return "0";
    string hasil = "";
    string daftarHexa = "0123456789ABCDEF";
    while (des > 0)
    {
        int sisa = des % 16;
        hasil = daftarHexa[sisa] + hasil;
        des = des / 16;
    }
    return hasil;
}

int main()
{
    int pilih;
    cout << "=== PROGRAM KONVERSI HORNER LENGKAP ===" << endl;
    cout << "1. Desimal ke Hexa\n2. Hexa ke Desimal\n3. Desimal ke Biner\n4. Biner ke Desimal\n5. Desimal ke Oktal\n6. Oktal ke Desimal\n7. Hexa ke Oktal\n8. Oktal ke Hexa\n9. Biner ke Oktal\n10. Biner ke Hexa\n";
    cout << "Pilih 1-10: ";
    cin >> pilih;

    if (pilih == 1)
    {
        long des;
        cout << "Masuk desimal: ";
        cin >> des;
        cout << "Hasil: " << desimalKeHexa(des) << endl;
    }
    else if (pilih == 2)
    {
        string hex;
        cout << "Masuk hexa: ";
        cin >> hex;
        cout << "Proses Horner x16, Hasil: " << keDesimal(hex, 16) << endl;
    }
    else if (pilih == 3)
    {
        long des;
        cout << "Masuk desimal: ";
        cin >> des;
        cout << "Hasil: " << desimalKeBiner(des) << endl;
    }
    else if (pilih == 4)
    {
        string bin;
        cout << "Masuk biner: ";
        cin >> bin;
        cout << "Proses Horner x2, Hasil: " << keDesimal(bin, 2) << endl;
    }
    else if (pilih == 5)
    {
        long des;
        cout << "Masuk desimal: ";
        cin >> des;
        cout << "Hasil: " << desimalKeOktal(des) << endl;
    }
    else if (pilih == 6)
    {
        string okt;
        cout << "Masuk oktal: ";
        cin >> okt;
        cout << "Proses Horner x8, Hasil: " << keDesimal(okt, 8) << endl;
    }
    else if (pilih == 7)
    {
        string hex;
        cout << "Masuk hexa: ";
        cin >> hex;
        long des = keDesimal(hex, 16); // hexa -> desimal dulu
        cout << "Jadi desimal dulu: " << des << endl;
        cout << "Lanjut ke oktal: " << desimalKeOktal(des) << endl;
    }
    else if (pilih == 8)
    {
        string okt;
        cout << "Masuk oktal: ";
        cin >> okt;
        long des = keDesimal(okt, 8);
        cout << "Jadi desimal dulu: " << des << endl;
        cout << "Lanjut ke hexa: " << desimalKeHexa(des) << endl;
    }
    else if (pilih == 9)
    {
        string bin;
        cout << "Masuk biner: ";
        cin >> bin;
        long des = keDesimal(bin, 2);
        cout << "Jadi desimal dulu: " << des << endl;
        cout << "Lanjut ke oktal: " << desimalKeOktal(des) << endl;
    }
    else if (pilih == 10)
    {
        string bin;
        cout << "Masuk biner: ";
        cin >> bin;
        long des = keDesimal(bin, 2);
        cout << "Jadi desimal dulu: " << des << endl;
        cout << "Lanjut ke hexa: " << desimalKeHexa(des) << endl;
    }
    return 0;
}