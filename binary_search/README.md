# Binary Searching
seperti yang dijelaskan pada [menu utama](https://github.com/AgungStudent/searching) tadi kalau *Binary Searching* itu mencari data dengan membaginya menjadi 2. Artinya jika `data yang dicari > data tengah`, maka `data < data tengah` akan diabaikan atau diangap `false`, sedangkan `data > data tengah` akan dianggap `true` dan datanya akan dicari lagi disana. Begitu pula sebaliknya, sampai `data yang dicari == data tengah`. Terdapat contoh program [binary_search.c](https://github.com/AgungStudent/searching/blob/main/binary_search/binary_search.c) disana terdapat beberapa hal diantarannya pengecekkan data yang dicari harus berada dirange 0-100. sesuai program berikut:
```   
   // check the value in the range 0-100 or not
  if (search < 0 || search > 100) {
    printf("Angka tidak valid!");
    getch();
    goto input;
  }
  ```
  artinya program akan mengecek apakah nilainya berada di luar range 0-100, jika iya maka akan dicetak pesan `"Angka tidak valid!` dan program akan di lempar ke `goto input;`.
  
  kemudian untuk **Binary Searching** terdapat pada program dibawah ini:
  ```
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
  ```
  perulangan akan dilakukan untuk mengulang pencarian data, kemudian nilai `mid` ditentukkan menggunakan rumus, dan dilakukan pengecekkan. Jika nilai `search == mid`, maka `get_data` akan diincrement tujuannya untuk menjelaskan bahwa data ditemukkan, dan perulangan berakhir karena `break;`. Jika `search > mid`, maka `low = mid + 1` dengan begitu nilai low bukan lagi `0` dan setengah data akan dieliminasi. Begitu pula sebaliknya jika `search < mid`. Pada output terlihat berapa banyak perulangan akan mengulang untuk mencari data, akan terlihat perbedaan antara ***Sequential Searching*** dan ***Binary Searching***. 
  
  ### Pindah Menu
  1. [menu utama >>](https://github.com/AgungStudent/searching)
  2. [sequential search >>](https://github.com/AgungStudent/searching/tree/main/sequential_search)
