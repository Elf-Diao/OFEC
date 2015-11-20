/*************************************************************************
* Project: Library of Evolutionary Algoriths
*************************************************************************
* Author: Changhe Li & Ming Yang & Yong Xia
* Email: changhe.lw@google.com Or yangming0702@gmail.com
* Language: C++
*************************************************************************
*  This file is part of EAlib. This library is free software;
*  you can redistribute it and/or modify it under the terms of the
*  GNU General Public License as published by the Free Software
*  Foundation; either version 2, or (at your option) any later version.

*************************************************************************/
// Created: 13 Jan 2015
// Last modified:

#ifndef NSGAIII_DEXOVER2REALMU_H
#define NSGAIII_DEXOVER2REALMU_H

#include "../NSGAIII.h"
#include "../../../DE/MOEA_DE/DExover2_RealMuPopulation.h"

class NSGAIII_DExover2RealMu :public NSGAIII<DEIndividual,DExover2_RealMuPopulation>
{
public:
	NSGAIII_DExover2RealMu(ParamMap &v);
	~NSGAIII_DExover2RealMu(){};
protected:
	void evolve_mo();	
};


#endif //NSGAIII_DEXOVER2REALMU_H