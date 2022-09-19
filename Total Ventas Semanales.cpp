#include <iostream>
#include <math.h>

using namespace std;
int main() {
	
	int total_kia = 0, total_mazda = 0, total_hyundai = 0;
	string marcas[3] = {"KIA", "MAZDA", "HYUNDAI"};
	int kia_ventas_semanales[7] = {7, 4, 6, 8, 9, 1, 0};
	int mazda_ventas_semanales[7] = {10, 1, 25, 30, 15, 17, 10};
	int hyundai_ventas_semanales[7] = {9, 6, 6, 3, 2, 1, 4};
	
	for (int i = 0; i <= 2; i++) {
		if (marcas[i] == "KIA") {
			for (int j = 0; j <= 6; j++) {
				total_kia = total_kia + kia_ventas_semanales[j];
			}
		}
		if (marcas[i] == "MAZDA") {
			for (int j = 0; j <= 6; j++) {
				total_mazda = total_mazda + mazda_ventas_semanales[j];
			}
		}
		if (marcas[i] == "HYUNDAI") {
			for (int j = 0; j <= 6; j++) {
				total_hyundai = total_hyundai + hyundai_ventas_semanales[j];
			}
		}
	}
	cout << "Total KIA: " << total_kia << endl;
	cout << "Total MAZDA: " << total_mazda << endl;
	cout << "Total HYUNDAI: " << total_hyundai << endl;
	
	return 0;
}
