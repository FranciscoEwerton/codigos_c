#include<stdio.h>
#include<stdlib.h>
//esta calculadora opera apenas com dois numeros nao sendo possivel realizar operacoes complexas
float num1,num2;
float soma(float num1, float num2);
int main(float num1,float num2)
{
    short int opcode;
    float result;
	printf("digite o primeiro numero: \n");
	scanf("%f",&num1);
	printf("digite o segundo numero: \n");
	scanf("%f",&num2);
	printf("digite o codigo da operacao, 1 para soma, 2 para subtracao, 3 para multiplicacao, 4 para divisao, 5 para potenciacao e 6 para radiciacao : \n");
	scanf("%d",&opcode);
	switch(opcode)
	{
		case 1:
			result=soma(num1,num2);
			break;

		case 2:
			result=num1-num2;
			break;

		case 3:
			result=num1*num2;
			break;

		case 4:
			result=num1/num2;
			break;

	    case 5:
             result=pow(num1,num2);
             break;

        case 6:
             result=pow(num1,1/num2);
             break;

		default:
			main();
			break;

	};
	printf("o resultado da operacao solicitada e: %.3f\n",result);
	system("PAUSE");
}
float soma(float num1, float num2)
{
    int a,b,resultado;
    a=num1;
    b=num2;
    resultado=a+b;
    return resultado;



}
