#include <stdio.h>
#include <math.h>
int main()
{
	int d,m;
	printf("Zadaj mesiac: ");
	scanf("%d",&m);
	printf("Zadaj den: ");
	scanf("%d",&d);
	switch(m){
		case 12:
			if (d>=1 and d<=21)
			{
			printf("Strelec/Sagittarius");
			} 
			else if (d>=22 and d<=31)
			{
			printf("Kozorozec/Capricorn");
			} 
			else
			{
			printf("Chyba!");
			}
			break;
		case 1:
			if (d>=20 and d<=31)
			{
			printf("Vodnar/Aquarius");
			} 
			else if (d>=1 and d<=19)
		 	{
			printf("Kozorozec/Capricorn");
			} 
			else
			{
			printf("Chyba!");
			}
			break;
		case 2:
			if (d>=1 and d<=18)
			{
			printf("Vodnar/Aquarius");
			} 
			else if (d>=19 and d<=30)
			{
			printf("Ryby/Pisces");
			} 
			else
			{
			printf("Chyba!");
			}
			break;
		case 3:
			if (d>=1 and d<=20)
			{
			printf("Ryby/Pisces");
			} 
			else if (d>=21 and d<=31)
			{
			printf("Baran/Aries");
			} 
			else
			{
			printf("Chyba!");
			}
			break;
		case 4:
			if (d>=1 and d<=19)
			{
			printf("Baran/Aries");
			} 
			else if (d>=20 and d<=30)
			{
			printf("Byk/Taurus");
			} 
			else
			{
			printf("Chyba!");
			}
			break;
		case 5:
			if (d>=1 and d<=20)
			{
			printf("Byk/Taurus");
			} 
			else if (d>=21 and d<=31)
			{
			printf("Blizenci/Gemini");
			} 
			else
			{
			printf("Chyba!");
			}
			break;
		case 6:
			if (d>=1 and d<=20)
			{
			printf("Blizenci/Gemini");
			} 
			else if (d>=21 and d<=30)
			{
			printf("Rak/Cancer");
			} 
			else
			{
			printf("Chyba!");
			}
			break;
		case 7:
			if (d>=1 and d<=22)
			{
			printf("Rak/Cancer");
			} 
			else if (d>=23 and d<=31)
			{
			printf("Lev/Leo");
			} 
			else
			{
			printf("Chyba!");
			}
			break;
		case 8:
			if (d>=1 and d<=22)
			{
			printf("Lev/Leo");
			} 
			else if (d>=23 and d<=30)
			{
			printf("Panna/Virgo");
			} 
			else
			{
			printf("Chyba!");
			}
			break;
		case 9:
			if (d>=1 and d<=22)
			{
			printf("Panna/Virgo");
			} 
			else if (d>=23 and d<=31)
			{
			printf("Vahy/Libra");
			} 
			else
			{
			printf("Chyba!");
			}
			break;
		case 10:
			if (d>=1 and d<=22)
			{
			printf("Vahy/Libra");
			} 
			else if (d>=23 and d<=30)
			{
			printf("Skorpion/Scorpio");
			} 
			else
			{
			printf("Chyba!");
			}
			break;
		case 11:
			if (d>=1 and d<=21)
			{
			printf("Skorpion/Scorpio");
			} 
			else if (d>=22 and d<=31)
			{
			printf("Strelec/Sagittarius");
			} 
			else
			{
			printf("Chyba!");
			}
			break;
		default: printf("Zly vstup!");
		break;
	}
}
