from Civitas import Civitas
from Prodi import Prodi

class Mahasiswa(Civitas):
    # mahasiswa adalah child dari civitas
    
    # atribut private
    __nim = ""
    __prodiA = Prodi()
    
    #constructor
    def __init__(self, nik="", name="", gender="", univ="", email="", fakultas = "", nim = "", prodiA = Prodi()):
        super().__init__(nik, name, gender, univ, email, fakultas)
        self.__nim = nim
        self.__prodiA = prodiA
    
    # getter setter
    def setNim(self, nim):
        self.__nim = nim
    
    def getNim(self):
        return self.__nim
    
    def setProdi(self, prodiA):
        self.__prodiA = prodiA
    
    def getProdi(self):
        return self.__prodiA