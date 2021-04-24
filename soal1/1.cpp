#include <cstdio>


int main()
{
	int belanja, voucher, diskon;
	
	printf("masukkan jumlah belanjaan : "); scanf("%d", &belanja);
	printf("Pilih voucher (1-2): \n");
	printf("1. DumbWaysJos - potongan 21,1%, minimal uang belanja 50000, Maksimal diskon 20000 \n");
	printf("2. DumbWaysMantap - potongan 30%, minimal uang belanja 80000, maksimal diskon 40000 \n");
	scanf("%d", &voucher);
	
	
	if(belanja >= 80000)
	{
		if(voucher == 1)
		{
			diskon = belanja * 0.3;
			if(diskon >= 40000)
			{
				diskon = 40000;
			}
		}
		else
		{
			diskon = belanja * 0.211;
			if(diskon >= 20000)
			{
				diskon = 20000;
			}
		}
	}
	else if (belanja >= 50000)
	{ 
		if(voucher == 1)
		{
			diskon = belanja * 0.211;
			if(diskon >= 20000)
			{
				diskon = 20000;
			}
		}
		else if(voucher == 2)
		{
			printf("\n jumlah belanjaan tidak mencukupi \n");
		}
	}
	else
	{
		printf("\n jumlah belanjaan tidak mencukupi \n");
	}
	printf("diskon = %d \n", diskon);
	belanja = belanja - diskon;
	printf("total yang harus dibayarkan:  %d", belanja);
}
