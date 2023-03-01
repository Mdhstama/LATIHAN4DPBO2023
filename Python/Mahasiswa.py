from Civitas import Civitas
from Prodi import Prodi
from Course import Course

class Mahasiswa(Civitas):
    # mahasiswa adalah child dari civitas
    
    # atribut private
    __nim = ""
    __prodiA = Prodi()
    __courseB = [Course()]
    
    #constructor
    def __init__(self, nik="", name="", gender="", univ="", email="", fakultas = "", nim = "", prodiA = Prodi(), courseB = [Course()]):
        super().__init__(nik, name, gender, univ, email, fakultas)
        self.__nim = nim
        self.__prodiA = prodiA
        self.__courseB = courseB
    
    # getter setter
    def setNim(self, nim):
        self.__nim = nim
    
    def getNim(self):
        return self.__nim
    
    def setProdi(self, prodiA):
        self.__prodiA = prodiA
    
    def getProdi(self):
        return self.__prodiA

    def setCourse(self, courseB):
        self.__courseB = courseB
    
    def getCourse(self):
        return self.__courseB
    
    def printMhs(self):
        print("NIK              : " + str(self.getNik()))
        print("Nama             : " + str(self.getName()))
        print("Gender           : " + str(self.getGender()))
        print("Universitas      : " + str(self.getUniv()))
        print("Email            : " + str(self.getEmail()))
        print("Fakultas         : " + str(self.getFakultas()))
        print("NIM              : " + str(self.getNim()))
        print("Prodi            : " + str(self.getProdi().getNamaProdi()))
        print("Matkul Kontrak   : " )
        for i in range (len(self.__courseB)):
            print(str(i+1) + ") ", end="")
            print((self.__courseB[i].getNamaMatkul()))