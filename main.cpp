#include <iostream>
#include <list>
#include <cstring>

void printStations(const std::list<const char*>& stations) {
    for (const auto& station : stations) {
        std::cout << station << std::endl;
    }
}

int main() {
    // 1970年の駅一覧（西日暮里、Takanawa Gatewayは含まない）
    std::list<const char*> stations1970;
    stations1970.push_back("Tokyo");
    stations1970.push_back("Kanda");
    stations1970.push_back("Akihabara");
    stations1970.push_back("Okachimachi");
    stations1970.push_back("Ueno");
    stations1970.push_back("Uguisudani");
    stations1970.push_back("Nippori");
    stations1970.push_back("Tabata");
    stations1970.push_back("Komagome");
    stations1970.push_back("Sugamo");
    stations1970.push_back("Otsuka");
    stations1970.push_back("Ikebukuro");
    stations1970.push_back("Mejiro");
    stations1970.push_back("Takadanobaba");
    stations1970.push_back("Shin-Okubo");
    stations1970.push_back("Shinjuku");
    stations1970.push_back("Yoyogi");
    stations1970.push_back("Harajuku");
    stations1970.push_back("Shibuya");
    stations1970.push_back("Ebisu");
    stations1970.push_back("Meguro");
    stations1970.push_back("Gotanda");
    stations1970.push_back("Osaki");
    stations1970.push_back("Shinagawa");
    stations1970.push_back("Tamachi");
    stations1970.push_back("Hamamatsucho");
    stations1970.push_back("Shimbashi");
    stations1970.push_back("Yurakucho");

    // 2019年版の駅一覧：1970年版に加え、西日暮里を「Nippori」の後に挿入
    std::list<const char*> stations2019 = stations1970;
    for (auto it = stations2019.begin(); it != stations2019.end(); ++it) {
        if (std::strcmp(*it, "Nippori") == 0) {
            ++it; 
            stations2019.insert(it, "Nishi-Nippori");
            break;
        }
    }

    // 2022年版の駅一覧：2019年版に加え、高輪ゲートウェイを「Shinagawa」の後に挿入
    std::list<const char*> stations2022 = stations2019;
    for (auto it = stations2022.begin(); it != stations2022.end(); ++it) {
        if (std::strcmp(*it, "Shinagawa") == 0) {
            ++it;
            stations2022.insert(it, "Takanawa Gateway");
            break;
        }
    }

    // 1970年の駅一覧を表示
    std::cout << "Stations in 1970:" << std::endl;
    printStations(stations1970);
    std::cout << std::endl;

    // 2019年の駅一覧を表示
    std::cout << "Stations in 2019:" << std::endl;
    printStations(stations2019);
    std::cout << std::endl;

    // 2022年の駅一覧を表示
    std::cout << "Stations in 2022:" << std::endl;
    printStations(stations2022);

    return 0;
}