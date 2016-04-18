/**
 * RGBWWLed - simple Library for controlling RGB WarmWhite ColdWhite LEDs via PWM
 * @file
 * @author  Patrick Jahns http://github.com/patrickjahns
 *
 * All files of this project are provided under the LGPL v3 license.
 */

#ifndef RGBWWCONST_H_
#define RGBWWCONST_H_

#if RGBWW_CALC_DEPTH == 8

#if RGBWW_PWMRESOLUTION == 256
const uint8_t RGBWW_dim_curve[256] {
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,
    1,  1,  1,  1,  1,  1,  1,  1,  1,  2,  2,  2,  2,  2,  2,  2,
    2,  3,  3,  3,  3,  3,  3,  3,  4,  4,  4,  4,  4,  5,  5,  5,
    5,  6,  6,  6,  6,  7,  7,  7,  7,  8,  8,  8,  9,  9,  9, 10,
   10, 10, 11, 11, 11, 12, 12, 13, 13, 13, 14, 14, 15, 15, 16, 16,
   17, 17, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 24, 24, 25,
   25, 26, 27, 27, 28, 29, 29, 30, 31, 32, 32, 33, 34, 35, 35, 36,
   37, 38, 39, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 50,
   51, 52, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 66, 67, 68,
   69, 70, 72, 73, 74, 75, 77, 78, 79, 81, 82, 83, 85, 86, 87, 89,
   90, 92, 93, 95, 96, 98, 99,101,102,104,105,107,109,110,112,114,
  115,117,119,120,122,124,126,127,129,131,133,135,137,138,140,142,
  144,146,148,150,152,154,156,158,160,162,164,167,169,171,173,175,
  177,180,182,184,186,189,191,193,196,198,200,203,205,208,210,213,
  215,218,220,223,225,228,231,233,236,239,241,244,247,249,252,255
};

#else
const uint16_t RGBWW_dim_curve[256] {
	0, 0, 1, 1, 2, 2, 3, 3,
	3, 4, 4, 5, 5, 6, 6, 7,
	7, 7, 8, 8, 9, 9, 10, 10,
	11, 11, 12, 12, 13, 13, 14, 15,
	15, 16, 17, 17, 18, 19, 19, 20,
	21, 22, 23, 23, 24, 25, 26, 27,
	28, 29, 30, 31, 32, 33, 34, 35,
	36, 37, 39, 40, 41, 42, 43, 45,
	46, 47, 49, 50, 51, 53, 54, 56,
	57, 59, 60, 62, 64, 65, 67, 69,
	70, 72, 74, 76, 78, 80, 81, 83,
	85, 87, 89, 91, 94, 96, 98, 100,
	102, 104, 107, 109, 111, 114, 116, 119,
	121, 124, 126, 129, 131, 134, 137, 139,
	142, 145, 148, 151, 154, 157, 160, 163,
	166, 169, 172, 175, 178, 181, 185, 	188,
	191, 195, 198, 202, 205, 209, 213, 	216,
	220, 224, 227, 231, 235, 239, 243, 	247,
	251, 255, 259, 263, 268, 272, 276, 	280,
	285, 289, 294, 298, 303, 307, 312, 	317,
	322, 326, 331, 336, 341, 346, 351, 	356,
	361, 367, 372, 377, 383, 388, 393, 	399,
	404, 410, 416, 421, 427, 433, 439, 	445,
	451, 457, 463, 469, 475, 481, 488, 	494,
	500, 507, 513, 520, 526, 533, 540, 	547,
	553, 560, 567, 574, 581, 588, 596, 	603,
	610, 618, 625, 632, 640, 648, 655, 	663,
	671, 679, 686, 694, 702, 711, 719, 	727,
	735, 743, 752, 760, 769, 777, 786, 	795,
	804, 812, 821, 830, 839, 848, 858, 	867,
	876, 885, 895, 904, 914, 923, 933, 	943,
	953, 963, 973, 983, 993, 1003, 1013, 1023
};
#endif // RGBWW_PWMRESOLUTION
#endif // RGBWW_CALC_DEPTH

#if RGBWW_CALC_DEPTH  == 10
#if RGBWW_PWMRESOLUTION == 65536

/*
 * calculated with CIE 1931 Luminance formula
 *	L* = 116(Y/Yn)^1/3 � 16 , Y/Yn > 0.008856
 *	L* = 903.3(Y/Yn), Y/Yn <= 0.008856
 *
 */
