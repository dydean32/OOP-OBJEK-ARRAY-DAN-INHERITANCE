#include <iostream>
using namespace std;

class orang
{
    private :
    char nama[100];
    int umur;
    public :
    void get()
    {
        cin.get();
        cout<<"Nama\t\t: ";
        cin.getline(nama,100);
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
    char SMA[100];
    float UAN;
    public:
    void get()
    {
        cin.ignore();
        cout<<"Nama SMA\t: ";
        cin.getline(SMA,100);
        cout<<"Nilai UAN\t: ";
        cin>>UAN;
    }
    void display()
    {
        cout<<"SMA\t\t: "<<SMA<<endl;
        cout<<"UAN\t\t: "<<UAN<<endl;
    }
};
class mahasiswa : public orang, public pendidikan
{
    private :
    char kampus[100];
    float IP;
    public:
    void get()
    {
        orang::get();
        pendidikan::get();
        cin.get();
        cout<<"Nama Kampus\t: ";
        cin.getline(kampus,100);
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
    public :
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
    cout<<"====MASUKKAN DATA===="<<endl;
    cout<<"1. Mahasiswa"<<endl;
    cout<<"2. Pegawai"<<endl;
    cout<<"Masukkan no profesi anda: ";
    cin>>no;
    cout<<"Isi data berikut:\n";
if (no == 1)
{
    mahasiswa M1;
    M1.get();
    cout<<"\n\n++++TAMPILAN DATA++++"<<endl;
    M1.display();
}
else    
{
    pegawai P1;
    P1.get();
    cout<<"\n\n++++TAMPILAN DATA++++"<<endl;
    P1.display();
}
    return 0;
}
