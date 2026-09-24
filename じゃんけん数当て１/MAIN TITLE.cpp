#include <iostream>
#include "kazuate.h"
#include "janken.h"
using namespace std;

int main() {
    int GAME = 0;
    for (; ; ) {
        cout << "ナニニシマスカ?＞[I]" << endl
            << endl
            << "1.ジャンケン" << endl
            << "2.カズアテ" << endl
            << "3.システムシュウリョウ" << endl;
        cin >> GAME;
        if (GAME == 1) {
            cout << "ジャンケンゲームヲキドウシマス＞[I]" << janken << flush;
        }
        else {
            if (GAME == 2) {
                cout << "カズアテゲームヲキドウシマス＞[I]" << kazuate << flush;
            }
            else {
                if (GAME == 3) {
                    cout << "システムヲシュウリョウシマス＞[I]" << endl;
                    break;
                }
            }
        }
        

    }
    cout << "ゴリヨウアリガトウゴザイマシタ＞[I]ﾉｼ" << endl;
}