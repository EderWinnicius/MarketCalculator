#include <stdio.h>

int main(){
    float QuantidaDeProdutos, ValorProdutos, ValorTotal, ValorDesconto, ValorParcela;
    int FormaDePagamento;

    printf("insira a cotacao dos produtos:");
    scanf("%f", &ValorProdutos);
    printf("\n");

    printf("insira a quantidade dos produtos:");
    scanf("%f", &QuantidaDeProdutos);
    printf("\n");

    ValorTotal=ValorProdutos*QuantidaDeProdutos;

    printf("Sua compra ficou no valor total de: %.2f \n", ValorTotal);
    printf("\n");

    printf("Formas de pagamento:");
    printf("\n");
    printf("1- Pagamento a vista com 10 por cento de desconto");
    printf("\n");
    printf("2- Pagamento parcelado em 2x do valor total");
    printf("\n");
    printf("Escolha uma das opcoes de pagamento: ");
    scanf("%d", &FormaDePagamento);
    printf("\n");
    printf("\n");

        if(FormaDePagamento==1){

            ValorDesconto=ValorTotal*0.10;
            ValorTotal=ValorTotal-ValorDesconto;

            printf("Sua compra ficou no valor de %.2f reais e voce economizou: %.2f \n", ValorTotal, ValorDesconto);
        }else{
            ValorParcela=ValorTotal/2;
            printf("sua compra no valor de %.2f reais e sera cobrado em 2x de %.2f reais", ValorTotal, ValorParcela);

        }

    return 0;
}
