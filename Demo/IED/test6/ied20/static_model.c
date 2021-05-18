/*
 * static_model.c
 *
 * automatically generated from ied20scl.icd
 */
#include "static_model.h"

static void initializeValues();

extern DataSet iedModelds_Frequency_LLN0_FDS;


extern DataSetEntry iedModelds_Frequency_LLN0_FDS_fcda0;
extern DataSetEntry iedModelds_Frequency_LLN0_FDS_fcda1;
extern DataSetEntry iedModelds_Frequency_LLN0_FDS_fcda2;
extern DataSetEntry iedModelds_Frequency_LLN0_FDS_fcda3;

DataSetEntry iedModelds_Frequency_LLN0_FDS_fcda0 = {
  "Frequency",
  false,
  "MMXU1$MX$Hz$mag$f",
  -1,
  NULL,
  NULL,
  &iedModelds_Frequency_LLN0_FDS_fcda1
};

DataSetEntry iedModelds_Frequency_LLN0_FDS_fcda1 = {
  "Frequency",
  false,
  "MMXU2$MX$Hz$mag$f",
  -1,
  NULL,
  NULL,
  &iedModelds_Frequency_LLN0_FDS_fcda2
};

DataSetEntry iedModelds_Frequency_LLN0_FDS_fcda2 = {
  "Frequency",
  false,
  "MMXU3$MX$Hz$mag$f",
  -1,
  NULL,
  NULL,
  &iedModelds_Frequency_LLN0_FDS_fcda3
};

DataSetEntry iedModelds_Frequency_LLN0_FDS_fcda3 = {
  "Frequency",
  false,
  "MMXU4$MX$Hz$mag$f",
  -1,
  NULL,
  NULL,
  NULL
};

DataSet iedModelds_Frequency_LLN0_FDS = {
  "Frequency",
  "LLN0$FDS",
  4,
  &iedModelds_Frequency_LLN0_FDS_fcda0,
  NULL
};

LogicalDevice iedModel_Frequency = {
    LogicalDeviceModelType,
    "Frequency",
    (ModelNode*) &iedModel,
    NULL,
    (ModelNode*) &iedModel_Frequency_LLN0
};

LogicalNode iedModel_Frequency_LLN0 = {
    LogicalNodeModelType,
    "LLN0",
    (ModelNode*) &iedModel_Frequency,
    (ModelNode*) &iedModel_Frequency_MMXU1,
    (ModelNode*) &iedModel_Frequency_LLN0_Beh,
};

DataObject iedModel_Frequency_LLN0_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_Frequency_LLN0,
    NULL,
    (ModelNode*) &iedModel_Frequency_LLN0_Beh_stVal,
    0
};

DataAttribute iedModel_Frequency_LLN0_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_Frequency_LLN0_Beh,
    (ModelNode*) &iedModel_Frequency_LLN0_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_Frequency_LLN0_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Frequency_LLN0_Beh,
    (ModelNode*) &iedModel_Frequency_LLN0_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_Frequency_LLN0_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Frequency_LLN0_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_Frequency_MMXU1 = {
    LogicalNodeModelType,
    "MMXU1",
    (ModelNode*) &iedModel_Frequency,
    (ModelNode*) &iedModel_Frequency_MMXU2,
    (ModelNode*) &iedModel_Frequency_MMXU1_Beh,
};

DataObject iedModel_Frequency_MMXU1_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_Frequency_MMXU1,
    (ModelNode*) &iedModel_Frequency_MMXU1_Hz,
    (ModelNode*) &iedModel_Frequency_MMXU1_Beh_stVal,
    0
};

DataAttribute iedModel_Frequency_MMXU1_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_Frequency_MMXU1_Beh,
    (ModelNode*) &iedModel_Frequency_MMXU1_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_Frequency_MMXU1_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Frequency_MMXU1_Beh,
    (ModelNode*) &iedModel_Frequency_MMXU1_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_Frequency_MMXU1_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Frequency_MMXU1_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_Frequency_MMXU1_Hz = {
    DataObjectModelType,
    "Hz",
    (ModelNode*) &iedModel_Frequency_MMXU1,
    NULL,
    (ModelNode*) &iedModel_Frequency_MMXU1_Hz_mag,
    0
};

