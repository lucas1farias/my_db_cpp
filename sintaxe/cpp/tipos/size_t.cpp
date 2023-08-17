

/*
    Aqui estão algumas razões pelas quais size_t é preferido:
    
    Compatibilidade de Tamanho: 
        O tipo size_t é um tipo não assinado que é projetado para representar tamanhos e índices de contêineres. 
        Ele é grande o suficiente para abranger o tamanho máximo que um contêiner pode ter, o que ajuda a evitar 
        problemas de estouro em cenários em que valores negativos não são aplicáveis (como índices).

    Evitar Warnings: 
        Em alguns casos, usar int pode resultar em avisos de conversão quando você compara variáveis de tipo 
        "int" com tamanhos de contêineres. Usar "size_t" evita esses avisos.

    Convenção: 
        O uso de "size_t" para índices e tamanhos é uma convenção comum em C++ e é amplamente aceito pela 
        comunidade de programadores.

    No entanto, se você preferir usar "int", não há problema em fazê-lo. É uma questão de escolha e estilo de 
    codificação. Certifique-se apenas de que sua escolha seja consistente em todo o código e que você esteja 
    ciente das implicações de usar int em comparação com "size_t".
*/

#include <iostream>
using namespace std;

int main() {
    string nome = "Lucas";
    size_t nome_t = nome.length();
    cout << nome_t;
    return 0;
}
