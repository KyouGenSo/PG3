#include <iostream>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>
#include <functional>

// 関数ポインターの型を定義
typedef std::function<bool(int)> CheckFunc;
typedef void (*PFunc)(int*);

// 結果をチェックするコールバック関数
void checkResult(int diceNumber, CheckFunc checkFunc) {
    if (checkFunc(diceNumber)) {
        std::cout << "正解！サイコロの数字は " << diceNumber << " でした。" << std::endl;
    } else {
        std::cout << "不正解。サイコロの数字は " << diceNumber << " でした。" << std::endl;
    }
}

void setTimeout(PFunc resultFunc, int seconds) {
	std::this_thread::sleep_for(std::chrono::seconds(seconds));

    resultFunc(&seconds);
}

void DisplayResult(int* seconds) {
	std::cout << *seconds << "秒経過しました。"  << std::endl;
}

// 偶数チェック用の関数
bool isEven(int number) {
    return number % 2 == 0;
}

// 奇数チェック用の関数
bool isOdd(int number) {
    return number % 2 != 0;
}

int main() {
    // 乱数のシードを初期化
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // サイコロを振る
    int diceNumber = std::rand() % 6 + 1;

    // ユーザーに奇数か偶数かを入力してもらう
    std::cout << "サイコロの数字は奇数か偶数かを予想してください (0:偶数, 1:奇数): ";
    int userInput;
    std::cin >> userInput;

	PFunc resultFunc = DisplayResult;
	setTimeout(resultFunc, 3);

	// ラムダ式を使って結果を表示する
	checkResult(diceNumber, [userInput](int number) -> bool {
		if (userInput == 0) {
			return isEven(number);
		} else {
			return isOdd(number);
		}
		});

    return 0;
}