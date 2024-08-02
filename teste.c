#include <stdio.h>

int main() {
    char nomes[10][50];
    int idades[10];
    int somaIdades = 0;
    
    for (int i = 0; i < 10; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", nomes[i]);
        
        printf("Digite a idade de %s: ", nomes[i]);
        scanf("%d", &idades[i]);
        
        somaIdades += idades[i];
    }
    
    float mediaIdades = somaIdades / 10.0;
    printf("A média das idades é: %.2f\n", mediaIdades);
    
    return 0;
}
