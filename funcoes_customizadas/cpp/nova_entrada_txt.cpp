

#include <iostream>
#include <string>
#include <limits>

std::string nova_entrada_txt(std::string conteudo) {
    std::string entrada;
    std::cout << conteudo;
    std::cin >> entrada;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return entrada;
}

int main() {
    std::string fim = ".";
    std::string entrada = "";
    
    // while ((entrada = nova_entrada_txt("Informe algum texto ou . p/ encerrar >>> ")) != fim)
    while (entrada != fim) {
        entrada = nova_entrada_txt("Informe algum texto ou . p/ encerrar >>> ");
        std::cout << entrada << std::endl;
    }
    std::cout << "\nAlgoritmo encerrado";
    return 0;
}
