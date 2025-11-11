#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// Variáveis
char escolha;

//-------------------------------------------------------------------------------------------------------
// Procedimentos

void limparTela() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}



void opcaoInvalida(char c) {
    if (toupper(c) != 'S' && toupper(c) != 'N')
    {
        printf("Opção inválida! Digite apenas S ou N.\n");
    }
}



void incapz() {
    printf("|---------------------------------------------------------------------------------|\n");
    printf("|                                    RESULTADO                                    |\n");
    printf("|---------------------------------------------------------------------------------|\n");
    printf("|        INCAPZ DE DETERMINAR COM A QUANTIDADE DE INFORMAÇÕES FORNECIDAS          |\n");
    printf("|---------------------------------------------------------------------------------|\n");
}

void ubs() {
    printf("|---------------------------------------------------------------------------------|\n");
    printf("|                                    RESULTADO                                    |\n");
    printf("|---------------------------------------------------------------------------------|\n");
    printf("|  PROCURE UMA UNIDADE BÁSICA DE SAÚDE MAIS PERTO DA SUA CASA PARA SE CONSULTAR.  |\n");
    printf("|---------------------------------------------------------------------------------|\n");
    printf("\n");
    printf("                       Obrigado por utilizar nosso sistema!                        \n");
    printf("      Lembre-se de que nossos resultados não substituem uma consulta médica        \n");
}



void socorro() {
    printf("|---------------------------------------------------------------------------------------|\n");
    printf("|                                       RESULTADO                                       |\n");
    printf("|---------------------------------------------------------------------------------------|\n");
    printf("|  PROCURE UMA UNIDADE DE PRONTO ATENDIMENTO MAIS PERTO DA SUA CASA PARA SE CONSULTAR.  |\n");
    printf("|---------------------------------------------------------------------------------------|\n");
    printf("\n");
    printf("                          Obrigado por utilizar nosso sistema!                           \n");
    printf("         Lembre-se de que nossos resultados não substituem uma consulta médica           \n");
}



void gripe(){
    do
    {
        printf("Está com sintomas de coriza e/ou nariz entupido? (S/N): ");
        scanf(" %c", &escolha);

        opcaoInvalida(escolha);
    } while (toupper(escolha) != 'S' && toupper(escolha) != 'N');
    limparTela();
    //-------------------------------------------------------------------------------------------------------

    if (toupper(escolha) == 'S')
    {
        do
        {
            printf("Está com dor de garganta? (S/N): ");
            scanf(" %c", &escolha);

            opcaoInvalida(escolha);
        } while (toupper(escolha) != 'S' && toupper(escolha) != 'N');
        limparTela();
        //-------------------------------------------------------------------------------------------------------

        if (toupper(escolha) == 'S')
        {
            do
            {
                printf("Está com tosse? (S/N): ");
                scanf(" %c", &escolha);

                opcaoInvalida(escolha);
            } while (toupper(escolha) != 'S' && toupper(escolha) != 'N');
            limparTela();
            //-------------------------------------------------------------------------------------------------------

            if (toupper(escolha) == 'S')
            {
                do
                {
                    printf("Sente muita dor muscular? (S/N): ");
                    scanf(" %c", &escolha);

                    opcaoInvalida(escolha);
                } while (toupper(escolha) != 'S' && toupper(escolha) != 'N');
                limparTela();
                //-------------------------------------------------------------------------------------------------------

                if (toupper(escolha) == 'S')
                {
                    do
                    {
                        printf("Você está com dor de cabeça? (S/N): ");
                        scanf(" %c", &escolha);

                        opcaoInvalida(escolha);
                    } while (toupper(escolha) != 'S' && toupper(escolha) != 'N');
                    limparTela();
                    //-------------------------------------------------------------------------------------------------------

                    if (toupper(escolha) == 'S')
                    {
                        printf("|---------------------------------------------------------------------------------|\n");
                        printf("|                                    RESULTADO                                    |\n");
                        printf("|---------------------------------------------------------------------------------|\n");
                        printf("|                Procure uma unidade básica de saúde, possível gripe              |\n");
                        printf("|---------------------------------------------------------------------------------|\n");
                        printf("\n");
                        printf("                       Obrigado por utilizar nosso sistema!                        \n");
                        printf("      Lembre-se de que nossos resultados não substituem uma consulta médica        \n");
                    }else
                    {
                        ubs();
                    }
                    
                }else
                {
                    do
                    {
                        printf("Você possuí mais algum sintoma? (S/N): ");
                        scanf(" %c", &escolha);

                        opcaoInvalida(escolha);
                    } while (toupper(escolha) != 'S' && toupper(escolha) != 'N');
                    limparTela();
                    //-------------------------------------------------------------------------------------------------------

                    ubs();
                }
                
            }else
            {
                do
                {
                    printf("Você possuí mais algum sintoma? (S/N): ");
                    scanf(" %c", &escolha);

                    opcaoInvalida(escolha);
                } while (toupper(escolha) != 'S' && toupper(escolha) != 'N');
                limparTela();
                //-------------------------------------------------------------------------------------------------------

                ubs();
            }
            
        }else
        {
            do
            {
                printf("Você possuí mais algum sintoma? (S/N): ");
                scanf(" %c", &escolha);

                opcaoInvalida(escolha);
            } while (toupper(escolha) != 'S' && toupper(escolha) != 'N');
            limparTela();
            //-------------------------------------------------------------------------------------------------------

            ubs();
        }

    }else
    {
        do
        {
            printf("Você possuí mais algum sintoma? (S/N): ");
            scanf(" %c", &escolha);

            opcaoInvalida(escolha);
        } while (toupper(escolha) != 'S' && toupper(escolha) != 'N');
        limparTela();
        //-------------------------------------------------------------------------------------------------------

        ubs();
    }
}



