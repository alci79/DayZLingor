-- MySQL dump 10.13  Distrib 5.6.10, for Win64 (x86_64)
--
-- Host: localhost    Database: dayz
-- ------------------------------------------------------
-- Server version	5.6.10

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `Character_DATA`
--

DROP TABLE IF EXISTS `Character_DATA`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `Character_DATA` (
  `CharacterID` int(11) NOT NULL AUTO_INCREMENT,
  `PlayerID` int(11) NOT NULL DEFAULT '1000',
  `PlayerUID` varchar(45) NOT NULL DEFAULT '0',
  `InstanceID` int(11) NOT NULL DEFAULT '0',
  `Datestamp` datetime DEFAULT NULL,
  `LastLogin` datetime NOT NULL,
  `Inventory` longtext,
  `Backpack` longtext,
  `Worldspace` varchar(70) NOT NULL DEFAULT '[]',
  `Medical` varchar(200) NOT NULL DEFAULT '[]',
  `Alive` tinyint(4) NOT NULL DEFAULT '1',
  `Generation` int(11) NOT NULL DEFAULT '1',
  `LastAte` datetime NOT NULL,
  `LastDrank` datetime NOT NULL,
  `KillsZ` int(11) NOT NULL DEFAULT '0',
  `HeadshotsZ` int(11) NOT NULL DEFAULT '0',
  `distanceFoot` int(11) NOT NULL DEFAULT '0',
  `duration` int(11) NOT NULL DEFAULT '0',
  `currentState` varchar(100) NOT NULL DEFAULT '[]',
  `KillsH` int(11) NOT NULL DEFAULT '0',
  `Model` varchar(50) NOT NULL DEFAULT '"Survivor2_DZ"',
  `KillsB` int(11) NOT NULL DEFAULT '0',
  `Humanity` int(11) NOT NULL DEFAULT '2500',
  `last_updated` timestamp NULL DEFAULT NULL ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`CharacterID`),
  KEY `PlayerID` (`PlayerID`),
  KEY `Alive_PlayerID` (`Alive`,`LastLogin`,`PlayerID`),
  KEY `PlayerUID` (`PlayerUID`),
  KEY `Alive_PlayerUID` (`Alive`,`LastLogin`,`PlayerUID`)
) ENGINE=InnoDB AUTO_INCREMENT=908 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `Character_DATA`
--

