/*
 * static_model.c
 *
 * automatically generated from ied21scl.icd
 */
#include "static_model.h"

static void initializeValues();

extern DataSet iedModelds_MEAS_LLN0_PowDS;


extern DataSetEntry iedModelds_MEAS_LLN0_PowDS_fcda0;
extern DataSetEntry iedModelds_MEAS_LLN0_PowDS_fcda1;
extern DataSetEntry iedModelds_MEAS_LLN0_PowDS_fcda2;
extern DataSetEntry iedModelds_MEAS_LLN0_PowDS_fcda3;
extern DataSetEntry iedModelds_MEAS_LLN0_PowDS_fcda4;
extern DataSetEntry iedModelds_MEAS_LLN0_PowDS_fcda5;
extern DataSetEntry iedModelds_MEAS_LLN0_PowDS_fcda6;
extern DataSetEntry iedModelds_MEAS_LLN0_PowDS_fcda7;
extern DataSetEntry iedModelds_MEAS_LLN0_PowDS_fcda8;
extern DataSetEntry iedModelds_MEAS_LLN0_PowDS_fcda9;

DataSetEntry iedModelds_MEAS_LLN0_PowDS_fcda0 = {
  "MEAS",
  false,
  "MMXU0$MX$TotW$mag$f",
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_PowDS_fcda1
};

DataSetEntry iedModelds_MEAS_LLN0_PowDS_fcda1 = {
  "MEAS",
  false,
  "MMXU1$MX$TotW$mag$f",
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_PowDS_fcda2
};

DataSetEntry iedModelds_MEAS_LLN0_PowDS_fcda2 = {
  "MEAS",
  false,
  "MMXU2$MX$TotW$mag$f",
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_PowDS_fcda3
};

DataSetEntry iedModelds_MEAS_LLN0_PowDS_fcda3 = {
  "MEAS",
  false,
  "MMXU3$MX$TotW$mag$f",
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_PowDS_fcda4
};

DataSetEntry iedModelds_MEAS_LLN0_PowDS_fcda4 = {
  "MEAS",
  false,
  "MMXU4$MX$TotW$mag$f",
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_PowDS_fcda5
};

DataSetEntry iedModelds_MEAS_LLN0_PowDS_fcda5 = {
  "MEAS",
  false,
  "MMXU5$MX$TotW$mag$f",
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_PowDS_fcda6
};

DataSetEntry iedModelds_MEAS_LLN0_PowDS_fcda6 = {
  "MEAS",
  false,
  "MMXU6$MX$TotW$mag$f",
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_PowDS_fcda7
};

DataSetEntry iedModelds_MEAS_LLN0_PowDS_fcda7 = {
  "MEAS",
  false,
  "MMXU7$MX$TotW$mag$f",
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_PowDS_fcda8
};

DataSetEntry iedModelds_MEAS_LLN0_PowDS_fcda8 = {
  "MEAS",
  false,
  "MMXU8$MX$TotW$mag$f",
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_PowDS_fcda9
};

DataSetEntry iedModelds_MEAS_LLN0_PowDS_fcda9 = {
  "MEAS",
  false,
  "MMXU9$MX$TotW$mag$f",
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_MEAS_LLN0_PowDS = {
  "MEAS",
  "LLN0$PowDS",
  10,
  &iedModelds_MEAS_LLN0_PowDS_fcda0,
  NULL
};

LogicalDevice iedModel_MEAS = {
    LogicalDeviceModelType,
    "MEAS",
    (ModelNode*) &iedModel,
    NULL,
    (ModelNode*) &iedModel_MEAS_LLN0
};

LogicalNode iedModel_MEAS_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    (ModelNode*) &iedModel_MEAS,
    (ModelNode*) &iedModel_MEAS_MMXU0,
    (ModelNode*) &iedModel_MEAS_LLN0_Beh,
};

DataObject iedModel_MEAS_LLN0_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_MEAS_LLN0,
    NULL,
    (ModelNode*) &iedModel_MEAS_LLN0_Beh_stVal,
    0
};

DataAttribute iedModel_MEAS_LLN0_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_LLN0_Beh,
    (ModelNode*) &iedModel_MEAS_LLN0_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_LLN0_Beh,
    (ModelNode*) &iedModel_MEAS_LLN0_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_LLN0_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_LLN0_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_MEAS_MMXU0 = {
    LogicalNodeModelType,
    "MMXU0",
    (ModelNode*) &iedModel_MEAS,
    (ModelNode*) &iedModel_MEAS_MMXU1,
    (ModelNode*) &iedModel_MEAS_MMXU0_TotW,
};

DataObject iedModel_MEAS_MMXU0_TotW = {
    DataObjectModelType,
    "TotW",
    (ModelNode*) &iedModel_MEAS_MMXU0,
    (ModelNode*) &iedModel_MEAS_MMXU0_Beh,
    (ModelNode*) &iedModel_MEAS_MMXU0_TotW_mag,
    0
};

DataAttribute iedModel_MEAS_MMXU0_TotW_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU0_TotW,
    (ModelNode*) &iedModel_MEAS_MMXU0_TotW_q,
    (ModelNode*) &iedModel_MEAS_MMXU0_TotW_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_TotW_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU0_TotW_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_TotW_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU0_TotW,
    (ModelNode*) &iedModel_MEAS_MMXU0_TotW_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_TotW_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU0_TotW,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU0_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_MEAS_MMXU0,
    (ModelNode*) &iedModel_MEAS_MMXU0_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU0_Beh_stVal,
    0
};

DataAttribute iedModel_MEAS_MMXU0_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_MMXU0_Beh,
    (ModelNode*) &iedModel_MEAS_MMXU0_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU0_Beh,
    (ModelNode*) &iedModel_MEAS_MMXU0_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU0_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU0_TotVAr = {
    DataObjectModelType,
    "TotVAr",
    (ModelNode*) &iedModel_MEAS_MMXU0,
    (ModelNode*) &iedModel_MEAS_MMXU0_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU0_TotVAr_mag,
    0
};

DataAttribute iedModel_MEAS_MMXU0_TotVAr_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU0_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU0_TotVAr_q,
    (ModelNode*) &iedModel_MEAS_MMXU0_TotVAr_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_TotVAr_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU0_TotVAr_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_TotVAr_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU0_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU0_TotVAr_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_TotVAr_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU0_TotVAr,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU0_TotVA = {
    DataObjectModelType,
    "TotVA",
    (ModelNode*) &iedModel_MEAS_MMXU0,
    (ModelNode*) &iedModel_MEAS_MMXU0_PPV,
    (ModelNode*) &iedModel_MEAS_MMXU0_TotVA_mag,
    0
};

DataAttribute iedModel_MEAS_MMXU0_TotVA_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU0_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU0_TotVA_q,
    (ModelNode*) &iedModel_MEAS_MMXU0_TotVA_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_TotVA_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU0_TotVA_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_TotVA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU0_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU0_TotVA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_TotVA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU0_TotVA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU0_PPV = {
    DataObjectModelType,
    "PPV",
    (ModelNode*) &iedModel_MEAS_MMXU0,
    (ModelNode*) &iedModel_MEAS_MMXU0_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU0_PPV_phsAB,
    0
};

