#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída
#include <stdbool.h> // Inclui a biblioteca para usar o tipo de dado 'bool'
#include <math.h> // Inclui a biblioteca de funções matemáticas

// Exibe o menu de opções da calculadora
void menu() {
    printf("\n| 1 - Somar\n| 2 - Subtrair\n| 3 - Multiplicar\n| 4 - Dividir (Primeiro Número: Dividendo | Segundo Número: Divisor)" 
           "\n| 5 - Exponenciação (Primeiro Número: Base | Segundo Número: Expoente)"
           "\n| 6 - Raiz Quadrada (Primeiro Número: Radicando)\n| 7 - Raiz Cúbica (O Número representa o Radicando)"
           "\n| 8 - Cosseno (Número em graus)\n| 9 - Seno (Número em graus)\n| 10 - Tangente (Número em graus)"
           "\n| 11 - Logaritmo na Base 10 (Primeiro Número: Logaritmando) \n| 12 - Logaritmo Natural (Primeiro Número: Logaritmando)"
           "\n| 13 - Constante de Euler (Digite um Número para obter a Constante)"
           "\n| 14 - Arco-Cosseno (Número em graus(entre -1 e 1))\n| 15 - Arco-Seno (Número em graus(entre -1 e 1))\n| 16 - Arco-Tangente (Número em graus(entre -1 e 1))"
           "\n| 17 - Hipotenusa(Primeiro Número: Cateto Oposto | Segundo Número: Cateto Adjacente)"
           "\n| 18 - Seno Hiperbolico (Primeiro Número: Variável)\n| 19 - Cosseno Hiperbolico (Primeiro Número: Variável)"
           "\n| 20 - Tangente Hiperbolico (Primeiro Número: Variável)\n| 21 - Soma de Matrizes 2 X 2\n| 22 - Soma de Matrizes 3 X 3"
           "\n| 23 - Multiplicação de Matrizes 2 X 2\n| 24 - Multiplicação de Matrizes 3 X 3"
           "\n| 50 - Histórico\n| 0 - Sair"
           "\n| Digite sua escolha:\n");
}

// Função para somar dois números
float somar(float n1, float n2) {
    return n1 + n2;
}

// Função para subtrair dois números
float subtrair(float n1, float n2) {
    return n1 - n2;
}

// Função para multiplicar dois números
float multiplicar(float n1, float n2) {
    if (n2 != 0) {
        return n1 * n2;    
    } else {
        printf("\nNão é possível multiplicar para 0!\n");
        return NAN;   
    }
}

// Função para dividir dois números
float dividir(float n1, float n2) {
    if (n2 != 0) {
        return n1 / n2;
    } else {
         printf("\nNão é possível dividir para 0!\n");
        return NAN; // Retorna Not A Number (Não é um número)
    }
}

// Função para calcular a exponenciação (n1 elevado a n2)
float exponenciar(float n1, float n2) {
    float result;
    result = pow(n1, n2); // Usa a função 'pow' da biblioteca math.h
    return result; // Retorna o resultado de pow(n1, n2)
}

// Função para calcular a raiz quadrada
float raizQuadrada(float n1) {
    return sqrt(n1); // Usa a função 'sqrt' da biblioteca math.h
}

// Função para calcular a raiz cúbica
float raizCubica(float n1) {
    return cbrt(n1); // Usa a função 'cbrt' da biblioteca math.h
}

// Função para calcular o cosseno (ângulo em graus)
float cosseno(float n1) {
    // Converte o ângulo de graus para radianos (Graus * PI / 180)
    float result = n1 * (M_PI/180); // M_PI é a constante PI da biblioteca math.h
    return cos(result); // Usa a função 'cos' da biblioteca math.h
}

// Função para calcular o seno (ângulo em graus)
float seno(float n1) {
    // Converte o ângulo de graus para radianos
    float result = n1 * (M_PI/180);
    return sin(result); // Usa a função 'sin' da biblioteca math.h
}

// Função para calcular a tangente (ângulo em graus)
float tangente(float n1) {
    // Converte o ângulo de graus para radianos
    float result = n1 * (M_PI/180);
    return tan(result); // Usa a função 'tan' da biblioteca math.h
}

// Função para calcular o logaritmo na base 10
float logaritmo10(float n1) { 
    return log10(n1); // Usa a função 'log10' da biblioteca math.h
}

// Função para calcular o logaritmo natural (base e)
float logaritmo(float n1) { 
    return log(n1); // Usa a função 'log' da biblioteca math.h
}

