#include <iostream>
using namespace std;

typedef struct {
	string nm, no_ktp, no_hp, gol_drh, alamat;
	int umur;
} data_penumpang;

typedef struct {
	string krt, asal, tujuan;
} jnskrt_rute;

typedef struct {
	int hh, mm, ss;
} jam_kbrgktn;

typedef struct {
	string hari, mmmm;
	int dd, yyyy;
} tanggal;

int main () {

	cout << "===================================================================" << endl;
	cout << "|| Selamat Datang Di Program Aplikasi Pemesanan Tiket Kereta Api ||" << endl;
	cout << "===================================================================" << endl << endl;
	cout << "Silahkan isi data di bawah ini :" << endl;

	data_penumpang A;
	cout << "Nama Lengkap          = ";
	getline(cin, A.nm);
	cout << "Nomor KTP             = ";
	cin >> A.no_ktp;
	cout << "Alamat                = ";
	cin >> A.alamat;
	cout << "Nomor HP              = ";
	cin >> A.no_hp;
	cout << "Usia                  = ";
	cin >> A.umur;
	cout << "Golongan Darah        = ";
	cin >> A.gol_drh;

	jnskrt_rute B;
	cout << "Jenis Kereta          = ";
	cin >> B.krt;
	cout << "Stasiun Asal          = ";
	cin >> B.asal;
	cout << "Stasiun Tujuan        = ";
	cin >> B.tujuan;

	jam_kbrgktn C;
	cout << "Jam                   = ";
	cin >> C.hh;
	cout << "Menit                 = ";
	cin >> C.mm;
	cout << "Detik                 = ";
	cin >> C.ss;

	tanggal D;
	cout << "Hari                  = ";
	cin >> D.hari;
	cout << "Tanggal               = ";
	cin >> D.dd;
	cout << "Bulan                 = ";
	cin >> D.mmmm;
	cout << "Tahun                 = ";
	cin >> D.yyyy;

	cout << "=============================================" << endl;
	cout << "|| Data Dan Tiket Yang Anda Pesan Adalah : ||" << endl;
	cout << "=============================================" << endl << endl;
	cout << "Nama                  = " << A.nm << endl;
	cout << "No KTP                = " << A.no_ktp << endl;
	cout << "Alamat                = " << A.alamat << endl;
	cout << "No HP                 = " << A.no_hp << endl;
	cout << "Usia                  = " << A.umur << endl;
	cout << "Golongan Darah        = " << A.gol_drh << endl;
	cout << "Jenis Kereta          = " << B.krt << endl;
	cout << "Stasiun Asal          = " << B.asal << endl;
	cout << "Stasiun Tujuan        = " << B.tujuan << endl;
	cout << "Jam Keberangkatan     = " << C.hh << ":" << C.mm << ":" << C.ss << endl;
	cout << "Tanggal Keberangkatan = " << D.hari << ", " << D.dd << " " << D.mmmm << " " << D.yyyy << endl;

	return 0;
}