void covid(){
    int quant = 0;
    char tosse[]     = "| 1.  Tosse seca e persistente                          \n";
    char nausea[]    = "| 2.  Náusea e vômito                                   \n";
    char diarreia[]  = "| 3.  Diarreia                                          \n";
    char cansaExc[]  = "| 4.  Cansaço excessivo                                 \n";
    char dorMusc[]   = "| 5.  Dor muscular                                      \n";
    char dorCabe[]   = "| 6.  Dor de cabeça                                     \n";
    char garganta[]  = "| 7.  Garganta inflamada                                \n";
    char coriza[]    = "| 8.  Coriza ou nariz entupido                          \n";
    char paladar[]   = "| 9.  Perda de paladar e/ou olfato                      \n";
    char irritacao[] = "| 10. Dor ou irritação nos olhos                        \n";
    int escolhas[10] = {0}, i, erro, repeticao, path;
    

    do
    {
        printf("Sente perda de olfato e/ou paladar? (S/N): ");
        scanf(" %c", &escolha);

        opcaoInvalida(escolha);
    } while (toupper(escolha) != 'S' && toupper(escolha) != 'N');
    limparTela();
    //-------------------------------------------------------------------------------------------------------
    
    if (toupper(escolha) == 'S')
    {
        do
        {
            printf("|--------------------------------------------------------|\n");
            printf("|                    LISTA DE SINTOMAS                   |\n");
            printf("|--------------------------------------------------------|\n");
            
            repeticao = 0;
            for (i = 0; i < 10; i++)
            {
                if (escolhas[i] == 1)
                {
                    repeticao++;
                }
            }
            if (repeticao == 0)
            {
                printf("%s", tosse);
            }

            repeticao = 0;
            for (i = 0; i < 10; i++)
            {
                if (escolhas[i] == 2)
                {
                    repeticao++;
                }
            }
            if (repeticao == 0)
            {
                printf("%s", nausea);
            }

            repeticao = 0;
            for (i = 0; i < 10; i++)
            {
                if (escolhas[i] == 3)
                {
                    repeticao++;
                }
            }
            if (repeticao == 0)
            {
                printf("%s", diarreia);
            }

            repeticao = 0;
            for (i = 0; i < 10; i++)
            {
                if (escolhas[i] == 4)
                {
                    repeticao++;
                }
            }
            if (repeticao == 0)
            {
                printf("%s", cansaExc);
            }

            repeticao = 0;
            for (i = 0; i < 10; i++)
            {
                if (escolhas[i] == 5)
                {
                    repeticao++;
                }
            }
            if (repeticao == 0)
            {
                printf("%s", dorMusc);
            }

            repeticao = 0;
            for (i = 0; i < 10; i++)
            {
                if (escolhas[i] == 6)
                {
                    repeticao++;
                }
            }
            if (repeticao == 0)
            {
                printf("%s", dorCabe);
            }

            repeticao = 0;
            for (i = 0; i < 10; i++)
            {
                if (escolhas[i] == 7)
                {
                    repeticao++;
                }
            }
            if (repeticao == 0)
            {
                printf("%s", garganta);
            }
            
            repeticao = 0;
            for (i = 0; i < 10; i++)
            {
                if (escolhas[i] == 8)
                {
                    repeticao++;
                }
            }
            if (repeticao == 0)
            {
                printf("%s", coriza);
            }

            repeticao = 0;
            for (i = 0; i < 10; i++)
            {
                if (escolhas[i] == 9)
                {
                    repeticao++;
                }
            }
            if (repeticao == 0)
            {
                printf("%s", paladar);
            }
            
            repeticao = 0;
            for (i = 0; i < 10; i++)
            {
                if (escolhas[i] == 10)
                {
                    repeticao++;
                }
            }
            if (repeticao == 0)
            {
                printf("%s", irritacao);
            }
            printf("| 11. Sair                                              \n");
            printf("|--------------------------------------------------------|\n");
            printf("Você sente algum desses sintomas? Caso não sinta nenhum deles ou não tenha mais nenhum sintoma listado acima, digite 11. \n");
            printf("DIGITE SUA RESPOSTA: ");
            do
            {
                erro = 0;
                scanf("%d", &path);

                for (i = 0; i < 10; i++)
                {
                    if (escolhas[i] == path)
                    {
                        printf("Opção inválida!\n");
                        erro++;
                    }
                }
                limparTela();
            } while ((path < 1 || path > 11) || erro != 0);

            switch (path)
            {
            case 1:
                escolhas[0] = 1;
                quant++;
                break;
            
            case 2:
                escolhas[1] = 2;
                quant++;
                break;
            
            case 3:
                escolhas[2] = 3;
                quant++;
                break;
            
            case 4:
                escolhas[3] = 4;
                quant++;
                break;
            
            case 5:
                escolhas[4] = 5;
                quant++;
                break;

            case 6:
                escolhas[5] = 6;
                quant++;
                break;

            case 7:
                escolhas[6] = 7;
                quant++;
                break;

            case 8:
                escolhas[7] = 8;
                quant++;
                break;

            case 9:
                escolhas[8] = 9;
                quant++;
                break;

            case 10:
                escolhas[9] = 10;
                quant++;
                break;

            default:
                break;
            }
        } while (path != 11);
        limparTela();
        //-------------------------------------------------------------------------------------------------------

        if (quant >= 5)
        {
            printf("|----------------------------------------------------------------|\n");
            printf("|                            RESULTADO                           |\n");
            printf("|----------------------------------------------------------------|\n");
            printf("|       Procure um médico imediatamente, risco de Covid-19       |\n");
            printf("|----------------------------------------------------------------|\n");
        }else
        {
            ubs();
        }

    }else
    {
        do
        {
            printf("Você possuí mais algum sintoma? (S/N): ");
            scanf(" %c", &escolha);

            opcaoInvalida(escolha);
        } while (toupper(escolha) != 'S' && toupper(escolha) != 'N');
        limparTela();
        //-------------------------------------------------------------------------------------------------------

        ubs();
    }
}



