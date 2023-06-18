/*
 * static_model.c
 *
 * automatically generated from /home/ubuntu/DEMO/IED/TIED1/config_files/TIED1.icd
 */
#include "static_model.h"

static void initializeValues();

extern DataSet iedModelds_MEAS_LLN0_MDS1;
extern DataSet iedModelds_CTRL_LLN0_CDS;
extern DataSet iedModelds_PROT_LLN0_MDS;
extern DataSet iedModelds_PROT_LLN0_CDS;
extern DataSet iedModelds_PROT_LLN0_PDS;


extern DataSetEntry iedModelds_MEAS_LLN0_MDS1_fcda0;
extern DataSetEntry iedModelds_MEAS_LLN0_MDS1_fcda1;
extern DataSetEntry iedModelds_MEAS_LLN0_MDS1_fcda2;
extern DataSetEntry iedModelds_MEAS_LLN0_MDS1_fcda3;
extern DataSetEntry iedModelds_MEAS_LLN0_MDS1_fcda4;
extern DataSetEntry iedModelds_MEAS_LLN0_MDS1_fcda5;

DataSetEntry iedModelds_MEAS_LLN0_MDS1_fcda0 = {
  "MEAS",
  false,
  "MMXU1$MX$A$phsA$cVal$mag$f",
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_MDS1_fcda1
};

DataSetEntry iedModelds_MEAS_LLN0_MDS1_fcda1 = {
  "MEAS",
  false,
  "MMXU1$MX$A$phsB$cVal$mag$f",
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_MDS1_fcda2
};

DataSetEntry iedModelds_MEAS_LLN0_MDS1_fcda2 = {
  "MEAS",
  false,
  "MMXU1$MX$A$phsC$cVal$mag$f",
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_MDS1_fcda3
};

DataSetEntry iedModelds_MEAS_LLN0_MDS1_fcda3 = {
  "MEAS",
  false,
  "MMXU2$MX$A$phsA$cVal$mag$f",
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_MDS1_fcda4
};

DataSetEntry iedModelds_MEAS_LLN0_MDS1_fcda4 = {
  "MEAS",
  false,
  "MMXU2$MX$A$phsB$cVal$mag$f",
  -1,
  NULL,
  NULL,
  &iedModelds_MEAS_LLN0_MDS1_fcda5
};

