#include <iostream>
#include <string>

#include "petshop.h"

int main() {

	//Teste instancia petshop
	Petshop* pet = new Petshop("PetGarrafa");

	pet->cadastrarFuncionario();
	pet->cadastrarFuncionario();
	pet->removerFuncionario();
	//pet->cadastrarAnimal();
	//pet->editarAnimal();
	//pet->listarAnimais();
	//pet->removerFuncionario();
	//pet->cadastrarFuncionario();
	//pet->cadastrarAnimal();
	//pet->editarAnimal();
	pet->listarAnimais();
	//pet->removerAnimal();

	return 0;
}