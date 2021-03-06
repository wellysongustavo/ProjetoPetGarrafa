#include <iostream>
#include "animal.h"
#include "anfibio.h"

Anfibio::Anfibio(int id, std::string classe, std::string nome_cientifico, 
				char sexo, double tamanho, std::string dieta, int id_veterinario, 
				int id_tratador, std::string nome_batismo, int total_de_mudas, date ultima_muda) : 

				Animal(id, classe, nome_cientifico, sexo, tamanho, dieta, id_veterinario, id_tratador, nome_batismo), 

				m_total_de_mudas(total_de_mudas), m_ultima_muda(ultima_muda) {}

Anfibio::~Anfibio() { /* void */ }

void Anfibio::dummy() { /* void */ }				

void Anfibio::setTotalMudas(int total_de_mudas) { m_total_de_mudas = total_de_mudas; }
void Anfibio::setUltimaMuda(date ultima_muda) { m_ultima_muda = ultima_muda; }
int Anfibio::getTotalMudas() { return m_total_de_mudas; }
date Anfibio::getUltimaMuda() { return m_ultima_muda; }

std::ostream& operator << (std::ostream& os, Anfibio& a) {
	os << "Id: " << a.m_id << "\nClasse: " << a.m_classe << "\nNome científico: " << a.m_nome_cientifico
	<< "\nSexo: " << a.m_sexo << "\nTamanho: " << a.m_tamanho << "\nDieta: " << a.m_dieta << "\nId do veterinario: " 
	<< a.m_id_veterinario << "\nId do tratador: " << a.m_id_tratador << "\nNome de batismo: " << a.m_nome_batismo 
	<< "\nTotal de mudas: " << a.m_total_de_mudas  << "\nData da ultima muda: " << a.m_ultima_muda 
	<< "\n________________________________________________________________________________" << std::endl;
	
	return os;	
}