#include <iostream>
using namespace std;

class orang
{
    private :
    char nama[30];
    int umur;
public:
    void get()         //konstruktor
    {
        cout<<"Nama : ";
        cin>>nama;
        cout<<"Umur : ";
        cin>>umur;
    }
    void display()
    {
        cout<<"Nama         : "<<nama<<endl;
        cout<<"Umur         : "<<umur<<endl;
    }
};
        class  Mahasiswa : public orang//definisi kelas turunan level 1
{
    private:
    char kampus[100];
    int NIM;
    public :
    void get()
    {
        
        orang :: get();
        cin.ignore();
        cout<<"Nama Kampus : ";
        cin>>kampus;
        cout<<"NIM  : ";
        cin>>NIM;
    }
    void display()
    {
        orang::display();
        cout<<"Nama Kampus  : "<<kampus<<endl;
        cout<<"NIM          : "<<NIM<<endl;
    }
};
    class Engineer : public Mahasiswa         //Definisi kelas turunan level 2
{
    private :
    char sertf[100];
    public :
    void get()
    {
        Mahasiswa::get();
        cin.ignore();
        cout<<"Sertifikasi Bid. Telekomunikasi: ";
        cin.getline(sertf,100);
    }
    void display()
    {
        Mahasiswa::display();
        cout<<"Sertifikasi Bid. Telekomunikasi: "<<sertf;
    }
};
int main()
{
    Engineer E1;
    cout<<"====MASUKAN DATA===="<<endl;
    E1.get();
    cout<<"\n\n++++TAMPILKAN DATA++++"<<endl;
    E1.display();
    return 0;
    
}
