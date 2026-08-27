/*
    ============================================================
        STRINGS EM C - VETORES DE CARACTERES
    ============================================================

    Em C, não existe um tipo "string" nativo.

    Uma string é armazenada em um vetor de caracteres (char)
    e sempre precisa terminar com o caractere nulo:

        '\0'

    O '\0' indica para o programa onde a string termina.

    Exemplo:

        char nome[5] = "Alex";

    Na memória:

        [ A ][ l ][ e ][ x ][ \0 ]
          0    1    2    3    4

    "Alex" possui 4 caracteres, mas precisamos de uma posição
    adicional para armazenar o '\0'.

    Portanto:

        quantidade de caracteres + 1 = tamanho mínimo do vetor

    ============================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main() {

    setlocale(LC_ALL, "Portuguese_Brazil");
    system("clear");


    /*
        ========================================================
        1. DECLARAÇÃO E INICIALIZAÇÃO MANUAL DE UMA STRING
        ========================================================

        Podemos declarar e inicializar uma string diretamente:

            char nome[20] = "Alex Gonçalves";

        O compilador coloca automaticamente o '\0' no final.

        O vetor possui 20 posições, então podemos armazenar
        no máximo 19 caracteres + '\0'.

        Não precisamos utilizar todas as posições.
    */

    char nome[20] = "Alex Gonçalves";

    printf("Nome: %s\n\n", nome);


    /*
        ========================================================
        2. CAPTURA DE STRING COM scanf("%s")
        ========================================================

        Podemos utilizar:

            scanf("%s", nome);

        para capturar uma string.

        IMPORTANTE:

        O %s do scanf() lê caracteres até encontrar um espaço
        em branco, uma tabulação ou o ENTER.

        Portanto, se o usuário digitar:

            Alex

        será capturado:

            Alex

        Mas se digitar:

            Alex Gonçalves

        será capturado somente:

            Alex

        O restante da entrada (" Gonçalves\n") continuará
        aguardando no buffer de entrada.

        --------------------------------------------------------

        Também é importante limitar a quantidade de caracteres.

        Se temos:

            char palavra[20];

        podemos utilizar:

            scanf("%19s", palavra);

        Por quê?

            19 caracteres + '\0' = 20 posições

        Isso evita que o usuário digite mais caracteres do que
        o vetor consegue armazenar.
    */

    char palavra[20];

    printf("Informe uma palavra: ");
    scanf("%19s", palavra);

    printf("Palavra capturada: %s\n\n", palavra);


    /*
        ========================================================
        3. CAPTURA DE STRING COM ESPAÇOS USANDO SCANF
        ========================================================

        Para capturar uma frase ou texto que contenha espaços,
        podemos utilizar uma scanset:

            scanf(" %99[^\n]", endereco);

        Vamos entender cada parte:

            %99[^\n]

        %       -> indica que vamos realizar uma leitura
        99      -> quantidade máxima de caracteres
        [ ]     -> define um conjunto de caracteres
        ^       -> significa "negação"
        \n      -> representa o ENTER

        Portanto:

            [^\n]

        significa:

            "Leia qualquer caractere, exceto o ENTER."

        Dessa forma, conseguimos capturar:

            Rua das Flores, 123

        e não apenas:

            Rua

        --------------------------------------------------------

        Por que utilizamos 99?

        Nosso vetor possui:

            char endereco[100];

        Precisamos reservar uma posição para o '\0'.

            99 caracteres + '\0' = 100 posições

        --------------------------------------------------------

        E por que existe um espaço antes do %?

            scanf(" %99[^\n]", endereco);
                   ^
                   espaço

        Esse espaço faz o scanf ignorar caracteres de espaço em
        branco que estejam pendentes na entrada, como o '\n'
        deixado por uma leitura anterior.
    */

    char endereco[100];

    printf("Informe seu endereço completo: ");
    scanf(" %99[^\n]", endereco);

    printf("Endereço capturado: %s\n\n", endereco);


    /*
        ========================================================
        4. getchar()
        ========================================================

        A função getchar() captura APENAS UM CARACTERE.

        Exemplo:

            char caractere;

            caractere = getchar();

        Se o usuário digitar:

            A

        getchar() captura:

            'A'

        --------------------------------------------------------

        getchar() também é muito utilizado para consumir um
        caractere que ficou pendente na entrada, principalmente
        o '\n' (ENTER).

        Por exemplo:

            scanf("%d", &idade);

        Quando o usuário digita:

            20 + ENTER

        o scanf("%d") captura o número 20.

        O ENTER pode permanecer na entrada como:

            '\n'

        Então podemos utilizar:

            getchar();

        para consumir esse caractere.

        IMPORTANTE:

        getchar() NÃO é utilizado para capturar uma string inteira.

        Ele captura apenas um caractere por chamada.
    */

    getchar(); // Consome o '\n' que ficou da leitura anterior


    /*
        Agora vamos utilizar getchar() para capturar
        propositalmente um único caractere.
    */

    char caractere;

    printf("Digite um caractere: ");
    caractere = getchar();

    printf("Caractere capturado: %c\n\n", caractere);


    /*
        ========================================================
        5. CAPTURA DE STRING COM fgets()
        ========================================================

        Outra forma de capturar uma string é utilizando:

            fgets()

        Exemplo:

            fgets(endereco, sizeof(endereco), stdin);

        A função recebe três informações:

            1º -> onde a string será armazenada
            2º -> tamanho máximo do vetor
            3º -> de onde os dados serão lidos

        Portanto:

            fgets(endereco, sizeof(endereco), stdin);

        significa:

            "Leia uma string do teclado e armazene em endereco,
             respeitando o tamanho do vetor."

        --------------------------------------------------------

        Uma das principais vantagens do fgets() é que ele
        consegue capturar espaços.

        Se o usuário digitar:

            Rua das Flores, 123

        o fgets() consegue capturar a frase inteira.
    */


    /*
        Antes de utilizar fgets(), precisamos consumir o ENTER
        que ficou após a leitura do caractere com getchar().

        Neste caso, o usuário digitou:

            A + ENTER

        O getchar() capturou o 'A', mas o '\n' pode continuar
        na entrada.

        O próximo getchar() consome esse '\n'.
    */

    getchar();


    printf("Informe seu endereço completo: ");

    fgets(endereco, sizeof(endereco), stdin);


    /*
        ========================================================
        6. O PROBLEMA DO '\n' COM fgets()
        ========================================================

        Quando utilizamos fgets() e pressionamos ENTER,
        normalmente o '\n' também pode ser armazenado na string.

        Por exemplo:

            Rua das Flores\n\0

        Porém, geralmente queremos:

            Rua das Flores\0

        Para remover o '\n', podemos utilizar:

            strcspn()

        A expressão:

            strcspn(endereco, "\n")

        procura a posição onde está o '\n'.

        Depois fazemos:

            endereco[strcspn(endereco, "\n")] = '\0';

        Ou seja:

            "Encontre o ENTER e substitua ele pelo
             caractere nulo."

        Antes:

            R u a   d a s   F l o r e s \n \0

        Depois:

            R u a   d a s   F l o r e s \0

        A função strcspn() pertence à biblioteca:

            #include <string.h>
    */

    endereco[strcspn(endereco, "\n")] = '\0';

    printf("Endereço capturado: %s\n\n", endereco);


    /*
        ========================================================
        RESUMO
        ========================================================

        1. STRING EM C

            String = vetor de char terminado por '\0'.

        --------------------------------------------------------

        2. scanf("%s")

            scanf("%19s", nome);

            - Não captura espaços.
            - Para no primeiro espaço em branco.
            - É necessário tomar cuidado com o tamanho do vetor.

        --------------------------------------------------------

        3. scanf("%[^\n]")

            scanf(" %99[^\n]", endereco);

            - Consegue capturar espaços.
            - Lê até encontrar o ENTER.
            - O número limita a quantidade de caracteres.

        --------------------------------------------------------

        4. getchar()

            getchar();

            - Captura apenas UM caractere.
            - Pode ser utilizado para consumir o '\n'
              que ficou pendente na entrada.

        --------------------------------------------------------

        5. fgets()

            fgets(endereco, sizeof(endereco), stdin);

            - Captura strings com espaços.
            - Recebe o tamanho do vetor.
            - É uma opção mais segura para leitura de strings.
            - Pode armazenar o '\n' gerado pelo ENTER.

        --------------------------------------------------------

        6. Remover o '\n' do fgets()

            endereco[strcspn(endereco, "\n")] = '\0';

            - Procura o '\n'.
            - Substitui o '\n' por '\0'.

        ========================================================

        REGRA PRINCIPAL:

        Uma string em C é um vetor de caracteres que termina
        obrigatoriamente com o caractere nulo:

            '\0'

        Por isso, sempre precisamos considerar uma posição
        adicional no vetor para armazenar esse caractere.

        ========================================================
    */


    return 0;
}