void dengue() {
    do
    {
        printf("Está com diarréia? (S/N):");
        scanf(" %c", &escolha);

        opcaoInvalida(escolha);
    } while (toupper(escolha) != 'S' && toupper(escolha) != 'N');
    limparTela();
    //-------------------------------------------------------------------------------------------------------

    if(toupper(escolha) == 'N')
    {
        gripe();
    } else
    {
        do
        {
            printf("Sente dor e/ou vermelidão nos olhos? (S/N): ");
            scanf(" %c", &escolha);

            opcaoInvalida(escolha);
        } while (toupper(escolha) != 'S' && toupper(escolha) != 'N');
        limparTela();
        //-------------------------------------------------------------------------------------------------------

        if(toupper(escolha) == 'N')
        {
            covid();
        } else
        {
            do
            {
                printf("Tem algum sangramento? (S/N): ");
                scanf(" %c", &escolha);

                opcaoInvalida(escolha);
            } while (toupper(escolha) != 'S' && toupper(escolha) != 'N');
            limparTela();
            //-------------------------------------------------------------------------------------------------------

            if(toupper(escolha) == 'N')
            {
                ubs();
            } else
            {
                printf("|---------------------------------------------------------------------------------|\n");
                printf("|                                    RESULTADO                                    |\n");
                printf("|---------------------------------------------------------------------------------|\n");
                printf("|                Procure um médico imediatamente, risco de dengue                 |\n");
                printf("|---------------------------------------------------------------------------------|\n");
                printf("\n");
                printf("                       Obrigado por utilizar nosso sistema!                        \n");
                printf("      Lembre-se de que nossos resultados não substituem uma consulta médica        \n");
            }
        }
    }
}



