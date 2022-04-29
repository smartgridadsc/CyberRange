-- MySQL dump 10.13  Distrib 8.0.25, for Linux (x86_64)
--
-- Host: localhost    Database: test_db
-- ------------------------------------------------------
-- Server version	8.0.25-0ubuntu0.20.10.1

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!50503 SET NAMES utf8mb4 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `bus_voltage`
--

DROP TABLE IF EXISTS `bus_voltage`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `bus_voltage` (
  `name` varchar(20) NOT NULL,
  `value` float DEFAULT NULL,
  PRIMARY KEY (`name`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `bus_voltage`
--

LOCK TABLES `bus_voltage` WRITE;
/*!40000 ALTER TABLE `bus_voltage` DISABLE KEYS */;
INSERT INTO `bus_voltage` VALUES ('bus_voltage_0',0.980254),('bus_voltage_1',0.96614),('bus_voltage_10',0.959319),('bus_voltage_11',0.965902),('bus_voltage_12',0.961467),('bus_voltage_13',0.933259),('bus_voltage_14',0.965649),('bus_voltage_15',0.961582),('bus_voltage_16',0.956877),('bus_voltage_17',0.965661),('bus_voltage_18',0.963548),('bus_voltage_19',0.962111),('bus_voltage_2',0.978733),('bus_voltage_20',0.965834),('bus_voltage_21',0.995592),('bus_voltage_22',0.993893),('bus_voltage_23',0.981733),('bus_voltage_24',0.981578),('bus_voltage_25',0.97919),('bus_voltage_26',0.978922),('bus_voltage_27',0.979335),('bus_voltage_28',1),('bus_voltage_29',0.98217),('bus_voltage_3',0),('bus_voltage_4',0),('bus_voltage_5',0),('bus_voltage_6',0.97864),('bus_voltage_7',0.978182),('bus_voltage_8',0.978823),('bus_voltage_9',0.963868);
/*!40000 ALTER TABLE `bus_voltage` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `fm`
--

DROP TABLE IF EXISTS `fm`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `fm` (
  `name` varchar(20) NOT NULL,
  `value` float DEFAULT NULL,
  PRIMARY KEY (`name`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `fm`
--

LOCK TABLES `fm` WRITE;
/*!40000 ALTER TABLE `fm` DISABLE KEYS */;
INSERT INTO `fm` VALUES ('fm_0',49.991),('fm_1',50.0088),('fm_2',49.991),('fm_3',49.9935);
/*!40000 ALTER TABLE `fm` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `line_cb`
--

DROP TABLE IF EXISTS `line_cb`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `line_cb` (
  `name` varchar(20) NOT NULL,
  `value` tinyint(1) DEFAULT NULL,
  PRIMARY KEY (`name`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `line_cb`
--

LOCK TABLES `line_cb` WRITE;
/*!40000 ALTER TABLE `line_cb` DISABLE KEYS */;
INSERT INTO `line_cb` VALUES ('line_cb_0',1),('line_cb_1',1),('line_cb_10',1),('line_cb_11',0),('line_cb_12',1),('line_cb_13',1),('line_cb_14',1),('line_cb_15',1),('line_cb_16',1),('line_cb_17',1),('line_cb_2',1),('line_cb_3',1),('line_cb_4',1),('line_cb_5',0),('line_cb_6',0),('line_cb_7',1),('line_cb_8',1),('line_cb_9',1);
/*!40000 ALTER TABLE `line_cb` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `line_current`
--

DROP TABLE IF EXISTS `line_current`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `line_current` (
  `name` varchar(20) NOT NULL,
  `value` float DEFAULT NULL,
  PRIMARY KEY (`name`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `line_current`
--

LOCK TABLES `line_current` WRITE;
/*!40000 ALTER TABLE `line_current` DISABLE KEYS */;
INSERT INTO `line_current` VALUES ('line_current_0',0.0150479),('line_current_1',0.0150479),('line_current_10',0.0452527),('line_current_11',0.0452527),('line_current_12',0.0237205),('line_current_13',0.0237199),('line_current_14',0.0237205),('line_current_15',0.145343),('line_current_16',0.145343),('line_current_17',0.0146958),('line_current_18',0.0146958),('line_current_19',0.136944),('line_current_2',0.0150478),('line_current_20',0.136945),('line_current_21',0.010426),('line_current_22',0.010426),('line_current_23',0.0104255),('line_current_24',0),('line_current_25',0),('line_current_26',0.145343),('line_current_27',0.0146958),('line_current_3',0.0225687),('line_current_4',0.0225687),('line_current_5',0.0225687),('line_current_6',0.0463979),('line_current_7',0.0463979),('line_current_8',0.0463979),('line_current_9',0.0452527);
/*!40000 ALTER TABLE `line_current` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `line_load_percent`
--

DROP TABLE IF EXISTS `line_load_percent`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `line_load_percent` (
  `name` varchar(20) NOT NULL,
  `value` float DEFAULT NULL,
  PRIMARY KEY (`name`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `line_load_percent`
--

LOCK TABLES `line_load_percent` WRITE;
/*!40000 ALTER TABLE `line_load_percent` DISABLE KEYS */;
INSERT INTO `line_load_percent` VALUES ('line_load_percent_0',7.09807),('line_load_percent_1',3.61729),('line_load_percent_10',10.8781),('line_load_percent_11',16.7603),('line_load_percent_12',11.1889),('line_load_percent_13',5.70191),('line_load_percent_14',8.78538),('line_load_percent_15',34.9382),('line_load_percent_16',53.8307),('line_load_percent_17',3.53264),('line_load_percent_18',5.44288),('line_load_percent_19',32.9193),('line_load_percent_2',5.57325),('line_load_percent_20',50.7202),('line_load_percent_21',4.91791),('line_load_percent_22',2.50624),('line_load_percent_23',3.8613),('line_load_percent_24',0),('line_load_percent_25',0),('line_load_percent_26',68.5579),('line_load_percent_27',6.93198),('line_load_percent_3',18.499),('line_load_percent_4',5.42518),('line_load_percent_5',8.3588),('line_load_percent_6',62.6999),('line_load_percent_7',11.1533),('line_load_percent_8',17.1844),('line_load_percent_9',21.3456);
/*!40000 ALTER TABLE `line_load_percent` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `line_loading`
--

DROP TABLE IF EXISTS `line_loading`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `line_loading` (
  `name` varchar(20) NOT NULL,
  `value` float DEFAULT NULL,
  PRIMARY KEY (`name`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `line_loading`
--

LOCK TABLES `line_loading` WRITE;
/*!40000 ALTER TABLE `line_loading` DISABLE KEYS */;
INSERT INTO `line_loading` VALUES ('line_loading_0',-0.01),('line_loading_1',-0.0100047),('line_loading_10',0.0302903),('line_loading_11',0.0302753),('line_loading_12',0.0150232),('line_loading_13',0.0150624),('line_loading_14',-0.0150232),('line_loading_15',-0.0991916),('line_loading_16',-0.0978734),('line_loading_17',0.00999556),('line_loading_18',-0.0099805),('line_loading_19',-0.0926864),('line_loading_2',-0.0100063),('line_loading_20',-0.0915161),('line_loading_21',-0.005),('line_loading_22',0.00500303),('line_loading_23',0.00500981),('line_loading_24',0),('line_loading_25',0),('line_loading_26',0.099781),('line_loading_27',-0.00999556),('line_loading_3',0.0150711),('line_loading_4',0.0151066),('line_loading_5',-0.0150711),('line_loading_6',0.0309067),('line_loading_7',0.0310568),('line_loading_8',-0.0309067),('line_loading_9',0.0301475);
/*!40000 ALTER TABLE `line_loading` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `line_reactive_power`
--

DROP TABLE IF EXISTS `line_reactive_power`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `line_reactive_power` (
  `name` varchar(30) NOT NULL,
  `value` float DEFAULT NULL,
  PRIMARY KEY (`name`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `line_reactive_power`
--

LOCK TABLES `line_reactive_power` WRITE;
/*!40000 ALTER TABLE `line_reactive_power` DISABLE KEYS */;
INSERT INTO `line_reactive_power` VALUES ('line_reactive_power_0',-0.002),('line_reactive_power_1',-0.00200105),('line_reactive_power_10',0.000093515),('line_reactive_power_11',0.0000810415),('line_reactive_power_12',0.0050052),('line_reactive_power_13',0.0050206),('line_reactive_power_14',-0.0050052),('line_reactive_power_15',-0.0133164),('line_reactive_power_16',-0.0128107),('line_reactive_power_17',-0.000000997556),('line_reactive_power_18',0.00000583724),('line_reactive_power_19',-0.00567888),('line_reactive_power_2',-0.00200203),('line_reactive_power_20',-0.00523003),('line_reactive_power_21',-0.005),('line_reactive_power_22',0.00500075),('line_reactive_power_23',0.0050021),('line_reactive_power_24',0),('line_reactive_power_25',0),('line_reactive_power_26',0.0135467),('line_reactive_power_27',0.000000997557),('line_reactive_power_3',0.0000061119),('line_reactive_power_4',0.000019896),('line_reactive_power_5',-0.00000611191),('line_reactive_power_6',0.0000324334),('line_reactive_power_7',0.0000960165),('line_reactive_power_8',-0.0000324334),('line_reactive_power_9',0.0000331124);
/*!40000 ALTER TABLE `line_reactive_power` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `line_reactive_power2`
--

DROP TABLE IF EXISTS `line_reactive_power2`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `line_reactive_power2` (
  `name` varchar(30) NOT NULL,
  `value` float DEFAULT NULL,
  PRIMARY KEY (`name`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `line_reactive_power2`
--

LOCK TABLES `line_reactive_power2` WRITE;
/*!40000 ALTER TABLE `line_reactive_power2` DISABLE KEYS */;
INSERT INTO `line_reactive_power2` VALUES ('line_reactive_power2_0',0.00200105),('line_reactive_power2_1',0.00200203),('line_reactive_power2_10',-0.0000810415),('line_reactive_power2_11',-0.0000331124),('line_reactive_power2_12',-0.005),('line_reactive_power2_13',-0.00501748),('line_reactive_power2_14',0.00501748),('line_reactive_power2_15',0.0134491),('line_reactive_power2_16',0.0133164),('line_reactive_power2_17',0.00000191639),('line_reactive_power2_18',-0.00000191639),('line_reactive_power2_19',0.00579659),('line_reactive_power2_2',0.00200621),('line_reactive_power2_20',0.00567888),('line_reactive_power2_21',0.0050005),('line_reactive_power2_22',-0.0050005),('line_reactive_power2_23',-0.00500075),('line_reactive_power2_24',0),('line_reactive_power2_25',0),('line_reactive_power2_26',-0.0134491),('line_reactive_power2_27',0.000000000000918944),('line_reactive_power2_3',-0.00000000000423541),('line_reactive_power2_4',-0.0000171149),('line_reactive_power2_5',0.0000171149),('line_reactive_power2_6',-0.0000000000116801),('line_reactive_power2_7',-0.0000828818),('line_reactive_power2_8',0.0000828818),('line_reactive_power2_9',-0.0000000000250392);
/*!40000 ALTER TABLE `line_reactive_power2` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `line_real_power`
--

DROP TABLE IF EXISTS `line_real_power`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `line_real_power` (
  `name` varchar(20) NOT NULL,
  `value` float DEFAULT NULL,
  PRIMARY KEY (`name`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `line_real_power`
--

LOCK TABLES `line_real_power` WRITE;
/*!40000 ALTER TABLE `line_real_power` DISABLE KEYS */;
INSERT INTO `line_real_power` VALUES ('line_real_power_0',-0.01),('line_real_power_1',-0.0100047),('line_real_power_10',0.0302903),('line_real_power_11',0.0302753),('line_real_power_12',0.0150232),('line_real_power_13',0.0150624),('line_real_power_14',-0.0150232),('line_real_power_15',-0.0991916),('line_real_power_16',-0.0978734),('line_real_power_17',0.00999556),('line_real_power_18',-0.0099805),('line_real_power_19',-0.0926864),('line_real_power_2',-0.0100063),('line_real_power_20',-0.0915161),('line_real_power_21',-0.005),('line_real_power_22',0.00500303),('line_real_power_23',0.00500981),('line_real_power_24',0),('line_real_power_25',0),('line_real_power_26',0.099781),('line_real_power_27',-0.00999556),('line_real_power_3',0.0150711),('line_real_power_4',0.0151066),('line_real_power_5',-0.0150711),('line_real_power_6',0.0309067),('line_real_power_7',0.0310568),('line_real_power_8',-0.0309067),('line_real_power_9',0.0301475);
/*!40000 ALTER TABLE `line_real_power` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `line_real_power2`
--

DROP TABLE IF EXISTS `line_real_power2`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `line_real_power2` (
  `name` varchar(30) NOT NULL,
  `value` float DEFAULT NULL,
  PRIMARY KEY (`name`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `line_real_power2`
--

LOCK TABLES `line_real_power2` WRITE;
/*!40000 ALTER TABLE `line_real_power2` DISABLE KEYS */;
INSERT INTO `line_real_power2` VALUES ('line_real_power2_0',0.0100047),('line_real_power2_1',0.0100063),('line_real_power2_10',-0.0302753),('line_real_power2_11',-0.0301475),('line_real_power2_12',-0.015),('line_real_power2_13',-0.0150583),('line_real_power2_14',0.0150583),('line_real_power2_15',0.0993462),('line_real_power2_16',0.0991916),('line_real_power2_17',-0.00999397),('line_real_power2_18',0.00999397),('line_real_power2_19',0.0928237),('line_real_power2_2',0.0100204),('line_real_power2_20',0.0926864),('line_real_power2_21',0.00500224),('line_real_power2_22',-0.00500224),('line_real_power2_23',-0.00500303),('line_real_power2_24',0),('line_real_power2_25',0),('line_real_power2_26',-0.0993462),('line_real_power2_27',0.01),('line_real_power2_3',-0.015),('line_real_power2_4',-0.0151029),('line_real_power2_5',0.0151029),('line_real_power2_6',-0.03),('line_real_power2_7',-0.0310411),('line_real_power2_8',0.0310411),('line_real_power2_9',-0.03);
/*!40000 ALTER TABLE `line_real_power2` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `loads`
--

DROP TABLE IF EXISTS `loads`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `loads` (
  `name` varchar(20) NOT NULL,
  `value` float DEFAULT NULL,
  PRIMARY KEY (`name`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `loads`
--

LOCK TABLES `loads` WRITE;
/*!40000 ALTER TABLE `loads` DISABLE KEYS */;
INSERT INTO `loads` VALUES ('loads_0',0.015),('loads_1',0.03),('loads_10',0),('loads_11',0),('loads_12',0),('loads_13',0),('loads_14',0),('loads_15',0),('loads_16',0),('loads_17',0),('loads_18',0),('loads_19',0),('loads_2',0.03),('loads_20',0),('loads_21',0),('loads_22',0),('loads_23',0),('loads_24',0),('loads_25',0),('loads_26',0),('loads_27',0),('loads_3',0.015),('loads_4',0),('loads_5',0),('loads_6',0),('loads_7',0),('loads_8',0),('loads_9',0);
/*!40000 ALTER TABLE `loads` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `relay`
--

DROP TABLE IF EXISTS `relay`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `relay` (
  `name` varchar(20) NOT NULL,
  `value` tinyint(1) DEFAULT NULL,
  PRIMARY KEY (`name`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `relay`
--

LOCK TABLES `relay` WRITE;
/*!40000 ALTER TABLE `relay` DISABLE KEYS */;
INSERT INTO `relay` VALUES ('relay_0',1),('relay_1',1),('relay_2',1),('relay_3',1);
/*!40000 ALTER TABLE `relay` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `transformer_pressure`
--

DROP TABLE IF EXISTS `transformer_pressure`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `transformer_pressure` (
  `name` varchar(30) NOT NULL,
  `value` float DEFAULT NULL,
  PRIMARY KEY (`name`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `transformer_pressure`
--

LOCK TABLES `transformer_pressure` WRITE;
/*!40000 ALTER TABLE `transformer_pressure` DISABLE KEYS */;
INSERT INTO `transformer_pressure` VALUES ('transformer_pressure_0',47);
/*!40000 ALTER TABLE `transformer_pressure` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `transformer_temp`
--

DROP TABLE IF EXISTS `transformer_temp`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `transformer_temp` (
  `name` varchar(20) NOT NULL,
  `value` float DEFAULT NULL,
  PRIMARY KEY (`name`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `transformer_temp`
--

LOCK TABLES `transformer_temp` WRITE;
/*!40000 ALTER TABLE `transformer_temp` DISABLE KEYS */;
INSERT INTO `transformer_temp` VALUES ('transformer_temp_0',40.9823);
/*!40000 ALTER TABLE `transformer_temp` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2021-10-20  4:46:25
