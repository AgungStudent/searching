#include <stdio.h>
int main() {
  // deklarasi variable
  int n, search, get_data = 0;
  // enter long array data
  printf("Mau berapa data yang disimpan? ");
  scanf("%d", &n);
  // deklarasi variable
  int data[n];
  // inisialisasi array data
  printf("masukkan %d integer \n", n);
  for (int i = 0; i < n; i++)
    scanf("%d", &data[i]);
  // enter number to search
  printf("Angka berapa yang ingin dicari? ");
  scanf("%d", &search);
  puts("");
  // loop to search
  for (int i = 0; i < n; i++) {
    // if get data
    if (data[i] == search) {
      // then
      printf("Angka %d berhasil ditemukan di lokasi: %d\n", search, i);
      get_data++;
    }
  }
  // if get_data > 0
  if (get_data > 0)
    // then
    printf("\nangka %d berhasil ditemukan sebanyak: %d", search, get_data);
  else
    printf("\nTidak ada data yang ditemukan ");
}
