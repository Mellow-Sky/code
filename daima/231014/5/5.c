#include<stdio.h>
int main()
{
	//Բ����֪�뾶���ߣ������Բ�ܳ���Բ������������,23034225
	double r, high, c, s, v, p = 3.14;
	printf("������Բ����İ뾶��");
		scanf_s("%lf", &r);
	printf("������Բ����ĸߣ�");
		scanf_s("%lf", &high);

	c = 2 * p * r;
	s = high * c + 2 * p * r * r;
	v = p * r * r * high;
	printf("Բ����ĵ���Բ�ܳ�Ϊ:%.3lf\nԲ����ı����Ϊ:%.3lf\nԲ��������Ϊ:%.3lf\n", c, s, v);


	return 0;
}