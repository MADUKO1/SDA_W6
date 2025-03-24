#include "stack.h"
#include "queue.h"
#include "linear_list.h"
#include <stdio.h>

void menu() {
    printf("\n=== Sistem Manajemen Rumah Sakit ===\n");
    printf("1. Tambah pasien ke antrean\n");
    printf("2. Layani pasien\n");
    printf("3. Tambah riwayat tindakan medis\n");
    printf("4. Tampilkan riwayat tindakan\n");
    printf("5. Tampilkan daftar pasien dalam perawatan\n");
    printf("6. Keluar\n");
    printf("Pilih menu: ");
}

int main() {
    Queue antrean;
    Stack riwayatTindakan;
    List pasienDalamPerawatan;
    
    initQueue(&antrean);
    createStack(&riwayatTindakan);
    pasienDalamPerawatan.head = NULL;
    
    int pilihan, tindakan, nomorPasien;
    
    while (1) {
        menu();
        scanf("%d", &pilihan);
        getchar(); 
        
        switch (pilihan) {
            case 1:
                enqueue(&antrean);
                break;
            case 2:
                if (!isQueueEmpty(&antrean)) {
                    nomorPasien = antrean.list.head->info;
                    dequeue(&antrean);
                    insertLast(&pasienDalamPerawatan, nomorPasien);
                    printf("Pasien nomor %d masuk ke ruang perawatan.\n", nomorPasien);
                } else {
                    printf("Tidak ada pasien dalam antrean.\n");
                }
                break;
            case 3:
                printf("Masukkan kode tindakan medis (angka): ");
                scanf("%d", &tindakan);
                getchar();
                pushStack(&riwayatTindakan, tindakan);
                printf("Tindakan medis %d dicatat dalam riwayat.\n", tindakan);
                break;
            case 4:
                displayStack(&riwayatTindakan);
                break;
            case 5:
                printf("Daftar pasien dalam perawatan: ");
                displayList(&pasienDalamPerawatan);
                break;
            case 6:
                printf("Keluar dari program.\n");
                return 0;
            default:
                printf("Pilihan tidak valid!\n");
        }
        printf("\nTekan Enter");
        getchar(); 
    }
}
