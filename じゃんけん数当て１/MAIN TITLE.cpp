#include <iostream>
#include "kazuate.h"
#include "janken.h"
using namespace std;

int janken();
int kazuate();

int main() {
    int game = 0;
    for (; ; ) {
        cout << "ナニニシマスカ?＞[I]" << endl
            << endl
            << "1.ジャンケン" << endl
            << "2.カズアテ" << endl
            << "3.システムシュウリョウ" << endl;
        cin >> game;
        if (game == 1) {
            cout << "ジャンケンゲームヲキドウシマス＞[I]" << endl
                << endl
                << endl;
            janken();
        }
        else {
            if (game == 2) {
                cout << "カズアテゲームヲキドウシマス＞[I]" << endl
                    << endl
                    << endl;
                kazuate();
            }
            else {
                if (game == 3) {
                    cout << "システムヲシュウリョウシマス＞[I]" << endl
                        << endl;
                    break;
                }
            }
        }
        

    }
    cout << "ゴリヨウアリガトウゴザイマシタ＞[I]ﾉｼ" << endl;
}
