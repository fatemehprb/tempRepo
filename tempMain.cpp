#include<iostream>
using namespace std;
//new comment 1

int main(void) {
	int T[8][8];
	
	
	int J;
	for (J = 0; J < 64; J++) {
		if ((J % 8) % 2 == 0 and (J / 8) % 2 == 0) *(*(T + J / 8) + J % 8) = 0;
		else if ((J % 8) % 2 == 1 and (J / 8) % 2 == 1) *(*(T + J / 8) + J % 8) = 0;
		else *(*(T + J / 8) + J % 8) = 1;
	}
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cout << T[i][j] << " ";

		}
		cout << endl;
	}
}