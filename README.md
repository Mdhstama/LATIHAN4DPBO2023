# LATIHAN4DPBO2023

*Saya Muhammad Aditya Hasta Pratama (2000360) dengan kelas kontrak C2 mengerjakan Tugas Praktikum (Latihan 3) DPBO dalam mata kuliah Desain Pemograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*

**GAMBAR DESAIN**

![LP3 FInal](https://user-images.githubusercontent.com/99590350/222099500-2edf5590-560b-40b5-a9b4-ce4655e63864.png)

**PENJELASAN DESAIN**

- Human adalah parent dari Civitas
- Civitas adalah parent dari Mahasiswa dan Dosen
    1. Data umum (nama, gender, nik) dalam Mahasiswa dan Dosen dinaikkan ke class Human
    2. Data fakultas pada Mahasiswa dan Dosen dinaikkan karena keduanya mempunyai atribut yang sama sehigga digabung saja ke Civitas
- Prodi merupakan composite dari Mahasisa dan Dosen
    1. Karena setiap Mahasiswa dan Dosen mempunyai Program Studi yang mereka kontrak
- Course merupakan composite dari Prodi, Mahasiswa, dan Dosen
    1. Karena setiap prodi mempunyai mata kuliah yang diberikan
    2. Karena mahasiswa mempunyai mata kuliah yang harus dikontrak
    3. Karena dosen mempunyai mata kuliah untuk mengajar

**HASIL COMPILER**

![image](https://user-images.githubusercontent.com/99590350/222099614-c9f8dce3-52c7-4a54-8194-6fc884b4e65c.png)

![image](https://user-images.githubusercontent.com/99590350/222099641-c13b8a80-c909-4398-8ea7-2794c57f5dfb.png)

![image](https://user-images.githubusercontent.com/99590350/222099685-d5350c75-1670-4aee-95ed-69af976d1c75.png)
