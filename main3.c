#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaração de variáveis
    float materia1, materia2, materia3, materia4, materia5;
    int aprovados = 0, reprovados = 0;
    int numAlunos, i;
    
    // Pergunta quantos alunos serão avaliados
    printf("Informe o numero de alunos a serem avaliados: ");
    scanf("%d", &numAlunos);
    
    for(i = 1; i <= numAlunos; i++) {
        // Entrada de dados
        printf("\n Aluno %d:\n", i);
        
        printf("Informe a nota da materia 1: ");
        scanf("%f", &materia1);
        
        printf("Informe a nota da materia 2: ");
        scanf("%f", &materia2);
        
        printf("Informe a nota da materia 3: ");
        scanf("%f", &materia3);
        
        printf("Informe a nota da materia 4: ");
        scanf("%f", &materia4);
        
        printf("Informe a nota da materia 5: ");
        scanf("%f", &materia5);
        
        // Cálculo da média
        float soma = materia1 + materia2 + materia3 + materia4 + materia5;
        float media = soma / 5;
        printf("Resultado da media: %.2f\n", media);

        // Verifica se o aluno foi aprovado
        if(materia1 >= 6 && materia2 >= 6 && materia3 >= 6) {
            printf("Aluno aprovado\n");
            aprovados++;
        } else {
            printf("Aluno reprovado\n");
            reprovados++;
        }
    }

    // Exibe o número de alunos aprovados e reprovados
    printf("\nTotal de alunos aprovados: %d\n", aprovados);
    printf("Total de alunos reprovados: %d\n", reprovados);

    return 0;
}
