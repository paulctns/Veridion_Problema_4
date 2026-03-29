#include<iostream>
using namespace std;
// definirea starilor
enum stareZbor{
	Evaluare,  //stare initiala, gandire 8-10 min
	Rerutare, //scenariu 1
	Aterizare, //scenariu 2
	AlteScenarii //alt scenariu
};
stareZbor stareCurenta = Evaluare;
bool energie = true;
bool senzori_sol = true;
bool senzori_frontali=true;
int timp_rerutare=8;
//logica de decizie (8 – 10 min)
void evaluareSituatie(){
//alte scenarii
	if ( !energie && !senzori_frontali && !senzori_sol){
		stareCurenta=AlteScenarii;
		return;
	}
//scenariu I – totul ok, functioneaza bine
	if ( energie && senzori_frontali){
		stareCurenta=Rerutare;
	}
//scenariu II – rerutarea dureaza prea mult sau senzorii frontali au cedat
	If (timp_rerutare >=12 || !senzori_frontali) {
		If (senzori_sol){
			//scaneaza teren
			stareCurenta=Aterizare;
			}
		Else {
			stareCurenta = AlteScenarii;
			}
		}
	return;
}
	


//executie 
void executieManevra(){
switch(stareCurenta){
	case Rerutare:
		// primire coordonate noi dupa calcul si rerutare
	break;
	case Aterizare:
		//activeaza senzori soli si initializare coborare in zona decenta
	break;
	case AlteScenarii:
		//opreste tot si pregateste te de aterizare / impact/ de furtuna
	break;
case Evaluare:
		// asteapta pana proceseaza datele
	break;
}
}

int main(){
evaluareSituatie();
executieManevra();
return 0;
}
