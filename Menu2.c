#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// tipo de variables que se utilizaron
int menu1, menunotas, menuestudiante, menunotase, menupromedio, menualto;
float notac1, notac2, notac3, notap1, notap2, notap3, notaz1, notaz2, notaz3, promedio;
main()
{
    do{ // do principal
    system ("cls");
    printf("\n ***** MENU COLEGIO CASITA AZUL *****\n "); // menu principal
    printf("\n 1. Menu Profesor\n ");
    printf("\n 2. Menu Estudiante\n ");
    printf("\n Opcion: ");
    scanf("%d", & menu1);

    switch(menu1)
    {
       case 1: // case 1 principal
            do{ // do secundario
            system("cls");
            printf("\t\n***** MENU PROFESOR *****\n ");
            printf("\n 1. Ingresar las notas del estudiante Cardona \n");
            printf("\n 2. Ingresar las notas del estudiante Perez \n");
            printf("\n 3. Ingresar las notas del estudiante Zambrano \n");
            printf("\n 4. Regresar al menu principal \n");
            printf("\n Opcion:");
            scanf("%d", &menunotas);


            switch(menunotas)
            {
                case 1:
                    system("cls");
                    printf("NOTAS ESTUDIANTE CARDONA\n ");
                    printf("Corte 1: \n"); scanf("%f",&notac1);
                    printf("Corte 2: \n"); scanf("%f",&notac2);
                    printf("Corte 3: \n"); scanf("%f",&notac3);
                    printf("4. Salir: ");
                    scanf("%d",&menunotas);
                    break;

                case 2:
                    system("cls");
                    printf("NOTAS ESTUDIANTE PEREZ\n ");
                    printf("Corte 1: \n"); scanf("%f",&notap1);
                    printf("Corte 2: \n"); scanf("%f",&notap2);
                    printf("Corte 3: \n"); scanf("%f",&notap3);
                    printf("4. Salir: ");
                    scanf("%d",&menunotas);
                    break;

                case 3:
                    system ("cls");
                    printf("NOTAS ESTUDIANTE ZAMBRANO\n ");
                    printf("Corte 1: \n"); scanf("%f",&notaz1);
                    printf("Corte 2: \n"); scanf("%f",&notaz2);
                    printf("Corte 3: \n"); scanf("%f",&notaz3);
                    printf("4. Salir: ");
                    scanf("%d",&menunotas);
                    break;
                case 4:
                    break;



            }
        }while(menunotas!=4); // cierre del do secundario
        break; // cierre del case 1 principal

        // ***********inicio menu estudiantes*********

        case 2:// menu estudiantes
            do{
            system("cls");
            printf("\t\n***** MENU ESTUDIANTE *****\n ");
            printf("\n 1. Consultar sus notas \n");
            printf("\n 2. Conocer el promedio de sus notas \n");
            printf("\n 3. Conocer el valor mas alto de sus calificaciones \n");
            printf("\n 4. Salir: \n");
            printf("\n Opcion: ");
            scanf("%d",&menuestudiante);
            switch(menuestudiante)
            {
                 case 1: //Oprima 1 para consultar sus notas
                    system("cls");
                    printf("\t \n***** CONSULTA DE NOTAS *****\n");
                    printf("\n 1. Consultar las notas del estudiante Cardona\n");
                    printf("\n 2. Consultar las notas del estudiante Perez\n");
                    printf("\n 3. Consultar las notas del estudiante Zambrano\n");
                    printf("\n 4. Salir\n");
                    printf("\n Opcion: ");
                    scanf("%d",&menunotase);
                    switch(menunotase)
                    {
                    case 1:// Notas estudiante Cardona
                        system("cls");
                        printf("\n ***** NOTAS ESTUDIANTE CARDONA *****\n ");
                        printf("\n Primer corte:  %f",notac1);
                        printf("\n Segundo corte:  %f", notac2);
                        printf("\n Tercer corte:  %f", notac3);
                        printf("\n 4. Salir: \n");
                        printf("\n Opcion: ");
                        scanf ("&d", &menunotase);
                        system("pause");
                        break; // finalizacion de la consulta de notas estudiante cardona
                    case 2:
                        system("cls");
                        printf("\n ***** NOTAS ESTUDIANTE PEREZ *****\n ");
                        printf("\n Primer corte:  %f",notap1);
                        printf("\n Segundo corte:  %f", notap2);
                        printf("\n Tercer corte:  %f", notap3);
                        printf("\n 4. Salir: \n");
                        printf("\n Opcion: ");
                        system("pause");
                        break;
                    case 3:
                        system("cls");
                        printf("\n ***** NOTAS ESTUDIANTE ZAMBRANO *****\n ");
                        printf("\n Primer corte:  %f",notaz1);
                        printf("\n Segundo corte:  %f", notaz2);
                        printf("\n Tercer corte:  %f", notaz3);
                        printf("\n 4. Salir: \n");
                        printf("\n Opcion: ");
                        system("pause");
                        break;//cierre del break caso 2 inicio del menu estudiante

                    }

                    break;// break Oprima 1 para consultar sus notas

                    case 2://Oprima 2 para conocer el promedio de sus notas
                        do{
                        system("cls");
                        printf("\t\n ***** PROMEDIO DE NOTAS***** \n");
                        printf("\n 1. Estudiante Cardona \n");
                        printf("\n 2. Estudiante Perez\n");
                        printf("\n 3. Estudiante Zambrano\n");
                        printf("\n Opcion: ");
                        scanf("%d", &menupromedio);
                        switch(menupromedio)
                        {
                        case 1:// promedio de notas cardona
                            system("cls");
                            printf("\t\n***** PROMEDIO DE NOTAS CARDONA *****\n");
                            promedio = (notac1 + notac2 + notac3)/3;
                            printf("\n Su promedio es: %.2f\n", promedio);
                            printf("\n 4. Salir \n ");
                            printf("\n Opcion: ");
                            scanf("%d", &menupromedio);
                            break; //break caso 1 promedio estudiante cardona
                        case 2:// promedio de notas perez
                            system("cls");
                            printf("\t\n***** PROMEDIO DE NOTAS PEREZ *****\n");
                            promedio = (notap1 + notap2 + notap3)/3;
                            printf("\n Su promedio es: %.2f\n", promedio);
                            printf("\n 4. Salir \n ");
                            printf("\n Opcion: ");
                            scanf("%d", &menupromedio);
                            break;// break caso 2 promedio estudiante perez
                        case 3:// promedio de notas zambrano
                            system("cls");
                            printf("\t\n***** PROMEDIO DE NOTAS ZAMBRANO *****\n");
                            promedio = (notaz1 + notaz2 + notaz3)/3;
                            printf("\n Su promedio es: %.2f\n", promedio);
                            printf("\n 4. Salir \n ");
                            printf("\n Opcion: ");
                            scanf("%d", &menupromedio);
                            break;// break caso 3 promedio estudiante zambrano
                        }
                        }while (menupromedio!=4);

                        break;// break Oprima 2 para conocer el promedio de sus notas
                    case 3:// Oprima 3 para conocer el valor mas alto de sus notas
                        do{
                        system("cls");
                        printf("\n 1. Nota mas alta estudiante Cardenas\n ");
                        printf("\n 2. Nota mas alta estudiante Perez\n ");
                        printf("\n 3. Nota mas alta estudiante Zambrano\n ");
                        printf("\n 4. Salir \n  ");
                        printf("\n Opcion: ");
                        scanf("%d", &menualto);
                        switch(menualto)
                        {
                        case 1:// Nota mas alta estudiante cardenas
                            system("cls");
                            printf("\n ***** NOTA MAS ALTA ESTUDIANTE CARDENAS *****\n ");
                            printf("\n %0.2f, %0.2f, %0.2f", notac1, notac2, notac3);
                            printf("\n 4. Salir \n");
                            printf("\n Opcion: ");
                            scanf("%d", &menualto);
                            break;//Break case 1 nota mas alta cardenas
                        case 2://  case 2 nota mas alta perez
                            system("cls");
                            printf("\n ***** NOTA MAS ALTA ESTUDIANTE PEREZ *****\n ");
                            printf("\n %0.2f, %0.2f, %0.2f", notap1, notap2, notap3);
                            printf("\n 4. Salir \n");
                            printf("\n Opcion: ");
                            scanf("%d", &menualto);
                            break;//break case 2 nota mas alta perez
                        case 3://case 3 nota mas alta estudainte zambrano
                            system("cls");
                            if(notaz1>notaz2)
                            {
                                printf("\n Esta es su nota mas alta: %f", notaz1);
                            }
                            printf("\n ***** NOTA MAS ALTA ESTUDIANTE ZAMBRANO *****\n ");
                            printf("\n %0.2f, %0.2f, %0.2f", notaz1, notaz2, notaz3);
                            printf("\n 4. Salir\n");
                            printf("\n Opcion: ");
                            scanf("%d", &menualto);
                            break;// break case 3 nota mas alta zambrano
                        }
                        break;//Break Oprima 3 para cocnocer el valor mas alto de sus notas
                        }while(menualto!=4);

                    }
            }while(menuestudiante!=4);
                     break;// break case 2 menu estudiantes

            case 3:// case 3 menu principal salir
                break;
            }



    }// do while ultimo de todo el programa
    while(menu1 !=3); //


}// finalizacion del programa
