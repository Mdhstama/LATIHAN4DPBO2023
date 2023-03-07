#include "header.hh"

// Constructor
Human::Human()
{
    nik = "";
    name = "";
    gender = "";
}

// Contructor dengan atribut
Human::Human(string nik, string name, string gender)
{
    this->nik = nik;
    this->gender = gender;
    this->name = name;
}

// Getter Setter
string Human::getNIK()
{
    return nik;
}

void Human::setNIK(string nik)
{
    this->nik = nik;
}

string Human::getName()
{
    return name;
}

void Human::setName(string name)
{
    this->name = name;
}

string Human::getGender()
{
    return gender;
}

void Human::setGender(string gender)
{
    this->gender = gender;
}

// Destructor
Human::~Human()
{
}