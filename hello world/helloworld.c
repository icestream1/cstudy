#include <stdio.h>

int main()
{
	int num1 = 0;//����������Ҫ�ڴ���鿪ʼ��
	int num2 = 0;
	int sum = 0;
	printf("hello world\n");//%d ���� %c �ַ� %f С�� %p �Ե�ַ����ʽ��ӡ %x 16��������
	printf("long = %d\n", sizeof(long));
	printf("short = %d\n", sizeof(short));
	printf("�������ֲ�����enter�����ӷ�\n");
	scanf_s("%d%d", &num1, &num2);//scanf_s�����п�ƽ̨��   scanfͨ�ã�����ȫ   �ڵ�һ��ʹ��  #define _CRT_SECURE_NO_WARNINGS 1  �����
	sum = num1 + num2;
	printf("�� = %d\n", sum);
	return sum;
}