DataSetEntry iedModelds_MEAS_LLN0_MDS1_fcda5 = {
  "MEAS",
  false,
  "MMXU2$MX$A$phsC$cVal$mag$f",
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_MEAS_LLN0_MDS1 = {
  "MEAS",
  "LLN0$MDS1",
  6,
  &iedModelds_MEAS_LLN0_MDS1_fcda0,
  &iedModelds_CTRL_LLN0_CDS
};

extern DataSetEntry iedModelds_CTRL_LLN0_CDS_fcda0;

DataSetEntry iedModelds_CTRL_LLN0_CDS_fcda0 = {
  "CTRL",
  false,
  "XCBR1$MX$Pos$stVal",
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_CTRL_LLN0_CDS = {
  "CTRL",
  "LLN0$CDS",
  1,
  &iedModelds_CTRL_LLN0_CDS_fcda0,
  &iedModelds_PROT_LLN0_MDS
};

extern DataSetEntry iedModelds_PROT_LLN0_MDS_fcda0;
extern DataSetEntry iedModelds_PROT_LLN0_MDS_fcda1;
extern DataSetEntry iedModelds_PROT_LLN0_MDS_fcda2;
extern DataSetEntry iedModelds_PROT_LLN0_MDS_fcda3;
extern DataSetEntry iedModelds_PROT_LLN0_MDS_fcda4;
extern DataSetEntry iedModelds_PROT_LLN0_MDS_fcda5;

DataSetEntry iedModelds_PROT_LLN0_MDS_fcda0 = {
  "MEAS",
  false,
  "MMXU1$MX$A$phsA$cVal$mag$f",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_MDS_fcda1
};

DataSetEntry iedModelds_PROT_LLN0_MDS_fcda1 = {
  "MEAS",
  false,
  "MMXU1$MX$A$phsB$cVal$mag$f",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_MDS_fcda2
};

DataSetEntry iedModelds_PROT_LLN0_MDS_fcda2 = {
  "MEAS",
  false,
  "MMXU1$MX$A$phsC$cVal$mag$f",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_MDS_fcda3
};

DataSetEntry iedModelds_PROT_LLN0_MDS_fcda3 = {
  "MEAS",
  false,
  "MMXU2$MX$A$phsA$cVal$mag$f",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_MDS_fcda4
};

DataSetEntry iedModelds_PROT_LLN0_MDS_fcda4 = {
  "MEAS",
  false,
  "MMXU2$MX$A$phsB$cVal$mag$f",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_MDS_fcda5
};

DataSetEntry iedModelds_PROT_LLN0_MDS_fcda5 = {
  "MEAS",
  false,
  "MMXU2$MX$A$phsC$cVal$mag$f",
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_PROT_LLN0_MDS = {
  "PROT",
  "LLN0$MDS",
  6,
  &iedModelds_PROT_LLN0_MDS_fcda0,
  &iedModelds_PROT_LLN0_CDS
};

extern DataSetEntry iedModelds_PROT_LLN0_CDS_fcda0;

DataSetEntry iedModelds_PROT_LLN0_CDS_fcda0 = {
  "CTRL",
  false,
  "XCBR1$ST$Pos$stVal",
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_PROT_LLN0_CDS = {
  "PROT",
  "LLN0$CDS",
  1,
  &iedModelds_PROT_LLN0_CDS_fcda0,
  &iedModelds_PROT_LLN0_PDS
};

extern DataSetEntry iedModelds_PROT_LLN0_PDS_fcda0;

DataSetEntry iedModelds_PROT_LLN0_PDS_fcda0 = {
  "PROT",
  false,
  "PDIF1$ST$Str",
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_PROT_LLN0_PDS = {
  "PROT",
  "LLN0$PDS",
  1,
  &iedModelds_PROT_LLN0_PDS_fcda0,
  NULL
};

LogicalDevice iedModel_LD0 = {
    LogicalDeviceModelType,
    "LD0",
    (ModelNode*) &iedModel,
    (ModelNode*) &iedModel_MEAS,
    (ModelNode*) &iedModel_LD0_LLN0
};

LogicalNode iedModel_LD0_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    (ModelNode*) &iedModel_LD0,
    (ModelNode*) &iedModel_LD0_LPHD1,
    (ModelNode*) &iedModel_LD0_LLN0_Beh,
};

DataObject iedModel_LD0_LLN0_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_LD0_LLN0,
    NULL,
    (ModelNode*) &iedModel_LD0_LLN0_Beh_stVal,
    0
};

DataAttribute iedModel_LD0_LLN0_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_LLN0_Beh,
    (ModelNode*) &iedModel_LD0_LLN0_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LLN0_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_LLN0_Beh,
    (ModelNode*) &iedModel_LD0_LLN0_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LLN0_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_LLN0_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_LD0_LPHD1 = {
    LogicalNodeModelType,
    "LPHD1",
    (ModelNode*) &iedModel_LD0,
    NULL,
    (ModelNode*) &iedModel_LD0_LPHD1_PhyNam,
};

DataObject iedModel_LD0_LPHD1_PhyNam = {
    DataObjectModelType,
    "PhyNam",
    (ModelNode*) &iedModel_LD0_LPHD1,
    (ModelNode*) &iedModel_LD0_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_LD0_LPHD1_PhyNam_vendor,
    0
};

DataAttribute iedModel_LD0_LPHD1_PhyNam_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_LD0_LPHD1_PhyNam,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_LPHD1_PhyHealth = {
    DataObjectModelType,
    "PhyHealth",
    (ModelNode*) &iedModel_LD0_LPHD1,
    (ModelNode*) &iedModel_LD0_LPHD1_Proxy,
    (ModelNode*) &iedModel_LD0_LPHD1_PhyHealth_stVal,
    0
};

DataAttribute iedModel_LD0_LPHD1_PhyHealth_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_LD0_LPHD1_PhyHealth_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_PhyHealth_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_LPHD1_PhyHealth,
    (ModelNode*) &iedModel_LD0_LPHD1_PhyHealth_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_PhyHealth_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_LPHD1_PhyHealth,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LD0_LPHD1_Proxy = {
    DataObjectModelType,
    "Proxy",
    (ModelNode*) &iedModel_LD0_LPHD1,
    (ModelNode*) &iedModel_LD0_LPHD1_PwrUp,
    (ModelNode*) &iedModel_LD0_LPHD1_Proxy_stVal,
    0
};

DataAttribute iedModel_LD0_LPHD1_Proxy_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_LPHD1_Proxy,
    (ModelNode*) &iedModel_LD0_LPHD1_Proxy_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_Proxy_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_LPHD1_Proxy,
    (ModelNode*) &iedModel_LD0_LPHD1_Proxy_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_Proxy_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_LPHD1_Proxy,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LD0_LPHD1_PwrUp = {
    DataObjectModelType,
    "PwrUp",
    (ModelNode*) &iedModel_LD0_LPHD1,
    (ModelNode*) &iedModel_LD0_LPHD1_PwrDn,
    (ModelNode*) &iedModel_LD0_LPHD1_PwrUp_stVal,
    0
};

DataAttribute iedModel_LD0_LPHD1_PwrUp_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_LPHD1_PwrUp,
    (ModelNode*) &iedModel_LD0_LPHD1_PwrUp_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_PwrUp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_LPHD1_PwrUp,
    (ModelNode*) &iedModel_LD0_LPHD1_PwrUp_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_PwrUp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_LPHD1_PwrUp,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LD0_LPHD1_PwrDn = {
    DataObjectModelType,
    "PwrDn",
    (ModelNode*) &iedModel_LD0_LPHD1,
    (ModelNode*) &iedModel_LD0_LPHD1_PwrSupAlm,
    (ModelNode*) &iedModel_LD0_LPHD1_PwrDn_stVal,
    0
};

DataAttribute iedModel_LD0_LPHD1_PwrDn_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_LPHD1_PwrDn,
    (ModelNode*) &iedModel_LD0_LPHD1_PwrDn_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_PwrDn_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_LPHD1_PwrDn,
    (ModelNode*) &iedModel_LD0_LPHD1_PwrDn_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_PwrDn_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_LPHD1_PwrDn,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LD0_LPHD1_PwrSupAlm = {
    DataObjectModelType,
    "PwrSupAlm",
    (ModelNode*) &iedModel_LD0_LPHD1,
    NULL,
    (ModelNode*) &iedModel_LD0_LPHD1_PwrSupAlm_stVal,
    0
};

DataAttribute iedModel_LD0_LPHD1_PwrSupAlm_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_LPHD1_PwrSupAlm,
    (ModelNode*) &iedModel_LD0_LPHD1_PwrSupAlm_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_PwrSupAlm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_LPHD1_PwrSupAlm,
    (ModelNode*) &iedModel_LD0_LPHD1_PwrSupAlm_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD1_PwrSupAlm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_LPHD1_PwrSupAlm,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};


LogicalDevice iedModel_MEAS = {
    LogicalDeviceModelType,
    "MEAS",
    (ModelNode*) &iedModel,
    (ModelNode*) &iedModel_CTRL,
    (ModelNode*) &iedModel_MEAS_LLN0
};

LogicalNode iedModel_MEAS_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    (ModelNode*) &iedModel_MEAS,
    (ModelNode*) &iedModel_MEAS_MMXU1,
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

LogicalNode iedModel_MEAS_MMXU1 = {
    LogicalNodeModelType,
    "MMXU1",
    (ModelNode*) &iedModel_MEAS,
    (ModelNode*) &iedModel_MEAS_MMXU2,
    (ModelNode*) &iedModel_MEAS_MMXU1_Beh,
};

DataObject iedModel_MEAS_MMXU1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_MEAS_MMXU1,
    (ModelNode*) &iedModel_MEAS_MMXU1_A,
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
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsA_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_phsA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
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
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsB_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_phsB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
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
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsC_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_A_phsC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU1_A_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
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
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU2_Beh,
};

DataObject iedModel_MEAS_MMXU2_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_MEAS_MMXU2,
    (ModelNode*) &iedModel_MEAS_MMXU2_A,
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
    (ModelNode*) &iedModel_MEAS_MMXU2_A_phsA_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_A_phsA_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU2_A_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
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
    (ModelNode*) &iedModel_MEAS_MMXU2_A_phsB_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_A_phsB_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU2_A_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
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
    (ModelNode*) &iedModel_MEAS_MMXU2_A_phsC_cVal_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_A_phsC_cVal_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_MEAS_MMXU2_A_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
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


LogicalDevice iedModel_CTRL = {
    LogicalDeviceModelType,
    "CTRL",
    (ModelNode*) &iedModel,
    (ModelNode*) &iedModel_PROT,
    (ModelNode*) &iedModel_CTRL_LLN0
};

LogicalNode iedModel_CTRL_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    (ModelNode*) &iedModel_CTRL,
    (ModelNode*) &iedModel_CTRL_CILO1,
    (ModelNode*) &iedModel_CTRL_LLN0_Beh,
};