LOCK TABLES `Character_DATA` WRITE;
/*!40000 ALTER TABLE `Character_DATA` DISABLE KEYS */;
/*!40000 ALTER TABLE `Character_DATA` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `Character_DEAD`
--

DROP TABLE IF EXISTS `Character_DEAD`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `Character_DEAD` (
  `CharacterID` int(11) NOT NULL AUTO_INCREMENT,
  `PlayerID` int(11) NOT NULL DEFAULT '0',
  `PlayerUID` varchar(45) NOT NULL DEFAULT '0',
  `InstanceID` int(11) NOT NULL DEFAULT '0',
  `Datestamp` datetime DEFAULT NULL,
  `LastLogin` datetime NOT NULL,
  `Inventory` longtext,
  `Backpack` longtext,
  `Worldspace` varchar(70) NOT NULL DEFAULT '[]',
  `Medical` varchar(200) NOT NULL DEFAULT '[]',
  `Alive` tinyint(4) NOT NULL DEFAULT '1',
  `Generation` int(11) NOT NULL DEFAULT '1',
  `LastAte` datetime NOT NULL,
  `LastDrank` datetime NOT NULL,
  `KillsZ` int(11) NOT NULL DEFAULT '0',
  `HeadshotsZ` int(11) NOT NULL DEFAULT '0',
  `distanceFoot` int(11) NOT NULL DEFAULT '0',
  `duration` int(11) NOT NULL DEFAULT '0',
  `currentState` varchar(100) NOT NULL DEFAULT '[]',
  `KillsH` int(11) NOT NULL DEFAULT '0',
  `Model` varchar(50) NOT NULL DEFAULT '"Survivor2_DZ"',
  `KillsB` int(11) NOT NULL DEFAULT '0',
  `Humanity` int(11) NOT NULL DEFAULT '2500',
  `last_updated` timestamp NULL DEFAULT NULL ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`CharacterID`),
  KEY `PlayerID` (`PlayerID`),
  KEY `Alive_PlayerID` (`Alive`,`LastLogin`,`PlayerID`),
  KEY `PlayerUID` (`PlayerUID`),
  KEY `Alive_PlayerUID` (`Alive`,`LastLogin`,`PlayerUID`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1 ROW_FORMAT=COMPACT;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `Character_DEAD`
--

LOCK TABLES `Character_DEAD` WRITE;
/*!40000 ALTER TABLE `Character_DEAD` DISABLE KEYS */;
/*!40000 ALTER TABLE `Character_DEAD` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `Object_CLASSES`
--

DROP TABLE IF EXISTS `Object_CLASSES`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `Object_CLASSES` (
  `Classname` varchar(32) NOT NULL DEFAULT '',
  `Chance` varchar(4) NOT NULL DEFAULT '0',
  `MaxNum` tinyint(1) unsigned NOT NULL DEFAULT '0',
  `Damage` varchar(20) NOT NULL DEFAULT '0',
  `Hitpoints` varchar(999) NOT NULL DEFAULT '[]',
  PRIMARY KEY (`Classname`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `Object_CLASSES`
--

LOCK TABLES `Object_CLASSES` WRITE;
/*!40000 ALTER TABLE `Object_CLASSES` DISABLE KEYS */;
INSERT INTO `Object_CLASSES` VALUES ('UAZ_Unarmed_TK_CIV_EP1', '0.7', 2, '0.05', '[[\"motor\",0.8],[\"karoserie\",1],[\"palivo\",0.8],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"wheel_1_2_steering\",1],[\"wheel_2_2_steering\",1]]');
INSERT INTO `Object_CLASSES` VALUES ('UAZ_Unarmed_UN_EP1', '0.7', 1, '0.05', '[[\"motor\",0.8],[\"karoserie\",1],[\"palivo\",0.8],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"wheel_1_2_steering\",1],[\"wheel_2_2_steering\",1]]');
INSERT INTO `Object_CLASSES` VALUES ('UAZ_RU', '0.40', 1, '0.05', '[[\"motor\",0.8],[\"karoserie\",1],[\"palivo\",0.8],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"wheel_1_2_steering\",1],[\"wheel_2_2_steering\",1]]');
INSERT INTO `Object_CLASSES` VALUES ('SUV_DZ', '0.5', 3, '0.05', '[[\"motor\",0.8],[\"karoserie\",1],[\"palivo\",0.8],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"wheel_1_2_steering\",1],[\"wheel_2_2_steering\",1]]');
INSERT INTO `Object_CLASSES` VALUES ('ATV_US_EP1', '0.7', 4, '0.05', '[[\"motor\",0.8],[\"karoserie\",1],[\"palivo\",0.8],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"wheel_1_2_steering\",1],[\"wheel_2_2_steering\",1]]');
INSERT INTO `Object_CLASSES` VALUES ('ATV_CZ_EP1', '0.7', 3, '0.05', '[[\"motor\",0.8],[\"karoserie\",1],[\"palivo\",0.8],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"wheel_1_2_steering\",1],[\"wheel_2_2_steering\",1]]');
INSERT INTO `Object_CLASSES` VALUES ('SkodaBlue', '0.7', 1, '0.05', '[[\"motor\",0.8],[\"karoserie\",1],[\"palivo\",0.8],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"wheel_1_2_steering\",1],[\"wheel_2_2_steering\",1]]');
INSERT INTO `Object_CLASSES` VALUES ('UAZ_Unarmed_TK_EP1', '0.6', 2, '0.05', '[[\"motor\",0.8],[\"karoserie\",1],[\"palivo\",0.8],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"wheel_1_2_steering\",1],[\"wheel_2_2_steering\",1]]');
INSERT INTO `Object_CLASSES` VALUES ('Skoda', '0.66', 1, '0.05', '[[\"motor\",0.8],[\"karoserie\",1],[\"palivo\",0.8],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"wheel_1_2_steering\",1],[\"wheel_2_2_steering\",1]]');
INSERT INTO `Object_CLASSES` VALUES ('UH1H_DZ', '0.7', 2, '0.05', '[[\"glass1\",1],[\"glass2\",1],[\"glass3\",1],[\"glass4\",1],[\"glass5\",1],[\"NEtrup\",1.1998],[\"motor\",1],[\"elektronika\",1],[\"mala vrtule\",1],[\"velka vrtule\",1],[\"munice\",1.07084],[\"sklo predni P\",1.04818],[\"sklo predni L\",1.11816],[\"glass6\",1.0402]]');
INSERT INTO `Object_CLASSES` VALUES ('TT650_Ins', '1.0', 1, '0.05', '[]');
INSERT INTO `Object_CLASSES` VALUES ('AH6X_DZ', '0.35', 2, '0.05', '[[\"glass1\",1],[\"glass2\",1],[\"glass3\",1],[\"glass4\",1],[\"glass5\",1],[\"NEtrup\",1.1998],[\"motor\",1],[\"elektronika\",1],[\"mala vrtule\",1],[\"velka vrtule\",1],[\"munice\",1.07084],[\"sklo predni P\",1.04818],[\"sklo predni L\",1.11816],[\"glass6\",1.0402]]');
INSERT INTO `Object_CLASSES` VALUES ('MH6J_DZ', '0.65', 2, '0.05', '[[\"glass1\",1],[\"glass2\",1],[\"glass3\",1],[\"glass4\",1],[\"glass5\",1],[\"NEtrup\",1.1998],[\"motor\",1],[\"elektronika\",1],[\"mala vrtule\",1],[\"velka vrtule\",1],[\"munice\",1.07084],[\"sklo predni P\",1.04818],[\"sklo predni L\",1.11816],[\"glass6\",1.0402]]');
INSERT INTO `Object_CLASSES` VALUES ('Mi17_DZ', '0.35', 1, '0.05', '[[\"glass1\",1],[\"glass2\",1],[\"glass3\",1],[\"glass4\",1],[\"glass5\",1],[\"NEtrup\",1.1998],[\"motor\",1],[\"elektronika\",1],[\"mala vrtule\",1],[\"velka vrtule\",1],[\"munice\",1.07084],[\"sklo predni P\",1.04818],[\"sklo predni L\",1.11816],[\"glass6\",1.0402]]');
INSERT INTO `Object_CLASSES` VALUES ('AN2_DZ', '0.5', 1, '0.05', '[]');
INSERT INTO `Object_CLASSES` VALUES ('TT650_TK_EP1', '0.5', 1, '0.05', '[]');
INSERT INTO `Object_CLASSES` VALUES ('TT650_TK_CIV_EP1', '0.7', 3, '0.05', '[]');
INSERT INTO `Object_CLASSES` VALUES ('UralCivil2', '0.72', 1, '0.05', '[[\"motor\",0.8],[\"karoserie\",1],[\"palivo\",0.8],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"wheel_1_2_steering\",1],[\"wheel_2_2_steering\",1]]');
INSERT INTO `Object_CLASSES` VALUES ('LandRover_CZ_EP1', '0.7', 1, '0.05', '[[\"motor\",0.8],[\"karoserie\",1],[\"palivo\",0.8],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"wheel_1_2_steering\",1],[\"wheel_2_2_steering\",1]]');
INSERT INTO `Object_CLASSES` VALUES ('Old_bike_TK_INS_EP1', '0.67', 3, '0.05', '[]');
INSERT INTO `Object_CLASSES` VALUES ('hilux1_civil_3_open_EP1', '0.60', 1, '0.05', '[[\"motor\",0.8],[\"karoserie\",1],[\"palivo\",0.8],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"wheel_1_2_steering\",1],[\"wheel_2_2_steering\",1]]');
INSERT INTO `Object_CLASSES` VALUES ('Old_bike_TK_CIV_EP1', '0.59', 2, '0.05', '[]');
INSERT INTO `Object_CLASSES` VALUES ('Volha_2_TK_CIV_EP1', '0.61', 3, '0.05', '[[\"motor\",0.8],[\"karoserie\",1],[\"palivo\",0.8],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"wheel_1_2_steering\",1],[\"wheel_2_2_steering\",1]]');
INSERT INTO `Object_CLASSES` VALUES ('Ikarus_TK_CIV_EP1', '0.75', 3, '0.05', '[[\"motor\",0.8],[\"karoserie\",1],[\"palivo\",0.8],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"wheel_1_2_steering\",1],[\"wheel_2_2_steering\",1]]');
INSERT INTO `Object_CLASSES` VALUES ('Ikarus', '0.75', 3, '0.05', '[[\"motor\",0.8],[\"karoserie\",1],[\"palivo\",0.8],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"wheel_1_2_steering\",1],[\"wheel_2_2_steering\",1]]');
INSERT INTO `Object_CLASSES` VALUES ('Tractor', '0.95', 2, '0.05', '[[\"motor\",0.8],[\"karoserie\",1],[\"palivo\",0.8],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"wheel_1_2_steering\",1],[\"wheel_2_2_steering\",1]]');
INSERT INTO `Object_CLASSES` VALUES ('S1203_TK_CIV_EP1', '0.65', 4, '0.05', '[[\"motor\",0.8],[\"karoserie\",1],[\"palivo\",0.8],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"wheel_1_2_steering\",1],[\"wheel_2_2_steering\",1]]');
INSERT INTO `Object_CLASSES` VALUES ('V3S_Civ', '0.55', 1, '0.05', '[[\"motor\",0.8],[\"karoserie\",1],[\"palivo\",0.8],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"wheel_1_2_steering\",1],[\"wheel_2_2_steering\",1]]');
INSERT INTO `Object_CLASSES` VALUES ('Fishing_Boat', '0.95', 2, '0.05', '[]');
INSERT INTO `Object_CLASSES` VALUES ('PBX', '0.75', 1, '0.05', '[]');
INSERT INTO `Object_CLASSES` VALUES ('MV22_DZ', '0.75', 1, '0.05', '[]');
INSERT INTO `Object_CLASSES` VALUES ('Ka137_DZ', '0.75', 1, '0.05', '[]');
INSERT INTO `Object_CLASSES` VALUES ('Smallboat_1', '1.0', 2, '0.05', '[]');
INSERT INTO `Object_CLASSES` VALUES ('Volha_1_TK_CIV_EP1', '0.70', 3, '0.05', '[[\"motor\",0.8],[\"karoserie\",1],[\"palivo\",0.8],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"wheel_1_2_steering\",1],[\"wheel_2_2_steering\",1]]');
INSERT INTO `Object_CLASSES` VALUES ('car_sedan', '0.90', 1, '0.05', '[[\"motor\",0.8],[\"karoserie\",1],[\"palivo\",0.8],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"wheel_1_2_steering\",1],[\"wheel_2_2_steering\",1]]');
INSERT INTO `Object_CLASSES` VALUES ('C185E_DZ', '0.75', 1, '0.05', '[]');
INSERT INTO `Object_CLASSES` VALUES ('C185F_DZ', '0.75', 1, '0.05', '[]');
INSERT INTO `Object_CLASSES` VALUES ('C185_DZ', '0.75', 1, '0.05', '[]');
INSERT INTO `Object_CLASSES` VALUES ('SUV_SpecialSkaro', '0.25', 1, '0.05', '[[\"motor\",0.8],[\"karoserie\",1],[\"palivo\",0.8],[\"wheel_1_1_steering\",1],[\"wheel_2_1_steering\",1],[\"wheel_1_2_steering\",1],[\"wheel_2_2_steering\",1]]');
INSERT INTO `Object_CLASSES` VALUES ('JetSkiYanahui_Red', '0.75', 1, '0.05', '[]');
INSERT INTO `Object_CLASSES` VALUES ('JetSkiYanahui_Blue', '0.75', 1, '0.05', '[]');
INSERT INTO `Object_CLASSES` VALUES ('JetSkiYanahui_Green', '0.75', 1, '0.05', '[]');
INSERT INTO `Object_CLASSES` VALUES ('JetSkiYanahui_Yellow', '0.75', 1, '0.05', '[]');
INSERT INTO `Object_CLASSES` VALUES ('JetSkiYanahui_Case_Red', '0.75', 1, '0.05', '[]');
INSERT INTO `Object_CLASSES` VALUES ('JetSkiYanahui_Case_Blue', '0.75', 1, '0.05', '[]');
INSERT INTO `Object_CLASSES` VALUES ('JetSkiYanahui_Case_Green', '0.75', 1, '0.05', '[]');
INSERT INTO `Object_CLASSES` VALUES ('JetSkiYanahui_Case_Yellow', '0.75', 1, '0.05', '[]');
INSERT INTO `Object_CLASSES` VALUES ('ibr_as350_pol', '0.75', 1, '0.05', '[[\"glass1\",1],[\"glass2\",1],[\"glass3\",1],[\"glass4\",1],[\"glass5\",1],[\"NEtrup\",1.1998],[\"motor\",1],[\"elektronika\",1],[\"mala vrtule\",1],[\"velka vrtule\",1],[\"munice\",1.07084],[\"sklo predni P\",1.04818],[\"sklo predni L\",1.11816],[\"glass6\",1.0402]]');
INSERT INTO `Object_CLASSES` VALUES ('ibr_as350_pmc', '0.75', 1, '0.05', '[[\"glass1\",1],[\"glass2\",1],[\"glass3\",1],[\"glass4\",1],[\"glass5\",1],[\"NEtrup\",1.1998],[\"motor\",1],[\"elektronika\",1],[\"mala vrtule\",1],[\"velka vrtule\",1],[\"munice\",1.07084],[\"sklo predni P\",1.04818],[\"sklo predni L\",1.11816],[\"glass6\",1.0402]]');
INSERT INTO `Object_CLASSES` VALUES ('ibr_as350lingor', '0.75', 1, '0.05', '[[\"glass1\",1],[\"glass2\",1],[\"glass3\",1],[\"glass4\",1],[\"glass5\",1],[\"NEtrup\",1.1998],[\"motor\",1],[\"elektronika\",1],[\"mala vrtule\",1],[\"velka vrtule\",1],[\"munice\",1.07084],[\"sklo predni P\",1.04818],[\"sklo predni L\",1.11816],[\"glass6\",1.0402]]');
/*!40000 ALTER TABLE `Object_CLASSES` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `Object_DATA`
--

DROP TABLE IF EXISTS `Object_DATA`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `Object_DATA` (
  `ObjectID` int(11) NOT NULL AUTO_INCREMENT,
  `ObjectUID` bigint(20) NOT NULL DEFAULT '0',
  `Instance` int(11) NOT NULL,
  `Classname` varchar(50) DEFAULT NULL,
  `Datestamp` datetime NOT NULL,
  `CharacterID` int(11) NOT NULL DEFAULT '0',
  `Worldspace` varchar(70) NOT NULL DEFAULT '[]',
  `Inventory` longtext,
  `Hitpoints` varchar(500) NOT NULL DEFAULT '[]',
  `Fuel` double(13,5) NOT NULL DEFAULT '1.00000',
  `Damage` double(13,5) NOT NULL DEFAULT '0.00000',
  `last_updated` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`ObjectID`),
  UNIQUE KEY `CheckUID` (`ObjectUID`,`Instance`),
  KEY `ObjectUID` (`ObjectUID`),
  KEY `Instance` (`Damage`,`Instance`)
) ENGINE=InnoDB AUTO_INCREMENT=176 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `Object_DATA`
--

LOCK TABLES `Object_DATA` WRITE;
/*!40000 ALTER TABLE `Object_DATA` DISABLE KEYS */;
/*!40000 ALTER TABLE `Object_DATA` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `Object_SPAWNS`
--

DROP TABLE IF EXISTS `Object_SPAWNS`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `Object_SPAWNS` (
  `ObjectUID` varchar(20) NOT NULL DEFAULT '',
  `Classname` varchar(32) DEFAULT NULL,
  `Worldspace` varchar(64) DEFAULT NULL,
  `Description` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`ObjectUID`)
) ENGINE=MyISAM DEFAULT CHARSET=utf8 ROW_FORMAT=DYNAMIC;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `Object_SPAWNS`
--

LOCK TABLES `Object_SPAWNS` WRITE;
/*!40000 ALTER TABLE `Object_SPAWNS` DISABLE KEYS */;
INSERT INTO `Object_SPAWNS` VALUES ('1', 'UAZ_Unarmed_TK_EP1', '[130,[13129.8,11560,0.0706997]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('2', 'UAZ_Unarmed_TK_CIV_EP1', '[3,[7107.41,5825.43,0]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('3', 'UAZ_Unarmed_UN_EP1', '[271,[6424,6777.25,0.00143909]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('4', 'UAZ_RU', '[5,[4150.78,1426.02,0.0821762]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('5', 'UAZ_Unarmed_TK_CIV_EP1', '[87,[2476.24,4105.05,0.00119781]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('6', 'UAZ_Unarmed_TK_CIV_EP1', '[177,[4073.41,5156.29,0.00143814]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('7', 'SUV_DZ', '[9,[6457.83,6660.57,0]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('8', 'ATV_US_EP1', '[355,[6888.25,3147.13,0.00132751]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('9', 'ATV_US_EP1', '[17,[5968.15,6595.98,0.00117016]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('10', 'ATV_CZ_EP1', '[186,[3546.66,3740.02,0.00143433]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('11', 'ATV_US_EP1', '[75,[3287.92,6434.28,0.00110245]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('12', 'ATV_CZ_EP1', '[51,[5927.38,6616.12,0.00140476]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('13', 'SkodaBlue', '[3,[5805.57,4727.47,0.00143814]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('14', 'Skoda', '[0,[6115.49,5859.39,0]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('15', 'UH1H_DZ', '[208,[1748.81,642.642,14.1062]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('16', 'ATV_US_EP1', '[323,[1199.85,5270.49,10.8326]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('17', 'TT650_Ins', '[267,[4080.74,1130.51,0.00143909]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('18', 'TT650_TK_EP1', '[-209,[6592.686, 2906.8245,0]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('19', 'TT650_TK_CIV_EP1', '[179,[5802.9,4712.73,0.00143814]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('20', 'TT650_TK_CIV_EP1', '[97,[4589.57,2616.75,0.00136948]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('21', 'UralCivil2', '[90,[6821.08,2497.89,0.00143909]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('22', 'LandRover_CZ_EP1', '[294,[3143.17,7997.26,0.00159264]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('23', 'Old_bike_TK_INS_EP1', '[254,[3933.37,4220.77,0.00143433]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('24', 'Old_bike_TK_INS_EP1', '[184,[3551.31,3739.72,0.0010376]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('25', 'hilux1_civil_3_open_EP1', '[163,[5985.63,5351.37,0.00143909]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('26', 'Old_bike_TK_CIV_EP1', '[10,[8819.02,8023.86,0.00143814]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('27', 'Old_bike_TK_INS_EP1', '[279,[5796.81,4688.25,0.00143814]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('28', 'Old_bike_TK_CIV_EP1', '[0,[5671.37,796.868,0.00129175]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('29', 'ATV_CZ_EP1', '[0,[969.451,1275.39,0.00255895]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('30', 'SUV_DZ', '[9,[6593.81,5728.57,0]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('31', 'Volha_2_TK_CIV_EP1', '[94,[621.466,4631.81,0.00143814]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('32', 'UH1H_DZ', '[5,[3360.08,1126.39,0.00143862]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('33', 'UH1H_DZ', '[18,[3956.76,4229.46,0.00143433]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('34', 'UH1H_DZ', '[168,[602.249,4686.56,6.81655]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('35', 'UH1H_DZ', '[89,[6597.37,6767.08,0]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('36', 'UH1H_DZ', '[274,[6863.03,4451.83,0.00143814]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('37', 'Ikarus_TK_CIV_EP1', '[79,[3472.71,1374.62,0.00143909]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('38', 'Ikarus', '[79,[3572.71,1374.62,0.00143909]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('39', 'Ikarus', '[180,[5775.69,4724.98,0.00143814]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('40', 'Ikarus_TK_CIV_EP1', '[209,[835.536,5520.96,7.97942]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('41', 'Ikarus', '[9,[6572.64,5970.13,0]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('42', 'Ikarus_TK_CIV_EP1', '[9,[6472.64,5970.13,0]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('43', 'TT650_TK_CIV_EP1', '[272,[2837.28,5328.06,0.373938]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('44', 'Tractor', '[89,[7971.34,1091.71,0.00143909]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('45', 'Tractor', '[317,[2645.8,6945.16,0.00143909]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('46', 'S1203_TK_CIV_EP1', '[285,[4290.23,4935.53,0.00152206]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('47', 'S1203_TK_CIV_EP1', '[5,[4198.66,4442.61,0.00143814]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('48', 'S1203_TK_CIV_EP1', '[3,[5796.71,4721.43,0.00143814]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('49', 'S1203_TK_CIV_EP1', '[167,[13367.5,6601.11,0.0126638]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('50', 'V3S_Civ', '[4,[4401.8,1702.02,0.121414]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('51', 'Fishing_Boat', '[137,[3800.27,2307.3,4.6834]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('52', 'Fishing_Boat', '[137,[3700.27,2307.3,4.6834]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('53', 'PBX', '[291,[5873.05,5326.02,0.00148487]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('54', 'Smallboat_1', '[147,[8433.71,7797.2,2.1895]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('55', 'Smallboat_1', '[310,[3822.1,2299.23,0.000923157]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('56', 'Volha_1_TK_CIV_EP1', '[272,[6827.53,5927.34,0.00143909]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('57', 'Volha_1_TK_CIV_EP1', '[356,[8039.13,2916.39,0.00257635]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('58', 'Volha_2_TK_CIV_EP1', '[274,[3697.02,1404.02,0.00143909]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('59', 'Volha_1_TK_CIV_EP1', '[260,[8299.95,2358.95,1.28169]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('60', 'Volha_2_TK_CIV_EP1', '[47,[4149.76,1537.27,0.0821762]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('61', 'SUV_DZ', '[183,[5784.84,4712.17,0.00143814]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('62', 'car_sedan', '[222,[9120.468,8667.882,0]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('63', 'Fishing_Boat', '[273,[8842.5,921.916,0.00130701]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('64', 'UAZ_Unarmed_TK_EP1', '[249,[7563.33,1693.72,0.00143909]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('65', 'Fishing_Boat', '[195,[6800.51,2828.05,0.00150663]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('66', 'MV22_DZ', '[90,[5986.6792,7027.0684,4.863739e-005]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('67', 'AN2_DZ', '[0,[3055.7537,6474.4546,-0.70897663]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('68', 'AN2_DZ', '[180,[4318.3994,1878.7593,-0.66435003]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('69', 'AH6X_DZ', '[180,[1301.7004,1455.2246,-4.7683716e-006]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('70', 'AH6X_DZ', '[0,[6081.769,1671.0074,-1.0490417e-005]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('71', 'AH6X_DZ', '[150,[5508.1572,5060.7256,-1.2397766e-005]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('72', 'MH6J_DZ', '[180,[7519.2031,8273.2949,-2.1934509e-005]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('73', 'MH6J_DZ', '[90,[6952.7598,6430.978,9.5367432e-006]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('74', 'MH6J_DZ', '[90,[4183.8716,7572.7285,1.1444092e-005]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('75', 'Mi17_DZ', '[75,[3064.6106,7974.1719,-0.51635265]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('76', 'SUV_SpecialSkaro', '[80,[3965.0176, 9361.5029, 0.00010919571]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('77', 'JetSkiYanahui_Red', '[75,[7590.3486, 8260.0996, -0.082376719]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('78', 'JetSkiYanahui_Blue', '[0[7217.437, 2314.2693, -0.055636108]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('79', 'JetSkiYanahui_Green', '[5,[6673.5703, 1599.817, -0.1397385]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('80', 'JetSkiYanahui_Yellow', '[105,[7171.2598, 1379.329, -0.046738148]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('81', 'JetSkiYanahui_Case_Red', '[170,[4236.9077, 3593.072, 0.053207695]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('82', 'JetSkiYanahui_Case_Blue', '[125,[1095.5248, 1502.8373, 0.011992991]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('83', 'JetSkiYanahui_Case_Green', '[170,[6046.6108, 6032.4341, 0.071113408]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('84', 'JetSkiYanahui_Case_Yellow', '[54,[1028.6489, 5299.1694, -0.13182747]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('85', 'ibr_as350_pol', '[0,[1395.826, 608.14166, -1.5258789e-005]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('86', 'ibr_as350_pmc', '[0,[4491.751, 4787.2593, -3.8146973e-006]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('87', 'ibr_as350lingor', '[0,[5889.4961, 6797.897, -9.5367432e-007]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('88', 'Ka137_DZ', '[0,[5205.9272, 4022.6003, 1.4305115e-005]]', NULL);
INSERT INTO `Object_SPAWNS` VALUES ('89', 'C185_DZ', '[0,[9332.3389, 5007.4839, 4.7]]', NULL);
/*!40000 ALTER TABLE `Object_SPAWNS` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `Player_DATA`
--

DROP TABLE IF EXISTS `Player_DATA`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `Player_DATA` (
  `playerID` int(11) NOT NULL DEFAULT '0',
  `playerUID` varchar(45) NOT NULL DEFAULT '0',
  `playerName` varchar(50) NOT NULL DEFAULT 'Null',
  `playerMorality` int(11) NOT NULL DEFAULT '0',
  `playerSex` int(11) NOT NULL DEFAULT '0',
  KEY `playerID` (`playerID`),
  KEY `playerUID` (`playerUID`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `Player_DATA`
--

LOCK TABLES `Player_DATA` WRITE;
/*!40000 ALTER TABLE `Player_DATA` DISABLE KEYS */;
/*!40000 ALTER TABLE `Player_DATA` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `Player_LOGIN`
--

DROP TABLE IF EXISTS `Player_LOGIN`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `Player_LOGIN` (
  `LoginID` int(11) NOT NULL AUTO_INCREMENT,
  `PlayerUID` varchar(45) NOT NULL,
  `CharacterID` int(11) NOT NULL DEFAULT '0',
  `datestamp` datetime NOT NULL,
  `Action` int(11) NOT NULL DEFAULT '0',
  PRIMARY KEY (`LoginID`)
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `Player_LOGIN`
--

LOCK TABLES `Player_LOGIN` WRITE;
/*!40000 ALTER TABLE `Player_LOGIN` DISABLE KEYS */;
/*!40000 ALTER TABLE `Player_LOGIN` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Dumping events for database 'dayz'
--

--
-- Dumping routines for database 'dayz'
--
/*!50003 DROP FUNCTION IF EXISTS `rndspawn` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`dayz`@`localhost` FUNCTION `rndspawn`(`chance` double) RETURNS tinyint(1)
BEGIN

	DECLARE bspawn tinyint(1) DEFAULT 0;

	IF (RAND() <= chance) THEN
		SET bspawn = 1;
	END IF;

	RETURN bspawn;

END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `pCleanup` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`dayz`@`localhost` PROCEDURE `pCleanup`()
BEGIN

#starts outofbounds cleanup
	CALL pCleanupOOB();
	
#remove dead players from data table
	DELETE 
		FROM Character_DATA 
		WHERE Alive=0;	
	
#remove vehicles with 100% damage
	DELETE
		FROM Object_DATA 
		WHERE Damage = '1';	

#remove unused vehicles older then 14 days
	DELETE
		FROM Object_DATA
		WHERE DATE(last_updated) < CURDATE() - INTERVAL 14 DAY
			AND Classname != 'dummy'
			AND Classname != 'Hedgehog_DZ'
			AND Classname != 'Wire_cat1'
			AND Classname != 'Sandbag1_DZ'
			AND Classname != 'TrapBear'
			AND Classname != 'StashSmall'
			AND Classname != 'StashMedium';

	DELETE
		FROM Object_DATA USING Object_DATA, Character_DATA
		WHERE (Object_DATA.Classname = 'TentStorage' OR Object_DATA.Classname = 'StashSmall' OR Object_DATA.Classname = 'StashMedium')
			AND Object_DATA.CharacterID = Character_DATA.CharacterID
			AND Character_DATA.Alive = 0
			AND DATE(Character_DATA.last_updated) < CURDATE() - INTERVAL 4 DAY;


	DELETE
		FROM Object_DATA
		WHERE (Classname = 'TentStorage' OR Classname = 'StashSmall' OR Classname = 'StashMedium')
			AND DATE(last_updated) < CURDATE() - INTERVAL 7 DAY
			AND Inventory = '[[[],[]],[[],[]],[[],[]]]';


	DELETE
		FROM Object_DATA
		WHERE (Classname = 'TentStorage' OR Classname = 'StashSmall' OR Classname = 'StashMedium')
			AND DATE(last_updated) < CURDATE() - INTERVAL 7 DAY
			AND Inventory = '[]';

#remove barbed wire older than two days
	DELETE
		FROM Object_DATA
		WHERE Classname = 'Wire_cat1'
			AND DATE(last_updated) < CURDATE() - INTERVAL 2 DAY;
			
#remove Tank Traps older than fifteen days
	DELETE
		FROM Object_DATA
		WHERE Classname = 'Hedgehog_DZ'
			AND DATE(last_updated) < CURDATE() - INTERVAL 15 DAY;

#remove Sandbags older than twenty days
	DELETE
		FROM Object_DATA
		WHERE Classname = 'Sandbag1_DZ'
			AND DATE(last_updated) < CURDATE() - INTERVAL 20 DAY;

#remove Bear Traps older than five days
	DELETE
		FROM Object_DATA
		WHERE Classname = 'TrapBear'
			AND DATE(last_updated) < CURDATE() - INTERVAL 5 DAY;

END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `pCleanupOOB` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`dayz`@`localhost` PROCEDURE `pCleanupOOB`()
BEGIN

	DECLARE intLineCount	INT DEFAULT 0;
	DECLARE intDummyCount	INT DEFAULT 0;
	DECLARE intDoLine			INT DEFAULT 0;
	DECLARE intWest				INT DEFAULT 0;
	DECLARE intNorth			INT DEFAULT 0;

	SELECT COUNT(*)
		INTO intLineCount
		FROM Object_DATA;

	SELECT COUNT(*)
		INTO intDummyCount
		FROM Object_DATA
		WHERE Classname = 'dummy';

	WHILE (intLineCount > intDummyCount) DO
	
		SET intDoLine = intLineCount - 1;

		SELECT ObjectUID, Worldspace
			INTO @rsObjectUID, @rsWorldspace
			FROM Object_DATA
			LIMIT intDoLine, 1;

		SELECT REPLACE(@rsWorldspace, '[', '') INTO @rsWorldspace;
		SELECT REPLACE(@rsWorldspace, ']', '') INTO @rsWorldspace;
		SELECT REPLACE(SUBSTRING(SUBSTRING_INDEX(@rsWorldspace, ',', 2), LENGTH(SUBSTRING_INDEX(@rsWorldspace, ',', 2 -1)) + 1), ',', '') INTO @West;
		SELECT REPLACE(SUBSTRING(SUBSTRING_INDEX(@rsWorldspace, ',', 3), LENGTH(SUBSTRING_INDEX(@rsWorldspace, ',', 3 -1)) + 1), ',', '') INTO @North;

		SELECT INSTR(@West, '-') INTO intWest;
		SELECT INSTR(@North, '-') INTO intNorth;

		IF (intNorth = 0) THEN
			SELECT CONVERT(@North, DECIMAL(16,8)) INTO intNorth;
		END IF;

		IF (intWest > 0 OR intNorth > 15360) THEN
			DELETE FROM Object_DATA
				WHERE ObjectUID = @rsObjectUID;
		END IF;
			
		SET intLineCount = intLineCount - 1;

	END WHILE;

END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!50003 DROP PROCEDURE IF EXISTS `pMain` */;
/*!50003 SET @saved_cs_client      = @@character_set_client */ ;
/*!50003 SET @saved_cs_results     = @@character_set_results */ ;
/*!50003 SET @saved_col_connection = @@collation_connection */ ;
/*!50003 SET character_set_client  = utf8 */ ;
/*!50003 SET character_set_results = utf8 */ ;
/*!50003 SET collation_connection  = utf8_general_ci */ ;
/*!50003 SET @saved_sql_mode       = @@sql_mode */ ;
/*!50003 SET sql_mode              = 'STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION' */ ;
DELIMITER ;;
CREATE DEFINER=`dayz`@`localhost` PROCEDURE `pMain`(IN `i` INT)
    MODIFIES SQL DATA
BEGIN

# maximum number of INSTANCE ids USED.
#-----------------------------------------------
	DECLARE sInstance VARCHAR(8) DEFAULT i;
#-----------------------------------------------
#maximum number of vehicles allowed !!! theoretical max. amount
#-----------------------------------------------
	DECLARE iVehSpawnMax INT DEFAULT 85;
#-----------------------------------------------	

# DECLARE iVehSpawnMin				INT DEFAULT 0;		#ToDo !!!
	DECLARE iTimeoutMax 				INT DEFAULT 250;	#number of loops before timeout
	DECLARE iTimeout 						INT DEFAULT 0;		#internal counter for loops done; used to prevent infinite loops - DO NOT CHANGE
	DECLARE iNumVehExisting 		INT DEFAULT 0;		#internal counter for already existing vehicles - DO NOT CHANGE
	DECLARE iNumClassExisting 	INT DEFAULT 0;		#internal counter for already existing class types - DO NOT CHANGE
	DECLARE i INT DEFAULT 1; #internal counter for vehicles spawns - DO NOT CHANGE

#Starts Cleanup
	CALL pCleanup();
	
		SELECT COUNT(*) 				#retrieve the amount of already spawned vehicles...
			INTO iNumVehExisting
			FROM Object_DATA 
			WHERE Instance = sInstance
			AND Classname != '-'						#exclude dummys
			AND Classname != 'Hedgehog_DZ'			#exclude hedgehog
			AND Classname != 'Wire_cat1'				#exclude wirecat
			AND Classname != 'Sandbag1_DZ'			#exclude Sanbag
			AND Classname != 'TrapBear'			#exclude trap
			AND Classname != 'TentStorage';		#exclude TentStorage

		WHILE (iNumVehExisting < iVehSpawnMax) DO		#loop until maximum amount of vehicles is reached

			#select a random vehicle class
			SELECT Classname, Chance, MaxNum, Damage
				INTO @rsClassname, @rsChance, @rsMaxNum, @rsDamage
				FROM Object_CLASSES ORDER BY RAND() LIMIT 1;

			#count number of same class already spawned
			SELECT COUNT(*) 
				INTO iNumClassExisting 
				FROM Object_DATA 
				WHERE Instance = sInstance
				AND Classname = @rsClassname;

			IF (iNumClassExisting < @rsMaxNum) THEN

				IF (rndspawn(@rschance) = 1) THEN
				
					INSERT INTO Object_DATA (ObjectUID, Instance, Classname, Damage, CharacterID, Worldspace, Inventory, Hitpoints, Fuel, Datestamp)
						SELECT ObjectUID, sInstance, Classname, RAND(@rsDamage), '0', Worldspace, Inventory, Hitpoints, RAND(1), SYSDATE() 
							FROM Object_SPAWNS 
							WHERE Classname = @rsClassname 
								AND NOT ObjectUID IN (select objectuid from Object_DATA where instance = sInstance)
							ORDER BY RAND()
							LIMIT 0, 1;
							
					SELECT COUNT(*) 
						INTO iNumVehExisting 
						FROM Object_DATA 
						WHERE Instance = sInstance
							AND Classname != '-'						#exclude dummys
							AND Classname != 'Hedgehog_DZ'			#exclude hedgehog
							AND Classname != 'Wire_cat1'				#exclude wirecat
							AND Classname != 'Sandbag1_DZ'			#exclude Sanbag
							AND Classname != 'TrapBear'			#exclude trap
							AND Classname != 'TentStorage';		#exclude TentStorage
		
					#update number of same class already spawned
					SELECT COUNT(*) 
						INTO iNumClassExisting 
						FROM Object_DATA 
						WHERE Instance = sInstance
						AND Classname = @rsClassname;
				
				END IF;
			END IF;	
			
			SET iTimeout = iTimeout + 1; #raise timeout counter
			IF (iTimeout >= iTimeoutMax) THEN
				SET iNumVehExisting = iVehSpawnMax;
			END IF;
		END WHILE;
	SET i = i + 1;
END ;;
DELIMITER ;
/*!50003 SET sql_mode              = @saved_sql_mode */ ;
/*!50003 SET character_set_client  = @saved_cs_client */ ;
/*!50003 SET character_set_results = @saved_cs_results */ ;
/*!50003 SET collation_connection  = @saved_col_connection */ ;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2013-06-18 22:58:19
