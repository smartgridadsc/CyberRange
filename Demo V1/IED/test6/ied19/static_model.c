/*
 * static_model.c
 *
 * automatically generated from ied19scl.icd
 */
#include "static_model.h"

static void initializeValues();

extern DataSet iedModelds_PROT_LLN0_rdsA;


extern DataSetEntry iedModelds_PROT_LLN0_rdsA_fcda0;
extern DataSetEntry iedModelds_PROT_LLN0_rdsA_fcda1;

DataSetEntry iedModelds_PROT_LLN0_rdsA_fcda0 = {
  "PROT",
  false,
  "PTTR1$ST$Mod$stVal",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_rdsA_fcda1
};

DataSetEntry iedModelds_PROT_LLN0_rdsA_fcda1 = {
  "PROT",
  false,
  "PTTR2$ST$Mod$stVal",
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_PROT_LLN0_rdsA = {
  "PROT",
  "LLN0$rdsA",
  2,
  &iedModelds_PROT_LLN0_rdsA_fcda0,
  NULL
};

LogicalDevice iedModel_PROT = {
    LogicalDeviceModelType,
    "PROT",
    (ModelNode*) &iedModel,
    NULL,
    (ModelNode*) &iedModel_PROT_LLN0
};

LogicalNode iedModel_PROT_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    (ModelNode*) &iedModel_PROT,
    (ModelNode*) &iedModel_PROT_PTTR1,
    (ModelNode*) &iedModel_PROT_LLN0_Beh,
};

DataObject iedModel_PROT_LLN0_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_PROT_LLN0,
    NULL,
    (ModelNode*) &iedModel_PROT_LLN0_Beh_stVal,
    0
};

DataAttribute iedModel_PROT_LLN0_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_LLN0_Beh,
    (ModelNode*) &iedModel_PROT_LLN0_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_LLN0_Beh,
    (ModelNode*) &iedModel_PROT_LLN0_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_LLN0_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_LLN0_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_PROT_PTTR1 = {
    LogicalNodeModelType,
    "PTTR1",
    (ModelNode*) &iedModel_PROT,
    (ModelNode*) &iedModel_PROT_PTTR2,
    (ModelNode*) &iedModel_PROT_PTTR1_NamPlt,
};

DataObject iedModel_PROT_PTTR1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_PROT_PTTR1,
    (ModelNode*) &iedModel_PROT_PTTR1_Str,
    (ModelNode*) &iedModel_PROT_PTTR1_NamPlt_vendor,
    0
};

DataAttribute iedModel_PROT_PTTR1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_PROT_PTTR1_NamPlt,
    (ModelNode*) &iedModel_PROT_PTTR1_NamPlt_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTTR1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_PROT_PTTR1_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTTR1_Str = {
    DataObjectModelType,
    "Str",
    (ModelNode*) &iedModel_PROT_PTTR1,
    (ModelNode*) &iedModel_PROT_PTTR1_Beh,
    (ModelNode*) &iedModel_PROT_PTTR1_Str_general,
    0
};

