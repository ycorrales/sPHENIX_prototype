// Tell emacs that this is a C++ source
//  -*- C++ -*-.
// $$Id: PHG4SpacalPrototype4SteppingAction.h,v 1.1 2014/03/24 01:36:44 jinhuang Exp $$

/*!
 * \file ${file_name}
 * \brief
 * \author Jin Huang <jhuang@bnl.gov>
 * \version $$Revision: 1.1 $$
 * \date $$Date: 2014/03/24 01:36:44 $$
 */

#ifndef G4CALOPROTOTYPE_PHG4SPACALPROTOTYPE4STEPPINGACTION_H
#define G4CALOPROTOTYPE_PHG4SPACALPROTOTYPE4STEPPINGACTION_H

#include <g4main/PHG4SteppingAction.h>

class G4Step;
class PHCompositeNode;
class PHG4Hit;
class PHG4HitContainer;
class PHG4Shower;
class PHG4SpacalPrototype4Detector;

class PHG4SpacalPrototype4SteppingAction : public PHG4SteppingAction
{
 public:
  //! constructor
  explicit PHG4SpacalPrototype4SteppingAction(PHG4SpacalPrototype4Detector *);

  //! destroctor
  virtual ~PHG4SpacalPrototype4SteppingAction()
  {
  }

  //! stepping action
  virtual bool
  UserSteppingAction(const G4Step *, bool);

  //! reimplemented from base class
  virtual void
  SetInterfacePointers(PHCompositeNode *);

  double
  get_zmin();

  double
  get_zmax();

 private:
  //! pointer to the detector
  PHG4SpacalPrototype4Detector *detector_;

  //! pointer to hit container
  PHG4HitContainer *hits_;
  PHG4HitContainer *absorberhits_;
  PHG4Hit *hit;
  PHG4HitContainer *savehitcontainer;
  PHG4Shower *saveshower;
};

#endif  // PHG4SpacalPrototype4SteppingAction_h
