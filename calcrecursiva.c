#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//esta calculadora opera apenas com dois numeros nao sendo possivel realizar operacoes complexas

int main()
{   //declaração de variaveis
    short int opcode;
    float num1,num2,result;
    //declaração de funções
    float soma(float num1, float num2);
    float sub(float num1, float num2);
    float mult(float num1, float num2);
    float divisao(float num1, float num2);
    //processamento local
        //entrada de dados
	printf("digite o primeiro numero: \n");
	scanf("%f",&num1);
	printf("digite o segundo numero: \n");
	scanf("%f",&num2);
	printf("digite o codigo da operacao, 1 para soma, 2 para subtracao, 3 para multiplicacao, 4 para divisao, 5 para potenciacao e 6 para radiciacao : \n");
	scanf("%d",&opcode);
        //processamento de dados
	switch(opcode)
	{
		case 1:

			result=soma(num1,num2);
			break;

		case 2:

			result=sub(num1,num2);
			break;

		case 3:

			result=mult(num1,num2);
			break;

		case 4:

			result=divisao(num1,num2);
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
	//saida de dados
	printf("o resultado da operacao solicitada e: %.3f\n",result);
	//fim da função principal
	system("PAUSE");
}

//funções das 4 operações
float soma(float num1, float num2)
{
    float a,b,resultado;
    a=num1;
    b=num2;
    resultado=a+b;
    return resultado;

}
float sub(float num1, float num2)
{
    float a,b,resultado;
    a=num1;
    b=num2;
    resultado=a-b;
    return resultado;

}
float mult(float num1, float num2)
{
    float a,b,resultado;
    a=num1;
    b=num2;
    resultado=a*b;
    return resultado;

}
float divisao(float num1, float num2)
{
    float a,b,resultado;
    a=num1;
    b=num2;
    resultado=a/b;
    return resultado;

}
