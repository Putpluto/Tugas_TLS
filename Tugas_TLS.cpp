#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void Main_UI(int account_number, int saldo); // Deklarasi fungsi
int UI_Cek(int account_number,int saldo);
int UI_Trans(int account_number,int saldo);
int UI_Tarik(int account_number,int saldo);

int main()
{
    int account_number, pin, saldo;
    cout << "Masukkan account number: ";
    cin >> account_number;
    cout << "Masukkan pin: ";
    cin >> pin;
    saldo = 1000000;


    Main_UI(account_number, saldo); // menampilkan data
    return 0;
}


void Main_UI(int account_number, int saldo)
{
    int opsi;

    cout << endl<< endl<<endl<< endl<<endl;
    cout <<endl<< "-------------------------"<<endl;
    cout<<"|Account Number: "<<left<<setw(8)<<account_number<<"|";
    cout <<endl<< "|------------------------|"<<endl;
    cout<<left<<setw(25)<< "|1. Cek Saldo"<<"|" <<endl;
    cout<<left<<setw(25)<< "|2. Transfer"<<"|" <<endl;
    cout<<left<<setw(25)<< "|3. Tarik Tunai"<<"|" <<endl;
    cout<<left<<setw(25)<< "|4. Keluar"<<"|" <<endl;
    int l=0;
    while(l!=1)
    {
        cin >> opsi;
        switch (opsi){
        case 1:
            UI_Cek(account_number, saldo);
            break;
        case 2:
            UI_Trans(account_number, saldo);
            break;
        case 3:
            UI_Tarik(account_number, saldo);
            break;
        case 4:
            cout<<"keluar";
            l=1;
            opsi = 0;
            break;
        default:
            cout<<"salah " << endl;
            cout << "masukkan opsi kembali:";
            cin>>opsi;
            break;
    }
    }
    
    
}

int UI_Cek(int account_number,int saldo)
{
    int opsi;
    cout << endl<< endl<<endl<< endl<<endl;
    cout <<endl<< "-------------------------"<<endl;
    cout<<"|Account Number: "<<left<<setw(8)<<account_number<<"|";
    cout <<endl<< "|------------------------|"<<endl;
    cout<<"|saldo anda: "<<left<<setw(11)<<saldo<<" |";
    cout <<endl<< "|------------------------|"<<endl;

    for (int i=0; i<3;i++)
    {
        cout<<left<<setw(25)<<"|"<<right<<"|"<<endl;
    }
    cout<<left<<setw(25)<< "|4. Keluar"<<"|" <<endl;
    cin >> opsi;
    if(opsi==4)
    {
        Main_UI(account_number, saldo); 
        return opsi;         
    }
    return 0;
}

int UI_Trans(int account_number,int saldo)
{
    int no_akun, opsi, nominal;
    cout << endl<< endl<<endl<< endl<<endl;
    cout <<endl<< "-------------------------"<<endl;
    cout<<"|No akun tujuan:";
    cin >> no_akun;
    cout<<"|Nominal: ";
    cin >> nominal;
    while(saldo<0)
    {
        cout<<"|saldo anda tidak cukup"<<endl;
        cout<<"|Nominal: ";
        cin >> nominal;
        saldo=saldo-nominal;
    }

    cout << "|------------------------|"<<endl;
    saldo=saldo-nominal;

    for (int i=0; i<3;i++)
    {
        cout<<left<<setw(25)<<"|"<<right<<"|"<<endl;
    }
    cout<<left<<setw(25)<< "|4. Keluar"<<"|" <<endl;
    cin >> opsi;
    if(opsi==4)
    {
        Main_UI(account_number, saldo); 
        return opsi;         
    }
    return 0;
}

int UI_Tarik(int account_number,int saldo)
{
    int opsi, nominal;
    cout << endl<< endl<<endl<< endl<<endl;
    cout <<endl<< "-------------------------"<<endl;
    cout<<"|Nominal: ";
    cin >> nominal;
    while(saldo<0)
    {
        cout<<"|saldo anda tidak cukup"<<endl;
        cout<<"|Nominal: ";
        cin >> nominal;
        saldo=saldo-nominal;
    }
    cout << "|------------------------|"<<endl;
    
    saldo=saldo-nominal;

    for (int i=0; i<3;i++)
    {
        cout<<left<<setw(25)<<"|"<<right<<"|"<<endl;
    }
    cout<<left<<setw(25)<< "|4. Keluar"<<"|" <<endl;
    cin >> opsi;
    if(opsi==4)
    {
        Main_UI(account_number, saldo); 
        return opsi;         
    }
    return 0;
}