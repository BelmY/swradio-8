#
/*
 *    Copyright (C) 2013
 *    Jan van Katwijk (J.vanKatwijk@gmail.com)
 *    Lazy Chair Computing
 *
 *    This file is part of the SDR-J (JSDR).
 *    SDR-J is free software; you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation; either version 2 of the License, or
 *    (at your option) any later version.
 *
 *    SDR-J is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with SDR-J; if not, write to the Free Software
 *    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */
#
#
//
//	Tables for fac entries. To be used ONLY in frameprocessor
#ifndef	__FAC_TABLES
#define	__FAC_TABLES

#include	<stdint.h>

struct facElement table_modeA [] = {
	{2, 26}, {2, 46}, {2, 66}, {2, 86},
	{3, 10}, {3, 20}, {3, 50}, {3, 70}, {3, 90},
	{4, 14}, {4, 22}, {4, 24}, {4, 62}, {4, 74}, {4, 94},
	{5, 26}, {5, 38}, {5, 58}, {5, 66}, {5, 78},
	{6, 22}, {6, 30}, {6, 42}, {6, 62}, {6, 70}, {6, 82},
	{7, 26}, {7, 34}, {7, 46}, {7, 66}, {7, 74}, {7, 86},
	{8, 10}, {8, 30}, {8, 38}, {8, 50}, {8, 58}, {8, 70}, {8, 78}, {8, 90},
	{9, 14}, {9, 22}, {9, 34}, {9, 42}, {9, 62}, {9, 74}, {9, 82}, {9, 94},
	{10, 26}, {10, 38}, {10, 46}, {10, 66}, {10, 86},
	{11, 10}, {11, 30}, {11, 50}, {11, 70}, {11, 90},
	{12, 14}, {12, 34}, {12, 74}, {12, 94},
	{13, 38}, {13, 58}, {13, 78},
	{-1, -1}
};

struct facElement table_modeB [] = {
	{2, 13}, {2, 25}, {2, 43}, {2, 55}, {2, 67},
	{3, 15}, {3, 27}, {3, 45}, {3, 57}, {3, 69},
	{4, 17}, {4, 29}, {4, 47}, {4, 59}, {4, 71},
	{5, 19}, {5, 31}, {5, 49}, {5, 61}, {5, 73},
	{6,  9}, {6, 21}, {6, 33}, {6, 51}, {6, 63}, {6, 75},
	{7, 11}, {7, 23}, {7, 35}, {7, 53}, {7, 65}, {7, 77},
	{8, 13}, {8, 25}, {8, 37}, {8, 55}, {8, 67}, {8, 79},
	{9, 15}, {9, 27}, {9, 39}, {9, 57}, {9, 69}, {9, 81},
	{10, 17}, {10, 29}, {10, 41}, {10, 59}, {10, 71}, {10, 83},
	{11, 19}, {11, 31}, {11, 43}, {11, 61}, {11, 73},
	{12, 21}, {12, 33}, {12, 45}, {12, 63}, {12, 75},
	{13, 23}, {13, 35}, {13, 47}, {13, 65}, {13, 77},
	{-1, -1}
};

struct facElement table_modeC [] = {
	{3,  9}, {3, 21}, {3, 45}, {3, 57},
	{4, 23}, {4, 35}, {4, 47},
	{5, 13}, {5, 25}, {5, 37}, {5, 49},
	{6, 15}, {6, 27}, {6, 39}, {6, 51},
	{7,  5}, {7, 17}, {7, 29}, {7, 41}, {7, 53},
	{8,  7}, {8, 19}, {8, 31}, {8, 43}, {8, 55},
	{9,  9}, {9, 21}, {9, 45}, {9, 57},
	{10, 23}, {10, 35}, {10, 47},
	{11, 13}, {11, 25}, {11, 37}, {11, 49},
	{12, 15}, {12, 27}, {12, 39}, {12, 51},
	{13,  5}, {13, 17}, {13, 29}, {13, 41}, {13, 53},
	{14,  7}, {14, 19}, {14, 31}, {14, 43}, {14, 55},
	{15,  9}, {15, 21}, {15, 45}, {15, 57},
	{16, 23}, {16, 35}, {16, 47},
	{17, 13}, {17, 25}, {17, 37}, {17, 49},
	{18, 15}, {18, 27}, {18, 39}, {18, 51},
	{-1 , -1}
};

struct facElement table_modeD [] = {
	{ 3,  9}, { 3, 18}, { 3, 27},
	{ 4, 10}, { 4, 19},
	{ 5, 11}, { 5, 20}, { 5, 29},
	{ 6, 12}, { 6, 30},
	{ 7, 13}, { 7, 22}, { 7, 31},
	{ 8,  5}, { 8, 14}, { 8, 23}, { 8, 32},
	{ 9,  6}, { 9, 15}, { 9, 24}, { 9, 33},
	{10, 16}, {10, 25}, {10, 34},
	{11,  8}, {11, 17}, {11, 26}, {11, 35},
	{12,  9}, {12, 18}, {12, 27}, {12, 36},
	{13, 10}, {13, 19}, {13, 37},
	{14, 11}, {14, 20}, {14, 29},
	{15, 12}, {15, 30},
	{16, 13}, {16, 22}, {16, 31},
	{17,  5}, {17, 14}, {17, 23}, {17, 32},
	{18,  6}, {18, 15}, {18, 24}, {18, 33},
	{19, 16}, {19, 25}, {19, 34},
	{20,  8}, {20, 17}, {20, 26}, {20, 35},
	{21,  9}, {21, 18}, {21, 27}, {21, 36},
	{22, 10}, {22, 19}, {22, 37},
	{-1, -1}
};

struct facElement *getFacTableforMode (uint8_t Mode) {
	switch (Mode) {
	   default:
	   case 1:
	      return table_modeA;
	   case 2:
	      return table_modeB;
	   case 3:
	      return table_modeC;
	   case 4:
	      return table_modeD;
	}
}

#endif

