#ifndef COIN_SOSFIELD_H
#define COIN_SOSFIELD_H

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

#include <Inventor/fields/SoField.h>

class COIN_DLL_API SoSField : public SoField {
  typedef SoField inherited;

public:
  virtual ~SoSField();

  static void initClass(void);
  static SoType getClassTypeId(void);
  static void cleanupClass(void) { SoSField::classTypeId STATIC_SOTYPE_INIT; };

protected:
  SoSField(void);

private:
  static SoType classTypeId;
};

#endif // !COIN_SOSFIELD_H
