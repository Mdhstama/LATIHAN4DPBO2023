from Civitas import Civitas
from Prodi import Prodi
from Course import Course

class Dosen(Civitas):
    # dosen adalah child dari civitas
    
    # atribut private
    __nip = ""
    __pendAkhir = ""
    __keahlian = ""
    __prodiA = Prodi()
    __courseB = [Course()]
    
    #constructor
    def __init__(self, nik="", name="", gender="", univ="", email="", fakultas = "", nip = "", keahlian = "", pendAkhir ="", prodiA = Prodi(), courseB = [Course()]):
        super().__init__(nik, name, gender, univ, email, fakultas)
        self.__nip = nip
        self.__keahlian = keahlian
        self.__pendAkhir = pendAkhir
        self.__prodiA = prodiA
        self.__courseB = courseB
    
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
    
    def setCourse(self, courseB):
        self.__courseB = courseB
    
    def getCourse(self):
        return self.__courseB
    
    def printDosen(self):
        print("NIK              : " + str(self.getNik()))
        print("Nama             : " + str(self.getName()))
        print("Gender           : " + str(self.getGender()))
        print("Universitas      : " + str(self.getUniv()))
        print("Email            : " + str(self.getEmail()))
        print("Fakultas         : " + str(self.getFakultas()))
        print("NIP              : " + str(self.getNip()))
        print("Pendidikan Akhir : " + str(self.getPend()))
        print("Keahlian         : " + str(self.getAhli()))
        print("Prodi            : " + str(self.getProdi().getNamaProdi()))
        print("Matkul Ajar      : " )
        for i in range (len(self.__courseB)):
            print(str(i+1) + ") ", end="")
            print((self.__courseB[i].getNamaMatkul()))