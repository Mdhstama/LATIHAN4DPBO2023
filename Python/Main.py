# import class
from Course import Course
from Prodi import Prodi
from Mahasiswa import Mahasiswa
from Dosen import Dosen

# inisialisasi dan input objek
course = Course("MK0001","Sistem Informasi")
prodi = Prodi("P0001", "Ilmu Komputer", course)
mhs = Mahasiswa("3273","Adit","L","UPI","tama@upi.edu","FPMIPA","2000360", prodi)
dosen = Dosen("3274", 'Asep',"L","UPI","away@upi.edu","FPMIPA","10001","Sistem Informasi","S3 Informatika", prodi)

# print data
print("=============== LIST COURSE ===============")
print("Kode Mata Kuliah : " + str(course.getKodeCourse()))
print("Nama Mata Kuliah : " + str(course.getNamaMatkul()))

print("=============== LIST PRODI ===============")
print("Kode Prodi       : " + str(prodi.getKodeProdi()))
print("Nama Prodi       : " + str(prodi.getNamaProdi()))
print("List Course      : " + str(prodi.getCourseA().getNamaMatkul()))

print("=============== LIST DOSEN ===============")
print("Dosen 1")
print("NIK              : " + str(dosen.getNik()))
print("Nama             : " + str(dosen.getName()))
print("Gender           : " + str(dosen.getGender()))
print("Universitas      : " + str(dosen.getUniv()))
print("Email            : " + str(dosen.getEmail()))
print("Fakultas         : " + str(dosen.getFakultas()))
print("NIP              : " + str(dosen.getNip()))
print("Pendidikan Akhir : " + str(dosen.getPend()))
print("Keahlian         : " + str(dosen.getAhli()))
print("Prodi            : " + str(dosen.getProdi().getNamaProdi()))
print("Matkul Ajar      : " + str(dosen.getProdi().getCourseA().getNamaMatkul()))

print("============= DATA MAHASISWA =============")
print("Mahasiswa 1")
print("NIK              : " + str(mhs.getNik()))
print("Nama             : " + str(mhs.getName()))
print("Gender           : " + str(mhs.getGender()))
print("Universitas      : " + str(mhs.getUniv()))
print("Email            : " + str(mhs.getEmail()))
print("Fakultas         : " + str(mhs.getFakultas()))
print("NIM              : " + str(mhs.getNim()))
print("Prodi            : " + str(mhs.getProdi().getNamaProdi()))