#include<stdio.h>
#include<stdlib.h>
#include<time.h>

	void kaitou()
	{
		printf("*****************************\n");
		printf("****1.��ʼ��Ϸ  0.������Ϸ***\n");
		printf("*****************************\n");
	}


	void game()
	{
		int num,guess;
		printf("�����֣�");
		num = rand()%100+1;
		while (1)
		{
			
			scanf_s("%d", &guess);
			if (guess > num) {
				printf("���ϧ~�´���Ŷ\n");
			}
			else if (guess < num) {
				printf("���ϧ~��С��Ŷ\n");
			}
			else 
			{
				printf("��ϲ��¶��ˣ�������\n");
				break;
			}
			
		}
	}

int main()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		
		kaitou();
		printf("��ѡ��");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game(); //�����ֵĹ���
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����"); 
			break;


		}
		
	} while (input);
	
	return 0;
}