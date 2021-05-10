/*
 * static_model.c
 *
 * automatically generated from ied12scl.icd
 */
#include "static_model.h"

static void initializeValues();

extern DataSet iedModelds_LogicalDevice_LLN0_Measurements;
extern DataSet iedModelds_LogicalDevice_LLN0_Controls;


extern DataSetEntry iedModelds_LogicalDevice_LLN0_Measurements_fcda0;
extern DataSetEntry iedModelds_LogicalDevice_LLN0_Measurements_fcda1;

DataSetEntry iedModelds_LogicalDevice_LLN0_Measurements_fcda0 = {
  "LogicalDevice",
  false,
  "GGIO1$MX$AnIn1$mag$f",
  -1,
  NULL,
  NULL,
  &iedModelds_LogicalDevice_LLN0_Measurements_fcda1
};

DataSetEntry iedModelds_LogicalDevice_LLN0_Measurements_fcda1 = {
  "LogicalDevice",
  false,
  "GGIO2$MX$AnIn1$mag$f",
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_LogicalDevice_LLN0_Measurements = {
  "LogicalDevice",
  "LLN0$Measurements",
  2,
  &iedModelds_LogicalDevice_LLN0_Measurements_fcda0,
  &iedModelds_LogicalDevice_LLN0_Controls
};

extern DataSetEntry iedModelds_LogicalDevice_LLN0_Controls_fcda0;

DataSetEntry iedModelds_LogicalDevice_LLN0_Controls_fcda0 = {
  "LogicalDevice",
  false,
  "GGIO3$ST$SPC1$stVal",
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_LogicalDevice_LLN0_Controls = {
  "LogicalDevice",
  "LLN0$Controls",
  1,
  &iedModelds_LogicalDevice_LLN0_Controls_fcda0,
  NULL
};

LogicalDevice iedModel_LogicalDevice = {
    LogicalDeviceModelType,
    "LogicalDevice",
    (ModelNode*) &iedModel,
    NULL,
    (ModelNode*) &iedModel_LogicalDevice_LLN0
};

LogicalNode iedModel_LogicalDevice_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    (ModelNode*) &iedModel_LogicalDevice,
    (ModelNode*) &iedModel_LogicalDevice_GGIO1,
    (ModelNode*) &iedModel_LogicalDevice_LLN0_Mod,
};

DataObject iedModel_LogicalDevice_LLN0_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_LogicalDevice_LLN0,
    (ModelNode*) &iedModel_LogicalDevice_LLN0_Beh,
    (ModelNode*) &iedModel_LogicalDevice_LLN0_Mod_stVal,
    0
};

DataAttribute iedModel_LogicalDevice_LLN0_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LogicalDevice_LLN0_Mod,
    (ModelNode*) &iedModel_LogicalDevice_LLN0_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_LLN0_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LogicalDevice_LLN0_Mod,
    (ModelNode*) &iedModel_LogicalDevice_LLN0_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_LLN0_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LogicalDevice_LLN0_Mod,
    (ModelNode*) &iedModel_LogicalDevice_LLN0_Mod_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_LLN0_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_LogicalDevice_LLN0_Mod,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_LogicalDevice_LLN0_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_LogicalDevice_LLN0,
    (ModelNode*) &iedModel_LogicalDevice_LLN0_Health,
    (ModelNode*) &iedModel_LogicalDevice_LLN0_Beh_stVal,
    0
};

DataAttribute iedModel_LogicalDevice_LLN0_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LogicalDevice_LLN0_Beh,
    (ModelNode*) &iedModel_LogicalDevice_LLN0_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_LLN0_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LogicalDevice_LLN0_Beh,
    (ModelNode*) &iedModel_LogicalDevice_LLN0_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_LLN0_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LogicalDevice_LLN0_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LogicalDevice_LLN0_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_LogicalDevice_LLN0,
    (ModelNode*) &iedModel_LogicalDevice_LLN0_NamPlt,
    (ModelNode*) &iedModel_LogicalDevice_LLN0_Health_stVal,
    0
};

