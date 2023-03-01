from Course import Course

class Prodi():
    
    # atribut privat
    __kodeProdi = ""
    __namaProdi = ""
    __courseA = [Course()]
    
    # constructor
    def __init__(self, kodeProdi = "", namaProdi = "", courseA = [Course()]):
        self.__kodeProdi = kodeProdi
        self.__namaProdi = namaProdi
        self.__courseA = courseA

    def getKodeProdi(self):
        return self.__kodeProdi
    
    def setKodeProdi(self, kodeProdi):
        self.__kodeProdi = kodeProdi

    def getNamaProdi(self):
        return self.__namaProdi
    
    def setNamaProdi(self, namaProdi):
        self.__namaProdi = namaProdi
        
    def getCourseA(self):
        return self.__courseA
    
    def setCourseA(self, courseA):
        self.__courseA = courseA
    
    def printProdi(self):
        print("Kode             : " + str(self.getKodeProdi()))
        print("Nama             : " + str(self.getNamaProdi()))
        print("Course           : ")
        for i in range (len(self.__courseA)):
            print(str(i+1) + ") ", end="")
            print((self.__courseA[i].getNamaMatkul()))