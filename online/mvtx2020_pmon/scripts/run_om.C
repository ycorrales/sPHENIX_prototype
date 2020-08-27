#if !defined(__CINT__) || defined(__MAKECINT__) || defined(__CLING__)

#include "mvtxOM.h"

#include "pmonitor/pmonitor.h"

R__LOAD_LIBRARY(libmvtxOM)

#endif

void run_om()
{
  gSystem->Load("libmvtxOM.so");
  //set_verbose(1);
  set_refresh(1000);
  rcdaqopen();
  pstart();
  OM();
  return;
}
