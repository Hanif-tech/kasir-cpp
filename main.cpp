#include <iostream>

using namespace std;

int main(){
    char pilih;
    string nama, jdl_buku;
    int nomor_buku, jml_buku, bayar, harga_buku, total_belanja, diskon = 0, total_stlh_diskon, kembalian;
    // TODO
    do{
        cout << "==== KASIR ====" << endl;
        cout << "1. Bumi Manusia (Rp. 80000)\n";
        cout << "2. Anak semua Bangsa (Rp. 90000)\n";
        cout << "3. Rumah kaca (Rp. 120000)\n";
        cout << "4. Naga Bumi (Rp. 210000)\n";

        cout << "==== Checkout ====" << endl;
        cout << "Nama \t\t: ";
        cin >> nama;

        do{
            cout << "Nomor Buku\t: ";
            cin >> nomor_buku;

            switch (nomor_buku){
            case 1:
                harga_buku = 80000;
                jdl_buku = "Bumi Manusia";
                break;
            case 2:
                harga_buku = 90000;
                jdl_buku = "Anak semua Bangsa";
                break;
            case 3:
                harga_buku = 120000;
                jdl_buku = "Rumah kaca";
                break;
            case 4:
                harga_buku = 210000;
                jdl_buku = "Naga Bumi";
                break;
            
            default:
                cout << "WARNING!, Buku tidak tersedia" << endl;
            }
            
        }while(nomor_buku < 1 || nomor_buku > 4);

        cout << "Jumlah\t\t: ";
        cin >> jml_buku;
        total_belanja = jml_buku * harga_buku;

        do{
            cout << "Bayar\t\t: ";
            cin >> bayar;
            // cek bayar lebih kecil dari total_belanja
            if (bayar < total_belanja){
                cout << "WARNING!, pembayaran kurang. Mohon masukkan kembali pembayaran" << endl;
            }
        }while(bayar < total_belanja);


        cout << "===== INFORMASI PEMBELIAN ====" << endl;
        cout << "Pembeli\t\t: " << nama << endl;
        cout << "Buku\t\t: " << jdl_buku << endl;
        cout << "Harga satuan\t: " << harga_buku << endl;
        cout << "Item\t\t: " << jml_buku << endl;
        cout << "Total\t\t: " << total_belanja << endl;

        // cek dapat diskon atau tidak
        if (total_belanja >= 150000 && total_belanja < 190000) {
            diskon = total_belanja * 5 / 100;
            total_stlh_diskon = total_belanja - diskon;
            cout << "Diskon (5%)\t: " << diskon << endl;
            cout << "Total Akhir\t: " << total_stlh_diskon << endl;
        }else if (total_belanja >= 190000){
            diskon = total_belanja * 10 / 100;
            total_stlh_diskon = total_belanja - diskon;
            cout << "Diskon 10%\t: " << diskon << endl;
            cout << "Total Akhir\t: " << total_stlh_diskon << endl;
        }

        cout << "Bayar\t\t: " << bayar << endl;

        if (bayar > total_belanja){
            kembalian = bayar - total_belanja + diskon;
            cout << "Kembalian\t: " << kembalian << endl;
        }

        cout << "Keluar? (y/n): ";
        cin >> pilih;
    }while (pilih == 'n');
    



}