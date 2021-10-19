/*
 * static_model.c
 *
 * automatically generated from /home/ubuntu/Desktop/VirtualIED/config_files/MIED1.icd
 */
#include "static_model.h"

static void initializeValues();

extern DataSet iedModelds_PROT_LLN0_MDS1;
extern DataSet iedModelds_PROT_LLN0_MDS2;
extern DataSet iedModelds_PROT_LLN0_CDS1;
extern DataSet iedModelds_PROT_LLN0_CDS2;
extern DataSet iedModelds_PROT_LLN0_PDS;


extern DataSetEntry iedModelds_PROT_LLN0_MDS1_fcda0;
extern DataSetEntry iedModelds_PROT_LLN0_MDS1_fcda1;
extern DataSetEntry iedModelds_PROT_LLN0_MDS1_fcda2;
extern DataSetEntry iedModelds_PROT_LLN0_MDS1_fcda3;
extern DataSetEntry iedModelds_PROT_LLN0_MDS1_fcda4;
extern DataSetEntry iedModelds_PROT_LLN0_MDS1_fcda5;
extern DataSetEntry iedModelds_PROT_LLN0_MDS1_fcda6;
extern DataSetEntry iedModelds_PROT_LLN0_MDS1_fcda7;
extern DataSetEntry iedModelds_PROT_LLN0_MDS1_fcda8;
extern DataSetEntry iedModelds_PROT_LLN0_MDS1_fcda9;
extern DataSetEntry iedModelds_PROT_LLN0_MDS1_fcda10;
extern DataSetEntry iedModelds_PROT_LLN0_MDS1_fcda11;
extern DataSetEntry iedModelds_PROT_LLN0_MDS1_fcda12;
extern DataSetEntry iedModelds_PROT_LLN0_MDS1_fcda13;
extern DataSetEntry iedModelds_PROT_LLN0_MDS1_fcda14;

DataSetEntry iedModelds_PROT_LLN0_MDS1_fcda0 = {
  "MEAS",
  false,
  "MMXU1$MX$TotW$mag$i",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_MDS1_fcda1
};

DataSetEntry iedModelds_PROT_LLN0_MDS1_fcda1 = {
  "MEAS",
  false,
  "MMXU1$MX$TotVAr$mag$i",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_MDS1_fcda2
};

DataSetEntry iedModelds_PROT_LLN0_MDS1_fcda2 = {
  "MEAS",
  false,
  "MMXU1$MX$TotVA$mag$i",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_MDS1_fcda3
};

DataSetEntry iedModelds_PROT_LLN0_MDS1_fcda3 = {
  "MEAS",
  false,
  "MMXU1$MX$TotPF$mag$i",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_MDS1_fcda4
};

DataSetEntry iedModelds_PROT_LLN0_MDS1_fcda4 = {
  "MEAS",
  false,
  "MMXU1$MX$A$phsA$cVal$mag$i",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_MDS1_fcda5
};

DataSetEntry iedModelds_PROT_LLN0_MDS1_fcda5 = {
  "MEAS",
  false,
  "MMXU1$MX$A$phsB$cVal$mag$i",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_MDS1_fcda6
};

DataSetEntry iedModelds_PROT_LLN0_MDS1_fcda6 = {
  "MEAS",
  false,
  "MMXU1$MX$A$phsC$cVal$mag$i",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_MDS1_fcda7
};

DataSetEntry iedModelds_PROT_LLN0_MDS1_fcda7 = {
  "MEAS",
  false,
  "MMXU1$MX$Hz$mag$i",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_MDS1_fcda8
};

DataSetEntry iedModelds_PROT_LLN0_MDS1_fcda8 = {
  "MEAS",
  false,
  "MMXU1$MX$PPV$phsAB$cVal$mag$i",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_MDS1_fcda9
};

DataSetEntry iedModelds_PROT_LLN0_MDS1_fcda9 = {
  "MEAS",
  false,
  "MMXU1$MX$PPV$phsBC$cVal$mag$i",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_MDS1_fcda10
};

DataSetEntry iedModelds_PROT_LLN0_MDS1_fcda10 = {
  "MEAS",
  false,
  "MMXU1$MX$PPV$phsCA$cVal$mag$i",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_MDS1_fcda11
};

DataSetEntry iedModelds_PROT_LLN0_MDS1_fcda11 = {
  "MEAS",
  false,
  "MMXU1$MX$PhV$phsA$cVal$mag$i",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_MDS1_fcda12
};

DataSetEntry iedModelds_PROT_LLN0_MDS1_fcda12 = {
  "MEAS",
  false,
  "MMXU1$MX$PhV$phsB$cVal$mag$i",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_MDS1_fcda13
};

DataSetEntry iedModelds_PROT_LLN0_MDS1_fcda13 = {
  "MEAS",
  false,
  "MMXU1$MX$PhV$phsC$cVal$mag$i",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_MDS1_fcda14
};

