# Transpozycja macierzy
Program do transpozycji macierzy. Użytkownik wpisuje **wiersze** oraz **kolumny**, po czym wypisuje wartości elementów macierzy. Program następnie dokonuje **transpozycji macierzy**, czyli zamiany wierszy z kolumnami.

## Sposób kompilacji:
1. Uruchom windows Powershell
2. Korzystając z komendy <cd .\nazwafolderu1\nazwafolder2\...\folder_z_plikiem>
dojdź do folderu, gdzie znajduje się plik main.c (komendy zatwierdza się klawiszem **Enter**)
3. Użyj komendy <gcc -Wall - Wextra -o Program.exe main.c>, by skompilowac Program
4. Uruchom program używając komendy <.\Program.exe>
5. Enjoy

## Sposób użytkowania:
1. Wpisz dwie liczby całkowite, większe od 1, oddzielone spacją (pierwsza będzie liczbą wierszy, a druga kolumn), a następnie kliknij **Enter**
2. Wpisz wszystkie wartości danego wiersza (liczby całkowite), kliknij **Enter** i wypisz wartości wiersza następnego (można też wszystkie wartości wypisać w jednym wierszu). Wpisywane wartości MUSZĄ być oddzielone spacją
3. Program wykona transpozycję macierzy i wyświetli ją użytkownikowi

## Przykłady danych:
> Wejście:

> 3 3 

> 1 2 3

> 4 5 6

> 7 8 9

> Wyjście:

> [1] [4] [7] 

> [2] [5] [8]

> [3] [6] [9]
---
> Wejście:

> 2 4 

> 1 2 3 4 5 6 7 8

> Wyjście:

> [1] [5] 

> [2] [6]

> [3] [7]

> [4] [8]