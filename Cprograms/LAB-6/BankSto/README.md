# Konta bankowe
Program do prostej symulacji bankomatu. Użytkownik wybiera jedną z **czterech operacji** (1 - Wpłata pieniędzy, 2 - Wypłata pieniędzy, 3 - Drukowanie salda, 0 - Wylogowanie się), a następnie wybiera **konto** w ramach którego zostanie wykonana operacja. Program działa tak długo, aż użytkownik się nie wyloguje.

## Sposób kompilacji:
1. Uruchom windows Powershell
2. Korzystając z komendy <cd .\nazwafolderu1\nazwafolder2\...\folder_z_plikiem>
dojdź do folderu, gdzie znajduje się plik main.c (komendy zatwierdza się klawiszem **Enter**)
3. Użyj komendy <gcc -Wall - Wextra -o Program.exe main.c>, by skompilowac Program
4. Uruchom program używając komendy <.\Program.exe>
5. Enjoy

## Sposób użytkowania:
1. Wpisz liczbę (1,2,3 lub 0), a następnie kliknij **Enter**, by wybrać pożądaną operację
2. Po wybraniu opcji 3 należy wybrać konto (1-100), kliknąć **Enter**, a program wydrukuje aktualne saldo wybranego konta
3. Po wybraniu opcji 1 lub 2, należy wybrać konto (tak samo jak w poprzednim kroku), a następnie wybrać kwotę pieniędzy, którą chcemy wpłacić/wypłacić (w przypadku wypłaty, program sprawdza czy kwota do wyciągnięcia nie jest większa od aktualnego salda)
4. Kiedy już wykonasz wszystkie pożądane operacje to wpisz 0 i kliknij **Enter** na ekranie wyboru operacji (z kroku 1.), by zakończyć działanie programu

## Przykłady danych:
> Wejście:
> 1
> 10
> 150
> 2
> 10
> 50
> 3
> 10
> 0
> Wyjście: 
> Wybierz opcje! (skopiuj z programu)
> konto
> poprawnie wpłacono
> wybierz
> konto
> wypłacono
> 3
> konto
> saldo:
> wybierz
> dziekujemy za korzystanie
---
> Wejście:
> 1
> 10
> 75
> 1
> 11
> 25
> 2
> 12
> 15
> 3
> 10
> 0
> Wyjście:
> Wybierz
> konto
> wpłacono poprawnie
> wybierz
> konto
> wpłacono
> wybierz
> konto
> blad - za mala kwota
> wybierz
> konto
> wyswietlono saldo
> wybierz
> dziekujemy za korzystanie