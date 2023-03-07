#include "header.hh"

// Constructor
Mahasiswa::Mahasiswa() : Civitas()
{
    nim = "";
}

// Construction dengan atribut
Mahasiswa::Mahasiswa(string nik, string name, string gender, string univ, string email, string fakultas, string nim, Prodi prodiA, Course courseB) : Civitas(nik, name, gender, univ, email, fakultas)
{
    this->nim = nim;
    this->prodiA = prodiA;
}

// Getter Setter
string Mahasiswa::getNIM()
{
    return nim;
}

void Mahasiswa::setNIM(string nim)
{
    this->nim = nim;
}

Prodi Mahasiswa::getProdiA()
{
    return prodiA;
}

void Mahasiswa::setProdiA(Prodi prodiA)
{
    this->prodiA = prodiA;
}

list<Course> Mahasiswa::getCourseB()
{
    return courseB;
}

void Mahasiswa::setCourseB(Course courseB)
{
    this->courseB.push_back(courseB);
}

// Destructor
Mahasiswa::~Mahasiswa() {}