DataObject iedModel_CTRL_LLN0_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_CTRL_LLN0,
    NULL,
    (ModelNode*) &iedModel_CTRL_LLN0_Beh_stVal,
    0
};

DataAttribute iedModel_CTRL_LLN0_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_LLN0_Beh,
    (ModelNode*) &iedModel_CTRL_LLN0_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_LLN0_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_LLN0_Beh,
    (ModelNode*) &iedModel_CTRL_LLN0_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_LLN0_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_LLN0_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_CTRL_CILO1 = {
    LogicalNodeModelType,
    "CILO1",
    (ModelNode*) &iedModel_CTRL,
    (ModelNode*) &iedModel_CTRL_CSWI1,
    (ModelNode*) &iedModel_CTRL_CILO1_EnaOpn,
};

DataObject iedModel_CTRL_CILO1_EnaOpn = {
    DataObjectModelType,
    "EnaOpn",
    (ModelNode*) &iedModel_CTRL_CILO1,
    (ModelNode*) &iedModel_CTRL_CILO1_NamPlt,
    (ModelNode*) &iedModel_CTRL_CILO1_EnaOpn_stVal,
    0
};

DataAttribute iedModel_CTRL_CILO1_EnaOpn_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_CILO1_EnaOpn,
    (ModelNode*) &iedModel_CTRL_CILO1_EnaOpn_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_CILO1_EnaOpn_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_CILO1_EnaOpn,
    (ModelNode*) &iedModel_CTRL_CILO1_EnaOpn_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_CILO1_EnaOpn_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_CILO1_EnaOpn,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_CILO1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_CTRL_CILO1,
    (ModelNode*) &iedModel_CTRL_CILO1_Beh,
    (ModelNode*) &iedModel_CTRL_CILO1_NamPlt_vendor,
    0
};

