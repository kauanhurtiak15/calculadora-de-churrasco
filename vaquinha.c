# include <stdio.h>
// Variável global
float totalArrecadado = 0;

// Procedimento: adiciona a contribuição de um participante
void adicionaContribuicao(float valor){
    totalArrecadado += valor;
    printf("Contribuição de R$ %.2f adicionada! total: R$ %.2f",valor, totalArrecadado);
}

// Função: calcula a quantidade de carne por pessoa (0.5kg por pessoa)





// Procedimento para mostrar o resumo
void mostraResumo(int qtdPessoas){
    printf("\n===== RESUMO CHURRASCO =====\n");
    printf("Participantes: %d\n",qtdPessoas);
}







int main(){
    int pessoas;
    float valor;

    printf("Digite o número de participantes: ");
    scanf("%d",&pessoas);

    mostraResumo(pessoas);

}
