/**************************************************************************\
 *
 *  Copyright (C) 1998-2000 by Systems in Motion.  All rights reserved.
 *
 *  This file is part of the Coin library.
 *
 *  This file may be distributed under the terms of the Q Public License
 *  as defined by Troll Tech AS of Norway and appearing in the file
 *  LICENSE.QPL included in the packaging of this file.
 *
 *  If you want to use Coin in applications not covered by licenses
 *  compatible with the QPL, you can contact SIM to aquire a
 *  Professional Edition license for Coin.
 *
 *  Systems in Motion AS, Prof. Brochs gate 6, N-7030 Trondheim, NORWAY
 *  http://www.sim.no/ sales@sim.no Voice: +47 22114160 Fax: +47 67172912
 *
\**************************************************************************/

#ifndef COIN_SOTEXTURECOORDINATE2_H
#define COIN_SOTEXTURECOORDINATE2_H

#include <Inventor/nodes/SoSubNode.h>
#include <Inventor/fields/SoMFVec2f.h>
#include <Inventor/nodes/SoNode.h>


class SoTextureCoordinate2 : public SoNode {
  typedef SoNode inherited;

  SO_NODE_HEADER(SoTextureCoordinate2);

public:
  static void initClass(void);
  SoTextureCoordinate2(void);

  SoMFVec2f point;

  virtual void doAction(SoAction * action);
  virtual void GLRender(SoGLRenderAction * action);
  virtual void callback(SoCallbackAction * action);
  virtual void pick(SoPickAction * action);

protected:
  virtual ~SoTextureCoordinate2();
};

#endif // !COIN_SOTEXTURECOORDINATE2_H
