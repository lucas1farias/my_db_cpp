

#include <iostream>

void percorrer(const std::string colecao[], size_t tamanho) {
    std::cout << "\n{\n";
    for (size_t i = 0; i < tamanho; i++) {
        std::cout << "    " << colecao[i] << ",\n";
    }
    std::cout << "\n}";
}

int main() {
    std::string pessoas[] = {"Ash", "Brock", "Misty"};
    size_t pessoas_t = sizeof(pessoas) / sizeof(pessoas[0]);
    percorrer(pessoas, pessoas_t);
    return 0;
}
