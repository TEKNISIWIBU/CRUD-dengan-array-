#include<iostream>

using namespace std;
#define max 10
string loop;
float volumetabung[max];
float tabung;
int rusuk,phi,tinggi;
float debit;
int pos= 0;

void display(){
	system("cls");
	if( pos > 0){ 
		cout << "Data tersimpan"<<endl;
		cout << "===============volume kubus==============="<<endl;
		for(int a= 0;a<pos;a++){
		cout << a+1 <<". " << volumetabung[a] <<endl;
	  }
	}else{
		cout << "++++++++++data kosong+++++++++++"<<endl;
	}
}
void hitung(){
    int v,w;
    do{
    display();
	cout << "masukkan waktu " << endl;
	cin >> w;  
	debit = volumetabung[v-1]/w;
	cout <<"hasil debit "<< debit <<endl;
    cout <<"hitung lagi(y/t): ";
	cin >> loop;
   }while(loop == "y");
}
void add (){

	do{
		display();
		if(pos< max){
			cout <<"tambah data volume tabung "<<endl;
			cout <<"rusuk ";
			cin >>rusuk;
			cout <<"tinggi ";
			cin >>tinggi;
			phi=3.14;
			tabung = phi*rusuk*rusuk*tinggi;
			volumetabung[pos] = tabung;
		    pos++;
			display();
			cout<<"ulangi (y/t): "<<endl;
		    cin>> loop;

		}else{
			system("cls");
			cout<<"--------memori penuh-----------"<<endl;
			cout<<"ketik t untuk kembali ";
		    cin>> loop;
		}
	}while(loop =="y");
}
void edit(){
	int y;
	do{
		display();
		cout<< "ubah data ke: ";
		cin >> y;
		    cout <<"volume tabung "<<endl;
	        cout <<"rusuk ";
			cin >> rusuk;
			cout <<"tinggi ";
			cin >> tinggi;
			phi = 3.14;
			tabung = phi*rusuk*rusuk*tinggi;
			volumetabung[y-1] = tabung;
		system("cls");
		display();
		cout <<"ubah lagi(y/t): ";
		cin >> loop;
	}while(loop =="y");
}
void delet(){
	int x;
	 do{
	 	if(pos > 0){
	 		display();
	 		cout << "hapus data ke: ";
	 		cin >> x;
	 		for(int i =x; i < pos;i++){
	 			volumetabung[i-1] = volumetabung[i];
			 }
			 pos--;
			 display();
			 cout << "hapus lagi (y/t): ";
			 cin >>loop;
		 }else{
		 	cout<<"data masih kosong tambahkan data"<<endl;
		 	cout<<"(kembali ketik t)";
		 	cin>>loop;
		 }
	 }while(loop=="y");
}

int main(){	
    int pilih;
    do{
    system("cls");
    p1:
	cout<<"================================================="<<endl;
	cout<<"1.tambah data"<<endl;
	cout<<"2.ubah data"<<endl;
	cout<<"3.hapus data"<<endl;
	cout<<"4.tampilkan data"<<endl;
	cout<<"5.hitung debit dari volume yang dimasukkan"<<endl;
	cout<<"6.keluar"<<endl;
	cout<<"================================================="<<endl;
	cout <<"pilihan: "<<endl;
	cin>>pilih;
	
	switch(pilih){
		case 1:
			add();
			break;
		case 2:
			edit();
			break;
	    case 3:
			delet();
			break;
		case 4:
			do{
			display();
			cout<< "ingin keluar(y/t)" <<endl;
			cin >> loop;
		   }while(loop != "y");
			break;
		case 5:
			do{
			hitung();
			cout<< "ingin keluar(y/t)" <<endl;
			cin >> loop;
		}while(loop != "y");
			break;
		case 6:
			cout<<"keluar"<<endl;
			break;
		default:
		    cout<<"tidak sesuai"<<endl;
			system("cls");
			goto p1;
			break;		
	}
  }while(pilih !=6);
  cout << "program selesai.....";
}