DataAttribute iedModel_LogicalDevice_LLN0_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LogicalDevice_LLN0_Health,
    (ModelNode*) &iedModel_LogicalDevice_LLN0_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_LLN0_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LogicalDevice_LLN0_Health,
    (ModelNode*) &iedModel_LogicalDevice_LLN0_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_LLN0_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LogicalDevice_LLN0_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LogicalDevice_LLN0_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_LogicalDevice_LLN0,
    NULL,
    (ModelNode*) &iedModel_LogicalDevice_LLN0_NamPlt_vendor,
    0
};

DataAttribute iedModel_LogicalDevice_LLN0_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_LogicalDevice_LLN0_NamPlt,
    (ModelNode*) &iedModel_LogicalDevice_LLN0_NamPlt_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_LLN0_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_LogicalDevice_LLN0_NamPlt,
    (ModelNode*) &iedModel_LogicalDevice_LLN0_NamPlt_d,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_LLN0_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LogicalDevice_LLN0_NamPlt,
    (ModelNode*) &iedModel_LogicalDevice_LLN0_NamPlt_configRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_LLN0_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_LogicalDevice_LLN0_NamPlt,
    (ModelNode*) &iedModel_LogicalDevice_LLN0_NamPlt_ldNs,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_LLN0_NamPlt_ldNs = {
    DataAttributeModelType,
    "ldNs",
    (ModelNode*) &iedModel_LogicalDevice_LLN0_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_LogicalDevice_GGIO1 = {
    LogicalNodeModelType,
    "GGIO1",
    (ModelNode*) &iedModel_LogicalDevice,
    (ModelNode*) &iedModel_LogicalDevice_GGIO2,
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_Mod,
};

DataObject iedModel_LogicalDevice_GGIO1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_LogicalDevice_GGIO1,
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_Beh,
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_Mod_stVal,
    0
};

DataAttribute iedModel_LogicalDevice_GGIO1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_Mod,
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_Mod,
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_Mod,
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_Mod_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_Mod,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_LogicalDevice_GGIO1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_LogicalDevice_GGIO1,
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_Health,
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_Beh_stVal,
    0
};

DataAttribute iedModel_LogicalDevice_GGIO1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_Beh,
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_Beh,
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LogicalDevice_GGIO1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_LogicalDevice_GGIO1,
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_NamPlt,
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_Health_stVal,
    0
};

DataAttribute iedModel_LogicalDevice_GGIO1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_Health,
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_Health,
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LogicalDevice_GGIO1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_LogicalDevice_GGIO1,
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_AnIn1,
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_NamPlt_vendor,
    0
};

DataAttribute iedModel_LogicalDevice_GGIO1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_NamPlt,
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_NamPlt_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_NamPlt,
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_NamPlt_d,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_NamPlt,
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_NamPlt_configRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO1_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_NamPlt,
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_NamPlt_ldNs,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO1_NamPlt_ldNs = {
    DataAttributeModelType,
    "ldNs",
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LogicalDevice_GGIO1_AnIn1 = {
    DataObjectModelType,
    "AnIn1",
    (ModelNode*) &iedModel_LogicalDevice_GGIO1,
    NULL,
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_AnIn1_mag,
    0
};

DataAttribute iedModel_LogicalDevice_GGIO1_AnIn1_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_AnIn1,
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_AnIn1_q,
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_AnIn1_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO1_AnIn1_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_AnIn1_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO1_AnIn1_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_AnIn1,
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_AnIn1_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO1_AnIn1_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LogicalDevice_GGIO1_AnIn1,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_LogicalDevice_GGIO2 = {
    LogicalNodeModelType,
    "GGIO2",
    (ModelNode*) &iedModel_LogicalDevice,
    (ModelNode*) &iedModel_LogicalDevice_GGIO3,
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_Mod,
};

DataObject iedModel_LogicalDevice_GGIO2_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_LogicalDevice_GGIO2,
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_Beh,
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_Mod_stVal,
    0
};

DataAttribute iedModel_LogicalDevice_GGIO2_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_Mod,
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO2_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_Mod,
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO2_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_Mod,
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_Mod_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO2_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_Mod,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_LogicalDevice_GGIO2_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_LogicalDevice_GGIO2,
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_Health,
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_Beh_stVal,
    0
};

DataAttribute iedModel_LogicalDevice_GGIO2_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_Beh,
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO2_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_Beh,
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO2_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LogicalDevice_GGIO2_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_LogicalDevice_GGIO2,
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_NamPlt,
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_Health_stVal,
    0
};