DataAttribute iedModel_PROT_PTTR1_Str_general = {
    DataAttributeModelType,
    "general",
    (ModelNode*) &iedModel_PROT_PTTR1_Str,
    (ModelNode*) &iedModel_PROT_PTTR1_Str_dirGeneral,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTTR1_Str_dirGeneral = {
    DataAttributeModelType,
    "dirGeneral",
    (ModelNode*) &iedModel_PROT_PTTR1_Str,
    (ModelNode*) &iedModel_PROT_PTTR1_Str_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTTR1_Str_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTTR1_Str,
    (ModelNode*) &iedModel_PROT_PTTR1_Str_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTTR1_Str_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTTR1_Str,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTTR1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_PROT_PTTR1,
    (ModelNode*) &iedModel_PROT_PTTR1_Op,
    (ModelNode*) &iedModel_PROT_PTTR1_Beh_stVal,
    0
};

DataAttribute iedModel_PROT_PTTR1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PTTR1_Beh,
    (ModelNode*) &iedModel_PROT_PTTR1_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTTR1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTTR1_Beh,
    (ModelNode*) &iedModel_PROT_PTTR1_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTTR1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTTR1_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTTR1_Op = {
    DataObjectModelType,
    "Op",
    (ModelNode*) &iedModel_PROT_PTTR1,
    (ModelNode*) &iedModel_PROT_PTTR1_AlmThm,
    (ModelNode*) &iedModel_PROT_PTTR1_Op_general,
    0
};

DataAttribute iedModel_PROT_PTTR1_Op_general = {
    DataAttributeModelType,
    "general",
    (ModelNode*) &iedModel_PROT_PTTR1_Op,
    (ModelNode*) &iedModel_PROT_PTTR1_Op_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTTR1_Op_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTTR1_Op,
    (ModelNode*) &iedModel_PROT_PTTR1_Op_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTTR1_Op_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTTR1_Op,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTTR1_AlmThm = {
    DataObjectModelType,
    "AlmThm",
    (ModelNode*) &iedModel_PROT_PTTR1,
    (ModelNode*) &iedModel_PROT_PTTR1_Health,
    (ModelNode*) &iedModel_PROT_PTTR1_AlmThm_stVal,
    0
};

DataAttribute iedModel_PROT_PTTR1_AlmThm_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PTTR1_AlmThm,
    (ModelNode*) &iedModel_PROT_PTTR1_AlmThm_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTTR1_AlmThm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTTR1_AlmThm,
    (ModelNode*) &iedModel_PROT_PTTR1_AlmThm_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTTR1_AlmThm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTTR1_AlmThm,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTTR1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_PROT_PTTR1,
    (ModelNode*) &iedModel_PROT_PTTR1_Mod,
    (ModelNode*) &iedModel_PROT_PTTR1_Health_stVal,
    0
};

DataAttribute iedModel_PROT_PTTR1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PTTR1_Health,
    (ModelNode*) &iedModel_PROT_PTTR1_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTTR1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTTR1_Health,
    (ModelNode*) &iedModel_PROT_PTTR1_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTTR1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTTR1_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTTR1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_PROT_PTTR1,
    NULL,
    (ModelNode*) &iedModel_PROT_PTTR1_Mod_stVal,
    0
};

DataAttribute iedModel_PROT_PTTR1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PTTR1_Mod,
    (ModelNode*) &iedModel_PROT_PTTR1_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTTR1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTTR1_Mod,
    (ModelNode*) &iedModel_PROT_PTTR1_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTTR1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTTR1_Mod,
    (ModelNode*) &iedModel_PROT_PTTR1_Mod_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTTR1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_PROT_PTTR1_Mod,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

LogicalNode iedModel_PROT_PTTR2 = {
    LogicalNodeModelType,
    "PTTR2",
    (ModelNode*) &iedModel_PROT,
    NULL,
    (ModelNode*) &iedModel_PROT_PTTR2_NamPlt,
};

DataObject iedModel_PROT_PTTR2_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_PROT_PTTR2,
    (ModelNode*) &iedModel_PROT_PTTR2_Str,
    (ModelNode*) &iedModel_PROT_PTTR2_NamPlt_vendor,
    0
};

DataAttribute iedModel_PROT_PTTR2_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_PROT_PTTR2_NamPlt,
    (ModelNode*) &iedModel_PROT_PTTR2_NamPlt_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTTR2_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_PROT_PTTR2_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTTR2_Str = {
    DataObjectModelType,
    "Str",
    (ModelNode*) &iedModel_PROT_PTTR2,
    (ModelNode*) &iedModel_PROT_PTTR2_Beh,
    (ModelNode*) &iedModel_PROT_PTTR2_Str_general,
    0
};