// Função para calcular a constante de Euler (e^n1)
float euler(float n1) {
    return exp(n1);// Usa a função 'exp' da biblioteca math.h (e elevado a n1)
}

// Função para calcular o arco-cosseno
float arcoCosseno(float n1){
    float result = n1 * (180/M_PI);
    return acos(n1); // Usa a função 'acos' da biblioteca math.h
}

// Função para calcular o arco-seno
float arcoSeno(float n1){
    float result = n1 * (180/M_PI);
    return asin(n1); // Usa a função 'asin' da biblioteca math.h 
}

// Função para calcular o arco-tangente
float arcoTangente(float n1){
    float result = n1 * (180/M_PI);
    return atan(n1); // Usa a função 'atan' da biblioteca math.h
}

// Função para calcular a hipotenusa (teorema de Pitágoras: sqrt(n1^2 + n2^2))
float hipotenusa(float n1, float n2){
    return hypot(n1, n2); // Usa a função 'hypot' da biblioteca math.h
}

// Função para calcular o seno hiperbólico
float senoHiperbolico(float n1){
    return sinh(n1); // Usa a função 'sinh' da biblioteca math.h
}

// Função para calcular o cosseno hiperbólico
float cossenoHiperbolico(float n1){
    return cosh(n1); // Usa a função 'cosh' da biblioteca math.h
}

// Função para calcular a tangente hiperbólica
float tangenteHiperbolico(float n1){
    return tanh(n1); // Usa a função 'tanh' da biblioteca math.h
}

// Função para realizar a soma de duas matrizes 2x2
// n1 e n2 são vetores de 4 posições (matrizes 2x2)
void somaMatriz2x2(float n1[100], float n2[100]) {
    int c = 1; // Contador para a linha da matriz (1 ou 2)
    
    // Loop para ler a 1ª Matriz (4 elementos)
    for (int i = 0; i < 4; i++) {
        if (i > 1) { // Após a 2ª posição (índice 2 e 3)
            c = 2;
        }
        
        // Exibe a posição de leitura: c (linha) / ((i % 2) + 1) (coluna)
        printf("Digite o %d/%d da 1º Matriz: ", c, ((i % 2) + 1));
        scanf("%f", &n1[i]);
    }
    
    printf("\n");
    // Loop para ler a 2ª Matriz (4 elementos)
    for (int i = 0; i < 4; i++) {
        c = 1; // Reinicia o contador de linha
        if (i > 1) {
            c = 2; // Muda para a linha 2
        }
        
        // Exibe a posição de leitura: c (linha) / ((i % 2) + 1) (coluna)
        printf("Digite o %d/%d da 2º Matriz: ", c, ((i % 2) + 1));
        scanf("%f", &n2[i]);
    }
    
    printf("Resultado:\n");
    
    // Loop para calcular e imprimir a Matriz Resultado (soma elemento a elemento)
    for (int i = 0; i < 4; i++) {
    
        // Imprime a soma do elemento atual
        printf("| %.1f ", (n1[i] + n2[i]));
    // Verifica se fechou uma linha (a cada 2 elementos)
        // (i + 1) é a contagem de elementos (1, 2...)
        // Se a contagem for divisível por 2, significa que fechamos uma linha
        if ((i + 1) % 2 == 0) {
        printf("|\n"); // Fecha a linha e pula para a próxima
        }
    }
}

// Função para realizar a soma de duas matrizes 3x3
// n1 e n2 são vetores de 9 posições (matrizes 3x3)
void somaMatriz3x3(float n1[100], float n2[100]) {
    int c = 1; // Contador para a linha da matriz (1, 2 ou 3)
    // Loop para ler a 1ª Matriz (9 elementos)
    for (int i = 0; i < 9; i++) {
        if (i > 2) { // Após a 3ª posição
            c = 2; // Linha 2
        }
        if (i > 5) { // Após a 6ª posição
            c = 3; // Linha 3
        }
        // Exibe a posição de leitura: c (linha) / ((i % 3) + 1) (coluna)
        printf("Digite o %d/%d da 1º Matriz: ", c, ((i % 3) + 1));
        scanf("%f", &n1[i]);
    }
    printf("\n");
    // Loop para ler a 2ª Matriz (9 elementos)
    for (int i = 0; i < 9; i++) {
        c = 1; // Reinicia o contador de linha
        if (i > 2) {
            c = 2; // Linha 2
        } 
        if (i > 5) {
            c = 3; // Linha 3
        }
        // Exibe a posição de leitura
        printf("Digite o %d/%d da 2º Matriz: ", c, ((i % 3) + 1));
        scanf("%f", &n2[i]);
    }
    printf("Resultado:\n");
    // Loop para calcular e imprimir a Matriz Resultado (soma elemento a elemento)
    for (int i = 0; i < 9; i++) {
    // Imprime a soma do elemento atual
    printf("| %.1f ", (n1[i] + n2[i]));

    // (i + 1) é a contagem de elementos (1, 2, 3, 4...)
    // Se a contagem for divisível por 3, significa que fechamos uma linha
        if ((i + 1) % 3 == 0) {
            printf("|\n"); // Fecha a linha e pula para a próxima
        }
    }
}

