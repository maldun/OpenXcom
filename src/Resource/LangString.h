/*
 * Copyright 2010 Daniel Albano
 *
 * This file is part of OpenXcom.
 *
 * OpenXcom is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * OpenXcom is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with OpenXcom.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef OPENXCOM_LANGSTRING_H
#define OPENXCOM_LANGSTRING_H

// When there's two equal strings, _UC denotes the Upper-Case one
enum LangString
{
	STR_YES = 279,
	STR_NO = 280,
	STR_ABANDON_GAME = 800,
	STR_OK = 76,
	STR_TRANSFERS = 140,
	STR_STORES_UC = 934,
	STR_MONTHLY_COSTS = 954,
	STR_PERSONNEL_AVAILABLE_TOTAL = 128,
	STR_SOLDIERS = 129,
	STR_ENGINEERS = 130,
	STR_SCIENTISTS = 131,
	STR_SPACE_USED_AVAILABLE = 132,
	STR_STORES = 134,
	STR_LABORATORIES = 135,
	STR_WORK_SHOPS = 136,
	STR_HANGARS = 137,
	STR_DEFENCE_STRENGTH = 139,
	STR_SHORT_RANGE_DETECTION = 138,
	STR_LONG_RANGE_DETECTION = 933,
	STR_FUNDS_ = 56,
	STR_BUILD_NEW_BASE = 57,
	STR_BASE_INFORMATION = 58,
	STR_SOLDIERS_UC = 820,
	STR_EQUIP_CRAFT = 59,
	STR_BUILD_FACILITIES = 60,
	STR_RESEARCH = 61,
	STR_MANUFACTURE = 62,
	STR_TRANSFER = 63,
	STR_PURCHASE_RECRUIT = 64,
	STR_SELL_SACK_UC = 65,
	STR_GEOSCAPE = 66,
	STR_INTERCEPTION_CRAFT = 318,
	STR_BASE_ = 319,
	STR_NAME = 320,
	STR_WEAPON_SYSTEMS = 642,
	STR_CREW = 643,
	STR_HWPS = 644,
	STR_INTERNATIONAL_RELATIONS = 638,
	STR_COUNTRY = 639,
	STR_FUNDING = 640,
	STR_CHANGE = 641,
	STR_CANCEL = 71,
	STR_LAUNCH_INTERCEPTION = 264,
	STR_CRAFT = 265,
	STR_STATUS = 266,
	STR_BASE = 267,
	STR_WEAPONS_CREW_HWPS = 799,
	STR_UFO_ENEMY_UNKNOWN = 779,
	STR_NEW_GAME = 780,
	STR_LOAD_SAVED_GAME = 781,
	STR_QUIT = 801,
	STR_SELECT_DIFFICULTY_LEVEL = 782,
	STR_BEGINNER = 783,
	STR_EXPERIENCED = 784,
	STR_VETERAN = 785,
	STR_GENIUS = 786,
	STR_SUPERHUMAN = 787,
	STR_GAME_OPTIONS = 315,
	STR_LOAD_GAME = 316,
	STR_SAVE_GAME = 317,
	STR_CANCEL_UC = 49,
	STR_PURCHASE_HIRE_PERSONNEL = 123,
	STR_COST_OF_PURCHASES = 125,
	STR_ITEM = 97,
	STR_COST_PER_UNIT_UC = 126,
	STR_QUANTITY_UC = 127,
	STR_CURRENT_RESEARCH = 78,
	STR_SCIENTISTS_AVAILABLE = 79,
	STR_SCIENTISTS_ALLOCATED = 80,
	STR_LABORATORY_SPACE_AVAILABLE = 81,
	STR_RESEARCH_PROJECT = 82,
	STR_SCIENTISTS_ALLOCATED_UC = 83,
	STR_PROGRESS = 84,
	STR_NEW_PROJECT = 85,
	STR_SELL_ITEMS_SACK_PERSONNEL = 230,
	STR_VALUE_OF_SALES = 231,
	STR_FUNDS = 232,
	STR_SELL_SACK = 233,
	STR_VALUE = 234,
	STR_SOLDIER_LIST = 803,
	STR_RANK = 336,
	STR_CURRENT_PRODUCTION = 92,
	STR_ENGINEERS_AVAILABLE = 93,
	STR_ENGINEERS_ALLOCATED_UC = 94,
	STR_WORKSHOP_SPACE_AVAILABLE = 95,
	STR_CURRENT_FUNDS = 96,
	STR_ENGINEERS_ALLOCATED = 98,
	STR_UNITS_PRODUCED = 99,
	STR_TOTAL_TO_PRODUCE = 100,
	STR_COST__PER__UNIT = 101,
	STR_DAYS_HOURS_LEFT = 102,
	STR_NEW_PRODUCTION = 103,
	STR_ST = 170,
	STR_ND = 171,
	STR_RD = 172,
	STR_TH = 173,
	STR_SUNDAY = 185,
	STR_MONDAY = 186,
	STR_TUESDAY = 187,
	STR_WEDNESDAY = 188,
	STR_THURSDAY = 189,
	STR_FRIDAY = 190,
	STR_SATURDAY = 191,
	STR_JAN = 626,
	STR_FEB = 627,
	STR_MAR = 628,
	STR_APR = 629,
	STR_MAY = 630,
	STR_JUN = 631,
	STR_JUL = 632,
	STR_AUG = 633,
	STR_SEP = 634,
	STR_OCT = 635,
	STR_NOV = 636,
	STR_DEC = 637,
	STR_USA = 601,
	STR_RUSSIA = 602,
	STR_UK = 603,
	STR_FRANCE = 604,
	STR_GERMANY = 605,
	STR_ITALY = 606,
	STR_SPAIN = 607,
	STR_CHINA = 608,
	STR_JAPAN = 609,
	STR_INDIA = 610,
	STR_BRAZIL = 611,
	STR_AUSTRALIA = 612,
	STR_NIGERIA = 613,
	STR_SOUTH_AFRICA = 614,
	STR_EGYPT = 615,
	STR_CANADA = 616,
	STR_TOTAL_UC = 160,
	STR_XCOM_PROJECT_MONTHLY_REPORT = 704,
	STR_MONTH = 705,
	STR_MONTHLY_RATING = 718,
	STR_FUNDING_CHANGE = 719,
	STR_TERRIBLE = 698,
	STR_POOR = 699,
	STR_GOOD = 701,
	STR_EXCELLENT = 702,
	STR_COUNCIL_SATISFIED = 706,
	STR_COUNCIL_VERY_PLEASED = 707,
	STR_COUNCIL_DISSATISFIED = 708,
	STR_COUNCIL_TERMINATED = 709,
	STR_COUNCIL_FINANCIAL = 720,
	STR_COUNTRY_HAPPY = 710,
	STR_COUNTRIES_HAPPY = 711,
	STR_COUNTRY_UNHAPPY = 713,
	STR_COUNTRIES_UNHAPPY = 714,
	STR_AND = 712,
	STR_COUNTRY_PACT = 716,
	STR_COUNTRIES_PACT = 717,
	STR_ROOKIE = 327,
	STR_SQUADDIE = 328,
	STR_SERGEANT = 329,
	STR_CAPTAIN = 330,
	STR_COLONEL = 331,
	STR_COMMANDER = 332,
	STR_ARMOUR = 325,
	STR_RANK_ = 804,
	STR_MISSIONS = 805,
	STR_KILLS = 806,
	STR_CRAFT_ = 236,
	STR_WOUND_RECOVERY = 807,
	STR_TIME_UNITS = 808,
	STR_STAMINA = 809,
	STR_HEALTH = 810,
	STR_BRAVERY = 811,
	STR_REACTIONS = 812,
	STR_FIRING_ACCURACY = 813,
	STR_THROWING_ACCURACY = 814,
	STR_STRENGTH = 815,
	STR_PSIONIC_STRENGTH = 816,
	STR_PSIONIC_SKILL = 817,
	STR_NONE = 308,
	STR_ACCESS_LIFT = 584,
	STR_LIVING_QUARTERS = 585,
	STR_LABORATORY = 586,
	STR_WORKSHOP = 587,
	STR_SMALL_RADAR_SYSTEM = 588,
	STR_LARGE_RADAR_SYSTEM = 589,
	STR_MISSILE_DEFENCES = 590,
	STR_GENERAL_STORES = 591,
	STR_ALIEN_CONTAINMENT = 592,
	STR_LASER_DEFENCES = 593,
	STR_PLASMA_DEFENCES = 594,
	STR_FUSION_BALL_DEFENCES = 595,
	STR_GRAV_SHIELD = 596,
	STR_MIND_SHIELD = 597,
	STR_PSIONIC_LABORATORY = 598,
	STR_HYPER_WAVE_DECODER = 599,
	STR_HANGAR = 600,
	STR_SKYRANGER = 569,
	STR_LIGHTNING = 570,
	STR_AVENGER = 571,
	STR_INTERCEPTOR = 572,
	STR_FIRESTORM = 573,
	STR_READY = 268,
	STR_OUT = 269,
	STR_REPAIRS = 270,
	STR_REFUELLING = 271,
	STR_REARMING = 272,
	STR_INSTALLATION = 77,
	STR_CRAFT_RENTAL = 955,
	STR_SALARIES = 956,
	STR_BASE_MAINTENANCE = 957,
	STR_COST_PER_UNIT = 958,
	STR_QUANTITY = 959,
	STR_TOTAL = 960,
	STR_INCOME = 161,
	STR_DISMANTLE = 848,
	STR_FACILITY_IN_USE = 849,
	STR_CANNOT_DISMANTLE_FACILITY = 850,
	STR_COST_UC = 72,
	STR_CONSTRUCTION_TIME = 73,
	STR_DAYS = 74,
	STR_MAINTENANCE = 75,
	STR_CANNOT_BUILD_HERE = 254,
	STR_NOT_ENOUGH_MONEY = 257,
	STR_PRODUCTION_OF = 177,
	STR_AT = 178,
	STR_IS_COMPLETE = 179,
	STR_DAMAGE = 645,
	STR_FUEL = 306,
	STR_AMMO = 322,
	STR_EQUIPMENT = 324,
	STR_MAX = 326,
	STR_SELECT_SQUAD_FOR = 333,
	STR_SPACE_AVAILABLE = 334,
	STR_SPACE_USED = 335,
	STR_SELECT_SITE_FOR_NEW_BASE = 283,
	STR_COST = 143,
	STR_AREA = 144,
	STR_BASE_NAME = 145,
	STR_SELECT_POSITION_FOR_ACCESS_LIFT = 146,
	STR_NORTH_AMERICA = 543,
	STR_ARCTIC = 544,
	STR_ANTARCTICA = 545,
	STR_SOUTH_AMERICA = 546,
	STR_EUROPE = 547,
	STR_NORTH_AFRICA = 548,
	STR_SOUTHERN_AFRICA = 549,
	STR_CENTRAL_ASIA = 550,
	STR_SOUTH_EAST_ASIA = 551,
	STR_SIBERIA = 552,
	STR_AUSTRALASIA = 553,
	STR_PACIFIC = 554,
	STR_NORTH_ATLANTIC = 555,
	STR_SOUTH_ATLANTIC = 556,
	STR_INDIAN_OCEAN = 557,
	STR_MOTION_SCANNER = 523,
	STR_MEDI_KIT = 524,
	STR_TANK_CANNON = 525,
	STR_TANK_ROCKET_LAUNCHER = 526,
	STR_TANK_LASER_CANNON = 527,
	STR_HOVERTANK_PLASMA = 528,
	STR_HOVERTANK_LAUNCHER = 529,
	STR_STINGRAY_LAUNCHER = 530,
	STR_AVALANCHE_LAUNCHER = 531,
	STR_CANNON = 532,
	STR_FUSION_BALL_LAUNCHER = 533,
	STR_LASER_CANNON = 534,
	STR_PLASMA_BEAM = 535,
	STR_STINGRAY_MISSILE = 536,
	STR_AVALANCHE_MISSILE = 537,
	STR_CANNON_ROUNDS = 538,
	STR_FUSION_BALL = 539,
	STR_SOLDIER = 540,
	STR_SCIENTIST = 541,
	STR_ENGINEER = 542,
	STR_PISTOL = 857,
	STR_PISTOL_CLIP = 858,
	STR_RIFLE = 859,
	STR_RIFLE_CLIP = 860,
	STR_HEAVY_CANNON = 861,
	STR_HC_AP_AMMO = 862,
	STR_HC_HE_AMMO = 863,
	STR_HC_I_AMMO = 864,
	STR_AUTO_CANNON = 865,
	STR_AC_AP_AMMO = 866,
	STR_AC_HE_AMMO = 868,
	STR_AC_I_AMMO = 869,
	STR_ROCKET_LAUNCHER = 870,
	STR_SMALL_ROCKET = 871,
	STR_LARGE_ROCKET = 872,
	STR_INCENDIARY_ROCKET = 873,
	STR_LASER_PISTOL = 874,
	STR_LASER_RIFLE = 875,
	STR_HEAVY_LASER = 876,
	STR_GRENADE = 877,
	STR_SMOKE_GRENADE = 878,
	STR_PROXIMITY_GRENADE = 879,
	STR_HIGH_EXPLOSIVE = 880,
	STR_UFO = 574,
	STR_STINGRAY_UC = 575,
	STR_AVALANCHE_UC = 576,
	STR_CANNON_UC = 577,
	STR_FUSION_BALL_UC = 578,
	STR_LASER_CANNON_UC = 579,
	STR_PLASMA_BEAM_UC = 580,
	STR_SELECT_ARMAMENT = 345,
	STR_AMMUNITION = 346,
	STR_ARMAMENT = 347,
	STR_AVAILABLE = 348,
	STR_NA = 349,
	STR_NEW_YORK = 728,
	STR_WASHINGTON = 729,
	STR_LOS_ANGELES = 730,
	STR_MONTREAL = 731,
	STR_HAVANA = 732,
	STR_MEXICO_CITY = 733,
	STR_CHICAGO = 734,
	STR_VANCOUVER = 735,
	STR_DALLAS = 736,
	STR_BRASILIA = 737,
	STR_BOGOTA = 738,
	STR_BUENOS_AIRES = 739,
	STR_SANTIAGO = 740,
	STR_RIO_DE_JANEIRO = 741,
	STR_LIMA = 742,
	STR_CARACAS = 743,
	STR_LONDON = 744,
	STR_PARIS = 745,
	STR_BERLIN = 746,
	STR_MOSCOW = 747,
	STR_ROME = 748,
	STR_MADRID = 749,
	STR_BUDAPEST = 750,
	STR_LAGOS = 751,
	STR_CAIRO = 752,
	STR_CASABLANCA = 753,
	STR_PRETORIA = 754,
	STR_NAIROBI = 755,
	STR_CAPE_TOWN = 756,
	STR_KINSHASA = 757,
	STR_ANKARA = 758,
	STR_DELHI = 759,
	STR_KARACHI = 760,
	STR_BAGHDAD = 761,
	STR_TEHRAN = 762,
	STR_BOMBAY = 763,
	STR_CALCUTTA = 764,
	STR_TOKYO = 765,
	STR_BEIJING = 766,
	STR_BANGKOK = 767,
	STR_MANILA = 768,
	STR_SEOUL = 769,
	STR_SINGAPORE = 770,
	STR_JAKARTA = 771,
	STR_SHANGHAI = 772,
	STR_HONG_KONG = 773,
	STR_NOVOSIBIRSK = 774,
	STR_CANBERRA = 775,
	STR_WELLINGTON = 776,
	STR_MELBOURNE = 777,
	STR_PERTH = 778,
	STR_SMALL_SCOUT = 689,
	STR_MEDIUM_SCOUT = 690,
	STR_LARGE_SCOUT = 691,
	STR_HARVESTER = 692,
	STR_ABDUCTER = 693,
	STR_TERROR_SHIP = 694,
	STR_BATTLESHIP = 695,
	STR_SUPPLY_SHIP = 696,
	STR_UFO_= 235,
	STR_NORTH = 357,
	STR_NORTH_EAST = 358,
	STR_EAST = 359,
	STR_SOUTH_EAST = 360,
	STR_SOUTH = 361,
	STR_SOUTH_WEST = 362,
	STR_WEST = 363,
	STR_NORTH_WEST = 364,
	STR_SELECT_ACTION = 365,
	STR_VERY_LARGE = 368,
	STR_LARGE = 369,
	STR_MEDIUM = 370,
	STR_SMALL = 371,
	STR_VERY_SMALL = 372,
	STR_GROUND = 373,
	STR_VERY_LOW = 374,
	STR_LOW = 375,
	STR_HIGH = 376,
	STR_VERY_HIGH = 377,
	STR_DETECTED = 378,
	STR_SIZE = 379,
	STR_ALTITUDE = 380,
	STR_HEADING = 381,
	STR_SPEED = 382,
	STR_CENTRE_ON_UFO = 383,
	STR_STANDOFF = 919,
	STR_CAUTIOUS_ATTACK = 920,
	STR_STANDARD_ATTACK = 921,
	STR_AGGRESSIVE_ATTACK = 922,
	STR_DISENGAGING = 923,
	STR_UFO_HIT = 924,
	STR_UFO_DESTROYED = 925,
	STR_UFO_CRASH_LANDS = 926,
	STR_MINIMIZE_AT_STANDOFF = 927,
	STR_UFO_RETURN_FIRE = 928,
	STR_INTERCEPTOR_DAMAGED = 929,
	STR_INTERCEPTOR_DESTROYED = 930,
	STR_UFO_OUTRUNNING_INTERCEPTOR = 931,
	STR_INTERCEPT = 936,
	STR_BASES = 937,
	STR_GRAPHS = 938,
	STR_UFOPEDIA = 939,
	STR_OPTIONS = 940,
	STR_FUNDING_UC = 941,
	STR_5_SECS = 942,
	STR_1_MIN = 943,
	STR_5_MINS = 944,
	STR_30_MINS = 945,
	STR_1_HOUR = 946,
	STR_1_DAY = 947,
	STR_TARGET = 273,
	STR_TARGET_WAY_POINT = 277,
	STR_SELECT_DESTINATION = 281,
	STR_RETURN_TO_BASE = 284,
	STR_SELECT_NEW_TARGET = 285,
	STR_PATROL = 286,
	STR_STATUS_ = 287,
	STR_DAMAGED_RETURNING_TO_BASE = 288,
	STR_LOW_FUEL_RETURNING_TO_BASE = 289,
	STR_PATROLLING = 290,
	STR_TAILING_UFO = 291,
	STR_INTERCEPTING_UFO = 292,
	STR_RETURNING_TO_BASE = 293,
	STR_DESTINATION_ALIEN_BASE = 294,
	STR_DESTINATION_CRASH_SITE = 295,
	STR_DESTINATION_LANDING_SITE = 296,
	STR_DESTINATION_WAY_POINT = 297,
	STR_BASE_UC_ = 298,
	STR_SPEED_ = 299,
	STR_MAXIMUM_SPEED_ = 300,
	STR_ALTITUDE_ = 301,
	STR_FUEL_ = 306,
	STR_WEAPON_1_ = 307,
	STR_ROUNDS_ = 309,
	STR_WEAPON_2_ = 310,
	STR_TRACKING_LOST = 384,
	STR_REDIRECT_CRAFT = 385,
	STR_GO_TO_LAST_KNOWN_UFO_POSITION = 386,
	STR_ALIEN_BASE_ = 390,
	STR_CRASH_SITE_ = 391,
	STR_LANDING_SITE_ = 392,
	STR_WAY_POINT_ = 393,
	STR_TERROR_SITE_ = 394,
	STR_HAS_REACHED = 395,
	STR_DESTINATION = 396,
	STR_NOW_PATROLLING = 397,
	STR_TARGETTED_BY = 798,
	STR_IS_LOW_ON_FUEL = 802,
	STR_OK_5_SECS = 180
};

#endif
