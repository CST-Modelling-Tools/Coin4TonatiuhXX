#ifndef COIN_SOMFVEC3B_H
#define COIN_SOMFVEC3B_H

/**************************************************************************\
 *
 *  This file is part of the Coin 3D visualization library.
 *  Copyright (C) 1998-2008 by Kongsberg SIM.  All rights reserved.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  ("GPL") version 2 as published by the Free Software Foundation.
 *  See the file LICENSE.GPL at the root directory of this source
 *  distribution for additional information about the GNU GPL.
 *
 *  For using Coin with software that can not be combined with the GNU
 *  GPL, and for taking advantage of the additional benefits of our
 *  support services, please contact Kongsberg SIM about acquiring
 *  a Coin Professional Edition License.
 *
 *  See http://www.coin3d.org/ for more information.
 *
 *  Kongsberg SIM, Postboks 1283, Pirsenteret, 7462 Trondheim, NORWAY.
 *  http://www.sim.no/  sales@sim.no  coin-support@coin3d.org
 *
\**************************************************************************/

#include <Inventor/fields/SoMField.h>
#include <Inventor/fields/SoSubField.h>
#include <Inventor/SbVec3b.h>

class COIN_DLL_API SoMFVec3b : public SoMField {
  typedef SoMField inherited;

  SO_MFIELD_HEADER(SoMFVec3b, SbVec3b, SbVec3b);
  SO_MFIELD_SETVALUESPOINTER_HEADER(SbVec3b);
  SO_MFIELD_SETVALUESPOINTER_HEADER(int8_t);

public:
  static void initClass(void);

  void setValues(int start, int num, const int8_t xyz[][3]);
  void set1Value(int idx, int8_t x, int8_t y, int8_t z);
  void set1Value(int idx, const int8_t xyz[3]);
  void setValue(int8_t x, int8_t y, int8_t z);
  void setValue(const int8_t xyz[3]);

}; // SoMFVec3b

#endif // !COIN_SOMFVEC3B_H
