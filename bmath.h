/*
 * Module name:     bmath
 * Module version:  1.0.0
 * 
 * This module is a complement to the Blitz++ library's functions. There are
 * some missing functionality which is implemented in this module instead.
 *
 * The Blitz++ library has the following static functions declared:
 *  - dot(TinyVector, TinyVector);
 *  - dot(vector-expr, TinyVector);
 *  - dot(TinyVector, vector-expr);
 *  - dot(vector-expr, vector-expr);
 *  - product(TinyVector);
 *  - sum(TinyVector);
 *  - TinyVector<T,3> cross(TinyVector<T,3> x, TinyVector<T,3> y);
 * 
 */

#ifndef _BMATH_H_
#define _BMATH_H_

#include <cmath>
#include <blitz/tinyvec.h>
#include <blitz/tinyvec-et.h>   /* to use TinyVector expressions */

using namespace blitz;

typedef TinyVector<double,2> v2;
typedef TinyVector<double,3> v3;
//typedef TinyMatrix<double,2,2> m2;
//typedef TinyMatrix<double,3,3> m3;
//typedef TinyMatrix<double,4,4> m4;

namespace blitz {
    /*inline*/ double magnitude(const v2);
    /*inline*/ double magnitude(const v3);
    /*inline*/ void normalize(v2 &);
    /*inline*/ void normalize(v3 &);
    /*inline*/ double cross(const v2, const v2);
    
    int sign(double);
};

#endif