DataAttribute iedModel_CTRL_CILO1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_CTRL_CILO1_NamPlt,
    (ModelNode*) &iedModel_CTRL_CILO1_NamPlt_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_CILO1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_CTRL_CILO1_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_CILO1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_CTRL_CILO1,
    (ModelNode*) &iedModel_CTRL_CILO1_EnaCls,
    (ModelNode*) &iedModel_CTRL_CILO1_Beh_stVal,
    0
};

DataAttribute iedModel_CTRL_CILO1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_CILO1_Beh,
    (ModelNode*) &iedModel_CTRL_CILO1_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_CILO1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_CILO1_Beh,
    (ModelNode*) &iedModel_CTRL_CILO1_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_CILO1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_CILO1_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_CILO1_EnaCls = {
    DataObjectModelType,
    "EnaCls",
    (ModelNode*) &iedModel_CTRL_CILO1,
    (ModelNode*) &iedModel_CTRL_CILO1_Mod,
    (ModelNode*) &iedModel_CTRL_CILO1_EnaCls_stVal,
    0
};

DataAttribute iedModel_CTRL_CILO1_EnaCls_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_CILO1_EnaCls,
    (ModelNode*) &iedModel_CTRL_CILO1_EnaCls_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_CILO1_EnaCls_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_CILO1_EnaCls,
    (ModelNode*) &iedModel_CTRL_CILO1_EnaCls_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_CILO1_EnaCls_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_CILO1_EnaCls,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_CILO1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_CTRL_CILO1,
    NULL,
    (ModelNode*) &iedModel_CTRL_CILO1_Mod_stVal,
    0
};

DataAttribute iedModel_CTRL_CILO1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_CILO1_Mod,
    (ModelNode*) &iedModel_CTRL_CILO1_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_CILO1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_CILO1_Mod,
    (ModelNode*) &iedModel_CTRL_CILO1_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_CILO1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_CILO1_Mod,
    (ModelNode*) &iedModel_CTRL_CILO1_Mod_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_CILO1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_CTRL_CILO1_Mod,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

LogicalNode iedModel_CTRL_CSWI1 = {
    LogicalNodeModelType,
    "CSWI1",
    (ModelNode*) &iedModel_CTRL,
    (ModelNode*) &iedModel_CTRL_XCBR1,
    (ModelNode*) &iedModel_CTRL_CSWI1_NamPlt,
};

DataObject iedModel_CTRL_CSWI1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_CTRL_CSWI1,
    (ModelNode*) &iedModel_CTRL_CSWI1_Beh,
    (ModelNode*) &iedModel_CTRL_CSWI1_NamPlt_vendor,
    0
};

DataAttribute iedModel_CTRL_CSWI1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_CTRL_CSWI1_NamPlt,
    (ModelNode*) &iedModel_CTRL_CSWI1_NamPlt_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_CSWI1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_CTRL_CSWI1_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_CSWI1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_CTRL_CSWI1,
    (ModelNode*) &iedModel_CTRL_CSWI1_Loc,
    (ModelNode*) &iedModel_CTRL_CSWI1_Beh_stVal,
    0
};

DataAttribute iedModel_CTRL_CSWI1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_CSWI1_Beh,
    (ModelNode*) &iedModel_CTRL_CSWI1_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_CSWI1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_CSWI1_Beh,
    (ModelNode*) &iedModel_CTRL_CSWI1_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_CSWI1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_CSWI1_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_CSWI1_Loc = {
    DataObjectModelType,
    "Loc",
    (ModelNode*) &iedModel_CTRL_CSWI1,
    (ModelNode*) &iedModel_CTRL_CSWI1_Health,
    (ModelNode*) &iedModel_CTRL_CSWI1_Loc_stVal,
    0
};

