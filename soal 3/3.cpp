#include <cstdio>

int main()
{
	int tengah, angka;
	
	printf("masukkan jumlah angka: "); scanf("%d", &angka);
	
	tengah = (angka/2)+1;
	for(int i=1; i<=angka; i++)
	{
		if((i==tengah))
		{
			for (int j=1; j<=angka; j++)
			{
				printf(" * ");
			}
		}
		else if((i==1) || (i==angka))
		{			
			for(int l=1; l<=angka; l++)
			{
				if((l==1) || (l==tengah) || (l==angka))
				{
					printf(" * ");
				}
				else
				{
					printf(" = ");
				} 
			}
		}
		else
		{
			for (int z=1; z<=angka; z++)
			{
				if(z==tengah)
				{
					printf(" * ");
				}
				else
				{
					printf(" = ");
				}
			}
		}
		printf("\n");
	}
}
