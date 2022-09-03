#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void Sair();
void Menu();
void Info();
void Desv();
void Mix();
void Facil();
void Medio();
void Dificil();
void Player();
void Pontuacao();

int certo_1 = 0, errado_1 = 0, contp1 = 0, totp1 = 0;
int certo_2 = 0, errado_2 = 0, contp2 = 0, totp2 = 0;
int certo_3 = 0, errado_3 = 0, contp3 = 0, totp3 = 0;
int certo_4 = 0, errado_4 = 0, contp4 = 0, totp4 = 0;
char j1[60];
char resp;
char cont;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	do
	{
		Player();
		Menu();
	} while ((cont == 'n') || (cont == 'N'));
}

void Menu()
{
	int valor;

	system("cls");

	printf("----------------------------------\n \tMenu Principal\n----------------------------------\n");
	printf("*------------------------------------------------------*\n");
	printf("|\t\t\tMENU DE OPÇÕES\t\t\t|\n");
	printf("*------------------------------------------------------*\n");
	printf("|  0 - SAIR DO GAME                                    |\n");
	printf("|  1 - JOGAR MODO MIX		                           |\n");
	printf("|  2 - JOGAR NÍVEL FÁCIL - SOMENTE O NÍVEL FÁCIL       |\n");
	printf("|  3 - JOGAR NÍVEL MÉDIO - SOMENTE O NÍVEL MÉDIO       |\n");
	printf("|  4 - JOGAR NÍVEL DIFÍCIL - SOMENTE O NÍVEL DIFÍCIL   |\n");
	printf("|  5 - VER INSTRUÇÕES DO JOGO E INFORMAÇÕES            |\n");
	printf("|  6 - VER OS DESENVOLVEDORES                          |\n");
	printf("|  7 - VER PONTUAÇÃO                                   |\n");
	printf("*------------------------------------------------------*\n");
	printf("O QUE DESEJA FAZER ?\n");
	scanf("%d", &valor);

	system("cls");

	switch (valor)
	{
	case 0:
		Sair();
		break;
	case 1:
		Mix();
		break;
	case 2:
		Facil();
		break;
	case 3:
		Medio();
		break;
	case 4:
		Dificil();
		break;
	case 5:
		Info();
		break;
	case 6:
		Desv();
		break;
	case 7:
		Pontuacao();
		break;
	}
}

void Sair()
{
	printf("--------------------\n\tMenu0\n--------------------");
	printf("\n\nDeseja sair do game? s/n \n");
	scanf("%s", &cont);
}

