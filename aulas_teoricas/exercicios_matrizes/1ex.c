#include <stdio.h>

int main(){
    int vetor[3] = {1,2,3};

    int matriz[3][3] = {{1,2,3},
                        {1,2,3},
                        {1,2,3},
                       };
    
    int notas[2][3][3] = {{ {1,2,3},       //SEMESTRES, ALUNOS, DISCIPLINAS
                            {1,2,3},
                            {1,2,3},
                        },
                        {   {1,2,3},
                            {1,2,3},
                            {1,2,10},
                        }
                        };

    char disciplinas[3][15] = {"Filo", "Edfis", "Mat"};

    for(int i = 0; i < 2; i++){
        printf("SEMESTRE %d:\n", i + 1);
        for(int j = 0; j < 3; j++){
            printf("ALUNO %d:\n", j + 1);
            for(int z = 0; z < 3; z++){
                printf("DISCIPLINA %s: %d\n", disciplinas[z], notas[i][j][z]);
            }
            printf("\n");
        }
        printf("----------------------\n\n");
    }

    printf("NOTA ALEATORIA: %d\n", notas[1][2][2]);

    

    


    

}