// Função para realizar a multiplicação de duas matrizes 2x2
// n1 e n2 são vetores de 4 posições
void multiplicarMatriz2x2(float n1[100], float n2[100]) {
    int c = 1; // Contador para a linha da matriz
    // Loop para ler a 1ª Matriz (4 elementos)
    for (int i = 0; i < 4; i++) {
        if (i > 1) {
            c = 2;
        }
        printf("Digite o %d/%d da 1º Matriz: ", c, ((i % 2) + 1));
        scanf("%f", &n1[i]);
    }
    printf("\n");
    
    c = 1; // Reinicia o 'c' para a segunda matriz
    for (int i = 0; i < 4; i++) {
        if (i > 1) {
            c = 2;
        }
        printf("Digite o %d/%d da 2º Matriz: ", c, ((i % 2) + 1));
        scanf("%f", &n2[i]);
    }
    printf("\n");
    
    // um vetor para guardar o resultado
    float R[4];

    // Calcular cada posição do resultado
    
    // R[0] = Linha 1 * Coluna 1
    R[0] = (n1[0] * n2[0]) + (n1[1] * n2[2]);
    
    // R[1] = Linha 1 * Coluna 2
    R[1] = (n1[0] * n2[1]) + (n1[1] * n2[3]);
    
    // R[2] = Linha 2 * Coluna 1
    R[2] = (n1[2] * n2[0]) + (n1[3] * n2[2]);
    
    // R[3] = Linha 2 * Coluna 2
    R[3] = (n1[2] * n2[1]) + (n1[3] * n2[3]);

    printf("Resultado:\n");
    
    // printf("| %.1f  %.1f |\n", R[0], R[1]);
    // printf("| %.1f  %.1f |\n", R[2], R[3]);

    for (int i = 0; i < 4; i++) {
        printf("| %.1f ", R[i]); // Imprime o resultado R[i]
        
        if ((i + 1) % 2 == 0) {
            printf("|\n"); // Quebra a linha a cada 2 elementos
        }
    }
    
}

// Função para realizar a multiplicação de duas matrizes 3x3
// n1 e n2 são vetores de 9 posições
void multiplicarMatriz3x3(float n1[100], float n2[100]) {
    int c = 1; // Contador para a linha da matriz

    // Loop para ler a 1ª Matriz (9 elementos)
    for (int i = 0; i < 9; i++) {
        if (i > 2) {
            c = 2;
        }
        if (i > 5) {
            c = 3;
        }
        printf("Digite o %d/%d da 1º Matriz: ", c, ((i % 3) + 1));
        scanf("%f", &n1[i]);
    }
    printf("\n");
    
    c = 1; // Reinicia o 'c' para a segunda matriz
    // Loop para ler a 2ª Matriz (9 elementos)
    for (int i = 0; i < 9; i++) {
        if (i > 2) {
            c = 2;
        }
        if (i > 5) {
            c = 3;
        }
        printf("Digite o %d/%d da 2º Matriz: ", c, ((i % 3) + 1));
        scanf("%f", &n2[i]);
    }
    printf("\n");

    // Um vetor para guardar os 9 resultados
    float R[9];

    // Calcular cada posição do resultado

    // Linha 1 do Resultado
    // R[0] = Linha 1 * Coluna 1
    R[0] = (n1[0] * n2[0]) + (n1[1] * n2[3]) + (n1[2] * n2[6]);
    // R[1] = Linha 1 * Coluna 2
    R[1] = (n1[0] * n2[1]) + (n1[1] * n2[4]) + (n1[2] * n2[7]);
    // R[2] = Linha 1 * Coluna 3
    R[2] = (n1[0] * n2[2]) + (n1[1] * n2[5]) + (n1[2] * n2[8]);

    // Linha 2 do Resultado
    // R[3] = Linha 2 * Coluna 1
    R[3] = (n1[3] * n2[0]) + (n1[4] * n2[3]) + (n1[5] * n2[6]);
    // R[4] = Linha 2 * Coluna 2
    R[4] = (n1[3] * n2[1]) + (n1[4] * n2[4]) + (n1[5] * n2[7]);
    // R[5] = Linha 2 * Coluna 3
    R[5] = (n1[3] * n2[2]) + (n1[4] * n2[5]) + (n1[5] * n2[8]);

    // Linha 3 do Resultado
    // R[6] = Linha 3 * Coluna 1
    R[6] = (n1[6] * n2[0]) + (n1[7] * n2[3]) + (n1[8] * n2[6]);
    // R[7] = Linha 3 * Coluna 2
    R[7] = (n1[6] * n2[1]) + (n1[7] * n2[4]) + (n1[8] * n2[7]);
    // R[8] = Linha 3 * Coluna 3
    R[8] = (n1[6] * n2[2]) + (n1[7] * n2[5]) + (n1[8] * n2[8]);


   
    printf("Resultado:\n");
    // Imprime a Matriz Resultado

    // Loop vai até 9 (i < 9)
    for (int i = 0; i < 9; i++) {
        printf("| %.1f ", R[i]); // Imprime o resultado R[i]
        
        // Quebra a linha a cada 3 elementos
        if ((i + 1) % 3 == 0) {
            printf("|\n"); 
        }
    }
}

