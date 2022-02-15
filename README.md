# Searcing
## Daftar Isi
1. [Sequential Searching](https://github.com/AgungStudent/searching/tree/main/sequential_search)
2. [Binary Searching](https://github.com/AgungStudent/searching/tree/main/binary_search)
## Penjelasan Searching
searching adalah proses pencarian data dari kumpulan data. Kumpulan data bisa berupa elemen-elemen array, mencari nomer dari range nomer tertentu, database, dan lain-lain. Ada banyak sekali metode pencarian data pada pemrograman, yang paling sering dipakai ialah ***Sequential Searching*** dan ***Binary Searching***. Untuk melihat secara visualisasi perbedaan antara keduannya menggunakan link berikut [Searching Sorted List](https://www.cs.usfca.edu/~galles/visualization/Search.html). Untuk melihat penjelasan detailnya silahkan baca penjelasan dibawah.

## Sequential Searching
Sequential Searching merupakan metode pencarian data yang paling sederhana. Prinsip pencariannya dengan mengecek data satu persatu secara urut. Artinya jika datanya ada banyak, misal datanya ada `1000` lalu yang dicari data ke `999`, maka akan dicek datannya satu persatu dari `1-999`. Meskipun begitu ada beberapa kelebihan dari Sequential Searching salah satunnya ketika datannya tidak urut itu tidak menjadi masalah.
ALgoritma pencariannya sebagai berikut:
1. Lakukan perulangan untuk mencari data.
2. Jika `data != data yang dicari`, maka akan berpindah ke data berikutnya.
3. Jika  `data == data yang dicari`, maka pencarian selesai.
4. Jika sampai data habis tapi ***data yang dicari*** tidak ditemukan, maka data tidak ada.

## Binary Searching
Binary Searching merupakan metode pencarian data secara ***biner***. Artinya jika data yang dicari melebihi nilai tengah maka setelah tengah akan bernilai `1` dan sebelum nilai tengah akan bernilai `0` atau diabaikan. Sebelum mencari data menggunakan metode Binary Searching kita harus mengurutkan data terlebih dahulu, jika tidak pencarian tidak akan berjalan dengan baik. Kelebihan dari Binary Searching ialah pencariannya lebih cepat, karena tidak mengecek datanya satu persatu, langsung eliminasi ***1/2*** data seperti penjelasan diatas. 
Algoritma pencariannya sebagai berikut:
1. Urutkan data
2. Lakukan perulangan untuk mencari data.
3. Cari *data tengah* `(posisi awal + posisi akhir)/2`.
4. Jalu bandingkan *data tengah* dengan *data yang dicari*.
5. Jika `data yang dicari > data tengah`, maka `posisi awal = data tengah + 1` lalu ulang algoritma dari nomer 3.
6. Jika `data yang dicari < data tengah`, maka `posisi akhir = data tengah - 1` lalu ulang algoritma dari nomer 3.
7. Jika `data yang dicari == data tengah`, maka pencarian selesai.
8. Jika sampai data habis tapi ***data yang dicari*** tidak ditemukkan, maka data tidak ada.