DataAttribute iedModel_CTRL_CSWI1_Loc_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_CSWI1_Loc,
    (ModelNode*) &iedModel_CTRL_CSWI1_Loc_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_CSWI1_Loc_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_CSWI1_Loc,
    (ModelNode*) &iedModel_CTRL_CSWI1_Loc_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_CSWI1_Loc_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_CSWI1_Loc,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_CSWI1_Health = {
    DataObjectModelType,
    "Health",
    (ModelNode*) &iedModel_CTRL_CSWI1,
    (ModelNode*) &iedModel_CTRL_CSWI1_Mod,
    (ModelNode*) &iedModel_CTRL_CSWI1_Health_stVal,
    0
};

DataAttribute iedModel_CTRL_CSWI1_Health_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_CSWI1_Health,
    (ModelNode*) &iedModel_CTRL_CSWI1_Health_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_CSWI1_Health_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_CSWI1_Health,
    (ModelNode*) &iedModel_CTRL_CSWI1_Health_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_CSWI1_Health_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_CSWI1_Health,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_CSWI1_Mod = {
    DataObjectModelType,
    "Mod",
    (ModelNode*) &iedModel_CTRL_CSWI1,
    (ModelNode*) &iedModel_CTRL_CSWI1_Pos,
    (ModelNode*) &iedModel_CTRL_CSWI1_Mod_stVal,
    0
};

DataAttribute iedModel_CTRL_CSWI1_Mod_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_CSWI1_Mod,
    (ModelNode*) &iedModel_CTRL_CSWI1_Mod_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_CSWI1_Mod_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_CSWI1_Mod,
    (ModelNode*) &iedModel_CTRL_CSWI1_Mod_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_CSWI1_Mod_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_CSWI1_Mod,
    (ModelNode*) &iedModel_CTRL_CSWI1_Mod_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_CSWI1_Mod_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_CTRL_CSWI1_Mod,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_CSWI1_Pos = {
    DataObjectModelType,
    "Pos",
    (ModelNode*) &iedModel_CTRL_CSWI1,
    NULL,
    (ModelNode*) &iedModel_CTRL_CSWI1_Pos_stVal,
    0
};

DataAttribute iedModel_CTRL_CSWI1_Pos_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_CSWI1_Pos,
    (ModelNode*) &iedModel_CTRL_CSWI1_Pos_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_CSWI1_Pos_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_CSWI1_Pos,
    (ModelNode*) &iedModel_CTRL_CSWI1_Pos_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_CSWI1_Pos_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_CSWI1_Pos,
    (ModelNode*) &iedModel_CTRL_CSWI1_Pos_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_CSWI1_Pos_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_CTRL_CSWI1_Pos,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

LogicalNode iedModel_CTRL_XCBR1 = {
    LogicalNodeModelType,
    "XCBR1",
    (ModelNode*) &iedModel_CTRL,
    (ModelNode*) &iedModel_CTRL_GGIO1,
    (ModelNode*) &iedModel_CTRL_XCBR1_Beh,
};

DataObject iedModel_CTRL_XCBR1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_CTRL_XCBR1,
    (ModelNode*) &iedModel_CTRL_XCBR1_Loc,
    (ModelNode*) &iedModel_CTRL_XCBR1_Beh_stVal,
    0
};

DataAttribute iedModel_CTRL_XCBR1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_XCBR1_Beh,
    (ModelNode*) &iedModel_CTRL_XCBR1_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_XCBR1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_XCBR1_Beh,
    (ModelNode*) &iedModel_CTRL_XCBR1_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_XCBR1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_XCBR1_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_XCBR1_Loc = {
    DataObjectModelType,
    "Loc",
    (ModelNode*) &iedModel_CTRL_XCBR1,
    (ModelNode*) &iedModel_CTRL_XCBR1_OpCnt,
    (ModelNode*) &iedModel_CTRL_XCBR1_Loc_stVal,
    0
};

DataAttribute iedModel_CTRL_XCBR1_Loc_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_XCBR1_Loc,
    (ModelNode*) &iedModel_CTRL_XCBR1_Loc_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_XCBR1_Loc_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_XCBR1_Loc,
    (ModelNode*) &iedModel_CTRL_XCBR1_Loc_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_XCBR1_Loc_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_XCBR1_Loc,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_XCBR1_OpCnt = {
    DataObjectModelType,
    "OpCnt",
    (ModelNode*) &iedModel_CTRL_XCBR1,
    (ModelNode*) &iedModel_CTRL_XCBR1_Pos,
    (ModelNode*) &iedModel_CTRL_XCBR1_OpCnt_stVal,
    0
};

