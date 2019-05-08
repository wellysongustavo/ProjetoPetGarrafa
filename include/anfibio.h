#ifndef _ANFIBIO_H_
#define _ANFIBIO_H_

#include <string>
#include "animal.h"
#include "veterinario.h"
#include "tratador.h"

class Anfibio : public Animal {
	protected:
		int m_total_de_mudas;
		//date m_ultima_muda; 	/* Implemetar tipo date */

	public:
		Anfibio(int id, std::string classe, std::string nome_cientifico, 
			char sexo, double tamanho, std::string dieta, Veterinario veterinario, 
			Tratador tratador, std::string nome_batismo, int total_de_mudas); /* Falta date ultima_muda */ 
		~Anfibio();
		
		void setTotalMudas(int total_de_mudas);
		int getTotalMudas();
		/*
		void setUltimaMuda(date ultima_muda);
		date getUltimaMuda();
		*/	
};

#endif