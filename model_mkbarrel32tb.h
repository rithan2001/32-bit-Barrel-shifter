/*
 * Generated by Bluespec Compiler (build 9f4a447)
 * 
 * On Sun Jun 14 10:56:31 IST 2020
 * 
 */

/* Generation options: keep-fires */
#ifndef __model_mkbarrel32tb_h__
#define __model_mkbarrel32tb_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"

#include "bs_model.h"
#include "mkbarrel32tb.h"

/* Class declaration for a model of mkbarrel32tb */
class MODEL_mkbarrel32tb : public Model {
 
 /* Top-level module instance */
 private:
  MOD_mkbarrel32tb *mkbarrel32tb_instance;
 
 /* Handle to the simulation kernel */
 private:
  tSimStateHdl sim_hdl;
 
 /* Constructor */
 public:
  MODEL_mkbarrel32tb();
 
 /* Functions required by the kernel */
 public:
  void create_model(tSimStateHdl simHdl, bool master);
  void destroy_model();
  void reset_model(bool asserted);
  void get_version(unsigned int *year,
		   unsigned int *month,
		   char const **annotation,
		   char const **build);
  time_t get_creation_time();
  void * get_instance();
  void dump_state();
  void dump_VCD_defs();
  void dump_VCD(tVCDDumpType dt);
};

/* Function for creating a new model */
extern "C" {
  void * new_MODEL_mkbarrel32tb();
}

#endif /* ifndef __model_mkbarrel32tb_h__ */