const uint16_t RGBWW_dim_curve[1024] = {
	0, 7, 14, 21, 28, 35, 42, 49,
	56, 63, 70, 78, 85, 92, 99, 106,
	113, 120, 127, 134, 141, 148, 156, 163,
	170, 177, 184, 191, 198, 205, 212, 219,
	226, 234, 241, 248, 255, 262, 269, 276,
	283, 290, 297, 304, 312, 319, 326, 333,
	340, 347, 354, 361, 368, 375, 382, 390,
	397, 404, 411, 418, 425, 432, 439, 446,
	453, 460, 468, 475, 482, 489, 496, 503,
	510, 517, 524, 531, 538, 546, 553, 560,
	567, 574, 581, 588, 595, 603, 610, 617,
	625, 632, 640, 647, 655, 663, 670, 678,
	686, 694, 702, 710, 718, 727, 735, 743,
	752, 760, 769, 777, 786, 795, 803, 812,
	821, 830, 839, 848, 857, 867, 876, 885,
	895, 904, 914, 923, 933, 943, 953, 963,
	973, 983, 993, 1003, 1013, 1024, 1034, 1044,
	1055, 1066, 1076, 1087, 1098, 1109, 1120, 1131,
	1142, 1153, 1164, 1176, 1187, 1198, 1210, 1222,
	1233, 1245, 1257, 1269, 1281, 1293, 1305, 1317,
	1329, 1342, 1354, 1367, 1379, 1392, 1405, 1418,
	1430, 1443, 1457, 1470, 1483, 1496, 1510, 1523,
	1537, 1550, 1564, 1578, 1591, 1605, 1619, 1634,
	1648, 1662, 1676, 1691, 1705, 1720, 1735, 1749,
	1764, 1779, 1794, 1809, 1824, 1840, 1855, 1870,
	1886, 1902, 1917, 1933, 1949, 1965, 1981, 1997,
	2013, 2029, 2046, 2062, 2079, 2096, 2112, 2129,
	2146, 2163, 2180, 2197, 2215, 2232, 2249, 2267,
	2285, 2302, 2320, 2338, 2356, 2374, 2392, 2411,
	2429, 2447, 2466, 2485, 2503, 2522, 2541, 2560,
	2579, 2599, 2618, 2637, 2657, 2676, 2696, 2716,
	2736, 2756, 2776, 2796, 2816, 2837, 2857, 2878,
	2898, 2919, 2940, 2961, 2982, 3003, 3025, 3046,
	3067, 3089, 3111, 3132, 3154, 3176, 3198, 3220,
	3243, 3265, 3288, 3310, 3333, 3356, 3379, 3402,
	3425, 3448, 3471, 3495, 3518, 3542, 3566, 3589,
	3613, 3637, 3662, 3686, 3710, 3735, 3759, 3784,
	3809, 3834, 3859, 3884, 3909, 3934, 3960, 3985,
	4011, 4037, 4063, 4089, 4115, 4141, 4168, 4194,
	4221, 4247, 4274, 4301, 4328, 4355, 4382, 4410,
	4437, 4465, 4492, 4520, 4548, 4576, 4604, 4633,
	4661, 4690, 4718, 4747, 4776, 4805, 4834, 4863,
	4892, 4922, 4951, 4981, 5011, 5041, 5071, 5101,
	5131, 5161, 5192, 5223, 5253, 5284, 5315, 5346,
	5377, 5409, 5440, 5472, 5504, 5535, 5567, 5599,
	5632, 5664, 5696, 5729, 5762, 5795, 5828, 5861,
	5894, 5927, 5961, 5994, 6028, 6062, 6096, 6130,
	6164, 6198, 6233, 6267, 6302, 6337, 6372, 6407,
	6442, 6477, 6513, 6549, 6584, 6620, 6656, 6692,
	6729, 6765, 6801, 6838, 6875, 6912, 6949, 6986,
	7023, 7061, 7098, 7136, 7174, 7212, 7250, 7288,
	7327, 7365, 7404, 7443, 7482, 7521, 7560, 7599,
	7639, 7678, 7718, 7758, 7798, 7838, 7878, 7919,
	7959, 8000, 8041, 8082, 8123, 8164, 8206, 8247,
	8289, 8331, 8373, 8415, 8457, 8499, 8542, 8584,
	8627, 8670, 8713, 8757, 8800, 8843, 8887, 8931,
	8975, 9019, 9063, 9108, 9152, 9197, 9242, 9287,
	9332, 9377, 9422, 9468, 9514, 9559, 9605, 9651,
	9698, 9744, 9791, 9837, 9884, 9931, 9979, 10026,
	10073, 10121, 10169, 10217, 10265, 10313, 10361, 10410,
	10458, 10507, 10556, 10605, 10655, 10704, 10754, 10803,
	10853, 10903, 10954, 11004, 11054, 11105, 11156, 11207,
	11258, 11309, 11361, 11412, 11464, 11516, 11568, 11620,
	11673, 11725, 11778, 11831, 11884, 11937, 11990, 12044,
	12097, 12151, 12205, 12259, 12313, 12368, 12422, 12477,
	12532, 12587, 12642, 12698, 12753, 12809, 12865, 12921,
	12977, 13033, 13090, 13147, 13204, 13261, 13318, 13375,
	13433, 13490, 13548, 13606, 13664, 13723, 13781, 13840,
	13899, 13958, 14017, 14076, 14136, 14195, 14255, 14315,
	14375, 14436, 14496, 14557, 14618, 14679, 14740, 14801,
	14863, 14925, 14986, 15049, 15111, 15173, 15236, 15298,
	15361, 15424, 15488, 15551, 15615, 15678, 15742, 15806,
	15871, 15935, 16000, 16065, 16130, 16195, 16260, 16326,
	16391, 16457, 16523, 16589, 16656, 16722, 16789, 16856,
	16923, 16990, 17058, 17125, 17193, 17261, 17329, 17398,
	17466, 17535, 17604, 17673, 17742, 17812, 17881, 17951,
	18021, 18091, 18161, 18232, 18303, 18374, 18445, 18516,
	18587, 18659, 18731, 18803, 18875, 18947, 19020, 19092,
	19165, 19238, 19312, 19385, 19459, 19533, 19607, 19681,
	19755, 19830, 19905, 19980, 20055, 20130, 20206, 20281,
	20357, 20433, 20510, 20586, 20663, 20740, 20817, 20894,
	20971, 21049, 21127, 21205, 21283, 21361, 21440, 21518,
	21597, 21677, 21756, 21835, 21915, 21995, 22075, 22155,
	22236, 22317, 22398, 22479, 22560, 22641, 22723, 22805,
	22887, 22969, 23052, 23134, 23217, 23300, 23384, 23467,
	23551, 23635, 23719, 23803, 23887, 23972, 24057, 24142,
	24227, 24312, 24398, 24484, 24570, 24656, 24743, 24829,
	24916, 25003, 25090, 25178, 25266, 25353, 25441, 25530,
	25618, 25707, 25796, 25885, 25974, 26064, 26153, 26243,
	26333, 26424, 26514, 26605, 26696, 26787, 26878, 26970,
	27062, 27154, 27246, 27338, 27431, 27524, 27617, 27710,
	27803, 27897, 27991, 28085, 28179, 28274, 28368, 28463,
	28559, 28654, 28749, 28845, 28941, 29037, 29134, 29230,
	29327, 29424, 29521, 29619, 29717, 29814, 29913, 30011,
	30109, 30208, 30307, 30406, 30506, 30605, 30705, 30805,
	30906, 31006, 31107, 31208, 31309, 31410, 31512, 31614,
	31716, 31818, 31920, 32023, 32126, 32229, 32332, 32436,
	32540, 32644, 32748, 32852, 32957, 33062, 33167, 33272,
	33378, 33484, 33590, 33696, 33802, 33909, 34016, 34123,
	34230, 34338, 34446, 34554, 34662, 34770, 34879, 34988,
	35097, 35206, 35316, 35426, 35536, 35646, 35757, 35868,
	35978, 36090, 36201, 36313, 36425, 36537, 36649, 36762,
	36874, 36988, 37101, 37214, 37328, 37442, 37556, 37671,
	37785, 37900, 38015, 38131, 38246, 38362, 38478, 38594,
	38711, 38828, 38945, 39062, 39179, 39297, 39415, 39533,
	39651, 39770, 39889, 40008, 40127, 40247, 40367, 40487,
	40607, 40728, 40849, 40970, 41091, 41212, 41334, 41456,
	41578, 41701, 41823, 41946, 42069, 42193, 42316, 42440,
	42565, 42689, 42814, 42938, 43063, 43189, 43314, 43440,
	43566, 43693, 43819, 43946, 44073, 44200, 44328, 44456,
	44584, 44712, 44841, 44969, 45098, 45228, 45357, 45487,
	45617, 45747, 45878, 46008, 46139, 46271, 46402, 46534,
	46666, 46798, 46931, 47063, 47196, 47329, 47463, 47597,
	47731, 47865, 47999, 48134, 48269, 48404, 48540, 48676,
	48812, 48948, 49084, 49221, 49358, 49496, 49633, 49771,
	49909, 50047, 50186, 50325, 50464, 50603, 50742, 50882,
	51022, 51163, 51303, 51444, 51585, 51727, 51868, 52010,
	52152, 52295, 52437, 52580, 52724, 52867, 53011, 53155,
	53299, 53443, 53588, 53733, 53878, 54024, 54170, 54316,
	54462, 54609, 54755, 54903, 55050, 55198, 55345, 55494,
	55642, 55791, 55940, 56089, 56238, 56388, 56538, 56688,
	56839, 56990, 57141, 57292, 57444, 57596, 57748, 57900,
	58053, 58206, 58359, 58513, 58666, 58820, 58975, 59129,
	59284, 59439, 59595, 59750, 59906, 60062, 60219, 60375,
	60532, 60690, 60847, 61005, 61163, 61322, 61480, 61639,
	61798, 61958, 62117, 62277, 62438, 62598, 62759, 62920,
	63082, 63243, 63405, 63567, 63730, 63893, 64056, 64219,
	64383, 64546, 64711, 64875, 65040, 65205, 65370, 65535
};