void Mix()
{
	// questao 1 - facil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Facil  |\n*--------------------------------*\nO que significa CPU? \n----------------------------------", contp4++);
	printf("\nA) Control Panel Unit - Unidade de Painel de Controle");
	printf("\nB) Central Power Unit - Unidade de Força Central");
	printf("\nC) Control Power Unit - Unidade de Controle de Energia");
	printf("\nD) Central Processing Unit - Unidade Central de Processamento");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'd') || (resp == 'D'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_4++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: D)\n\n");
		errado_4++;
		system("pause");
	}

	system("cls");

	// questao 2 - facil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Facil  |\n*--------------------------------*\nQuais são as principais fabricantes de processadores para Desktops e notebooks? \n----------------------------------", contp4++);
	printf("\nA) Intel e Dell");
	printf("\nB) Dell e AMD");
	printf("\nC) Intel e AMD");
	printf("\nD) AMD e IBM");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'c') || (resp == 'C'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_4++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: C)\n\n");
		errado_4++;
		system("pause");
	}

	system("cls");

	// questao 3 - facil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Facil  |\n*--------------------------------*\nQuais são os sintomas mais comuns de superaquecimento do processador ? \n----------------------------------", contp4++);
	printf("\nA) Apitos agudos da placa-mae");
	printf("\nB) Reinicios e congelamentos inesperados da maquina");
	printf("\nC) Cheiro de queimado que exala de dentro do gabinete ");
	printf("\nD) Imagem corrompida, com cores trocadas e manchas ");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'b') || (resp == 'B'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_4++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: B)\n\n");
		errado_4++;
		system("pause");
	}

	system("cls");

	// questao 4 - facil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Facil  |\n*--------------------------------*\nO que quer dizer bug ? \n----------------------------------", contp4++);
	printf("\nA) E a memoria que facilita as tarefas e liberta o processador");
	printf("\nB) E um tipo de periferico");
	printf("\nC) E um erro de programacao");
	printf("\nD) E uma peca de hardware");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'c') || (resp == 'C'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_4++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: C)\n\n");
		errado_4++;
		system("pause");
	}

	system("cls");

	// questao 5 - facil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Facil  |\n*--------------------------------*\nO SPAM atualmente em 2012 corresponde a aproximadamente: \n----------------------------------", contp4++);
	printf("\nA) 50%% de todos os emails");
	printf("\nB) 40%% de todos os bancos de dados mundiais");
	printf("\nC) 80%% de todos os provedores de internet");
	printf("\nD) 32%% da internet");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'b') || (resp == 'B'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_4++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: B)\n\n");
		errado_4++;
		system("pause");
	}

	system("cls");

	// questao 6 - facil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Facil  |\n*--------------------------------*\nA velocidade dos processadores atuais eh normalmente medida em: \n----------------------------------", contp4++);
	printf("\nA) Hertz ou Hz");
	printf("\nB) Gigahertz ou GHz");
	printf("\nC) Quilo byte ou Kb");
	printf("\nD) Megabyte ou MB");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'a') || (resp == 'A'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_4++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: A)\n\n");
		errado_4++;
		system("pause");
	}

	system("cls");

	// questao 7 - facil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Facil  |\n*--------------------------------*\nO formato padrao dos arquivos gerados pelo Word é: \n----------------------------------", contp4++);
	printf("\nA) txt");
	printf("\nB) doc");
	printf("\nC) xls");
	printf("\nD) html");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'b') || (resp == 'B'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_4++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: B)\n\n");
		errado_4++;
		system("pause");
	}

	system("cls");

	// questao 8 - facil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Facil  |\n*--------------------------------*\nA extensao padrao de arquivos de audio no windows é: \n----------------------------------", contp4++);
	printf("\nA) WAV");
	printf("\nB) BIN");
	printf("\nC) ARC");
	printf("\nD) WMF");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'a') || (resp == 'A'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_4++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: A)\n\n");
		errado_4++;
		system("pause");
	}

	system("cls");

	// questao 9 - facil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Facil  |\n*--------------------------------*\nO numero binario 10101010 equivale a qual numero decimal apresentado \n----------------------------------", contp4++);
	printf("\nA) 140");
	printf("\nB) 150");
	printf("\nC) 160");
	printf("\nD) 170");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'd') || (resp == 'D'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_4++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: D)\n\n");
		errado_4++;
		system("pause");
	}

	system("cls");

	// questao 10 - facil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Facil  |\n*--------------------------------*\nÉ um tipo de computador que tem como funcao controlar as demais estacoes de trabalho quando ligados em uma rede de computadores: \n----------------------------------", contp4++);
	printf("\nA) Estacao de trabalho");
	printf("\nB) UMPC");
	printf("\nC) Servidor");
	printf("\nD) Desktop");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'c') || (resp == 'C'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_4++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: C)\n\n");
		errado_4++;
		system("pause");
	}

	system("cls");

	// questao 1 - Medio
	printf("--------------------------------\n|  Pergunta %d   - Nivel Medio  |\n*--------------------------------*\nO primeiro dominio registrado na internet foi:\n----------------------------------", contp4++);
	printf("\nA) www.datacenter.com.");
	printf("\nB) www.symbolics.com.");
	printf("\nC) www.social.com.");
	printf("\nD)  www.us.gov.");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'a') || (resp == 'A'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_4++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: A)\n\n");
		errado_4++;
		system("pause");
	}

	system("cls");

	// questao 2 - Medio
	printf("--------------------------------\n|  Pergunta %d   - Nivel Medio   |\n*--------------------------------*\nA maior parte das imagens da internet e composta por: \n----------------------------------", contp4++);
	printf("\nA) Papeis de parede.");
	printf("\nB) GIFs animados.");
	printf("\nC) Mulheres nuas.");
	printf("\nD) Fotografia de Eletronicos.");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'a') || (resp == 'A'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_4++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: A)\n\n");
		errado_4++;
		system("pause");
	}

	system("cls");

	// questao 3 - Medio
	printf("--------------------------------\n|  Pergunta %d   - Nivel Medio   |\n*--------------------------------*\nQuais destas nao e uma linguagem de programacao ? \n----------------------------------", contp4++);
	printf("\nA) Cobol.");
	printf("\nB) Basic.");
	printf("\nC) Smalltalk.");
	printf("\nD) Preview.");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'd') || (resp == 'D'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_4++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: D)\n\n");
		errado_4++;
		system("pause");
	}

	system("cls");

	// questao 4 - medio
	printf("--------------------------------\n|  Pergunta %d   - Nivel Medio  |\n*--------------------------------*\nQual a forma de memoria mais rapida, presente nos nossos computadores ?  \n----------------------------------", contp4++);
	printf("\nA) A memoria Flash.");
	printf("\nB) A GDDR5.");
	printf("\nC) A memoria RAM DDR3.");
	printf("\nD) A memoria Cache.");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'c') || (resp == 'C'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_4++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: C)\n\n");
		errado_4++;
		system("pause");
	}

	system("cls");

	// questao 5 - medio
	printf("--------------------------------\n|  Pergunta %d   - Nivel Medio  |\n*--------------------------------*\nQual a vida util estimada para um DVD de boa qualidade ? \n----------------------------------", contp4++);
	printf("\nA) Aproximadamente 100 anos.");
	printf("\nB) ? impossivel medir a durabilidade.");
	printf("\nC) 9 mil horas de leitura.");
	printf("\nD) 350 mil dias.");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'a') || (resp == 'A'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_4++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: A)\n\n");
		errado_4++;
		system("pause");
	}

	system("cls");

	// questao 6 - medio
	printf("--------------------------------\n|  Pergunta %d   - Nivel Medio  |\n*--------------------------------*\nA unidade central de processamento (UCP) e composta de:\n----------------------------------", contp4++);
	printf("\nA) Unidade Central de Processamento e Memória de Massa.");
	printf("\nB) Dispositivos ou Unidades de Entrada.");
	printf("\nC) Unidade Central de Processamento e Memoria Principal.");
	printf("\nD) Unidade de Controle e Unidade de Lógica e Aritmetica.");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'd') || (resp == 'D'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_4++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: D)\n\n");
		errado_4++;
		system("pause");
	}

	system("cls");

	// questao 7 - medio
	printf("--------------------------------\n|  Pergunta %d   - Nivel Medio  |\n*--------------------------------*\nA unidade de medida da resolucao de uma impressora e dada em:\n----------------------------------", contp4++);
	printf("\nA) CPS.");
	printf("\nB) BPM.");
	printf("\nC) PPM.");
	printf("\nD) DPI.");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'd') || (resp == 'D'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_4++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: D)\n\n");
		errado_4++;
		system("pause");
	}

	system("cls");

	// questao 8 - medio
	printf("--------------------------------\n|  Pergunta %d   - Nivel Medio  |\n*--------------------------------*\nEntre os meios de transmissao abaixo,  assinale aquele que nao eh guiado:\n----------------------------------", contp4++);
	printf("\nA) par trançado.");
	printf("\nB) cabo coaxial.");
	printf("\nC) microondas.");
	printf("\nD) fibra ótica.");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'c') || (resp == 'C'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_4++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: C)\n\n");
		errado_4++;
		system("pause");
	}

	system("cls");

	// questao 9 - medio
	printf("--------------------------------\n|  Pergunta %d   - Nivel Medio  |\n*--------------------------------*\nQual destes sistemas operacionais e usado em trens ? \n----------------------------------", contp4++);
	printf("\nA) Placa mae, processador, monitor.");
	printf("\nB) Placa mae, hd, monitor.");
	printf("\nC) Placa mae,memoria ram.");
	printf("\nD) Placa mae, Placa de rede, modem, memoria ram.");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'd') || (resp == 'D'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_4++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: D)\n\n");
		errado_4++;
		system("pause");
	}

	system("cls");

	// questao 10 - medio
	printf("--------------------------------\n|  Pergunta %d   - Nivel Medio  |\n*--------------------------------*\nQual destes sistemas operacionais e usado em trens ? \n----------------------------------", contp4++);
	printf("\nA) Windows.");
	printf("\nB) Linux.");
	printf("\nC) Unix.");
	printf("\nD) Android.");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'b') || (resp == 'B'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_4++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: B)\n\n");
		errado_4++;
		system("pause");
	}

	system("cls");

	// questao 1 - Dificil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Dificil  |\n*--------------------------------*\nQuando foi lançado o primeiro microprocessador ? \n----------------------------------", contp4++);
	printf("\nA) Em 1971, havendo 3 concorrentes");
	printf("\nB) Em 1985, pela ARM Foundation");
	printf("\nC) Em 1979, pela Motorola");
	printf("\nD) Em 1944, durante a Segunda Guerra Mundial");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'a') || (resp == 'A'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_4++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: A)\n\n");
		errado_4++;
		system("pause");
	}

	system("cls");

	// questao 2 - dificil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Dificil  |\n*--------------------------------*\nQuem foi o pai da computacao ? \n----------------------------------", contp4++);
	printf("\nA) Allan Moore");
	printf("\nB) Albert Einstein");
	printf("\nC) Thomas Ericsson");
	printf("\nD) Alan Turing");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'd') || (resp == 'D'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_4++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: D)\n\n");
		errado_4++;
		system("pause");
	}

	system("cls");

	// questao 3 - dificil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Dificil  |\n*--------------------------------*\nO nome original do primeiro Xbox era: \n----------------------------------", contp4++);
	printf("\nA) DirectBox");
	printf("\nB) BillBox");
	printf("\nC) ZBox");
	printf("\nD) MicrosoftBox");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'a') || (resp == 'A'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_4++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: A)\n\n");
		errado_4++;
		system("pause");
	}

	system("cls");

	// questao 4 - dificil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Dificil  |\n*--------------------------------*\nQuais são as principais fabricantes de processadores ARM ? \n----------------------------------", contp4++);
	printf("\nA) Samsung, PowerVR, AMD Tech e Intel");
	printf("\nB) Infineon Imaging, Texas Qualcomm e NVIDIA");
	printf("\nC) PowerVR, SGX, NVIDIA e Qualcomm Instruments");
	printf("\nD) Samsung, Texas Instruments, Qualcomm e NVIDIA");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'd') || (resp == 'D'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_4++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: D)\n\n");
		errado_4++;
		system("pause");
	}

	system("cls");

	// questao 5 - dificil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Dificil  |\n*--------------------------------*\nQual das pastas abaixo nao pode ser criada no Windows ? \n----------------------------------", contp4++);
	printf("\nA) Trojan");
	printf("\nB) Sys32");
	printf("\nC) Con");
	printf("\nD) Sys");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'c') || (resp == 'C'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_4++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: C)\n\n");
		errado_4++;
		system("pause");
	}

	system("cls");

	// questao 6 - dificil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Dificil  |\n*--------------------------------*\nO que é firmware ? \n----------------------------------", contp4++);
	printf("\nA) Interface basica do sistema operacional do Macintosh");
	printf("\nB) Conjunto de instrucoes para o funcionamento de um dispositivo");
	printf("\nC) Byte existente no inicio de uma trilha de disco");
	printf("\nD) É um tipo de memoria nao volatil");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'b') || (resp == 'B'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_4++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: B)\n\n");
		errado_4++;
		system("pause");
	}

	system("cls");

	// questao 7 - dificil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Dificil  |\n*--------------------------------*\nA tecnica em que parte do programa é armazenada em disco e levada para a memoria para serexecutada quando necessario é chamada de: \n----------------------------------", contp4++);
	printf("\nA) armazenamento virtual");
	printf("\nB) alocação de memoria");
	printf("\nC) priorizacao de memoria");
	printf("\nD) alocação de recursos");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'a') || (resp == 'A'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_4++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: A)\n\n");
		errado_4++;
		system("pause");
	}

	system("cls");

	// questao 8 - dificil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Dificil  |\n*--------------------------------*\nFSB (Front Size Bus), tambem conhecido como barramento frontal, realiza a ligacao entre \n----------------------------------", contp4++);
	printf("\nA) o processador (CPU) e o chipset");
	printf("\nB) o chipset e a memoria RAM");
	printf("\nC) o BIOS e a memória RAM");
	printf("\nD) o chipset e a placa-mãe");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'a') || (resp == 'A'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_4++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: A)\n\n");
		errado_4++;
		system("pause");
	}

	system("cls");

	// questao 9 - dificil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Dificil  |\n*--------------------------------*\nEm relacao as topologias de redes, é correto afirmar que: \n----------------------------------", contp4++);
	printf("\nA) topologia em estrela todas as estacoes sao interligadas duas a duas entre si");
	printf("\nB) rede em anel consiste em estacoes conectadas atraves de um caminho fechado");
	printf("\nC) redes por chaveamento de pacotes cada estacao so pode realizar uma unica tarefa");
	printf("\nD) topologia em estrela a falha de qualquer das estacoes causa a parada total do sistema");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'b') || (resp == 'B'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_4++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: B)\n\n");
		errado_4++;
		system("pause");
	}

	system("cls");

	// questao 10 - Dificil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Dificil  |\n*--------------------------------*\nCGA, EGA, VGA e SVGA sao siglas que identificamadaptadores graficos para: \n----------------------------------", contp4++);
	printf("\nA) Videos");
	printf("\nB) Impressoras");
	printf("\nC) Drivers");
	printf("\nD) Teclados");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'a') || (resp == 'A'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_4++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: A)\n\n");
		errado_4++;
		system("pause");
	}

	system("cls");

	totp4 = (certo_4 * 250) - (errado_4 * 250);

	Menu();
}

