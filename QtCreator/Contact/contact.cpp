#include "contact.h"

Contact::Contact()
{
}

void Contact::setNom(QString leNom)
{
    nom = leNom;
}
QString Contact::getNom()
{
    return nom;
}

void Contact::setPrenom(QString lePrenom)
{
    prenom = lePrenom;
}

QString Contact::getPrenom()
{
    return prenom;
}


void Contact::setId(QString leId)
{
    id = leId;
}

QString Contact::getId()
{
    return id;
}

void Contact::setMail(QString leMail)
{
    mail = leMail;
}

QString Contact::getMail()
{
    return mail;
}

void Contact::setTel(QString leTel)
{
    tel = leTel;
}

QString Contact::getTel()
{
    return tel;
}
