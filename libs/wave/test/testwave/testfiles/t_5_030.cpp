/*=============================================================================
    Boost.Wave: A Standard compliant C++ preprocessor library
    http://www.boost.org/

    Copyright (c) 2001-2008 Hartmut Kaiser. Distributed under the Boost
    Software License, Version 1.0. (See accompanying file
    LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

    The tests included in this file were initially taken from the mcpp V2.5
    preprocessor validation suite and were modified to fit into the Boost.Wave 
    unit test requirements.
    The original files of the mcpp preprocessor are distributed under the 
    license reproduced at the end of this file.
=============================================================================*/

// Tests whether rescanning of a macro replace any macro call in the replacement
// text after substitution of parameters by pre-expanded-arguments.  This
// re-examination may involve the succeding sequences from the source
// file (what a queer thing!).

// Note: The tests 27.4 and 27.5 are currently disabled because of Wave's 
//       problem with replacement-list terminating in partial macro expansion. 

// 27.1: Cascaded use of object-like macros.
//R #line 34 "t_5_030.cpp"
#define NEST8   NEST7 + 8
#define NEST7   NEST6 + 7
#define NEST6   NEST5 + 6
#define NEST5   NEST4 + 5
#define NEST4   NEST3 + 4
#define NEST3   NEST2 + 3
#define NEST2   NEST1 + 2
#define NEST1   1
NEST8                             //R 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 

// 27.2: Cascaded use of function-like macros.
//R #line 42 "t_5_030.cpp"
#define FUNC4(a, b)    FUNC3(a, b) + NEST4
#define FUNC3(a, b)    FUNC2(a, b) + NEST3
#define FUNC2(a, b)    FUNC1(a, b) + NEST2
#define FUNC1(a, b)    (a) + (b)
FUNC4(NEST1, NEST2)               //R (1) + (1 + 2) + 1 + 2 + 1 + 2 + 3 + 1 + 2 + 3 + 4 

// 27.3: An identifier generated by ## operator is subject to expansion.
//R #line 48 "t_5_030.cpp"
#define GLUE( a, b)     a ## b
#define MACRO_1         1
GLUE(MACRO_, 1)                   //R 1 

// 27.4: 'SUB' as an argument of math() is not pre-expanded, since '('
//       missing.
//R #line 55 "t_5_030.cpp"
#define SUB(x, y)       (x - y)
#define MATH(op, a, b)  op( (a), (b))
MATH(SUB, a, b)                   //R ((a) - (b)) 

// 27.5: Queer thing.
// R #line 28 "t_5_030.cpp"
//#define HEAD            SUB(
//HEAD a,b )                        // R 

// 27.6: Recursive macro.
//R #line 66 "t_5_030.cpp"
#define M       N
#define N(a)    a 
M(m)                              //R m 

/*-
 * Copyright (c) 1998, 2002-2005 Kiyoshi Matsui <kmatsui@t3.rim.or.jp>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

