#include <stdio.h>
#include <math.h> 
int main()
{
	char ch[2];
	int Bsnum[1024],Dsnum[1024],Qsnum[1024],Hsnum[1024];
	int Bnum=0,Dnum=0,Qnum=0,Hnum=0,num=0,hc=0,sum=0;
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
						Dnum=0;
						num=0;
						printf("������һ������������");
						scanf("%d",&Bnum);
						hc=Bnum;
						for(;Bnum!=0;Bnum/=10)
						{
							sum=Bnum%10;
							Dnum+=sum*pow(2,num);
							num++;
						}
						printf("%d��ʮ�������ǣ�%d",hc,Dnum);
						break;
					}
					case 'Q':
					{
						Qnum=0;
						num=0;
						printf("������һ������������");
						scanf("%d",&Bnum);
						hc=Bnum;
						for(;Bnum!=0;Bnum/=10)
						{
							sum=Bnum%10;
							Qnum+=sum*pow(2,num);
							num++;
						}
						printf("%d�İ˽������ǣ�%o",hc,Qnum);
						break;
					}
					case 'H':
					{
						Hnum=0;
						num=0;
						printf("������һ������������");
						scanf("%d",&Bnum);
						hc=Bnum;
						for(;Bnum!=0;Bnum/=10)
						{
							sum=Bnum%10;
							Hnum+=sum*pow(2,num);
							num++;
						}
						printf("%d��ʮ�������ǣ�%x",hc,Hnum);
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
						Dnum=0;
						printf("������һ��ʮ��������");
						scanf("%d",&Dnum);
						printf("%d�İ˽����ǣ�%o",Dnum,Dnum);
						break;
					}
					case 'H':
					{
						Dnum=0;
						printf("������һ��ʮ��������");
						scanf("%d",&Dnum);
						printf("%d��ʮ�������ǣ�%x",Dnum,Dnum);
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
