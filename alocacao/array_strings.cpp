

/*
  A alocação dinâmica com array de strings comum não é considerada segura
  Existe a opção de alocar com array vetor, que é segura e elimina a liberação manual de memória 
*/

#include <iostream>
#include <string>

int main() {
    int i;
    int t = 3;
    
    // Array de strings criado dinamicamente, configurado p/ ter qtd. de índices "t"
    std::string **pessoas = new std::string*[t];
    
    // Verificação mandatória após criação de ponteiro
    if (pessoas == nullptr) {
        std::cout << "\nErro ao alocar memória. Algoritmo encerrado\n";
    }
    
    /*
        Exibição de dados não alocados (ainda) p/ mostrar que houve alocação no array criado dinamicamente
        É uma boa prática não deixar o pc escolher o que deve ser escolhido como valor antes de alocar
        Como neste contexto, se espera alocar strings, cada espaço é definido inicialmente como uma string vazia
        Outra atribuição válida seria "pessoas[i] = nullptr";
    */
    std::cout << "\n[\n";
    for (i = 0; i < t; i++) {
        pessoas[i] = new std::string("");
        std::cout << "    " << &pessoas[i] << ",\n";
    }
    std::cout << "]\n";
    
    // Alocação
    (*pessoas[0]) = "Ash";
    (*pessoas[1]) = "Brock";
    (*pessoas[2]) = "Misty";
    
    // Exibição dos dados já alocados
    std::cout << "\n[\n";
    for (i = 0; i < t; i++) {
        std::cout << "    " << *pessoas[i] << ",\n";
    }
    std::cout << "]\n";
    
    // Liberação da memória de cada índice do array dinâmico
    for (i = 0; i < t; i++) {
        delete pessoas[i];
    }

    // Liberação da memória de onde foi criado o array dinâmico
    delete[] pessoas;

    return 0;
}
