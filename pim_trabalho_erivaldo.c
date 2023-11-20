#include <stdio.h>
#include <stdlib.h>

    char obraLiteratura [] = "\n     A historia da literatura brasileira e dividida considerando os diversos movimentos ou escolas literarias. Ao\n"
    "     estudar determinada época literaria, percebe-se que ha temas e formas de se expressar comuns aos varios\n"
    "     autores daquele periodo.\n\n";
    char obraSantos [] = "\n     Santos Dumont (1873-1932) foi um inventor e aeronauta brasileiro conhecido como 'o pai da aviacao'. Foi\n"
    "     o primeiro a projetar e construir um balao dirigivel que decolou, contornou a Torre Eiffel e aterrizou,\n"
    "     valendo-se somente da forca de um motor a gasolina.\n"
    "     Voando no 'balao n. 6', Santos Dumont demonstrou a dirigibilidade dos baloes e conquistou o 'Premio\n"
    "     'Deutsch'  em 1901, concedido pelo Aeroclube da Franaa, sendo reconhecido como o primeiro a realizar tal\n"
    "     facanha.\n\n";
    char obraArte [] ="\n     A Semana da Arte Moderna foi um importante movimento artistico e cultural, que buscava acabar com o\n"
    "     tradicionalismo europeu e implantar uma identidade nacional na arte plastica brasileira. Ela ocorreu nos dias 13, 15 e\n"
    "     17 de fevereiro de 1922, no Teatro Municipal de São Paulo. Primeiramente era denominado de futurismo paulista,\n"
    "     nome dado por Oswald. A ideia do movimento iniciou-se em 1917, com a exposicaoo de Anita Malfatti a qual foi\n"
    "     altamente criticada pela imprensa e por Monteiro Lobato que publicou um artigo ' Paranoia ou Mistificacao ? ', porem\n"
    "     a ideia so solidificou-se em 1929, quando um grupo de artistas comecou a elaborar o pensamento modernista.\n"
    "     O evento teve a abertura protagonizada pelo carioca Graca Aranha. Teve como participantes pintores como: Anita\n"
    "     Malfatti, Di Cavalcanti, Tarsila do Amaral, representantes da musica Heitor Villa-lobos e Ernani Braga, na literatura\n"
    "     Oswald de Andrade e Mário de Andrade, Manuel Bandeira, Ronald de Carvalho e Menotti Del Picchia, na poesia entre\n"
    "     outros. \n";
    char obraOlimpiada [] = "\n     Jogos Olimpicos de 2024 (em frances: Les Jeux olympiques d'été de 2024) conhecidos oficialmente como os Jogos da\n"
    "     XXXIII Olimpiada, comumente chamado Paris 2024, é um evento multiesportivo futuro a ser realizado no segundo\n"
    "     semestre de 2024, na cidade de Paris (capital da Franca). Será a terceira vez que a cidade sera sede dos jogos (ja o\n"
    "     tinha sido em 1900 e 1924). No total esta sera a sexta edição dos Jogos Olimpicos realizados na Franca. O pais ainda\n"
    "     sediou os Jogos Olimpicos de Inverno de 1924, em Chamonix, os Jogos Olímpicos de Inverno de 1968, em Grenoble e\n"
    "     mais recentemente os Jogos Olimpicos de Inverno de 1992, na Savoia.\n\n";


    int respUser, respQuest, scanfResult ;
    char nome[100];
    int idade;
    int feedbackMuseu;
    int feedbackEspaco;
    char feedbackMelhorar[100];

