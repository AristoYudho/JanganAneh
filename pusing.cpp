#include <iostream>
using namespace std;

struct pc{
	string jenis;
    string produsen[5];
    string prodc1[12];
    int prod1[12];
    string prodc2[12];
    int prod2[12];
    string prodc3[12];
    int prod3[12];
    string prodc4[12];
    int prod4[12];
    string prodc5[12];
    int prod5[12];
};

int main() {

    int i,j,x;
	
    pc kategori[1] = {
	{"Keyboard",{"Sades","Rexus","Fantech","Logitech"},
		{"Sades Tenka","Sades Kunai","Sades Dragon Wolf","Sades Frost Staff","Sades Groza","Sades Khanda", "Sades Rebellion","Sades Shield","Sades Sickle","Sades Sabre", "Sades Neo Whistle", "Sades Rifle"},
		{620000, 850000, 725000, 850000, 650000, 450000, 500000, 680000, 705000, 220000, 325000, 270000},
		{"Rexus Keyboard Gaming Mechanical Daxa M84X Ultimate","Rexus Keyboard Bluetooth Gaming Mechanical Daxa M64 Ultimate","Rexus Keyboard Gaming Mechanical Legionare MX5.1 TKL NEW EDITION",
		"Rexus Keyboard Gaming K9E","Rexus Keyboard Gaming Mechanical Legionare MX5.2 TKL","Rexus Keyboard Gaming Mechanical Legionare MX9 Pudding / MX9P TKL RGB",
		"Rexus Keyboard Gaming Mechanical Legionare MX9 TKL RGB", "Rexus Keyboard Gaming Mechanical Legionare MX3.2", "Rexus Keyboard Gaming Fortress K9TKL", "Rexus Keyboard Gaming Mechanical Daiva D68SF South Facing",
		"Rexus Keyboard Gaming Mechanical Daxa M64 / M-64 Classic"},
		{2549000, 1499000, 429000, 269000, 559000, 799000, 459000, 179000, 829000,1149000},
		{"Fantech MAXFIT61 FROST Wireless Hostwap Keyboard Gaming Mechanical RGB","Fantech MAXFIT61 FROST Wired Hostwap Keyboard Gaming Mechanical RGB","Fantech MAXFIT87 Hotswap RGB 5 pin Keyboard Gaming Mechanical MK856",
		"Fantech MAXFIT108 Hotswap RGB 5 pin Keyboard Gaming Mechanical MK855","Fantech MINT EDITION MAXFIT87 MK856 Mechanical Keyboard Gaming","Fantech MAXFIT61 MK857 60% Keyboard Gaming Mechanical",
		"Fantech MAXPOWER MK853 Mechanical Keyboard Gaming SAKURA EDITION","Fantech MAXPOWER MK853 Mechanical Keyboard Gaming","Fantech MAXPOWER MK853 Mechanical Keyboard Gaming SPACE","Fantech Fighter K613L",
		"Fantech Fighter K613 TKL"},
		{599000, 499000, 579000, 649000, 399000, 489000, 469000, 469000, 469000, 209000, 199000}}
	};
	
	for (i=0; i<1; i++){
		cout << kategori[i].jenis<<endl;
		for (x=0; x<3; x++){
			cout << kategori[i].produsen[x]<<endl;
			cout << "------------------------------"<<endl;
			if (x==0){
				for (j=0; j<12; j++){
					cout << "Produk : "<<kategori[i].prodc1[j] <<endl;
					cout << "Harga : "<<kategori[i].prod1[j]<<endl<<endl;
				}
			}
			if (x==1){
				for (j=0; j<10; j++){
					cout << "Produk : "<<kategori[i].prodc2[j] <<endl;
					cout << "Harga : "<<kategori[i].prod2[j]<<endl<<endl;
				}
			}
			if (x==2){
				for (j=0; j<11; j++){
					cout << "Produk : "<<kategori[i].prodc3[j] <<endl;
					cout << "Harga : "<<kategori[i].prod3[j]<<endl<<endl;
				}
			}
			if (x==3){
				for (j=0; j<11; j++){
					cout << "Produk : "<<kategori[i].prodc4[j] <<endl;
					cout << "Harga : "<<kategori[i].prod4[j]<<endl<<endl;
				}
			}
			if (x==4){
				for (j=0; j<11; j++){
					cout << "Produk : "<<kategori[i].prodc5[j] <<endl;
					cout << "Harga : "<<kategori[i].prod5[j]<<endl<<endl;
				}
			}
			
		}
		
	}
}
