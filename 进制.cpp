#include <stdio.h>
#include <math.h> 
int main()
{
	char ch[2];
	int Bsnum[1024],Dsnum[1024],Qsnum[1024],Hsnum[1024];
	int Bnum=0,Dnum=0,Qnum=0,Hnum=0,num=0,hc=0;
	char yon='y';
	while(yon=='y')
	{
		printf("������ʯ����Ľ���ת���ĳ��򣬻�ӭʹ�á�\n");
		printf("��������B�����˽�����Q����ʮ������D����ʮ��������H����\n");
		printf("�������Ӧ�Ĵ��룬��ʮ����ת�����ƵĴ����ǣ�DB\n");
		printf("�����룺"); 
		scanf("%s",&ch);
		switch (ch[0])
		{
			case 'B':
			{
				switch (ch[1])
				{
					case 'D':
					{
						printf("������һ������������");
						scanf("%d",&Bnum);
						hc=Bnum;
						while(Bnum>0)
						{
							Bnum/=10;
							num++;
						}
						Bnum=hc;
						while(num>0)
						{
							Dnum+=pow(2,num)*(Bnum)
						}
						break;
					}
					case 'Q':
					{
						printf("��δ���ţ������ڴ���\n");
						break;
					}
					case 'H':
					{
						printf("��δ���ţ������ڴ���\n");
						break;
					}
					default:
						printf("������һ����������������(�s��ڡ�)�s(�ء���");
				}
				break;
			}
			case 'D':
			{
				switch (ch[1])
				{
					case 'B':
					{	
						printf("������һ��ʮ��������");
						scanf("%d",&Dnum);
						hc=Dnum;
						while(Dnum>0)
						{
							Bsnum[num]=Dnum%2;
							num++;
							Dnum=Dnum/2;
						}
						printf("%d�Ķ��������ǣ�",hc);
						num--;
						while(num>=0)
						{
							printf("%d",Bsnum[num]);
							num--;
						}
						break;
					}
					case 'Q':
					{
						printf("��δ���ţ������ڴ���\n");
						break;
					}
					case 'H':
					{
						printf("��δ���ţ������ڴ���\n");
						break;
					}
					default:
						printf("������һ����������������(�s��ڡ�)�s(�ء���");
				}
				break;
			}
			case 'Q':
			{
				switch (ch[1])
				{
					case 'D':
					{
						printf("��δ���ţ������ڴ���\n");
						break;
					}
					case 'B':
					{
						printf("��δ���ţ������ڴ���\n");
						break;
					}
					case 'H':
					{
						printf("��δ���ţ������ڴ���\n");
						break;
					}
					default:
						printf("������һ����������������(�s��ڡ�)�s(�ء���");
				}
				break;
			}
			case 'H':
			{
				switch (ch[1])
				{
					case 'D':
					{
						printf("��δ���ţ������ڴ���\n");
						break;
					}
					case 'Q':
					{
						printf("��δ���ţ������ڴ���\n");
						break;
					}
					case 'B':
					{
						printf("��δ���ţ������ڴ���\n");
						break;
					}
					default:
						printf("������һ����������������(�s��ڡ�)�s(�ء���");
				}
				default:
					printf("������һ����������������(�s��ڡ�)�s(�ء���");
				break;
			}
		}
		printf("\n������������롮y�������������롮n������Ĭ��Ϊ��y����\n");
		scanf("%1s",&yon);
	}
	return 0;
}
