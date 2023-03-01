class Course():
    
    # atribut privat
    __kodeCourse = ""
    __namaMatkul = ""
    
    # constructor
    def __init__(self, kodeCourse = "", namaMatkul = ""):
        self.__kodeCourse = kodeCourse
        self.__namaMatkul = namaMatkul
    
    # getter setter
    def setKodeCourse(self, kodeCourse):
        self.__kodeCourse = kodeCourse
        
    def getKodeCourse(self):
        return self.__kodeCourse

    def setNamaMatkul(self, namaMatkul):
        self.__namaMatkul = namaMatkul
        
    def getNamaMatkul(self):
        return self.__namaMatkul