#else
const uint16_t RGBWW_dim_curve[1024] = {
		0, 0, 0, 0, 0, 1, 1, 1, 1, 1,
		1, 1, 1, 1, 2, 2, 2, 2, 2, 2,
		2, 2, 2, 3, 3, 3, 3, 3, 3, 3,
		3, 3, 4, 4, 4, 4, 4, 4, 4, 4,
		4, 5, 5, 5, 5, 5, 5, 5, 5, 5,
		6, 6, 6, 6, 6, 6, 6, 6, 6, 7,
		7, 7, 7, 7, 7, 7, 7, 7, 8, 8,
		8, 8, 8, 8, 8, 8, 8, 9, 9, 9,
		9, 9, 9, 9, 9, 9, 10, 10, 10, 10,
		10, 10, 10, 10, 10, 11, 11, 11, 11, 11,
		11, 11, 11, 12, 12, 12, 12, 12, 12, 12,
		13, 13, 13, 13, 13, 13, 13, 14, 14, 14,
		14, 14, 14, 14, 15, 15, 15, 15, 15, 15,
		16, 16, 16, 16, 16, 16, 16, 17, 17, 17,
		17, 17, 17, 18, 18, 18, 18, 18, 19, 19,
		19, 19, 19, 19, 20, 20, 20, 20, 20, 21,
		21, 21, 21, 21, 22, 22, 22, 22, 22, 23,
		23, 23, 23, 23, 24, 24, 24, 24, 24, 25,
		25, 25, 25, 26, 26, 26, 26, 26, 27, 27,
		27, 27, 28, 28, 28, 28, 28, 29, 29, 29,
		29, 30, 30, 30, 30, 31, 31, 31, 31, 32,
		32, 32, 32, 33, 33, 33, 34, 34, 34, 34,
		35, 35, 35, 35, 36, 36, 36, 37, 37, 37,
		37, 38, 38, 38, 39, 39, 39, 39, 40, 40,
		40, 41, 41, 41, 41, 42, 42, 42, 43, 43,
		43, 44, 44, 44, 45, 45, 45, 46, 46, 46,
		47, 47, 47, 48, 48, 48, 49, 49, 49, 50,
		50, 50, 51, 51, 51, 52, 52, 52, 53, 53,
		53, 54, 54, 55, 55, 55, 56, 56, 56, 57,
		57, 58, 58, 58, 59, 59, 59, 60, 60, 61,
		61, 61, 62, 62, 63, 63, 63, 64, 64, 65,
		65, 65, 66, 66, 67, 67, 68, 68, 68, 69,
		69, 70, 70, 71, 71, 71, 72, 72, 73, 73,
		74, 74, 75, 75, 75, 76, 76, 77, 77, 78,
		78, 79, 79, 80, 80, 81, 81, 82, 82, 82,
		83, 83, 84, 84, 85, 85, 86, 86, 87, 87,
		88, 88, 89, 89, 90, 90, 91, 91, 92, 93,
		93, 94, 94, 95, 95, 96, 96, 97, 97, 98,
		98, 99, 99, 100, 101, 101, 102, 102, 103, 103,
		104, 104, 105, 106, 106, 107, 107, 108, 108, 109,
		110, 110, 111, 111, 112, 113, 113, 114, 114, 115,
		116, 116, 117, 117, 118, 119, 119, 120, 120, 121,
		122, 122, 123, 124, 124, 125, 126, 126, 127, 127,
		128, 129, 129, 130, 131, 131, 132, 133, 133, 134,
		135, 135, 136, 137, 137, 138, 139, 139, 140, 141,
		141, 142, 143, 144, 144, 145, 146, 146, 147, 148,
		149, 149, 150, 151, 151, 152, 153, 154, 154, 155,
		156, 157, 157, 158, 159, 159, 160, 161, 162, 163,
		163, 164, 165, 166, 166, 167, 168, 169, 169, 170,
		171, 172, 173, 173, 174, 175, 176, 177, 177, 178,
		179, 180, 181, 181, 182, 183, 184, 185, 186, 186,
		187, 188, 189, 190, 191, 191, 192, 193, 194, 195,
		196, 196, 197, 198, 199, 200, 201, 202, 203, 203,
		204, 205, 206, 207, 208, 209, 210, 211, 211, 212,
		213, 214, 215, 216, 217, 218, 219, 220, 221, 222,
		223, 223, 224, 225, 226, 227, 228, 229, 230, 231,
		232, 233, 234, 235, 236, 237, 238, 239, 240, 241,
		242, 243, 244, 245, 246, 247, 248, 249, 250, 251,
		252, 253, 254, 255, 256, 257, 258, 259, 260, 261,
		262, 263, 264, 265, 266, 267, 268, 269, 271, 272,
		273, 274, 275, 276, 277, 278, 279, 280, 281, 282,
		284, 285, 286, 287, 288, 289, 290, 291, 292, 294,
		295, 296, 297, 298, 299, 300, 301, 303, 304, 305,
		306, 307, 308, 310, 311, 312, 313, 314, 315, 317,
		318, 319, 320, 321, 323, 324, 325, 326, 327, 329,
		330, 331, 332, 333, 335, 336, 337, 338, 340, 341,
		342, 343, 345, 346, 347, 348, 350, 351, 352, 353,
		355, 356, 357, 359, 360, 361, 362, 364, 365, 366,
		368, 369, 370, 372, 373, 374, 376, 377, 378, 380,
		381, 382, 384, 385, 386, 388, 389, 390, 392, 393,
		394, 396, 397, 399, 400, 401, 403, 404, 405, 407,
		408, 410, 411, 412, 414, 415, 417, 418, 420, 421,
		422, 424, 425, 427, 428, 430, 431, 433, 434, 435,
		437, 438, 440, 441, 443, 444, 446, 447, 449, 450,
		452, 453, 455, 456, 458, 459, 461, 462, 464, 465,
		467, 468, 470, 472, 473, 475, 476, 478, 479, 481,
		482, 484, 486, 487, 489, 490, 492, 493, 495, 497,
		498, 500, 501, 503, 505, 506, 508, 510, 511, 513,
		514, 516, 518, 519, 521, 523, 524, 526, 528, 529,
		531, 533, 534, 536, 538, 539, 541, 543, 544, 546,
		548, 550, 551, 553, 555, 556, 558, 560, 562, 563,
		565, 567, 569, 570, 572, 574, 576, 577, 579, 581,
		583, 584, 586, 588, 590, 592, 593, 595, 597, 599,
		601, 602, 604, 606, 608, 610, 612, 613, 615, 617,
		619, 621, 623, 625, 626, 628, 630, 632, 634, 636,
		638, 640, 641, 643, 645, 647, 649, 651, 653, 655,
		657, 659, 661, 662, 664, 666, 668, 670, 672, 674,
		676, 678, 680, 682, 684, 686, 688, 690, 692, 694,
		696, 698, 700, 702, 704, 706, 708, 710, 712, 714,
		716, 718, 720, 722, 724, 726, 728, 731, 733, 735,
		737, 739, 741, 743, 745, 747, 749, 751, 753, 756,
		758, 760, 762, 764, 766, 768, 770, 773, 775, 777,
		779, 781, 783, 786, 788, 790, 792, 794, 796, 799,
		801, 803, 805, 807, 810, 812, 814, 816, 819, 821,
		823, 825, 827, 830, 832, 834, 837, 839, 841, 843,
		846, 848, 850, 852, 855, 857, 859, 862, 864, 866,
		869, 871, 873, 876, 878, 880, 883, 885, 887, 890,
		892, 894, 897, 899, 901, 904, 906, 909, 911, 913,
		916, 918, 921, 923, 925, 928, 930, 933, 935, 938,
		940, 942, 945, 947, 950, 952, 955, 957, 960, 962,
		965, 967, 970, 972, 975, 977, 980, 982, 985, 987,
		990, 992, 995, 997, 1000, 1002, 1005, 1008, 1010, 1013,
		1015, 1018, 1020, 1023,
};
#endif // RGBWW_PWMRESOLUTION
#endif // RGBWW_CALC_DEPTH



#endif // RGBWWCONST_H_