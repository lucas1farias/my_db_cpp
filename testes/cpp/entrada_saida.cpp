

#include <iostream>

int main() {
    // int numero;
    // std::cout << "Digite um número inteiro: ";
    // std::cin >> numero;
    // std::cout << "O número digitado foi: " << numero << std::endl;
    int fim = 0;
    int entrada;
    int contador = 0;
    while (entrada != fim) {
        std::cout << "Digite um numero >>>";
        std::cin >> entrada;
        contador += entrada;
        std::cout << contador << std::endl;
    }
    system("pause>0");
    return 0;
}
