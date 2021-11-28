# Instrukcja wyboru switch case.

## Menu wyboru _switch-case-break_

Instrukcja wyboru w programowaniu umożliwia wybór instrukcji do wykonania spośród wielu dostępnych opcji. Bardzo dobrze sprawdza się przy tworzeniu menu. W języku C składa się ona z instrukcji switch(argument)oraz opcji wyboru case wartość\_argumentu:_._ W praktyce najczęściej wykorzystywaną opcją jest używanie instrukcji wyboru za pomocą instrukcji switch case break.Takie użycie jest bardzo intuicyjne i porównywalne z użyciem instrukcji warunkowej sprawdzającej równość, a default staje się odpowiednikiem frazy else.

_Schemat (5.0) instrukcja wielokrotnego wyboru swich case break_

![Schemat1](https://user-images.githubusercontent.com/71324202/143785129-e9cbc369-dca7-419a-9da7-f4261d58f843.png)

_Przykład (5.0) Menu wyboru zbudowane za pomocą switch case break._

```
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


```

_Wynik działania programu:_

>MENU
>
>1. Powiedz czesc!
>
>2. Opowiedz zart.
>
>3. Pozegnaj sie.
>
>Wybierz opcje: 1
>
>Czesc!
>
>MENU
>
>1. Powiedz czesc!
>
>2. Opowiedz zart.
>
>3. Pozegnaj sie.
>
>Wybierz opcje: 2
>
>-Czym rozni sie doswiadczony informatyk od poczatkujacego?
>
>-Poczatkujacy uwaza, ze 1KB to 1000B, a doswoadczony jest pewnien, ze 1km to 1024m.
>
>MENU
>
>1. Powiedz czesc!
>
>2. Opowiedz zart.
>
>3. Pozegnaj sie.
>
>Wybierz opcje: 3
>
>Do zobaczenia!

## Więcej o switch-case

Instrukcji switch case można jedna używać bez instrukcji przerwania. Wtedy jej działanie przełącza program do odpowiedniego miejsca w kodzie i następnie wykonuje już wszystkie poniższe instrukcje nie zwracając uwagi, w którym przypadku (_case_) się znajduje. Najłatwiej to zrozumieć poprzez analizę schematów (5.1 i 5.2) znajdujących się poniżej.

_Schemat (5.1) konstrukcja switch case bez break_

![Schemat2](https://user-images.githubusercontent.com/71324202/143785138-5385ce36-9450-410b-b754-6cc07647195e.png)

_Schemat (5.2) bardziej zaawansowane użycie instrukcji switch case z break i bez._

![Schemat3](https://user-images.githubusercontent.com/71324202/143785139-24267703-57fc-40fd-9b2d-063517766286.png)


Na początku zaleca się jednak korzystać z instrukcji _switch case break_, ale niedokładnością w omówieniu tematu byłoby nieporuszenie potencjału jaki kryje w sobie instrukcja wielokrotnego wyboru.

## Zadania do samodzielnego wykonania:

1. Stwórz kalkulator, w którym użytkownik podaje 2 liczby, następnie podaje znak działania jakie chce wykonać (+, -, \*, /, %). Wykorzystaj instrukcję _switch case_. Program wykonuje działanie i wyświetla wynik.
2. Stwórz kalkulator 2 liczb z menu. W opcjach menu zawrzyj: zmianę pierwszej liczby, zmianę drugiej liczby, wybór działania do wykonania (+, -, \*, /, %) oraz zakończenie programu. Po każdorazowej zmianie danych program oblicza zadane działanie i wyświetla je powyżej menu, oraz daje możliwość dalszego korzystania z programu.
3. Przy pomocy instrukcji _switch case_ stwórz program, który wyświetla uprawnienia członków królestwa. Dodatkowo każdy z członków królestwa może również wykonywać rzeczy przeznaczone dla niższego rangą mieszkańca.
    1. Poddany - może czcić Króla,
    2. Giermek - może wchodzić na dziedziniec zamkowy codziennie,
    3. Rycerz - może wchodzić do zamku codziennie oraz rekrutować giermków,
    4. Mag - może rozmawiać z Królem,
    5. Królowa - może rozkazywać Królowi

_Przykład działania_
>Wybierz klasę społeczną: R
>
>Rycerz może: czcic Króla, wchodzić na dziedziniec zamkowy codziennie, wchodzic do zamku codziennie oraz rekrutowac giermkow.

***
[Poprzednia część](https://github.com/CyberMALab/Petle.git) | [Spis treści](https://github.com/CyberMALab/Wprowadzenie-do-programowania-w-j-zyku-ANSI-C.git) | [Następna część](https://github.com/CyberMALab/Wiecej-o-typach-zmiennych-i-nie-tylko.git)
***
&copy; Cyberspace Modelling and Analysis Laboratory
