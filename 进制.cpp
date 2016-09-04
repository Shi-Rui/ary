#include <stdio.h>
#include <math.h> 
int main()
{
	char ch[2];
	int Bsnum[1024],Dsnum[1024],Qsnum[1024],Hsnum[1024];
	int Bnum=0,Dnum=0,Qnum=0,Hnum=0,num=0,hc=0,sum=0;
	char yon='y';
	printf("这是由石睿开发的进制转化的程序，欢迎使用。\n");
	printf("二进制由B代表，八进制由Q代表，十进制由D代表，十六进制由H代表。\n");
	printf("请键入相应的代码，如十进制转二进制的代码是：DB\n");
	while(yon=='y')
	{
		printf("请输入："); 
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
						printf("请输入一个二进制数：");
						scanf("%d",&Bnum);
						hc=Bnum;
						for(;Bnum!=0;Bnum/=10)
						{
							sum=Bnum%10;
							Dnum+=sum*pow(2,num);
							num++;
						}
						printf("%d的十进制数是：%d",hc,Dnum);
						break;
					}
					case 'Q':
					{
						Qnum=0;
						num=0;
						printf("请输入一个二进制数：");
						scanf("%d",&Bnum);
						hc=Bnum;
						for(;Bnum!=0;Bnum/=10)
						{
							sum=Bnum%10;
							Qnum+=sum*pow(2,num);
							num++;
						}
						printf("%dB的八进制数是：%o",hc,Qnum);
						break;
					}
					case 'H':
					{
						Hnum=0;
						num=0;
						printf("请输入一个二进制数：");
						scanf("%d",&Bnum);
						hc=Bnum;
						for(;Bnum!=0;Bnum/=10)
						{
							sum=Bnum%10;
							Hnum+=sum*pow(2,num);
							num++;
						}
						printf("%dB的十六进制数是：%x",hc,Hnum);
						break;
					}
					default:
						printf("请输入一个正常的数！！！(╯°口°)╯(┴—┴");
				}
				break;
			}
			case 'D':
			{
				switch (ch[1])
				{
					case 'B':
					{	
						num=0;
						printf("请输入一个十进制数：");
						scanf("%d",&Dnum);
						hc=Dnum;
						while(Dnum>0)
						{
							Bsnum[num]=Dnum%2;
							num++;
							Dnum=Dnum/2;
						}
						printf("%dD的二进制数是：",hc);
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
						printf("请输入一个十进制数：");
						scanf("%d",&Dnum);
						printf("%dD的八进制是：%o",Dnum,Dnum);
						break;
					}
					case 'H':
					{
						Dnum=0;
						printf("请输入一个十进制数：");
						scanf("%d",&Dnum);
						printf("%dD的十六进制是：%x",Dnum,Dnum);
						break;
					}
					default:
						printf("请输入一个正常的数！！！(╯°口°)╯(┴—┴");
				}
				break;
			}
			case 'Q':
			{
				switch (ch[1])
				{
					case 'D':
					{
						printf("请输入一个八进制数：");
						scanf("%o",&Qnum);
						printf("%oQ的十进制是：%d",Qnum,Qnum);
						break;
					}
					case 'B':
					{
						printf("暂未开放，敬请期待。\n");
						break;
					}
					case 'H':
					{
						printf("请输入一个八进制数：");
						scanf("%o",&Qnum);
						printf("%oQ的十六进制是：%x",Qnum,Qnum);
						break;
					}
					default:
						printf("请输入一个正常的数！！！(╯°口°)╯(┴—┴");
				}
				break;
			}
			case 'H':
			{
				switch (ch[1])
				{
					case 'D':
					{
						printf("请输入一个十六进制数：");
						scanf("%x",&Hnum);
						printf("%xH的十进制是：%d",Hnum,Hnum);
						break;
					}
					case 'Q':
					{
						printf("请输入一个十六进制数：");
						scanf("%x",&Hnum);
						printf("%xH的八进制是：%o",Hnum,Hnum);
						break;
					}
					case 'B':
					{
						printf("暂未开放，敬请期待。\n");
						break;
					}
					default:
						printf("请输入一个正常的数！！！(╯°口°)╯(┴—┴");
				}
				break;
			}
			default:
				printf("请输入一个正常的数！！！(╯°口°)╯(┴—┴");
		}
		printf("\n如果继续请输入‘y’，结束就输入‘n’。（默认为‘y’）");
		scanf("%1s",&yon);
	}
	return 0;
}
