from Human import Human

class Civitas(Human):
    # civitas adalah child dari Human
    
    # atribut privat
    __univ = ""
    __email = ""
    __fakultas = ""
    
    # constructor
    def __init__(self, nik="", name="", gender="", univ="", email="", fakultas=""):
        super().__init__(nik, name, gender)
        self.__univ = univ
        self.__email = email
        self.__fakultas = fakultas
    
    # getter setter
    def setUniv(self, univ):
        self.__univ = univ
    
    def getUniv(self):
        return self.__univ
    
    def getFakultas(self):
        return self.__fakultas
    
    def setEmail(self, email):
        self.__email = email
    
    def getEmail(self):
        return self.__email
    
    def getFakultas(self):
        return self.__fakultas