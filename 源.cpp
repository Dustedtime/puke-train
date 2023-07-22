#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	srand((unsigned)time(NULL));
	int n, m, i, j;
	int a[52] = { 0 };
	int b[52] = { 0 };
	int c[52] = { 0 };
	int d[52] = { 0 };
	int f[14] = { 0 };
	int a2, b2, c2, d2;
	int p = 0;
	a2 = b2 = c2 = d2 = 0;
	char o;
	for (n = 0, i = 0; n <= 12; n++)
	{
		for (m = n; m <= n; m++)
		{
			a[m] = rand() % 13 + 1;
			if (m >= 1)
			{
				i = 0;
				for (j = 0; j < m; j++)
				{
					if (a[m] == a[j])
						i++;
					if (a[m] == b[j])
						i++;
					if (a[m] == c[j])
						i++;
					if (a[m] == d[j])
						i++;
				}
			}
			if (i >= 4)
				m--;
		}
		for (m = n; m <= n; m++)
		{
			b[m] = rand() % 13 + 1;
			i = 0;
			if (m >= 1)
			{
				for (j = 0; j < m; j++)
				{
					if (b[m] == a[j])
						i++;
					if (b[m] == b[j])
						i++;
					if (b[m] == c[j])
						i++;
					if (b[m] == d[j])
						i++;
				}
			}
			if (a[m] == b[m])
				i++;
			if (i >= 4)
				m--;
		}
		for (m = n; m <= n; m++)
		{
			c[m] = rand() % 13 + 1;
			i = 0;
			if (m >= 1)
			{
				for (j = 0; j < m; j++)
				{
					if (c[m] == a[j])
						i++;
					if (c[m] == b[j])
						i++;
					if (c[m] == c[j])
						i++;
					if (c[m] == d[j])
						i++;
				}
			}
			if (a[m] == c[m])
				i++;
			if (b[m] == c[m])
				i++;
			if (i >= 4)
				m--;
		}
		for (m = n; m <= n; m++)
		{
			d[m] = rand() % 13 + 1;
			i = 0;
			if (m >= 1)
			{
				for (j = 0; j < m; j++)
				{
					if (d[m] == a[j])
						i++;
					if (d[m] == b[j])
						i++;
					if (d[m] == c[j])
						i++;
					if (d[m] == d[j])
						i++;
				}
			}
			if (a[m] == d[m])
				i++;
			if (b[m] == d[m])
				i++;
			if (c[m] == d[m])
				i++;
			if (i >= 4)
				m--;
		}
	}
	i = rand() % 4 + 1;
	printf("你是%d号选手\n", i);
	printf("按下回车键开始游戏");
	o = getchar();
	int lun = 1;
	int a1 = 0;
	int mm = 0;
	int b1 = 0;
	int c1 = 0;
	int d1 = 0;
	int na, nb, nc, nd, nf;
	for (;a[51] == 0 || b[51] == 0 || c[51] == 0 || d[51] == 0;lun++)
	{
		printf("第%d轮开始：", lun);
		for (na = 0; a[na] != 0;)
			na++;
		for (nb = 0; b[nb] != 0;)
			nb++;
		for (nc = 0; c[nc] != 0;)
			nc++;
		for (nd = 0; d[nd] != 0;)
			nd++;
		printf("1号手牌数为%d\n",na);
		printf("2号手牌数为%d\n",nb);
		printf("3号手牌数为%d\n",nc);
		printf("4号手牌数为%d\n",nd);
		printf("你的手牌是：");
		if (i == 1)
			for (n = 0; n <= na - 1; n++)
			{
				if (a[n] == 1)
					printf("A  ");
				else if (a[n] == 11)
					printf("J  ");
				else if (a[n] == 12)
					printf("Q  ");
				else if (a[n] == 13)
					printf("K  ");
				else
					printf("%d  ", a[n]);
			}
		if (i == 2)
			for (n = 0; n <= nb - 1; n++)
			{
				if (b[n] == 1)
					printf("A  ");
				else if (b[n] == 11)
					printf("J  ");
				else if (b[n] == 12)
					printf("Q  ");
				else if (b[n] == 13)
					printf("K  ");
				else
					printf("%d  ", b[n]);
			}
		if (i == 3)
			for (n = 0; n <= nc - 1; n++)
			{
				if (c[n] == 1)
					printf("A  ");
				else if (c[n] == 11)
					printf("J  ");
				else if (c[n] == 12)
					printf("Q  ");
				else if (c[n] == 13)
					printf("K  ");
				else
					printf("%d  ", c[n]);
			}
		if (i == 4)
			for (n = 0; n <= nd - 1; n++)
			{
				if (d[n] == 1)
					printf("A  ");
				else if (d[n] == 11)
					printf("J  ");
				else if (d[n] == 12)
					printf("Q  ");
				else if (d[n] == 13)
					printf("K  ");
				else
					printf("%d  ", d[n]);
			}
		printf("\n");
		for (;a[0] != 0;)
		{
			if (i == 1)
				printf("你出牌");
			else
				printf("1号出牌");
			o = getchar();
			for (nf = 0; f[nf] != 0;)
				nf++;
			f[nf] = a[0];
			for (nf = 0; f[nf] != 0; nf++)
			{
				if (f[nf] == 1)
					printf("     A\n");
				else if (f[nf] == 11)
					printf("     J\n");
				else if (f[nf] == 12)
					printf("     Q\n");
				else if (f[nf] == 13)
					printf("     K\n");
				else
					printf("     %d\n", f[nf]);
			}
			for (na = 0; a[na] != 0; na++)
				a[na] = a[na + 1];
			j = 0;
			for (m = 0; m < nf - 1; m++)
			{
				if (f[m] == f[nf - 1])
				{
					mm = m;
					if (i == 1)
						printf("你打出相同牌，可吃子");
					else
						printf("1号打出相同牌，可吃子");
					o = getchar();
					for (na--; m <= nf - 1 && na <= 51 && na >= 0; m++, na++)
					{
						a2 = f[m];
						a[na] = a2;
					}
					for (nf = 0; nf < mm; nf++)
					{
						if (f[nf] == 1)
							printf("     A\n");
						else if (f[nf] == 11)
							printf("     J\n");
						else if (f[nf] == 12)
							printf("     Q\n");
						else if (f[nf] == 13)
							printf("     K\n");
						else
							printf("     %d\n", f[nf]);
					}
					for (; mm <= 13; mm++)
						f[mm] = 0;
					j++;
					printf("1号手牌数为%d", na);
					break;
				}
			}
			printf("\n");
			if (j == 1)
				continue;
			else
				break;
		}
		if (a[0] == 0 && a1 == 0)
		{
			if (i == 1)
				printf("你输了");
			else
				printf("1号出局");
			p++;
			a1++;
			printf("\n");
		}
		if (p == 3)
			break;
		for (; b[0] != 0;)
		{
			if (i == 2)
				printf("你出牌");
			else
				printf("2号出牌");
			o = getchar();
			for (nf = 0; f[nf] != 0;)
				nf++;
			f[nf] = b[0];
			for (nf = 0; f[nf] != 0; nf++)
			{
				if (f[nf] == 1)
					printf("     A\n");
				else if (f[nf] == 11)
					printf("     J\n");
				else if (f[nf] == 12)
					printf("     Q\n");
				else if (f[nf] == 13)
					printf("     K\n");
				else
					printf("     %d\n", f[nf]);
			}
			for (nb = 0; b[nb] != 0; nb++)
				b[nb] = b[nb + 1];
			j = 0;
			for (m = 0; m < nf - 1; m++)
			{
				if (f[m] == f[nf - 1])
				{
					mm = m;
					if (i == 2)
						printf("你打出相同牌，可吃子");
					else
						printf("2号打出相同牌，可吃子");
					o = getchar();
					for (nb--; m <= nf - 1 && nb <= 51 && nb >=0; m++, nb++)
					{
						b2 = f[m];
						b[nb] = b2;
					}
					for (nf = 0; nf < mm; nf++)
					{
						if (f[nf] == 1)
							printf("     A\n");
						else if (f[nf] == 11)
							printf("     J\n");
						else if (f[nf] == 12)
							printf("     Q\n");
						else if (f[nf] == 13)
							printf("     K\n");
						else
							printf("     %d\n", f[nf]);
					}
					for (; mm <= 13; mm++)
						f[mm] = 0;
					j++;
					printf("2号手牌数为%d", nb);
					break;
				}
			}
			printf("\n");
			if (j == 1)
				continue;
			else
				break;
		}
		if (b[0] == 0 && b1 == 0)
		{
			if (i == 2)
				printf("你输了");
			else
				printf("2号出局");
			b1++;
			p++;
			printf("\n");
		}
		if (p == 3)
			break;
		for (; c[0] != 0;)
		{
			if (i == 3)
				printf("你出牌");
			else
				printf("3号出牌");
			o = getchar();
			for (nf = 0; f[nf] != 0;)
				nf++;
			f[nf] = c[0];
			for (nf = 0; f[nf] != 0; nf++)
			{
				if (f[nf] == 1)
					printf("     A\n");
				else if (f[nf] == 11)
					printf("     J\n");
				else if (f[nf] == 12)
					printf("     Q\n");
				else if (f[nf] == 13)
					printf("     K\n");
				else
					printf("     %d\n", f[nf]);
			}
			for (nc = 0; c[nc] != 0; nc++)
				c[nc] = c[nc + 1];
			j = 0;
			for (m = 0; m < nf - 1; m++)
			{
				if (f[m] == f[nf - 1])
				{
					mm = m;
					if (i == 3)
						printf("你打出相同牌，可吃子");
					else
						printf("3号打出相同牌，可吃子");
					o = getchar();
					for (nc--; m <= nf - 1 && nc <= 51 && nc >=0; m++, nc++)
					{
						c2 = f[m];
						c[nc] = c2;
					}
					for (nf = 0; nf < mm; nf++)
					{
						if (f[nf] == 1)
							printf("     A\n");
						else if (f[nf] == 11)
							printf("     J\n");
						else if (f[nf] == 12)
							printf("     Q\n");
						else if (f[nf] == 13)
							printf("     K\n");
						else
							printf("     %d\n", f[nf]);
					}
					for (; mm <= 13; mm++)
						f[mm] = 0;
					j++;
					printf("3号手牌数为%d", nc);
					break;
				}
			}
			printf("\n");
			if (j == 1)
				continue;
			else
				break;
		}
		if (c[0] == 0 && c1 == 0)
		{
			if (i == 3)
				printf("你输了");
			else
				printf("3号出局");
			c1++;
			p++;
			printf("\n");
		}
		if (p == 3)
			break;
		for (; d[0] != 0;)
		{
			if (i == 4)
				printf("你出牌");
			else
				printf("4号出牌");
			o = getchar();
			for (nf = 0; f[nf] != 0;)
				nf++;
			f[nf] = d[0];
			for (nf = 0; f[nf] != 0; nf++)
			{
				if (f[nf] == 1)
					printf("     A\n");
				else if (f[nf] == 11)
					printf("     J\n");
				else if (f[nf] == 12)
					printf("     Q\n");
				else if (f[nf] == 13)
					printf("     K\n");
				else
					printf("     %d\n", f[nf]);
			}
			for (nd = 0; d[nd] != 0; nd++)
				d[nd] = d[nd + 1];
			j = 0;
			for (m = 0; m < nf - 1; m++)
			{
				if (f[m] == f[nf - 1])
				{
					mm = m;
					if (i == 4)
						printf("你打出相同牌，可吃子");
					else
						printf("4号打出相同牌，可吃子");
					o = getchar();
					for (nd--; m <= nf - 1
						
						&& nd <=51 && nd >= 0; m++, nd++)
					{
						d2 = f[m];
						d[nd] = d2;
					}
					for (nf = 0; nf < mm; nf++)
					{
						if (f[nf] == 1)
							printf("     A\n");
						else if (f[nf] == 11)
							printf("     J\n");
						else if (f[nf] == 12)
							printf("     Q\n");
						else if (f[nf] == 13)
							printf("     K\n");
						else
							printf("     %d\n", f[nf]);
					}
					for (; mm <= 13; mm++)
						f[mm] = 0;
					j++;
					printf("4号手牌数为%d", nd);
					break;
				}
			}
			printf("\n");
			if (j == 1)
				continue;
			else
				break;
		}
		if (d[0] == 0 && d1 == 0)
		{
			if (i == 4)
				printf("你输了");
			else
				printf("4号出局");
			d1++;
			p++;
			printf("\n");
		}
		if (p == 3)
			break;
	}
	if (a[0] != 0)
	{
		if (i == 1)
			printf("恭喜你赢了！！！");
		else
			printf("恭喜1号赢了！");
	}
	if (b[0] != 0)
	{
		if (i == 2)
			printf("恭喜你赢了！！！");
		else
			printf("恭喜2号赢了！");
	}
	if (c[0] != 0)
	{
		if (i == 3)
			printf("恭喜你赢了！！！");
		else
			printf("恭喜3号赢了！");
	}
	if (d[0] != 0)
	{
		if (i == 4)
			printf("恭喜你赢了！！！");
		else
			printf("恭喜4号赢了！");
	}
	return 0;
}