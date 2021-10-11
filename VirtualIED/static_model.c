/*
 * static_model.c
 *
 * automatically generated from config_files/IED0.icd
 */
#include "static_model.h"

static void initializeValues();

extern DataSet iedModelds_LD1_LLN0_MeasurementsIED0;
extern DataSet iedModelds_LD1_LLN0_CBStatusIED0;


extern DataSetEntry iedModelds_LD1_LLN0_MeasurementsIED0_fcda0;
extern DataSetEntry iedModelds_LD1_LLN0_MeasurementsIED0_fcda1;
extern DataSetEntry iedModelds_LD1_LLN0_MeasurementsIED0_fcda2;
extern DataSetEntry iedModelds_LD1_LLN0_MeasurementsIED0_fcda3;
extern DataSetEntry iedModelds_LD1_LLN0_MeasurementsIED0_fcda4;
extern DataSetEntry iedModelds_LD1_LLN0_MeasurementsIED0_fcda5;

DataSetEntry iedModelds_LD1_LLN0_MeasurementsIED0_fcda0 = {
  "LD1",
  false,
  "MMXU1$MX$A$phsA$cVal",
  -1,
  NULL,
  NULL,
  &iedModelds_LD1_LLN0_MeasurementsIED0_fcda1
};

DataSetEntry iedModelds_LD1_LLN0_MeasurementsIED0_fcda1 = {
  "LD1",
  false,
  "MMXU1$MX$A$phsB$cVal",
  -1,
  NULL,
  NULL,
  &iedModelds_LD1_LLN0_MeasurementsIED0_fcda2
};

DataSetEntry iedModelds_LD1_LLN0_MeasurementsIED0_fcda2 = {
  "LD1",
  false,
  "MMXU1$MX$A$phsC$cVal",
  -1,
  NULL,
  NULL,
  &iedModelds_LD1_LLN0_MeasurementsIED0_fcda3
};

DataSetEntry iedModelds_LD1_LLN0_MeasurementsIED0_fcda3 = {
  "LD1",
  false,
  "MMXU1$MX$PhV$phsA$cVal",
  -1,
  NULL,
  NULL,
  &iedModelds_LD1_LLN0_MeasurementsIED0_fcda4
};

DataSetEntry iedModelds_LD1_LLN0_MeasurementsIED0_fcda4 = {
  "LD1",
  false,
  "MMXU1$MX$PhV$phsB$cVal",
  -1,
  NULL,
  NULL,
  &iedModelds_LD1_LLN0_MeasurementsIED0_fcda5
};

DataSetEntry iedModelds_LD1_LLN0_MeasurementsIED0_fcda5 = {
  "LD1",
  false,
  "MMXU1$MX$PhV$phsC$cVal",
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_LD1_LLN0_MeasurementsIED0 = {
  "LD1",
  "LLN0$MeasurementsIED0",
  6,
  &iedModelds_LD1_LLN0_MeasurementsIED0_fcda0,
  &iedModelds_LD1_LLN0_CBStatusIED0
};

extern DataSetEntry iedModelds_LD1_LLN0_CBStatusIED0_fcda0;

DataSetEntry iedModelds_LD1_LLN0_CBStatusIED0_fcda0 = {
  "LD1",
  false,
  "GGIO1$ST$SPC1$stVal",
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_LD1_LLN0_CBStatusIED0 = {
  "LD1",
  "LLN0$CBStatusIED0",
  1,
  &iedModelds_LD1_LLN0_CBStatusIED0_fcda0,
  NULL
};

LogicalDevice iedModel_LD1 = {
    LogicalDeviceModelType,
    "LD1",
    (ModelNode*) &iedModel,
    NULL,
    (ModelNode*) &iedModel_LD1_LLN0
};

LogicalNode iedModel_LD1_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    (ModelNode*) &iedModel_LD1,
    (ModelNode*) &iedModel_LD1_MMXU1,
    (ModelNode*) &iedModel_LD1_LLN0_Mod,
};

DataObject iedModel_LD1_LLN0_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_LD1_LLN0,
    (ModelNode*) &iedModel_LD1_LLN0_Beh,
    (ModelNode*) &iedModel_LD1_LLN0_Mod_stVal,
    0
};

