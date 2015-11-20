/*************************************************************************
* Project:Open Frameworks for Evolutionary Computation
*************************************************************************
* Author: Changhe Li
* Email: changhe.lw@gmail.com 
* Language: C++
*************************************************************************
*  This file is part of OFEC. This library is free software;
*  you can redistribute it and/or modify it under the terms of the
*  GNU General Public License as published by the Free Software
*  Foundation; either version 2, or (at your option) any later version.
*************************************************************************/
// Created: 21 July 2011
// Last modified:
#ifndef FGRIEWANK_H
#define FGRIEWANK_H

#include "BenchmarkFunction.h"

class FGriewank : public BenchmarkFunction
{
    public:
		FGriewank(ParamMap &v);
        FGriewank(const int rId, const int rDimNumber, string& rName);
        virtual ~FGriewank();
    protected:
        void initialize();
        void evaluate__(double const *x,vector<double>& obj);
    private:
};

#endif // FGRIEWANK_H
