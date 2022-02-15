#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
  // deklarasi variable
  int search, high, mid, low, get_data, uji;
  // inisialisasi variable
  low = 0;
  uji = 0;
  high = 100;
  get_data = 0;
// create goto
input:
  // clear console
  system("cls||clear");
  // enter number to search
  printf("Masukkan angka untuk dicari dalam range(0-100) ");
  scanf("%d", &search);
  // check the value in the range 0-100 or not
  if (search < 0 || search > 100) {
    printf("Angka tidak valid!");
    getch();
    goto input;
  }

  puts("");
  // loop to search
  while (low <= high) {
    // fill in the middle value
    mid = (low + high) / 2;
    if (search == mid) {
      get_data++;
      break;
    } else if (search > mid) {
      low = mid + 1;
      printf("==> angka TIDAK ditemukan di pengujian ke %d, karena %d > %d <==\n", ++uji, search, mid);
    } else {
      high = mid - 1;
      printf("==> angka TIDAK ditemukan di pengujian ke %d, karena %d < %d <==\n", ++uji, search, mid);
    }
  }

  // if get_data == 0, means data not found
  if (get_data == 0) 
    // then
    printf("\nTidak ada data yang ditemukan!");
  else 
    printf("\nangka %d berhasil ditemukan sebanyak: %d", search, get_data);
  
}
