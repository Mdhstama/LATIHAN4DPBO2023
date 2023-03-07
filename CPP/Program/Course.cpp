#include "header.hh"

// Contructor
Course::Course()
{
    kodeMatkul = "";
    namaMatkul = "";
}

// Constructor dengan atribut
Course::Course(string kodeMatkul, string namaMatkul)
{
    this->kodeMatkul = kodeMatkul;
    this->namaMatkul = namaMatkul;
}

// Getter Setter
string Course::getKodeMatkul()
{
    return kodeMatkul;
}

void Course::setKodeMatkul(string kodeMatkul)
{
    this->kodeMatkul = kodeMatkul;
}

string Course::getNamaMatkul()
{
    return namaMatkul;
}

void Course::setNamaMatkul(string namaMatkul)
{
    this->namaMatkul = namaMatkul;
}

// Destructor
Course::~Course() {}