# Sequential Searching
seperti yang dijelaskan pada [menu utama](https://github.com/AgungStudent/searching) tadi kalau *Sequential Searching* itu mencari data satu persatu secara urut. Disini terdapat 2 contoh programnya. Untuk file [detail-sequintial.c](https://github.com/AgungStudent/searching/blob/main/sequential_search/detail-sequintial.c) terdapat contoh sistem pencarian datanya. Berikut ini contoh programnya:
```   
  // loop to search
  for (int i = 0; i < n; i++) {
    // if get data
    if (data[i] == search) {
      // then
      printf("Angka %d berhasil ditemukan di lokasi: %d\n", search, i);
      get_data++;
    } else {
      printf("==> angka TIDAK ditemukan di lokasi: %d <==\n", i);
    }
  }
  ```
  artinya program akan mencari data satu persatu secara urut dari array `data[0]` sampai selesai. Jika `data[i] == search`, maka akan mencetak ***berhasil*** dan variable `get_data` akan di increment. Sebaliknya jika `data[i] != search`, maka akan mencetak pesan ***TIDAK ditemukan*** dan pada output terlihat datanya dicari secara berurutan.
  
  ### Pindah Menu
  1. [menu utama >>](https://github.com/AgungStudent/searching)
  2. [binary_searching >>](https://github.com/AgungStudent/searching/tree/main/binary_search)