DataAttribute iedModel_CTRL_XCBR1_OpCnt_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_XCBR1_OpCnt,
    (ModelNode*) &iedModel_CTRL_XCBR1_OpCnt_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_XCBR1_OpCnt_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_XCBR1_OpCnt,
    (ModelNode*) &iedModel_CTRL_XCBR1_OpCnt_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_XCBR1_OpCnt_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_XCBR1_OpCnt,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_XCBR1_Pos = {
    DataObjectModelType,
    "Pos",
    (ModelNode*) &iedModel_CTRL_XCBR1,
    (ModelNode*) &iedModel_CTRL_XCBR1_BlkOpn,
    (ModelNode*) &iedModel_CTRL_XCBR1_Pos_stVal,
    0
};

DataAttribute iedModel_CTRL_XCBR1_Pos_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_XCBR1_Pos,
    (ModelNode*) &iedModel_CTRL_XCBR1_Pos_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_XCBR1_Pos_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_XCBR1_Pos,
    (ModelNode*) &iedModel_CTRL_XCBR1_Pos_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_XCBR1_Pos_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_XCBR1_Pos,
    (ModelNode*) &iedModel_CTRL_XCBR1_Pos_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_XCBR1_Pos_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_CTRL_XCBR1_Pos,
    (ModelNode*) &iedModel_CTRL_XCBR1_Pos_Oper,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_XCBR1_Pos_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_CTRL_XCBR1_Pos,
    NULL,
    (ModelNode*) &iedModel_CTRL_XCBR1_Pos_Oper_ctlVal,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_XCBR1_Pos_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_CTRL_XCBR1_Pos_Oper,
    (ModelNode*) &iedModel_CTRL_XCBR1_Pos_Oper_origin,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_XCBR1_Pos_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_CTRL_XCBR1_Pos_Oper,
    (ModelNode*) &iedModel_CTRL_XCBR1_Pos_Oper_ctlNum,
    (ModelNode*) &iedModel_CTRL_XCBR1_Pos_Oper_origin_orCat,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_XCBR1_Pos_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_CTRL_XCBR1_Pos_Oper_origin,
    (ModelNode*) &iedModel_CTRL_XCBR1_Pos_Oper_origin_orIdent,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_XCBR1_Pos_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_CTRL_XCBR1_Pos_Oper_origin,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_XCBR1_Pos_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_CTRL_XCBR1_Pos_Oper,
    (ModelNode*) &iedModel_CTRL_XCBR1_Pos_Oper_T,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_XCBR1_Pos_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_CTRL_XCBR1_Pos_Oper,
    (ModelNode*) &iedModel_CTRL_XCBR1_Pos_Oper_Test,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_XCBR1_Pos_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_CTRL_XCBR1_Pos_Oper,
    (ModelNode*) &iedModel_CTRL_XCBR1_Pos_Oper_Check,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_XCBR1_Pos_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_CTRL_XCBR1_Pos_Oper,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_XCBR1_BlkOpn = {
    DataObjectModelType,
    "BlkOpn",
    (ModelNode*) &iedModel_CTRL_XCBR1,
    (ModelNode*) &iedModel_CTRL_XCBR1_BlkCls,
    (ModelNode*) &iedModel_CTRL_XCBR1_BlkOpn_ctlModel,
    0
};

DataAttribute iedModel_CTRL_XCBR1_BlkOpn_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_CTRL_XCBR1_BlkOpn,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_XCBR1_BlkCls = {
    DataObjectModelType,
    "BlkCls",
    (ModelNode*) &iedModel_CTRL_XCBR1,
    NULL,
    (ModelNode*) &iedModel_CTRL_XCBR1_BlkCls_ctlModel,
    0
};

DataAttribute iedModel_CTRL_XCBR1_BlkCls_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_CTRL_XCBR1_BlkCls,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

LogicalNode iedModel_CTRL_GGIO1 = {
    LogicalNodeModelType,
    "GGIO1",
    (ModelNode*) &iedModel_CTRL,
    NULL,
    (ModelNode*) &iedModel_CTRL_GGIO1_Beh,
};

DataObject iedModel_CTRL_GGIO1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_CTRL_GGIO1,
    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1,
    (ModelNode*) &iedModel_CTRL_GGIO1_Beh_stVal,
    0
};

