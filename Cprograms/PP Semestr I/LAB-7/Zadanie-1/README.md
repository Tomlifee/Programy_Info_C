# Wykrywanie palindromów
Program do wykrywania palindromów. Użytkownik wpisuje wyraz lub zdanie, a program sprawdza czy jest on palindromem. Palindrom to wyraz/zdanie, które przeczytane "od tyłu" jest takie same jak czytając normalnie.

## Sposób kompilacji:
1. Uruchom windows Powershell
2. Korzystając z komendy <cd .\nazwafolderu1\nazwafolder2\...\folder_z_plikiem>
dojdź do folderu, gdzie znajduje się plik main.c (komendy zatwierdza się klawiszem **Enter**)
3. Użyj komendy <gcc -Wall - Wextra -o Program.exe main.c>, by skompilowac Program
4. Uruchom program używając komendy <.\Program.exe>
5. Enjoy

## Sposób użytkowania:
1. Wpisz dowolny ciąg znaków o maksymalnej długości 100 (program traktuje **Spację** jak zwykły znak), a następnie wciśnij **Enter**. Wielkość liter nie ma znaczenia
2. Program wyświeli "Jest palindromem" lub "Nie jest palindromem"

## Przykłady danych:
> Wejście:

> Ikar łapał raki

> Wyjście:

> Jest palindromem
---
> Wejście:

> Drapie gepard

> Wyjście:

> Nie jest palindromem