#if !defined(__CINT__) || defined(__MAKECINT__) || defined(__CLING__)

#include "mvtxOM.h"

#include "pmonitor/pmonitor.h"

#include <string>

R__LOAD_LIBRARY(libmvtxOM)

#endif

void open_file( const char* aFileName, int nevents = 10001, bool run_mask = false, float thresh = .8 );
void open_file(int runnum, int nevents = 10001, const char* ftype = "longrun");


void open_file(int runnum, int nevents = 10001, const char* ftype = "longrun")
{
  //set_verbose(1);
  char filein[500];
  sprintf(filein,"/sphenix/data/data01/mvtx/%s/%s_%08d-0000.prdf",ftype,ftype,runnum);
  open_file(filein,  nevents);
  return;
}

void open_file( const char* aFileName, int nevents, bool run_mask, float thresh )
{
  gSystem->Load("libmvtxOM.so");

  std::string filein(aFileName);

  pfileopen(filein.data());
  prun(nevents);
  if ( run_mask ) 
    mask_pixels(thresh);
  OM();
  return;
}
