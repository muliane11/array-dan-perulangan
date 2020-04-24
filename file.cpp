
include<iostream>
using namespace std;

int main(){
    int arrayNilai[10] = {0,1,2,3,4,5,6,7,8,9};
    for(int nilai : arrayNilai){
        cout<<"Alamat Memori (Array): " << &nilai <<" Nilainya : "<<nilai<< endl;
        nilai =1; 
    }
    cout<<endl;
    //memanipulasi array dengan menggunakan referensi
    for(int &nilaiRef : arrayNilai){
        nilaiRef*=2;
    }
     cout<<endl;
    for(int &nilaiRef : arrayNilai){
        cout<<"Alamat Memori (Array):  " << &nilaiRef <<" Nilainya : "<<nilaiRef<< endl;
    }
    cin.get();
    return 0;
}