void febre() {
    int quant = 0;
    char fome[] = "| 1. Aumento de fome                                   \n";
    char visao[] = "| 2. Visão embaçada                                    \n";
    char bSeca[] = "| 3. Boca seca                                         \n";
    char infeccao[] = "| 4. Infecções frequentes (como de bexiga, rins e pele)\n";
    char urinar[] = "| 5. Vontade frequente para urinar                     \n";
    char cancaco[] = "| 6. Cansaço fácil                                     \n";
    char formigamento[] = "| 7. Formigamento nos pés                              \n";
    int escolhas[7] = {0}, i, erro, repeticao, path;

    do
    {
        printf("Você tem sintomas de febre? (S/N): ");
        scanf(" %c", &escolha);

        opcaoInvalida(escolha);
    } while (toupper(escolha) != 'S' && toupper(escolha) != 'N');
    limparTela();
    //-------------------------------------------------------------------------------------------------------

    if(toupper(escolha) == 'N')
    {
        do
        {
            printf("Você sente sede excessiva? (S/N): ");
            scanf(" %c", &escolha);

            opcaoInvalida(escolha);
        } while (toupper(escolha) != 'S' && toupper(escolha) != 'N');
        limparTela();
        //-------------------------------------------------------------------------------------------------------

        if(toupper(escolha) == 'S')
        {
            do
            {
                printf("|-------------------------------------------------------|\n");
                printf("|                   LISTA DE SINTOMAS                   |\n");
                printf("|-------------------------------------------------------|\n");
                
                repeticao = 0;
                for (i = 0; i < 8; i++)
                {
                    if (escolhas[i] == 1)
                    {
                        repeticao++;
                    }
                }
                if (repeticao == 0)
                {
                    printf("%s", fome);
                }
        
                repeticao = 0;
                for (i = 0; i < 8; i++)
                {
                    if (escolhas[i] == 2)
                    {
                        repeticao++;
                    }
                }
                if (repeticao == 0)
                {
                    printf("%s", visao);
                }

                repeticao = 0;
                for (i = 0; i < 8; i++)
                {
                    if (escolhas[i] == 3)
                    {
                        repeticao++;
                    }
                }
                if (repeticao == 0)
                {
                    printf("%s", bSeca);
                }

                repeticao = 0;
                for (i = 0; i < 8; i++)
                {
                    if (escolhas[i] == 4)
                    {
                        repeticao++;
                    }
                }
                if (repeticao == 0)
                {
                    printf("%s", infeccao);
                }

                repeticao = 0;
                for (i = 0; i < 8; i++)
                {
                    if (escolhas[i] == 5)
                    {
                        repeticao++;
                    }
                }
                if (repeticao == 0)
                {
                    printf("%s", urinar);
                }

                repeticao = 0;
                for (i = 0; i < 8; i++)
                {
                    if (escolhas[i] == 6)
                    {
                        repeticao++;
                    }
                }
                if (repeticao == 0)
                {
                    printf("%s", cancaco);
                }

                repeticao = 0;
                for (i = 0; i < 8; i++)
                {
                    if (escolhas[i] == 7)
                    {
                        repeticao++;
                    }
                }
                if (repeticao == 0)
                {
                    printf("%s", formigamento);
                }
                printf("| 8. Sair                                              \n");
                printf("|-------------------------------------------------------|\n");
                printf("Você sente algum desses sintomas? Caso não sinta nenhum deles ou não tenha mais nenhum sintoma listado acima, digite 8. \n");
                printf("DIGITE SUA RESPOSTA: ");
                do
                {
                    erro = 0;
                    scanf("%d", &path);

                    for (i = 0; i < 8; i++)
                    {
                        if (escolhas[i] == path || (path < 1 || path > 8))
                        {
                            printf("Opção inválida!\n");
                            erro++;
                        }
                    }
                    limparTela();
                } while ((path < 1 || path > 8) || erro != 0);

                switch (path)
                {
                case 1:
                    escolhas[0] = 1;
                    quant++;
                    break;

                case 2:
                    escolhas[1] = 2;
                    quant++;
                    break;

                case 3:
                    escolhas[2] = 3;
                    quant++;
                    break;

                case 4:
                    escolhas[3] = 4;
                    quant++;
                    break;

                case 5:
                    escolhas[4] = 5;
                    quant++;
                    break;

                case 6:
                    escolhas[5] = 6;
                    quant++;
                    break;

                case 7:
                    escolhas[6] = 7;
                    quant++;
                    break;

                case 8:
                    escolhas[7] = 8;
                    quant++;
                    break;
                
                default:
                    break;
                }
            } while (path != 8);
            limparTela();
            //-------------------------------------------------------------------------------------------------------

            if(quant >=3)
            {
                printf("|---------------------------------------------------------------------------------|\n");
                printf("|                                    RESULTADO                                    |\n");
                printf("|---------------------------------------------------------------------------------|\n");
                printf("|               Procure um médico imediatamente, risco de diabetes                |\n");
                printf("|---------------------------------------------------------------------------------|\n");
                printf("\n");
                printf("                       Obrigado por utilizar nosso sistema!                        \n");
                printf("      Lembre-se de que nossos resultados não substituem uma consulta médica        \n");
            } else
            {
                do
                {
                    printf("Possui mais algum sintoma? (S/N)\n");
                    scanf(" %c", &escolha);

                    opcaoInvalida(escolha);
                } while (toupper(escolha) != 'S' && toupper(escolha) != 'N');
                limparTela();
                //-------------------------------------------------------------------------------------------------------

                if(toupper(escolha) == 'N')
                {
                    ubs();
                } else
                {
                    socorro();
                }
            }

        } else
        {
            do
            {
                printf("Possui mais algum sintoma? (S/N)\n");
                scanf(" %c", &escolha);

                opcaoInvalida(escolha);
            } while (toupper(escolha) != 'S' && toupper(escolha) != 'N');
            limparTela();
            //-------------------------------------------------------------------------------------------------------

            if(toupper(escolha) == 'N')
            {
                incapz();
            } else
            {
                socorro();
            }

        }

    } else
    {
        dengue();
    }
}