// Definição da estrutura para armazenar o histórico de operações
struct historico {
    float n1; // Primeiro número da operação
    float n2; // Segundo número da operação (se houver)
    float result; // Resultado da operação
    int utilizado; // Flag para indicar se o segundo número foi usado (1 se sim, 0 se não)
    char * tipo; // String que armazena o tipo de operação ("soma", "divisão", etc.)
};

// Função principal do programa
int main()
{
    // Declaração de um array de estruturas para o histórico (capacidade para 100 operações)
    struct historico hist[100];
    int escolha = -1; // Variável para armazenar a opção do menu escolhida pelo usuário (-1 para iniciar o loop)
    float numeros[100]; // Array para armazenar os números de entrada da operação (numeros[0] e numeros[1])
    float numeros2[100]; // Array auxiliar, usado apenas nas operações de matrizes (segunda matriz)
    float result; // Variável para armazenar o resultado da operação
    bool valido; // Flag booleana para indicar se a operação é válida e deve ser registrada no histórico
    bool sair = false; // Variável não utilizada no código final
    int a = 0; // Contado do histórico 
    
    // Loop principal que executa a calculadora até que o usuário escolha '0 - Sair'
    while (escolha != 0) {
        valido = true; // Assume que a operação é válida por padrão
        menu(); // Exibe o menu
        scanf("%d", &escolha); // Lê a escolha do usuário
        
        // Bloco de leitura de números para a maioria das operações (opções 1 a 20, exceto 18, 19, 20)
        if (escolha != 0 && escolha < 21) {
            printf("\nDigite o primeiro número:\n");
            scanf("%f", &numeros[0]); // Lê o primeiro número
            hist[a].n1 = numeros[0]; // Armazena o primeiro número no histórico
            
            // Condição para operações que precisam de um segundo número (opções 1 a 5 e 17)
            if (escolha < 6 || escolha == 17) {
                printf("Digite o segundo número:\n");
                scanf("%f", &numeros[1]); // Lê o segundo número
                hist[a].n2 = numeros[1]; // Armazena o segundo número no histórico
                hist[a].utilizado = 1; // Define a flag 'utilizado' como 1
            } else {
                // Para operações com apenas um número, inicializa n2 com 0 (ou outro valor) e a flag como 0
                hist[a].n2 = 0.0;
                hist[a].utilizado = 0;
            }
        }
        
        // Estrutura switch para executar a função de acordo com a escolha do usuário
        switch (escolha) {
            case 1: // somar
                result = somar(numeros[0], numeros[1]);
                hist[a].tipo = "soma";
                break;
            case 2: // subtrair
                result = subtrair(numeros[0], numeros[1]);
                hist[a].tipo = "subtração";
                break;
            case 3: // multiplicar 
                result = multiplicar(numeros[0], numeros[1]);
                hist[a].tipo = "multiplicação";
                // Verifica se a função 'multiplicar' retornou NAN (em caso de 'erro' por n2 ser 0, conforme sua função)
                if (isnan(result)) {
                    valido = false; // Não registra/exibe o resultado
                }
                break;
            case 4: // dividir 
                result = dividir(numeros[0], numeros[1]);
                hist[a].tipo = "divisão";
                // Verifica se a função 'dividir' retornou NAN (divisão por zero)
                if (isnan(result)) {
                    valido = false; // Não registra/exibe o resultado
                }
                break;
            case 5: // exponenciação 
                result = exponenciar(numeros[0], numeros[1]);
                hist[a].tipo = "exponenciação";
               // Verifica se a função 'exponenciar' retornou NAN (se houver essa implementação)
                if (isnan(result)) {
                    valido = false;
                }
                break;
            case 6: // raiz quadrada 
                result = raizQuadrada(numeros[0]);
                hist[a].tipo = "raiz quadrada";
                break;
            case 7: // raiz cubica
                result = raizCubica(numeros[0]);
                hist[a].tipo = "raiz cúbica";
                break;
            case 8:// cosseno 
                result = cosseno(numeros[0]);
                hist[a].tipo = "cosseno";
                break;
            case 9: // seno 
                result = seno(numeros[0]);
                hist[a].tipo = "seno";
                break;
            case 10: // tangente 
                result = tangente(numeros[0]);
                hist[a].tipo = "tangente";
                break;
            case 11: // logaritmo na base 10 
                result = logaritmo10(numeros[0]);
                hist[a].tipo = "logaritmo10";
                break;
            case 12: // logaritmo natural 
                result = logaritmo(numeros[0]);
                hist[a].tipo = "logaritmo";
                break;
            case 13: // constante de Euler (e^n1)
                result = euler(numeros[0]);
                hist[a].tipo = "euler";
                break;
            case 14: // arco-cosseno 
                result = arcoCosseno(numeros[0]);
                hist[a].tipo = "arco cosseno";
                break;
            case 15: // arco-seno
                result = arcoSeno(numeros[0]);
                hist[a].tipo = "arco seno";
                break;
            case 16: // arco-tangente 
                result = arcoTangente(numeros[0]);
                hist[a].tipo = "arco tangente";
                break;
            case 17: // hipotenusa 
                result = hipotenusa(numeros[0], numeros[1]);
                hist[a].tipo = "hipotenusa";
                break;
            case 18: // seno hiberbolico 
                result = senoHiperbolico(numeros[0]);
                hist[a].tipo = "seno hiperbolico";
                break;
            case 19: // cosseno hiperbolico 
                result = cossenoHiperbolico(numeros[0]);
                hist[a].tipo = "cosseno hiperbolico";
                break;
            case 20: //tangente hiperbolico 
                result = tangenteHiperbolico(numeros[0]);
                hist[a].tipo = "tangente hiperbolico";
                break;
            case 21: // soma de Matrizes 2x2
                somaMatriz2x2(numeros, numeros2); // chama a função que já faz a leitura e impressão
                hist[a].tipo = "soma matriz 2x2";
                valido = false; 
                break;
            case 22: // soma de Matrizes 3x3
                somaMatriz3x3(numeros, numeros2);
                hist[a].tipo = "soma matriz 3x3";
                valido = false;
                break;
            case 23: // multiplicação de Matrizes 2x2
                multiplicarMatriz2x2(numeros, numeros2);
                hist[a].tipo = "multiplicação matriz 2x2";
                valido = false;
                break;
            case 24: // multiplicação de Matrizes 3x3
                multiplicarMatriz3x3(numeros, numeros2);
                hist[a].tipo = "multiplicação matriz 3x3";
                valido = false;
                break;
           case 50: // histórico
                // loop para percorrer e imprimir todas as operações registradas
                for (int i = 0; i < a; i++) {
                    printf("\n| id do historico: %i", i + 1);
                    printf("\n| tipo de operação: %s", hist[i].tipo);
                    printf("\n| primeiro número: %f", hist[i].n1);
                    // Imprime o segundo número apenas se a flag 'utilizado' for 1
                    if (hist[i].utilizado == 1) {
                        printf("\n| segundo número: %f", hist[i].n2);
                    }
                    printf("\n| resultado:%f \n \n", hist[i].result);
                }
                valido = false; // não há resultado para ser registrado novamente
                break;
            case 0: // Sair
                valido = false;
                printf("\nSaindo...");
                break;
            default: // opção Inválida
                printf("Escolha Indisponível!");
                valido = false;
                break;
        }

        // se a operação for válida e não for uma de matriz/histórico/sair
        if (valido) {
            printf("\nO resultado é: %f\n", result); // imprime o resultado
            hist[a].result = result; // armazena o resultado no histórico
            a++; // incrementa o contador do histórico para a próxima posição
        }

        printf("\nPressione Enter para continuar...\n");
        // limpa o buffer de entrada (stdin) para evitar que o '\n' (Enter) anterior seja lido no próximo 'getchar()'
        while (getchar() != '\n');
        getchar(); // espera que o usuário pressione Enter
    }
    return 0; // finaliza o programa
}
