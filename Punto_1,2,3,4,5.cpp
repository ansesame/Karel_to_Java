/*
 * Punto_1.cpp
 *
 *  Created on: 8/02/2018
 *      Author: vonnewmann
 */

#include <iostream>
using namespace std;

void consonancia(string letra);

int main1(){
	string letra;
	cout << "Ingresa la letra a la cual quiere revisar la consonancia en mayuscula: " << endl;
	cin >> letra;
	consonancia(letra);
}

void consonancia(string letra){
	if(letra=="A" || letra=="E" || letra=="I" || letra=="O" || letra=="U"){
		cout << "La letra ingresada, " << letra << " no es consonante";
	}else{
		cout << "La letra ingresada, " << letra << " es consonante";
	}
}



________________________________________________________________________________________________________________________



/*
 * Punto_2.cpp
 *
 *  Created on: 8/02/2018
 *      Author: vonnewmann
 */

#include <iostream>
using namespace std;

enum dias_semana{Lunes, Martes, Miercioles, Jueves, Viernes, Sabado, Domingo};

void fin_semana(dias_semana dia);

int main2(){
	dias_semana dia = Domingo;
	fin_semana(dia);
	dias_semana dia2 = Lunes;
	fin_semana(dia2);
}


void fin_semana(dias_semana dia){
	if(dia==Domingo || dia==Sabado){
		cout << "El " << dia << " es un día de fin de semana" << endl;
	}else{
		cout << "El " << dia << " no es un día de fin de semana" << endl;
	}
}



____________________________________________________________________________________________________________________________



/*
 * Punto_3.cpp
 *
 *  Created on: 8/02/2018
 *      Author: vonnewmann
 */
#include <iostream>
using namespace std;

float divisionydif(float num, float den);

int main3(){
	float num;
	float den;

	cout << "Ingrese el numerador: ";
	cin >> num;
	cout << "Ingrese el denominador: ";
	cin >> den;

	divisionydif(num, den);
}

float divisionydif(float num, float den){
	int numi = (int)num;
	int deni = (int)den;

	float div = num/den;
	int divi = numi/deni;

	cout << "La division de los números ingresados, como flotantes es:" << num << "/" << den << " = " << div << endl;
	cout << "La division de los números ingresados, como enteros es:" << numi << "/" << deni << " = " << divi << endl;

	return div;
}



__________________________________________________________________________________________________________________________


/*
 * Punto_4.cpp
 *
 *  Created on: 8/02/2018
 *      Author: vonnewmann
 */

#include <iostream>
using namespace std;

enum meses_anio{ Enero,Febrero, Marzo, Abril, Mayo, Junio, Julio,
	Agosto, Septiembre, Octubre, Noviembre, Diciembre};

int comparar_meses(meses_anio mes1, meses_anio mes2);

int main4(){
	int a = comparar_meses(Enero, Marzo);
	cout << a << endl;
	int b = comparar_meses(Diciembre, Abril);
	cout << b << endl;
	int c = comparar_meses(Febrero, Febrero);
	cout << c << endl;
}

int comparar_meses(meses_anio mes1, meses_anio mes2){
	if(mes1 < mes2){
		return -1;
	}else if(mes2 < mes1){
		return 1;
	}else{
		return 0;
	}
}



_________________________________________________________________________________________________________________________



/*
 * Punto_5.cpp
 *
 *  Created on: 8/02/2018
 *      Author: vonnewmann
 */

#include <iostream>
using namespace std;

void potencia(float numpos);

int main(){
	float numpos;
	cout << "Ingrese el número positivo que desea analizar: ";
	cin >> numpos;
	potencia(numpos);
}

void potencia(float numpos){
	float a = numpos;
	int contador = 0;
	while(a < 1E6){
		a = a*a;
		contador++;
	}
	cout << "El número de veces que hay que elevar " << numpos <<
			" a la segunda potencia para obtener un número mayor a 1E6 ES " << contador << endl;
}
/*Por corregir*/
