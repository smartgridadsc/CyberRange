/*
 * static_model.h
 *
 * automatically generated from ied19scl.icd
 */

#ifndef STATIC_MODEL_H_
#define STATIC_MODEL_H_

#include <stdlib.h>
#include "iec61850_model.h"

extern IedModel iedModel;
extern LogicalDevice iedModel_PROT;
extern LogicalNode   iedModel_PROT_LLN0;
extern DataObject    iedModel_PROT_LLN0_Beh;
extern DataAttribute iedModel_PROT_LLN0_Beh_stVal;
extern DataAttribute iedModel_PROT_LLN0_Beh_q;
extern DataAttribute iedModel_PROT_LLN0_Beh_t;
extern LogicalNode   iedModel_PROT_PTTR1;
extern DataObject    iedModel_PROT_PTTR1_NamPlt;
extern DataAttribute iedModel_PROT_PTTR1_NamPlt_vendor;
extern DataAttribute iedModel_PROT_PTTR1_NamPlt_swRev;
extern DataObject    iedModel_PROT_PTTR1_Str;
extern DataAttribute iedModel_PROT_PTTR1_Str_general;
extern DataAttribute iedModel_PROT_PTTR1_Str_dirGeneral;
extern DataAttribute iedModel_PROT_PTTR1_Str_q;
extern DataAttribute iedModel_PROT_PTTR1_Str_t;
extern DataObject    iedModel_PROT_PTTR1_Beh;
extern DataAttribute iedModel_PROT_PTTR1_Beh_stVal;
extern DataAttribute iedModel_PROT_PTTR1_Beh_q;
extern DataAttribute iedModel_PROT_PTTR1_Beh_t;
extern DataObject    iedModel_PROT_PTTR1_Op;
extern DataAttribute iedModel_PROT_PTTR1_Op_general;
extern DataAttribute iedModel_PROT_PTTR1_Op_q;
extern DataAttribute iedModel_PROT_PTTR1_Op_t;
extern DataObject    iedModel_PROT_PTTR1_AlmThm;
extern DataAttribute iedModel_PROT_PTTR1_AlmThm_stVal;
extern DataAttribute iedModel_PROT_PTTR1_AlmThm_q;
extern DataAttribute iedModel_PROT_PTTR1_AlmThm_t;
extern DataObject    iedModel_PROT_PTTR1_Health;
extern DataAttribute iedModel_PROT_PTTR1_Health_stVal;
extern DataAttribute iedModel_PROT_PTTR1_Health_q;
extern DataAttribute iedModel_PROT_PTTR1_Health_t;
extern DataObject    iedModel_PROT_PTTR1_Mod;
extern DataAttribute iedModel_PROT_PTTR1_Mod_stVal;
extern DataAttribute iedModel_PROT_PTTR1_Mod_q;
extern DataAttribute iedModel_PROT_PTTR1_Mod_t;
extern DataAttribute iedModel_PROT_PTTR1_Mod_ctlModel;
extern LogicalNode   iedModel_PROT_PTTR2;
extern DataObject    iedModel_PROT_PTTR2_NamPlt;
extern DataAttribute iedModel_PROT_PTTR2_NamPlt_vendor;
extern DataAttribute iedModel_PROT_PTTR2_NamPlt_swRev;
extern DataObject    iedModel_PROT_PTTR2_Str;
extern DataAttribute iedModel_PROT_PTTR2_Str_general;
extern DataAttribute iedModel_PROT_PTTR2_Str_dirGeneral;
extern DataAttribute iedModel_PROT_PTTR2_Str_q;
extern DataAttribute iedModel_PROT_PTTR2_Str_t;
extern DataObject    iedModel_PROT_PTTR2_Beh;
extern DataAttribute iedModel_PROT_PTTR2_Beh_stVal;
extern DataAttribute iedModel_PROT_PTTR2_Beh_q;
extern DataAttribute iedModel_PROT_PTTR2_Beh_t;
extern DataObject    iedModel_PROT_PTTR2_Op;
extern DataAttribute iedModel_PROT_PTTR2_Op_general;
extern DataAttribute iedModel_PROT_PTTR2_Op_q;
extern DataAttribute iedModel_PROT_PTTR2_Op_t;
extern DataObject    iedModel_PROT_PTTR2_AlmThm;
extern DataAttribute iedModel_PROT_PTTR2_AlmThm_stVal;
extern DataAttribute iedModel_PROT_PTTR2_AlmThm_q;
extern DataAttribute iedModel_PROT_PTTR2_AlmThm_t;
extern DataObject    iedModel_PROT_PTTR2_Health;
extern DataAttribute iedModel_PROT_PTTR2_Health_stVal;
extern DataAttribute iedModel_PROT_PTTR2_Health_q;
extern DataAttribute iedModel_PROT_PTTR2_Health_t;
extern DataObject    iedModel_PROT_PTTR2_Mod;
extern DataAttribute iedModel_PROT_PTTR2_Mod_stVal;
extern DataAttribute iedModel_PROT_PTTR2_Mod_q;
extern DataAttribute iedModel_PROT_PTTR2_Mod_t;
extern DataAttribute iedModel_PROT_PTTR2_Mod_ctlModel;