void LimparTela(){
    system ("cls");
}
void salvarRespostas(){
    FILE *arquivo;
    arquivo = fopen("respostas.txt","a");

    if (arquivo == NULL){
        printf("Erro ao abrir o arquivo para escrita.\n");
        return;
    }

    fprintf(arquivo, "\n\nNome: %s\n", nome);
    fprintf(arquivo, "Idade: %d\n", idade);
    fprintf(arquivo, "Avaliação do museu: %d\n", feedbackMuseu);
    fprintf(arquivo, "Avaliação do espaço: %d\n", feedbackEspaco);
    fprintf(arquivo, "Sugestão para melhoria: %s\n", feedbackMelhorar);

    fclose(arquivo);
}
void formulario(){
    LimparTela();
    printf("\n\n   ***************************************"
        "*\n\n      Formulario de Feedback \n\n"
        "   ****************************************\n\n");

        printf("Qual o seu nome: ");
        scanf(" %99[^\n]", nome);

        printf("\nQual a sua idade: ");
    while(1){

        if(scanf("%d", &idade) == 1){;
            break;

        } else{
        printf("\nEntrada invalida. Por favor, digite um numero para a idade.\n");
        while(getchar() != '\n');
        }
    }

        printf("\nAvalie nossas obras (de 1 a 5, onde 1 e ruim e 5 e excelente): ");
        while(1){
        if(scanf("%d", &feedbackMuseu) == 1){
        break;

        }else{
            printf("\nEntrada invalida. Por favor, digite um numero de 1 a 5.\n");
            while(getchar()!= '\n');
        }

}

        printf("\nAvalie o nosso espaco (de 1 a 5, onde 1 e ruim e 5 e excelente): " );
        while(1){
        if(scanf("%d", &feedbackEspaco) == 1){
            break;
        }else{
           printf("\nEntrada invalida. Por favor, digite um numero de 1 a 5.\n");
           while(getchar() != '\n');
        }

    }
        printf("\nSe quiser deixe uma sugestao para o nosso museu: ");
        scanf(" %[^\n]", feedbackMelhorar);

        printf("\n\nMuito obrigado por responder o nosso questionario <3.\n\n");
        salvarRespostas();
        while(getchar() != '\n');
        printf("Pressione Enter para finalizar...");
        getchar();
        LimparTela();
         printf("\n\n   ***************************************"
        "*\n\n      Bem-vindo ao nosso Museu! \n\n"
        "   ****************************************\n\n");






}


void exibirObras(){
    LimparTela();
    printf("\n   Escolha uma obra para visualizar uma breve descricao de seu conteudo:\n");
    printf("   Digite - 1 para Literatura Brasileira\n");
    printf("   Digite - 2 para os 150 anos de Santos Dumont\n");
    printf("   Digite - 3 para 100 anos da Semana da Arte Moderna\n");
    printf("   Digite - 4 para as Olimpiadas de 2024 em Paris\n");

    while (scanf("%d", &respUser) != 1) {
        // Limpa o buffer do teclado
        while (getchar() != '\n');

        printf("Entrada invalida. Por favor, digite um numero valido: ");}




    if (respUser == 1){
        printf(obraLiteratura);
    }
     else if (respUser == 2){
        printf(obraSantos);
    }
    else if (respUser == 3){
        printf(obraArte);
    }
    else if (respUser == 4){
        printf(obraOlimpiada);
    }
    else{
        printf("\n Essa opcao nao corresponde a nenhuma obra, vamos tentar novamente ? \n");

    }
}


int main(){


    //Declarando as variáveis
    printf("\n\n   ***************************************"
    "*\n\n      Bem-vindo ao nosso Museu! \n\n"
    "   ****************************************\n\n");
while (1){










    printf("\nDigite 1 para exibir obras ou 2 para responder nosso formulario: ");

    scanfResult = scanf("%d", &respQuest);

    if (scanfResult != 1) {
        printf("\nEntrada invalida. Digite um numero.\n");

        // Limpar o buffer do teclado em caso de entrada inválida
        while (getchar() != '\n');

    } else if (respQuest != 1 && respQuest != 2) {
        printf("\nOpcao incorreta, digite novamente.\n");
    } else if (respQuest == 1) {
        exibirObras();
    } else {
        formulario();

    }





}
    return 0;
}