DataAttribute iedModel_LD1_LLN0_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD1_LLN0_Mod,
    (ModelNode*) &iedModel_LD1_LLN0_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD1_LLN0_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD1_LLN0_Mod,
    (ModelNode*) &iedModel_LD1_LLN0_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD1_LLN0_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD1_LLN0_Mod,
    (ModelNode*) &iedModel_LD1_LLN0_Mod_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_LLN0_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_LD1_LLN0_Mod,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_LD1_LLN0_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_LD1_LLN0,
    (ModelNode*) &iedModel_LD1_LLN0_Health,
    (ModelNode*) &iedModel_LD1_LLN0_Beh_stVal,
    0
};

DataAttribute iedModel_LD1_LLN0_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD1_LLN0_Beh,
    (ModelNode*) &iedModel_LD1_LLN0_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD1_LLN0_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD1_LLN0_Beh,
    (ModelNode*) &iedModel_LD1_LLN0_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD1_LLN0_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD1_LLN0_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LD1_LLN0_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_LD1_LLN0,
    (ModelNode*) &iedModel_LD1_LLN0_NamPlt,
    (ModelNode*) &iedModel_LD1_LLN0_Health_stVal,
    0
};

DataAttribute iedModel_LD1_LLN0_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD1_LLN0_Health,
    (ModelNode*) &iedModel_LD1_LLN0_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD1_LLN0_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD1_LLN0_Health,
    (ModelNode*) &iedModel_LD1_LLN0_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD1_LLN0_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD1_LLN0_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LD1_LLN0_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_LD1_LLN0,
    NULL,
    (ModelNode*) &iedModel_LD1_LLN0_NamPlt_vendor,
    0
};

DataAttribute iedModel_LD1_LLN0_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_LD1_LLN0_NamPlt,
    (ModelNode*) &iedModel_LD1_LLN0_NamPlt_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_LLN0_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_LD1_LLN0_NamPlt,
    (ModelNode*) &iedModel_LD1_LLN0_NamPlt_d,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_LLN0_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD1_LLN0_NamPlt,
    (ModelNode*) &iedModel_LD1_LLN0_NamPlt_configRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_LLN0_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_LD1_LLN0_NamPlt,
    (ModelNode*) &iedModel_LD1_LLN0_NamPlt_ldNs,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_LLN0_NamPlt_ldNs = {
    DataAttributeModelType,
    "ldNs",
    (ModelNode*) &iedModel_LD1_LLN0_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

LogicalNode iedModel_LD1_MMXU1 = {
    LogicalNodeModelType,
    "MMXU1",
    (ModelNode*) &iedModel_LD1,
    (ModelNode*) &iedModel_LD1_GGIO1,
    (ModelNode*) &iedModel_LD1_MMXU1_TotW,
};

DataObject iedModel_LD1_MMXU1_TotW = {
    DataObjectModelType,
    "TotW",
    (ModelNode*) &iedModel_LD1_MMXU1,
    (ModelNode*) &iedModel_LD1_MMXU1_Beh,
    (ModelNode*) &iedModel_LD1_MMXU1_TotW_mag,
    0
};

DataAttribute iedModel_LD1_MMXU1_TotW_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD1_MMXU1_TotW,
    (ModelNode*) &iedModel_LD1_MMXU1_TotW_q,
    (ModelNode*) &iedModel_LD1_MMXU1_TotW_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_MMXU1_TotW_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_LD1_MMXU1_TotW_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_MMXU1_TotW_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD1_MMXU1_TotW,
    (ModelNode*) &iedModel_LD1_MMXU1_TotW_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_MMXU1_TotW_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD1_MMXU1_TotW,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LD1_MMXU1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_LD1_MMXU1,
    (ModelNode*) &iedModel_LD1_MMXU1_TotVAr,
    (ModelNode*) &iedModel_LD1_MMXU1_Beh_stVal,
    0
};

