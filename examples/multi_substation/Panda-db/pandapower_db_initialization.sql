-- MySQL dump 10.13  Distrib 8.0.33, for Linux (x86_64)
--
-- Host: localhost    Database: pandapower_adsc_ms_db
-- ------------------------------------------------------
-- Server version	8.0.33-0ubuntu0.20.04.2

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
INSERT INTO `bus_voltage` VALUES ('bus_voltage_0',0.999851),('bus_voltage_1',0.999872),('bus_voltage_10',0.999972),('bus_voltage_11',0.999851),('bus_voltage_12',0.999871),('bus_voltage_13',0.999831),('bus_voltage_14',0.999851),('bus_voltage_15',0.999952),('bus_voltage_16',0.999681),('bus_voltage_17',0.999491),('bus_voltage_18',0.999653),('bus_voltage_19',0.999972),('bus_voltage_2',0.999831),('bus_voltage_20',0.999972),('bus_voltage_21',0.999972),('bus_voltage_22',0.999972),('bus_voltage_23',0.99971),('bus_voltage_24',0.999548),('bus_voltage_25',0.99971),('bus_voltage_26',1),('bus_voltage_27',1),('bus_voltage_28',0.999849),('bus_voltage_29',0.999869),('bus_voltage_3',0.999851),('bus_voltage_30',0.999829),('bus_voltage_31',0.999849),('bus_voltage_32',0.99995),('bus_voltage_33',0.99997),('bus_voltage_34',0.99997),('bus_voltage_35',0.999849),('bus_voltage_36',0.999869),('bus_voltage_37',0.999829),('bus_voltage_38',0.999849),('bus_voltage_39',0.99995),('bus_voltage_4',0.999952),('bus_voltage_40',0.999707),('bus_voltage_41',0.999545),('bus_voltage_42',0.999707),('bus_voltage_43',0.999835),('bus_voltage_44',0.999545),('bus_voltage_45',0.999707),('bus_voltage_46',0.999849),('bus_voltage_47',0.999869),('bus_voltage_48',0.999829),('bus_voltage_49',0.999849),('bus_voltage_5',0.999981),('bus_voltage_50',0.99995),('bus_voltage_51',0.99997),('bus_voltage_52',0.99997),('bus_voltage_53',0.999849),('bus_voltage_54',0.999869),('bus_voltage_55',0.999829),('bus_voltage_56',0.999849),('bus_voltage_57',0.99995),('bus_voltage_58',0.999707),('bus_voltage_59',0.999545),('bus_voltage_6',0.999974),('bus_voltage_60',0.999707),('bus_voltage_61',0.999835),('bus_voltage_62',0.999545),('bus_voltage_63',0.999707),('bus_voltage_7',0.999972),('bus_voltage_8',0.999981),('bus_voltage_9',0.999974);
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
INSERT INTO `fm` VALUES ('fm_0',49.9975),('fm_1',49.9901),('fm_2',49.9945),('fm_3',50.0022);
/*!40000 ALTER TABLE `fm` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `line_apparent_power`
--

DROP TABLE IF EXISTS `line_apparent_power`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `line_apparent_power` (
  `NAME` varchar(255) DEFAULT NULL,
  `VALUE` float DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `line_apparent_power`
--

LOCK TABLES `line_apparent_power` WRITE;
/*!40000 ALTER TABLE `line_apparent_power` DISABLE KEYS */;
/*!40000 ALTER TABLE `line_apparent_power` ENABLE KEYS */;
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
INSERT INTO `line_cb` VALUES ('line_cb_0',1),('line_cb_1',1),('line_cb_10',1),('line_cb_11',1),('line_cb_12',1),('line_cb_13',1),('line_cb_14',1),('line_cb_15',1),('line_cb_16',1),('line_cb_17',1),('line_cb_18',1),('line_cb_19',1),('line_cb_2',1),('line_cb_20',1),('line_cb_21',0),('line_cb_22',1),('line_cb_23',0),('line_cb_24',1),('line_cb_25',1),('line_cb_26',1),('line_cb_27',1),('line_cb_28',1),('line_cb_29',1),('line_cb_3',0),('line_cb_30',1),('line_cb_31',1),('line_cb_32',1),('line_cb_33',0),('line_cb_34',1),('line_cb_35',0),('line_cb_36',1),('line_cb_37',1),('line_cb_38',1),('line_cb_39',1),('line_cb_4',1),('line_cb_40',1),('line_cb_41',1),('line_cb_5',1),('line_cb_6',1),('line_cb_7',1),('line_cb_8',0),('line_cb_9',1);
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
INSERT INTO `line_current` VALUES ('line_current_0',0.0525031),('line_current_1',0.0525031),('line_current_10',0.0350055),('line_current_11',0.000109173),('line_current_12',0.0350058),('line_current_13',0.105012),('line_current_14',0.0350035),('line_current_15',0.0350035),('line_current_16',0.0350041),('line_current_17',0.0525016),('line_current_18',0.0525016),('line_current_19',0.10502),('line_current_2',0.105026),('line_current_20',0.10502),('line_current_21',0.0525016),('line_current_22',0.0525016),('line_current_23',0.210024),('line_current_24',0.105018),('line_current_25',0.105012),('line_current_26',0.0525018),('line_current_27',0.0525018),('line_current_28',0.105021),('line_current_29',0.105021),('line_current_3',0.105026),('line_current_30',0.0525018),('line_current_31',0.0525018),('line_current_32',0.0000181937),('line_current_33',0.210024),('line_current_34',0.000109173),('line_current_35',0.0350042),('line_current_36',0.035003),('line_current_37',0.0524951),('line_current_38',0.0524951),('line_current_39',0.105021),('line_current_4',0.0525046),('line_current_40',0.105021),('line_current_41',0.0525018),('line_current_42',0.0525018),('line_current_43',0.210017),('line_current_44',0.0525018),('line_current_45',0.0525018),('line_current_46',0.105021),('line_current_47',0.105021),('line_current_48',0.0525018),('line_current_49',0.0525018),('line_current_5',0.0525046),('line_current_50',0.0000181937),('line_current_51',0.210024),('line_current_52',0.000109173),('line_current_53',0.0350042),('line_current_54',0.035003),('line_current_55',0.0524951),('line_current_56',0.0524951),('line_current_57',0.105021),('line_current_58',0.105021),('line_current_59',0.0525018),('line_current_6',0.0000181937),('line_current_60',0.0525018),('line_current_61',0.210017),('line_current_7',0.210034),('line_current_8',0.105018),('line_current_9',0.0350055);
/*!40000 ALTER TABLE `line_current` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `line_frequency`
--

DROP TABLE IF EXISTS `line_frequency`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `line_frequency` (
  `NAME` varchar(255) DEFAULT NULL,
  `VALUE` float DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `line_frequency`
--

LOCK TABLES `line_frequency` WRITE;
/*!40000 ALTER TABLE `line_frequency` DISABLE KEYS */;
/*!40000 ALTER TABLE `line_frequency` ENABLE KEYS */;
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
INSERT INTO `line_load_percent` VALUES ('line_load_percent_0',12.6209),('line_load_percent_1',24.7656),('line_load_percent_10',8.41478),('line_load_percent_11',0.0262436),('line_load_percent_12',8.41486),('line_load_percent_13',25.2432),('line_load_percent_14',8.4143),('line_load_percent_15',8.4143),('line_load_percent_16',8.41444),('line_load_percent_17',12.6206),('line_load_percent_18',24.7649),('line_load_percent_19',25.2453),('line_load_percent_2',25.2467),('line_load_percent_20',49.5379),('line_load_percent_21',12.6206),('line_load_percent_22',24.7649),('line_load_percent_23',50.4864),('line_load_percent_24',49.5368),('line_load_percent_25',49.5338),('line_load_percent_26',12.6206),('line_load_percent_27',24.765),('line_load_percent_28',25.2453),('line_load_percent_29',49.538),('line_load_percent_3',49.5407),('line_load_percent_30',12.6206),('line_load_percent_31',24.765),('line_load_percent_32',0.00437348),('line_load_percent_33',50.4865),('line_load_percent_34',0.0262436),('line_load_percent_35',8.41446),('line_load_percent_36',8.41419),('line_load_percent_37',12.619),('line_load_percent_38',24.7618),('line_load_percent_39',25.2453),('line_load_percent_4',12.6213),('line_load_percent_40',49.538),('line_load_percent_41',12.6206),('line_load_percent_42',24.765),('line_load_percent_43',50.4849),('line_load_percent_44',12.6206),('line_load_percent_45',24.765),('line_load_percent_46',25.2453),('line_load_percent_47',49.538),('line_load_percent_48',12.6206),('line_load_percent_49',24.765),('line_load_percent_5',24.7663),('line_load_percent_50',0.00437348),('line_load_percent_51',50.4865),('line_load_percent_52',0.0262436),('line_load_percent_53',8.41446),('line_load_percent_54',8.41419),('line_load_percent_55',12.619),('line_load_percent_56',24.7618),('line_load_percent_57',25.2453),('line_load_percent_58',49.538),('line_load_percent_59',12.6206),('line_load_percent_6',0.00437348),('line_load_percent_60',24.765),('line_load_percent_61',50.4849),('line_load_percent_7',50.4889),('line_load_percent_8',25.2447),('line_load_percent_9',8.41478);
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
INSERT INTO `line_loading` VALUES ('line_loading_0',-1.00017),('line_loading_1',1.00017),('line_loading_10',4.00139),('line_loading_11',0.00000000000000119506),('line_loading_12',-4.00157),('line_loading_13',12.004),('line_loading_14',4.00127),('line_loading_15',-4.00126),('line_loading_16',4.00138),('line_loading_17',-1.00014),('line_loading_18',1.00014),('line_loading_19',-2.00057),('line_loading_2',-2.00068),('line_loading_20',2.00057),('line_loading_21',-1.00014),('line_loading_22',1.00014),('line_loading_23',-4.00097),('line_loading_24',12.0047),('line_loading_25',12.0042),('line_loading_26',-1.00014),('line_loading_27',1.00014),('line_loading_28',-2.00057),('line_loading_29',2.00057),('line_loading_3',2.00068),('line_loading_30',-1.00014),('line_loading_31',1.00014),('line_loading_32',0.00000000000363811),('line_loading_33',-4.00097),('line_loading_34',0),('line_loading_35',-4.00138),('line_loading_36',4.00126),('line_loading_37',-1.00001),('line_loading_38',1.00001),('line_loading_39',-2.00057),('line_loading_4',-1.0002),('line_loading_40',2.00057),('line_loading_41',-1.00014),('line_loading_42',1.00014),('line_loading_43',-4.00084),('line_loading_44',-1.00014),('line_loading_45',1.00014),('line_loading_46',-2.00057),('line_loading_47',2.00057),('line_loading_48',-1.00014),('line_loading_49',1.00014),('line_loading_5',1.0002),('line_loading_50',0.00000000000363811),('line_loading_51',-4.00097),('line_loading_52',0),('line_loading_53',-4.00138),('line_loading_54',4.00126),('line_loading_55',-1.00001),('line_loading_56',1.00001),('line_loading_57',-2.00057),('line_loading_58',2.00057),('line_loading_59',-1.00014),('line_loading_6',0.00000000000363751),('line_loading_60',1.00014),('line_loading_61',-4.00084),('line_loading_7',-4.00117),('line_loading_8',12.0044),('line_loading_9',-4.00138);
/*!40000 ALTER TABLE `line_loading` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `line_p2p_voltage`
--

DROP TABLE IF EXISTS `line_p2p_voltage`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `line_p2p_voltage` (
  `NAME` varchar(255) DEFAULT NULL,
  `VALUE` float DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `line_p2p_voltage`
--

LOCK TABLES `line_p2p_voltage` WRITE;
/*!40000 ALTER TABLE `line_p2p_voltage` DISABLE KEYS */;
/*!40000 ALTER TABLE `line_p2p_voltage` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `line_power_factor`
--

DROP TABLE IF EXISTS `line_power_factor`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `line_power_factor` (
  `NAME` varchar(255) DEFAULT NULL,
  `VALUE` float DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `line_power_factor`
--

LOCK TABLES `line_power_factor` WRITE;
/*!40000 ALTER TABLE `line_power_factor` DISABLE KEYS */;
/*!40000 ALTER TABLE `line_power_factor` ENABLE KEYS */;
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
INSERT INTO `line_reactive_power` VALUES ('line_reactive_power_0',-0.0000377229),('line_reactive_power_1',0.0000377229),('line_reactive_power_10',-0.0365852),('line_reactive_power_11',0.000000000116412),('line_reactive_power_12',-0.00088317),('line_reactive_power_13',-0.0712713),('line_reactive_power_14',-0.0237871),('line_reactive_power_15',0.0113149),('line_reactive_power_16',-0.0112867),('line_reactive_power_17',-0.0000314339),('line_reactive_power_18',0.0000314339),('line_reactive_power_19',-0.000126985),('line_reactive_power_2',-0.0001524),('line_reactive_power_20',0.000126985),('line_reactive_power_21',-0.0000314339),('line_reactive_power_22',0.0000314339),('line_reactive_power_23',0.00074568),('line_reactive_power_24',-0.109605),('line_reactive_power_25',-0.0712262),('line_reactive_power_26',-0.0000314341),('line_reactive_power_27',0.0000314341),('line_reactive_power_28',-0.000126986),('line_reactive_power_29',0.000126986),('line_reactive_power_3',0.0001524),('line_reactive_power_30',-0.0000314341),('line_reactive_power_31',0.0000314341),('line_reactive_power_32',0.0000000000072747),('line_reactive_power_33',0.00109226),('line_reactive_power_34',0),('line_reactive_power_35',-0.000838851),('line_reactive_power_36',-0.0113149),('line_reactive_power_37',-0.0000031426),('line_reactive_power_38',0.00000314259),('line_reactive_power_39',-0.000126986),('line_reactive_power_4',-0.0000440126),('line_reactive_power_40',0.000126986),('line_reactive_power_41',-0.0000314341),('line_reactive_power_42',0.0000314341),('line_reactive_power_43',0.00077397),('line_reactive_power_44',-0.0000314341),('line_reactive_power_45',0.0000314341),('line_reactive_power_46',-0.000126986),('line_reactive_power_47',0.000126986),('line_reactive_power_48',-0.0000314341),('line_reactive_power_49',0.0000314341),('line_reactive_power_5',0.0000440126),('line_reactive_power_50',0.0000000000072747),('line_reactive_power_51',0.00109226),('line_reactive_power_52',0),('line_reactive_power_53',-0.000838851),('line_reactive_power_54',-0.0113149),('line_reactive_power_55',-0.0000031426),('line_reactive_power_56',0.00000314259),('line_reactive_power_57',-0.000126986),('line_reactive_power_58',0.000126986),('line_reactive_power_59',-0.0000314341),('line_reactive_power_6',-2.97102e-16),('line_reactive_power_60',0.0000314341),('line_reactive_power_61',0.00077397),('line_reactive_power_7',0.00104798),('line_reactive_power_8',-0.10965),('line_reactive_power_9',0.024113);
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
INSERT INTO `line_reactive_power2` VALUES ('line_reactive_power2_0',-0.000291496),('line_reactive_power2_1',-0.0000000000109017),('line_reactive_power2_10',0.024113),('line_reactive_power2_11',-0.0124799),('line_reactive_power2_12',-0.011589),('line_reactive_power2_13',0.0588609),('line_reactive_power2_14',0.0113149),('line_reactive_power2_15',-0.0237871),('line_reactive_power2_16',-0.00118544),('line_reactive_power2_17',-0.000297786),('line_reactive_power2_18',-0.00000000000894529),('line_reactive_power2_19',-0.000150108),('line_reactive_power2_2',-0.000124686),('line_reactive_power2_20',-0.0000000000338677),('line_reactive_power2_21',-0.000297786),('line_reactive_power2_22',-0.00000000000894529),('line_reactive_power2_23',-0.000814407),('line_reactive_power2_24',0.10965),('line_reactive_power2_25',0.0712713),('line_reactive_power2_26',-0.000297784),('line_reactive_power2_27',-0.00000000000948226),('line_reactive_power2_28',-0.000150106),('line_reactive_power2_29',-0.0000000000351641),('line_reactive_power2_3',-0.000000000041458),('line_reactive_power2_30',-0.000297784),('line_reactive_power2_31',-0.00000000000948226),('line_reactive_power2_32',-0.00034659),('line_reactive_power2_33',-0.00116099),('line_reactive_power2_34',-0.0124798),('line_reactive_power2_35',-0.0116332),('line_reactive_power2_36',-0.00115713),('line_reactive_power2_37',-0.00032608),('line_reactive_power2_38',-0.00000000000452368),('line_reactive_power2_39',-0.000150106),('line_reactive_power2_4',-0.000285205),('line_reactive_power2_40',-0.0000000000333609),('line_reactive_power2_41',-0.000297784),('line_reactive_power2_42',-0.00000000000879568),('line_reactive_power2_43',-0.000842712),('line_reactive_power2_44',-0.000297784),('line_reactive_power2_45',-0.00000000000948226),('line_reactive_power2_46',-0.000150106),('line_reactive_power2_47',-0.0000000000351641),('line_reactive_power2_48',-0.000297784),('line_reactive_power2_49',-0.00000000000948226),('line_reactive_power2_5',-0.0000000000109865),('line_reactive_power2_50',-0.00034659),('line_reactive_power2_51',-0.00116099),('line_reactive_power2_52',-0.0124798),('line_reactive_power2_53',-0.0116332),('line_reactive_power2_54',-0.00115713),('line_reactive_power2_55',-0.00032608),('line_reactive_power2_56',-0.00000000000452368),('line_reactive_power2_57',-0.000150106),('line_reactive_power2_58',-0.0000000000333609),('line_reactive_power2_59',-0.000297784),('line_reactive_power2_6',-0.000346592),('line_reactive_power2_60',-0.00000000000879568),('line_reactive_power2_61',-0.000842712),('line_reactive_power2_7',-0.00111668),('line_reactive_power2_8',0.0972392),('line_reactive_power2_9',-0.0365852);
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
INSERT INTO `line_real_power` VALUES ('line_real_power_0',-1.00017),('line_real_power_1',1.00017),('line_real_power_10',4.00139),('line_real_power_11',0.00000000000000119506),('line_real_power_12',-4.00157),('line_real_power_13',12.004),('line_real_power_14',4.00127),('line_real_power_15',-4.00126),('line_real_power_16',4.00138),('line_real_power_17',-1.00014),('line_real_power_18',1.00014),('line_real_power_19',-2.00057),('line_real_power_2',-2.00068),('line_real_power_20',2.00057),('line_real_power_21',-1.00014),('line_real_power_22',1.00014),('line_real_power_23',-4.00097),('line_real_power_24',12.0047),('line_real_power_25',12.0042),('line_real_power_26',-1.00014),('line_real_power_27',1.00014),('line_real_power_28',-2.00057),('line_real_power_29',2.00057),('line_real_power_3',2.00068),('line_real_power_30',-1.00014),('line_real_power_31',1.00014),('line_real_power_32',0.00000000000363811),('line_real_power_33',-4.00097),('line_real_power_34',0),('line_real_power_35',-4.00138),('line_real_power_36',4.00126),('line_real_power_37',-1.00001),('line_real_power_38',1.00001),('line_real_power_39',-2.00057),('line_real_power_4',-1.0002),('line_real_power_40',2.00057),('line_real_power_41',-1.00014),('line_real_power_42',1.00014),('line_real_power_43',-4.00084),('line_real_power_44',-1.00014),('line_real_power_45',1.00014),('line_real_power_46',-2.00057),('line_real_power_47',2.00057),('line_real_power_48',-1.00014),('line_real_power_49',1.00014),('line_real_power_5',1.0002),('line_real_power_50',0.00000000000363811),('line_real_power_51',-4.00097),('line_real_power_52',0),('line_real_power_53',-4.00138),('line_real_power_54',4.00126),('line_real_power_55',-1.00001),('line_real_power_56',1.00001),('line_real_power_57',-2.00057),('line_real_power_58',2.00057),('line_real_power_59',-1.00014),('line_real_power_6',0.00000000000363751),('line_real_power_60',1.00014),('line_real_power_61',-4.00084),('line_real_power_7',-4.00117),('line_real_power_8',12.0044),('line_real_power_9',-4.00138);
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
INSERT INTO `line_real_power2` VALUES ('line_real_power2_0',1.00019),('line_real_power2_1',-1),('line_real_power2_10',-4.00138),('line_real_power2_11',-0.0000000000176789),('line_real_power2_12',4.00158),('line_real_power2_13',-12.0039),('line_real_power2_14',-4.00126),('line_real_power2_15',4.00127),('line_real_power2_16',-4.00138),('line_real_power2_17',1.00016),('line_real_power2_18',-1),('line_real_power2_19',2.00065),('line_real_power2_2',2.00076),('line_real_power2_20',-2),('line_real_power2_21',1.00016),('line_real_power2_22',-1),('line_real_power2_23',4.0013),('line_real_power2_24',-12.0044),('line_real_power2_25',-12.004),('line_real_power2_26',1.00016),('line_real_power2_27',-1),('line_real_power2_28',2.00065),('line_real_power2_29',-2),('line_real_power2_3',-2),('line_real_power2_30',1.00016),('line_real_power2_31',-1),('line_real_power2_32',-0.00000000000477108),('line_real_power2_33',4.0013),('line_real_power2_34',0.0000000000251512),('line_real_power2_35',4.00138),('line_real_power2_36',-4.00125),('line_real_power2_37',1.00003),('line_real_power2_38',-1),('line_real_power2_39',2.00065),('line_real_power2_4',1.00022),('line_real_power2_40',-2),('line_real_power2_41',1.00016),('line_real_power2_42',-1),('line_real_power2_43',4.00117),('line_real_power2_44',1.00016),('line_real_power2_45',-1),('line_real_power2_46',2.00065),('line_real_power2_47',-2),('line_real_power2_48',1.00016),('line_real_power2_49',-1),('line_real_power2_5',-1),('line_real_power2_50',-0.00000000000477108),('line_real_power2_51',4.0013),('line_real_power2_52',0.0000000000251512),('line_real_power2_53',4.00138),('line_real_power2_54',-4.00125),('line_real_power2_55',1.00003),('line_real_power2_56',-1),('line_real_power2_57',2.00065),('line_real_power2_58',-2),('line_real_power2_59',1.00016),('line_real_power2_6',-0.00000000000034119),('line_real_power2_60',-1),('line_real_power2_61',4.00117),('line_real_power2_7',4.00149),('line_real_power2_8',-12.0044),('line_real_power2_9',4.00139);
/*!40000 ALTER TABLE `line_real_power2` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `load_reactive_power`
--

DROP TABLE IF EXISTS `load_reactive_power`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `load_reactive_power` (
  `NAME` varchar(255) DEFAULT NULL,
  `VALUE` float DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `load_reactive_power`
--

LOCK TABLES `load_reactive_power` WRITE;
/*!40000 ALTER TABLE `load_reactive_power` DISABLE KEYS */;
/*!40000 ALTER TABLE `load_reactive_power` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `load_real_power`
--

DROP TABLE IF EXISTS `load_real_power`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!50503 SET character_set_client = utf8mb4 */;
CREATE TABLE `load_real_power` (
  `NAME` varchar(255) DEFAULT NULL,
  `VALUE` float DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `load_real_power`
--

LOCK TABLES `load_real_power` WRITE;
/*!40000 ALTER TABLE `load_real_power` DISABLE KEYS */;
/*!40000 ALTER TABLE `load_real_power` ENABLE KEYS */;
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
INSERT INTO `loads` VALUES ('loads_0',1),('loads_1',2),('loads_10',2),('loads_11',1),('loads_12',1),('loads_13',2),('loads_14',1),('loads_15',1),('loads_16',2),('loads_17',1),('loads_18',0),('loads_19',0),('loads_2',1),('loads_20',0),('loads_21',0),('loads_22',0),('loads_23',0),('loads_24',0),('loads_25',0),('loads_26',0),('loads_27',0),('loads_28',0),('loads_29',0),('loads_3',1),('loads_30',0),('loads_31',0),('loads_32',0),('loads_33',0),('loads_34',0),('loads_35',0),('loads_36',0),('loads_37',0),('loads_38',0),('loads_39',0),('loads_4',2),('loads_40',0),('loads_41',0),('loads_42',0),('loads_43',0),('loads_44',0),('loads_45',0),('loads_46',0),('loads_47',0),('loads_48',0),('loads_49',0),('loads_5',1),('loads_50',0),('loads_51',0),('loads_52',0),('loads_53',0),('loads_54',0),('loads_55',0),('loads_56',0),('loads_57',0),('loads_58',0),('loads_59',0),('loads_6',1),('loads_60',0),('loads_61',0),('loads_7',2),('loads_8',1),('loads_9',1);
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
INSERT INTO `transformer_pressure` VALUES ('transformer_pressure_0',47),('transformer_pressure_1',47),('transformer_pressure_10',47),('transformer_pressure_11',47),('transformer_pressure_2',47),('transformer_pressure_3',47),('transformer_pressure_4',47),('transformer_pressure_5',47),('transformer_pressure_6',47),('transformer_pressure_7',47),('transformer_pressure_8',47),('transformer_pressure_9',47);
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
INSERT INTO `transformer_temp` VALUES ('transformer_temp_0',32.6439),('transformer_temp_1',32.3284),('transformer_temp_10',32.917),('transformer_temp_11',32.8332),('transformer_temp_2',32.0317),('transformer_temp_3',31.2781),('transformer_temp_4',31.0279),('transformer_temp_5',31.6739),('transformer_temp_6',31.3746),('transformer_temp_7',31.4189),('transformer_temp_8',32.5267),('transformer_temp_9',31.1508);
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

-- Dump completed on 2023-06-25 16:40:11
