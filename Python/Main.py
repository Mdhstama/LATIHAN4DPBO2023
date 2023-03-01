# import class
from Course import Course
from Prodi import Prodi
from Mahasiswa import Mahasiswa
from Dosen import Dosen

# inisialisasi dan input objek
course = []
course1 = Course("MK0001","Sistem Informasi")
course2 = Course("MK0002","Seni Terapan")
course3 = Course("MK0003","Interaksi Manusia dan Komputer")
course.append(course1)
course.append(course2)
course.append(course3)

prodi = []
prodi1 = Prodi("P0001", "Ilmu Komputer", [course1, course3])
prodi2 = Prodi("P0002", "DKV", [course2])
prodi.append(prodi1)
prodi.append(prodi2)

mhs = [Mahasiswa() for i in range(2)]
mhs[0] = Mahasiswa("3273","Adit","L","UPI","tama@upi.edu","FPMIPA","2000360", prodi1, [course1, course3])
mhs[1] = Mahasiswa("3275","Hawwa","P","UPI","hawwa@upi.edu","FPSD","2000361", prodi2, [course2])

dosen = [Dosen() for i in range(2)]
dosen[0] = Dosen("3271", 'Asep',"L","UPI","away@upi.edu","FPMIPA","10001","Sistem Informasi","S3 Informatika", prodi1, [course1,course3])
dosen[1] = Dosen("3272", 'Dadang',"L","UPI","dada@upi.edu","FPSD","10002","Visual Design","S2 Kesenian", prodi2, [course2])

# print data
print("=============== LIST COURSE ===============")
i = 0
for Course in course:
    print("Course Ke-" + str(i+1))
    print("Kode Matkul  : " + Course.getKodeCourse())
    print("Nama Matkul  : " + Course.getNamaMatkul())
    i = i+1
    if i != i+1:
        print("")

print("=============== LIST PRODI ===============")
for i in range(2):
    print("Prodi Ke-" + str(i+1))
    prodi[i].printProdi()
    if i != 1+1:
        print("")

print("=============== LIST DOSEN ===============")
for i in range(2):
    print("Dosen Ke-" + str(i+1))
    dosen[i].printDosen()
    if i != 1+1:
        print("")

print("============= DATA MAHASISWA =============")
for i in range(2):
    print("Mahasiswa Ke-" + str(i+1))
    mhs[i].printMhs()
    if i != i+1:
        print("")