DataAttribute iedModel_LD1_MMXU1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD1_MMXU1_Beh,
    (ModelNode*) &iedModel_LD1_MMXU1_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_MMXU1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD1_MMXU1_Beh,
    (ModelNode*) &iedModel_LD1_MMXU1_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_MMXU1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD1_MMXU1_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LD1_MMXU1_TotVAr = {
    DataObjectModelType,
    "TotVAr",
    (ModelNode*) &iedModel_LD1_MMXU1,
    (ModelNode*) &iedModel_LD1_MMXU1_TotVA,
    (ModelNode*) &iedModel_LD1_MMXU1_TotVAr_mag,
    0
};

DataAttribute iedModel_LD1_MMXU1_TotVAr_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD1_MMXU1_TotVAr,
    (ModelNode*) &iedModel_LD1_MMXU1_TotVAr_q,
    (ModelNode*) &iedModel_LD1_MMXU1_TotVAr_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_MMXU1_TotVAr_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_LD1_MMXU1_TotVAr_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_MMXU1_TotVAr_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD1_MMXU1_TotVAr,
    (ModelNode*) &iedModel_LD1_MMXU1_TotVAr_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_MMXU1_TotVAr_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD1_MMXU1_TotVAr,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LD1_MMXU1_TotVA = {
    DataObjectModelType,
    "TotVA",
    (ModelNode*) &iedModel_LD1_MMXU1,
    (ModelNode*) &iedModel_LD1_MMXU1_PPV,
    (ModelNode*) &iedModel_LD1_MMXU1_TotVA_mag,
    0
};

DataAttribute iedModel_LD1_MMXU1_TotVA_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_LD1_MMXU1_TotVA,
    (ModelNode*) &iedModel_LD1_MMXU1_TotVA_q,
    (ModelNode*) &iedModel_LD1_MMXU1_TotVA_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_MMXU1_TotVA_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_LD1_MMXU1_TotVA_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_MMXU1_TotVA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD1_MMXU1_TotVA,
    (ModelNode*) &iedModel_LD1_MMXU1_TotVA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_MMXU1_TotVA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD1_MMXU1_TotVA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LD1_MMXU1_PPV = {
    DataObjectModelType,
    "PPV",
    (ModelNode*) &iedModel_LD1_MMXU1,
    (ModelNode*) &iedModel_LD1_MMXU1_PhV,
    (ModelNode*) &iedModel_LD1_MMXU1_PPV_phsAB,
    0
};

DataObject iedModel_LD1_MMXU1_PPV_phsAB = {
    DataObjectModelType,
    "phsAB",
    (ModelNode*) &iedModel_LD1_MMXU1_PPV,
    (ModelNode*) &iedModel_LD1_MMXU1_PPV_phsBC,
    (ModelNode*) &iedModel_LD1_MMXU1_PPV_phsAB_cVal,
    0
};

DataAttribute iedModel_LD1_MMXU1_PPV_phsAB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD1_MMXU1_PPV_phsAB,
    (ModelNode*) &iedModel_LD1_MMXU1_PPV_phsAB_q,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_MMXU1_PPV_phsAB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD1_MMXU1_PPV_phsAB,
    (ModelNode*) &iedModel_LD1_MMXU1_PPV_phsAB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_MMXU1_PPV_phsAB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD1_MMXU1_PPV_phsAB,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LD1_MMXU1_PPV_phsBC = {
    DataObjectModelType,
    "phsBC",
    (ModelNode*) &iedModel_LD1_MMXU1_PPV,
    (ModelNode*) &iedModel_LD1_MMXU1_PPV_phsCA,
    (ModelNode*) &iedModel_LD1_MMXU1_PPV_phsBC_cVal,
    0
};

