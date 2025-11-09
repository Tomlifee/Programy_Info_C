# Szyfr cezara
Program do szyfrowania wiadomości. Użytkownik wpisuje liczbę (od 0 do 25), która reprezentuje przesunięcie alfabetu o daną ilość w prawo oraz wiadomość, którą chce zaszyfrować. Po wpisaniu tych danych klika **ENTER**, a program się wykonuje. 

## Sposób kompilacji:
1. Uruchom windows Powershell
2. Korzystając z komendy <cd .\nazwafolderu1\nazwafolder2\...\folder_z_plikiem>
dojdź do folderu, gdzie znajduje się plik src.c
3. Użyj komendy <gcc -Wall - Wextra -o Program.exe src.c>, by skompilowac Program
4. Uruchom program używając komendy <.\Program.exe>
5. Enjoy

## Sposób użytkowania:
1. Wpisz liczbę przesunięcia wiadomości (klucz), a tuż po tym wiadomość do zaszyfrowania i dopiero po tym kliknij **ENTER**
2. Jeśli wartość klucza nie znajduje się w zakresie od 0 do 25 to program zakończy działanie błędem
3. Jeśli użytkownik poprawnie wprowadził dane to program wypisze: **Szyfr:** i zaszyfrowaną wiadomość użytkownika, a w następnej linii: **Klucz:** oraz wybrany przez użytkownika klucz.

## Przykłady danych:
> Wejście: 2 AbcD; 
> Wyjście: 
> Szyfr:  CdeF 
> Klucz: 2
---
> Wejście: 20Heja kocie!1
> Wyjście:
> Szyfr: Bydu eiwcy!1
> Klucz: 20

  
