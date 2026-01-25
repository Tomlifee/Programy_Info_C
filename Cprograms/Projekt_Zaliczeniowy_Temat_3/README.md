# Magazyn sklepu - inventory
Program do obsługi katalogu i stanu produktów w małym sklepie oferującym do 400 produktów. Program pozwala na wprowadzanie iusuwanie produktów z unikalnym kodem do identyfikacji; mają również one przypisaną cenę, nazwę i zmienną ilość. Dodatkowo istnieją dwie funkcje tworzenia raportów. Pierwsza generuję listę produktów, których ilość sztuk jest równa lub niższa liczbie wybranej przez użytkownika. Druga znajduje produkt/y, które mają najniższą i najwyższą cenę pośród katalogu

## Sposób kompilacji:
1. Uruchom windows Powershell
2. Korzystając z komendy <cd .\nazwafolderu1\nazwafolder2\...\folder_z_plikiem>
dojdź do folderu, gdzie znajduje się plik main.c (komendy zatwierdza się klawiszem **Enter**)
3. Użyj komendy <gcc -Wall - Wextra -o Program.exe main.c>, by skompilowac Program
4. Uruchom program używając komendy <.\Program.exe>
5. Enjoy

## Sposób użytkowania:
1. Wpisz liczbę od 1 do 7 i wciśnij **Enter**, żeby zatwierdzić: aktywuje to jedną z funkcji programu. Wybranie liczby 10 lub wyższej skutkuje wyłączeniem się aplikacji
2. [1] - Pozwala na dodanie nowego produktu. Produkt musi mieć unikalny kod. Wpisanie błędnych danych na którymkolwiek etapie wprowadzania produku skutuje powrotem do wyboru opcji bez zapisania produktu
3. [2] - Pozwala na usunięcie produktu wpisując jego kod (jeśli nie pamiętasz kodu to możesz użyć opcji 6 - patrz poniżej)
4. [3] - Dodaje nowe sztuki do ilości danego produktu. Nie przyjmuje liczb negatywnych
5. [4] - Obniża ilość sztuk wybranego produktu. Nie przyjmuje liczb negatywnych oraz nie można zejść z ilością sztuk poniżej 0
6. [5] - Pozwala znaleźć produkt po jego unikalnym kodzie. Wypisuje nazwę, kod, ilość oraz cenę
7. [6] - Tworzy raport wszystkich produktów, których ilość jest równa lub niższa od liczby wpisanej przez użytkownika (można użyć, by wypisał wszystkie produkty wpisując bardzo dużą liczbę)
8. [7] - Tworzy raport produktów z najniższą oraz największą ceną. W przypadku kiedy kilka produktów ma tą samą najniższą/wyższą cenę to wypisuje je wszystkie
9. Poszczególnych funkcji programu można używać wielokrotnie w dowolnej koleności. Po wykonaniu pożądanych działań aplikację można wyłączyć wpisują wartość 10 lub więcej w menu 

## Przykłady danych 1:
> Wejście:

 1

 0

 Chocko

 12

 2.50

---

 5

 0

---

 2

 0

---

 5

 0

 10

> Wyjście:

Menedzer sklepu v1.0

[1] - Dodaj nowy produkt do bazy danych

[2] - Usun produkt z bazy danych       

[3] - Dodaj ilosc do produktu

[4] - Odejmij ilosc od produktu        

[5] - Znajdz produkt

[6] - Stworz raport - stan na magazynie 

[7] - Stworz raport - najwieksza/najnizsza cena

[10] - Wyjdz
1

Aktualnie w bazie jest (0) produktow.
Wypisz numer produktu (musi byc unikalny i nie moze byc ujemny): 0

Napisz nazwe produktu (nie wstawiaj spacji przed nazwa): Chocko

Wypisz ile sztuk produktu jest na magazynie (nie moze byc ujemna): 10

Wypisz cene produktu (nie moze byc ujemna): 2.50

---

Menedzer sklepu v1.0...
5

Wpisz numer produktu do znalezienia: 0

Chocko
Opis: Kod - [0], Ilosc - [10], Cena - [2.50]

---

Menedzer sklepu v1.0...
2

Wpisz numer produktu do usuniecia: 0

---

Menedzer sklepu v1.0...
5

Wpisz numer produktu do znalezienia: 0

Nie ma produktu o takim numerze!

Menedzer sklepu v1.0...
10

## Przykłady danych 2:

> Wejście:

1

0

Chocko

12

2.50

---

1

1

Rocko

10

3.50

---

1

2

Tocko

5

2.50

---

6

11

---

7

10

> Wyjście:

Menedzer sklepu v1.0
[1] - Dodaj nowy produkt do bazy danych

[2] - Usun produkt z bazy danych

[3] - Dodaj ilosc do produktu

[4] - Odejmij ilosc od produktu

[5] - Znajdz produkt

[6] - Stworz raport - stan na magazynie

[7] - Stworz raport - najwieksza/najnizsza cena

[10] - Wyjdz
1

Aktualnie w bazie jest (0) produktow.
Wypisz numer produktu (musi byc unikalny i nie moze byc ujemny): 0

Napisz nazwe produktu (nie wstawiaj spacji przed nazwa): Chocko

Wypisz ile sztuk produktu jest na magazynie (nie moze byc ujemna): 12

Wypisz cene produktu (nie moze byc ujemna): 2.5

---

Menedzer sklepu v1.0...
1

Aktualnie w bazie jest (1) produktow.
Wypisz numer produktu (musi byc unikalny i nie moze byc ujemny): 1

Napisz nazwe produktu (nie wstawiaj spacji przed nazwa): Rocko

Wypisz ile sztuk produktu jest na magazynie (nie moze byc ujemna): 10

Wypisz cene produktu (nie moze byc ujemna): 3.5

---

Menedzer sklepu v1.0...
1

Aktualnie w bazie jest (2) produktow.
Wypisz numer produktu (musi byc unikalny i nie moze byc ujemny): 2    

Napisz nazwe produktu (nie wstawiaj spacji przed nazwa): Tocko

Wypisz ile sztuk produktu jest na magazynie (nie moze byc ujemna): 5

Wypisz cene produktu (nie moze byc ujemna): 2.5

---

Menedzer sklepu v1.0...
6

Wpisz ilosc sztuk - kazdy produkt, ktorego kopii tyle wynosi lub mniej zostanie wyswietlony: 11

Rocko
Opis: Kod - [1], Ilosc - [10], Cena - [3.50]

Tocko
Opis: Kod - [2], Ilosc - [5], Cena - [2.50]

---

Menedzer sklepu v1.0...
7

Najtanszy produkt/y to:
Chocko
Opis: Kod - [0], Ilosc - [12], Cena - [2.50]

Tocko
Opis: Kod - [2], Ilosc - [5], Cena - [2.50]

Najdrozszy produkt/y to:
Rocko
Opis: Kod - [1], Ilosc - [10], Cena - [3.50]

Menedzer sklepu v1.0...
10