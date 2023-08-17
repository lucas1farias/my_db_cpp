

#include <iostream>
#include <string>
#include <limits>

int nova_entrada_num(const std::string& conteudo) {
    int entrada = 0;
    
    std::cout << conteudo;
    // Enquanto algo que não for número for passado
    while (!(std::cin >> entrada)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Entrada inválida. Tente novamente\n" << conteudo;
    }

    return entrada;
}

int main() {
    int numero = -1;
    int fim = 0;
    
    // Tratamento para parar
    while (numero != fim) {
        // Tratamento para impedir outros tipos
        numero = nova_entrada_num("Digite um número inteiro ou 0 para encerrar >>> ");
    }

    std::cout << "Algoritmo encerrado" << std::endl;
    
    return 0;
}
