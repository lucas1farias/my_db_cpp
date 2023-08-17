

#include <iostream>
#include <string>
using namespace std;

// Versão que pode ter estouro de buffer
bool comparar(const char strA[], const char strB[]) {
    int i = 0;
    
    while (strA[i] != '\0' && strB[i] != '\0') {
        if (strA[i] != strB[i]) {
            return false;
        }
        i++;
    }
    return (strA[i] == '\0' && strB[i] == '\0');
}

// Versão recomendada
bool comparar2(const string strA, string strB) {
    int i = 0;

    if (strA.length() != strB.length()) {
        return false;
    } 
    else {
        while (strA[i] != '\0' && strB[i] != '\0') {
            if (strA[i] != strB[i]) {
                return false;
            }
            i++;
        }
        return (strA[i] == '\0' && strB[i] == '\0');
    }
    
}

// Versão recomendada
bool comparar3(const string strA, const string strB) {
    if (strA.length() != strB.length()) {
        return false;
    } 
    else {
        // for (size_t i = 0; strA[i] != '\0' && strB[i] != '\0'; i++) {
        for (size_t i = 0; i < strA.length(); i++) {
            if (strA[i] != strB[i]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    char entradaA[20];
    char entradaB[20];

    std::cout << "Palavra 1 >>> ";
    std::cin >> entradaA;
    std::cout << "Palavra 2 >>> ";
    std::cin >> entradaB;
    
    if (comparar(entradaA, entradaB)) {
        std::cout << "Palavras similares\n";
    } else {
        std::cout << "Palavras diferentes\n";
    }

    if (comparar2(entradaA, entradaB)) {
        std::cout << "Palavras similares\n";
    } else {
        std::cout << "Palavras diferentes\n";
    }

    if (comparar3(entradaA, entradaB)) {
        std::cout << "Palavras similares\n";
    } else {
        std::cout << "Palavras diferentes\n";
    }
    
    return 0;
}

