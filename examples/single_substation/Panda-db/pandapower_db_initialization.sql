-- MySQL dump 10.13  Distrib 8.0.33, for Linux (x86_64)
--
-- Host: localhost    Database: pandapower_db
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
INSERT INTO `bus_voltage` VALUES ('bus_voltage_0',0.993865),('bus_voltage_1',0.992397),('bus_voltage_10',0),('bus_voltage_11',0.994019),('bus_voltage_12',0),('bus_voltage_13',0.993685),('bus_voltage_14',0.993234),('bus_voltage_15',0),('bus_voltage_16',0.992166),('bus_voltage_17',0.987747),('bus_voltage_18',0),('bus_voltage_19',0.991922),('bus_voltage_2',0),('bus_voltage_20',0.964632),('bus_voltage_21',0),('bus_voltage_22',0.991933),('bus_voltage_23',0.987373),('bus_voltage_24',0),('bus_voltage_25',0.9921),('bus_voltage_26',0.990705),('bus_voltage_27',0),('bus_voltage_28',1),('bus_voltage_29',0.99445),('bus_voltage_3',0),('bus_voltage_4',0),('bus_voltage_5',0),('bus_voltage_6',0.993685),('bus_voltage_7',0.993234),('bus_voltage_8',0),('bus_voltage_9',0.995542);
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
INSERT INTO `fm` VALUES ('fm_0',50.0038),('fm_1',49.9937),('fm_2',50.0054),('fm_3',49.9944);
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
INSERT INTO `line_apparent_power` VALUES ('line_apparent_power_17',0.00999556),('line_apparent_power_0',0.010198);
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
INSERT INTO `line_cb` VALUES ('line_cb_0',1),('line_cb_1',1),('line_cb_10',1),('line_cb_2',1),('line_cb_3',1),('line_cb_4',1),('line_cb_5',0),('line_cb_6',0),('line_cb_7',1),('line_cb_8',1),('line_cb_9',1);
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
INSERT INTO `line_current` VALUES ('line_current_0',0.0148199),('line_current_1',0.0148199),('line_current_10',0.0219192),('line_current_11',0.0448889),('line_current_12',0.0448889),('line_current_13',0.043855),('line_current_14',0.043855),('line_current_15',0.0230359),('line_current_16',0.0230359),('line_current_17',0.147666),('line_current_18',0.0145143),('line_current_2',0.147666),('line_current_3',0.0145143),('line_current_4',0.0148199),('line_current_5',0.0148199),('line_current_6',0.132725),('line_current_7',0),('line_current_8',0),('line_current_9',0.0219192);
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
INSERT INTO `line_frequency` VALUES ('line_frequency_1',50.453),('line_frequency_2',50.829);
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
INSERT INTO `line_load_percent` VALUES ('line_load_percent_0',6.9905),('line_load_percent_1',3.56247),('line_load_percent_10',5.26904),('line_load_percent_11',60.6607),('line_load_percent_12',10.7906),('line_load_percent_13',20.6863),('line_load_percent_14',10.5421),('line_load_percent_15',10.866),('line_load_percent_16',5.53748),('line_load_percent_17',69.6536),('line_load_percent_18',6.84637),('line_load_percent_19',25.362),('line_load_percent_2',35.4966),('line_load_percent_20',86.4803),('line_load_percent_21',12.6758),('line_load_percent_22',43.2224),('line_load_percent_23',50.7066),('line_load_percent_24',141.627),('line_load_percent_25',143.485),('line_load_percent_26',12.6758),('line_load_percent_27',43.2225),('line_load_percent_28',25.362),('line_load_percent_29',86.4804),('line_load_percent_3',3.48902),('line_load_percent_30',12.6758),('line_load_percent_31',43.2225),('line_load_percent_32',0.00605806),('line_load_percent_33',50.7172),('line_load_percent_34',2.0714),('line_load_percent_35',8.45292),('line_load_percent_36',8.45175),('line_load_percent_37',12.6758),('line_load_percent_38',43.2225),('line_load_percent_39',25.362),('line_load_percent_4',6.9905),('line_load_percent_40',86.4804),('line_load_percent_41',12.6758),('line_load_percent_42',43.2225),('line_load_percent_43',50.7103),('line_load_percent_44',12.6759),('line_load_percent_45',43.2227),('line_load_percent_46',25.3622),('line_load_percent_47',86.4808),('line_load_percent_48',12.6759),('line_load_percent_49',43.2227),('line_load_percent_5',3.56247),('line_load_percent_50',0.019626),('line_load_percent_51',50.6999),('line_load_percent_52',8.45015),('line_load_percent_53',8.45003),('line_load_percent_54',8.45471),('line_load_percent_55',12.6759),('line_load_percent_56',43.2227),('line_load_percent_57',25.3622),('line_load_percent_58',86.4808),('line_load_percent_59',12.6759),('line_load_percent_6',31.9049),('line_load_percent_60',43.2227),('line_load_percent_61',50.728),('line_load_percent_62',0.0686041),('line_load_percent_63',0.110194),('line_load_percent_64',0.0621938),('line_load_percent_65',0.110191),('line_load_percent_66',0.346991),('line_load_percent_67',1.18315),('line_load_percent_68',0.346991),('line_load_percent_69',1.18315),('line_load_percent_7',0),('line_load_percent_70',0.346991),('line_load_percent_71',1.18315),('line_load_percent_72',1.04098),('line_load_percent_8',0),('line_load_percent_9',17.9666);
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
INSERT INTO `line_loading` VALUES ('line_loading_0',-0.01),('line_loading_1',-0.0100045),('line_loading_10',0.0150706),('line_loading_11',0.0308487),('line_loading_12',0.0308635),('line_loading_13',0.0301385),('line_loading_14',0.0301526),('line_loading_15',0.0150218),('line_loading_16',0.0150257),('line_loading_17',0.101868),('line_loading_18',-0.00999566),('line_loading_19',-2.00155),('line_loading_2',0.101419),('line_loading_20',2.00155),('line_loading_21',-1.00039),('line_loading_22',1.00039),('line_loading_23',-4.0019),('line_loading_24',11.9806),('line_loading_25',12.1369),('line_loading_26',-1.00039),('line_loading_27',1.00039),('line_loading_28',-2.00155),('line_loading_29',2.00155),('line_loading_3',0.00999566),('line_loading_30',-1.00039),('line_loading_31',1.00039),('line_loading_32',-0.000274325),('line_loading_33',-4.00273),('line_loading_34',-0.984794),('line_loading_35',-4.01921),('line_loading_36',4.01867),('line_loading_37',-1.00039),('line_loading_38',1.00039),('line_loading_39',-2.00155),('line_loading_4',-0.01),('line_loading_40',2.00155),('line_loading_41',-1.00039),('line_loading_42',1.00039),('line_loading_43',-4.00218),('line_loading_44',-1.00039),('line_loading_45',1.00039),('line_loading_46',-2.00155),('line_loading_47',2.00155),('line_loading_48',-1.00039),('line_loading_49',1.00039),('line_loading_5',-0.0100045),('line_loading_50',0.00110622),('line_loading_51',-4.00135),('line_loading_52',4.01784),('line_loading_53',-4.01782),('line_loading_54',4.02006),('line_loading_55',-1.00039),('line_loading_56',1.00039),('line_loading_57',-2.00155),('line_loading_58',2.00155),('line_loading_59',-1.00039),('line_loading_6',0.0912414),('line_loading_60',1.00039),('line_loading_61',-4.00356),('line_loading_62',-0.0260467),('line_loading_63',-0.0514822),('line_loading_64',-0.0254337),('line_loading_65',0.0514804),('line_loading_66',0.0150003),('line_loading_67',0.0150003),('line_loading_68',0.0150003),('line_loading_69',0.0150003),('line_loading_7',0),('line_loading_70',0.0150003),('line_loading_71',0.0150003),('line_loading_72',-0.045),('line_loading_8',0),('line_loading_9',0.0150671);
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
INSERT INTO `line_p2p_voltage` VALUES ('line_voltage_phsAB_1',0.000413),('line_voltage_phsBC_1',0.000402),('line_voltage_phsCA_1',0.000403),('line_voltage_phsAB_2',0.0004025),('line_voltage_phsBC_2',0.0004021),('line_voltage_phsCA_2',0.0004031);
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
INSERT INTO `line_power_factor` VALUES ('line_power_factor_1',1),('line_power_factor_2',0.980581);
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
INSERT INTO `line_reactive_power` VALUES ('line_reactive_power_0',-0.002),('line_reactive_power_1',-0.00200101),('line_reactive_power_10',0.00000834059),('line_reactive_power_11',0.000030358),('line_reactive_power_12',0.0000426013),('line_reactive_power_13',0.0000310984),('line_reactive_power_14',0.0000427637),('line_reactive_power_15',0.0050049),('line_reactive_power_16',0.00500779),('line_reactive_power_17',0.00945542),('line_reactive_power_18',0.000000973063),('line_reactive_power_19',-0.000133348),('line_reactive_power_2',0.00935468),('line_reactive_power_20',0.000133348),('line_reactive_power_21',-0.0000331374),('line_reactive_power_22',0.0000331374),('line_reactive_power_23',0.000213585),('line_reactive_power_24',-0.0398978),('line_reactive_power_25',-0.152567),('line_reactive_power_26',-0.0000331375),('line_reactive_power_27',0.0000331375),('line_reactive_power_28',-0.000133349),('line_reactive_power_29',0.000133349),('line_reactive_power_3',-0.000000973063),('line_reactive_power_30',-0.0000331375),('line_reactive_power_31',0.0000331375),('line_reactive_power_32',0.0000478423),('line_reactive_power_33',0.00111801),('line_reactive_power_34',-0.0157406),('line_reactive_power_35',0.00117139),('line_reactive_power_36',-0.0132013),('line_reactive_power_37',-0.0000331375),('line_reactive_power_38',0.0000331375),('line_reactive_power_39',-0.000133349),('line_reactive_power_4',-0.002),('line_reactive_power_40',0.000133349),('line_reactive_power_41',-0.0000331375),('line_reactive_power_42',0.0000331375),('line_reactive_power_43',0.000678581),('line_reactive_power_44',-0.0000331378),('line_reactive_power_45',0.0000331378),('line_reactive_power_46',-0.00013335),('line_reactive_power_47',0.00013335),('line_reactive_power_48',-0.0000331378),('line_reactive_power_49',0.0000331378),('line_reactive_power_5',-0.00200101),('line_reactive_power_50',-0.00108418),('line_reactive_power_51',-0.0000140222),('line_reactive_power_52',-0.0249778),('line_reactive_power_53',0.0000395447),('line_reactive_power_54',-0.014333),('line_reactive_power_55',-0.0000331378),('line_reactive_power_56',0.0000331378),('line_reactive_power_57',-0.00013335),('line_reactive_power_58',0.00013335),('line_reactive_power_59',-0.0000331378),('line_reactive_power_6',0.00521203),('line_reactive_power_60',0.0000331378),('line_reactive_power_61',0.00181059),('line_reactive_power_62',0.00716499),('line_reactive_power_63',-0.00270083),('line_reactive_power_64',0.0026153),('line_reactive_power_65',-0.0097803),('line_reactive_power_66',-0.000103169),('line_reactive_power_67',-0.0000000439807),('line_reactive_power_68',-0.000103169),('line_reactive_power_69',-0.0000000439807),('line_reactive_power_7',0),('line_reactive_power_70',-0.000103169),('line_reactive_power_71',-0.0000000439807),('line_reactive_power_72',0.000361409),('line_reactive_power_8',0),('line_reactive_power_9',0.00000576512);
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
INSERT INTO `line_reactive_power2` VALUES ('line_reactive_power2_0',0.00200101),('line_reactive_power2_1',0.00200195),('line_reactive_power2_10',-0.00000576512),('line_reactive_power2_11',-0.0000000000000319715),('line_reactive_power2_12',-0.000030358),('line_reactive_power2_13',-0.00000000000000960842),('line_reactive_power2_14',-0.0000310984),('line_reactive_power2_15',-0.005),('line_reactive_power2_16',-0.0050049),('line_reactive_power2_17',-0.00935468),('line_reactive_power2_18',0.00000000000000234533),('line_reactive_power2_19',-0.000140257),('line_reactive_power2_2',-0.00921777),('line_reactive_power2_20',0.0000000000000165141),('line_reactive_power2_21',-0.000293086),('line_reactive_power2_22',-0.00000000000000141884),('line_reactive_power2_23',-0.00027704),('line_reactive_power2_24',0.0399509),('line_reactive_power2_25',0.152622),('line_reactive_power2_26',-0.000293084),('line_reactive_power2_27',0.0000000000000797594),('line_reactive_power2_28',-0.000140255),('line_reactive_power2_29',-0.00000000000000691141),('line_reactive_power2_3',0.00000184737),('line_reactive_power2_30',-0.000293084),('line_reactive_power2_31',0.0000000000000797595),('line_reactive_power2_32',-0.000391589),('line_reactive_power2_33',-0.00118135),('line_reactive_power2_34',0.00326396),('line_reactive_power2_35',-0.0136406),('line_reactive_power2_36',0.000732037),('line_reactive_power2_37',-0.000293084),('line_reactive_power2_38',0.0000000000000470717),('line_reactive_power2_39',-0.000140255),('line_reactive_power2_4',0.00200101),('line_reactive_power2_40',0.0000000000000102629),('line_reactive_power2_41',-0.000293084),('line_reactive_power2_42',0.0000000000000470719),('line_reactive_power2_43',-0.000741994),('line_reactive_power2_44',-0.000293081),('line_reactive_power2_45',0.00000000000000275344),('line_reactive_power2_46',-0.00014025),('line_reactive_power2_47',-0.00000000000000675973),('line_reactive_power2_48',-0.000293081),('line_reactive_power2_49',0.0000000000000027536),('line_reactive_power2_5',0.00200195),('line_reactive_power2_50',0.000740434),('line_reactive_power2_51',-0.0000495019),('line_reactive_power2_52',0.0125087),('line_reactive_power2_53',-0.0125087),('line_reactive_power2_54',0.00186385),('line_reactive_power2_55',-0.000293081),('line_reactive_power2_56',0.00000000000000321469),('line_reactive_power2_57',-0.00014025),('line_reactive_power2_58',-0.0000000000000500485),('line_reactive_power2_59',-0.000293081),('line_reactive_power2_6',-0.0051015),('line_reactive_power2_60',0.00000000000000321485),('line_reactive_power2_61',-0.0018738),('line_reactive_power2_62',-0.0196455),('line_reactive_power2_63',-0.00977963),('line_reactive_power2_64',-0.0150958),('line_reactive_power2_65',-0.00270016),('line_reactive_power2_66',0.0000000439774),('line_reactive_power2_67',-0.000000000000665004),('line_reactive_power2_68',0.0000000439774),('line_reactive_power2_69',-0.000000000000665004),('line_reactive_power2_7',0),('line_reactive_power2_70',0.0000000439774),('line_reactive_power2_71',-0.000000000000665004),('line_reactive_power2_72',-0.00046443),('line_reactive_power2_8',0),('line_reactive_power2_9',-0.0000000000000019415);
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
INSERT INTO `line_real_power` VALUES ('line_real_power_0',-0.01),('line_real_power_1',-0.0100045),('line_real_power_10',0.0150706),('line_real_power_11',0.0308487),('line_real_power_12',0.0308635),('line_real_power_13',0.0301385),('line_real_power_14',0.0301526),('line_real_power_15',0.0150218),('line_real_power_16',0.0150257),('line_real_power_17',0.101868),('line_real_power_18',-0.00999566),('line_real_power_19',-2.00155),('line_real_power_2',0.101419),('line_real_power_20',2.00155),('line_real_power_21',-1.00039),('line_real_power_22',1.00039),('line_real_power_23',-4.0019),('line_real_power_24',11.9806),('line_real_power_25',12.1369),('line_real_power_26',-1.00039),('line_real_power_27',1.00039),('line_real_power_28',-2.00155),('line_real_power_29',2.00155),('line_real_power_3',0.00999566),('line_real_power_30',-1.00039),('line_real_power_31',1.00039),('line_real_power_32',-0.000274325),('line_real_power_33',-4.00273),('line_real_power_34',-0.984794),('line_real_power_35',-4.01921),('line_real_power_36',4.01867),('line_real_power_37',-1.00039),('line_real_power_38',1.00039),('line_real_power_39',-2.00155),('line_real_power_4',-0.01),('line_real_power_40',2.00155),('line_real_power_41',-1.00039),('line_real_power_42',1.00039),('line_real_power_43',-4.00218),('line_real_power_44',-1.00039),('line_real_power_45',1.00039),('line_real_power_46',-2.00155),('line_real_power_47',2.00155),('line_real_power_48',-1.00039),('line_real_power_49',1.00039),('line_real_power_5',-0.0100045),('line_real_power_50',0.00110622),('line_real_power_51',-4.00135),('line_real_power_52',4.01784),('line_real_power_53',-4.01782),('line_real_power_54',4.02006),('line_real_power_55',-1.00039),('line_real_power_56',1.00039),('line_real_power_57',-2.00155),('line_real_power_58',2.00155),('line_real_power_59',-1.00039),('line_real_power_6',0.0912414),('line_real_power_60',1.00039),('line_real_power_61',-4.00356),('line_real_power_62',-0.0260467),('line_real_power_63',-0.0514822),('line_real_power_64',-0.0254337),('line_real_power_65',0.0514804),('line_real_power_66',0.0150003),('line_real_power_67',0.0150003),('line_real_power_68',0.0150003),('line_real_power_69',0.0150003),('line_real_power_7',0),('line_real_power_70',0.0150003),('line_real_power_71',0.0150003),('line_real_power_72',-0.045),('line_real_power_8',0),('line_real_power_9',0.0150671);
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
INSERT INTO `line_real_power2` VALUES ('line_real_power2_0',0.0100045),('line_real_power2_1',0.0100061),('line_real_power2_10',-0.0150671),('line_real_power2_11',-0.03),('line_real_power2_12',-0.0308487),('line_real_power2_13',-0.03),('line_real_power2_14',-0.0301385),('line_real_power2_15',-0.015),('line_real_power2_16',-0.0150218),('line_real_power2_17',-0.101419),('line_real_power2_18',0.01),('line_real_power2_19',2.00164),('line_real_power2_2',-0.101259),('line_real_power2_20',-2),('line_real_power2_21',1.00041),('line_real_power2_22',-1),('line_real_power2_23',4.00223),('line_real_power2_24',-11.9791),('line_real_power2_25',-12.1353),('line_real_power2_26',1.00041),('line_real_power2_27',-1),('line_real_power2_28',2.00164),('line_real_power2_29',-2),('line_real_power2_3',-0.00999412),('line_real_power2_30',1.00041),('line_real_power2_31',-1),('line_real_power2_32',0.000274325),('line_real_power2_33',4.00305),('line_real_power2_34',0.984794),('line_real_power2_35',4.01922),('line_real_power2_36',-4.01866),('line_real_power2_37',1.00041),('line_real_power2_38',-1),('line_real_power2_39',2.00164),('line_real_power2_4',0.0100045),('line_real_power2_40',-2),('line_real_power2_41',1.00041),('line_real_power2_42',-1),('line_real_power2_43',4.0025),('line_real_power2_44',1.00041),('line_real_power2_45',-1),('line_real_power2_46',2.00164),('line_real_power2_47',-2),('line_real_power2_48',1.00041),('line_real_power2_49',-1),('line_real_power2_5',0.0100061),('line_real_power2_50',-0.00110622),('line_real_power2_51',4.00167),('line_real_power2_52',-4.01783),('line_real_power2_53',4.01783),('line_real_power2_54',-4.02005),('line_real_power2_55',1.00041),('line_real_power2_56',-1),('line_real_power2_57',2.00164),('line_real_power2_58',-2),('line_real_power2_59',1.00041),('line_real_power2_6',-0.0911124),('line_real_power2_60',-1),('line_real_power2_61',4.00389),('line_real_power2_62',0.0260467),('line_real_power2_63',0.0514822),('line_real_power2_64',0.0254337),('line_real_power2_65',-0.0514804),('line_real_power2_66',-0.0150003),('line_real_power2_67',-0.015),('line_real_power2_68',-0.0150003),('line_real_power2_69',-0.015),('line_real_power2_7',0),('line_real_power2_70',-0.0150003),('line_real_power2_71',-0.015),('line_real_power2_72',0.0450002),('line_real_power2_8',0),('line_real_power2_9',-0.015);
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
INSERT INTO `load_reactive_power` VALUES ('load_0_reactive_power',40.1),('load_1_reactive_power',42.84),('load_2_reactive_power',45.11),('load_3_reactive_power',41.52),('load_4_reactive_power',50.97),('load_5_reactive_power',49.02),('load_6_reactive_power',44.62),('load_7_reactive_power',43.89),('load_8_reactive_power',51.7),('load_9_reactive_power',50.14);
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
INSERT INTO `load_real_power` VALUES ('load_0_real_power',100.24),('load_1_real_power',99.84),('load_2_real_power',101.01),('load_3_real_power',101.5),('load_4_real_power',80.27),('load_5_real_power',87.02),('load_6_real_power',90.22),('load_7_real_power',101.99),('load_8_real_power',97.2),('load_9_real_power',99.34);
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
INSERT INTO `loads` VALUES ('loads_0',0.015),('loads_1',0.03),('loads_10',0),('loads_11',0),('loads_12',0),('loads_13',0),('loads_14',0),('loads_15',0),('loads_16',0),('loads_17',0),('loads_18',0),('loads_19',0),('loads_2',0.03),('loads_20',0),('loads_21',0),('loads_22',0),('loads_23',0),('loads_24',0),('loads_25',0),('loads_26',0),('loads_27',0),('loads_28',0),('loads_29',0),('loads_3',0.015),('loads_30',0),('loads_31',0),('loads_32',0),('loads_33',0),('loads_34',0),('loads_35',0),('loads_36',0),('loads_37',0),('loads_38',0),('loads_39',0),('loads_4',0),('loads_40',0),('loads_41',0),('loads_42',0),('loads_43',0),('loads_44',0),('loads_45',0),('loads_46',0),('loads_47',0),('loads_48',0),('loads_49',0),('loads_5',0),('loads_50',0),('loads_51',0),('loads_52',0),('loads_53',0),('loads_54',0),('loads_55',0),('loads_56',0),('loads_57',0),('loads_58',0),('loads_59',0),('loads_6',0),('loads_60',0),('loads_61',0),('loads_62',0),('loads_63',0),('loads_64',0),('loads_65',0),('loads_66',0),('loads_67',0),('loads_68',0),('loads_69',0),('loads_7',0),('loads_70',0),('loads_71',0),('loads_72',0),('loads_8',0),('loads_9',0);
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
INSERT INTO `transformer_pressure` VALUES ('transformer_pressure_0',47),('transformer_pressure_1',47),('transformer_pressure_2',47),('transformer_pressure_3',47),('transformer_pressure_4',47),('transformer_pressure_5',47);
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
INSERT INTO `transformer_temp` VALUES ('transformer_temp_0',31.6902),('transformer_temp_1',32.6082),('transformer_temp_2',32.6149),('transformer_temp_3',31.2517),('transformer_temp_4',32.583),('transformer_temp_5',31.4996);
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

-- Dump completed on 2023-06-25 16:10:04
