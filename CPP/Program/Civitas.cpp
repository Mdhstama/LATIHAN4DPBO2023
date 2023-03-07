#include "header.hh"

// Constructor
Civitas::Civitas() : Human()
{
    univ = "";
    email = "";
    fakultas = "";
}

Civitas::Civitas(string nik, string name, string gender, string univ, string email, string fakultas) : Human(name, gender, nik)
{
    this->univ = univ;
    this->email = email;
    this->fakultas = fakultas;
}

// Constructor dengan atribut
string Civitas::getUniv()
{
    return univ;
}

// Getter Setter
void Civitas::setUniv(string univ)
{
    this->univ = univ;
}

string Civitas::getEmail()
{
    return email;
}

void Civitas::setEmail(string email)
{
    this->email = email;
}

string Civitas::getFakultas()
{
    return fakultas;
}

void Civitas::setFakultas(string fakultas)
{
    this->fakultas = fakultas;
}

// Destructor
Civitas::~Civitas()
{
}