#include <iostream>
using namespace std;

class orang
{
	private:
    char nama[30];
    int umur;
public :
    void get()         //konstruktor
    {
        cout<<"Nama : ";
        cin.getline(nama,30);
        cout<<"Umur : ";
        cin>>umur;
    }
    void display()
    {
        cout<<"Nama         : "<<nama<<endl;
        cout<<"Umur         : "<<umur<<endl;
    }
};
       class Mahasiswa : public orang //definisi kelas turunan level 1
{
	private :
	string kampus;
	int NIM;
	public :
		void get()
		{
			orang :: get();
			cout<<"Nama Kampus : ";
			cin>>kampus;
			cout<<"NIM : ";
			cin>>NIM;
		}
		void display()
		{
			orang::display();
			cout<<"Nama Kampus : "<<kampus<<endl;
			cout<<"NIM		   : "<<NIM<<endl;
		}    
};
        class Engineer : public Mahasiswa
{
	private:
    string sertf;
    public:
    void get()
    	{		
    		Mahasiswa::get();
    		cout<<"Sertifikat Bid. Telekomunikasi: ";
    		cin>>sertf;
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
    cout<<"===MASUKAN DATA==="<<endl;
    E1.get();
    cout<<"\n\n++++TAMPILKAN DATA++++"<<endl;
    
    E1.display();
    return 0;
}

