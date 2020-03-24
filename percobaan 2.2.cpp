#include <iostream>
using namespace std;

class Induk                                   //Kelas Induk
{
private:
    void privA()
    { 
	cout<<"\nMember Kelas Induk private bekerja";
	}
protected:
    void protA()
    {
	cout<<"\nMember Kelas Induk protected bekerja";
	}
public:
    void pubA()
    {
	 cout<<"\nMember Kelas Induk public bekerja";
	}
};
class Turunan1 : public Induk               //Kelas turunan public
{
public:
    void fungsi_turunan1()
    {
	    cout<<"\n\n==AKSES MEMBER KELAS INDUK DARI MEMBER FUNGSI KELAS TURUNAN1==";
		Induk::protA();   
		Induk::pubA();
    }
};
class Turunan2 : public Turunan1             //Kelas Turunan Private
{
public:
    void fungsi_turunan2()
    {   cout<<"\n\n==AKSES MEMBER KELAS INDUK DARI MEMBER FUNGSI KELAS TURUNAN2==";
		Induk::protA();
		Induk::pubA();
    }
};
int main()
{
    Turunan1 obj1;          //pendefinisian objek dari kelas Turunan1
    cout<<"\n==AKSES MEMBER KELAS INDUK DARI OBJ1==";       
    obj1.pubA();  

    Turunan2 obj2;          //pendefinisian objek dari kelas Turunan2
    cout<<"\n\n==AKSES MEMBER KELAS INDUK DARI OBJ2==";
  
    
    obj1.fungsi_turunan1();
    obj2.fungsi_turunan2();
cout<<endl;
return 0;
}



