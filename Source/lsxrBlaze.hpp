#ifndef LSXRBLAZE_HPP
#define LSXRBLAZE_HPP


#include "lsmrBase.h"
#include "lsqrBase.h"

template<typename Base>
class lsxrBlaze : Base
{

public:
    virtual void Aprod1(unsigned int m, unsigned int n, const double *x, double *y);
    virtual void Aprod2(unsigned int m, unsigned int n, double *x, const double *y);

private:
    const blaze::CompressedMatrix<> Amatrix;

};



#endif