void Facil()
{
	system("cls");

	// questao 1 - facil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Facil  |\n*--------------------------------*\nO que significa CPU? \n----------------------------------", contp1++);
	printf("\nA) Control Panel Unit - Unidade de Painel de Controle");
	printf("\nB) Central Power Unit - Unidade de Força Central");
	printf("\nC) Control Power Unit - Unidade de Controle de Energia");
	printf("\nD) Central Processing Unit - Unidade Central de Processamento");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'd') || (resp == 'D'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_1++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: D)\n\n");
		errado_1++;
		system("pause");
	}

	system("cls");

	// questao 2 - facil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Facil  |\n*--------------------------------*\nQuais são as principais fabricantes de processadores para Desktops e notebooks? \n----------------------------------", contp1++);
	printf("\nA) Intel e Dell");
	printf("\nB) Dell e AMD");
	printf("\nC) Intel e AMD");
	printf("\nD) AMD e IBM");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'c') || (resp == 'C'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_1++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: C)\n\n");
		errado_1++;
		system("pause");
	}

	system("cls");

	// questao 3 - facil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Facil  |\n*--------------------------------*\nQuais são os sintomas mais comuns de superaquecimento do processador ? \n----------------------------------", contp1++);
	printf("\nA) Apitos agudos da placa-mae");
	printf("\nB) Reinicios e congelamentos inesperados da maquina");
	printf("\nC) Cheiro de queimado que exala de dentro do gabinete ");
	printf("\nD) Imagem corrompida, com cores trocadas e manchas ");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'b') || (resp == 'B'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_1++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: B)\n\n");
		errado_1++;
		system("pause");
	}

	system("cls");

	// questao 4 - facil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Facil  |\n*--------------------------------*\nO que quer dizer bug ? \n----------------------------------", contp1++);
	printf("\nA) E a memoria que facilita as tarefas e liberta o processador");
	printf("\nB) E um tipo de periferico");
	printf("\nC) E um erro de programacao");
	printf("\nD) E uma peca de hardware");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'c') || (resp == 'C'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_1++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: C)\n\n");
		errado_1++;
		system("pause");
	}

	system("cls");

	// questao 5 - facil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Facil  |\n*--------------------------------*\nO SPAM atualmente em 2012 corresponde a aproximadamente: \n----------------------------------", contp1++);
	printf("\nA) 50%% de todos os emails");
	printf("\nB) 40%% de todos os bancos de dados mundiais");
	printf("\nC) 80%% de todos os provedores de internet");
	printf("\nD) 32%% da internet");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'b') || (resp == 'B'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_1++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: B)\n\n");
		errado_1++;
		system("pause");
	}

	system("cls");

	// questao 6 - facil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Facil  |\n*--------------------------------*\nA velocidade dos processadores atuais é normalmente medida em: \n----------------------------------", contp1++);
	printf("\nA) Hertz ou Hz");
	printf("\nB) Gigahertz ou GHz");
	printf("\nC) Quilo byte ou Kb");
	printf("\nD) Megabyte ou MB");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'a') || (resp == 'A'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_1++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: A)\n\n");
		errado_1++;
		system("pause");
	}

	system("cls");

	// questao 7 - facil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Facil  |\n*--------------------------------*\nO formato padrao dos arquivos gerados pelo Word é: \n----------------------------------", contp1++);
	printf("\nA) txt");
	printf("\nB) doc");
	printf("\nC) xls");
	printf("\nD) html");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'b') || (resp == 'B'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_1++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: B)\n\n");
		errado_1++;
		system("pause");
	}

	system("cls");

	// questao 8 - facil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Facil  |\n*--------------------------------*\nA extensao padrao de arquivos de audio no windows é: \n----------------------------------", contp1++);
	printf("\nA) WAV");
	printf("\nB) BIN");
	printf("\nC) ARC");
	printf("\nD) WMF");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'a') || (resp == 'A'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_1++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: A)\n\n");
		errado_1++;
		system("pause");
	}

	system("cls");

	// questao 9 - facil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Facil  |\n*--------------------------------*\nO numero binario 10101010 equivale a qual numero decimal apresentado \n----------------------------------", contp1++);
	printf("\nA) 140");
	printf("\nB) 150");
	printf("\nC) 160");
	printf("\nD) 170");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'd') || (resp == 'D'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_1++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: D)\n\n");
		errado_1++;
		system("pause");
	}

	system("cls");

	// questao 10 - facil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Facil  |\n*--------------------------------*\nÉ um tipo de computador que tem como funcao controlar as demais estacoes de trabalho quando ligados em uma rede de computadores: \n----------------------------------", contp1++);
	printf("\nA) Estacao de trabalho");
	printf("\nB) UMPC");
	printf("\nC) Servidor");
	printf("\nD) Desktop");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'c') || (resp == 'C'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_1++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: C)\n\n");
		errado_1++;
		system("pause");
	}

	system("cls");

	totp1 = (certo_1 * 150) - (errado_1 * 150);

	Menu();
}

