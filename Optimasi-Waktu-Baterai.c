/*
    Optimasi Waktu Pengisian Baterai dengan Metode Newton-Raphson
    Parameter:
    - Tegangan maksimum (V_max) = 4.2 V
    - Tegangan target (V_target) = 4.0 V  
    - Konstanta pengisian (k) = 0.03 s⁻¹
    - Tebakan awal waktu = 30 s
    - Toleransi error = 10⁻⁵
    - Iterasi maksimum = 50
*/

#include <stdio.h>
#include <math.h>

// Parameter tetap
#define V_MAX 4.2f
#define V_TARGET 4.0f
#define K 0.03f
#define EPSILON 1e-5f
#define MAX_ITER 50

// Fungsi f(t): selisih antara tegangan saat t dan tegangan target
float fungsi(float t) {
    return V_MAX * (1 - expf(-K * t)) - V_TARGET;
}

// Turunan fungsi f(t)
float turunan_fungsi(float t) {
    return V_MAX * K * expf(-K * t);
}

int main() {
    float t = 30.0f;  // Tebakan awal waktu pengisian
    float f, f_prime, t_next;
    int iter = 0;

    printf("\n=== HASIL SIMULASI PENGISIAN BATERAI (Newton-Raphson) ===\n");
    printf("Parameter:\n");
    printf("- V_maks = %.1f V\n", V_MAX);
    printf("- V_target = %.1f V\n", V_TARGET);
    printf("- Konstanta pengisian = %.2f s^(-1)\n", K);
    printf("- Tebakan awal = %.1f s\n", t);
    printf("- Toleransi error = %.0e\n", EPSILON);

    printf("\nProses Iterasi:\n");
    printf("Iterasi\t t(dtk)\t\t Selisih Tegangan\n");

    do {
        f = fungsi(t);
        f_prime = turunan_fungsi(t);

        if (fabsf(f_prime) < 1e-8f) {
            printf("\nError: Turunan mendekati nol. Metode gagal.\n");
            return 1;
        }

        t_next = t - (f / f_prime);
        iter++;

        printf("%d\t %.6f\t %.6f\n", iter, t_next, fungsi(t_next));  

        if (fabsf(fungsi(t_next)) < EPSILON) {
            break;
        }

        t = t_next;

        if (iter >= MAX_ITER) {
            printf("\nPeringatan: Maksimum iterasi tercapai\n");
            break;
        }

    } while (1);

    printf("\n=== HASIL AKHIR ===\n");
    printf("Waktu pengisian: %.6f detik\n", t_next);
    printf("Tegangan tercapai: %.6f V\n", fungsi(t_next) + V_TARGET);
    printf("Jumlah iterasi: %d\n\n", iter);

    return 0;
}
