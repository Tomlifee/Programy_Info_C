# Szyfr cezara
Program do zliczania i kategoryzowania wpisanych znaków. Użytkownik wpisuje wiadomość, a program analizuje znajdujące się w niej znaki. Dzieli je na małe i duże litery, cyfry oraz inne znaki i wypisuje ile się ich znalazło w każdej z tych kategorii.

## Sposób kompilacji:
1. Uruchom windows Powershell
2. Korzystając z komendy <cd .\nazwafolderu1\nazwafolder2\...\folder_z_plikiem>
dojdź do folderu, gdzie znajduje się plik src.c
3. Użyj komendy <gcc -Wall - Wextra -o Program.exe src.c>, by skompilowac Program
4. Uruchom program używając komendy <.\Program.exe>
5. Enjoy

## Sposób użytkowania:
1. Wpisz wiadomość (ciąg znaków), który chcesz, żeby program przeanalizował
2. Program policzy ile w wiadomości się znajdowało: **małych** i **dużych liter**, **cyfr** oraz **innych znaków** i wypisze to użytkownikowi

## Przykłady danych:
> Wejście:Witaj, hejka!
> Wyjście:
>
> Big letters - 1 Small letters - 9 Numbers - 0 Other characters - 3
---
> Wejście:Czy 1 mniejsze jest od 12?
> Wyjście:
> 
> Big letters - 1 Small letters - 16 Numbers - 3 Other characters - 6