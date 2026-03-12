#include <stdio.h>

#define MAX 100

void PrintMenu();
void Deposit(double saldo[]);
void Withdraw(double saldo[]);
void ShowBalance(const double saldo[]);

int main(void) {
    double saldo[MAX]; 
    // Inicjalizacja kont zerami
    for(int i = 0; i < MAX; i++) {
        saldo[i] = 0.0;
    }

    int running = 1;
    while (running) {

        PrintMenu();
        
        int choice;
        // Sprawdzenie, czy użytkownik wpisał liczbę.
        // scanf zwraca 1, jeśli udało się wczytać jedną zmienną.
        // Jeśli wpiszesz literę, zwróci 0.
        if (scanf("%d", &choice) != 1) {
            // Czyszczenie bufora (Input Flushing).
            // Jeśli użytkownik wpisał "ala", to 'a', 'l', 'a' siedzą w pamięci.
            // Pętla pobiera znaki aż do entera ('\n'), żeby "odetkać" scanf.
            while(getchar() != '\n'); 
            continue; // Wróć do początku głwnej pętli while (pokaż menu jeszcze raz)
        }

        switch (choice) {
            case 0:
                running = 0;
                printf("Koniec programu.\n");
                break;

            case 1: 
                Deposit(saldo);
                break;

            case 2:
                Withdraw(saldo);
                break;

            case 3:
                ShowBalance(saldo);
                break;

            default:
                printf("Nieznana opcja.\n");
                break;
        }
    }

    return 0;
}

//The main menu
void PrintMenu()
{
    printf("\n=== SYSTEM BANKOWY ===\n");
    printf("0. Wyjscie\n");
    printf("1. Wplata (Deposit)\n");
    printf("2. Wyplata (Withdraw)\n");
    printf("3. Sprawdz saldo\n");
    printf("Wybierz opcje: ");
}

//Deposit logic
void Deposit(double saldo[])
{
    int acc_id;
    double amount;
    printf("Podaj numer konta (0-99): ");
    scanf("%d", &acc_id);
    // Walidacja: czy numer konta mieści się w tablicy?
    if (acc_id < 0 || acc_id >= 100) {
        printf("ERROR: Bledny numer konta!\n");
    } else {
        printf("Podaj kwote wplaty: ");
        scanf("%lf", &amount);
        if (amount <= 0) {
            printf("ERROR: Kwota musi byc dodatnia!\n");
        } else {
            saldo[acc_id] += amount;
            printf("DEPOSIT OK. Konto %d nowe saldo: %.2f\n", acc_id, saldo[acc_id]);
        }
    }
}

void Withdraw(double saldo[])
{
    int acc_id;
    double amount;
    // --- LOGIKA WYPŁATY
    printf("Podaj numer konta (0-99): ");
    scanf("%d", &acc_id);
    if (acc_id < 0 || acc_id >= 100) {
        printf("ERROR: Bledny numer konta!\n");
    } else {
        printf("Podaj kwote wyplaty: ");
        scanf("%lf", &amount);
        if (amount <= 0) {
            printf("ERROR: Kwota musi byc dodatnia!\n");
        } else if (amount > saldo[acc_id]) {
            printf("WITHDRAW ERROR: Za malo srodkow na koncie %d.\n", acc_id);
        } else {
        saldo[acc_id] -= amount;
        printf("WITHDRAW OK. Konto %d nowe saldo: %.2f\n", acc_id, saldo[acc_id]);
        } 
   }
}

void ShowBalance(const double saldo[])
{
    int acc_id;
    // --- LOGIKA SALDA
    printf("Podaj numer konta (0-99): ");
    scanf("%d", &acc_id);
    if (acc_id < 0 || acc_id >= 100) {
       printf("ERROR: Bledny numer konta!\n");
    } else {
        printf("SHOW: Konto %d saldo = %.2f\n", acc_id, saldo[acc_id]);
    }
}