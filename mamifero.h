#ifndef _MAMIFERO_H_
#define _MAMIFERO_H_

#include <string>
#include "animal.h"
#include "veterinario.h"
#include "tratador.h"

class Mamifero : public Animal {
	protected:
		std::string m_cor_pelo;

	public:
		Mamifero(int id, std::string classe, std::string nome_cientifico, 
			char sexo, double tamanho, std::string dieta, Veterinario veterinario, 
			Tratador tratador, std::string nome_batismo, std::string cor_pelo);
		~Mamifero();

		void setCorPelo(std::string cor_pelo);
		std::string getCorPelo();
	
};

#endif