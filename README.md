# Pemograman Dasar C++ SCM

kumpulan hasil pembelajaran mata kuliah **Paket Pemograman II** dengan bahasa **C++**
Semester 2 | [STMIK *Citra Mandiri*](https://home.stmik-citra-mandiri.ac.id/)

## Pengcodean

#### Compailer MinGW

Download dan Istal compiler untuk C++ nya [link](https://sourceforge.net/projects/mingw/)
> untuk windows, edit di sistem **environment variabel** bagian path copy gcc nya

#### Sublime Text 3

Untuk coding saya menggunakan text editor Sublime Text 3 [link download](https://www.sublimetext.com/)
biar lancar untuk compile dan jalanin programnya kita buat *Build System* sublime textnya sendiri caranya
pergi ke menu **Tool>Build System>New Build System..** click untuk buat baru
copy syntax dibawah
```shell
{
 "cmd": ["g++", "-std=c++1y", "${file}", "-o", "${file_base_name}.exe", "&&", "start", "cmd", "/k", "${file_path}/${file_base_name}"],
 "file_regex": "^(..[^:]*):([0-9]+):?([0-9]+)?:? (.*)$",
 "working_dir": "${file_path}",
 "selector": "source.c, source.c++,source.cpp",
 "shell": true,
 "variants":
 [
   {
     "name": "Run",
     "cmd":["bash", "-c", "g++ -std=c++1y '${file}' -o '${file_path}/${file_base_name}' && '${file_path}/${file_base_name}'"]
   }
 ]
}
```
simpan dengan nama C++ Compile.sublime-build

tinggal di pakek, pilih sistem buildnya yang uda di buat tadi **C++ Compile** dan tekan di keyboard Ctrl+b programnya jalan di cmd deh
## 🗂 Direktory Pemograman
* **Fungsi part_1**
	- contoh_1
	- contoh_2
* **Fungsi part-2**
	- contoh_1
	- contoh_2
* **Pertemuan 10**
	- contoh_1
	- contoh_2
	- contoh_3
* **Pertemuan 4**
	- latihan_1
	- latihan_2
	- latihan_3
	- latihan_4
	- latihan_5
	- latihan_6
	- latihan_7
* **Pertemuan 5**
	- latihan_1
	- latihan_2
	- latihan_3
	- latihan_4
	- latihan_5
	- latihan_6
	- latihan_7
	- latihan_8
	- latihan_9
	- latihan_10
	- latihan_11
	- latihan_12
	- latihan_13
	- latihan_14 (*menghitung luas persegi*)
	- latihan_15 (*menghitung luas lingkaran*)
	- latihan_16 (*menghitung rumus*)
	- latihan_17 (*konversi suhu*)
	- latihan_18 (*konversi detik*)
	- latihan_19 (*menghitung jarak*)
	- latihan_20 (*perkalian 2 pecahan*)
	- latihan_21 (*konversi dolar*)
	- latihan_22 (*menghitung upaH*)
* **Latihan 6**
	- cara_1
	- cara_2
	- contoh_1
	- contoh_2
	- latihan_1
	- latihan_2
	- latihan_3
* **Pertemuan 7**
	- latihan_1
	- latihan_2
	- latihan_3
	- latihan_4
	- latihan_5
* **Pertemuan 8**
	- latihan_1
	- latihan_2
	- tatihan_3
	- program_1
	- program_2
	- program_3
* **Pertemuan 9**
* **Searcing and Sorting**
	- latihan 1
	- latihan 2
	- latihan 3
	- latihan 4
	- latihan 5
* **Tugas_Pendaftaran**

> Mungkin beberapa program tidak dapat berkerja dengan baik..!! 😅😅😅
