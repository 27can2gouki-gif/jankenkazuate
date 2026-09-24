#include <iostream>
using namespace std;

int kazuate() {
	int answer2 = 0;
	cout << "カズアテゲーム" << endl;
	for (; ; ) {
		cout << "1.カイシ" << endl
			<< "2.シュウリョウ" << endl;
		cin >> answer2;
		if (answer2 == 1) {
			cout << "カイシシマス" << endl
				<< endl;
		}
		else {
			if (answer2 == 2) {
				cout << "メインメニューニモドリマス" << endl
					<< endl;
				break;
			}
		}
	}
	return 9;
}