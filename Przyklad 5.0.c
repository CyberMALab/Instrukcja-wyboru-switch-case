#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int wybor;
	for(;;)/* pętla for bez wyrażeń – nieskończona */
	{
		printf("\nMENU\n");
		printf("1. Powiedz czesc!\n");
		printf("2. Opowiedz zart.\n");
		printf("3. Pozegnaj sie.\n");
		printf("Wybierz opcje: ");
		fflush(stdin); /* czyszczenie bufora stdin */
		scanf(" %d",&wybor);
		switch(wybor)
		{
		  case 1:
			{
			  printf("Czesc!\n");
			}break;
		  case 2:
			{
			  printf("-Czym rozni sie doswiadczony informatyk od poczatkujacego?\n");
			  printf("-Poczatkujacy uwaza, ze 1KB to 1000B, a doswoadczony jest pewnien");
			  printf(", ze 1km to 1024m.\n");
			}break;
		  case 3:
			{
			  printf("Do zobaczenia!\n");
			  exit(0); /* Zakończenie działania programu */
			}break;
		  default: 
			{
			  printf("Nie ma takiej opcji\n");
			}break;
		}	
	}

	return 0;
}