DataAttribute iedModel_LD1_MMXU1_PPV_phsBC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD1_MMXU1_PPV_phsBC,
    (ModelNode*) &iedModel_LD1_MMXU1_PPV_phsBC_q,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_MMXU1_PPV_phsBC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD1_MMXU1_PPV_phsBC,
    (ModelNode*) &iedModel_LD1_MMXU1_PPV_phsBC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_MMXU1_PPV_phsBC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD1_MMXU1_PPV_phsBC,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LD1_MMXU1_PPV_phsCA = {
    DataObjectModelType,
    "phsCA",
    (ModelNode*) &iedModel_LD1_MMXU1_PPV,
    NULL,
    (ModelNode*) &iedModel_LD1_MMXU1_PPV_phsCA_cVal,
    0
};

DataAttribute iedModel_LD1_MMXU1_PPV_phsCA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD1_MMXU1_PPV_phsCA,
    (ModelNode*) &iedModel_LD1_MMXU1_PPV_phsCA_q,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_MMXU1_PPV_phsCA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD1_MMXU1_PPV_phsCA,
    (ModelNode*) &iedModel_LD1_MMXU1_PPV_phsCA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_MMXU1_PPV_phsCA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD1_MMXU1_PPV_phsCA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LD1_MMXU1_PhV = {
    DataObjectModelType,
    "PhV",
    (ModelNode*) &iedModel_LD1_MMXU1,
    (ModelNode*) &iedModel_LD1_MMXU1_A,
    (ModelNode*) &iedModel_LD1_MMXU1_PhV_phsA,
    0
};

DataObject iedModel_LD1_MMXU1_PhV_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_LD1_MMXU1_PhV,
    (ModelNode*) &iedModel_LD1_MMXU1_PhV_phsB,
    (ModelNode*) &iedModel_LD1_MMXU1_PhV_phsA_cVal,
    0
};

DataAttribute iedModel_LD1_MMXU1_PhV_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD1_MMXU1_PhV_phsA,
    (ModelNode*) &iedModel_LD1_MMXU1_PhV_phsA_q,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_MMXU1_PhV_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD1_MMXU1_PhV_phsA,
    (ModelNode*) &iedModel_LD1_MMXU1_PhV_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_MMXU1_PhV_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD1_MMXU1_PhV_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LD1_MMXU1_PhV_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_LD1_MMXU1_PhV,
    (ModelNode*) &iedModel_LD1_MMXU1_PhV_phsC,
    (ModelNode*) &iedModel_LD1_MMXU1_PhV_phsB_cVal,
    0
};

DataAttribute iedModel_LD1_MMXU1_PhV_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD1_MMXU1_PhV_phsB,
    (ModelNode*) &iedModel_LD1_MMXU1_PhV_phsB_q,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_MMXU1_PhV_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD1_MMXU1_PhV_phsB,
    (ModelNode*) &iedModel_LD1_MMXU1_PhV_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_MMXU1_PhV_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD1_MMXU1_PhV_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LD1_MMXU1_PhV_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_LD1_MMXU1_PhV,
    NULL,
    (ModelNode*) &iedModel_LD1_MMXU1_PhV_phsC_cVal,
    0
};

DataAttribute iedModel_LD1_MMXU1_PhV_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD1_MMXU1_PhV_phsC,
    (ModelNode*) &iedModel_LD1_MMXU1_PhV_phsC_q,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_MMXU1_PhV_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD1_MMXU1_PhV_phsC,
    (ModelNode*) &iedModel_LD1_MMXU1_PhV_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_MMXU1_PhV_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD1_MMXU1_PhV_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LD1_MMXU1_A = {
    DataObjectModelType,
    "A",
    (ModelNode*) &iedModel_LD1_MMXU1,
    NULL,
    (ModelNode*) &iedModel_LD1_MMXU1_A_phsA,
    0
};

DataObject iedModel_LD1_MMXU1_A_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_LD1_MMXU1_A,
    (ModelNode*) &iedModel_LD1_MMXU1_A_phsB,
    (ModelNode*) &iedModel_LD1_MMXU1_A_phsA_cVal,
    0
};