void Medio()
{
	system("cls");

	// questao 1 - Medio
	printf("--------------------------------\n|  Pergunta %d   - Nivel Medio  |\n*--------------------------------*\nO primeiro dominio registrado na internet foi:\n----------------------------------", contp2++);
	printf("\nA) www.datacenter.com.");
	printf("\nB) www.symbolics.com.");
	printf("\nC) www.social.com.");
	printf("\nD)  www.us.gov.");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'a') || (resp == 'A'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_2++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: A)\n\n");
		errado_2++;
		system("pause");
	}

	system("cls");

	// questao 2 - Medio
	printf("--------------------------------\n|  Pergunta %d   - Nivel Medio   |\n*--------------------------------*\nA maior parte das imagens da internet e composta por: \n----------------------------------", contp2++);
	printf("\nA) Papeis de parede.");
	printf("\nB) GIFs animados.");
	printf("\nC) Mulheres nuas.");
	printf("\nD) Fotografia de Eletronicos.");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'a') || (resp == 'A'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_2++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: A)\n\n");
		errado_2++;
		system("pause");
	}

	system("cls");

	// questao 3 - Medio
	printf("--------------------------------\n|  Pergunta %d   - Nivel Medio   |\n*--------------------------------*\nQuais destas nao e uma linguagem de programacao ? \n----------------------------------", contp2++);
	printf("\nA) Cobol.");
	printf("\nB) Basic.");
	printf("\nC) Smalltalk.");
	printf("\nD) Preview.");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'd') || (resp == 'D'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_2++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: D)\n\n");
		errado_2++;
		system("pause");
	}

	system("cls");

	// questao 4 - medio
	printf("--------------------------------\n|  Pergunta %d   - Nivel Medio  |\n*--------------------------------*\nQual a forma de memoria mais rapida, presente nos nossos computadores ?  \n----------------------------------", contp2++);
	printf("\nA) A memoria Flash.");
	printf("\nB) A GDDR5.");
	printf("\nC) A memoria RAM DDR3.");
	printf("\nD) A memoria Cache.");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'c') || (resp == 'C'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_2++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: C)\n\n");
		errado_2++;
		system("pause");
	}

	system("cls");

	// questao 5 - medio
	printf("--------------------------------\n|  Pergunta %d   - Nivel Medio  |\n*--------------------------------*\nQual a vida util estimada para um DVD de boa qualidade ? \n----------------------------------", contp2++);
	printf("\nA) Aproximadamente 100 anos.");
	printf("\nB) É impossivel medir a durabilidade.");
	printf("\nC) 9 mil horas de leitura.");
	printf("\nD) 350 mil dias.");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'a') || (resp == 'A'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_2++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: A)\n\n");
		errado_2++;
		system("pause");
	}

	system("cls");

	// questao 6 - medio
	printf("--------------------------------\n|  Pergunta %d   - Nivel Medio  |\n*--------------------------------*\nA unidade central de processamento (UCP) e composta de:\n----------------------------------", contp2++);
	printf("\nA) Unidade Central de Processamento e Memória de Massa.");
	printf("\nB) Dispositivos ou Unidades de Entrada.");
	printf("\nC) Unidade Central de Processamento e Memoria Principal.");
	printf("\nD) Unidade de Controle e Unidade de Lógica e Aritmetica.");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'd') || (resp == 'D'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_2++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: D)\n\n");
		errado_2++;
		system("pause");
	}

	system("cls");

	// questao 7 - medio
	printf("--------------------------------\n|  Pergunta %d   - Nivel Medio  |\n*--------------------------------*\nA unidade de medida da resolucao de uma impressora e dada em:\n----------------------------------", contp2++);
	printf("\nA) CPS.");
	printf("\nB) BPM.");
	printf("\nC) PPM.");
	printf("\nD) DPI.");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'd') || (resp == 'D'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_2++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: D)\n\n");
		errado_2++;
		system("pause");
	}

	system("cls");

	// questao 8 - medio
	printf("--------------------------------\n|  Pergunta %d   - Nivel Medio  |\n*--------------------------------*\nEntre os meios de transmissao abaixo,  assinale aquele que nao eh guiado:\n----------------------------------", contp2++);
	printf("\nA) par trançado.");
	printf("\nB) cabo coaxial.");
	printf("\nC) microondas.");
	printf("\nD) fibra ótica.");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'c') || (resp == 'C'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_2++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: C)\n\n");
		errado_2++;
		system("pause");
	}

	system("cls");

	// questao 9 - medio
	printf("--------------------------------\n|  Pergunta %d   - Nivel Medio  |\n*--------------------------------*\nQual destes sistemas operacionais e usado em trens ? \n----------------------------------", contp2++);
	printf("\nA) Placa mae, processador, monitor.");
	printf("\nB) Placa mae, hd, monitor.");
	printf("\nC) Placa mae,memoria ram.");
	printf("\nD) Placa mae, Placa de rede, modem, memoria ram.");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'd') || (resp == 'D'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_2++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: D)\n\n");
		errado_2++;
		system("pause");
	}

	system("cls");

	// questao 10 - medio
	printf("--------------------------------\n|  Pergunta %d   - Nivel Medio  |\n*--------------------------------*\nQual destes sistemas operacionais e usado em trens ? \n----------------------------------", contp2++);
	printf("\nA) Windows.");
	printf("\nB) Linux.");
	printf("\nC) Unix.");
	printf("\nD) Android.");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'b') || (resp == 'B'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_2++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: B)\n\n");
		errado_2++;
		system("pause");
	}

	system("cls");

	totp2 = (certo_2 * 200) - (errado_2 * 200);

	Menu();
}
void Dificil()
{
	system("cls");

	// questao 1 - Dificil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Dificil  |\n*--------------------------------*\nQuando foi lan?ado o primeiro microprocessador ? \n----------------------------------", contp3++);
	printf("\nA) Em 1971, havendo 3 concorrentes");
	printf("\nB) Em 1985, pela ARM Foundation");
	printf("\nC) Em 1979, pela Motorola");
	printf("\nD) Em 1944, durante a Segunda Guerra Mundial");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'a') || (resp == 'A'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_3++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: A)\n\n");
		errado_3++;
		system("pause");
	}

	system("cls");

	// questao 2 - dificil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Dificil  |\n*--------------------------------*\nQuem foi o pai da computacao ? \n----------------------------------", contp3++);
	printf("\nA) Allan Moore");
	printf("\nB) Albert Einstein");
	printf("\nC) Thomas Ericsson");
	printf("\nD) Alan Turing");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'd') || (resp == 'D'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_3++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: D)\n\n");
		errado_3++;
		system("pause");
	}

	system("cls");

	// questao 3 - dificil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Dificil  |\n*--------------------------------*\nO nome original do primeiro Xbox era: \n----------------------------------", contp3++);
	printf("\nA) DirectBox");
	printf("\nB) BillBox");
	printf("\nC) ZBox");
	printf("\nD) MicrosoftBox");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'a') || (resp == 'A'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_3++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: A)\n\n");
		errado_3++;
		system("pause");
	}

	system("cls");

	// questao 4 - dificil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Dificil  |\n*--------------------------------*\nQuais são as principais fabricantes de processadores ARM ? \n----------------------------------", contp3++);
	printf("\nA) Samsung, PowerVR, AMD Tech e Intel");
	printf("\nB) Infineon Imaging, Texas Qualcomm e NVIDIA");
	printf("\nC) PowerVR, SGX, NVIDIA e Qualcomm Instruments");
	printf("\nD) Samsung, Texas Instruments, Qualcomm e NVIDIA");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'd') || (resp == 'D'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_3++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: D)\n\n");
		errado_3++;
		system("pause");
	}

	system("cls");

	// questao 5 - dificil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Dificil  |\n*--------------------------------*\nQual das pastas abaixo nao pode ser criada no Windows ? \n----------------------------------", contp3++);
	printf("\nA) Trojan");
	printf("\nB) Sys32");
	printf("\nC) Con");
	printf("\nD) Sys");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'c') || (resp == 'C'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_3++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: C)\n\n");
		errado_3++;
		system("pause");
	}

	system("cls");

	// questao 6 - dificil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Dificil  |\n*--------------------------------*\nO que é firmware ? \n----------------------------------", contp3++);
	printf("\nA) Interface basica do sistema operacional do Macintosh");
	printf("\nB) Conjunto de instrucoes para o funcionamento de um dispositivo");
	printf("\nC) Byte existente no inicio de uma trilha de disco");
	printf("\nD) É um tipo de memoria nao volatil");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'b') || (resp == 'B'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_3++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: B)\n\n");
		errado_3++;
		system("pause");
	}

	system("cls");

	// questao 7 - dificil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Dificil  |\n*--------------------------------*\nA tecnica em que parte do programa é armazenada em disco e levada para a memoria para serexecutada quando necessario é chamada de: \n----------------------------------", contp3++);
	printf("\nA) armazenamento virtual");
	printf("\nB) alocação de memoria");
	printf("\nC) priorizacao de memoria");
	printf("\nD) alocação de recursos");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'a') || (resp == 'A'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_3++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: A)\n\n");
		errado_3++;
		system("pause");
	}

	system("cls");

	// questao 8 - dificil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Dificil  |\n*--------------------------------*\nFSB (Front Size Bus), tambem conhecido como barramento frontal, realiza a ligacao entre \n----------------------------------", contp3++);
	printf("\nA) o processador (CPU) e o chipset");
	printf("\nB) o chipset e a memoria RAM");
	printf("\nC) o BIOS e a memória RAM");
	printf("\nD) o chipset e a placa-mãe");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'a') || (resp == 'A'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_3++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: A)\n\n");
		errado_3++;
		system("pause");
	}

	system("cls");

	// questao 9 - dificil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Dificil  |\n*--------------------------------*\nEm relacao as topologias de redes, é correto afirmar que: \n----------------------------------", contp3++);
	printf("\nA) topologia em estrela todas as estacoes sao interligadas duas a duas entre si");
	printf("\nB) rede em anel consiste em estacoes conectadas atraves de um caminho fechado");
	printf("\nC) redes por chaveamento de pacotes cada estacao so pode realizar uma unica tarefa");
	printf("\nD) topologia em estrela a falha de qualquer das estacoes causa a parada total do sistema");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'b') || (resp == 'B'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_3++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: B)\n\n");
		errado_3++;
		system("pause");
	}

	system("cls");

	// questao 10 - Dificil
	printf("*--------------------------------*\n|  Pergunta %d   - Nivel Dificil  |\n*--------------------------------*\nCGA, EGA, VGA e SVGA sao siglas que identificamadaptadores graficos para: \n----------------------------------", contp3++);
	printf("\nA) Videos");
	printf("\nB) Impressoras");
	printf("\nC) Drivers");
	printf("\nD) Teclados");
	printf("\n---------------------------------- \n");
	scanf("%s", &resp);

	if ((resp == 'a') || (resp == 'A'))
	{
		system("cls");
		printf("\n\n---- Resposta correta ----\n\n\n");
		certo_3++;
		system("pause");
	}
	else
	{
		system("cls");
		printf("\n\n---- Resposta errada ----\n");
		printf("    Resposta correta: A)\n\n");
		errado_3++;
		system("pause");
	}

	system("cls");

	totp3 = (certo_3 * 250) - (errado_3 * 250);

	Menu();
}