DataAttribute iedModel_LogicalDevice_GGIO2_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_Health,
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO2_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_Health,
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO2_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LogicalDevice_GGIO2_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_LogicalDevice_GGIO2,
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_AnIn1,
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_NamPlt_vendor,
    0
};

DataAttribute iedModel_LogicalDevice_GGIO2_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_NamPlt,
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_NamPlt_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO2_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_NamPlt,
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_NamPlt_d,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO2_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_NamPlt,
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_NamPlt_configRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO2_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_NamPlt,
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_NamPlt_ldNs,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO2_NamPlt_ldNs = {
    DataAttributeModelType,
    "ldNs",
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LogicalDevice_GGIO2_AnIn1 = {
    DataObjectModelType,
    "AnIn1",
    (ModelNode*) &iedModel_LogicalDevice_GGIO2,
    NULL,
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_AnIn1_mag,
    0
};

DataAttribute iedModel_LogicalDevice_GGIO2_AnIn1_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_AnIn1,
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_AnIn1_q,
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_AnIn1_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO2_AnIn1_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_AnIn1_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO2_AnIn1_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_AnIn1,
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_AnIn1_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO2_AnIn1_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LogicalDevice_GGIO2_AnIn1,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_LogicalDevice_GGIO3 = {
    LogicalNodeModelType,
    "GGIO3",
    (ModelNode*) &iedModel_LogicalDevice,
    NULL,
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_Mod,
};

DataObject iedModel_LogicalDevice_GGIO3_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_LogicalDevice_GGIO3,
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_Beh,
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_Mod_stVal,
    0
};

DataAttribute iedModel_LogicalDevice_GGIO3_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_Mod,
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO3_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_Mod,
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO3_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_Mod,
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_Mod_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO3_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_Mod,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_LogicalDevice_GGIO3_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_LogicalDevice_GGIO3,
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_Health,
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_Beh_stVal,
    0
};

DataAttribute iedModel_LogicalDevice_GGIO3_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_Beh,
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO3_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_Beh,
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO3_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LogicalDevice_GGIO3_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_LogicalDevice_GGIO3,
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_NamPlt,
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_Health_stVal,
    0
};

DataAttribute iedModel_LogicalDevice_GGIO3_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_Health,
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO3_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_Health,
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO3_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LogicalDevice_GGIO3_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_LogicalDevice_GGIO3,
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_SPC1,
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_NamPlt_vendor,
    0
};

