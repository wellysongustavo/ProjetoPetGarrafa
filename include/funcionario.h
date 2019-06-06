#ifndef _FUNCIONARIO_H_
#define _FUNCIONARIO_H_

#include <string>
#include <iostream>

class Funcionario {
	protected:
		std::string m_classe;
		int m_id;
		std::string m_nome;
		std::string m_cpf;
		int m_idade;
		std::string m_tipo_sanguineo;
		char m_fator_rh;
		std::string m_especialidade;

	public:
		Funcionario(std::string classe, int id, std::string nome, std::string cpf,
		int idade, std::string tipo_sanguineo, char fator_rh, std::string especialidade);
		~Funcionario();
		virtual void dummy() = 0;
		
		void setClasse(std::string classe);
		void setId(int id);
		void setNome(std::string nome);
		void setCpf(std::string cpf);
		void setIdade(int idade);
		void setTipoSanguineo(std::string tipo_sanguineo);
		void setFatorRh(char fator_rh);
		void setEspecialidade(std::string especialidade);

		std::string getClasse();
		int getId();
		std::string getNome();
		std::string getCpf();
		int getIdade();
		std::string getTipoSanguineo();
		char getFatorRh();
		std::string getEspecialidade();
		
		//adc método virtual
};
#endif