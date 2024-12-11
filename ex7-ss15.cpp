#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    int  chuso = 0, kytudacbiet = 0;
    char str[] = "Hello, gmail cua toi la pham linh 123 @gmail.com  !";

    printf("Chuoi ky tu da cho la: %s\n", str);
    printf("Nhap so ky tu la chu cai ma ban nghi la dung: ");
    
    int nguoidungsudung;
    scanf("%d", &nguoidungsudung);

    int soluongthuc = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) { 
            soluongthuc++;
        } else if (chuso(str[i])) { 
            chuso++;
        } else if (!khonggian(str[i])) { 
            kytudacbiet++;
        }
    }

    printf("So ky tu la chu cai thuc te: %d\n", soluongthuc);
    printf("So ky tu la chu so: %d\n", chuso);
    printf("So ky tu dac biet: %d\n",  kytudacbiet);

    if (nguoidungsudung == soluongthuc) {
        printf("Ban da tra loi dung roi!\n");
    } else {
        printf("Ban sai roi, thu lai di.\n");
    }

    return 0;
}
