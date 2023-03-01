from Civitas import Civitas
from Prodi import Prodi

class Dosen(Civitas):
    # dosen adalah child dari civitas
    
    # atribut private
    __nip = ""
    __pendAkhir = ""
    __keahlian = ""
    __prodiA = Prodi()
    
    #constructor
    def __init__(self, nik="", name="", gender="", univ="", email="", fakultas = "", nip = "", keahlian = "", pendAkhir ="", prodiA = Prodi()):
        super().__init__(nik, name, gender, univ, email, fakultas)
        self.__nip = nip
        self.__keahlian = keahlian
        self.__pendAkhir = pendAkhir
        self.__prodiA = prodiA
    
    # getter setter
    def setNip(self, nip):
        self.__nip = nip
    
    def getNip(self):
        return self.__nip
    
    def setPend(self, pendAkhir):
        self.__pendAkhir = pendAkhir
    
    def getPend(self):
        return self.__pendAkhir

    def setAhli(self, keahlian):
        self.__keahlian = keahlian
    
    def getAhli(self):
        return self.__keahlian
    
    def setProdi(self, prodiA):
        self.__prodiA = prodiA
    
    def getProdi(self):
        return self.__prodiA