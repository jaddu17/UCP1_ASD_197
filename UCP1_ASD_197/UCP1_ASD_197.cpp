// Type 2
// 1. Bubble sort : dengan cara membandingkan antara indeks 0 dengan indeks 1, 
//      lalu tukarkan jika array yang berada di indeks 1 lebih kecil dari pada array 
//      yang berada di indeks 0. lakukan hal tersebut dengan cara berulang, 
//      jika index + 1 lebih besar daripada indeks maka tidak terjadi pertukaran. 
//      Lakukan perulangan tersebut sampai j = 0 ke n - 1 - pass.
// 2. Shell sort : terdapat beberapa data yang sudah diurutkan.
//      dengan membandingkan elemen yang dipisahkan oleh beberapa kelompok,  
//      ini berfungsi untuk mempermudah elemen menentukan posisi yang benar.
// 3. apabila terdapat beberapa algoritma yang sudah berurutan,
//      dapat menggunakan insertion sort karna cara ini lebih efisien.
//      hanya perlu membuat satu perbandingan di setiap pass.
//		jika ingin mengurutkan dari yang kecil ke yang besar,
//		dibagi menjadi 2 kelompok yaitu yang sudah terurut dengan yang masih berantakan,
//		lalu bandingkan antara kelompok yang sudah berurut dengan yang masih berantakan,
//		jika array yang berada di kelompok yang masih berantakan lebih besar dubandingkan 
//		dengan yang sudah terurut maka array tersebut di taruh di belakang kelompok array 
//		yang sudah berurut. jika array yang berada di kelompok yang masih berantakan lebih 
//		kecil di bandingkan kelompok array yang sudah terurut maka di letakkan di depan 
//		kelompok array yang sudah terurut tersebut.	

#include <iostream>
using namespace std;

int jadu[97];
int n;

void input() {
	while (true) {
		cout << "Masukan jumlah data pada elemen jadu :";
		cin >> n;

		if (n <= 97) {
			break;
		}
		else
		{
			cout << "\njadu yang anda masukkan maksimal 97 elemen.\n";
		}
	}
	cout << endl;
	cout << "====================" << endl;
	cout << "Masukan elemen jadu" << endl;
	cout << "===================" << endl;

	for (int i = 0; i < n; i++) 
	{
		cout << "Data ke-" << (i + 1) << " : ";
		cin >> jadu[i];
	}
}
void insertionsort() {              

	int temp;                       
	int i, j;                       

	for (i = 1; i <= n - 1; i++) {  

		temp = jadu[i];              

		j = i - 1;                  

		while (j >= 0 && jadu[j] > temp)
		{
			jadu[j + 1] = jadu[j];
			j--;
		}
		jadu[j + 1] = temp;                 

		cout << "\nPass" << i << ":";      
		for (int k = 0; k < n; k++) {       
			cout << jadu[k] << " ";          
		}
	}
}
void display() {
	cout << endl;
	cout << "\n==================================" << endl;        
	cout << "Element Array yang telah tersusun" << endl;          
	cout << "==================================" << endl;        

	for (int j = 0; j < n; j++) {                  
		cout << jadu[j] << endl;                     
	}
	cout << endl;                                   

}
int main()
{
	input();
	insertionsort();
	display();
}