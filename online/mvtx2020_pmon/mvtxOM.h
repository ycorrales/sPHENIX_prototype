#ifndef __MVTX_OM_H__
#define __MVTX_OM_H__

#include <Event/Event.h>

int process_event (Event *e); //++CINT
int process_histos(float thresh = 10);
int mask_pixels(float thresh = 5);
int analysis();
int OM();
int print_canvas();
int print_status();
void reset_histos();
//set functions
void set_verbose(int v);
void set_refresh(int r);
void set_mask_hit_file_path(const char* aPath);
void set_beam_fit(bool flag);

int get_nevents();
void get_alignment();

#endif /* __MVTX_OM_H__ */
