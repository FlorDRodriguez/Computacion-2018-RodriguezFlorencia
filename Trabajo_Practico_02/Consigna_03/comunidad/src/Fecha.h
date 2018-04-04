/*
 * Fecha.h
 *
 *  Created on: 22 mar. 2018
 *      Author: hp
 */

#ifndef FECHA_H_
#define FECHA_H_

class Fecha {
private:
	int dia;
	int mes;
	int anho;
public:
	//getter and setter
	int getAnho() const;
	void setAnho(int anio);
	int getDia() const;
	void setDia(int dia);
	int getMes() const;
	void setMes(int mes);
	Fecha();//constructor vacio
	Fecha(int, int, int);//constructor sobrecargado
	//metodos que pide
	void imput();
	void show();

	//metodos que comparan
	bool operator<(Fecha);
	bool operator>(Fecha);
	bool operator<=(Fecha);
	bool operator>=(Fecha);
	bool operator==(Fecha);
	bool operator!=(Fecha);

	//metodo que suma dias a la fecha
	Fecha operator+=(int);
};

#endif /* FECHA_H_ */
