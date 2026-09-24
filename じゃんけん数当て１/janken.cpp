#include <iostream>
#include "Dice.h"
using namespace std;

int janken() {
	int answer1 = 0;
	cout << "ジャンケンゲーム" << endl;
		for (; ; ) {
			 cout<< "1.カイシ" << endl
				<< "2.シュウリョウ" << endl;
			 cin >> answer1;
			 if (answer1 == 1) {
				 cout << "カイシシマス" << endl
					 << endl;
				 //const char* hand[] = {
					// "グー"
					// "チョキ"
					// "パー"
				 //};
				 int hand = 0;
				 cout << "ダステヲエランデクダサイ" << endl
					 << endl
					 << "1.グー" << endl
					 << "2.チョキ" <<endl
					 << "3.パー" << endl;
				 cin >> hand;
				 if (hand == 1) {
					 cout << "アナタハ[グー]ヲダシマス" << endl
						 << endl;
				 }
				 else {
					 if (hand == 2) {
						 cout << "アナタハ[チョキ]ヲダシマス" << endl
							 << endl;
					 }
					 else {
						 if (hand == 3) {
							 cout << "アナタハ[パー]ヲダシマス" << endl
								 << endl;
						 }
					 }
					
				 }
			 }
			 else {
				 if (answer1 == 2) {
					 cout << "メインメニューニモドリマス" << endl
						 << endl;
					 break;
				 }
			 }
		}
		
}