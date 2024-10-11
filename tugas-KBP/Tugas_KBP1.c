#include <stdio.h>
#include <unistd.h>

int main() {
    char kamar1[] = "Budi";
    char kamar2[] = "Joko";
    char kamar3[] = "Siti";
    char kamar4[] = "Rudi";

    while (1) {
        printf("kamar1: %s, Alamat: %p\n", kamar1, &kamar1);
        printf("kamar2: %s, Alamat: %p\n", kamar2, &kamar2);
        printf("kamar3: %s, Alamat: %p\n", kamar3, &kamar3);
        printf("kamar4: %s, Alamat: %p\n", kamar4, &kamar4);

        // Mengganti nilai kamar
        char temp[10]; // Assuming the longest string length is 10
        strcpy(temp, kamar4);
        strcpy(kamar4, kamar3);
        strcpy(kamar3, kamar2);
        strcpy(kamar2, kamar1);
        strcpy(kamar1, temp);

        sleep(2); // Menunggu 2 detik
    }

    return 0;
}