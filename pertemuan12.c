#include <stdio.h>
#include <time.h>

void cektime() {
    int x = 0;
    for (int i = 0; i < 1000000; i++) {
        x += i;
    }
}

int main() {
    int a[11];
    int i, max, cMax, sum, count;
    float avg;
    
    for (i=0; i<11; i++) {
        printf("nilai mahasiswa ke-%d: ", i+1);
        scanf("%d", &a[i]);
    }
    
    printf("isi array: ");
    
    for (i = 0; i < 11; i++) {
        printf("%d ", a[i]);
    }
    
    max = a[0];
    for (i = 1; i < 11; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    
    cMax = 0;
    for (i = 0; i < 11; i++) {
        if (a[i] == max) {
            cMax++;
        }
    }
    
    sum = 0;
    for (i = 0; i < 11; i++) {
        sum += a[i];
    }
    
    avg = (float) sum / 11;
    count = 0;
    for (i = 0; i < 11; i++) {
        if (a[i] < avg) {
            count++;
        }
    }

    printf("\nNilai terbesar: %d", max);
    printf("\nmahasiswa yang mendapat nilai terbesar: %d orang", cMax);
    printf("\nNilai rata-rata mahasiswa: %.2f", avg);
    printf("\nMahasiswa yang mendapat nilai di bawah rata-rata: %d orang", count);
    
    
    clock_t start, end;
    double cpu_time_used;

    start = clock();
    cektime();
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("\n\nWaktu eksekusi: %f detik\n", cpu_time_used);

    return 0;
}
