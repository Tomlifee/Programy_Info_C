Program do tworzenia mini kalendarza na wymyślony miesiąc. 
Uzytkownik wpisuje porządaną liczbę dni, a następnie dzień tygodnia rozpoczynający tydzień.

Sposób kompilacji:
1. Uruchom windows Powershell
2. Korzystając z komendy <cd .\nazwafolderu1\nazwafolder2\...\folder_z_plikiem>
dojdź do folderu, gdzie znajduje sie plik src.c
3. Użyj komendy <gcc -Wall -o Program.exe src.c>, by skompilowac Program
4. Uruchom program używając komendy <.\Program.exe>
5. Enjoy

Sposób użytkowania:
1. Wpisz liczbę dni (musi być większa od 0, mniejsza od 1000 i całkowita). 
Tyle dni będzie miał miesiąc
2. Wpisz dzień rozpoczynający tydzień:
[1] - Niedziela
[2] - Poniedziałek
[3] - Wtorek
[4] - Środa
[5] - Czwartek
[6] - Piątek
[7] - Sobota
3. Program stworzy graficzną reprezentację kartki z kalendarza