#define IEDMODEL_PROT (&iedModel_PROT)
#define IEDMODEL_PROT_LLN0 (&iedModel_PROT_LLN0)
#define IEDMODEL_PROT_LLN0_Beh (&iedModel_PROT_LLN0_Beh)
#define IEDMODEL_PROT_LLN0_Beh_stVal (&iedModel_PROT_LLN0_Beh_stVal)
#define IEDMODEL_PROT_LLN0_Beh_q (&iedModel_PROT_LLN0_Beh_q)
#define IEDMODEL_PROT_LLN0_Beh_t (&iedModel_PROT_LLN0_Beh_t)
#define IEDMODEL_PROT_PTTR1 (&iedModel_PROT_PTTR1)
#define IEDMODEL_PROT_PTTR1_NamPlt (&iedModel_PROT_PTTR1_NamPlt)
#define IEDMODEL_PROT_PTTR1_NamPlt_vendor (&iedModel_PROT_PTTR1_NamPlt_vendor)
#define IEDMODEL_PROT_PTTR1_NamPlt_swRev (&iedModel_PROT_PTTR1_NamPlt_swRev)
#define IEDMODEL_PROT_PTTR1_Str (&iedModel_PROT_PTTR1_Str)
#define IEDMODEL_PROT_PTTR1_Str_general (&iedModel_PROT_PTTR1_Str_general)
#define IEDMODEL_PROT_PTTR1_Str_dirGeneral (&iedModel_PROT_PTTR1_Str_dirGeneral)
#define IEDMODEL_PROT_PTTR1_Str_q (&iedModel_PROT_PTTR1_Str_q)
#define IEDMODEL_PROT_PTTR1_Str_t (&iedModel_PROT_PTTR1_Str_t)
#define IEDMODEL_PROT_PTTR1_Beh (&iedModel_PROT_PTTR1_Beh)
#define IEDMODEL_PROT_PTTR1_Beh_stVal (&iedModel_PROT_PTTR1_Beh_stVal)
#define IEDMODEL_PROT_PTTR1_Beh_q (&iedModel_PROT_PTTR1_Beh_q)
#define IEDMODEL_PROT_PTTR1_Beh_t (&iedModel_PROT_PTTR1_Beh_t)
#define IEDMODEL_PROT_PTTR1_Op (&iedModel_PROT_PTTR1_Op)
#define IEDMODEL_PROT_PTTR1_Op_general (&iedModel_PROT_PTTR1_Op_general)
#define IEDMODEL_PROT_PTTR1_Op_q (&iedModel_PROT_PTTR1_Op_q)
#define IEDMODEL_PROT_PTTR1_Op_t (&iedModel_PROT_PTTR1_Op_t)
#define IEDMODEL_PROT_PTTR1_AlmThm (&iedModel_PROT_PTTR1_AlmThm)
#define IEDMODEL_PROT_PTTR1_AlmThm_stVal (&iedModel_PROT_PTTR1_AlmThm_stVal)
#define IEDMODEL_PROT_PTTR1_AlmThm_q (&iedModel_PROT_PTTR1_AlmThm_q)
#define IEDMODEL_PROT_PTTR1_AlmThm_t (&iedModel_PROT_PTTR1_AlmThm_t)
#define IEDMODEL_PROT_PTTR1_Health (&iedModel_PROT_PTTR1_Health)
#define IEDMODEL_PROT_PTTR1_Health_stVal (&iedModel_PROT_PTTR1_Health_stVal)
#define IEDMODEL_PROT_PTTR1_Health_q (&iedModel_PROT_PTTR1_Health_q)
#define IEDMODEL_PROT_PTTR1_Health_t (&iedModel_PROT_PTTR1_Health_t)
#define IEDMODEL_PROT_PTTR1_Mod (&iedModel_PROT_PTTR1_Mod)
#define IEDMODEL_PROT_PTTR1_Mod_stVal (&iedModel_PROT_PTTR1_Mod_stVal)
#define IEDMODEL_PROT_PTTR1_Mod_q (&iedModel_PROT_PTTR1_Mod_q)
#define IEDMODEL_PROT_PTTR1_Mod_t (&iedModel_PROT_PTTR1_Mod_t)
#define IEDMODEL_PROT_PTTR1_Mod_ctlModel (&iedModel_PROT_PTTR1_Mod_ctlModel)
#define IEDMODEL_PROT_PTTR2 (&iedModel_PROT_PTTR2)
#define IEDMODEL_PROT_PTTR2_NamPlt (&iedModel_PROT_PTTR2_NamPlt)
#define IEDMODEL_PROT_PTTR2_NamPlt_vendor (&iedModel_PROT_PTTR2_NamPlt_vendor)
#define IEDMODEL_PROT_PTTR2_NamPlt_swRev (&iedModel_PROT_PTTR2_NamPlt_swRev)
#define IEDMODEL_PROT_PTTR2_Str (&iedModel_PROT_PTTR2_Str)
#define IEDMODEL_PROT_PTTR2_Str_general (&iedModel_PROT_PTTR2_Str_general)
#define IEDMODEL_PROT_PTTR2_Str_dirGeneral (&iedModel_PROT_PTTR2_Str_dirGeneral)
#define IEDMODEL_PROT_PTTR2_Str_q (&iedModel_PROT_PTTR2_Str_q)
#define IEDMODEL_PROT_PTTR2_Str_t (&iedModel_PROT_PTTR2_Str_t)
#define IEDMODEL_PROT_PTTR2_Beh (&iedModel_PROT_PTTR2_Beh)
#define IEDMODEL_PROT_PTTR2_Beh_stVal (&iedModel_PROT_PTTR2_Beh_stVal)
#define IEDMODEL_PROT_PTTR2_Beh_q (&iedModel_PROT_PTTR2_Beh_q)
#define IEDMODEL_PROT_PTTR2_Beh_t (&iedModel_PROT_PTTR2_Beh_t)
#define IEDMODEL_PROT_PTTR2_Op (&iedModel_PROT_PTTR2_Op)
#define IEDMODEL_PROT_PTTR2_Op_general (&iedModel_PROT_PTTR2_Op_general)
#define IEDMODEL_PROT_PTTR2_Op_q (&iedModel_PROT_PTTR2_Op_q)
#define IEDMODEL_PROT_PTTR2_Op_t (&iedModel_PROT_PTTR2_Op_t)
#define IEDMODEL_PROT_PTTR2_AlmThm (&iedModel_PROT_PTTR2_AlmThm)
#define IEDMODEL_PROT_PTTR2_AlmThm_stVal (&iedModel_PROT_PTTR2_AlmThm_stVal)
#define IEDMODEL_PROT_PTTR2_AlmThm_q (&iedModel_PROT_PTTR2_AlmThm_q)
#define IEDMODEL_PROT_PTTR2_AlmThm_t (&iedModel_PROT_PTTR2_AlmThm_t)
#define IEDMODEL_PROT_PTTR2_Health (&iedModel_PROT_PTTR2_Health)
#define IEDMODEL_PROT_PTTR2_Health_stVal (&iedModel_PROT_PTTR2_Health_stVal)
#define IEDMODEL_PROT_PTTR2_Health_q (&iedModel_PROT_PTTR2_Health_q)
#define IEDMODEL_PROT_PTTR2_Health_t (&iedModel_PROT_PTTR2_Health_t)
#define IEDMODEL_PROT_PTTR2_Mod (&iedModel_PROT_PTTR2_Mod)
#define IEDMODEL_PROT_PTTR2_Mod_stVal (&iedModel_PROT_PTTR2_Mod_stVal)
#define IEDMODEL_PROT_PTTR2_Mod_q (&iedModel_PROT_PTTR2_Mod_q)
#define IEDMODEL_PROT_PTTR2_Mod_t (&iedModel_PROT_PTTR2_Mod_t)
#define IEDMODEL_PROT_PTTR2_Mod_ctlModel (&iedModel_PROT_PTTR2_Mod_ctlModel)

#endif /* STATIC_MODEL_H_ */