DataObject iedModel_MEAS_MMXU0_PPV_phsAB = {
    DataObjectModelType,
    "phsAB",
    (ModelNode*) &iedModel_MEAS_MMXU0_PPV,
    (ModelNode*) &iedModel_MEAS_MMXU0_PPV_phsBC,
    (ModelNode*) &iedModel_MEAS_MMXU0_PPV_phsAB_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU0_PPV_phsAB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU0_PPV_phsAB,
    (ModelNode*) &iedModel_MEAS_MMXU0_PPV_phsAB_q,
    (ModelNode*) &iedModel_MEAS_MMXU0_PPV_phsAB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_PPV_phsAB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU0_PPV_phsAB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU0_PPV_phsAB_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_PPV_phsAB_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU0_PPV_phsAB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_PPV_phsAB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU0_PPV_phsAB,
    (ModelNode*) &iedModel_MEAS_MMXU0_PPV_phsAB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_PPV_phsAB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU0_PPV_phsAB,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU0_PPV_phsBC = {
    DataObjectModelType,
    "phsBC",
    (ModelNode*) &iedModel_MEAS_MMXU0_PPV,
    (ModelNode*) &iedModel_MEAS_MMXU0_PPV_phsCA,
    (ModelNode*) &iedModel_MEAS_MMXU0_PPV_phsBC_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU0_PPV_phsBC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU0_PPV_phsBC,
    (ModelNode*) &iedModel_MEAS_MMXU0_PPV_phsBC_q,
    (ModelNode*) &iedModel_MEAS_MMXU0_PPV_phsBC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_PPV_phsBC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU0_PPV_phsBC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU0_PPV_phsBC_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_PPV_phsBC_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU0_PPV_phsBC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_PPV_phsBC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU0_PPV_phsBC,
    (ModelNode*) &iedModel_MEAS_MMXU0_PPV_phsBC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_PPV_phsBC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU0_PPV_phsBC,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU0_PPV_phsCA = {
    DataObjectModelType,
    "phsCA",
    (ModelNode*) &iedModel_MEAS_MMXU0_PPV,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU0_PPV_phsCA_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU0_PPV_phsCA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU0_PPV_phsCA,
    (ModelNode*) &iedModel_MEAS_MMXU0_PPV_phsCA_q,
    (ModelNode*) &iedModel_MEAS_MMXU0_PPV_phsCA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_PPV_phsCA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU0_PPV_phsCA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU0_PPV_phsCA_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_PPV_phsCA_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU0_PPV_phsCA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_PPV_phsCA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU0_PPV_phsCA,
    (ModelNode*) &iedModel_MEAS_MMXU0_PPV_phsCA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_PPV_phsCA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU0_PPV_phsCA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU0_PhV = {
    DataObjectModelType,
    "PhV",
    (ModelNode*) &iedModel_MEAS_MMXU0,
    (ModelNode*) &iedModel_MEAS_MMXU0_A,
    (ModelNode*) &iedModel_MEAS_MMXU0_PhV_phsA,
    0
};

DataObject iedModel_MEAS_MMXU0_PhV_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_MEAS_MMXU0_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU0_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU0_PhV_phsA_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU0_PhV_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU0_PhV_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU0_PhV_phsA_q,
    (ModelNode*) &iedModel_MEAS_MMXU0_PhV_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_PhV_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU0_PhV_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU0_PhV_phsA_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_PhV_phsA_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU0_PhV_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_PhV_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU0_PhV_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU0_PhV_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_PhV_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU0_PhV_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU0_PhV_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_MEAS_MMXU0_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU0_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU0_PhV_phsB_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU0_PhV_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU0_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU0_PhV_phsB_q,
    (ModelNode*) &iedModel_MEAS_MMXU0_PhV_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_PhV_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU0_PhV_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU0_PhV_phsB_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_PhV_phsB_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU0_PhV_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_PhV_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU0_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU0_PhV_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_PhV_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU0_PhV_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU0_PhV_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_MEAS_MMXU0_PhV,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU0_PhV_phsC_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU0_PhV_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU0_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU0_PhV_phsC_q,
    (ModelNode*) &iedModel_MEAS_MMXU0_PhV_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_PhV_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU0_PhV_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU0_PhV_phsC_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_PhV_phsC_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU0_PhV_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_PhV_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU0_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU0_PhV_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_PhV_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU0_PhV_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU0_A = {
    DataObjectModelType,
    "A",
    (ModelNode*) &iedModel_MEAS_MMXU0,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU0_A_phsA,
    0
};

DataObject iedModel_MEAS_MMXU0_A_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_MEAS_MMXU0_A,
    (ModelNode*) &iedModel_MEAS_MMXU0_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU0_A_phsA_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU0_A_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU0_A_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU0_A_phsA_q,
    (ModelNode*) &iedModel_MEAS_MMXU0_A_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_A_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU0_A_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU0_A_phsA_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_A_phsA_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU0_A_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_A_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU0_A_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU0_A_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_A_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU0_A_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU0_A_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_MEAS_MMXU0_A,
    (ModelNode*) &iedModel_MEAS_MMXU0_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU0_A_phsB_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU0_A_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU0_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU0_A_phsB_q,
    (ModelNode*) &iedModel_MEAS_MMXU0_A_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_A_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU0_A_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU0_A_phsB_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_A_phsB_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU0_A_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_A_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU0_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU0_A_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_A_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU0_A_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU0_A_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_MEAS_MMXU0_A,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU0_A_phsC_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU0_A_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU0_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU0_A_phsC_q,
    (ModelNode*) &iedModel_MEAS_MMXU0_A_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_A_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU0_A_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU0_A_phsC_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_A_phsC_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU0_A_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_A_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU0_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU0_A_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU0_A_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU0_A_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_MEAS_MMXU1 = {
    LogicalNodeModelType,
    "MMXU1",
    (ModelNode*) &iedModel_MEAS,
    (ModelNode*) &iedModel_MEAS_MMXU2,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotW,
};

DataObject iedModel_MEAS_MMXU1_TotW = {
    DataObjectModelType,
    "TotW",
    (ModelNode*) &iedModel_MEAS_MMXU1,
    (ModelNode*) &iedModel_MEAS_MMXU1_Beh,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotW_mag,
    0
};

DataAttribute iedModel_MEAS_MMXU1_TotW_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotW,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotW_q,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotW_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_TotW_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotW_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_TotW_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotW,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotW_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_TotW_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotW,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_MEAS_MMXU1,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU1_Beh_stVal,
    0
};

DataAttribute iedModel_MEAS_MMXU1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_MMXU1_Beh,
    (ModelNode*) &iedModel_MEAS_MMXU1_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU1_Beh,
    (ModelNode*) &iedModel_MEAS_MMXU1_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU1_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU1_TotVAr = {
    DataObjectModelType,
    "TotVAr",
    (ModelNode*) &iedModel_MEAS_MMXU1,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVAr_mag,
    0
};

DataAttribute iedModel_MEAS_MMXU1_TotVAr_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVAr_q,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVAr_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_TotVAr_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVAr_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_TotVAr_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVAr_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_TotVAr_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVAr,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU1_TotVA = {
    DataObjectModelType,
    "TotVA",
    (ModelNode*) &iedModel_MEAS_MMXU1,
    (ModelNode*) &iedModel_MEAS_MMXU1_PPV,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVA_mag,
    0
};

DataAttribute iedModel_MEAS_MMXU1_TotVA_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVA_q,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVA_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_TotVA_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVA_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_TotVA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_TotVA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotVA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU1_PPV = {
    DataObjectModelType,
    "PPV",
    (ModelNode*) &iedModel_MEAS_MMXU1,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU1_PPV_phsAB,
    0
};

DataObject iedModel_MEAS_MMXU1_PPV_phsAB = {
    DataObjectModelType,
    "phsAB",
    (ModelNode*) &iedModel_MEAS_MMXU1_PPV,
    (ModelNode*) &iedModel_MEAS_MMXU1_PPV_phsBC,
    (ModelNode*) &iedModel_MEAS_MMXU1_PPV_phsAB_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU1_PPV_phsAB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU1_PPV_phsAB,
    (ModelNode*) &iedModel_MEAS_MMXU1_PPV_phsAB_q,
    (ModelNode*) &iedModel_MEAS_MMXU1_PPV_phsAB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PPV_phsAB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU1_PPV_phsAB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU1_PPV_phsAB_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PPV_phsAB_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU1_PPV_phsAB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PPV_phsAB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU1_PPV_phsAB,
    (ModelNode*) &iedModel_MEAS_MMXU1_PPV_phsAB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PPV_phsAB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU1_PPV_phsAB,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU1_PPV_phsBC = {
    DataObjectModelType,
    "phsBC",
    (ModelNode*) &iedModel_MEAS_MMXU1_PPV,
    (ModelNode*) &iedModel_MEAS_MMXU1_PPV_phsCA,
    (ModelNode*) &iedModel_MEAS_MMXU1_PPV_phsBC_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU1_PPV_phsBC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU1_PPV_phsBC,
    (ModelNode*) &iedModel_MEAS_MMXU1_PPV_phsBC_q,
    (ModelNode*) &iedModel_MEAS_MMXU1_PPV_phsBC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PPV_phsBC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU1_PPV_phsBC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU1_PPV_phsBC_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PPV_phsBC_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU1_PPV_phsBC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PPV_phsBC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU1_PPV_phsBC,
    (ModelNode*) &iedModel_MEAS_MMXU1_PPV_phsBC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PPV_phsBC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU1_PPV_phsBC,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU1_PPV_phsCA = {
    DataObjectModelType,
    "phsCA",
    (ModelNode*) &iedModel_MEAS_MMXU1_PPV,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU1_PPV_phsCA_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU1_PPV_phsCA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU1_PPV_phsCA,
    (ModelNode*) &iedModel_MEAS_MMXU1_PPV_phsCA_q,
    (ModelNode*) &iedModel_MEAS_MMXU1_PPV_phsCA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PPV_phsCA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU1_PPV_phsCA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU1_PPV_phsCA_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PPV_phsCA_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU1_PPV_phsCA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PPV_phsCA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU1_PPV_phsCA,
    (ModelNode*) &iedModel_MEAS_MMXU1_PPV_phsCA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PPV_phsCA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU1_PPV_phsCA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU1_PhV = {
    DataObjectModelType,
    "PhV",
    (ModelNode*) &iedModel_MEAS_MMXU1,
    (ModelNode*) &iedModel_MEAS_MMXU1_A,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsA,
    0
};

DataObject iedModel_MEAS_MMXU1_PhV_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsA_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU1_PhV_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsA_q,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsA_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_phsA_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU1_PhV_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsB_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU1_PhV_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsB_q,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsB_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_phsB_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU1_PhV_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsC_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU1_PhV_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsC_q,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsC_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_phsC_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU1_A = {
    DataObjectModelType,
    "A",
    (ModelNode*) &iedModel_MEAS_MMXU1,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsA,
    0
};

DataObject iedModel_MEAS_MMXU1_A_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_MEAS_MMXU1_A,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsA_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU1_A_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsA_q,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsA_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_phsA_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU1_A_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_MEAS_MMXU1_A,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsB_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU1_A_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsB_q,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsB_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_phsB_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU1_A_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_MEAS_MMXU1_A,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsC_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU1_A_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsC_q,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsC_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_phsC_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_MEAS_MMXU2 = {
    LogicalNodeModelType,
    "MMXU2",
    (ModelNode*) &iedModel_MEAS,
    (ModelNode*) &iedModel_MEAS_MMXU3,
    (ModelNode*) &iedModel_MEAS_MMXU2_TotW,
};

DataObject iedModel_MEAS_MMXU2_TotW = {
    DataObjectModelType,
    "TotW",
    (ModelNode*) &iedModel_MEAS_MMXU2,
    (ModelNode*) &iedModel_MEAS_MMXU2_Beh,
    (ModelNode*) &iedModel_MEAS_MMXU2_TotW_mag,
    0
};

DataAttribute iedModel_MEAS_MMXU2_TotW_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU2_TotW,
    (ModelNode*) &iedModel_MEAS_MMXU2_TotW_q,
    (ModelNode*) &iedModel_MEAS_MMXU2_TotW_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_TotW_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU2_TotW_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_TotW_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU2_TotW,
    (ModelNode*) &iedModel_MEAS_MMXU2_TotW_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_TotW_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU2_TotW,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU2_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_MEAS_MMXU2,
    (ModelNode*) &iedModel_MEAS_MMXU2_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU2_Beh_stVal,
    0
};

DataAttribute iedModel_MEAS_MMXU2_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_MMXU2_Beh,
    (ModelNode*) &iedModel_MEAS_MMXU2_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU2_Beh,
    (ModelNode*) &iedModel_MEAS_MMXU2_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU2_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU2_TotVAr = {
    DataObjectModelType,
    "TotVAr",
    (ModelNode*) &iedModel_MEAS_MMXU2,
    (ModelNode*) &iedModel_MEAS_MMXU2_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU2_TotVAr_mag,
    0
};

DataAttribute iedModel_MEAS_MMXU2_TotVAr_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU2_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU2_TotVAr_q,
    (ModelNode*) &iedModel_MEAS_MMXU2_TotVAr_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_TotVAr_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU2_TotVAr_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_TotVAr_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU2_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU2_TotVAr_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_TotVAr_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU2_TotVAr,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU2_TotVA = {
    DataObjectModelType,
    "TotVA",
    (ModelNode*) &iedModel_MEAS_MMXU2,
    (ModelNode*) &iedModel_MEAS_MMXU2_PPV,
    (ModelNode*) &iedModel_MEAS_MMXU2_TotVA_mag,
    0
};

DataAttribute iedModel_MEAS_MMXU2_TotVA_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU2_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU2_TotVA_q,
    (ModelNode*) &iedModel_MEAS_MMXU2_TotVA_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_TotVA_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU2_TotVA_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_TotVA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU2_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU2_TotVA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_TotVA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU2_TotVA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU2_PPV = {
    DataObjectModelType,
    "PPV",
    (ModelNode*) &iedModel_MEAS_MMXU2,
    (ModelNode*) &iedModel_MEAS_MMXU2_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU2_PPV_phsAB,
    0
};

DataObject iedModel_MEAS_MMXU2_PPV_phsAB = {
    DataObjectModelType,
    "phsAB",
    (ModelNode*) &iedModel_MEAS_MMXU2_PPV,
    (ModelNode*) &iedModel_MEAS_MMXU2_PPV_phsBC,
    (ModelNode*) &iedModel_MEAS_MMXU2_PPV_phsAB_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU2_PPV_phsAB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU2_PPV_phsAB,
    (ModelNode*) &iedModel_MEAS_MMXU2_PPV_phsAB_q,
    (ModelNode*) &iedModel_MEAS_MMXU2_PPV_phsAB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_PPV_phsAB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU2_PPV_phsAB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU2_PPV_phsAB_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_PPV_phsAB_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU2_PPV_phsAB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_PPV_phsAB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU2_PPV_phsAB,
    (ModelNode*) &iedModel_MEAS_MMXU2_PPV_phsAB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_PPV_phsAB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU2_PPV_phsAB,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU2_PPV_phsBC = {
    DataObjectModelType,
    "phsBC",
    (ModelNode*) &iedModel_MEAS_MMXU2_PPV,
    (ModelNode*) &iedModel_MEAS_MMXU2_PPV_phsCA,
    (ModelNode*) &iedModel_MEAS_MMXU2_PPV_phsBC_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU2_PPV_phsBC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU2_PPV_phsBC,
    (ModelNode*) &iedModel_MEAS_MMXU2_PPV_phsBC_q,
    (ModelNode*) &iedModel_MEAS_MMXU2_PPV_phsBC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_PPV_phsBC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU2_PPV_phsBC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU2_PPV_phsBC_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_PPV_phsBC_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU2_PPV_phsBC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_PPV_phsBC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU2_PPV_phsBC,
    (ModelNode*) &iedModel_MEAS_MMXU2_PPV_phsBC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_PPV_phsBC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU2_PPV_phsBC,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU2_PPV_phsCA = {
    DataObjectModelType,
    "phsCA",
    (ModelNode*) &iedModel_MEAS_MMXU2_PPV,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU2_PPV_phsCA_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU2_PPV_phsCA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU2_PPV_phsCA,
    (ModelNode*) &iedModel_MEAS_MMXU2_PPV_phsCA_q,
    (ModelNode*) &iedModel_MEAS_MMXU2_PPV_phsCA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_PPV_phsCA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU2_PPV_phsCA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU2_PPV_phsCA_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_PPV_phsCA_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU2_PPV_phsCA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_PPV_phsCA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU2_PPV_phsCA,
    (ModelNode*) &iedModel_MEAS_MMXU2_PPV_phsCA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_PPV_phsCA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU2_PPV_phsCA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU2_PhV = {
    DataObjectModelType,
    "PhV",
    (ModelNode*) &iedModel_MEAS_MMXU2,
    (ModelNode*) &iedModel_MEAS_MMXU2_A,
    (ModelNode*) &iedModel_MEAS_MMXU2_PhV_phsA,
    0
};

DataObject iedModel_MEAS_MMXU2_PhV_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_MEAS_MMXU2_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU2_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU2_PhV_phsA_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU2_PhV_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU2_PhV_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU2_PhV_phsA_q,
    (ModelNode*) &iedModel_MEAS_MMXU2_PhV_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_PhV_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU2_PhV_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU2_PhV_phsA_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_PhV_phsA_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU2_PhV_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_PhV_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU2_PhV_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU2_PhV_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_PhV_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU2_PhV_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU2_PhV_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_MEAS_MMXU2_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU2_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU2_PhV_phsB_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU2_PhV_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU2_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU2_PhV_phsB_q,
    (ModelNode*) &iedModel_MEAS_MMXU2_PhV_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_PhV_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU2_PhV_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU2_PhV_phsB_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_PhV_phsB_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU2_PhV_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_PhV_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU2_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU2_PhV_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_PhV_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU2_PhV_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU2_PhV_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_MEAS_MMXU2_PhV,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU2_PhV_phsC_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU2_PhV_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU2_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU2_PhV_phsC_q,
    (ModelNode*) &iedModel_MEAS_MMXU2_PhV_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_PhV_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU2_PhV_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU2_PhV_phsC_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_PhV_phsC_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU2_PhV_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_PhV_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU2_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU2_PhV_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_PhV_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU2_PhV_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU2_A = {
    DataObjectModelType,
    "A",
    (ModelNode*) &iedModel_MEAS_MMXU2,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU2_A_phsA,
    0
};

DataObject iedModel_MEAS_MMXU2_A_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_MEAS_MMXU2_A,
    (ModelNode*) &iedModel_MEAS_MMXU2_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU2_A_phsA_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU2_A_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU2_A_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU2_A_phsA_q,
    (ModelNode*) &iedModel_MEAS_MMXU2_A_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_A_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU2_A_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU2_A_phsA_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_A_phsA_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU2_A_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_A_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU2_A_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU2_A_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_A_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU2_A_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU2_A_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_MEAS_MMXU2_A,
    (ModelNode*) &iedModel_MEAS_MMXU2_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU2_A_phsB_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU2_A_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU2_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU2_A_phsB_q,
    (ModelNode*) &iedModel_MEAS_MMXU2_A_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_A_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU2_A_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU2_A_phsB_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_A_phsB_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU2_A_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_A_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU2_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU2_A_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_A_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU2_A_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU2_A_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_MEAS_MMXU2_A,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU2_A_phsC_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU2_A_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU2_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU2_A_phsC_q,
    (ModelNode*) &iedModel_MEAS_MMXU2_A_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_A_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU2_A_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU2_A_phsC_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_A_phsC_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU2_A_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_A_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU2_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU2_A_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_A_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU2_A_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_MEAS_MMXU3 = {
    LogicalNodeModelType,
    "MMXU3",
    (ModelNode*) &iedModel_MEAS,
    (ModelNode*) &iedModel_MEAS_MMXU4,
    (ModelNode*) &iedModel_MEAS_MMXU3_TotW,
};

DataObject iedModel_MEAS_MMXU3_TotW = {
    DataObjectModelType,
    "TotW",
    (ModelNode*) &iedModel_MEAS_MMXU3,
    (ModelNode*) &iedModel_MEAS_MMXU3_Beh,
    (ModelNode*) &iedModel_MEAS_MMXU3_TotW_mag,
    0
};

DataAttribute iedModel_MEAS_MMXU3_TotW_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU3_TotW,
    (ModelNode*) &iedModel_MEAS_MMXU3_TotW_q,
    (ModelNode*) &iedModel_MEAS_MMXU3_TotW_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_TotW_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU3_TotW_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_TotW_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU3_TotW,
    (ModelNode*) &iedModel_MEAS_MMXU3_TotW_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_TotW_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU3_TotW,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU3_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_MEAS_MMXU3,
    (ModelNode*) &iedModel_MEAS_MMXU3_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU3_Beh_stVal,
    0
};

DataAttribute iedModel_MEAS_MMXU3_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_MMXU3_Beh,
    (ModelNode*) &iedModel_MEAS_MMXU3_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU3_Beh,
    (ModelNode*) &iedModel_MEAS_MMXU3_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU3_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU3_TotVAr = {
    DataObjectModelType,
    "TotVAr",
    (ModelNode*) &iedModel_MEAS_MMXU3,
    (ModelNode*) &iedModel_MEAS_MMXU3_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU3_TotVAr_mag,
    0
};

DataAttribute iedModel_MEAS_MMXU3_TotVAr_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU3_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU3_TotVAr_q,
    (ModelNode*) &iedModel_MEAS_MMXU3_TotVAr_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_TotVAr_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU3_TotVAr_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_TotVAr_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU3_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU3_TotVAr_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_TotVAr_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU3_TotVAr,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU3_TotVA = {
    DataObjectModelType,
    "TotVA",
    (ModelNode*) &iedModel_MEAS_MMXU3,
    (ModelNode*) &iedModel_MEAS_MMXU3_PPV,
    (ModelNode*) &iedModel_MEAS_MMXU3_TotVA_mag,
    0
};

DataAttribute iedModel_MEAS_MMXU3_TotVA_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU3_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU3_TotVA_q,
    (ModelNode*) &iedModel_MEAS_MMXU3_TotVA_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_TotVA_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU3_TotVA_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_TotVA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU3_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU3_TotVA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_TotVA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU3_TotVA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU3_PPV = {
    DataObjectModelType,
    "PPV",
    (ModelNode*) &iedModel_MEAS_MMXU3,
    (ModelNode*) &iedModel_MEAS_MMXU3_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU3_PPV_phsAB,
    0
};

DataObject iedModel_MEAS_MMXU3_PPV_phsAB = {
    DataObjectModelType,
    "phsAB",
    (ModelNode*) &iedModel_MEAS_MMXU3_PPV,
    (ModelNode*) &iedModel_MEAS_MMXU3_PPV_phsBC,
    (ModelNode*) &iedModel_MEAS_MMXU3_PPV_phsAB_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU3_PPV_phsAB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU3_PPV_phsAB,
    (ModelNode*) &iedModel_MEAS_MMXU3_PPV_phsAB_q,
    (ModelNode*) &iedModel_MEAS_MMXU3_PPV_phsAB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_PPV_phsAB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU3_PPV_phsAB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU3_PPV_phsAB_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_PPV_phsAB_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU3_PPV_phsAB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_PPV_phsAB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU3_PPV_phsAB,
    (ModelNode*) &iedModel_MEAS_MMXU3_PPV_phsAB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_PPV_phsAB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU3_PPV_phsAB,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU3_PPV_phsBC = {
    DataObjectModelType,
    "phsBC",
    (ModelNode*) &iedModel_MEAS_MMXU3_PPV,
    (ModelNode*) &iedModel_MEAS_MMXU3_PPV_phsCA,
    (ModelNode*) &iedModel_MEAS_MMXU3_PPV_phsBC_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU3_PPV_phsBC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU3_PPV_phsBC,
    (ModelNode*) &iedModel_MEAS_MMXU3_PPV_phsBC_q,
    (ModelNode*) &iedModel_MEAS_MMXU3_PPV_phsBC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_PPV_phsBC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU3_PPV_phsBC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU3_PPV_phsBC_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_PPV_phsBC_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU3_PPV_phsBC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_PPV_phsBC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU3_PPV_phsBC,
    (ModelNode*) &iedModel_MEAS_MMXU3_PPV_phsBC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_PPV_phsBC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU3_PPV_phsBC,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU3_PPV_phsCA = {
    DataObjectModelType,
    "phsCA",
    (ModelNode*) &iedModel_MEAS_MMXU3_PPV,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU3_PPV_phsCA_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU3_PPV_phsCA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU3_PPV_phsCA,
    (ModelNode*) &iedModel_MEAS_MMXU3_PPV_phsCA_q,
    (ModelNode*) &iedModel_MEAS_MMXU3_PPV_phsCA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_PPV_phsCA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU3_PPV_phsCA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU3_PPV_phsCA_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_PPV_phsCA_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU3_PPV_phsCA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_PPV_phsCA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU3_PPV_phsCA,
    (ModelNode*) &iedModel_MEAS_MMXU3_PPV_phsCA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_PPV_phsCA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU3_PPV_phsCA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU3_PhV = {
    DataObjectModelType,
    "PhV",
    (ModelNode*) &iedModel_MEAS_MMXU3,
    (ModelNode*) &iedModel_MEAS_MMXU3_A,
    (ModelNode*) &iedModel_MEAS_MMXU3_PhV_phsA,
    0
};

DataObject iedModel_MEAS_MMXU3_PhV_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_MEAS_MMXU3_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU3_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU3_PhV_phsA_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU3_PhV_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU3_PhV_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU3_PhV_phsA_q,
    (ModelNode*) &iedModel_MEAS_MMXU3_PhV_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_PhV_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU3_PhV_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU3_PhV_phsA_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_PhV_phsA_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU3_PhV_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_PhV_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU3_PhV_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU3_PhV_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_PhV_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU3_PhV_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU3_PhV_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_MEAS_MMXU3_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU3_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU3_PhV_phsB_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU3_PhV_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU3_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU3_PhV_phsB_q,
    (ModelNode*) &iedModel_MEAS_MMXU3_PhV_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_PhV_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU3_PhV_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU3_PhV_phsB_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_PhV_phsB_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU3_PhV_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_PhV_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU3_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU3_PhV_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_PhV_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU3_PhV_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU3_PhV_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_MEAS_MMXU3_PhV,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU3_PhV_phsC_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU3_PhV_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU3_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU3_PhV_phsC_q,
    (ModelNode*) &iedModel_MEAS_MMXU3_PhV_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_PhV_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU3_PhV_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU3_PhV_phsC_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_PhV_phsC_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU3_PhV_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_PhV_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU3_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU3_PhV_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_PhV_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU3_PhV_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU3_A = {
    DataObjectModelType,
    "A",
    (ModelNode*) &iedModel_MEAS_MMXU3,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU3_A_phsA,
    0
};

DataObject iedModel_MEAS_MMXU3_A_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_MEAS_MMXU3_A,
    (ModelNode*) &iedModel_MEAS_MMXU3_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU3_A_phsA_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU3_A_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU3_A_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU3_A_phsA_q,
    (ModelNode*) &iedModel_MEAS_MMXU3_A_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_A_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU3_A_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU3_A_phsA_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_A_phsA_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU3_A_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_A_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU3_A_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU3_A_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_A_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU3_A_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU3_A_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_MEAS_MMXU3_A,
    (ModelNode*) &iedModel_MEAS_MMXU3_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU3_A_phsB_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU3_A_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU3_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU3_A_phsB_q,
    (ModelNode*) &iedModel_MEAS_MMXU3_A_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_A_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU3_A_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU3_A_phsB_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_A_phsB_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU3_A_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_A_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU3_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU3_A_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_A_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU3_A_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU3_A_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_MEAS_MMXU3_A,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU3_A_phsC_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU3_A_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU3_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU3_A_phsC_q,
    (ModelNode*) &iedModel_MEAS_MMXU3_A_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_A_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU3_A_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU3_A_phsC_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_A_phsC_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU3_A_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_A_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU3_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU3_A_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU3_A_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU3_A_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_MEAS_MMXU4 = {
    LogicalNodeModelType,
    "MMXU4",
    (ModelNode*) &iedModel_MEAS,
    (ModelNode*) &iedModel_MEAS_MMXU5,
    (ModelNode*) &iedModel_MEAS_MMXU4_TotW,
};

DataObject iedModel_MEAS_MMXU4_TotW = {
    DataObjectModelType,
    "TotW",
    (ModelNode*) &iedModel_MEAS_MMXU4,
    (ModelNode*) &iedModel_MEAS_MMXU4_Beh,
    (ModelNode*) &iedModel_MEAS_MMXU4_TotW_mag,
    0
};

DataAttribute iedModel_MEAS_MMXU4_TotW_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU4_TotW,
    (ModelNode*) &iedModel_MEAS_MMXU4_TotW_q,
    (ModelNode*) &iedModel_MEAS_MMXU4_TotW_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_TotW_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU4_TotW_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_TotW_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU4_TotW,
    (ModelNode*) &iedModel_MEAS_MMXU4_TotW_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_TotW_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU4_TotW,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU4_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_MEAS_MMXU4,
    (ModelNode*) &iedModel_MEAS_MMXU4_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU4_Beh_stVal,
    0
};

DataAttribute iedModel_MEAS_MMXU4_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_MMXU4_Beh,
    (ModelNode*) &iedModel_MEAS_MMXU4_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU4_Beh,
    (ModelNode*) &iedModel_MEAS_MMXU4_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU4_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU4_TotVAr = {
    DataObjectModelType,
    "TotVAr",
    (ModelNode*) &iedModel_MEAS_MMXU4,
    (ModelNode*) &iedModel_MEAS_MMXU4_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU4_TotVAr_mag,
    0
};

DataAttribute iedModel_MEAS_MMXU4_TotVAr_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU4_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU4_TotVAr_q,
    (ModelNode*) &iedModel_MEAS_MMXU4_TotVAr_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_TotVAr_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU4_TotVAr_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_TotVAr_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU4_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU4_TotVAr_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_TotVAr_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU4_TotVAr,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU4_TotVA = {
    DataObjectModelType,
    "TotVA",
    (ModelNode*) &iedModel_MEAS_MMXU4,
    (ModelNode*) &iedModel_MEAS_MMXU4_PPV,
    (ModelNode*) &iedModel_MEAS_MMXU4_TotVA_mag,
    0
};

DataAttribute iedModel_MEAS_MMXU4_TotVA_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU4_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU4_TotVA_q,
    (ModelNode*) &iedModel_MEAS_MMXU4_TotVA_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_TotVA_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU4_TotVA_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_TotVA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU4_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU4_TotVA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_TotVA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU4_TotVA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU4_PPV = {
    DataObjectModelType,
    "PPV",
    (ModelNode*) &iedModel_MEAS_MMXU4,
    (ModelNode*) &iedModel_MEAS_MMXU4_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU4_PPV_phsAB,
    0
};

DataObject iedModel_MEAS_MMXU4_PPV_phsAB = {
    DataObjectModelType,
    "phsAB",
    (ModelNode*) &iedModel_MEAS_MMXU4_PPV,
    (ModelNode*) &iedModel_MEAS_MMXU4_PPV_phsBC,
    (ModelNode*) &iedModel_MEAS_MMXU4_PPV_phsAB_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU4_PPV_phsAB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU4_PPV_phsAB,
    (ModelNode*) &iedModel_MEAS_MMXU4_PPV_phsAB_q,
    (ModelNode*) &iedModel_MEAS_MMXU4_PPV_phsAB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_PPV_phsAB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU4_PPV_phsAB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU4_PPV_phsAB_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_PPV_phsAB_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU4_PPV_phsAB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_PPV_phsAB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU4_PPV_phsAB,
    (ModelNode*) &iedModel_MEAS_MMXU4_PPV_phsAB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_PPV_phsAB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU4_PPV_phsAB,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU4_PPV_phsBC = {
    DataObjectModelType,
    "phsBC",
    (ModelNode*) &iedModel_MEAS_MMXU4_PPV,
    (ModelNode*) &iedModel_MEAS_MMXU4_PPV_phsCA,
    (ModelNode*) &iedModel_MEAS_MMXU4_PPV_phsBC_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU4_PPV_phsBC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU4_PPV_phsBC,
    (ModelNode*) &iedModel_MEAS_MMXU4_PPV_phsBC_q,
    (ModelNode*) &iedModel_MEAS_MMXU4_PPV_phsBC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_PPV_phsBC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU4_PPV_phsBC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU4_PPV_phsBC_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_PPV_phsBC_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU4_PPV_phsBC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_PPV_phsBC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU4_PPV_phsBC,
    (ModelNode*) &iedModel_MEAS_MMXU4_PPV_phsBC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_PPV_phsBC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU4_PPV_phsBC,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU4_PPV_phsCA = {
    DataObjectModelType,
    "phsCA",
    (ModelNode*) &iedModel_MEAS_MMXU4_PPV,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU4_PPV_phsCA_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU4_PPV_phsCA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU4_PPV_phsCA,
    (ModelNode*) &iedModel_MEAS_MMXU4_PPV_phsCA_q,
    (ModelNode*) &iedModel_MEAS_MMXU4_PPV_phsCA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_PPV_phsCA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU4_PPV_phsCA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU4_PPV_phsCA_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_PPV_phsCA_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU4_PPV_phsCA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_PPV_phsCA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU4_PPV_phsCA,
    (ModelNode*) &iedModel_MEAS_MMXU4_PPV_phsCA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_PPV_phsCA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU4_PPV_phsCA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU4_PhV = {
    DataObjectModelType,
    "PhV",
    (ModelNode*) &iedModel_MEAS_MMXU4,
    (ModelNode*) &iedModel_MEAS_MMXU4_A,
    (ModelNode*) &iedModel_MEAS_MMXU4_PhV_phsA,
    0
};

DataObject iedModel_MEAS_MMXU4_PhV_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_MEAS_MMXU4_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU4_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU4_PhV_phsA_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU4_PhV_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU4_PhV_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU4_PhV_phsA_q,
    (ModelNode*) &iedModel_MEAS_MMXU4_PhV_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_PhV_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU4_PhV_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU4_PhV_phsA_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_PhV_phsA_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU4_PhV_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_PhV_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU4_PhV_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU4_PhV_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_PhV_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU4_PhV_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU4_PhV_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_MEAS_MMXU4_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU4_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU4_PhV_phsB_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU4_PhV_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU4_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU4_PhV_phsB_q,
    (ModelNode*) &iedModel_MEAS_MMXU4_PhV_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_PhV_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU4_PhV_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU4_PhV_phsB_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_PhV_phsB_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU4_PhV_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_PhV_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU4_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU4_PhV_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_PhV_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU4_PhV_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU4_PhV_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_MEAS_MMXU4_PhV,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU4_PhV_phsC_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU4_PhV_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU4_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU4_PhV_phsC_q,
    (ModelNode*) &iedModel_MEAS_MMXU4_PhV_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_PhV_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU4_PhV_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU4_PhV_phsC_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_PhV_phsC_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU4_PhV_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_PhV_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU4_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU4_PhV_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_PhV_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU4_PhV_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU4_A = {
    DataObjectModelType,
    "A",
    (ModelNode*) &iedModel_MEAS_MMXU4,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU4_A_phsA,
    0
};

DataObject iedModel_MEAS_MMXU4_A_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_MEAS_MMXU4_A,
    (ModelNode*) &iedModel_MEAS_MMXU4_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU4_A_phsA_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU4_A_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU4_A_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU4_A_phsA_q,
    (ModelNode*) &iedModel_MEAS_MMXU4_A_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_A_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU4_A_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU4_A_phsA_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_A_phsA_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU4_A_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_A_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU4_A_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU4_A_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_A_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU4_A_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU4_A_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_MEAS_MMXU4_A,
    (ModelNode*) &iedModel_MEAS_MMXU4_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU4_A_phsB_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU4_A_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU4_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU4_A_phsB_q,
    (ModelNode*) &iedModel_MEAS_MMXU4_A_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_A_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU4_A_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU4_A_phsB_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_A_phsB_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU4_A_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_A_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU4_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU4_A_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_A_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU4_A_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU4_A_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_MEAS_MMXU4_A,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU4_A_phsC_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU4_A_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU4_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU4_A_phsC_q,
    (ModelNode*) &iedModel_MEAS_MMXU4_A_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_A_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU4_A_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU4_A_phsC_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_A_phsC_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU4_A_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_A_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU4_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU4_A_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU4_A_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU4_A_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_MEAS_MMXU5 = {
    LogicalNodeModelType,
    "MMXU5",
    (ModelNode*) &iedModel_MEAS,
    (ModelNode*) &iedModel_MEAS_MMXU6,
    (ModelNode*) &iedModel_MEAS_MMXU5_TotW,
};

DataObject iedModel_MEAS_MMXU5_TotW = {
    DataObjectModelType,
    "TotW",
    (ModelNode*) &iedModel_MEAS_MMXU5,
    (ModelNode*) &iedModel_MEAS_MMXU5_Beh,
    (ModelNode*) &iedModel_MEAS_MMXU5_TotW_mag,
    0
};

DataAttribute iedModel_MEAS_MMXU5_TotW_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU5_TotW,
    (ModelNode*) &iedModel_MEAS_MMXU5_TotW_q,
    (ModelNode*) &iedModel_MEAS_MMXU5_TotW_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_TotW_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU5_TotW_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_TotW_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU5_TotW,
    (ModelNode*) &iedModel_MEAS_MMXU5_TotW_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_TotW_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU5_TotW,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU5_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_MEAS_MMXU5,
    (ModelNode*) &iedModel_MEAS_MMXU5_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU5_Beh_stVal,
    0
};

DataAttribute iedModel_MEAS_MMXU5_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_MMXU5_Beh,
    (ModelNode*) &iedModel_MEAS_MMXU5_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU5_Beh,
    (ModelNode*) &iedModel_MEAS_MMXU5_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU5_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU5_TotVAr = {
    DataObjectModelType,
    "TotVAr",
    (ModelNode*) &iedModel_MEAS_MMXU5,
    (ModelNode*) &iedModel_MEAS_MMXU5_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU5_TotVAr_mag,
    0
};

DataAttribute iedModel_MEAS_MMXU5_TotVAr_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU5_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU5_TotVAr_q,
    (ModelNode*) &iedModel_MEAS_MMXU5_TotVAr_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_TotVAr_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU5_TotVAr_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_TotVAr_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU5_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU5_TotVAr_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_TotVAr_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU5_TotVAr,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU5_TotVA = {
    DataObjectModelType,
    "TotVA",
    (ModelNode*) &iedModel_MEAS_MMXU5,
    (ModelNode*) &iedModel_MEAS_MMXU5_PPV,
    (ModelNode*) &iedModel_MEAS_MMXU5_TotVA_mag,
    0
};

DataAttribute iedModel_MEAS_MMXU5_TotVA_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU5_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU5_TotVA_q,
    (ModelNode*) &iedModel_MEAS_MMXU5_TotVA_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_TotVA_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU5_TotVA_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_TotVA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU5_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU5_TotVA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_TotVA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU5_TotVA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU5_PPV = {
    DataObjectModelType,
    "PPV",
    (ModelNode*) &iedModel_MEAS_MMXU5,
    (ModelNode*) &iedModel_MEAS_MMXU5_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU5_PPV_phsAB,
    0
};

DataObject iedModel_MEAS_MMXU5_PPV_phsAB = {
    DataObjectModelType,
    "phsAB",
    (ModelNode*) &iedModel_MEAS_MMXU5_PPV,
    (ModelNode*) &iedModel_MEAS_MMXU5_PPV_phsBC,
    (ModelNode*) &iedModel_MEAS_MMXU5_PPV_phsAB_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU5_PPV_phsAB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU5_PPV_phsAB,
    (ModelNode*) &iedModel_MEAS_MMXU5_PPV_phsAB_q,
    (ModelNode*) &iedModel_MEAS_MMXU5_PPV_phsAB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_PPV_phsAB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU5_PPV_phsAB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU5_PPV_phsAB_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_PPV_phsAB_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU5_PPV_phsAB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_PPV_phsAB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU5_PPV_phsAB,
    (ModelNode*) &iedModel_MEAS_MMXU5_PPV_phsAB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_PPV_phsAB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU5_PPV_phsAB,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU5_PPV_phsBC = {
    DataObjectModelType,
    "phsBC",
    (ModelNode*) &iedModel_MEAS_MMXU5_PPV,
    (ModelNode*) &iedModel_MEAS_MMXU5_PPV_phsCA,
    (ModelNode*) &iedModel_MEAS_MMXU5_PPV_phsBC_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU5_PPV_phsBC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU5_PPV_phsBC,
    (ModelNode*) &iedModel_MEAS_MMXU5_PPV_phsBC_q,
    (ModelNode*) &iedModel_MEAS_MMXU5_PPV_phsBC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_PPV_phsBC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU5_PPV_phsBC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU5_PPV_phsBC_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_PPV_phsBC_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU5_PPV_phsBC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_PPV_phsBC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU5_PPV_phsBC,
    (ModelNode*) &iedModel_MEAS_MMXU5_PPV_phsBC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_PPV_phsBC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU5_PPV_phsBC,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU5_PPV_phsCA = {
    DataObjectModelType,
    "phsCA",
    (ModelNode*) &iedModel_MEAS_MMXU5_PPV,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU5_PPV_phsCA_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU5_PPV_phsCA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU5_PPV_phsCA,
    (ModelNode*) &iedModel_MEAS_MMXU5_PPV_phsCA_q,
    (ModelNode*) &iedModel_MEAS_MMXU5_PPV_phsCA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_PPV_phsCA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU5_PPV_phsCA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU5_PPV_phsCA_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_PPV_phsCA_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU5_PPV_phsCA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_PPV_phsCA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU5_PPV_phsCA,
    (ModelNode*) &iedModel_MEAS_MMXU5_PPV_phsCA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_PPV_phsCA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU5_PPV_phsCA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU5_PhV = {
    DataObjectModelType,
    "PhV",
    (ModelNode*) &iedModel_MEAS_MMXU5,
    (ModelNode*) &iedModel_MEAS_MMXU5_A,
    (ModelNode*) &iedModel_MEAS_MMXU5_PhV_phsA,
    0
};

DataObject iedModel_MEAS_MMXU5_PhV_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_MEAS_MMXU5_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU5_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU5_PhV_phsA_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU5_PhV_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU5_PhV_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU5_PhV_phsA_q,
    (ModelNode*) &iedModel_MEAS_MMXU5_PhV_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_PhV_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU5_PhV_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU5_PhV_phsA_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_PhV_phsA_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU5_PhV_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_PhV_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU5_PhV_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU5_PhV_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_PhV_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU5_PhV_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU5_PhV_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_MEAS_MMXU5_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU5_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU5_PhV_phsB_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU5_PhV_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU5_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU5_PhV_phsB_q,
    (ModelNode*) &iedModel_MEAS_MMXU5_PhV_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_PhV_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU5_PhV_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU5_PhV_phsB_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_PhV_phsB_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU5_PhV_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_PhV_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU5_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU5_PhV_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_PhV_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU5_PhV_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU5_PhV_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_MEAS_MMXU5_PhV,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU5_PhV_phsC_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU5_PhV_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU5_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU5_PhV_phsC_q,
    (ModelNode*) &iedModel_MEAS_MMXU5_PhV_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_PhV_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU5_PhV_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU5_PhV_phsC_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_PhV_phsC_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU5_PhV_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_PhV_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU5_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU5_PhV_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_PhV_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU5_PhV_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU5_A = {
    DataObjectModelType,
    "A",
    (ModelNode*) &iedModel_MEAS_MMXU5,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU5_A_phsA,
    0
};

DataObject iedModel_MEAS_MMXU5_A_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_MEAS_MMXU5_A,
    (ModelNode*) &iedModel_MEAS_MMXU5_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU5_A_phsA_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU5_A_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU5_A_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU5_A_phsA_q,
    (ModelNode*) &iedModel_MEAS_MMXU5_A_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_A_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU5_A_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU5_A_phsA_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_A_phsA_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU5_A_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_A_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU5_A_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU5_A_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_A_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU5_A_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU5_A_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_MEAS_MMXU5_A,
    (ModelNode*) &iedModel_MEAS_MMXU5_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU5_A_phsB_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU5_A_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU5_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU5_A_phsB_q,
    (ModelNode*) &iedModel_MEAS_MMXU5_A_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_A_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU5_A_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU5_A_phsB_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_A_phsB_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU5_A_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_A_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU5_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU5_A_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_A_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU5_A_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU5_A_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_MEAS_MMXU5_A,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU5_A_phsC_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU5_A_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU5_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU5_A_phsC_q,
    (ModelNode*) &iedModel_MEAS_MMXU5_A_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_A_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU5_A_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU5_A_phsC_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_A_phsC_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU5_A_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_A_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU5_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU5_A_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU5_A_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU5_A_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_MEAS_MMXU6 = {
    LogicalNodeModelType,
    "MMXU6",
    (ModelNode*) &iedModel_MEAS,
    (ModelNode*) &iedModel_MEAS_MMXU7,
    (ModelNode*) &iedModel_MEAS_MMXU6_TotW,
};

DataObject iedModel_MEAS_MMXU6_TotW = {
    DataObjectModelType,
    "TotW",
    (ModelNode*) &iedModel_MEAS_MMXU6,
    (ModelNode*) &iedModel_MEAS_MMXU6_Beh,
    (ModelNode*) &iedModel_MEAS_MMXU6_TotW_mag,
    0
};

DataAttribute iedModel_MEAS_MMXU6_TotW_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU6_TotW,
    (ModelNode*) &iedModel_MEAS_MMXU6_TotW_q,
    (ModelNode*) &iedModel_MEAS_MMXU6_TotW_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_TotW_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU6_TotW_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_TotW_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU6_TotW,
    (ModelNode*) &iedModel_MEAS_MMXU6_TotW_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_TotW_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU6_TotW,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU6_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_MEAS_MMXU6,
    (ModelNode*) &iedModel_MEAS_MMXU6_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU6_Beh_stVal,
    0
};

DataAttribute iedModel_MEAS_MMXU6_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_MMXU6_Beh,
    (ModelNode*) &iedModel_MEAS_MMXU6_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU6_Beh,
    (ModelNode*) &iedModel_MEAS_MMXU6_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU6_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU6_TotVAr = {
    DataObjectModelType,
    "TotVAr",
    (ModelNode*) &iedModel_MEAS_MMXU6,
    (ModelNode*) &iedModel_MEAS_MMXU6_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU6_TotVAr_mag,
    0
};

DataAttribute iedModel_MEAS_MMXU6_TotVAr_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU6_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU6_TotVAr_q,
    (ModelNode*) &iedModel_MEAS_MMXU6_TotVAr_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_TotVAr_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU6_TotVAr_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_TotVAr_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU6_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU6_TotVAr_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_TotVAr_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU6_TotVAr,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU6_TotVA = {
    DataObjectModelType,
    "TotVA",
    (ModelNode*) &iedModel_MEAS_MMXU6,
    (ModelNode*) &iedModel_MEAS_MMXU6_PPV,
    (ModelNode*) &iedModel_MEAS_MMXU6_TotVA_mag,
    0
};

DataAttribute iedModel_MEAS_MMXU6_TotVA_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU6_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU6_TotVA_q,
    (ModelNode*) &iedModel_MEAS_MMXU6_TotVA_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_TotVA_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU6_TotVA_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_TotVA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU6_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU6_TotVA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_TotVA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU6_TotVA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU6_PPV = {
    DataObjectModelType,
    "PPV",
    (ModelNode*) &iedModel_MEAS_MMXU6,
    (ModelNode*) &iedModel_MEAS_MMXU6_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU6_PPV_phsAB,
    0
};

DataObject iedModel_MEAS_MMXU6_PPV_phsAB = {
    DataObjectModelType,
    "phsAB",
    (ModelNode*) &iedModel_MEAS_MMXU6_PPV,
    (ModelNode*) &iedModel_MEAS_MMXU6_PPV_phsBC,
    (ModelNode*) &iedModel_MEAS_MMXU6_PPV_phsAB_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU6_PPV_phsAB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU6_PPV_phsAB,
    (ModelNode*) &iedModel_MEAS_MMXU6_PPV_phsAB_q,
    (ModelNode*) &iedModel_MEAS_MMXU6_PPV_phsAB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_PPV_phsAB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU6_PPV_phsAB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU6_PPV_phsAB_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_PPV_phsAB_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU6_PPV_phsAB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_PPV_phsAB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU6_PPV_phsAB,
    (ModelNode*) &iedModel_MEAS_MMXU6_PPV_phsAB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_PPV_phsAB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU6_PPV_phsAB,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU6_PPV_phsBC = {
    DataObjectModelType,
    "phsBC",
    (ModelNode*) &iedModel_MEAS_MMXU6_PPV,
    (ModelNode*) &iedModel_MEAS_MMXU6_PPV_phsCA,
    (ModelNode*) &iedModel_MEAS_MMXU6_PPV_phsBC_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU6_PPV_phsBC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU6_PPV_phsBC,
    (ModelNode*) &iedModel_MEAS_MMXU6_PPV_phsBC_q,
    (ModelNode*) &iedModel_MEAS_MMXU6_PPV_phsBC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_PPV_phsBC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU6_PPV_phsBC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU6_PPV_phsBC_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_PPV_phsBC_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU6_PPV_phsBC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_PPV_phsBC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU6_PPV_phsBC,
    (ModelNode*) &iedModel_MEAS_MMXU6_PPV_phsBC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_PPV_phsBC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU6_PPV_phsBC,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU6_PPV_phsCA = {
    DataObjectModelType,
    "phsCA",
    (ModelNode*) &iedModel_MEAS_MMXU6_PPV,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU6_PPV_phsCA_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU6_PPV_phsCA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU6_PPV_phsCA,
    (ModelNode*) &iedModel_MEAS_MMXU6_PPV_phsCA_q,
    (ModelNode*) &iedModel_MEAS_MMXU6_PPV_phsCA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_PPV_phsCA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU6_PPV_phsCA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU6_PPV_phsCA_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_PPV_phsCA_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU6_PPV_phsCA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_PPV_phsCA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU6_PPV_phsCA,
    (ModelNode*) &iedModel_MEAS_MMXU6_PPV_phsCA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_PPV_phsCA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU6_PPV_phsCA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU6_PhV = {
    DataObjectModelType,
    "PhV",
    (ModelNode*) &iedModel_MEAS_MMXU6,
    (ModelNode*) &iedModel_MEAS_MMXU6_A,
    (ModelNode*) &iedModel_MEAS_MMXU6_PhV_phsA,
    0
};

DataObject iedModel_MEAS_MMXU6_PhV_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_MEAS_MMXU6_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU6_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU6_PhV_phsA_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU6_PhV_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU6_PhV_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU6_PhV_phsA_q,
    (ModelNode*) &iedModel_MEAS_MMXU6_PhV_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_PhV_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU6_PhV_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU6_PhV_phsA_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_PhV_phsA_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU6_PhV_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_PhV_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU6_PhV_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU6_PhV_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_PhV_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU6_PhV_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU6_PhV_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_MEAS_MMXU6_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU6_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU6_PhV_phsB_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU6_PhV_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU6_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU6_PhV_phsB_q,
    (ModelNode*) &iedModel_MEAS_MMXU6_PhV_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_PhV_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU6_PhV_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU6_PhV_phsB_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_PhV_phsB_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU6_PhV_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_PhV_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU6_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU6_PhV_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_PhV_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU6_PhV_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU6_PhV_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_MEAS_MMXU6_PhV,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU6_PhV_phsC_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU6_PhV_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU6_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU6_PhV_phsC_q,
    (ModelNode*) &iedModel_MEAS_MMXU6_PhV_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_PhV_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU6_PhV_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU6_PhV_phsC_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_PhV_phsC_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU6_PhV_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_PhV_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU6_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU6_PhV_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_PhV_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU6_PhV_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU6_A = {
    DataObjectModelType,
    "A",
    (ModelNode*) &iedModel_MEAS_MMXU6,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU6_A_phsA,
    0
};

DataObject iedModel_MEAS_MMXU6_A_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_MEAS_MMXU6_A,
    (ModelNode*) &iedModel_MEAS_MMXU6_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU6_A_phsA_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU6_A_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU6_A_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU6_A_phsA_q,
    (ModelNode*) &iedModel_MEAS_MMXU6_A_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_A_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU6_A_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU6_A_phsA_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_A_phsA_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU6_A_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_A_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU6_A_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU6_A_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_A_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU6_A_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU6_A_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_MEAS_MMXU6_A,
    (ModelNode*) &iedModel_MEAS_MMXU6_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU6_A_phsB_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU6_A_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU6_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU6_A_phsB_q,
    (ModelNode*) &iedModel_MEAS_MMXU6_A_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_A_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU6_A_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU6_A_phsB_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_A_phsB_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU6_A_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_A_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU6_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU6_A_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_A_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU6_A_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU6_A_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_MEAS_MMXU6_A,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU6_A_phsC_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU6_A_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU6_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU6_A_phsC_q,
    (ModelNode*) &iedModel_MEAS_MMXU6_A_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_A_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU6_A_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU6_A_phsC_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_A_phsC_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU6_A_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_A_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU6_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU6_A_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU6_A_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU6_A_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_MEAS_MMXU7 = {
    LogicalNodeModelType,
    "MMXU7",
    (ModelNode*) &iedModel_MEAS,
    (ModelNode*) &iedModel_MEAS_MMXU8,
    (ModelNode*) &iedModel_MEAS_MMXU7_TotW,
};

DataObject iedModel_MEAS_MMXU7_TotW = {
    DataObjectModelType,
    "TotW",
    (ModelNode*) &iedModel_MEAS_MMXU7,
    (ModelNode*) &iedModel_MEAS_MMXU7_Beh,
    (ModelNode*) &iedModel_MEAS_MMXU7_TotW_mag,
    0
};

DataAttribute iedModel_MEAS_MMXU7_TotW_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU7_TotW,
    (ModelNode*) &iedModel_MEAS_MMXU7_TotW_q,
    (ModelNode*) &iedModel_MEAS_MMXU7_TotW_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_TotW_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU7_TotW_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_TotW_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU7_TotW,
    (ModelNode*) &iedModel_MEAS_MMXU7_TotW_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_TotW_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU7_TotW,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU7_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_MEAS_MMXU7,
    (ModelNode*) &iedModel_MEAS_MMXU7_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU7_Beh_stVal,
    0
};

DataAttribute iedModel_MEAS_MMXU7_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_MMXU7_Beh,
    (ModelNode*) &iedModel_MEAS_MMXU7_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU7_Beh,
    (ModelNode*) &iedModel_MEAS_MMXU7_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU7_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU7_TotVAr = {
    DataObjectModelType,
    "TotVAr",
    (ModelNode*) &iedModel_MEAS_MMXU7,
    (ModelNode*) &iedModel_MEAS_MMXU7_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU7_TotVAr_mag,
    0
};

DataAttribute iedModel_MEAS_MMXU7_TotVAr_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU7_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU7_TotVAr_q,
    (ModelNode*) &iedModel_MEAS_MMXU7_TotVAr_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_TotVAr_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU7_TotVAr_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_TotVAr_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU7_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU7_TotVAr_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_TotVAr_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU7_TotVAr,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU7_TotVA = {
    DataObjectModelType,
    "TotVA",
    (ModelNode*) &iedModel_MEAS_MMXU7,
    (ModelNode*) &iedModel_MEAS_MMXU7_PPV,
    (ModelNode*) &iedModel_MEAS_MMXU7_TotVA_mag,
    0
};

DataAttribute iedModel_MEAS_MMXU7_TotVA_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU7_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU7_TotVA_q,
    (ModelNode*) &iedModel_MEAS_MMXU7_TotVA_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_TotVA_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU7_TotVA_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_TotVA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU7_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU7_TotVA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_TotVA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU7_TotVA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU7_PPV = {
    DataObjectModelType,
    "PPV",
    (ModelNode*) &iedModel_MEAS_MMXU7,
    (ModelNode*) &iedModel_MEAS_MMXU7_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU7_PPV_phsAB,
    0
};

DataObject iedModel_MEAS_MMXU7_PPV_phsAB = {
    DataObjectModelType,
    "phsAB",
    (ModelNode*) &iedModel_MEAS_MMXU7_PPV,
    (ModelNode*) &iedModel_MEAS_MMXU7_PPV_phsBC,
    (ModelNode*) &iedModel_MEAS_MMXU7_PPV_phsAB_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU7_PPV_phsAB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU7_PPV_phsAB,
    (ModelNode*) &iedModel_MEAS_MMXU7_PPV_phsAB_q,
    (ModelNode*) &iedModel_MEAS_MMXU7_PPV_phsAB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_PPV_phsAB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU7_PPV_phsAB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU7_PPV_phsAB_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_PPV_phsAB_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU7_PPV_phsAB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_PPV_phsAB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU7_PPV_phsAB,
    (ModelNode*) &iedModel_MEAS_MMXU7_PPV_phsAB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_PPV_phsAB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU7_PPV_phsAB,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU7_PPV_phsBC = {
    DataObjectModelType,
    "phsBC",
    (ModelNode*) &iedModel_MEAS_MMXU7_PPV,
    (ModelNode*) &iedModel_MEAS_MMXU7_PPV_phsCA,
    (ModelNode*) &iedModel_MEAS_MMXU7_PPV_phsBC_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU7_PPV_phsBC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU7_PPV_phsBC,
    (ModelNode*) &iedModel_MEAS_MMXU7_PPV_phsBC_q,
    (ModelNode*) &iedModel_MEAS_MMXU7_PPV_phsBC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_PPV_phsBC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU7_PPV_phsBC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU7_PPV_phsBC_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_PPV_phsBC_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU7_PPV_phsBC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_PPV_phsBC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU7_PPV_phsBC,
    (ModelNode*) &iedModel_MEAS_MMXU7_PPV_phsBC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_PPV_phsBC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU7_PPV_phsBC,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU7_PPV_phsCA = {
    DataObjectModelType,
    "phsCA",
    (ModelNode*) &iedModel_MEAS_MMXU7_PPV,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU7_PPV_phsCA_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU7_PPV_phsCA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU7_PPV_phsCA,
    (ModelNode*) &iedModel_MEAS_MMXU7_PPV_phsCA_q,
    (ModelNode*) &iedModel_MEAS_MMXU7_PPV_phsCA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_PPV_phsCA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU7_PPV_phsCA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU7_PPV_phsCA_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_PPV_phsCA_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU7_PPV_phsCA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_PPV_phsCA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU7_PPV_phsCA,
    (ModelNode*) &iedModel_MEAS_MMXU7_PPV_phsCA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_PPV_phsCA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU7_PPV_phsCA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU7_PhV = {
    DataObjectModelType,
    "PhV",
    (ModelNode*) &iedModel_MEAS_MMXU7,
    (ModelNode*) &iedModel_MEAS_MMXU7_A,
    (ModelNode*) &iedModel_MEAS_MMXU7_PhV_phsA,
    0
};

DataObject iedModel_MEAS_MMXU7_PhV_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_MEAS_MMXU7_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU7_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU7_PhV_phsA_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU7_PhV_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU7_PhV_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU7_PhV_phsA_q,
    (ModelNode*) &iedModel_MEAS_MMXU7_PhV_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_PhV_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU7_PhV_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU7_PhV_phsA_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_PhV_phsA_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU7_PhV_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_PhV_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU7_PhV_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU7_PhV_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_PhV_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU7_PhV_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU7_PhV_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_MEAS_MMXU7_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU7_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU7_PhV_phsB_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU7_PhV_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU7_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU7_PhV_phsB_q,
    (ModelNode*) &iedModel_MEAS_MMXU7_PhV_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_PhV_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU7_PhV_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU7_PhV_phsB_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_PhV_phsB_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU7_PhV_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_PhV_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU7_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU7_PhV_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_PhV_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU7_PhV_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU7_PhV_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_MEAS_MMXU7_PhV,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU7_PhV_phsC_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU7_PhV_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU7_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU7_PhV_phsC_q,
    (ModelNode*) &iedModel_MEAS_MMXU7_PhV_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_PhV_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU7_PhV_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU7_PhV_phsC_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_PhV_phsC_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU7_PhV_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_PhV_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU7_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU7_PhV_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_PhV_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU7_PhV_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU7_A = {
    DataObjectModelType,
    "A",
    (ModelNode*) &iedModel_MEAS_MMXU7,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU7_A_phsA,
    0
};

DataObject iedModel_MEAS_MMXU7_A_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_MEAS_MMXU7_A,
    (ModelNode*) &iedModel_MEAS_MMXU7_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU7_A_phsA_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU7_A_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU7_A_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU7_A_phsA_q,
    (ModelNode*) &iedModel_MEAS_MMXU7_A_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_A_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU7_A_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU7_A_phsA_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_A_phsA_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU7_A_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_A_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU7_A_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU7_A_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_A_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU7_A_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU7_A_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_MEAS_MMXU7_A,
    (ModelNode*) &iedModel_MEAS_MMXU7_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU7_A_phsB_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU7_A_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU7_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU7_A_phsB_q,
    (ModelNode*) &iedModel_MEAS_MMXU7_A_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_A_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU7_A_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU7_A_phsB_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_A_phsB_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU7_A_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_A_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU7_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU7_A_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_A_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU7_A_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU7_A_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_MEAS_MMXU7_A,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU7_A_phsC_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU7_A_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU7_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU7_A_phsC_q,
    (ModelNode*) &iedModel_MEAS_MMXU7_A_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_A_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU7_A_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU7_A_phsC_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_A_phsC_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU7_A_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_A_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU7_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU7_A_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU7_A_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU7_A_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_MEAS_MMXU8 = {
    LogicalNodeModelType,
    "MMXU8",
    (ModelNode*) &iedModel_MEAS,
    (ModelNode*) &iedModel_MEAS_MMXU9,
    (ModelNode*) &iedModel_MEAS_MMXU8_TotW,
};

DataObject iedModel_MEAS_MMXU8_TotW = {
    DataObjectModelType,
    "TotW",
    (ModelNode*) &iedModel_MEAS_MMXU8,
    (ModelNode*) &iedModel_MEAS_MMXU8_Beh,
    (ModelNode*) &iedModel_MEAS_MMXU8_TotW_mag,
    0
};

DataAttribute iedModel_MEAS_MMXU8_TotW_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU8_TotW,
    (ModelNode*) &iedModel_MEAS_MMXU8_TotW_q,
    (ModelNode*) &iedModel_MEAS_MMXU8_TotW_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_TotW_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU8_TotW_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_TotW_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU8_TotW,
    (ModelNode*) &iedModel_MEAS_MMXU8_TotW_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_TotW_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU8_TotW,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU8_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_MEAS_MMXU8,
    (ModelNode*) &iedModel_MEAS_MMXU8_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU8_Beh_stVal,
    0
};

DataAttribute iedModel_MEAS_MMXU8_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_MMXU8_Beh,
    (ModelNode*) &iedModel_MEAS_MMXU8_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU8_Beh,
    (ModelNode*) &iedModel_MEAS_MMXU8_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU8_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU8_TotVAr = {
    DataObjectModelType,
    "TotVAr",
    (ModelNode*) &iedModel_MEAS_MMXU8,
    (ModelNode*) &iedModel_MEAS_MMXU8_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU8_TotVAr_mag,
    0
};

DataAttribute iedModel_MEAS_MMXU8_TotVAr_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU8_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU8_TotVAr_q,
    (ModelNode*) &iedModel_MEAS_MMXU8_TotVAr_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_TotVAr_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU8_TotVAr_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_TotVAr_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU8_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU8_TotVAr_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_TotVAr_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU8_TotVAr,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU8_TotVA = {
    DataObjectModelType,
    "TotVA",
    (ModelNode*) &iedModel_MEAS_MMXU8,
    (ModelNode*) &iedModel_MEAS_MMXU8_PPV,
    (ModelNode*) &iedModel_MEAS_MMXU8_TotVA_mag,
    0
};

DataAttribute iedModel_MEAS_MMXU8_TotVA_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU8_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU8_TotVA_q,
    (ModelNode*) &iedModel_MEAS_MMXU8_TotVA_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_TotVA_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU8_TotVA_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_TotVA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU8_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU8_TotVA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_TotVA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU8_TotVA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU8_PPV = {
    DataObjectModelType,
    "PPV",
    (ModelNode*) &iedModel_MEAS_MMXU8,
    (ModelNode*) &iedModel_MEAS_MMXU8_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU8_PPV_phsAB,
    0
};

DataObject iedModel_MEAS_MMXU8_PPV_phsAB = {
    DataObjectModelType,
    "phsAB",
    (ModelNode*) &iedModel_MEAS_MMXU8_PPV,
    (ModelNode*) &iedModel_MEAS_MMXU8_PPV_phsBC,
    (ModelNode*) &iedModel_MEAS_MMXU8_PPV_phsAB_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU8_PPV_phsAB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU8_PPV_phsAB,
    (ModelNode*) &iedModel_MEAS_MMXU8_PPV_phsAB_q,
    (ModelNode*) &iedModel_MEAS_MMXU8_PPV_phsAB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_PPV_phsAB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU8_PPV_phsAB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU8_PPV_phsAB_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_PPV_phsAB_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU8_PPV_phsAB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_PPV_phsAB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU8_PPV_phsAB,
    (ModelNode*) &iedModel_MEAS_MMXU8_PPV_phsAB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_PPV_phsAB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU8_PPV_phsAB,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU8_PPV_phsBC = {
    DataObjectModelType,
    "phsBC",
    (ModelNode*) &iedModel_MEAS_MMXU8_PPV,
    (ModelNode*) &iedModel_MEAS_MMXU8_PPV_phsCA,
    (ModelNode*) &iedModel_MEAS_MMXU8_PPV_phsBC_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU8_PPV_phsBC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU8_PPV_phsBC,
    (ModelNode*) &iedModel_MEAS_MMXU8_PPV_phsBC_q,
    (ModelNode*) &iedModel_MEAS_MMXU8_PPV_phsBC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_PPV_phsBC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU8_PPV_phsBC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU8_PPV_phsBC_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_PPV_phsBC_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU8_PPV_phsBC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_PPV_phsBC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU8_PPV_phsBC,
    (ModelNode*) &iedModel_MEAS_MMXU8_PPV_phsBC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_PPV_phsBC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU8_PPV_phsBC,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU8_PPV_phsCA = {
    DataObjectModelType,
    "phsCA",
    (ModelNode*) &iedModel_MEAS_MMXU8_PPV,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU8_PPV_phsCA_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU8_PPV_phsCA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU8_PPV_phsCA,
    (ModelNode*) &iedModel_MEAS_MMXU8_PPV_phsCA_q,
    (ModelNode*) &iedModel_MEAS_MMXU8_PPV_phsCA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_PPV_phsCA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU8_PPV_phsCA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU8_PPV_phsCA_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_PPV_phsCA_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU8_PPV_phsCA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_PPV_phsCA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU8_PPV_phsCA,
    (ModelNode*) &iedModel_MEAS_MMXU8_PPV_phsCA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_PPV_phsCA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU8_PPV_phsCA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU8_PhV = {
    DataObjectModelType,
    "PhV",
    (ModelNode*) &iedModel_MEAS_MMXU8,
    (ModelNode*) &iedModel_MEAS_MMXU8_A,
    (ModelNode*) &iedModel_MEAS_MMXU8_PhV_phsA,
    0
};

DataObject iedModel_MEAS_MMXU8_PhV_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_MEAS_MMXU8_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU8_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU8_PhV_phsA_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU8_PhV_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU8_PhV_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU8_PhV_phsA_q,
    (ModelNode*) &iedModel_MEAS_MMXU8_PhV_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_PhV_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU8_PhV_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU8_PhV_phsA_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_PhV_phsA_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU8_PhV_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_PhV_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU8_PhV_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU8_PhV_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_PhV_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU8_PhV_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU8_PhV_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_MEAS_MMXU8_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU8_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU8_PhV_phsB_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU8_PhV_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU8_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU8_PhV_phsB_q,
    (ModelNode*) &iedModel_MEAS_MMXU8_PhV_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_PhV_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU8_PhV_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU8_PhV_phsB_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_PhV_phsB_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU8_PhV_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_PhV_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU8_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU8_PhV_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_PhV_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU8_PhV_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU8_PhV_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_MEAS_MMXU8_PhV,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU8_PhV_phsC_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU8_PhV_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU8_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU8_PhV_phsC_q,
    (ModelNode*) &iedModel_MEAS_MMXU8_PhV_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_PhV_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU8_PhV_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU8_PhV_phsC_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_PhV_phsC_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU8_PhV_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_PhV_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU8_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU8_PhV_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_PhV_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU8_PhV_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU8_A = {
    DataObjectModelType,
    "A",
    (ModelNode*) &iedModel_MEAS_MMXU8,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU8_A_phsA,
    0
};

DataObject iedModel_MEAS_MMXU8_A_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_MEAS_MMXU8_A,
    (ModelNode*) &iedModel_MEAS_MMXU8_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU8_A_phsA_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU8_A_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU8_A_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU8_A_phsA_q,
    (ModelNode*) &iedModel_MEAS_MMXU8_A_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_A_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU8_A_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU8_A_phsA_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_A_phsA_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU8_A_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_A_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU8_A_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU8_A_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_A_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU8_A_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU8_A_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_MEAS_MMXU8_A,
    (ModelNode*) &iedModel_MEAS_MMXU8_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU8_A_phsB_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU8_A_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU8_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU8_A_phsB_q,
    (ModelNode*) &iedModel_MEAS_MMXU8_A_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_A_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU8_A_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU8_A_phsB_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_A_phsB_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU8_A_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_A_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU8_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU8_A_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_A_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU8_A_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU8_A_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_MEAS_MMXU8_A,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU8_A_phsC_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU8_A_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU8_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU8_A_phsC_q,
    (ModelNode*) &iedModel_MEAS_MMXU8_A_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_A_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU8_A_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU8_A_phsC_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_A_phsC_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU8_A_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_A_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU8_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU8_A_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU8_A_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU8_A_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_MEAS_MMXU9 = {
    LogicalNodeModelType,
    "MMXU9",
    (ModelNode*) &iedModel_MEAS,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU9_TotW,
};

DataObject iedModel_MEAS_MMXU9_TotW = {
    DataObjectModelType,
    "TotW",
    (ModelNode*) &iedModel_MEAS_MMXU9,
    (ModelNode*) &iedModel_MEAS_MMXU9_Beh,
    (ModelNode*) &iedModel_MEAS_MMXU9_TotW_mag,
    0
};

DataAttribute iedModel_MEAS_MMXU9_TotW_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU9_TotW,
    (ModelNode*) &iedModel_MEAS_MMXU9_TotW_q,
    (ModelNode*) &iedModel_MEAS_MMXU9_TotW_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_TotW_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU9_TotW_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_TotW_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU9_TotW,
    (ModelNode*) &iedModel_MEAS_MMXU9_TotW_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_TotW_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU9_TotW,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU9_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_MEAS_MMXU9,
    (ModelNode*) &iedModel_MEAS_MMXU9_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU9_Beh_stVal,
    0
};

DataAttribute iedModel_MEAS_MMXU9_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_MEAS_MMXU9_Beh,
    (ModelNode*) &iedModel_MEAS_MMXU9_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU9_Beh,
    (ModelNode*) &iedModel_MEAS_MMXU9_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU9_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU9_TotVAr = {
    DataObjectModelType,
    "TotVAr",
    (ModelNode*) &iedModel_MEAS_MMXU9,
    (ModelNode*) &iedModel_MEAS_MMXU9_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU9_TotVAr_mag,
    0
};

DataAttribute iedModel_MEAS_MMXU9_TotVAr_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU9_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU9_TotVAr_q,
    (ModelNode*) &iedModel_MEAS_MMXU9_TotVAr_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_TotVAr_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU9_TotVAr_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_TotVAr_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU9_TotVAr,
    (ModelNode*) &iedModel_MEAS_MMXU9_TotVAr_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_TotVAr_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU9_TotVAr,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU9_TotVA = {
    DataObjectModelType,
    "TotVA",
    (ModelNode*) &iedModel_MEAS_MMXU9,
    (ModelNode*) &iedModel_MEAS_MMXU9_PPV,
    (ModelNode*) &iedModel_MEAS_MMXU9_TotVA_mag,
    0
};

DataAttribute iedModel_MEAS_MMXU9_TotVA_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU9_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU9_TotVA_q,
    (ModelNode*) &iedModel_MEAS_MMXU9_TotVA_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_TotVA_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU9_TotVA_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_TotVA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU9_TotVA,
    (ModelNode*) &iedModel_MEAS_MMXU9_TotVA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_TotVA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU9_TotVA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU9_PPV = {
    DataObjectModelType,
    "PPV",
    (ModelNode*) &iedModel_MEAS_MMXU9,
    (ModelNode*) &iedModel_MEAS_MMXU9_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU9_PPV_phsAB,
    0
};

DataObject iedModel_MEAS_MMXU9_PPV_phsAB = {
    DataObjectModelType,
    "phsAB",
    (ModelNode*) &iedModel_MEAS_MMXU9_PPV,
    (ModelNode*) &iedModel_MEAS_MMXU9_PPV_phsBC,
    (ModelNode*) &iedModel_MEAS_MMXU9_PPV_phsAB_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU9_PPV_phsAB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU9_PPV_phsAB,
    (ModelNode*) &iedModel_MEAS_MMXU9_PPV_phsAB_q,
    (ModelNode*) &iedModel_MEAS_MMXU9_PPV_phsAB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_PPV_phsAB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU9_PPV_phsAB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU9_PPV_phsAB_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_PPV_phsAB_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU9_PPV_phsAB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_PPV_phsAB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU9_PPV_phsAB,
    (ModelNode*) &iedModel_MEAS_MMXU9_PPV_phsAB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_PPV_phsAB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU9_PPV_phsAB,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU9_PPV_phsBC = {
    DataObjectModelType,
    "phsBC",
    (ModelNode*) &iedModel_MEAS_MMXU9_PPV,
    (ModelNode*) &iedModel_MEAS_MMXU9_PPV_phsCA,
    (ModelNode*) &iedModel_MEAS_MMXU9_PPV_phsBC_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU9_PPV_phsBC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU9_PPV_phsBC,
    (ModelNode*) &iedModel_MEAS_MMXU9_PPV_phsBC_q,
    (ModelNode*) &iedModel_MEAS_MMXU9_PPV_phsBC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_PPV_phsBC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU9_PPV_phsBC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU9_PPV_phsBC_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_PPV_phsBC_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU9_PPV_phsBC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_PPV_phsBC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU9_PPV_phsBC,
    (ModelNode*) &iedModel_MEAS_MMXU9_PPV_phsBC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_PPV_phsBC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU9_PPV_phsBC,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU9_PPV_phsCA = {
    DataObjectModelType,
    "phsCA",
    (ModelNode*) &iedModel_MEAS_MMXU9_PPV,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU9_PPV_phsCA_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU9_PPV_phsCA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU9_PPV_phsCA,
    (ModelNode*) &iedModel_MEAS_MMXU9_PPV_phsCA_q,
    (ModelNode*) &iedModel_MEAS_MMXU9_PPV_phsCA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_PPV_phsCA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU9_PPV_phsCA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU9_PPV_phsCA_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_PPV_phsCA_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU9_PPV_phsCA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_PPV_phsCA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU9_PPV_phsCA,
    (ModelNode*) &iedModel_MEAS_MMXU9_PPV_phsCA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_PPV_phsCA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU9_PPV_phsCA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU9_PhV = {
    DataObjectModelType,
    "PhV",
    (ModelNode*) &iedModel_MEAS_MMXU9,
    (ModelNode*) &iedModel_MEAS_MMXU9_A,
    (ModelNode*) &iedModel_MEAS_MMXU9_PhV_phsA,
    0
};

DataObject iedModel_MEAS_MMXU9_PhV_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_MEAS_MMXU9_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU9_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU9_PhV_phsA_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU9_PhV_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU9_PhV_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU9_PhV_phsA_q,
    (ModelNode*) &iedModel_MEAS_MMXU9_PhV_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_PhV_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU9_PhV_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU9_PhV_phsA_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_PhV_phsA_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU9_PhV_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_PhV_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU9_PhV_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU9_PhV_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_PhV_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU9_PhV_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU9_PhV_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_MEAS_MMXU9_PhV,
    (ModelNode*) &iedModel_MEAS_MMXU9_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU9_PhV_phsB_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU9_PhV_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU9_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU9_PhV_phsB_q,
    (ModelNode*) &iedModel_MEAS_MMXU9_PhV_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_PhV_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU9_PhV_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU9_PhV_phsB_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_PhV_phsB_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU9_PhV_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_PhV_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU9_PhV_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU9_PhV_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_PhV_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU9_PhV_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU9_PhV_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_MEAS_MMXU9_PhV,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU9_PhV_phsC_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU9_PhV_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU9_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU9_PhV_phsC_q,
    (ModelNode*) &iedModel_MEAS_MMXU9_PhV_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_PhV_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU9_PhV_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU9_PhV_phsC_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_PhV_phsC_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU9_PhV_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_PhV_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU9_PhV_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU9_PhV_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_PhV_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU9_PhV_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU9_A = {
    DataObjectModelType,
    "A",
    (ModelNode*) &iedModel_MEAS_MMXU9,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU9_A_phsA,
    0
};

DataObject iedModel_MEAS_MMXU9_A_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_MEAS_MMXU9_A,
    (ModelNode*) &iedModel_MEAS_MMXU9_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU9_A_phsA_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU9_A_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU9_A_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU9_A_phsA_q,
    (ModelNode*) &iedModel_MEAS_MMXU9_A_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_A_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU9_A_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU9_A_phsA_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_A_phsA_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU9_A_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_A_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU9_A_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU9_A_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_A_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU9_A_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU9_A_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_MEAS_MMXU9_A,
    (ModelNode*) &iedModel_MEAS_MMXU9_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU9_A_phsB_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU9_A_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU9_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU9_A_phsB_q,
    (ModelNode*) &iedModel_MEAS_MMXU9_A_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_A_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU9_A_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU9_A_phsB_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_A_phsB_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU9_A_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_A_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU9_A_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU9_A_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_A_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU9_A_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU9_A_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_MEAS_MMXU9_A,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU9_A_phsC_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU9_A_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU9_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU9_A_phsC_q,
    (ModelNode*) &iedModel_MEAS_MMXU9_A_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_A_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU9_A_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU9_A_phsC_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_A_phsC_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU9_A_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_A_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU9_A_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU9_A_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU9_A_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU9_A_phsC,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

extern ReportControlBlock iedModel_MEAS_LLN0_report0;
extern ReportControlBlock iedModel_MEAS_LLN0_report1;

ReportControlBlock iedModel_MEAS_LLN0_report0 = {&iedModel_MEAS_LLN0, "PowCB01", NULL, false, "PowDS", 10, 31, 255, 500, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_MEAS_LLN0_report1};
ReportControlBlock iedModel_MEAS_LLN0_report1 = {&iedModel_MEAS_LLN0, "PowCB02", NULL, false, "PowDS", 10, 31, 255, 500, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, NULL};







IedModel iedModel = {
    "LIEDServer00",
    &iedModel_MEAS,
    &iedModelds_MEAS_LLN0_PowDS,
    &iedModel_MEAS_LLN0_report0,
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
