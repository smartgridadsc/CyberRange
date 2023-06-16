-- MySQL dump 10.13  Distrib 8.0.23, for Win64 (x86_64)
--
-- Host: localhost    Database: panda_sim
-- ------------------------------------------------------
-- Server version	8.0.23

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
INSERT INTO `fm` VALUES ('fm_0',49.998),('fm_1',50.0036),('fm_2',50.0027),('fm_3',49.9958);
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
INSERT INTO `line_cb` VALUES ('line_cb_0',1),('line_cb_1',1),('line_cb_10',1),('line_cb_11',1),('line_cb_12',1),('line_cb_13',1),('line_cb_14',1),('line_cb_15',1),('line_cb_16',0),('line_cb_17',1),('line_cb_2',1),('line_cb_3',1),('line_cb_4',1),('line_cb_5',1),('line_cb_6',1),('line_cb_7',1),('line_cb_8',1),('line_cb_9',1);
/*!40000 ALTER TABLE `line_cb` ENABLE KEYS */;
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
INSERT INTO `line_load_percent` VALUES ('line_load_percent_0',0.330839),('line_load_percent_1',0.107776),('line_load_percent_10',0.199824),('line_load_percent_11',1.22765),('line_load_percent_12',2.67353),('line_load_percent_13',5.91669),('line_load_percent_14',0.00357806),('line_load_percent_15',1.22765),('line_load_percent_16',2.67353),('line_load_percent_17',5.91669),('line_load_percent_18',0.00357806),('line_load_percent_19',0.98213),('line_load_percent_2',0.142904),('line_load_percent_20',2.13885),('line_load_percent_21',4.73332),('line_load_percent_22',0.00417447),('line_load_percent_23',1.34561),('line_load_percent_24',2.09187),('line_load_percent_25',0.330809),('line_load_percent_26',0.107776),('line_load_percent_27',0.142904),('line_load_percent_28',0.0328053),('line_load_percent_29',0.222235),('line_load_percent_3',0.0328053),('line_load_percent_30',0.107776),('line_load_percent_31',0.142904),('line_load_percent_32',0.0328053),('line_load_percent_33',0.222235),('line_load_percent_34',0.198958),('line_load_percent_35',0.245674),('line_load_percent_36',0.534979),('line_load_percent_37',1.18334),('line_load_percent_38',0.00298212),('line_load_percent_39',0.245674),('line_load_percent_4',0.222235),('line_load_percent_40',0.534979),('line_load_percent_41',1.18334),('line_load_percent_42',0.00298212),('line_load_percent_43',0.245674),('line_load_percent_44',0.534979),('line_load_percent_45',1.18334),('line_load_percent_46',0.00298212),('line_load_percent_47',2.08233),('line_load_percent_48',2.62884),('line_load_percent_49',2.62861),('line_load_percent_5',0.107776),('line_load_percent_6',0.142904),('line_load_percent_7',0.0328053),('line_load_percent_8',0.222235),('line_load_percent_9',0.00313905);
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
INSERT INTO `line_loading` VALUES ('line_loading_0',0.164009),('line_loading_1',-0.015),('line_loading_10',-0.134295),('line_loading_11',-0.075012),('line_loading_12',-0.0750087),('line_loading_13',0.0750087),('line_loading_14',0),('line_loading_15',-0.075012),('line_loading_16',-0.0750087),('line_loading_17',0.0750087),('line_loading_18',2.64698e-23),('line_loading_19',-0.0600086),('line_loading_2',0.015),('line_loading_20',-0.0600065),('line_loading_21',0.0600065),('line_loading_22',0),('line_loading_23',0.0822228),('line_loading_24',-0.12781),('line_loading_25',0.163994),('line_loading_26',-0.015),('line_loading_27',0.015),('line_loading_28',-6.61744e-24),('line_loading_29',-0.015),('line_loading_3',0),('line_loading_30',-0.015),('line_loading_31',0.015),('line_loading_32',-6.61744e-24),('line_loading_33',-0.015),('line_loading_34',0.133708),('line_loading_35',-0.0150004),('line_loading_36',-0.0150003),('line_loading_37',0.0150003),('line_loading_38',0),('line_loading_39',-0.0150004),('line_loading_4',0.015),('line_loading_40',-0.0150003),('line_loading_41',0.0150003),('line_loading_42',0),('line_loading_43',-0.0150004),('line_loading_44',-0.0150003),('line_loading_45',0.0150003),('line_loading_46',0),('line_loading_47',-0.127224),('line_loading_48',0.16401),('line_loading_49',0.163994),('line_loading_5',-0.015),('line_loading_6',0.015),('line_loading_7',0),('line_loading_8',0.015),('line_loading_9',0.000285401);
/*!40000 ALTER TABLE `line_loading` ENABLE KEYS */;
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
INSERT INTO `loads` VALUES ('loads_0',0.015),('loads_1',0.015),('loads_10',0),('loads_11',0),('loads_12',0),('loads_13',0),('loads_14',0),('loads_15',0),('loads_16',0),('loads_17',0),('loads_18',0),('loads_19',0),('loads_2',0.075),('loads_20',0),('loads_21',0),('loads_22',0),('loads_23',0),('loads_24',0),('loads_25',0),('loads_26',0),('loads_27',0),('loads_28',0),('loads_29',0),('loads_3',0.075),('loads_30',0),('loads_31',0),('loads_32',0),('loads_33',0),('loads_34',0),('loads_35',0),('loads_36',0),('loads_37',0),('loads_38',0),('loads_39',0),('loads_4',0.06),('loads_40',0),('loads_41',0),('loads_42',0),('loads_43',0),('loads_44',0),('loads_45',0),('loads_46',0),('loads_47',0),('loads_48',0),('loads_49',0),('loads_5',0.015),('loads_6',0.015),('loads_7',0.015),('loads_8',0.015),('loads_9',0.015);
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
INSERT INTO `transformer_temp` VALUES ('transformer_temp_0',40.3853),('transformer_temp_1',39.0234);
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

-- Dump completed on 2021-04-26 17:27:11