DataAttribute iedModel_PROT_PTTR2_Str_general = {
    DataAttributeModelType,
    "general",
    (ModelNode*) &iedModel_PROT_PTTR2_Str,
    (ModelNode*) &iedModel_PROT_PTTR2_Str_dirGeneral,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTTR2_Str_dirGeneral = {
    DataAttributeModelType,
    "dirGeneral",
    (ModelNode*) &iedModel_PROT_PTTR2_Str,
    (ModelNode*) &iedModel_PROT_PTTR2_Str_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTTR2_Str_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTTR2_Str,
    (ModelNode*) &iedModel_PROT_PTTR2_Str_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTTR2_Str_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTTR2_Str,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTTR2_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_PROT_PTTR2,
    (ModelNode*) &iedModel_PROT_PTTR2_Op,
    (ModelNode*) &iedModel_PROT_PTTR2_Beh_stVal,
    0
};

DataAttribute iedModel_PROT_PTTR2_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PTTR2_Beh,
    (ModelNode*) &iedModel_PROT_PTTR2_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTTR2_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTTR2_Beh,
    (ModelNode*) &iedModel_PROT_PTTR2_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTTR2_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTTR2_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTTR2_Op = {
    DataObjectModelType,
    "Op",
    (ModelNode*) &iedModel_PROT_PTTR2,
    (ModelNode*) &iedModel_PROT_PTTR2_AlmThm,
    (ModelNode*) &iedModel_PROT_PTTR2_Op_general,
    0
};

DataAttribute iedModel_PROT_PTTR2_Op_general = {
    DataAttributeModelType,
    "general",
    (ModelNode*) &iedModel_PROT_PTTR2_Op,
    (ModelNode*) &iedModel_PROT_PTTR2_Op_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTTR2_Op_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTTR2_Op,
    (ModelNode*) &iedModel_PROT_PTTR2_Op_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTTR2_Op_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTTR2_Op,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTTR2_AlmThm = {
    DataObjectModelType,
    "AlmThm",
    (ModelNode*) &iedModel_PROT_PTTR2,
    (ModelNode*) &iedModel_PROT_PTTR2_Health,
    (ModelNode*) &iedModel_PROT_PTTR2_AlmThm_stVal,
    0
};

DataAttribute iedModel_PROT_PTTR2_AlmThm_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PTTR2_AlmThm,
    (ModelNode*) &iedModel_PROT_PTTR2_AlmThm_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTTR2_AlmThm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTTR2_AlmThm,
    (ModelNode*) &iedModel_PROT_PTTR2_AlmThm_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTTR2_AlmThm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTTR2_AlmThm,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTTR2_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_PROT_PTTR2,
    (ModelNode*) &iedModel_PROT_PTTR2_Mod,
    (ModelNode*) &iedModel_PROT_PTTR2_Health_stVal,
    0
};

DataAttribute iedModel_PROT_PTTR2_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PTTR2_Health,
    (ModelNode*) &iedModel_PROT_PTTR2_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTTR2_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTTR2_Health,
    (ModelNode*) &iedModel_PROT_PTTR2_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTTR2_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTTR2_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTTR2_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_PROT_PTTR2,
    NULL,
    (ModelNode*) &iedModel_PROT_PTTR2_Mod_stVal,
    0
};

DataAttribute iedModel_PROT_PTTR2_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PTTR2_Mod,
    (ModelNode*) &iedModel_PROT_PTTR2_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTTR2_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTTR2_Mod,
    (ModelNode*) &iedModel_PROT_PTTR2_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTTR2_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTTR2_Mod,
    (ModelNode*) &iedModel_PROT_PTTR2_Mod_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTTR2_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_PROT_PTTR2_Mod,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

extern ReportControlBlock iedModel_PROT_LLN0_report0;
extern ReportControlBlock iedModel_PROT_LLN0_report1;

ReportControlBlock iedModel_PROT_LLN0_report0 = {&iedModel_PROT_LLN0, "rcbA01", NULL, false, "rdsA", 1, 31, 255, 500, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report1};
ReportControlBlock iedModel_PROT_LLN0_report1 = {&iedModel_PROT_LLN0, "rcbA02", NULL, false, "rdsA", 1, 31, 255, 500, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, NULL};







IedModel iedModel = {
    "TIEDServer00",
    &iedModel_PROT,
    &iedModelds_PROT_LLN0_rdsA,
    &iedModel_PROT_LLN0_report0,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    initializeValues
};

static void
initializeValues()
{
}
