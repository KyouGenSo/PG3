#include <iostream>
#include <chrono>
#include <string>

int main() {
    std::string largeString(1000000, 'a');

    // コピーの時間計測
    auto startCopy = std::chrono::high_resolution_clock::now();

    std::string copyString = largeString;  // コピー操作

    auto endCopy = std::chrono::high_resolution_clock::now();

    auto copyTime = std::chrono::duration_cast<std::chrono::microseconds>(endCopy - startCopy);
    std::cout << "Copy time: " << copyTime.count() << " microseconds" << std::endl;



    // 移動の時間計測
    std::string moveSource = largeString;

    auto startMove = std::chrono::high_resolution_clock::now();

    std::string movedString = std::move(moveSource);  // ムーブ操作

    auto endMove = std::chrono::high_resolution_clock::now();

    auto moveTime = std::chrono::duration_cast<std::chrono::microseconds>(endMove - startMove);
    std::cout << "Move time: " << moveTime.count() << " microseconds" << std::endl;

    return 0;
}