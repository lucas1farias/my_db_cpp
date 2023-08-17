

#include <iostream>
#include <vector>

void percorrer(const std::vector<std::string> &colecao) {
    std::cout << "\n{\n";
    for (size_t i = 0; i < colecao.size(); i++) {
        std::cout << "    " << colecao[i] << ",\n";
    }
    std::cout << "\n}";
}

int main() {
    std::vector<std::string> pessoas = {"Ash", "Brock", "Misty"};
    percorrer(pessoas);
    return 0;
}
