#include <iostream>
using namespace std;

class orang
{
    private :
    char nama[30];
    int umur;
    public :
    void get()
    {
        cin.ignore();
		cout<<"Nama\t\t: ";
        cin.getline(nama,30);
        cout<<"Umur\t\t: ";
        cin>>umur;
    }
    void display()
    {
        cout<<"Nama \t\t: "<<nama<<endl;
        cout<<"Umur \t\t: "<<umur<<endl;
    }
};
class pendidikan
{
    private:
    char SMA[50];
    int UAN;
    public:
    void get()
    {
    	cin.ignore();
        cout<<"Nama SMA\t: ";
        cin.getline(SMA,30);
        cout<<"Nilai UAN\t: ";
        cin>>UAN;
    }
    void display()
    {
        cout<<"Nama SMA\t: "<<SMA<<endl;
        cout<<"Nilai UAN\t: "<<UAN<<endl;
    }
};
class mahasiswa : public orang, public pendidikan
{
    private :
    string kampus;
    int IP;
    public:
    void get()
    {
    	orang::get();
    	pendidikan::get();
        cout<<"Nama Kampus\t: ";
        cin>>kampus;
        cout<<"IPK\t\t: ";
        cin>>IP;
    }
    void display()
    {
    orang::display();
    pendidikan::display();
    cout<<"Nama Kampus\t: "<<kampus<<endl;
    cout<<"IPK\t\t: "<<IP<<endl;
    }
};
class pegawai : public orang
{
    private :
    string jabatan;
    int NIP;
    public:
    void get()
    {
    	orang::get();
        cout<<"NIP\t\t: ";
        cin>>NIP;
        cout<<"Jabatan\t\t: ";
        cin>>jabatan;
    }
    void display()
    {
    	orang::display();
        cout<<"NIP\t\t: "<<NIP<<endl;
        cout<<"Jabatan\t\t: "<<jabatan<<endl;
    }
};
int main()
{
    int no;
    cout<<"===MASUKAN DATA==="<<endl;
    cout<<"1. Mahasiswa"<<endl;
    cout<<"2. Pegawai"<<endl;
    cout<<"Masukan no profesi anda: ";
    cin>>no;
    cout<<"Isi data berikut:\n";
    if (no == 1)
    {
        mahasiswa M1;
    	M1.get();
        cout<<"\n\n++++TAMPILAN DATA++++"<<endl;
        M1.display();
    }
    else if (no ==2)
    {
        pegawai P1;
        P1.get();
        cout<<"\n\n++++TAMPILAN DATA++++"<<endl;
        P1.display();
    }
    return 0;    
}