DataAttribute iedModel_LD1_MMXU1_A_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD1_MMXU1_A_phsA,
    (ModelNode*) &iedModel_LD1_MMXU1_A_phsA_q,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_MMXU1_A_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD1_MMXU1_A_phsA,
    (ModelNode*) &iedModel_LD1_MMXU1_A_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_MMXU1_A_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD1_MMXU1_A_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LD1_MMXU1_A_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_LD1_MMXU1_A,
    (ModelNode*) &iedModel_LD1_MMXU1_A_phsC,
    (ModelNode*) &iedModel_LD1_MMXU1_A_phsB_cVal,
    0
};

DataAttribute iedModel_LD1_MMXU1_A_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD1_MMXU1_A_phsB,
    (ModelNode*) &iedModel_LD1_MMXU1_A_phsB_q,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_MMXU1_A_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD1_MMXU1_A_phsB,
    (ModelNode*) &iedModel_LD1_MMXU1_A_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_MMXU1_A_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD1_MMXU1_A_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LD1_MMXU1_A_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_LD1_MMXU1_A,
    NULL,
    (ModelNode*) &iedModel_LD1_MMXU1_A_phsC_cVal,
    0
};

DataAttribute iedModel_LD1_MMXU1_A_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_LD1_MMXU1_A_phsC,
    (ModelNode*) &iedModel_LD1_MMXU1_A_phsC_q,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_MMXU1_A_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD1_MMXU1_A_phsC,
    (ModelNode*) &iedModel_LD1_MMXU1_A_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_MMXU1_A_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD1_MMXU1_A_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_LD1_GGIO1 = {
    LogicalNodeModelType,
    "GGIO1",
    (ModelNode*) &iedModel_LD1,
    NULL,
    (ModelNode*) &iedModel_LD1_GGIO1_Mod,
};

DataObject iedModel_LD1_GGIO1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_LD1_GGIO1,
    (ModelNode*) &iedModel_LD1_GGIO1_Beh,
    (ModelNode*) &iedModel_LD1_GGIO1_Mod_stVal,
    0
};

DataAttribute iedModel_LD1_GGIO1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD1_GGIO1_Mod,
    (ModelNode*) &iedModel_LD1_GGIO1_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD1_GGIO1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD1_GGIO1_Mod,
    (ModelNode*) &iedModel_LD1_GGIO1_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD1_GGIO1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD1_GGIO1_Mod,
    (ModelNode*) &iedModel_LD1_GGIO1_Mod_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_GGIO1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_LD1_GGIO1_Mod,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_LD1_GGIO1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_LD1_GGIO1,
    (ModelNode*) &iedModel_LD1_GGIO1_Health,
    (ModelNode*) &iedModel_LD1_GGIO1_Beh_stVal,
    0
};

DataAttribute iedModel_LD1_GGIO1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD1_GGIO1_Beh,
    (ModelNode*) &iedModel_LD1_GGIO1_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD1_GGIO1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD1_GGIO1_Beh,
    (ModelNode*) &iedModel_LD1_GGIO1_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD1_GGIO1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD1_GGIO1_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LD1_GGIO1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_LD1_GGIO1,
    (ModelNode*) &iedModel_LD1_GGIO1_NamPlt,
    (ModelNode*) &iedModel_LD1_GGIO1_Health_stVal,
    0
};

DataAttribute iedModel_LD1_GGIO1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD1_GGIO1_Health,
    (ModelNode*) &iedModel_LD1_GGIO1_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD1_GGIO1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD1_GGIO1_Health,
    (ModelNode*) &iedModel_LD1_GGIO1_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD1_GGIO1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD1_GGIO1_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LD1_GGIO1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_LD1_GGIO1,
    (ModelNode*) &iedModel_LD1_GGIO1_SPC1,
    (ModelNode*) &iedModel_LD1_GGIO1_NamPlt_vendor,
    0
};

