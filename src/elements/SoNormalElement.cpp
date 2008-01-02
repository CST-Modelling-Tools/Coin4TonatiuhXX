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

/*!
  \class SoNormalElement Inventor/elements/SoNormalElement.h
  \brief The SoNormalElement class is yet to be documented.
  \ingroup elements

  FIXME: write doc.
*/

#include <Inventor/elements/SoNormalElement.h>
#include <Inventor/elements/SoGLVBOElement.h>
#include <assert.h>

/*!
  \fn SoNormalElement::numNormals
  FIXME: write doc.
*/

/*!
  \fn SoNormalElement::normals
  FIXME: write doc.
*/

SO_ELEMENT_SOURCE(SoNormalElement);

/*!
  This static method initializes static data for the SoNormalElement class.
*/

void
SoNormalElement::initClass()
{
  SO_ELEMENT_INIT_CLASS(SoNormalElement, inherited);
}

/*!
  The destructor.
*/

SoNormalElement::~SoNormalElement()
{
}

//! FIXME: write doc.

void
SoNormalElement::set(SoState * const state,
                     SoNode * const node,
                     const int32_t numNormals,
                     const SbVec3f * const normals,
                     const SbBool unitLength)
{
  if (state->isElementEnabled(SoGLVBOElement::getClassStackIndex())) {
    SoGLVBOElement::setNormalVBO(state, NULL);
  }
  SoNormalElement *elem = (SoNormalElement*)
    SoReplacedElement::getElement(state, classStackIndex, node);
  if (elem) {
    elem->normals = normals;
    elem->numNormals = numNormals;
    elem->unitLength = unitLength;
  }
}

//! FIXME: write doc.

void
SoNormalElement::init(SoState *state)
{
  inherited::init(state);
  this->normals = NULL;
  this->numNormals = 0;
  this->unitLength = FALSE;
}

//! FIXME: write doc.

const SoNormalElement *
SoNormalElement::getInstance(SoState * const state)
{
  return (const SoNormalElement *)
    SoElement::getConstElement(state, classStackIndex);
}

//! FIXME: write doc.

//$ EXPORT INLINE
int32_t
SoNormalElement::getNum(void) const
{
  return this->numNormals;
}

//! FIXME: write doc.

//$ EXPORT INLINE
const SbVec3f &
SoNormalElement::get(const int index) const
{
  assert(index >= 0 && index < getNum());
  return this->normals[index];
}

/*!
  Returns a pointer to the normal array. This method is not part of the OIV API.
*/
const SbVec3f *
SoNormalElement::getArrayPtr(void) const
{
  return this->normals;
}

//$ EXPORT INLINE
SbBool
SoNormalElement::areNormalsUnitLength(void) const
{
  return this->unitLength;
}
