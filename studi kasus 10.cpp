#include<iostream>
using namespace std;

class Mahasiswa{
    public: 
        void mhs();

    private:
        string nama[20];
        int nim[20],*y;

};

void Mahasiswa::mhs(){
int x,p;
cout<<"Masukan Jumlah Data Mahasiswa : ";
cin>>p;
for(int i=1;i<=p;i++)
{
 y=&nim[i];
 cout<<endl;
 cout<<"no : ";
 cin>>i;
    cout<<"Masukan Nama Mahasiswa : ";
    cin>>nama[i];
    cout<<"Masukan NIM Mahasiswa  : ";
    cin>>nim[i];
 cout<<endl;
}
cout<<endl;
cout<<"__________________\n";
cout<<"No"<<"\t"<<"Nama"<<"\t\t"<<"NIM"<<"\t\t"<<"Alamat nim"<<endl;
cout<<"__________________\n";
for( int i=1;i<=p;i++)
{
y=&nim[i];
cout<<i<<"\t"<<nama[i]<<"\t\t"<<nim[i]<<"\t\t"<<y<<"\t";

cout<<endl;
}
cout<<endl;
}

int main(){
	cout << "=======================================================\n";
	cout << "\t\t\tPROGRAM POINTER\n";
	cout << "=======================================================\n";
    Mahasiswa UAD;
    UAD.mhs();
    return 0;
}
