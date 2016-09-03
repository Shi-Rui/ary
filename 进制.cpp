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
		printf("这是由石睿开发的进制转化的程序，欢迎使用。\n");
		printf("二进制由B代表，八进制由Q代表，十进制由D代表，十六进制由H代表。\n");
		printf("请键入相应的代码，如十进制转二进制的代码是：DB\n");
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
						printf("请输入一个二进制数：");
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
						printf("暂未开放，敬请期待。\n");
						break;
					}
					case 'H':
					{
						printf("暂未开放，敬请期待。\n");
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
						printf("请输入一个十进制数：");
						scanf("%d",&Dnum);
						hc=Dnum;
						while(Dnum>0)
						{
							Bsnum[num]=Dnum%2;
							num++;
							Dnum=Dnum/2;
						}
						printf("%d的二进制数是：",hc);
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
						printf("暂未开放，敬请期待。\n");
						break;
					}
					case 'H':
					{
						printf("暂未开放，敬请期待。\n");
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
						printf("暂未开放，敬请期待。\n");
						break;
					}
					case 'B':
					{
						printf("暂未开放，敬请期待。\n");
						break;
					}
					case 'H':
					{
						printf("暂未开放，敬请期待。\n");
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
						printf("暂未开放，敬请期待。\n");
						break;
					}
					case 'Q':
					{
						printf("暂未开放，敬请期待。\n");
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
				default:
					printf("请输入一个正常的数！！！(╯°口°)╯(┴—┴");
				break;
			}
		}
		printf("\n如果继续请输入‘y’，结束就输入‘n’。（默认为‘y’）\n");
		scanf("%1s",&yon);
	}
	return 0;
}
