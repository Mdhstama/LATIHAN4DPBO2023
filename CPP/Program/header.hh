#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

/* Composisition class */

class Course
{
private:
    string kodeMatkul;
    string namaMatkul;

public:
    // Constructor
    Course();
    Course(string kodeMatkul, string namaMatkul);

    // Getter setter
    string getKodeMatkul();
    void setKodeMatkul(string kodeMatkul);
    string getNamaMatkul();
    void setNamaMatkul(string namaMatkul);

    // Destructor
    ~Course();
};

class Prodi
{
private:
    string kodeProdi;
    string namaProdi;
    list<Course> courseA; // composit

public:
    // Constructor
    Prodi();
    Prodi(string kodeProdi, string namaProdi, Course courseA);

    // Getter setter
    string getKodeProdi();
    void setKodeProdi(string kodeProdi);
    string getNamaProdi();
    void setNamaProdi(string namaProdi);
    list<Course> getCourseA();
    void setCourseA(Course courseA);

    // Destructor
    ~Prodi();
};

// Base Class
class Human
{
private:
    string nik;
    string name;
    string gender;

public:
    // Constructor
    Human();
    Human(string nik, string name, string gender);

    // Getter Setter
    string getNIK();
    void setNIK(string nik);
    string getName();
    void setName(string name);
    string getGender();
    void setGender(string gender);

    // Destructor
    ~Human();
};

// Child class from Human
class Civitas : public Human
{
private:
    string univ;
    string email;
    string fakultas;

public:
    // Constructor
    Civitas();
    Civitas(string nik, string name, string gender, string univ, string email, string fakultas);

    // Getter Setter
    string getUniv();
    void setUniv(string univ);
    string getEmail();
    void setEmail(string email);
    string getFakultas();
    void setFakultas(string fakultas);

    // Destructor
    ~Civitas();
};

// Child class from Civitas
class Mahasiswa : public Civitas
{
private:
    string nim;
    Prodi prodiA;
    list<Course> courseB;

public:
    // Constructor
    Mahasiswa();
    Mahasiswa(string nik, string name, string gender, string univ, string email, string fakultas, string nim, Prodi prodiA, Course courseB);

    // Getter Setter
    string getNIM();
    void setNIM(string nim);
    Prodi getProdiA();
    void setProdiA(Prodi prodiA);
    list<Course> getCourseB();
    void setCourseB(Course courseB);

    //  Destructor
    ~Mahasiswa();
};

// Child class from Civitas
class Dosen : public Civitas
{
private:
    string nip;
    string penAkhir;
    string keahlian;
    Prodi prodiC;
    list<Course> courseD;

public:
    // Constructor
    Dosen();
    Dosen(string nik, string name, string gender, string univ, string email, string fakultas, string nip, string penAkhir, string keahlian, Prodi prodiC, Course courseD);

    // Getter Setter
    string getNIP();
    void setNIP(string nip);
    string getAkhir();
    void setAkhir(string penAkhir);
    string getAhli();
    void setAhli(string keahlian);
    Prodi getProdiC();
    void setProdiC(Prodi prodiC);
    list<Course> getCourseD();
    void setCourseD(Course courseD);

    //  Destructor
    ~Dosen();
};