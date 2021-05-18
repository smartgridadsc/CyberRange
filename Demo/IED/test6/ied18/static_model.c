/*
 * static_model.c
 *
 * automatically generated from ied18scl.icd
 */
#include "static_model.h"

static void initializeValues();

extern DataSet iedModelds_PROT_LLN0_rdsA;


extern DataSetEntry iedModelds_PROT_LLN0_rdsA_fcda0;
extern DataSetEntry iedModelds_PROT_LLN0_rdsA_fcda1;
extern DataSetEntry iedModelds_PROT_LLN0_rdsA_fcda2;
extern DataSetEntry iedModelds_PROT_LLN0_rdsA_fcda3;

DataSetEntry iedModelds_PROT_LLN0_rdsA_fcda0 = {
  "PROT",
  false,
  "PTRC1$ST$Mod$stVal",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_rdsA_fcda1
};

DataSetEntry iedModelds_PROT_LLN0_rdsA_fcda1 = {
  "PROT",
  false,
  "PTRC2$ST$Mod$stVal",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_rdsA_fcda2
};

DataSetEntry iedModelds_PROT_LLN0_rdsA_fcda2 = {
  "PROT",
  false,
  "PTRC3$ST$Mod$stVal",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_rdsA_fcda3
};

DataSetEntry iedModelds_PROT_LLN0_rdsA_fcda3 = {
  "PROT",
  false,
  "PTRC4$ST$Mod$stVal",
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_PROT_LLN0_rdsA = {
  "PROT",
  "LLN0$rdsA",
  4,
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
    (ModelNode*) &iedModel_PROT_PTRC1,
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

LogicalNode iedModel_PROT_PTRC1 = {
    LogicalNodeModelType,
    "PTRC1",
    (ModelNode*) &iedModel_PROT,
    (ModelNode*) &iedModel_PROT_PTRC2,
    (ModelNode*) &iedModel_PROT_PTRC1_NamPlt,
};

DataObject iedModel_PROT_PTRC1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_PROT_PTRC1,
    (ModelNode*) &iedModel_PROT_PTRC1_Tr,
    (ModelNode*) &iedModel_PROT_PTRC1_NamPlt_vendor,
    0
};

DataAttribute iedModel_PROT_PTRC1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_PROT_PTRC1_NamPlt,
    (ModelNode*) &iedModel_PROT_PTRC1_NamPlt_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_PROT_PTRC1_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTRC1_Tr = {
    DataObjectModelType,
    "Tr",
    (ModelNode*) &iedModel_PROT_PTRC1,
    (ModelNode*) &iedModel_PROT_PTRC1_Beh,
    (ModelNode*) &iedModel_PROT_PTRC1_Tr_general,
    0
};

DataAttribute iedModel_PROT_PTRC1_Tr_general = {
    DataAttributeModelType,
    "general",
    (ModelNode*) &iedModel_PROT_PTRC1_Tr,
    (ModelNode*) &iedModel_PROT_PTRC1_Tr_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_Tr_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTRC1_Tr,
    (ModelNode*) &iedModel_PROT_PTRC1_Tr_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_Tr_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTRC1_Tr,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTRC1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_PROT_PTRC1,
    (ModelNode*) &iedModel_PROT_PTRC1_Op,
    (ModelNode*) &iedModel_PROT_PTRC1_Beh_stVal,
    0
};

DataAttribute iedModel_PROT_PTRC1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PTRC1_Beh,
    (ModelNode*) &iedModel_PROT_PTRC1_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTRC1_Beh,
    (ModelNode*) &iedModel_PROT_PTRC1_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTRC1_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTRC1_Op = {
    DataObjectModelType,
    "Op",
    (ModelNode*) &iedModel_PROT_PTRC1,
    (ModelNode*) &iedModel_PROT_PTRC1_Health,
    (ModelNode*) &iedModel_PROT_PTRC1_Op_general,
    0
};

DataAttribute iedModel_PROT_PTRC1_Op_general = {
    DataAttributeModelType,
    "general",
    (ModelNode*) &iedModel_PROT_PTRC1_Op,
    (ModelNode*) &iedModel_PROT_PTRC1_Op_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_Op_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTRC1_Op,
    (ModelNode*) &iedModel_PROT_PTRC1_Op_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_Op_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTRC1_Op,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTRC1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_PROT_PTRC1,
    (ModelNode*) &iedModel_PROT_PTRC1_Str,
    (ModelNode*) &iedModel_PROT_PTRC1_Health_stVal,
    0
};

DataAttribute iedModel_PROT_PTRC1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PTRC1_Health,
    (ModelNode*) &iedModel_PROT_PTRC1_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTRC1_Health,
    (ModelNode*) &iedModel_PROT_PTRC1_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTRC1_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTRC1_Str = {
    DataObjectModelType,
    "Str",
    (ModelNode*) &iedModel_PROT_PTRC1,
    (ModelNode*) &iedModel_PROT_PTRC1_OpCntRs,
    (ModelNode*) &iedModel_PROT_PTRC1_Str_general,
    0
};

DataAttribute iedModel_PROT_PTRC1_Str_general = {
    DataAttributeModelType,
    "general",
    (ModelNode*) &iedModel_PROT_PTRC1_Str,
    (ModelNode*) &iedModel_PROT_PTRC1_Str_dirGeneral,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_Str_dirGeneral = {
    DataAttributeModelType,
    "dirGeneral",
    (ModelNode*) &iedModel_PROT_PTRC1_Str,
    (ModelNode*) &iedModel_PROT_PTRC1_Str_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_Str_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTRC1_Str,
    (ModelNode*) &iedModel_PROT_PTRC1_Str_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_Str_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTRC1_Str,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTRC1_OpCntRs = {
    DataObjectModelType,
    "OpCntRs",
    (ModelNode*) &iedModel_PROT_PTRC1,
    (ModelNode*) &iedModel_PROT_PTRC1_Mod,
    (ModelNode*) &iedModel_PROT_PTRC1_OpCntRs_stVal,
    0
};

DataAttribute iedModel_PROT_PTRC1_OpCntRs_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PTRC1_OpCntRs,
    (ModelNode*) &iedModel_PROT_PTRC1_OpCntRs_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_OpCntRs_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTRC1_OpCntRs,
    (ModelNode*) &iedModel_PROT_PTRC1_OpCntRs_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_OpCntRs_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTRC1_OpCntRs,
    (ModelNode*) &iedModel_PROT_PTRC1_OpCntRs_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_OpCntRs_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_PROT_PTRC1_OpCntRs,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTRC1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_PROT_PTRC1,
    NULL,
    (ModelNode*) &iedModel_PROT_PTRC1_Mod_stVal,
    0
};

DataAttribute iedModel_PROT_PTRC1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PTRC1_Mod,
    (ModelNode*) &iedModel_PROT_PTRC1_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTRC1_Mod,
    (ModelNode*) &iedModel_PROT_PTRC1_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTRC1_Mod,
    (ModelNode*) &iedModel_PROT_PTRC1_Mod_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_PROT_PTRC1_Mod,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

LogicalNode iedModel_PROT_PTRC2 = {
    LogicalNodeModelType,
    "PTRC2",
    (ModelNode*) &iedModel_PROT,
    (ModelNode*) &iedModel_PROT_PTRC3,
    (ModelNode*) &iedModel_PROT_PTRC2_NamPlt,
};

DataObject iedModel_PROT_PTRC2_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_PROT_PTRC2,
    (ModelNode*) &iedModel_PROT_PTRC2_Tr,
    (ModelNode*) &iedModel_PROT_PTRC2_NamPlt_vendor,
    0
};

DataAttribute iedModel_PROT_PTRC2_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_PROT_PTRC2_NamPlt,
    (ModelNode*) &iedModel_PROT_PTRC2_NamPlt_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC2_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_PROT_PTRC2_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTRC2_Tr = {
    DataObjectModelType,
    "Tr",
    (ModelNode*) &iedModel_PROT_PTRC2,
    (ModelNode*) &iedModel_PROT_PTRC2_Beh,
    (ModelNode*) &iedModel_PROT_PTRC2_Tr_general,
    0
};

DataAttribute iedModel_PROT_PTRC2_Tr_general = {
    DataAttributeModelType,
    "general",
    (ModelNode*) &iedModel_PROT_PTRC2_Tr,
    (ModelNode*) &iedModel_PROT_PTRC2_Tr_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC2_Tr_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTRC2_Tr,
    (ModelNode*) &iedModel_PROT_PTRC2_Tr_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC2_Tr_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTRC2_Tr,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTRC2_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_PROT_PTRC2,
    (ModelNode*) &iedModel_PROT_PTRC2_Op,
    (ModelNode*) &iedModel_PROT_PTRC2_Beh_stVal,
    0
};

DataAttribute iedModel_PROT_PTRC2_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PTRC2_Beh,
    (ModelNode*) &iedModel_PROT_PTRC2_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC2_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTRC2_Beh,
    (ModelNode*) &iedModel_PROT_PTRC2_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC2_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTRC2_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTRC2_Op = {
    DataObjectModelType,
    "Op",
    (ModelNode*) &iedModel_PROT_PTRC2,
    (ModelNode*) &iedModel_PROT_PTRC2_Health,
    (ModelNode*) &iedModel_PROT_PTRC2_Op_general,
    0
};

DataAttribute iedModel_PROT_PTRC2_Op_general = {
    DataAttributeModelType,
    "general",
    (ModelNode*) &iedModel_PROT_PTRC2_Op,
    (ModelNode*) &iedModel_PROT_PTRC2_Op_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC2_Op_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTRC2_Op,
    (ModelNode*) &iedModel_PROT_PTRC2_Op_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC2_Op_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTRC2_Op,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTRC2_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_PROT_PTRC2,
    (ModelNode*) &iedModel_PROT_PTRC2_Str,
    (ModelNode*) &iedModel_PROT_PTRC2_Health_stVal,
    0
};

DataAttribute iedModel_PROT_PTRC2_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PTRC2_Health,
    (ModelNode*) &iedModel_PROT_PTRC2_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC2_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTRC2_Health,
    (ModelNode*) &iedModel_PROT_PTRC2_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC2_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTRC2_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTRC2_Str = {
    DataObjectModelType,
    "Str",
    (ModelNode*) &iedModel_PROT_PTRC2,
    (ModelNode*) &iedModel_PROT_PTRC2_OpCntRs,
    (ModelNode*) &iedModel_PROT_PTRC2_Str_general,
    0
};

DataAttribute iedModel_PROT_PTRC2_Str_general = {
    DataAttributeModelType,
    "general",
    (ModelNode*) &iedModel_PROT_PTRC2_Str,
    (ModelNode*) &iedModel_PROT_PTRC2_Str_dirGeneral,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC2_Str_dirGeneral = {
    DataAttributeModelType,
    "dirGeneral",
    (ModelNode*) &iedModel_PROT_PTRC2_Str,
    (ModelNode*) &iedModel_PROT_PTRC2_Str_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC2_Str_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTRC2_Str,
    (ModelNode*) &iedModel_PROT_PTRC2_Str_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC2_Str_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTRC2_Str,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTRC2_OpCntRs = {
    DataObjectModelType,
    "OpCntRs",
    (ModelNode*) &iedModel_PROT_PTRC2,
    (ModelNode*) &iedModel_PROT_PTRC2_Mod,
    (ModelNode*) &iedModel_PROT_PTRC2_OpCntRs_stVal,
    0
};

DataAttribute iedModel_PROT_PTRC2_OpCntRs_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PTRC2_OpCntRs,
    (ModelNode*) &iedModel_PROT_PTRC2_OpCntRs_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC2_OpCntRs_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTRC2_OpCntRs,
    (ModelNode*) &iedModel_PROT_PTRC2_OpCntRs_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC2_OpCntRs_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTRC2_OpCntRs,
    (ModelNode*) &iedModel_PROT_PTRC2_OpCntRs_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC2_OpCntRs_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_PROT_PTRC2_OpCntRs,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTRC2_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_PROT_PTRC2,
    NULL,
    (ModelNode*) &iedModel_PROT_PTRC2_Mod_stVal,
    0
};

DataAttribute iedModel_PROT_PTRC2_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PTRC2_Mod,
    (ModelNode*) &iedModel_PROT_PTRC2_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC2_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTRC2_Mod,
    (ModelNode*) &iedModel_PROT_PTRC2_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC2_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTRC2_Mod,
    (ModelNode*) &iedModel_PROT_PTRC2_Mod_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC2_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_PROT_PTRC2_Mod,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

LogicalNode iedModel_PROT_PTRC3 = {
    LogicalNodeModelType,
    "PTRC3",
    (ModelNode*) &iedModel_PROT,
    (ModelNode*) &iedModel_PROT_PTRC4,
    (ModelNode*) &iedModel_PROT_PTRC3_NamPlt,
};

DataObject iedModel_PROT_PTRC3_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_PROT_PTRC3,
    (ModelNode*) &iedModel_PROT_PTRC3_Tr,
    (ModelNode*) &iedModel_PROT_PTRC3_NamPlt_vendor,
    0
};

DataAttribute iedModel_PROT_PTRC3_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_PROT_PTRC3_NamPlt,
    (ModelNode*) &iedModel_PROT_PTRC3_NamPlt_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC3_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_PROT_PTRC3_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTRC3_Tr = {
    DataObjectModelType,
    "Tr",
    (ModelNode*) &iedModel_PROT_PTRC3,
    (ModelNode*) &iedModel_PROT_PTRC3_Beh,
    (ModelNode*) &iedModel_PROT_PTRC3_Tr_general,
    0
};

DataAttribute iedModel_PROT_PTRC3_Tr_general = {
    DataAttributeModelType,
    "general",
    (ModelNode*) &iedModel_PROT_PTRC3_Tr,
    (ModelNode*) &iedModel_PROT_PTRC3_Tr_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC3_Tr_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTRC3_Tr,
    (ModelNode*) &iedModel_PROT_PTRC3_Tr_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC3_Tr_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTRC3_Tr,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTRC3_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_PROT_PTRC3,
    (ModelNode*) &iedModel_PROT_PTRC3_Op,
    (ModelNode*) &iedModel_PROT_PTRC3_Beh_stVal,
    0
};

DataAttribute iedModel_PROT_PTRC3_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PTRC3_Beh,
    (ModelNode*) &iedModel_PROT_PTRC3_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC3_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTRC3_Beh,
    (ModelNode*) &iedModel_PROT_PTRC3_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC3_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTRC3_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTRC3_Op = {
    DataObjectModelType,
    "Op",
    (ModelNode*) &iedModel_PROT_PTRC3,
    (ModelNode*) &iedModel_PROT_PTRC3_Health,
    (ModelNode*) &iedModel_PROT_PTRC3_Op_general,
    0
};

DataAttribute iedModel_PROT_PTRC3_Op_general = {
    DataAttributeModelType,
    "general",
    (ModelNode*) &iedModel_PROT_PTRC3_Op,
    (ModelNode*) &iedModel_PROT_PTRC3_Op_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC3_Op_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTRC3_Op,
    (ModelNode*) &iedModel_PROT_PTRC3_Op_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC3_Op_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTRC3_Op,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTRC3_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_PROT_PTRC3,
    (ModelNode*) &iedModel_PROT_PTRC3_Str,
    (ModelNode*) &iedModel_PROT_PTRC3_Health_stVal,
    0
};

DataAttribute iedModel_PROT_PTRC3_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PTRC3_Health,
    (ModelNode*) &iedModel_PROT_PTRC3_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC3_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTRC3_Health,
    (ModelNode*) &iedModel_PROT_PTRC3_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC3_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTRC3_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTRC3_Str = {
    DataObjectModelType,
    "Str",
    (ModelNode*) &iedModel_PROT_PTRC3,
    (ModelNode*) &iedModel_PROT_PTRC3_OpCntRs,
    (ModelNode*) &iedModel_PROT_PTRC3_Str_general,
    0
};

DataAttribute iedModel_PROT_PTRC3_Str_general = {
    DataAttributeModelType,
    "general",
    (ModelNode*) &iedModel_PROT_PTRC3_Str,
    (ModelNode*) &iedModel_PROT_PTRC3_Str_dirGeneral,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC3_Str_dirGeneral = {
    DataAttributeModelType,
    "dirGeneral",
    (ModelNode*) &iedModel_PROT_PTRC3_Str,
    (ModelNode*) &iedModel_PROT_PTRC3_Str_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC3_Str_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTRC3_Str,
    (ModelNode*) &iedModel_PROT_PTRC3_Str_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC3_Str_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTRC3_Str,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTRC3_OpCntRs = {
    DataObjectModelType,
    "OpCntRs",
    (ModelNode*) &iedModel_PROT_PTRC3,
    (ModelNode*) &iedModel_PROT_PTRC3_Mod,
    (ModelNode*) &iedModel_PROT_PTRC3_OpCntRs_stVal,
    0
};

DataAttribute iedModel_PROT_PTRC3_OpCntRs_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PTRC3_OpCntRs,
    (ModelNode*) &iedModel_PROT_PTRC3_OpCntRs_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC3_OpCntRs_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTRC3_OpCntRs,
    (ModelNode*) &iedModel_PROT_PTRC3_OpCntRs_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC3_OpCntRs_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTRC3_OpCntRs,
    (ModelNode*) &iedModel_PROT_PTRC3_OpCntRs_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC3_OpCntRs_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_PROT_PTRC3_OpCntRs,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTRC3_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_PROT_PTRC3,
    NULL,
    (ModelNode*) &iedModel_PROT_PTRC3_Mod_stVal,
    0
};

DataAttribute iedModel_PROT_PTRC3_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PTRC3_Mod,
    (ModelNode*) &iedModel_PROT_PTRC3_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC3_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTRC3_Mod,
    (ModelNode*) &iedModel_PROT_PTRC3_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC3_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTRC3_Mod,
    (ModelNode*) &iedModel_PROT_PTRC3_Mod_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC3_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_PROT_PTRC3_Mod,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

LogicalNode iedModel_PROT_PTRC4 = {
    LogicalNodeModelType,
    "PTRC4",
    (ModelNode*) &iedModel_PROT,
    NULL,
    (ModelNode*) &iedModel_PROT_PTRC4_NamPlt,
};

DataObject iedModel_PROT_PTRC4_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_PROT_PTRC4,
    (ModelNode*) &iedModel_PROT_PTRC4_Tr,
    (ModelNode*) &iedModel_PROT_PTRC4_NamPlt_vendor,
    0
};

DataAttribute iedModel_PROT_PTRC4_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_PROT_PTRC4_NamPlt,
    (ModelNode*) &iedModel_PROT_PTRC4_NamPlt_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC4_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_PROT_PTRC4_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTRC4_Tr = {
    DataObjectModelType,
    "Tr",
    (ModelNode*) &iedModel_PROT_PTRC4,
    (ModelNode*) &iedModel_PROT_PTRC4_Beh,
    (ModelNode*) &iedModel_PROT_PTRC4_Tr_general,
    0
};

DataAttribute iedModel_PROT_PTRC4_Tr_general = {
    DataAttributeModelType,
    "general",
    (ModelNode*) &iedModel_PROT_PTRC4_Tr,
    (ModelNode*) &iedModel_PROT_PTRC4_Tr_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC4_Tr_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTRC4_Tr,
    (ModelNode*) &iedModel_PROT_PTRC4_Tr_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC4_Tr_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTRC4_Tr,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTRC4_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_PROT_PTRC4,
    (ModelNode*) &iedModel_PROT_PTRC4_Op,
    (ModelNode*) &iedModel_PROT_PTRC4_Beh_stVal,
    0
};

DataAttribute iedModel_PROT_PTRC4_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PTRC4_Beh,
    (ModelNode*) &iedModel_PROT_PTRC4_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC4_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTRC4_Beh,
    (ModelNode*) &iedModel_PROT_PTRC4_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC4_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTRC4_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTRC4_Op = {
    DataObjectModelType,
    "Op",
    (ModelNode*) &iedModel_PROT_PTRC4,
    (ModelNode*) &iedModel_PROT_PTRC4_Health,
    (ModelNode*) &iedModel_PROT_PTRC4_Op_general,
    0
};

DataAttribute iedModel_PROT_PTRC4_Op_general = {
    DataAttributeModelType,
    "general",
    (ModelNode*) &iedModel_PROT_PTRC4_Op,
    (ModelNode*) &iedModel_PROT_PTRC4_Op_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC4_Op_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTRC4_Op,
    (ModelNode*) &iedModel_PROT_PTRC4_Op_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC4_Op_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTRC4_Op,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTRC4_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_PROT_PTRC4,
    (ModelNode*) &iedModel_PROT_PTRC4_Str,
    (ModelNode*) &iedModel_PROT_PTRC4_Health_stVal,
    0
};

DataAttribute iedModel_PROT_PTRC4_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PTRC4_Health,
    (ModelNode*) &iedModel_PROT_PTRC4_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC4_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTRC4_Health,
    (ModelNode*) &iedModel_PROT_PTRC4_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC4_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTRC4_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTRC4_Str = {
    DataObjectModelType,
    "Str",
    (ModelNode*) &iedModel_PROT_PTRC4,
    (ModelNode*) &iedModel_PROT_PTRC4_OpCntRs,
    (ModelNode*) &iedModel_PROT_PTRC4_Str_general,
    0
};

DataAttribute iedModel_PROT_PTRC4_Str_general = {
    DataAttributeModelType,
    "general",
    (ModelNode*) &iedModel_PROT_PTRC4_Str,
    (ModelNode*) &iedModel_PROT_PTRC4_Str_dirGeneral,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC4_Str_dirGeneral = {
    DataAttributeModelType,
    "dirGeneral",
    (ModelNode*) &iedModel_PROT_PTRC4_Str,
    (ModelNode*) &iedModel_PROT_PTRC4_Str_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC4_Str_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTRC4_Str,
    (ModelNode*) &iedModel_PROT_PTRC4_Str_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC4_Str_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTRC4_Str,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTRC4_OpCntRs = {
    DataObjectModelType,
    "OpCntRs",
    (ModelNode*) &iedModel_PROT_PTRC4,
    (ModelNode*) &iedModel_PROT_PTRC4_Mod,
    (ModelNode*) &iedModel_PROT_PTRC4_OpCntRs_stVal,
    0
};

DataAttribute iedModel_PROT_PTRC4_OpCntRs_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PTRC4_OpCntRs,
    (ModelNode*) &iedModel_PROT_PTRC4_OpCntRs_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC4_OpCntRs_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTRC4_OpCntRs,
    (ModelNode*) &iedModel_PROT_PTRC4_OpCntRs_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC4_OpCntRs_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTRC4_OpCntRs,
    (ModelNode*) &iedModel_PROT_PTRC4_OpCntRs_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC4_OpCntRs_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_PROT_PTRC4_OpCntRs,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTRC4_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_PROT_PTRC4,
    NULL,
    (ModelNode*) &iedModel_PROT_PTRC4_Mod_stVal,
    0
};

DataAttribute iedModel_PROT_PTRC4_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PTRC4_Mod,
    (ModelNode*) &iedModel_PROT_PTRC4_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC4_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTRC4_Mod,
    (ModelNode*) &iedModel_PROT_PTRC4_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC4_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTRC4_Mod,
    (ModelNode*) &iedModel_PROT_PTRC4_Mod_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTRC4_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_PROT_PTRC4_Mod,
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
    "RIEDServer00",
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
