#include <iostream>
#include <thread>

int main() {
    std::thread t1([]() {
        std::cout << "thread1\n" << std::endl;
        });

    t1.join();

    std::thread t2([]() {
        std::cout << "thread2\n" << std::endl;
        });

    t2.join();

    std::thread t3([]() {
        std::cout << "thread3\n" << std::endl;
        });

    t3.join();

    return 0;
}