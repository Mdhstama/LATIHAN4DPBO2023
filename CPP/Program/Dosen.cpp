#include "header.hh"

// Constructor
Dosen::Dosen() : Civitas()
{
    nip = "";
    penAkhir = "";
    keahlian = "";
}

// Constructor dengan atribut
Dosen::Dosen(string nik, string name, string gender, string univ, string email, string fakultas, string nip, string penAkhir, string keahlian, Prodi prodiC, Course courseD) : Civitas(nik, name, gender, univ, email, fakultas)
{
    this->nip = nip;
    this->penAkhir = penAkhir;
    this->keahlian = keahlian;
    this->prodiC = prodiC;
}

// Getter Setter
string Dosen::getNIP()
{
    return nip;
}

void Dosen::setNIP(string nip)
{
    this->nip = nip;
}

string Dosen::getAhli()
{
    return keahlian;
}

void Dosen::setAhli(string keahlian)
{
    this->keahlian = keahlian;
}

string Dosen::getAkhir()
{
    return penAkhir;
}

void Dosen::setAkhir(string penAkhir)
{
    this->penAkhir = penAkhir;
}

Prodi Dosen::getProdiC()
{
    return prodiC;
}

void Dosen::setProdiC(Prodi prodiC)
{
    this->prodiC = prodiC;
}

list<Course> Dosen::getCourseD()
{
    return courseD;
}

void Dosen::setCourseD(Course courseD)
{
    this->courseD.push_back(courseD);
}

// Destructor
Dosen::~Dosen() {}