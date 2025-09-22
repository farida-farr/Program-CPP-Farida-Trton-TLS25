#include <iostream>
#include <vector>
#include <thread>   // untuk this_thread::sleep_for
#include <chrono>   // untuk chrono::seconds
using namespace std;

int main() {
	vector<string> lampu = {"Hijau", "Kuning", "Merah"};
	int start;

		cout; " (0=Hijau, 1=Kuning, 2=Merah):";
	cin >> start;

	int posisi = start % 3; // 

	cout << "\n:\n";
	while (true) { //
		cout << lampu[posisi] << endl;
		this_thread::sleep_for(chrono::seconds(3)); //jeda 3 detik
			posisi = (posisi + 1) % 3; // ganti lampu;
	}
	return 0;
} 