DataAttribute iedModel_Frequency_MMXU1_Hz_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_Frequency_MMXU1_Hz,
    (ModelNode*) &iedModel_Frequency_MMXU1_Hz_q,
    (ModelNode*) &iedModel_Frequency_MMXU1_Hz_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_Frequency_MMXU1_Hz_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Frequency_MMXU1_Hz_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_Frequency_MMXU1_Hz_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Frequency_MMXU1_Hz,
    (ModelNode*) &iedModel_Frequency_MMXU1_Hz_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_Frequency_MMXU1_Hz_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Frequency_MMXU1_Hz,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_Frequency_MMXU2 = {
    LogicalNodeModelType,
    "MMXU2",
    (ModelNode*) &iedModel_Frequency,
    (ModelNode*) &iedModel_Frequency_MMXU3,
    (ModelNode*) &iedModel_Frequency_MMXU2_Beh,
};

DataObject iedModel_Frequency_MMXU2_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_Frequency_MMXU2,
    (ModelNode*) &iedModel_Frequency_MMXU2_Hz,
    (ModelNode*) &iedModel_Frequency_MMXU2_Beh_stVal,
    0
};

DataAttribute iedModel_Frequency_MMXU2_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_Frequency_MMXU2_Beh,
    (ModelNode*) &iedModel_Frequency_MMXU2_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_Frequency_MMXU2_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Frequency_MMXU2_Beh,
    (ModelNode*) &iedModel_Frequency_MMXU2_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_Frequency_MMXU2_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Frequency_MMXU2_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_Frequency_MMXU2_Hz = {
    DataObjectModelType,
    "Hz",
    (ModelNode*) &iedModel_Frequency_MMXU2,
    NULL,
    (ModelNode*) &iedModel_Frequency_MMXU2_Hz_mag,
    0
};

DataAttribute iedModel_Frequency_MMXU2_Hz_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_Frequency_MMXU2_Hz,
    (ModelNode*) &iedModel_Frequency_MMXU2_Hz_q,
    (ModelNode*) &iedModel_Frequency_MMXU2_Hz_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_Frequency_MMXU2_Hz_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Frequency_MMXU2_Hz_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_Frequency_MMXU2_Hz_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Frequency_MMXU2_Hz,
    (ModelNode*) &iedModel_Frequency_MMXU2_Hz_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_Frequency_MMXU2_Hz_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Frequency_MMXU2_Hz,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_Frequency_MMXU3 = {
    LogicalNodeModelType,
    "MMXU3",
    (ModelNode*) &iedModel_Frequency,
    (ModelNode*) &iedModel_Frequency_MMXU4,
    (ModelNode*) &iedModel_Frequency_MMXU3_Beh,
};

DataObject iedModel_Frequency_MMXU3_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_Frequency_MMXU3,
    (ModelNode*) &iedModel_Frequency_MMXU3_Hz,
    (ModelNode*) &iedModel_Frequency_MMXU3_Beh_stVal,
    0
};

DataAttribute iedModel_Frequency_MMXU3_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_Frequency_MMXU3_Beh,
    (ModelNode*) &iedModel_Frequency_MMXU3_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_Frequency_MMXU3_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Frequency_MMXU3_Beh,
    (ModelNode*) &iedModel_Frequency_MMXU3_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_Frequency_MMXU3_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Frequency_MMXU3_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_Frequency_MMXU3_Hz = {
    DataObjectModelType,
    "Hz",
    (ModelNode*) &iedModel_Frequency_MMXU3,
    NULL,
    (ModelNode*) &iedModel_Frequency_MMXU3_Hz_mag,
    0
};

DataAttribute iedModel_Frequency_MMXU3_Hz_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_Frequency_MMXU3_Hz,
    (ModelNode*) &iedModel_Frequency_MMXU3_Hz_q,
    (ModelNode*) &iedModel_Frequency_MMXU3_Hz_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_Frequency_MMXU3_Hz_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Frequency_MMXU3_Hz_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_Frequency_MMXU3_Hz_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Frequency_MMXU3_Hz,
    (ModelNode*) &iedModel_Frequency_MMXU3_Hz_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_Frequency_MMXU3_Hz_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Frequency_MMXU3_Hz,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

