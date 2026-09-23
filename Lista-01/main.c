#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //incluir acentos

int exercicio01();
int exercicio02();
int exercicio03();
int exercicio04();
int exercicio05();
int exercicio06();
int exercicio07();
int exercicio08();
int exercicio09();
int exercicio10();
int exercicio11();
int exercicio12();
int exercicio13();
int exercicio14();
int exercicio15();
int exercicio16();
int exercicio17();
int exercicio18();
int exercicio19();
int exercicio20();
int exercicio21();
int exercicio22();
int exercicio23();
int exercicio24();
int exercicio25();
int exercicio26();
int exercicio27();
int exercicio28();
int exercicio29();
int exercicio30();
int exercicio31();
int exercicio32();
int exercicio33();
int exercicio34();
int exercicio35();
int exercicio36();
int exercicio37();

int main(){

    setlocale(LC_ALL,"");

    int opcao;

    printf("Digite o numero do exercicio (01 a 37): \n\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:  exercicio01();  break;
        case 2:  exercicio02();  break;
        case 3:  exercicio03();  break;
        case 4:  exercicio04();  break;
        case 5:  exercicio05();  break;
        case 6:  exercicio06();  break;
        case 7:  exercicio07();  break;
        case 8:  exercicio08();  break;
        case 9:  exercicio09();  break;
        case 10: exercicio10(); break;
        case 11: exercicio11(); break;
        case 12: exercicio12(); break;
        case 13: exercicio13(); break;
        case 14: exercicio14(); break;
        case 15: exercicio15(); break;
        case 16: exercicio16(); break;
        case 17: exercicio17(); break;
        case 18: exercicio18(); break;
        case 19: exercicio19(); break;
        case 20: exercicio20(); break;
        case 21: exercicio21(); break;
        case 22: exercicio22(); break;
        case 23: exercicio23(); break;
        case 24: exercicio24(); break;
        case 25: exercicio25(); break;
        case 26: exercicio26(); break;
        case 27: exercicio27(); break;
        case 28: exercicio28(); break;
        case 29: exercicio29(); break;
        case 30: exercicio30(); break;
        case 31: exercicio31(); break;
        case 32: exercicio32(); break;
        case 33: exercicio33(); break;
        case 34: exercicio34(); break;
        case 35: exercicio35(); break;
        case 36: exercicio36(); break;
        case 37: exercicio37(); break;

        default:
            printf("Exercicio invalido!\n");
    }

    return 0;
}
