#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = -1;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 1000;
	var uLocal_29 = 1000;
	var uLocal_30 = 0;
	char* sLocal_31 = NULL;
	float fLocal_32 = 0f;
	struct<3> Local_33 = { 0, 0, 0 } ;
	float fLocal_36 = 0f;
	float fLocal_37 = 0f;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	float fLocal_41 = 0f;
	float fLocal_42 = 0f;
	float fLocal_43 = 0f;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 10;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	bool bLocal_121 = 0;
	bool bLocal_122 = 0;
	bool bLocal_123 = 0;
	bool bLocal_124 = 0;
	bool bLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	bool bLocal_128 = 0;
	bool bLocal_129 = 0;
	int iLocal_130 = 0;
	bool bLocal_131 = 0;
	bool bLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	bool bLocal_137 = 0;
	bool bLocal_138 = 0;
	bool bLocal_139 = 0;
	int iLocal_140 = 0;
	bool bLocal_141 = 0;
	int iLocal_142 = 0;
	bool bLocal_143 = 0;
	bool bLocal_144 = 0;
	bool bLocal_145 = 0;
	bool bLocal_146 = 0;
	bool bLocal_147 = 0;
	bool bLocal_148 = 0;
	bool bLocal_149 = 0;
	bool bLocal_150 = 0;
	bool bLocal_151 = 0;
	bool bLocal_152 = 0;
	float fLocal_153[85] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_239[85] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_325[85] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_411[85] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_497[85] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_583 = 0f;
	float fLocal_584 = 0f;
	float fLocal_585 = 0f;
	float fLocal_586 = 0f;
	float fLocal_587[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_658[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_729[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_800[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_871[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_942[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1013[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1084[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1155[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1226[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1297 = 0f;
	float fLocal_1298 = 0f;
	float fLocal_1299 = 0f;
	float fLocal_1300 = 0f;
	float fLocal_1301 = 0f;
	float fLocal_1302 = 0f;
	float fLocal_1303 = 0f;
	float fLocal_1304 = 0f;
	float fLocal_1305 = 0f;
	float fLocal_1306 = 0f;
	float fLocal_1307 = 0f;
	float fLocal_1308 = 0f;
	float fLocal_1309 = 0f;
	float fLocal_1310 = 0f;
	float fLocal_1311 = 0f;
	float fLocal_1312 = 0f;
	float fLocal_1313 = 0f;
	float fLocal_1314 = 0f;
	float fLocal_1315 = 0f;
	float fLocal_1316 = 0f;
	float fLocal_1317 = 0f;
	int iLocal_1318[85] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1404[85] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1490[85] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1576[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1647[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1718[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1789[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1860 = 0;
	int iLocal_1861 = 0;
	int iLocal_1862 = 0;
	int iLocal_1863 = 0;
	int iLocal_1864 = 0;
	int iLocal_1865 = 0;
	int iLocal_1866 = 0;
	int iLocal_1867 = 0;
	int iLocal_1868 = 0;
	int iLocal_1869 = 0;
	int iLocal_1870 = 0;
	int iLocal_1871 = 0;
	int iLocal_1872 = 0;
	int iLocal_1873 = 0;
	int iLocal_1874 = 0;
	int iLocal_1875 = 0;
	int iLocal_1876 = 0;
	struct<3> Local_1877[85];
	struct<3> Local_2133[70];
	struct<3> Local_2344[70];
	struct<3> Local_2555 = { 0, 0, 0 } ;
	struct<3> Local_2558 = { 0, 0, 0 } ;
	struct<3> Local_2561 = { 0, 0, 0 } ;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 0;
	var uLocal_2567 = 0;
	var uLocal_2568 = 0;
	var uLocal_2569 = 0;
	struct<3> Local_2570 = { 0, 0, 0 } ;
	struct<3> Local_2573 = { 0, 0, 0 } ;
	struct<3> Local_2576 = { 0, 0, 0 } ;
	struct<3> Local_2579 = { 0, 0, 0 } ;
	char cLocal_2582[64] = "";
	var uLocal_2590 = 0;
	var uLocal_2591 = 0;
	var uLocal_2592 = 0;
	var uLocal_2593 = 0;
	var uLocal_2594 = 0;
	var uLocal_2595 = 0;
	var uLocal_2596 = 0;
	var uLocal_2597 = 0;
	int iLocal_2598 = 0;
	int iLocal_2599[85] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2685[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2756[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2827 = 0;
	int iLocal_2828 = 0;
	int iLocal_2829 = 0;
	int iLocal_2830[85] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2916[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2932[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3003[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3074[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3085 = 0;
	int iLocal_3086 = 0;
	int iLocal_3087 = 0;
	var uLocal_3088 = 15;
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	int iLocal_3104 = 0;
	int iLocal_3105 = 0;
	int iLocal_3106 = 0;
	struct<61> Local_3107 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_3168 = 0;
	int iLocal_3169 = 0;
	int iLocal_3170[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3178[3] = { 0, 0, 0 };
	int iLocal_3182 = 0;
	int iLocal_3183[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3192 = 0;
	int iLocal_3193[2] = { 0, 0 };
	int iLocal_3196 = 0;
	int iLocal_3197 = 0;
	int iLocal_3198 = 0;
	int iLocal_3199 = 0;
	int iLocal_3200 = 0;
	int iLocal_3201 = 0;
	int iLocal_3202 = 0;
	int iLocal_3203 = 0;
	int iLocal_3204 = 0;
	bool bLocal_3205 = 0;
	int iLocal_3206 = 0;
	bool bLocal_3207 = 0;
	int iLocal_3208 = 0;
	int iLocal_3209 = 0;
	bool bLocal_3210 = 0;
	int iLocal_3211 = 0;
	bool bLocal_3212 = 0;
	bool bLocal_3213 = 0;
	bool bLocal_3214 = 0;
	int iLocal_3215[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3228 = 0;
	bool bLocal_3229 = 0;
	bool bLocal_3230 = 0;
	int iLocal_3231 = 0;
	int iLocal_3232 = 0;
	int iLocal_3233 = 0;
	int iLocal_3234 = 0;
	int iLocal_3235 = 0;
	int iLocal_3236 = 0;
	int iLocal_3237 = 0;
	int iLocal_3238 = 0;
	bool bLocal_3239 = 0;
	int iLocal_3240 = 0;
	int iLocal_3241 = 0;
	int iLocal_3242 = 0;
	int iLocal_3243 = 0;
	var uLocal_3244 = 0;
	int iLocal_3245 = 0;
	int iLocal_3246 = 0;
	int iLocal_3247 = 0;
	int iLocal_3248 = 0;
	int iLocal_3249 = 0;
	int iLocal_3250 = 0;
	int iLocal_3251 = 0;
	int iLocal_3252 = 0;
	int iLocal_3253 = 0;
	int iLocal_3254 = 0;
	int iLocal_3255 = 0;
	int iLocal_3256 = 0;
	int iLocal_3257 = 0;
	int iLocal_3258 = 0;
	int iLocal_3259 = 0;
	int iLocal_3260 = 0;
	int iLocal_3261 = 0;
	int iLocal_3262 = 0;
	float fLocal_3263 = 0f;
	float fLocal_3264 = 0f;
	float fLocal_3265 = 0f;
	float fLocal_3266 = 0f;
	float fLocal_3267 = 0f;
	float fLocal_3268 = 0f;
	int iLocal_3269 = 0;
	int iLocal_3270 = 0;
	int iLocal_3271 = 0;
	int iLocal_3272 = 0;
	struct<8> Local_3273 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_3281 = 0;
	var uLocal_3282 = 0;
	var uLocal_3283 = 0;
	var uLocal_3284 = 0;
	int iLocal_3285 = 0;
	int iLocal_3286 = 0;
	var uLocal_3287 = 0;
	var uLocal_3288 = 0;
	var uLocal_3289[5] = { 0, 0, 0, 0, 0 };
	char* sLocal_3295 = NULL;
	char* sLocal_3296 = NULL;
	char* sLocal_3297 = NULL;
	char* sLocal_3298 = NULL;
	char* sLocal_3299 = NULL;
	char* sLocal_3300 = NULL;
	char* sLocal_3301 = NULL;
	char* sLocal_3302 = NULL;
	var uLocal_3303 = 16;
	var uLocal_3304 = 0;
	var uLocal_3305 = 0;
	var uLocal_3306 = 0;
	var uLocal_3307 = 0;
	var uLocal_3308 = 0;
	var uLocal_3309 = 0;
	var uLocal_3310 = 0;
	var uLocal_3311 = 0;
	var uLocal_3312 = 0;
	var uLocal_3313 = 0;
	var uLocal_3314 = 0;
	var uLocal_3315 = 0;
	var uLocal_3316 = 0;
	var uLocal_3317 = 0;
	var uLocal_3318 = 0;
	var uLocal_3319 = 0;
	var uLocal_3320 = 0;
	var uLocal_3321 = 0;
	var uLocal_3322 = 0;
	var uLocal_3323 = 0;
	var uLocal_3324 = 0;
	var uLocal_3325 = 0;
	var uLocal_3326 = 0;
	var uLocal_3327 = 0;
	var uLocal_3328 = 0;
	var uLocal_3329 = 0;
	var uLocal_3330 = 0;
	var uLocal_3331 = 0;
	var uLocal_3332 = 0;
	var uLocal_3333 = 0;
	var uLocal_3334 = 0;
	var uLocal_3335 = 0;
	var uLocal_3336 = 0;
	var uLocal_3337 = 0;
	var uLocal_3338 = 0;
	var uLocal_3339 = 0;
	var uLocal_3340 = 0;
	var uLocal_3341 = 0;
	var uLocal_3342 = 0;
	var uLocal_3343 = 0;
	var uLocal_3344 = 0;
	var uLocal_3345 = 0;
	var uLocal_3346 = 0;
	var uLocal_3347 = 0;
	var uLocal_3348 = 0;
	var uLocal_3349 = 0;
	var uLocal_3350 = 0;
	var uLocal_3351 = 0;
	var uLocal_3352 = 0;
	var uLocal_3353 = 0;
	var uLocal_3354 = 0;
	var uLocal_3355 = 0;
	var uLocal_3356 = 0;
	var uLocal_3357 = 0;
	var uLocal_3358 = 0;
	var uLocal_3359 = 0;
	var uLocal_3360 = 0;
	var uLocal_3361 = 0;
	var uLocal_3362 = 0;
	var uLocal_3363 = 0;
	var uLocal_3364 = 0;
	var uLocal_3365 = 0;
	var uLocal_3366 = 0;
	var uLocal_3367 = 0;
	var uLocal_3368 = 0;
	var uLocal_3369 = 0;
	var uLocal_3370 = 0;
	var uLocal_3371 = 0;
	var uLocal_3372 = 0;
	var uLocal_3373 = 0;
	var uLocal_3374 = 0;
	var uLocal_3375 = 0;
	var uLocal_3376 = 0;
	var uLocal_3377 = 0;
	var uLocal_3378 = 0;
	var uLocal_3379 = 0;
	var uLocal_3380 = 0;
	var uLocal_3381 = 0;
	var uLocal_3382 = 0;
	var uLocal_3383 = 0;
	var uLocal_3384 = 0;
	var uLocal_3385 = 0;
	var uLocal_3386 = 0;
	var uLocal_3387 = 0;
	var uLocal_3388 = 0;
	var uLocal_3389 = 0;
	var uLocal_3390 = 0;
	var uLocal_3391 = 0;
	var uLocal_3392 = 0;
	var uLocal_3393 = 0;
	var uLocal_3394 = 0;
	var uLocal_3395 = 0;
	var uLocal_3396 = 0;
	var uLocal_3397 = 0;
	var uLocal_3398 = 0;
	var uLocal_3399 = 0;
	var uLocal_3400 = 0;
	var uLocal_3401 = 0;
	var uLocal_3402 = 0;
	var uLocal_3403 = 0;
	var uLocal_3404 = 0;
	var uLocal_3405 = 0;
	var uLocal_3406 = 0;
	var uLocal_3407 = 0;
	var uLocal_3408 = 0;
	var uLocal_3409 = 0;
	var uLocal_3410 = 0;
	var uLocal_3411 = 0;
	var uLocal_3412 = 0;
	var uLocal_3413 = 0;
	var uLocal_3414 = 0;
	var uLocal_3415 = 0;
	var uLocal_3416 = 0;
	var uLocal_3417 = 0;
	var uLocal_3418 = 0;
	var uLocal_3419 = 0;
	var uLocal_3420 = 0;
	var uLocal_3421 = 0;
	var uLocal_3422 = 0;
	var uLocal_3423 = 0;
	var uLocal_3424 = 0;
	var uLocal_3425 = 0;
	var uLocal_3426 = 0;
	var uLocal_3427 = 0;
	var uLocal_3428 = 0;
	var uLocal_3429 = 0;
	var uLocal_3430 = 0;
	var uLocal_3431 = 0;
	var uLocal_3432 = 0;
	var uLocal_3433 = 0;
	var uLocal_3434 = 0;
	var uLocal_3435 = 0;
	var uLocal_3436 = 0;
	var uLocal_3437 = 0;
	var uLocal_3438 = 0;
	var uLocal_3439 = 0;
	var uLocal_3440 = 0;
	var uLocal_3441 = 0;
	var uLocal_3442 = 0;
	var uLocal_3443 = 0;
	var uLocal_3444 = 0;
	var uLocal_3445 = 0;
	var uLocal_3446 = 0;
	var uLocal_3447 = 0;
	var uLocal_3448 = 0;
	var uLocal_3449 = 0;
	var uLocal_3450 = 0;
	var uLocal_3451 = 0;
	var uLocal_3452 = 0;
	var uLocal_3453 = 0;
	var uLocal_3454 = 0;
	var uLocal_3455 = 0;
	var uLocal_3456 = 0;
	var uLocal_3457 = 0;
	var uLocal_3458 = 0;
	var uLocal_3459 = 0;
	var uLocal_3460 = 0;
	var uLocal_3461 = 0;
	var uLocal_3462 = 0;
	var uLocal_3463 = 0;
	var uLocal_3464 = 0;
	var uLocal_3465 = 0;
	var uLocal_3466 = 0;
	var uLocal_3467 = 0;
	struct<7> Local_3468 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_3475 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_3482 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_3489 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_3496 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<2> Local_3503 = { 0, 0 } ;
	struct<2> Local_3505[9];
	struct<2> Local_3524[4];
	struct<2> Local_3533[3];
	struct<2> Local_3540 = { 0, 0 } ;
	int iLocal_3542 = 0;
	char cLocal_3543[24] = "";
	var uLocal_3546 = 0;
	var uLocal_3547 = 0;
	var uLocal_3548 = 0;
	struct<3> Local_3549 = { 0, 0, 0 } ;
	struct<3> Local_3552 = { 0, 0, 0 } ;
	struct<3> Local_3555 = { 0, 0, 0 } ;
	struct<3> Local_3558 = { 0, 0, 0 } ;
	struct<3> Local_3561 = { 0, 0, 0 } ;
	struct<61> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	sLocal_31 = "NULL";
	fLocal_32 = 0f;
	fLocal_36 = -0.0375f;
	fLocal_37 = 0.17f;
	fLocal_41 = 80f;
	fLocal_42 = 140f;
	fLocal_43 = 180f;
	iLocal_46 = 3;
	uLocal_91 = func_566(64);
	uLocal_92 = func_566(63);
	iLocal_93 = joaat("u_m_m_aldinapoli");
	iLocal_94 = joaat("premier");
	iLocal_110 = 1;
	iLocal_111 = 65;
	iLocal_112 = 49;
	iLocal_113 = 64;
	uLocal_117 = unk_0xE30164C14FFD22B6();
	uLocal_118 = unk_0xE1ABDD92C442B1EE();
	bLocal_122 = true;
	bLocal_129 = true;
	bLocal_151 = true;
	fLocal_1297 = 120f;
	fLocal_1298 = 0f;
	fLocal_1300 = 1f;
	fLocal_1301 = 0f;
	fLocal_1302 = 1f;
	fLocal_1303 = 30f;
	fLocal_1305 = 1f;
	fLocal_1306 = 5f;
	fLocal_1307 = 1f;
	fLocal_1308 = 1f;
	fLocal_1309 = 100f;
	fLocal_1310 = 100f;
	fLocal_1311 = 0f;
	fLocal_1312 = 7000f;
	fLocal_1313 = 0f;
	fLocal_1314 = 0f;
	fLocal_1315 = 0.3f;
	fLocal_1316 = 0.5f;
	fLocal_1317 = 50f;
	iLocal_1863 = -1;
	iLocal_1871 = -1;
	iLocal_1872 = -1;
	bLocal_3168 = true;
	sLocal_3295 = "Nigel2U";
	sLocal_3296 = "Nigel2Outro";
	sLocal_3297 = "Mrs_Thornhill";
	sLocal_3298 = "Nigel";
	sLocal_3299 = "Trevor";
	sLocal_3300 = func_565();
	sLocal_3301 = "Showroom_Car";
	sLocal_3302 = "EXL_2_abandoned_car";
	StringCopy(&cLocal_3543, "NMT_2_MCS_2", 24);
	Local_3107 = { ScriptParam_0 };
	func_563(&Local_3107);
	unk_0xAE2A9FD3EEF99954(1);
	if (unk_0x8D841F1DD3FA555F(19))
	{
		func_562("Force cleanup [TERMINATING]");
		func_545(1);
		func_535();
	}
	func_528();
	if (func_527())
	{
		func_526(&Local_3107, 0, 1);
		iVar0 = func_525();
		if (Global_85319 == 1)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				func_524(-1309.016f, -641.8671f, 25.5017f, 242.3463f, 0, 0);
				iLocal_3193[0] = 1;
				func_514(1, 0);
				break;
			
			case 1:
				func_524(391.08f, -615.87f, 28.33f, 333.66f, 0, 0);
				func_514(3, 0);
				break;
			
			default:
				break;
			}
	}
	while (true)
	{
		unk_0x36137B7A77318822("SF_VSADN", 0);
		func_498(Local_3107.f_9, 0, 0, 0, 0, 0);
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			func_495();
			Local_3555 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
			unk_0x5DFA9D9EFD236763(unk_0x1329891157A54C63());
			unk_0xA41AAA861EEB3205(unk_0x1329891157A54C63());
			switch (iLocal_3104)
			{
				case 0:
					func_417();
					break;
				
				case 1:
					func_365();
					break;
				
				case 2:
					func_294();
					break;
				
				case 3:
					func_286();
					break;
				
				case 4:
					func_92();
					break;
				
				case 5:
					func_46();
					break;
				
				case 6:
					break;
				
				case 7:
					break;
				
				case 8:
					break;
				
				case 9:
					break;
				
				case 10:
					break;
				}
		}
		if (bLocal_3168 == 0)
		{
			func_1(iLocal_3105);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(int iParam0)
{
	int iVar0;
	
	if (iLocal_3104 == iParam0)
	{
		if (func_45())
		{
			iVar0 = 0;
			if (iLocal_3104 == 2 || iLocal_3104 == 3)
			{
				iVar0 = Local_3489.f_0;
			}
			func_43(iVar0, -1, 0);
		}
		func_34(iLocal_3104);
		func_32(iLocal_3104);
		if (iLocal_3104 == 3)
		{
			func_22(1, 0, 1);
		}
		else if (iLocal_3104 == 1)
		{
			func_22(0, 1, 1);
		}
		else
		{
			func_22(1, 1, 1);
		}
		bLocal_3168 = true;
		iLocal_3169 = 0;
		if (iLocal_3104 == 4)
		{
			func_21(500, 1);
		}
	}
	else
	{
		func_2();
	}
}

void func_2()
{
	struct<3> Var0;
	
	if (func_20(unk_0x81873881071CD9FE()))
	{
		func_18();
		unk_0xD1C83BD797927DD5();
		switch (iLocal_3104)
		{
			case 0:
				if (iLocal_3106 == 1)
				{
					if (unk_0x521385D8214D27C4())
					{
						unk_0x30E4A4CF320834D9(0);
					}
				}
				break;
			
			case 1:
				if (iLocal_3106 == 1)
				{
					bLocal_3210 = true;
					func_14(Local_3475.f_0, &Local_3489, 0);
					func_14(Local_3468.f_0, &Local_3489, 2);
					func_14(Local_3482.f_0, &Local_3496, -1);
					if (func_13(Local_3496.f_0))
					{
						if (unk_0xE20321A2D7F8960C(Local_3496.f_0))
						{
							unk_0x05ACEF4F060B9B4E(Local_3496.f_0);
						}
						unk_0xB901CB880393ADF7(Local_3496.f_0, 393.4298f, -621.3337f, 28.4891f, 0, 0, 1);
						unk_0x5D6F89F6DD9B0781(Local_3496.f_0, -0.0081f, -0.0061f, 0.7994f, -0.6007f);
						unk_0x5CC9D6711FE01F0D(Local_3496.f_0);
					}
					unk_0x295DC04FC13E025B("rcmnigel2");
					while (!unk_0x8E8B546E1A81D27F("rcmnigel2"))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					func_12(1, 0);
					unk_0xA450601E968044DB(393.38f, -617.53f, 27.91f, 50f, 0, 0, 0, 0, 0);
					if (!func_45())
					{
						func_14(unk_0x81873881071CD9FE(), &Local_3489, -1);
						func_11(&Local_3489, 364.7079f, -608.3558f, 27.7364f, 246.4916f, 0);
						unk_0x270066FDBAF3A458(0);
						unk_0xEAB527164AD92BF3(0, 1065353216);
						if (iLocal_3169 == 0)
						{
							if (iLocal_3105 == 2)
							{
								if (func_10(unk_0x81873881071CD9FE()))
								{
									func_3(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 25f, 13, 5000, 0, 0);
									iLocal_3169 = 1;
								}
							}
						}
					}
					unk_0xCDE668E40D482687(0f);
					unk_0xA450601E968044DB(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 150f, 0, 0, 0, 0, 0);
					iLocal_3106 = 2;
				}
				break;
			
			case 2:
				if (iLocal_3106 == 1)
				{
					func_14(Local_3475.f_0, &Local_3489, 0);
					func_14(Local_3468.f_0, &Local_3489, 2);
					if (!func_45())
					{
						func_14(unk_0x81873881071CD9FE(), &Local_3489, -1);
						Var0 = { 391.08f, -615.87f, 28.33f };
						func_11(&Local_3489, Var0, 333.66f, 0);
						if (iLocal_3169 == 0)
						{
							if (iLocal_3105 == 3)
							{
								if (func_10(unk_0x81873881071CD9FE()))
								{
									func_3(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 25f, 13, 5000, 0, 0);
									iLocal_3169 = 1;
								}
							}
						}
					}
					iLocal_3106 = 2;
				}
				break;
			
			case 3:
				if (iLocal_3106 == 1)
				{
					if (unk_0x521385D8214D27C4())
					{
						unk_0x30E4A4CF320834D9(0);
					}
				}
				break;
			
			default:
				break;
			}
	}
}

void func_3(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0xD591652D9F0E72D7(Param0, fParam3, iParam4, 127);
	if (unk_0xA15F4145FFFDF88C(uVar0))
	{
		iVar1 = (unk_0x48E480685981C7D4() + iParam5);
		while (!unk_0xDE0AAECEBA83F86E(uVar0) && unk_0x48E480685981C7D4() < iVar1)
		{
			if (bParam7)
			{
				func_5();
			}
			if (bParam6)
			{
				func_4();
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		if (unk_0x48E480685981C7D4() < iVar1)
		{
		}
		unk_0xE112003C3132147E(uVar0);
	}
}

void func_4()
{
	Global_17099.f_6 = 1;
}

void func_5()
{
	if (!Global_14394.f_1 == 1)
	{
		if (func_9(0))
		{
			func_6(0);
		}
		unk_0xF3148AAF69AF9CBC(&Global_2265, 2);
	}
}

void func_6(int iParam0)
{
	if (Global_14552)
	{
		func_8(0, 0);
	}
	if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2265, 16);
	}
	if (unk_0xE0A43912E369FFA5())
	{
		unk_0x9E95048D8C96C1EA(0);
	}
	Global_15693 = 5;
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 30);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 30);
	}
	if (!func_7())
	{
		Global_14394.f_1 = 3;
	}
}

int func_7()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_8(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_9(0))
		{
			Global_14552 = 1;
			if (bParam1)
			{
				unk_0x2B4380FBF49E1B71(&Global_14331);
			}
			Global_14322 = { Global_14340[Global_14339 /*3*/] };
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
	else if (Global_14552 == 1)
	{
		Global_14552 = 0;
		Global_14322 = { Global_14347[Global_14339 /*3*/] };
		if (bParam1)
		{
			unk_0xB30AC22133A50DEE(Global_14331);
		}
		else
		{
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
}

int func_9(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x236D8AD7EE179F46(Global_2264, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14394.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_10(int iParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		if (!unk_0x930F8FBB8E9537CC(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_11(int iParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	if (func_10(*iParam0))
	{
		if (bParam5)
		{
			Param1.f_2 = -200f;
		}
		unk_0xB067093BBAF0A747(*iParam0, Param1, 1, 0, 0, 1);
		unk_0xC24172029826A66F(*iParam0, fParam4);
	}
}

void func_12(bool bParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	
	if (!unk_0x86CCCD2FAE9D5E65(Local_3540.f_0))
	{
		fVar0 = 115000f;
		fVar1 = 116821f;
		if (bParam1)
		{
			if (fLocal_3265 < (fVar0 - 3000f))
			{
				return;
			}
		}
		unk_0x32A12757CBF48A33(Local_3540.f_1);
		if (bParam0)
		{
			while (!unk_0x33ACB874CECA2D4B(Local_3540.f_1))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		if (bParam1)
		{
			if (fLocal_3265 < fVar0 || fLocal_3265 > fVar1)
			{
				return;
			}
		}
		if (unk_0x33ACB874CECA2D4B(Local_3540.f_1))
		{
			Local_3540.f_0 = unk_0xE00F8DEA9778FC87(Local_3540.f_1, 419.3891f, -604.8867f, 27.7732f, 0f, 1, 1);
		}
		if (func_13(Local_3540.f_0))
		{
			unk_0x887F4488DA99FD21(Local_3540.f_1);
			unk_0x5D6F89F6DD9B0781(Local_3540.f_0, 0f, 0.0006f, 0.9996f, -0.0275f);
			unk_0xC390A6485FB80923(Local_3540.f_0, 1);
		}
	}
}

int func_13(int iParam0)
{
	if (func_10(iParam0))
	{
		if (unk_0x7404950238A154C2(iParam0, 0))
		{
			if (!unk_0x2D2289DC6C760F31(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_14(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_10(iParam0) && func_13(*iParam1))
	{
		if (unk_0xBEB00EB4ADDC2A33(*iParam1, iParam2))
		{
			func_17(iParam0, *iParam1, iParam2);
		}
		else
		{
			iVar0 = unk_0xB0B9E53CEFDB16AA(*iParam1, iParam2);
			if (iVar0 != iParam0)
			{
				if (func_10(iVar0))
				{
					func_15(iVar0);
					func_14(iParam0, iParam1, iParam2);
				}
			}
		}
	}
}

void func_15(int iParam0)
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { 0f, 0f, 0f };
	fVar3 = 0f;
	if (func_10(iParam0))
	{
		if (unk_0x86F7E6A693F6370F(iParam0))
		{
			Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
			while (!unk_0xBB86303CD9A09C9D(Var0, 0, &Var0, 0))
			{
				unk_0x4EDE34FBADD967A6(0);
				Var0.f_0 = (Var0.f_0 + 2f);
			}
			fVar3 = unk_0x3306AAAFE3B25098(iParam0);
			func_16(iParam0, Var0, fVar3, 1, 1);
		}
	}
}

void func_16(int iParam0, struct<3> Param1, float fParam4, bool bParam5, bool bParam6)
{
	if (func_10(iParam0))
	{
		if (bParam5)
		{
			Param1.f_2 = -200f;
		}
		unk_0xB067093BBAF0A747(iParam0, Param1, 1, 0, 0, 1);
		unk_0xC24172029826A66F(iParam0, fParam4);
		if (bParam6)
		{
			unk_0x95BE9BA77CA91710(iParam0, 0, 0);
		}
	}
}

void func_17(int iParam0, int iParam1, int iParam2)
{
	if (func_20(iParam0))
	{
		if (func_10(iParam1))
		{
			if (unk_0xCB8B9E751036ECB2(iParam0))
			{
				unk_0xA8F22633ACC22189(unk_0x0225585B9FAAB81F(iParam0), 0);
			}
			else
			{
				unk_0xA8F22633ACC22189(iParam0, 0);
			}
			unk_0xDC81A805934C85CD(iParam0, iParam1, uParam2);
		}
	}
}

void func_18()
{
	Global_14559 = 0;
	func_19();
}

void func_19()
{
	unk_0xE1BF98267C70D822();
	Global_16704 = 0;
	if ((unk_0xE0A43912E369FFA5() || Global_14394.f_1 == 9) || Global_14393 == 1)
	{
		unk_0x9E95048D8C96C1EA(0);
		Global_15693 = 6;
		Global_14394.f_1 = 3;
		return;
	}
	if (unk_0xE1772957381F609F())
	{
		unk_0x9E95048D8C96C1EA(1);
		Global_15693 = 6;
		return;
	}
}

int func_20(int iParam0)
{
	if (func_10(iParam0))
	{
		if (!unk_0x5FEB513A4402FD59(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_21(int iParam0, bool bParam1)
{
	if (unk_0x29AFA2493D7C23D0() || unk_0xC584A413BCB2AA39())
	{
		if (!unk_0xC11AD1609CFCCCE1())
		{
			unk_0xAE2B1C30F8A0B67C(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0xECDEA377354CBDA4())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
}

void func_22(int iParam0, int iParam1, int iParam2)
{
	func_23(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		unk_0xEAB527164AD92BF3(0f, 1065353216);
		unk_0x270066FDBAF3A458(0f);
	}
	if (iParam1 == 1)
	{
		func_21(500, 0);
	}
}

void func_23(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	
	uVar0 = unk_0xEC537F0C0E8265EE();
	unk_0x0B8AC09F18292E35(uVar0, 0);
	unk_0x034205BA180B4E43(iVar0, iParam3, 0);
	func_24(0, 1, 0, 0);
	if (iParam2 == 1)
	{
		unk_0x3BF4F473786B0150(1);
		unk_0xF1BC58601CA4A5C7(1);
	}
	unk_0xB8BB626315D394F5(1);
	if (iParam0 == 1)
	{
		unk_0x1448B1808E373DDE(0, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_47 != 0 && iLocal_47 != joaat("object")) && iLocal_47 != joaat("gadget_parachute"))
		{
			if (func_10(unk_0x81873881071CD9FE()))
			{
				if (unk_0xE27746D8DF950073(unk_0x81873881071CD9FE(), iLocal_47, 0))
				{
					unk_0x649CF94A4282A7FD(unk_0x81873881071CD9FE(), iLocal_47, 0);
				}
			}
		}
	}
	if (func_20(unk_0x81873881071CD9FE()))
	{
		unk_0x90F3625CF1678F30(unk_0x81873881071CD9FE(), 0, 0);
	}
}

void func_24(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xA01309A4CCECDBBE(unk_0x1329891157A54C63());
		unk_0x334B670F8C2E871D(unk_0x1329891157A54C63(), 1);
		unk_0x302581C7F63C3DAF(unk_0x1329891157A54C63(), 1);
		func_31(1);
		unk_0x314942833427CBA3();
		unk_0xDF12B8D7DEE2158B();
		if (Global_14394.f_1 > 3)
		{
			if (unk_0xE0A43912E369FFA5())
			{
				unk_0x9E95048D8C96C1EA(0);
			}
			if (!func_7())
			{
				Global_14394.f_1 = 3;
			}
			Global_15693 = 5;
		}
		func_30(1, iParam3, iParam2, 0);
		Global_55408 = 1;
		Global_67713 = 1;
		Global_69018 = 1;
	}
	else
	{
		func_31(0);
		unk_0x6246FB0D4AFA25CC();
		Global_55408 = 0;
		if (bParam1)
		{
			unk_0x5A01C8176534B756();
		}
		unk_0x334B670F8C2E871D(unk_0x1329891157A54C63(), 0);
		unk_0x302581C7F63C3DAF(unk_0x1329891157A54C63(), 0);
		func_30(0, iParam3, iParam2, 0);
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) && !func_25(unk_0x1329891157A54C63()))
		{
			unk_0x210A4A0B257F8433(unk_0x81873881071CD9FE(), 0);
		}
		Global_69018 = 0;
	}
}

int func_25(int iParam0)
{
	if (func_27(iParam0, 0))
	{
		return 1;
	}
	if (func_26())
	{
		if (iParam0 == unk_0x1329891157A54C63())
		{
			return 1;
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_26()
{
	return unk_0x236D8AD7EE179F46(Global_2359301, 3);
}

bool func_27(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1329891157A54C63())
	{
		bVar0 = func_28(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1585045[iParam0 /*400*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xA89AE5060232966A(iParam0))
		{
			bVar0 = unk_0xCCFDB2B968281FE8(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_28(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_29();
	}
	if (Global_1315870[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312723[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_29()
{
	return Global_1312729;
}

int func_30(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (unk_0x5FB5CC66497A76D2() != iParam0 && iParam2)
		{
			unk_0xCC69602716E0A325(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_31(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 13);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 13);
	}
}

void func_32(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			if (iLocal_3254 == 0)
			{
				while (!func_33("NIGEL2_START", 0))
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				iLocal_3254++;
			}
			if (iLocal_3254 == 1)
			{
				while (!func_33("NIGEL2_CAR", 0))
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				iLocal_3254++;
			}
			if (iLocal_3254 == 2)
			{
				while (!func_33("NIGEL2_JUMP", 1))
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				iLocal_3254++;
			}
			break;
	}
}

int func_33(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xA3BC6AA446F03669(sParam0))
		{
			return 0;
		}
	}
	if (unk_0x80650551CC58C784(sParam0))
	{
		return 1;
	}
	return 0;
}

void func_34(int iParam0)
{
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		switch (iParam0)
		{
			case 1:
				unk_0x270066FDBAF3A458(22f);
				unk_0xEAB527164AD92BF3(0f, 1065353216);
				break;
			
			case 3:
				if (iLocal_3105 == 3)
				{
					func_14(unk_0x81873881071CD9FE(), &Local_3489, -1);
					func_11(&Local_3489, 391.08f, -615.87f, 28.33f, 333.66f, 0);
					func_42(&cLocal_3543);
					func_41();
					while (!func_35(1, 1093140480, 0))
					{
						func_42(&cLocal_3543);
						func_41();
						unk_0x4EDE34FBADD967A6(0);
					}
				}
				break;
			}
	}
}

int func_35(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 1;
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		if ((!unk_0xF8F0C55E476A5A81(unk_0x81873881071CD9FE()) && !unk_0x042BDEC3DAAA336A(unk_0x81873881071CD9FE())) && !unk_0x25B75802E65C5545(unk_0x81873881071CD9FE()))
		{
			if (!func_40(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), iParam1, 1, 1056964608, 0, 1, 0))
			{
				iVar0 = 0;
			}
			else if (iParam2 == 1)
			{
				iVar0 = 0;
				if (!func_39(unk_0x81873881071CD9FE(), -828834893))
				{
					unk_0x98046F3D16B9CF76(unk_0x81873881071CD9FE(), 0, 0);
				}
			}
			if (unk_0x0752B24E8A13FF0E(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)))
			{
				iVar0 = 0;
			}
		}
	}
	func_38();
	if (func_37())
	{
		func_18();
		iVar0 = 0;
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!func_36())
		{
			return 0;
		}
	}
	if (unk_0xE1772957381F609F())
	{
		unk_0x9E95048D8C96C1EA(0);
	}
	return 1;
}

bool func_36()
{
	bool bVar0;
	
	bVar0 = unk_0x0A11B2F86364F5B7();
	if (!Global_69019)
	{
		if (!bVar0)
		{
			Global_69019 = 1;
		}
	}
	return bVar0;
}

int func_37()
{
	if (Global_15693 != 0 || unk_0xE1772957381F609F())
	{
		return 1;
	}
	return 0;
}

void func_38()
{
	unk_0xDE1125A413AF241C(0, 21, 1);
	unk_0xDE1125A413AF241C(0, 37, 1);
	unk_0xDE1125A413AF241C(0, 25, 1);
	unk_0xDE1125A413AF241C(0, 141, 1);
	unk_0xDE1125A413AF241C(0, 140, 1);
	unk_0xDE1125A413AF241C(0, 24, 1);
	unk_0xDE1125A413AF241C(0, 257, 1);
	unk_0xDE1125A413AF241C(0, 22, 1);
	unk_0xDE1125A413AF241C(0, 23, 1);
}

int func_39(int iParam0, int iParam1)
{
	if (func_20(iParam0))
	{
		if (unk_0xFA1212DE7C455679(iParam0, iParam1) == 1 || unk_0xFA1212DE7C455679(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_40(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xDE1125A413AF241C(0, 71, 1);
	unk_0xDE1125A413AF241C(0, 72, 1);
	unk_0xDE1125A413AF241C(0, 76, 1);
	unk_0xDE1125A413AF241C(0, 73, 1);
	unk_0xDE1125A413AF241C(0, 59, 1);
	unk_0xDE1125A413AF241C(0, 60, 1);
	if (bParam5)
	{
		unk_0xDE1125A413AF241C(0, 75, 1);
	}
	unk_0xDE1125A413AF241C(0, 80, 1);
	if (!bParam6)
	{
		unk_0xDE1125A413AF241C(0, 69, 1);
		unk_0xDE1125A413AF241C(0, 70, 1);
		unk_0xDE1125A413AF241C(0, 68, 1);
	}
	unk_0xDE1125A413AF241C(0, 74, 1);
	unk_0xDE1125A413AF241C(0, 86, 1);
	unk_0xDE1125A413AF241C(0, 81, 1);
	unk_0xDE1125A413AF241C(0, 82, 1);
	unk_0xDE1125A413AF241C(0, 138, 1);
	unk_0xDE1125A413AF241C(0, 136, 1);
	unk_0xDE1125A413AF241C(0, 114, 1);
	unk_0xDE1125A413AF241C(0, 107, 1);
	unk_0xDE1125A413AF241C(0, 110, 1);
	unk_0xDE1125A413AF241C(0, 89, 1);
	unk_0xDE1125A413AF241C(0, 89, 1);
	unk_0xDE1125A413AF241C(0, 87, 1);
	unk_0xDE1125A413AF241C(0, 88, 1);
	unk_0xDE1125A413AF241C(0, 113, 1);
	unk_0xDE1125A413AF241C(0, 115, 1);
	unk_0xDE1125A413AF241C(0, 116, 1);
	unk_0xDE1125A413AF241C(0, 117, 1);
	unk_0xDE1125A413AF241C(0, 118, 1);
	unk_0xDE1125A413AF241C(0, 119, 1);
	unk_0xDE1125A413AF241C(0, 131, 1);
	unk_0xDE1125A413AF241C(0, 132, 1);
	unk_0xDE1125A413AF241C(0, 123, 1);
	unk_0xDE1125A413AF241C(0, 126, 1);
	unk_0xDE1125A413AF241C(0, 129, 1);
	unk_0xDE1125A413AF241C(0, 130, 1);
	unk_0xDE1125A413AF241C(0, 133, 1);
	unk_0xDE1125A413AF241C(0, 134, 1);
	unk_0xA733C8A9B9CF0E2E();
	if ((unk_0x48E480685981C7D4() - Global_29) > 500)
	{
		unk_0xE4DF2496E641851E(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x48E480685981C7D4();
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		if (unk_0xB9AA84B14E04BC20(unk_0xA04824262F150982(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_41()
{
	if (func_10(Local_3475.f_0))
	{
		if (unk_0xFE489BA9CA22B147())
		{
			unk_0x45113353D51CDBF8(sLocal_3298, Local_3475.f_0, 0);
		}
	}
	if (func_10(Local_3468.f_0))
	{
		if (unk_0xFE489BA9CA22B147())
		{
			unk_0x45113353D51CDBF8(sLocal_3297, Local_3468.f_0, 0);
		}
	}
	if (func_10(Local_3482.f_0))
	{
		if (unk_0xFE489BA9CA22B147())
		{
			unk_0x45113353D51CDBF8(sLocal_3300, Local_3482.f_0, 0);
		}
	}
}

void func_42(char[4] cParam0)
{
	func_24(1, 1, 0, 0);
	unk_0x0ADAEB274E23621D(cParam0, 8);
}

void func_43(int iParam0, int iParam1, int iParam2)
{
	if (func_527() && func_45())
	{
		while (Global_90804 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xD338B0444EFB8C65(0);
		if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
		{
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				unk_0x59DEC64833EB09EA(unk_0x81873881071CD9FE());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				if (unk_0x86CCCD2FAE9D5E65(iParam0))
				{
					if (unk_0x7404950238A154C2(iParam0, 0))
					{
						if (!unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iParam0, 0))
						{
							unk_0xDC81A805934C85CD(unk_0x81873881071CD9FE(), iParam0, iParam1);
							unk_0xEAB527164AD92BF3(0f, 1065353216);
							unk_0x270066FDBAF3A458(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
			{
				unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), true, 0);
			}
		}
		unk_0xCF8607B89BD34049();
		func_44(0);
	}
}

void func_44(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_90809.f_20), 13);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_90809.f_20), 13);
	}
}

bool func_45()
{
	return unk_0x236D8AD7EE179F46(Global_90809.f_20, 13);
}

void func_46()
{
	char* sVar0;
	var uVar1;
	
	sVar0 = 0;
	switch (iLocal_3106)
	{
		case 0:
			if (func_33("NIGEL2_MISSION_FAIL", 0))
			{
				unk_0xD1C83BD797927DD5();
				unk_0xB8BB626315D394F5(1);
				if (func_37())
				{
					func_18();
				}
				func_90();
				if (func_13(Local_3489.f_0))
				{
					if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), Local_3489.f_0, 0) || unk_0x463E18F5BBDEA9C4(unk_0x81873881071CD9FE()))
					{
						unk_0xE4DF2496E641851E(Local_3489.f_0, 6f, 2, 0);
					}
				}
				if (func_20(Local_3475.f_0))
				{
					if (unk_0xCD67A1A6022640ED(Local_3475.f_0))
					{
						unk_0x6EC15FE0ADD3E99C(Local_3475.f_0);
					}
					unk_0x27CC98B7C879C320(Local_3475.f_0);
					if ((iLocal_3245 == 7 || iLocal_3245 == 6) || iLocal_3245 == 4)
					{
						unk_0x7F5F0D37173E518C(Local_3475.f_0, 2, 0);
						unk_0xEAD984C2869B8B7C(&uVar1);
						if (unk_0xE5AB05962FA1FF3F(Local_3475.f_0, 0))
						{
							unk_0x98046F3D16B9CF76(0, 0, 320);
						}
						unk_0x754376E2234CBB4A(0, unk_0x81873881071CD9FE(), 300f, -1, 0, 0);
						unk_0x56D9ED1541046AF6(uVar1);
						unk_0xC65002CAA1212AF9(Local_3475.f_0, uVar1);
						unk_0xA3561415EB3DA3A3(&uVar1);
						unk_0x6CB332CB31E9FA96(Local_3475.f_0, 1);
					}
				}
				if (func_20(Local_3468.f_0))
				{
					if (unk_0xCD67A1A6022640ED(Local_3468.f_0))
					{
						unk_0x6EC15FE0ADD3E99C(Local_3468.f_0);
					}
					unk_0x27CC98B7C879C320(Local_3468.f_0);
					if ((iLocal_3245 == 5 || iLocal_3245 == 4) || iLocal_3245 == 6)
					{
						unk_0x7F5F0D37173E518C(Local_3468.f_0, 2, 0);
						if (unk_0xE5AB05962FA1FF3F(Local_3468.f_0, 0))
						{
							unk_0xEAD984C2869B8B7C(&uVar1);
							unk_0x98046F3D16B9CF76(0, 0, 320);
							unk_0x754376E2234CBB4A(0, unk_0x81873881071CD9FE(), 300f, -1, 0, 0);
							unk_0x56D9ED1541046AF6(uVar1);
							unk_0xC65002CAA1212AF9(Local_3468.f_0, uVar1);
							unk_0xA3561415EB3DA3A3(&uVar1);
							unk_0x6CB332CB31E9FA96(Local_3468.f_0, 1);
						}
						else
						{
							unk_0x754376E2234CBB4A(Local_3468.f_0, unk_0x81873881071CD9FE(), 300f, -1, 0, 0);
							unk_0x6CB332CB31E9FA96(Local_3468.f_0, 1);
						}
					}
				}
				if (func_13(Local_3496.f_0))
				{
					if (unk_0xE20321A2D7F8960C(Local_3496.f_0))
					{
						unk_0x05ACEF4F060B9B4E(Local_3496.f_0);
					}
					if (!bLocal_3212)
					{
						func_64(0, 1);
					}
				}
				if (func_20(Local_3482.f_0))
				{
					if (bLocal_3212)
					{
						unk_0x6CB332CB31E9FA96(Local_3482.f_0, 1);
					}
					else
					{
						unk_0x27CC98B7C879C320(Local_3482.f_0);
						unk_0x7F5F0D37173E518C(Local_3482.f_0, 2, 1);
						unk_0x7F5F0D37173E518C(Local_3482.f_0, 8, 0);
						unk_0x7F5F0D37173E518C(Local_3482.f_0, 1, 0);
						unk_0x7F5F0D37173E518C(Local_3482.f_0, 32, 0);
						unk_0x7F5F0D37173E518C(Local_3482.f_0, 64, 0);
						if ((func_13(Local_3496.f_0) && unk_0x04C377C10639B842(Local_3482.f_0, Local_3496.f_0, 0)) && func_13(Local_3489.f_0))
						{
							unk_0xEAD984C2869B8B7C(&uVar1);
							unk_0xEFACB1875068FA30(0, Local_3496.f_0, unk_0x81873881071CD9FE(), 8, 80f, 786468, 500f, -1f, 1);
							unk_0x56D9ED1541046AF6(uVar1);
							unk_0xC65002CAA1212AF9(Local_3482.f_0, uVar1);
							unk_0xA3561415EB3DA3A3(&uVar1);
						}
						else
						{
							unk_0xEAD984C2869B8B7C(&uVar1);
							unk_0x754376E2234CBB4A(0, unk_0x81873881071CD9FE(), 300f, -1, 0, 0);
							unk_0x56D9ED1541046AF6(uVar1);
							unk_0xC65002CAA1212AF9(Local_3482.f_0, uVar1);
							unk_0xA3561415EB3DA3A3(&uVar1);
						}
						unk_0x6CB332CB31E9FA96(Local_3482.f_0, 1);
					}
				}
				switch (iLocal_3245)
				{
					case 1:
						sVar0 = "NIGEL2_F1";
						break;
					
					case 2:
						sVar0 = "NIGEL2_F2";
						break;
					
					case 3:
						sVar0 = "NIGEL2_F3";
						break;
					
					case 4:
						sVar0 = "NIGEL2_F7";
						break;
					
					case 5:
						sVar0 = "NIGEL2_F4";
						break;
					
					case 6:
						sVar0 = "NIGEL2_F8";
						break;
					
					case 7:
						sVar0 = "NIGEL2_F5";
						break;
					
					case 8:
						sVar0 = "NIGEL2_F6";
						break;
					
					case 9:
						sVar0 = "NIGEL2_F10";
						break;
					
					case 10:
						sVar0 = "NIGEL2_F9";
						break;
					
					default:
						break;
				}
				if (iLocal_3245 == 0)
				{
					func_545(1);
				}
				else
				{
					func_62(sVar0, 1);
				}
				iLocal_3106 = 1;
			}
			break;
		
		case 1:
			if (func_61())
			{
				if (func_59(unk_0x81873881071CD9FE()))
				{
					func_57(279.4137f, -585.8815f, 42.3102f, 48.8028f);
					func_55(276.27f, -584f, 42.73f, 337.4f);
				}
				func_47(1);
				func_535();
			}
			break;
	}
}

void func_47(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_52(&(Local_3505[iVar0 /*2*/]), bParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_52(&(Local_3524[iVar0 /*2*/]), bParam0);
		iVar0++;
	}
	if (func_10(Local_3482.f_0))
	{
		unk_0x3B7AFF7DCE22C1CF(Local_3482.f_0, 0);
		if (!unk_0x5FEB513A4402FD59(Local_3482.f_0))
		{
			unk_0x6CB332CB31E9FA96(Local_3482.f_0, 1);
		}
	}
	unk_0xCC3B713B19102AAC(Local_3482.f_1, 0);
	func_52(&Local_3482, bParam0);
	unk_0xCC3B713B19102AAC(Local_3468.f_1, 0);
	if (func_20(Local_3468.f_0))
	{
		unk_0x6CB332CB31E9FA96(Local_3468.f_0, 1);
	}
	func_52(&Local_3468, bParam0);
	unk_0xCC3B713B19102AAC(Local_3475.f_1, 0);
	if (func_20(Local_3475.f_0))
	{
		unk_0x6CB332CB31E9FA96(Local_3475.f_0, 1);
	}
	func_52(&Local_3475, bParam0);
	func_51(&Local_3273);
	if (func_13(Local_3489.f_0))
	{
		unk_0xC81A8F418917F5CD(Local_3489.f_0, 1);
		unk_0x832B978B0A9D2169(Local_3489.f_0, 1);
		unk_0x0E465BF3FB5C8001(Local_3489.f_0, 1);
		if (iLocal_3242)
		{
			unk_0x24EECED9B6A1B569(Local_3489.f_0, 0);
			iLocal_3242 = 0;
		}
	}
	if (unk_0x86CCCD2FAE9D5E65(Local_3489.f_0))
	{
		unk_0x3DD8579AB91A77D6(Local_3489.f_0);
	}
	func_48(&Local_3489, bParam0);
	if (func_13(Local_3496.f_0))
	{
		unk_0xCEDA5B7DDF6C8846(Local_3496.f_0, 0, 0, 0, 0, 0, 0, 0, 0);
		unk_0x5C4323DE75B3DA5B(Local_3496.f_0, 0);
		unk_0xC81A8F418917F5CD(Local_3496.f_0, 1);
		unk_0x832B978B0A9D2169(Local_3496.f_0, 1);
		unk_0x0E465BF3FB5C8001(Local_3496.f_0, 1);
		if (bLocal_3212)
		{
			unk_0xE61FF1947C0507EB(Local_3496.f_0, 0f);
		}
	}
	func_48(&Local_3496, bParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_48(&(Local_3533[iVar0 /*2*/]), bParam0);
		iVar0++;
	}
	func_48(&Local_3540, bParam0);
	func_52(&Local_3503, bParam0);
}

void func_48(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_50(uParam0);
	}
	else
	{
		func_49(uParam0);
	}
}

void func_49(var uParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(*uParam0))
	{
		unk_0x930F8FBB8E9537CC(*uParam0);
		if (unk_0xE86442941AE40E75(*uParam0) && unk_0x46AE53A47E5D03D5(*uParam0, 1))
		{
			unk_0xE0913C01F5C0CC3D(uParam0);
		}
	}
}

void func_50(int iParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(*iParam0))
	{
		if (!unk_0xE86442941AE40E75(*iParam0))
		{
			unk_0xD768713E73165208(*iParam0, 1, 0);
		}
		if (func_13(*iParam0))
		{
			if (unk_0xE86442941AE40E75(*iParam0) && unk_0x46AE53A47E5D03D5(*iParam0, 1))
			{
				if (func_10(unk_0x81873881071CD9FE()))
				{
					if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), *iParam0, 0))
					{
						unk_0xE0913C01F5C0CC3D(iParam0);
						return;
					}
				}
				unk_0x5D00E836B6BE8693(iParam0);
			}
		}
		else
		{
			if (func_10(unk_0x81873881071CD9FE()))
			{
				if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), *iParam0, 0))
				{
					unk_0xE0913C01F5C0CC3D(iParam0);
					return;
				}
			}
			unk_0x5D00E836B6BE8693(iParam0);
		}
	}
}

void func_51(int iParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(*iParam0))
	{
		if (unk_0xE482770A8B024982(*iParam0))
		{
			unk_0xD88DD5B581458979(*iParam0, 1, 1);
		}
		unk_0xAB6AFD52AD641D70(iParam0);
	}
}

void func_52(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_54(iParam0);
	}
	else
	{
		func_53(iParam0, 1, 0, 1);
	}
}

void func_53(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x86CCCD2FAE9D5E65(*uParam0))
	{
		if (!unk_0x5FEB513A4402FD59(*uParam0))
		{
			unk_0x3B7AFF7DCE22C1CF(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0x4191220706130B86(*uParam0);
			}
			unk_0x6CB332CB31E9FA96(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x1D15D99A10A15334(*uParam0, 0);
			}
		}
		unk_0x71A8BCA218722FA1(uParam0);
	}
}

void func_54(var uParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(*uParam0))
	{
		if (!unk_0x930F8FBB8E9537CC(*uParam0))
		{
			unk_0x3B7AFF7DCE22C1CF(*uParam0, 0);
		}
		if (!unk_0xE86442941AE40E75(*uParam0))
		{
			unk_0xD768713E73165208(*uParam0, 1, 0);
		}
		unk_0xF210D34D7F7152ED(uParam0);
	}
}

void func_55(struct<3> Param0, float fParam3)
{
	func_56(&(Global_94997.f_2311), Param0, fParam3);
}

void func_56(var uParam0, struct<3> Param1, var uParam4)
{
	*uParam0 = { Param1 };
	uParam0->f_6 = uParam4;
}

void func_57(struct<3> Param0, float fParam3)
{
	if (func_58(Global_69260, 0f, 0f, 0f, 0))
	{
		Global_69260 = { Param0 };
		Global_69263 = fParam3;
	}
}

bool func_58(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_59(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!unk_0x59F36F53A82C2E72(iLocal_3261))
	{
		return 0;
	}
	if (func_10(iParam0))
	{
		iVar0 = unk_0x0E1B62B45F260997(iParam0);
		if (func_60(iVar0))
		{
			return 1;
		}
	}
	else
	{
		Var1 = { unk_0xB6AE0DAE06D56288(iParam0, 0) };
		if (unk_0xB3202EEA6EFADBA8(Var1) == iLocal_3261)
		{
			return 1;
		}
	}
	return 0;
}

int func_60(int iParam0)
{
	if ((((iParam0 == unk_0x8DAF7A748E41AD46("v_40_Room1") || iParam0 == unk_0x8DAF7A748E41AD46("v_40_Room2")) || iParam0 == unk_0x8DAF7A748E41AD46("v_40_Room3")) || iParam0 == unk_0x8DAF7A748E41AD46("v_40_Room4")) || iParam0 == unk_0x8DAF7A748E41AD46("V_40_Room005"))
	{
		return 1;
	}
	return 0;
}

int func_61()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_90809 == 7 || Global_90809 == 8)
	{
		return 1;
	}
	return 0;
}

void func_62(char* sParam0, bool bParam1)
{
	func_63(sParam0);
	func_545(bParam1);
}

void func_63(char* sParam0)
{
	if (!unk_0xB318FDA0D1ABDB20(sParam0))
	{
		if (unk_0xF36D646FEBEFB165(sParam0) <= 16)
		{
			StringCopy(&Global_69252, sParam0, 16);
			StringCopy(&Global_69256, "", 16);
			if (unk_0xFF43EABF617B213F())
			{
				unk_0x2CC6DA9D250332DA();
			}
		}
	}
}

void func_64(bool bParam0, bool bParam1)
{
	if (!unk_0xB318FDA0D1ABDB20(&cLocal_2582))
	{
		iLocal_135 = 0;
		func_89();
		unk_0x4BF7FC7E9DBAB99B(iLocal_2598);
		unk_0xFEA6E2B6E5CAFC2E(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			unk_0x81DD7930F7EBF531(unk_0x1329891157A54C63(), 1f);
			unk_0xD8AF255B8B5F4FB8(unk_0x1329891157A54C63(), 1);
			unk_0xA9DF4B73BBB06CE5(1);
		}
		if (bLocal_151)
		{
			unk_0x887F4488DA99FD21(func_88());
		}
		unk_0x887F4488DA99FD21(func_87());
		unk_0x887F4488DA99FD21(func_86());
		unk_0x887F4488DA99FD21(func_85());
		if (!unk_0x29AFA2493D7C23D0() && !bParam0)
		{
			func_84();
			func_83();
			func_80();
		}
		else
		{
			func_76();
			func_75();
		}
		if (bParam1)
		{
			func_65(0);
		}
	}
}

void func_65(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_66(iVar0, bParam0);
		iVar0++;
	}
}

void func_66(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_74(iParam0, 2, 1))
		{
			func_73(iParam0, 2, 1);
		}
	}
	else if (func_74(iParam0, 2, 1))
	{
		func_67(iParam0, 2, 1);
	}
}

void func_67(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xC69E84EBBD7166E6(&(Global_90861.f_1279[iParam0]), iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_72() == 0)
		{
			uVar0 = func_70(func_71(iParam0), -1, 0);
			unk_0xC69E84EBBD7166E6(&uVar0, iParam1);
			func_68(func_71(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_98931.f_668[iParam0]), iParam1);
	}
}

void func_68(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2459767[iParam0 /*5*/][func_69(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, uParam1, iParam3);
	}
}

int func_69(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_29();
		if (iVar1 > -1)
		{
			Global_2459480 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2459480 = 1;
		}
	}
	return iVar0;
}

int func_70(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2459767[iParam0 /*5*/][func_69(iParam1)];
	if (unk_0x85C45034BA638694(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_71(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 817;
			break;
		
		case 1:
			return 818;
			break;
		
		case 2:
			return 819;
			break;
		
		case 3:
			return 820;
			break;
		
		case 4:
			return 821;
			break;
		
		case 5:
			return 822;
			break;
		
		case 6:
			return 823;
			break;
		
		case 7:
			return 824;
			break;
		
		case 8:
			return 825;
			break;
		
		case 9:
			return 826;
			break;
		
		case 10:
			return 827;
			break;
		
		case 11:
			return 828;
			break;
		
		case 12:
			return 829;
			break;
		
		case 13:
			return 830;
			break;
		
		case 14:
			return 831;
			break;
		
		case 15:
			return 833;
			break;
		
		case 16:
			return 834;
			break;
		
		case 17:
			return 835;
			break;
		
		case 18:
			return 836;
			break;
		
		case 19:
			return 837;
			break;
		
		case 20:
			return 838;
			break;
		
		case 21:
			return 839;
			break;
		
		case 22:
			return 840;
			break;
		
		case 23:
			return 841;
			break;
		
		case 24:
			return 842;
			break;
		
		case 25:
			return 843;
			break;
		
		case 26:
			return 844;
			break;
		
		case 27:
			return 845;
			break;
		
		case 28:
			return 846;
			break;
		
		case 29:
			return 847;
			break;
		
		case 30:
			return 848;
			break;
		
		case 31:
			return 849;
			break;
		
		case 32:
			return 850;
			break;
		
		case 33:
			return 851;
			break;
		
		case 34:
			return 852;
			break;
		
		case 35:
			return 853;
			break;
		
		case 36:
			return 854;
			break;
		
		case 37:
			return 855;
			break;
		
		case 38:
			return 856;
			break;
		
		case 39:
			return 857;
			break;
		
		case 40:
			return 861;
			break;
		
		case 41:
			return 862;
			break;
		
		case 42:
			return 863;
			break;
		
		case 43:
			return 864;
			break;
		
		case 44:
			return 3422;
			break;
		
		default:
			break;
	}
	return 3438;
}

int func_72()
{
	return Global_24946;
}

void func_73(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_90861.f_1279[iParam0]), iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_72() == 0)
		{
			uVar0 = func_70(func_71(iParam0), -1, 0);
			unk_0xF3148AAF69AF9CBC(&uVar0, iParam1);
			func_68(func_71(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xF3148AAF69AF9CBC(&(Global_98931.f_668[iParam0]), iParam1);
	}
}

int func_74(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x236D8AD7EE179F46(Global_90861.f_1279[iParam0], iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_72() == 0)
		{
			return unk_0x236D8AD7EE179F46(func_70(func_71(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x236D8AD7EE179F46(Global_98931.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_75()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 85)
	{
		iLocal_2830[iVar0] = 0;
		Local_1877[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_153[iVar0] = 0f;
		fLocal_239[iVar0] = 0f;
		fLocal_325[iVar0] = 0f;
		fLocal_411[iVar0] = 0f;
		iLocal_1318[iVar0] = 0;
		fLocal_497[iVar0] = 0f;
		iLocal_1404[iVar0] = 0;
		iLocal_2599[iVar0] = 0;
		iLocal_1490[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iLocal_2916[iVar0] = 0;
		iVar0++;
	}
	iLocal_1860 = 0;
	iVar0 = 0;
	while (iVar0 < 70)
	{
		iLocal_2932[iVar0] = 0;
		Local_2133[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_1013[iVar0] = 0f;
		fLocal_1084[iVar0] = 0f;
		fLocal_1155[iVar0] = 0f;
		fLocal_1226[iVar0] = 0f;
		iLocal_1789[iVar0] = 0;
		iLocal_2685[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_3074[iVar0] = 0;
		iVar0++;
	}
	iLocal_1862 = 0;
	iVar0 = 0;
	while (iVar0 < 70)
	{
		iLocal_3003[iVar0] = 0;
		Local_2344[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_587[iVar0] = 0f;
		fLocal_658[iVar0] = 0f;
		fLocal_729[iVar0] = 0f;
		fLocal_800[iVar0] = 0f;
		iLocal_1576[iVar0] = 0;
		fLocal_871[iVar0] = 0f;
		iLocal_1647[iVar0] = 0;
		iLocal_2756[iVar0] = 0;
		iLocal_1718[iVar0] = 0;
		iVar0++;
	}
	iLocal_1861 = 0;
	iLocal_1864 = 0;
	iLocal_1867 = 0;
	iLocal_1868 = 0;
	iLocal_1869 = 0;
}

void func_76()
{
	func_79();
	func_78();
	func_77();
}

void func_77()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3003[iVar0]))
		{
			if (unk_0x7404950238A154C2(iLocal_3003[iVar0], 0))
			{
				if (unk_0xE20321A2D7F8960C(iLocal_3003[iVar0]))
				{
					unk_0x05ACEF4F060B9B4E(iLocal_3003[iVar0]);
				}
				iVar1 = unk_0xB0B9E53CEFDB16AA(iLocal_3003[iVar0], -1);
				if (unk_0x86CCCD2FAE9D5E65(iVar1) && iVar1 != unk_0x81873881071CD9FE())
				{
					if (unk_0xE86442941AE40E75(iVar1))
					{
						unk_0xF210D34D7F7152ED(&iVar1);
					}
				}
			}
			if (unk_0xE86442941AE40E75(iLocal_3003[iVar0]))
			{
				unk_0x5D00E836B6BE8693(&(iLocal_3003[iVar0]));
			}
		}
		iLocal_1647[iVar0] = 0;
		if (!bLocal_131 && !bLocal_144)
		{
			if (iLocal_1576[iVar0] > 0)
			{
				unk_0x4855165A2773595C(iLocal_1576[iVar0], &cLocal_2582);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (!iLocal_2756[iVar0] == 0)
		{
			unk_0x887F4488DA99FD21(iLocal_2756[iVar0]);
		}
		iVar0++;
	}
}

void func_78()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_2932[iVar0]))
		{
			if (unk_0xE86442941AE40E75(iLocal_2932[iVar0]))
			{
				unk_0x5D00E836B6BE8693(&(iLocal_2932[iVar0]));
			}
		}
		iLocal_1789[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (!iLocal_2685[iVar0] == 0)
		{
			unk_0x887F4488DA99FD21(iLocal_2685[iVar0]);
		}
		iVar0++;
	}
	iLocal_1865 = 0;
	iLocal_1862 = 0;
}

void func_79()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 85)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_2830[iVar0]))
		{
			if (unk_0x7404950238A154C2(iLocal_2830[iVar0], 0))
			{
				if (unk_0xE20321A2D7F8960C(iLocal_2830[iVar0]))
				{
					unk_0x05ACEF4F060B9B4E(iLocal_2830[iVar0]);
				}
				iVar1 = unk_0xB0B9E53CEFDB16AA(iLocal_2830[iVar0], -1);
				if (unk_0x86CCCD2FAE9D5E65(iVar1) && iVar1 != unk_0x81873881071CD9FE())
				{
					if (unk_0xE86442941AE40E75(iVar1))
					{
						unk_0xF210D34D7F7152ED(&iVar1);
					}
				}
			}
			if (unk_0xE86442941AE40E75(iLocal_2830[iVar0]))
			{
				unk_0x5D00E836B6BE8693(&(iLocal_2830[iVar0]));
			}
		}
		if (!bLocal_131 && !bLocal_144)
		{
			if (iLocal_1318[iVar0] > 0)
			{
				unk_0x4855165A2773595C(iLocal_1318[iVar0], &cLocal_2582);
			}
		}
		iLocal_1404[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 85)
	{
		if (!iLocal_2599[iVar0] == 0)
		{
			unk_0x887F4488DA99FD21(iLocal_2599[iVar0]);
		}
		iVar0++;
	}
	iLocal_1864 = 0;
	iLocal_1860 = 0;
}

void func_80()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3003[iVar0]))
		{
			if (unk_0x7404950238A154C2(iLocal_3003[iVar0], 0))
			{
				if (unk_0xE20321A2D7F8960C(iLocal_3003[iVar0]))
				{
					unk_0x05ACEF4F060B9B4E(iLocal_3003[iVar0]);
				}
			}
			func_82(iLocal_3003[iVar0]);
			func_81(iLocal_3003[iVar0]);
		}
		iLocal_1647[iVar0] = 0;
		iLocal_1718[iVar0] = 0;
		if (!bLocal_131 && !bLocal_144)
		{
			if (iLocal_1576[iVar0] > 0)
			{
				unk_0x4855165A2773595C(iLocal_1576[iVar0], &cLocal_2582);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (!iLocal_2756[iVar0] == 0)
		{
			unk_0x887F4488DA99FD21(iLocal_2756[iVar0]);
		}
		iVar0++;
	}
	iLocal_1866 = 0;
}

void func_81(int iParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		unk_0xE0913C01F5C0CC3D(&iParam0);
	}
}

void func_82(int iParam0)
{
	float fVar0;
	int iVar1;
	
	if (unk_0x7404950238A154C2(iParam0, 0))
	{
		iVar1 = unk_0xB0B9E53CEFDB16AA(iParam0, -1);
		if (!unk_0x5FEB513A4402FD59(iVar1))
		{
			if (!iVar1 == unk_0x81873881071CD9FE())
			{
				fVar0 = unk_0xA04824262F150982(iParam0);
				if (fVar0 < 8f)
				{
					fVar0 = 8f;
				}
				if (fVar0 > 62.9f)
				{
					fVar0 = 62.9f;
				}
				unk_0x31F198965149F7F4(iVar1, iParam0, 0, 1, fVar0, 786603, 5f, 5f, 1);
				unk_0x7F5F0D37173E518C(iVar1, 8192, 1);
				if (bLocal_152)
				{
					unk_0x7F5F0D37173E518C(iVar1, 65536, 1);
					unk_0x7F5F0D37173E518C(iVar1, 2, 0);
				}
				unk_0x4B9FA68A3AC8C29D(iVar1, 6, 0);
			}
		}
	}
}

void func_83()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_2932[iVar0]))
		{
			if (!unk_0x930F8FBB8E9537CC(iLocal_2932[iVar0]))
			{
				unk_0x5CEA5F12775261F2(iLocal_2932[iVar0], 1, 0);
			}
			func_81(iLocal_2932[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (!iLocal_2685[iVar0] == 0)
		{
			unk_0x887F4488DA99FD21(iLocal_2685[iVar0]);
		}
		iVar0++;
	}
	iLocal_1865 = 0;
	iLocal_1862 = 0;
}

void func_84()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 85)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_2830[iVar0]))
		{
			if (!unk_0x930F8FBB8E9537CC(iLocal_2830[iVar0]))
			{
				unk_0x5CEA5F12775261F2(iLocal_2830[iVar0], 1, 0);
			}
			if (unk_0x7404950238A154C2(iLocal_2830[iVar0], 0))
			{
				if (unk_0xE20321A2D7F8960C(iLocal_2830[iVar0]))
				{
					unk_0x05ACEF4F060B9B4E(iLocal_2830[iVar0]);
				}
			}
			func_82(iLocal_2830[iVar0]);
			func_81(iLocal_2830[iVar0]);
		}
		iLocal_1404[iVar0] = 0;
		iLocal_1490[iVar0] = 0;
		if (!bLocal_131 && !bLocal_144)
		{
			if (iLocal_1318[iVar0] > 0)
			{
				unk_0x4855165A2773595C(iLocal_1318[iVar0], &cLocal_2582);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 85)
	{
		if (!iLocal_2599[iVar0] == 0)
		{
			unk_0x887F4488DA99FD21(iLocal_2599[iVar0]);
		}
		iVar0++;
	}
	iLocal_1864 = 0;
	iLocal_1860 = 0;
}

int func_85()
{
	return joaat("s_m_y_cop_01");
}

int func_86()
{
	return joaat("police");
}

int func_87()
{
	return joaat("sultan");
}

int func_88()
{
	if (iLocal_2827 == 0)
	{
		return joaat("a_m_y_business_01");
	}
	return iLocal_2827;
}

void func_89()
{
	unk_0xA5EC8D4B74D54C9B();
	unk_0x24E17EE0B44D9A19(-1);
	unk_0x14EDFFB16F85839D(1);
	unk_0x9897700A81F3DE35(1);
	unk_0xCDE668E40D482687(1f);
	unk_0xB740337582B8FF04(3);
	unk_0xAFFB324194E5B6B2(3);
}

void func_90()
{
	func_91(&(Local_3482.f_2));
	func_91(&(Local_3489.f_2));
	func_91(&(Local_3475.f_2));
	func_91(&(Local_3468.f_2));
}

void func_91(var uParam0)
{
	if (unk_0xFBACB273AA628CC5(*uParam0))
	{
		unk_0x116FDB7E27590C7F(*uParam0, 0);
		unk_0x0A8175F24237A3D4(uParam0);
	}
}

void func_92()
{
	if (func_285(iLocal_3259, 1000))
	{
		if (func_20(Local_3475.f_0) && func_13(Local_3489.f_0))
		{
			if (unk_0x04C377C10639B842(Local_3475.f_0, Local_3489.f_0, 0))
			{
				if (unk_0xE20321A2D7F8960C(Local_3489.f_0))
				{
					unk_0x05ACEF4F060B9B4E(Local_3489.f_0);
					unk_0x4855165A2773595C(1, sLocal_3296);
				}
				if (!func_39(Local_3475.f_0, -258271821))
				{
					unk_0x2D7E8CD6F4101CAB(Local_3475.f_0, Local_3489.f_0, 60f, 786469);
					unk_0x1D15D99A10A15334(Local_3475.f_0, 1);
					unk_0x6CB332CB31E9FA96(Local_3475.f_0, 1);
				}
			}
		}
		func_21(500, 1);
		func_93(100, 1);
		func_535();
	}
}

void func_93(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_283();
	if (iVar0 == -1)
	{
		return;
	}
	if (!Global_98018[iVar0 /*10*/].f_4)
	{
		return;
	}
	if (Global_98018[iVar0 /*10*/].f_5)
	{
		return;
	}
	if (Global_98018[iVar0 /*10*/].f_6)
	{
		return;
	}
	func_254(iVar0, 0);
	unk_0xF3148AAF69AF9CBC(&Global_69268, 1);
	if (Global_98018[iVar0 /*10*/].f_9 == -1)
	{
	}
	else
	{
		func_253(&(Global_98018[iVar0 /*10*/].f_9));
	}
	if (bParam1)
	{
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 0, 0);
			unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 0);
			unk_0x4F3A07F7DCB0EB80(5000);
		}
	}
	func_241(iVar0, 1, 0, 0);
	func_240(0, 0);
	MemCopy(&uVar1, {func_238(iVar0)}, 4);
	func_235(&uVar1, func_236());
	func_118();
	if (unk_0x236D8AD7EE179F46(Global_98931.f_8630.f_25, 3))
	{
		func_117();
	}
	func_100();
	if (iParam0 == 210 || iParam0 == 211)
	{
		func_96(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111)
	{
		func_96(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322)
	{
		func_96(iParam0, 0, 0);
	}
	func_94();
}

int func_94()
{
	if (func_95(0))
	{
		return 0;
	}
	if (Global_90848.f_8)
	{
		if (Global_90848.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90848.f_10 > 1)
	{
		return 0;
	}
	Global_90848.f_10++;
	return 1;
}

bool func_95(bool bParam0)
{
	if (!bParam0 && unk_0x968BF1C2C695B61A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x236D8AD7EE179F46(Global_69268, 0);
}

void func_96(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_99((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_98931.f_8808[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_98931.f_8808[iParam0 /*12*/].f_6 == 11 || Global_98931.f_8808[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_98931.f_8808[iParam0 /*12*/].f_5 = 1;
		Global_98931.f_8808[iParam0 /*12*/].f_10 = iParam1;
		Global_98931.f_8808[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x3D83BB667D56D187(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_97();
	}
}

void func_97()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_98667 = 0;
	Global_98668 = 0;
	Global_98669 = 0;
	Global_98670 = 0;
	Global_98671 = 0;
	Global_98672 = 0;
	Global_98673 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_98931.f_8808.f_3853;
	Global_98931.f_8808.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_98931.f_8808[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_98931.f_8808[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_98667++;
					fVar1 = (fVar1 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_98668++;
					fVar2 = (fVar2 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_98669++;
					fVar3 = (fVar3 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_98670++;
					fVar4 = (fVar4 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_98671++;
					fVar5 = (fVar5 + (Global_98931.f_8808[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_98672++;
					fVar6 = (fVar6 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_98673++;
					fVar7 = (fVar7 + Global_98931.f_8808[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_98650 > 0)
	{
		if (Global_98667 == Global_98650)
		{
			fVar1 = 55f;
		}
	}
	if (Global_98651 > 0)
	{
		if (Global_98668 == Global_98651)
		{
			fVar2 = 10f;
		}
	}
	if (Global_98652 > 0)
	{
		if (Global_98669 == Global_98652)
		{
			fVar3 = 0f;
		}
	}
	if (Global_98653 > 0)
	{
		if (Global_98670 == Global_98653)
		{
			fVar4 = 10f;
		}
	}
	if (Global_98654 > 0)
	{
		if (((Global_98671 == Global_98654 || (Global_98654 * 10 / Global_98671) < 41) || Global_98671 > Global_98657) || Global_98671 == Global_98657)
		{
			if (!unk_0x236D8AD7EE179F46(Global_98931.f_8808.f_3856, 14))
			{
				if (Global_98671 == Global_98654)
				{
					unk_0x3D83BB667D56D187(joaat("num_rndevents_completed"), Global_98654, 0);
					unk_0xF3148AAF69AF9CBC(&(Global_98931.f_8808.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_98655 > 0)
	{
		if (Global_98672 == Global_98655)
		{
			fVar6 = 15f;
		}
	}
	if (Global_98656 > 0)
	{
		if (Global_98673 == Global_98656)
		{
			fVar7 = 5f;
		}
	}
	Global_98931.f_8808.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_98671 > Global_98657 || Global_98671 == Global_98657)
	{
		iVar9 = Global_98657;
	}
	else
	{
		iVar9 = Global_98671;
	}
	unk_0x123B783056E76C4E(joaat("num_missions_completed"), Global_98667, 1);
	unk_0x123B783056E76C4E(joaat("num_missions_available"), Global_98650, 1);
	unk_0x123B783056E76C4E(joaat("num_minigames_completed"), Global_98668, 1);
	unk_0x123B783056E76C4E(joaat("num_minigames_available"), Global_98651, 1);
	unk_0x123B783056E76C4E(joaat("num_oddjobs_completed"), Global_98669, 1);
	unk_0x123B783056E76C4E(joaat("num_oddjobs_available"), Global_98652, 1);
	unk_0x123B783056E76C4E(joaat("num_rndpeople_completed"), Global_98670, 1);
	unk_0x123B783056E76C4E(joaat("num_rndpeople_available"), Global_98653, 1);
	unk_0x123B783056E76C4E(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x123B783056E76C4E(joaat("num_rndevents_available"), Global_98657, 1);
	unk_0x123B783056E76C4E(joaat("num_misc_completed"), (Global_98673 + Global_98672), 1);
	unk_0x123B783056E76C4E(joaat("num_misc_available"), (Global_98656 + Global_98655), 1);
	Global_98674 = (Global_98667 * 100 / Global_98650);
	Global_98676 = ((Global_98669 + Global_98668) * 100 / (Global_98652 + Global_98651));
	Global_98675 = ((Global_98670 + iVar9) * 100 / (Global_98653 + Global_98657));
	Global_98677 = ((Global_98672 + Global_98673) * 100 / (Global_98655 + Global_98656));
	unk_0x7E6C0B47A4041A3A(joaat("total_progress_made"), Global_98931.f_8808.f_3853, 1);
	unk_0x123B783056E76C4E(joaat("percent_story_missions"), Global_98674, 1);
	unk_0x123B783056E76C4E(joaat("percent_ambient_missions"), Global_98675, 1);
	unk_0x123B783056E76C4E(joaat("percent_oddjobs"), Global_98676, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_98931.f_8808.f_3853))
	{
		func_98(13, unk_0xF34EE736CF047844(Global_98931.f_8808.f_3853));
	}
	if (!unk_0x14AA58B411AA05B2())
	{
		if (!Global_69020)
		{
			if (func_72() == 2 == 0 && !unk_0x1C6DF6AD69BE853E())
			{
				if (unk_0x847832409C9B7582())
				{
					Global_98665 = 0;
				}
				if (!Global_55402)
				{
					func_94();
				}
			}
		}
	}
}

int func_98(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 70)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x0AF2546798051B0F(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x5CF8B8E5AE9ED569(iParam0, iParam1);
	}
	return 0;
}

int func_99(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	
	if (iParam2 == -1)
	{
		iParam2 = func_29();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xE307AE970E97417F((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE527C242A8C1FBA9((iParam0 - 0)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xE307AE970E97417F((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE527C242A8C1FBA9((iParam0 - 192)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xE307AE970E97417F((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE527C242A8C1FBA9((iParam0 - 513)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xE307AE970E97417F((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE527C242A8C1FBA9((iParam0 - 705)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x842AB1A4A6E7A6FD((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE527C242A8C1FBA9((iParam0 - 3111)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x842AB1A4A6E7A6FD((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE527C242A8C1FBA9((iParam0 - 2919)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x212AB7197F0FF1D7((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xE527C242A8C1FBA9((iParam0 - 4207)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x212AB7197F0FF1D7((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xE527C242A8C1FBA9((iParam0 - 4335)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6989)
	{
		uVar10 = unk_0x212AB7197F0FF1D7((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xE527C242A8C1FBA9((iParam0 - 6029)) * 64);
		iVar0 = unk_0x1D1911CDCD195456(uVar10, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_100()
{
	func_116();
	func_108();
	func_104();
	func_103();
	func_102();
	func_101();
	Global_90846 = 0;
	Global_85317 = -1;
	unk_0xC69E84EBBD7166E6(&(Global_90809.f_20), 17);
	Global_90844 = 0;
	unk_0x051313E56EE6229D(0);
	unk_0x710A34BE76734D58(0);
	unk_0x3937B60F47657E06(1);
	unk_0x9BF347704344C32A(1);
	unk_0xAE9199CEEF9AE6D9(1);
	func_44(0);
}

void func_101()
{
	Global_69260 = { 0f, 0f, 0f };
	Global_69263 = 0f;
	Global_90809.f_21 = 145;
}

void func_102()
{
	StringCopy(&Global_69252, "", 16);
	StringCopy(&Global_69256, "", 16);
}

void func_103()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Global_90809.f_22[iVar0] = 0;
		iVar0++;
	}
}

void func_104()
{
	Global_90809 = 13;
	Global_90809.f_1 = -1;
	Global_90809.f_2 = 0;
	Global_90809.f_30 = 0f;
	unk_0xC69E84EBBD7166E6(&(Global_90809.f_20), 25);
	Global_90843 = 0;
	func_107(0);
	func_106();
	func_105();
	Global_90809.f_18 = -1;
	Global_90809.f_19 = -1;
}

void func_105()
{
	unk_0xC69E84EBBD7166E6(&(Global_90809.f_20), 22);
	unk_0xC69E84EBBD7166E6(&(Global_90809.f_20), 8);
}

void func_106()
{
	if (Global_90809.f_16 != 0)
	{
		unk_0x4B6F01DE8CCE643E(&(Global_90809.f_16));
		Global_90809.f_16 = 0;
	}
	if (Global_90809.f_17 != 0)
	{
		unk_0x4B6F01DE8CCE643E(&(Global_90809.f_17));
		Global_90809.f_17 = 0;
	}
}

void func_107(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_35992 = 1;
	}
	else
	{
		Global_35992 = 0;
	}
}

void func_108()
{
	func_109(&Global_94997);
}

void func_109(var uParam0)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = 145;
	func_115(&(uParam0->f_1));
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = 0f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 145;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_9[iVar1] = -1;
		uParam0->f_13[iVar1] = 0;
		uParam0->f_17[iVar1] = 0;
		uParam0->f_21[iVar1] = 0;
		func_114(&(uParam0->f_25[0 /*295*/][iVar1 /*98*/]));
		func_114(&(uParam0->f_25[1 /*295*/][iVar1 /*98*/]));
		iVar0 = 0;
		while (iVar0 < 12)
		{
			uParam0->f_616[iVar1 /*65*/][iVar0] = -1;
			uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = -1;
			uParam0->f_616[iVar1 /*65*/].f_26[iVar0] = -1;
			iVar0++;
		}
		uParam0->f_616[iVar1 /*65*/].f_59 = 0;
		uParam0->f_616[iVar1 /*65*/].f_60 = -99;
		uParam0->f_616[iVar1 /*65*/].f_61 = 2;
		uParam0->f_616[iVar1 /*65*/].f_62 = 0;
		uParam0->f_616[iVar1 /*65*/].f_63 = -99;
		uParam0->f_616[iVar1 /*65*/].f_64 = 1;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = -1;
			uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = -1;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/].f_1 = 0;
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/].f_2 = 0;
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/].f_1 = 0;
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/].f_2 = 0;
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			uParam0->f_1665[iVar1 /*32*/][iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			uParam0->f_1665[iVar1 /*32*/].f_5[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			uParam0->f_1665[iVar1 /*32*/].f_16[iVar0] = 0;
			iVar0++;
		}
		uParam0->f_1762[iVar1] = 0;
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2259[iVar1 /*15*/][iVar0] = 0;
			uParam0->f_2259[iVar1 /*15*/].f_5[iVar0] = 0;
			uParam0->f_2259[iVar1 /*15*/].f_10[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_1766[iVar1 /*164*/][iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_4[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_8[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_12[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_16[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_20[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_24[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_28[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_32[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_36[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_40[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_44[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_48[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_52[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_56[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_60[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_64[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_68[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_72[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_76[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_80[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_84[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_88[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_92[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_96[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_100[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_104[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_108[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_112[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_116[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_120[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_124[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_128[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_132[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_136[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_140[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_144[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_148[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_152[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_156[iVar0] = 0;
			uParam0->f_1766[iVar1 /*164*/].f_160[iVar0] = 0;
			iVar0++;
		}
		iVar1++;
	}
	func_113(&(uParam0->f_2305));
	func_111(&(uParam0->f_2311));
	func_110(&(uParam0->f_2401));
}

void func_110(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_111(var uParam0)
{
	func_112(&(uParam0->f_12));
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = 0f;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
}

void func_112(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

void func_113(var uParam0)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	uParam0->f_5 = -1;
}

void func_114(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		uParam0->f_11[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	StringCopy(&(uParam0->f_27), "", 16);
	iVar0 = 0;
	while (iVar0 <= 48)
	{
		uParam0->f_31[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		uParam0->f_81[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_84 = 0;
	uParam0->f_85 = 0;
	uParam0->f_86 = 0;
	uParam0->f_87 = 0;
	uParam0->f_88 = 0;
	uParam0->f_89 = 0;
	uParam0->f_90 = 0;
	uParam0->f_91 = 0;
	uParam0->f_93 = 0;
	uParam0->f_94 = 0;
	uParam0->f_95 = 0;
	uParam0->f_92 = 0;
}

void func_115(var uParam0)
{
	*uParam0 = -15;
}

void func_116()
{
	StringCopy(&Global_92584, "", 32);
	func_109(&Global_92592);
}

void func_117()
{
	if (Global_3069[0 /*2811*/][0 /*281*/].f_259 == 0)
	{
		Global_3069[0 /*2811*/][0 /*281*/].f_259 = 2;
	}
	if (Global_3069[1 /*2811*/][0 /*281*/].f_259 == 0)
	{
		Global_3069[1 /*2811*/][0 /*281*/].f_259 = 2;
	}
	if (Global_3069[2 /*2811*/][0 /*281*/].f_259 == 0)
	{
		Global_3069[2 /*2811*/][0 /*281*/].f_259 = 2;
	}
	unk_0xF3148AAF69AF9CBC(&Global_2264, 25);
	unk_0xF3148AAF69AF9CBC(&Global_2265, 11);
}

void func_118()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		iVar1 = Global_88511[iVar0];
		if (unk_0x86CCCD2FAE9D5E65(iVar1) && !unk_0x5FEB513A4402FD59(iVar1))
		{
			iVar3 = func_232(iVar1);
			iVar2 = -99;
			switch (iVar3)
			{
				case 0:
					iVar2 = 112;
					break;
				
				case 1:
					iVar2 = 158;
					break;
				
				case 2:
					iVar2 = 154;
					break;
			}
			if (iVar2 != -99)
			{
				if (func_231(iVar1, 14, iVar2))
				{
					func_119(iVar1, 14, iVar2);
				}
				if (Global_98931.f_1750.f_539[iVar3 /*65*/].f_39[2] == iVar2)
				{
					Global_98931.f_1750.f_539[iVar3 /*65*/].f_39[2] = -1;
				}
			}
		}
		iVar0++;
	}
}

int func_119(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar30;
	int iVar46;
	
	if (unk_0x5FEB513A4402FD59(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	iVar0 = unk_0x14B7103DBD149FFE(iParam0);
	Global_68881[1 /*14*/] = { func_166(iVar0, iParam1, iParam2) };
	if (!unk_0x236D8AD7EE179F46(Global_68881[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!func_231(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { func_162(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_119(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar20 = { func_159(iVar0, iParam2) };
		iVar18 = 0;
		while (iVar18 <= 8)
		{
			if (!func_119(iParam0, 14, uVar20[iVar18]))
			{
				iVar19 = 0;
			}
			iVar18++;
		}
		return iVar19;
	}
	else if (iParam1 == 14)
	{
		unk_0xBD4A273C1B487F68(iParam0, Global_68881[1 /*14*/].f_12);
	}
	else
	{
		uVar30 = { func_162(iVar0, 0) };
		Global_68881[1 /*14*/] = { func_166(iVar0, iParam1, uVar30[iParam1]) };
		if (unk_0x89139BEEC678B31C(iParam0, func_158(iParam1)) > 0 && unk_0xFBC1944E2EB324D7(iParam0, func_158(iParam1), Global_68881[1 /*14*/].f_3) > 0)
		{
			unk_0x03F73D35E5AC583A(iParam0, func_158(iParam1), Global_68881[1 /*14*/].f_3, Global_68881[1 /*14*/].f_4, 0);
		}
	}
	if (func_157(iParam0, iVar0, &iVar46, 0))
	{
		func_122(iParam0, 2, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (func_120(iParam0, iVar0, &iVar46))
	{
		func_122(iParam0, 1, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	return 1;
}

int func_120(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_121(iParam1);
	if (Global_98931.f_1750.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_231(iParam0, Global_98931.f_1750.f_539[iVar0 /*65*/].f_64, Global_98931.f_1750.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_98931.f_1750.f_539[iVar0 /*65*/].f_62;
			Global_98931.f_1750.f_539[iVar0 /*65*/].f_63 = -99;
			Global_98931.f_1750.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_121(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 0;
			break;
		
		case joaat("player_one"):
			return 1;
			break;
		
		case joaat("player_two"):
			return 2;
			break;
		
		default:
			break;
	}
	return 145;
}

int func_122(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar27;
	var uVar37;
	struct<14> Var53;
	var uVar67;
	
	if (unk_0x5FEB513A4402FD59(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_68880++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = unk_0x14B7103DBD149FFE(iParam0);
	if (iParam5 == 0)
	{
		Global_68881[1 /*14*/] = { func_166(iVar10, iParam1, iParam2) };
		if (!func_156(iParam3))
		{
			Global_68880 = (Global_68880 - 1);
			return 0;
		}
		func_152(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = func_150(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = func_150(iParam0, 9);
			if (iVar10 == joaat("player_zero"))
			{
				if (iVar6 >= 9 && iVar6 <= 14)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_one"))
			{
				if (iVar6 >= 5 && iVar6 <= 10)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_two"))
			{
				if ((iVar6 >= 9 && iVar6 <= 14) || (iVar6 >= 15 && iVar6 <= 16))
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			iVar7 = func_145(iParam0, 1);
			if (!func_144(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = func_145(iParam0, 0);
			if (!func_143(iVar10, 14, iVar8) && !func_139(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = func_145(iParam0, 2);
			}
		}
		unk_0x5FF6DF10B61BA23D(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_68924 };
		}
		else
		{
			uVar11 = { func_162(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_68881[1 /*14*/] = { func_166(iVar10, iVar0, uVar11[iVar0]) };
				if (unk_0x236D8AD7EE179F46(Global_68881[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar27 = 9;
						if (iParam5 == 1)
						{
							uVar27 = { Global_68940 };
						}
						else
						{
							uVar27 = { func_159(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_68881[1 /*14*/] = { func_166(iVar10, 14, uVar27[iVar1]) };
							func_138(iParam0, Global_68881[1 /*14*/].f_12, Global_68881[1 /*14*/].f_3, Global_68881[1 /*14*/].f_4);
							func_152(14);
							if (Global_68880 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_130(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_122(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == joaat("player_one") && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							func_129(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							unk_0x03F73D35E5AC583A(iParam0, func_158(iVar0), Global_68881[1 /*14*/].f_3, Global_68881[1 /*14*/].f_4, unk_0xB1E925960A89BB08(iParam0, func_158(iVar0)));
						}
						else
						{
							unk_0x03F73D35E5AC583A(iParam0, func_158(iVar0), Global_68881[1 /*14*/].f_3, Global_68881[1 /*14*/].f_4, iParam4);
						}
						func_152(iVar0);
						if (Global_68880 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_130(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_122(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68881[1 /*14*/] = { func_166(iVar10, iVar0, func_128(iParam0, iVar0, -1)) };
				if (unk_0x236D8AD7EE179F46(Global_68881[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_157(iParam0, iVar10, &iVar4, 1))
							{
								func_122(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { func_162(iVar10, 0) };
						func_122(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = { func_166(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (func_126(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_122(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { func_166(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (func_126(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_122(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { func_166(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (func_126(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_122(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { func_166(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (func_126(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_122(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { func_166(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (func_126(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_122(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar67 = { func_159(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68881[1 /*14*/] = { func_166(iVar10, 14, uVar67[iVar1]) };
			func_138(iParam0, Global_68881[1 /*14*/].f_12, Global_68881[1 /*14*/].f_3, Global_68881[1 /*14*/].f_4);
			func_152(14);
			if (Global_68880 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_130(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_122(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_138(iParam0, Global_68881[1 /*14*/].f_12, Global_68881[1 /*14*/].f_3, Global_68881[1 /*14*/].f_4);
		func_152(iParam1);
		if (Global_68880 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_130(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_122(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			unk_0x03F73D35E5AC583A(iParam0, func_158(iParam1), Global_68881[1 /*14*/].f_3, Global_68881[1 /*14*/].f_4, unk_0xB1E925960A89BB08(iParam0, func_158(iParam1)));
		}
		else
		{
			unk_0x03F73D35E5AC583A(iParam0, func_158(iParam1), Global_68881[1 /*14*/].f_3, Global_68881[1 /*14*/].f_4, iParam4);
		}
		if (Global_68880 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_130(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_122(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_123(iVar10, iParam1, iParam2);
		}
	}
	if (Global_68880 == 1)
	{
		if (func_157(iParam0, iVar10, &iVar4, 0))
		{
			func_122(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (func_120(iParam0, iVar10, &iVar4))
		{
			func_122(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68880 = (Global_68880 - 1);
	return 1;
}

void func_123(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == joaat("player_zero"))
	{
		iVar0 = 5;
	}
	else if (iParam0 == joaat("player_one"))
	{
		iVar0 = 2;
	}
	else if (iParam0 == joaat("player_two"))
	{
		iVar0 = 4;
	}
	if (func_125(iParam0, 12, iVar0))
	{
		if (func_124(iParam0, iParam1, iParam2))
		{
			iVar1 = func_121(iParam0);
			if (iParam1 == 3)
			{
				Global_98931.f_1750.f_539.f_196[iVar1] = iParam2;
			}
			else if (iParam1 == 4)
			{
				Global_98931.f_1750.f_539.f_200[iVar1] = iParam2;
			}
		}
	}
}

int func_124(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 47 && iParam2 <= 54)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 77 && iParam2 <= 84)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 14 && iParam2 <= 21)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 41 && iParam2 <= 56)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 18 && iParam2 <= 29)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 54 && iParam2 <= 69)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_125(int iParam0, int iParam1, int iParam2)
{
	Global_68881[1 /*14*/] = { func_166(iParam0, iParam1, iParam2) };
	return unk_0x236D8AD7EE179F46(Global_68881[1 /*14*/].f_6, 2);
}

int func_126(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	var uVar0;
	int iVar10;
	
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 1;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return 1;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return 1;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1)
	{
		return 1;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_159(iParam0, (*uParam4)[13]) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (uVar0[iVar10] == iParam3)
			{
				return 1;
			}
			iVar10++;
		}
	}
	if (func_127(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_144(iParam0, iParam2, iParam3))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_143(iParam0, iParam2, iParam3))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_139(iParam0, iParam2, iParam3))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (func_144(iParam0, iParam2, iParam3))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_143(iParam0, iParam2, iParam3))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
							return 1;
						}
					}
					else
					{
						return 0;
					}
				}
				else
				{
					return 0;
				}
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return 0;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return 0;
					}
				}
			}
			return 1;
		}
		else if (func_139(iParam0, iParam2, iParam3))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return 0;
			}
			return 1;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return 1;
			}
		}
		if (func_144(iParam0, iParam2, iParam3))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_143(iParam0, iParam2, iParam3))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_139(iParam0, iParam2, iParam3))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_127(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iParam2 == 6)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_128(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x5FEB513A4402FD59(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_231(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_231(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return func_145(iParam0, iParam2);
			}
		}
		else
		{
			return func_150(iParam0, iParam1);
		}
	}
	return -99;
}

int func_129(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7 || iParam2 == 23)
					{
						*iParam3 = 1;
					}
					break;
				
				case 9:
					if (iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14))
					{
						*iParam3 = 1;
					}
					break;
				
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 1;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 40 && iParam2 <= 41)) || iParam2 == 46)
					{
						*iParam3 = 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 2:
					if (iParam2 == 20)
					{
						*iParam3 = 20;
					}
					break;
				
				case 8:
					if (iParam2 == 4)
					{
						*iParam3 = 19;
					}
					break;
				
				case 9:
					if (iParam2 >= 5 && iParam2 <= 10)
					{
						*iParam3 = 19;
					}
					break;
				
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 19;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 19;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7)
					{
						*iParam3 = 2;
					}
					break;
				
				case 9:
					if ((iParam2 >= 9 && iParam2 <= 14) || (iParam2 >= 15 && iParam2 <= 16))
					{
						*iParam3 = 2;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 2;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 56 && iParam2 <= 57)) || iParam2 == 62)
					{
						*iParam3 = 2;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = func_121(iParam0);
		Global_98931.f_1750.f_539[iVar0 /*65*/].f_60 = iParam2;
		Global_98931.f_1750.f_539[iVar0 /*65*/].f_61 = iParam1;
		return 1;
	}
	return 0;
}

int func_130(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar0 = -99;
	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				iVar1 = func_150(iParam0, 1);
				iVar0 = func_137(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = func_150(iParam0, 2);
				iVar0 = func_137(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		func_129(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		func_136(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (func_135(iParam1, iParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("player_zero"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (iParam3)
								{
									case 36:
										iVar0 = 17;
										break;
									
									case 37:
										iVar0 = 17;
										break;
									
									case 38:
										iVar0 = 18;
										break;
									
									case 39:
										iVar0 = 18;
										break;
									
									case 40:
										iVar0 = 19;
										break;
									
									case 41:
										iVar0 = 19;
										break;
									
									case 42:
										iVar0 = 20;
										break;
									
									case 43:
										iVar0 = 20;
										break;
								}
								break;
							
							case 11:
								if (iParam3 >= 2 && iParam3 <= 7)
								{
									if (!func_134(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!func_134(iParam0, 3, 135, 150))
									{
										iVar0 = func_133(iParam1, 3, 135, 150);
									}
								}
								break;
						}
						break;
					
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 63:
										iVar0 = 4;
										break;
									
									case 61:
										iVar0 = 3;
										break;
									
									case 16:
										iVar0 = 1;
										break;
									
									case 114:
										iVar0 = 15;
										break;
									
									case 115:
										iVar0 = 17;
										break;
									
									case 116:
										iVar0 = 16;
										break;
									
									case 117:
										iVar0 = 18;
										break;
									
									case 118:
										iVar0 = 20;
										break;
									
									case 119:
										iVar0 = 19;
										break;
									
									case 125:
										iVar0 = 21;
										break;
									
									case 120:
										iVar0 = 22;
										break;
									
									case 124:
										iVar0 = 23;
										break;
									
									case 126:
										iVar0 = 24;
										break;
									
									case 121:
										iVar0 = 25;
										break;
									
									case 127:
										iVar0 = 26;
										break;
									
									case 128:
										iVar0 = 27;
										break;
									
									case 85:
										iVar0 = 6;
										break;
									
									case 77:
										iVar0 = 7;
										break;
									
									case 78:
										iVar0 = 8;
										break;
									
									case joaat("mpsv_lp0_31"):
										iVar0 = 9;
										break;
									
									case 80:
										iVar0 = 10;
										break;
									
									case 81:
										iVar0 = 11;
										break;
									
									case 82:
										iVar0 = 12;
										break;
									
									case 83:
										iVar0 = 13;
										break;
									
									case 84:
										iVar0 = 14;
										break;
									
									case 21:
										iVar0 = 31;
										break;
									
									case 22:
										iVar0 = 30;
										break;
									
									case 23:
										iVar0 = 29;
										break;
									
									case 24:
										iVar0 = 28;
										break;
									
									case 25:
										iVar0 = 33;
										break;
									
									case 26:
										iVar0 = 35;
										break;
									
									case 27:
										iVar0 = 34;
										break;
									
									case 28:
										iVar0 = 32;
										break;
									
									default:
										if (iParam3 >= 17 && iParam3 <= 20)
										{
										}
										else
										{
											iVar0 = 0;
										}
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if ((iParam3 >= 44 && iParam3 <= 59) || (iParam3 >= 135 && iParam3 <= 150))
							{
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (iParam3 >= 36 && iParam3 <= 43)
							{
								iVar0 = 0;
							}
						}
						break;
				}
				break;
			
			case joaat("player_one"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 17:
										iVar0 = 2;
										break;
									
									case 90:
										iVar0 = 1;
										break;
									
									case 268:
										iVar0 = 3;
										break;
									
									case 269:
										iVar0 = 5;
										break;
									
									case 270:
										iVar0 = 4;
										break;
									
									case 271:
										iVar0 = 6;
										break;
									
									case 272:
										iVar0 = 8;
										break;
									
									case 273:
										iVar0 = 7;
										break;
									
									case 279:
										iVar0 = 9;
										break;
									
									case 274:
										iVar0 = 10;
										break;
									
									case 278:
										iVar0 = 11;
										break;
									
									case 280:
										iVar0 = 12;
										break;
									
									case 275:
										iVar0 = 13;
										break;
									
									case 281:
										iVar0 = 14;
										break;
									
									case 282:
										iVar0 = 15;
										break;
									
									case 107:
										iVar0 = 16;
										break;
									
									case 108:
										iVar0 = 17;
										break;
									
									case 109:
										iVar0 = 18;
										break;
									
									case 110:
										iVar0 = 19;
										break;
									
									case 111:
										iVar0 = 20;
										break;
									
									case 112:
										iVar0 = 21;
										break;
									
									case 113:
										iVar0 = 22;
										break;
									
									case 114:
										iVar0 = 23;
										break;
									
									case 115:
										iVar0 = 24;
										break;
									
									case 116:
										iVar0 = 25;
										break;
									
									case 117:
										iVar0 = 52;
										break;
									
									case 118:
										iVar0 = 27;
										break;
									
									case 119:
										iVar0 = 28;
										break;
									
									case 120:
										iVar0 = 29;
										break;
									
									case 121:
										iVar0 = 30;
										break;
									
									case 122:
										iVar0 = 31;
										break;
									
									case 296:
										iVar0 = 32;
										break;
									
									case 297:
										iVar0 = 33;
										break;
									
									case 298:
										iVar0 = 34;
										break;
									
									case 299:
										iVar0 = 35;
										break;
									
									case 300:
										iVar0 = 36;
										break;
									
									case 301:
										iVar0 = 37;
										break;
									
									case 302:
										iVar0 = 38;
										break;
									
									case 309:
										iVar0 = 39;
										break;
									
									case 310:
										iVar0 = 40;
										break;
									
									case 311:
										iVar0 = 41;
										break;
									
									case 312:
										iVar0 = 42;
										break;
									
									case 313:
										iVar0 = 43;
										break;
									
									case 314:
										iVar0 = 44;
										break;
									
									case 315:
										iVar0 = 45;
										break;
									
									case 316:
										iVar0 = 46;
										break;
									
									case 317:
										iVar0 = 51;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 3:
						switch (iParam2)
						{
							case 11:
								if (iParam3 >= 47 && iParam3 <= 62)
								{
									if (!func_134(iParam0, 3, 209, 222))
									{
										iVar0 = func_133(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!func_134(iParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = func_133(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = func_133(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = func_133(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = func_133(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!func_134(iParam0, 3, 176, 191) && !func_134(iParam0, 3, 227, 242))
									{
										iVar0 = func_133(iParam1, 3, 176, 191);
									}
								}
								break;
						}
						break;
					
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								iVar5 = iParam3;
								iVar4 = func_150(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = func_150(iParam0, 11);
								iVar5 = func_132(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = func_150(iParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!func_131(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
								{
									if (iVar6 != -99)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 27 && iVar3 <= 42) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
							{
								iVar0 = 26;
							}
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if (iParam3 >= 209 && iParam3 <= 222)
							{
							}
							else if (((iParam3 >= 176 && iParam3 <= 191) || (iParam3 >= 227 && iParam3 <= 242)) || (iParam3 >= 243 && iParam3 <= 258))
							{
								iVar7 = func_150(iParam0, 8);
								iVar8 = func_150(iParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = func_132(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = func_132(iParam1, iParam3, iVar8, 1);
								}
							}
							else if (iParam3 >= 41 && iParam3 <= 56)
							{
								iVar0 = 45;
							}
							else if (iParam3 >= 223 && iParam3 <= 226)
							{
								iVar0 = 44;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (((iParam3 >= 27 && iParam3 <= 42) || (iParam3 >= 43 && iParam3 <= 58)) || (iParam3 >= 59 && iParam3 <= 74))
							{
								iVar9 = func_150(iParam0, 11);
								iVar0 = func_132(iParam1, -99, iVar9, 0);
							}
						}
						break;
				}
				break;
			
			case joaat("player_two"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 50:
										iVar0 = 3;
										break;
									
									case 81:
										iVar0 = 5;
										break;
									
									case 82:
										iVar0 = 6;
										break;
									
									case 83:
										iVar0 = 7;
										break;
									
									case 84:
										iVar0 = 10;
										break;
									
									case 85:
										iVar0 = 9;
										break;
									
									case 86:
										iVar0 = 8;
										break;
									
									case 92:
										iVar0 = 22;
										break;
									
									case 87:
										iVar0 = 23;
										break;
									
									case 91:
										iVar0 = 24;
										break;
									
									case 93:
										iVar0 = 25;
										break;
									
									case 88:
										iVar0 = 26;
										break;
									
									case 94:
										iVar0 = 27;
										break;
									
									case 120:
										iVar0 = 11;
										break;
									
									case 121:
										iVar0 = 13;
										break;
									
									case 122:
										iVar0 = 14;
										break;
									
									case 124:
										iVar0 = 12;
										break;
									
									case 126:
										iVar0 = 18;
										break;
									
									case 128:
										iVar0 = 17;
										break;
									
									case 130:
										iVar0 = 19;
										break;
									
									case 131:
										iVar0 = 16;
										break;
									
									case 134:
										iVar0 = 15;
										break;
									
									case 135:
										iVar0 = 20;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return iVar0;
}

int func_131(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	int iVar0;
	
	switch (iParam0)
	{
		case joaat("player_zero"):
			break;
		
		case joaat("player_one"):
			*uParam4 = 0;
			if (iParam1 >= 27 && iParam1 <= 42)
			{
				if (iParam2 != -99)
				{
					if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
					{
					}
					else
					{
						if (iParam2 >= 42 && iParam2 <= 43)
						{
							if (iParam3 >= 176 && iParam3 <= 191)
							{
								iVar0 = (iParam1 - 27);
								*uParam4 = (59 + iVar0);
							}
							else if (iParam3 >= 227 && iParam3 <= 242)
							{
								iVar0 = (iParam1 - 27);
								*uParam4 = (43 + iVar0);
							}
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (((iParam3 >= 227 && iParam3 <= 242) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 243 && iParam3 <= 258))
					{
					}
					else
					{
						return 0;
					}
				}
			}
			else if (iParam1 >= 43 && iParam1 <= 58)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 43);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 227 && iParam3 <= 242)
					{
					}
					else
					{
						if (iParam3 >= 176 && iParam3 <= 191)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = (iParam1 - 43);
								*uParam4 = (59 + iVar0);
							}
						}
						return 0;
					}
				}
			}
			else if (iParam1 >= 59 && iParam1 <= 74)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 176 && iParam3 <= 191)
					{
					}
					else
					{
						if (iParam3 >= 227 && iParam3 <= 242)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = (iParam1 - 59);
								*uParam4 = (43 + iVar0);
							}
						}
						else if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 12)
			{
				if (iParam3 != 241)
				{
					return 0;
				}
			}
			break;
	}
	return 1;
}

int func_132(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam1 >= 243 && iParam1 <= 246)
	{
		if (iParam3 == 1)
		{
			return 1;
		}
		else
		{
			return 5;
		}
	}
	else if (iParam1 >= 247 && iParam1 <= 250)
	{
		if (iParam3 == 1)
		{
			return 2;
		}
		else
		{
			return 6;
		}
	}
	else if (iParam1 >= 251 && iParam1 <= 254)
	{
		if (iParam3 == 1)
		{
			return 3;
		}
		else
		{
			return 7;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if ((iParam1 >= 176 && iParam1 <= 191) || (iParam1 >= 227 && iParam1 <= 242))
	{
		if (iParam2 >= 9 && iParam2 <= 24)
		{
			if (iParam3 == 1)
			{
				return iParam2;
			}
			else
			{
				iVar0 = (iParam2 - 9);
				iParam2 = (25 + iVar0);
				return iParam2;
			}
		}
		else if (iParam2 >= 25 && iParam2 <= 40)
		{
			if (iParam3 == 1)
			{
				iVar0 = (iParam2 - 25);
				iParam2 = (9 + iVar0);
				return iParam2;
			}
			else
			{
				return iParam2;
			}
		}
		else if (iParam2 == 41 || iParam2 == 42)
		{
			if (iParam3 == 1)
			{
				return 41;
			}
			else
			{
				return 42;
			}
		}
		else
		{
			if (iParam3 == 1)
			{
				iParam2 = func_133(iParam0, 11, 9, 24);
			}
			else
			{
				iParam2 = func_133(iParam0, 11, 25, 40);
			}
			if (iParam2 == -99)
			{
				if (iParam3 == 1)
				{
					return 41;
				}
				else
				{
					return 42;
				}
			}
			else
			{
				return iParam2;
			}
		}
	}
	else if (iParam2 >= 1 && iParam2 <= 4)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 1);
			iParam2 = (5 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 5 && iParam2 <= 8)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 5);
			iParam2 = (1 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 >= 9 && iParam2 <= 24)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 9);
			iParam2 = (25 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 25 && iParam2 <= 40)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 25);
			iParam2 = (9 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 == 41 || iParam2 == 42)
	{
		if (iParam3 == 1)
		{
			return 41;
		}
		else
		{
			return 42;
		}
	}
	return -99;
}

int func_133(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam2;
	while (iVar0 <= (iParam3 - 1))
	{
		iVar1 = iVar0;
		if (func_125(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

int func_134(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_150(iParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3)
	{
		return 1;
	}
	return 0;
}

int func_135(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			if ((((((((((((((((((iParam1 == 16 || iParam1 == 17) || iParam1 == 21) || iParam1 == 22) || iParam1 == 32) || (iParam1 >= 34 && iParam1 <= 39)) || (iParam1 >= 41 && iParam1 <= 45)) || iParam1 == 46) || (iParam1 >= 47 && iParam1 <= 54)) || (iParam1 >= 55 && iParam1 <= 70)) || (iParam1 >= 72 && iParam1 <= 79)) || iParam1 == 80) || (iParam1 >= 81 && iParam1 <= 83)) || (iParam1 >= 84 && iParam1 <= 87)) || iParam1 == 88) || (iParam1 >= 89 && iParam1 <= 91)) || iParam1 == 95) || (iParam1 >= 96 && iParam1 <= 111)) || iParam1 == 112)
			{
				*iParam2 = 6;
				return 1;
			}
			break;
		
		case joaat("player_one"):
			if ((((((iParam1 == 12 || (iParam1 >= 14 && iParam1 <= 21)) || iParam1 == 32) || iParam1 == 52) || (iParam1 >= 69 && iParam1 <= 70)) || iParam1 == 71) || (iParam1 >= 72 && iParam1 <= 77))
			{
				*iParam2 = 17;
				return 1;
			}
			break;
		
		case joaat("player_two"):
			if (((((((((((((((iParam1 == 4 || iParam1 == 5) || iParam1 == 6) || iParam1 == 7) || iParam1 == 14) || (iParam1 >= 18 && iParam1 <= 29)) || iParam1 == 31) || iParam1 == 32) || iParam1 == 33) || iParam1 == 34) || (iParam1 >= 35 && iParam1 <= 42)) || (iParam1 >= 43 && iParam1 <= 53)) || (iParam1 >= 54 && iParam1 <= 61)) || (iParam1 >= 71 && iParam1 <= 80)) || (iParam1 >= 81 && iParam1 <= 90)) || (iParam1 >= 94 && iParam1 <= 103))
			{
				*iParam2 = 8;
				return 1;
			}
			break;
	}
	return 0;
}

int func_136(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 38 && iParam2 <= 39)) || (iParam2 >= 40 && iParam2 <= 41)) || (iParam2 >= 42 && iParam2 <= 44))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 9:
					if (iParam2 >= 15 && iParam2 <= 16)
					{
						*iParam3 = 0;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 54 && iParam2 <= 55)) || (iParam2 >= 56 && iParam2 <= 57)) || (iParam2 >= 58 && iParam2 <= 60))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = func_121(iParam0);
		Global_98931.f_1750.f_539[iVar0 /*65*/].f_63 = iParam2;
		Global_98931.f_1750.f_539[iVar0 /*65*/].f_64 = iParam1;
		return 1;
	}
	return 0;
}

int func_137(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 1)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else if (iParam2 == 4)
				{
					return 5;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else if (iParam2 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 >= 0 && iParam1 <= 15)
			{
				if (iParam2 == 0)
				{
					return 0;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 >= 16 && iParam1 <= 17)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 5;
				}
			}
			else if (iParam1 == 18)
			{
				if (iParam2 == 0)
				{
					return 6;
				}
				else
				{
					return 7;
				}
			}
			else if (iParam1 == 19)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else
				{
					return 4;
				}
			}
			else if (iParam2 == 0)
			{
				return 1;
			}
			else
			{
				return 4;
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 2)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 == 3)
			{
				if (iParam2 == 0)
				{
					return 4;
				}
				else
				{
					return 6;
				}
			}
			else if (iParam1 == 8)
			{
				return 5;
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
	}
	return -99;
}

void func_138(int iParam0, var uParam1, int iParam2, var uParam3)
{
	if (iParam2 == -1)
	{
		unk_0xBD4A273C1B487F68(iParam0, uParam1);
	}
	else
	{
		unk_0x8F6F76DC62AD09F1(iParam0, uParam1, iParam2, uParam3, unk_0x1C6DF6AD69BE853E());
	}
}

int func_139(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 == 40 || (iParam2 >= 41 && iParam2 <= 56)) || (iParam2 >= 64 && iParam2 <= 79))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 17 && iParam2 <= 18) || (iParam2 >= 71 && iParam2 <= 86))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						return (unk_0x3FFA0207A02FD5C0(func_140(iParam0, iParam2, 14, 3), joaat("HAT"), 1) || unk_0x3FFA0207A02FD5C0(func_140(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						return (unk_0x3FFA0207A02FD5C0(func_140(iParam0, iParam2, 1, 3), joaat("HAT"), 0) || unk_0x3FFA0207A02FD5C0(func_140(iParam0, iParam2, 1, 3), -1842686353, 0));
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						return (unk_0x3FFA0207A02FD5C0(func_140(iParam0, iParam2, 14, 4), joaat("HAT"), 1) || unk_0x3FFA0207A02FD5C0(func_140(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						return (unk_0x3FFA0207A02FD5C0(func_140(iParam0, iParam2, 1, 4), joaat("HAT"), 0) || unk_0x3FFA0207A02FD5C0(func_140(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_140(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<2> Var21;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x5E3934D9BA58DB06(&Var0);
		iVar18 = 0;
		iVar19 = (iParam1 - func_142(iParam0));
		if (iVar19 < 0)
		{
			return -1;
		}
		iVar20 = unk_0x59D3B25E47CE2137(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar20)
		{
			unk_0xB5977A32A8ED41A9(iVar17, &Var0);
			if (!unk_0xA10BCE9255970BC8(Var0.f_0))
			{
				if (iVar18 == iVar19)
				{
					return Var0.f_1;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		unk_0xAD8DCC106BB001D2(&Var21);
		iVar39 = 0;
		iVar40 = (iParam1 - func_141(iParam0, func_158(iParam2)));
		if (iVar40 < 0)
		{
			return -1;
		}
		iVar41 = unk_0x59D3B25E47CE2137(iParam3, 6, -1, 0, -1, func_158(iParam2));
		iVar38 = 0;
		while (iVar38 < iVar41)
		{
			unk_0x9BCFD79653579375(iVar38, &Var21);
			if (!unk_0xA10BCE9255970BC8(Var21.f_0))
			{
				if (iVar39 == iVar40)
				{
					return Var21.f_1;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	return -1;
}

int func_141(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_142(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_143(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					uVar0 = func_140(iParam0, iParam2, 1, 3);
					if (unk_0x3FFA0207A02FD5C0(uVar0, joaat("HAT"), 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					uVar1 = func_140(iParam0, iParam2, 1, 4);
					if (unk_0x3FFA0207A02FD5C0(uVar1, joaat("HAT"), 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_144(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					return unk_0x3FFA0207A02FD5C0(func_140(iParam0, iParam2, 14, 3), joaat("GLASSES"), 1);
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					return unk_0x3FFA0207A02FD5C0(func_140(iParam0, iParam2, 14, 4), joaat("GLASSES"), 1);
				}
			}
			break;
	}
	return 0;
}

int func_145(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5FEB513A4402FD59(iParam0))
	{
		return -99;
	}
	iVar0 = unk_0x0F7FE22229DBD748(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_149(iParam1);
	}
	iVar1 = unk_0xC2F100D1D0DEC7FF(iParam0, iParam1);
	return func_146(iParam0, iVar0, iVar1, iParam1);
}

int func_146(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == -1)
	{
		return func_149(iParam3);
	}
	iVar0 = unk_0x14B7103DBD149FFE(iParam0);
	iVar1 = unk_0xB22EF0FC5ACA6867(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_148(unk_0x14B7103DBD149FFE(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_148(unk_0x14B7103DBD149FFE(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = unk_0xE0DCE4D5111ABAA6(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = unk_0xF7AC8C5F75E87E39(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_147(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_149(iParam3);
}

int func_147(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x14B7103DBD149FFE(iParam0);
	switch (iVar0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 58;
					break;
				
				case 2:
					return 112;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 82;
					break;
				
				case 2:
					return 158;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 154;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
	}
	return -99;
}

int func_148(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<2> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x5E3934D9BA58DB06(&Var0);
		iVar18 = 0;
		iVar19 = unk_0x59D3B25E47CE2137(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			unk_0xB5977A32A8ED41A9(iVar17, &Var0);
			if (!unk_0xA10BCE9255970BC8(Var0.f_0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_142(iParam0) + iVar18);
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		unk_0xAD8DCC106BB001D2(&Var20);
		iVar38 = 0;
		iVar39 = unk_0x59D3B25E47CE2137(iParam3, 6, -1, 0, -1, func_158(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			unk_0x9BCFD79653579375(iVar37, &Var20);
			if (!unk_0xA10BCE9255970BC8(Var20.f_0))
			{
				if (iParam1 == Var20.f_1)
				{
					return (func_141(iParam0, func_158(iParam2)) + iVar38);
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

int func_149(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
	}
	return 0;
}

int func_150(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0x5FEB513A4402FD59(iParam0))
	{
		return -99;
	}
	iVar0 = func_158(iParam1);
	iVar1 = unk_0x1CFC95A2D6BABBA2(iParam0, iVar0);
	iVar2 = unk_0x2933140C98919EB1(iParam0, iVar0);
	return func_151(iParam0, iVar1, iVar2, iParam1);
}

int func_151(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_158(iParam3);
	iVar1 = unk_0x89139BEEC678B31C(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = unk_0xFBC1944E2EB324D7(iParam0, iVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + iVar5);
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= (iVar5 - 1))
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

void func_152(int iParam0)
{
	if (unk_0x236D8AD7EE179F46(Global_68881[1 /*14*/].f_6, 1) && !unk_0x236D8AD7EE179F46(Global_68881[1 /*14*/].f_6, 6))
	{
		func_155(iParam0, Global_68881[1 /*14*/].f_5, Global_68881[1 /*14*/].f_2, 2, Global_68881[1 /*14*/].f_1, 1, 0);
	}
	if (unk_0x236D8AD7EE179F46(Global_68881[1 /*14*/].f_6, 1) && unk_0x236D8AD7EE179F46(Global_68881[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_153(Global_2621444, 2, 1, 1, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_153(Global_2621444, 2, 1, 1, -1);
		}
		else
		{
			func_153(Global_2621444, 2, 1, 1, -1);
		}
	}
}

void func_153(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = Global_68879;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_154(uParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		uVar3 = func_70(iVar2, iVar0, 0);
		unk_0xF3148AAF69AF9CBC(&uVar3, iVar1);
		func_68(iVar2, uVar3, iVar0, 1);
	}
}

bool func_154(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 3438;
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_2547744)
		{
			iVar0 = unk_0x6220371F9AEACEC2(uParam0);
		}
		else
		{
			iVar0 = unk_0x09455EBBFD576191(uParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0x6220371F9AEACEC2(uParam0);
	}
	else
	{
		iVar0 = unk_0x09455EBBFD576191(uParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1747;
					break;
				
				case 1:
					*uParam2 = 1748;
					break;
				
				case 2:
					*uParam2 = 1749;
					break;
				
				case 3:
					*uParam2 = 1750;
					break;
				
				case 4:
					*uParam2 = 1751;
					break;
				
				case 5:
					*uParam2 = 1752;
					break;
				
				case 6:
					*uParam2 = 1759;
					break;
				
				case 7:
					*uParam2 = 1760;
					break;
				
				case 8:
					*uParam2 = 1761;
					break;
				
				case 9:
					*uParam2 = 1762;
					break;
				
				case 10:
					*uParam2 = 1763;
					break;
				
				case 11:
					*uParam2 = 1764;
					break;
				
				case 12:
					*uParam2 = 1765;
					break;
				
				case 13:
					*uParam2 = 1773;
					break;
				
				case 14:
					*uParam2 = 1774;
					break;
				
				case 15:
					*uParam2 = 1875;
					break;
				
				case 16:
					*uParam2 = 1876;
					break;
				
				case 17:
					*uParam2 = 1907;
					break;
				
				case 18:
					*uParam2 = 1921;
					break;
				
				case 19:
					*uParam2 = 1922;
					break;
				
				case 20:
					*uParam2 = 1923;
					break;
				
				case 21:
					*uParam2 = 1924;
					break;
				
				case 22:
					*uParam2 = 1925;
					break;
				
				case 23:
					*uParam2 = 2029;
					break;
				
				case 24:
					*uParam2 = 2030;
					break;
				
				case 25:
					*uParam2 = 2056;
					break;
				
				case 26:
					*uParam2 = 2057;
					break;
				
				case 27:
					*uParam2 = 2058;
					break;
				
				case 28:
					*uParam2 = 2059;
					break;
				
				case 29:
					*uParam2 = 2060;
					break;
				
				case 30:
					*uParam2 = 2061;
					break;
				
				case 31:
					*uParam2 = 2062;
					break;
				
				case 32:
					*uParam2 = 2063;
					break;
				
				case 33:
					*uParam2 = 2064;
					break;
				
				case 34:
					*uParam2 = 2065;
					break;
				
				case 35:
					*uParam2 = 2312;
					break;
				
				case 36:
					*uParam2 = 2313;
					break;
				
				case 37:
					*uParam2 = 2361;
					break;
				
				case 38:
					*uParam2 = 2362;
					break;
				
				case 39:
					*uParam2 = 2363;
					break;
				
				case 40:
					*uParam2 = 2364;
					break;
				
				case 41:
					*uParam2 = 2423;
					break;
				
				case 42:
					*uParam2 = 2424;
					break;
				
				case 43:
					*uParam2 = 2425;
					break;
				
				case 44:
					*uParam2 = 2426;
					break;
				
				case 45:
					*uParam2 = 2427;
					break;
				
				case 46:
					*uParam2 = 2428;
					break;
				
				case 47:
					*uParam2 = 2429;
					break;
				
				case 48:
					*uParam2 = 2430;
					break;
				
				case 49:
					*uParam2 = 2431;
					break;
				
				case 50:
					*uParam2 = 2432;
					break;
				
				case 51:
					*uParam2 = 2561;
					break;
				
				case 52:
					*uParam2 = 2562;
					break;
				
				case 53:
					*uParam2 = 2563;
					break;
				
				case 54:
					*uParam2 = 2564;
					break;
				
				case 55:
					*uParam2 = 2565;
					break;
				
				case 56:
					*uParam2 = 2566;
					break;
				
				case 57:
					*uParam2 = 2567;
					break;
				
				case 58:
					*uParam2 = 2568;
					break;
				
				case 59:
					*uParam2 = 2569;
					break;
				
				case 60:
					*uParam2 = 2570;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1753;
					break;
				
				case 1:
					*uParam2 = 1754;
					break;
				
				case 2:
					*uParam2 = 1755;
					break;
				
				case 3:
					*uParam2 = 1756;
					break;
				
				case 4:
					*uParam2 = 1757;
					break;
				
				case 5:
					*uParam2 = 1758;
					break;
				
				case 6:
					*uParam2 = 1766;
					break;
				
				case 7:
					*uParam2 = 1767;
					break;
				
				case 8:
					*uParam2 = 1768;
					break;
				
				case 9:
					*uParam2 = 1769;
					break;
				
				case 10:
					*uParam2 = 1770;
					break;
				
				case 11:
					*uParam2 = 1771;
					break;
				
				case 12:
					*uParam2 = 1772;
					break;
				
				case 13:
					*uParam2 = 1775;
					break;
				
				case 14:
					*uParam2 = 1776;
					break;
				
				case 15:
					*uParam2 = 1877;
					break;
				
				case 16:
					*uParam2 = 1878;
					break;
				
				case 17:
					*uParam2 = 1908;
					break;
				
				case 18:
					*uParam2 = 1926;
					break;
				
				case 19:
					*uParam2 = 1927;
					break;
				
				case 20:
					*uParam2 = 1928;
					break;
				
				case 21:
					*uParam2 = 1929;
					break;
				
				case 22:
					*uParam2 = 1930;
					break;
				
				case 23:
					*uParam2 = 2031;
					break;
				
				case 24:
					*uParam2 = 2032;
					break;
				
				case 25:
					*uParam2 = 2066;
					break;
				
				case 26:
					*uParam2 = 2067;
					break;
				
				case 27:
					*uParam2 = 2068;
					break;
				
				case 28:
					*uParam2 = 2069;
					break;
				
				case 29:
					*uParam2 = 2070;
					break;
				
				case 30:
					*uParam2 = 2071;
					break;
				
				case 31:
					*uParam2 = 2072;
					break;
				
				case 32:
					*uParam2 = 2073;
					break;
				
				case 33:
					*uParam2 = 2074;
					break;
				
				case 34:
					*uParam2 = 2075;
					break;
				
				case 35:
					*uParam2 = 2314;
					break;
				
				case 36:
					*uParam2 = 2315;
					break;
				
				case 37:
					*uParam2 = 2365;
					break;
				
				case 38:
					*uParam2 = 2366;
					break;
				
				case 39:
					*uParam2 = 2367;
					break;
				
				case 40:
					*uParam2 = 2368;
					break;
				
				case 41:
					*uParam2 = 2433;
					break;
				
				case 42:
					*uParam2 = 2434;
					break;
				
				case 43:
					*uParam2 = 2435;
					break;
				
				case 44:
					*uParam2 = 2436;
					break;
				
				case 45:
					*uParam2 = 2437;
					break;
				
				case 46:
					*uParam2 = 2438;
					break;
				
				case 47:
					*uParam2 = 2439;
					break;
				
				case 48:
					*uParam2 = 2440;
					break;
				
				case 49:
					*uParam2 = 2441;
					break;
				
				case 50:
					*uParam2 = 2442;
					break;
				
				case 51:
					*uParam2 = 2571;
					break;
				
				case 52:
					*uParam2 = 2572;
					break;
				
				case 53:
					*uParam2 = 2573;
					break;
				
				case 54:
					*uParam2 = 2574;
					break;
				
				case 55:
					*uParam2 = 2575;
					break;
				
				case 56:
					*uParam2 = 2576;
					break;
				
				case 57:
					*uParam2 = 2577;
					break;
				
				case 58:
					*uParam2 = 2578;
					break;
				
				case 59:
					*uParam2 = 2579;
					break;
				
				case 60:
					*uParam2 = 2580;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 3438;
}

int func_155(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/][iParam3]), iParam4);
		}
		return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_156(int iParam0)
{
	if (!unk_0x236D8AD7EE179F46(Global_68881[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!unk_0x236D8AD7EE179F46(Global_68881[1 /*14*/].f_6, 1))
		{
			return 0;
		}
		if (!unk_0x236D8AD7EE179F46(Global_68881[1 /*14*/].f_6, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_157(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_121(iParam1);
	if (Global_98931.f_1750.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_231(iParam0, Global_98931.f_1750.f_539[iVar0 /*65*/].f_61, Global_98931.f_1750.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_98931.f_1750.f_539[iVar0 /*65*/].f_59;
			Global_98931.f_1750.f_539[iVar0 /*65*/].f_60 = -99;
			Global_98931.f_1750.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_158(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

struct<10> func_159(int iParam0, int iParam1)
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 31:
					func_161(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_161(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_161(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_161(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_161(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_161(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_161(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_161(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_161(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_161(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_161(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_160(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_161(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_161(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_161(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_161(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_161(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_161(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_161(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_161(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_161(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_161(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_160(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_161(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_161(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_161(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_161(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_161(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_161(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_161(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_161(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_161(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_161(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_160(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_161(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_161(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_161(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_161(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_161(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_161(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_161(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_161(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_161(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_161(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_161(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_161(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_161(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_161(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_161(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_161(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_161(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_161(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_161(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_161(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_161(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_161(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_161(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_161(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_161(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_161(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_160(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_161(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_161(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_161(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_161(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_161(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_161(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_161(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_161(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_161(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_161(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_161(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_161(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_161(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_161(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_161(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_161(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_161(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_161(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_161(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_161(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_161(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_161(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_161(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_161(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_161(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_160(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_160(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	struct<3> Var16;
	int iVar19;
	
	if (iParam2 != 0 && iParam2 != -99)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 4;
		}
		unk_0xA3AB272961770D24(iParam2, &Var1);
		if (!unk_0xA10BCE9255970BC8(Var1.f_0))
		{
			iVar19 = 0;
			while (iVar19 < Var1.f_3)
			{
				if (unk_0xB1607F12CB04AA17(Var1.f_1, iVar19, &Var16) && Var16.f_2 != -1)
				{
					if ((Var16.f_0 != 0 && Var16.f_0 != -1) && Var16.f_0 != joaat("0"))
					{
						(*iParam0)[Var16.f_2] = func_148(iParam1, Var16.f_0, 14, iVar0);
					}
					else if (Var16.f_1 != -1)
					{
						(*iParam0)[Var16.f_2] = Var16.f_1;
					}
				}
				iVar19++;
			}
		}
	}
}

void func_161(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

struct<16> func_162(int iParam0, int iParam1)
{
	int iVar0;
	struct<16> Var1;
	
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_98931.f_7699.f_99.f_58[120])
					{
						func_165(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_165(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_165(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_165(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_165(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_165(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_165(&Var1, -99, -99, Global_98931.f_1750.f_539.f_196[0], Global_98931.f_1750.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_165(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_165(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_165(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_165(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_165(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_165(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_165(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_165(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_165(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_165(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_165(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_165(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_165(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_165(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_165(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_165(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_165(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_165(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_165(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_165(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_165(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_165(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_165(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_165(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_165(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_165(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_165(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_165(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_165(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_165(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_165(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_165(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_165(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_165(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_165(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_165(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_165(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_165(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_165(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_165(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_165(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_165(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_165(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_165(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_165(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_165(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_165(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_163(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_165(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_165(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_165(&Var1, -99, -99, Global_98931.f_1750.f_539.f_196[1], Global_98931.f_1750.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_165(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_165(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_165(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_165(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_165(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_165(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_165(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_165(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_165(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_165(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_165(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_165(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_165(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_165(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_165(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_165(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_165(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_165(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_165(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_165(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_165(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_165(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_165(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_165(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_165(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_165(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_165(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_165(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_165(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_165(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_165(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_165(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_165(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_165(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_165(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_165(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_165(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_165(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_165(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_165(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_165(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_165(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_165(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_165(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_163(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_165(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_165(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_165(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_165(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_165(&Var1, -99, -99, Global_98931.f_1750.f_539.f_196[2], Global_98931.f_1750.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_165(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_165(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_165(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_165(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_165(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_165(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_165(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_165(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_165(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_165(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_165(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_165(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_165(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_165(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_165(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_165(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_165(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_165(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_165(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_165(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_165(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_165(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_165(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_165(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_165(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_165(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_165(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_165(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_165(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_165(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_165(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_165(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_165(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_165(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_165(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_165(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_165(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_165(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_165(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_165(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_165(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_165(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_165(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_163(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_165(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_165(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_165(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_165(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_165(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_165(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_165(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_165(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_165(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_165(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_165(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_165(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_165(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_165(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_165(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_165(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_165(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_165(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_165(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_165(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_165(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_165(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_165(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_165(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_165(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_165(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_163(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_165(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_165(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_165(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_165(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_165(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_165(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_165(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_165(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_165(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_165(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_165(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_165(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_165(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_165(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_165(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_165(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_165(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_165(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_165(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_165(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_165(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_165(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_165(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_165(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_165(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_165(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_165(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_165(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_163(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_163(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	struct<3> Var16;
	int iVar19;
	
	(*iParam0)[0] = 0;
	(*iParam0)[2] = -99;
	(*iParam0)[3] = 0;
	(*iParam0)[4] = 0;
	(*iParam0)[6] = 0;
	(*iParam0)[5] = 0;
	(*iParam0)[8] = 0;
	(*iParam0)[9] = 0;
	(*iParam0)[10] = 0;
	(*iParam0)[1] = 0;
	(*iParam0)[7] = 0;
	(*iParam0)[11] = 0;
	(*iParam0)[13] = -99;
	(*iParam0)[14] = -99;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0;
		(*iParam0)[13] = (10 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 1;
		(*iParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 2;
		(*iParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 4;
	}
	unk_0x595BD2F2B16F5120(iVar0, 0);
	unk_0x214C432DE602553A((iParam2 - iParam3), &Var1);
	if (!unk_0xA10BCE9255970BC8(Var1.f_0))
	{
		iVar19 = 0;
		while (iVar19 < Var1.f_4)
		{
			if (unk_0x960C577F342A71AC(Var1.f_1, iVar19, &Var16))
			{
				if ((Var16.f_0 != 0 && Var16.f_0 != -1) && Var16.f_0 != joaat("0"))
				{
					if (Var16.f_2 == 10)
					{
						(*iParam0)[func_164(Var16.f_2)] = Var16.f_0;
					}
					else
					{
						(*iParam0)[func_164(Var16.f_2)] = func_148(iParam1, Var16.f_0, func_164(Var16.f_2), iVar0);
					}
				}
				else if (Var16.f_1 != -1)
				{
					(*iParam0)[func_164(Var16.f_2)] = Var16.f_1;
				}
			}
			iVar19++;
		}
		if (Var1.f_3 == 0)
		{
			(*iParam0)[13] = -99;
		}
		else
		{
			(*iParam0)[13] = Var1.f_1;
		}
	}
}

int func_164(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_165(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[2] = iParam2;
	(*iParam0)[3] = iParam3;
	(*iParam0)[4] = iParam4;
	(*iParam0)[6] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[8] = iParam7;
	(*iParam0)[9] = iParam8;
	(*iParam0)[10] = iParam9;
	(*iParam0)[1] = iParam10;
	(*iParam0)[7] = iParam11;
	(*iParam0)[11] = iParam12;
	(*iParam0)[13] = iParam13;
	(*iParam0)[14] = -99;
}

struct<14> func_166(int iParam0, int iParam1, int iParam2)
{
	func_230();
	if (iParam0 == joaat("player_zero"))
	{
		func_212(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_193(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_167(iParam1, iParam2);
	}
	return Global_68881[0 /*14*/];
}

void func_167(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_192(iParam1);
			break;
		
		case 2:
			func_191(iParam1);
			break;
		
		case 3:
			func_188(iParam1);
			break;
		
		case 4:
			func_187(iParam1);
			break;
		
		case 6:
			func_186(iParam1);
			break;
		
		case 5:
			func_185(iParam1);
			break;
		
		case 8:
			func_184(iParam1);
			break;
		
		case 9:
			func_183(iParam1);
			break;
		
		case 10:
			func_182(iParam1);
			break;
		
		case 1:
			func_181(iParam1);
			break;
		
		case 7:
			func_180(iParam1);
			break;
		
		case 11:
			func_179(iParam1);
			break;
		
		case 12:
			func_178(iParam1);
			break;
		
		case 13:
			func_177(iParam1);
			break;
		
		case 14:
			func_168(iParam1);
			break;
	}
}

void func_168(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_68881[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 154:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P2_E1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P2_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P2_E2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P2_E2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P2_E2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 52;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P2_E2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 54;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P2_E2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 54;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P2_E2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P2_E2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P2_E2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P2_E2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P2_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P2_E3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P2_E3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P2_E3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P2_E3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P2_E3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P2_E3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P2_E3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P2_E3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P2_E3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P2_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P2_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P2_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P2_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 59;
			iVar8 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P2_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P2_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P2_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P2_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 59;
			iVar8 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P2_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 79;
			iVar8 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P2_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 79;
			iVar8 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P2_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P2_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P2_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P2_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P2_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P2_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P2_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P2_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P2_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P2_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 215;
			iVar8 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P2_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P2_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P2_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 169;
			iVar8 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P2_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 169;
			iVar8 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P2_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P2_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P2_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P2_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P2_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P2_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P2_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 49;
			iVar8 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P2_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P2_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 52;
			iVar8 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P2_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P2_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P2_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P2_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P2_E10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 63;
			iVar8 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P2_E10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P2_E10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P2_H2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "PROPS_P2_H7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "PROPS_P2_H7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 12;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 13;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 14;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 15;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			iVar1 = 24;
			iVar8 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "PROPS_P1_H26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P1_H26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P1_H26_10", 16);
			iVar6 = 26;
			iVar7 = 10;
			iVar1 = 18;
			iVar8 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P1_H26_11", 16);
			iVar6 = 26;
			iVar7 = 11;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_H26_12", 16);
			iVar6 = 26;
			iVar7 = 12;
			iVar1 = 24;
			iVar8 = 0;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_H26_13", 16);
			iVar6 = 26;
			iVar7 = 13;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_H26_14", 16);
			iVar6 = 26;
			iVar7 = 14;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_H26_15", 16);
			iVar6 = 26;
			iVar7 = 15;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 87:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		default:
			func_176(iVar10, iParam0, 155);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_169(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	var uVar0;
	int iVar1;
	
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_175(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0x8DAF7A748E41AD46(sParam3) != unk_0x8DAF7A748E41AD46("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 5);
		}
		unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 1);
		unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 2);
		unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 6);
		if (func_174(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (unk_0x3FFA0207A02FD5C0(Global_2621444, joaat("REBREATHER"), 0))
			{
				unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_173(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xC69E84EBBD7166E6(&(uParam0->f_6), 2);
			}
			if (!func_173(Global_2621444, 2, 1, 1, -1))
			{
				unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_173(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xC69E84EBBD7166E6(&(uParam0->f_6), 2);
			}
			if (!func_173(Global_2621444, 2, 1, 1, -1))
			{
				unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_173(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xC69E84EBBD7166E6(&(uParam0->f_6), 2);
			}
			if (!func_173(Global_2621444, 2, 1, 1, -1))
			{
				unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 0);
		unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 5);
		if (func_155(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 1);
		}
		if (func_155(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 2);
		}
		if (!func_155(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			uVar0 = func_70(func_172(iParam1, uParam0->f_2), Global_68879, 0);
			if (unk_0x236D8AD7EE179F46(uVar0, uParam0->f_1))
			{
				unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 1);
			}
			iVar0 = func_70(func_171(iParam1, uParam0->f_2), Global_68879, 0);
			if (unk_0x236D8AD7EE179F46(iVar0, uParam0->f_1))
			{
				unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 2);
			}
			if (func_170(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_70(iVar1, Global_68879, 0);
				if (!unk_0x236D8AD7EE179F46(iVar0, uParam0->f_1))
				{
					unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 1);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 1);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 2);
		}
	}
}

bool func_170(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 968;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 969;
					break;
				
				case 3:
					*uParam2 = 1418;
					break;
				
				case 4:
					*uParam2 = 985;
					break;
				
				case 6:
					*uParam2 = 993;
					break;
				
				case 8:
					*uParam2 = 1419;
					break;
				
				case 9:
					*uParam2 = 1427;
					break;
				
				case 10:
					*uParam2 = 1429;
					break;
				
				case 1:
					*uParam2 = 1001;
					break;
				
				case 7:
					*uParam2 = 1430;
					break;
				
				case 11:
					*uParam2 = 977;
					break;
				
				case 14:
					*uParam2 = 1009;
					break;
				
				case 12:
					*uParam2 = 1020;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 970;
					break;
				
				case 4:
					*uParam2 = 986;
					break;
				
				case 6:
					*uParam2 = 994;
					break;
				
				case 8:
					*uParam2 = 1420;
					break;
				
				case 9:
					*uParam2 = 1428;
					break;
				
				case 7:
					*uParam2 = 1431;
					break;
				
				case 11:
					*uParam2 = 978;
					break;
				
				case 14:
					*uParam2 = 1010;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 971;
					break;
				
				case 4:
					*uParam2 = 987;
					break;
				
				case 6:
					*uParam2 = 995;
					break;
				
				case 8:
					*uParam2 = 1421;
					break;
				
				case 7:
					*uParam2 = 1432;
					break;
				
				case 11:
					*uParam2 = 979;
					break;
				
				case 14:
					*uParam2 = 1011;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 988;
					break;
				
				case 6:
					*uParam2 = 996;
					break;
				
				case 8:
					*uParam2 = 1422;
					break;
				
				case 11:
					*uParam2 = 980;
					break;
				
				case 14:
					*uParam2 = 1012;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 989;
					break;
				
				case 6:
					*uParam2 = 997;
					break;
				
				case 8:
					*uParam2 = 1423;
					break;
				
				case 11:
					*uParam2 = 981;
					break;
				
				case 14:
					*uParam2 = 1013;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 990;
					break;
				
				case 6:
					*uParam2 = 998;
					break;
				
				case 8:
					*uParam2 = 1424;
					break;
				
				case 11:
					*uParam2 = 982;
					break;
				
				case 14:
					*uParam2 = 1014;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 991;
					break;
				
				case 6:
					*uParam2 = 999;
					break;
				
				case 8:
					*uParam2 = 1425;
					break;
				
				case 11:
					*uParam2 = 983;
					break;
				
				case 14:
					*uParam2 = 1015;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 992;
					break;
				
				case 6:
					*uParam2 = 1000;
					break;
				
				case 8:
					*uParam2 = 1426;
					break;
				
				case 11:
					*uParam2 = 984;
					break;
				
				case 14:
					*uParam2 = 1016;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1017;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1018;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1019;
					break;
			}
			break;
	}
	return *uParam2 != 968;
}

int func_171(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 917;
					break;
				
				case 3:
					return 1403;
					break;
				
				case 4:
					return 933;
					break;
				
				case 6:
					return 941;
					break;
				
				case 8:
					return 1404;
					break;
				
				case 9:
					return 1412;
					break;
				
				case 10:
					return 1414;
					break;
				
				case 1:
					return 949;
					break;
				
				case 7:
					return 1415;
					break;
				
				case 11:
					return 925;
					break;
				
				case 14:
					return 957;
					break;
				
				case 12:
					return 968;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 918;
					break;
				
				case 4:
					return 934;
					break;
				
				case 6:
					return 942;
					break;
				
				case 8:
					return 1405;
					break;
				
				case 9:
					return 1413;
					break;
				
				case 7:
					return 1416;
					break;
				
				case 11:
					return 926;
					break;
				
				case 14:
					return 958;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 919;
					break;
				
				case 4:
					return 935;
					break;
				
				case 6:
					return 943;
					break;
				
				case 8:
					return 1406;
					break;
				
				case 7:
					return 1417;
					break;
				
				case 11:
					return 927;
					break;
				
				case 14:
					return 959;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 936;
					break;
				
				case 6:
					return 944;
					break;
				
				case 8:
					return 1407;
					break;
				
				case 11:
					return 928;
					break;
				
				case 14:
					return 960;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 937;
					break;
				
				case 6:
					return 945;
					break;
				
				case 8:
					return 1408;
					break;
				
				case 11:
					return 929;
					break;
				
				case 14:
					return 961;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 938;
					break;
				
				case 6:
					return 946;
					break;
				
				case 8:
					return 1409;
					break;
				
				case 11:
					return 930;
					break;
				
				case 14:
					return 962;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 939;
					break;
				
				case 6:
					return 947;
					break;
				
				case 8:
					return 1410;
					break;
				
				case 11:
					return 931;
					break;
				
				case 14:
					return 963;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 940;
					break;
				
				case 6:
					return 948;
					break;
				
				case 8:
					return 1411;
					break;
				
				case 11:
					return 932;
					break;
				
				case 14:
					return 964;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 965;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 966;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 967;
					break;
			}
			break;
	}
	return 925;
}

int func_172(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 865;
					break;
				
				case 3:
					return 1388;
					break;
				
				case 4:
					return 881;
					break;
				
				case 6:
					return 889;
					break;
				
				case 8:
					return 1389;
					break;
				
				case 9:
					return 1397;
					break;
				
				case 10:
					return 1399;
					break;
				
				case 1:
					return 897;
					break;
				
				case 7:
					return 1400;
					break;
				
				case 11:
					return 873;
					break;
				
				case 14:
					return 905;
					break;
				
				case 12:
					return 916;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 866;
					break;
				
				case 4:
					return 882;
					break;
				
				case 6:
					return 890;
					break;
				
				case 8:
					return 1390;
					break;
				
				case 9:
					return 1398;
					break;
				
				case 7:
					return 1401;
					break;
				
				case 11:
					return 874;
					break;
				
				case 14:
					return 906;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 867;
					break;
				
				case 4:
					return 883;
					break;
				
				case 6:
					return 891;
					break;
				
				case 8:
					return 1391;
					break;
				
				case 7:
					return 1402;
					break;
				
				case 11:
					return 875;
					break;
				
				case 14:
					return 907;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 884;
					break;
				
				case 6:
					return 892;
					break;
				
				case 8:
					return 1392;
					break;
				
				case 11:
					return 876;
					break;
				
				case 14:
					return 908;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 885;
					break;
				
				case 6:
					return 893;
					break;
				
				case 8:
					return 1393;
					break;
				
				case 11:
					return 877;
					break;
				
				case 14:
					return 909;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 886;
					break;
				
				case 6:
					return 894;
					break;
				
				case 8:
					return 1394;
					break;
				
				case 11:
					return 878;
					break;
				
				case 14:
					return 910;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 887;
					break;
				
				case 6:
					return 895;
					break;
				
				case 8:
					return 1395;
					break;
				
				case 11:
					return 879;
					break;
				
				case 14:
					return 911;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 888;
					break;
				
				case 6:
					return 896;
					break;
				
				case 8:
					return 1396;
					break;
				
				case 11:
					return 880;
					break;
				
				case 14:
					return 912;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 913;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 914;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 915;
					break;
			}
			break;
	}
	return 873;
}

int func_173(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = Global_68879;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_154(uParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		uVar3 = func_70(iVar2, iVar0, 0);
		return unk_0x236D8AD7EE179F46(uVar3, iVar1);
	}
	return 0;
}

bool func_174(int iParam0)
{
	return Global_35443 == iParam0;
}

int func_175(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_176(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	struct<8> Var2;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<10> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<10> Var41;
	int iVar58;
	int iVar59;
	int iVar60;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	uVar1 = Global_68881[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar18 = 0;
		iVar19 = unk_0x595BD2F2B16F5120(uVar1, 0);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			unk_0x214C432DE602553A(iVar17, &Var2);
			if (!unk_0xA10BCE9255970BC8(Var2.f_0))
			{
				if (iVar18 == (iParam1 - iParam2))
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2.f_0;
					func_169(&(Global_68881[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13)
	{
		func_169(&(Global_68881[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0x5E3934D9BA58DB06(&Var20);
		iVar39 = 0;
		iVar40 = unk_0x59D3B25E47CE2137(iVar1, 6, -1, 1, -1, -1);
		iVar38 = 0;
		while (iVar38 < iVar40)
		{
			unk_0xB5977A32A8ED41A9(iVar38, &Var20);
			if (!unk_0xA10BCE9255970BC8(Var20.f_0))
			{
				if (iVar39 == (iParam1 - iParam2))
				{
					if (Var20.f_6 == 0)
					{
						iVar37 = 9;
					}
					else if (Var20.f_6 == 1)
					{
						iVar37 = 10;
					}
					else if (Var20.f_6 == 2)
					{
						iVar37 = 2;
					}
					else if (Var20.f_6 == 3)
					{
						iVar37 = 3;
					}
					else if (Var20.f_6 == 4)
					{
						iVar37 = 4;
					}
					else if (Var20.f_6 == 5)
					{
						iVar37 = 5;
					}
					else if (Var20.f_6 == 6)
					{
						iVar37 = 6;
					}
					else if (Var20.f_6 == 7)
					{
						iVar37 = 7;
					}
					else if (Var20.f_6 == 8)
					{
						iVar37 = 8;
					}
					else
					{
						iVar37 = -1;
					}
					Global_2621444 = Var20.f_1;
					Global_2621445 = Var20.f_0;
					func_169(&(Global_68881[0 /*14*/]), iParam0, iParam1, &(Var20.f_9), Var20.f_3, Var20.f_4, Var20.f_5, unk_0x3FFA0207A02FD5C0(Var20.f_1, joaat("OUTFIT_ONLY"), 0), iVar37, 2, Var20.f_1 != 0);
					return;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	else
	{
		unk_0xAD8DCC106BB001D2(&Var41);
		iVar59 = 0;
		iVar60 = unk_0x59D3B25E47CE2137(iVar1, 6, -1, 0, -1, func_158(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60)
		{
			unk_0x9BCFD79653579375(iVar58, &Var41);
			if (!unk_0xA10BCE9255970BC8(Var41.f_0))
			{
				if (iVar59 == (iParam1 - iParam2))
				{
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41.f_0;
					func_169(&(Global_68881[0 /*14*/]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, unk_0x3FFA0207A02FD5C0(Var41.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

void func_177(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_68881[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_176(iVar10, iParam0, 9);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_178(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_68881[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P2_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P2_5", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P2_6", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P2_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P2_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P2_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P2_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P2_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P2_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P2_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P2_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P2_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P2_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P2_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P2_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P2_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P2_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P2_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P2_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P2_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P2_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P2_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P2_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 119;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P2_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 99;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P2_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 129;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P2_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P2_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P2_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 139;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P2_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 149;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P2_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 145;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P2_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 140;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P2_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 135;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P2_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P2_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P2_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P2_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P2_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P2_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P2_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P2_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P2_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P2_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P2_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P2_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P2_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_176(iVar10, iParam0, 48);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_179(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_68881[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_176(iVar10, iParam0, 1);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_180(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_68881[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_176(iVar10, iParam0, 1);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_181(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_68881[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "BERD_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		default:
			func_176(iVar10, iParam0, 6);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_182(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_68881[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 9;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 6;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		default:
			func_176(iVar10, iParam0, 33);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_183(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_68881[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 270;
			break;
		
		case 16:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 270;
			break;
		
		default:
			func_176(iVar10, iParam0, 17);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_184(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_68881[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "SPEC_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "SPEC_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_176(iVar10, iParam0, 18);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_185(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_68881[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_176(iVar10, iParam0, 7);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_186(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_68881[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 22;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 45;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 65;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 58;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 72;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 68;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 60;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "FEET_P2_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "FEET_P2_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "FEET_P2_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P2_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P2_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P2_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P2_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P2_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P2_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P2_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P2_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P2_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P2_9_11", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P2_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P2_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P2_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P2_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P2_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P2_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "FEET_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_176(iVar10, iParam0, 84);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_187(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_68881[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 129;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 115;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 22:
			StringCopy(&Var2, "LEGS_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 850;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 750;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 690;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 820;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 650;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 690;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 690;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 820;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "LEGS_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 58;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P2_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 68;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P2_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P2_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 60;
			break;
		
		case 39:
			StringCopy(&Var2, "LEGS_P2_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P2_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 63;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P2_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 60;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P2_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 58;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 99;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 105;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 110;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 99;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 110;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 105;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 15;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 15;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 15;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 15;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 15;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 15;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 15;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 600;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 600;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 600;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 600;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 600;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 600;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 600;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 600;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 600;
			break;
		
		case 71:
			StringCopy(&Var2, "LEGS_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 80;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 80;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 80;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 80;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "LEGS_P2_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 80;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P2_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 80;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 12;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 12;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 18;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 20;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 30;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 30;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 30;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 95:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		
		case 96:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		
		case 97:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		
		case 98:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		
		case 99:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		
		case 100:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		
		case 101:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		
		case 102:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		
		case 103:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		
		default:
			func_176(iVar10, iParam0, 104);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_188(int iParam0)
{
	if (iParam0 < 136)
	{
		func_190(iParam0);
	}
	else
	{
		func_189(iParam0);
	}
	if (Global_68881[0 /*14*/].f_2 == -1)
	{
		func_176(3, iParam0, 242);
	}
}

void func_189(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_68881[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 136:
			StringCopy(&Var2, "TORSO_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 32;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 39;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 40;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 42;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 45;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 48;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 52;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 560;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 390;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 390;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 560;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 390;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 390;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 390;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P2_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 390;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P2_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 3950;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P2_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P2_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P2_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P2_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P2_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 19;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P2_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 20;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P2_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 19;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P2_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P2_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 20;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P2_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 28;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P2_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 28;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P2_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 25;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P2_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 22;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P2_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 19;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P2_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 22;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P2_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 19;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P2_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 20;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P2_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 25;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P2_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 20;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P2_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 28;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P2_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 35;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P2_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 40;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P2_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 45;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P2_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 45;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P2_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 49;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P2_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 820;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P2_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 790;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P2_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 820;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P2_25_8", 16);
			iVar6 = 25;
			iVar7 = 8;
			iVar1 = 929;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P2_25_9", 16);
			iVar6 = 25;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P2_25_10", 16);
			iVar6 = 25;
			iVar7 = 10;
			iVar1 = 850;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P2_25_11", 16);
			iVar6 = 25;
			iVar7 = 11;
			iVar1 = 790;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P2_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P2_26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P2_26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P2_26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P2_26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P2_26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P2_26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P2_26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P2_26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P2_26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P2_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 2200;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P2_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 2500;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P2_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 2500;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P2_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 2200;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P2_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P2_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 2500;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P2_27_6", 16);
			iVar6 = 27;
			iVar7 = 6;
			iVar1 = 2200;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P2_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 1100;
			break;
		
		case 208:
			StringCopy(&Var2, "TORSO_P2_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 1200;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P2_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 1220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P2_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P2_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 1300;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P2_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 1360;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P2_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P2_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P2_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P2_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 42;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P2_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P2_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 45;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P2_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 45;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P2_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 44;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P2_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 46;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P2_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 52;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P2_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P2_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P2_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 2550;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P2_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 2750;
			break;
		
		case 227:
			StringCopy(&Var2, "TORSO_P2_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 2590;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P2_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 2750;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P2_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 2550;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P2_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 2590;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P2_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 2720;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P2_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 2750;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P2_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 3250;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P2_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 2950;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P2_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 3100;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P2_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 3150;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P2_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 3240;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P2_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 3350;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P2_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 3400;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P2_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 3280;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P2_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			break;
		
		default:
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_190(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_68881[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 25;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 15;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 25;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P2_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P2_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 20;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P2_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 24;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P2_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 26;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P2_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 28;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P2_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 29;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P2_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 22;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P2_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 20;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "TORSO_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 35;
			break;
		
		case 19:
			StringCopy(&Var2, "TORSO_P2_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "TORSO_P2_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P2_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 38;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P2_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P2_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P2_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P2_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P2_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P2_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 500;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P2_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 560;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P2_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 600;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 650;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 500;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 560;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P2_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 500;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P2_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 650;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P2_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 540;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P2_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 690;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P2_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 560;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P2_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 590;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P2_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 690;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P2_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 540;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P2_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 500;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 22;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 350;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 27;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 370;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 25;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 22;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 25;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P2_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 22;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P2_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 27;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P2_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 25;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P2_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 27;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 1;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P2_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P2_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 39;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P2_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 42;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P2_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 49;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P2_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 35;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P2_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P2_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P2_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "TORSO_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P2_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 88;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P2_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 60;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P2_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P2_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 70;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P2_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P2_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P2_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 90;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P2_14_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 95;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P2_14_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P2_14_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 95;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P2_14_11", 16);
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 110;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P2_14_12", 16);
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 98;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P2_14_13", 16);
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 88;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P2_14_14", 16);
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 98;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P2_14_15", 16);
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 520;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 490;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 450;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 420;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 420;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 85;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 85;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 68;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 68;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 78;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 85;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 78;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 75;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 75;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 75;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 78;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 78;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 40;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 32;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 32;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 32;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 38;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 29;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 32;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 29;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 32;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 35;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 32;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 40;
			break;
		
		default:
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_191(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_68881[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P2_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P2_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		default:
			func_176(iVar10, iParam0, 9);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_192(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_68881[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		default:
			func_176(iVar10, iParam0, 7);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_193(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_211(iParam1);
			break;
		
		case 2:
			func_210(iParam1);
			break;
		
		case 3:
			func_206(iParam1);
			break;
		
		case 4:
			func_205(iParam1);
			break;
		
		case 6:
			func_204(iParam1);
			break;
		
		case 5:
			func_203(iParam1);
			break;
		
		case 8:
			func_202(iParam1);
			break;
		
		case 9:
			func_201(iParam1);
			break;
		
		case 10:
			func_200(iParam1);
			break;
		
		case 1:
			func_199(iParam1);
			break;
		
		case 7:
			func_198(iParam1);
			break;
		
		case 11:
			func_197(iParam1);
			break;
		
		case 12:
			func_196(iParam1);
			break;
		
		case 13:
			func_195(iParam1);
			break;
		
		case 14:
			func_194(iParam1);
			break;
	}
}

void func_194(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_68881[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 158:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		
		case 159:
			StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 4590;
			iVar8 = 2;
			break;
		
		case 160:
			StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 4100;
			iVar8 = 2;
			break;
		
		case 161:
			StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 3850;
			iVar8 = 2;
			break;
		
		case 162:
			StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 1850;
			iVar8 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 5250;
			iVar8 = 2;
			break;
		
		case 164:
			StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		
		case 165:
			StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		
		case 166:
			StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 5050;
			iVar8 = 2;
			break;
		
		case 167:
			StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 2500;
			iVar8 = 2;
			break;
		
		case 168:
			StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 1950;
			iVar8 = 2;
			break;
		
		case 169:
			StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 3900;
			iVar8 = 2;
			break;
		
		case 170:
			StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 3550;
			iVar8 = 2;
			break;
		
		case 171:
			StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 4500;
			iVar8 = 2;
			break;
		
		case 172:
			StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		
		case 173:
			StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		
		case 174:
			StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 2950;
			iVar8 = 2;
			break;
		
		case 82:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_E1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_E1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_E1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_E1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P1_E1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P1_E1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P1_E1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P1_E1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P1_E1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P1_E1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P1_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P1_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P1_E4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 120;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P1_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 128;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P1_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 130;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P1_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P1_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P1_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 135;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P1_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P1_E5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P1_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 112;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P1_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P1_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 118;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P1_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P1_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 125;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P1_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 128;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P1_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P1_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "PROPS_P1_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "PROPS_P1_E6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P1_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P1_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P1_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P1_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P1_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 62;
			iVar8 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P1_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P1_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P1_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P1_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 72;
			iVar8 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P1_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P1_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 149;
			iVar8 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P1_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 139;
			iVar8 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P1_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 149;
			iVar8 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P1_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 135;
			iVar8 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P1_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P1_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P1_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P1_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 159;
			iVar8 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P1_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P1_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 198;
			iVar8 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P1_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P1_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P1_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P1_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 190;
			iVar8 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P1_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 200;
			iVar8 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P1_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 208;
			iVar8 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P1_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P1_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P1_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P1_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 190;
			iVar8 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P1_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P1_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P1_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 168;
			iVar8 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P1_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P1_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P1_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P1_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P1_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P1_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P1_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "PROPS_P1_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 154:
			StringCopy(&Var2, "PROPS_P1_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 168;
			iVar8 = 10;
			break;
		
		case 155:
			StringCopy(&Var2, "PROPS_P1_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 156:
			StringCopy(&Var2, "PROPS_P1_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 160;
			iVar8 = 10;
			break;
		
		case 157:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "PROPS_P1_H0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "PROPS_P1_H3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 32;
			iVar8 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 35;
			iVar8 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 38;
			iVar8 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 42;
			iVar8 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 42;
			iVar8 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 40;
			iVar8 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 45;
			iVar8 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 48;
			iVar8 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 35;
			iVar8 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		default:
			func_176(iVar10, iParam0, 175);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_195(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_68881[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_176(iVar10, iParam0, 9);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_196(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_68881[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P1_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P1_2", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P1_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P1_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P1_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P1_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P1_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P1_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P1_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P1_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P1_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P1_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P1_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P1_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P1_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P1_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P1_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P1_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P1_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P1_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P1_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P1_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P1_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P1_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4650;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P1_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P1_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P1_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P1_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P1_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P1_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P1_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P1_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P1_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P1_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P1_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P1_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P1_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P1_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P1_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P1_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P1_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P1_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P1_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P1_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_176(iVar10, iParam0, 47);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_197(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_68881[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P1_1_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P1_1_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P1_1_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P1_1_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar6 = 3;
			iVar7 = 11;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar6 = 3;
			iVar7 = 12;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar6 = 3;
			iVar7 = 13;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar6 = 3;
			iVar7 = 14;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar6 = 3;
			iVar7 = 15;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P1_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "JBIB_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "JBIB_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "JBIB_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "JBIB_P1_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 49:
			StringCopy(&Var2, "JBIB_P1_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 35;
			break;
		
		case 50:
			StringCopy(&Var2, "JBIB_P1_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 32;
			break;
		
		case 51:
			StringCopy(&Var2, "JBIB_P1_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 35;
			break;
		
		case 52:
			StringCopy(&Var2, "JBIB_P1_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 48;
			break;
		
		case 53:
			StringCopy(&Var2, "JBIB_P1_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 52;
			break;
		
		case 54:
			StringCopy(&Var2, "JBIB_P1_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 55:
			StringCopy(&Var2, "JBIB_P1_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 42;
			break;
		
		case 56:
			StringCopy(&Var2, "JBIB_P1_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 38;
			break;
		
		case 57:
			StringCopy(&Var2, "JBIB_P1_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 58:
			StringCopy(&Var2, "JBIB_P1_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 48;
			break;
		
		case 59:
			StringCopy(&Var2, "JBIB_P1_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 42;
			break;
		
		case 60:
			StringCopy(&Var2, "JBIB_P1_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 61:
			StringCopy(&Var2, "JBIB_P1_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 62:
			StringCopy(&Var2, "JBIB_P1_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 49;
			break;
		
		default:
			func_176(iVar10, iParam0, 63);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_198(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_68881[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_176(iVar10, iParam0, 1);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_199(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_68881[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		default:
			func_176(iVar10, iParam0, 5);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_200(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_68881[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 6;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 7;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 8;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 9;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 10;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 11;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 12;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 13;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 14;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 15;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		default:
			func_176(iVar10, iParam0, 53);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_201(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_68881[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 6:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 7:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 8:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		default:
			func_176(iVar10, iParam0, 12);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_202(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_68881[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 195;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 195;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 195;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 250;
			break;
		
		case 15:
			StringCopy(&Var2, "SPEC_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 250;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "SPEC_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 195;
			break;
		
		case 18:
			StringCopy(&Var2, "SPEC_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 250;
			break;
		
		case 19:
			StringCopy(&Var2, "SPEC_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 250;
			break;
		
		case 20:
			StringCopy(&Var2, "SPEC_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 250;
			break;
		
		case 21:
			StringCopy(&Var2, "SPEC_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 250;
			break;
		
		case 22:
			StringCopy(&Var2, "SPEC_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 195;
			break;
		
		case 23:
			StringCopy(&Var2, "SPEC_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 250;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
		
		case 31:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 32:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
		
		case 33:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
		
		case 34:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
		
		case 35:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
		
		case 36:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
		
		case 37:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
		
		case 38:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
		
		case 39:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
		
		case 40:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
		
		case 41:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
		
		case 42:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
		
		case 43:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			break;
		
		case 46:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			break;
		
		case 48:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			break;
		
		case 49:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			break;
		
		case 50:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			break;
		
		case 51:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			break;
		
		case 52:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			break;
		
		case 53:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			break;
		
		case 54:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			break;
		
		case 55:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			break;
		
		case 56:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			break;
		
		case 57:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			break;
		
		case 58:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 62:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			break;
		
		case 63:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			break;
		
		case 64:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			break;
		
		case 65:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			break;
		
		case 66:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			break;
		
		case 67:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			break;
		
		case 68:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			break;
		
		case 69:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			break;
		
		case 71:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			break;
		
		case 72:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			break;
		
		case 73:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			break;
		
		case 74:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			break;
		
		case 75:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		
		default:
			func_176(iVar10, iParam0, 77);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_203(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_68881[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_176(iVar10, iParam0, 7);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_204(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_68881[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P1_00_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P1_00_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P1_00_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P1_00_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 89;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P1_00_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 45;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P1_00_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 35;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P1_00_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 89;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P1_00_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 8:
			StringCopy(&Var2, "FEET_P1_00_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 9:
			StringCopy(&Var2, "FEET_P1_00_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "FEET_P1_00_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 145;
			break;
		
		case 11:
			StringCopy(&Var2, "FEET_P1_00_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 145;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P1_01_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P1_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P1_06_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P1_06_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P1_06_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 200;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P1_06_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 220;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P1_06_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 235;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P1_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 870;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P1_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 870;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P1_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 870;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P1_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 1275;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P1_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 1275;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P1_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 1275;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P1_08_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 1275;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P1_08_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 1275;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P1_08_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 1275;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 50;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 50;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 50;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 50;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 50;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 50;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 25;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 20;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 24;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 29;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 25;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 28;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 30;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 155;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 155;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 165;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 170;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 165;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 170;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 160;
			break;
		
		case 73:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 720;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P1_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P1_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P1_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P1_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "FEET_P1_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P1_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P1_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P1_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P1_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P1_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P1_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 99:
			StringCopy(&Var2, "FEET_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 100:
			StringCopy(&Var2, "FEET_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 101:
			StringCopy(&Var2, "FEET_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 102:
			StringCopy(&Var2, "FEET_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 103:
			StringCopy(&Var2, "FEET_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 104:
			StringCopy(&Var2, "FEET_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 105:
			StringCopy(&Var2, "FEET_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 106:
			StringCopy(&Var2, "FEET_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 107:
			StringCopy(&Var2, "FEET_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 108:
			StringCopy(&Var2, "FEET_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 109:
			StringCopy(&Var2, "FEET_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 110:
			StringCopy(&Var2, "FEET_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 111:
			StringCopy(&Var2, "FEET_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 112:
			StringCopy(&Var2, "FEET_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 113:
			StringCopy(&Var2, "FEET_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 114:
			StringCopy(&Var2, "FEET_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 115:
			StringCopy(&Var2, "FEET_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 116:
			StringCopy(&Var2, "FEET_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 117:
			StringCopy(&Var2, "FEET_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 118:
			StringCopy(&Var2, "FEET_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 119:
			StringCopy(&Var2, "FEET_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 120:
			StringCopy(&Var2, "FEET_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 121:
			StringCopy(&Var2, "FEET_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 122:
			StringCopy(&Var2, "FEET_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 123:
			StringCopy(&Var2, "FEET_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 124:
			StringCopy(&Var2, "FEET_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 125:
			StringCopy(&Var2, "FEET_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 126:
			StringCopy(&Var2, "FEET_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 127:
			StringCopy(&Var2, "FEET_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "FEET_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case 129:
			StringCopy(&Var2, "FEET_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 130:
			StringCopy(&Var2, "FEET_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 131:
			StringCopy(&Var2, "FEET_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 132:
			StringCopy(&Var2, "FEET_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 133:
			StringCopy(&Var2, "FEET_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_176(iVar10, iParam0, 134);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_205(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_68881[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 32;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 38;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 44;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 690;
			break;
		
		case 16:
			StringCopy(&Var2, "LEGS_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 720;
			break;
		
		case 17:
			StringCopy(&Var2, "LEGS_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 740;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 750;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 790;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 145;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 140;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 148;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 154;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 158;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 820;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 820;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 850;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 920;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 950;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 45;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 45;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 48;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 55;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 58;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 60;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 62;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 180;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 180;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "LEGS_P1_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 118;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P1_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 120;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P1_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 128;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P1_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 128;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P1_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 130;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P1_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 145;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P1_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 138;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P1_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 132;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P1_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 148;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 118;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 118;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 118;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 129;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 135;
			break;
		
		case 93:
			StringCopy(&Var2, "LEGS_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 135;
			break;
		
		case 94:
			StringCopy(&Var2, "LEGS_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 118;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 118;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 118;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 55;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 55;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 59;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 59;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P1_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P1_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 65;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P1_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 69;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P1_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 69;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P1_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P1_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P1_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P1_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P1_22_12", 16);
			iVar6 = 22;
			iVar7 = 12;
			iVar1 = 65;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P1_22_13", 16);
			iVar6 = 22;
			iVar7 = 13;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P1_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 38;
			break;
		
		case 112:
			StringCopy(&Var2, "LEGS_P1_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 38;
			break;
		
		case 113:
			StringCopy(&Var2, "LEGS_P1_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 28;
			break;
		
		case 114:
			StringCopy(&Var2, "LEGS_P1_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 34;
			break;
		
		case 115:
			StringCopy(&Var2, "LEGS_P1_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 36;
			break;
		
		case 116:
			StringCopy(&Var2, "LEGS_P1_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 32;
			break;
		
		default:
			func_176(iVar10, iParam0, 117);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_206(int iParam0)
{
	if (iParam0 < 107)
	{
		func_209(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_208(iParam0);
	}
	else
	{
		func_207(iParam0);
	}
	if (Global_68881[0 /*14*/].f_2 == -1)
	{
		func_176(3, iParam0, 318);
	}
}

void func_207(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_68881[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 227:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar9 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar9 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar9 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "TORSO_P1_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "TORSO_P1_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "TORSO_P1_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "TORSO_P1_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "TORSO_P1_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "TORSO_P1_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "TORSO_P1_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "TORSO_P1_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "TORSO_P1_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "TORSO_P1_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "TORSO_P1_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "TORSO_P1_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "TORSO_P1_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "TORSO_P1_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "TORSO_P1_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "TORSO_P1_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "TORSO_P1_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar9 = 1;
			break;
		
		case 261:
			StringCopy(&Var2, "TORSO_P1_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 262:
			StringCopy(&Var2, "TORSO_P1_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 263:
			StringCopy(&Var2, "TORSO_P1_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 264:
			StringCopy(&Var2, "TORSO_P1_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 265:
			StringCopy(&Var2, "TORSO_P1_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 266:
			StringCopy(&Var2, "TORSO_P1_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 160;
			break;
		
		case 267:
			StringCopy(&Var2, "TORSO_P1_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 268:
			StringCopy(&Var2, "TORSO_P1_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 269:
			StringCopy(&Var2, "TORSO_P1_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 70;
			break;
		
		case 270:
			StringCopy(&Var2, "TORSO_P1_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 271:
			StringCopy(&Var2, "TORSO_P1_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 90;
			break;
		
		case 272:
			StringCopy(&Var2, "TORSO_P1_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 273:
			StringCopy(&Var2, "TORSO_P1_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 274:
			StringCopy(&Var2, "TORSO_P1_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 275:
			StringCopy(&Var2, "TORSO_P1_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 105;
			break;
		
		case 276:
			StringCopy(&Var2, "TORSO_P1_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 95;
			break;
		
		case 277:
			StringCopy(&Var2, "TORSO_P1_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 110;
			break;
		
		case 278:
			StringCopy(&Var2, "TORSO_P1_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 98;
			break;
		
		case 279:
			StringCopy(&Var2, "TORSO_P1_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 88;
			break;
		
		case 280:
			StringCopy(&Var2, "TORSO_P1_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 98;
			break;
		
		case 281:
			StringCopy(&Var2, "TORSO_P1_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 110;
			break;
		
		case 282:
			StringCopy(&Var2, "TORSO_P1_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 98;
			break;
		
		case 283:
			StringCopy(&Var2, "TORSO_P1_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 284:
			StringCopy(&Var2, "TORSO_P1_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 270;
			break;
		
		case 285:
			StringCopy(&Var2, "TORSO_P1_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 280;
			break;
		
		case 286:
			StringCopy(&Var2, "TORSO_P1_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 275;
			break;
		
		case 287:
			StringCopy(&Var2, "TORSO_P1_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 290;
			break;
		
		case 288:
			StringCopy(&Var2, "TORSO_P1_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 35;
			break;
		
		case 289:
			StringCopy(&Var2, "TORSO_P1_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 290:
			StringCopy(&Var2, "TORSO_P1_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 35;
			break;
		
		case 291:
			StringCopy(&Var2, "TORSO_P1_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 292:
			StringCopy(&Var2, "TORSO_P1_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 35;
			break;
		
		case 293:
			StringCopy(&Var2, "TORSO_P1_29_10", 16);
			iVar6 = 29;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 294:
			StringCopy(&Var2, "TORSO_P1_29_11", 16);
			iVar6 = 29;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 295:
			StringCopy(&Var2, "TORSO_P1_29_12", 16);
			iVar6 = 29;
			iVar7 = 12;
			break;
		
		case 296:
			StringCopy(&Var2, "TORSO_P1_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 1750;
			break;
		
		case 297:
			StringCopy(&Var2, "TORSO_P1_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 1920;
			break;
		
		case 298:
			StringCopy(&Var2, "TORSO_P1_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 1890;
			break;
		
		case 299:
			StringCopy(&Var2, "TORSO_P1_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		
		case 300:
			StringCopy(&Var2, "TORSO_P1_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 1750;
			break;
		
		case 301:
			StringCopy(&Var2, "TORSO_P1_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 1990;
			break;
		
		case 302:
			StringCopy(&Var2, "TORSO_P1_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 1820;
			break;
		
		case 303:
			StringCopy(&Var2, "TORSO_P1_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 1990;
			break;
		
		case 304:
			StringCopy(&Var2, "TORSO_P1_30_8", 16);
			iVar6 = 30;
			iVar7 = 8;
			iVar1 = 1920;
			break;
		
		case 305:
			StringCopy(&Var2, "TORSO_P1_30_9", 16);
			iVar6 = 30;
			iVar7 = 9;
			iVar1 = 1850;
			break;
		
		case 306:
			StringCopy(&Var2, "TORSO_P1_30_10", 16);
			iVar6 = 30;
			iVar7 = 10;
			iVar1 = 1990;
			break;
		
		case 307:
			StringCopy(&Var2, "TORSO_P1_30_11", 16);
			iVar6 = 30;
			iVar7 = 11;
			iVar1 = 1790;
			break;
		
		case 308:
			StringCopy(&Var2, "TORSO_P1_30_12", 16);
			iVar6 = 30;
			iVar7 = 12;
			iVar1 = 1790;
			break;
		
		case 309:
			StringCopy(&Var2, "TORSO_P1_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 69;
			break;
		
		case 310:
			StringCopy(&Var2, "TORSO_P1_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 75;
			break;
		
		case 311:
			StringCopy(&Var2, "TORSO_P1_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 312:
			StringCopy(&Var2, "TORSO_P1_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 79;
			break;
		
		case 313:
			StringCopy(&Var2, "TORSO_P1_31_4", 16);
			iVar6 = 31;
			iVar7 = 4;
			iVar1 = 79;
			break;
		
		case 314:
			StringCopy(&Var2, "TORSO_P1_31_5", 16);
			iVar6 = 31;
			iVar7 = 5;
			iVar1 = 89;
			break;
		
		case 315:
			StringCopy(&Var2, "TORSO_P1_31_6", 16);
			iVar6 = 31;
			iVar7 = 6;
			iVar1 = 85;
			break;
		
		case 316:
			StringCopy(&Var2, "TORSO_P1_31_7", 16);
			iVar6 = 31;
			iVar7 = 7;
			iVar1 = 85;
			break;
		
		case 317:
			StringCopy(&Var2, "TORSO_P1_31_8", 16);
			iVar6 = 31;
			iVar7 = 8;
			break;
		
		default:
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_208(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_68881[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 107:
			StringCopy(&Var2, "TORSO_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 195;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 420;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 390;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 450;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 400;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 390;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 570;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 390;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 470;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 390;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 520;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 490;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P1_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 490;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P1_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 590;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P1_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 560;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P1_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 520;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 85;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 90;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 47;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 45;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 48;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 45;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 85;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P1_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 45;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P1_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 47;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P1_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P1_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 48;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 290;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 290;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 290;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 290;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 290;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 65;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 65;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 220;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 220;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 250;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 260;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 40;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 45;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 40;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 55;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 40;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 50;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 50;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 50;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 50;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 50;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 50;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar9 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar9 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar9 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 200;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 240;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 260;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 275;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 275;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 280;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 280;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P1_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 280;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P1_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 280;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P1_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 280;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P1_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 280;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P1_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 280;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 3100;
			iVar9 = 3;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 2800;
			iVar9 = 3;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 2500;
			iVar9 = 3;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3000;
			iVar9 = 3;
			break;
		
		default:
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_209(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_68881[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 180;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 20;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 18;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 19;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 19;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 19;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 18;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 20;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 22;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 19;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 22;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 3;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 20;
			iVar9 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P1_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 22;
			iVar9 = 2;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P1_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 20;
			iVar9 = 2;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P1_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P1_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 23;
			iVar9 = 2;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P1_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P1_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 28;
			iVar9 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P1_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 26;
			iVar9 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P1_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 24;
			iVar9 = 2;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P1_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 27;
			iVar9 = 2;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P1_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 29;
			iVar9 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P1_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 28;
			iVar9 = 2;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P1_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P1_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 22;
			iVar9 = 2;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P1_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 27;
			iVar9 = 2;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P1_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 29;
			iVar9 = 2;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P1_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P1_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P1_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P1_6_11", 16);
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P1_6_12", 16);
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P1_6_13", 16);
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P1_6_14", 16);
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P1_6_15", 16);
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 98;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P1_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 98;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P1_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P1_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P1_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 118;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P1_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P1_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P1_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 129;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P1_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 125;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P1_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 125;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P1_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 129;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P1_7_11", 16);
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 129;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P1_7_12", 16);
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 135;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P1_7_13", 16);
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 139;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P1_7_14", 16);
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 145;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P1_7_15", 16);
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 145;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 30;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 38;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "TORSO_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 32;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P1_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 30;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P1_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 33;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P1_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 35;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P1_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P1_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 38;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P1_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 33;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P1_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 35;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P1_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 38;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P1_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 32;
			break;
		
		case 89:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 59;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 25;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 29;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 27;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 25;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 28;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 29;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 27;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 29;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 32;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 30;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 28;
			break;
		
		default:
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_210(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_68881[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "HAIR_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 10:
			StringCopy(&Var2, "HAIR_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "HAIR_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 12:
			StringCopy(&Var2, "HAIR_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "HAIR_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "HAIR_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "HAIR_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 16:
			StringCopy(&Var2, "HAIR_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 17:
			StringCopy(&Var2, "HAIR_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 18:
			StringCopy(&Var2, "HAIR_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "HAIR_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_176(iVar10, iParam0, 21);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_211(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_68881[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		default:
			func_176(iVar10, iParam0, 10);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_212(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_229(iParam1);
			break;
		
		case 2:
			func_228(iParam1);
			break;
		
		case 3:
			func_225(iParam1);
			break;
		
		case 4:
			func_224(iParam1);
			break;
		
		case 6:
			func_223(iParam1);
			break;
		
		case 5:
			func_222(iParam1);
			break;
		
		case 8:
			func_221(iParam1);
			break;
		
		case 9:
			func_220(iParam1);
			break;
		
		case 10:
			func_219(iParam1);
			break;
		
		case 1:
			func_218(iParam1);
			break;
		
		case 7:
			func_217(iParam1);
			break;
		
		case 11:
			func_216(iParam1);
			break;
		
		case 12:
			func_215(iParam1);
			break;
		
		case 13:
			func_214(iParam1);
			break;
		
		case 14:
			func_213(iParam1);
			break;
	}
}

void func_213(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	Global_68881[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "PROPS_P0_H1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P0_H2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 11;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P0_H12", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P0_E0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 61:
			StringCopy(&Var2, "PROPS_P0_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 62:
			StringCopy(&Var2, "PROPS_P0_E4", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 63:
			StringCopy(&Var2, "PROPS_P0_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 56;
			iVar8 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P0_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P0_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P0_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 62;
			iVar8 = 10;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P0_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P0_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P0_E4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P0_E5", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P0_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P0_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 72;
			iVar8 = 10;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P0_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 70;
			iVar8 = 10;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P0_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 74;
			iVar8 = 10;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P0_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 78;
			iVar8 = 10;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P0_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 82;
			iVar8 = 10;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P0_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 85;
			iVar8 = 10;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P0_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 85;
			iVar8 = 10;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "PROPS_P0_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar8 = 10;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P0_E6", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P0_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P0_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P0_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P0_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P0_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P0_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P0_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P0_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P0_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P0_E7", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P0_E8", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P0_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P0_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P0_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P0_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P0_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P0_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 235;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P0_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 245;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P0_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 250;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P0_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 275;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P0_E8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 280;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P0_E8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 295;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P0_E9", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 179;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P0_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 159;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P0_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P0_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P0_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P0_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P0_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P0_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 225;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		
		default:
			func_176(iVar10, iParam0, 113);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_214(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	Global_68881[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_176(iVar10, iParam0, 10);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_215(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	Global_68881[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P0_1", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P0_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P0_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P0_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P0_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P0_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P0_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P0_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P0_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P0_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P0_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P0_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P0_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P0_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P0_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P0_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P0_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P0_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P0_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P0_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P0_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P0_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P0_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P0_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 840;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P0_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P0_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P0_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P0_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P0_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P0_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P0_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P0_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P0_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P0_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4600;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P0_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P0_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P0_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P0_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P0_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P0_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P0_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 48:
			StringCopy(&Var2, "OUTFIT_P0_55", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_176(iVar10, iParam0, 53);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_216(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	Global_68881[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "JBIB_P0_02_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "JBIB_P0_02_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 4:
			StringCopy(&Var2, "JBIB_P0_02_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P0_02_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P0_02_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P0_02_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P0_03_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P0_03_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P0_03_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P0_03_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 420;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P0_03_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 490;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P0_03_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 490;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P0_03_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 540;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P0_03_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 540;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P0_03_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 550;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P0_03_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 540;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P0_04_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P0_04_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 850;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P0_04_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 890;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P0_04_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P0_04_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 920;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P0_04_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 920;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P0_04_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 950;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P0_04_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 980;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P0_04_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 1050;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P0_04_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 1100;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P0_05_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1890;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P0_05_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1820;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P0_05_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 1820;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P0_05_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P0_05_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 1850;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P0_05_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 1900;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P0_05_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 1920;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P0_05_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 1980;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P0_05_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 2100;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P0_05_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 2120;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P0_05_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 2000;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P0_05_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 2200;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P0_05_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 2280;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P0_05_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 2300;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P0_05_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 2350;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P0_05_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 2280;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P0_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		default:
			func_176(iVar10, iParam0, 45);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_217(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	Global_68881[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_176(iVar10, iParam0, 1);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_218(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	Global_68881[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		default:
			func_176(iVar10, iParam0, 5);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_219(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	Global_68881[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 3;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 4;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 5;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 6;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 7;
			break;
		
		case 36:
			StringCopy(&Var2, "DECL_P0_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			break;
		
		case 37:
			StringCopy(&Var2, "DECL_P0_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			break;
		
		case 38:
			StringCopy(&Var2, "DECL_P0_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			break;
		
		case 39:
			StringCopy(&Var2, "DECL_P0_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			break;
		
		case 40:
			StringCopy(&Var2, "DECL_P0_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			break;
		
		case 41:
			StringCopy(&Var2, "DECL_P0_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			break;
		
		case 42:
			StringCopy(&Var2, "DECL_P0_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			break;
		
		case 43:
			StringCopy(&Var2, "DECL_P0_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			break;
		
		default:
			func_176(iVar10, iParam0, 48);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_220(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	Global_68881[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_176(iVar10, iParam0, 20);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_221(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	Global_68881[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC_P0_10", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P0_16", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_176(iVar10, iParam0, 24);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_222(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	Global_68881[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_176(iVar10, iParam0, 14);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_223(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	Global_68881[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P0_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 665;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 620;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 540;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 580;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 650;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 64;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 56;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 69;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 59;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 62;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 74;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P0_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 72;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P0_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 70;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 48;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 55;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 75;
			break;
		
		case 34:
			StringCopy(&Var2, "FEET_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 68;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P0_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P0_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P0_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P0_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P0_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P0_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P0_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P0_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P0_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P0_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P0_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P0_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P0_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P0_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P0_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P0_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P0_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P0_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P0_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "FEET_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 720;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		default:
			func_176(iVar10, iParam0, 99);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_224(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	Global_68881[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "LEGS_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "LEGS_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "LEGS_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "LEGS_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "LEGS_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "LEGS_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "LEGS_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "LEGS_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "LEGS_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 128;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 118;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P0_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 128;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P0_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 125;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 68;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P0_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 68;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P0_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 68;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P0_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 68;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P0_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 68;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 550;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 875;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 720;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 750;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 850;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 38;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 38;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 42;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 46;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P0_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 46;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P0_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 46;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P0_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 68;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P0_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 58;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P0_16_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P0_16_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar1 = 68;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P0_16_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar1 = 68;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P0_16_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar1 = 42;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 250;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 250;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 290;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 270;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 270;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 15;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "LEGS_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 12;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 118;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 98;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 140;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 130;
			break;
		
		case 92:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P0_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P0_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 52;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P0_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 52;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P0_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 55;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P0_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 55;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P0_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P0_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 58;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P0_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 58;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P0_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 60;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P0_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P0_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 62;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P0_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 62;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P0_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P0_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 65;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 29;
			iVar7 = 0;
			break;
		
		default:
			func_176(iVar10, iParam0, 113);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_225(int iParam0)
{
	if (iParam0 < 60)
	{
		func_227(iParam0);
	}
	else
	{
		func_226(iParam0);
	}
	if (Global_68881[0 /*14*/].f_2 == -1)
	{
		func_176(3, iParam0, 181);
	}
}

void func_226(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_68881[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P0_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P0_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 120;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P0_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P0_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P0_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P0_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 20;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "TORSO_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 24;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 25;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P0_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P0_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P0_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P0_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 48;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P0_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P0_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 45;
			break;
		
		case 91:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 190;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 190;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 55;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 99;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 49;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 90;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 95;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 39;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 95;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 35;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 95;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 70;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 90;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 105;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 95;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 110;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 98;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P0_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 88;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P0_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 98;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P0_21_14", 16);
			iVar6 = 21;
			iVar7 = 14;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P0_21_15", 16);
			iVar6 = 21;
			iVar7 = 15;
			iVar1 = 98;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P0_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 4950;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P0_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 4195;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P0_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3195;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P0_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 2950;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P0_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 3950;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 3200;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P0_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 3200;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P0_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 3200;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P0_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 3200;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P0_23_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar1 = 3200;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P0_23_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar1 = 3200;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P0_23_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar1 = 3200;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P0_23_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar1 = 3200;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P0_23_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar1 = 3200;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P0_23_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar1 = 3200;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P0_23_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar1 = 3200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P0_23_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar1 = 3200;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P0_23_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar1 = 3200;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P0_23_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar1 = 3200;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P0_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 1350;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P0_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 1400;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P0_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 1200;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P0_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P0_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 1350;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P0_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 1300;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P0_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 1380;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P0_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 1340;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P0_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 1380;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P0_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 1250;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P0_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 840;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P0_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 840;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P0_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 840;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P0_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 840;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P0_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 840;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P0_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P0_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 840;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P0_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 840;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P0_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 170:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 130;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P0_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P0_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P0_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 320;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P0_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 59;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P0_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 55;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P0_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 59;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P0_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 49;
			break;
		
		default:
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_227(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	Global_68881[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 3500;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 20;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 18;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P0_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 19;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P0_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 20;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P0_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P0_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 18;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P0_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 39;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P0_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 32;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P0_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P0_2_11", 16);
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P0_2_12", 16);
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P0_2_13", 16);
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 250;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P0_2_14", 16);
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 290;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P0_2_15", 16);
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 310;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 160;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P0_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P0_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P0_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 52;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P0_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 55;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P0_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 55;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P0_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P0_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P0_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 62;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P0_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 65;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P0_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 65;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P0_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 68;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P0_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 68;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P0_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 55;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P0_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 62;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P0_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 58;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P0_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 58;
			break;
		
		default:
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_228(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	Global_68881[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		default:
			func_176(iVar10, iParam0, 6);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_229(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 0;
	Global_68881[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		default:
			func_176(iVar10, iParam0, 7);
			return;
			break;
	}
	func_169(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_230()
{
	Global_68881[0 /*14*/].f_1 = -1;
	Global_68881[0 /*14*/].f_2 = -1;
	Global_68881[0 /*14*/].f_5 = -1;
	Global_68881[0 /*14*/].f_3 = -1;
	Global_68881[0 /*14*/].f_4 = -1;
	Global_68881[0 /*14*/].f_7 = 0;
	Global_68881[0 /*14*/].f_6 = 0;
	Global_68881[0 /*14*/].f_13 = -1;
	Global_68881[0 /*14*/].f_12 = 0;
	Global_68881[0 /*14*/] = 0;
	StringCopy(&(Global_68881[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_231(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar21;
	int iVar31;
	var uVar32;
	
	if (unk_0x5FEB513A4402FD59(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x14B7103DBD149FFE(iParam0);
	Global_68881[1 /*14*/] = { func_166(iVar0, iParam1, iParam2) };
	if (!unk_0x236D8AD7EE179F46(Global_68881[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { func_162(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_231(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar21 = { func_159(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_231(iParam0, 14, uVar21[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_68881[2 /*14*/] = { func_166(iVar0, 14, iVar4) };
									if (Global_68881[2 /*14*/].f_12 == iVar3)
									{
										if (func_231(iParam0, 14, iVar4))
										{
											if (!func_126(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_68881[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = func_150(iParam0, iVar2);
						Global_68881[2 /*14*/] = { func_166(iVar0, iVar2, iVar1) };
						if (!func_126(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_68881[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar32 = { func_159(iVar0, iParam2) };
		iVar31 = 0;
		while (iVar31 <= 8)
		{
			if (!func_231(iParam0, 14, uVar32[iVar31]))
			{
				return 0;
			}
			iVar31++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0x0F7FE22229DBD748(iParam0, Global_68881[1 /*14*/].f_12) == Global_68881[1 /*14*/].f_3 && (unk_0xC2F100D1D0DEC7FF(iParam0, Global_68881[1 /*14*/].f_12) == Global_68881[1 /*14*/].f_4 || Global_68881[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_68881[1 /*14*/].f_3 == unk_0x1CFC95A2D6BABBA2(iParam0, func_158(iParam1)) && Global_68881[1 /*14*/].f_4 == unk_0x2933140C98919EB1(iParam0, func_158(iParam1)))
	{
		return 1;
	}
	return 0;
}

int func_232(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_233(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_233(int iParam0)
{
	if (func_234(iParam0))
	{
		return Global_98931.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_234(int iParam0)
{
	return iParam0 < 3;
}

void func_235(var uParam0, int iParam1)
{
	unk_0x4DA2F8EFC470AD66(joaat("sp_last_mission_name"), uParam0, 1);
	if (unk_0x236D8AD7EE179F46(iParam1, 0))
	{
		unk_0x4DA2F8EFC470AD66(joaat("sp0_last_mission_name"), uParam0, 1);
	}
	if (unk_0x236D8AD7EE179F46(iParam1, 1))
	{
		unk_0x4DA2F8EFC470AD66(joaat("sp1_last_mission_name"), uParam0, 1);
	}
	if (unk_0x236D8AD7EE179F46(iParam1, 2))
	{
		unk_0x4DA2F8EFC470AD66(joaat("sp2_last_mission_name"), uParam0, 1);
	}
}

int func_236()
{
	func_237();
	switch (Global_98931.f_1750.f_539.f_3549)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

void func_237()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_233(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_232(unk_0x81873881071CD9FE());
			if (func_234(iVar0) && (!func_174(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_234(Global_98931.f_1750.f_539.f_3549))
				{
					Global_98931.f_1750.f_539.f_3550 = Global_98931.f_1750.f_539.f_3549;
				}
				Global_98931.f_1750.f_539.f_3551 = iVar0;
				Global_98931.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_98931.f_1750.f_539.f_3549 != 145)
			{
				Global_98931.f_1750.f_539.f_3551 = Global_98931.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_98931.f_1750.f_539.f_3549 = 145;
}

struct<2> func_238(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_239(iParam0) };
	if (unk_0xB318FDA0D1ABDB20(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_239(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

void func_240(int iParam0, int iParam1)
{
	Global_69288 = iParam1;
	if (Global_55396)
	{
		return;
	}
	if (Global_55423)
	{
		Global_55423 = 0;
		return;
	}
	if (unk_0x968BF1C2C695B61A(joaat("mission_stat_watcher")) > 0)
	{
		if (Global_55396)
		{
		}
		Global_55422 = iParam0;
		Global_55396 = 1;
		Global_55407 = 1;
	}
}

void func_241(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 32, 1);
		unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 250, 1);
	}
	unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), true, 0);
	unk_0x5B6D37392F5991C3(1f);
	unk_0x9BAE0FF806E5C2E5(5);
	unk_0x334B670F8C2E871D(unk_0x1329891157A54C63(), 0);
	unk_0x710585F43AC49C91(unk_0x1329891157A54C63(), 1f);
	unk_0x21871772C6423BA8(unk_0x1329891157A54C63(), 1f);
	unk_0xF1BC58601CA4A5C7(1);
	unk_0x3BF4F473786B0150(1);
	unk_0x1448B1808E373DDE(0, 0);
	unk_0xCF2F32222FF93448(1f);
	func_252();
	func_251(1, 1);
	func_250();
	func_248();
	func_247(30000);
	if (iParam1 == 1)
	{
		func_242(iParam0, iParam2, iParam3);
	}
	unk_0x13754D0D5B45CB5D(0, 0);
}

void func_242(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	var uVar32;
	
	if (iParam0 != -1)
	{
		func_244(iParam0, &Var0);
		MemCopy(&uVar32, {func_239(iParam0)}, 4);
		unk_0x27F839BD3200E49D(&uVar32, 0, Global_90846, 0);
		func_243(&uVar32, Var0.f_3, Global_90846, iParam1, iParam2);
	}
}

void func_243(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	if (unk_0xB318FDA0D1ABDB20(&Global_88212))
	{
		return;
	}
	if (unk_0xD6D5614CD6EF58CC(uParam0, &Global_88212, 0, -1) != 0)
	{
		return;
	}
	unk_0x9FDD3981D037FD48(uParam0, uParam1, uParam2, uParam3, uParam4, Global_85319);
	StringCopy(&Global_88212, "", 64);
}

void func_244(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_245(uParam1, "Abigail1", func_238(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_246(iParam0), 1, 0);
			break;
		
		case 1:
			func_245(uParam1, "Abigail2", func_238(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_246(iParam0), 1, 0);
			break;
		
		case 2:
			func_245(uParam1, "Barry1", func_238(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_246(iParam0), 1, 0);
			break;
		
		case 3:
			func_245(uParam1, "Barry2", func_238(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_246(iParam0), 1, 1);
			break;
		
		case 4:
			func_245(uParam1, "Barry3", func_238(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_246(iParam0), 0, 0);
			break;
		
		case 5:
			func_245(uParam1, "Barry3A", func_238(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 6:
			func_245(uParam1, "Barry3C", func_238(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 7:
			func_245(uParam1, "Barry4", func_238(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_246(iParam0), 0, 0);
			break;
		
		case 8:
			func_245(uParam1, "Dreyfuss1", func_238(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_246(iParam0), 0, 0);
			break;
		
		case 9:
			func_245(uParam1, "Epsilon1", func_238(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_246(iParam0), 0, 0);
			break;
		
		case 10:
			func_245(uParam1, "Epsilon2", func_238(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_246(iParam0), 1, 0);
			break;
		
		case 11:
			func_245(uParam1, "Epsilon3", func_238(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_246(iParam0), 0, 0);
			break;
		
		case 12:
			func_245(uParam1, "Epsilon4", func_238(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_246(iParam0), 0, 0);
			break;
		
		case 13:
			func_245(uParam1, "Epsilon5", func_238(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_246(iParam0), 1, 0);
			break;
		
		case 14:
			func_245(uParam1, "Epsilon6", func_238(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 15:
			func_245(uParam1, "Epsilon7", func_238(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_246(iParam0), 0, 0);
			break;
		
		case 16:
			func_245(uParam1, "Epsilon8", func_238(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_246(iParam0), 1, 0);
			break;
		
		case 17:
			func_245(uParam1, "Extreme1", func_238(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 18:
			func_245(uParam1, "Extreme2", func_238(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 19:
			func_245(uParam1, "Extreme3", func_238(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 20:
			func_245(uParam1, "Extreme4", func_238(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_246(iParam0), 0, 0);
			break;
		
		case 21:
			func_245(uParam1, "Fanatic1", func_238(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_246(iParam0), 1, 0);
			break;
		
		case 22:
			func_245(uParam1, "Fanatic2", func_238(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_246(iParam0), 1, 0);
			break;
		
		case 23:
			func_245(uParam1, "Fanatic3", func_238(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_246(iParam0), 0, 1);
			break;
		
		case 24:
			func_245(uParam1, "Hao1", func_238(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_246(iParam0), 0, 1);
			break;
		
		case 25:
			func_245(uParam1, "Hunting1", func_238(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 26:
			func_245(uParam1, "Hunting2", func_238(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 27:
			func_245(uParam1, "Josh1", func_238(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_246(iParam0), 1, 0);
			break;
		
		case 28:
			func_245(uParam1, "Josh2", func_238(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_246(iParam0), 1, 1);
			break;
		
		case 29:
			func_245(uParam1, "Josh3", func_238(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_246(iParam0), 1, 1);
			break;
		
		case 30:
			func_245(uParam1, "Josh4", func_238(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_246(iParam0), 1, 0);
			break;
		
		case 31:
			func_245(uParam1, "Maude1", func_238(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 32:
			func_245(uParam1, "Minute1", func_238(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 33:
			func_245(uParam1, "Minute2", func_238(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 34:
			func_245(uParam1, "Minute3", func_238(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 35:
			func_245(uParam1, "MrsPhilips1", func_238(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_246(iParam0), 0, 0);
			break;
		
		case 36:
			func_245(uParam1, "MrsPhilips2", func_238(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_246(iParam0), 0, 0);
			break;
		
		case 37:
			func_245(uParam1, "Nigel1", func_238(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_246(iParam0), 1, 0);
			break;
		
		case 38:
			func_245(uParam1, "Nigel1A", func_238(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_246(iParam0), 1, 1);
			break;
		
		case 39:
			func_245(uParam1, "Nigel1B", func_238(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_246(iParam0), 1, 1);
			break;
		
		case 40:
			func_245(uParam1, "Nigel1C", func_238(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_246(iParam0), 1, 1);
			break;
		
		case 41:
			func_245(uParam1, "Nigel1D", func_238(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_246(iParam0), 1, 1);
			break;
		
		case 42:
			func_245(uParam1, "Nigel2", func_238(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_246(iParam0), 1, 1);
			break;
		
		case 43:
			func_245(uParam1, "Nigel3", func_238(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_246(iParam0), 1, 1);
			break;
		
		case 44:
			func_245(uParam1, "Omega1", func_238(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_246(iParam0), 0, 0);
			break;
		
		case 45:
			func_245(uParam1, "Omega2", func_238(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_246(iParam0), 0, 0);
			break;
		
		case 46:
			func_245(uParam1, "Paparazzo1", func_238(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 47:
			func_245(uParam1, "Paparazzo2", func_238(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 48:
			func_245(uParam1, "Paparazzo3", func_238(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_246(iParam0), 0, 0);
			break;
		
		case 49:
			func_245(uParam1, "Paparazzo3A", func_238(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 50:
			func_245(uParam1, "Paparazzo3B", func_238(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 51:
			func_245(uParam1, "Paparazzo4", func_238(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_246(iParam0), 0, 0);
			break;
		
		case 52:
			func_245(uParam1, "Rampage1", func_238(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_246(iParam0), 0, 0);
			break;
		
		case 54:
			func_245(uParam1, "Rampage3", func_238(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_246(iParam0), 1, 0);
			break;
		
		case 55:
			func_245(uParam1, "Rampage4", func_238(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_246(iParam0), 1, 0);
			break;
		
		case 56:
			func_245(uParam1, "Rampage5", func_238(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_246(iParam0), 0, 0);
			break;
		
		case 53:
			func_245(uParam1, "Rampage2", func_238(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_246(iParam0), 1, 0);
			break;
		
		case 57:
			func_245(uParam1, "TheLastOne", func_238(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 58:
			func_245(uParam1, "Tonya1", func_238(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 59:
			func_245(uParam1, "Tonya2", func_238(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 60:
			func_245(uParam1, "Tonya3", func_238(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 61:
			func_245(uParam1, "Tonya4", func_238(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		case 62:
			func_245(uParam1, "Tonya5", func_238(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_246(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_245(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_246(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_247(int iParam0)
{
	Global_35994 = (unk_0x48E480685981C7D4() + iParam0);
}

void func_248()
{
	if (Global_88454)
	{
		func_237();
		unk_0x4C3E1248B459FDB7(func_249(Global_98931.f_1750.f_539.f_3549));
	}
	else
	{
		unk_0x4C3E1248B459FDB7("");
	}
}

char* func_249(var uParam0)
{
	uParam0 = uParam0;
	return "";
}

void func_250()
{
	char cVar0[24];
	
	if (unk_0x9800AF1CCAFA4639() || unk_0x3F0C224D3CC05EF2())
	{
		unk_0x37EDB5361D2913A3(StackVal, 0, 0, 0);
	}
	else if (unk_0x211AF631627DE2C5() || unk_0xEC209B562C5EFDB2())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0x0D8BE77DF7532733(0, &cVar0);
	}
}

void func_251(int iParam0, int iParam1)
{
	Global_88449 = iParam0;
	Global_88450 = iParam1;
}

void func_252()
{
	if (Global_69274 != 6)
	{
	}
	if (Global_69279)
	{
		unk_0x5547446287DE314B(15);
		Global_69279 = 0;
		Global_17238.f_7707 = 0;
	}
	Global_69274 = 6;
	Global_69276 = -1;
	Global_69275 = -1;
}

void func_253(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35405)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35404 = 0;
	Global_35406 = 0;
	Global_35443 = 15;
	Global_55399 = 0;
	Global_55400 = 0;
}

void func_254(int iParam0, bool bParam1)
{
	struct<26> Var0;
	int iVar32;
	bool bVar33;
	int iVar34;
	struct<6> Var35;
	int iVar67;
	int iVar68;
	struct<6> Var69;
	int iVar101;
	int iVar102;
	
	func_244(iParam0, &Var0);
	if (!unk_0xD994929E13CC1ED5(&(Var0.f_16), ""))
	{
		while (!func_282(&(Var0.f_16)))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (Var0.f_22 != 0)
	{
		func_281(Var0.f_22, 0);
	}
	func_272(iParam0, Global_69289);
	if (!bParam1)
	{
		iVar32 = func_271(iParam0);
		if (iVar32 != 0)
		{
			if (!unk_0xDCDF391829125104(iVar32))
			{
				unk_0xB767D0AC54C32B5B(iVar32);
			}
		}
	}
	if (Var0.f_24 != -1)
	{
		bVar33 = true;
		if (Var0.f_5 != 4)
		{
			iVar34 = 0;
			while (iVar34 < 63)
			{
				iVar67 = iVar34;
				if (iVar67 != iParam0)
				{
					func_244(iVar67, &Var35);
					if (Var35.f_5 == Var0.f_5)
					{
						if (!unk_0x236D8AD7EE179F46(Global_98931.f_17188[iVar67 /*6*/], 3))
						{
							bVar33 = false;
						}
						if (!unk_0x236D8AD7EE179F46(Global_98931.f_17188[iVar67 /*6*/], 0))
						{
							func_259(iVar67);
						}
					}
				}
				iVar34++;
			}
		}
		if (bVar33)
		{
			func_259(Var0.f_24);
		}
	}
	else if (Var0.f_25 != 4)
	{
		iVar68 = 0;
		while (iVar68 < 63)
		{
			iVar101 = iVar68;
			if (iVar101 != iParam0)
			{
				func_244(iVar101, &Var69);
				if (Var69.f_5 == Var0.f_25)
				{
					func_259(iVar101);
				}
			}
			iVar68++;
		}
	}
	if (!unk_0x236D8AD7EE179F46(Global_98931.f_17188[iParam0 /*6*/], 3))
	{
		unk_0xF3148AAF69AF9CBC(&(Global_98931.f_17188[iParam0 /*6*/]), 3);
		Global_98018[iParam0 /*10*/].f_5 = 1;
		func_256(iParam0);
		iVar102 = func_255(iParam0);
		if (iVar102 != 322)
		{
			func_96(iVar102, 0, 0);
		}
	}
}

int func_255(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 109;
			break;
		
		case 1:
			return 322;
			break;
		
		case 2:
			return 69;
			break;
		
		case 3:
			return 70;
			break;
		
		case 4:
			return 322;
			break;
		
		case 5:
			return 71;
			break;
		
		case 6:
			return 71;
			break;
		
		case 7:
			return 72;
			break;
		
		case 8:
			return 68;
			break;
		
		case 9:
			return 73;
			break;
		
		case 10:
			return 74;
			break;
		
		case 11:
			return 75;
			break;
		
		case 12:
			return 76;
			break;
		
		case 13:
			return 77;
			break;
		
		case 14:
			return 78;
			break;
		
		case 15:
			return 79;
			break;
		
		case 16:
			return 80;
			break;
		
		case 17:
			return 81;
			break;
		
		case 18:
			return 82;
			break;
		
		case 19:
			return 83;
			break;
		
		case 20:
			return 84;
			break;
		
		case 21:
			return 85;
			break;
		
		case 22:
			return 86;
			break;
		
		case 23:
			return 87;
			break;
		
		case 24:
			return 106;
			break;
		
		case 25:
			return 178;
			break;
		
		case 26:
			return 179;
			break;
		
		case 27:
			return 88;
			break;
		
		case 28:
			return 89;
			break;
		
		case 29:
			return 90;
			break;
		
		case 30:
			return 91;
			break;
		
		case 31:
			return 107;
			break;
		
		case 32:
			return 92;
			break;
		
		case 33:
			return 93;
			break;
		
		case 34:
			return 94;
			break;
		
		case 35:
			return 110;
			break;
		
		case 36:
			return 111;
			break;
		
		case 37:
			return 95;
			break;
		
		case 38:
			return 96;
			break;
		
		case 39:
			return 97;
			break;
		
		case 40:
			return 98;
			break;
		
		case 41:
			return 99;
			break;
		
		case 42:
			return 100;
			break;
		
		case 43:
			return 101;
			break;
		
		case 44:
			return 66;
			break;
		
		case 45:
			return 67;
			break;
		
		case 46:
			return 102;
			break;
		
		case 47:
			return 103;
			break;
		
		case 48:
			return 322;
			break;
		
		case 49:
			return 104;
			break;
		
		case 50:
			return 104;
			break;
		
		case 51:
			return 105;
			break;
		
		case 52:
			return 194;
			break;
		
		case 53:
			return 195;
			break;
		
		case 54:
			return 196;
			break;
		
		case 55:
			return 197;
			break;
		
		case 56:
			return 198;
			break;
		
		case 57:
			return 108;
			break;
		
		case 58:
			return 208;
			break;
		
		case 59:
			return 209;
			break;
		
		case 60:
			return 210;
			break;
		
		case 61:
			return 211;
			break;
		
		case 62:
			return 212;
			break;
	}
	return 322;
}

void func_256(int iParam0)
{
	func_258(iParam0, 1);
	Global_98931.f_17188[iParam0 /*6*/].f_3 = func_257();
	Global_98931.f_17188.f_380++;
}

int func_257()
{
	return (Global_98931.f_8630.f_21 + Global_98931.f_17188.f_380);
}

void func_258(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 55;
	if (bParam1)
	{
		iVar1 = uParam0;
		if (iVar1 == 46)
		{
			iVar0 = 35;
		}
		else if (iVar1 == 49)
		{
			iVar0 = 36;
		}
		else if (iVar1 == 50)
		{
			iVar0 = 37;
		}
		else if (iVar1 == 8)
		{
			iVar0 = 38;
		}
		else if (iVar1 == 16)
		{
			iVar0 = 39;
		}
		else if (iVar1 == 38)
		{
			iVar0 = 40;
		}
		else if (iVar1 == 39)
		{
			iVar0 = 41;
		}
		else if (iVar1 == 40)
		{
			iVar0 = 42;
		}
		else if (iVar1 == 41)
		{
			iVar0 = 43;
		}
		else if (iVar1 == 42)
		{
			iVar0 = 44;
		}
		else if (iVar1 == 43)
		{
			iVar0 = 45;
		}
		else if (iVar1 == 20)
		{
			iVar0 = 46;
		}
	}
	else
	{
		iVar2 = uParam0;
		if (iVar2 == 53)
		{
			iVar0 = 0;
		}
		else if (iVar2 == 1)
		{
			iVar0 = 1;
		}
		else if (iVar2 == 2)
		{
			iVar0 = 2;
		}
		else if (iVar2 == 17)
		{
			iVar0 = 3;
		}
		else if (iVar2 == 19)
		{
			iVar0 = 4;
		}
		else if (iVar2 == 43)
		{
			iVar0 = 5;
		}
		else if (iVar2 == 44)
		{
			iVar0 = 6;
		}
		else if (iVar2 == 63)
		{
			iVar0 = 8;
		}
		else if (iVar2 == 12)
		{
			iVar0 = 9;
		}
		else if (iVar2 == 13)
		{
			iVar0 = 10;
		}
		else if (iVar2 == 64)
		{
			iVar0 = 11;
		}
		else if (iVar2 == 20)
		{
			iVar0 = 12;
		}
		else if (iVar2 == 30)
		{
			iVar0 = 13;
		}
		else if (iVar2 == 31)
		{
			iVar0 = 14;
		}
		else if (iVar2 == 41)
		{
			iVar0 = 15;
		}
		else if (iVar2 == 38)
		{
			iVar0 = 16;
		}
		else if (iVar2 == 9)
		{
			iVar0 = 18;
		}
		else if (iVar2 == 59)
		{
			iVar0 = 19;
		}
		else if (iVar2 == 45)
		{
			iVar0 = 20;
		}
		else if (iVar2 == 10)
		{
			iVar0 = 21;
		}
		else if (iVar2 == 14)
		{
			iVar0 = 22;
		}
		else if (iVar2 == 16)
		{
			iVar0 = 24;
		}
		else if (iVar2 == 39)
		{
			iVar0 = 25;
		}
		else if (iVar2 == 46)
		{
			iVar0 = 26;
		}
		else if (iVar2 == 60)
		{
			iVar0 = 27;
		}
		else if (iVar2 == 22)
		{
			iVar0 = 28;
		}
		else if (iVar2 == 48)
		{
			iVar0 = 30;
		}
		else if (iVar2 == 61)
		{
			iVar0 = 31;
		}
		else if (iVar2 == 49)
		{
			iVar0 = 32;
		}
		else if (iVar2 == 27)
		{
			iVar0 = 34;
		}
		else if (iVar2 == 3)
		{
			iVar0 = 47;
		}
		else if (iVar2 == 4)
		{
			iVar0 = 48;
		}
		else if (iVar2 == 5)
		{
			iVar0 = 49;
		}
		else if (iVar2 == 6)
		{
			iVar0 = 50;
		}
		else if (iVar2 == 7)
		{
			iVar0 = 51;
		}
		else if (iVar2 == 58)
		{
			iVar0 = 53;
		}
		else if (iVar2 == 90)
		{
			iVar0 = 7;
		}
		else if (iVar2 == 74 || iVar2 == 75)
		{
			iVar0 = 17;
		}
		else if (iVar2 == 93)
		{
			iVar0 = 23;
		}
		else if (iVar2 == 69 || iVar2 == 70)
		{
			iVar0 = 29;
		}
		else if (iVar2 == 84 || iVar2 == 85)
		{
			iVar0 = 33;
		}
	}
	if (iVar0 != 55)
	{
		Global_98931.f_25013.f_472 = iVar0;
	}
}

void func_259(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return;
	}
	func_260(iParam0);
	unk_0xF3148AAF69AF9CBC(&(Global_98931.f_17188[iParam0 /*6*/]), 0);
}

void func_260(int iParam0)
{
	switch (iParam0)
	{
		case 30:
			func_264(22, 1, 0, 1, 0);
			break;
		
		case 15:
			func_261(37, 0);
			break;
		
		default:
			break;
	}
}

void func_261(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_263(iParam0, 0))
		{
			func_262(iParam0, 1, 0);
			func_262(iParam0, 2, 0);
			func_262(iParam0, 3, 0);
			func_262(iParam0, 4, 0);
			func_262(iParam0, 0, 1);
			Global_67889[iParam0] = 1;
		}
	}
	else
	{
		func_262(iParam0, 0, 0);
	}
}

void func_262(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_98931.f_18731[iParam0]), iParam1);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_98931.f_18731[iParam0]), iParam1);
	}
}

bool func_263(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x236D8AD7EE179F46(Global_98931.f_18731[iParam0], iParam1);
}

void func_264(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam0 != 198)
	{
		if (Global_69020)
		{
			Global_2422670.f_73.f_227[iParam0] = iParam1;
		}
		else
		{
			Global_98931.f_5875.f_227[iParam0] = iParam1;
		}
		Global_32492[iParam0] = iParam2;
		Global_32691[iParam0] = 1;
		func_267(iParam0, bParam3, iParam4, 0);
		func_265(iParam0, iParam1);
	}
}

void func_265(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
			{
				unk_0xC34A632E840BD762("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
			}
			else
			{
				unk_0xC34A632E840BD762("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
			}
			break;
		
		case 71:
			if (iParam1 != 1)
			{
				unk_0x06D56C8F74164654("HEIST_SWEATSHOP_ZONES", 0, 0);
			}
			else
			{
				unk_0x06D56C8F74164654("HEIST_SWEATSHOP_ZONES", 1, 0);
			}
			break;
		
		case 65:
			if (iParam1 == 1)
			{
				func_266(0, 0);
			}
			else
			{
				func_266(0, 1);
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				unk_0xC34A632E840BD762("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
			}
			else
			{
				unk_0xC34A632E840BD762("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
			}
			break;
		
		case 174:
			if (iParam1 == 2)
			{
				unk_0x81A0AA75C2705429("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				unk_0x2AC63060DD745CF5("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
				unk_0x2AC63060DD745CF5("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
				unk_0x2AC63060DD745CF5("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
				unk_0x2AC63060DD745CF5("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
			}
			break;
	}
}

void func_266(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_97571, iParam0);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_97571, iParam0);
	}
	Global_97570 = 1;
}

bool func_267(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	var uVar98;
	bool bVar99;
	int iVar100;
	
	bVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_64 = 3;
	Var3.f_75 = 3;
	Var3.f_91 = 3;
	func_270(&Var3, iParam0);
	if (func_268())
	{
		iVar1 = Global_98931.f_5875.f_227[iParam0];
	}
	else
	{
		iVar1 = Global_2422670.f_73.f_227[iParam0];
	}
	iVar2 = Global_32890[iParam0];
	if (unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) && !bParam3)
	{
	}
	else
	{
		bVar99 = true;
		if (unk_0x8DAF7A748E41AD46(unk_0x11CA2334E341B424()) != unk_0x8DAF7A748E41AD46("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_32492[iParam0] && unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), Var3, 1) < 200f)
				{
					bVar99 = false;
				}
				if (!unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()) || unk_0xF4B729F99E682735(unk_0x81873881071CD9FE()))
				{
					if (!unk_0x29AFA2493D7C23D0())
					{
						bVar99 = false;
					}
				}
			}
		}
		if (unk_0x2CB3B76C90F08111() && (!unk_0xF33755A765033580() || unk_0x74F26547462074EE() != 5))
		{
			bVar99 = false;
		}
		if (bVar99)
		{
			switch (Var3.f_3)
			{
				case 0:
					if (iVar1 == 2)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0)
						{
							unk_0x66EED1B743852445(Var3, 10f, Var3.f_4[iVar1], 0);
						}
						if (Var3.f_4[iVar2] != 0)
						{
							unk_0x48ADCBD0499AD36B(Var3, 10f, Var3.f_4[iVar2], 1);
						}
						Global_34086[iParam0] = 1;
					}
					bVar0 = true;
					break;
				
				case 1:
					if (iVar1 == 0)
					{
						if (unk_0x8DAF7A748E41AD46(&(Var3.f_8[1 /*8*/])) != unk_0x8DAF7A748E41AD46("") && unk_0x8DAF7A748E41AD46(&(Var3.f_8[1 /*8*/])) != unk_0x8DAF7A748E41AD46(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x7DB3BD08E8BBFB35(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x68ED5C4FF323C850(&(Var3.f_8[1 /*8*/]));
							}
						}
						if ((unk_0x8DAF7A748E41AD46(&(Var3.f_8[2 /*8*/])) != unk_0x8DAF7A748E41AD46("") && unk_0x8DAF7A748E41AD46(&(Var3.f_8[2 /*8*/])) != unk_0x8DAF7A748E41AD46("REMOVE_ALL_STATES")) && unk_0x8DAF7A748E41AD46(&(Var3.f_8[2 /*8*/])) != unk_0x8DAF7A748E41AD46(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x7DB3BD08E8BBFB35(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x68ED5C4FF323C850(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (unk_0x8DAF7A748E41AD46(&(Var3.f_8[0 /*8*/])) != unk_0x8DAF7A748E41AD46(""))
						{
							if (!unk_0x7DB3BD08E8BBFB35(&(Var3.f_8[0 /*8*/])))
							{
								unk_0xD5C95DDAD3BFEED7(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (unk_0x8DAF7A748E41AD46(&(Var3.f_34)) != unk_0x8DAF7A748E41AD46(""))
						{
							if (!unk_0x7DB3BD08E8BBFB35(&(Var3.f_34)))
							{
								unk_0xD5C95DDAD3BFEED7(&(Var3.f_34));
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (unk_0x8DAF7A748E41AD46(&(Var3.f_34)) != unk_0x8DAF7A748E41AD46(""))
						{
							if (unk_0x7DB3BD08E8BBFB35(&(Var3.f_34)))
							{
								unk_0x68ED5C4FF323C850(&(Var3.f_34));
							}
						}
						if (unk_0x8DAF7A748E41AD46(&(Var3.f_8[0 /*8*/])) != unk_0x8DAF7A748E41AD46("") && unk_0x8DAF7A748E41AD46(&(Var3.f_8[0 /*8*/])) != unk_0x8DAF7A748E41AD46(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x7DB3BD08E8BBFB35(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x68ED5C4FF323C850(&(Var3.f_8[0 /*8*/]));
							}
						}
						if ((unk_0x8DAF7A748E41AD46(&(Var3.f_8[2 /*8*/])) != unk_0x8DAF7A748E41AD46("") && unk_0x8DAF7A748E41AD46(&(Var3.f_8[2 /*8*/])) != unk_0x8DAF7A748E41AD46("REMOVE_ALL_STATES")) && unk_0x8DAF7A748E41AD46(&(Var3.f_8[2 /*8*/])) != unk_0x8DAF7A748E41AD46(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x7DB3BD08E8BBFB35(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x68ED5C4FF323C850(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (unk_0x8DAF7A748E41AD46(&(Var3.f_8[1 /*8*/])) != unk_0x8DAF7A748E41AD46(""))
						{
							if (!unk_0x7DB3BD08E8BBFB35(&(Var3.f_8[1 /*8*/])))
							{
								unk_0xD5C95DDAD3BFEED7(&(Var3.f_8[1 /*8*/]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (unk_0x8DAF7A748E41AD46(&(Var3.f_34)) != unk_0x8DAF7A748E41AD46(""))
						{
							if (unk_0x7DB3BD08E8BBFB35(&(Var3.f_34)))
							{
								unk_0x68ED5C4FF323C850(&(Var3.f_34));
							}
						}
						if (unk_0x8DAF7A748E41AD46(&(Var3.f_8[0 /*8*/])) != unk_0x8DAF7A748E41AD46("") && unk_0x8DAF7A748E41AD46(&(Var3.f_8[0 /*8*/])) != unk_0x8DAF7A748E41AD46(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x7DB3BD08E8BBFB35(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x68ED5C4FF323C850(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (unk_0x8DAF7A748E41AD46(&(Var3.f_8[1 /*8*/])) != unk_0x8DAF7A748E41AD46("") && unk_0x8DAF7A748E41AD46(&(Var3.f_8[1 /*8*/])) != unk_0x8DAF7A748E41AD46(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x7DB3BD08E8BBFB35(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x68ED5C4FF323C850(&(Var3.f_8[1 /*8*/]));
							}
						}
						if (unk_0x8DAF7A748E41AD46(&(Var3.f_8[2 /*8*/])) != unk_0x8DAF7A748E41AD46("") && unk_0x8DAF7A748E41AD46(&(Var3.f_8[2 /*8*/])) != unk_0x8DAF7A748E41AD46("REMOVE_ALL_STATES"))
						{
							if (!unk_0x7DB3BD08E8BBFB35(&(Var3.f_8[2 /*8*/])))
							{
								unk_0xD5C95DDAD3BFEED7(&(Var3.f_8[2 /*8*/]));
							}
						}
					}
					Global_33887[iParam0] = 1;
					Global_34086[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 2:
					iVar100 = unk_0xA17AB437A96481B6(Var3, &(Var3.f_42));
					if (iVar100 != 0)
					{
						if (unk_0x8DAF7A748E41AD46(&(Var3.f_50)) != unk_0x8DAF7A748E41AD46(""))
						{
							if (unk_0xCAB160B2B24C4672(iVar100, &(Var3.f_50)))
							{
								unk_0xD81BD00ABACC9593(iVar100, &(Var3.f_50));
							}
						}
						if (iVar1 == 0)
						{
							if (unk_0x8DAF7A748E41AD46(&(Var3.f_8[1 /*8*/])) != unk_0x8DAF7A748E41AD46(""))
							{
								if (unk_0xCAB160B2B24C4672(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									unk_0xD81BD00ABACC9593(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
							if ((unk_0x8DAF7A748E41AD46(&(Var3.f_8[2 /*8*/])) != unk_0x8DAF7A748E41AD46("") && unk_0x8DAF7A748E41AD46(&(Var3.f_8[2 /*8*/])) != unk_0x8DAF7A748E41AD46("REMOVE_ALL_STATES")) && unk_0x8DAF7A748E41AD46(&(Var3.f_8[2 /*8*/])) != unk_0x8DAF7A748E41AD46(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0xCAB160B2B24C4672(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									unk_0xD81BD00ABACC9593(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0x8DAF7A748E41AD46(&(Var3.f_8[0 /*8*/])) != unk_0x8DAF7A748E41AD46(""))
							{
								if (!unk_0xCAB160B2B24C4672(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x9A11CCFE2AA024A6(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (unk_0x8DAF7A748E41AD46(&(Var3.f_8[0 /*8*/])) != unk_0x8DAF7A748E41AD46(""))
							{
								if (unk_0xCAB160B2B24C4672(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									unk_0xD81BD00ABACC9593(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
							if ((unk_0x8DAF7A748E41AD46(&(Var3.f_8[2 /*8*/])) != unk_0x8DAF7A748E41AD46("") && unk_0x8DAF7A748E41AD46(&(Var3.f_8[2 /*8*/])) != unk_0x8DAF7A748E41AD46("REMOVE_ALL_STATES")) && unk_0x8DAF7A748E41AD46(&(Var3.f_8[2 /*8*/])) != unk_0x8DAF7A748E41AD46(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0xCAB160B2B24C4672(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									unk_0xD81BD00ABACC9593(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0x8DAF7A748E41AD46(&(Var3.f_8[1 /*8*/])) != unk_0x8DAF7A748E41AD46(""))
							{
								if (!unk_0xCAB160B2B24C4672(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x9A11CCFE2AA024A6(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (unk_0x8DAF7A748E41AD46(&(Var3.f_8[0 /*8*/])) != unk_0x8DAF7A748E41AD46(""))
							{
								if (unk_0xCAB160B2B24C4672(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									unk_0xD81BD00ABACC9593(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
							if (unk_0x8DAF7A748E41AD46(&(Var3.f_8[1 /*8*/])) != unk_0x8DAF7A748E41AD46(""))
							{
								if (unk_0xCAB160B2B24C4672(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									unk_0xD81BD00ABACC9593(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
							if (unk_0x8DAF7A748E41AD46(&(Var3.f_8[2 /*8*/])) != unk_0x8DAF7A748E41AD46("") && unk_0x8DAF7A748E41AD46(&(Var3.f_8[2 /*8*/])) != unk_0x8DAF7A748E41AD46("REMOVE_ALL_STATES"))
							{
								if (!unk_0xCAB160B2B24C4672(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x9A11CCFE2AA024A6(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
						}
						if (bParam1)
						{
							unk_0x5ECFE61A5CEFED37(iVar100);
						}
					}
					Global_34086[iParam0] = 1;
					Global_33887[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 3:
					if (unk_0x0D6E79537424BACE(Var3, unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), 1) < 250f)
					{
						uVar98 = unk_0x4A150E93ADFB61C8(Var3, 25f, &(Var3.f_8[0 /*8*/]));
						if (unk_0x3CCB36EDF309ECF7(uVar98))
						{
							if (iVar1 == 0)
							{
								unk_0x53D662DFECF19C69(uVar98, 3);
								Global_34086[iParam0] = 1;
								bVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((unk_0x0226F42B42D2C7EF(uVar98) != 6 && unk_0x0226F42B42D2C7EF(uVar98) != 7) && unk_0x0226F42B42D2C7EF(uVar98) != 8)
								{
									unk_0x53D662DFECF19C69(uVar98, 10);
									Global_34086[iParam0] = 1;
									bVar0 = true;
								}
							}
							else if (iVar1 == 2)
							{
								bVar0 = true;
							}
						}
					}
					break;
				
				case 4:
					if (iVar1 == 0)
					{
						unk_0x31AB938A5D52F0BE(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
						unk_0xC69E84EBBD7166E6(&(Global_32238[(iParam0 / 32)]), (iParam0 % 32));
					}
					else if (iVar1 == 1)
					{
						unk_0x6DABE1B6DFADACDC(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
						unk_0xF3148AAF69AF9CBC(&(Global_32238[(iParam0 / 32)]), (iParam0 % 32));
					}
					bVar0 = true;
					break;
			}
			if (bVar0)
			{
				Global_32691[iParam0] = 0;
				Global_32890[iParam0] = iVar1;
				if (!func_268())
				{
					if (!Global_33487[iParam0])
					{
						Global_33487[iParam0] = 1;
						Global_33686++;
					}
				}
			}
		}
	}
	return bVar0;
}

int func_268()
{
	if ((func_72() == -1 || func_72() == 999) && !func_269() == 0)
	{
		return 1;
	}
	return 0;
}

int func_269()
{
	return Global_24947;
}

int func_270(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_4[iVar0] = 0;
		StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
		uParam0->f_64[iVar0] = 0;
		uParam0->f_75[iVar0] = 0;
		uParam0->f_91[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0;
	uParam0->f_33 = 0;
	StringCopy(&(uParam0->f_34), "", 32);
	StringCopy(&(uParam0->f_42), "", 32);
	StringCopy(&(uParam0->f_50), "", 32);
	uParam0->f_58 = { 0f, 0f, 0f };
	uParam0->f_61 = { 0f, 0f, 0f };
	uParam0->f_68 = { 0f, 0f, 0f };
	uParam0->f_71 = { 0f, 0f, 0f };
	uParam0->f_74 = 0f;
	uParam0->f_79 = { 0f, 0f, 0f };
	uParam0->f_82 = { 0f, 0f, 0f };
	uParam0->f_85 = { 0f, 0f, 0f };
	uParam0->f_88 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 3:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TRV1_Trail_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TRV1_Trail_end", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TRV1_Trail_Finish", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 4:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS3_05_water_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_05_water_grp2", 32);
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 0:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "gasstation_ipl_group1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasstation_ipl_group2", 32);
			*uParam0 = { -93.4f, 6410.9f, 36.8f };
			break;
		
		case 1:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_Smash2_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_Smash2_endimap", 32);
			*uParam0 = { 890.3647f, -2367.289f, 28.10582f };
			break;
		
		case 2:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_StiltHouse_imapstart", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_StiltHouse_imapend", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "des_stilthouse_rebuild", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1020.5f, 663.41f, 154.75f };
			uParam0->f_58 = { -1018.913f, 603.2904f, 105.6611f };
			uParam0->f_61 = { -1038.913f, 639.2904f, 135.6611f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			break;
		
		case 5:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bnkheist_apt_norm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest", 32);
			break;
		
		case 196:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest_vfx", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			break;
		
		case 6:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "crashed_cargoplane", 32);
			break;
		
		case 7:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_jb700_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 8:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_entityXF_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 9:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_cheetah_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 10:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_ztype_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 11:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_48_Killed_Michael", 32);
			break;
		
		case 12:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cargoship", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "sunkcargoship", 32);
			uParam0->f_68 = { -162.8918f, -2365.769f, 0f };
			uParam0->f_71 = { 190.75f, 31.25f, 21f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 13:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ship_occ_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ship_occ_grp2", 32);
			break;
		
		case 14:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "smboat", 32);
			break;
		
		case 15:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasparticle_grp2", 32);
			*uParam0 = { -95.2f, 6411.3f, 31.5f };
			break;
		
		case 16:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_02_cf_offmission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission1", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 17:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission2", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 18:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission3", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 19:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission4", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 20:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jetstealtunnel", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 801.7f, -1810.8f, 23.3f };
			break;
		
		case 21:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Jetsteal_ipl_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jetsteal_ipl_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 787.3967f, -1808.858f, 29.8532f };
			uParam0->f_58 = { 814f, -1750f, 20f };
			uParam0->f_61 = { 790f, -1899f, 35f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			uParam0->f_64[2] = 0;
			break;
		
		case 22:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
			break;
		
		case 23:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bh1_47_joshhse_firevfx", 32);
			break;
		
		case 24:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_30_Keep_Closed", 32);
			break;
		
		case 25:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "triathlon2_VBprops", 32);
			break;
		
		case 26:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_REQUEST", 32);
			*uParam0 = { 163.4f, -745.7f, 251f };
			break;
		
		case 27:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FBI_colPLUG", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 28:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FBI_repair", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 29:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_build1_h");
			uParam0->f_4[1] = joaat("dt1_05_build1_damage");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 30:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -112041596;
			uParam0->f_4[1] = joaat("dt1_05_build1_damage_lod");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 31:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_slod");
			uParam0->f_4[1] = joaat("dt1_05_damage_slod");
			*uParam0 = { 178.534f, -668.835f, 37.2113f };
			break;
		
		case 32:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIB_heist_lights", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 33:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIB_heist_dmg", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 34:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_rubble", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 35:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIBlobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIBlobby", 32);
			*uParam0 = { 105.4557f, -745.4835f, 44.7548f };
			break;
		
		case 36:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_HC_REMOVE", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_HC_REQ", 32);
			*uParam0 = { 169f, -670.3f, 41.9f };
			break;
		
		case 37:
			uParam0->f_3 = 1;
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			uParam0->f_79 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_82 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_85 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_88 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			break;
		
		case 38:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkA_grp2", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 39:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 40:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkB_grp2", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 41:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 42:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkC_grp2", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 43:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 44:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkD_grp2", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 45:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 46:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkE_grp2", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 47:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 48:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_34), "des_methtrailer", 32);
			StringCopy(&(uParam0->f_8[0 /*8*/]), "methtrailer_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "methtrailer_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "methtrailer_grp3", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			uParam0->f_68 = { 31.134f, 3738.783f, 39.062f };
			uParam0->f_71 = { 13.6f, 20f, 8.9f };
			uParam0->f_74 = 48f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 1;
			break;
		
		case 49:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_meth_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			break;
		
		case 50:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_endimap", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			uParam0->f_79 = { 2383.756f, 4929.988f, 39.52461f };
			uParam0->f_82 = { 2505.756f, 5023.988f, 67.52461f };
			break;
		
		case 55:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_start_occl", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_end_occl", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			break;
		
		case 51:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2444.8f, 4976.4f, 50.5f };
			break;
		
		case 52:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm_props", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt_props", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 53:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 54:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farmint_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farmint", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 56:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "tankerexp_grp0", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp3", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 57:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp1", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 58:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp2", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 59:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_tankerexp", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 60:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "dockcrane1", 32);
			*uParam0 = { 889.3f, -2910.9f, 40f };
			break;
		
		case 61:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CanyonRvrShallow", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CanyonRvrDeep", 32);
			*uParam0 = { -1600.619f, 4443.457f, 0.725f };
			break;
		
		case 62:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Garage_door_locked", 32);
			*uParam0 = { 966.1f, -114.8f, 75.2f };
			break;
		
		case 63:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ch1_02_closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ch1_02_open", 32);
			*uParam0 = { -3086.428f, 339.2523f, 6.3717f };
			break;
		
		case 64:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ferris_finale_Anim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1675.178f, -1143.605f, 12.0175f };
			break;
		
		case 65:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "railing_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "railing_end", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 66:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "canyonriver01", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "canyonriver01_traincrash", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 67:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_WOFFM", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_FIB2_Mission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "DT1_05_WOFFM", 32);
			*uParam0 = { 131.29f, -631.22f, 261.85f };
			break;
		
		case 68:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "coronertrash", 32);
			*uParam0 = { 233.9f, -1355f, 30.3f };
			break;
		
		case 69:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Coroner_Int_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Coroner_Int_on", 32);
			*uParam0 = { 234.4f, -1355.6f, 40.5f };
			break;
		
		case 70:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "id2_14_pre_no_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 71:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during1", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_during2", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 72:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_on_fire", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_post_no_int", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 73:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during_door", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 74:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "burnt_switch_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 75:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_Default", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "RC12B_Destroyed", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "RC12B_Fixed", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 76:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_HospitalInterior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 105:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SM_15_BldGRAF1", 32);
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 106:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = { 1861.28f, 2402.11f, 58.53f };
			break;
		
		case 107:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FruitBB", 32);
			*uParam0 = { -1327.46f, -274.82f, 54.25f };
			break;
		
		case 108:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = { 2697.32f, 3162.18f, 58.1f };
			break;
		
		case 109:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = { 2119.12f, 3058.21f, 53.25f };
			break;
		
		case 110:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ap1_03_bbrd_dcl", 32);
			*uParam0 = { -804.25f, -2276.88f, 23.59f };
			break;
		
		case 111:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_02_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_02_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 112:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_Emissive_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_Emissive_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 77:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 480.9554f, -1321.21f, 28.2037f };
			uParam0->f_85 = { 508.3f, -1299.3f, 39.4f };
			uParam0->f_88 = { 459.9f, -1363.2f, 21.4f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 0;
			break;
		
		case 78:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TrevorsTrailer", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TrevorsTrailerTrash", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TrevorsTrailerTidy", 32);
			*uParam0 = { 1973f, 3815f, 34f };
			uParam0->f_33 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "scafstartimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "scafendimap", 32);
			*uParam0 = { -1088.6f, -1650.6f, 6.4f };
			break;
		
		case 80:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chop_props", 32);
			*uParam0 = { -13.83f, -1455.45f, 31.81f };
			break;
		
		case 113:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "AP1_04_TriAf01", 32);
			*uParam0 = { -1277.629f, -2030.913f, 1.2823f };
			break;
		
		case 114:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS2_06_TriAf02", 32);
			*uParam0 = { 2384.969f, 4277.583f, 30.379f };
			break;
		
		case 115:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS4_04_TriAf03", 32);
			*uParam0 = { 1577.881f, 3836.107f, 30.7717f };
			break;
		
		case 87:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_21_prop_lift_on", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -180.5771f, -1016.928f, 28.2893f };
			break;
		
		case 88:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jewel2fake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "post_hiest_unload", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "bh1_16_refurb", 32);
			*uParam0 = { -630.4205f, -236.7843f, 37.057f };
			uParam0->f_79 = { (-623.6868f - 11f), (-231.935f - 11f), (40.30703f - 3.25f) };
			uParam0->f_82 = { (-623.6868f + 11f), (-231.935f + 11f), (40.30703f + 3.25f) };
			break;
		
		case 89:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bh1_16_doors_shut", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "refit_unload", 32);
			*uParam0 = { -583.1606f, -282.3967f, 35.394f };
			break;
		
		case 90:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "v_tunnel_hole_swap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "v_tunnel_hole", 32);
			*uParam0 = { -14.651f, -604.3639f, 25.1823f };
			break;
		
		case 91:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cs5_4_trains", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2773.61f, 2835.327f, 35.1903f };
			break;
		
		case 94:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "airfield", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 1743.682f, 3286.251f, 40.0875f };
			break;
		
		case 95:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1222.9f, 1877.9f, 79.9f };
			uParam0->f_58 = { 1206.8f, 1803f, 43.9f };
			uParam0->f_61 = { 1329f, 2060.4f, 143.9f };
			uParam0->f_64[0] = 0;
			uParam0->f_64[1] = 1;
			uParam0->f_64[2] = 0;
			break;
		
		case 104:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_01_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_01_NewBill", 32);
			*uParam0 = { -351f, -1324f, 44.02f };
			break;
		
		case 103:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_17_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_17_NewBill", 32);
			*uParam0 = { 391.81f, -962.71f, 41.97f };
			break;
		
		case 102:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_14_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_14_NewBill", 32);
			*uParam0 = { 424.2f, -1944.31f, 33.09f };
			break;
		
		case 92:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_01_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 93:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_02_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 118:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_M_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 116:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_D_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_D_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 117:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_S_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_S_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 119:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_L_Items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_L_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 120:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 122:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_FameShame", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 121:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_JewelHeist", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 123:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Michael_premier", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 124:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_plane_ticket", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 170:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "burgershot_yoga", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 171:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_Scuba", 32);
			StringCopy(&(uParam0->f_42), "V_Michael_Garage", 32);
			*uParam0 = { -810.5301f, 187.7868f, 71.4786f };
			break;
		
		case 125:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_bed_tidy", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_bed_Messy", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 164:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jewel_Gasmasks", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 165:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency _Overalls", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 166:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency_Blueprint", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 167:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_KitBag", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 168:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Body_Armour", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 169:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Fireman", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 126:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 127:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 128:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 129:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 130:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 131:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 132:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 133:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 134:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 179:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shutter_open", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "shutter_closed", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -30.8793f, -1088.336f, 25.4221f };
			uParam0->f_68 = { -29.3f, -1086.35f, 25.57f };
			uParam0->f_71 = { 5.5f, 3f, 2f };
			uParam0->f_74 = -10f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 174:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "csr_beforeMission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "csr_afterMissionA", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "csr_afterMissionB", 32);
			StringCopy(&(uParam0->f_50), "csr_inMission", 32);
			uParam0->f_33 = 0;
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 175:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_68 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_71 = { 2.5f, 3f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 176:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_68 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_71 = { 3f, 1f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 177:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_68 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_71 = { 1f, 3f, 2f };
			uParam0->f_74 = -45f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 178:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "carshowroom_broken", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "carshowroom_boarded", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 173:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shr_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "fakeint", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 180:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Shutter", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "", 32);
			*uParam0 = { 23.9346f, -669.7552f, 30.8853f };
			break;
		
		case 181:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Hospitaldoorsanim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "Hospitaldoorsfixed", 32);
			StringCopy(&(uParam0->f_42), "v_hospital", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 300.9423f, -586.1784f, 42.2919f };
			break;
		
		case 135:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_clean_apt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 136:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 137:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_C", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 138:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_sextoys_a", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 139:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_wade_shit", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 140:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_wade_sofa_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 141:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "layer_debra_pic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 142:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_torture", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 143:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_sofa_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_sofa_B", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 144:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_whiskey", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 145:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_mrJam_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 146:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_C", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 147:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "vb_30_emissive", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_murder", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 148:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_crimetape", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 149:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "sheriff_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 1856.029f, 3682.998f, 33.2675f };
			break;
		
		case 150:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_16_Sheriff_Cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -440.5073f, 6018.766f, 30.49f };
			break;
		
		case 151:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 152:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo_eye", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 153:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_57_FranklinStuff", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Franklin_LEFT", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 154:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_GangBandana", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 155:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Safari", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 172:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_19_Trevor_Mess", 32);
			StringCopy(&(uParam0->f_42), "v_strip3", 32);
			*uParam0 = { 96.4811f, -1291.294f, 28.2688f };
			break;
		
		case 182:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 139.5795f, -3092.962f, 8.64631f };
			uParam0->f_79 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_82 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_85 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_88 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 1;
			break;
		
		case 183:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 203.7784f, -3131.767f, 7.041344f };
			uParam0->f_79 = { Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f) };
			uParam0->f_82 = { Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f) };
			break;
		
		case 184:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 144.7706f, -2982.659f, 7.952507f };
			uParam0->f_79 = { Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f) };
			uParam0->f_82 = { Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f) };
			break;
		
		case 185:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_79 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_82 = { -1158.965f, -1524.983f, 11.63273f };
			break;
		
		case 187:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_79 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_82 = { -1048.064f, 368.0221f, 70.9128f };
			break;
		
		case 186:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_79 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_82 = { 1983.45f, 3830.78f, 36.2726f };
			break;
		
		case 188:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_79 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_82 = { -1076.233f, 92.1041f, 60.0617f };
			break;
		
		case 81:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KorizTempWalls", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2199.138f, 223.4648f, 181.1118f };
			break;
		
		case 82:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "mic3_chopper_debris", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2242.785f, 263.4779f, 173.6154f };
			break;
		
		case 83:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "chemgrill_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 3832.9f, 3665.5f, -23.4f };
			break;
		
		case 84:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Plane_crash_trench", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 2814.7f, 4758.5f, 47.9f };
			break;
		
		case 85:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "golfflags", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1096.505f, 4.5754f, 49.8103f };
			break;
		
		case 86:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "yogagame", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -781.6566f, 186.8937f, 71.8352f };
			break;
		
		case 189:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Carwash_with_spinners", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Carwash_without_spinners", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 55.7f, -1391.3f, 30.5f };
			break;
		
		case 190:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "KT_CarWash", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KT_CarWash_NoBrush", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 700.091f, -933.641f, 20.308f };
			break;
		
		case 191:
			uParam0->f_3 = 1;
			*uParam0 = { -1096.381f, -836.17f, 36.6755f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 192:
			uParam0->f_3 = 1;
			*uParam0 = { 449.6558f, -980.1375f, 42.6918f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 193:
			uParam0->f_3 = 1;
			*uParam0 = { 363.0175f, -1598.079f, 35.9502f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 194:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_07_MPGates", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { -1601.424f, 2808.213f, 16.2598f };
			break;
		
		case 97:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Gr_Closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 23.7318f, -647.2123f, 37.9549f };
			break;
		
		case 98:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FINBANK", 32);
			*uParam0 = { 12.9689f, -648.4698f, 9.7693f };
			break;
		
		case 99:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "PAPER1_RCM_ALT", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "PAPER1_RCM", 32);
			*uParam0 = { -1459.127f, 486.1281f, 115.2016f };
			break;
		
		case 100:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SP1_10_fake_interior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SP1_10_real_interior", 32);
			*uParam0 = { -248.4916f, -2010.509f, 34.5743f };
			break;
		
		case 101:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "facelobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "facelobby", 32);
			*uParam0 = { -1081.347f, -263.1502f, 38.7152f };
			break;
		
		case 195:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "atriumglstatic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "atriumglmission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "atriumglcut", 32);
			*uParam0 = { 136.1795f, -750.701f, 262.0516f };
			break;
		
		case 197:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "racetrack01", 32);
			*uParam0 = { 2096f, 3168.7f, 42.9f };
			break;
	}
	switch (iParam1)
	{
		case 156:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "showhome_only", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 157:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_unpacking", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 158:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_settled", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 163:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tshirt", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 159:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bong_and_wine", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 161:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_flyer", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 162:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tux", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 160:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "locked", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "unlocked", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 96:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chophillskennel", 32);
			*uParam0 = { 19.0568f, 536.4818f, 169.6277f };
			break;
	}
	return 1;
}

int func_271(int iParam0)
{
	switch (iParam0)
	{
		case 46:
			return 42;
			break;
		
		case 47:
			return 43;
			break;
		
		case 49:
			return 44;
			break;
		
		case 50:
			return 45;
			break;
		
		case 8:
			if (unk_0x236D8AD7EE179F46(Global_98931.f_17188.f_382, 0))
			{
				return 46;
			}
			break;
		
		case 16:
			return 47;
			break;
		
		case 38:
			return 48;
			break;
		
		case 39:
			return 49;
			break;
		
		case 40:
			return 50;
			break;
		
		case 41:
			return 51;
			break;
		
		case 42:
			return 52;
			break;
		
		case 43:
			if (Global_98931.f_7699.f_99.f_58[101])
			{
				return 53;
			}
			else
			{
				return 54;
			}
			break;
		
		case 20:
			return 55;
			break;
	}
	return 0;
}

void func_272(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 46:
			func_273(4, bParam1);
			break;
		
		case 16:
			func_273(6, bParam1);
			break;
		
		case 37:
			func_273(17, bParam1);
			break;
		
		case 31:
			func_273(16, bParam1);
			break;
	}
}

void func_273(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31)
	{
		if (!func_280(iParam0))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_98931.f_30883), iVar0);
			if (!bParam1)
			{
				func_278(func_279(iParam0));
				if (!func_277(68))
				{
					func_274("DI_HLP_STRY", 2, 0, 20000, 10000, 7, 0, 208, 0);
				}
			}
		}
	}
}

void func_274(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_275(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_275(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xD994929E13CC1ED5(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_98931.f_24859.f_145)
	{
		if (unk_0xD994929E13CC1ED5(&(Global_98931.f_24859[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_98931.f_24859.f_145 < 9)
	{
		StringCopy(&(Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_4), sParam1, 16);
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_8 = (unk_0x48E480685981C7D4() + iParam3);
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_9 = iParam5;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_11 = iParam6;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_12 = uParam2;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_13 = iParam7;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_14 = iParam8;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_10 = ((unk_0x48E480685981C7D4() + iParam3) + iParam4);
		}
		else
		{
			Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_10 = -1;
		}
		Global_98931.f_24859.f_145++;
		func_276();
	}
}

void func_276()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_98931.f_24859.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_98931.f_24859.f_145)
	{
		if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iVar0 /*16*/].f_11, 0))
		{
			if (Global_98931.f_24859[iVar0 /*16*/].f_12 > Global_98931.f_24859.f_146[0])
			{
				Global_98931.f_24859.f_146[0] = Global_98931.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iVar0 /*16*/].f_11, 1))
		{
			if (Global_98931.f_24859[iVar0 /*16*/].f_12 > Global_98931.f_24859.f_146[1])
			{
				Global_98931.f_24859.f_146[1] = Global_98931.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iVar0 /*16*/].f_11, 2))
		{
			if (Global_98931.f_24859[iVar0 /*16*/].f_12 > Global_98931.f_24859.f_146[2])
			{
				Global_98931.f_24859.f_146[2] = Global_98931.f_24859[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_277(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0x236D8AD7EE179F46(Global_98931.f_24859.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_278(var uParam0)
{
	unk_0x02A6B267064771B1("");
	unk_0x360C2C4758544C84("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", uParam0);
}

char* func_279(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CM_STOMIC";
			break;
		
		case 1:
			return "CM_STOFRA";
			break;
		
		case 2:
			return "CM_STOTRE";
			break;
		
		case 3:
			return "CM_STOAMA";
			break;
		
		case 4:
			return "CM_STOBEV";
			break;
		
		case 5:
			return "CM_STOBRA";
			break;
		
		case 6:
			return "CM_STOCHR";
			break;
		
		case 7:
			return "CM_STODAV";
			break;
		
		case 8:
			return "CM_STODEV";
			break;
		
		case 9:
			return "CM_STODRF";
			break;
		
		case 10:
			return "CM_STOFAB";
			break;
		
		case 11:
			return "CM_STOFLO";
			break;
		
		case 12:
			return "CM_STOJIM";
			break;
		
		case 13:
			return "CM_STOLAM";
			break;
		
		case 14:
			return "CM_STOLAZ";
			break;
		
		case 15:
			return "CM_STOLES";
			break;
		
		case 16:
			return "CM_STOMAU";
			break;
		
		case 17:
			return "CM_STOTHO";
			break;
		
		case 18:
			return "CM_STONER";
			break;
		
		case 19:
			return "CM_STOPAT";
			break;
		
		case 20:
			return "CM_STOSIM";
			break;
		
		case 21:
			return "CM_STOSOL";
			break;
		
		case 22:
			return "CM_STOSTE";
			break;
		
		case 23:
			return "CM_STOSTR";
			break;
		
		case 24:
			return "CM_STOTAN";
			break;
		
		case 25:
			return "CM_STOTAO";
			break;
		
		case 26:
			return "CM_STOTRA";
			break;
		
		case 27:
			return "CM_STOWAD";
			break;
	}
	return "ERROR!";
}

int func_280(int iParam0)
{
	if (iParam0 != -1 && iParam0 != 28)
	{
		return unk_0x236D8AD7EE179F46(Global_98931.f_30883, iParam0);
	}
	return 0;
}

void func_281(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_98931.f_7227[iParam0] = 1;
	Global_98931.f_7227.f_236[iParam0] = (unk_0x48E480685981C7D4() + iParam1);
}

int func_282(char* sParam0)
{
	int iVar0;
	
	iVar0 = 1424;
	if (!unk_0x3E2AF82E5D31BA07(sParam0))
	{
		return 1;
	}
	if (unk_0xD994929E13CC1ED5(sParam0, "controller_Races"))
	{
		if (unk_0x968BF1C2C695B61A(joaat("controller_races")) > 0)
		{
			return 1;
		}
		iVar0 = 128;
	}
	unk_0xE0013E74AB6963DC(sParam0);
	if (unk_0x06D4A1BE3DF77306(sParam0))
	{
		unk_0xE81651AD79516E48(sParam0, iVar0);
		unk_0xD25F9F5A80824C77(sParam0);
		return 1;
	}
	return 0;
}

int func_283()
{
	return func_284(unk_0x11CA2334E341B424(), 0);
}

int func_284(char* sParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = unk_0x8DAF7A748E41AD46(uParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_244(iVar0, &uVar1);
		if (unk_0x8DAF7A748E41AD46(uVar1) == iVar33)
		{
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

bool func_285(int iParam0, int iParam1)
{
	return (unk_0x48E480685981C7D4() - iParam0) > iParam1;
}

void func_286()
{
	unk_0x2EC65073E30146EC(0.3f);
	switch (iLocal_3106)
	{
		case 0:
			if (!bLocal_3168)
			{
				if (!func_45())
				{
					unk_0x270066FDBAF3A458(0f);
					unk_0xEAB527164AD92BF3(0f, 1065353216);
				}
				iLocal_3106 = 2;
			}
			else
			{
				unk_0xDE1125A413AF241C(0, 75, 1);
				func_42(&cLocal_3543);
				unk_0x995DCDA796A47049(1, sLocal_3296);
				func_41();
				if (func_10(Local_3496.f_0))
				{
					unk_0xCEDA5B7DDF6C8846(Local_3496.f_0, 0, 0, 0, 1, 0, 0, 0, 0);
				}
				if ((unk_0x498998F33897432E(1, sLocal_3296) && !func_293(&Local_3468)) && !func_293(&Local_3475))
				{
					if (func_35(1, 1093140480, 0))
					{
						unk_0x991ABCA492D8C897(unk_0x81873881071CD9FE(), sLocal_3299, 0, 0, 0);
						if (func_10(Local_3475.f_0))
						{
							unk_0x991ABCA492D8C897(Local_3475.f_0, sLocal_3298, 0, 0, 0);
						}
						if (func_10(Local_3468.f_0))
						{
							unk_0x991ABCA492D8C897(Local_3468.f_0, sLocal_3297, 0, 0, 0);
						}
						if (func_10(Local_3482.f_0))
						{
							unk_0x991ABCA492D8C897(Local_3482.f_0, sLocal_3300, 0, 0, 0);
						}
						if (func_10(Local_3489.f_0))
						{
							unk_0x991ABCA492D8C897(Local_3489.f_0, sLocal_3301, 0, 0, 0);
						}
						if (func_10(Local_3496.f_0))
						{
							unk_0x991ABCA492D8C897(Local_3496.f_0, sLocal_3302, 0, 0, 0);
							unk_0x9FDA5C65BF0EE91F(unk_0xB6AE0DAE06D56288(Local_3496.f_0, 0), 4f);
						}
						unk_0xE8F8B47D8785FAD4(1);
						unk_0x5632EA201EAF956B(0);
						unk_0x4EDE34FBADD967A6(0);
						func_21(800, 0);
						unk_0xB36217502E9BD236(418.2838f, -571.6629f, 24.69794f, 362.0258f, -663.1398f, 38.33998f, 28f, 0, 0, 0, 1, 1);
						func_289(392.86f, -621.04f, 27.97f, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1);
						func_288(1);
						unk_0xCDE668E40D482687(0f);
						unk_0x2EC65073E30146EC(0.3f);
						iLocal_3106 = 1;
					}
				}
				else
				{
					if (func_13(Local_3489.f_0))
					{
						func_40(Local_3489.f_0, 10.5f, 1, 0f, 0, 1, 0);
					}
					func_5();
					unk_0xDE1125A413AF241C(0, 21, 1);
					unk_0xDE1125A413AF241C(0, 37, 1);
					unk_0xDE1125A413AF241C(0, 25, 1);
					unk_0xDE1125A413AF241C(0, 141, 1);
					unk_0xDE1125A413AF241C(0, 140, 1);
					unk_0xDE1125A413AF241C(0, 24, 1);
					unk_0xDE1125A413AF241C(0, 257, 1);
					unk_0xDE1125A413AF241C(0, 22, 1);
					unk_0xDE1125A413AF241C(0, 23, 1);
				}
			}
			break;
		
		case 1:
			if (unk_0x673E6879232705DA(sLocal_3299, 0))
			{
				unk_0x30550E796AC03903();
				if (unk_0xB996DE7223D9DA79() && unk_0x29AFA2493D7C23D0())
				{
					unk_0x270066FDBAF3A458(0f);
					unk_0xEAB527164AD92BF3(0f, 1065353216);
				}
				bLocal_3239 = true;
			}
			if ((func_20(Local_3475.f_0) && func_20(Local_3468.f_0)) && func_13(Local_3489.f_0))
			{
				if (unk_0x673E6879232705DA(sLocal_3298, 0))
				{
					if (!unk_0x58A69336FE7307D8(Local_3475.f_0, Local_3489.f_0))
					{
						unk_0xDC81A805934C85CD(Local_3475.f_0, Local_3489.f_0, -1);
					}
					unk_0x1D15D99A10A15334(Local_3475.f_0, 1);
				}
				if (unk_0x673E6879232705DA(sLocal_3297, 0))
				{
					if (!unk_0x58A69336FE7307D8(Local_3468.f_0, Local_3489.f_0))
					{
						unk_0xDC81A805934C85CD(Local_3468.f_0, Local_3489.f_0, 0);
					}
					unk_0x1D15D99A10A15334(Local_3468.f_0, 1);
					unk_0x6CB332CB31E9FA96(Local_3468.f_0, 1);
				}
				if (unk_0x673E6879232705DA(sLocal_3301, 0))
				{
					unk_0x686D6CDC14C4BA6C(Local_3489.f_0, 1, 1);
					unk_0x3D24414865131CB8(Local_3489.f_0, 17f);
					unk_0xE6116B2B5D358CE9(Local_3489.f_0, 1);
					if (!unk_0xE20321A2D7F8960C(Local_3489.f_0))
					{
						unk_0xFD59D9ECD844449F(Local_3489.f_0, 1, sLocal_3296, 35f, 786468);
					}
				}
			}
			if (func_20(Local_3482.f_0))
			{
				if (unk_0x673E6879232705DA(sLocal_3300, 0))
				{
					unk_0x3B7AFF7DCE22C1CF(Local_3482.f_0, 0);
					func_52(&Local_3482, 1);
				}
			}
			if (!bLocal_3239)
			{
				unk_0x270066FDBAF3A458(0f);
				unk_0xEAB527164AD92BF3(0f, 1065353216);
			}
			if (!unk_0x521385D8214D27C4())
			{
				iLocal_3106 = 2;
			}
			else
			{
				unk_0xCDE668E40D482687(0f);
				unk_0x2EC65073E30146EC(0.3f);
			}
			break;
		
		case 2:
			if (unk_0x521385D8214D27C4())
			{
				unk_0x30E4A4CF320834D9(0);
			}
			else
			{
				if (unk_0x0A11B2F86364F5B7())
				{
					unk_0x9AF02897E594E920();
				}
				if (func_10(Local_3482.f_0))
				{
					unk_0x3B7AFF7DCE22C1CF(Local_3482.f_0, 0);
				}
				func_52(&Local_3482, 1);
				if (func_13(Local_3489.f_0))
				{
					if (func_20(Local_3475.f_0))
					{
						if (!func_39(Local_3475.f_0, -258271821))
						{
							if (unk_0x58A69336FE7307D8(Local_3475.f_0, Local_3489.f_0))
							{
								unk_0x1D15D99A10A15334(Local_3475.f_0, 1);
							}
						}
					}
					if (func_20(Local_3468.f_0))
					{
						unk_0x1D15D99A10A15334(Local_3468.f_0, 1);
						unk_0x6CB332CB31E9FA96(Local_3468.f_0, 1);
					}
				}
				if (func_10(Local_3496.f_0))
				{
					unk_0xCEDA5B7DDF6C8846(Local_3496.f_0, 0, 0, 0, 0, 0, 0, 0, 0);
				}
				if (bLocal_3168)
				{
					func_23(1, 1, 1, 1);
				}
				iLocal_3259 = unk_0x48E480685981C7D4();
				func_287(4);
			}
			break;
	}
}

void func_287(int iParam0)
{
	iLocal_3104 = iParam0;
	iLocal_3106 = 0;
}

void func_288(bool bParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	Var1 = { 341.2f, -645.83f, 25f };
	Var4 = { 429.1f, -572.89f, 35f };
	unk_0x3DD1ED742E99F292(Var1, Var4, 0, 1);
	unk_0x0C17E2FCF3ABF5A3(418.2838f, -571.6629f, 24.69794f, 362.0258f, -663.1398f, 38.33998f, 28f, 0, 0, 1);
	if (bParam0)
	{
		unk_0x14271BAB2BB24399(Var1, Var4);
		unk_0xB36217502E9BD236(418.2838f, -571.6629f, 24.69794f, 362.0258f, -663.1398f, 38.33998f, 28f, 0, 0, 0, 0, 0);
	}
	unk_0xF47DE13A08D86AB8(Var1, Var4, 0, 0);
	unk_0x536B53396BA193B3(Var1, Var4);
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (iVar0 != 1)
		{
			unk_0xE91F714E010C7127(uLocal_3289[iVar0], 0);
		}
		iVar0++;
	}
	uLocal_3288 = unk_0x13705C66F125D98D(Var1, Var4, 0, 1, 1, 1);
	if (bParam0)
	{
		unk_0x82119F022C669D9E(395.2476f, -615.0134f, 27.87107f, 20f, 0);
		unk_0x7C6BF0CD5D7454C9(395.2476f, -615.0134f, 27.87107f, 20f, 1, 0, 0, 0);
	}
}

void func_289(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)
{
	int iVar0;
	
	iVar0 = unk_0xEC537F0C0E8265EE();
	if (unk_0x7DF7DE8C76D7F346(iVar0))
	{
		func_292(0);
		if (bParam9)
		{
			unk_0xF3A3D904159D308C(unk_0xEC537F0C0E8265EE(), 1);
		}
		if (bParam8)
		{
			switch (func_291())
			{
				case 0:
					if (func_231(unk_0x81873881071CD9FE(), 8, 15))
					{
						func_122(unk_0x81873881071CD9FE(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (func_231(unk_0x81873881071CD9FE(), 9, 6))
					{
						func_122(unk_0x81873881071CD9FE(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (func_231(unk_0x81873881071CD9FE(), 8, 1) || func_231(unk_0x81873881071CD9FE(), 8, 10))
					{
						func_122(unk_0x81873881071CD9FE(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (func_231(unk_0x81873881071CD9FE(), 8, 4))
					{
						func_122(unk_0x81873881071CD9FE(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				}
		}
		if (iParam6 == 1)
		{
			unk_0x984F8E3A66FFFEE5(func_290(unk_0xEC537F0C0E8265EE()), 50f, 0);
		}
		if (iParam7 == 1)
		{
			unk_0x82119F022C669D9E(Param0, 30f, 0);
		}
		if (bParam10)
		{
			unk_0xCE5ED63F8CA77F8B(Param0, 30f);
		}
		unk_0x82695E55A5428216(Param0, 30f, 0);
		unk_0xE9E74A97DB98B442(iVar0, 0, 0);
		unk_0x2E2A75923F20DCD2(iVar0, 0);
		unk_0x0B8AC09F18292E35(iVar0, 1);
		if (bParam12)
		{
			unk_0x3BF4F473786B0150(0);
			unk_0xF1BC58601CA4A5C7(0);
		}
		unk_0xD1C83BD797927DD5();
		if (iParam11 == 1)
		{
			unk_0xB8BB626315D394F5(1);
		}
		if (iParam3 == 1)
		{
			unk_0x1448B1808E373DDE(1, 0);
		}
		if (iParam4 == 1)
		{
			iLocal_47 = 0;
			if (func_10(unk_0x81873881071CD9FE()))
			{
				iLocal_47 = unk_0xAAA67A2A5B888FA9(unk_0x81873881071CD9FE());
				unk_0x649CF94A4282A7FD(unk_0x81873881071CD9FE(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1)
		{
			func_21(500, 0);
		}
	}
}

Vector3 func_290(var uParam0)
{
	return unk_0xB6AE0DAE06D56288(unk_0xE495E987CB2BE7EF(uParam0), 0);
}

int func_291()
{
	func_237();
	return Global_98931.f_1750.f_539.f_3549;
}

void func_292(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0xEC537F0C0E8265EE();
	if (!unk_0xE9D49B6420575D0A(iVar0))
	{
		if (bParam0)
		{
		}
		unk_0x034205BA180B4E43(iVar0, bParam0, 16);
		unk_0x034205BA180B4E43(iVar0, bParam0, 32);
	}
	func_24(1, 1, 0, 0);
}

int func_293(int iParam0)
{
	if (func_20(*iParam0))
	{
		if (unk_0x3315DD7601B4423B(*iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_294()
{
	unk_0x2EC65073E30146EC(0.3f);
	unk_0x995DCDA796A47049(1, sLocal_3296);
	func_363();
	func_362(1090519040);
	switch (iLocal_3106)
	{
		case 0:
			func_359();
			iLocal_3260 = unk_0x48E480685981C7D4();
			if (func_20(Local_3482.f_0))
			{
				if (iLocal_3204)
				{
					func_338(&uLocal_19, Local_3482.f_0, 0, 0, 1, 1, 1);
				}
			}
			iLocal_3106 = 1;
			break;
		
		case 1:
			if (func_20(Local_3482.f_0))
			{
				if (iLocal_3204)
				{
					func_338(&uLocal_19, Local_3482.f_0, 0, 0, 1, 1, 1);
				}
				if (unk_0x86CCCD2FAE9D5E65(Local_3496.f_0))
				{
					fLocal_3264 = unk_0x2A488C176D52CCA5(Local_3555, unk_0xB6AE0DAE06D56288(Local_3496.f_0, 0));
				}
				if ((func_13(Local_3489.f_0) && func_20(Local_3475.f_0)) && func_20(Local_3468.f_0))
				{
					if (unk_0x58A69336FE7307D8(unk_0x81873881071CD9FE(), Local_3489.f_0))
					{
						if (func_337("NIGEL2_04", 0, 0))
						{
							unk_0xAC6C9BCDC1EB8365("NIGEL2_04");
						}
						iLocal_3206 = 0;
						func_91(&(Local_3489.f_2));
						func_331(&iLocal_3241);
						if (!unk_0xFBACB273AA628CC5(Local_3482.f_2))
						{
							Local_3482.f_2 = func_330(Local_3482.f_0, 1, 0, 5);
						}
						else
						{
							if (unk_0xE5AB05962FA1FF3F(Local_3482.f_0, 0))
							{
								unk_0xD6DF56BB9537BCC5(Local_3482.f_2, 1f);
							}
							func_329(Local_3482.f_2, Local_3482.f_0, 200f, 0.7f, iLocal_3241);
						}
						if (unk_0xD1FFD959917D4ED8(Local_3489.f_0, 381.9156f, -628.1014f, 22.93229f, 394.4772f, -606.127f, 35.77483f, 18.5f, 0, 1, 0))
						{
							if (func_328(&Local_3489))
							{
								if (func_285(iLocal_3260, 500))
								{
									iLocal_3106 = 2;
								}
							}
							else
							{
								iLocal_3260 = unk_0x48E480685981C7D4();
							}
						}
						else
						{
							iLocal_3260 = unk_0x48E480685981C7D4();
						}
					}
					else
					{
						func_91(&(Local_3482.f_2));
						if (!unk_0xFBACB273AA628CC5(Local_3489.f_2))
						{
							Local_3489.f_2 = func_327(Local_3489.f_0, 1, 7);
						}
						if (!iLocal_3206)
						{
							if (func_37())
							{
								func_325();
							}
							iLocal_3206 = 1;
						}
						if (!iLocal_3201)
						{
							func_324("NIGEL2_04", 7500, 1);
							iLocal_3250 = unk_0x48E480685981C7D4();
							iLocal_3201 = 1;
						}
						else if (!func_37())
						{
							if (fLocal_3266 < 20f)
							{
								if (unk_0x48E480685981C7D4() - iLocal_3250) > unk_0x2E0A9E3291F398E3(4500, 6500)
								{
									if (!unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), Local_3489.f_0, 0))
									{
										if (unk_0x2E0A9E3291F398E3(0, 11) > 5)
										{
											if (func_314(&uLocal_3303, "NIG2AUD", "NIG2_GIC", 8, 0, 0, 0))
											{
											}
										}
										else if (func_314(&uLocal_3303, "NIG2AUD", "NIG2_GIC2", 8, 0, 0, 0))
										{
										}
									}
								}
							}
						}
						else
						{
							iLocal_3250 = unk_0x48E480685981C7D4();
						}
						func_313();
						iLocal_3260 = unk_0x48E480685981C7D4();
					}
				}
				func_312();
			}
			func_359();
			func_301();
			break;
		
		case 2:
			func_91(&(Local_3489.f_2));
			func_91(&(Local_3482.f_2));
			unk_0xD1C83BD797927DD5();
			unk_0xB8BB626315D394F5(1);
			func_299(&uLocal_19, 0, 0);
			if (func_37())
			{
				func_297();
			}
			if (!iLocal_3204)
			{
				func_296(0);
				unk_0x30550E796AC03903();
				iLocal_3204 = 1;
			}
			if (unk_0x3D675D69D18A10E9(uLocal_3282))
			{
				unk_0xA080515881A08702(uLocal_3282, 0);
			}
			iLocal_3542 = 2;
			func_51(&Local_3273);
			unk_0x954FB3FC1E04A7A9();
			if (!func_45() && bLocal_3168)
			{
				func_33("NIGEL2_STOP", 0);
			}
			func_295(3);
			func_287(3);
			break;
	}
}

void func_295(int iParam0)
{
	if (!func_45() && bLocal_3168)
	{
		if (iParam0 == iLocal_3254)
		{
			switch (iLocal_3254)
			{
				case 0:
					if (func_33("NIGEL2_START", 0))
					{
						iLocal_3254++;
					}
					break;
				
				case 1:
					if (func_33("NIGEL2_CAR", 0))
					{
						unk_0xA3BC6AA446F03669("NIGEL2_JUMP");
						iLocal_3254++;
					}
					break;
				
				case 2:
					if (func_33("NIGEL2_JUMP", 1))
					{
						iLocal_3254++;
					}
					break;
				
				case 3:
					if (func_33("NIGEL2_STOP", 0))
					{
						iLocal_3254++;
					}
					break;
				
				default:
					break;
				}
			}
	}
}

void func_296(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x42E36F2D658EB2FF(uLocal_3244))
		{
			uLocal_3244 = unk_0xAAC4D4F273757469("DEFAULT_SCRIPTED_CAMERA", 1);
		}
		if (unk_0x42E36F2D658EB2FF(uLocal_3244))
		{
			unk_0xFEBF3DDE5E4DC5C5(1, 0, 3000, 1, 0, 0);
			unk_0xD68C8B031E2BDFA7(uLocal_3244, Local_3558);
			unk_0xBF1C17EB7F681E53(uLocal_3244, 14f);
			unk_0xB9B28C6B0F141577(uLocal_3244, Local_3489.f_0, Local_3561, 1);
			unk_0xAF6AFC714D6D0DC9("NIGEL_02_SLOWMO_SETTING");
		}
	}
	else
	{
		unk_0xC07F240B925F8FC7(0);
		if (unk_0x42E36F2D658EB2FF(uLocal_3244))
		{
			if (unk_0x6B6362BE9BFD1ACA(uLocal_3244))
			{
				unk_0x270066FDBAF3A458(0);
				unk_0xEAB527164AD92BF3(0, 1065353216);
				unk_0xDD0B0D77CB8995B1(uLocal_3244, 0);
			}
			unk_0x35B958B469415A23(uLocal_3244, 0);
		}
		unk_0xFEBF3DDE5E4DC5C5(0, 0, 3000, 1, 0, 0);
		unk_0xCF2F32222FF93448(1f);
		unk_0xA1A8FFBCDA61AC40("NIGEL_02_SLOWMO_SETTING");
		bLocal_3205 = true;
	}
}

void func_297()
{
	Global_14559 = 0;
	func_298();
}

void func_298()
{
	if (unk_0xE1772957381F609F())
	{
		unk_0xE1BF98267C70D822();
		Global_16704 = 0;
		unk_0x9E95048D8C96C1EA(1);
		Global_15693 = 6;
		return;
	}
}

void func_299(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x1C6DF6AD69BE853E())
	{
		if (unk_0x236D8AD7EE179F46(Global_2451473.f_4406, 26))
		{
			return;
		}
	}
	if (unk_0xCA020F3125A93EB9())
	{
		unk_0x59E3A6BEFC421137(iParam2);
		unk_0x7D123BA6B5E0F9B9("FocusIn");
		unk_0x0C22E352114F699C("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x45D2AAD93E9AC4B3("FocusOut", 0, 0);
			unk_0x35D7948F61AA3FEC(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x0D7089406F6A5C6E(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x4357449749A521B1(sVar0))
	{
		if (!unk_0x1C6DF6AD69BE853E())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x4357449749A521B1(uParam0->f_3))
	{
		if (func_300(uParam0->f_3))
		{
			unk_0xB8BB626315D394F5(1);
		}
	}
	if (!unk_0x4357449749A521B1(sVar0))
	{
		if (func_300(sVar0))
		{
			unk_0xB8BB626315D394F5(1);
		}
	}
}

bool func_300(char* sParam0)
{
	unk_0xF7F787102FC9BCAC(sParam0);
	return unk_0xEF468B98099969A5(0);
}

void func_301()
{
	if (!iLocal_3238)
	{
		if (func_311(Local_3555, 307.3065f, -589.9595f, 42.302f, 200f))
		{
			if (func_303())
			{
				func_302(794);
				iLocal_3238 = 1;
			}
		}
	}
}

void func_302(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_55403 = 0;
	if (!Global_55627[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_67497)
	{
		if (Global_67498[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_67498[iVar1 /*9*/].f_1 = 1;
			Global_67498[iVar1 /*9*/].f_2 = 0f;
			if (Global_67498[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

int func_303()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	iVar0 = 0;
	if (func_310())
	{
		iVar2 = func_309();
		if (iVar2 != 0)
		{
			bVar3 = false;
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				iVar1 = unk_0x8F1CCE5AF629C4D3(func_308(iVar0));
				if (unk_0x86CCCD2FAE9D5E65(iVar1))
				{
					if (func_307(unk_0xB6AE0DAE06D56288(iVar1, 0)))
					{
						if (unk_0xBBEF8270CE27C0EE(iVar1, unk_0x81873881071CD9FE(), 1))
						{
							bVar3 = true;
						}
					}
				}
				iVar0++;
			}
			if (bVar3)
			{
				return 1;
			}
		}
	}
	if (func_306())
	{
		iVar4 = func_305();
		if (iVar4 != 0)
		{
			bVar5 = false;
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < iVar4)
			{
				iVar1 = unk_0x8F1CCE5AF629C4D3(func_304(iVar0));
				if (unk_0x86CCCD2FAE9D5E65(iVar1))
				{
					if (func_307(unk_0xB6AE0DAE06D56288(iVar1, 0)))
					{
						if (unk_0xBBEF8270CE27C0EE(iVar1, unk_0x81873881071CD9FE(), 1))
						{
							bVar5 = true;
						}
					}
				}
				iVar0++;
			}
			if (bVar5)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_304(int iParam0)
{
	return Global_47654.f_25[iParam0];
}

var func_305()
{
	return Global_47654.f_24;
}

bool func_306()
{
	return Global_47654.f_24 > 0;
}

int func_307(struct<3> Param0)
{
	int iVar0;
	
	if (!unk_0x59F36F53A82C2E72(iLocal_3261))
	{
		return 0;
	}
	if (!unk_0xD58E02A689955E29(Param0))
	{
		iVar0 = unk_0xB5745E430823E791(Param0);
		if (iVar0 == iLocal_3261)
		{
			return 1;
		}
	}
	return 0;
}

var func_308(int iParam0)
{
	return Global_47654.f_37[iParam0];
}

var func_309()
{
	return Global_47654.f_36;
}

bool func_310()
{
	return Global_47654.f_36 > 0;
}

bool func_311(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return unk_0xB7A628320EFF8E47(Param0, Param3) <= (fParam6 * fParam6);
}

void func_312()
{
	float fVar0;
	
	fVar0 = 100f;
	if (iLocal_3236)
	{
		if (fLocal_3264 > fVar0)
		{
			func_302(793);
			iLocal_3236 = 0;
		}
	}
}

void func_313()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
	{
		iVar0 = unk_0xC03D6CD4574382AB(unk_0x81873881071CD9FE());
		if (unk_0x7404950238A154C2(iVar0, 0))
		{
			iVar1 = unk_0xB0B9E53CEFDB16AA(iVar0, 0);
			if (!unk_0x5FEB513A4402FD59(iVar1))
			{
				if (iVar1 != unk_0x81873881071CD9FE())
				{
					if (unk_0xE86442941AE40E75(iVar1))
					{
						if (!unk_0x3E3058289D865B2D(iVar1, unk_0x81873881071CD9FE()))
						{
							unk_0xAF625598EDA64AD3(iVar1, unk_0x81873881071CD9FE(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

int func_314(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam4 == 0)
	{
		if (unk_0xDBD19E93A4D01117())
		{
			if (unk_0xE19FDB171CBF814A(203) != 0)
			{
				return 0;
			}
		}
	}
	if (func_315(uParam0, sParam1, sParam2, iParam3, iParam4, iParam5, iParam6))
	{
		return 1;
	}
	return 0;
}

bool func_315(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_323(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15700 = 0;
	Global_15702 = 0;
	Global_15707 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_2621441 = 0;
	return func_316(sParam2, iParam3, 0);
}

int func_316(char* sParam0, int iParam1, bool bParam2)
{
	Global_15694 = 0;
	if (Global_15693 == 0 || Global_15695 == 2)
	{
		if (Global_15693 != 0)
		{
			if (iParam1 > Global_15695)
			{
				if (Global_15700 == 0)
				{
					unk_0x9E95048D8C96C1EA(0);
					Global_14394.f_1 = 3;
					Global_15693 = 0;
					Global_15694 = 1;
					Global_15746 = 0;
					Global_15689 = 0;
					Global_15690 = 0;
					Global_15704 = 0;
					Global_15703 = 0;
					Global_14393 = 0;
				}
				else
				{
					func_19();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE1772957381F609F())
		{
			return 0;
		}
		if (func_322(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_321();
		Global_14982 = { Global_15147 };
		Global_15699 = Global_15700;
		Global_15706 = Global_15707;
		Global_2621442 = Global_2621441;
		Global_15708 = { Global_15724 };
		Global_15701 = Global_15702;
		Global_16683 = Global_16684;
		Global_16691 = { Global_16697 };
		Global_16685 = Global_16686;
		Global_16687 = Global_16688;
		Global_16689 = Global_16690;
		Global_15312.f_370 = Global_16682;
		Global_15312.f_368 = Global_16680;
		Global_15312.f_369 = Global_16681;
		Global_15689 = Global_15690;
		if (Global_15699)
		{
			unk_0xC69E84EBBD7166E6(&Global_2264, 20);
			unk_0xC69E84EBBD7166E6(&Global_2265, 17);
			unk_0xC69E84EBBD7166E6(&Global_2266, 0);
			if (bParam2)
			{
				func_320();
				if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14394.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14360 == 1)
			{
				return 0;
			}
			if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
			{
				if (unk_0xF371669B2D6B4C8E(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (func_319())
				{
					return 0;
				}
				if (unk_0xE8CA5AAF4928DD46(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0x326033AAF1073AF3(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xEAF6063E5F7E0DD4(unk_0x81873881071CD9FE(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69020)
				{
					if (unk_0x2C237D28F05F0008(unk_0x81873881071CD9FE()))
					{
						return 0;
					}
					if (unk_0x1E73DDF10071C453(unk_0x1329891157A54C63()))
					{
						return 0;
					}
					if (unk_0x2881A00480A747EC(unk_0x81873881071CD9FE()))
					{
						return 0;
					}
					if (unk_0x2C3A6C25D061092B(unk_0x1329891157A54C63()))
					{
						return 0;
					}
				}
			}
			if (func_7())
			{
				return 0;
			}
			else
			{
				switch (Global_14394.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (unk_0x236D8AD7EE179F46(Global_2264, 9))
				{
					return 0;
				}
			}
			func_318();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_317();
		return 1;
	}
	if (Global_15693 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15695 || iParam1 == Global_15695)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_19();
	}
	return 0;
}

void func_317()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14561[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x9E95048D8C96C1EA(0);
	Global_15693 = 1;
}

void func_318()
{
	Global_15746 = Global_15745;
	Global_15740 = Global_15741;
	Global_15787 = { Global_15775 };
	Global_15793 = { Global_15781 };
	Global_15748 = Global_15747;
	Global_15817 = { Global_15799 };
	Global_15823 = { Global_15805 };
	Global_15829 = { Global_15811 };
	Global_15835 = { Global_15841 };
	Global_1579 = Global_1580;
	Global_1581 = Global_1582;
	Global_15704 = Global_15705;
	Global_15706 = Global_15707;
	Global_15708 = { Global_15724 };
	Global_15697 = Global_15698;
	Global_16709 = 0;
	Global_15742 = 0;
	Global_15743 = 0;
	unk_0xC69E84EBBD7166E6(&Global_2265, 16);
}

int func_319()
{
	int iVar0;
	int iVar1;
	
	if (Global_69020)
	{
		iVar0 = 0;
		unk_0x5F446E70DA9B8122(unk_0x81873881071CD9FE(), &iVar1, 1);
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x52946741890858CC() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (unk_0x99E8A1E54746EF15(unk_0x81873881071CD9FE(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_320()
{
	if (func_174(14))
	{
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[2 /*29*/])
			{
				Global_14394 = 2;
			}
			else
			{
				Global_14394 = 0;
			}
		}
	}
	else
	{
		Global_14394 = func_291();
		if (Global_14394 == 145)
		{
			Global_14394 = 3;
		}
		if (Global_69020)
		{
			Global_14394 = 3;
		}
		if (Global_14394 > 3)
		{
			Global_14394 = 3;
		}
	}
}

void func_321()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14982[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14982[iVar0 /*10*/].f_1), "", 24);
		Global_14982[iVar0 /*10*/].f_7 = 0;
		Global_14982[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14982.f_161 = -99;
	Global_14982.f_162 = { 0f, 0f, 0f };
}

bool func_322(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1334766.f_203[iParam1];
			}
			break;
	}
	return unk_0x236D8AD7EE179F46(Global_1334766.f_949, iParam0);
}

void func_323(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15147 = { *uParam0 };
	Global_1580 = iParam1;
	StringCopy(&Global_15763, sParam2, 24);
	Global_16682 = iParam5;
	if (iParam3 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16681 = 1;
		Global_16679 = 0;
	}
	else
	{
		Global_16681 = 0;
		Global_16679 = 1;
	}
}

void func_324(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x645DF34C4E038370(sParam0);
	unk_0x16885CADDEC73B2E(iParam1, 1);
}

void func_325()
{
	Global_14559 = 0;
	func_326();
}

void func_326()
{
	unk_0xE1BF98267C70D822();
	Global_16704 = 0;
	if (unk_0xE1772957381F609F())
	{
		unk_0x9E95048D8C96C1EA(0);
		Global_15693 = 6;
	}
}

int func_327(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_10(iParam0))
	{
		iVar0 = unk_0xE122DDAE9E94767B(iParam0);
		unk_0xD5CD0E7173F858FF(iVar0, iParam1);
		unk_0xCB015C3E2E01CA1C(iVar0, iParam2);
		unk_0xD6DF56BB9537BCC5(iVar0, 1f);
	}
	return iVar0;
}

int func_328(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x0752B24E8A13FF0E(*iParam0))
	{
		return 0;
	}
	if (!unk_0xE5A3577CADD45750(*iParam0, 5f))
	{
		return 0;
	}
	if (unk_0x653781B2157A929D(*iParam0))
	{
		return 1;
	}
	Var0 = { unk_0x314358E4CC4471B8(*iParam0) };
	if (Var0.f_0 > 0.2f || Var0.f_0 < -0.2f)
	{
		return 0;
	}
	if (Var0.f_1 > 0.2f || Var0.f_1 < -0.2f)
	{
		return 0;
	}
	return 1;
}

void func_329(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0xFBACB273AA628CC5(uParam0))
	{
		if ((unk_0x86CCCD2FAE9D5E65(iParam1) && unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE())) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			if (unk_0xCF8AA94BAD0F766A(iParam1))
			{
				if (unk_0x7404950238A154C2(unk_0x522C7043B2B961F9(iParam1), 0))
				{
					fVar1 = unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = unk_0xF2DB717A73826179((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x20F5C387A2DC0C80(uParam0, 1);
						unk_0x9DA87A96BDB876EC(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x20F5C387A2DC0C80(uParam0, 0);
						unk_0x9DA87A96BDB876EC(uParam0, 255);
					}
				}
			}
			else if (unk_0xCF0C46D719D5302C(iParam1))
			{
				if (!unk_0x5FEB513A4402FD59(unk_0x8F1CCE5AF629C4D3(iParam1)))
				{
					fVar1 = unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), unk_0xB6AE0DAE06D56288(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = unk_0xF2DB717A73826179(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						unk_0x20F5C387A2DC0C80(uParam0, 1);
						unk_0x9DA87A96BDB876EC(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x20F5C387A2DC0C80(uParam0, 0);
						unk_0x9DA87A96BDB876EC(uParam0, 255);
					}
				}
			}
		}
	}
}

int func_330(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = true;
	if (bVar1)
	{
		if (func_10(iParam0))
		{
			iVar0 = unk_0xE122DDAE9E94767B(iParam0);
			unk_0xD5CD0E7173F858FF(iVar0, iParam2);
			unk_0xCB015C3E2E01CA1C(iVar0, iParam3);
			unk_0xD6DF56BB9537BCC5(iVar0, 0.7f);
			if (!bParam1)
			{
				unk_0xD6DF56BB9537BCC5(iVar0, 0.5f);
			}
		}
	}
	return iVar0;
}

void func_331(int iParam0)
{
	int iVar0;
	char cVar1[32];
	int iVar9;
	
	if (func_37())
	{
		iLocal_3249 = unk_0x48E480685981C7D4();
	}
	else
	{
		iLocal_3232 = 0;
	}
	if (iLocal_3233)
	{
		if (func_20(iLocal_3281))
		{
			if (!unk_0x3315DD7601B4423B(iLocal_3281))
			{
				iLocal_3281 = 0;
				iLocal_3233 = 0;
			}
		}
		else
		{
			iLocal_3281 = 0;
			iLocal_3233 = 0;
		}
	}
	if (!unk_0x0752B24E8A13FF0E(Local_3489.f_0))
	{
		iLocal_3251 = unk_0x48E480685981C7D4();
	}
	if (iLocal_3104 == 1)
	{
		if (fLocal_3264 < ((200f / 100f) * (0.7f * 100f)))
		{
			if (fLocal_3265 > 3000f && fLocal_3265 < 7500f)
			{
				if (!iLocal_3192)
				{
					if (!func_37())
					{
						iVar9 = 0;
						if (unk_0xDBD19E93A4D01117())
						{
							iVar9 = 1;
						}
						if (func_335(&uLocal_3303, "NIG2AUD", "NIG2_INSTR", "NIG2_INSTR_13", 8, iVar9, 0))
						{
							iLocal_3232 = 1;
							iLocal_3192 = 1;
						}
					}
				}
			}
			if (fLocal_3265 > 15500f && fLocal_3265 < 16000f)
			{
				if (!iLocal_3183[0])
				{
					if (unk_0xD1FFD959917D4ED8(Local_3489.f_0, -1237.778f, -763.4679f, 26.42266f, -1186.703f, -829.4772f, 10.58047f, 31f, 0, 1, 0))
					{
						if (!func_37())
						{
							if (func_335(&uLocal_3303, "NIG2AUD", "NIG2_INSTR", "NIG2_INSTR_1", 8, 0, 0))
							{
								iLocal_3232 = 1;
								iLocal_3183[0] = 1;
							}
						}
					}
				}
			}
			if (fLocal_3265 > 45500f && fLocal_3265 < 47500f)
			{
				if (!iLocal_3183[1])
				{
					if (unk_0xD1FFD959917D4ED8(Local_3489.f_0, -664.5371f, -580.7943f, 29.30828f, -590.7203f, -581.1932f, 23.30828f, 13.5f, 0, 1, 0))
					{
						if (func_37())
						{
							func_325();
						}
						if (func_314(&uLocal_3303, "NIG2AUD", "NIG_SP1", 8, 0, 0, 0))
						{
							unk_0x2CEC5A597B1DFFE1(3f, 3f, 0);
							iLocal_3232 = 1;
							iLocal_3183[1] = 1;
						}
					}
				}
			}
			if (fLocal_3265 > 69000f && fLocal_3265 < 71000f)
			{
				if (!iLocal_3183[2])
				{
					if (unk_0xD1FFD959917D4ED8(Local_3489.f_0, -440.7857f, -828.3237f, 35.7356f, -511.8112f, -826.6559f, 27.66894f, 60f, 0, 1, 0))
					{
						if (func_37())
						{
							func_325();
						}
						if (func_314(&uLocal_3303, "NIG2AUD", "NIG_SP2", 8, 0, 0, 0))
						{
							unk_0x2CEC5A597B1DFFE1(3f, 3f, 0);
							iLocal_3232 = 1;
							iLocal_3183[2] = 1;
						}
					}
				}
			}
			if (fLocal_3265 > 85000f && fLocal_3265 < 89000f)
			{
				if (!iLocal_3183[3])
				{
					if (unk_0xD1FFD959917D4ED8(Local_3489.f_0, -432.3278f, -540.988f, 44.07163f, -433.2483f, -485.5649f, 22.47039f, 60f, 0, 1, 0))
					{
						if (func_37())
						{
							func_325();
						}
						if (func_314(&uLocal_3303, "NIG2AUD", "NIG_SP3", 8, 0, 0, 0))
						{
							iLocal_3232 = 1;
							iLocal_3183[3] = 1;
						}
					}
				}
			}
			if (fLocal_3265 > 104000f && fLocal_3265 < 110000f)
			{
				if (!iLocal_3183[4])
				{
					if (func_37())
					{
						if (unk_0xD1FFD959917D4ED8(Local_3489.f_0, 81.94607f, -518.6024f, 38.07428f, -107.3686f, -519.7444f, 27.81536f, 60f, 0, 1, 0))
						{
							if (func_37())
							{
								func_18();
							}
							if (func_335(&uLocal_3303, "NIG2AUD", "NIG2_INSTR", "NIG2_INSTR_12", 8, 0, 0))
							{
								iLocal_3232 = 1;
								iLocal_3183[4] = 1;
							}
						}
					}
				}
			}
			if (fLocal_3265 > 113000f && fLocal_3265 < 116000f)
			{
				if (!iLocal_3183[5])
				{
					if (unk_0xD1FFD959917D4ED8(Local_3489.f_0, 254.9994f, -594.3826f, 49.60252f, 270.4643f, -527.226f, 39.68248f, 70f, 0, 1, 0))
					{
						if (func_37())
						{
							func_325();
						}
						if (func_314(&uLocal_3303, "NIG2AUD", "NIG2_HOSP01", 8, 0, 0, 0))
						{
							unk_0x2CEC5A597B1DFFE1(3f, 3f, 0);
							iLocal_3232 = 1;
							iLocal_3183[5] = 1;
						}
					}
				}
			}
			if (fLocal_3265 > 118000f)
			{
				if (!iLocal_3183[6])
				{
					if (unk_0xD1FFD959917D4ED8(Local_3489.f_0, 338.0111f, -581.9055f, 41.57753f, 350.9869f, -586.7529f, 46.07751f, 6.75f, 0, 1, 0))
					{
						if (func_37())
						{
							func_325();
						}
						if (func_314(&uLocal_3303, "NIG2AUD", "NIG2_HWH", 8, 0, 0, 0))
						{
							iLocal_3232 = 1;
							iLocal_3183[6] = 1;
						}
					}
				}
				if (!iLocal_3183[7])
				{
					if (unk_0xD1FFD959917D4ED8(Local_3489.f_0, 368.5714f, -594.9467f, 45.5422f, 389.5015f, -614.1279f, 27.11789f, 20.75f, 0, 1, 0))
					{
						if (!func_333("NIG2_HWH", 1))
						{
							if (func_37())
							{
								func_325();
							}
							if (func_314(&uLocal_3303, "NIG2AUD", "NIG2_HWS", 8, 0, 0, 0))
							{
								iLocal_3232 = 1;
								iLocal_3183[7] = 1;
							}
						}
					}
				}
			}
		}
	}
	if (!iLocal_3233)
	{
		if (!iLocal_3200)
		{
			if (((unk_0x1A95F99A66281615(Local_3489.f_0) || unk_0x088B9F587DA37464(Local_3489.f_0, 0, 1000)) || unk_0x088B9F587DA37464(Local_3489.f_0, 1, 1000)) || func_285(iLocal_3255, 500))
			{
				StringCopy(&cVar1, "NIG2_FLIP_", 32);
				iVar0 = unk_0x2E0A9E3291F398E3(1, 3);
				StringIntConCat(&cVar1, iVar0, 32);
				if (iVar0 == 1)
				{
					unk_0xD6CF200BD8E54A3B(Local_3475.f_0, "NIG2_CCAA", "NIGEL");
					iLocal_3200 = 1;
					iLocal_3281 = Local_3475.f_0;
					iLocal_3233 = 1;
					return;
				}
				else
				{
					unk_0xD6CF200BD8E54A3B(Local_3468.f_0, "NIG2_CCAB", "MRSTHORNHILL");
					iLocal_3200 = 1;
					iLocal_3281 = Local_3468.f_0;
					iLocal_3233 = 1;
					return;
				}
			}
			else if (unk_0x0752B24E8A13FF0E(Local_3489.f_0))
			{
				if (func_285(iLocal_3251, 500))
				{
					if (!func_333("NIG2_HWH", 1) && !func_333("NIG2_HWS", 1))
					{
						if (unk_0x2E0A9E3291F398E3(0, 11) > 5)
						{
							StringCopy(&cVar1, "NIG2_CDAA", 32);
							unk_0xD6CF200BD8E54A3B(Local_3475.f_0, &cVar1, "NIGEL");
							iLocal_3281 = Local_3475.f_0;
						}
						else
						{
							StringCopy(&cVar1, "NIG2_CDAB", 32);
							unk_0xD6CF200BD8E54A3B(Local_3468.f_0, &cVar1, "MRSTHORNHILL");
							iLocal_3281 = Local_3468.f_0;
						}
						iLocal_3251 = unk_0x48E480685981C7D4();
						iLocal_3233 = 1;
						iLocal_3200 = 1;
						return;
					}
				}
			}
		}
		else if (!unk_0x0752B24E8A13FF0E(Local_3489.f_0))
		{
			if (unk_0x653781B2157A929D(Local_3489.f_0) || ((!unk_0x1A95F99A66281615(Local_3489.f_0) && !unk_0x088B9F587DA37464(Local_3489.f_0, 0, 1000)) && !unk_0x088B9F587DA37464(Local_3489.f_0, 1, 1000)))
			{
				iLocal_3200 = 0;
			}
		}
		if (!iLocal_3232)
		{
			if (unk_0xFF6D1E12D0B05BD9(unk_0x1329891157A54C63()) >= 0 && unk_0xFF6D1E12D0B05BD9(unk_0x1329891157A54C63()) < 500)
			{
				if (unk_0x2E0A9E3291F398E3(0, 11) > 5)
				{
					StringCopy(&cVar1, "NIG2_CQAA", 32);
					unk_0xD6CF200BD8E54A3B(Local_3475.f_0, &cVar1, "NIGEL");
					iLocal_3281 = Local_3475.f_0;
				}
				else
				{
					StringCopy(&cVar1, "NIG2_CPAA", 32);
					unk_0xD6CF200BD8E54A3B(Local_3468.f_0, &cVar1, "MRSTHORNHILL");
					iLocal_3281 = Local_3468.f_0;
				}
				iLocal_3233 = 1;
				return;
			}
			if (unk_0x03CF5B18BF9EC613(Local_3489.f_0))
			{
				if (unk_0x2E0A9E3291F398E3(0, 11) > 5)
				{
					StringCopy(&cVar1, "NIG2_COAA", 32);
					unk_0xD6CF200BD8E54A3B(Local_3475.f_0, &cVar1, "NIGEL");
					iLocal_3281 = Local_3475.f_0;
				}
				else
				{
					StringCopy(&cVar1, "NIG2_CNAA", 32);
					unk_0xD6CF200BD8E54A3B(Local_3468.f_0, &cVar1, "MRSTHORNHILL");
					iLocal_3281 = Local_3468.f_0;
				}
				iLocal_3233 = 1;
				return;
			}
		}
	}
	if (!iLocal_3232 && !iLocal_3233)
	{
		if (unk_0x86CCCD2FAE9D5E65(Local_3496.f_0))
		{
			if (unk_0xBBEF8270CE27C0EE(Local_3496.f_0, unk_0x81873881071CD9FE(), 1) && unk_0xADBE95599A01932F(unk_0x81873881071CD9FE()))
			{
				if (!func_333("NIG2_SHOOTS", 1) && !func_333("NIG2_SHOOTSN", 1))
				{
					if (func_37())
					{
						func_325();
					}
					if (unk_0x2E0A9E3291F398E3(0, 11) > 5)
					{
						if (func_314(&uLocal_3303, "NIG2AUD", "NIG2_SHOOTS", 8, 0, 0, 0))
						{
							unk_0xD24EA1F9FB501BB5(Local_3496.f_0);
							iLocal_3233 = 1;
							return;
						}
					}
					else if (func_314(&uLocal_3303, "NIG2AUD", "NIG2_SHOOTSN", 8, 0, 0, 0))
					{
						unk_0xD24EA1F9FB501BB5(Local_3496.f_0);
						iLocal_3233 = 1;
						return;
					}
				}
				unk_0xD24EA1F9FB501BB5(Local_3496.f_0);
			}
			if (!iLocal_3196)
			{
				if (unk_0xBBEF8270CE27C0EE(Local_3496.f_0, unk_0x81873881071CD9FE(), 1))
				{
					if (func_37())
					{
						func_325();
					}
					if (func_314(&uLocal_3303, "NIG2AUD", "NIG2_CHASE01", 8, 0, 0, 0))
					{
						unk_0xD24EA1F9FB501BB5(Local_3496.f_0);
						iLocal_3232 = 1;
						iLocal_3196 = 1;
						return;
					}
				}
			}
		}
		if (unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0))
		{
			if (!iLocal_3197)
			{
				if (func_37())
				{
					func_297();
				}
				if (func_314(&uLocal_3303, "NIG2AUD", "NIG2_WANTED", 8, 0, 0, 0))
				{
					iLocal_3197 = 1;
					iLocal_3232 = 1;
				}
			}
			else if (!iLocal_3198)
			{
				if (!func_333("NIG2_WANTED", 1))
				{
					if (func_37())
					{
						func_325();
					}
					if (func_314(&uLocal_3303, "NIG2AUD", "NIG2_POLICE", 8, 0, 0, 0))
					{
						iLocal_3198 = 1;
						iLocal_3232 = 1;
					}
				}
			}
		}
		if (iLocal_3104 == 1)
		{
			if (fLocal_3264 < ((200f / 100f) * (0.7f * 100f)))
			{
				if (!iLocal_3232 && !func_37())
				{
					if (func_285(iLocal_3249, 500))
					{
						if (fLocal_3265 < 116000f)
						{
							if (!iLocal_3199)
							{
								if (fLocal_3265 > 20000f)
								{
									if (func_332())
									{
										if (func_314(&uLocal_3303, "NIG2AUD", "NIG2_LEFT", 8, 0, 0, 0))
										{
											iLocal_3199 = 1;
										}
									}
								}
							}
							if (!iLocal_3170[0])
							{
								if (func_314(&uLocal_3303, "NIG2AUD", "NIG2_CHASE02", 8, 0, 0, 0))
								{
									iLocal_3170[0] = 1;
								}
							}
							if (!iLocal_3170[1])
							{
								if (iLocal_3183[0] || fLocal_3265 > 16500f)
								{
									if (func_314(&uLocal_3303, "NIG2AUD", "NIG2_CHASE05", 8, 0, 0, 0))
									{
										iLocal_3170[1] = 1;
									}
								}
							}
							else if (!iLocal_3170[2])
							{
								if (func_314(&uLocal_3303, "NIG2AUD", "NIG2_CHASE08", 8, 0, 0, 0))
								{
									iLocal_3170[2] = 1;
								}
							}
							else if (!iLocal_3170[3])
							{
								if (iLocal_3183[1] || fLocal_3265 > 52500f)
								{
									if (func_314(&uLocal_3303, "NIG2AUD", "NIG2_CHASE06", 8, 0, 0, 0))
									{
										iLocal_3170[3] = 1;
									}
								}
							}
							else if (!iLocal_3170[4])
							{
								if (iLocal_3183[2] || fLocal_3265 > 71500f)
								{
									if (func_314(&uLocal_3303, "NIG2AUD", "NIG2_CHASE03", 8, 0, 0, 0))
									{
										iLocal_3170[4] = 1;
									}
								}
							}
							else if (!iLocal_3170[5])
							{
								if (iLocal_3183[3] || fLocal_3265 > 89500f)
								{
									if (func_314(&uLocal_3303, "NIG2AUD", "NIG2_CHASE04", 8, 0, 0, 0))
									{
										iLocal_3170[5] = 1;
									}
								}
							}
							else if (!iLocal_3170[6])
							{
								if (!iLocal_3183[5])
								{
									if (iLocal_3183[4] || fLocal_3265 > 106500f)
									{
										if (!unk_0xD1FFD959917D4ED8(Local_3489.f_0, 81.94607f, -518.6024f, 38.07428f, -107.3686f, -519.7444f, 27.81536f, 60f, 0, 1, 0))
										{
											if (func_314(&uLocal_3303, "NIG2AUD", "NIG2_CHASE07", 8, 0, 0, 0))
											{
												iLocal_3170[6] = 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (fLocal_3264 > ((200f / 100f) * (0.7f * 100f)))
	{
		if (!iLocal_3232)
		{
			if (!iLocal_3178[2])
			{
				if (func_37())
				{
					func_297();
				}
				else if (!iLocal_3178[0])
				{
					if (func_314(&uLocal_3303, "NIG2AUD", "NIG2_CU01", 8, 0, 0, 0))
					{
						iLocal_3232 = 1;
						iLocal_3178[0] = 1;
					}
				}
				else if (!iLocal_3178[1])
				{
					if (func_314(&uLocal_3303, "NIG2AUD", "NIG2_CU02", 8, 0, 0, 0))
					{
						iLocal_3232 = 1;
						iLocal_3178[1] = 1;
					}
				}
				else if (!iLocal_3178[2])
				{
					if (func_314(&uLocal_3303, "NIG2AUD", "NIG2_CU03", 8, 0, 0, 0))
					{
						iLocal_3232 = 1;
						iLocal_3178[2] = 1;
					}
				}
			}
		}
	}
	else if (fLocal_3265 > 40000f)
	{
		if (fLocal_3265 < 58000f)
		{
			if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -731.6891f, -657.8242f, 26.26911f, -448.3936f, -657.125f, 40.71734f, 40f, 0, 1, 0))
			{
				if (!iLocal_3182)
				{
					if (!iLocal_3178[1])
					{
						if (func_37())
						{
							func_325();
						}
						if (func_314(&uLocal_3303, "NIG2AUD", "NIG2_CU02", 8, 0, 0, 0))
						{
							iLocal_3232 = 1;
							iLocal_3178[1] = 1;
							iLocal_3182 = 1;
						}
					}
					else
					{
						if (func_37())
						{
							func_325();
						}
						if (func_314(&uLocal_3303, "NIG2AUD", "NIG2_CU03", 8, 0, 0, 0))
						{
							iLocal_3232 = 1;
							iLocal_3178[2] = 1;
							iLocal_3182 = 1;
						}
					}
				}
				*iParam0 = 1;
			}
		}
	}
}

int func_332()
{
	if (unk_0x39556E0F6E5D2461(unk_0x1329891157A54C63(), 2))
	{
		return 1;
	}
	return 0;
}

int func_333(char* sParam0, bool bParam1)
{
	struct<6> Var0;
	
	if (func_37())
	{
		Var0 = { func_334() };
		if (unk_0xD994929E13CC1ED5(&Var0, sParam0))
		{
			return 1;
		}
		if (bParam1)
		{
			if (unk_0xD994929E13CC1ED5(&Var0, "NULL"))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<6> func_334()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15693 == 4)
	{
		return Global_15312;
	}
	return Var0;
}

int func_335(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam5 == 0)
	{
		if (unk_0xDBD19E93A4D01117())
		{
			if (unk_0xE19FDB171CBF814A(203) != 0)
			{
				return 0;
			}
		}
	}
	if (func_336(uParam0, sParam1, sParam2, sParam3, iParam4, iParam5, iParam6))
	{
		return 1;
	}
	return 0;
}

bool func_336(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_323(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15700 = 0;
	Global_15707 = 0;
	Global_15702 = 0;
	Global_16684 = 1;
	Global_16686 = 0;
	Global_16690 = 0;
	StringCopy(&Global_16697, sParam3, 24);
	Global_2621441 = 0;
	return func_316(sParam2, iParam4, 0);
}

bool func_337(char* sParam0, int iParam1, int iParam2)
{
	unk_0x35C3DC3A3BE08CC1(sParam0);
	if (iParam1 == 1)
	{
		unk_0x072D7B028D6C7A05(iParam2);
	}
	return unk_0x8BF06EFC37AF94F0();
}

void func_338(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_339(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_339(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_340(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_340(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
	{
		func_299(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_341(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_341(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0xCA020F3125A93EB9())
	{
		if (unk_0x48E480685981C7D4() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x4357449749A521B1(iVar0))
	{
		if (!unk_0x1C6DF6AD69BE853E())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_300(iVar0))
	{
		func_358();
	}
	if (func_357(iParam1) && unk_0x1DB417C2D78C2390(iParam1))
	{
		iVar1 = 0;
		if (unk_0xCF0C46D719D5302C(iParam1))
		{
			unk_0xDADDFD5743EF6B4C(unk_0x8F1CCE5AF629C4D3(iParam1));
			unk_0xAA2EC5375B3FAE29(unk_0x8F1CCE5AF629C4D3(iParam1), 1);
			if (unk_0x06B618A8746F665B(unk_0x8F1CCE5AF629C4D3(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xCF8AA94BAD0F766A(iParam1))
		{
			unk_0xFBE0C43B6A21C8D0(unk_0x522C7043B2B961F9(iParam1));
			if (unk_0x29C2AB191ACB1F1A(unk_0x522C7043B2B961F9(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x9F76B19299294A0E(iParam1))
		{
			unk_0x078BE1F12FC92912(unk_0x440E5F4F3C17D1EB(iParam1));
			if (unk_0x336B49310DF9C666(unk_0x440E5F4F3C17D1EB(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xCA020F3125A93EB9())
		{
			if (func_352(uParam0, bParam7, bParam9, 0))
			{
				func_349(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_346(iVar0))
				{
					if ((unk_0x4357449749A521B1(uParam0->f_3) && !unk_0x4357449749A521B1(iVar0)) && unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
					{
						if ((iVar1 && !unk_0xA83A609D74168B30()) && uParam8)
						{
							if (!func_300(iVar0))
							{
								func_345(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0xD994929E13CC1ED5("CMN_HINT", iVar0))
								{
									func_344(1);
								}
							}
						}
					}
				}
			}
			else if (func_346(iVar0))
			{
				if (unk_0x4357449749A521B1(uParam0->f_3) && !unk_0x4357449749A521B1(iVar0))
				{
					if (((unk_0x331E7ACCFD0869AD(iParam1) && iVar1) && !unk_0xA83A609D74168B30()) && uParam8)
					{
						if (!func_300(iVar0))
						{
							func_345(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xD994929E13CC1ED5("CMN_HINT", iVar0))
							{
								func_344(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x4357449749A521B1(sParam5))
			{
				if (func_300(sParam5))
				{
					unk_0xB8BB626315D394F5(1);
				}
			}
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
			{
				if (unk_0x042BDEC3DAAA336A(unk_0x81873881071CD9FE()))
				{
					if (unk_0x7FCE6803A3D23268(3) == 3 || unk_0x7FCE6803A3D23268(3) == 4)
					{
						func_299(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xF8F0C55E476A5A81(unk_0x81873881071CD9FE()))
				{
					if (unk_0x7FCE6803A3D23268(6) == 3 || unk_0x7FCE6803A3D23268(6) == 4)
					{
						func_299(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x25B75802E65C5545(unk_0x81873881071CD9FE()))
				{
					if (unk_0x7FCE6803A3D23268(4) == 3 || unk_0x7FCE6803A3D23268(4) == 4)
					{
						func_299(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8B66743C57DF7AAA(unk_0x81873881071CD9FE()))
				{
					if (unk_0x7FCE6803A3D23268(5) == 3 || unk_0x7FCE6803A3D23268(5) == 4)
					{
						func_299(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xA5E670E54C660F1A(unk_0x81873881071CD9FE()))
				{
					if (unk_0x7FCE6803A3D23268(2) == 3 || unk_0x7FCE6803A3D23268(2) == 4)
					{
						func_299(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xF18003343B2E8EE9() == 3 || unk_0xF18003343B2E8EE9() == 4)
				{
					func_299(uParam0, iVar0, 1);
				}
			}
			if (!func_352(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_343(uParam0))
				{
					func_342(uParam0);
				}
			}
		}
	}
	else
	{
		func_299(uParam0, iVar0, 0);
	}
}

void func_342(var uParam0)
{
	if (func_357(unk_0x81873881071CD9FE()))
	{
		unk_0xF64D185C5B88AF31(unk_0x81873881071CD9FE());
	}
	if (unk_0xCA020F3125A93EB9())
	{
		unk_0x0D7089406F6A5C6E(1);
		unk_0x59E3A6BEFC421137(0);
		unk_0x0C22E352114F699C("HINT_CAM_SCENE");
		unk_0x7D123BA6B5E0F9B9("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x45D2AAD93E9AC4B3("FocusOut", 0, 0);
			unk_0x35D7948F61AA3FEC(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_343(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x48E480685981C7D4()
		{
			return 1;
		}
	}
	return 0;
}

int func_344(bool bParam0)
{
	switch (Global_35443)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_98931.f_8663.f_100++;
			}
			return Global_98931.f_8663.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_98931.f_8663.f_101++;
			}
			return Global_98931.f_8663.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_98931.f_8663.f_102++;
			}
			return Global_98931.f_8663.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_345(char* sParam0, int iParam1)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0xC592EBAF1D879BDC(0, 0, 1, iParam1);
}

int func_346(char* sParam0)
{
	if (!func_347(1, 1, 0))
	{
		if ((!unk_0xB318FDA0D1ABDB20(sParam0) && func_300(sParam0)) || func_300("CMN_HINT"))
		{
			unk_0xB8BB626315D394F5(1);
		}
		return 0;
	}
	switch (Global_35443)
	{
		case 0:
		case 3:
			if (func_344(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_344(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_344(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_347(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xF33755A765033580())
	{
		return 0;
	}
	if (func_9(0))
	{
		return 0;
	}
	if (func_348())
	{
		return 0;
	}
	if (unk_0x18138B3C6FD07449())
	{
		return 0;
	}
	if (Global_67710)
	{
		return 0;
	}
	if (unk_0x968BF1C2C695B61A(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_52584)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
		{
			if (unk_0x042BDEC3DAAA336A(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(3) == 3 || unk_0x7FCE6803A3D23268(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xF8F0C55E476A5A81(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(6) == 3 || unk_0x7FCE6803A3D23268(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x25B75802E65C5545(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(4) == 3 || unk_0x7FCE6803A3D23268(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8B66743C57DF7AAA(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(5) == 3 || unk_0x7FCE6803A3D23268(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xA5E670E54C660F1A(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7FCE6803A3D23268(2) == 3 || unk_0x7FCE6803A3D23268(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xF18003343B2E8EE9() == 3 || unk_0xF18003343B2E8EE9() == 4)
			{
				return 0;
			}
			if (unk_0xA1E64A079AAE6506())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_348()
{
	return unk_0x48E480685981C7D4() <= Global_17238.f_5630 + 100;
}

void func_349(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x930F8FBB8E9537CC(iParam1))
	{
		func_299(uParam0, 0, 0);
	}
	if (func_58(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0xCF0C46D719D5302C(iParam1))
		{
			iVar0 = unk_0x8F1CCE5AF629C4D3(iParam1);
			if (!unk_0xE5AB05962FA1FF3F(iVar0, 0))
			{
				if (unk_0x0452D5BF20AD945A(iVar0))
				{
					if (!func_350())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xBFC4295E811860E5(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x0D7089406F6A5C6E(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0xA9076AE35130AE29(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0xAF625598EDA64AD3(unk_0x81873881071CD9FE(), iParam1, -1, iVar3, iVar4);
	unk_0x45D2AAD93E9AC4B3("FocusIn", 0, 0);
	unk_0xF2A6D4C99549CA85("HINT_CAM_SCENE");
	unk_0x35D7948F61AA3FEC(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x48E480685981C7D4();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_350()
{
	return func_351(unk_0x1329891157A54C63());
}

int func_351(int iParam0)
{
	if (unk_0x14B7103DBD149FFE(unk_0xE495E987CB2BE7EF(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_352(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x48E480685981C7D4() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
				{
					if (func_356(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x48E480685981C7D4();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_355(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x48E480685981C7D4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_355(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x48E480685981C7D4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_356(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x48E480685981C7D4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_343(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x48E480685981C7D4() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
					{
						if (!func_356(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x48E480685981C7D4();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_355(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x48E480685981C7D4();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_355(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x48E480685981C7D4();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_356(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x48E480685981C7D4();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
				{
					if (!func_356(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_355(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_355(bParam1, bParam2, bParam3) || unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1) || unk_0x0F722384DC347983(unk_0x81873881071CD9FE(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_356(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x48E480685981C7D4() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
					{
						if (func_354(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_353(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1) || func_353(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1) || unk_0x0F722384DC347983(unk_0x81873881071CD9FE(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_354(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_343(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_347(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_358();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_353(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_347(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		if (!unk_0x4E8E6ABD17B372AE(unk_0x1329891157A54C63()))
		{
			unk_0xDE1125A413AF241C(0, 140, 1);
			unk_0xDE1125A413AF241C(0, 80, 1);
			if (unk_0x938788609A5D0621(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_354(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_347(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		unk_0xDE1125A413AF241C(0, 80, 1);
		if (unk_0x2AE1029043B25E5E())
		{
			if (unk_0x938788609A5D0621(0, 80))
			{
				unk_0x0D7089406F6A5C6E(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_355(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_347(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		if (!unk_0x4E8E6ABD17B372AE(unk_0x1329891157A54C63()))
		{
			unk_0xDE1125A413AF241C(0, 140, 1);
			unk_0xDE1125A413AF241C(0, 80, 1);
			if (unk_0x70A79CA636F98FA5(0, 80) && unk_0x48E480685981C7D4() > Global_97)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_356(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_347(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		unk_0xDE1125A413AF241C(0, 80, 1);
		if (unk_0x2AE1029043B25E5E())
		{
			if (unk_0x70A79CA636F98FA5(0, 80) && unk_0x48E480685981C7D4() > Global_97)
			{
				unk_0x0D7089406F6A5C6E(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_357(int iParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		if (unk_0xCF8AA94BAD0F766A(iParam0))
		{
			if (unk_0x7404950238A154C2(unk_0x522C7043B2B961F9(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0xCF0C46D719D5302C(iParam0))
		{
			if (!unk_0x5FEB513A4402FD59(unk_0x8F1CCE5AF629C4D3(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x9F76B19299294A0E(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_358()
{
	unk_0xF3148AAF69AF9CBC(&Global_2265, 4);
}

void func_359()
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (!bLocal_3205)
	{
		if (func_13(Local_3489.f_0))
		{
			if (unk_0x58A69336FE7307D8(unk_0x81873881071CD9FE(), Local_3489.f_0))
			{
				if (!unk_0xD1FFD959917D4ED8(Local_3489.f_0, 373.2886f, -580.871f, 37.23948f, 359.6602f, -605.2207f, 29.13826f, 20f, 0, 1, 0) && (unk_0xD1FFD959917D4ED8(Local_3489.f_0, Local_3549, Local_3552, fLocal_3263, 0, 1, 0) || unk_0xD1FFD959917D4ED8(Local_3489.f_0, 370.7054f, -596.1437f, 45.43948f, 361.3834f, -600.7f, 33.23949f, 6f, 0, 1, 0)))
				{
					func_295(2);
					if (iLocal_3204)
					{
						func_296(1);
						func_299(&uLocal_19, 0, 0);
						iLocal_3204 = 0;
						iLocal_3243 = 1;
						fLocal_3268 = 1f;
						unk_0xE8F8B47D8785FAD4(0);
					}
					if (iLocal_3237)
					{
						func_361(0, 795);
						iLocal_3237 = 0;
					}
					Var0 = { unk_0xB6AE0DAE06D56288(Local_3489.f_0, 1) };
					fVar3 = 0.2f;
					fVar4 = 0.9f;
					fVar5 = 2f;
					if (Var0.f_2 > 35.25f)
					{
						if (fLocal_3268 > fVar3)
						{
							fLocal_3268 = (fLocal_3268 - (fVar4 * unk_0x0000000050597EE2()));
							if (fLocal_3268 < fVar3)
							{
								fLocal_3268 = fVar3;
							}
							unk_0xCF2F32222FF93448(fLocal_3268);
						}
					}
					else if (Var0.f_2 < 35f)
					{
						if (fLocal_3268 < 1f)
						{
							fLocal_3268 = (fLocal_3268 + (fVar5 * unk_0x0000000050597EE2()));
							if (fLocal_3268 > 1f)
							{
								fLocal_3268 = 1f;
							}
							unk_0xCF2F32222FF93448(fLocal_3268);
						}
					}
					if (Var0.f_2 < 40f)
					{
						if (unk_0x653781B2157A929D(Local_3489.f_0))
						{
							if (!iLocal_3204)
							{
								func_296(0);
								unk_0x30550E796AC03903();
								iLocal_3204 = 1;
							}
						}
					}
				}
				else if (!iLocal_3204)
				{
					func_296(0);
					unk_0x30550E796AC03903();
					iLocal_3204 = 1;
				}
			}
			else if (!iLocal_3204)
			{
				func_296(0);
				unk_0x30550E796AC03903();
				iLocal_3243 = 0;
				iLocal_3204 = 1;
			}
		}
		else if (!iLocal_3204)
		{
			func_296(0);
			unk_0x30550E796AC03903();
			iLocal_3243 = 0;
			iLocal_3204 = 1;
		}
	}
	func_360();
}

void func_360()
{
	struct<3> Var0;
	
	if (iLocal_3243)
	{
		if (func_13(Local_3489.f_0))
		{
			Var0 = { unk_0xB6AE0DAE06D56288(Local_3489.f_0, 0) };
			if (Var0.f_2 < 35f)
			{
				if (unk_0x03CF5B18BF9EC613(Local_3489.f_0) || unk_0x653781B2157A929D(Local_3489.f_0))
				{
					unk_0x058526005957A956(-1, "CAR_DROP_WRAP", Local_3489.f_0, 0, 0, 0);
					iLocal_3243 = 0;
				}
			}
		}
	}
}

void func_361(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_55415 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_67497)
	{
		if (iParam1 == -1 || Global_67498[iVar0 /*9*/] == iParam1)
		{
			if (Global_67498[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_67498[iVar0 /*9*/].f_6 = iParam0;
				Global_67498[iVar0 /*9*/].f_7 = 1;
				Global_67498[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_362(int iParam0)
{
	if (func_20(Local_3482.f_0))
	{
		if (!unk_0x0BAE7BE122182FA8(Local_3482.f_0, "rcmnigel2", "die_horn", 3))
		{
			unk_0x295DC04FC13E025B("rcmnigel2");
			if (unk_0x8E8B546E1A81D27F("rcmnigel2"))
			{
				unk_0x31C1393E4ACFD794(Local_3482.f_0, "rcmnigel2", "die_horn", iParam0, -8f, -1, 2, 0.9f, 0, 0, 0);
			}
		}
	}
}

void func_363()
{
	struct<3> Var0;
	
	Var0 = { 392.9445f, -619.5032f, 27.9764f };
	if (func_311(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Var0, 100f))
	{
		if (!func_364())
		{
			unk_0x0ADAEB274E23621D(&cLocal_3543, 8);
			func_41();
			iLocal_3240 = 1;
		}
	}
	else if (iLocal_3240)
	{
		if (!func_311(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Var0, 120f))
		{
			if (unk_0x0A11B2F86364F5B7())
			{
				unk_0x9AF02897E594E920();
				iLocal_3240 = 0;
			}
		}
		else
		{
			func_41();
		}
	}
	if (iLocal_3240)
	{
		if (func_364())
		{
			unk_0x9AF02897E594E920();
			iLocal_3240 = 0;
		}
	}
}

bool func_364()
{
	return Global_88451;
}

void func_365()
{
	unk_0x2EC65073E30146EC(0.3f);
	switch (iLocal_3106)
	{
		case 0:
			if (func_20(Local_3482.f_0) && func_13(Local_3496.f_0))
			{
				unk_0x1D15D99A10A15334(Local_3482.f_0, 1);
				unk_0x0B895A812F665A52(Local_3482.f_0, 237, 1);
				unk_0x80E2E482FDBC2DD9(Local_3496.f_0, "NIGEL_02_CHASE_CAR_MG", 0);
			}
			if (func_20(Local_3468.f_0))
			{
				unk_0x1D15D99A10A15334(Local_3468.f_0, 1);
			}
			if (func_20(Local_3475.f_0))
			{
				unk_0x1D15D99A10A15334(Local_3475.f_0, 1);
			}
			if (func_13(Local_3489.f_0))
			{
				if (!iLocal_3237)
				{
					func_361(Local_3489.f_0, 795);
					iLocal_3237 = 1;
				}
				unk_0x24EECED9B6A1B569(Local_3489.f_0, 1);
				iLocal_3242 = 1;
			}
			unk_0x2CEC5A597B1DFFE1(0f, 15f, 1);
			func_416(fLocal_3267, Local_3555);
			unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 170, 1);
			unk_0x773049CADC416D2F(unk_0x1329891157A54C63());
			iLocal_3106 = 1;
			break;
		
		case 1:
			func_295(0);
			func_415();
			iLocal_3241 = 0;
			if (unk_0x86CCCD2FAE9D5E65(Local_3496.f_0))
			{
				fLocal_3264 = unk_0x2A488C176D52CCA5(Local_3555, unk_0xB6AE0DAE06D56288(Local_3496.f_0, 0));
			}
			if (func_20(Local_3482.f_0))
			{
				if (func_13(Local_3496.f_0))
				{
					if (!bLocal_3210)
					{
						unk_0x0B895A812F665A52(Local_3482.f_0, 237, 1);
						if (unk_0x58A69336FE7307D8(Local_3482.f_0, Local_3496.f_0) && unk_0xB0B9E53CEFDB16AA(Local_3496.f_0, -1) == Local_3482.f_0)
						{
							if (!unk_0xE20321A2D7F8960C(Local_3496.f_0))
							{
								unk_0xA8F22633ACC22189(Local_3496.f_0, 0);
								unk_0xC8F62804B10A6701(Local_3496.f_0, iLocal_3257, sLocal_3295, 1);
								unk_0xDC099970C8216FC4(Local_3496.f_0, 1);
								fLocal_3265 = unk_0x678BA9CA7610A13E(Local_3496.f_0);
								fLocal_3267 = 0.85f;
								unk_0x1248DFEEEEE716FC(Local_3496.f_0, fLocal_3267);
								func_414();
								func_392(Local_3496.f_0, fLocal_3267);
								func_388();
								if (!unk_0x12F24A1A22BF90A7("NIGEL_02_CHASE"))
								{
									if (!func_45() && bLocal_3168)
									{
										unk_0xF2A6D4C99549CA85("NIGEL_02_CHASE");
									}
								}
								bLocal_3210 = true;
							}
						}
					}
					else if (unk_0xE20321A2D7F8960C(Local_3496.f_0))
					{
						fLocal_3265 = unk_0x678BA9CA7610A13E(Local_3496.f_0);
						func_379(&fLocal_3267, fLocal_3265);
						unk_0x1248DFEEEEE716FC(Local_3496.f_0, fLocal_3267);
						func_414();
						func_392(Local_3496.f_0, fLocal_3267);
						func_388();
						func_378();
						func_377();
						func_12(0, 1);
						if (fLocal_3265 > 82000f && fLocal_3265 < 105000f)
						{
							func_376();
						}
						if (unk_0xFF463728B23A0037(Local_3496.f_0) < 800f)
						{
							unk_0xE61FF1947C0507EB(Local_3496.f_0, 800f);
						}
					}
					else if (!bLocal_3212)
					{
						func_64(0, 1);
						func_375();
						unk_0x4855165A2773595C(iLocal_3257, sLocal_3295);
						unk_0xA5F9A8EE8A45DD7E(Local_3496.f_0, 0);
						if (unk_0x12F24A1A22BF90A7("NIGEL_02_CHASE"))
						{
							unk_0x0C22E352114F699C("NIGEL_02_CHASE");
						}
						func_288(0);
						func_374();
						if (fLocal_3265 < 124136f)
						{
							fLocal_3265 = (124136f + 1000f);
						}
						func_377();
						bLocal_3212 = true;
					}
					else
					{
						func_362(1090519040);
					}
				}
				if (iLocal_3204)
				{
					func_338(&uLocal_19, Local_3482.f_0, 0, 0, 1, 1, 1);
				}
				func_373();
				func_372();
				func_371(fLocal_3265);
				func_368(Local_3555);
				func_367();
				func_312();
				func_416(fLocal_3267, Local_3555);
				if ((func_13(Local_3489.f_0) && func_20(Local_3475.f_0)) && func_20(Local_3468.f_0))
				{
					if (unk_0x58A69336FE7307D8(unk_0x81873881071CD9FE(), Local_3489.f_0))
					{
						if (func_337("NIGEL2_03", 0, 0))
						{
							unk_0xAC6C9BCDC1EB8365("NIGEL2_03");
						}
						if (func_337("NIGEL2_04", 0, 0))
						{
							unk_0xAC6C9BCDC1EB8365("NIGEL2_04");
						}
						func_91(&(Local_3489.f_2));
						if (iLocal_3242)
						{
							unk_0x24EECED9B6A1B569(Local_3489.f_0, 0);
							iLocal_3242 = 0;
						}
						if (!unk_0x58A69336FE7307D8(Local_3475.f_0, Local_3489.f_0) || !unk_0x58A69336FE7307D8(Local_3468.f_0, Local_3489.f_0))
						{
							func_91(&(Local_3482.f_2));
							if (func_337("NIGEL2_04", 0, 0))
							{
								unk_0xAC6C9BCDC1EB8365("NIGEL2_04");
							}
						}
						else
						{
							if (!iLocal_3211)
							{
								if (unk_0xB0B9E53CEFDB16AA(Local_3489.f_0, -1) == unk_0x81873881071CD9FE())
								{
									unk_0x686D6CDC14C4BA6C(Local_3489.f_0, 1, 0);
									iLocal_3211 = 1;
								}
							}
							func_295(1);
							if (!bLocal_3207)
							{
								func_324("NIGEL2_01", 7500, 1);
								bLocal_3207 = true;
							}
							iLocal_3206 = 0;
							if (func_337("NIGEL2_05", 0, 0))
							{
								unk_0xAC6C9BCDC1EB8365("NIGEL2_05");
							}
							if (func_337("NIGEL2_08", 0, 0))
							{
								unk_0xAC6C9BCDC1EB8365("NIGEL2_08");
							}
							if (func_337("NIGEL2_09", 0, 0))
							{
								unk_0xAC6C9BCDC1EB8365("NIGEL2_09");
							}
							func_331(&iLocal_3241);
							if (!unk_0xFBACB273AA628CC5(Local_3482.f_2))
							{
								Local_3482.f_2 = func_330(Local_3482.f_0, 1, 0, 5);
							}
							else
							{
								if (unk_0xE5AB05962FA1FF3F(Local_3482.f_0, 0))
								{
									unk_0xD6DF56BB9537BCC5(Local_3482.f_2, 1f);
								}
								func_329(Local_3482.f_2, Local_3482.f_0, 200f, 0.7f, iLocal_3241);
							}
							if (bLocal_3210)
							{
								if (bLocal_3212)
								{
									if (fLocal_3264 < 25f)
									{
										iLocal_3106 = 2;
									}
								}
							}
						}
						func_366();
					}
					else
					{
						if (iLocal_3242)
						{
							unk_0x24EECED9B6A1B569(Local_3489.f_0, 1);
							iLocal_3242 = 1;
						}
						unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 170, 0);
						func_91(&(Local_3482.f_2));
						if (!unk_0xFBACB273AA628CC5(Local_3489.f_2))
						{
							Local_3489.f_2 = func_327(Local_3489.f_0, 1, 7);
						}
						if (!bLocal_3207)
						{
							if (!iLocal_3193[0])
							{
								if (func_37())
								{
									func_325();
								}
								if (func_314(&uLocal_3303, "NIG2AUD", "NIG2_DAWDM", 7, 0, 0, 0))
								{
									iLocal_3193[0] = 1;
								}
							}
							else if (!iLocal_3202)
							{
								if (!func_37())
								{
									func_324("NIGEL2_03", 7500, 1);
									iLocal_3202 = 1;
								}
							}
							else if (!iLocal_3193[1])
							{
								if ((!func_37() && unk_0x58A69336FE7307D8(Local_3475.f_0, Local_3489.f_0)) && unk_0x58A69336FE7307D8(Local_3468.f_0, Local_3489.f_0))
								{
									if (func_314(&uLocal_3303, "NIG2AUD", "NIG2_SPOTSP", 8, 0, 0, 0))
									{
										iLocal_3193[1] = 1;
									}
								}
							}
						}
						else
						{
							if (!iLocal_3206)
							{
								if (func_37())
								{
									func_325();
								}
								iLocal_3206 = 1;
							}
							if (!iLocal_3201)
							{
								func_324("NIGEL2_04", 7500, 1);
								iLocal_3250 = unk_0x48E480685981C7D4();
								iLocal_3201 = 1;
							}
							else if (!func_37())
							{
								if (fLocal_3266 < 20f)
								{
									if (unk_0x48E480685981C7D4() - iLocal_3250) > unk_0x2E0A9E3291F398E3(4500, 6500)
									{
										if (!unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), Local_3489.f_0, 0))
										{
											if (unk_0x2E0A9E3291F398E3(0, 11) > 5)
											{
												if (func_314(&uLocal_3303, "NIG2AUD", "NIG2_GIC", 8, 0, 0, 0))
												{
												}
											}
											else if (func_314(&uLocal_3303, "NIG2AUD", "NIG2_GIC2", 8, 0, 0, 0))
											{
											}
										}
									}
								}
							}
							else
							{
								iLocal_3250 = unk_0x48E480685981C7D4();
							}
						}
						func_313();
					}
				}
			}
			func_359();
			func_301();
			break;
		
		case 2:
			if (!bLocal_3212)
			{
				func_64(0, 1);
				func_375();
				if (func_10(Local_3496.f_0))
				{
					if (unk_0xE20321A2D7F8960C(Local_3496.f_0))
					{
						unk_0x05ACEF4F060B9B4E(Local_3496.f_0);
					}
					unk_0xA8F22633ACC22189(Local_3496.f_0, 1);
				}
				unk_0x4855165A2773595C(iLocal_3257, sLocal_3295);
				func_288(0);
				if (unk_0x12F24A1A22BF90A7("NIGEL_02_CHASE"))
				{
					unk_0x0C22E352114F699C("NIGEL_02_CHASE");
				}
				if (fLocal_3265 < 124136f)
				{
					fLocal_3265 = (124136f + 1000f);
				}
				func_377();
				func_374();
				bLocal_3212 = true;
			}
			if (func_10(Local_3482.f_0))
			{
				if (iLocal_3204)
				{
					func_338(&uLocal_19, Local_3482.f_0, 0, 0, 1, 1, 1);
				}
			}
			func_359();
			if (iLocal_3237)
			{
				func_361(0, 795);
				iLocal_3237 = 0;
			}
			unk_0xDD17978B9F91686B(0);
			if (bLocal_3229)
			{
				if (unk_0x3D675D69D18A10E9(uLocal_3283))
				{
					unk_0xA080515881A08702(uLocal_3283, 0);
				}
			}
			unk_0xABF33AFE6B2877A8();
			func_287(2);
			break;
	}
}

void func_366()
{
	float fVar0;
	
	if (!bLocal_3229)
	{
		fVar0 = 115225f;
		if (fLocal_3265 > fVar0)
		{
			unk_0x18C8823792832C78();
			if (unk_0x7A74065A1435C8AB())
			{
				if (!unk_0x3D675D69D18A10E9(uLocal_3283))
				{
					if (unk_0xA04824262F150982(Local_3489.f_0) > 8f)
					{
						if (unk_0xD1FFD959917D4ED8(Local_3489.f_0, 368.911f, -599.1725f, 41.23884f, 366.0153f, -596.1f, 44.98576f, 6.5f, 0, 1, 0))
						{
							uLocal_3283 = unk_0xAB454B9B11E38180("scr_rcn2_debris_trail", Local_3489.f_0, 0f, -1.5f, -0.4f, 0f, 0f, 0f, 0.3f, 0, 0, 0);
							bLocal_3229 = true;
						}
					}
				}
			}
		}
	}
	else if (unk_0x3D675D69D18A10E9(uLocal_3283))
	{
		if (unk_0xA04824262F150982(Local_3489.f_0) < 4f || !unk_0xD1FFD959917D4ED8(Local_3489.f_0, 368.911f, -599.1725f, 41.23884f, 366.0153f, -596.1f, 44.98576f, 6.5f, 0, 1, 0))
		{
			unk_0xA080515881A08702(uLocal_3283, 0);
			bLocal_3229 = false;
		}
	}
}

void func_367()
{
	float fVar0;
	
	fVar0 = 115225f;
	if (!iLocal_3234)
	{
		if (!iLocal_3231)
		{
			if (fLocal_3265 > (fVar0 - 5000f))
			{
				unk_0x18C8823792832C78();
				iLocal_3231 = 1;
			}
		}
		else
		{
			if (fLocal_3265 > fVar0)
			{
				if (unk_0x7A74065A1435C8AB())
				{
					if (!unk_0x3D675D69D18A10E9(uLocal_3282))
					{
						uLocal_3282 = unk_0xBCBFC611FE1A1291("scr_rcn2_ceiling_debris", 325f, -589f, 45f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
						iLocal_3234 = 1;
					}
				}
			}
			if (!unk_0x7A74065A1435C8AB())
			{
				unk_0x18C8823792832C78();
			}
		}
	}
}

void func_368(struct<3> Param0)
{
	bool bVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	
	bVar0 = false;
	iVar6 = 250;
	if (func_10(Local_3482.f_0))
	{
		iVar7 = 0;
		while (iVar7 <= 3)
		{
			if (Local_3524[iVar7 /*2*/].f_1 == 0)
			{
				if (!bVar0)
				{
					if (fLocal_3265 >= 500f)
					{
						switch (iVar7)
						{
							case 0:
								iVar1 = iLocal_3269;
								Var2 = { -1262.53f, -731.25f, 21.88f };
								fVar5 = 47.38f;
								break;
							
							case 1:
								iVar1 = iLocal_3272;
								Var2 = { -1300.17f, -704.1f, 24.61f };
								fVar5 = -87.53f;
								break;
							
							case 2:
								iVar1 = iLocal_3272;
								Var2 = { -1298.33f, -704.16f, 24.53f };
								fVar5 = 83.96f;
								break;
							
							case 3:
								iVar1 = iLocal_3272;
								Var2 = { -1209.92f, -817.51f, 15.62f };
								fVar5 = 15.06f;
								break;
						}
						unk_0x32A12757CBF48A33(iVar1);
						if (unk_0x33ACB874CECA2D4B(iVar1))
						{
							Local_3524[iVar7 /*2*/] = unk_0x206897C6DBC12488(26, iVar1, Var2, fVar5, 1, 1);
							if (func_20(Local_3524[iVar7 /*2*/]))
							{
								Local_3524[iVar7 /*2*/].f_1 = 1;
								unk_0x6BC3C6046951661E(Local_3524[iVar7 /*2*/], 0);
								unk_0x6CB332CB31E9FA96(Local_3524[iVar7 /*2*/], 1);
							}
							if (iVar7 != 0)
							{
								unk_0x887F4488DA99FD21(iVar1);
							}
							bVar0 = true;
						}
					}
				}
			}
			else if ((unk_0x48E480685981C7D4() - iLocal_3252) > iVar6)
			{
				if (func_20(Local_3524[iVar7 /*2*/]))
				{
					switch (Local_3524[iVar7 /*2*/].f_1)
					{
						case 1:
							if (func_370(Local_3482.f_0, Local_3524[iVar7 /*2*/], 150f))
							{
								if (iVar7 == 0 || iVar7 == 3)
								{
									unk_0xA0E7F565B88CC79B(Local_3524[iVar7 /*2*/], 1, 1);
									unk_0x6CB332CB31E9FA96(Local_3524[iVar7 /*2*/], 0);
									Local_3524[iVar7 /*2*/].f_1 = 4;
								}
								else if (iVar7 == 1)
								{
									if (func_20(Local_3524[iVar7 + 1 /*2*/]))
									{
										unk_0x95F2470F44364D4F(Local_3524[iVar7 /*2*/], Local_3524[iVar7 + 1 /*2*/], 17, 0f, 0f, 0f, 0f, 0f);
										unk_0x6CB332CB31E9FA96(Local_3524[iVar7 /*2*/], 0);
										Local_3524[iVar7 /*2*/].f_1 = 4;
									}
								}
								else if (iVar7 == 2)
								{
									if (func_20(Local_3524[(iVar7 - 1) /*2*/]))
									{
										unk_0x95F2470F44364D4F(Local_3524[iVar7 /*2*/], Local_3524[(iVar7 - 1) /*2*/], 16, 0f, 0f, 0f, 0f, 0f);
										unk_0x6CB332CB31E9FA96(Local_3524[iVar7 /*2*/], 0);
										Local_3524[iVar7 /*2*/].f_1 = 4;
									}
								}
							}
							break;
						
						case 4:
							if (func_370(Local_3482.f_0, Local_3524[iVar7 /*2*/], 3f))
							{
								unk_0x27CC98B7C879C320(Local_3524[iVar7 /*2*/]);
								unk_0xEAD984C2869B8B7C(&uVar8);
								unk_0xF88735A9354A45F3(0, Local_3482.f_0, -1);
								unk_0x56D9ED1541046AF6(uVar8);
								unk_0xC65002CAA1212AF9(Local_3524[iVar7 /*2*/], uVar8);
								unk_0xA3561415EB3DA3A3(&uVar8);
								Local_3524[iVar7 /*2*/].f_1 = 6;
							}
							if (!func_369(Local_3524[iVar7 /*2*/], Param0, 300f))
							{
								func_52(&(Local_3524[iVar7 /*2*/]), 0);
								Local_3524[iVar7 /*2*/].f_1 = 7;
							}
							break;
						
						case 6:
							if (!func_369(Local_3524[iVar7 /*2*/], Param0, 150f))
							{
								func_52(&(Local_3524[iVar7 /*2*/]), 0);
								Local_3524[iVar7 /*2*/].f_1 = 7;
							}
							break;
						}
					}
			}
			iVar7++;
		}
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (Local_3505[iVar7 /*2*/].f_1 == 0)
			{
				if (!bVar0)
				{
					if (fLocal_3265 >= 111161f && iLocal_3262 > 1)
					{
						if (unk_0x59F36F53A82C2E72(iLocal_3261) && unk_0x9B710BA2688DD221(iLocal_3261))
						{
							switch (iVar7)
							{
								case 0:
									iVar1 = iLocal_3271;
									Var2 = { 309.34f, -596.87f, 43.31f };
									fVar5 = 14.8f;
									break;
								
								case 1:
									iVar1 = iLocal_3271;
									Var2 = { 309.52f, -594.85f, 43.31f };
									fVar5 = 153.4102f;
									break;
								
								case 2:
									iVar1 = iLocal_3271;
									Var2 = { 316f, -588.77f, 42.3f };
									fVar5 = 207.556f;
									break;
								
								case 3:
									iVar1 = iLocal_3270;
									Var2 = { 317.1715f, -590.084f, 42.302f };
									fVar5 = 60.6f;
									break;
								
								case 4:
									iVar1 = iLocal_3271;
									Var2 = { 332.54f, -588.5f, 43.3f };
									fVar5 = 70.64f;
									break;
								
								case 5:
									iVar1 = iLocal_3271;
									Var2 = { 331.68f, -578.6f, 43.32f };
									fVar5 = 234.5983f;
									break;
								
								case 6:
									iVar1 = iLocal_3271;
									Var2 = { 362.56f, -589.32f, 43.33f };
									fVar5 = -21.77f;
									break;
								
								case 7:
									iVar1 = iLocal_3271;
									Var2 = { 363.3849f, -587.8508f, 42.3275f };
									fVar5 = 161.2689f;
									break;
								
								case 8:
									iVar1 = iLocal_3270;
									Var2 = { 358.5161f, -586.02f, 42.3275f };
									fVar5 = 67.7037f;
									break;
							}
							unk_0x32A12757CBF48A33(iVar1);
							if (unk_0x33ACB874CECA2D4B(iVar1))
							{
								Local_3505[iVar7 /*2*/] = unk_0x206897C6DBC12488(26, iVar1, Var2, fVar5, 1, 1);
								if (func_20(Local_3505[iVar7 /*2*/]))
								{
									Local_3505[iVar7 /*2*/].f_1 = 4;
									unk_0x1D15D99A10A15334(Local_3505[iVar7 /*2*/], 1);
									unk_0x7F5F0D37173E518C(Local_3505[iVar7 /*2*/], 4, 1);
									unk_0x6CB332CB31E9FA96(Local_3505[iVar7 /*2*/], 1);
									switch (iVar7)
									{
										case 0:
											unk_0x03F73D35E5AC583A(Local_3505[iVar7 /*2*/], 0, 0, 0, 0);
											unk_0x03F73D35E5AC583A(Local_3505[iVar7 /*2*/], 2, 0, 0, 0);
											unk_0x03F73D35E5AC583A(Local_3505[iVar7 /*2*/], 3, 0, 1, 0);
											unk_0x03F73D35E5AC583A(Local_3505[iVar7 /*2*/], 4, 0, 0, 0);
											unk_0x03F73D35E5AC583A(Local_3505[iVar7 /*2*/], 5, 0, 0, 0);
											unk_0x03F73D35E5AC583A(Local_3505[iVar7 /*2*/], 8, 0, 0, 0);
											break;
										
										case 1:
											unk_0x03F73D35E5AC583A(Local_3505[iVar7 /*2*/], 0, 1, 0, 0);
											unk_0x03F73D35E5AC583A(Local_3505[iVar7 /*2*/], 2, 0, 0, 0);
											unk_0x03F73D35E5AC583A(Local_3505[iVar7 /*2*/], 3, 0, 0, 0);
											unk_0x03F73D35E5AC583A(Local_3505[iVar7 /*2*/], 4, 0, 0, 0);
											unk_0x03F73D35E5AC583A(Local_3505[iVar7 /*2*/], 5, 0, 0, 0);
											unk_0x03F73D35E5AC583A(Local_3505[iVar7 /*2*/], 8, 0, 0, 0);
											break;
										
										case 2:
											unk_0x03F73D35E5AC583A(Local_3505[2 /*2*/], 0, 1, 0, 0);
											unk_0x03F73D35E5AC583A(Local_3505[2 /*2*/], 2, 0, 0, 0);
											unk_0x03F73D35E5AC583A(Local_3505[2 /*2*/], 3, 0, 1, 0);
											unk_0x03F73D35E5AC583A(Local_3505[2 /*2*/], 4, 0, 1, 0);
											unk_0x03F73D35E5AC583A(Local_3505[2 /*2*/], 5, 0, 1, 0);
											unk_0x03F73D35E5AC583A(Local_3505[2 /*2*/], 8, 0, 0, 0);
											break;
										
										case 3:
											unk_0x03F73D35E5AC583A(Local_3505[3 /*2*/], 0, 0, 0, 0);
											unk_0x03F73D35E5AC583A(Local_3505[3 /*2*/], 3, 0, 0, 0);
											unk_0x03F73D35E5AC583A(Local_3505[3 /*2*/], 4, 0, 0, 0);
											unk_0x03F73D35E5AC583A(Local_3505[3 /*2*/], 8, 0, 0, 0);
											unk_0x03F73D35E5AC583A(Local_3505[3 /*2*/], 11, 0, 0, 0);
											break;
										
										case 4:
											unk_0x03F73D35E5AC583A(Local_3505[4 /*2*/], 0, 1, 0, 0);
											unk_0x03F73D35E5AC583A(Local_3505[4 /*2*/], 2, 1, 1, 0);
											unk_0x03F73D35E5AC583A(Local_3505[4 /*2*/], 3, 1, 0, 0);
											unk_0x03F73D35E5AC583A(Local_3505[4 /*2*/], 4, 0, 0, 0);
											unk_0x03F73D35E5AC583A(Local_3505[4 /*2*/], 5, 1, 1, 0);
											unk_0x03F73D35E5AC583A(Local_3505[4 /*2*/], 8, 0, 0, 0);
											break;
										
										case 5:
											unk_0x03F73D35E5AC583A(Local_3505[5 /*2*/], 0, 1, 0, 0);
											unk_0x03F73D35E5AC583A(Local_3505[5 /*2*/], 2, 1, 1, 0);
											unk_0x03F73D35E5AC583A(Local_3505[5 /*2*/], 3, 0, 2, 0);
											unk_0x03F73D35E5AC583A(Local_3505[5 /*2*/], 4, 0, 0, 0);
											unk_0x03F73D35E5AC583A(Local_3505[5 /*2*/], 5, 0, 2, 0);
											unk_0x03F73D35E5AC583A(Local_3505[5 /*2*/], 8, 0, 0, 0);
											break;
										
										case 6:
											unk_0x03F73D35E5AC583A(Local_3505[6 /*2*/], 0, 0, 0, 0);
											unk_0x03F73D35E5AC583A(Local_3505[6 /*2*/], 2, 0, 1, 0);
											unk_0x03F73D35E5AC583A(Local_3505[6 /*2*/], 3, 1, 1, 0);
											unk_0x03F73D35E5AC583A(Local_3505[6 /*2*/], 4, 0, 0, 0);
											unk_0x03F73D35E5AC583A(Local_3505[6 /*2*/], 5, 0, 0, 0);
											unk_0x03F73D35E5AC583A(Local_3505[6 /*2*/], 8, 0, 0, 0);
											break;
										
										case 7:
											unk_0x03F73D35E5AC583A(Local_3505[7 /*2*/], 0, 0, 0, 0);
											unk_0x03F73D35E5AC583A(Local_3505[7 /*2*/], 2, 1, 0, 0);
											unk_0x03F73D35E5AC583A(Local_3505[7 /*2*/], 3, 0, 0, 0);
											unk_0x03F73D35E5AC583A(Local_3505[7 /*2*/], 4, 0, 0, 0);
											unk_0x03F73D35E5AC583A(Local_3505[7 /*2*/], 5, 0, 0, 0);
											unk_0x03F73D35E5AC583A(Local_3505[7 /*2*/], 8, 0, 0, 0);
											break;
										
										case 8:
											unk_0x03F73D35E5AC583A(Local_3505[8 /*2*/], 0, 1, 1, 0);
											unk_0x03F73D35E5AC583A(Local_3505[8 /*2*/], 3, 0, 0, 0);
											unk_0x03F73D35E5AC583A(Local_3505[8 /*2*/], 4, 1, 2, 0);
											unk_0x03F73D35E5AC583A(Local_3505[8 /*2*/], 8, 0, 0, 0);
											unk_0x03F73D35E5AC583A(Local_3505[8 /*2*/], 11, 1, 2, 0);
											break;
										}
								}
								unk_0x887F4488DA99FD21(iVar1);
								bVar0 = true;
							}
						}
					}
				}
			}
			else if ((unk_0x48E480685981C7D4() - iLocal_3252) > iVar6)
			{
				if (func_20(Local_3505[iVar7 /*2*/]))
				{
					switch (Local_3505[iVar7 /*2*/].f_1)
					{
						case 4:
							if (func_369(Local_3505[iVar7 /*2*/], Param0, 5f) || func_370(Local_3482.f_0, Local_3505[iVar7 /*2*/], 8f))
							{
								unk_0x492E306B5A7C779A(Local_3505[iVar7 /*2*/], -1);
								unk_0x1D15D99A10A15334(Local_3505[iVar7 /*2*/], 1);
								Local_3505[iVar7 /*2*/].f_1 = 6;
							}
							break;
						
						case 5:
							break;
						
						case 6:
							if ((unk_0xADBE95599A01932F(unk_0x81873881071CD9FE()) || unk_0xE8039CE2181EACCB(unk_0x1329891157A54C63(), Local_3505[iVar7 /*2*/])) || unk_0x2449A722A5E85855(unk_0x1329891157A54C63(), Local_3505[iVar7 /*2*/]))
							{
								if (unk_0xFA1212DE7C455679(Local_3505[iVar7 /*2*/], 474215631) != 1 && unk_0xFA1212DE7C455679(Local_3505[iVar7 /*2*/], 474215631) != 0)
								{
									unk_0x492E306B5A7C779A(Local_3505[iVar7 /*2*/], -1);
								}
							}
							else if (!func_369(Local_3505[iVar7 /*2*/], Param0, 250f))
							{
								func_52(&(Local_3505[iVar7 /*2*/]), 0);
								Local_3505[iVar7 /*2*/].f_1 = 7;
							}
							break;
						}
					}
			}
			iVar7++;
		}
	}
	if ((unk_0x48E480685981C7D4() - iLocal_3252) > iVar6)
	{
		iLocal_3252 = unk_0x48E480685981C7D4();
	}
}

bool func_369(int iParam0, struct<3> Param1, float fParam4)
{
	return unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(iParam0, 1), Param1) <= (fParam4 * fParam4);
}

bool func_370(int iParam0, int iParam1, float fParam2)
{
	return unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(iParam0, 1), unk_0xB6AE0DAE06D56288(iParam1, 1)) <= (fParam2 * fParam2);
}

void func_371(float fParam0)
{
	int iVar0;
	
	switch (iLocal_3258)
	{
		case 0:
			if (fParam0 > 5000f)
			{
				unk_0x536B53396BA193B3(-1332.351f, -763.4576f, 10f, -1229.142f, -654.3546f, 42f);
				iLocal_3258++;
			}
			break;
		
		case 1:
			if (fParam0 > 10000f)
			{
				unk_0x536B53396BA193B3(-1274.148f, -842.6357f, 10f, -1139.836f, -703.7437f, 42f);
				iLocal_3258++;
			}
			break;
		
		case 2:
			if (fParam0 > 40000f)
			{
				iVar0 = 0;
				while (iVar0 <= 4)
				{
					unk_0xE91F714E010C7127(uLocal_3289[iVar0], 0);
					iVar0++;
				}
				unk_0x0C17E2FCF3ABF5A3(-668.3635f, -658.3801f, 27.43382f, -440.022f, -657.4238f, 40.25127f, 40f, 0, 0, 1);
				iLocal_3258++;
			}
			break;
		
		case 3:
			if (fParam0 > 54000f)
			{
				iVar0 = 0;
				while (iVar0 <= 4)
				{
					unk_0xE91F714E010C7127(uLocal_3289[iVar0], 0);
					iVar0++;
				}
				if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -513.4877f, -598.4955f, 30.89824f, -695.001f, -593.8384f, 19.30782f, 60f, 0, 1, 0) || unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -518.4041f, -622.8293f, 32.30106f, -608.4054f, -622.3588f, 26.78756f, 11f, 0, 1, 0))
				{
					unk_0xB36217502E9BD236(-668.3635f, -658.3801f, 27.43382f, -440.022f, -657.4238f, 40.25127f, 40f, 0, 0, 0, 0, 0);
					unk_0x984F8E3A66FFFEE5(-497.2258f, -710.6161f, 32.22013f, 5.85f, 0);
					unk_0x984F8E3A66FFFEE5(-498.1823f, -719.3134f, 32.21197f, 2.15f, 0);
					unk_0x984F8E3A66FFFEE5(-497.9032f, -724.9741f, 32.21197f, 3.8f, 0);
					unk_0x984F8E3A66FFFEE5(-499.5668f, -731.9666f, 32.21197f, 7.3f, 0);
				}
				unk_0xF47DE13A08D86AB8(-496.2885f, -681.5599f, 25f, -481.5988f, -668.7411f, 38f, 0, 0);
				unk_0x536B53396BA193B3(-496.2885f, -681.5599f, 25f, -481.5988f, -668.7411f, 38f);
				uLocal_3289[0] = unk_0x13705C66F125D98D(-497.2199f, -679.9771f, 22.0126f, -486.8124f, -672.0134f, 41.80794f, 0, 1, 1, 1);
				uLocal_3289[1] = unk_0x13705C66F125D98D(-489.7285f, -680.7455f, 22.0126f, -497.1978f, -690.007f, 41.80794f, 0, 1, 1, 1);
				iLocal_3258++;
			}
			break;
		
		case 4:
			if (fParam0 > 61000f)
			{
				iVar0 = 0;
				while (iVar0 <= 4)
				{
					unk_0xE91F714E010C7127(uLocal_3289[iVar0], 0);
					iVar0++;
				}
				unk_0xC3A1174645E71AB9(-668.3635f, -658.3801f, 27.43382f, -440.022f, -657.4238f, 40.25127f, 40f, 1);
				unk_0x536B53396BA193B3(-508.7908f, -764.6354f, 28f, -488.0437f, -702.8006f, 38f);
				uLocal_3289[0] = unk_0x13705C66F125D98D(-503.0949f, -754.9647f, 29f, -494.7944f, -730.1296f, 37f, 0, 1, 1, 1);
				iLocal_3258++;
			}
			break;
		
		case 5:
			if (fParam0 > 65000f)
			{
				iVar0 = 0;
				while (iVar0 <= 4)
				{
					unk_0xE91F714E010C7127(uLocal_3289[iVar0], 0);
					iVar0++;
				}
				unk_0x8DBC0C86D2397C6A(-496.2885f, -681.5599f, 25f, -481.5988f, -668.7411f, 38f, 0);
				unk_0xF47DE13A08D86AB8(-463.2153f, -829.0475f, 22.4812f, -445.4645f, -813.1011f, 36.56588f, 0, 0);
				unk_0x536B53396BA193B3(-463.2153f, -829.0475f, 22.4812f, -445.4645f, -813.1011f, 36.56588f);
				uLocal_3289[0] = unk_0x13705C66F125D98D(-497.2199f, -679.9771f, 22.0126f, -486.8124f, -672.0134f, 41.80794f, 0, 1, 1, 1);
				iLocal_3258++;
			}
			break;
		
		case 6:
			if (fParam0 > 75000f)
			{
				unk_0x8DBC0C86D2397C6A(-463.2153f, -829.0475f, 22.4812f, -445.4645f, -813.1011f, 36.56588f, 0);
				uLocal_3289[1] = unk_0x13705C66F125D98D(291.5848f, -588.8806f, 37f, 303.7603f, -579.5882f, 48f, 0, 1, 1, 1);
				iLocal_3258++;
			}
			break;
		
		case 7:
			if (fParam0 > 114500f)
			{
				func_288(1);
				iLocal_3258++;
			}
			break;
	}
}

void func_372()
{
	if (!iLocal_3208)
	{
		if (fLocal_3265 > (114436f - 4000f))
		{
			unk_0x9D2B95F4020E5347("NIGEL_02_CRASH_A", 0);
			unk_0x9D2B95F4020E5347("NIGEL_02_CRASH_B", 0);
			unk_0x9D2B95F4020E5347("PANIC_WALLA_INTERIOR", 0);
			if ((unk_0x9D2B95F4020E5347("NIGEL_02_CRASH_A", 0) && unk_0x9D2B95F4020E5347("NIGEL_02_CRASH_B", 0)) && unk_0x9D2B95F4020E5347("PANIC_WALLA_INTERIOR", 0))
			{
				iLocal_3208 = 1;
			}
		}
	}
	else
	{
		switch (iLocal_3246)
		{
			case 0:
				if (fLocal_3265 >= 114436f)
				{
					unk_0x5A24D808FBE871F7(-1, "DOOR_CRASH", 299.5664f, -584.6757f, 42.302f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					iLocal_3246++;
				}
				break;
			
			case 1:
				if (fLocal_3265 >= 114936f)
				{
					unk_0x5A24D808FBE871F7(-1, "SCREAMS", 310.5149f, -595.4158f, 42.302f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					unk_0xF50BA10DB7897962();
					unk_0x5A24D808FBE871F7(-1, "PANIC_WALLA", 316.4345f, -589.3902f, 42.2919f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					iLocal_3246++;
				}
				break;
			
			case 2:
				if (fLocal_3265 >= 117166f)
				{
					unk_0x5A24D808FBE871F7(-1, "WALL_CRASH", 325.66f, -589.01f, 42.3f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					iLocal_3246++;
				}
				break;
			
			case 3:
				if (fLocal_3265 >= 117736f)
				{
					unk_0x5A24D808FBE871F7(-1, "WALL_CRASH", 330.13f, -585.72f, 42.42f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					iLocal_3246++;
				}
				break;
			
			case 4:
				if (fLocal_3265 >= 118186f)
				{
					unk_0x5A24D808FBE871F7(-1, "SCREAMS", 331.7845f, -578.5184f, 42.3167f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					unk_0x5A24D808FBE871F7(-1, "PANIC_WALLA", 354.6585f, -584.2177f, 42.315f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					iLocal_3246++;
				}
				break;
			
			case 5:
				if (fLocal_3265 >= 118496f)
				{
					unk_0x5A24D808FBE871F7(-1, "WALL_CRASH", 337.89f, -582.38f, 42.33f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					iLocal_3246++;
				}
				break;
			
			case 6:
				if (fLocal_3265 >= 120986f)
				{
					unk_0x5A24D808FBE871F7(-1, "WINDOW_CRASH", 364.64f, -595.43f, 42.54f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					iLocal_3246++;
				}
				break;
			
			default:
				break;
			}
	}
}

void func_373()
{
	if (!func_45() && bLocal_3168)
	{
		if (iLocal_3542 == 0)
		{
			if (fLocal_3265 >= 99000f)
			{
				if (func_311(Local_3555, 308.9679f, -591.075f, 43.29187f, 500f))
				{
					if (!unk_0x86CCCD2FAE9D5E65(Local_3273.f_0))
					{
						unk_0x32A12757CBF48A33(Local_3273.f_7);
						if (unk_0x33ACB874CECA2D4B(Local_3273.f_7))
						{
							Local_3273.f_0 = unk_0xF364195A57BB7AE3(Local_3273.f_7, Local_3273.f_1, 1, 1, 0);
							if (func_10(Local_3273.f_0))
							{
								unk_0x3A45EB0810EBE71C(Local_3273.f_0, Local_3273.f_4, 2, 1);
								unk_0xB901CB880393ADF7(Local_3273.f_0, Local_3273.f_1, 0, 0, 1);
								unk_0xA8F22633ACC22189(Local_3273.f_0, 1);
								unk_0x887F4488DA99FD21(Local_3273.f_7);
								iLocal_3542 = 1;
							}
						}
					}
				}
			}
		}
		else if (iLocal_3542 == 1)
		{
			if (fLocal_3265 >= 114436f)
			{
				if (unk_0x86CCCD2FAE9D5E65(Local_3273.f_0))
				{
					func_51(&Local_3273);
					iLocal_3542 = 2;
				}
			}
		}
		else if (iLocal_3542 == 2)
		{
		}
		if (iLocal_3248 == 0)
		{
			if (fLocal_3265 >= 99000f)
			{
				if (func_311(Local_3555, 308.9679f, -591.075f, 43.29187f, 500f))
				{
					if (iLocal_3262 > 3)
					{
						uLocal_3284 = unk_0x4A150E93ADFB61C8(299.4302f, -584.8925f, 42.2629f, 100f, "DES_hospitaldoors");
						if (unk_0x3CCB36EDF309ECF7(uLocal_3284))
						{
							unk_0x53D662DFECF19C69(uLocal_3284, 11);
							iLocal_3248++;
						}
					}
				}
			}
		}
		else if (iLocal_3248 == 1)
		{
			if (unk_0x3CCB36EDF309ECF7(uLocal_3284))
			{
				if (unk_0x0226F42B42D2C7EF(uLocal_3284) == 5)
				{
					if (fLocal_3265 >= 114436f)
					{
						unk_0x53D662DFECF19C69(uLocal_3284, 6);
						iLocal_3248++;
					}
				}
				else if (unk_0x0226F42B42D2C7EF(uLocal_3284) != 4)
				{
					unk_0x53D662DFECF19C69(uLocal_3284, 4);
				}
			}
			else
			{
				iLocal_3248 = (iLocal_3248 - 1);
			}
		}
	}
}

void func_374()
{
	unk_0x295DC04FC13E025B("rcmnigel2");
	if (func_10(Local_3496.f_0))
	{
		unk_0x5CC9D6711FE01F0D(Local_3496.f_0);
		unk_0xA5F9A8EE8A45DD7E(Local_3496.f_0, 0);
		unk_0xA8F22633ACC22189(Local_3496.f_0, 1);
		unk_0x8F26EC305B587F81(Local_3496.f_0, 0);
		unk_0x5C4323DE75B3DA5B(Local_3496.f_0, 1);
		unk_0x686D6CDC14C4BA6C(Local_3496.f_0, 1, 1);
		unk_0x7CE2C58F2922FB0F(Local_3496.f_0, 1f);
		unk_0xE61FF1947C0507EB(Local_3496.f_0, 0f);
	}
	if (func_20(Local_3482.f_0))
	{
		func_362(1090519040);
		if (unk_0x4DC6EF945236C0F7(Local_3482.f_0) > 110)
		{
			unk_0x9765BF567DB87B5F(Local_3482.f_0, 110);
			unk_0x88ED7588393C4981(Local_3482.f_0, 1);
		}
	}
	if (!unk_0x547A2AA158CA2804(393.38f, -617.53f, 27.91f, 30f))
	{
		unk_0x984F8E3A66FFFEE5(393.38f, -617.53f, 27.91f, 35f, 0);
		unk_0x82119F022C669D9E(393.38f, -617.53f, 27.91f, 8f, 0);
	}
}

void func_375()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iLocal_2830;
	iVar1 = iLocal_3003;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (iLocal_1318[iVar2] > 0)
		{
			unk_0x4855165A2773595C(iLocal_1318[iVar2], sLocal_3295);
		}
		iVar2++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (iLocal_1576[iVar2] > 0)
		{
			unk_0x4855165A2773595C(iLocal_1576[iVar2], sLocal_3295);
		}
		iVar2++;
	}
}

void func_376()
{
	iLocal_133 = 1;
}

void func_377()
{
	if (!iLocal_3228)
	{
		if (fLocal_3265 > 124136f)
		{
			if (func_20(Local_3482.f_0))
			{
				if (unk_0x4DC6EF945236C0F7(Local_3482.f_0) < 200)
				{
					unk_0x9765BF567DB87B5F(Local_3482.f_0, 200);
				}
			}
			if (func_13(Local_3496.f_0))
			{
				unk_0x9765BF567DB87B5F(Local_3496.f_0, 1000);
				if (!unk_0x1E934CB6473D0B93(Local_3496.f_0, 4))
				{
					unk_0xBACAE7435A25DB26(Local_3496.f_0, 4, 1);
				}
				unk_0xDD213338390D43E1(Local_3496.f_0, 1);
				unk_0xBD7D63DC77703BAC(Local_3496.f_0, 0);
				unk_0xBD7D63DC77703BAC(Local_3496.f_0, 1);
				unk_0xCF2CCDA04CB4622C(Local_3496.f_0);
				unk_0xFFD977134FEB8B80(Local_3496.f_0, 0f, 1f, 0.1f, 800f, 1850f, 1);
				unk_0xFFD977134FEB8B80(Local_3496.f_0, -0.2f, 1f, 0.5f, 50f, 650f, 1);
				unk_0xFFD977134FEB8B80(Local_3496.f_0, -0.7f, -0.2f, 0.3f, 50f, 500f, 1);
				iLocal_3228 = 1;
			}
		}
	}
}

void func_378()
{
	if (((((((((((fLocal_3265 > 3000f && fLocal_3265 < 3800f) || (fLocal_3265 > 14750f && fLocal_3265 < 15250f)) || (fLocal_3265 > 28500f && fLocal_3265 < 29400f)) || (fLocal_3265 > 34000f && fLocal_3265 < 35250f)) || (fLocal_3265 > 38800f && fLocal_3265 < 41000f)) || (fLocal_3265 > 47000f && fLocal_3265 < 48300f)) || (fLocal_3265 > 56000f && fLocal_3265 < 57200f)) || (fLocal_3265 > 66750f && fLocal_3265 < 67250f)) || (fLocal_3265 > 68500f && fLocal_3265 < 70500f)) || (fLocal_3265 > 101500f && fLocal_3265 < 102500f)) || (fLocal_3265 > 114500f && fLocal_3265 < 116500f))
	{
		unk_0x1F501FD3B3C3CF73(Local_3496.f_0, 1);
	}
	if ((((((fLocal_3265 > 6500f && fLocal_3265 < 7000f) || (fLocal_3265 > 7500f && fLocal_3265 < 8500f)) || (fLocal_3265 > 10500f && fLocal_3265 < 11250f)) || (fLocal_3265 > 11750f && fLocal_3265 < 12250f)) || (fLocal_3265 > 13250f && fLocal_3265 < 13500f)) || (fLocal_3265 > 14000f && fLocal_3265 < 14500f))
	{
		unk_0xD20C63E09A40C388(Local_3496.f_0);
	}
}

void func_379(float fParam0, float fParam1)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	
	bVar0 = true;
	if (bVar0)
	{
		if (func_13(Local_3489.f_0))
		{
			fVar1 = *fParam0;
			fVar2 = 9f;
			fVar3 = 20f;
			fVar4 = 36f;
			fVar5 = ((200f / 100f) * (0.7f * 100f));
			fVar6 = 30f;
			fVar7 = 0.7f;
			fVar8 = 0.45f;
			fVar9 = 1.6f;
			fVar10 = 0.04f;
			if (fParam1 > 0f && fParam1 < 6000f)
			{
				fVar2 = 1f;
				fVar3 = 10f;
				fVar4 = 22f;
				fVar6 = 45f;
				fVar9 = 1f;
				fVar10 = 0.02f;
			}
			else if (fParam1 > 12000f && fParam1 < 20000f)
			{
				fVar2 = 10.5f;
				fVar3 = 22f;
				fVar6 = 15f;
				fVar10 = 0.05f;
			}
			else if (fParam1 > 31000f && fParam1 < 35500f)
			{
				fVar2 = 9f;
				fVar3 = 20f;
				fVar6 = 20f;
				fVar9 = 1.8f;
			}
			else if (fParam1 > 37000f && fParam1 < 42500f)
			{
				fVar2 = 8f;
				fVar3 = 21f;
			}
			else if (fParam1 > 54500f && fParam1 < 58000f)
			{
				fVar2 = 8f;
				fVar3 = 22f;
			}
			else if (fParam1 > 58000f && fParam1 < 63500f)
			{
				fVar2 = 15f;
				fVar3 = 22f;
				fVar10 = 0.35f;
			}
			else if (fParam1 > 63500f && fParam1 < 72500f)
			{
				fVar2 = 10f;
				fVar3 = 20f;
				fVar4 = 30f;
			}
			else if (fParam1 > 72500f && fParam1 < 81500f)
			{
				fVar4 = 30f;
			}
			else if (fParam1 > 81500f && fParam1 < 84000f)
			{
				fVar4 = 25f;
			}
			else if (fParam1 > 88000f && fParam1 < 96500f)
			{
				fVar4 = 30f;
				fVar6 = 20f;
				if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -423.2351f, -528.1853f, 22.33451f, -234.6718f, -527.774f, 30.57916f, 27f, 0, 1, 0))
				{
					fVar2 = 20f;
					fVar3 = 35f;
					fVar4 = 60f;
					fVar6 = 15f;
				}
			}
			else if (fParam1 > 96500f && fParam1 < 102500f)
			{
				fVar2 = 15f;
				fVar3 = 20f;
				fVar4 = 25f;
				fVar6 = 20f;
				fVar10 = 0.35f;
			}
			else if (fParam1 > 102500f && fParam1 < 107500f)
			{
				fVar2 = 15f;
				fVar3 = 25f;
				fVar4 = 40f;
			}
			else if (fParam1 > 107500f && fParam1 < 110500f)
			{
				fVar2 = 17f;
				fVar3 = 30f;
				fVar4 = 50f;
				fVar9 = 1.9f;
			}
			else if (fParam1 > 110500f && fParam1 < 114000f)
			{
				fVar2 = 20f;
				fVar3 = 35f;
				fVar4 = 55f;
				fVar9 = 1.9f;
			}
			else if (fParam1 > 114500f && fParam1 < 118000f)
			{
				fVar2 = 22f;
				fVar3 = 37f;
				fVar4 = 60f;
				fVar9 = 2f;
			}
			else if (fParam1 > 118000f)
			{
				fVar2 = 27f;
				fVar3 = 45f;
				fVar4 = 70f;
				fVar9 = 2f;
			}
			func_387(&fVar1, &Local_3489, Local_3496.f_0, fVar2, fVar3, fVar4, fVar5, fVar6, 1f, fVar7, fVar8, fVar9, 1, 0, 1097859072, 1);
			if (fParam1 > 114500f)
			{
				if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 290.1243f, -545.2184f, 38.39701f, 448.9054f, -554.2001f, 48.65286f, 19.25f, 0, 1, 0))
				{
					fVar1 = 1.2f;
				}
				else if (fParam1 < 120000f)
				{
					fVar1 = 2.2f;
					fVar10 = 1f;
				}
			}
			func_386(fParam0, fVar1, fVar10);
		}
	}
	else
	{
		fVar11 = *fParam0;
		fVar12 = 6f;
		fVar13 = 18f;
		fVar14 = 35f;
		fVar15 = 1.5f;
		if (fParam1 > 37000f && fParam1 < 42500f)
		{
			fVar12 = 8f;
			fVar13 = 22f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 54500f && fParam1 < 58000f)
		{
			fVar12 = 8f;
			fVar13 = 20f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 58000f && fParam1 < 63500f)
		{
			fVar13 = 15f;
			fVar14 = 22f;
		}
		else if (fParam1 > 63500f && fParam1 < 72500f)
		{
			fVar12 = 10f;
			fVar13 = 20f;
			fVar14 = 30f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 72500f && fParam1 < 81500f)
		{
			fVar14 = 30f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 81500f && fParam1 < 84000f)
		{
			fVar14 = 25f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 88000f && fParam1 < 96500f)
		{
			fVar14 = 20f;
			fVar15 = 1.6f;
			if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -423.2351f, -528.1853f, 22.33451f, -234.6718f, -527.774f, 30.57916f, 27f, 0, 1, 0))
			{
				fVar12 = 12f;
				fVar13 = 30f;
				fVar14 = 45f;
				fVar15 = 1.6f;
			}
		}
		else if (fParam1 > 96500f && fParam1 < 102500f)
		{
			fVar14 = 20f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 102500f && fParam1 < 107500f)
		{
			fVar12 = 12f;
			fVar13 = 25f;
			fVar14 = 40f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 107500f && fParam1 < 110500f)
		{
			fVar12 = 14f;
			fVar13 = 30f;
			fVar14 = 50f;
			fVar15 = 1.6f;
		}
		else if (fParam1 > 110500f && fParam1 < 114000f)
		{
			fVar12 = 20f;
			fVar13 = 35f;
			fVar14 = 55f;
			fVar15 = 1.9f;
		}
		else if (fParam1 > 114500f && fParam1 < 118000f)
		{
			fVar12 = 40f;
			fVar13 = 50f;
			fVar14 = 70f;
			fVar15 = 3f;
		}
		else if (fParam1 > 118000f)
		{
			fVar12 = 20f;
			fVar13 = 35f;
			fVar14 = 65f;
			fVar15 = 2f;
		}
		func_380(Local_3496.f_0, unk_0x81873881071CD9FE(), &fVar11, 1f, fVar12, fVar13, fVar14, fVar15, 1065353216, 1060320051, 1);
		if (fParam1 > 114500f && fParam1 < 118000f)
		{
			fVar11 = 2.2f;
		}
		if (fParam1 > 114500f)
		{
			if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 290.1243f, -545.2184f, 38.39701f, 448.9054f, -554.2001f, 48.65286f, 19.25f, 0, 1, 0))
			{
				fVar11 = 1.2f;
			}
		}
		*fParam0 = fVar11;
	}
}

void func_380(int iParam0, int iParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, bool bParam10)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	
	if (iLocal_135 == 0)
	{
		if (*uParam2 < fParam3)
		{
			*uParam2 = fParam3;
			iLocal_135 = 1;
		}
	}
	if (fParam8 < 0f)
	{
		fParam8 = fLocal_1308;
	}
	fVar0 = (fParam3 * fParam7);
	if (!fVar0 > fParam3)
	{
		fVar0 = (fParam3 + 0.1f);
	}
	fVar5 = (fParam3 * fParam9);
	fVar6 = (((fParam6 - fParam5) * 0.4f) + fParam5);
	fVar2 = func_385(iParam0, iParam1);
	if (fVar2 < 0f)
	{
		fVar2 = (fVar2 * -1f);
	}
	fVar3 = fVar2;
	if (fVar3 < fParam4)
	{
		fVar3 = fParam4;
	}
	if (fVar3 > fVar6)
	{
		fVar3 = fVar6;
	}
	fVar4 = fParam3;
	if (!unk_0x930F8FBB8E9537CC(iParam1))
	{
		if (func_383(iParam1, iParam0))
		{
			if (unk_0xE5AB05962FA1FF3F(iParam1, 0))
			{
				fVar4 = fVar0;
			}
			else if (fVar2 < 50f)
			{
				fVar4 = fParam3;
			}
			else
			{
				fVar4 = fVar0;
			}
		}
		else if (fVar2 < fParam5)
		{
			if (func_382(iParam0, iParam1) < fParam5)
			{
				fVar1 = func_381(iParam0, iParam1);
				fVar1 = (fVar1 + -15f);
				if (fVar1 < 0f)
				{
					fVar1 = 0f;
				}
				if (fVar1 > 75f)
				{
					fVar1 = 75f;
				}
				fVar7 = ((75f - fVar1) / 75f);
			}
			else
			{
				fVar7 = 1f;
			}
			fVar4 = ((((((fParam5 - fParam4) - (fVar3 - fParam4)) / (fParam5 - fParam4)) * (fVar0 - fParam3)) * fVar7) + fParam3);
		}
		else if (fVar2 > fParam6)
		{
			fVar4 = fVar5;
			iLocal_136 = 1;
		}
		else if (iLocal_136)
		{
			if (fVar2 < fVar6)
			{
				fVar4 = fParam3;
				iLocal_136 = 0;
			}
			else
			{
				fVar4 = fVar5;
			}
		}
		else
		{
			fVar4 = fParam3;
		}
	}
	fVar1 = (fVar4 - *uParam2);
	if (fVar1 > 0f)
	{
		fVar1 = unk_0x8D51D24D214E2FF2();
		fVar8 = ((fLocal_1315 * fParam3) * fVar1);
		fVar1 = (fVar4 - *uParam2);
		if (fVar1 > fVar8)
		{
			fVar1 = fVar8;
		}
		*uParam2 = (*uParam2 + fVar1);
	}
	else
	{
		fVar1 = unk_0x8D51D24D214E2FF2();
		fVar8 = ((fLocal_1316 * fParam3) * fVar1);
		fVar1 = (fVar4 - *uParam2);
		if (fVar1 < (fVar8 * -1f))
		{
			fVar1 = (fVar8 * -1f);
		}
		*uParam2 = (*uParam2 + fVar1);
	}
	if (bParam10)
	{
		if (!unk_0x5FEB513A4402FD59(iParam1))
		{
			if (unk_0xE5AB05962FA1FF3F(iParam1, 0))
			{
				iVar9 = unk_0xE68E6B44DABA9C05(iParam1, 0);
				if (!unk_0x930F8FBB8E9537CC(iVar9))
				{
					iVar10 = unk_0x14B7103DBD149FFE(iVar9);
					if (unk_0x61A26017817C6AED(iVar10) || unk_0xC5ABD699DDC9D5A0(iVar10))
					{
						if (unk_0x7404950238A154C2(iVar9, 0))
						{
							fVar1 = fVar4;
							if (fVar1 < fParam3)
							{
								fVar1 = fParam3;
							}
							fVar1 = (fVar1 - fParam3);
							fVar1 = (fVar1 / (fVar0 - fParam3));
							fVar1 = (fVar1 * fParam8);
							fVar1 = (fVar1 * (fLocal_1306 - fLocal_1307));
							fVar1 = (fVar1 + fLocal_1307);
							fLocal_1305 = fVar1;
							if (fLocal_1305 < fLocal_1307)
							{
								fLocal_1305 = fLocal_1307;
							}
							if (fLocal_1305 > fLocal_1306)
							{
								fLocal_1305 = fLocal_1306;
							}
							unk_0x81DD7930F7EBF531(unk_0x1329891157A54C63(), fLocal_1305);
						}
					}
				}
			}
		}
	}
}

float func_381(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	float fVar12;
	int iVar13;
	
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		Var0.f_0 = unk_0x749919D02D90787B(iParam0);
		Var0.f_1 = unk_0x488F682E5C1E494F(iParam0);
	}
	if (!unk_0x930F8FBB8E9537CC(iParam1))
	{
		Var3 = { unk_0xB6AE0DAE06D56288(iParam1, 1) };
		if (unk_0xE5AB05962FA1FF3F(iParam1, 0))
		{
			iVar13 = unk_0xE68E6B44DABA9C05(iParam1, 0);
			Var9.f_0 = unk_0x749919D02D90787B(iVar13);
			Var9.f_1 = unk_0x488F682E5C1E494F(iVar13);
		}
		else
		{
			Var6 = { unk_0xB07F27EC3B05E4EA(iParam1, 0f, 5f, 0f) };
			Var9 = { Var6 - Var3 };
		}
	}
	fVar12 = unk_0x340B0B7228EC1565(Var0.f_0, Var0.f_1, Var9.f_0, Var9.f_1);
	return fVar12;
}

float func_382(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
	}
	if (!unk_0x930F8FBB8E9537CC(iParam1))
	{
		Var3 = { unk_0xB6AE0DAE06D56288(iParam1, 1) };
	}
	Var6 = { Var3 - Var0 };
	Var6.f_2 = 0f;
	fVar9 = unk_0x652D2EEEF1D3E62C(Var6);
	return fVar9;
}

int func_383(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	
	if (!unk_0x5FEB513A4402FD59(iParam0))
	{
		if (!unk_0x930F8FBB8E9537CC(iParam1))
		{
			if (unk_0x04C377C10639B842(iParam0, iParam1, 0))
			{
				return 0;
			}
		}
	}
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
	}
	if (unk_0x7404950238A154C2(iParam1, 0))
	{
		Var3 = { unk_0xB6AE0DAE06D56288(iParam1, 1) };
		Var6 = { unk_0xB07F27EC3B05E4EA(iParam1, 0f, 5f, 0f) };
		Var12 = { Var6 - Var3 };
	}
	Var9 = { Var3 - Var0 };
	Var9.f_2 = 0f;
	Var12.f_2 = 0f;
	fVar15 = func_384(Var9, Var12);
	if (fVar15 < 0f)
	{
		return 1;
	}
	return 0;
}

float func_384(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

float func_385(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	float fVar12;
	
	if (unk_0x7404950238A154C2(iParam0, 0))
	{
		Var0.f_0 = unk_0x749919D02D90787B(iParam0);
		Var0.f_1 = unk_0x488F682E5C1E494F(iParam0);
		Var6 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
	}
	if (!unk_0x930F8FBB8E9537CC(iParam1))
	{
		Var9 = { unk_0xB6AE0DAE06D56288(iParam1, 1) };
	}
	Var3 = { Var9 - Var6 };
	fVar12 = unk_0x340B0B7228EC1565(Var3.f_0, Var3.f_1, Var0.f_0, Var0.f_1);
	fVar12 = (fVar12 + -90f);
	if (fVar12 < 0f)
	{
		fVar12 = (fVar12 * -1f);
	}
	Var3.f_2 = 0f;
	return (unk_0x652D2EEEF1D3E62C(Var3) * unk_0x0BADBFA3B172435F(fVar12));
}

void func_386(var uParam0, float fParam1, float fParam2)
{
	*uParam0 = (*uParam0 + ((((fParam1 - *uParam0) * fParam2) * 30f) * unk_0x0000000050597EE2()));
}

void func_387(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, float fParam13, float fParam14, int iParam15)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	float fVar14;
	float fVar15;
	
	Var0 = { unk_0xB6AE0DAE06D56288(*iParam1, 1) };
	Var3 = { unk_0xB6AE0DAE06D56288(iParam2, 1) };
	Var6 = { unk_0xFF603DE3EBE2C5F9(iParam2, Var0) };
	fVar9 = unk_0x2A488C176D52CCA5(Var0, Var3);
	fVar10 = 0f;
	fVar11 = (fParam11 - 1f);
	fVar12 = (1f - fParam9);
	if (Var6.f_1 < 1f)
	{
		if (fVar9 > fParam5)
		{
			iVar13 = 0;
			if (fVar9 > fParam6)
			{
				if (fVar9 > (fParam6 * 2f))
				{
					iVar13 = 1;
				}
				fVar9 = fParam6;
			}
			fVar10 = ((fVar9 - fParam5) / (fParam6 - fParam5));
			if (!unk_0x331E7ACCFD0869AD(iParam2) || iVar13)
			{
				*uParam0 = (fParam9 - ((fParam9 - fParam10) * fVar10));
			}
			else
			{
				*uParam0 = fParam9;
			}
		}
		else if (fVar9 > fParam4)
		{
			fVar10 = ((fVar9 - fParam4) / (fParam5 - fParam4));
			*uParam0 = (1f - (fVar12 * fVar10));
		}
		else
		{
			if (fVar9 < fParam3)
			{
				fVar9 = fParam3;
			}
			fVar10 = ((fParam4 - fVar9) / (fParam4 - fParam3));
			if (unk_0x2C3A6C25D061092B(unk_0x1329891157A54C63()) && iParam15)
			{
				*uParam0 = (1f + ((fVar10 * fVar11) * 2f));
			}
			else
			{
				*uParam0 = (1f + (fVar10 * fVar11));
			}
		}
	}
	else
	{
		if (fVar9 > fParam7)
		{
			fVar9 = fParam7;
		}
		fVar10 = (fVar9 / fParam7);
		fVar14 = (unk_0xA04824262F150982(iParam2) - unk_0xA04824262F150982(*iParam1));
		if (fVar14 > 0f)
		{
			fVar10 = (fVar10 * 0.5f);
		}
		if (unk_0x2C3A6C25D061092B(unk_0x1329891157A54C63()) && iParam15)
		{
			*uParam0 = (2f + fVar10);
		}
		else if (unk_0xA04824262F150982(*iParam1) < 5f && fVar14 > 0f)
		{
			*uParam0 = (0.6f + fVar10);
		}
		else
		{
			*uParam0 = (1f + fVar10);
		}
	}
	*uParam0 = (*uParam0 * fParam8);
	if (bParam12)
	{
		fVar15 = fParam13;
		if (unk_0x2C3A6C25D061092B(unk_0x1329891157A54C63()) && iParam15)
		{
			fParam14 = (fParam14 * 2f);
			fParam13 = (fParam13 * 2f);
		}
		if (*uParam0 > 1f)
		{
			fVar15 = (fParam13 + ((fParam14 - fParam13) * (*uParam0 - 1f)));
		}
		unk_0x1924F6B7F4080036(*iParam1, -fVar15);
	}
}

void func_388()
{
	int iVar0;
	int iVar1;
	
	if ((unk_0x48E480685981C7D4() - iLocal_3253) > 50)
	{
		if (func_13(iLocal_3003[3]))
		{
			if (fLocal_3265 > 28750f && fLocal_3265 < 29750f)
			{
				unk_0x69AA788B6BA4CB68(iLocal_3003[3], 2);
				unk_0xE8434270BB963315(iLocal_3003[3], 2f);
				if (!iLocal_3215[0])
				{
					unk_0xF5194DC958E2700A(iLocal_3003[3], 3500, unk_0x8DAF7A748E41AD46("HELDDOWN"), 0);
					iLocal_3215[0] = 1;
				}
			}
			else
			{
				unk_0x69AA788B6BA4CB68(iLocal_3003[3], 1);
				unk_0xE8434270BB963315(iLocal_3003[3], 1f);
			}
		}
		if (func_13(iLocal_3003[5]))
		{
			if (fLocal_3265 > 34500f && fLocal_3265 < 35500f)
			{
				unk_0x69AA788B6BA4CB68(iLocal_3003[5], 2);
				unk_0xE8434270BB963315(iLocal_3003[5], 2f);
				if (!iLocal_3215[1])
				{
					unk_0xF5194DC958E2700A(iLocal_3003[5], 3000, unk_0x8DAF7A748E41AD46("HELDDOWN"), 0);
					iLocal_3215[1] = 1;
				}
			}
			else
			{
				unk_0x69AA788B6BA4CB68(iLocal_3003[5], 1);
				unk_0xE8434270BB963315(iLocal_3003[5], 1f);
			}
		}
		if (func_13(iLocal_3003[8]))
		{
			if (!bLocal_3213)
			{
				bLocal_3213 = func_389(iLocal_3003[8], joaat("s_m_y_garbage"), 26);
			}
			if (fLocal_3265 > 46000f && fLocal_3265 < 47000f)
			{
				unk_0x69AA788B6BA4CB68(iLocal_3003[8], 2);
				unk_0xE8434270BB963315(iLocal_3003[8], 2f);
				if (!iLocal_3215[2])
				{
					unk_0xF5194DC958E2700A(iLocal_3003[8], 3500, unk_0x8DAF7A748E41AD46("HELDDOWN"), 0);
					iLocal_3215[2] = 1;
				}
			}
			else if (fLocal_3265 > 47500f && fLocal_3265 < 48500f)
			{
				unk_0x69AA788B6BA4CB68(iLocal_3003[8], 2);
				unk_0xE8434270BB963315(iLocal_3003[8], 2f);
			}
			else
			{
				unk_0x69AA788B6BA4CB68(iLocal_3003[8], 1);
				unk_0xE8434270BB963315(iLocal_3003[8], 1f);
			}
		}
		if (func_13(iLocal_3003[9]))
		{
			if (!bLocal_3214)
			{
				bLocal_3214 = func_389(iLocal_3003[9], joaat("a_m_y_cyclist_01"), 26);
			}
		}
		if (func_13(iLocal_3003[16]))
		{
			if (fLocal_3265 > 69000f && fLocal_3265 < 71000f)
			{
				unk_0x69AA788B6BA4CB68(iLocal_3003[16], 2);
				unk_0xE8434270BB963315(iLocal_3003[16], 2f);
				if (!iLocal_3215[3])
				{
					unk_0xF5194DC958E2700A(iLocal_3003[16], 3500, unk_0x8DAF7A748E41AD46("HELDDOWN"), 0);
					iLocal_3215[3] = 1;
				}
			}
			else
			{
				unk_0x69AA788B6BA4CB68(iLocal_3003[16], 1);
				unk_0xE8434270BB963315(iLocal_3003[16], 1f);
			}
		}
		if (func_13(iLocal_2830[17]))
		{
			if (!iLocal_3215[4])
			{
				if (fLocal_3265 > 78700f && fLocal_3265 < 79300f)
				{
					unk_0xF5194DC958E2700A(iLocal_2830[17], 3000, unk_0x8DAF7A748E41AD46("HELDDOWN"), 0);
					iLocal_3215[4] = 1;
				}
			}
		}
		if (func_13(iLocal_2830[19]))
		{
			if (!iLocal_3215[4])
			{
				if (fLocal_3265 > 79950f && fLocal_3265 < 82300f)
				{
					unk_0xF5194DC958E2700A(iLocal_2830[19], 3000, unk_0x8DAF7A748E41AD46("HELDDOWN"), 0);
					iLocal_3215[4] = 1;
				}
			}
		}
		if (func_13(iLocal_3003[20]))
		{
			if (!iLocal_3215[5])
			{
				if (fLocal_3265 > 84000f && fLocal_3265 < 84750f)
				{
					unk_0xF5194DC958E2700A(iLocal_3003[20], 3000, unk_0x8DAF7A748E41AD46("HELDDOWN"), 0);
					iLocal_3215[5] = 1;
				}
			}
		}
		if (func_13(iLocal_3003[21]))
		{
			if (fLocal_3265 > 88000f && fLocal_3265 < 90502f)
			{
				unk_0x69AA788B6BA4CB68(iLocal_3003[21], 2);
				unk_0xE8434270BB963315(iLocal_3003[21], 2f);
				if (!iLocal_3215[6])
				{
					unk_0xF5194DC958E2700A(iLocal_3003[21], 3500, unk_0x8DAF7A748E41AD46("HELDDOWN"), 0);
					iLocal_3215[6] = 1;
				}
			}
			else
			{
				unk_0x69AA788B6BA4CB68(iLocal_3003[21], 1);
				unk_0xE8434270BB963315(iLocal_3003[21], 1f);
			}
		}
		if (func_13(iLocal_3003[23]))
		{
			if (fLocal_3265 > 84800f && fLocal_3265 < 87000f)
			{
				unk_0x69AA788B6BA4CB68(iLocal_3003[23], 2);
				unk_0xE8434270BB963315(iLocal_3003[23], 2f);
				if (!iLocal_3215[7])
				{
					unk_0xF5194DC958E2700A(iLocal_3003[23], 3500, unk_0x8DAF7A748E41AD46("HELDDOWN"), 0);
					iLocal_3215[7] = 1;
				}
			}
			else
			{
				unk_0x69AA788B6BA4CB68(iLocal_3003[23], 1);
				unk_0xE8434270BB963315(iLocal_3003[23], 1f);
			}
		}
		if (func_13(iLocal_2830[21]))
		{
			if (!iLocal_3215[8])
			{
				if (fLocal_3265 > 98800f && fLocal_3265 < 99400f)
				{
					unk_0xF5194DC958E2700A(iLocal_2830[21], 2000, unk_0x8DAF7A748E41AD46("HELDDOWN"), 0);
					iLocal_3215[8] = 1;
				}
			}
		}
		if (func_13(iLocal_2830[23]))
		{
			if (fLocal_3265 > 91200f && fLocal_3265 < 92200f)
			{
				unk_0x69AA788B6BA4CB68(iLocal_2830[23], 2);
				unk_0xE8434270BB963315(iLocal_2830[23], 2f);
				if (!iLocal_3215[9])
				{
					unk_0xF5194DC958E2700A(iLocal_2830[23], 2000, unk_0x8DAF7A748E41AD46("HELDDOWN"), 0);
					iLocal_3215[9] = 1;
				}
			}
			else
			{
				unk_0x69AA788B6BA4CB68(iLocal_2830[23], 1);
				unk_0xE8434270BB963315(iLocal_2830[23], 1f);
			}
		}
		if (func_13(iLocal_3003[28]))
		{
			if (fLocal_3265 > 93500f && fLocal_3265 < 95000f)
			{
				unk_0x69AA788B6BA4CB68(iLocal_3003[28], 2);
				unk_0xE8434270BB963315(iLocal_3003[28], 2f);
				if (!iLocal_3215[10])
				{
					unk_0xF5194DC958E2700A(iLocal_3003[28], 3500, unk_0x8DAF7A748E41AD46("HELDDOWN"), 0);
					iLocal_3215[10] = 1;
				}
			}
			else
			{
				unk_0x69AA788B6BA4CB68(iLocal_3003[28], 1);
				unk_0xE8434270BB963315(iLocal_3003[28], 1f);
			}
		}
		if (func_13(iLocal_3003[29]))
		{
			if (!iLocal_3215[11])
			{
				if (fLocal_3265 > 104500f && fLocal_3265 < 105000f)
				{
					unk_0xF5194DC958E2700A(iLocal_3003[29], 2000, unk_0x8DAF7A748E41AD46("HELDDOWN"), 0);
					iLocal_3215[11] = 1;
				}
			}
		}
		if (func_13(iLocal_2932[31]))
		{
			if (!unk_0x340D0D5779173223(iLocal_2932[31], 2))
			{
				unk_0x4DBA43D6DE677017(iLocal_2932[31], 2, 0, 0);
			}
			if (!unk_0x340D0D5779173223(iLocal_2932[31], 3))
			{
				unk_0x4DBA43D6DE677017(iLocal_2932[31], 3, 0, 0);
			}
			if (!unk_0xC122B4F3141161B3(iLocal_2932[31]))
			{
				unk_0x6A8A78C1DAEC9CEB(iLocal_2932[31], 1);
			}
		}
		if (func_13(iLocal_3003[22]))
		{
			if (!unk_0xC122B4F3141161B3(iLocal_3003[22]))
			{
				unk_0x6A8A78C1DAEC9CEB(iLocal_3003[22], 1);
			}
		}
		if (func_13(iLocal_3003[19]))
		{
			iVar0 = -1;
			iVar1 = -1;
			unk_0x0D545A0BB48D8520(iLocal_3003[19], &iVar0, &iVar1);
			if (iVar0 != 1)
			{
				unk_0x69AA788B6BA4CB68(iLocal_3003[19], 2);
				unk_0xE8434270BB963315(iLocal_3003[19], 2f);
			}
			if (iLocal_3256 == -1)
			{
				if (unk_0xE20321A2D7F8960C(iLocal_3003[19]))
				{
					iLocal_3256 = unk_0xEDDCCC3D357A50F8();
					unk_0x058526005957A956(iLocal_3256, "FAKE_REVS_VEHICLE_02", iLocal_3003[19], "NIGEL_02_SOUNDSET", 0, 0);
				}
			}
			else if (!unk_0xBDC7EB9D855C9610(iLocal_3256))
			{
				if (!unk_0xE20321A2D7F8960C(iLocal_3003[19]))
				{
					unk_0x98A5E5B909F1B162(iLocal_3256);
					unk_0x54206B7CE6FF2360(iLocal_3256);
					iLocal_3256 = -1;
				}
			}
		}
		iLocal_3253 = unk_0x48E480685981C7D4();
	}
}

int func_389(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x7404950238A154C2(iParam0, 0))
	{
		bVar0 = false;
		iVar1 = unk_0xB0B9E53CEFDB16AA(iParam0, -1);
		if (unk_0x86CCCD2FAE9D5E65(iVar1))
		{
			if (iVar1 != unk_0x81873881071CD9FE())
			{
				if (unk_0x14B7103DBD149FFE(iVar1) != iParam1)
				{
					bVar0 = true;
				}
				else
				{
					return 1;
				}
			}
		}
		else
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			unk_0x32A12757CBF48A33(iParam1);
			if (unk_0x33ACB874CECA2D4B(iParam1))
			{
				if (unk_0x86CCCD2FAE9D5E65(iVar1))
				{
					unk_0xD768713E73165208(iVar1, 1, 0);
					unk_0xF210D34D7F7152ED(&iVar1);
				}
				iVar2 = unk_0x4D135F3066A9BF9C(iParam0, iParam2, iParam1, -1, 0, 0);
				if (func_391(unk_0x14B7103DBD149FFE(iParam0)))
				{
					unk_0x506A601663C5417C(iVar2, iLocal_2598);
				}
				unk_0x6BC3C6046951661E(iVar2, 0);
				unk_0x1D15D99A10A15334(iVar2, 1);
				unk_0x4351E8D40CE67994(iVar2, 1);
				unk_0x88ED7588393C4981(iVar2, 0);
				unk_0xCE566DBDCACD245E(iVar2, 32, 0);
				if (bLocal_152)
				{
					unk_0x7F5F0D37173E518C(iVar2, 8192, 1);
					unk_0x7F5F0D37173E518C(iVar2, 65536, 1);
					unk_0x7F5F0D37173E518C(iVar2, 2, 0);
					unk_0x0E465BF3FB5C8001(iParam0, 1);
				}
				unk_0x887F4488DA99FD21(iParam1);
				func_390(iVar2);
				return 1;
			}
		}
	}
	return 0;
}

void func_390(int iParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		unk_0x71A8BCA218722FA1(&iParam0);
	}
}

int func_391(int iParam0)
{
	if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("polmav")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff"))
	{
		return 1;
	}
	return 0;
}

void func_392(int iParam0, float fParam1)
{
	float fVar0;
	struct<3> Var1;
	int iVar4;
	
	fVar0 = unk_0x8D51D24D214E2FF2();
	fVar0 = (fVar0 * 1000f);
	bLocal_150 = false;
	if (!bLocal_132)
	{
		if (bLocal_131)
		{
			func_413();
			if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
			{
				Var1 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
				unk_0x7C6BF0CD5D7454C9(Var1, 1000f, 1, 0, 0, 0);
			}
			bLocal_132 = true;
		}
	}
	else if (!bLocal_131)
	{
		func_89();
		bLocal_132 = false;
	}
	if (bLocal_131)
	{
		fParam1 = 1f;
		unk_0xCDE668E40D482687(0f);
	}
	if (!bLocal_125)
	{
		if (iLocal_120)
		{
			fLocal_1302 = 0f;
		}
		else
		{
			fLocal_1302 = 1f;
		}
		if (unk_0x7404950238A154C2(iParam0, 0))
		{
			if (unk_0xE20321A2D7F8960C(iParam0))
			{
				if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
				{
					if (func_383(unk_0x81873881071CD9FE(), iParam0))
					{
						iLocal_130 = 1;
					}
					else
					{
						iLocal_130 = 0;
					}
				}
				fLocal_1299 = unk_0x678BA9CA7610A13E(iParam0);
				unk_0x1248DFEEEEE716FC(iParam0, ((fParam1 * fLocal_1300) * fLocal_1302));
				if (bLocal_129)
				{
					func_412(iParam0, fLocal_1299);
					func_411(iParam0, fLocal_1309);
					if (fLocal_1304 > 1000f)
					{
						if (iLocal_1876 == 0)
						{
							func_410(iParam0, fLocal_1309);
						}
						fVar0 = ((fLocal_1299 + 4000f) + (unk_0xBBDA792448DB5A89(iLocal_1876) * 2000f));
						func_409(iParam0, fVar0, fLocal_1303);
						iLocal_1876++;
						if (iLocal_1876 > 2)
						{
							fLocal_1304 = 0f;
						}
					}
					else
					{
						iLocal_1876 = 0;
						fLocal_1304 = (fLocal_1304 + (unk_0x8D51D24D214E2FF2() * 1000f));
					}
				}
			}
		}
		iVar4 = 0;
		if (unk_0x7404950238A154C2(iParam0, 0))
		{
			if (unk_0xE20321A2D7F8960C(iParam0))
			{
				iVar4 = 1;
			}
		}
		if (fLocal_1299 == 0f || unk_0x29AFA2493D7C23D0())
		{
			iVar4 = 1;
		}
		if (iVar4 && !bLocal_137)
		{
			if (!iLocal_119)
			{
				func_406(iParam0, ((fParam1 * fLocal_1300) * fLocal_1302), 0);
				if (!iLocal_140)
				{
				}
				iLocal_140 = 0;
			}
			if (bLocal_122)
			{
				func_405(iParam0);
			}
			if (!iLocal_119)
			{
				func_395(iParam0, ((fParam1 * fLocal_1300) * fLocal_1302), 0);
			}
		}
		if (iLocal_127)
		{
			if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
			{
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
				{
					iLocal_3085 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
					Local_2555 = { unk_0xB6AE0DAE06D56288(iLocal_3085, 1) };
					unk_0xA8BCFD25BABF9DAF(iLocal_3085, &fLocal_583, &fLocal_584, &fLocal_585, &fLocal_586);
				}
			}
			iLocal_127 = 0;
		}
		if (iLocal_126)
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_3085))
			{
				func_81(iLocal_3086);
				iLocal_3086 = iLocal_3085;
			}
			if (unk_0x7404950238A154C2(iLocal_3086, 0))
			{
				unk_0xB067093BBAF0A747(iLocal_3086, Local_2555, 1, 0, 0, 1);
				unk_0x5D6F89F6DD9B0781(iLocal_3086, fLocal_583, fLocal_584, fLocal_585, fLocal_586);
			}
			fLocal_1298 = fLocal_1301;
			iLocal_119 = 1;
			iLocal_126 = 0;
		}
		if (iLocal_119)
		{
			while (!func_393(&iParam0, fLocal_1298))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_120 = 1;
		}
		if (iLocal_133)
		{
			iLocal_133 = 0;
		}
	}
}

int func_393(int iParam0, float fParam1)
{
	if (!iLocal_134)
	{
		iLocal_119 = 1;
		func_76();
		if (unk_0x7404950238A154C2(*iParam0, 0))
		{
			if (unk_0xE20321A2D7F8960C(*iParam0))
			{
				unk_0x05ACEF4F060B9B4E(*iParam0);
				unk_0x4F7552F76F378DB7(*iParam0);
			}
			if (!iLocal_1863 == -1)
			{
				while (!func_394(iParam0, iLocal_1863, fParam1, 1, 0, 0, 0, 0))
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				if (!bLocal_124)
				{
					iLocal_120 = 1;
					fLocal_1302 = 0f;
					iLocal_1864 = 0;
					iLocal_1866 = 0;
					iLocal_1865 = 0;
					iLocal_1860 = 0;
					iLocal_1861 = 0;
					iLocal_1862 = 0;
					iLocal_1867 = 0;
					iLocal_1868 = 0;
					iLocal_1869 = 0;
				}
			}
		}
		iLocal_134 = 1;
	}
	else
	{
		if (unk_0x7404950238A154C2(*iParam0, 0))
		{
			if (unk_0xE20321A2D7F8960C(*iParam0))
			{
				unk_0x1248DFEEEEE716FC(*iParam0, ((1f * fLocal_1300) * fLocal_1302));
				func_394(iParam0, iLocal_1863, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_1299 = fParam1;
		iLocal_1870 = 0;
		iLocal_1873 = 0;
		fLocal_1314 = 0f;
		fLocal_1313 = 0f;
		func_395(*iParam0, ((1f * fLocal_1300) * fLocal_1302), 1);
		func_406(*iParam0, ((1f * fLocal_1300) * fLocal_1302), 1);
		func_405(*iParam0);
		if ((iLocal_1867 == 0 && iLocal_1868 == 0) && iLocal_1869 == 0)
		{
			iLocal_120 = 0;
			iLocal_119 = 0;
			iLocal_134 = 0;
			return 1;
		}
	}
	return 0;
}

int func_394(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	float fVar0;
	
	if (iParam1 > 0)
	{
		unk_0x995DCDA796A47049(iParam1, &cLocal_2582);
		if (unk_0x498998F33897432E(iParam1, &cLocal_2582))
		{
			if (unk_0x7404950238A154C2(*uParam0, 0))
			{
				if (!unk_0xE20321A2D7F8960C(*uParam0))
				{
					unk_0xA8F22633ACC22189(*uParam0, 0);
					if (bParam4)
					{
						unk_0xFD59D9ECD844449F(*uParam0, iParam1, &cLocal_2582, 1092616192, 786603);
					}
					else
					{
						if (iParam1 != iLocal_1871 && iParam1 != iLocal_1872)
						{
							if (bParam7)
							{
								unk_0xFE508DC43429A724(*uParam0, iParam1, &cLocal_2582, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								unk_0xFE508DC43429A724(*uParam0, iParam1, &cLocal_2582, 1 | 4, 0, 786603);
							}
							else
							{
								unk_0xC8F62804B10A6701(*uParam0, iParam1, &cLocal_2582, 1);
							}
						}
						else
						{
							unk_0xC8F62804B10A6701(*uParam0, iParam1, &cLocal_2582, 1);
						}
						unk_0x0039C5B0E3E4993E(*uParam0, fParam2);
						if (bParam5)
						{
							unk_0xDC099970C8216FC4(*uParam0, 1);
						}
						return 1;
					}
				}
				else if (unk_0x579D32FAAD5CA6B8(*uParam0) == unk_0xFCFD8E6E4FB394AD(iParam1, &cLocal_2582))
				{
					fVar0 = unk_0x678BA9CA7610A13E(*uParam0);
					unk_0x0039C5B0E3E4993E(*uParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						unk_0x05ACEF4F060B9B4E(*uParam0);
						unk_0x995DCDA796A47049(iParam1, &cLocal_2582);
					}
					if (bParam5)
					{
						unk_0xDC099970C8216FC4(*uParam0, 1);
					}
					return 1;
				}
				else
				{
					unk_0x05ACEF4F060B9B4E(*uParam0);
					unk_0xA8F22633ACC22189(*uParam0, 0);
					if (bParam4)
					{
						unk_0xFD59D9ECD844449F(*uParam0, iParam1, &cLocal_2582, 1092616192, 786603);
					}
					else if (iParam1 != iLocal_1871 && iParam1 != iLocal_1872)
					{
						if (bParam7)
						{
							unk_0xFE508DC43429A724(*uParam0, iParam1, &cLocal_2582, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							unk_0xFE508DC43429A724(*uParam0, iParam1, &cLocal_2582, 1 | 4, 0, 786603);
						}
						else
						{
							unk_0xC8F62804B10A6701(*uParam0, iParam1, &cLocal_2582, 1);
						}
					}
					else
					{
						unk_0xC8F62804B10A6701(*uParam0, iParam1, &cLocal_2582, 1);
					}
					unk_0x0039C5B0E3E4993E(*uParam0, fParam2);
					if (bParam5)
					{
						unk_0xDC099970C8216FC4(*uParam0, 1);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_395(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	float fVar12;
	float fVar13;
	bool bVar14;
	bool bVar15;
	var uVar16;
	var uVar17;
	bool bVar18;
	int iVar19;
	int iVar20;
	
	bVar15 = unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63());
	uVar16 = unk_0x033AAA0ABCCCDA82();
	uVar17 = unk_0xAD0A666BB76E2357();
	bVar18 = false;
	if (bVar15)
	{
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			iVar2 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
		}
		Var9 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
	}
	if (unk_0x7404950238A154C2(iParam0, 0))
	{
		iVar0 = iLocal_1866;
		while (iVar0 < 70)
		{
			if (iLocal_1647[iVar0] != 99)
			{
				if (iLocal_1647[iVar0] == 0)
				{
					if (iLocal_1576[iVar0] > 0)
					{
						if (!iLocal_119)
						{
							if (fLocal_1299 > (fLocal_871[iVar0] - (7000f * fParam1)))
							{
								if (func_391(iLocal_2756[iVar0]))
								{
									unk_0xF3148AAF69AF9CBC(&(iLocal_1718[iVar0]), 0);
								}
								else if (unk_0xC5ABD699DDC9D5A0(iLocal_2756[iVar0]))
								{
									unk_0xF3148AAF69AF9CBC(&(iLocal_1718[iVar0]), 2);
								}
								unk_0xC69E84EBBD7166E6(&(iLocal_1718[iVar0]), 1);
								iLocal_1647[iVar0]++;
								iLocal_1868++;
							}
						}
						else
						{
							fVar12 = (fLocal_1299 - fLocal_871[iVar0]);
							fVar12 = (fVar12 * fLocal_942[iVar0]);
							if (fVar12 >= 0f)
							{
								if (fVar12 < func_404(iLocal_1576[iVar0]))
								{
									if (func_391(iLocal_2756[iVar0]))
									{
										unk_0xF3148AAF69AF9CBC(&(iLocal_1718[iVar0]), 0);
									}
									else if (unk_0xC5ABD699DDC9D5A0(iLocal_2756[iVar0]))
									{
										unk_0xF3148AAF69AF9CBC(&(iLocal_1718[iVar0]), 2);
									}
									unk_0xC69E84EBBD7166E6(&(iLocal_1718[iVar0]), 1);
									iLocal_1647[iVar0]++;
									iLocal_1868++;
								}
								else
								{
									iLocal_1647[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_1647[iVar0] = 99;
					}
				}
				else if (iLocal_1647[iVar0] == 1)
				{
					bVar14 = false;
					unk_0x995DCDA796A47049(iLocal_1576[iVar0], &cLocal_2582);
					if (unk_0x236D8AD7EE179F46(iLocal_1718[iVar0], 0))
					{
						unk_0x32A12757CBF48A33(func_85());
						bVar14 = unk_0x33ACB874CECA2D4B(func_85());
					}
					else if (!bLocal_146 && ((!unk_0x236D8AD7EE179F46(iLocal_1718[iVar0], 2) && uVar16) || (unk_0x236D8AD7EE179F46(iLocal_1718[iVar0], 2) && uVar17)))
					{
						bVar14 = true;
					}
					else
					{
						unk_0x32A12757CBF48A33(func_88());
						bVar14 = unk_0x33ACB874CECA2D4B(func_88());
					}
					if (bVar14)
					{
						if (!unk_0x86CCCD2FAE9D5E65(iLocal_3003[iVar0]))
						{
							unk_0x32A12757CBF48A33(iLocal_2756[iVar0]);
							if (unk_0x33ACB874CECA2D4B(iLocal_2756[iVar0]) && unk_0x498998F33897432E(iLocal_1576[iVar0], &cLocal_2582))
							{
								if (fLocal_1299 >= (fLocal_871[iVar0] - (fLocal_1312 * fParam1)))
								{
									if ((iLocal_133 || bParam2) || (!bLocal_150 && !func_403(Local_2344[iVar0 /*3*/], Var9, 5f, fLocal_1310)))
									{
										if (bLocal_129)
										{
											func_402(Local_2344[iVar0 /*3*/], Var9, fLocal_1303);
										}
										iLocal_3003[iVar0] = unk_0xE00F8DEA9778FC87(iLocal_2756[iVar0], Local_2344[iVar0 /*3*/], 0f, 0, 0);
										if (iLocal_2756[iVar0] == joaat("polmav"))
										{
											unk_0x24F85A008ECA63FB(iLocal_3003[iVar0], 0);
										}
										if (iLocal_142 && !unk_0x236D8AD7EE179F46(iLocal_1718[iVar0], 0))
										{
											func_401(iLocal_3003[iVar0]);
										}
										if (unk_0x236D8AD7EE179F46(iLocal_1718[iVar0], 3))
										{
											unk_0xEA89E72C99125D9C(iLocal_3003[iVar0], 1);
										}
										unk_0xB901CB880393ADF7(iLocal_3003[iVar0], Local_2344[iVar0 /*3*/], 0, 0, 1);
										unk_0x5D6F89F6DD9B0781(iLocal_3003[iVar0], fLocal_587[iVar0], fLocal_658[iVar0], fLocal_729[iVar0], fLocal_800[iVar0]);
										if (unk_0x61A26017817C6AED(iLocal_2756[iVar0]) || unk_0xC5ABD699DDC9D5A0(iLocal_2756[iVar0]))
										{
											unk_0x5CC9D6711FE01F0D(iLocal_3003[iVar0]);
										}
										if (!unk_0x236D8AD7EE179F46(iLocal_1718[iVar0], 0))
										{
											unk_0x686D6CDC14C4BA6C(iLocal_3003[iVar0], 1, 1);
											if (unk_0x0C937048CF6952B5() > 19 || unk_0x0C937048CF6952B5() < 7)
											{
												unk_0x69AA788B6BA4CB68(iLocal_3003[iVar0], 3);
											}
										}
										unk_0xA8F22633ACC22189(iLocal_3003[iVar0], 1);
										unk_0x887F4488DA99FD21(iLocal_2756[iVar0]);
										iLocal_1868 = (iLocal_1868 - 1);
										iLocal_1647[iVar0]++;
										bLocal_150 = true;
									}
								}
							}
						}
						else if (!unk_0x930F8FBB8E9537CC(iLocal_3003[iVar0]) && unk_0x7404950238A154C2(iLocal_3003[iVar0], 0))
						{
							unk_0xB901CB880393ADF7(iLocal_3003[iVar0], Local_2344[iVar0 /*3*/], 0, 0, 1);
							unk_0x5D6F89F6DD9B0781(iLocal_3003[iVar0], fLocal_587[iVar0], fLocal_658[iVar0], fLocal_729[iVar0], fLocal_800[iVar0]);
							if (unk_0x61A26017817C6AED(iLocal_2756[iVar0]) || unk_0xC5ABD699DDC9D5A0(iLocal_2756[iVar0]))
							{
								unk_0x5CC9D6711FE01F0D(iLocal_3003[iVar0]);
							}
							unk_0xA8F22633ACC22189(iLocal_3003[iVar0], 1);
							unk_0x887F4488DA99FD21(iLocal_2756[iVar0]);
							iLocal_1868 = (iLocal_1868 - 1);
							iLocal_1647[iVar0]++;
						}
					}
				}
				else if (iLocal_1647[iVar0] == 2)
				{
					unk_0x995DCDA796A47049(iLocal_1576[iVar0], &cLocal_2582);
					if (!unk_0x236D8AD7EE179F46(iLocal_1718[iVar0], 1))
					{
						bVar14 = false;
						if (unk_0x236D8AD7EE179F46(iLocal_1718[iVar0], 0))
						{
							unk_0x32A12757CBF48A33(func_85());
							bVar14 = unk_0x33ACB874CECA2D4B(func_85());
							iVar19 = 2;
						}
						else if (!bLocal_146 && ((!unk_0x236D8AD7EE179F46(iLocal_1718[iVar0], 2) && uVar16) || (unk_0x236D8AD7EE179F46(iLocal_1718[iVar0], 2) && uVar17)))
						{
							bVar14 = true;
							iVar19 = 1;
						}
						else
						{
							unk_0x32A12757CBF48A33(func_88());
							bVar14 = unk_0x33ACB874CECA2D4B(func_88());
							iVar19 = 0;
						}
						if (!unk_0x930F8FBB8E9537CC(iLocal_3003[iVar0]))
						{
							if (!bLocal_150 && unk_0xBEB00EB4ADDC2A33(iLocal_3003[iVar0], -1))
							{
								if (bVar14)
								{
									if ((unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(iLocal_3003[iVar0], 1), Var9) < 10000f || bParam2) || iLocal_133)
									{
										func_400(&(iLocal_3003[iVar0]), iVar19, 1);
										unk_0xF3148AAF69AF9CBC(&(iLocal_1718[iVar0]), 1);
									}
								}
							}
						}
					}
					if (unk_0x7404950238A154C2(iLocal_3003[iVar0], 0))
					{
						if (fLocal_1299 >= fLocal_871[iVar0])
						{
							if (11 > iLocal_1861)
							{
								fVar12 = (fLocal_1299 - fLocal_871[iVar0]);
								fVar12 = (fVar12 * fLocal_942[iVar0]);
								if (unk_0x498998F33897432E(iLocal_1576[iVar0], &cLocal_2582))
								{
									if (fVar12 < unk_0x60D934BFDF90E0F0(iLocal_1576[iVar0], &cLocal_2582))
									{
										Var3 = { unk_0xB6AE0DAE06D56288(iLocal_3003[iVar0], 1) };
										Var6 = { unk_0xD0CC9D77E98DFF73(iLocal_1576[iVar0], fVar12, &cLocal_2582) };
										if (((!func_403(Var3, Var9, 5f, fLocal_1310) && func_403(Var6, Var9, 5f, fLocal_1310)) && !iLocal_133) && !bParam2)
										{
											if (!unk_0x236D8AD7EE179F46(iLocal_1718[iVar0], 1))
											{
												func_400(&(iLocal_3003[iVar0]), iVar19, 1);
											}
											iLocal_1861++;
											iLocal_1647[iVar0]++;
										}
										else if (((!bLocal_150 || unk_0x236D8AD7EE179F46(iLocal_1718[iVar0], 1)) || iLocal_133) || bParam2)
										{
											if (func_394(&(iLocal_3003[iVar0]), iLocal_1576[iVar0], fVar12, 1, 0, 0, bLocal_148, bLocal_147))
											{
												unk_0x1248DFEEEEE716FC(iLocal_3003[iVar0], (fParam1 * fLocal_942[iVar0]));
												if (unk_0x7404950238A154C2(iLocal_3003[iVar0], 0))
												{
													if (unk_0x236D8AD7EE179F46(iLocal_1718[iVar0], 0))
													{
														unk_0x686D6CDC14C4BA6C(iLocal_3003[iVar0], 1, 1);
														unk_0x6A8A78C1DAEC9CEB(iLocal_3003[iVar0], 1);
														unk_0x69AA788B6BA4CB68(iLocal_3003[iVar0], 2);
														if (!unk_0xC5ABD699DDC9D5A0(iLocal_2756[iVar0]))
														{
															unk_0x466892F4AAB03B4B(iLocal_3003[iVar0], 1);
														}
													}
												}
												if (!unk_0x236D8AD7EE179F46(iLocal_1718[iVar0], 1))
												{
													func_400(&(iLocal_3003[iVar0]), iVar19, 1);
												}
												iLocal_1861++;
												iLocal_1647[iVar0]++;
											}
										}
									}
									else
									{
										if (!unk_0x236D8AD7EE179F46(iLocal_1718[iVar0], 1))
										{
											func_400(&(iLocal_3003[iVar0]), iVar19, 1);
										}
										iLocal_1861++;
										iLocal_1647[iVar0]++;
									}
								}
							}
							else
							{
								if (!unk_0x236D8AD7EE179F46(iLocal_1718[iVar0], 1))
								{
									func_400(&(iLocal_3003[iVar0]), iVar19, 1);
								}
								iLocal_1861++;
								iLocal_1647[iVar0]++;
							}
						}
					}
					else
					{
						if (!unk_0x236D8AD7EE179F46(iLocal_1718[iVar0], 1))
						{
							func_400(&(iLocal_3003[iVar0]), iVar19, 1);
						}
						iLocal_1861++;
						iLocal_1647[iVar0]++;
					}
				}
				else if (iLocal_1647[iVar0] == 3)
				{
					if (unk_0x7404950238A154C2(iLocal_3003[iVar0], 0))
					{
						if (unk_0xE20321A2D7F8960C(iLocal_3003[iVar0]))
						{
							iVar1 = unk_0xB0B9E53CEFDB16AA(iLocal_3003[iVar0], -1);
							if (!unk_0x5FEB513A4402FD59(iVar1))
							{
								if (bVar15)
								{
									if (((!bLocal_123 && !iLocal_120) && !bLocal_139) && (((!bLocal_148 && !bLocal_147) && unk_0xB454AC819016CE5E(unk_0x81873881071CD9FE(), iLocal_3003[iVar0])) || func_399(iLocal_3003[iVar0])))
									{
										if (unk_0x86CCCD2FAE9D5E65(iVar2))
										{
											bVar14 = false;
											if (bLocal_141)
											{
												bVar14 = true;
											}
											else
											{
												fVar13 = unk_0xA04824262F150982(iVar2);
												if (fVar13 < 1f)
												{
													bVar14 = true;
												}
												else if (unk_0xB9AA84B14E04BC20((fVar13 - unk_0xA04824262F150982(iLocal_3003[iVar0]))) > 15f)
												{
													bVar14 = true;
												}
												else if (!func_398(iLocal_3003[iVar0], iVar2, 45f))
												{
													bVar14 = true;
												}
												else if (func_397(iVar2, iLocal_3003[iVar0], 0))
												{
													bVar14 = true;
												}
											}
											if (bVar14)
											{
												func_396(iLocal_3003[iVar0]);
												iLocal_1647[iVar0]++;
											}
										}
									}
									else
									{
										unk_0x1248DFEEEEE716FC(iLocal_3003[iVar0], (fParam1 * fLocal_942[iVar0]));
									}
								}
							}
							else
							{
								unk_0x05ACEF4F060B9B4E(iLocal_3003[iVar0]);
							}
						}
						else
						{
							iLocal_1647[iVar0]++;
						}
					}
					else
					{
						iLocal_1647[iVar0]++;
					}
				}
				else if (iLocal_1647[iVar0] == 4)
				{
					if (unk_0x7404950238A154C2(iLocal_3003[iVar0], 0))
					{
						if (!unk_0xE20321A2D7F8960C(iLocal_3003[iVar0]))
						{
							iLocal_1647[iVar0]++;
						}
						else
						{
							iVar1 = unk_0xB0B9E53CEFDB16AA(iLocal_3003[iVar0], -1);
							if (!unk_0x5FEB513A4402FD59(iVar1))
							{
								unk_0x1248DFEEEEE716FC(iLocal_3003[iVar0], (fParam1 * fLocal_942[iVar0]));
							}
							else
							{
								unk_0x05ACEF4F060B9B4E(iLocal_3003[iVar0]);
							}
							if (unk_0x498998F33897432E(iLocal_1576[iVar0], &cLocal_2582))
							{
								if (fLocal_1299 > (fLocal_871[iVar0] + unk_0x60D934BFDF90E0F0(iLocal_1576[iVar0], &cLocal_2582)))
								{
									unk_0x05ACEF4F060B9B4E(iLocal_3003[iVar0]);
								}
							}
							else
							{
								unk_0x05ACEF4F060B9B4E(iLocal_3003[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1647[iVar0]++;
					}
				}
				else if (iLocal_1647[iVar0] == 5)
				{
					if (!iLocal_3003[iVar0] == iLocal_3087)
					{
						if (unk_0x7404950238A154C2(iLocal_3003[iVar0], 0))
						{
							iVar1 = unk_0xB0B9E53CEFDB16AA(iLocal_3003[iVar0], -1);
							if (!unk_0x5FEB513A4402FD59(iVar1))
							{
								iVar20 = unk_0xFA1212DE7C455679(iVar1, 242628503);
								if (iVar20 == 7)
								{
									fVar13 = unk_0xA04824262F150982(iLocal_3003[iVar0]);
									if (fVar13 < 8f)
									{
										fVar13 = 8f;
									}
									if (fVar13 > 62.9f)
									{
										fVar13 = 62.9f;
									}
									unk_0xB8BE32B6C4B45732(iVar1, fVar13);
								}
							}
						}
						if (!bLocal_131 && !bLocal_144)
						{
							if (iLocal_1576[iVar0] > 0)
							{
								unk_0x4855165A2773595C(iLocal_1576[iVar0], &cLocal_2582);
							}
						}
						if (!bLocal_121)
						{
							if (!bLocal_149)
							{
								func_81(iLocal_3003[iVar0]);
							}
						}
						else if (unk_0x86CCCD2FAE9D5E65(iLocal_3003[iVar0]))
						{
							unk_0x5D00E836B6BE8693(&(iLocal_3003[iVar0]));
						}
					}
					iLocal_1861 = (iLocal_1861 - 1);
					iLocal_1647[iVar0] = 99;
				}
				if (!bVar18)
				{
					iLocal_1866 = iVar0;
					bVar18 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_80();
	}
}

void func_396(int iParam0)
{
	if (unk_0x7404950238A154C2(iParam0, 0))
	{
		func_82(iParam0);
		unk_0x4BB2BF146DC5CBFA(iParam0, 786603);
	}
}

int func_397(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	
	if (unk_0x7404950238A154C2(iParam0, 0))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
	}
	if (unk_0x7404950238A154C2(iParam1, 0))
	{
		Var3 = { unk_0xB6AE0DAE06D56288(iParam1, 1) };
		if (bParam2)
		{
			Var15 = { unk_0xC684AF573327E1AB(iParam1) };
			Var12 = { Var15 / FtoV(unk_0x652D2EEEF1D3E62C(Var15)) };
		}
		else
		{
			Var6 = { unk_0xB07F27EC3B05E4EA(iParam1, 0f, 5f, 0f) };
			Var12 = { Var6 - Var3 };
		}
	}
	Var9 = { Var3 - Var0 };
	Var9.f_2 = 0f;
	Var12.f_2 = 0f;
	if (func_384(Var9, Var12) < 0f)
	{
		return 1;
	}
	return 0;
}

int func_398(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (unk_0x7404950238A154C2(iParam0, 0))
	{
		Var0 = { unk_0x48A077E51B98F0DD(iParam0, 0) };
	}
	else
	{
		return 0;
	}
	if (unk_0x7404950238A154C2(iParam1, 0))
	{
		Var3 = { unk_0x48A077E51B98F0DD(iParam1, 0) };
	}
	else
	{
		return 0;
	}
	Var0.f_2 = 0f;
	Var3.f_2 = 0f;
	fVar6 = func_384(Var0, Var3);
	if (fVar6 < 0f)
	{
		return 0;
	}
	fVar6 = unk_0x340B0B7228EC1565(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1);
	if (!fVar6 < fParam2)
	{
		return 0;
	}
	return 1;
}

int func_399(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bLocal_145)
	{
		iVar1 = unk_0x2ADE2CEED2637E95();
		if (!unk_0x930F8FBB8E9537CC(iVar1))
		{
			iVar2 = unk_0x14B7103DBD149FFE(iVar1);
			if (iVar2 == joaat("phantom"))
			{
				if (unk_0x052AF3754A22A08B(iVar1))
				{
					if (unk_0xDE56943EA8AE17DC(iVar1, &iVar0))
					{
						if (unk_0x7404950238A154C2(iVar0, 0))
						{
							if (unk_0xB454AC819016CE5E(iVar0, uParam0))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_400(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x930F8FBB8E9537CC(*uParam0))
	{
		if (unk_0xBEB00EB4ADDC2A33(*uParam0, -1))
		{
			if (iParam1 == 2)
			{
				iVar0 = unk_0x4D135F3066A9BF9C(*uParam0, 6, func_85(), -1, 0, 0);
				unk_0x506A601663C5417C(iVar0, iLocal_2598);
				unk_0x887F4488DA99FD21(func_85());
			}
			else if (iParam1 == 1)
			{
				iVar0 = unk_0x18FBBAE099BA2A8F(*uParam0, 1);
				if (unk_0xC5ABD699DDC9D5A0(unk_0x14B7103DBD149FFE(*uParam0)))
				{
					unk_0x0EA489DE9D8C3BBC(iVar0, 1, 4096, -1);
				}
			}
			else
			{
				iVar0 = unk_0x4D135F3066A9BF9C(*uParam0, 4, func_88(), -1, 0, 0);
				if (bLocal_151)
				{
					unk_0x887F4488DA99FD21(func_88());
				}
			}
			if (bParam2)
			{
				unk_0x4351E8D40CE67994(iVar0, 1);
				unk_0x88ED7588393C4981(iVar0, 0);
				unk_0xCE566DBDCACD245E(iVar0, 32, 0);
			}
			if (bLocal_152)
			{
				unk_0x7F5F0D37173E518C(iVar0, 8192, 1);
				unk_0x7F5F0D37173E518C(iVar0, 65536, 1);
				unk_0x7F5F0D37173E518C(iVar0, 2, 0);
				unk_0x0E465BF3FB5C8001(*uParam0, 1);
			}
			unk_0x1D15D99A10A15334(iVar0, 1);
			func_390(iVar0);
			bLocal_150 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_401(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x2E0A9E3291F398E3(0, 12);
	if (iLocal_2828 >= -1 && iLocal_2829 >= -1)
	{
		while (iVar0 == iLocal_2828 || iVar0 == iLocal_2829)
		{
			iVar0++;
		}
	}
	else if (iLocal_2828 >= -1)
	{
		if (iVar0 == iLocal_2828)
		{
			iVar0++;
		}
	}
	iVar1 = iVar0;
	switch (iVar1)
	{
		case 0:
			unk_0xFD021BAF9614D437(iParam0, 0, 0);
			break;
		
		case 1:
			unk_0xFD021BAF9614D437(iParam0, 2, 2);
			break;
		
		case 2:
			unk_0xFD021BAF9614D437(iParam0, 4, 4);
			break;
		
		case 3:
			unk_0xFD021BAF9614D437(iParam0, 27, 27);
			break;
		
		case 4:
			unk_0xFD021BAF9614D437(iParam0, 7, 7);
			break;
		
		case 5:
			unk_0xFD021BAF9614D437(iParam0, 73, 73);
			break;
		
		case 6:
			unk_0xFD021BAF9614D437(iParam0, 68, 68);
			break;
		
		case 7:
			unk_0xFD021BAF9614D437(iParam0, 62, 62);
			break;
		
		case 8:
			unk_0xFD021BAF9614D437(iParam0, 132, 132);
			break;
		
		case 9:
			unk_0xFD021BAF9614D437(iParam0, 117, 0);
			break;
		
		case 10:
			unk_0xFD021BAF9614D437(iParam0, 52, 52);
			break;
		
		case 11:
			unk_0xFD021BAF9614D437(iParam0, 88, 88);
			break;
		
		case 12:
			unk_0xFD021BAF9614D437(iParam0, 1, 1);
			break;
		
		case 13:
			unk_0xFD021BAF9614D437(iParam0, 36, 36);
			break;
		
		case 14:
			unk_0xFD021BAF9614D437(iParam0, 95, 95);
			break;
		
		default:
			unk_0xFD021BAF9614D437(iParam0, 73, 73);
			break;
	}
}

void func_402(struct<3> Param0, struct<3> Param3, float fParam6)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (!bLocal_132)
	{
		if (!func_403(Param0, Param3, fParam6, 200f))
		{
			if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
			{
				iVar1 = unk_0x2ADE2CEED2637E95();
				if (!unk_0x930F8FBB8E9537CC(iVar1))
				{
					if (unk_0x515B65C19A5CA9B1(iVar1, Param0, fParam6, fParam6, fParam6, 0, 1, 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0xA450601E968044DB(Param0, fParam6, 0, 0, 0, 0, 0);
			}
		}
	}
}

int func_403(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7)
{
	if (!unk_0x29AFA2493D7C23D0())
	{
		if (!bLocal_132)
		{
			if (!iLocal_119)
			{
				if (unk_0xA8CEACB4F35AE058(Param3 - Param0) - fParam6) < (fParam7 * fParam7)
				{
					if (unk_0x547A2AA158CA2804(Param0, fParam6))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

float func_404(int iParam0)
{
	var uVar0;
	
	unk_0x995DCDA796A47049(iParam0, &cLocal_2582);
	while (!unk_0x498998F33897432E(iParam0, &cLocal_2582))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	uVar0 = unk_0x60D934BFDF90E0F0(iParam0, &cLocal_2582);
	unk_0x4855165A2773595C(iParam0, &cLocal_2582);
	return uVar0;
}

void func_405(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	bool bVar7;
	bool bVar8;
	
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		Var1 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
	}
	if (unk_0x7404950238A154C2(iParam0, 0))
	{
		bVar7 = false;
		bVar8 = false;
		iVar0 = iLocal_1865;
		while (iVar0 < 70)
		{
			switch (iLocal_1789[iVar0])
			{
				case 0:
					if (!iLocal_2685[iVar0] == 0)
					{
						if (unk_0x515B65C19A5CA9B1(iParam0, Local_2133[iVar0 /*3*/], fLocal_1297, fLocal_1297, fLocal_1297, 0, 1, 0))
						{
							iLocal_1867++;
							iLocal_1789[iVar0]++;
						}
					}
					else
					{
						iLocal_1789[iVar0] = 99;
					}
					break;
				
				case 1:
					if (10 > iLocal_1862)
					{
						if (!unk_0x86CCCD2FAE9D5E65(iLocal_2932[iVar0]))
						{
							unk_0x32A12757CBF48A33(iLocal_2685[iVar0]);
							if (unk_0x33ACB874CECA2D4B(iLocal_2685[iVar0]))
							{
								if ((iLocal_119 || iLocal_133) || (!bLocal_150 && !func_403(Local_2133[iVar0 /*3*/], Var1, 5f, fLocal_1310)))
								{
									if (bLocal_129)
									{
										func_402(Local_2133[iVar0 /*3*/], Var1, fLocal_1303);
									}
									iLocal_2932[iVar0] = unk_0xE00F8DEA9778FC87(iLocal_2685[iVar0], Local_2133[iVar0 /*3*/], 0f, 0, 0);
									if (iLocal_2685[iVar0] == joaat("polmav"))
									{
										unk_0x24F85A008ECA63FB(iLocal_2932[iVar0], 0);
									}
									unk_0x5D6F89F6DD9B0781(iLocal_2932[iVar0], fLocal_1013[iVar0], fLocal_1084[iVar0], fLocal_1155[iVar0], fLocal_1226[iVar0]);
									unk_0x887F4488DA99FD21(iLocal_2685[iVar0]);
									if (unk_0xCC6B00B8460CDA0E(iLocal_2932[iVar0], func_86()))
									{
										unk_0x6A8A78C1DAEC9CEB(iLocal_2932[iVar0], 1);
										if (!unk_0xC5ABD699DDC9D5A0(iLocal_2685[iVar0]))
										{
											unk_0x466892F4AAB03B4B(iLocal_2932[iVar0], 1);
										}
									}
									if (unk_0xCC6B00B8460CDA0E(iLocal_2932[iVar0], func_87()))
									{
										unk_0xFD021BAF9614D437(iLocal_2932[iVar0], 0, 0);
									}
									unk_0xEA89E72C99125D9C(iLocal_2932[iVar0], 1);
									iLocal_1867 = (iLocal_1867 - 1);
									iLocal_1862++;
									iLocal_1789[iVar0]++;
									bLocal_150 = true;
								}
							}
						}
						else
						{
							iLocal_1867 = (iLocal_1867 - 1);
							iLocal_1862++;
							iLocal_1789[iVar0]++;
						}
					}
					break;
				
				case 2:
					if (!bVar7)
					{
						if (unk_0x7404950238A154C2(iLocal_2932[iVar0], 0))
						{
							Var4 = { unk_0xB6AE0DAE06D56288(iLocal_2932[iVar0], 1) };
						}
						if (fLocal_1311 == 0f || unk_0xB7A628320EFF8E47(Var1, Var4) < (fLocal_1311 * fLocal_1311))
						{
							if (!func_397(iLocal_2932[iVar0], iParam0, 0))
							{
								if (!bLocal_121)
								{
									func_81(iLocal_2932[iVar0]);
								}
								else
								{
									unk_0x5D00E836B6BE8693(&(iLocal_2932[iVar0]));
								}
								iLocal_1862 = (iLocal_1862 - 1);
								iLocal_1789[iVar0] = 99;
								bVar7 = true;
							}
						}
					}
					break;
			}
			if (iLocal_1789[iVar0] != 99)
			{
				if (!bVar8)
				{
					iLocal_1865 = iVar0;
					bVar8 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_83();
	}
}

void func_406(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	float fVar16;
	bool bVar17;
	bool bVar18;
	var uVar19;
	var uVar20;
	int iVar21;
	int iVar22;
	bool bVar23;
	bool bVar24;
	struct<3> Var25;
	
	iVar5 = 0;
	bVar18 = unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63());
	uVar19 = unk_0x033AAA0ABCCCDA82();
	uVar20 = unk_0xAD0A666BB76E2357();
	if (bVar18)
	{
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			iVar5 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
		}
		Var12 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
	}
	iVar1 = 0;
	if (unk_0x7404950238A154C2(iParam0, 0))
	{
		if (unk_0xE20321A2D7F8960C(iParam0))
		{
			fLocal_1299 = unk_0x678BA9CA7610A13E(iParam0);
		}
		iVar22 = -1;
		bVar23 = false;
		bVar24 = false;
		iVar0 = iLocal_1864;
		while (iVar0 < 85 && !bVar23)
		{
			if (iLocal_1404[iVar0] != 99)
			{
				if (iLocal_1404[iVar0] == 0)
				{
					if (iLocal_1318[iVar0] > 0 && iLocal_2599[iVar0] != 0)
					{
						if (!iLocal_119)
						{
							if (fLocal_1299 < (fLocal_497[iVar0] + 20000f))
							{
								if (fLocal_1299 >= (fLocal_497[iVar0] - (7000f * fParam1)))
								{
									if (func_391(iLocal_2599[iVar0]))
									{
										unk_0xF3148AAF69AF9CBC(&(iLocal_1490[iVar0]), 0);
									}
									else if (unk_0xC5ABD699DDC9D5A0(iLocal_2599[iVar0]))
									{
										unk_0xF3148AAF69AF9CBC(&(iLocal_1490[iVar0]), 2);
									}
									unk_0xC69E84EBBD7166E6(&(iLocal_1490[iVar0]), 1);
									iLocal_1869++;
									iLocal_1404[iVar0]++;
								}
								else if (iVar1 > 2)
								{
									bVar23 = true;
								}
								else
								{
									iVar1++;
								}
							}
							else
							{
								func_408(iVar0, 1090519040);
							}
						}
						else
						{
							fVar15 = (fLocal_1299 - fLocal_497[iVar0]);
							if (fVar15 >= 0f)
							{
								if (fVar15 < func_404(iLocal_1318[iVar0]))
								{
									if (func_391(iLocal_2599[iVar0]))
									{
										unk_0xF3148AAF69AF9CBC(&(iLocal_1490[iVar0]), 0);
									}
									else if (unk_0xC5ABD699DDC9D5A0(iLocal_2599[iVar0]))
									{
										unk_0xF3148AAF69AF9CBC(&(iLocal_1490[iVar0]), 2);
									}
									unk_0xC69E84EBBD7166E6(&(iLocal_1490[iVar0]), 1);
									iLocal_1869++;
									iLocal_1404[iVar0]++;
								}
								else
								{
									func_408(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_408(iVar0, 1090519040);
					}
				}
				else if (iLocal_1404[iVar0] == 1)
				{
					unk_0x995DCDA796A47049(iLocal_1318[iVar0], &cLocal_2582);
					bVar17 = false;
					if (unk_0x236D8AD7EE179F46(iLocal_1490[iVar0], 0))
					{
						unk_0x32A12757CBF48A33(func_85());
						if (unk_0x33ACB874CECA2D4B(func_85()))
						{
							bVar17 = true;
						}
					}
					else if (!bLocal_146 && ((!unk_0x236D8AD7EE179F46(iLocal_1490[iVar0], 2) && uVar19) || (unk_0x236D8AD7EE179F46(iLocal_1490[iVar0], 2) && uVar20)))
					{
						bVar17 = true;
					}
					else
					{
						unk_0x32A12757CBF48A33(func_88());
						bVar17 = unk_0x33ACB874CECA2D4B(func_88());
					}
					if (!unk_0x86CCCD2FAE9D5E65(iLocal_2830[iVar0]))
					{
						unk_0x32A12757CBF48A33(iLocal_2599[iVar0]);
						if ((unk_0x33ACB874CECA2D4B(iLocal_2599[iVar0]) && unk_0x498998F33897432E(iLocal_1318[iVar0], &cLocal_2582)) && bVar17)
						{
							if (fLocal_1299 >= (fLocal_497[iVar0] - (fLocal_1312 * fParam1)))
							{
								if ((iLocal_133 || iParam2) || (!bLocal_150 && !func_403(Local_1877[iVar0 /*3*/], Var12, 5f, fLocal_1310)))
								{
									if (bLocal_129)
									{
										func_402(Local_1877[iVar0 /*3*/], Var12, fLocal_1303);
									}
									iLocal_2830[iVar0] = unk_0xE00F8DEA9778FC87(iLocal_2599[iVar0], Local_1877[iVar0 /*3*/], 0f, 0, 0);
									if (iLocal_2599[iVar0] == joaat("polmav"))
									{
										unk_0x24F85A008ECA63FB(iLocal_2830[iVar0], 0);
									}
									if (iLocal_142 && !unk_0x236D8AD7EE179F46(iLocal_1490[iVar0], 0))
									{
										func_401(iLocal_2830[iVar0]);
									}
									unk_0xB901CB880393ADF7(iLocal_2830[iVar0], Local_1877[iVar0 /*3*/], 0, 0, 1);
									unk_0x5D6F89F6DD9B0781(iLocal_2830[iVar0], fLocal_153[iVar0], fLocal_239[iVar0], fLocal_325[iVar0], fLocal_411[iVar0]);
									if (unk_0x61A26017817C6AED(iLocal_2599[iVar0]) || unk_0xC5ABD699DDC9D5A0(iLocal_2599[iVar0]))
									{
										unk_0x5CC9D6711FE01F0D(iLocal_2830[iVar0]);
									}
									if (unk_0x236D8AD7EE179F46(iLocal_1490[iVar0], 3))
									{
										unk_0xEA89E72C99125D9C(iLocal_2830[iVar0], 1);
									}
									if (!unk_0x236D8AD7EE179F46(iLocal_1490[iVar0], 0))
									{
										unk_0x686D6CDC14C4BA6C(iLocal_2830[iVar0], 1, 1);
										if (unk_0x0C937048CF6952B5() > 19 || unk_0x0C937048CF6952B5() < 7)
										{
											unk_0x69AA788B6BA4CB68(iLocal_2830[iVar0], 3);
										}
									}
									unk_0xA8F22633ACC22189(iLocal_2830[iVar0], 1);
									unk_0x4351E8D40CE67994(iLocal_2830[iVar0], 1);
									unk_0x887F4488DA99FD21(iLocal_2599[iVar0]);
									iLocal_1869 = (iLocal_1869 - 1);
									iLocal_1404[iVar0]++;
									bLocal_150 = true;
								}
								else if (fLocal_1299 > fLocal_497[iVar0])
								{
									iLocal_1869 = (iLocal_1869 - 1);
									func_408(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_1404[iVar0] == 2)
				{
					bVar17 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_1875 || iLocal_1875 == 0)) || iLocal_133) || iParam2)
					{
						if (!unk_0x236D8AD7EE179F46(iLocal_1490[iVar0], 1))
						{
							if (unk_0x236D8AD7EE179F46(iLocal_1490[iVar0], 0))
							{
								unk_0x32A12757CBF48A33(func_85());
								bVar17 = unk_0x33ACB874CECA2D4B(func_85());
								iVar21 = 2;
							}
							else if (!bLocal_146 && ((!unk_0x236D8AD7EE179F46(iLocal_1490[iVar0], 2) && uVar19) || (unk_0x236D8AD7EE179F46(iLocal_1490[iVar0], 2) && uVar20)))
							{
								bVar17 = true;
								iVar21 = 1;
							}
							else
							{
								unk_0x32A12757CBF48A33(func_88());
								bVar17 = unk_0x33ACB874CECA2D4B(func_88());
								iVar21 = 0;
							}
							if (!unk_0x930F8FBB8E9537CC(iLocal_2830[iVar0]))
							{
								if (!bLocal_150 && unk_0xBEB00EB4ADDC2A33(iLocal_2830[iVar0], -1))
								{
									if (bVar17)
									{
										if ((unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(iLocal_2830[iVar0], 1), Var12) < 10000f || iParam2) || iLocal_133)
										{
											func_400(&(iLocal_2830[iVar0]), iVar21, 0);
											unk_0xF3148AAF69AF9CBC(&(iLocal_1490[iVar0]), 1);
										}
									}
								}
							}
						}
						if (unk_0x7404950238A154C2(iLocal_2830[iVar0], 0))
						{
							unk_0x995DCDA796A47049(iLocal_1318[iVar0], &cLocal_2582);
							if (fLocal_1299 >= fLocal_497[iVar0])
							{
								if (15 > iLocal_1860)
								{
									fVar15 = (fLocal_1299 - fLocal_497[iVar0]);
									if (unk_0x498998F33897432E(iLocal_1318[iVar0], &cLocal_2582))
									{
										if (fVar15 < unk_0x60D934BFDF90E0F0(iLocal_1318[iVar0], &cLocal_2582))
										{
											Var6 = { unk_0xB6AE0DAE06D56288(iLocal_2830[iVar0], 1) };
											Var9 = { unk_0xD0CC9D77E98DFF73(iLocal_1318[iVar0], fVar15, &cLocal_2582) };
											if (!func_403(Var6, Var12, 5f, fLocal_1310) && func_403(Var9, Var12, 5f, fLocal_1310))
											{
												if (!unk_0x236D8AD7EE179F46(iLocal_1490[iVar0], 1))
												{
													func_400(&(iLocal_2830[iVar0]), iVar21, 0);
												}
												func_408(iVar0, 1090519040);
											}
											else if (((!bLocal_150 || unk_0x236D8AD7EE179F46(iLocal_1490[iVar0], 1)) || iLocal_133) || iParam2)
											{
												if (func_394(&(iLocal_2830[iVar0]), iLocal_1318[iVar0], fVar15, 1, 0, 0, 1, bLocal_147))
												{
													if (!unk_0x236D8AD7EE179F46(iLocal_1490[iVar0], 1))
													{
														func_400(&(iLocal_2830[iVar0]), iVar21, 0);
													}
													unk_0x5CEA5F12775261F2(iLocal_2830[iVar0], 1, 0);
													unk_0x1248DFEEEEE716FC(iLocal_2830[iVar0], fParam1);
													iLocal_1860++;
													iLocal_1404[iVar0]++;
												}
											}
										}
										else
										{
											if (!unk_0x236D8AD7EE179F46(iLocal_1490[iVar0], 1))
											{
												func_400(&(iLocal_2830[iVar0]), iVar21, 0);
											}
											func_408(iVar0, 1090519040);
										}
									}
									else if (fVar15 > unk_0x60D934BFDF90E0F0(iLocal_1318[iVar0], &cLocal_2582))
									{
										if (!unk_0x236D8AD7EE179F46(iLocal_1490[iVar0], 1))
										{
											func_400(&(iLocal_2830[iVar0]), iVar21, 0);
										}
										func_408(iVar0, 1090519040);
									}
								}
								else
								{
									if (!unk_0x236D8AD7EE179F46(iLocal_1490[iVar0], 1))
									{
										func_400(&(iLocal_2830[iVar0]), iVar21, 0);
									}
									func_408(iVar0, 1090519040);
								}
							}
							else if (iLocal_130 && !bLocal_138)
							{
								if (!unk_0x236D8AD7EE179F46(iLocal_1490[iVar0], 1))
								{
									func_400(&(iLocal_2830[iVar0]), iVar21, 0);
								}
								func_408(iVar0, 1090519040);
							}
						}
						else
						{
							if (!unk_0x236D8AD7EE179F46(iLocal_1490[iVar0], 1))
							{
								func_400(&(iLocal_2830[iVar0]), iVar21, 0);
							}
							func_408(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_1875 = iVar0;
					}
				}
				else if (iLocal_1404[iVar0] == 3)
				{
					if (unk_0x7404950238A154C2(iLocal_2830[iVar0], 0))
					{
						if (unk_0xE20321A2D7F8960C(iLocal_2830[iVar0]))
						{
							iVar4 = unk_0xB0B9E53CEFDB16AA(iLocal_2830[iVar0], -1);
							if (!unk_0x5FEB513A4402FD59(iVar4))
							{
								if (bVar18)
								{
									bVar24 = false;
									if (!bLocal_128)
									{
										if ((!bLocal_123 && !iLocal_120) && func_399(iLocal_2830[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_1874 || iLocal_1874 == 0))
											{
												if (!unk_0x930F8FBB8E9537CC(iVar5))
												{
													bVar17 = false;
													if (!func_407(iLocal_2830[iVar0], iVar5) || func_397(iVar5, iLocal_2830[iVar0], 0))
													{
														bVar24 = true;
													}
												}
												iLocal_1874 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_143 && !unk_0x236D8AD7EE179F46(iLocal_1490[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_1874 || iLocal_1874 == 0))
										{
											Var25 = { unk_0xFF603DE3EBE2C5F9(iParam0, unk_0xB6AE0DAE06D56288(iLocal_2830[iVar0], 1)) };
											if (Var25.f_1 < 0f)
											{
												if (unk_0xB9AA84B14E04BC20(Var25.f_1) > unk_0xB9AA84B14E04BC20(Var25.f_0))
												{
													bVar24 = true;
												}
											}
											iVar2++;
											iLocal_1874 = iVar0;
										}
									}
									if (bVar24)
									{
										func_396(iLocal_2830[iVar0]);
										iLocal_1404[iVar0]++;
									}
									else
									{
										unk_0x1248DFEEEEE716FC(iLocal_2830[iVar0], fParam1);
									}
								}
							}
							else
							{
								unk_0x05ACEF4F060B9B4E(iLocal_2830[iVar0]);
							}
						}
						else
						{
							iLocal_1404[iVar0]++;
						}
					}
					else
					{
						iLocal_1404[iVar0]++;
					}
				}
				else if (iLocal_1404[iVar0] == 4)
				{
					if (unk_0x7404950238A154C2(iLocal_2830[iVar0], 0))
					{
						if (!unk_0xE20321A2D7F8960C(iLocal_2830[iVar0]))
						{
							iLocal_1404[iVar0]++;
						}
						else
						{
							iVar4 = unk_0xB0B9E53CEFDB16AA(iLocal_2830[iVar0], -1);
							if (!unk_0x5FEB513A4402FD59(iVar4))
							{
								unk_0x1248DFEEEEE716FC(iLocal_2830[iVar0], fParam1);
							}
							else
							{
								unk_0x05ACEF4F060B9B4E(iLocal_2830[iVar0]);
							}
							if (unk_0x498998F33897432E(iLocal_1318[iVar0], &cLocal_2582))
							{
								if (fLocal_1299 > (fLocal_497[iVar0] + unk_0x60D934BFDF90E0F0(iLocal_1318[iVar0], &cLocal_2582)))
								{
									unk_0x05ACEF4F060B9B4E(iLocal_2830[iVar0]);
								}
							}
							else
							{
								unk_0x05ACEF4F060B9B4E(iLocal_2830[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1404[iVar0]++;
					}
				}
				else if (iLocal_1404[iVar0] == 5)
				{
					if (!unk_0x930F8FBB8E9537CC(iLocal_2830[iVar0]))
					{
						fVar16 = unk_0xA04824262F150982(iLocal_2830[iVar0]);
					}
					iLocal_1860 = (iLocal_1860 - 1);
					func_408(iVar0, fVar16);
				}
				if (iVar22 == -1)
				{
					iVar22 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar22 != -1)
		{
			iLocal_1864 = iVar22;
		}
		if (iVar2 < 3)
		{
			iLocal_1874 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_1875 = 0;
		}
	}
	else
	{
		func_84();
	}
}

int func_407(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (unk_0x7404950238A154C2(iParam0, 0))
	{
		Var0 = { unk_0x48A077E51B98F0DD(iParam0, 0) };
	}
	else
	{
		return 0;
	}
	if (unk_0x7404950238A154C2(iParam1, 0))
	{
		Var3 = { unk_0x48A077E51B98F0DD(iParam1, 0) };
	}
	else
	{
		return 0;
	}
	Var0.f_2 = 0f;
	Var3.f_2 = 0f;
	fVar6 = func_384(Var0, Var3);
	if (fVar6 < 0f)
	{
		return 0;
	}
	return 1;
}

void func_408(int iParam0, float fParam1)
{
	int iVar0;
	
	if (!iLocal_2599[iParam0] == 0)
	{
		unk_0x887F4488DA99FD21(iLocal_2599[iParam0]);
	}
	if (!unk_0x930F8FBB8E9537CC(iLocal_2830[iParam0]))
	{
		unk_0x5CEA5F12775261F2(iLocal_2830[iParam0], 1, 0);
		unk_0xA8F22633ACC22189(iLocal_2830[iParam0], 0);
		iVar0 = unk_0xB0B9E53CEFDB16AA(iLocal_2830[iParam0], -1);
		if (!unk_0x5FEB513A4402FD59(iVar0) && iVar0 != unk_0x81873881071CD9FE())
		{
			unk_0x1D15D99A10A15334(iVar0, 0);
			if (fParam1 < 8f)
			{
				fParam1 = 8f;
			}
			if (fParam1 > 62.9f)
			{
				fParam1 = 62.9f;
			}
			unk_0x31F198965149F7F4(iVar0, iLocal_2830[iParam0], 0, 1, fParam1, 786603, 5f, 5f, 1);
			unk_0x7F5F0D37173E518C(iVar0, 8192, 1);
			if (bLocal_152)
			{
				unk_0x7F5F0D37173E518C(iVar0, 65536, 1);
				unk_0x7F5F0D37173E518C(iVar0, 2, 0);
			}
			unk_0x4B9FA68A3AC8C29D(iVar0, 6, 0);
			unk_0xB8BE32B6C4B45732(iVar0, fParam1);
		}
	}
	if (!bLocal_121)
	{
		if (!bLocal_149)
		{
			func_390(iVar0);
			func_81(iLocal_2830[iParam0]);
		}
	}
	else
	{
		if (unk_0x86CCCD2FAE9D5E65(iVar0))
		{
			unk_0xF210D34D7F7152ED(&iVar0);
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_2830[iParam0]))
		{
			unk_0x5D00E836B6BE8693(&(iLocal_2830[iParam0]));
		}
	}
	if (!bLocal_131 && !bLocal_144)
	{
		if (iLocal_1318[iParam0] > 0)
		{
			unk_0x4855165A2773595C(iLocal_1318[iParam0], &cLocal_2582);
		}
	}
	iLocal_1404[iParam0] = 99;
}

void func_409(int iParam0, float fParam1, float fParam2)
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		Var10 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
	}
	if (unk_0x7404950238A154C2(iParam0, 0))
	{
		if (unk_0xE20321A2D7F8960C(iParam0))
		{
			uVar0 = unk_0x579D32FAAD5CA6B8(iParam0);
			Var1 = { unk_0x13F97659039A0D0E(uVar0, fParam1) };
			Var4 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
			Var7 = { Var4 - Var1 };
			fVar13 = unk_0x652D2EEEF1D3E62C(Var7);
			if (fVar13 > fParam2)
			{
				fVar13 = fParam2;
			}
			func_402(Var1, Var10, fVar13);
		}
	}
}

void func_410(int iParam0, float fParam1)
{
	if (!bLocal_132)
	{
		if (!unk_0x930F8FBB8E9537CC(iParam0))
		{
			if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
			{
				if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(iParam0, 1), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1)) > (fParam1 * fParam1))
				{
					unk_0xB740337582B8FF04(1);
				}
				else
				{
					unk_0xB740337582B8FF04(0);
				}
			}
		}
	}
}

void func_411(int iParam0, float fParam1)
{
	if (!bLocal_132)
	{
		if (!unk_0x930F8FBB8E9537CC(iParam0))
		{
			if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
			{
				if (unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(iParam0, 1), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1)) > (fParam1 * fParam1))
				{
					unk_0xCDE668E40D482687(1f);
				}
				else
				{
					unk_0xCDE668E40D482687(0f);
				}
			}
		}
	}
}

void func_412(int iParam0, float fParam1)
{
	var uVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	
	if (!unk_0x930F8FBB8E9537CC(iParam0) && unk_0xE20321A2D7F8960C(iParam0))
	{
		fVar1 = (fLocal_1313 + 2000f);
		fVar2 = (fLocal_1314 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			uVar0 = unk_0x579D32FAAD5CA6B8(iParam0);
			if (fVar1 <= unk_0x9061C733DD63AF79(uVar0))
			{
				if (iLocal_1870 == 0)
				{
					Local_2570 = { unk_0x13F97659039A0D0E(uVar0, fLocal_1313) };
					iLocal_1870++;
				}
				else if (iLocal_1870 == 1)
				{
					Local_2573 = { unk_0x13F97659039A0D0E(uVar0, fVar1) };
					iLocal_1870++;
				}
				else if (!bLocal_150)
				{
					if (Local_2570.f_0 > Local_2573.f_0)
					{
						fVar3 = Local_2570.f_0;
						Local_2570.f_0 = Local_2573.f_0;
						Local_2573.f_0 = fVar3;
					}
					if (Local_2570.f_1 > Local_2573.f_1)
					{
						fVar3 = Local_2570.f_1;
						Local_2570.f_1 = Local_2573.f_1;
						Local_2573.f_1 = fVar3;
					}
					if (Local_2570.f_2 > Local_2573.f_2)
					{
						fVar3 = Local_2570.f_2;
						Local_2570.f_2 = Local_2573.f_2;
						Local_2573.f_2 = fVar3;
					}
					Local_2570 = { Local_2570 - Vector(fLocal_1317, fLocal_1317, fLocal_1317) };
					Local_2573 = { Local_2573 + Vector(fLocal_1317, fLocal_1317, fLocal_1317) };
					unk_0xEB1F3AEB071C6A9E(Local_2570, Local_2573, 0, 0);
					fLocal_1313 = fVar1;
					iLocal_1870 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			uVar0 = unk_0x579D32FAAD5CA6B8(iParam0);
			if (iLocal_1873 == 0)
			{
				Local_2576 = { unk_0x13F97659039A0D0E(uVar0, fLocal_1314) };
				iLocal_1873++;
			}
			else if (iLocal_1873 == 1)
			{
				Local_2579 = { unk_0x13F97659039A0D0E(uVar0, fVar2) };
				iLocal_1873++;
			}
			else if (!bLocal_150 && !bVar4)
			{
				if (Local_2576.f_0 > Local_2579.f_0)
				{
					fVar3 = Local_2576.f_0;
					Local_2576.f_0 = Local_2579.f_0;
					Local_2579.f_0 = fVar3;
				}
				if (Local_2576.f_1 > Local_2579.f_1)
				{
					fVar3 = Local_2576.f_1;
					Local_2576.f_1 = Local_2579.f_1;
					Local_2579.f_1 = fVar3;
				}
				if (Local_2576.f_2 > Local_2579.f_2)
				{
					fVar3 = Local_2576.f_2;
					Local_2576.f_2 = Local_2579.f_2;
					Local_2579.f_2 = fVar3;
				}
				Local_2576 = { Local_2576 - Vector(fLocal_1317, fLocal_1317, fLocal_1317) };
				Local_2579 = { Local_2579 + Vector(fLocal_1317, fLocal_1317, fLocal_1317) };
				unk_0xFEA6E2B6E5CAFC2E(Local_2576, Local_2579, 1);
				fLocal_1314 = fVar2;
				iLocal_1873 = 0;
			}
		}
	}
}

void func_413()
{
	unk_0x3DD1ED742E99F292(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, 0, 1);
	unk_0x24E17EE0B44D9A19(0);
	unk_0x14EDFFB16F85839D(0);
	unk_0x9897700A81F3DE35(0);
	unk_0xCDE668E40D482687(0f);
	unk_0xB740337582B8FF04(0);
	unk_0xAFFB324194E5B6B2(3);
}

void func_414()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if ((unk_0x48E480685981C7D4() - iLocal_3247) > 3)
	{
		iVar0 = 0;
		iVar1 = iLocal_3003;
		iVar2 = iLocal_2830;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (iLocal_1576[iVar0] > 0)
			{
				if (fLocal_3265 > (fLocal_871[iVar0] - 5000f))
				{
					unk_0x995DCDA796A47049(iLocal_1576[iVar0], sLocal_3295);
				}
				else if (fLocal_3265 > (fLocal_871[iVar0] + 3000f))
				{
					if (!unk_0xE20321A2D7F8960C(iLocal_3003[iVar0]))
					{
						unk_0x4855165A2773595C(iLocal_1576[iVar0], sLocal_3295);
					}
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iVar2)
		{
			if (iLocal_1318[iVar0] > 0)
			{
				if (fLocal_3265 > (fLocal_497[iVar0] - 5000f))
				{
					unk_0x995DCDA796A47049(iLocal_1318[iVar0], sLocal_3295);
				}
				else if (fLocal_3265 > (fLocal_497[iVar0] + 3000f))
				{
					if (!unk_0xE20321A2D7F8960C(iLocal_2830[iVar0]))
					{
						unk_0x4855165A2773595C(iLocal_1318[iVar0], sLocal_3295);
					}
				}
			}
			iVar0++;
		}
		iLocal_3247 = unk_0x48E480685981C7D4();
	}
}

void func_415()
{
	if (iLocal_3262 == 0)
	{
		func_264(75, 1, 0, 1, 0);
		func_264(76, 0, 0, 1, 0);
		iLocal_3261 = unk_0xA17AB437A96481B6(307.3065f, -589.9595f, 43.302f, "v_hospital");
		iLocal_3262 = 1;
	}
	else if (iLocal_3262 == 1)
	{
		if (!func_45())
		{
			if (unk_0x59F36F53A82C2E72(iLocal_3261))
			{
				if (!unk_0x9B710BA2688DD221(iLocal_3261))
				{
					unk_0xC9C56731782E64CD(iLocal_3261);
				}
				else
				{
					unk_0xFE2FA265213691DE(iLocal_3261, 1);
					iLocal_3262 = 2;
				}
			}
			else
			{
				iLocal_3261 = unk_0xA17AB437A96481B6(307.3065f, -589.9595f, 43.302f, "v_hospital");
			}
		}
	}
	else if (iLocal_3262 == 2)
	{
		if (unk_0x59F36F53A82C2E72(iLocal_3261))
		{
			if (unk_0x9B710BA2688DD221(iLocal_3261))
			{
				func_264(181, 0, 0, 1, 0);
				iLocal_3262 = 3;
			}
			else
			{
				iLocal_3262 = 1;
			}
		}
		else
		{
			iLocal_3262 = 1;
		}
	}
	else if (iLocal_3262 == 3)
	{
		if (!func_45())
		{
			if (unk_0x59F36F53A82C2E72(iLocal_3261))
			{
				if (unk_0x9B710BA2688DD221(iLocal_3261))
				{
					unk_0x5ECFE61A5CEFED37(iLocal_3261);
					iLocal_3262 = 4;
				}
				else
				{
					unk_0xC9C56731782E64CD(iLocal_3261);
				}
			}
			else
			{
				iLocal_3261 = unk_0xA17AB437A96481B6(307.3065f, -589.9595f, 43.302f, "v_hospital");
			}
		}
	}
	else if (iLocal_3262 == 4)
	{
		if (unk_0x59F36F53A82C2E72(iLocal_3261))
		{
			if (!unk_0x9B710BA2688DD221(iLocal_3261))
			{
				unk_0xC9C56731782E64CD(iLocal_3261);
			}
		}
		else
		{
			iLocal_3261 = unk_0xA17AB437A96481B6(307.3065f, -589.9595f, 43.302f, "v_hospital");
		}
	}
}

void func_416(float fParam0, struct<3> Param1)
{
	float fVar0;
	
	if (func_13(Local_3533[0 /*2*/]))
	{
		unk_0x270A692BBE168A81(Local_3533[0 /*2*/], 1, 1);
		unk_0x270A692BBE168A81(Local_3533[0 /*2*/], 0, 1);
		if (fLocal_3265 > 10000f)
		{
			fVar0 = unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(Local_3533[0 /*2*/], 1), Param1);
			if (fVar0 > 14400f)
			{
				func_48(&(Local_3533[0 /*2*/]), 0);
			}
		}
	}
	if (func_13(Local_3533[1 /*2*/]))
	{
		if (fLocal_3265 > 10000f)
		{
			fVar0 = unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(Local_3533[1 /*2*/], 1), Param1);
			if (fVar0 > 14400f)
			{
				func_48(&(Local_3533[1 /*2*/]), 0);
			}
		}
	}
	if (func_13(Local_3533[2 /*2*/]))
	{
		if (Local_3503.f_1 == 0)
		{
			unk_0x32A12757CBF48A33(iLocal_3269);
			if (unk_0x33ACB874CECA2D4B(iLocal_3269))
			{
				if (!unk_0x86CCCD2FAE9D5E65(Local_3503.f_0))
				{
					Local_3503.f_0 = unk_0x4D135F3066A9BF9C(Local_3533[2 /*2*/], 26, iLocal_3269, -1, 1, 1);
					unk_0x887F4488DA99FD21(iLocal_3269);
					unk_0x1D15D99A10A15334(Local_3503.f_0, 1);
					Local_3503.f_1 = 1;
				}
			}
			if (!unk_0xE20321A2D7F8960C(Local_3533[2 /*2*/]))
			{
				unk_0x5D6F89F6DD9B0781(Local_3533[2 /*2*/], 0.0269f, 0.0079f, -0.4791f, 0.8773f);
			}
		}
		if (!unk_0xE20321A2D7F8960C(Local_3533[2 /*2*/]))
		{
			if (!iLocal_3235)
			{
				if (fLocal_3265 >= 200f)
				{
					unk_0xC8F62804B10A6701(Local_3533[2 /*2*/], 2, sLocal_3295, 1);
					unk_0x1248DFEEEEE716FC(Local_3533[2 /*2*/], fParam0);
					iLocal_3235 = 1;
				}
			}
		}
		else
		{
			unk_0x1248DFEEEEE716FC(Local_3533[2 /*2*/], fParam0);
			if (!iLocal_3209)
			{
				if (fLocal_3265 > 3500f && fLocal_3265 < 4500f)
				{
					unk_0xF5194DC958E2700A(Local_3533[2 /*2*/], 2000, unk_0x8DAF7A748E41AD46("HELDDOWN"), 0);
					iLocal_3209 = 1;
				}
			}
		}
		if (fLocal_3265 > 10000f)
		{
			fVar0 = unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(Local_3533[2 /*2*/], 1), Param1);
			if (fVar0 > 14400f)
			{
				if (unk_0xE20321A2D7F8960C(Local_3533[2 /*2*/]))
				{
					unk_0x05ACEF4F060B9B4E(Local_3533[2 /*2*/]);
				}
				unk_0x4855165A2773595C(2, sLocal_3295);
				unk_0x887F4488DA99FD21(iLocal_3269);
				func_52(&Local_3503, 0);
				func_48(&(Local_3533[2 /*2*/]), 0);
			}
		}
	}
}

void func_417()
{
	switch (iLocal_3106)
	{
		case 0:
			if (!bLocal_3168)
			{
				if (!func_45())
				{
					func_16(unk_0x81873881071CD9FE(), -1309.016f, -641.8671f, 25.5017f, 242.3463f, 0, 0);
					if (iLocal_3169 == 0)
					{
						if (iLocal_3105 == 1)
						{
							if (func_10(unk_0x81873881071CD9FE()))
							{
								func_3(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 50f, 13, 5000, 0, 0);
								iLocal_3169 = 1;
							}
						}
					}
					func_16(unk_0x81873881071CD9FE(), -1309.016f, -641.8671f, 25.5017f, 242.3463f, 1, 1);
				}
				func_54(&(Local_3107.f_28[0]));
				func_50(&(Local_3107.f_35[0]));
				func_50(&(Local_3107.f_35[1]));
				func_440();
				func_438(1);
				func_435();
				if (func_13(Local_3489.f_0))
				{
					unk_0x5CC9D6711FE01F0D(Local_3489.f_0);
				}
				func_416(fLocal_3267, Local_3555);
				func_428(1);
				iLocal_3106 = 2;
			}
			else
			{
				func_427("NMT_2_RCM", 0);
				if (unk_0xFE489BA9CA22B147())
				{
					unk_0x4A379EBEE935C3A0(sLocal_3300, 4, 0, 0, Local_3482.f_1);
				}
				if (func_35(1, 1093140480, 0))
				{
					if (func_10(Local_3107.f_35[0]))
					{
						func_426(&Local_3489, &(Local_3107.f_35[0]));
					}
					if (func_10(Local_3489.f_0))
					{
						unk_0x4F7552F76F378DB7(Local_3489.f_0);
						unk_0xCEDA5B7DDF6C8846(Local_3489.f_0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					if (func_10(Local_3107.f_35[1]))
					{
						func_426(&Local_3496, &(Local_3107.f_35[1]));
					}
					if (func_10(Local_3496.f_0))
					{
						unk_0x4F7552F76F378DB7(Local_3496.f_0);
						unk_0xCEDA5B7DDF6C8846(Local_3496.f_0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					unk_0x991ABCA492D8C897(unk_0x81873881071CD9FE(), sLocal_3299, 0, 0, 0);
					unk_0x991ABCA492D8C897(Local_3475.f_0, sLocal_3298, 2, Local_3475.f_1, 0);
					unk_0x991ABCA492D8C897(Local_3468.f_0, sLocal_3297, 2, Local_3468.f_1, 0);
					unk_0x991ABCA492D8C897(Local_3482.f_0, sLocal_3300, 2, Local_3482.f_1, 0);
					if (func_13(Local_3489.f_0))
					{
						unk_0x991ABCA492D8C897(Local_3489.f_0, sLocal_3301, 0, 0, 0);
					}
					else
					{
						func_50(&(Local_3107.f_35[0]));
						func_50(&Local_3489);
						unk_0x991ABCA492D8C897(Local_3489.f_0, sLocal_3301, 2, Local_3489.f_1, 0);
					}
					if (func_13(Local_3496.f_0))
					{
						unk_0x991ABCA492D8C897(Local_3496.f_0, sLocal_3302, 0, 0, 0);
					}
					else
					{
						func_50(&(Local_3107.f_35[1]));
						func_50(&Local_3496);
						unk_0x991ABCA492D8C897(Local_3496.f_0, sLocal_3302, 2, Local_3496.f_1, 0);
					}
					func_21(800, 0);
					unk_0xE8F8B47D8785FAD4(1);
					unk_0x5632EA201EAF956B(0);
					unk_0x4EDE34FBADD967A6(0);
					func_425();
					func_289(-1310.7f, -640.22f, 26.54f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
					func_440();
					func_54(&(Local_3107.f_28[0]));
					unk_0xCDE668E40D482687(0.3f);
					unk_0x2EC65073E30146EC(0.3f);
					func_438(0);
					func_416(fLocal_3267, Local_3555);
					iLocal_3106 = 1;
				}
			}
			break;
		
		case 1:
			func_416(fLocal_3267, Local_3555);
			if (!unk_0x86CCCD2FAE9D5E65(Local_3475.f_0))
			{
				if (unk_0x86CCCD2FAE9D5E65(unk_0x2BC7A45CC713648A(sLocal_3298, 0)))
				{
					Local_3475.f_0 = unk_0x8F1CCE5AF629C4D3(unk_0x2BC7A45CC713648A(sLocal_3298, 0));
				}
			}
			if (!unk_0x86CCCD2FAE9D5E65(Local_3468.f_0))
			{
				if (unk_0x86CCCD2FAE9D5E65(unk_0x2BC7A45CC713648A(sLocal_3297, 0)))
				{
					Local_3468.f_0 = unk_0x8F1CCE5AF629C4D3(unk_0x2BC7A45CC713648A(sLocal_3297, 0));
				}
			}
			if (!unk_0x86CCCD2FAE9D5E65(Local_3482.f_0))
			{
				if (unk_0x86CCCD2FAE9D5E65(unk_0x2BC7A45CC713648A(sLocal_3300, 0)))
				{
					Local_3482.f_0 = unk_0x8F1CCE5AF629C4D3(unk_0x2BC7A45CC713648A(sLocal_3300, 0));
				}
			}
			if (!unk_0x86CCCD2FAE9D5E65(Local_3489.f_0))
			{
				if (unk_0x86CCCD2FAE9D5E65(unk_0x2BC7A45CC713648A(sLocal_3301, 0)))
				{
					Local_3489.f_0 = unk_0x522C7043B2B961F9(unk_0x2BC7A45CC713648A(sLocal_3301, 0));
				}
			}
			if (!unk_0x86CCCD2FAE9D5E65(Local_3496.f_0))
			{
				if (unk_0x86CCCD2FAE9D5E65(unk_0x2BC7A45CC713648A(sLocal_3302, 0)))
				{
					Local_3496.f_0 = unk_0x522C7043B2B961F9(unk_0x2BC7A45CC713648A(sLocal_3302, 0));
				}
			}
			if ((func_13(Local_3489.f_0) && func_20(Local_3475.f_0)) && func_20(Local_3468.f_0))
			{
				if (unk_0x673E6879232705DA(sLocal_3298, 0))
				{
					unk_0x30550E796AC03903();
					if (!unk_0x58A69336FE7307D8(Local_3475.f_0, Local_3489.f_0))
					{
						unk_0xDC81A805934C85CD(Local_3475.f_0, Local_3489.f_0, 0);
					}
					func_424();
				}
				if (unk_0x673E6879232705DA(sLocal_3297, 0))
				{
					if (!unk_0x58A69336FE7307D8(Local_3468.f_0, Local_3489.f_0))
					{
						unk_0xDC81A805934C85CD(Local_3468.f_0, Local_3489.f_0, 2);
					}
					func_423();
				}
				if (unk_0x673E6879232705DA(sLocal_3301, 0))
				{
					func_422();
					unk_0xE6116B2B5D358CE9(Local_3489.f_0, 1);
					unk_0x5CC9D6711FE01F0D(Local_3489.f_0);
					unk_0x64DE271111FD16A3(Local_3489.f_0);
				}
				unk_0x24EECED9B6A1B569(Local_3489.f_0, 1);
				iLocal_3242 = 1;
			}
			if (func_13(Local_3496.f_0) && func_20(Local_3482.f_0))
			{
				if (unk_0x673E6879232705DA(sLocal_3300, 0))
				{
					if (!unk_0x58A69336FE7307D8(Local_3482.f_0, Local_3496.f_0))
					{
						unk_0xDC81A805934C85CD(Local_3482.f_0, Local_3496.f_0, -1);
					}
					func_420();
				}
				if (unk_0x673E6879232705DA(sLocal_3302, 0))
				{
					func_418();
					unk_0xE6116B2B5D358CE9(Local_3496.f_0, 1);
					unk_0x64DE271111FD16A3(Local_3496.f_0);
				}
			}
			if (unk_0x1787C7476F17BD5C(0))
			{
				unk_0x270066FDBAF3A458(22f);
				unk_0xEAB527164AD92BF3(0f, 1065353216);
			}
			if (unk_0xB996DE7223D9DA79() && unk_0x29AFA2493D7C23D0())
			{
				unk_0xA450601E968044DB(-1312.556f, -664.3428f, 25.5716f, 150f, 0, 0, 0, 0, 0);
			}
			if (!unk_0x521385D8214D27C4())
			{
				func_438(1);
				func_435();
				func_428(0);
				iLocal_3106 = 2;
			}
			else
			{
				if (unk_0x9317F2B481D935D4() >= 104000)
				{
					unk_0xDE1125A413AF241C(2, 18, 1);
				}
				if (unk_0x9317F2B481D935D4() > 900 && unk_0x9317F2B481D935D4() < 1480)
				{
					unk_0xCDE668E40D482687(0f);
					unk_0x2EC65073E30146EC(0f);
				}
				else
				{
					unk_0xCDE668E40D482687(0.3f);
					unk_0x2EC65073E30146EC(0.3f);
				}
				func_438(0);
			}
			break;
		
		case 2:
			if (func_13(Local_3489.f_0))
			{
				unk_0x24EECED9B6A1B569(Local_3489.f_0, 1);
				iLocal_3242 = 1;
			}
			if (unk_0x521385D8214D27C4())
			{
				unk_0x30E4A4CF320834D9(0);
			}
			else
			{
				if (unk_0x0A11B2F86364F5B7())
				{
					unk_0x9AF02897E594E920();
				}
				if (bLocal_3168)
				{
					func_23(1, 1, 1, 1);
					func_30(0, 0, 1, 0);
				}
				iLocal_3241 = 0;
				func_526(&Local_3107, 0, 1);
				func_416(fLocal_3267, Local_3555);
				func_287(1);
			}
			break;
	}
}

void func_418()
{
	if (func_13(Local_3496.f_0))
	{
		unk_0x4F7552F76F378DB7(Local_3496.f_0);
		unk_0xC390A6485FB80923(Local_3496.f_0, 1);
		unk_0xFD021BAF9614D437(Local_3496.f_0, 0, 0);
		unk_0x686D6CDC14C4BA6C(Local_3496.f_0, 1, 1);
		unk_0xDD213338390D43E1(Local_3496.f_0, 0);
		unk_0x50C9C2E3327FDF31(Local_3496.f_0, 1);
		unk_0xDEE6369ABB2B517A(Local_3496.f_0, 1);
		unk_0x9765BF567DB87B5F(Local_3496.f_0, 2000);
		unk_0x5C4323DE75B3DA5B(Local_3496.f_0, 1);
		unk_0xC81A8F418917F5CD(Local_3496.f_0, 0);
		unk_0x832B978B0A9D2169(Local_3496.f_0, 0);
		unk_0x8F26EC305B587F81(Local_3496.f_0, 0);
		unk_0x9523562C21915B31(Local_3496.f_0, 0, 1);
		unk_0xC390A6485FB80923(Local_3496.f_0, 3);
		unk_0x3A4534184B10B6D4(Local_3496.f_0, 0, 0);
		unk_0xB5A91586385F755B(Local_3496.f_1, 1);
		func_419(Local_3496.f_0, 1);
		unk_0xB067093BBAF0A747(Local_3496.f_0, Local_3496.f_3, 1, 0, 0, 1);
		unk_0x5D6F89F6DD9B0781(Local_3496.f_0, -0.0248f, 0.0004f, 0.8949f, 0.4456f);
		unk_0xA8F22633ACC22189(Local_3496.f_0, 1);
	}
}

void func_419(var uParam0, int iParam1)
{
	Global_90809.f_22[iParam1] = uParam0;
}

void func_420()
{
	if (func_20(Local_3482.f_0))
	{
		unk_0x03F73D35E5AC583A(Local_3482.f_0, 4, 0, 0, 0);
		unk_0xCC3B713B19102AAC(Local_3482.f_1, 1);
		unk_0x33B1E568CEF14B0D(Local_3482.f_0, 0);
		unk_0xE41981FA07A67E46(Local_3482.f_0, 0);
		unk_0xCE566DBDCACD245E(Local_3482.f_0, 32, 0);
		unk_0xCE566DBDCACD245E(Local_3482.f_0, 29, 0);
		unk_0xCE566DBDCACD245E(Local_3482.f_0, 116, 0);
		unk_0xCF01B06C83451A7F(Local_3482.f_0, 1);
		unk_0x3B7AFF7DCE22C1CF(Local_3482.f_0, 1);
		if (unk_0xCD67A1A6022640ED(Local_3482.f_0))
		{
			unk_0x6EC15FE0ADD3E99C(Local_3482.f_0);
		}
		unk_0x506A601663C5417C(Local_3482.f_0, iLocal_3285);
		func_421(&uLocal_3303, 3, Local_3482.f_0, "DINAPOLI", 0, 1);
		unk_0xA7ED59066FB82067(Local_3482.f_0, 1);
		unk_0x1D15D99A10A15334(Local_3482.f_0, 1);
	}
}

void func_421(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69020)
	{
		if (!unk_0x5FEB513A4402FD59(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xE814EBF9E6A3FB47(iParam2, 0);
			}
			else
			{
				unk_0xE814EBF9E6A3FB47(iParam2, 1);
			}
		}
		if (!unk_0x5FEB513A4402FD59(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7ED59066FB82067(iParam2, 0);
			}
			else
			{
				unk_0xA7ED59066FB82067(iParam2, 1);
			}
		}
	}
}

void func_422()
{
	if (func_13(Local_3489.f_0))
	{
		unk_0x4F7552F76F378DB7(Local_3489.f_0);
		unk_0xC390A6485FB80923(Local_3489.f_0, 1);
		unk_0xFD021BAF9614D437(Local_3489.f_0, 65, 0);
		unk_0x50C9C2E3327FDF31(Local_3489.f_0, 1);
		unk_0xDEE6369ABB2B517A(Local_3489.f_0, 1);
		unk_0x9765BF567DB87B5F(Local_3489.f_0, 2000);
		unk_0xC81A8F418917F5CD(Local_3489.f_0, 0);
		unk_0x832B978B0A9D2169(Local_3489.f_0, 0);
		unk_0x3A4534184B10B6D4(Local_3489.f_0, 5, 0);
		unk_0xB5A91586385F755B(Local_3489.f_1, 1);
		unk_0x7DB4FC1A893751E2(Local_3489.f_0);
		func_419(Local_3489.f_0, 0);
	}
}

void func_423()
{
	if (func_20(Local_3468.f_0))
	{
		unk_0x8A7A890067E00092(Local_3468.f_0);
		unk_0xCC3B713B19102AAC(Local_3468.f_1, 1);
		unk_0x33B1E568CEF14B0D(Local_3468.f_0, 0);
		unk_0x2644F84BE1F3524B(Local_3468.f_0, 0);
		unk_0xCE566DBDCACD245E(Local_3468.f_0, 32, 0);
		unk_0xCE566DBDCACD245E(Local_3468.f_0, 132, 1);
		unk_0xCE566DBDCACD245E(Local_3468.f_0, 29, 0);
		unk_0xCE566DBDCACD245E(Local_3468.f_0, 116, 0);
		if (unk_0xCD67A1A6022640ED(Local_3468.f_0))
		{
			unk_0x6EC15FE0ADD3E99C(Local_3468.f_0);
		}
		unk_0x506A601663C5417C(Local_3468.f_0, iLocal_3286);
		func_421(&uLocal_3303, 5, Local_3468.f_0, "MRSTHORNHILL", 0, 1);
		unk_0xA7ED59066FB82067(Local_3468.f_0, 1);
		unk_0x1D15D99A10A15334(Local_3468.f_0, 1);
	}
}

void func_424()
{
	if (func_20(Local_3475.f_0))
	{
		unk_0x8A7A890067E00092(Local_3475.f_0);
		unk_0xCC3B713B19102AAC(Local_3475.f_1, 1);
		unk_0x33B1E568CEF14B0D(Local_3475.f_0, 0);
		unk_0x2644F84BE1F3524B(Local_3475.f_0, 0);
		unk_0xCE566DBDCACD245E(Local_3475.f_0, 32, 0);
		unk_0xCE566DBDCACD245E(Local_3475.f_0, 132, 1);
		unk_0xCE566DBDCACD245E(Local_3475.f_0, 29, 0);
		unk_0xCE566DBDCACD245E(Local_3475.f_0, 116, 0);
		if (unk_0xCD67A1A6022640ED(Local_3475.f_0))
		{
			unk_0x6EC15FE0ADD3E99C(Local_3475.f_0);
		}
		unk_0x506A601663C5417C(Local_3475.f_0, iLocal_3286);
		func_421(&uLocal_3303, 4, Local_3475.f_0, "NIGEL", 0, 1);
		unk_0xA7ED59066FB82067(Local_3475.f_0, 1);
		unk_0x1D15D99A10A15334(Local_3475.f_0, 1);
	}
}

void func_425()
{
	int iVar0;
	
	iVar0 = func_283();
	if (iVar0 == -1)
	{
		return;
	}
	Global_98018[iVar0 /*10*/] = 1;
}

void func_426(int iParam0, var uParam1)
{
	*iParam0 = *uParam1;
	*uParam1 = 0;
}

void func_427(char* sParam0, bool bParam1)
{
	func_292(bParam1);
	unk_0x0ADAEB274E23621D(sParam0, 8);
}

void func_428(bool bParam0)
{
	func_434(sLocal_3295, iLocal_3257, bParam0, 1);
	func_433();
	func_432(1);
	func_431(joaat("a_m_m_bevhills_02"));
	func_376();
	fLocal_1309 = 250f;
	bLocal_141 = true;
	func_430(1);
	bLocal_147 = true;
	func_429(1, 0, -1);
	unk_0xDD17978B9F91686B(2);
}

void func_429(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		iLocal_142 = 1;
		iLocal_2828 = iParam1;
		iLocal_2829 = iParam2;
	}
}

void func_430(bool bParam0)
{
	bLocal_152 = bParam0;
}

void func_431(int iParam0)
{
	iLocal_2827 = iParam0;
}

void func_432(int iParam0)
{
	bLocal_146 = iParam0;
}

void func_433()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Local_1877[0 /*3*/] = { -1189.919f, -864.3419f, 13.5062f };
	fLocal_153[0] = 0.011f;
	fLocal_239[0] = -0.0057f;
	fLocal_325[0] = -0.4728f;
	fLocal_411[0] = 0.8811f;
	iLocal_1318[0] = 3;
	fLocal_497[0] = 12794f;
	iLocal_2599[0] = joaat("f620");
	Local_1877[1 /*3*/] = { -1168.025f, -846.5394f, 13.8245f };
	fLocal_153[1] = 0.0067f;
	fLocal_239[1] = 0.0025f;
	fLocal_325[1] = 0.3507f;
	fLocal_411[1] = 0.9364f;
	iLocal_1318[1] = 4;
	fLocal_497[1] = 12926f;
	iLocal_2599[1] = joaat("washington");
	Local_1877[2 /*3*/] = { -1052.359f, -730.7704f, 18.729f };
	fLocal_153[2] = -0.0125f;
	fLocal_239[2] = -0.0121f;
	fLocal_325[2] = 0.9079f;
	fLocal_411[2] = 0.4187f;
	iLocal_1318[2] = 14;
	fLocal_497[2] = 19594.96f;
	iLocal_2599[2] = joaat("serrano");
	Local_1877[3 /*3*/] = { -1050.453f, -743.3076f, 18.7718f };
	fLocal_153[3] = -0.0019f;
	fLocal_239[3] = -0.0002f;
	fLocal_325[3] = -0.3894f;
	fLocal_411[3] = 0.9211f;
	iLocal_1318[3] = 6;
	fLocal_497[3] = 20400f;
	iLocal_2599[3] = joaat("washington");
	Local_1877[4 /*3*/] = { -1032.554f, -734.0855f, 19.1223f };
	fLocal_153[4] = 0.0233f;
	fLocal_239[4] = -0.0077f;
	fLocal_325[4] = -0.4212f;
	fLocal_411[4] = 0.9066f;
	iLocal_1318[4] = 16;
	fLocal_497[4] = 19960.85f;
	iLocal_2599[4] = joaat("serrano");
	Local_1877[5 /*3*/] = { -865.4848f, -623.928f, 28.3187f };
	fLocal_153[5] = 0.0038f;
	fLocal_239[5] = -0.0257f;
	fLocal_325[5] = 0.9893f;
	fLocal_411[5] = -0.1433f;
	iLocal_1318[5] = 7;
	fLocal_497[5] = 28417f;
	iLocal_2599[5] = joaat("washington");
	Local_1877[6 /*3*/] = { -869.6063f, -612.9931f, 28.5539f };
	fLocal_153[6] = 0.005f;
	fLocal_239[6] = -0.0119f;
	fLocal_325[6] = 0.9777f;
	fLocal_411[6] = -0.2094f;
	iLocal_1318[6] = 8;
	fLocal_497[6] = 28417f;
	iLocal_2599[6] = joaat("serrano");
	Local_1877[7 /*3*/] = { -853.7338f, -652.7806f, 27.3348f };
	fLocal_153[7] = -0.0022f;
	fLocal_239[7] = -0.0021f;
	fLocal_325[7] = 0.7085f;
	fLocal_411[7] = 0.7057f;
	iLocal_1318[7] = 9;
	fLocal_497[7] = 28549f;
	iLocal_2599[7] = joaat("serrano");
	Local_1877[8 /*3*/] = { -797.3943f, -667.453f, 28.1434f };
	fLocal_153[8] = 0.0434f;
	fLocal_239[8] = 0.0031f;
	fLocal_325[8] = -0.7039f;
	fLocal_411[8] = 0.709f;
	iLocal_1318[8] = 10;
	fLocal_497[8] = 30654f;
	iLocal_2599[8] = joaat("feltzer2");
	Local_1877[9 /*3*/] = { -728.5153f, -661.8074f, 29.8396f };
	fLocal_153[9] = -0.0017f;
	fLocal_239[9] = 0.0032f;
	fLocal_325[9] = -0.7028f;
	fLocal_411[9] = 0.7114f;
	iLocal_1318[9] = 11;
	fLocal_497[9] = 33027f;
	iLocal_2599[9] = joaat("rapidgt");
	Local_1877[10 /*3*/] = { -595.1748f, -661.9557f, 31.8497f };
	fLocal_153[10] = 0.0098f;
	fLocal_239[10] = -0.0088f;
	fLocal_325[10] = -0.7017f;
	fLocal_411[10] = 0.7123f;
	iLocal_1318[10] = 15;
	fLocal_497[10] = 48186f;
	iLocal_2599[10] = joaat("sultan");
	Local_1877[11 /*3*/] = { -477.1852f, -644.7173f, 32.0538f };
	fLocal_153[11] = -0.0087f;
	fLocal_239[11] = 0.0318f;
	fLocal_325[11] = 0.0461f;
	fLocal_411[11] = 0.9984f;
	iLocal_1318[11] = 17;
	fLocal_497[11] = 55765.85f;
	iLocal_2599[11] = joaat("serrano");
	Local_1877[12 /*3*/] = { -489.0458f, -666.3751f, 32.3303f };
	fLocal_153[12] = 0.0113f;
	fLocal_239[12] = 0.0176f;
	fLocal_325[12] = -0.7063f;
	fLocal_411[12] = 0.7076f;
	iLocal_1318[12] = 23;
	fLocal_497[12] = 58613f;
	iLocal_2599[12] = joaat("asterope");
	Local_1877[13 /*3*/] = { -487.5655f, -744.9453f, 32.6015f };
	fLocal_153[13] = -0.0937f;
	fLocal_239[13] = 0.045f;
	fLocal_325[13] = 0.8793f;
	fLocal_411[13] = 0.4648f;
	iLocal_1318[13] = 19;
	fLocal_497[13] = 60459.32f;
	iLocal_2599[13] = joaat("bmx");
	Local_1877[14 /*3*/] = { -478.1905f, -835.1024f, 29.9746f };
	fLocal_153[14] = -0.0021f;
	fLocal_239[14] = -0.0021f;
	fLocal_325[14] = 0.7008f;
	fLocal_411[14] = 0.7134f;
	iLocal_1318[14] = 18;
	fLocal_497[14] = 64923.85f;
	iLocal_2599[14] = joaat("serrano");
	Local_1877[15 /*3*/] = { -430.6053f, -816.6718f, 36.8249f };
	fLocal_153[15] = -0.0001f;
	fLocal_239[15] = 0.0048f;
	fLocal_325[15] = 0.9993f;
	fLocal_411[15] = 0.0373f;
	iLocal_1318[15] = 28;
	fLocal_497[15] = 68551f;
	iLocal_2599[15] = joaat("asterope");
	Local_1877[16 /*3*/] = { -427.4086f, -762.012f, 36.6573f };
	fLocal_153[16] = 0.0001f;
	fLocal_239[16] = 0.0049f;
	fLocal_325[16] = 1f;
	fLocal_411[16] = 0.0047f;
	iLocal_1318[16] = 30;
	fLocal_497[16] = 70333f;
	iLocal_2599[16] = joaat("sultan");
	Local_1877[17 /*3*/] = { -476.9606f, -664.9507f, 31.9901f };
	fLocal_153[17] = -0.003f;
	fLocal_239[17] = -0.0083f;
	fLocal_325[17] = 0.7264f;
	fLocal_411[17] = -0.6872f;
	iLocal_1318[17] = 70;
	fLocal_497[17] = 77000f;
	iLocal_2599[17] = joaat("sultan");
	Local_1877[18 /*3*/] = { -436.342f, -650.5261f, 30.4239f };
	fLocal_153[18] = 0.0056f;
	fLocal_239[18] = 0.0224f;
	fLocal_325[18] = 0.7071f;
	fLocal_411[18] = 0.7068f;
	iLocal_1318[18] = 13;
	fLocal_497[18] = 77590f;
	iLocal_2599[18] = joaat("sultan");
	Local_1877[19 /*3*/] = { -420.96f, -656.3897f, 30.5754f };
	fLocal_153[19] = 0.0112f;
	fLocal_239[19] = 0.0112f;
	fLocal_325[19] = 0.707f;
	fLocal_411[19] = 0.707f;
	iLocal_1318[19] = 12;
	fLocal_497[19] = 78000f;
	iLocal_2599[19] = joaat("packer");
	Local_1877[20 /*3*/] = { -455.2408f, -535.85f, 24.7102f };
	fLocal_153[20] = -0.0022f;
	fLocal_239[20] = 0.0022f;
	fLocal_325[20] = -0.707f;
	fLocal_411[20] = 0.7072f;
	iLocal_1318[20] = 31;
	fLocal_497[20] = 80849f;
	iLocal_2599[20] = joaat("sultan");
	Local_1877[21 /*3*/] = { -421.8391f, -535.8503f, 24.7099f };
	fLocal_153[21] = -0.0024f;
	fLocal_239[21] = 0.0024f;
	fLocal_325[21] = -0.7071f;
	fLocal_411[21] = 0.7071f;
	iLocal_1318[21] = 32;
	fLocal_497[21] = 80849f;
	iLocal_2599[21] = joaat("sultan");
	Local_1877[22 /*3*/] = { -323.2696f, -519.5041f, 24.769f };
	fLocal_153[22] = -0.0086f;
	fLocal_239[22] = -0.0166f;
	fLocal_325[22] = -0.7001f;
	fLocal_411[22] = 0.7138f;
	iLocal_1318[22] = 34;
	fLocal_497[22] = 85280f;
	iLocal_2599[22] = joaat("asterope");
	Local_1877[23 /*3*/] = { -384.7831f, -496.5516f, 24.806f };
	fLocal_153[23] = -0.0022f;
	fLocal_239[23] = -0.0022f;
	fLocal_325[23] = 0.7072f;
	fLocal_411[23] = 0.7071f;
	iLocal_1318[23] = 33;
	fLocal_497[23] = 85722f;
	iLocal_2599[23] = joaat("landstalker");
	Local_1877[24 /*3*/] = { -299.8336f, -519.6835f, 24.804f };
	fLocal_153[24] = -0.0071f;
	fLocal_239[24] = -0.0166f;
	fLocal_325[24] = -0.7047f;
	fLocal_411[24] = 0.7093f;
	iLocal_1318[24] = 35;
	fLocal_497[24] = 86195f;
	iLocal_2599[24] = joaat("asterope");
	Local_1877[25 /*3*/] = { -296.6222f, -496.012f, 24.8684f };
	fLocal_153[25] = -0.0026f;
	fLocal_239[25] = -0.0022f;
	fLocal_325[25] = 0.7084f;
	fLocal_411[25] = 0.7058f;
	iLocal_1318[25] = 21;
	fLocal_497[25] = 87170.85f;
	iLocal_2599[25] = joaat("landstalker");
	Local_1877[26 /*3*/] = { -242.5362f, -502.0159f, 25.6451f };
	fLocal_153[26] = -0.0096f;
	fLocal_239[26] = -0.0094f;
	fLocal_325[26] = 0.7194f;
	fLocal_411[26] = 0.6945f;
	iLocal_1318[26] = 36;
	fLocal_497[26] = 88537f;
	iLocal_2599[26] = joaat("landstalker");
	Local_1877[27 /*3*/] = { -234.2082f, -530.1547f, 25.9344f };
	fLocal_153[27] = -0.0058f;
	fLocal_239[27] = 0.0064f;
	fLocal_325[27] = 0.7091f;
	fLocal_411[27] = -0.705f;
	iLocal_1318[27] = 39;
	fLocal_497[27] = 90066f;
	iLocal_2599[27] = joaat("rapidgt");
	Local_1877[28 /*3*/] = { -204.8521f, -534.9627f, 26.6094f };
	fLocal_153[28] = 0.0281f;
	fLocal_239[28] = 0.0002f;
	fLocal_325[28] = -0.6936f;
	fLocal_411[28] = 0.7198f;
	iLocal_1318[28] = 37;
	fLocal_497[28] = 91140f;
	iLocal_2599[28] = joaat("asterope");
	Local_1877[29 /*3*/] = { -186.2448f, -518.6406f, 27.3221f };
	fLocal_153[29] = -0.0061f;
	fLocal_239[29] = -0.0197f;
	fLocal_325[29] = -0.7053f;
	fLocal_411[29] = 0.7086f;
	iLocal_1318[29] = 41;
	fLocal_497[29] = 91890f;
	iLocal_2599[29] = joaat("fq2");
	Local_1877[30 /*3*/] = { -181.6259f, -523.8001f, 27.2923f };
	fLocal_153[30] = 0.0116f;
	fLocal_239[30] = -0.0124f;
	fLocal_325[30] = -0.7029f;
	fLocal_411[30] = 0.7111f;
	iLocal_1318[30] = 38;
	fLocal_497[30] = 92230f;
	iLocal_2599[30] = joaat("sultan");
	Local_1877[31 /*3*/] = { -152.8287f, -489.4706f, 28.3269f };
	fLocal_153[31] = -0.0213f;
	fLocal_239[31] = 0.0018f;
	fLocal_325[31] = 0.7254f;
	fLocal_411[31] = 0.688f;
	iLocal_1318[31] = 24;
	fLocal_497[31] = 92554.85f;
	iLocal_2599[31] = joaat("landstalker");
	Local_1877[32 /*3*/] = { -172.1277f, -500.8638f, 27.8326f };
	fLocal_153[32] = -0.0252f;
	fLocal_239[32] = -0.0296f;
	fLocal_325[32] = 0.7083f;
	fLocal_411[32] = 0.7048f;
	iLocal_1318[32] = 40;
	fLocal_497[32] = 94528f;
	iLocal_2599[32] = joaat("fq2");
	Local_1877[33 /*3*/] = { -114.866f, -500.2346f, 29.8111f };
	fLocal_153[33] = -0.0104f;
	fLocal_239[33] = -0.0098f;
	fLocal_325[33] = 0.7021f;
	fLocal_411[33] = 0.7119f;
	iLocal_1318[33] = 78;
	fLocal_497[33] = 95865.44f;
	iLocal_2599[33] = joaat("asterope");
	Local_1877[34 /*3*/] = { -129.1858f, -505.694f, 29.242f };
	fLocal_153[34] = -0.015f;
	fLocal_239[34] = -0.0163f;
	fLocal_325[34] = 0.7139f;
	fLocal_411[34] = 0.6999f;
	iLocal_1318[34] = 42;
	fLocal_497[34] = 95886f;
	iLocal_2599[34] = joaat("asterope");
	Local_1877[35 /*3*/] = { -55.6079f, -499.5939f, 31.8493f };
	fLocal_153[35] = -0.0116f;
	fLocal_239[35] = -0.0112f;
	fLocal_325[35] = 0.7134f;
	fLocal_411[35] = 0.7006f;
	iLocal_1318[35] = 25;
	fLocal_497[35] = 96787.85f;
	iLocal_2599[35] = joaat("landstalker");
	Local_1877[36 /*3*/] = { -87.112f, -504.988f, 30.9077f };
	fLocal_153[36] = -0.0159f;
	fLocal_239[36] = -0.0149f;
	fLocal_325[36] = 0.7118f;
	fLocal_411[36] = 0.702f;
	iLocal_1318[36] = 43;
	fLocal_497[36] = 97140f;
	iLocal_2599[36] = joaat("fq2");
	Local_1877[37 /*3*/] = { 26.5103f, -499.3918f, 34.2088f };
	fLocal_153[37] = -0.0005f;
	fLocal_239[37] = -0.0002f;
	fLocal_325[37] = 0.7186f;
	fLocal_411[37] = 0.6954f;
	iLocal_1318[37] = 79;
	fLocal_497[37] = 100001.4f;
	iLocal_2599[37] = joaat("packer");
	Local_1877[39 /*3*/] = { 70.5888f, -526.8503f, 33.7031f };
	fLocal_153[39] = -0.0004f;
	fLocal_239[39] = -0.0004f;
	fLocal_325[39] = -0.7039f;
	fLocal_411[39] = 0.7103f;
	iLocal_1318[39] = 46;
	fLocal_497[39] = 102948f;
	iLocal_2599[39] = joaat("ninef2");
	Local_1877[40 /*3*/] = { 99.8609f, -521.5526f, 33.5624f };
	fLocal_153[40] = 0.0145f;
	fLocal_239[40] = -0.0145f;
	fLocal_325[40] = 0.707f;
	fLocal_411[40] = -0.7069f;
	iLocal_1318[40] = 47;
	fLocal_497[40] = 104004f;
	iLocal_2599[40] = joaat("landstalker");
	Local_1877[41 /*3*/] = { 196.1974f, -526.9512f, 33.5498f };
	fLocal_153[41] = 0.0178f;
	fLocal_239[41] = -0.0178f;
	fLocal_325[41] = 0.7069f;
	fLocal_411[41] = -0.7068f;
	iLocal_1318[41] = 48;
	fLocal_497[41] = 107502f;
	iLocal_2599[41] = joaat("landstalker");
	Local_1877[42 /*3*/] = { 230.2825f, -516.1511f, 33.5591f };
	fLocal_153[42] = -0.0023f;
	fLocal_239[42] = 0.0023f;
	fLocal_325[42] = -0.7071f;
	fLocal_411[42] = 0.7071f;
	iLocal_1318[42] = 49;
	fLocal_497[42] = 108624f;
	iLocal_2599[42] = joaat("landstalker");
	Local_1877[44 /*3*/] = { 301.1906f, -521.55f, 33.4621f };
	fLocal_153[44] = 0.0001f;
	fLocal_239[44] = -0.0001f;
	fLocal_325[44] = 0.7071f;
	fLocal_411[44] = -0.7071f;
	iLocal_1318[44] = 50;
	fLocal_497[44] = 111198f;
	iLocal_2599[44] = joaat("sultan");
	Local_2133[0 /*3*/] = { -1200.091f, -849.0596f, 13.5431f };
	fLocal_1013[0] = -0.0171f;
	fLocal_1084[0] = -0.0063f;
	fLocal_1155[0] = 0.88f;
	fLocal_1226[0] = 0.4747f;
	iLocal_2685[0] = joaat("feltzer2");
	Local_2133[1 /*3*/] = { -1058.345f, -772.2757f, 18.8924f };
	fLocal_1013[1] = -0.0028f;
	fLocal_1084[1] = 0.0149f;
	fLocal_1155[1] = 0.3553f;
	fLocal_1226[1] = 0.9346f;
	iLocal_2685[1] = joaat("feltzer2");
	Local_2133[2 /*3*/] = { -1070.664f, -739.6081f, 18.8482f };
	fLocal_1013[2] = -0.0111f;
	fLocal_1084[2] = 0.0192f;
	fLocal_1155[2] = 0.9254f;
	fLocal_1226[2] = 0.3784f;
	iLocal_2685[2] = joaat("feltzer2");
	Local_2133[3 /*3*/] = { -1121.096f, -880.1656f, 7.6752f };
	fLocal_1013[3] = 0.0021f;
	fLocal_1084[3] = -0.0011f;
	fLocal_1155[3] = -0.4944f;
	fLocal_1226[3] = 0.8692f;
	iLocal_2685[3] = joaat("serrano");
	Local_2133[4 /*3*/] = { -1115.618f, -807.3134f, 16.6315f };
	fLocal_1013[4] = -0.0414f;
	fLocal_1084[4] = -0.0257f;
	fLocal_1155[4] = 0.8471f;
	fLocal_1226[4] = -0.5292f;
	iLocal_2685[4] = joaat("serrano");
	Local_2133[5 /*3*/] = { -1112.403f, -774.3158f, 18.3801f };
	fLocal_1013[5] = -0.0097f;
	fLocal_1084[5] = -0.0319f;
	fLocal_1155[5] = 0.5058f;
	fLocal_1226[5] = 0.862f;
	iLocal_2685[5] = joaat("serrano");
	Local_2133[6 /*3*/] = { -1130.529f, -792.3233f, 16.5972f };
	fLocal_1013[6] = -0.0307f;
	fLocal_1084[6] = -0.0293f;
	fLocal_1155[6] = 0.9133f;
	fLocal_1226[6] = 0.4051f;
	iLocal_2685[6] = joaat("feltzer2");
	Local_2133[7 /*3*/] = { -1045.39f, -778.9995f, 18.3863f };
	fLocal_1013[7] = 0.0118f;
	fLocal_1084[7] = 0.037f;
	fLocal_1155[7] = 0.5106f;
	fLocal_1226[7] = 0.859f;
	iLocal_2685[7] = joaat("serrano");
	Local_2133[8 /*3*/] = { -1034.826f, -739.7039f, 18.881f };
	fLocal_1013[8] = 0.0195f;
	fLocal_1084[8] = 0.019f;
	fLocal_1155[8] = -0.4353f;
	fLocal_1226[8] = 0.8999f;
	iLocal_2685[8] = joaat("radi");
	Local_2133[9 /*3*/] = { -1033.929f, -712.6562f, 19.4857f };
	fLocal_1013[9] = -0.0193f;
	fLocal_1084[9] = -0.0194f;
	fLocal_1155[9] = 0.9056f;
	fLocal_1226[9] = 0.4231f;
	iLocal_2685[9] = joaat("serrano");
	Local_2133[10 /*3*/] = { -1005.538f, -715.5715f, 20.3848f };
	fLocal_1013[10] = -0.044f;
	fLocal_1084[10] = -0.1329f;
	fLocal_1155[10] = -0.3895f;
	fLocal_1226[10] = 0.9103f;
	iLocal_2685[10] = joaat("bati");
	Local_2133[11 /*3*/] = { -980.4462f, -670.3936f, 22.8034f };
	fLocal_1013[11] = -0.0432f;
	fLocal_1084[11] = -0.0121f;
	fLocal_1155[11] = 0.8701f;
	fLocal_1226[11] = 0.4908f;
	iLocal_2685[11] = joaat("washington");
	Local_2133[12 /*3*/] = { -969.1606f, -664.5714f, 23.887f };
	fLocal_1013[12] = -0.046f;
	fLocal_1084[12] = -0.0213f;
	fLocal_1155[12] = 0.8534f;
	fLocal_1226[12] = 0.5187f;
	iLocal_2685[12] = joaat("rapidgt");
	Local_2133[13 /*3*/] = { -928.2644f, -652.7425f, 26.6901f };
	fLocal_1013[13] = -0.0303f;
	fLocal_1084[13] = -0.0054f;
	fLocal_1155[13] = 0.7573f;
	fLocal_1226[13] = 0.6524f;
	iLocal_2685[13] = joaat("rapidgt");
	Local_2133[14 /*3*/] = { -916.6693f, -650.6878f, 27.0863f };
	fLocal_1013[14] = -0.024f;
	fLocal_1084[14] = 0.0101f;
	fLocal_1155[14] = 0.7742f;
	fLocal_1226[14] = 0.6324f;
	iLocal_2685[14] = joaat("feltzer2");
	Local_2133[15 /*3*/] = { -790.8272f, -667.5106f, 28.4613f };
	fLocal_1013[15] = -0.0369f;
	fLocal_1084[15] = -0.005f;
	fLocal_1155[15] = 0.7209f;
	fLocal_1226[15] = -0.6921f;
	iLocal_2685[15] = joaat("rapidgt");
	Local_2133[16 /*3*/] = { -790.0645f, -647.0408f, 28.4882f };
	fLocal_1013[16] = -0.037f;
	fLocal_1084[16] = 0.0003f;
	fLocal_1155[16] = 0.7201f;
	fLocal_1226[16] = 0.6929f;
	iLocal_2685[16] = joaat("feltzer2");
	Local_2133[17 /*3*/] = { -716.8614f, -667.7233f, 29.6724f };
	fLocal_1013[17] = -0.0267f;
	fLocal_1084[17] = -0.0106f;
	fLocal_1155[17] = 0.7068f;
	fLocal_1226[17] = -0.7068f;
	iLocal_2685[17] = joaat("sultan");
	Local_2133[18 /*3*/] = { -653.5672f, -605.7774f, 32.8442f };
	fLocal_1013[18] = 0.0008f;
	fLocal_1084[18] = -0.0298f;
	fLocal_1155[18] = 0.9991f;
	fLocal_1226[18] = 0.031f;
	iLocal_2685[18] = joaat("radi");
	Local_2133[19 /*3*/] = { -598.4409f, -647.7642f, 31.2207f };
	fLocal_1013[19] = 0.0659f;
	fLocal_1084[19] = -0.1257f;
	fLocal_1155[19] = 0.6417f;
	fLocal_1226[19] = 0.7537f;
	iLocal_2685[19] = joaat("bati");
	Local_2133[20 /*3*/] = { -457.3376f, -774.9608f, 29.9679f };
	fLocal_1013[20] = -0.0002f;
	fLocal_1084[20] = 0f;
	fLocal_1155[20] = 0.7033f;
	fLocal_1226[20] = 0.7109f;
	iLocal_2685[20] = joaat("sultan");
	Local_2133[21 /*3*/] = { -506.0643f, -614.7634f, 29.6699f };
	fLocal_1013[21] = -0.0131f;
	fLocal_1084[21] = -0.1302f;
	fLocal_1155[21] = -0.0218f;
	fLocal_1226[21] = 0.9912f;
	iLocal_2685[21] = joaat("bati");
	Local_2133[22 /*3*/] = { -487.6026f, -614.804f, 30.58f };
	fLocal_1013[22] = 0.0002f;
	fLocal_1084[22] = 0f;
	fLocal_1155[22] = 0.9999f;
	fLocal_1226[22] = 0.0166f;
	iLocal_2685[22] = joaat("sultan");
	Local_2133[23 /*3*/] = { -856.7647f, -679.063f, 27.2491f };
	fLocal_1013[23] = -0.008f;
	fLocal_1084[23] = 0.0277f;
	fLocal_1155[23] = 0.0148f;
	fLocal_1226[23] = 0.9995f;
	iLocal_2685[23] = joaat("sultan");
	Local_2133[24 /*3*/] = { -750.8827f, -607.8928f, 29.5466f };
	fLocal_1013[24] = 0.0609f;
	fLocal_1084[24] = 0.0021f;
	fLocal_1155[24] = 0.9978f;
	fLocal_1226[24] = -0.0261f;
	iLocal_2685[24] = joaat("sultan");
	Local_2133[25 /*3*/] = { -477.1844f, -757.5135f, 30.1527f };
	fLocal_1013[25] = -0.0022f;
	fLocal_1084[25] = -0.0021f;
	fLocal_1155[25] = 0.7233f;
	fLocal_1226[25] = 0.6905f;
	iLocal_2685[25] = joaat("rapidgt");
	Local_2133[26 /*3*/] = { -471.01f, -624.55f, 30.58f };
	fLocal_1013[26] = 0.0001f;
	fLocal_1084[26] = -0.0002f;
	fLocal_1155[26] = -0.0144f;
	fLocal_1226[26] = 0.9999f;
	iLocal_2685[26] = joaat("sultan");
	Local_2133[27 /*3*/] = { -679.3469f, -593.3812f, 24.7059f };
	fLocal_1013[27] = -0.0011f;
	fLocal_1084[27] = 0.0004f;
	fLocal_1155[27] = 0.6772f;
	fLocal_1226[27] = 0.7358f;
	iLocal_2685[27] = joaat("sultan");
	Local_2133[28 /*3*/] = { 433.6576f, -608.7065f, 27.7732f };
	fLocal_1013[28] = -0.0003f;
	fLocal_1084[28] = 0.0005f;
	fLocal_1155[28] = 0.7774f;
	fLocal_1226[28] = -0.629f;
	iLocal_2685[28] = joaat("sultan");
	Local_2133[29 /*3*/] = { 416.3534f, -638.7431f, 27.8704f };
	fLocal_1013[29] = 0.0891f;
	fLocal_1084[29] = -0.0957f;
	fLocal_1155[29] = 0.7111f;
	fLocal_1226[29] = 0.6908f;
	iLocal_2685[29] = joaat("bati");
	Local_2133[30 /*3*/] = { 433.9501f, -603.2841f, 27.8743f };
	fLocal_1013[30] = 0.0794f;
	fLocal_1084[30] = -0.1039f;
	fLocal_1155[30] = 0.6505f;
	fLocal_1226[30] = 0.7482f;
	iLocal_2685[30] = joaat("bati");
	Local_2133[31 /*3*/] = { 291.0103f, -589.8865f, 42.9593f };
	fLocal_1013[31] = 0.0053f;
	fLocal_1084[31] = -0.0026f;
	fLocal_1155[31] = 0.9489f;
	fLocal_1226[31] = 0.3156f;
	iLocal_2685[31] = joaat("ambulance");
	Local_2344[0 /*3*/] = { -1104.283f, -775.1389f, 18.8468f };
	fLocal_587[0] = -0.0068f;
	fLocal_658[0] = -0.0121f;
	fLocal_729[0] = 0.9186f;
	fLocal_800[0] = 0.3949f;
	iLocal_1576[0] = 52;
	fLocal_871[0] = 16000f;
	fLocal_942[0] = 1f;
	iLocal_2756[0] = joaat("feltzer2");
	Local_2344[1 /*3*/] = { -1129.485f, -805.7412f, 15.9592f };
	fLocal_587[1] = 0.0303f;
	fLocal_658[1] = -0.0208f;
	fLocal_729[1] = -0.3298f;
	fLocal_800[1] = 0.9433f;
	iLocal_1576[1] = 5;
	fLocal_871[1] = 16488f;
	fLocal_942[1] = 1f;
	iLocal_2756[1] = joaat("washington");
	Local_2344[2 /*3*/] = { -998.2445f, -692.8199f, 21.5328f };
	fLocal_587[2] = -0.0136f;
	fLocal_658[2] = -0.0158f;
	fLocal_729[2] = 0.8929f;
	fLocal_800[2] = 0.4498f;
	iLocal_1576[2] = 53;
	fLocal_871[2] = 21412f;
	fLocal_942[2] = 1f;
	iLocal_2756[2] = joaat("feltzer2");
	Local_2344[3 /*3*/] = { -883.8546f, -655.3506f, 27.5493f };
	fLocal_587[3] = 0.0032f;
	fLocal_658[3] = -0.0018f;
	fLocal_729[3] = 0.712f;
	fLocal_800[3] = 0.7021f;
	iLocal_1576[3] = 54;
	fLocal_871[3] = 25000f;
	fLocal_942[3] = 1f;
	iLocal_2756[3] = joaat("feltzer2");
	Local_2344[4 /*3*/] = { -850.7409f, -661.5627f, 27.3668f };
	fLocal_587[4] = -0.0015f;
	fLocal_658[4] = 0.0017f;
	fLocal_729[4] = -0.6912f;
	fLocal_800[4] = 0.7227f;
	iLocal_1576[4] = 55;
	fLocal_871[4] = 28500f;
	fLocal_942[4] = 1f;
	iLocal_2756[4] = joaat("serrano");
	Local_2344[5 /*3*/] = { -721.2928f, -652.8879f, 29.816f };
	fLocal_587[5] = -0.0024f;
	fLocal_658[5] = -0.0102f;
	fLocal_729[5] = 0.6908f;
	fLocal_800[5] = 0.723f;
	iLocal_1576[5] = 56;
	fLocal_871[5] = 32500f;
	fLocal_942[5] = 1f;
	iLocal_2756[5] = joaat("serrano");
	Local_2344[6 /*3*/] = { -724.7061f, -648.64f, 29.7668f };
	fLocal_587[6] = -0.0212f;
	fLocal_658[6] = 0.005f;
	fLocal_729[6] = 0.7061f;
	fLocal_800[6] = 0.7078f;
	iLocal_1576[6] = 57;
	fLocal_871[6] = 32750f;
	fLocal_942[6] = 1f;
	iLocal_2756[6] = joaat("washington");
	Local_2344[7 /*3*/] = { -688.4173f, -579.6989f, 24.8499f };
	fLocal_587[7] = 0.0026f;
	fLocal_658[7] = -0.0029f;
	fLocal_729[7] = 0.7397f;
	fLocal_800[7] = -0.673f;
	iLocal_1576[7] = 58;
	fLocal_871[7] = 40273f;
	fLocal_942[7] = 1f;
	iLocal_2756[7] = joaat("washington");
	Local_2344[8 /*3*/] = { -563.1786f, -579.4122f, 25.3124f };
	fLocal_587[8] = 0.002f;
	fLocal_658[8] = 0.0021f;
	fLocal_729[8] = 0.7032f;
	fLocal_800[8] = 0.711f;
	iLocal_1576[8] = 59;
	fLocal_871[8] = 43500f;
	fLocal_942[8] = 1f;
	iLocal_2756[8] = joaat("trash");
	Local_2344[9 /*3*/] = { -556.1506f, -631.2017f, 30.562f };
	fLocal_587[9] = -0.0352f;
	fLocal_658[9] = 0.0378f;
	fLocal_729[9] = -0.6805f;
	fLocal_800[9] = 0.7309f;
	iLocal_1576[9] = 60;
	fLocal_871[9] = 51889f;
	fLocal_942[9] = 1f;
	iLocal_2756[9] = joaat("bmx");
	Local_2344[10 /*3*/] = { -445.0543f, -655.1606f, 31.3466f };
	fLocal_587[10] = 0.0076f;
	fLocal_658[10] = 0.0093f;
	fLocal_729[10] = 0.7136f;
	fLocal_800[10] = 0.7005f;
	iLocal_1576[10] = 61;
	fLocal_871[10] = 56772f;
	fLocal_942[10] = 1f;
	iLocal_2756[10] = joaat("sultan");
	Local_2344[11 /*3*/] = { -519.4122f, -666.3391f, 32.7365f };
	fLocal_587[11] = 0.0105f;
	fLocal_658[11] = 0.0179f;
	fLocal_729[11] = -0.6817f;
	fLocal_800[11] = 0.7313f;
	iLocal_1576[11] = 62;
	fLocal_871[11] = 57772f;
	fLocal_942[11] = 1f;
	iLocal_2756[11] = joaat("washington");
	Local_2344[12 /*3*/] = { -491.8959f, -716.5375f, 32.5585f };
	fLocal_587[12] = 0.1433f;
	fLocal_658[12] = 0.0787f;
	fLocal_729[12] = 0.9609f;
	fLocal_800[12] = -0.2234f;
	iLocal_1576[12] = 63;
	fLocal_871[12] = 60800f;
	fLocal_942[12] = 1.2f;
	iLocal_2756[12] = joaat("bmx");
	Local_2344[13 /*3*/] = { -492.3147f, -827.8944f, 29.9952f };
	fLocal_587[13] = -0.005f;
	fLocal_658[13] = 0.0046f;
	fLocal_729[13] = 0.0169f;
	fLocal_800[13] = 0.9998f;
	iLocal_1576[13] = 64;
	fLocal_871[13] = 64030f;
	fLocal_942[13] = 1f;
	iLocal_2756[13] = joaat("washington");
	Local_2344[14 /*3*/] = { -518.8372f, -756.7956f, 31.5421f };
	fLocal_587[14] = -0.0147f;
	fLocal_658[14] = -0.0264f;
	fLocal_729[14] = 0.9686f;
	fLocal_800[14] = -0.2467f;
	iLocal_1576[14] = 65;
	fLocal_871[14] = 64230f;
	fLocal_942[14] = 1f;
	iLocal_2756[14] = joaat("washington");
	Local_2344[15 /*3*/] = { -477.6166f, -806.7344f, 30.0523f };
	fLocal_587[15] = 0f;
	fLocal_658[15] = 0.0025f;
	fLocal_729[15] = -0.701f;
	fLocal_800[15] = 0.7132f;
	iLocal_1576[15] = 66;
	fLocal_871[15] = 66084f;
	fLocal_942[15] = 1f;
	iLocal_2756[15] = joaat("washington");
	Local_2344[16 /*3*/] = { -417.4774f, -836.1498f, 31.442f };
	fLocal_587[16] = -0.0077f;
	fLocal_658[16] = -0.0047f;
	fLocal_729[16] = 0.7025f;
	fLocal_800[16] = 0.7117f;
	iLocal_1576[16] = 67;
	fLocal_871[16] = 65384f;
	fLocal_942[16] = 1f;
	iLocal_2756[16] = joaat("benson");
	Local_2344[17 /*3*/] = { -413.1984f, -831.7321f, 30.8216f };
	fLocal_587[17] = -0.0237f;
	fLocal_658[17] = 0.0144f;
	fLocal_729[17] = 0.7088f;
	fLocal_800[17] = 0.7049f;
	iLocal_1576[17] = 68;
	fLocal_871[17] = 67078f;
	fLocal_942[17] = 1f;
	iLocal_2756[17] = joaat("sultan");
	Local_2344[18 /*3*/] = { -528.5989f, -840.7145f, 29.413f };
	fLocal_587[18] = -0.0237f;
	fLocal_658[18] = 0.0236f;
	fLocal_729[18] = 0.7098f;
	fLocal_800[18] = -0.7036f;
	iLocal_1576[18] = 69;
	fLocal_871[18] = 64606.32f;
	fLocal_942[18] = 1f;
	iLocal_2756[18] = joaat("sultan");
	Local_2344[19 /*3*/] = { -446.0574f, -767.6522f, 29.9676f };
	fLocal_587[19] = -0.0002f;
	fLocal_658[19] = 0.0001f;
	fLocal_729[19] = 0.711f;
	fLocal_800[19] = 0.7032f;
	iLocal_1576[19] = 51;
	fLocal_871[19] = 70071.85f;
	fLocal_942[19] = 1f;
	iLocal_2756[19] = joaat("sultan");
	Local_2344[20 /*3*/] = { -488.5203f, -523.8471f, 24.8363f };
	fLocal_587[20] = -0.001f;
	fLocal_658[20] = 0.0015f;
	fLocal_729[20] = 0.7208f;
	fLocal_800[20] = -0.6931f;
	iLocal_1576[20] = 71;
	fLocal_871[20] = 81355.85f;
	fLocal_942[20] = 1f;
	iLocal_2756[20] = joaat("landstalker");
	Local_2344[21 /*3*/] = { -305.7855f, -508.727f, 24.7583f };
	fLocal_587[21] = 0.0168f;
	fLocal_658[21] = -0.0137f;
	fLocal_729[21] = 0.7019f;
	fLocal_800[21] = 0.7119f;
	iLocal_1576[21] = 72;
	fLocal_871[21] = 86290.85f;
	fLocal_942[21] = 1f;
	iLocal_2756[21] = joaat("landstalker");
	Local_2344[22 /*3*/] = { 294.6554f, -576.5358f, 42.9547f };
	fLocal_587[22] = 0.0001f;
	fLocal_658[22] = 0.0078f;
	fLocal_729[22] = 0.2262f;
	fLocal_800[22] = 0.974f;
	iLocal_1576[22] = 73;
	fLocal_871[22] = 109000f;
	fLocal_942[22] = 1f;
	iLocal_2756[22] = joaat("ambulance");
	Local_2344[23 /*3*/] = { -393.8603f, -503.4236f, 25.4432f };
	fLocal_587[23] = 0.0016f;
	fLocal_658[23] = 0.0018f;
	fLocal_729[23] = 0.7075f;
	fLocal_800[23] = 0.7067f;
	iLocal_1576[23] = 74;
	fLocal_871[23] = 82431.85f;
	fLocal_942[23] = 1f;
	iLocal_2756[23] = joaat("packer");
	Local_2344[24 /*3*/] = { -527.6368f, -846.5891f, 29.9361f };
	fLocal_587[24] = 0.0422f;
	fLocal_658[24] = -0.0031f;
	fLocal_729[24] = -0.7009f;
	fLocal_800[24] = 0.712f;
	iLocal_1576[24] = 75;
	fLocal_871[24] = 62500f;
	fLocal_942[24] = 1f;
	iLocal_2756[24] = joaat("bus");
	Local_2344[25 /*3*/] = { 3.4457f, -533.8352f, 33.2443f };
	fLocal_587[25] = 0.0232f;
	fLocal_658[25] = 0.0045f;
	fLocal_729[25] = -0.6929f;
	fLocal_800[25] = 0.7206f;
	iLocal_1576[25] = 80;
	fLocal_871[25] = 100001.4f;
	fLocal_942[25] = 1f;
	iLocal_2756[25] = joaat("asterope");
	Local_2344[26 /*3*/] = { -483.5551f, -531.6314f, 24.8571f };
	fLocal_587[26] = 0.0034f;
	fLocal_658[26] = -0.0031f;
	fLocal_729[26] = -0.6972f;
	fLocal_800[26] = 0.7168f;
	iLocal_1576[26] = 76;
	fLocal_871[26] = 81217.44f;
	fLocal_942[26] = 1f;
	iLocal_2756[26] = joaat("asterope");
	Local_2344[27 /*3*/] = { -277.6243f, -508.3559f, 24.9767f };
	fLocal_587[27] = 0.0108f;
	fLocal_658[27] = -0.0139f;
	fLocal_729[27] = 0.7117f;
	fLocal_800[27] = 0.7023f;
	iLocal_1576[27] = 77;
	fLocal_871[27] = 87256.44f;
	fLocal_942[27] = 1f;
	iLocal_2756[27] = joaat("asterope");
	Local_2344[28 /*3*/] = { -201.7354f, -496.1847f, 27.3531f };
	fLocal_587[28] = -0.0125f;
	fLocal_658[28] = -0.0117f;
	fLocal_729[28] = 0.7296f;
	fLocal_800[28] = 0.6837f;
	iLocal_1576[28] = 82;
	fLocal_871[28] = 90798.32f;
	fLocal_942[28] = 1f;
	iLocal_2756[28] = joaat("packer");
	Local_2344[29 /*3*/] = { -118.4835f, -529.6654f, 29.6739f };
	fLocal_587[29] = 0.0116f;
	fLocal_658[29] = -0.0127f;
	fLocal_729[29] = -0.686f;
	fLocal_800[29] = 0.7274f;
	iLocal_1576[29] = 44;
	fLocal_871[29] = 94954.86f;
	fLocal_942[29] = 1f;
	iLocal_2756[29] = joaat("landstalker");
	iVar0 = 0;
	iVar1 = iLocal_3003;
	iVar2 = iLocal_2830;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (fLocal_871[iVar0] >= 41011f)
		{
			fLocal_871[iVar0] = (fLocal_871[iVar0] - 43.5f);
		}
		if (fLocal_871[iVar0] >= 77018.5f)
		{
			fLocal_871[iVar0] = (fLocal_871[iVar0] - 78.5f);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (fLocal_497[iVar0] >= 41011f)
		{
			fLocal_497[iVar0] = (fLocal_497[iVar0] - 43.5f);
		}
		if (fLocal_497[iVar0] >= 77018.5f)
		{
			fLocal_497[iVar0] = (fLocal_497[iVar0] - 78.5f);
		}
		iVar0++;
	}
}

void func_434(char* sParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	
	StringCopy(&cLocal_2582, sParam0, 64);
	bLocal_129 = true;
	iLocal_134 = 0;
	iLocal_1860 = 0;
	iLocal_1861 = 0;
	iLocal_1862 = 0;
	iLocal_1863 = iParam1;
	iLocal_1864 = 0;
	iLocal_1865 = 0;
	iLocal_1866 = 0;
	iLocal_1870 = 0;
	iLocal_1873 = 0;
	iLocal_1871 = -1;
	iLocal_1872 = -1;
	iLocal_1874 = 0;
	iLocal_1875 = 0;
	fLocal_1313 = 0f;
	fLocal_1314 = 0f;
	fLocal_1299 = 0f;
	iLocal_135 = 0;
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
		Local_2558.f_0 = (Var0.f_0 - 100f);
		Local_2558.f_1 = (Var0.f_1 - 100f);
		Local_2558.f_2 = (Var0.f_2 - 100f);
		Local_2561.f_0 = (Var0.f_0 + 100f);
		Local_2561.f_1 = (Var0.f_1 + 100f);
		Local_2561.f_2 = (Var0.f_2 + 100f);
		unk_0xEB1F3AEB071C6A9E(Local_2558, Local_2561, 0, 0);
		if (bParam2)
		{
			unk_0xA450601E968044DB(Var0, 500f, 0, 0, 0, 0, 0);
		}
	}
	unk_0x4865E80F793024CE("rgh_traffic", &iLocal_2598);
	func_413();
	if (bParam3)
	{
		func_65(1);
	}
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		unk_0xD8AF255B8B5F4FB8(unk_0x1329891157A54C63(), 0);
		unk_0xA9DF4B73BBB06CE5(0);
	}
	func_75();
}

void func_435()
{
	int iVar0;
	
	func_50(&(Local_3107.f_35[0]));
	if (!unk_0x86CCCD2FAE9D5E65(Local_3489.f_0))
	{
		unk_0x7C6BF0CD5D7454C9(Local_3489.f_3, 2f, 1, 0, 0, 0);
		func_436(&Local_3489, Local_3489.f_3, Local_3489.f_6, 0, 1);
		func_422();
	}
	unk_0x887F4488DA99FD21(Local_3489.f_1);
	func_50(&(Local_3107.f_35[1]));
	if (!unk_0x86CCCD2FAE9D5E65(Local_3496.f_0))
	{
		unk_0x7C6BF0CD5D7454C9(Local_3496.f_3, 2f, 1, 0, 0, 0);
		Local_3496.f_0 = unk_0xE00F8DEA9778FC87(Local_3496.f_1, Local_3496.f_3, Local_3496.f_6, 1, 1);
		if (func_13(Local_3496.f_0))
		{
			unk_0xB067093BBAF0A747(Local_3496.f_0, Local_3496.f_3, 1, 0, 0, 1);
			unk_0x5D6F89F6DD9B0781(Local_3496.f_0, -0.0248f, 0.0004f, 0.8949f, 0.4456f);
		}
		func_418();
	}
	unk_0x887F4488DA99FD21(Local_3496.f_1);
	if (func_13(Local_3489.f_0))
	{
		if (!unk_0x86CCCD2FAE9D5E65(Local_3468.f_0))
		{
			Local_3468.f_0 = unk_0x4D135F3066A9BF9C(Local_3489.f_0, 26, Local_3468.f_1, 2, 1, 1);
			func_423();
		}
		func_54(&(Local_3107.f_28[0]));
		if (!unk_0x86CCCD2FAE9D5E65(Local_3475.f_0))
		{
			Local_3475.f_0 = unk_0x4D135F3066A9BF9C(Local_3489.f_0, 26, Local_3475.f_1, 0, 1, 1);
			func_424();
		}
	}
	unk_0x887F4488DA99FD21(Local_3468.f_1);
	unk_0x887F4488DA99FD21(Local_3475.f_1);
	if (func_13(Local_3496.f_0))
	{
		if (!unk_0x86CCCD2FAE9D5E65(Local_3482.f_0))
		{
			Local_3482.f_0 = unk_0x4D135F3066A9BF9C(Local_3496.f_0, 26, Local_3482.f_1, -1, 1, 1);
			func_420();
		}
	}
	unk_0x887F4488DA99FD21(Local_3482.f_1);
	if (func_20(unk_0x81873881071CD9FE()))
	{
		func_421(&uLocal_3303, 2, unk_0x81873881071CD9FE(), "TREVOR", 0, 1);
		unk_0xA7ED59066FB82067(unk_0x81873881071CD9FE(), 1);
	}
	if (!unk_0x86CCCD2FAE9D5E65(Local_3533[0 /*2*/]))
	{
		unk_0x7C6BF0CD5D7454C9(-1329.742f, -665.3537f, 26.3413f, 2f, 1, 0, 0, 0);
		Local_3533[0 /*2*/] = unk_0xE00F8DEA9778FC87(Local_3533[0 /*2*/].f_1, -1329.742f, -665.3537f, 26.3413f, 126.9722f, 1, 1);
	}
	if (func_13(Local_3533[0 /*2*/]))
	{
		unk_0x5D6F89F6DD9B0781(Local_3533[0 /*2*/], -0.0318f, 0.0067f, 0.8936f, 0.4476f);
		if (!unk_0x340D0D5779173223(Local_3533[0 /*2*/], 2))
		{
			unk_0x4DBA43D6DE677017(Local_3533[0 /*2*/], 2, 0, 0);
		}
		if (!unk_0x340D0D5779173223(Local_3533[0 /*2*/], 3))
		{
			unk_0x4DBA43D6DE677017(Local_3533[0 /*2*/], 3, 0, 0);
		}
		unk_0x270A692BBE168A81(Local_3533[0 /*2*/], 1, 1);
		unk_0x270A692BBE168A81(Local_3533[0 /*2*/], 0, 1);
	}
	if (!unk_0x86CCCD2FAE9D5E65(Local_3533[1 /*2*/]))
	{
		unk_0x7C6BF0CD5D7454C9(-1329.751f, -676.4864f, 25.8557f, 2f, 1, 0, 0, 0);
		Local_3533[1 /*2*/] = unk_0xE00F8DEA9778FC87(Local_3533[1 /*2*/].f_1, -1329.751f, -676.4864f, 25.8557f, 307.7227f, 1, 1);
	}
	if (func_13(Local_3533[1 /*2*/]))
	{
		unk_0x5D6F89F6DD9B0781(Local_3533[1 /*2*/], 0.0248f, 0.0142f, -0.4405f, 0.8973f);
	}
	if (!unk_0x86CCCD2FAE9D5E65(Local_3533[2 /*2*/]))
	{
		unk_0x7C6BF0CD5D7454C9(-1336.317f, -680.9752f, 25.5144f, 2f, 1, 0, 0, 0);
		Local_3533[2 /*2*/] = unk_0xE00F8DEA9778FC87(Local_3533[2 /*2*/].f_1, -1336.317f, -680.9752f, 25.5144f, 307.7227f, 1, 1);
	}
	if (func_13(Local_3533[2 /*2*/]))
	{
		unk_0x5D6F89F6DD9B0781(Local_3533[2 /*2*/], 0.0269f, 0.0079f, -0.4791f, 0.8773f);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_13(Local_3533[iVar0 /*2*/]))
		{
			unk_0x887F4488DA99FD21(Local_3533[iVar0 /*2*/].f_1);
		}
		iVar0++;
	}
	func_416(fLocal_3267, Local_3555);
	if (bLocal_3168)
	{
		if (bLocal_3230)
		{
			if (!unk_0xECDEA377354CBDA4() && !unk_0xC11AD1609CFCCCE1())
			{
				func_21(800, 0);
			}
		}
	}
}

int func_436(var uParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6)
{
	unk_0x32A12757CBF48A33(iLocal_94);
	if (iParam6 == 1)
	{
		while (!unk_0x33ACB874CECA2D4B(iLocal_94))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	else if (!unk_0x33ACB874CECA2D4B(iLocal_94))
	{
		return 0;
	}
	func_437(uParam0, iLocal_94, Param1, fParam4);
	if (func_10(*uParam0))
	{
		unk_0xFD021BAF9614D437(*uParam0, 65, 0);
		unk_0x3A4534184B10B6D4(*uParam0, 5, 0);
		unk_0xA9FDEEBC09186222(*uParam0, "28BNT310");
		unk_0x1E6C0DB293E78345(*uParam0, 0);
		if (iParam5 == 1)
		{
			unk_0xC390A6485FB80923(*uParam0, 10);
		}
	}
	unk_0x887F4488DA99FD21(iLocal_94);
	return 1;
}

void func_437(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	func_50(uParam0);
	*uParam0 = unk_0xE00F8DEA9778FC87(iParam1, Param2, fParam5, 1, 1);
	if (unk_0x86CCCD2FAE9D5E65(*uParam0))
	{
		unk_0x5CC9D6711FE01F0D(*uParam0);
		unk_0x9765BF567DB87B5F(*uParam0, 1000);
	}
}

void func_438(bool bParam0)
{
	unk_0x86B83C54AF71BD12("NIGEL2", 0);
	unk_0x995DCDA796A47049(iLocal_3257, sLocal_3295);
	unk_0x32A12757CBF48A33(Local_3496.f_1);
	unk_0x32A12757CBF48A33(Local_3489.f_1);
	unk_0x32A12757CBF48A33(Local_3482.f_1);
	unk_0x32A12757CBF48A33(Local_3468.f_1);
	unk_0x32A12757CBF48A33(Local_3475.f_1);
	unk_0x32A12757CBF48A33(Local_3533[0 /*2*/].f_1);
	unk_0x32A12757CBF48A33(Local_3533[1 /*2*/].f_1);
	unk_0x32A12757CBF48A33(Local_3533[2 /*2*/].f_1);
	unk_0x995DCDA796A47049(2, sLocal_3295);
	if (bParam0)
	{
		while ((((((((((!unk_0xCD8DA898314F3016(0) || !unk_0x498998F33897432E(iLocal_3257, sLocal_3295)) || !unk_0x33ACB874CECA2D4B(Local_3496.f_1)) || !unk_0x33ACB874CECA2D4B(Local_3489.f_1)) || !unk_0x33ACB874CECA2D4B(Local_3482.f_1)) || !unk_0x33ACB874CECA2D4B(Local_3468.f_1)) || !unk_0x33ACB874CECA2D4B(Local_3475.f_1)) || !unk_0x33ACB874CECA2D4B(Local_3533[0 /*2*/].f_1)) || !unk_0x33ACB874CECA2D4B(Local_3533[1 /*2*/].f_1)) || !unk_0x33ACB874CECA2D4B(Local_3533[2 /*2*/].f_1)) || !unk_0x498998F33897432E(2, sLocal_3295))
		{
			if (bLocal_3168)
			{
				if (!unk_0x29AFA2493D7C23D0())
				{
					func_439(0, 1);
					bLocal_3230 = true;
				}
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
}

void func_439(int iParam0, bool bParam1)
{
	if (unk_0xECDEA377354CBDA4())
	{
		if (!unk_0xC584A413BCB2AA39())
		{
			unk_0x3B283FEBA87FFBEB(iParam0);
			if (bParam1)
			{
				while (!unk_0x29AFA2493D7C23D0())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
			}
		}
	}
}

void func_440()
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { -1290f, -646.1f, 26.05f };
	fVar3 = 307.66f;
	func_487(-1311.409f, -648.4133f, 24.92526f, -1289.028f, -632.043f, 29.5522f, 17.5f, Var0, fVar3, func_494(), 1, 0, 1, 0, 0);
	func_487(-1319.69f, -655.7773f, 29.45839f, -1184.461f, -834.8201f, 12.34378f, 30f, Var0, fVar3, func_494(), 1, 0, 1, 0, 0);
	if (func_485(0f, 0f, 0f, 1))
	{
		func_441(Var0, fVar3, 0, 145);
	}
	unk_0x3DD1ED742E99F292(-1409.344f, -756.381f, 17.59896f, -1239.148f, -587.1219f, 31.25266f, 0, 1);
	unk_0x14271BAB2BB24399(-1409.344f, -756.381f, 17.59896f, -1239.148f, -587.1219f, 31.25266f);
	unk_0x0C17E2FCF3ABF5A3(-1415.904f, -732.5489f, 17.54549f, -1236.628f, -601.0265f, 31.15345f, 23f, 0, 0, 1);
	unk_0xB36217502E9BD236(-1415.904f, -732.5489f, 17.54549f, -1236.628f, -601.0265f, 31.15345f, 23f, 0, 0, 0, 1, 1);
	unk_0xF47DE13A08D86AB8(-1318.5f, -678.8826f, 23f, -1296.628f, -631.5449f, 29f, 0, 0);
	unk_0x536B53396BA193B3(-1318.5f, -678.8826f, 23f, -1296.628f, -631.5449f, 29f);
	uLocal_3287 = unk_0x13705C66F125D98D(-1318.5f, -678.8826f, 23f, -1296.628f, -631.5449f, 29f, 0, 1, 1, 1);
	unk_0x82119F022C669D9E(-1297.8f, -637.42f, 25.55f, 16f, 0);
	uLocal_3289[0] = unk_0x13705C66F125D98D(-1315.68f, -682.7614f, 23.24123f, -1295.266f, -670.376f, 27.9768f, 0, 1, 1, 1);
	unk_0x7C6BF0CD5D7454C9(-1305.332f, -676.3739f, 25.79325f, 10f, 1, 0, 0, 0);
	uLocal_3289[1] = unk_0x13705C66F125D98D(-1286.906f, -697.5593f, 21.7392f, -1279.698f, -691.5876f, 26.33636f, 0, 1, 1, 1);
	unk_0x7C6BF0CD5D7454C9(-1287.702f, -698.1957f, 27.50166f, 10f, 1, 0, 0, 0);
	uLocal_3289[2] = unk_0x13705C66F125D98D(-1270.72f, -723.8903f, 19.46898f, -1262.898f, -718.2786f, 24.43682f, 0, 1, 1, 1);
	unk_0x7C6BF0CD5D7454C9(-1269.86f, -722.4664f, 21.54627f, 8f, 1, 0, 0, 0);
	uLocal_3289[3] = unk_0x13705C66F125D98D(-1268.057f, -731.5182f, 18.92047f, -1263.574f, -727.5502f, 24.05783f, 0, 1, 1, 1);
	unk_0x7C6BF0CD5D7454C9(-1266.431f, -728.9227f, 21.08542f, 2.5f, 1, 0, 0, 0);
	uLocal_3289[3] = unk_0x13705C66F125D98D(-1237.024f, -777.4222f, 15.58289f, -1221.889f, -764.5969f, 20.58871f, 0, 1, 1, 1);
	unk_0x7C6BF0CD5D7454C9(-1231.441f, -770.9479f, 17.70891f, 8.5f, 1, 0, 0, 0);
	uLocal_3289[4] = unk_0x13705C66F125D98D(-1222.448f, -786.7349f, 13.60073f, -1215.773f, -780.2021f, 20.43715f, 0, 1, 1, 1);
	unk_0x7C6BF0CD5D7454C9(-1222.008f, -783.6834f, 16.73119f, 7.5f, 1, 0, 0, 0);
	unk_0xA450601E968044DB(-1459.2f, -736.9f, 23.6f, 50f, 0, 0, 0, 1, 0);
	unk_0xA450601E968044DB(-1332.2f, -537.6f, 31.5f, 30f, 0, 0, 0, 1, 0);
}

void func_441(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	var uVar3;
	
	if (unk_0x86CCCD2FAE9D5E65(Global_92592.f_4))
	{
		if (unk_0x7404950238A154C2(Global_92592.f_4, 0))
		{
			if (func_484(24) != Global_92592.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_481(unk_0xB6AE0DAE06D56288(Global_92592.f_4, 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_442(Global_92592.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_442(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0x86CCCD2FAE9D5E65(iParam0) && unk_0x7404950238A154C2(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0x86CCCD2FAE9D5E65(Global_67889.f_484[25]) && unk_0x7404950238A154C2(Global_67889.f_484[25], 0))
			{
				if (Global_67889.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0x8807D8929DF94A13(iParam0) || unk_0x14B7103DBD149FFE(iParam0) == joaat("bus")) || unk_0x14B7103DBD149FFE(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_480(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_477(iParam0, &Var0);
		if (func_58(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
			fParam4 = unk_0x3306AAAFE3B25098(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x8DAF7A748E41AD46(unk_0x11CA2334E341B424()) != joaat("vehicle_gen_controller"))
			{
				Global_68877 = unk_0x8DAF7A748E41AD46(unk_0x11CA2334E341B424());
			}
		}
		func_473(iParam5, &Var0, Param1, fParam4, func_476(iParam0));
		func_443(iParam5, iParam0, 0);
	}
}

void func_443(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_470(&(Global_67889.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0x236D8AD7EE179F46(Global_67889.f_555[0 /*21*/].f_9, 12) && !unk_0x236D8AD7EE179F46(Global_67889.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_67889.f_555[0 /*21*/].f_4 != unk_0x14B7103DBD149FFE(iParam1))
		{
			return;
		}
	}
	if (Global_68796 != -1 && Global_68796 != iParam0)
	{
		return;
	}
	if (unk_0x86CCCD2FAE9D5E65(iParam1))
	{
		if (unk_0x7404950238A154C2(iParam1, 0))
		{
			if (!unk_0xE86442941AE40E75(iParam1))
			{
				unk_0xD768713E73165208(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_98931.f_18731.f_4801 = func_459();
			}
			if (iParam1 != Global_67889.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_484(iParam0);
					if ((unk_0x86CCCD2FAE9D5E65(iVar0) && unk_0x7404950238A154C2(iVar0, 0)) && iParam1 != iVar0)
					{
						func_444(iVar0, 145);
					}
				}
				Global_68795 = iParam1;
				Global_68796 = iParam0;
				Global_68797 = iParam2;
			}
		}
	}
}

void func_444(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_445(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xB0B9E53CEFDB16AA(iParam0, -1);
		if (!unk_0x86CCCD2FAE9D5E65(iVar0))
		{
			iVar0 = unk_0x24E1D5759BFC6ECE(iParam0, -1);
		}
		if (unk_0x86CCCD2FAE9D5E65(iVar0) && !unk_0x5FEB513A4402FD59(iVar0))
		{
			if (unk_0x14B7103DBD149FFE(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x14B7103DBD149FFE(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x14B7103DBD149FFE(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_98931.f_1750.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x14B7103DBD149FFE(iParam0) == Global_98931.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xB318FDA0D1ABDB20(&(Global_98931.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0xD994929E13CC1ED5(unk_0xE0DCE5625B61B0CC(iParam0), &(Global_98931.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_98931.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_98931.f_18731.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (unk_0x14B7103DBD149FFE(iParam0) == Global_98931.f_18731.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xB318FDA0D1ABDB20(&(Global_98931.f_18731.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0xD994929E13CC1ED5(unk_0xE0DCE5625B61B0CC(iParam0), &(Global_98931.f_18731.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_98931.f_18731.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_98931.f_18731.f_5590 = iParam1;
	Global_68794 = iParam0;
	Global_98931.f_18731.f_5588 = 1;
	func_477(iParam0, &(Global_98931.f_18731.f_5510));
}

int func_445(int iParam0)
{
	if ((((((((((!unk_0x86CCCD2FAE9D5E65(iParam0) || !unk_0x7404950238A154C2(iParam0, 0)) || func_457(iParam0, 0, 0)) || func_457(iParam0, 1, 0)) || func_457(iParam0, 2, 0)) || func_476(iParam0) != 145) || func_456(iParam0)) || func_455(iParam0)) || func_454(iParam0)) || func_453(iParam0)) || !func_446(unk_0x14B7103DBD149FFE(iParam0)))
	{
		if (func_455(iParam0))
		{
		}
		if (func_455(iParam0))
		{
		}
		if (func_457(iParam0, 0, 0))
		{
		}
		if (func_457(iParam0, 1, 0))
		{
		}
		if (func_457(iParam0, 2, 0))
		{
		}
		if (func_476(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_446(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_447(iParam0))
	{
		return 0;
	}
	if (((unk_0x9F59BCFFFEAAD4B1(iParam0) || unk_0x1699D7B95446F15C(iParam0)) || unk_0xE083914AB72DD7CE(iParam0)) || unk_0xE4CD4B212196D2C5(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_447(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xA84E120D1B16B142(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x1C6DF6AD69BE853E())) || (iParam0 == joaat("buffalo3") && !unk_0x1C6DF6AD69BE853E())) || (iParam0 == joaat("gauntlet2") && !unk_0x1C6DF6AD69BE853E())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x1C6DF6AD69BE853E())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_452())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xCDB51B918CEDF9B8())
		{
			if (unk_0x292BAD2AB4F88E45(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xA10BCE9255970BC8(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_451() && !func_450()) && !func_449()) && !func_448()) && !func_452())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x3F0C224D3CC05EF2() || unk_0x913B1C01C1BA6C6F()) || unk_0xEC209B562C5EFDB2())
		{
		}
		else if (!func_449())
		{
			return 0;
		}
	}
	return 1;
}

int func_448()
{
	return 0;
}

int func_449()
{
	return 1;
}

int func_450()
{
	return 1;
}

int func_451()
{
	if (unk_0x2D6859674806FDCE(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_452()
{
	var uVar0;
	
	if (unk_0xE8A8D52287C1BC6A())
	{
		if (unk_0xFA106675D906ECBC())
		{
			if (unk_0x4BE443B4137281C8())
			{
				unk_0x85C45034BA638694(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xF3148AAF69AF9CBC(&uVar0, 2);
				unk_0xF3148AAF69AF9CBC(&uVar0, 4);
				unk_0xF3148AAF69AF9CBC(&uVar0, 6);
				unk_0xF3148AAF69AF9CBC(&Global_25, 2);
				unk_0xF3148AAF69AF9CBC(&Global_25, 4);
				unk_0xF3148AAF69AF9CBC(&Global_25, 6);
				unk_0x123B783056E76C4E(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x0F93FDA9E0BB74DD())
				{
					iVar0 = unk_0xE19FDB171CBF814A(866);
					unk_0xF3148AAF69AF9CBC(&iVar0, 0);
					unk_0x0A726855B16BE29A(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_135975 == 2)
	{
		return 1;
	}
	else if (Global_135975 == 3)
	{
		return 0;
	}
	if (unk_0x0F93FDA9E0BB74DD())
	{
		if (unk_0x236D8AD7EE179F46(unk_0xE19FDB171CBF814A(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_453(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x14B7103DBD149FFE(iParam0);
	sVar1 = unk_0xE0DCE5625B61B0CC(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xD994929E13CC1ED5(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_447(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_454(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x86CCCD2FAE9D5E65(Global_88503[iVar0]))
		{
			if (Global_88503[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_455(int iParam0)
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(iParam0) && unk_0x7404950238A154C2(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x86CCCD2FAE9D5E65(Global_88473[iVar0]) && unk_0x7404950238A154C2(Global_88473[iVar0], 0))
			{
				if (Global_88473[iVar0] == iParam0 && unk_0x14B7103DBD149FFE(Global_88473[iVar0]) == unk_0x14B7103DBD149FFE(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_456(int iParam0)
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(Global_67889.f_484[24]))
	{
		if (iParam0 == Global_67889.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x86CCCD2FAE9D5E65(Global_67889.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_67889.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_457(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x86CCCD2FAE9D5E65(iParam0) || !unk_0x7404950238A154C2(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_458(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x236D8AD7EE179F46(Global_98931.f_5843[iVar9], 0))
		{
			if (unk_0x9ED6CC42898E5346(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_458(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

var func_459()
{
	var uVar0;
	
	func_469(&uVar0, unk_0xBF0A1447DA6AE4B5());
	func_468(&uVar0, unk_0x25B31B877207A3A9());
	func_467(&uVar0, unk_0x0C937048CF6952B5());
	func_462(&uVar0, unk_0x8B6B3DD84CE74978());
	func_461(&uVar0, unk_0x02DC618B9A1DB8D1());
	func_460(&uVar0, unk_0x57E483B654EDD986());
	return uVar0;
}

void func_460(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_461(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_462(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_466(*uParam0);
	iVar1 = func_464(*uParam0);
	if (iParam1 < 1 || iParam1 > func_463(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_463(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_464(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_465(unk_0x236D8AD7EE179F46(iParam0, 31), -1, 1)) + 2011;
}

int func_465(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_466(var uParam0)
{
	return uParam0 & 15;
}

void func_467(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_468(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_469(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_470(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_471(0, 1);
			uParam0->f_12 = 0;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 20);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_471(0, 1);
			uParam0->f_12 = 0;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 20);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_471(1, 1);
			uParam0->f_12 = 1;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 20);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_471(1, 2);
			uParam0->f_12 = 1;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 19);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_471(1, 1);
			uParam0->f_12 = 1;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 20);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_471(1, 2);
			uParam0->f_12 = 1;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 19);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_471(2, 1);
			uParam0->f_12 = 2;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 20);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_471(2, 1);
			uParam0->f_12 = 2;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 20);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_471(2, 1);
			uParam0->f_12 = 2;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 20);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 0);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 14);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 0);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 14);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 0);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 14);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 0);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 14);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 22);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 0);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 14);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 22);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 0);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 14);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 22);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 0);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 14);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 0);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 14);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 0);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 14);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 23);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 0);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 14);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 24);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 28);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 0);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 14);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 24);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 28);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 0);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 14);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 24);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 28);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 27);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 24);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 27);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 24);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 27);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 24);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 11);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 13);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 11);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 13);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 9);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 9);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 23);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 23);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 23);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 2);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 30);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 2);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 22);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_452())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 13);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 2);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 1);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 23);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_452())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 13);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 2);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 1);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 23);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 0);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 23);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 6);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 30);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 23);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 30);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 23);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0x236D8AD7EE179F46(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_98931.f_18731.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_58(Global_98931.f_18731.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_98931.f_18731.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_98931.f_18731.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_98931.f_18731.f_1934[uParam0->f_14];
		}
	}
	if (unk_0x236D8AD7EE179F46(uParam0->f_9, 19))
	{
		if (!func_58(Global_98931.f_1750.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_98931.f_1750.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_98931.f_1750.f_539.f_2837[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0x236D8AD7EE179F46(uParam0->f_9, 20))
	{
		if (!func_58(Global_98931.f_1750.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_98931.f_1750.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_98931.f_1750.f_539.f_2837[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_471(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_234(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_472(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_472(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_98931.f_7699.f_99.f_58[128] && !Global_98931.f_7699.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_98931.f_7699.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_98931.f_7699.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

void func_473(int iParam0, var uParam1, struct<3> Param2, float fParam5, int iParam6)
{
	if (func_470(&(Global_67889.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x236D8AD7EE179F46(Global_67889.f_555[0 /*21*/].f_9, 10))
		{
			func_475(iParam0);
			func_474(uParam1, &(Global_98931.f_18731.f_69[Global_67889.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0x236D8AD7EE179F46(Global_67889.f_555[0 /*21*/].f_9, 11))
			{
				Global_98931.f_18731.f_1864[Global_67889.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_98931.f_18731.f_1934[Global_67889.f_555[0 /*21*/].f_14] = fParam5;
			}
			else
			{
				Global_98931.f_18731.f_1864[Global_67889.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_98931.f_18731.f_1934[Global_67889.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_98931.f_18731.f_1958[Global_67889.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_261(iParam0, 1);
		}
	}
}

void func_474(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

void func_475(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_470(&(Global_67889.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x86CCCD2FAE9D5E65(Global_67889.f_139[iParam0]))
		{
			unk_0xD768713E73165208(Global_67889.f_139[iParam0], 1, 1);
			unk_0xE0913C01F5C0CC3D(&(Global_67889.f_139[iParam0]));
			Global_67889.f_139[iParam0] = 0;
		}
		if (unk_0x236D8AD7EE179F46(Global_67889.f_555[0 /*21*/].f_9, 13))
		{
			func_261(iParam0, 0);
		}
	}
}

int func_476(int iParam0)
{
	int iVar0;
	
	if (!unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		return 145;
	}
	if (!unk_0x7404950238A154C2(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x86CCCD2FAE9D5E65(Global_88473[iVar0]))
		{
			if (Global_88473[iVar0] == iParam0)
			{
				return Global_88483[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

void func_477(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x7404950238A154C2(iParam0, 0))
	{
		func_112(uParam1);
		uParam1->f_66 = unk_0x14B7103DBD149FFE(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xE0DCE5625B61B0CC(iParam0), 16);
		*uParam1 = unk_0xBF74E89FC6941108(iParam0);
		unk_0x1D3AAB0507DD3600(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x6942D519F6FE2C32(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xB931B48FB3E13CF0(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x48F64101B58EB7F7(iParam0);
		uParam1->f_67 = unk_0xA3EFB2F9FFCDC48D(iParam0);
		uParam1->f_69 = unk_0xBB644BAE860F67B7(iParam0);
		uParam1->f_70 = unk_0x4AC847D90EBAFAEE(iParam0);
		unk_0x332D9608C3A4D1BE(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x3182B161F39E40BC(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x1CD308F8479FBE52(iParam0, 2))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 28);
		}
		if (unk_0x1CD308F8479FBE52(iParam0, 3))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 29);
		}
		if (unk_0x1CD308F8479FBE52(iParam0, 0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 30);
		}
		if (unk_0x1CD308F8479FBE52(iParam0, 1))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0xD31A4E6B116BE250(iParam0, 0))
		{
			uParam1->f_68 = unk_0x48D44DDE1A5A9BD7(iParam0);
		}
		if (unk_0x1699D7B95446F15C(uParam1->f_66))
		{
			if (unk_0x923087289F6BA752(iParam0))
			{
				switch (unk_0x3D09A88E72AB7687(iParam0))
				{
					case 2:
					case 0:
						unk_0xC69E84EBBD7166E6(&(uParam1->f_77), 23);
						unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0xC69E84EBBD7166E6(&(uParam1->f_77), 23);
						unk_0xC69E84EBBD7166E6(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x263B56EFBC6AC36C(iParam0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 9);
		}
		if (unk_0x1E729885E653D827(iParam0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 10);
		}
		if (unk_0x6E728693163D9496(iParam0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 13);
			unk_0x4B850687F46D6E15(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x9EBDB9930E2E0600(iParam0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 12);
		}
		func_479(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x5CBBEE14743C3376(iParam0, iVar0 + 1))
			{
				unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), func_478(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x45AFEFCDD35076F2(iParam0, 0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xC69E84EBBD7166E6(&(uParam1->f_77), 11);
		}
		if (unk_0xCEC9D74C9FF51C8C(iParam0, "IgnoredByQuickSave") && unk_0x53ABC9BE848EA65A(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xC69E84EBBD7166E6(&(uParam1->f_77), 27);
		}
	}
}

int func_478(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_479(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x7404950238A154C2(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xBE23E5C609DF6E79(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x91B47E3FC237F24A(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x64D946BA23568D30(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xB0BC5473B799F536(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xB0BC5473B799F536(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_480(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_475(iParam0);
	func_261(iParam0, 0);
}

int func_481(struct<3> Param0, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	iVar0 = func_482(Param0, iParam3, 1);
	switch (iVar0)
	{
		case 0:
			*uParam4 = { -827.351f, 157.785f, 68.2143f };
			*uParam5 = 85.1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam4 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam5 = 122.1498f;
			return 1;
			break;
		
		case 3:
			*uParam4 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam5 = 303.2098f;
			return 1;
			break;
		
		case 4:
			*uParam4 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam5 = 123.5016f;
			return 1;
			break;
		
		case 5:
			*uParam4 = { -18.118f, -1455.126f, 29.5004f };
			*uParam5 = 273.2822f;
			return 1;
			break;
		
		case 6:
			*uParam4 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam5 = 310.7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_482(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_86180[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_86180[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_483(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0x0D6E79537424BACE(Param0, Global_86180[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_483(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_98931.f_5843[iParam0], 0);
}

int func_484(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_67889.f_139[iParam0];
}

bool func_485(struct<3> Param0, int iParam3)
{
	return func_486(Global_92592.f_2311.f_12.f_66, Param0, iParam3);
}

int func_486(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam4 == 1)
	{
		Param1 = { func_494() };
	}
	unk_0x01C5E7A27762AF21(iParam0, &Var0, &Var3);
	if ((Var3.f_0 - Var0.f_0) > Param1.f_0)
	{
		return 0;
	}
	else if ((Var3.f_1 - Var0.f_1) > Param1.f_1)
	{
		return 0;
	}
	else if ((Var3.f_2 - Var0.f_2) > Param1.f_2)
	{
		return 0;
	}
	return 1;
}

void func_487(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	func_488(Param0, Param3, fParam6, Param7, fParam10, Param11, bParam14, bParam15, bParam16, bParam17, bParam18);
}

void func_488(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (bParam15)
	{
		bParam15 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = unk_0x2ADE2CEED2637E95();
	if (unk_0x86CCCD2FAE9D5E65(iVar0))
	{
		if (!unk_0xE86442941AE40E75(iVar0))
		{
			unk_0xD768713E73165208(iVar0, 1, 0);
			iVar3 = 1;
		}
		if (unk_0x7404950238A154C2(iVar0, 0))
		{
			if (bParam18)
			{
				func_493(iVar0);
			}
			if (unk_0xD1FFD959917D4ED8(iVar0, Param0, Param3, fParam6, 0, 1, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var10 = { unk_0xB6AE0DAE06D56288(iVar0, 1) };
				if ((Var10.f_2 > Param0.f_2 && Var10.f_2 < Param3.f_2) || (Var10.f_2 > Param3.f_2 && Var10.f_2 < Param0.f_2))
				{
					if (func_490(iVar0, Param0, Param3, fParam6))
					{
						bVar1 = true;
					}
				}
			}
			if (unk_0x7404950238A154C2(iVar0, 0))
			{
				if (unk_0xCC6B00B8460CDA0E(iVar0, joaat("taxi")))
				{
					if (unk_0xB0B9E53CEFDB16AA(iVar0, -1) != unk_0x81873881071CD9FE() && unk_0xB0B9E53CEFDB16AA(iVar0, -1) != 0)
					{
						if (unk_0x0D6E79537424BACE(Param0 + Param3 / Vector(2f, 2f, 2f), unk_0xB6AE0DAE06D56288(iVar0, 1), 1) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam16)
			{
				if (func_457(iVar0, func_291(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_489(Param11))
				{
					if (unk_0x7404950238A154C2(iVar0, 0))
					{
						iVar13 = unk_0x14B7103DBD149FFE(iVar0);
						unk_0xFDA216DD3B207AD3(iVar0, &Var4, &Var7);
						if (unk_0xE083914AB72DD7CE(iVar13))
						{
							Param11.f_0 = (Param11.f_0 + 3f);
							Param11.f_1 = (Param11.f_1 + 3f);
						}
						if (((iVar13 == joaat("zentorno") || iVar13 == joaat("btype")) || iVar13 == joaat("dubsta3")) || iVar13 == joaat("monster"))
						{
							Param11 = { Param11 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar13 == joaat("t20") || iVar13 == joaat("virgo"))
						{
							Param11 = { Param11 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((Var7.f_0 - Var4.f_0) > Param11.f_0)
						{
							bVar2 = false;
						}
						else if ((Var7.f_1 - Var4.f_1) > Param11.f_1)
						{
							bVar2 = false;
						}
						else if ((Var7.f_2 - Var4.f_2) > Param11.f_2)
						{
							bVar2 = false;
						}
					}
				}
				if (unk_0x7404950238A154C2(iVar0, 0))
				{
					if (bVar2)
					{
						unk_0xA450601E968044DB(Param7, 5f, 0, 0, 0, 0, 0);
						unk_0xC24172029826A66F(iVar0, uParam10);
						unk_0xB067093BBAF0A747(iVar0, Param7, 1, 0, 0, 1);
						unk_0x5CC9D6711FE01F0D(iVar0);
						if (bParam17)
						{
							unk_0x686D6CDC14C4BA6C(iVar0, 0, 1);
							unk_0xE6116B2B5D358CE9(iVar0, 1);
						}
					}
					else
					{
						if (!unk_0xE86442941AE40E75(iVar0) || !unk_0x46AE53A47E5D03D5(iVar0, 1))
						{
							unk_0xD768713E73165208(iVar0, 1, 1);
						}
						if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iVar0, 0))
						{
							unk_0xB067093BBAF0A747(unk_0x81873881071CD9FE(), unk_0xB6AE0DAE06D56288(iVar0, 1), 1, 0, 0, 1);
						}
						unk_0x5D00E836B6BE8693(&iVar0);
					}
				}
			}
			if (bParam14)
			{
				unk_0xB36217502E9BD236(Param0, Param3, fParam6, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (unk_0x86CCCD2FAE9D5E65(iVar0))
				{
					if (unk_0xE86442941AE40E75(iVar0))
					{
						unk_0xE0913C01F5C0CC3D(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!unk_0xE86442941AE40E75(iVar0))
			{
				unk_0xD768713E73165208(iVar0, 1, 0);
			}
			iVar14 = unk_0xB0B9E53CEFDB16AA(iVar0, -1);
			if (unk_0x86CCCD2FAE9D5E65(iVar14) && !unk_0x5FEB513A4402FD59(iVar14))
			{
				unk_0xB067093BBAF0A747(iVar14, unk_0xB6AE0DAE06D56288(iVar14, 1), 1, 0, 0, 1);
			}
			iVar15 = unk_0x56F6C62C27F50DCB(unk_0x14B7103DBD149FFE(iVar0));
			if (iVar15 <= 2)
			{
				iVar14 = unk_0xB0B9E53CEFDB16AA(iVar0, 0);
				if (unk_0x86CCCD2FAE9D5E65(iVar14) && !unk_0x5FEB513A4402FD59(iVar14))
				{
					unk_0xB067093BBAF0A747(iVar14, unk_0xB6AE0DAE06D56288(iVar14, 1), 1, 0, 0, 1);
				}
			}
			if (iVar15 <= 4)
			{
				iVar14 = unk_0xB0B9E53CEFDB16AA(iVar0, 1);
				if (unk_0x86CCCD2FAE9D5E65(iVar14) && !unk_0x5FEB513A4402FD59(iVar14))
				{
					unk_0xB067093BBAF0A747(iVar14, unk_0xB6AE0DAE06D56288(iVar14, 1), 1, 0, 0, 1);
				}
				iVar14 = unk_0xB0B9E53CEFDB16AA(iVar0, 2);
				if (unk_0x86CCCD2FAE9D5E65(iVar14) && !unk_0x5FEB513A4402FD59(iVar14))
				{
					unk_0xB067093BBAF0A747(iVar14, unk_0xB6AE0DAE06D56288(iVar14, 1), 1, 0, 0, 1);
				}
			}
			unk_0x5D00E836B6BE8693(&iVar0);
		}
	}
}

int func_489(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_490(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18[4];
	struct<2> Var31;
	struct<2> Var34;
	
	if (unk_0x7404950238A154C2(iParam0, 0))
	{
		Param1.f_2 = Param4.f_2;
		Var0 = { func_492(Param1 - Param4) };
		Var3 = { Var0 };
		Var0.f_0 = -Var3.f_1;
		Var0.f_1 = Var3.f_0;
		Var0.f_2 = 0f;
		Var6 = { Param1 - Var0 * FtoV((fParam7 / 2f)) };
		Var9 = { Param1 + Var0 * FtoV((fParam7 / 2f)) };
		Var12 = { Param4 - Var0 * FtoV((fParam7 / 2f)) };
		Var15 = { Param4 + Var0 * FtoV((fParam7 / 2f)) };
		unk_0x01C5E7A27762AF21(unk_0x14B7103DBD149FFE(iParam0), &Var31, &Var34);
		Var18[0 /*3*/] = { unk_0xB07F27EC3B05E4EA(iParam0, Var31.f_0, Var31.f_1, 0f) };
		Var18[1 /*3*/] = { unk_0xB07F27EC3B05E4EA(iParam0, Var31.f_0, Var34.f_1, 0f) };
		Var18[2 /*3*/] = { unk_0xB07F27EC3B05E4EA(iParam0, Var34.f_0, Var31.f_1, 0f) };
		Var18[3 /*3*/] = { unk_0xB07F27EC3B05E4EA(iParam0, Var34.f_0, Var34.f_1, 0f) };
		if (((((((((((((((func_491(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var9) || func_491(Var18[0 /*3*/], Var18[1 /*3*/], Var9, Var15)) || func_491(Var18[0 /*3*/], Var18[1 /*3*/], Var12, Var15)) || func_491(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var12)) || func_491(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var9)) || func_491(Var18[1 /*3*/], Var18[3 /*3*/], Var9, Var15)) || func_491(Var18[1 /*3*/], Var18[3 /*3*/], Var12, Var15)) || func_491(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var12)) || func_491(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var9)) || func_491(Var18[3 /*3*/], Var18[2 /*3*/], Var9, Var15)) || func_491(Var18[3 /*3*/], Var18[2 /*3*/], Var12, Var15)) || func_491(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var12)) || func_491(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var9)) || func_491(Var18[2 /*3*/], Var18[0 /*3*/], Var9, Var15)) || func_491(Var18[2 /*3*/], Var18[0 /*3*/], Var12, Var15)) || func_491(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var12))
		{
			return 1;
		}
	}
	return 0;
}

int func_491(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0.f_0;
	fVar1 = Param0.f_1;
	fVar2 = Param3.f_0;
	fVar3 = Param3.f_1;
	fVar4 = Param6.f_0;
	fVar5 = Param6.f_1;
	fVar6 = Param9.f_0;
	fVar7 = Param9.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_492(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0x652D2EEEF1D3E62C(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

void func_493(int iParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		if (unk_0x7404950238A154C2(iParam0, 0))
		{
			if (unk_0xFF463728B23A0037(iParam0) <= 200f)
			{
				unk_0xE61FF1947C0507EB(iParam0, 500f);
			}
			if (unk_0xEA3967251D64D3AF(iParam0) <= 700f)
			{
				unk_0xE61FF1947C0507EB(iParam0, 900f);
			}
			if (unk_0x4DC6EF945236C0F7(iParam0) < 200)
			{
				unk_0xE61FF1947C0507EB(iParam0, 500f);
			}
		}
	}
}

Vector3 func_494()
{
	return 2.55f, 5.665f, 2.55f;
}

void func_495()
{
	if (bLocal_3168)
	{
		if (((iLocal_3104 != 5 && iLocal_3104 != 0) && iLocal_3104 != 3) && iLocal_3104 != 4)
		{
			func_496();
			if (iLocal_3245 != 0)
			{
				func_287(5);
			}
		}
	}
}

void func_496()
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (unk_0x86CCCD2FAE9D5E65(Local_3475.f_0) && unk_0x86CCCD2FAE9D5E65(Local_3468.f_0))
	{
		if (unk_0x930F8FBB8E9537CC(Local_3475.f_0) || unk_0x5FEB513A4402FD59(Local_3475.f_0))
		{
			iLocal_3245 = 5;
			return;
		}
		if (unk_0x930F8FBB8E9537CC(Local_3468.f_0) || unk_0x5FEB513A4402FD59(Local_3468.f_0))
		{
			iLocal_3245 = 7;
			return;
		}
		if (unk_0xBBEF8270CE27C0EE(Local_3475.f_0, unk_0x81873881071CD9FE(), 1))
		{
			unk_0x773049CADC416D2F(unk_0x1329891157A54C63());
			iLocal_3245 = 4;
			return;
		}
		if (unk_0xBBEF8270CE27C0EE(Local_3468.f_0, unk_0x81873881071CD9FE(), 1))
		{
			unk_0x773049CADC416D2F(unk_0x1329891157A54C63());
			iLocal_3245 = 6;
			return;
		}
	}
	if (unk_0x86CCCD2FAE9D5E65(Local_3482.f_0))
	{
		if (unk_0x930F8FBB8E9537CC(Local_3482.f_0) || unk_0x5FEB513A4402FD59(Local_3482.f_0))
		{
			iLocal_3245 = 1;
			return;
		}
		else if (unk_0x86CCCD2FAE9D5E65(Local_3496.f_0))
		{
			if (!unk_0x930F8FBB8E9537CC(Local_3496.f_0) && unk_0x2D2289DC6C760F31(Local_3496.f_0))
			{
				unk_0x11B340FC7EE49BD2(Local_3496.f_0, 1, 0);
			}
		}
	}
	if (unk_0x86CCCD2FAE9D5E65(Local_3489.f_0))
	{
		if ((unk_0x930F8FBB8E9537CC(Local_3489.f_0) || unk_0x2C237D28F05F0008(Local_3489.f_0)) || !unk_0x7404950238A154C2(Local_3489.f_0, 0))
		{
			iLocal_3245 = 3;
			return;
		}
		else if (iLocal_3104 != 0)
		{
			if (unk_0x1A95F99A66281615(Local_3489.f_0))
			{
				if (func_285(iLocal_3255, 3000))
				{
					iLocal_3245 = 3;
					return;
				}
			}
			else
			{
				iLocal_3255 = unk_0x48E480685981C7D4();
			}
		}
	}
	if (((iLocal_3245 == 8 || iLocal_3245 == 9) || iLocal_3245 == 10) || iLocal_3245 == 2)
	{
		return;
	}
	if (iLocal_3104 == 1 || iLocal_3104 == 2)
	{
		if (func_20(Local_3482.f_0))
		{
			if (fLocal_3264 > 200f)
			{
				iLocal_3245 = 2;
				return;
			}
			if (fLocal_3265 > 50000f && fLocal_3265 < 58000f)
			{
				if (iLocal_3182 || !unk_0x58A69336FE7307D8(unk_0x81873881071CD9FE(), Local_3489.f_0))
				{
					if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -668.3635f, -658.3801f, 27.43382f, -440.022f, -657.4238f, 40.25127f, 40f, 0, 1, 0))
					{
						iLocal_3245 = 2;
						return;
					}
				}
			}
		}
		if ((func_13(Local_3489.f_0) && func_10(Local_3475.f_0)) && func_10(Local_3468.f_0))
		{
			Var0 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
			if (!unk_0x58A69336FE7307D8(Local_3475.f_0, Local_3489.f_0))
			{
				if (!unk_0x58A69336FE7307D8(Local_3468.f_0, Local_3489.f_0))
				{
					if (!iLocal_3203)
					{
						if (!func_369(Local_3475.f_0, Var0, 60f) || !func_369(Local_3468.f_0, Var0, 60f))
						{
							func_18();
							func_324("NIGEL2_08", 7500, 1);
							iLocal_3203 = 1;
						}
					}
					else if (func_369(Local_3475.f_0, Var0, 30f) && func_369(Local_3468.f_0, Var0, 30f))
					{
						if (func_337("NIGEL2_08", 0, 0))
						{
							unk_0xAC6C9BCDC1EB8365("NIGEL2_08");
						}
						iLocal_3203 = 0;
					}
					else if (!func_369(Local_3475.f_0, Var0, 100f) && !func_369(Local_3468.f_0, Var0, 100f))
					{
						iLocal_3245 = 8;
						return;
					}
				}
				else if (!iLocal_3203)
				{
					if (!func_369(Local_3475.f_0, Var0, 60f))
					{
						func_18();
						func_324("NIGEL2_05", 7500, 1);
						iLocal_3203 = 1;
					}
				}
				else if (func_369(Local_3475.f_0, Var0, 30f))
				{
					if (func_337("NIGEL2_05", 0, 0))
					{
						unk_0xAC6C9BCDC1EB8365("NIGEL2_05");
					}
					iLocal_3203 = 0;
				}
				else if (!func_369(Local_3475.f_0, Var0, 100f))
				{
					iLocal_3245 = 9;
					return;
				}
			}
			else if (!unk_0x58A69336FE7307D8(Local_3468.f_0, Local_3489.f_0))
			{
				if (!iLocal_3203)
				{
					if (!func_369(Local_3468.f_0, Var0, 60f))
					{
						func_18();
						func_324("NIGEL2_09", 7500, 1);
						iLocal_3203 = 1;
					}
				}
				else if (func_369(Local_3468.f_0, Var0, 30f))
				{
					if (func_337("NIGEL2_09", 0, 0))
					{
						unk_0xAC6C9BCDC1EB8365("NIGEL2_09");
					}
					iLocal_3203 = 0;
				}
				else if (!func_369(Local_3468.f_0, Var0, 100f))
				{
					iLocal_3245 = 10;
					return;
				}
			}
			else if (!unk_0x58A69336FE7307D8(unk_0x81873881071CD9FE(), Local_3489.f_0))
			{
				Var3 = { unk_0xB6AE0DAE06D56288(Local_3489.f_0, 1) };
				fLocal_3266 = unk_0x2A488C176D52CCA5(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Var3);
				if (!iLocal_3203)
				{
					if (fLocal_3266 > 60f)
					{
						func_18();
						func_324("NIGEL2_08", 7500, 1);
						iLocal_3203 = 1;
					}
				}
				else if (fLocal_3266 > 100f)
				{
					iLocal_3245 = 8;
					return;
				}
				else if (fLocal_3266 < 30f)
				{
					if (func_337("NIGEL2_08", 0, 0))
					{
						unk_0xAC6C9BCDC1EB8365("NIGEL2_08");
					}
					iLocal_3203 = 0;
				}
				if (bLocal_3212)
				{
					if (fLocal_3264 < 35f)
					{
						if (func_497(Local_3489.f_0))
						{
							iLocal_3245 = 8;
							return;
						}
					}
				}
			}
		}
	}
}

int func_497(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	if (!unk_0x59F36F53A82C2E72(iLocal_3261))
	{
		return 0;
	}
	if (unk_0x7404950238A154C2(iParam0, 0))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
		if (unk_0xB3202EEA6EFADBA8(Var0) == iLocal_3261)
		{
			iVar3 = unk_0x0E1B62B45F260997(iParam0);
			if (func_60(iVar3))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_498(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	
	if (Global_69274 != 6)
	{
		if (Global_69276 == -1)
		{
			if (func_509(1, Param0))
			{
				if (Global_69277 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_32 > fVar0)
				{
					Global_69276 = unk_0x48E480685981C7D4();
					Local_33 = { unk_0x56A912E9B1F3FCBD(15) };
					fLocal_32 = 0f;
				}
				else
				{
					fLocal_32 = (fLocal_32 + unk_0x8D51D24D214E2FF2());
				}
			}
			else
			{
				fLocal_32 = 0f;
			}
		}
		else
		{
			if (!func_509(0, Param0))
			{
				Global_69276 = (unk_0x48E480685981C7D4() - 9000);
			}
			unk_0xC9A352663D97EFC3(7);
			unk_0xC9A352663D97EFC3(6);
			unk_0xC9A352663D97EFC3(8);
			unk_0xC9A352663D97EFC3(9);
			iVar1 = (unk_0x48E480685981C7D4() - Global_69276);
			if (iVar1 < 9000 && !unk_0x29AFA2493D7C23D0())
			{
				iVar2 = 255;
				if (iVar1 < 1000)
				{
					iVar2 = unk_0x11E019C8F43ACC8A(((unk_0xBBDA792448DB5A89(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (9000 - iVar1);
					if (iVar3 < 1000)
					{
						iVar2 = unk_0x11E019C8F43ACC8A(((unk_0xBBDA792448DB5A89(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_69274)
				{
					case 3:
					case 5:
						if (iParam6 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.07f;
						}
						else if (iParam7 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.077f;
						}
						else if (iParam8 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.05f;
						}
						else if (iParam9 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.035f;
						}
						else
						{
							fVar6 = 0f;
							fVar7 = -0.014f;
						}
						break;
					
					default:
						fVar6 = 0f;
						fVar7 = -0.014f;
						break;
				}
				unk_0x700CD125EC59941D(82, 66);
				unk_0x992C39DBBED35AE3(1);
				unk_0x52B16DD1F847B2B9(2);
				iVar12 = func_291();
				if (Global_69277 == 1 && Global_69275 == 62)
				{
					iVar12 = Global_98931.f_1750.f_539.f_3550;
				}
				switch (iVar12)
				{
					case 0:
						unk_0xDFC297A2CE47E495(143, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 1:
						unk_0xDFC297A2CE47E495(144, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 2:
						unk_0xDFC297A2CE47E495(145, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					default:
						iVar8 = 240;
						iVar9 = 200;
						iVar10 = 80;
				}
				unk_0x00793A77639A3BAC(iVar8, iVar9, iVar10, iVar2);
				unk_0x175871A3A52AF528();
				Var4 = { func_500(Global_69275, Global_69277, iParam10) };
				if (fVar7 == -0.014f)
				{
				}
				unk_0x931DC442937495CF(fVar6, fVar7, 0f, 0.01f);
				unk_0x73984E9D23C977BA(0.67f, 0.67f);
				if (!unk_0xA8D3C47114E32A16() && !unk_0x75E5D3D5561067A8())
				{
					fLocal_37 = 0.14f;
				}
				else
				{
					fLocal_37 = 0.17f;
				}
				if (fVar7 == -0.014f)
				{
					if (func_499(&Var4) > fLocal_37)
					{
						if (unk_0x8D774C92D1A59A06(15))
						{
							unk_0xD43E234447A65E08(15, Local_33.f_0, (Local_33.f_1 + fLocal_36));
							Global_69279 = 1;
						}
					}
				}
				unk_0xA004CFE21CA812EA(&Var4);
				unk_0x834054753F171911(fVar6, fVar7, 0);
				unk_0x94CD3CDE7BD3510B();
				if (Global_69278 == 1)
				{
					func_252();
					fLocal_32 = 0f;
				}
			}
			else
			{
				func_252();
				fLocal_32 = 0f;
			}
		}
	}
}

float func_499(var uParam0)
{
	unk_0xB865D57D92832050(uParam0);
	return unk_0x0239B891C698A437(1);
}

struct<2> func_500(int iParam0, int iParam1, int iParam2)
{
	struct<2> Var0;
	int iVar2;
	
	StringCopy(&Var0, "", 8);
	switch (iParam1)
	{
		case 1:
			Var0 = { func_508(iParam0) };
			break;
		
		case 7:
			Var0 = { func_238(iParam0) };
			break;
		
		case 3:
			iVar2 = iParam0;
			switch (iVar2)
			{
				case 0:
					Var0 = { func_507(iParam2) };
					break;
				
				case 8:
					Var0 = { func_506(iParam2) };
					break;
				
				case 7:
					Var0 = { func_505(iParam2) };
					break;
				
				case 10:
					Var0 = { func_504(iParam2) };
					break;
				
				case 5:
					Var0 = { func_503(iParam2) };
					break;
				
				case 4:
					Var0 = { func_502(iParam2) };
					break;
				
				default:
					StringCopy(&Var0, func_501(iVar2), 8);
					break;
			}
			break;
		
		default:
			break;
	}
	return Var0;
}

char* func_501(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJUM";
			break;
		
		case 1:
			return "MG_DART";
			break;
		
		case 2:
			return "MG_GOLF";
			break;
		
		case 3:
			return "MG_HUNT";
			break;
		
		case 4:
			return "MG_OFFR";
			break;
		
		case 5:
			return "MG_PILO";
			break;
		
		case 6:
			return "MG_RMPG";
			break;
		
		case 7:
			return "MG_SERA";
			break;
		
		case 8:
			return "MG_SRAC";
			break;
		
		case 9:
			return "MG_STRP";
			break;
		
		case 10:
			return "MG_STNT";
			break;
		
		case 11:
			return "MG_SHTR";
			break;
		
		case 12:
			return "MG_TAXI";
			break;
		
		case 13:
			return "MG_TENN";
			break;
		
		case 14:
			return "MG_TOWI";
			break;
		
		case 15:
			return "MG_TRFA";
			break;
		
		case 16:
			return "MG_TRFG";
			break;
		
		case 17:
			return "MG_TRIA";
			break;
		
		case 18:
			return "MG_YOGA";
			break;
		
		case 19:
			return "MG_CRCE";
			break;
	}
	return "INVALID!";
}

struct<2> func_502(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0xB318FDA0D1ABDB20(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGOR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_503(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0xB318FDA0D1ABDB20(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGFS_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_504(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0xB318FDA0D1ABDB20(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSP_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_505(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0xB318FDA0D1ABDB20(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_506(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0xB318FDA0D1ABDB20(&cVar2) || iParam0 == 3)
	{
	}
	else
	{
		StringCopy(&Var0, "MGCR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_507(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0xB318FDA0D1ABDB20(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGBJ_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_508(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_81930[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_98931.f_7699.f_99.f_205[7])
		{
			case 1:
				StringConCat(&Var0, "A", 8);
				break;
			
			case 2:
				StringConCat(&Var0, "B", 8);
				break;
			
			default:
				StringConCat(&Var0, "A", 8);
				break;
			}
	}
	return Var0;
}

int func_509(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	if (((!func_511(0) || Global_69289) || Global_69278 == 1) || !unk_0xECDEA377354CBDA4())
	{
		return 0;
	}
	switch (Global_69274)
	{
		case 0:
			if (unk_0xD994929E13CC1ED5(&uParam1, "NONE") || unk_0xB318FDA0D1ABDB20(&uParam1))
			{
				Global_69274 = 3;
			}
			else
			{
				Global_69274 = 1;
			}
			break;
		
		case 1:
			if (unk_0x0A11B2F86364F5B7())
			{
				Global_69274 = 2;
			}
			break;
		
		case 2:
			if (unk_0x521385D8214D27C4())
			{
				Global_69274 = 4;
				return 1;
			}
			else if (!unk_0xEF7A631CCBD01652())
			{
				Global_69274 = 3;
			}
			break;
		
		case 3:
			if (unk_0x521385D8214D27C4())
			{
			}
			else
			{
				Global_69274 = 5;
				return 1;
			}
			break;
		
		case 4:
			if (unk_0x521385D8214D27C4())
			{
				return 1;
			}
			else if (iParam0 == 1)
			{
				Global_69274 = 5;
			}
			break;
		
		case 5:
			if ((unk_0x521385D8214D27C4() || func_9(0)) || func_510(1))
			{
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_510(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17099.f_4 && Global_17099.f_104 == 4);
	}
	return Global_17099.f_4;
}

int func_511(int iParam0)
{
	if (Global_35443 == 15)
	{
		return 0;
	}
	if (func_512(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_512(int iParam0)
{
	return func_513(iParam0, Global_35443);
}

int func_513(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_514(int iParam0, bool bParam1)
{
	func_523(bParam1, 1);
	if (!func_45())
	{
		func_33("NIGEL2_MISSION_FAIL", 0);
	}
	if (bParam1)
	{
		func_515();
	}
	iLocal_3105 = iParam0;
	bLocal_3168 = false;
	if (func_45())
	{
		iLocal_3169 = 1;
	}
	else
	{
		iLocal_3169 = 0;
	}
	if (!func_45())
	{
		if (iLocal_3105 == 0)
		{
			if (func_10(unk_0x81873881071CD9FE()))
			{
				func_16(unk_0x81873881071CD9FE(), -1309.016f, -641.8671f, 25.5017f, 242.3463f, 0, 0);
				func_3(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 50f, 13, 5000, 0, 0);
				iLocal_3169 = 1;
			}
		}
	}
	func_1(iLocal_3105);
}

void func_515()
{
	func_516(1, 0);
	if (!func_45() && bLocal_3168)
	{
		while (!func_33("NIGEL2_MISSION_FAIL", 0))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	unk_0xFEBF3DDE5E4DC5C5(0, 0, 3000, 1, 0, 0);
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (!func_45())
		{
			unk_0x1E2B48EE3EC55DCF(unk_0x81873881071CD9FE());
		}
		unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 0, 0);
		unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 0);
	}
	func_528();
	func_287(0);
}

void func_516(bool bParam0, bool bParam1)
{
	int iVar0;
	
	unk_0xD1C83BD797927DD5();
	if (unk_0xA83A609D74168B30())
	{
		unk_0xB8BB626315D394F5(1);
	}
	func_18();
	unk_0x5B6D37392F5991C3(1f);
	func_521(0);
	func_23(1, 1, 1, 1);
	unk_0xC07F240B925F8FC7(0);
	unk_0xDD17978B9F91686B(0);
	func_296(0);
	if (!iLocal_3204)
	{
		unk_0x30550E796AC03903();
	}
	unk_0xC3A1174645E71AB9(-1415.904f, -732.5489f, 17.54549f, -1236.628f, -601.0265f, 31.15345f, 23f, 1);
	unk_0xC3A1174645E71AB9(418.2838f, -571.6629f, 24.69794f, 362.0258f, -663.1398f, 38.33998f, 28f, 1);
	unk_0xC3A1174645E71AB9(-668.3635f, -658.3801f, 27.43382f, -440.022f, -657.4238f, 40.25127f, 40f, 1);
	unk_0x3DD1ED742E99F292(-1409.344f, -756.381f, 17.59896f, -1239.148f, -587.1219f, 31.25266f, 1, 1);
	unk_0x3DD1ED742E99F292(341.2f, -645.83f, 25f, 429.1f, -572.89f, 35f, 1, 1);
	unk_0xE91F714E010C7127(uLocal_3287, 0);
	unk_0xE91F714E010C7127(uLocal_3288, 0);
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		unk_0xE91F714E010C7127(uLocal_3289[iVar0], 0);
		iVar0++;
	}
	unk_0x8DBC0C86D2397C6A(-1318.5f, -678.8826f, 23f, -1296.628f, -631.5449f, 28f, 0);
	unk_0x8DBC0C86D2397C6A(-496.2885f, -681.5599f, 25f, -481.5988f, -668.7411f, 38f, 0);
	unk_0x8DBC0C86D2397C6A(-463.2153f, -829.0475f, 22.4812f, -445.4645f, -813.1011f, 36.56588f, 0);
	unk_0x8DBC0C86D2397C6A(341.2f, -645.83f, 25f, 429.1f, -572.89f, 35f, 0);
	unk_0xB0CC34FB1640F35B();
	unk_0x92D82E4F36DEC0C0(0);
	func_520(0);
	if (!func_45() && bLocal_3168)
	{
		func_33("NIGEL2_MISSION_FAIL", 0);
	}
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), true, 0);
		unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 170, 0);
	}
	if (unk_0x42E36F2D658EB2FF(uLocal_3244))
	{
		unk_0xDD0B0D77CB8995B1(uLocal_3244, 0);
		unk_0x35B958B469415A23(uLocal_3244, 0);
	}
	func_519(1, 1, 1);
	func_518(&uLocal_3303, 2);
	func_518(&uLocal_3303, 3);
	func_518(&uLocal_3303, 4);
	func_518(&uLocal_3303, 5);
	func_299(&uLocal_19, 0, 0);
	unk_0xE851048D5DAD1719(1);
	unk_0xCF2F32222FF93448(1f);
	unk_0x4BF7FC7E9DBAB99B(iLocal_3285);
	unk_0xB5A91586385F755B(Local_3489.f_1, 0);
	unk_0xB5A91586385F755B(Local_3496.f_1, 0);
	func_90();
	func_47(bParam0);
	func_517(bParam1);
	if (iLocal_3104 == 4)
	{
		func_264(75, 2, 1, 1, 0);
		func_264(76, 1, 1, 1, 0);
		func_264(181, 2, 1, 1, 0);
	}
	else
	{
		func_264(75, 0, 0, 1, 0);
		func_264(76, 1, 0, 1, 0);
		func_264(181, 1, 0, 1, 0);
	}
}

void func_517(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x59F36F53A82C2E72(iLocal_3261))
	{
		if (unk_0x9B710BA2688DD221(iLocal_3261))
		{
			unk_0xFE2FA265213691DE(iLocal_3261, 0);
			unk_0x2912C2F5F69CF538(iLocal_3261);
		}
	}
	if (unk_0x3CCB36EDF309ECF7(uLocal_3284))
	{
		if (unk_0x0226F42B42D2C7EF(uLocal_3284) != 10)
		{
			unk_0x53D662DFECF19C69(uLocal_3284, 9);
		}
	}
	unk_0x4855165A2773595C(iLocal_3257, sLocal_3295);
	unk_0x4855165A2773595C(2, sLocal_3295);
	unk_0x4855165A2773595C(1, sLocal_3296);
	func_375();
	func_64(0, 1);
	if (unk_0x3D675D69D18A10E9(uLocal_3282))
	{
		unk_0xA080515881A08702(uLocal_3282, 0);
	}
	if (unk_0x3D675D69D18A10E9(uLocal_3283))
	{
		unk_0xA080515881A08702(uLocal_3283, 0);
	}
	unk_0x954FB3FC1E04A7A9();
	if (func_13(Local_3496.f_0))
	{
		unk_0xA5F9A8EE8A45DD7E(Local_3496.f_0, 0);
	}
	if (unk_0x12F24A1A22BF90A7("NIGEL_02_CHASE"))
	{
		unk_0x0C22E352114F699C("NIGEL_02_CHASE");
	}
	unk_0x54206B7CE6FF2360(iLocal_3256);
	unk_0xABF33AFE6B2877A8();
	unk_0x59DA421C11F5B34F();
	unk_0xD8323B49BAE93D80("rcmnigel2");
	unk_0x887F4488DA99FD21(Local_3273.f_7);
	unk_0x887F4488DA99FD21(Local_3496.f_1);
	unk_0x887F4488DA99FD21(Local_3489.f_1);
	unk_0x887F4488DA99FD21(Local_3482.f_1);
	unk_0x887F4488DA99FD21(Local_3468.f_1);
	unk_0x887F4488DA99FD21(Local_3475.f_1);
	unk_0x887F4488DA99FD21(iLocal_3269);
	unk_0x887F4488DA99FD21(iLocal_3270);
	unk_0x887F4488DA99FD21(iLocal_3271);
	unk_0x887F4488DA99FD21(iLocal_3272);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		unk_0x887F4488DA99FD21(Local_3533[iVar0 /*2*/].f_1);
		iVar0++;
	}
	unk_0x887F4488DA99FD21(Local_3540.f_1);
	if (bParam0)
	{
		unk_0xBEE99C97A1B87F95(0, 1);
	}
}

void func_518(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_519(bool bParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	bVar0 = true;
	if (unk_0xEF7A631CCBD01652())
	{
		while (bVar0)
		{
			bVar0 = unk_0xEF7A631CCBD01652();
			if (unk_0x521385D8214D27C4())
			{
				unk_0x30E4A4CF320834D9(0);
			}
			if (unk_0x0A11B2F86364F5B7())
			{
				unk_0x9AF02897E594E920();
			}
			if (unk_0xEF7A631CCBD01652() && !unk_0x521385D8214D27C4())
			{
				bVar0 = false;
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		if (bParam0)
		{
			func_23(iParam1, iParam2, 1, 1);
		}
	}
}

void func_520(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_97987, unk_0x11CA2334E341B424(), 24);
		Global_97981 = 1;
	}
	else
	{
		StringCopy(&Global_97987, "NULL", 24);
		Global_97981 = 0;
	}
}

void func_521(bool bParam0)
{
	if (bParam0)
	{
		func_522();
		if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
		{
			unk_0xF3148AAF69AF9CBC(&Global_2265, 16);
		}
		Global_14394.f_1 = 1;
		if (func_9(0))
		{
			func_6(0);
		}
	}
	else if (Global_14394.f_1 == 1)
	{
		if (!Global_14394.f_1 == 0)
		{
			Global_14394.f_1 = 3;
		}
	}
}

void func_522()
{
	if (Global_14394.f_1 == 9 || Global_14394.f_1 == 10)
	{
		Global_15746 = 0;
		Global_15742 = 1;
	}
}

void func_523(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_519(0, 1, 1);
	}
	if (!unk_0x29AFA2493D7C23D0())
	{
		unk_0x3B283FEBA87FFBEB(0);
	}
	func_289(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_524(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_527())
	{
		unk_0xE6E19E3BBABCBC24(0);
		unk_0xC69E84EBBD7166E6(&(Global_90809.f_20), 2);
		unk_0xD338B0444EFB8C65(1);
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), false, 0);
		}
		Global_90805 = { Param0 };
		Global_90808 = fParam3;
		Global_90804 = 1;
		if (iParam4 == 1)
		{
			unk_0xF3148AAF69AF9CBC(&(Global_90809.f_20), 14);
		}
		else
		{
			unk_0xC69E84EBBD7166E6(&(Global_90809.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0xF3148AAF69AF9CBC(&(Global_90809.f_20), 24);
		}
		else
		{
			unk_0xC69E84EBBD7166E6(&(Global_90809.f_20), 24);
		}
		func_44(1);
	}
}

int func_525()
{
	if (!Global_90809 == 10 && !Global_90809 == 9)
	{
		return 0;
	}
	return Global_90809.f_2;
}

void func_526(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_10(uParam0->f_28[iVar0]))
		{
			unk_0xCEDA5B7DDF6C8846(uParam0->f_28[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_10(uParam0->f_35[iVar0]))
		{
			unk_0xCEDA5B7DDF6C8846(uParam0->f_35[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_10(uParam0->f_41[iVar0]))
		{
			unk_0xCEDA5B7DDF6C8846(uParam0->f_41[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		unk_0xCEDA5B7DDF6C8846(unk_0x81873881071CD9FE(), iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		unk_0x210A4A0B257F8433(unk_0x81873881071CD9FE(), iParam1);
		if (bParam2)
		{
			unk_0x649CF94A4282A7FD(unk_0x81873881071CD9FE(), joaat("weapon_unarmed"), 1);
		}
	}
}

int func_527()
{
	if (Global_90809 == 10 || Global_90809 == 9)
	{
		return 1;
	}
	return 0;
}

void func_528()
{
	func_532();
	func_530(64, 2, 0);
	unk_0x5B6D37392F5991C3(0.2f);
	unk_0xCF03502D0A0CF8C3(2, 0);
	unk_0xCF03502D0A0CF8C3(3, 0);
	unk_0xCF03502D0A0CF8C3(4, 0);
	unk_0xCF03502D0A0CF8C3(5, 0);
	unk_0x92D82E4F36DEC0C0(1);
	func_520(1);
	unk_0x342437AFD16ED2D2(0);
	func_529();
}

void func_529()
{
	Global_85320 = 1;
}

void func_530(int iParam0, int iParam1, bool bParam2)
{
	Global_2950 = iParam0;
	if (Global_98[iParam0 /*10*/].f_8 != 138)
	{
		func_320();
		if (iParam1 == 4)
		{
			Global_98931.f_32499[iParam0 /*29*/].f_12[0] = 1;
			Global_98931.f_32499[iParam0 /*29*/].f_12[1] = 1;
			Global_98931.f_32499[iParam0 /*29*/].f_12[2] = 1;
			Global_98931.f_32499[iParam0 /*29*/].f_24[0] = 1;
			Global_98931.f_32499[iParam0 /*29*/].f_24[1] = 1;
			Global_98931.f_32499[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_98931.f_32499[iParam0 /*29*/].f_12[iParam1] == 1 && Global_98931.f_32499[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_98931.f_32499[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_98931.f_32499[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_69020)
			{
				if (iParam1 != 4)
				{
					if (Global_14394 != iParam1)
					{
						Global_2923[iParam1 /*4*/] = { Global_98931.f_32499[iParam0 /*29*/].f_3 };
						Global_2940[iParam1] = 1;
						Global_2945[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14394)
					{
					}
					else
					{
						Global_2874[1 /*6*/] = { Global_98931.f_32499[iParam0 /*29*/].f_3 };
						Global_2874[1 /*6*/].f_5 = iParam1;
						func_531();
					}
				}
				else
				{
					Global_2874[1 /*6*/] = { Global_98931.f_32499[iParam0 /*29*/].f_3 };
					Global_2874[1 /*6*/].f_5 = iParam1;
					func_531();
				}
			}
			else
			{
				Global_2874[1 /*6*/] = { Global_98931.f_32499[iParam0 /*29*/].f_3 };
				Global_2874[1 /*6*/].f_5 = iParam1;
				func_531();
			}
		}
	}
}

void func_531()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, unk_0x46E7F5908F815DDC(&(Global_98931.f_32499[Global_2950 /*29*/].f_7)), 64);
	if (Global_2969 == 0)
	{
		unk_0x02A6B267064771B1("");
		StringCopy(&cVar16, unk_0x46E7F5908F815DDC(&(Global_2874[1 /*6*/])), 64);
		sVar32 = unk_0x46E7F5908F815DDC("CELL_253");
		unk_0xDFBE4FFEF7FC22F3(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x02A6B267064771B1("CELL_255");
		unk_0x072D7B028D6C7A05(&(Global_2874[1 /*6*/]));
		unk_0xDFBE4FFEF7FC22F3(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0xC69E84EBBD7166E6(&Global_2264, 0);
}

void func_532()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		iLocal_3183[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		iLocal_3170[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_3178[iVar0] = 0;
		iVar0++;
	}
	iLocal_3192 = 0;
	iLocal_3196 = 0;
	iLocal_3203 = 0;
	iLocal_3200 = 0;
	iLocal_3201 = 0;
	iLocal_3197 = 0;
	iLocal_3198 = 0;
	iLocal_3199 = 0;
	bLocal_3212 = false;
	bLocal_3210 = false;
	bLocal_3207 = false;
	iLocal_3202 = 0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iLocal_3193[iVar0] = 0;
		iVar0++;
	}
	iLocal_3234 = 0;
	iLocal_3231 = 0;
	iLocal_3232 = 0;
	iLocal_3233 = 0;
	iLocal_3235 = 0;
	iLocal_3236 = 1;
	iLocal_3237 = 0;
	iLocal_3238 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		iLocal_3215[iVar0] = 0;
		iVar0++;
	}
	iLocal_3209 = 0;
	iLocal_3211 = 0;
	iLocal_3204 = 1;
	bLocal_3205 = false;
	iLocal_3208 = 0;
	iLocal_3206 = 0;
	bLocal_3230 = false;
	iLocal_3228 = 0;
	bLocal_3229 = false;
	bLocal_3213 = false;
	bLocal_3214 = false;
	bLocal_3239 = false;
	iLocal_3240 = 0;
	iLocal_3241 = 0;
	iLocal_3242 = 0;
	iLocal_3243 = 0;
	iLocal_3245 = 0;
	iLocal_3252 = 0;
	iLocal_3247 = 0;
	iLocal_3253 = 0;
	iLocal_3254 = 0;
	iLocal_3255 = 0;
	iLocal_3248 = 0;
	iLocal_3249 = 0;
	iLocal_3246 = 0;
	iLocal_3250 = 0;
	iLocal_3251 = 0;
	iLocal_3256 = -1;
	iLocal_3257 = 1;
	iLocal_3258 = 0;
	fLocal_3264 = 0f;
	fLocal_3265 = 0f;
	fLocal_3263 = 20.75f;
	fLocal_3266 = 0f;
	Local_3549 = { 368.5714f, -594.9467f, 45.5422f };
	Local_3552 = { 389.5015f, -614.1279f, 29.618f };
	iLocal_3262 = 0;
	Local_3533[0 /*2*/].f_1 = joaat("boxville2");
	Local_3533[1 /*2*/].f_1 = joaat("washington");
	Local_3533[2 /*2*/].f_1 = joaat("washington");
	Local_3540.f_1 = joaat("sultan");
	iLocal_3269 = joaat("a_m_y_business_01");
	iLocal_3270 = joaat("s_m_m_doctor_01");
	iLocal_3271 = joaat("s_f_y_scrubs_01");
	iLocal_3272 = joaat("a_f_y_bevhills_03");
	Local_3496.f_1 = joaat("dubsta");
	Local_3496.f_3 = { -1290.73f, -634.603f, 26.1004f };
	Local_3496.f_6 = 126.961f;
	Local_3489.f_1 = func_534();
	Local_3489.f_3 = { -1304.01f, -644.58f, 25.91f };
	Local_3489.f_6 = 127.67f;
	Local_3482.f_1 = func_533();
	Local_3482.f_3 = { -1290.048f, -631.459f, 25.6863f };
	Local_3482.f_6 = 121.506f;
	Local_3468.f_1 = func_566(63);
	Local_3468.f_3 = { -1309.61f, -640.33f, 26.53f };
	Local_3468.f_6 = -124f;
	Local_3475.f_1 = func_566(64);
	Local_3475.f_3 = { -1310.24f, -640.19f, 26.53f };
	Local_3475.f_6 = -73.78f;
	Local_3273.f_1 = { 299.48f, -584.84f, 41.445f };
	Local_3273.f_4 = { 0f, 0f, -20f };
	Local_3273.f_7 = joaat("prop_hospitaldoors_start");
	iLocal_3542 = 0;
	Local_3558 = { 394.5f, -619.1f, 28.2f };
	Local_3561 = { 0f, 0f, 0f };
	unk_0x4865E80F793024CE("ENEMIES", &iLocal_3285);
	iLocal_3286 = unk_0x88594869E178AFA2(unk_0x81873881071CD9FE());
	unk_0xF8E77F310A5B6EAB(5, iLocal_3285, joaat("player"));
	unk_0xF8E77F310A5B6EAB(5, joaat("player"), iLocal_3285);
	unk_0xF8E77F310A5B6EAB(5, iLocal_3285, iLocal_3286);
	unk_0xF8E77F310A5B6EAB(5, iLocal_3286, iLocal_3285);
	unk_0xF8E77F310A5B6EAB(1, iLocal_3286, joaat("player"));
	unk_0xF8E77F310A5B6EAB(1, joaat("player"), iLocal_3286);
}

int func_533()
{
	return joaat("u_m_m_aldinapoli");
}

int func_534()
{
	return iLocal_94;
}

void func_535()
{
	func_425();
	if (func_544())
	{
		func_516(0, 1);
	}
	func_536(&Local_3107, 1, 0, 0);
	unk_0xC23A229F78DAD92A();
}

void func_536(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_542(uParam0, iParam1);
	func_540(uParam0, bParam2);
	func_537(uParam0, bParam3);
}

void func_537(var uParam0, bool bParam1)
{
	func_538(&(uParam0->f_41), bParam1);
}

void func_538(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_51(uParam0[iVar0]);
		}
		else
		{
			func_539(uParam0[iVar0], 0);
		}
		iVar0++;
	}
}

void func_539(var uParam0, bool bParam1)
{
	if (unk_0x86CCCD2FAE9D5E65(*uParam0))
	{
		if (unk_0xE482770A8B024982(*uParam0))
		{
			unk_0xD88DD5B581458979(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0xB5713813CBD9E79F(uParam0);
		}
		else
		{
			unk_0xD196F3B2D5DF4AC3(*uParam0);
		}
	}
}

void func_540(var uParam0, bool bParam1)
{
	func_541(&(uParam0->f_35), bParam1);
}

void func_541(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_50(uParam0[iVar0]);
		}
		else
		{
			func_49(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_542(var uParam0, int iParam1)
{
	func_543(&(uParam0->f_28), iParam1);
}

void func_543(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (iParam1 == 1)
		{
			func_54(uParam0[iVar0]);
		}
		else
		{
			func_53(uParam0[iVar0], 0, 1, 0);
		}
		iVar0++;
	}
}

int func_544()
{
	int iVar0;
	
	iVar0 = func_283();
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!Global_98018[iVar0 /*10*/].f_4)
	{
		return 0;
	}
	Global_98018[iVar0 /*10*/].f_4 = 0;
	unk_0xBEE99C97A1B87F95(0, 1);
	unk_0xBEE99C97A1B87F95(3, 1);
	unk_0xBEE99C97A1B87F95(2, 1);
	if (!func_95(0))
	{
		if (Global_98018[iVar0 /*10*/].f_5 && Global_98018[iVar0 /*10*/].f_6)
		{
			Global_98018[iVar0 /*10*/].f_6 = 0;
		}
		if (!Global_98018[iVar0 /*10*/].f_6 && !Global_98018[iVar0 /*10*/].f_5)
		{
			Global_98018[iVar0 /*10*/].f_6 = 1;
		}
	}
	return 1;
}

void func_545(bool bParam0)
{
	int iVar0;
	
	func_561();
	if (!func_560())
	{
		iVar0 = func_283();
		if (iVar0 == -1)
		{
			return;
		}
		if (!Global_98018[iVar0 /*10*/].f_4)
		{
			return;
		}
		if (Global_98018[iVar0 /*10*/].f_5)
		{
			return;
		}
		if (Global_98018[iVar0 /*10*/].f_6)
		{
			return;
		}
		if (Global_85317 == Global_90846)
		{
			Global_98931.f_17188[iVar0 /*6*/].f_4++;
		}
		Global_85317 = Global_90846;
		if (bParam0)
		{
			func_242(iVar0, 1, 0);
			func_546(unk_0x11CA2334E341B424(), iVar0);
		}
		else
		{
			if (Global_98018[iVar0 /*10*/].f_9 == -1)
			{
			}
			else
			{
				func_253(&(Global_98018[iVar0 /*10*/].f_9));
			}
			func_241(iVar0, 1, 1, 0);
		}
		Global_98018[iVar0 /*10*/].f_6 = 1;
	}
}

void func_546(char* sParam0, int iParam1)
{
	if (Global_90809 != 12)
	{
		if (func_547(sParam0, 6, iParam1))
		{
			Global_90809.f_1 = iParam1;
		}
	}
}

int func_547(char* sParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<32> Var1;
	int iVar33;
	
	func_104();
	func_559();
	Global_90809 = 0;
	StringCopy(&(Global_90809.f_3), sParam0, 32);
	Global_90809.f_11 = iParam1;
	unk_0x051313E56EE6229D(1);
	unk_0x9BF347704344C32A(0);
	unk_0xAE9199CEEF9AE6D9(0);
	func_6(1);
	func_521(1);
	func_556(0);
	func_555(1);
	unk_0xC69E84EBBD7166E6(&(Global_90809.f_20), 9);
	unk_0xC69E84EBBD7166E6(&(Global_90809.f_20), 6);
	unk_0xC69E84EBBD7166E6(&(Global_90809.f_20), 20);
	unk_0xC69E84EBBD7166E6(&(Global_90809.f_20), 21);
	unk_0xC69E84EBBD7166E6(&(Global_90809.f_20), 5);
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
			{
				uVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
				if (unk_0x69F59C68E86FDF3D(uVar0))
				{
					unk_0xF3148AAF69AF9CBC(&(Global_90809.f_20), 5);
				}
			}
		}
	}
	unk_0xB8BB626315D394F5(1);
	unk_0xD1C83BD797927DD5();
	func_554(0);
	func_107(1);
	Global_90809.f_2 = Global_90846;
	if (func_553())
	{
		if (func_552())
		{
			if (Global_90846 >= func_549())
			{
				if (!unk_0x236D8AD7EE179F46(Global_81930[iParam2 /*34*/].f_15, 16))
				{
					if (Global_98931.f_7699.f_330[iParam2 /*6*/].f_1 >= 2)
					{
						Global_85318 = 1;
					}
				}
			}
		}
		else if (Global_90809.f_11 == 6)
		{
			func_244(iParam2, &Var1);
			if (Var1.f_31 == 1)
			{
				if (Global_98931.f_17188[iParam2 /*6*/].f_4 >= 2)
				{
					Global_85318 = 1;
				}
			}
		}
		else
		{
			iVar33 = func_548(unk_0x11CA2334E341B424());
			if (iVar33 > -1)
			{
				if (Global_98931.f_29435.f_4[iVar33] >= 2)
				{
					Global_85318 = 1;
				}
			}
		}
	}
	return 1;
}

int func_548(char* sParam0)
{
	if (unk_0xD994929E13CC1ED5("BailBond1", uParam0))
	{
		return 0;
	}
	else if (unk_0xD994929E13CC1ED5("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0xD994929E13CC1ED5("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0xD994929E13CC1ED5("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

int func_549()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_550(&(Global_90809.f_3), 0);
	iVar1 = 0;
	if (iVar0 == 53)
	{
		iVar1 = 1;
	}
	return iVar1;
}

int func_550(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x8DAF7A748E41AD46(uParam0);
	iVar1 = func_551(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_551(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_81930[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

int func_552()
{
	if ((((Global_90809.f_11 == 0 || Global_90809.f_11 == 1) || Global_90809.f_11 == 2) || Global_90809.f_11 == 3) || Global_90809.f_11 == 4)
	{
		return 1;
	}
	return 0;
}

int func_553()
{
	if ((((Global_90809.f_11 == 0 || Global_90809.f_11 == 1) || Global_90809.f_11 == 2) || Global_90809.f_11 == 6) || Global_90809.f_11 == 3)
	{
		return 1;
	}
	if (Global_90809.f_11 == 5)
	{
		if (func_548(&(Global_90809.f_3)) > -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_554(int iParam0)
{
	unk_0xF1BC58601CA4A5C7(iParam0);
	unk_0x3BF4F473786B0150(iParam0);
}

void func_555(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xDF12B8D7DEE2158B();
		unk_0xF3148AAF69AF9CBC(&(Global_90809.f_20), 3);
	}
	else if (unk_0x236D8AD7EE179F46(Global_90809.f_20, 3))
	{
		unk_0x6246FB0D4AFA25CC();
		unk_0xC69E84EBBD7166E6(&(Global_90809.f_20), 3);
	}
}

void func_556(int iParam0)
{
	if (iParam0 == 1)
	{
		if (unk_0x236D8AD7EE179F46(Global_90809.f_20, 4))
		{
			func_558();
			unk_0xC69E84EBBD7166E6(&(Global_90809.f_20), 4);
		}
	}
	else
	{
		func_557();
		unk_0xF3148AAF69AF9CBC(&(Global_90809.f_20), 4);
	}
}

void func_557()
{
	Global_17099.f_5 = 1;
}

void func_558()
{
	Global_17099.f_5 = 0;
}

void func_559()
{
	Global_85318 = 0;
	Global_85319 = 0;
}

int func_560()
{
	if (((Global_90809 == 13 || Global_90809 == 10) || Global_90809 == 11) || Global_90809 == 12)
	{
		return 0;
	}
	return 1;
}

void func_561()
{
	Global_90844 = 1;
	if (unk_0x375975027050A891(unk_0x1329891157A54C63(), 1))
	{
		if (unk_0xB318FDA0D1ABDB20(&Global_69252))
		{
			switch (func_291())
			{
				case 0:
					StringCopy(&Global_69252, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_69252, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_69252, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_69256, "", 16);
		}
		Global_90844 = 0;
	}
	else if (!unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (unk_0xB318FDA0D1ABDB20(&Global_69252))
		{
			switch (func_291())
			{
				case 0:
					StringCopy(&Global_69252, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_69252, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_69252, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_69256, "", 16);
		}
		Global_90844 = 0;
		unk_0xF3148AAF69AF9CBC(&(Global_90809.f_20), 25);
	}
}

void func_562(char* sParam0)
{
	if (!unk_0xB318FDA0D1ABDB20(sParam0))
	{
	}
}

void func_563(var uParam0)
{
	func_564(&(uParam0->f_28));
	func_564(&(uParam0->f_35));
	func_564(&(uParam0->f_41));
}

void func_564(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (unk_0x86CCCD2FAE9D5E65((*uParam0)[iVar0]))
		{
			unk_0xD768713E73165208((*uParam0)[iVar0], 0, 1);
		}
		iVar0++;
	}
}

char* func_565()
{
	return "Al_DiNapoli";
}

int func_566(int iParam0)
{
	if (!func_234(iParam0))
	{
		return Global_98931.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

