#!/bin/sh
cd libs/libiec61850/tools/model_generator
echo "ICD file"
read file
java -jar genmodel.jar  /home/ubuntu/DEMO/IED/$file/config_files/$file.icd
cp static_model.* /home/ubuntu/DEMO/IED/$file



