#ifndef ANAK_H
#define ANAK_H
//membuat class anak di file header anak.h 

    //membuat constructor dan destructor pada class anak
    anak(string pNama) : nama(pNama) {
        cout << "Anak \"" << nama << "\" ada \n";
    }

    ~anak() {
        cout << "Anak \"" << nama << "\" tidak ada\n";
    }
};
#endif