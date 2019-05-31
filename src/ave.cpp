#include "animal.h"
#include "ave.h"

Ave::Ave(int id, std::string classe, std::string nome_cientifico,  
		char sexo, double tamanho, std::string dieta, Veterinario veterinario, 
		Tratador tratador, std::string nome_batismo, double tamanho_do_bico_cm,
		double envergadura_das_asas) : Animal(id, classe, nome_cientifico, sexo, 
		tamanho, dieta, veterinario, tratador, nome_batismo), m_tamanho_do_bico_cm(
		tamanho_do_bico_cm), m_envergadura_das_asas(envergadura_das_asas) { /* void */ }

Ave::~Ave() { /* void */ }

void Ave::dummy() { /* void */ }		

void Ave::setTamanhoBico(double tamanho_do_bico_cm) { m_tamanho_do_bico_cm = tamanho_do_bico_cm; }
void Ave::setEnvergaduraAsas(double envergadura_das_asas) { m_envergadura_das_asas = envergadura_das_asas; }
double Ave::getTamanhoBico() { return m_tamanho_do_bico_cm; }
double Ave::getEnvergaduraAsas() { return m_envergadura_das_asas; }

std::ostream& operator << (std::ostream& os, Ave& a) {
	os << "Id: " << a.m_id << "\nClasse: " << a.m_classe << "\nNome científico: " << a.m_nome_cientifico
	<< "\nSexo: " << a.m_sexo << "\nTamanho: " << a.m_tamanho << "\nDieta: " << a.m_dieta << "\nId do veterinario: " 
	<< a.m_veterinario.getId() << "\nId do tratador: " << a.m_tratador.getId() << "\nNome de batismo: " << a.m_nome_batismo 
	<< "\nTamanho do bico (em cm): " << a.m_tamanho_do_bico_cm  << "\nEnvergadura das asas (em cm): " << a.m_envergadura_das_asas
	<< "\n________________________________________________________________________________" << std::endl;
	
	return os;	
}