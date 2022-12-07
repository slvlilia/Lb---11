#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> months;
    months.insert(std::pair<std::string, int>("January", 31));
    months.insert(std::pair<std::string, int>("February", 28));
    months.insert(std::pair<std::string, int>("March", 31));
    months.insert(std::pair<std::string, int>("April", 30));
    months.insert(std::pair<std::string, int>("May", 31));
    months.insert(std::pair<std::string, int>("June", 30));
    months.insert(std::pair<std::string, int>("July", 31));
    months.insert(std::pair<std::string, int>("August", 31));
    months.insert(std::pair<std::string, int>("September", 30));
    months.insert(std::pair<std::string, int>("October", 31));
    months.insert(std::pair<std::string, int>("November", 30));
    months.insert(std::pair<std::string, int>("December", 31));

    std::string name;
    while (true) {
        std::cout << "Month name: ";
        std::getline(std::cin, name);
        if (name.empty())
            break;
        std::map<std::string, int>::const_iterator i;
        if ((i = months.find(name)) == months.end())
            std::cout << "Wrong month name!" << std::endl;
        else
            std::cout << "Month days: " << i->second << std::endl;
    }
    return 0;
}