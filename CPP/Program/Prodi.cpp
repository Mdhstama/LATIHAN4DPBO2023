#include "header.hh"

// Constructor
Prodi::Prodi()
{
    kodeProdi = "";
    namaProdi = "";
}

// Constructor dengan atribut
Prodi::Prodi(string kodeProdi, string namaProdi, Course courseA)
{
    this->kodeProdi = kodeProdi;
    this->namaProdi = namaProdi;
}

// Getter Setter
string Prodi::getKodeProdi()
{
    return kodeProdi;
}

void Prodi::setKodeProdi(string kodeProdi)
{
    this->kodeProdi = kodeProdi;
}

string Prodi::getNamaProdi()
{
    return namaProdi;
}

void Prodi::setNamaProdi(string namaProdi)
{
    this->namaProdi = namaProdi;
}

list<Course> Prodi::getCourseA()
{
    return courseA;
}

void Prodi::setCourseA(Course courseA)
{
    this->courseA.push_back(courseA);
}

// Destructor
Prodi::~Prodi() {}