DataAttribute iedModel_LD1_GGIO1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_LD1_GGIO1_NamPlt,
    (ModelNode*) &iedModel_LD1_GGIO1_NamPlt_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_GGIO1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_LD1_GGIO1_NamPlt,
    (ModelNode*) &iedModel_LD1_GGIO1_NamPlt_d,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_GGIO1_NamPlt_d = {
    DataAttributeModelType,
    "d",
    (ModelNode*) &iedModel_LD1_GGIO1_NamPlt,
    (ModelNode*) &iedModel_LD1_GGIO1_NamPlt_configRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_GGIO1_NamPlt_configRev = {
    DataAttributeModelType,
    "configRev",
    (ModelNode*) &iedModel_LD1_GGIO1_NamPlt,
    (ModelNode*) &iedModel_LD1_GGIO1_NamPlt_ldNs,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_GGIO1_NamPlt_ldNs = {
    DataAttributeModelType,
    "ldNs",
    (ModelNode*) &iedModel_LD1_GGIO1_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_EX,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD1_GGIO1_SPC1 = {
    DataObjectModelType,
    "SPC1",
    (ModelNode*) &iedModel_LD1_GGIO1,
    NULL,
    (ModelNode*) &iedModel_LD1_GGIO1_SPC1_stVal,
    0
};

DataAttribute iedModel_LD1_GGIO1_SPC1_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD1_GGIO1_SPC1,
    (ModelNode*) &iedModel_LD1_GGIO1_SPC1_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0 + TRG_OPT_DATA_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD1_GGIO1_SPC1_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD1_GGIO1_SPC1,
    (ModelNode*) &iedModel_LD1_GGIO1_SPC1_Oper,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0 + TRG_OPT_QUALITY_CHANGED,
    NULL,
    0};

DataAttribute iedModel_LD1_GGIO1_SPC1_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_LD1_GGIO1_SPC1,
    (ModelNode*) &iedModel_LD1_GGIO1_SPC1_ctlModel,
    (ModelNode*) &iedModel_LD1_GGIO1_SPC1_Oper_ctlVal,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_GGIO1_SPC1_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_LD1_GGIO1_SPC1_Oper,
    (ModelNode*) &iedModel_LD1_GGIO1_SPC1_Oper_origin,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_GGIO1_SPC1_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_LD1_GGIO1_SPC1_Oper,
    (ModelNode*) &iedModel_LD1_GGIO1_SPC1_Oper_ctlNum,
    (ModelNode*) &iedModel_LD1_GGIO1_SPC1_Oper_origin_orCat,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_GGIO1_SPC1_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_LD1_GGIO1_SPC1_Oper_origin,
    (ModelNode*) &iedModel_LD1_GGIO1_SPC1_Oper_origin_orIdent,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_GGIO1_SPC1_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_LD1_GGIO1_SPC1_Oper_origin,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_GGIO1_SPC1_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_LD1_GGIO1_SPC1_Oper,
    (ModelNode*) &iedModel_LD1_GGIO1_SPC1_Oper_T,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_GGIO1_SPC1_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_LD1_GGIO1_SPC1_Oper,
    (ModelNode*) &iedModel_LD1_GGIO1_SPC1_Oper_Test,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_GGIO1_SPC1_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_LD1_GGIO1_SPC1_Oper,
    (ModelNode*) &iedModel_LD1_GGIO1_SPC1_Oper_Check,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_GGIO1_SPC1_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_LD1_GGIO1_SPC1_Oper,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_GGIO1_SPC1_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_LD1_GGIO1_SPC1,
    (ModelNode*) &iedModel_LD1_GGIO1_SPC1_t,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD1_GGIO1_SPC1_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD1_GGIO1_SPC1,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

extern ReportControlBlock iedModel_LD1_LLN0_report0;
extern ReportControlBlock iedModel_LD1_LLN0_report1;
extern ReportControlBlock iedModel_LD1_LLN0_report2;
extern ReportControlBlock iedModel_LD1_LLN0_report3;
extern ReportControlBlock iedModel_LD1_LLN0_report4;
extern ReportControlBlock iedModel_LD1_LLN0_report5;
extern ReportControlBlock iedModel_LD1_LLN0_report6;
extern ReportControlBlock iedModel_LD1_LLN0_report7;
extern ReportControlBlock iedModel_LD1_LLN0_report8;
extern ReportControlBlock iedModel_LD1_LLN0_report9;

ReportControlBlock iedModel_LD1_LLN0_report0 = {&iedModel_LD1_LLN0, "MeasurementsIED0_MMS01", "Measurements", false, "MeasurementsIED0", 0, 31, 255, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_LD1_LLN0_report1};
ReportControlBlock iedModel_LD1_LLN0_report1 = {&iedModel_LD1_LLN0, "MeasurementsIED0_MMS02", "Measurements", false, "MeasurementsIED0", 0, 31, 255, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_LD1_LLN0_report2};
ReportControlBlock iedModel_LD1_LLN0_report2 = {&iedModel_LD1_LLN0, "MeasurementsIED0_MMS03", "Measurements", false, "MeasurementsIED0", 0, 31, 255, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_LD1_LLN0_report3};
ReportControlBlock iedModel_LD1_LLN0_report3 = {&iedModel_LD1_LLN0, "MeasurementsIED0_MMS04", "Measurements", false, "MeasurementsIED0", 0, 31, 255, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_LD1_LLN0_report4};
ReportControlBlock iedModel_LD1_LLN0_report4 = {&iedModel_LD1_LLN0, "MeasurementsIED0_MMS05", "Measurements", false, "MeasurementsIED0", 0, 31, 255, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_LD1_LLN0_report5};
ReportControlBlock iedModel_LD1_LLN0_report5 = {&iedModel_LD1_LLN0, "CBStatusIED0_MMS01", "Controls", false, "CBStatusIED0", 0, 31, 255, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_LD1_LLN0_report6};
ReportControlBlock iedModel_LD1_LLN0_report6 = {&iedModel_LD1_LLN0, "CBStatusIED0_MMS02", "Controls", false, "CBStatusIED0", 0, 31, 255, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_LD1_LLN0_report7};
ReportControlBlock iedModel_LD1_LLN0_report7 = {&iedModel_LD1_LLN0, "CBStatusIED0_MMS03", "Controls", false, "CBStatusIED0", 0, 31, 255, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_LD1_LLN0_report8};
ReportControlBlock iedModel_LD1_LLN0_report8 = {&iedModel_LD1_LLN0, "CBStatusIED0_MMS04", "Controls", false, "CBStatusIED0", 0, 31, 255, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_LD1_LLN0_report9};
ReportControlBlock iedModel_LD1_LLN0_report9 = {&iedModel_LD1_LLN0, "CBStatusIED0_MMS05", "Controls", false, "CBStatusIED0", 0, 31, 255, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, NULL};


extern GSEControlBlock iedModel_LD1_LLN0_gse0;
GSEControlBlock iedModel_LD1_LLN0_gse0 = {&iedModel_LD1_LLN0, "null", "0001", "CBStatusIED0", 0, false, NULL, -1, -1, NULL};





IedModel iedModel = {
    "IED0",
    &iedModel_LD1,
    &iedModelds_LD1_LLN0_MeasurementsIED0,
    &iedModel_LD1_LLN0_report0,
    &iedModel_LD1_LLN0_gse0,
    NULL,
    NULL,
    NULL,
    NULL,
    initializeValues
};

static void
initializeValues()
{

iedModel_LD1_LLN0_Mod_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD1_LLN0_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(0);

iedModel_LD1_LLN0_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD1_LLN0_Health_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD1_GGIO1_Mod_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD1_GGIO1_Mod_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD1_GGIO1_Beh_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD1_GGIO1_Health_stVal.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_LD1_GGIO1_SPC1_stVal.mmsValue = MmsValue_newBoolean(true);

iedModel_LD1_GGIO1_SPC1_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(1);
}
