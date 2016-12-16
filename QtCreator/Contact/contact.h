#ifndef CONTACT_H
#define CONTACT_H

#include <string>
#include <vector>
#include <QString>
using namespace std;

class Contact
{

private:
    QString id;
    QString nom;
    QString prenom;
    QString mail;
    QString tel;


public:
    Contact();


    void setId(QString leId);
    QString getId();

    void setNom(QString leNom);
    QString getNom();

    void setPrenom(QString lePrenom);
    QString getPrenom();

    void setMail(QString leMail);
    QString getMail();

    void setTel(QString leTel);
    QString getTel();
};

#endif // CONTACT_H