LogicalNode iedModel_Frequency_MMXU4 = {
    LogicalNodeModelType,
    "MMXU4",
    (ModelNode*) &iedModel_Frequency,
    NULL,
    (ModelNode*) &iedModel_Frequency_MMXU4_Beh,
};

DataObject iedModel_Frequency_MMXU4_Beh = {
    DataObjectModelType,
    "Beh",
    (ModelNode*) &iedModel_Frequency_MMXU4,
    (ModelNode*) &iedModel_Frequency_MMXU4_Hz,
    (ModelNode*) &iedModel_Frequency_MMXU4_Beh_stVal,
    0
};

DataAttribute iedModel_Frequency_MMXU4_Beh_stVal = {
    DataAttributeModelType,
    "stVal",
    (ModelNode*) &iedModel_Frequency_MMXU4_Beh,
    (ModelNode*) &iedModel_Frequency_MMXU4_Beh_q,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_ENUMERATED,
    0,
    NULL,
    0};

DataAttribute iedModel_Frequency_MMXU4_Beh_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Frequency_MMXU4_Beh,
    (ModelNode*) &iedModel_Frequency_MMXU4_Beh_t,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_Frequency_MMXU4_Beh_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Frequency_MMXU4_Beh,
    NULL,
    NULL,
    0,
    IEC61850_FC_ST,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

DataObject iedModel_Frequency_MMXU4_Hz = {
    DataObjectModelType,
    "Hz",
    (ModelNode*) &iedModel_Frequency_MMXU4,
    NULL,
    (ModelNode*) &iedModel_Frequency_MMXU4_Hz_mag,
    0
};

DataAttribute iedModel_Frequency_MMXU4_Hz_mag = {
    DataAttributeModelType,
    "mag",
    (ModelNode*) &iedModel_Frequency_MMXU4_Hz,
    (ModelNode*) &iedModel_Frequency_MMXU4_Hz_q,
    (ModelNode*) &iedModel_Frequency_MMXU4_Hz_mag_f,
    0,
    IEC61850_FC_MX,
    IEC61850_CONSTRUCTED,
    0,
    NULL,
    0};

DataAttribute iedModel_Frequency_MMXU4_Hz_mag_f = {
    DataAttributeModelType,
    "f",
    (ModelNode*) &iedModel_Frequency_MMXU4_Hz_mag,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_FLOAT32,
    0,
    NULL,
    0};

DataAttribute iedModel_Frequency_MMXU4_Hz_q = {
    DataAttributeModelType,
    "q",
    (ModelNode*) &iedModel_Frequency_MMXU4_Hz,
    (ModelNode*) &iedModel_Frequency_MMXU4_Hz_t,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_QUALITY,
    0,
    NULL,
    0};

DataAttribute iedModel_Frequency_MMXU4_Hz_t = {
    DataAttributeModelType,
    "t",
    (ModelNode*) &iedModel_Frequency_MMXU4_Hz,
    NULL,
    NULL,
    0,
    IEC61850_FC_MX,
    IEC61850_TIMESTAMP,
    0,
    NULL,
    0};

extern ReportControlBlock iedModel_Frequency_LLN0_report0;
extern ReportControlBlock iedModel_Frequency_LLN0_report1;

ReportControlBlock iedModel_Frequency_LLN0_report0 = {&iedModel_Frequency_LLN0, "FCB01", NULL, false, "FDS", 10, 31, 255, 500, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, &iedModel_Frequency_LLN0_report1};
ReportControlBlock iedModel_Frequency_LLN0_report1 = {&iedModel_Frequency_LLN0, "FCB02", NULL, false, "FDS", 10, 31, 255, 500, 1000, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}, NULL};







IedModel iedModel = {
    "FIEDServer00",
    &iedModel_Frequency,
    &iedModelds_Frequency_LLN0_FDS,
    &iedModel_Frequency_LLN0_report0,
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
