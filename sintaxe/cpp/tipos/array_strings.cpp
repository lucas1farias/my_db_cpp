

#include <iostream>

// tamanho não pode ser usado diretamente na função
void percorrer(const char *colecao[], size_t tamanho) {
    std::cout << "\n{\n";
    for (size_t i = 0; i < tamanho; i++) {
        std::cout << "    " << colecao[i] << ",\n";
    }
    std::cout << "\n}";
}

int main() {
    // "const" é mandatório p/ evitar erros
    const char *pessoas[] = {"Ash", "Brock", "Misty"};
    size_t pessoas_t = sizeof(pessoas) / sizeof(pessoas[0]);
    percorrer(pessoas, pessoas_t);
    return 0;
}
