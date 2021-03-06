#include "animal.h"
#include "reptil.h"

Reptil::Reptil(int id, std::string classe, std::string nome_cientifico, 
			char sexo, double tamanho, std::string dieta, int id_veterinario, 
			int id_tratador, std::string nome_batismo, bool venenoso, 
			std::string tipo_venenoso) : Animal(id, classe, nome_cientifico, sexo, 
			tamanho, dieta, id_veterinario, id_tratador, nome_batismo), m_venenoso(venenoso),
			m_tipo_venenoso(tipo_venenoso) { /*void */	}

Reptil::~Reptil() { /* void */ }

void Reptil::dummy() { /* void */ }			

void Reptil::setVenenoso(bool venenoso) { m_venenoso = venenoso; }
void Reptil::setTipoVenenoso(std::string tipo_venenoso) { m_tipo_venenoso = tipo_venenoso; }
bool Reptil::getVenenoso() { return m_venenoso; }
std::string Reptil::getTipoVenenoso() { return m_tipo_venenoso; }

std::ostream& operator << (std::ostream& os, Reptil& r) {
	os << "Id: " << r.m_id << "\nClasse: " << r.m_classe << "\nNome científico: " << r.m_nome_cientifico
	<< "\nSexo: " << r.m_sexo << "\nTamanho: " << r.m_tamanho << "\nDieta: " << r.m_dieta << "\nId do veterinario: " 
	<< r.m_id_veterinario << "\nId do tratador: " << r.m_id_tratador << "\nNome de batismo: " << r.m_nome_batismo 
	<< "\nVenenoso: " << std::boolalpha << r.m_venenoso << "\nTipo venenoso: " << r.m_tipo_venenoso 
	<< "\n________________________________________________________________________________" << std::endl;
	
	return os;	
}