//-------------------------------------------------------------------------------------------------------
// MAIN
int main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("            Bem-vindo ao nosso sistema de triagem            \n");
    printf("\n");
    printf("    Iremos fazer algumas perguntas simples, e com base nas   \n");
    printf("         suas respostas iremos te direcionar para a          \n");
    printf("     unidade de saúde mais apropriada para o seu caso.       \n");
    printf("\n");
    printf("-------------------------------------------------------------\n");
    printf("                     AVISO IMPORTANTE!!!                     \n");
    printf("\n");
    printf("       OS RESULTADOS DA NOSSA ANÁLISE NÃO SUBSTITUEM O       \n");
    printf("    DIAGNÓSTICO DE NENHUM MÉDICO, NOSSA INTENÇÃO É APENAS    \n");
    printf("       DIRECIONAR AS PESSOAS PARA UMA UNIDADE DE SAÚDE       \n");
    printf("   DE FORMA EFICIENTE, EVITANDO ACUMULOS DESNECESSÁRIOS DE   \n");
    printf("                          PESSOAS.                           \n");
    printf("-------------------------------------------------------------\n");
    printf("\n");
    printf("Pressione ENTER para continuar");
    scanf("%c", &escolha);
    limparTela();

    do
    {
        printf("Você sente náusea e/ou vômito? (S/N): ");
        scanf(" %c", &escolha);

        opcaoInvalida(escolha);
    } while (toupper(escolha) != 'S' && toupper(escolha) != 'N');
    limparTela();
    //----------------------------------------------------------------------------------------------

    if (toupper(escolha) == 'S')
    {
        do
        {
            printf("Você sente uma dor de cabeça forte e repentina? (S/N): ");
            scanf(" %c", &escolha);

            opcaoInvalida(escolha);
        } while (toupper(escolha) != 'S' && toupper(escolha) != 'N');
        limparTela();
    //----------------------------------------------------------------------------------------------

        if (toupper(escolha) == 'S')
        {
            do
            {
                printf("Você sente incapacidade de movimentar membros, geralmente em apenas um lado do corpo? (S/N): ");
                scanf(" %c", &escolha);

                opcaoInvalida(escolha);
            } while (toupper(escolha) != 'S' && toupper(escolha) != 'N');
            limparTela();
        //----------------------------------------------------------------------------------------------

            if (toupper(escolha) == 'S')
            {
                do
                {
                    printf("Você sente dificuldade na fala, dormencia no rosto ou pernas, fraqueza muscular, sonolência, confusão mental e/ou cegueira? (S/N): ");
                    scanf(" %c", &escolha);

                    opcaoInvalida(escolha);
                } while (toupper(escolha) != 'S' && toupper(escolha) != 'N');
                limparTela();

            //----------------------------------------------------------------------------------------------

                if (toupper(escolha) == 'S')
                {
                    printf("-----------------------------------------------------------------------------------\n");
                    printf("                                    RESULTADO                                      \n");
                    printf("-----------------------------------------------------------------------------------\n");
                    printf("                  Procure um médico imediatamente, risco de AVC                    \n");
                    printf("-----------------------------------------------------------------------------------\n");
                    printf("\n");
                    printf("                       Obrigado por utilizar nosso sistema!                        \n");
                    printf("      Lembre-se de que nossos resultados não substituem uma consulta médica        \n");

                }else
                {
                ubs();
                }

            //----------------------------------------------------------------------------------------------

            }else
            {
                do
                {
                    printf("Você sente mais algum sintoma? (S/N): ");
                    scanf(" %c", &escolha);

                    opcaoInvalida(escolha);
                } while (toupper(escolha) != 'S' && toupper(escolha) != 'N');
                limparTela();

                socorro();
            }

        //----------------------------------------------------------------------------------------------

        }else
        {
            febre();
        }

    //----------------------------------------------------------------------------------------------

    }else
    {
        febre();
    }

    return 0;
}