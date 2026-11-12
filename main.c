
#include <stdio.h>

void task6() {
    double a, b;

    printf("\nZadanie 6\n");
    printf("Vvedite shvidkist u km/god: ");
    scanf("%lf", &a);

    printf("Vvedite shvidkist u m/s: ");
    scanf("%lf", &b);

    double c = a / 3.6;

    printf("Persha shvidkist: %.2f m/s\n", c);
    printf("Druga shvidkist: %.2f m/s\n", b);

    if (c > b)
        printf("Persha shvidkist bilsha.\n");
    else if (c < b)
        printf("Druga shvidkist bilsha.\n");
    else
        printf("Shvidkosti rivni.\n");
}

void task13() {
    int n, a, b, sum;

    printf("\nZadanie 13\n");
    printf("Vvedit dvoznachne chislo: ");
    scanf("%d", &n);

    if (n < 10 || n > 99) {
        printf("Pomilka: potribne dvoznachne naturalne chislo.\n");
        return;
    }

    a = n / 10;
    b = n % 10;
    sum = a + b;

    printf("Suma cifr: %d\n", sum);

    if (sum >= 10 && sum <= 99)
        printf("Suma cifr ye dvoznachnim chislom.\n");
    else
        printf("Suma cifr ne ye dvoznachnim chislom.\n");

    if (sum > n)
        printf("Suma cifr bilsha za pochatkove chislo.\n");
    else
        printf("Suma cifr ne bilsha za pochatkove chislo.\n");
}

void task24() {
    double a, b, c;

    printf("\nZadanie 24\n");
    printf("Vvedit tri rechovi chisla: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a >= 0)
        a = a * a;
    else
        a = a * a * a * a;

    if (b >= 0)
        b = b * b;
    else
        b = b * b * b * b;

    if (c >= 0)
        c = c * c;
    else
        c = c * c * c * c;

    printf("Rezultat dlya pershogo chisla: %.4f\n", a);
    printf("Rezultat dlya drugogo chisla: %.4f\n", b);
    printf("Rezultat dlya tretogo chisla: %.4f\n", c);
}

void task27() {
    double a, b, temp;

    printf("\nZadanie 27\n");
    printf("Vvedit dva rizni chisla: ");
    scanf("%lf %lf", &a, &b);

    if (a == b) {
        printf("Chisla ne povinni buty rivni.\n");
        return;
    }

    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }

    double sum = (a + b) / 2;

    b = sum;
    a = a * 2;

    printf("Menshe chislo zamineno polovynoyu sumy: %.4f\n", b);
    printf("Bilshе chislo pomnozheno na dva: %.4f\n", a);
}

void task31() {
    double a, b, c;
    int count = 0;

    printf("\nZadanie 31\n");
    printf("Vvedit tri chisla a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a > 0)
        count++;

    if (b > 0)
        count++;

    if (c > 0)
        count++;

    printf("Kilkiсть dodatnih chisel: %d\n", count);
}

void task35() {
    char answer;

    printf("\nZadanie 35\n");
    printf("Hto ti: hlopchik chy divchinka?\n");
    printf("Vvedit D abo M: ");
    scanf(" %c", &answer);

    if (answer == 'D' || answer == 'd')
        printf("Meni podobayutsya divchata!\n");
    else if (answer == 'M' || answer == 'm')
        printf("Meni podobayutsya hlopchiki!\n");
    else
        printf("Nevirna vidpovid. Vvedit D abo M.\n");
}

void task50() {
    double a, b, c, d;
    double x[4];
    int i, j, k;
    int count = 0;

    printf("\nZadanie 50\n");
    printf("Vvedit dovzhyny chotiroh vidrizkiv a, b, c, d: ");
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    x[0] = a;
    x[1] = b;
    x[2] = c;
    x[3] = d;

    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 4; j++) {
            for (k = j + 1; k < 4; k++) {

                printf("\nVidrizki %.2f, %.2f, %.2f: ",
                       x[i], x[j], x[k]);

                if (x[i] > 0 && x[j] > 0 && x[k] > 0 &&
                    x[i] + x[j] > x[k] &&
                    x[i] + x[k] > x[j] &&
                    x[j] + x[k] > x[i]) {

                    printf("mozhna pobuduvati trikutnik.\n");
                    count++;
                } else {
                    printf("ne mozhna pobuduvati trikutnik.\n");
                }
            }
        }
    }

    printf("\nKilkiсть mozhlyvyh trikutnykiv: %d\n", count);
}

void task74() {
    double price, money;

    printf("\nZadanie 74\n");
    printf("Vvedit vartist knizhki: ");
    scanf("%lf", &price);

    printf("Vvedit sumu groshей vid pokupcya: ");
    scanf("%lf", &money);

    if (price < 0 || money < 0) {
        printf("Pomilka: suma ne mozhe buty vidyemnoyu.\n");
        return;
    }

    if (money == price) {
        printf("Dyakuyemo za pokupku!\n");
    } else if (money > price) {
        printf("Vasha zdacha: %.2f grn.\n", money - price);
    } else {
        printf("Nedostatno groshей. Brakuye: %.2f grn.\n",
               price - money);
    }
}

void task83() {
    double a, b, c;

    printf("\nZadanie 83\n");
    printf("Vvedit tri rechovi chisla a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == b || a == c || b == c)
        printf("Sered chisel ye para rivnih chisel.\n");
    else
        printf("Usi tri chisla rizni.\n");
}

void task87() {
    int n;

    printf("\nZadanie 87\n");
    printf("Vvedit rik: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Pomilka: rik povinen buty naturalnym chislom.\n");
        return;
    }

    if (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0))
        printf("%d rik visokosniy.\n", n);
    else
        printf("%d rik ne visokosniy.\n", n);
}

int main() {
    int choice;

    do {
        printf("\n========== MENU ==========\n");
        printf("6  - Porivnyannya shvidkostey\n");
        printf("13 - Dvoznachne chislo\n");
        printf("24 - Peretvorennya troh chisel\n");
        printf("27 - Zamina dvoh chisel\n");
        printf("31 - Kilkist dodatnih chisel\n");
        printf("35 - Programа-pidbadyornik\n");
        printf("50 - Pobudova trikutnikiv\n");
        printf("74 - Robota knizhnogo magazinu\n");
        printf("83 - Poshuk rivnih chisel\n");
        printf("87 - Visokosniy rik\n");
        printf("0  - Vihid\n");
        printf("==========================\n");

        printf("Oberit nomer zavdannya: ");
        scanf("%d", &choice);

        switch (choice) {
            case 6:
                task6();
                break;

            case 13:
                task13();
                break;

            case 24:
                task24();
                break;

            case 27:
                task27();
                break;

            case 31:
                task31();
                break;

            case 35:
                task35();
                break;

            case 50:
                task50();
                break;

            case 74:
                task74();
                break;

            case 83:
                task83();
                break;

            case 87:
                task87();
                break;

            case 0:
                printf("Programu zaversheno.\n");
                break;

            default:
                printf("Nevirniy nomer zavdannya. Sprobuyte shche raz.\n");
        }

    } while (choice != 0);

    return 0;
}