#include "header.hh"

int main()
{
    // Input course
    Course c1("IK0001", "Sistem Informasi");
    Course c2("IK0002", "Interaksi Manusia dan Komputer");
    Course c3("IK0003", "Pendidikan Digitalisasi");

    list<Course> courseList;
    courseList.push_back(c1);
    courseList.push_back(c2);
    courseList.push_back(c3);

    // Input pordi
    Prodi p1("IKOM", "Ilmu Komputer", {});
    p1.setCourseA(c1);
    p1.setCourseA(c2);

    Prodi p2("PIKOM", "Pendidikan Ilmu Komputer", {});
    p2.setCourseA(c3);

    list<Prodi> prodiList;
    prodiList.push_back(p1);
    prodiList.push_back(p2);

    // input mahasiswa
    Mahasiswa m1("3273", "Tama", "L", "UPI", "tama@upi.edu", "FPMIPA", "2000360", p1, {});
    m1.setCourseB(c1);
    m1.setCourseB(c2);

    Mahasiswa m2("3275", "Fauzan", "L", "UPI", "tama@upi.edu", "FPMIPA", "2000361", p2, {});
    m2.setCourseB(c3);

    list<Mahasiswa> mhsList;
    mhsList.push_back(m1);
    mhsList.push_back(m2);

    // input dosen
    Dosen d1("3279", "Asep Wahyudin", "L", "UPI", "away@upi.edu", "FPMIPA", "10001", "S3 Informatika", "Sistem Informasi", p1, {});
    d1.setCourseD(c1);
    d1.setCourseD(c2);

    Dosen d2("3278", "Dadang", "L", "UPI", "dadang@upi.edu", "FPMIPA", "10002", "S3 Pendidikan", "Micro Teaching", p2, {});
    d2.setCourseD(c3);

    list<Dosen> dosenList;
    dosenList.push_back(d1);
    dosenList.push_back(d2);

    // Print data
    cout << "========================= LIST MATA KULIAH =========================" << endl;
    int i = 0;
    for (auto it = courseList.begin(); it != courseList.end(); it++)
    {
        cout << "Mata Kuliah ke-" << (i + 1) << "\n";
        cout << " - Kode Mata Kuliah   : " << it->getKodeMatkul() << endl;
        cout << " - Nama Mata Kuliah   : " << it->getNamaMatkul() << endl;
        i++;
        cout << endl;
    }

    cout << "========================= LIST PROGRAM STUDI =========================" << endl;
    int j = 0;
    for (auto prodiIter = prodiList.begin(); prodiIter != prodiList.end(); prodiIter++)
    {
        cout << "Program Studi ke-" << (j + 1) << "\n";
        cout << "Kode Prodi         : " << prodiIter->getKodeProdi() << endl;
        cout << "Nama Prodi         : " << prodiIter->getNamaProdi() << endl;
        cout << "Daftar Mata Kuliah :" << endl;
        auto courseList = prodiIter->getCourseA();
        for (auto courseIter = courseList.begin(); courseIter != courseList.end(); courseIter++)
        {
            cout << " - " << courseIter->getNamaMatkul() << endl;
        }
        j++;
        cout << endl;
    }

    cout << "========================= LIST MAHASISWA =========================" << endl;
    int k = 0;
    for (auto mhsIt = mhsList.begin(); mhsIt != mhsList.end(); mhsIt++)
    {
        cout << "Mahasiswa ke-" << (k + 1) << "\n";
        cout << "NIK            : " << mhsIt->getNIK() << endl;
        cout << "Nama           : " << mhsIt->getName() << endl;
        cout << "Gender         : " << mhsIt->getGender() << endl;
        cout << "Universitas    : " << mhsIt->getUniv() << endl;
        cout << "Email          : " << mhsIt->getEmail() << endl;
        cout << "Fakultas       : " << mhsIt->getFakultas() << endl;
        cout << "NIM            : " << mhsIt->getNIM() << endl;
        cout << "Program Studi  : " << mhsIt->getProdiA().getNamaProdi() << endl;
        cout << "Mata Kuliah    :" << endl;
        auto courseList = mhsIt->getCourseB();
        for (auto courseIter = courseList.begin(); courseIter != courseList.end(); courseIter++)
        {
            cout << " - " << courseIter->getNamaMatkul() << endl;
        }
        k++;
        cout << endl;
    }

    cout << "========================= LIST DOSEN =========================" << endl;
    int l = 0;
    for (auto dosenIt = dosenList.begin(); dosenIt != dosenList.end(); dosenIt++)
    {
        cout << "Dosen ke-" << (l + 1) << "\n";
        cout << "NIK            : " << dosenIt->getNIK() << endl;
        cout << "Nama           : " << dosenIt->getName() << endl;
        cout << "Gender         : " << dosenIt->getGender() << endl;
        cout << "Universitas    : " << dosenIt->getUniv() << endl;
        cout << "Email          : " << dosenIt->getEmail() << endl;
        cout << "Fakultas       : " << dosenIt->getFakultas() << endl;
        cout << "NIP            : " << dosenIt->getNIP() << endl;
        cout << "Pendidikan     : " << dosenIt->getAkhir() << endl;
        cout << "Keahlian       : " << dosenIt->getAhli() << endl;
        cout << "Program Studi  : " << dosenIt->getProdiC().getNamaProdi() << endl;
        cout << "Kuliah Ajar    :" << endl;
        auto courseList = dosenIt->getCourseD();
        for (auto courseIter = courseList.begin(); courseIter != courseList.end(); courseIter++)
        {
            cout << " - " << courseIter->getNamaMatkul() << endl;
        }
        l++;
        cout << endl;
    }

    return 0;
}
