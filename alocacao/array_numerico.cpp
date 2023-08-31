

#include <iostream>

int main() {
    int *nums = new int[3];
    
    // Mostrando os endereços dos dados ainda não alocados (apesar de não ser considerado boa prática)
    std::cout << "\n{\n";
    for (int i = 0; i < 3; i++) {
        std::cout << "    " << nums[i] << ",\n";
    }
    std::cout << "{\n";
    
    // Alocação de índices em array de números (pode ser feita diretamente)
    nums[0] = 2;
    nums[1] = 5;
    nums[2] = 7;

    // Mostrando os endereços dos dados já alocados
    std::cout << "\n{\n";
    for (int i = 0; i < 3; i++) {
        std::cout << "    " << nums[i] << ",\n";
    }
    std::cout << "{\n";

    // Liberação da memória
    delete[] nums;

    return 0;
}