void Info()
{

	system("cls");

	printf("--------------------\n\tMenu 5\n--------------------");
	printf("\n\n   INSTRUÇÕES  \n\n Este é um divertido jogo de perguntas e respostas. O jogador deverá escolher, dentre as 4 alternativas (A, B, C, D), apenas uma e em seguida pressionar enter. O jogo lhe informa se você acertou ou errou a questão.\n");
	printf("\n O jogo possui 3 níveis de dificuldade: FÁCIL, MÉDIO e DIFÍCIL\n MODO MIX: Neste modo, você jogará o game completo, com as perguntas de todas as dificuldades. Os níveis podem ser jogados de forma individual sem precisar jogar o game completo.");
	printf("\n\n   Sistema de pontuacao do game. \n\nNível facil   - Cada resposta certa valerá 150 pontos\nNível médio   - Cada resposta certa valerá 200 pontos\nNivel difícil - Cada resposta certa valerá 250 pontos\nModo Mix - Cada resposta certa valerá 250 pontos\n\nBasicamente é isso, divirta-se! ;D\n\n");

	system("pause");

	Menu();
}

void Desv()
{

	system("cls");

	printf("--------------------\n\tMenu 6\n--------------------");
	printf("\n\nDESENVOLVEDORA: Ana Carolina Vargas Bianchini Gaspar\n\n");

	system("pause");

	Menu();
}

void Player()
{

	system("cls");

	printf("Digite seu nome:");
	gets(j1);

	Menu();
}

void Pontuacao()
{

	system("cls");

	printf("--------------------\n\tMenu 7\n--------------------");
	printf("\n\n Pontuação do Jogador %s", j1);

	printf("\n\nMODO MIX:");
	printf("\nAcertos: %i", certo_4);
	printf("\nErros: %i", errado_4);
	printf("\n\nTotal: %i", totp4);

	printf("\n\nMODO FÁCIL:");
	printf("\nAcertos: %i", certo_1);
	printf("\nErros: %i", errado_1);
	printf("\n\nTotal: %i", totp1);

	printf("\n\nMODO MÉDIO:");
	printf("\nAcertos: %i", certo_2);
	printf("\nErros: %i", errado_2);
	printf("\n\nTotal: %i", totp2);

	printf("\n\nMODO DIFÍCIL:");
	printf("\nAcertos: %i", certo_3);
	printf("\nErros: %i", errado_3);
	printf("\n\nTotal: %i\n\n", totp3);

	system("pause");

	Menu();
}

