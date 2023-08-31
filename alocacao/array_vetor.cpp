

#include <iostream>
#include <string>
#include <vector>
#include <memory>

int main() {
    int i;
    int t = 3;
    
    /*
      Essa forma despreza a necessidade de liberar memória manualmente
      Essa forma despreza a necessidade de tratar o ponteiro (if ptr == nullptr)
      Por isso que no início, na instanciação do ponteiro, não se vê "new"
      Por isso que no final, não se vê "delete" removendo os índices do array e o array
    */

    // Array de strings criado dinamicamente, configurado p/ ter qtd. de índices "t"
    std::vector<std::unique_ptr<std::string>> pessoas(t);
    
    /*
      Exibição de dados não alocados (ainda) p/ mostrar que houve alocação no array criado dinamicamente
      É uma boa prática não deixar o pc escolher o que deve ser escolhido como valor antes de alocar
      Como neste contexto, se espera alocar strings, cada espaço é definido inicialmente como uma string "."
      OBS: a string pode ser vazia, foi usado "." somente para mostrar que há um dado visível
      Outra atribuição válida seria "pessoas[i] = nullptr";  
    */
    std::cout << "\n[\n";
    for (i = 0; i < t; i++) {
        // std::método<tipo>(valor)
        pessoas[i] = std::make_unique<std::string>(".");
        // Forma de acesso: {"Endereço": &, "Valor": *}
        std::cout << "    " << "Endereco: " << &pessoas[i] << " Valor: " << *pessoas[i] << ",\n";
    }
    std::cout << "]\n";
    
    // Alocação
    (*pessoas[0]) = "Ash";
    (*pessoas[1]) = "Brock";
    (*pessoas[2]) = "Misty";

    // Exibindo os dados já alocados
    std::cout << "\n[\n";
    for (i = 0; i < t; i++) {
        std::cout << "    " << *pessoas[i] << ",\n";
    }
    std::cout << "]\n";

    return 0;
}