DataAttribute iedModel_LogicalDevice_GGIO3_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_NamPlt,
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_NamPlt_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO3_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_NamPlt,
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_NamPlt_d,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO3_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_NamPlt,
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_NamPlt_configRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO3_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_NamPlt,
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_NamPlt_ldNs,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO3_NamPlt_ldNs = {
    DataAttributeModelType,
    "ldNs",
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LogicalDevice_GGIO3_SPC1 = {
    DataObjectModelType,
    "SPC1",
    (ModelNode*) &iedModel_LogicalDevice_GGIO3,
    NULL,
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_SPC1_stVal,
    0
};

DataAttribute iedModel_LogicalDevice_GGIO3_SPC1_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_SPC1,
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_SPC1_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO3_SPC1_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_SPC1,
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_SPC1_Oper,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO3_SPC1_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_SPC1,
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_SPC1_ctlModel,
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_SPC1_Oper_ctlVal,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO3_SPC1_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_SPC1_Oper,
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_SPC1_Oper_origin,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO3_SPC1_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_SPC1_Oper,
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_SPC1_Oper_ctlNum,
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_SPC1_Oper_origin_orCat,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO3_SPC1_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_SPC1_Oper_origin,
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_SPC1_Oper_origin_orIdent,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO3_SPC1_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_SPC1_Oper_origin,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO3_SPC1_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_SPC1_Oper,
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_SPC1_Oper_T,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO3_SPC1_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_SPC1_Oper,
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_SPC1_Oper_Test,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO3_SPC1_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_SPC1_Oper,
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_SPC1_Oper_Check,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO3_SPC1_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_SPC1_Oper,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO3_SPC1_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_SPC1,
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_SPC1_t,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LogicalDevice_GGIO3_SPC1_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LogicalDevice_GGIO3_SPC1,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

extern ReportControlBlock iedModel_LogicalDevice_LLN0_report0;
extern ReportControlBlock iedModel_LogicalDevice_LLN0_report1;
extern ReportControlBlock iedModel_LogicalDevice_LLN0_report2;
extern ReportControlBlock iedModel_LogicalDevice_LLN0_report3;
extern ReportControlBlock iedModel_LogicalDevice_LLN0_report4;
extern ReportControlBlock iedModel_LogicalDevice_LLN0_report5;
extern ReportControlBlock iedModel_LogicalDevice_LLN0_report6;
extern ReportControlBlock iedModel_LogicalDevice_LLN0_report7;
extern ReportControlBlock iedModel_LogicalDevice_LLN0_report8;
extern ReportControlBlock iedModel_LogicalDevice_LLN0_report9;

ReportControlBlock iedModel_LogicalDevice_LLN0_report0 = {&iedModel_LogicalDevice_LLN0, "Measurements01", "Measurements", false, "Measurements", 0, 31, 255, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_LogicalDevice_LLN0_report1};
ReportControlBlock iedModel_LogicalDevice_LLN0_report1 = {&iedModel_LogicalDevice_LLN0, "Measurements02", "Measurements", false, "Measurements", 0, 31, 255, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_LogicalDevice_LLN0_report2};
ReportControlBlock iedModel_LogicalDevice_LLN0_report2 = {&iedModel_LogicalDevice_LLN0, "Measurements03", "Measurements", false, "Measurements", 0, 31, 255, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_LogicalDevice_LLN0_report3};
ReportControlBlock iedModel_LogicalDevice_LLN0_report3 = {&iedModel_LogicalDevice_LLN0, "Measurements04", "Measurements", false, "Measurements", 0, 31, 255, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_LogicalDevice_LLN0_report4};
ReportControlBlock iedModel_LogicalDevice_LLN0_report4 = {&iedModel_LogicalDevice_LLN0, "Measurements05", "Measurements", false, "Measurements", 0, 31, 255, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_LogicalDevice_LLN0_report5};
ReportControlBlock iedModel_LogicalDevice_LLN0_report5 = {&iedModel_LogicalDevice_LLN0, "Controls01", "Controls", false, "Controls", 0, 31, 255, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_LogicalDevice_LLN0_report6};
ReportControlBlock iedModel_LogicalDevice_LLN0_report6 = {&iedModel_LogicalDevice_LLN0, "Controls02", "Controls", false, "Controls", 0, 31, 255, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_LogicalDevice_LLN0_report7};
ReportControlBlock iedModel_LogicalDevice_LLN0_report7 = {&iedModel_LogicalDevice_LLN0, "Controls03", "Controls", false, "Controls", 0, 31, 255, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_LogicalDevice_LLN0_report8};
ReportControlBlock iedModel_LogicalDevice_LLN0_report8 = {&iedModel_LogicalDevice_LLN0, "Controls04", "Controls", false, "Controls", 0, 31, 255, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_LogicalDevice_LLN0_report9};
ReportControlBlock iedModel_LogicalDevice_LLN0_report9 = {&iedModel_LogicalDevice_LLN0, "Controls05", "Controls", false, "Controls", 0, 31, 255, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, NULL};







IedModel iedModel = {
    "IEDServer12",
    &iedModel_LogicalDevice,
    &iedModelds_LogicalDevice_LLN0_Measurements,
    &iedModel_LogicalDevice_LLN0_report0,
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

iedModel_LogicalDevice_LLN0_Mod_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LogicalDevice_LLN0_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LogicalDevice_LLN0_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LogicalDevice_LLN0_Health_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LogicalDevice_GGIO1_Mod_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LogicalDevice_GGIO1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LogicalDevice_GGIO1_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LogicalDevice_GGIO1_Health_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LogicalDevice_GGIO2_Mod_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LogicalDevice_GGIO2_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LogicalDevice_GGIO2_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LogicalDevice_GGIO2_Health_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LogicalDevice_GGIO3_Mod_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LogicalDevice_GGIO3_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LogicalDevice_GGIO3_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LogicalDevice_GGIO3_Health_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LogicalDevice_GGIO3_SPC1_stVal.mmsValue = MmsValue_newBoolean(true);

iedModel_LogicalDevice_GGIO3_SPC1_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(1);
}