DataSetEntry iedModelds_PROT_LLN0_MDS1_fcda14 = {
  "MEAS",
  false,
  "MMXU1$MX$PhV$neut$cVal$mag$i",
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_PROT_LLN0_MDS1 = {
  "PROT",
  "LLN0$MDS1",
  15,
  &iedModelds_PROT_LLN0_MDS1_fcda0,
  &iedModelds_PROT_LLN0_MDS2
};

extern DataSetEntry iedModelds_PROT_LLN0_MDS2_fcda0;
extern DataSetEntry iedModelds_PROT_LLN0_MDS2_fcda1;
extern DataSetEntry iedModelds_PROT_LLN0_MDS2_fcda2;
extern DataSetEntry iedModelds_PROT_LLN0_MDS2_fcda3;
extern DataSetEntry iedModelds_PROT_LLN0_MDS2_fcda4;
extern DataSetEntry iedModelds_PROT_LLN0_MDS2_fcda5;
extern DataSetEntry iedModelds_PROT_LLN0_MDS2_fcda6;
extern DataSetEntry iedModelds_PROT_LLN0_MDS2_fcda7;
extern DataSetEntry iedModelds_PROT_LLN0_MDS2_fcda8;
extern DataSetEntry iedModelds_PROT_LLN0_MDS2_fcda9;
extern DataSetEntry iedModelds_PROT_LLN0_MDS2_fcda10;
extern DataSetEntry iedModelds_PROT_LLN0_MDS2_fcda11;
extern DataSetEntry iedModelds_PROT_LLN0_MDS2_fcda12;
extern DataSetEntry iedModelds_PROT_LLN0_MDS2_fcda13;
extern DataSetEntry iedModelds_PROT_LLN0_MDS2_fcda14;

DataSetEntry iedModelds_PROT_LLN0_MDS2_fcda0 = {
  "MEAS",
  false,
  "MMXU2$MX$TotW$mag$i",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_MDS2_fcda1
};

DataSetEntry iedModelds_PROT_LLN0_MDS2_fcda1 = {
  "MEAS",
  false,
  "MMXU2$MX$TotVAr$mag$i",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_MDS2_fcda2
};

DataSetEntry iedModelds_PROT_LLN0_MDS2_fcda2 = {
  "MEAS",
  false,
  "MMXU2$MX$TotVA$mag$i",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_MDS2_fcda3
};

DataSetEntry iedModelds_PROT_LLN0_MDS2_fcda3 = {
  "MEAS",
  false,
  "MMXU2$MX$TotPF$mag$i",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_MDS2_fcda4
};

DataSetEntry iedModelds_PROT_LLN0_MDS2_fcda4 = {
  "MEAS",
  false,
  "MMXU2$MX$A$phsA$cVal$mag$i",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_MDS2_fcda5
};

DataSetEntry iedModelds_PROT_LLN0_MDS2_fcda5 = {
  "MEAS",
  false,
  "MMXU2$MX$A$phsB$cVal$mag$i",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_MDS2_fcda6
};

DataSetEntry iedModelds_PROT_LLN0_MDS2_fcda6 = {
  "MEAS",
  false,
  "MMXU2$MX$A$phsC$cVal$mag$i",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_MDS2_fcda7
};

DataSetEntry iedModelds_PROT_LLN0_MDS2_fcda7 = {
  "MEAS",
  false,
  "MMXU2$MX$A$neut$cVal$mag$i",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_MDS2_fcda8
};

DataSetEntry iedModelds_PROT_LLN0_MDS2_fcda8 = {
  "MEAS",
  false,
  "MMXU2$MX$Hz$mag$i",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_MDS2_fcda9
};

DataSetEntry iedModelds_PROT_LLN0_MDS2_fcda9 = {
  "MEAS",
  false,
  "MMXU2$MX$PPV$phsAB$cVal$mag$i",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_MDS2_fcda10
};

DataSetEntry iedModelds_PROT_LLN0_MDS2_fcda10 = {
  "MEAS",
  false,
  "MMXU2$MX$PPV$phsBC$cVal$mag$i",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_MDS2_fcda11
};

DataSetEntry iedModelds_PROT_LLN0_MDS2_fcda11 = {
  "MEAS",
  false,
  "MMXU2$MX$PPV$phsCA$cVal$mag$i",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_MDS2_fcda12
};

DataSetEntry iedModelds_PROT_LLN0_MDS2_fcda12 = {
  "MEAS",
  false,
  "MMXU2$MX$PhV$phsA$cVal$mag$i",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_MDS2_fcda13
};

DataSetEntry iedModelds_PROT_LLN0_MDS2_fcda13 = {
  "MEAS",
  false,
  "MMXU2$MX$PhV$phsB$cVal$mag$i",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_MDS2_fcda14
};

DataSetEntry iedModelds_PROT_LLN0_MDS2_fcda14 = {
  "MEAS",
  false,
  "MMXU2$MX$PhV$phsC$cVal$mag$i",
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_PROT_LLN0_MDS2 = {
  "PROT",
  "LLN0$MDS2",
  15,
  &iedModelds_PROT_LLN0_MDS2_fcda0,
  &iedModelds_PROT_LLN0_CDS1
};

extern DataSetEntry iedModelds_PROT_LLN0_CDS1_fcda0;
extern DataSetEntry iedModelds_PROT_LLN0_CDS1_fcda1;

DataSetEntry iedModelds_PROT_LLN0_CDS1_fcda0 = {
  "CTRL",
  false,
  "XCBR1$ST$Pos$stVal",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_CDS1_fcda1
};

DataSetEntry iedModelds_PROT_LLN0_CDS1_fcda1 = {
  "CTRL",
  false,
  "RSYN1$ST$Rel$stVal",
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_PROT_LLN0_CDS1 = {
  "PROT",
  "LLN0$CDS1",
  2,
  &iedModelds_PROT_LLN0_CDS1_fcda0,
  &iedModelds_PROT_LLN0_CDS2
};

extern DataSetEntry iedModelds_PROT_LLN0_CDS2_fcda0;
extern DataSetEntry iedModelds_PROT_LLN0_CDS2_fcda1;

DataSetEntry iedModelds_PROT_LLN0_CDS2_fcda0 = {
  "CTRL",
  false,
  "XCBR2$ST$Pos$stVal",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_CDS2_fcda1
};

DataSetEntry iedModelds_PROT_LLN0_CDS2_fcda1 = {
  "CTRL",
  false,
  "XCBR3$ST$Pos$stVal",
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_PROT_LLN0_CDS2 = {
  "PROT",
  "LLN0$CDS2",
  2,
  &iedModelds_PROT_LLN0_CDS2_fcda0,
  &iedModelds_PROT_LLN0_PDS
};

extern DataSetEntry iedModelds_PROT_LLN0_PDS_fcda0;
extern DataSetEntry iedModelds_PROT_LLN0_PDS_fcda1;
extern DataSetEntry iedModelds_PROT_LLN0_PDS_fcda2;
extern DataSetEntry iedModelds_PROT_LLN0_PDS_fcda3;

DataSetEntry iedModelds_PROT_LLN0_PDS_fcda0 = {
  "PROT",
  false,
  "PTOV1$ST$Op",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_PDS_fcda1
};

DataSetEntry iedModelds_PROT_LLN0_PDS_fcda1 = {
  "PROT",
  false,
  "PTOC1$ST$Op",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_PDS_fcda2
};

DataSetEntry iedModelds_PROT_LLN0_PDS_fcda2 = {
  "PROT",
  false,
  "PTOC2$ST$Op",
  -1,
  NULL,
  NULL,
  &iedModelds_PROT_LLN0_PDS_fcda3
};

DataSetEntry iedModelds_PROT_LLN0_PDS_fcda3 = {
  "PROT",
  false,
  "PTOF1$ST$Op",
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_PROT_LLN0_PDS = {
  "PROT",
  "LLN0$PDS",
  4,
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
    (ModelNode*) &iedModel_LD0_LPHD0,
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

LogicalNode iedModel_LD0_LPHD0 = {
    LogicalNodeModelType,
    "LPHD0",
    (ModelNode*) &iedModel_LD0,
    NULL,
    (ModelNode*) &iedModel_LD0_LPHD0_PhyNam,
};

DataObject iedModel_LD0_LPHD0_PhyNam = {
    DataObjectModelType,
    "PhyNam",
    (ModelNode*) &iedModel_LD0_LPHD0,
    (ModelNode*) &iedModel_LD0_LPHD0_PhyHealth,
    (ModelNode*) &iedModel_LD0_LPHD0_PhyNam_vendor,
    0
};

DataAttribute iedModel_LD0_LPHD0_PhyNam_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_LD0_LPHD0_PhyNam,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataObject iedModel_LD0_LPHD0_PhyHealth = {
    DataObjectModelType,
    "PhyHealth",
    (ModelNode*) &iedModel_LD0_LPHD0,
    (ModelNode*) &iedModel_LD0_LPHD0_Proxy,
    (ModelNode*) &iedModel_LD0_LPHD0_PhyHealth_stVal,
    0
};

DataAttribute iedModel_LD0_LPHD0_PhyHealth_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_LPHD0_PhyHealth,
    (ModelNode*) &iedModel_LD0_LPHD0_PhyHealth_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD0_PhyHealth_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_LPHD0_PhyHealth,
    (ModelNode*) &iedModel_LD0_LPHD0_PhyHealth_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD0_PhyHealth_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_LPHD0_PhyHealth,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LD0_LPHD0_Proxy = {
    DataObjectModelType,
    "Proxy",
    (ModelNode*) &iedModel_LD0_LPHD0,
    (ModelNode*) &iedModel_LD0_LPHD0_PwrUp,
    (ModelNode*) &iedModel_LD0_LPHD0_Proxy_stVal,
    0
};

DataAttribute iedModel_LD0_LPHD0_Proxy_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_LPHD0_Proxy,
    (ModelNode*) &iedModel_LD0_LPHD0_Proxy_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD0_Proxy_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_LPHD0_Proxy,
    (ModelNode*) &iedModel_LD0_LPHD0_Proxy_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD0_Proxy_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_LPHD0_Proxy,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LD0_LPHD0_PwrUp = {
    DataObjectModelType,
    "PwrUp",
    (ModelNode*) &iedModel_LD0_LPHD0,
    (ModelNode*) &iedModel_LD0_LPHD0_PwrDn,
    (ModelNode*) &iedModel_LD0_LPHD0_PwrUp_stVal,
    0
};

DataAttribute iedModel_LD0_LPHD0_PwrUp_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_LPHD0_PwrUp,
    (ModelNode*) &iedModel_LD0_LPHD0_PwrUp_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD0_PwrUp_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_LPHD0_PwrUp,
    (ModelNode*) &iedModel_LD0_LPHD0_PwrUp_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD0_PwrUp_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_LPHD0_PwrUp,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LD0_LPHD0_PwrDn = {
    DataObjectModelType,
    "PwrDn",
    (ModelNode*) &iedModel_LD0_LPHD0,
    (ModelNode*) &iedModel_LD0_LPHD0_PwrSupAlm,
    (ModelNode*) &iedModel_LD0_LPHD0_PwrDn_stVal,
    0
};

DataAttribute iedModel_LD0_LPHD0_PwrDn_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_LPHD0_PwrDn,
    (ModelNode*) &iedModel_LD0_LPHD0_PwrDn_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD0_PwrDn_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_LPHD0_PwrDn,
    (ModelNode*) &iedModel_LD0_LPHD0_PwrDn_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD0_PwrDn_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_LPHD0_PwrDn,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_LD0_LPHD0_PwrSupAlm = {
    DataObjectModelType,
    "PwrSupAlm",
    (ModelNode*) &iedModel_LD0_LPHD0,
    NULL,
    (ModelNode*) &iedModel_LD0_LPHD0_PwrSupAlm_stVal,
    0
};

DataAttribute iedModel_LD0_LPHD0_PwrSupAlm_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_LD0_LPHD0_PwrSupAlm,
    (ModelNode*) &iedModel_LD0_LPHD0_PwrSupAlm_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD0_PwrSupAlm_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_LD0_LPHD0_PwrSupAlm,
    (ModelNode*) &iedModel_LD0_LPHD0_PwrSupAlm_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_LD0_LPHD0_PwrSupAlm_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_LD0_LPHD0_PwrSupAlm,
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
    (ModelNode*) &iedModel_MEAS_MMXU1_NamPlt,
};

DataObject iedModel_MEAS_MMXU1_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_MEAS_MMXU1,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotW,
    (ModelNode*) &iedModel_MEAS_MMXU1_NamPlt_vendor,
    0
};

DataAttribute iedModel_MEAS_MMXU1_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_MEAS_MMXU1_NamPlt,
    (ModelNode*) &iedModel_MEAS_MMXU1_NamPlt_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_MEAS_MMXU1_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

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
    (ModelNode*) &iedModel_MEAS_MMXU1_TotW_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_TotW_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotW_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
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
    (ModelNode*) &iedModel_MEAS_MMXU1_TotPF,
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

DataObject iedModel_MEAS_MMXU1_TotPF = {
    DataObjectModelType,
    "TotPF",
    (ModelNode*) &iedModel_MEAS_MMXU1,
    (ModelNode*) &iedModel_MEAS_MMXU1_Hz,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotPF_mag,
    0
};

DataAttribute iedModel_MEAS_MMXU1_TotPF_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotPF,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotPF_q,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotPF_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_TotPF_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotPF_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_TotPF_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotPF,
    (ModelNode*) &iedModel_MEAS_MMXU1_TotPF_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_TotPF_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU1_TotPF,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU1_Hz = {
    DataObjectModelType,
    "Hz",
    (ModelNode*) &iedModel_MEAS_MMXU1,
    (ModelNode*) &iedModel_MEAS_MMXU1_PPV,
    (ModelNode*) &iedModel_MEAS_MMXU1_Hz_mag,
    0
};

DataAttribute iedModel_MEAS_MMXU1_Hz_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU1_Hz,
    (ModelNode*) &iedModel_MEAS_MMXU1_Hz_q,
    (ModelNode*) &iedModel_MEAS_MMXU1_Hz_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_Hz_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU1_Hz_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_Hz_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU1_Hz,
    (ModelNode*) &iedModel_MEAS_MMXU1_Hz_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_Hz_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU1_Hz,
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
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_neut,
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

DataObject iedModel_MEAS_MMXU1_PhV_neut = {
    DataObjectModelType,
    "neut",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_neut_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU1_PhV_neut_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_neut,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_neut_q,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_neut_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_neut_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_neut_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_neut_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_neut_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_neut_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_neut_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_neut,
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_neut_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PhV_neut_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU1_PhV_neut,
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
    (ModelNode*) &iedModel_MEAS_MMXU1_PF,
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

DataObject iedModel_MEAS_MMXU1_PF = {
    DataObjectModelType,
    "PF",
    (ModelNode*) &iedModel_MEAS_MMXU1,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU1_PF_phsA,
    0
};

DataObject iedModel_MEAS_MMXU1_PF_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_MEAS_MMXU1_PF,
    (ModelNode*) &iedModel_MEAS_MMXU1_PF_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU1_PF_phsA_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU1_PF_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU1_PF_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU1_PF_phsA_q,
    (ModelNode*) &iedModel_MEAS_MMXU1_PF_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PF_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU1_PF_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU1_PF_phsA_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PF_phsA_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU1_PF_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PF_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU1_PF_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU1_PF_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PF_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU1_PF_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU1_PF_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_MEAS_MMXU1_PF,
    (ModelNode*) &iedModel_MEAS_MMXU1_PF_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU1_PF_phsB_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU1_PF_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU1_PF_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU1_PF_phsB_q,
    (ModelNode*) &iedModel_MEAS_MMXU1_PF_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PF_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU1_PF_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU1_PF_phsB_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PF_phsB_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU1_PF_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PF_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU1_PF_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU1_PF_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PF_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU1_PF_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU1_PF_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_MEAS_MMXU1_PF,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU1_PF_phsC_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU1_PF_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU1_PF_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU1_PF_phsC_q,
    (ModelNode*) &iedModel_MEAS_MMXU1_PF_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PF_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU1_PF_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU1_PF_phsC_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PF_phsC_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU1_PF_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PF_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU1_PF_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU1_PF_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU1_PF_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU1_PF_phsC,
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
    (ModelNode*) &iedModel_MEAS_MMXU2_NamPlt,
};

DataObject iedModel_MEAS_MMXU2_NamPlt = {
    DataObjectModelType,
    "NamPlt",
    (ModelNode*) &iedModel_MEAS_MMXU2,
    (ModelNode*) &iedModel_MEAS_MMXU2_TotW,
    (ModelNode*) &iedModel_MEAS_MMXU2_NamPlt_vendor,
    0
};

DataAttribute iedModel_MEAS_MMXU2_NamPlt_vendor = {
    DataAttributeModelType,
    "vendor",
    (ModelNode*) &iedModel_MEAS_MMXU2_NamPlt,
    (ModelNode*) &iedModel_MEAS_MMXU2_NamPlt_swRev,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_NamPlt_swRev = {
    DataAttributeModelType,
    "swRev",
    (ModelNode*) &iedModel_MEAS_MMXU2_NamPlt,
    NULL,
    NULL,
    0,
    IEC61850_FC_DC,
    IEC61850_VISIBLE_STRING_255,
    0,
    NULL,
    0};

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
    (ModelNode*) &iedModel_MEAS_MMXU2_TotW_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_TotW_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU2_TotW_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
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
    (ModelNode*) &iedModel_MEAS_MMXU2_TotPF,
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

DataObject iedModel_MEAS_MMXU2_TotPF = {
    DataObjectModelType,
    "TotPF",
    (ModelNode*) &iedModel_MEAS_MMXU2,
    (ModelNode*) &iedModel_MEAS_MMXU2_Hz,
    (ModelNode*) &iedModel_MEAS_MMXU2_TotPF_mag,
    0
};

DataAttribute iedModel_MEAS_MMXU2_TotPF_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU2_TotPF,
    (ModelNode*) &iedModel_MEAS_MMXU2_TotPF_q,
    (ModelNode*) &iedModel_MEAS_MMXU2_TotPF_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_TotPF_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU2_TotPF_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_TotPF_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU2_TotPF,
    (ModelNode*) &iedModel_MEAS_MMXU2_TotPF_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_TotPF_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU2_TotPF,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU2_Hz = {
    DataObjectModelType,
    "Hz",
    (ModelNode*) &iedModel_MEAS_MMXU2,
    (ModelNode*) &iedModel_MEAS_MMXU2_PPV,
    (ModelNode*) &iedModel_MEAS_MMXU2_Hz_mag,
    0
};

DataAttribute iedModel_MEAS_MMXU2_Hz_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU2_Hz,
    (ModelNode*) &iedModel_MEAS_MMXU2_Hz_q,
    (ModelNode*) &iedModel_MEAS_MMXU2_Hz_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_Hz_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU2_Hz_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_Hz_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU2_Hz,
    (ModelNode*) &iedModel_MEAS_MMXU2_Hz_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_Hz_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU2_Hz,
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
    (ModelNode*) &iedModel_MEAS_MMXU2_PF,
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
    (ModelNode*) &iedModel_MEAS_MMXU2_A_neut,
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

DataObject iedModel_MEAS_MMXU2_A_neut = {
    DataObjectModelType,
    "neut",
    (ModelNode*) &iedModel_MEAS_MMXU2_A,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU2_A_neut_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU2_A_neut_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU2_A_neut,
    (ModelNode*) &iedModel_MEAS_MMXU2_A_neut_q,
    (ModelNode*) &iedModel_MEAS_MMXU2_A_neut_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_A_neut_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU2_A_neut_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU2_A_neut_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_A_neut_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU2_A_neut_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_A_neut_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU2_A_neut,
    (ModelNode*) &iedModel_MEAS_MMXU2_A_neut_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_A_neut_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU2_A_neut,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU2_PF = {
    DataObjectModelType,
    "PF",
    (ModelNode*) &iedModel_MEAS_MMXU2,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU2_PF_phsA,
    0
};

DataObject iedModel_MEAS_MMXU2_PF_phsA = {
    DataObjectModelType,
    "phsA",
    (ModelNode*) &iedModel_MEAS_MMXU2_PF,
    (ModelNode*) &iedModel_MEAS_MMXU2_PF_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU2_PF_phsA_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU2_PF_phsA_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU2_PF_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU2_PF_phsA_q,
    (ModelNode*) &iedModel_MEAS_MMXU2_PF_phsA_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_PF_phsA_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU2_PF_phsA_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU2_PF_phsA_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_PF_phsA_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU2_PF_phsA_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_PF_phsA_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU2_PF_phsA,
    (ModelNode*) &iedModel_MEAS_MMXU2_PF_phsA_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_PF_phsA_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU2_PF_phsA,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU2_PF_phsB = {
    DataObjectModelType,
    "phsB",
    (ModelNode*) &iedModel_MEAS_MMXU2_PF,
    (ModelNode*) &iedModel_MEAS_MMXU2_PF_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU2_PF_phsB_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU2_PF_phsB_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU2_PF_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU2_PF_phsB_q,
    (ModelNode*) &iedModel_MEAS_MMXU2_PF_phsB_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_PF_phsB_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU2_PF_phsB_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU2_PF_phsB_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_PF_phsB_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU2_PF_phsB_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_PF_phsB_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU2_PF_phsB,
    (ModelNode*) &iedModel_MEAS_MMXU2_PF_phsB_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_PF_phsB_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU2_PF_phsB,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_MEAS_MMXU2_PF_phsC = {
    DataObjectModelType,
    "phsC",
    (ModelNode*) &iedModel_MEAS_MMXU2_PF,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU2_PF_phsC_cVal,
    0
};

DataAttribute iedModel_MEAS_MMXU2_PF_phsC_cVal = {
    DataAttributeModelType,
    "cVal",
    (ModelNode*) &iedModel_MEAS_MMXU2_PF_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU2_PF_phsC_q,
    (ModelNode*) &iedModel_MEAS_MMXU2_PF_phsC_cVal_mag,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_PF_phsC_cVal_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_MEAS_MMXU2_PF_phsC_cVal,
    NULL,
    (ModelNode*) &iedModel_MEAS_MMXU2_PF_phsC_cVal_mag_i,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_PF_phsC_cVal_mag_i = {
    DataAttributeModelType,
    "i",
    (ModelNode*) &iedModel_MEAS_MMXU2_PF_phsC_cVal_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_PF_phsC_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_MEAS_MMXU2_PF_phsC,
    (ModelNode*) &iedModel_MEAS_MMXU2_PF_phsC_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_MEAS_MMXU2_PF_phsC_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_MEAS_MMXU2_PF_phsC,
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
    (ModelNode*) &iedModel_CTRL_RSYN1,
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

LogicalNode iedModel_CTRL_RSYN1 = {
    LogicalNodeModelType,
    "RSYN1",
    (ModelNode*) &iedModel_CTRL,
    (ModelNode*) &iedModel_CTRL_XCBR1,
    (ModelNode*) &iedModel_CTRL_RSYN1_Rel,
};

DataObject iedModel_CTRL_RSYN1_Rel = {
    DataObjectModelType,
    "Rel",
    (ModelNode*) &iedModel_CTRL_RSYN1,
    (ModelNode*) &iedModel_CTRL_RSYN1_Beh,
    (ModelNode*) &iedModel_CTRL_RSYN1_Rel_stVal,
    0
};

DataAttribute iedModel_CTRL_RSYN1_Rel_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_RSYN1_Rel,
    (ModelNode*) &iedModel_CTRL_RSYN1_Rel_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_RSYN1_Rel_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_RSYN1_Rel,
    (ModelNode*) &iedModel_CTRL_RSYN1_Rel_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_RSYN1_Rel_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_RSYN1_Rel,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_RSYN1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_CTRL_RSYN1,
    NULL,
    (ModelNode*) &iedModel_CTRL_RSYN1_Beh_stVal,
    0
};

DataAttribute iedModel_CTRL_RSYN1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_RSYN1_Beh,
    (ModelNode*) &iedModel_CTRL_RSYN1_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_RSYN1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_RSYN1_Beh,
    (ModelNode*) &iedModel_CTRL_RSYN1_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_RSYN1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_RSYN1_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_CTRL_XCBR1 = {
    LogicalNodeModelType,
    "XCBR1",
    (ModelNode*) &iedModel_CTRL,
    (ModelNode*) &iedModel_CTRL_XCBR2,
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
    IEC61850_CODEDENUM,
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
    (ModelNode*) &iedModel_CTRL_XCBR1_Pos_Oper_ctlNum,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
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

LogicalNode iedModel_CTRL_XCBR2 = {
    LogicalNodeModelType,
    "XCBR2",
    (ModelNode*) &iedModel_CTRL,
    NULL,
    (ModelNode*) &iedModel_CTRL_XCBR2_Beh,
};

DataObject iedModel_CTRL_XCBR2_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_CTRL_XCBR2,
    (ModelNode*) &iedModel_CTRL_XCBR2_Loc,
    (ModelNode*) &iedModel_CTRL_XCBR2_Beh_stVal,
    0
};

DataAttribute iedModel_CTRL_XCBR2_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_XCBR2_Beh,
    (ModelNode*) &iedModel_CTRL_XCBR2_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_XCBR2_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_XCBR2_Beh,
    (ModelNode*) &iedModel_CTRL_XCBR2_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_XCBR2_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_XCBR2_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_XCBR2_Loc = {
    DataObjectModelType,
    "Loc",
    (ModelNode*) &iedModel_CTRL_XCBR2,
    (ModelNode*) &iedModel_CTRL_XCBR2_OpCnt,
    (ModelNode*) &iedModel_CTRL_XCBR2_Loc_stVal,
    0
};

DataAttribute iedModel_CTRL_XCBR2_Loc_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_XCBR2_Loc,
    (ModelNode*) &iedModel_CTRL_XCBR2_Loc_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_XCBR2_Loc_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_XCBR2_Loc,
    (ModelNode*) &iedModel_CTRL_XCBR2_Loc_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_XCBR2_Loc_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_XCBR2_Loc,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_XCBR2_OpCnt = {
    DataObjectModelType,
    "OpCnt",
    (ModelNode*) &iedModel_CTRL_XCBR2,
    (ModelNode*) &iedModel_CTRL_XCBR2_Pos,
    (ModelNode*) &iedModel_CTRL_XCBR2_OpCnt_stVal,
    0
};

DataAttribute iedModel_CTRL_XCBR2_OpCnt_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_XCBR2_OpCnt,
    (ModelNode*) &iedModel_CTRL_XCBR2_OpCnt_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_INT32,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_XCBR2_OpCnt_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_XCBR2_OpCnt,
    (ModelNode*) &iedModel_CTRL_XCBR2_OpCnt_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_XCBR2_OpCnt_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_XCBR2_OpCnt,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_XCBR2_Pos = {
    DataObjectModelType,
    "Pos",
    (ModelNode*) &iedModel_CTRL_XCBR2,
    (ModelNode*) &iedModel_CTRL_XCBR2_BlkOpn,
    (ModelNode*) &iedModel_CTRL_XCBR2_Pos_stVal,
    0
};

DataAttribute iedModel_CTRL_XCBR2_Pos_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_CTRL_XCBR2_Pos,
    (ModelNode*) &iedModel_CTRL_XCBR2_Pos_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_CODEDENUM,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_XCBR2_Pos_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_CTRL_XCBR2_Pos,
    (ModelNode*) &iedModel_CTRL_XCBR2_Pos_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_XCBR2_Pos_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_CTRL_XCBR2_Pos,
    (ModelNode*) &iedModel_CTRL_XCBR2_Pos_ctlModel,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_XCBR2_Pos_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_CTRL_XCBR2_Pos,
    (ModelNode*) &iedModel_CTRL_XCBR2_Pos_Oper,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_XCBR2_Pos_Oper = {
    DataAttributeModelType,
    "Oper",
    (ModelNode*) &iedModel_CTRL_XCBR2_Pos,
    NULL,
    (ModelNode*) &iedModel_CTRL_XCBR2_Pos_Oper_ctlVal,
    0,
    IEC61850_FC_CO,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_XCBR2_Pos_Oper_ctlVal = {
    DataAttributeModelType,
    "ctlVal",
    (ModelNode*) &iedModel_CTRL_XCBR2_Pos_Oper,
    (ModelNode*) &iedModel_CTRL_XCBR2_Pos_Oper_ctlNum,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_XCBR2_Pos_Oper_ctlNum = {
    DataAttributeModelType,
    "ctlNum",
    (ModelNode*) &iedModel_CTRL_XCBR2_Pos_Oper,
    (ModelNode*) &iedModel_CTRL_XCBR2_Pos_Oper_T,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_INT8U,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_XCBR2_Pos_Oper_T = {
    DataAttributeModelType,
    "T",
    (ModelNode*) &iedModel_CTRL_XCBR2_Pos_Oper,
    (ModelNode*) &iedModel_CTRL_XCBR2_Pos_Oper_Test,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_XCBR2_Pos_Oper_Test = {
    DataAttributeModelType,
    "Test",
    (ModelNode*) &iedModel_CTRL_XCBR2_Pos_Oper,
    (ModelNode*) &iedModel_CTRL_XCBR2_Pos_Oper_Check,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_CTRL_XCBR2_Pos_Oper_Check = {
    DataAttributeModelType,
    "Check",
    (ModelNode*) &iedModel_CTRL_XCBR2_Pos_Oper,
    NULL,
    NULL,
    0,
    IEC61850_FC_CO,
    IEC61850_CHECK,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_XCBR2_BlkOpn = {
    DataObjectModelType,
    "BlkOpn",
    (ModelNode*) &iedModel_CTRL_XCBR2,
    (ModelNode*) &iedModel_CTRL_XCBR2_BlkCls,
    (ModelNode*) &iedModel_CTRL_XCBR2_BlkOpn_ctlModel,
    0
};

DataAttribute iedModel_CTRL_XCBR2_BlkOpn_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_CTRL_XCBR2_BlkOpn,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataObject iedModel_CTRL_XCBR2_BlkCls = {
    DataObjectModelType,
    "BlkCls",
    (ModelNode*) &iedModel_CTRL_XCBR2,
    NULL,
    (ModelNode*) &iedModel_CTRL_XCBR2_BlkCls_ctlModel,
    0
};

DataAttribute iedModel_CTRL_XCBR2_BlkCls_ctlModel = {
    DataAttributeModelType,
    "ctlModel",
    (ModelNode*) &iedModel_CTRL_XCBR2_BlkCls,
    NULL,
    NULL,
    0,
    IEC61850_FC_CF,
    IEC61850_ENUMERATED,
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
    (ModelNode*) &iedModel_PROT_PTOV1,
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

LogicalNode iedModel_PROT_PTOV1 = {
    LogicalNodeModelType,
    "PTOV1",
    (ModelNode*) &iedModel_PROT,
    (ModelNode*) &iedModel_PROT_PTOC1,
    (ModelNode*) &iedModel_PROT_PTOV1_Str,
};

DataObject iedModel_PROT_PTOV1_Str = {
    DataObjectModelType,
    "Str",
    (ModelNode*) &iedModel_PROT_PTOV1,
    (ModelNode*) &iedModel_PROT_PTOV1_Beh,
    (ModelNode*) &iedModel_PROT_PTOV1_Str_general,
    0
};

DataAttribute iedModel_PROT_PTOV1_Str_general = {
    DataAttributeModelType,
    "general",
    (ModelNode*) &iedModel_PROT_PTOV1_Str,
    (ModelNode*) &iedModel_PROT_PTOV1_Str_dirGeneral,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTOV1_Str_dirGeneral = {
    DataAttributeModelType,
    "dirGeneral",
    (ModelNode*) &iedModel_PROT_PTOV1_Str,
    (ModelNode*) &iedModel_PROT_PTOV1_Str_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTOV1_Str_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTOV1_Str,
    (ModelNode*) &iedModel_PROT_PTOV1_Str_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTOV1_Str_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTOV1_Str,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTOV1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_PROT_PTOV1,
    (ModelNode*) &iedModel_PROT_PTOV1_Op,
    (ModelNode*) &iedModel_PROT_PTOV1_Beh_stVal,
    0
};

DataAttribute iedModel_PROT_PTOV1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PTOV1_Beh,
    (ModelNode*) &iedModel_PROT_PTOV1_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTOV1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTOV1_Beh,
    (ModelNode*) &iedModel_PROT_PTOV1_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTOV1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTOV1_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTOV1_Op = {
    DataObjectModelType,
    "Op",
    (ModelNode*) &iedModel_PROT_PTOV1,
    NULL,
    (ModelNode*) &iedModel_PROT_PTOV1_Op_general,
    0
};

DataAttribute iedModel_PROT_PTOV1_Op_general = {
    DataAttributeModelType,
    "general",
    (ModelNode*) &iedModel_PROT_PTOV1_Op,
    (ModelNode*) &iedModel_PROT_PTOV1_Op_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTOV1_Op_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTOV1_Op,
    (ModelNode*) &iedModel_PROT_PTOV1_Op_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTOV1_Op_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTOV1_Op,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_PROT_PTOC1 = {
    LogicalNodeModelType,
    "PTOC1",
    (ModelNode*) &iedModel_PROT,
    (ModelNode*) &iedModel_PROT_PTOC2,
    (ModelNode*) &iedModel_PROT_PTOC1_Str,
};

DataObject iedModel_PROT_PTOC1_Str = {
    DataObjectModelType,
    "Str",
    (ModelNode*) &iedModel_PROT_PTOC1,
    (ModelNode*) &iedModel_PROT_PTOC1_Beh,
    (ModelNode*) &iedModel_PROT_PTOC1_Str_general,
    0
};

DataAttribute iedModel_PROT_PTOC1_Str_general = {
    DataAttributeModelType,
    "general",
    (ModelNode*) &iedModel_PROT_PTOC1_Str,
    (ModelNode*) &iedModel_PROT_PTOC1_Str_dirGeneral,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTOC1_Str_dirGeneral = {
    DataAttributeModelType,
    "dirGeneral",
    (ModelNode*) &iedModel_PROT_PTOC1_Str,
    (ModelNode*) &iedModel_PROT_PTOC1_Str_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTOC1_Str_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTOC1_Str,
    (ModelNode*) &iedModel_PROT_PTOC1_Str_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTOC1_Str_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTOC1_Str,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTOC1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_PROT_PTOC1,
    (ModelNode*) &iedModel_PROT_PTOC1_Op,
    (ModelNode*) &iedModel_PROT_PTOC1_Beh_stVal,
    0
};

DataAttribute iedModel_PROT_PTOC1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PTOC1_Beh,
    (ModelNode*) &iedModel_PROT_PTOC1_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTOC1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTOC1_Beh,
    (ModelNode*) &iedModel_PROT_PTOC1_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTOC1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTOC1_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTOC1_Op = {
    DataObjectModelType,
    "Op",
    (ModelNode*) &iedModel_PROT_PTOC1,
    NULL,
    (ModelNode*) &iedModel_PROT_PTOC1_Op_general,
    0
};

DataAttribute iedModel_PROT_PTOC1_Op_general = {
    DataAttributeModelType,
    "general",
    (ModelNode*) &iedModel_PROT_PTOC1_Op,
    (ModelNode*) &iedModel_PROT_PTOC1_Op_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTOC1_Op_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTOC1_Op,
    (ModelNode*) &iedModel_PROT_PTOC1_Op_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTOC1_Op_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTOC1_Op,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_PROT_PTOC2 = {
    LogicalNodeModelType,
    "PTOC2",
    (ModelNode*) &iedModel_PROT,
    (ModelNode*) &iedModel_PROT_PTOF1,
    (ModelNode*) &iedModel_PROT_PTOC2_Str,
};

DataObject iedModel_PROT_PTOC2_Str = {
    DataObjectModelType,
    "Str",
    (ModelNode*) &iedModel_PROT_PTOC2,
    (ModelNode*) &iedModel_PROT_PTOC2_Beh,
    (ModelNode*) &iedModel_PROT_PTOC2_Str_general,
    0
};

DataAttribute iedModel_PROT_PTOC2_Str_general = {
    DataAttributeModelType,
    "general",
    (ModelNode*) &iedModel_PROT_PTOC2_Str,
    (ModelNode*) &iedModel_PROT_PTOC2_Str_dirGeneral,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTOC2_Str_dirGeneral = {
    DataAttributeModelType,
    "dirGeneral",
    (ModelNode*) &iedModel_PROT_PTOC2_Str,
    (ModelNode*) &iedModel_PROT_PTOC2_Str_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTOC2_Str_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTOC2_Str,
    (ModelNode*) &iedModel_PROT_PTOC2_Str_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTOC2_Str_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTOC2_Str,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTOC2_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_PROT_PTOC2,
    (ModelNode*) &iedModel_PROT_PTOC2_Op,
    (ModelNode*) &iedModel_PROT_PTOC2_Beh_stVal,
    0
};

DataAttribute iedModel_PROT_PTOC2_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PTOC2_Beh,
    (ModelNode*) &iedModel_PROT_PTOC2_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTOC2_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTOC2_Beh,
    (ModelNode*) &iedModel_PROT_PTOC2_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTOC2_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTOC2_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTOC2_Op = {
    DataObjectModelType,
    "Op",
    (ModelNode*) &iedModel_PROT_PTOC2,
    NULL,
    (ModelNode*) &iedModel_PROT_PTOC2_Op_general,
    0
};

DataAttribute iedModel_PROT_PTOC2_Op_general = {
    DataAttributeModelType,
    "general",
    (ModelNode*) &iedModel_PROT_PTOC2_Op,
    (ModelNode*) &iedModel_PROT_PTOC2_Op_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTOC2_Op_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTOC2_Op,
    (ModelNode*) &iedModel_PROT_PTOC2_Op_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTOC2_Op_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTOC2_Op,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_PROT_PTOF1 = {
    LogicalNodeModelType,
    "PTOF1",
    (ModelNode*) &iedModel_PROT,
    NULL,
    (ModelNode*) &iedModel_PROT_PTOF1_Str,
};

DataObject iedModel_PROT_PTOF1_Str = {
    DataObjectModelType,
    "Str",
    (ModelNode*) &iedModel_PROT_PTOF1,
    (ModelNode*) &iedModel_PROT_PTOF1_Beh,
    (ModelNode*) &iedModel_PROT_PTOF1_Str_general,
    0
};

DataAttribute iedModel_PROT_PTOF1_Str_general = {
    DataAttributeModelType,
    "general",
    (ModelNode*) &iedModel_PROT_PTOF1_Str,
    (ModelNode*) &iedModel_PROT_PTOF1_Str_dirGeneral,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTOF1_Str_dirGeneral = {
    DataAttributeModelType,
    "dirGeneral",
    (ModelNode*) &iedModel_PROT_PTOF1_Str,
    (ModelNode*) &iedModel_PROT_PTOF1_Str_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTOF1_Str_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTOF1_Str,
    (ModelNode*) &iedModel_PROT_PTOF1_Str_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTOF1_Str_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTOF1_Str,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTOF1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_PROT_PTOF1,
    (ModelNode*) &iedModel_PROT_PTOF1_Op,
    (ModelNode*) &iedModel_PROT_PTOF1_Beh_stVal,
    0
};

DataAttribute iedModel_PROT_PTOF1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_PROT_PTOF1_Beh,
    (ModelNode*) &iedModel_PROT_PTOF1_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTOF1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTOF1_Beh,
    (ModelNode*) &iedModel_PROT_PTOF1_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTOF1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTOF1_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_PROT_PTOF1_Op = {
    DataObjectModelType,
    "Op",
    (ModelNode*) &iedModel_PROT_PTOF1,
    NULL,
    (ModelNode*) &iedModel_PROT_PTOF1_Op_general,
    0
};

DataAttribute iedModel_PROT_PTOF1_Op_general = {
    DataAttributeModelType,
    "general",
    (ModelNode*) &iedModel_PROT_PTOF1_Op,
    (ModelNode*) &iedModel_PROT_PTOF1_Op_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_BOOLEAN,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTOF1_Op_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_PROT_PTOF1_Op,
    (ModelNode*) &iedModel_PROT_PTOF1_Op_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_PROT_PTOF1_Op_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_PROT_PTOF1_Op,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
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
extern ReportControlBlock iedModel_PROT_LLN0_report15;
extern ReportControlBlock iedModel_PROT_LLN0_report16;
extern ReportControlBlock iedModel_PROT_LLN0_report17;
extern ReportControlBlock iedModel_PROT_LLN0_report18;
extern ReportControlBlock iedModel_PROT_LLN0_report19;
extern ReportControlBlock iedModel_PROT_LLN0_report20;
extern ReportControlBlock iedModel_PROT_LLN0_report21;
extern ReportControlBlock iedModel_PROT_LLN0_report22;
extern ReportControlBlock iedModel_PROT_LLN0_report23;
extern ReportControlBlock iedModel_PROT_LLN0_report24;

ReportControlBlock iedModel_PROT_LLN0_report0 = {&iedModel_PROT_LLN0, "MCB101", NULL, true, "MDS1", 1, 31, 255, 500, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report1};
ReportControlBlock iedModel_PROT_LLN0_report1 = {&iedModel_PROT_LLN0, "MCB102", NULL, true, "MDS1", 1, 31, 255, 500, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report2};
ReportControlBlock iedModel_PROT_LLN0_report2 = {&iedModel_PROT_LLN0, "MCB103", NULL, true, "MDS1", 1, 31, 255, 500, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report3};
ReportControlBlock iedModel_PROT_LLN0_report3 = {&iedModel_PROT_LLN0, "MCB104", NULL, true, "MDS1", 1, 31, 255, 500, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report4};
ReportControlBlock iedModel_PROT_LLN0_report4 = {&iedModel_PROT_LLN0, "MCB105", NULL, true, "MDS1", 1, 31, 255, 500, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report5};
ReportControlBlock iedModel_PROT_LLN0_report5 = {&iedModel_PROT_LLN0, "MCB201", NULL, true, "MDS2", 1, 31, 255, 500, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report6};
ReportControlBlock iedModel_PROT_LLN0_report6 = {&iedModel_PROT_LLN0, "MCB202", NULL, true, "MDS2", 1, 31, 255, 500, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report7};
ReportControlBlock iedModel_PROT_LLN0_report7 = {&iedModel_PROT_LLN0, "MCB203", NULL, true, "MDS2", 1, 31, 255, 500, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report8};
ReportControlBlock iedModel_PROT_LLN0_report8 = {&iedModel_PROT_LLN0, "MCB204", NULL, true, "MDS2", 1, 31, 255, 500, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report9};
ReportControlBlock iedModel_PROT_LLN0_report9 = {&iedModel_PROT_LLN0, "MCB205", NULL, true, "MDS2", 1, 31, 255, 500, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report10};
ReportControlBlock iedModel_PROT_LLN0_report10 = {&iedModel_PROT_LLN0, "CCB101", NULL, true, "CDS1", 1, 31, 255, 500, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report11};
ReportControlBlock iedModel_PROT_LLN0_report11 = {&iedModel_PROT_LLN0, "CCB102", NULL, true, "CDS1", 1, 31, 255, 500, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report12};
ReportControlBlock iedModel_PROT_LLN0_report12 = {&iedModel_PROT_LLN0, "CCB103", NULL, true, "CDS1", 1, 31, 255, 500, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report13};
ReportControlBlock iedModel_PROT_LLN0_report13 = {&iedModel_PROT_LLN0, "CCB104", NULL, true, "CDS1", 1, 31, 255, 500, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report14};
ReportControlBlock iedModel_PROT_LLN0_report14 = {&iedModel_PROT_LLN0, "CCB105", NULL, true, "CDS1", 1, 31, 255, 500, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report15};
ReportControlBlock iedModel_PROT_LLN0_report15 = {&iedModel_PROT_LLN0, "CCB201", NULL, true, "CDS2", 30001, 31, 255, 500, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report16};
ReportControlBlock iedModel_PROT_LLN0_report16 = {&iedModel_PROT_LLN0, "CCB202", NULL, true, "CDS2", 30001, 31, 255, 500, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report17};
ReportControlBlock iedModel_PROT_LLN0_report17 = {&iedModel_PROT_LLN0, "CCB203", NULL, true, "CDS2", 30001, 31, 255, 500, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report18};
ReportControlBlock iedModel_PROT_LLN0_report18 = {&iedModel_PROT_LLN0, "CCB204", NULL, true, "CDS2", 30001, 31, 255, 500, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report19};
ReportControlBlock iedModel_PROT_LLN0_report19 = {&iedModel_PROT_LLN0, "CCB205", NULL, true, "CDS2", 30001, 31, 255, 500, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report20};
ReportControlBlock iedModel_PROT_LLN0_report20 = {&iedModel_PROT_LLN0, "PCB01", NULL, true, "PDS", 1, 31, 255, 500, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report21};
ReportControlBlock iedModel_PROT_LLN0_report21 = {&iedModel_PROT_LLN0, "PCB02", NULL, true, "PDS", 1, 31, 255, 500, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report22};
ReportControlBlock iedModel_PROT_LLN0_report22 = {&iedModel_PROT_LLN0, "PCB03", NULL, true, "PDS", 1, 31, 255, 500, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report23};
ReportControlBlock iedModel_PROT_LLN0_report23 = {&iedModel_PROT_LLN0, "PCB04", NULL, true, "PDS", 1, 31, 255, 500, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_PROT_LLN0_report24};
ReportControlBlock iedModel_PROT_LLN0_report24 = {&iedModel_PROT_LLN0, "PCB05", NULL, true, "PDS", 1, 31, 255, 500, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, NULL};







IedModel iedModel = {
    "MIED1",
    &iedModel_LD0,
    &iedModelds_PROT_LLN0_MDS1,
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