DataAttribute iedModel_CTRL_GGIO1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_GGIO1_Beh,
    (ModelNode*) &iedModel_CTRL_GGIO1_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_GGIO1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_GGIO1_Beh,
    (ModelNode*) &iedModel_CTRL_GGIO1_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_GGIO1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_GGIO1_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_GGIO1_SPCSO1 = {
    DataObjectModelType,
    "SPCSO1",
    (ModelNode*) &iedModel_CTRL_GGIO1,
    NULL,
    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_ctlModel,
    0
};

DataAttribute iedModel_CTRL_GGIO1_SPCSO1_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1,
    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_stVal,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_GGIO1_SPCSO1_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1,
    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_GGIO1_SPCSO1_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1,
    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_GGIO1_SPCSO1_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1,
    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_Oper,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_GGIO1_SPCSO1_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1,
    NULL,
    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_Oper_ctlVal,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_GGIO1_SPCSO1_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_Oper,
    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_Oper_origin,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_GGIO1_SPCSO1_Oper_origin = {
    DataAttributeModelType,
    "origin",
    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_Oper,
    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_Oper_ctlNum,
    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_Oper_origin_orCat,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_GGIO1_SPCSO1_Oper_origin_orCat = {
    DataAttributeModelType,
    "orCat",
    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_Oper_origin,
    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_Oper_origin_orIdent,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_GGIO1_SPCSO1_Oper_origin_orIdent = {
    DataAttributeModelType,
    "orIdent",
    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_Oper_origin,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_OCTET_STRING_64,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_GGIO1_SPCSO1_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_Oper,
    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_Oper_T,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_GGIO1_SPCSO1_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_Oper,
    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_Oper_Test,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_GGIO1_SPCSO1_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_Oper,
    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_Oper_Check,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_GGIO1_SPCSO1_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_CTRL_GGIO1_SPCSO1_Oper,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};


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
    (ModelNode*) &iedModel_PROT_PDIF1,
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

LogicalNode iedModel_PROT_PDIF1 = {
    LogicalNodeModelType,
    "PDIF1",
    (ModelNode*) &iedModel_PROT,
    (ModelNode*) &iedModel_PROT_PTRC1,
    (ModelNode*) &iedModel_PROT_PDIF1_Str,
};

DataObject iedModel_PROT_PDIF1_Str = {
    DataObjectModelType,
    "Str",
    (ModelNode*) &iedModel_PROT_PDIF1,
    (ModelNode*) &iedModel_PROT_PDIF1_Beh,
    (ModelNode*) &iedModel_PROT_PDIF1_Str_general,
    0
};

DataAttribute iedModel_PROT_PDIF1_Str_general = {
    DataAttributeModelType,
    "general",
    (ModelNode*) &iedModel_PROT_PDIF1_Str,
    (ModelNode*) &iedModel_PROT_PDIF1_Str_dirGeneral,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PDIF1_Str_dirGeneral = {
    DataAttributeModelType,
    "dirGeneral",
    (ModelNode*) &iedModel_PROT_PDIF1_Str,
    (ModelNode*) &iedModel_PROT_PDIF1_Str_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PDIF1_Str_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PDIF1_Str,
    (ModelNode*) &iedModel_PROT_PDIF1_Str_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PDIF1_Str_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PDIF1_Str,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PDIF1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_PROT_PDIF1,
    (ModelNode*) &iedModel_PROT_PDIF1_Op,
    (ModelNode*) &iedModel_PROT_PDIF1_Beh_stVal,
    0
};

DataAttribute iedModel_PROT_PDIF1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PDIF1_Beh,
    (ModelNode*) &iedModel_PROT_PDIF1_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PDIF1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PDIF1_Beh,
    (ModelNode*) &iedModel_PROT_PDIF1_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PDIF1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PDIF1_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PDIF1_Op = {
    DataObjectModelType,
    "Op",
    (ModelNode*) &iedModel_PROT_PDIF1,
    NULL,
    (ModelNode*) &iedModel_PROT_PDIF1_Op_general,
    0
};

DataAttribute iedModel_PROT_PDIF1_Op_general = {
    DataAttributeModelType,
    "general",
    (ModelNode*) &iedModel_PROT_PDIF1_Op,
    (ModelNode*) &iedModel_PROT_PDIF1_Op_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PDIF1_Op_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PDIF1_Op,
    (ModelNode*) &iedModel_PROT_PDIF1_Op_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PDIF1_Op_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PDIF1_Op,
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
    NULL,
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

extern ReportControlBlock iedModel_PROT_LLN0_report0;
extern ReportControlBlock iedModel_PROT_LLN0_report1;
extern ReportControlBlock iedModel_PROT_LLN0_report2;
extern ReportControlBlock iedModel_PROT_LLN0_report3;
extern ReportControlBlock iedModel_PROT_LLN0_report4;
extern ReportControlBlock iedModel_PROT_LLN0_report5;
extern ReportControlBlock iedModel_PROT_LLN0_report6;
extern ReportControlBlock iedModel_PROT_LLN0_report7;
extern ReportControlBlock iedModel_PROT_LLN0_report8;
extern ReportControlBlock iedModel_PROT_LLN0_report9;
extern ReportControlBlock iedModel_PROT_LLN0_report10;
extern ReportControlBlock iedModel_PROT_LLN0_report11;
extern ReportControlBlock iedModel_PROT_LLN0_report12;
extern ReportControlBlock iedModel_PROT_LLN0_report13;
extern ReportControlBlock iedModel_PROT_LLN0_report14;

ReportControlBlock iedModel_PROT_LLN0_report0 = {&iedModel_PROT_LLN0, "MCB01", NULL, false, "MDS", 1, 31, 255, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report1};
ReportControlBlock iedModel_PROT_LLN0_report1 = {&iedModel_PROT_LLN0, "MCB02", NULL, false, "MDS", 1, 31, 255, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report2};
ReportControlBlock iedModel_PROT_LLN0_report2 = {&iedModel_PROT_LLN0, "MCB03", NULL, false, "MDS", 1, 31, 255, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report3};
ReportControlBlock iedModel_PROT_LLN0_report3 = {&iedModel_PROT_LLN0, "MCB04", NULL, false, "MDS", 1, 31, 255, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report4};
ReportControlBlock iedModel_PROT_LLN0_report4 = {&iedModel_PROT_LLN0, "MCB05", NULL, false, "MDS", 1, 31, 255, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report5};
ReportControlBlock iedModel_PROT_LLN0_report5 = {&iedModel_PROT_LLN0, "CCB01", NULL, false, "CDS", 1, 31, 255, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report6};
ReportControlBlock iedModel_PROT_LLN0_report6 = {&iedModel_PROT_LLN0, "CCB02", NULL, false, "CDS", 1, 31, 255, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report7};
ReportControlBlock iedModel_PROT_LLN0_report7 = {&iedModel_PROT_LLN0, "CCB03", NULL, false, "CDS", 1, 31, 255, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report8};
ReportControlBlock iedModel_PROT_LLN0_report8 = {&iedModel_PROT_LLN0, "CCB04", NULL, false, "CDS", 1, 31, 255, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report9};
ReportControlBlock iedModel_PROT_LLN0_report9 = {&iedModel_PROT_LLN0, "CCB05", NULL, false, "CDS", 1, 31, 255, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report10};
ReportControlBlock iedModel_PROT_LLN0_report10 = {&iedModel_PROT_LLN0, "PCB01", NULL, false, "PDS", 1, 31, 255, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report11};
ReportControlBlock iedModel_PROT_LLN0_report11 = {&iedModel_PROT_LLN0, "PCB02", NULL, false, "PDS", 1, 31, 255, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report12};
ReportControlBlock iedModel_PROT_LLN0_report12 = {&iedModel_PROT_LLN0, "PCB03", NULL, false, "PDS", 1, 31, 255, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report13};
ReportControlBlock iedModel_PROT_LLN0_report13 = {&iedModel_PROT_LLN0, "PCB04", NULL, false, "PDS", 1, 31, 255, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report14};
ReportControlBlock iedModel_PROT_LLN0_report14 = {&iedModel_PROT_LLN0, "PCB05", NULL, false, "PDS", 1, 31, 255, 50, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, NULL};


extern GSEControlBlock iedModel_CTRL_LLN0_gse0;
GSEControlBlock iedModel_CTRL_LLN0_gse0 = {&iedModel_CTRL_LLN0, "null", "0005", "CDS", 0, false, NULL, -1, -1, NULL};





IedModel iedModel = {
    "TIED1",
    &iedModel_LD0,
    &iedModelds_MEAS_LLN0_MDS1,
    &iedModel_PROT_LLN0_report0,
    &iedModel_CTRL_LLN0_gse0,
    NULL,
    NULL,
    NULL,
    NULL,
    initializeValues
};

static void
initializeValues()
{

iedModel_CTRL_XCBR1_Pos_stVal.mmsValue = MmsValue_newBoolean(false);

iedModel_CTRL_XCBR1_Pos_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_CTRL_XCBR1_Pos_Oper_ctlVal.mmsValue = MmsValue_newBoolean(true);

iedModel_CTRL_GGIO1_SPCSO1_ctlModel.mmsValue = MmsValue_newIntegerFromInt32(1);

iedModel_CTRL_GGIO1_SPCSO1_stVal.mmsValue = MmsValue_newBoolean(true);

iedModel_CTRL_GGIO1_SPCSO1_Oper_ctlVal.mmsValue = MmsValue_newBoolean(true);
}
