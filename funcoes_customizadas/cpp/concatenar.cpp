

// Existem problemas nas edições que eu fiz?
#include <iostream>
#include <string>

char *concatenar(const std::string strA, const std::string strB) {
    size_t i, j;

    // Alocação dinâmica
    char *novaString = new char[strA.length() + strB.length() + 1];
    
    if (novaString == nullptr) {
        std::cout << "\nErro ao alocar memória. Encerrando programa.\n";
        exit(0);
    }
    
    for (i = 0; i < strA.length(); i++) {
        novaString[i] = strA[i];
    }

    for (j = 0; j < strB.length(); j++) {
        novaString[i + j] = strB[j];
    }

    novaString[i + j] = '\0';
    return novaString;
}

int main() {
    const std::string palavraA = "Python";
    const std::string palavraB = "script";
    char* pythonScript = concatenar(palavraA, palavraB);
    std::cout << pythonScript;

    // Liberação de memória
    delete[] pythonScript;
    return 0;
}
