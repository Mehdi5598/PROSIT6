//#include "pch.h"
#include "CL_mappTBADRESSE.h"

namespace NS_Composants
{
    CL_mappTBADRESSE::CL_mappTBADRESSE(void)
    {
        this->id_adresse = -1;
        this->adress = "RIEN";
        this->Cp = "RIEN";
        this->ville = "RIEN";
        this->id_personne = -1;
    }
    String^ CL_mappTBADRESSE::SELECTByIdPersonne(void)
    {
        return "SELECT id_adresse, adress, ville, Cp, id_personne " +
            "FROM tb_adresse " +
            "WHERE(id_personne = " + this->id_personne + ");";
    }
    String^ CL_mappTBADRESSE::INSERT(void)
    {
        return "INSERT INTO tb_adresse(adress, ville, Cp, id_personne) " +
            "VALUES('" + this->adress + "', '" + this->ville + "', '" + this->Cp + "', " + this->id_personne + ");";
    }
    String^ CL_mappTBADRESSE::UPDATE(void)
    {
        return "UPDATE tb_adresse " +
            "SET adress ='" + this->adress + "', ville ='" + this->ville + "', Cp ='" + this->Cp + "' " +
            "WHERE(id_adresse =  " + this->id_adresse + "); ";
    }
    String^ CL_mappTBADRESSE::DELETE(void)
    {
        return "DELETE FROM tb_adresse " +
            "WHERE(id_adresse = " + this->id_adresse + ");";
    }
    void CL_mappTBADRESSE::setIdAdresse(int IdAdresse)
    {
        if (IdAdresse > 0)this->id_adresse = IdAdresse;
    }
    void CL_mappTBADRESSE::setAdresse(String^ Adresse)
    {
        if (Adresse != "")this->adress = Adresse;
    }
    void CL_mappTBADRESSE::setCp(String^ Cp)
    {
        if (Cp != "")this->Cp = Cp;
    }
    void CL_mappTBADRESSE::setVille(String^ Ville)
    {
        if (Ville != "")this->ville = Ville;
    }
    void CL_mappTBADRESSE::setIdPersonne(int IdPersonne)
    {
        if (IdPersonne > 0)this->id_personne = IdPersonne;
    }
    int CL_mappTBADRESSE::getIdAdresse(void)
    {
        return this->id_adresse;
    }
    String^ CL_mappTBADRESSE::getAdresse(void)
    {
        return this->adress;
    }
    String^ CL_mappTBADRESSE::getCp(void)
    {
        return this->Cp;
    }
    String^ CL_mappTBADRESSE::getVille(void)
    {
        return this->ville;
    }
    int CL_mappTBADRESSE::getIdPersonne(void)
    {
        return this->id_personne;
    }
}
