#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcaoprincipal, opcaocliente;
    char nome[50];
    int financeiro = 0, suporte = 0, comercial = 0;
    int soucliente = 0, clientenovo = 0, sair = 0;

    printf("Ola! Seja bem-vindo(a) a nossa central de atendimento!\n");
    printf("1 - Ja sou cliente\n");
    printf("2 - Quero contratar\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcaoprincipal);

    while (opcaoprincipal != 1 && opcaoprincipal != 2) {
        printf("\nOpcao invalida! Por favor, escolha uma opcao valida.\n");
        printf("1 - Ja sou cliente\n");
        printf("2 - Quero contratar\n");
        printf("Digite sua opcao: ");
        scanf("%d", &opcaoprincipal);
    }

    if (opcaoprincipal == 1) {
        printf("\nDigite seu nome: ");
        scanf("%s", nome);
        soucliente++;

        do {
            printf("\n_____________________________________\n");
            printf("\nOla %s! Como podemos te ajudar?\n", nome);
            printf("Selecione uma das opcoes:\n");
            printf("1 - Financeiro\n");
            printf("2 - Suporte tecnico\n");
            printf("3 - Comercial\n");
            printf("4 - Sair\n");
            printf("Opcao: ");
            scanf("%d", &opcaocliente);

            switch (opcaocliente) {
                case 1:
                    printf("\nVoce escolheu setor financeiro!\n");
                    printf("Aguarde alguns segundos ate que a atendente entre em contato.\n");
                    financeiro++;
                    break;
                case 2:
                    printf("\nVoce escolheu suporte tecnico!\n");
                    printf("Aguarde, encontrando o tecnico mais perto da sua residencia.\n");
                    suporte++;
                    break;
                case 3:
                    printf("\nVoce escolheu Comercial!\n");
                    printf("Entraremos em contato assim que possivel.\n");
                    comercial++;
                    break;
                case 4:
                    printf("\nAgradecemos pelo seu contato, %s!\n", nome);
                    printf("Tenha um excelente dia!\n");
                    sair++;
                    break;
                default:
                    printf("\nOpção invalida. Tente novamente.\n");
            }
        } while (opcaocliente != 4);

        printf("\n========== Relatorio de acessos ==========\n");
        printf("Ja sao clientes: %d\n", soucliente);
        printf("Querendo contratar: %d\n", clientenovo);
        printf("Financeiro: %d\n", financeiro);
        printf("Suporte: %d\n", suporte);
        printf("Comercial: %d\n", comercial);
        printf("Saidas: %d\n", sair);

    } else if (opcaoprincipal == 2) {
        printf("\nSeja bem-vindo(a)! Ficamos felizes por querer ser nosso cliente!\n");
        printf("Logo você recebera mais informacoes para contratar nossos servicos.\n");
        clientenovo++;

        printf("\n========== Relatório de acessos ==========\n");
        printf("Ja sao clientes: %d\n", soucliente);
        printf("Querendo contratar: %d\n", clientenovo);
        printf("Financeiro: %d\n", financeiro);
        printf("Suporte: %d\n", suporte);
        printf("Comercial: %d\n", comercial);
        printf("Saidas: %d\n", sair);
    }

    return 0;
}