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
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = -1;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 1000;
	var uLocal_30 = 1000;
	var uLocal_31 = 0;
	char* sLocal_32 = NULL;
	float fLocal_33 = 0f;
	struct<3> Local_34 = { 0, 0, 0 } ;
	float fLocal_37 = 0f;
	float fLocal_38 = 0f;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	float fLocal_42 = 0f;
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	var uLocal_49 = 10;
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
	var uLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
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
	var uLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	bool bLocal_122 = 0;
	bool bLocal_123 = 0;
	bool bLocal_124 = 0;
	bool bLocal_125 = 0;
	bool bLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	bool bLocal_129 = 0;
	bool bLocal_130 = 0;
	int iLocal_131 = 0;
	bool bLocal_132 = 0;
	bool bLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	bool bLocal_138 = 0;
	bool bLocal_139 = 0;
	bool bLocal_140 = 0;
	int iLocal_141 = 0;
	bool bLocal_142 = 0;
	int iLocal_143 = 0;
	bool bLocal_144 = 0;
	bool bLocal_145 = 0;
	bool bLocal_146 = 0;
	bool bLocal_147 = 0;
	bool bLocal_148 = 0;
	bool bLocal_149 = 0;
	bool bLocal_150 = 0;
	bool bLocal_151 = 0;
	bool bLocal_152 = 0;
	bool bLocal_153 = 0;
	float fLocal_154[85] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_240[85] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_326[85] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_412[85] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_498[85] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_584 = 0f;
	float fLocal_585 = 0f;
	float fLocal_586 = 0f;
	float fLocal_587 = 0f;
	float fLocal_588[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_659[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_730[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_801[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_872[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_943[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1014[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1085[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1156[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1227[70] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
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
	float fLocal_1318 = 0f;
	int iLocal_1319[85] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1405[85] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1491[85] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1577[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1648[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1719[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1790[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	int iLocal_1877 = 0;
	struct<3> Local_1878[85];
	struct<3> Local_2134[70];
	struct<3> Local_2345[70];
	struct<3> Local_2556 = { 0, 0, 0 } ;
	struct<3> Local_2559 = { 0, 0, 0 } ;
	struct<3> Local_2562 = { 0, 0, 0 } ;
	var uLocal_2565 = 0;
	var uLocal_2566 = 0;
	var uLocal_2567 = 0;
	var uLocal_2568 = 0;
	var uLocal_2569 = 0;
	var uLocal_2570 = 0;
	struct<3> Local_2571 = { 0, 0, 0 } ;
	struct<3> Local_2574 = { 0, 0, 0 } ;
	struct<3> Local_2577 = { 0, 0, 0 } ;
	struct<3> Local_2580 = { 0, 0, 0 } ;
	char cLocal_2583[64] = "";
	var uLocal_2591 = 0;
	var uLocal_2592 = 0;
	var uLocal_2593 = 0;
	var uLocal_2594 = 0;
	var uLocal_2595 = 0;
	var uLocal_2596 = 0;
	var uLocal_2597 = 0;
	var uLocal_2598 = 0;
	int iLocal_2599 = 0;
	int iLocal_2600[85] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2686[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2757[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2828 = 0;
	int iLocal_2829 = 0;
	int iLocal_2830 = 0;
	int iLocal_2831[85] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2917[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2933[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3004[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3075[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3086 = 0;
	int iLocal_3087 = 0;
	int iLocal_3088 = 0;
	var uLocal_3089 = 15;
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
	var uLocal_3104 = 0;
	int iLocal_3105 = 0;
	int iLocal_3106 = 0;
	int iLocal_3107 = 0;
	struct<61> Local_3108 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_3169 = 0;
	int iLocal_3170 = 0;
	int iLocal_3171[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3179[3] = { 0, 0, 0 };
	int iLocal_3183 = 0;
	int iLocal_3184[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3193 = 0;
	int iLocal_3194[2] = { 0, 0 };
	int iLocal_3197 = 0;
	int iLocal_3198 = 0;
	int iLocal_3199 = 0;
	int iLocal_3200 = 0;
	int iLocal_3201 = 0;
	int iLocal_3202 = 0;
	int iLocal_3203 = 0;
	int iLocal_3204 = 0;
	int iLocal_3205 = 0;
	bool bLocal_3206 = 0;
	int iLocal_3207 = 0;
	bool bLocal_3208 = 0;
	int iLocal_3209 = 0;
	int iLocal_3210 = 0;
	bool bLocal_3211 = 0;
	int iLocal_3212 = 0;
	bool bLocal_3213 = 0;
	bool bLocal_3214 = 0;
	bool bLocal_3215 = 0;
	int iLocal_3216[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3229 = 0;
	bool bLocal_3230 = 0;
	bool bLocal_3231 = 0;
	int iLocal_3232 = 0;
	int iLocal_3233 = 0;
	int iLocal_3234 = 0;
	int iLocal_3235 = 0;
	int iLocal_3236 = 0;
	int iLocal_3237 = 0;
	int iLocal_3238 = 0;
	int iLocal_3239 = 0;
	bool bLocal_3240 = 0;
	int iLocal_3241 = 0;
	int iLocal_3242 = 0;
	int iLocal_3243 = 0;
	int iLocal_3244 = 0;
	var uLocal_3245 = 0;
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
	int iLocal_3263 = 0;
	float fLocal_3264 = 0f;
	float fLocal_3265 = 0f;
	float fLocal_3266 = 0f;
	float fLocal_3267 = 0f;
	float fLocal_3268 = 0f;
	float fLocal_3269 = 0f;
	int iLocal_3270 = 0;
	int iLocal_3271 = 0;
	int iLocal_3272 = 0;
	int iLocal_3273 = 0;
	struct<8> Local_3274 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_3282 = 0;
	var uLocal_3283 = 0;
	var uLocal_3284 = 0;
	var uLocal_3285 = 0;
	int iLocal_3286 = 0;
	int iLocal_3287 = 0;
	var uLocal_3288 = 0;
	var uLocal_3289 = 0;
	var uLocal_3290[5] = { 0, 0, 0, 0, 0 };
	char* sLocal_3296 = NULL;
	char* sLocal_3297 = NULL;
	char* sLocal_3298 = NULL;
	char* sLocal_3299 = NULL;
	char* sLocal_3300 = NULL;
	char* sLocal_3301 = NULL;
	char* sLocal_3302 = NULL;
	char* sLocal_3303 = NULL;
	var uLocal_3304 = 16;
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
	var uLocal_3468 = 0;
	struct<7> Local_3469 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_3476 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_3483 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_3490 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_3497 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<2> Local_3504 = { 0, 0 } ;
	struct<2> Local_3506[9];
	struct<2> Local_3525[4];
	struct<2> Local_3534[3];
	struct<2> Local_3541 = { 0, 0 } ;
	int iLocal_3543 = 0;
	char cLocal_3544[24] = "";
	var uLocal_3547 = 0;
	var uLocal_3548 = 0;
	var uLocal_3549 = 0;
	struct<3> Local_3550 = { 0, 0, 0 } ;
	struct<3> Local_3553 = { 0, 0, 0 } ;
	struct<3> Local_3556 = { 0, 0, 0 } ;
	struct<3> Local_3559 = { 0, 0, 0 } ;
	struct<3> Local_3562 = { 0, 0, 0 } ;
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
	iLocal_17 = -1;
	sLocal_32 = "NULL";
	fLocal_33 = 0f;
	fLocal_37 = -0.0375f;
	fLocal_38 = 0.17f;
	fLocal_42 = 80f;
	fLocal_43 = 140f;
	fLocal_44 = 180f;
	iLocal_47 = 3;
	uLocal_92 = func_572(64);
	uLocal_93 = func_572(63);
	iLocal_94 = joaat("u_m_m_aldinapoli");
	iLocal_95 = joaat("premier");
	iLocal_111 = 1;
	iLocal_112 = 65;
	iLocal_113 = 49;
	iLocal_114 = 64;
	uLocal_118 = unk_0xD401739A5899EC1B();
	uLocal_119 = unk_0xF90D5D0199B23D8A();
	bLocal_123 = true;
	bLocal_130 = true;
	bLocal_152 = true;
	fLocal_1298 = 120f;
	fLocal_1299 = 0f;
	fLocal_1301 = 1f;
	fLocal_1302 = 0f;
	fLocal_1303 = 1f;
	fLocal_1304 = 30f;
	fLocal_1306 = 1f;
	fLocal_1307 = 5f;
	fLocal_1308 = 1f;
	fLocal_1309 = 1f;
	fLocal_1310 = 100f;
	fLocal_1311 = 100f;
	fLocal_1312 = 0f;
	fLocal_1313 = 7000f;
	fLocal_1314 = 0f;
	fLocal_1315 = 0f;
	fLocal_1316 = 0.3f;
	fLocal_1317 = 0.5f;
	fLocal_1318 = 50f;
	iLocal_1864 = -1;
	iLocal_1872 = -1;
	iLocal_1873 = -1;
	bLocal_3169 = true;
	sLocal_3296 = "Nigel2U";
	sLocal_3297 = "Nigel2Outro";
	sLocal_3298 = "Mrs_Thornhill";
	sLocal_3299 = "Nigel";
	sLocal_3300 = "Trevor";
	sLocal_3301 = func_571();
	sLocal_3302 = "Showroom_Car";
	sLocal_3303 = "EXL_2_abandoned_car";
	StringCopy(&cLocal_3544, "NMT_2_MCS_2", 24);
	Local_3108 = { ScriptParam_0 };
	func_569(&Local_3108);
	unk_0x7E34CF542225E666(1);
	if (unk_0xBCA819F9975BEDFA(19))
	{
		func_568("Force cleanup [TERMINATING]");
		func_551(1);
		func_541();
	}
	func_534();
	if (func_533())
	{
		func_532(&Local_3108, 0, 1);
		iVar0 = func_531();
		if (Global_86001 == 1)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				func_530(-1309.016f, -641.8671f, 25.5017f, 242.3463f, 0, 0);
				iLocal_3194[0] = 1;
				func_520(1, 0);
				break;
			
			case 1:
				func_530(391.08f, -615.87f, 28.33f, 333.66f, 0, 0);
				func_520(3, 0);
				break;
			
			default:
				break;
			}
	}
	while (true)
	{
		unk_0x31683E0D6DBB707E("SF_VSADN", 0);
		func_504(Local_3108.f_9, 0, 0, 0, 0, 0);
		if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
		{
			func_501();
			Local_3556 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
			unk_0x271C07D02388CBCB(unk_0xBE369BE1BC57A796());
			unk_0xA7C880975F63452B(unk_0xBE369BE1BC57A796());
			switch (iLocal_3105)
			{
				case 0:
					func_420();
					break;
				
				case 1:
					func_368();
					break;
				
				case 2:
					func_297();
					break;
				
				case 3:
					func_289();
					break;
				
				case 4:
					func_94();
					break;
				
				case 5:
					func_48();
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
		if (bLocal_3169 == 0)
		{
			func_1(iLocal_3106);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(int iParam0)
{
	int iVar0;
	
	if (iLocal_3105 == iParam0)
	{
		if (func_47())
		{
			iVar0 = 0;
			if (iLocal_3105 == 2 || iLocal_3105 == 3)
			{
				iVar0 = Local_3490.f_0;
			}
			func_45(iVar0, -1, 0);
		}
		func_35(iLocal_3105);
		func_33(iLocal_3105);
		if (iLocal_3105 == 3)
		{
			func_22(1, 0, 1);
		}
		else if (iLocal_3105 == 1)
		{
			func_22(0, 1, 1);
		}
		else
		{
			func_22(1, 1, 1);
		}
		bLocal_3169 = true;
		iLocal_3170 = 0;
		if (iLocal_3105 == 4)
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
	
	if (func_20(unk_0x17B5CC8A8615737D()))
	{
		func_18();
		unk_0xD12BCC85C2F8B1DE();
		switch (iLocal_3105)
		{
			case 0:
				if (iLocal_3107 == 1)
				{
					if (unk_0x1B76B77EDF24A933())
					{
						unk_0x404A255180289CD1(0);
					}
				}
				break;
			
			case 1:
				if (iLocal_3107 == 1)
				{
					bLocal_3211 = true;
					func_14(Local_3476.f_0, &Local_3490, 0);
					func_14(Local_3469.f_0, &Local_3490, 2);
					func_14(Local_3483.f_0, &Local_3497, -1);
					if (func_13(Local_3497.f_0))
					{
						if (unk_0x72222684DEA44B9F(Local_3497.f_0))
						{
							unk_0x394D4A83F07AE208(Local_3497.f_0);
						}
						unk_0x394AE1BE8F25AC5B(Local_3497.f_0, 393.4298f, -621.3337f, 28.4891f, 0, 0, 1);
						unk_0xFE2306F4BAC122B2(Local_3497.f_0, -0.0081f, -0.0061f, 0.7994f, -0.6007f);
						unk_0x482AE8C0EAF5AE07(Local_3497.f_0, 1084227584);
					}
					unk_0xA0E7D0E8FE126EE8("rcmnigel2");
					while (!unk_0xF4F8AE8DD0F08C1E("rcmnigel2"))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					func_12(1, 0);
					unk_0x0668B21A0C3A4821(393.38f, -617.53f, 27.91f, 50f, 0, 0, 0, 0, 0);
					if (!func_47())
					{
						func_14(unk_0x17B5CC8A8615737D(), &Local_3490, -1);
						func_11(&Local_3490, 364.7079f, -608.3558f, 27.7364f, 246.4916f, 0);
						unk_0xBA7CD73403732191(0);
						unk_0x503F20CB07C55470(0, 1065353216);
						if (iLocal_3170 == 0)
						{
							if (iLocal_3106 == 2)
							{
								if (func_10(unk_0x17B5CC8A8615737D()))
								{
									func_3(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 25f, 13, 5000, 0, 0);
									iLocal_3170 = 1;
								}
							}
						}
					}
					unk_0x5BD872FA7F0EC076(0f);
					unk_0x0668B21A0C3A4821(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 150f, 0, 0, 0, 0, 0);
					iLocal_3107 = 2;
				}
				break;
			
			case 2:
				if (iLocal_3107 == 1)
				{
					func_14(Local_3476.f_0, &Local_3490, 0);
					func_14(Local_3469.f_0, &Local_3490, 2);
					if (!func_47())
					{
						func_14(unk_0x17B5CC8A8615737D(), &Local_3490, -1);
						Var0 = { 391.08f, -615.87f, 28.33f };
						func_11(&Local_3490, Var0, 333.66f, 0);
						if (iLocal_3170 == 0)
						{
							if (iLocal_3106 == 3)
							{
								if (func_10(unk_0x17B5CC8A8615737D()))
								{
									func_3(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 25f, 13, 5000, 0, 0);
									iLocal_3170 = 1;
								}
							}
						}
					}
					iLocal_3107 = 2;
				}
				break;
			
			case 3:
				if (iLocal_3107 == 1)
				{
					if (unk_0x1B76B77EDF24A933())
					{
						unk_0x404A255180289CD1(0);
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
	
	uVar0 = unk_0xB1399416C9156684(Param0, fParam3, iParam4, 127);
	if (unk_0x5EBBA0877DBAC8A8(uVar0))
	{
		iVar1 = (unk_0x94E3E074F38DF86C() + iParam5);
		while (!unk_0x3D01C3117AA19C90(uVar0) && unk_0x94E3E074F38DF86C() < iVar1)
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
		if (unk_0x94E3E074F38DF86C() < iVar1)
		{
		}
		unk_0xF032432C4371EF58(uVar0);
	}
}

void func_4()
{
	Global_17151.f_6 = 1;
}

void func_5()
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_9(0))
		{
			func_6(0);
		}
		unk_0xEB79FECD9022AAF0(&Global_2314, 2);
	}
}

void func_6(int iParam0)
{
	if (Global_14604)
	{
		func_8(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xEB79FECD9022AAF0(&Global_2314, 16);
	}
	if (unk_0x3ED8A07C6FA41E1B())
	{
		unk_0x660E8E7836E95077(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xEB79FECD9022AAF0(&Global_2313, 30);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&Global_2313, 30);
	}
	if (!func_7())
	{
		Global_14443.f_1 = 3;
	}
}

int func_7()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
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
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x4EA69F96033BA4FB(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0xBB4FC17174B4A105(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0xBB4FC17174B4A105(Global_14380);
		}
		else
		{
			unk_0xBB4FC17174B4A105(Global_14371);
		}
	}
}

int func_9(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x48B8265059381CD0(Global_2313, 14))
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
	if (unk_0x82F1A060D8F4583B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_10(int iParam0)
{
	if (unk_0x23E9113C762466ED(iParam0))
	{
		if (!unk_0xA929B2923D14E2F8(iParam0, 0))
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
		unk_0x5DC8C2F2F8A363C2(*iParam0, Param1, 1, 0, 0, 1);
		unk_0x0608D50823C6AA6D(*iParam0, fParam4);
	}
}

void func_12(bool bParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	
	if (!unk_0x23E9113C762466ED(Local_3541.f_0))
	{
		fVar0 = 115000f;
		fVar1 = 116821f;
		if (bParam1)
		{
			if (fLocal_3266 < (fVar0 - 3000f))
			{
				return;
			}
		}
		unk_0xE1324F59713746FA(Local_3541.f_1);
		if (bParam0)
		{
			while (!unk_0x9F746898F7881612(Local_3541.f_1))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
		}
		if (bParam1)
		{
			if (fLocal_3266 < fVar0 || fLocal_3266 > fVar1)
			{
				return;
			}
		}
		if (unk_0x9F746898F7881612(Local_3541.f_1))
		{
			Local_3541.f_0 = unk_0x692A2891A2BA7352(Local_3541.f_1, 419.3891f, -604.8867f, 27.7732f, 0f, 1, 1);
		}
		if (func_13(Local_3541.f_0))
		{
			unk_0x924CDE68BA2ED3BA(Local_3541.f_1);
			unk_0xFE2306F4BAC122B2(Local_3541.f_0, 0f, 0.0006f, 0.9996f, -0.0275f);
			unk_0xD602D152E57C823D(Local_3541.f_0, 1);
		}
	}
}

int func_13(int iParam0)
{
	if (func_10(iParam0))
	{
		if (unk_0x45CD66F0A131E554(iParam0, 0))
		{
			if (!unk_0x03767DFC5EE2B0C6(iParam0))
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
		if (unk_0xC0FA8EEF6413F866(*iParam1, iParam2, 0))
		{
			func_17(iParam0, *iParam1, iParam2);
		}
		else
		{
			iVar0 = unk_0x17206B315923243C(*iParam1, iParam2, 0);
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
		if (unk_0xD035C652F0986F10(iParam0))
		{
			Var0 = { unk_0x57240623C1BC6E88(iParam0, 1) };
			while (!unk_0xA9CBE5CF275A6B93(Var0, 0, &Var0, 0))
			{
				unk_0x4EDE34FBADD967A6(0);
				Var0.f_0 = (Var0.f_0 + 2f);
			}
			fVar3 = unk_0x638527C9799F2AE4(iParam0);
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
		unk_0x5DC8C2F2F8A363C2(iParam0, Param1, 1, 0, 0, 1);
		unk_0x0608D50823C6AA6D(iParam0, fParam4);
		if (bParam6)
		{
			unk_0xDEAF24B058321A05(iParam0, 0, 0);
		}
	}
}

void func_17(int iParam0, int iParam1, int iParam2)
{
	if (func_20(iParam0))
	{
		if (func_10(iParam1))
		{
			if (unk_0xDDBA7A42B9B819EE(iParam0))
			{
				unk_0x98F0FA127445E343(unk_0xE0614756D21445A5(iParam0), 0);
			}
			else
			{
				unk_0x98F0FA127445E343(iParam0, 0);
			}
			unk_0xFCB4AA590A0D6A59(iParam0, iParam1, uParam2);
		}
	}
}

void func_18()
{
	Global_14611 = 0;
	func_19();
}

void func_19()
{
	unk_0x5FB0B609B3A49840();
	Global_16756 = 0;
	if ((unk_0x3ED8A07C6FA41E1B() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x660E8E7836E95077(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x55C74612BE548D78())
	{
		unk_0x660E8E7836E95077(1);
		Global_15745 = 6;
		return;
	}
}

int func_20(int iParam0)
{
	if (func_10(iParam0))
	{
		if (!unk_0xCA41A00932714525(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_21(int iParam0, bool bParam1)
{
	if (unk_0x25BD4C26D84038CD() || unk_0x46EEE08565CE19CA())
	{
		if (!unk_0x5C0856D86B18EE57())
		{
			unk_0xC7845898207D067F(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0x30F06AB0772AFB80())
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
		unk_0x503F20CB07C55470(0f, 1065353216);
		unk_0xBA7CD73403732191(0f);
	}
	if (iParam1 == 1)
	{
		func_21(500, 0);
	}
}

void func_23(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	
	uVar0 = unk_0x592069F95C314814();
	unk_0x8549D98B1C1FCFA7(uVar0, 0);
	unk_0xC8C3338D4DBC00FE(iVar0, iParam3, 0);
	func_24(0, 1, 0, 0);
	if (iParam2 == 1)
	{
		unk_0x2D28D5B324F77D2D(1);
		unk_0xE418A8E16B02C0AC(1);
	}
	unk_0x2E2945F5602A744F(1);
	if (iParam0 == 1)
	{
		unk_0x990821B6B4780D69(0, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_48 != 0 && iLocal_48 != joaat("object")) && iLocal_48 != joaat("gadget_parachute"))
		{
			if (func_10(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0x509A3191A6C4EB38(unk_0x17B5CC8A8615737D(), iLocal_48, 0))
				{
					unk_0x0B25AB3A7FA0683C(unk_0x17B5CC8A8615737D(), iLocal_48, 0);
				}
			}
		}
	}
	if (func_20(unk_0x17B5CC8A8615737D()))
	{
		unk_0x4C1D7D2B3355D863(unk_0x17B5CC8A8615737D(), 0, 0);
	}
}

void func_24(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x75416EE69CE8B797(unk_0xBE369BE1BC57A796());
		unk_0xC8F90C1233866A01(unk_0xBE369BE1BC57A796(), 1);
		unk_0x60040905B2978982(unk_0xBE369BE1BC57A796(), 1);
		func_32(1);
		unk_0x9FB8515100F82AFB();
		unk_0xD57128A757C0216E();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x3ED8A07C6FA41E1B())
			{
				unk_0x660E8E7836E95077(0);
			}
			if (!func_7())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_31(1, iParam3, iParam2, 0);
		Global_55828 = 1;
		Global_68134 = 1;
		Global_69700 = 1;
	}
	else
	{
		func_32(0);
		unk_0x42DE1068884C3BE9();
		Global_55828 = 0;
		if (bParam1)
		{
			unk_0x093227ED19D84FB6();
		}
		unk_0xC8F90C1233866A01(unk_0xBE369BE1BC57A796(), 0);
		unk_0x60040905B2978982(unk_0xBE369BE1BC57A796(), 0);
		func_31(0, iParam3, iParam2, 0);
		if (unk_0x63C468D583002D23())
		{
			if (((!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()) && !func_29(unk_0xBE369BE1BC57A796())) && !func_26(unk_0xBE369BE1BC57A796(), 0)) && !func_25())
			{
				unk_0xC6042F55A6EA17B2(unk_0x17B5CC8A8615737D(), 0);
			}
		}
		else if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()) && !func_29(unk_0xBE369BE1BC57A796()))
		{
			unk_0xC6042F55A6EA17B2(unk_0x17B5CC8A8615737D(), 0);
		}
		Global_69700 = 0;
	}
}

bool func_25()
{
	return unk_0x48B8265059381CD0(Global_1591201[unk_0xBE369BE1BC57A796() /*602*/].f_39.f_18, 14);
}

bool func_26(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xBE369BE1BC57A796())
	{
		bVar0 = func_27(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1591201[iParam0 /*602*/].f_203 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x7268A1112372AA44(iParam0))
		{
			bVar0 = unk_0xB58DEBB81964A4E9(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_27(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_28();
	}
	if (Global_1315213[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312729[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_28()
{
	return Global_1312735;
}

int func_29(int iParam0)
{
	if (func_26(iParam0, 0))
	{
		return 1;
	}
	if (func_30())
	{
		if (iParam0 == unk_0xBE369BE1BC57A796())
		{
			return 1;
		}
	}
	if (unk_0x48B8265059381CD0(Global_2421664[iParam0 /*358*/].f_198, 2))
	{
		return 1;
	}
	return 0;
}

bool func_30()
{
	return unk_0x48B8265059381CD0(Global_2359301, 3);
}

int func_31(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xEF4E5E47AF0D4480())
	{
		if (unk_0x5E9889CF18601D1C() != iParam0 && iParam2)
		{
			unk_0xCE7A426067C66E84(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_32(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xEB79FECD9022AAF0(&Global_2313, 13);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&Global_2313, 13);
	}
}

void func_33(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			if (iLocal_3255 == 0)
			{
				while (!func_34("NIGEL2_START", 0))
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				iLocal_3255++;
			}
			if (iLocal_3255 == 1)
			{
				while (!func_34("NIGEL2_CAR", 0))
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				iLocal_3255++;
			}
			if (iLocal_3255 == 2)
			{
				while (!func_34("NIGEL2_JUMP", 1))
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				iLocal_3255++;
			}
			break;
	}
}

int func_34(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x5823F1F25CE33C5D(sParam0))
		{
			return 0;
		}
	}
	if (unk_0x5BE53482EFD49141(sParam0))
	{
		return 1;
	}
	return 0;
}

void func_35(int iParam0)
{
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		switch (iParam0)
		{
			case 1:
				unk_0xBA7CD73403732191(22f);
				unk_0x503F20CB07C55470(0f, 1065353216);
				break;
			
			case 3:
				if (iLocal_3106 == 3)
				{
					func_14(unk_0x17B5CC8A8615737D(), &Local_3490, -1);
					func_11(&Local_3490, 391.08f, -615.87f, 28.33f, 333.66f, 0);
					func_44(&cLocal_3544);
					func_43();
					while (!func_36(1, 1093140480, 0))
					{
						func_44(&cLocal_3544);
						func_43();
						unk_0x4EDE34FBADD967A6(0);
					}
				}
				break;
			}
	}
}

int func_36(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 1;
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		if ((!unk_0x8EC3C2BC25ED8ECA(unk_0x17B5CC8A8615737D()) && !unk_0x72FC030E928A5207(unk_0x17B5CC8A8615737D())) && !unk_0xE40FC0529CC75B0F(unk_0x17B5CC8A8615737D()))
		{
			if (!func_41(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0), iParam1, 1, 1056964608, 0, 1, 0))
			{
				iVar0 = 0;
			}
			else if (iParam2 == 1)
			{
				iVar0 = 0;
				if (!func_40(unk_0x17B5CC8A8615737D(), -828834893))
				{
					unk_0x83150B7E65C16AFE(unk_0x17B5CC8A8615737D(), 0, 0);
				}
			}
			if (unk_0x14E01C4EC4170496(unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0)))
			{
				iVar0 = 0;
			}
		}
	}
	func_39();
	if (func_38())
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
		if (!func_37())
		{
			return 0;
		}
	}
	if (unk_0x55C74612BE548D78())
	{
		unk_0x660E8E7836E95077(0);
	}
	return 1;
}

bool func_37()
{
	bool bVar0;
	
	bVar0 = unk_0x77888DFE5B94E7E5();
	if (!Global_69701)
	{
		if (!bVar0)
		{
			Global_69701 = 1;
		}
	}
	return bVar0;
}

int func_38()
{
	if (Global_15745 != 0 || unk_0x55C74612BE548D78())
	{
		return 1;
	}
	return 0;
}

void func_39()
{
	unk_0xD1BB2AD73E7FC3A7(0, 21, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 37, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 25, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 141, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 140, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 24, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 257, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 22, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 23, 1);
}

int func_40(int iParam0, int iParam1)
{
	if (func_20(iParam0))
	{
		if (unk_0x1F8F07D86DA1A701(iParam0, iParam1) == 1 || unk_0x1F8F07D86DA1A701(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_41(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xD1BB2AD73E7FC3A7(0, 71, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 72, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 76, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 73, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 59, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 60, 1);
	if (bParam5)
	{
		unk_0xD1BB2AD73E7FC3A7(0, 75, 1);
	}
	unk_0xD1BB2AD73E7FC3A7(0, 80, 1);
	if (!bParam6)
	{
		unk_0xD1BB2AD73E7FC3A7(0, 69, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 70, 1);
		unk_0xD1BB2AD73E7FC3A7(0, 68, 1);
	}
	unk_0xD1BB2AD73E7FC3A7(0, 74, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 86, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 81, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 82, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 138, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 136, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 114, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 107, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 110, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 89, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 89, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 87, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 88, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 113, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 115, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 116, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 117, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 118, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 119, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 131, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 132, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 123, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 126, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 129, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 130, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 133, 1);
	unk_0xD1BB2AD73E7FC3A7(0, 134, 1);
	unk_0xA07E0C7D04CFDAC7();
	func_42(iParam0);
	if ((unk_0x94E3E074F38DF86C() - Global_29) > 500)
	{
		unk_0xEEA9C8F490BB3507(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x94E3E074F38DF86C();
	if (!unk_0xA929B2923D14E2F8(iParam0, 0))
	{
		if (unk_0xE851F22ED3518011(unk_0x13B7ACE69D27E3E4(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_42(var uParam0)
{
	if (unk_0x2A0DB8BAFA0BA9B1(uParam0))
	{
		if (unk_0x877E4C9DCF0BC909(uParam0))
		{
			unk_0x84563853ACCAC2B6(uParam0, 0);
		}
	}
}

void func_43()
{
	if (func_10(Local_3476.f_0))
	{
		if (unk_0x6E5BBCE1B1E5B2EB())
		{
			unk_0x0A970CDB1CD24DA6(sLocal_3299, Local_3476.f_0, 0);
		}
	}
	if (func_10(Local_3469.f_0))
	{
		if (unk_0x6E5BBCE1B1E5B2EB())
		{
			unk_0x0A970CDB1CD24DA6(sLocal_3298, Local_3469.f_0, 0);
		}
	}
	if (func_10(Local_3483.f_0))
	{
		if (unk_0x6E5BBCE1B1E5B2EB())
		{
			unk_0x0A970CDB1CD24DA6(sLocal_3301, Local_3483.f_0, 0);
		}
	}
}

void func_44(char[4] cParam0)
{
	func_24(1, 1, 0, 0);
	unk_0xF7CF05FEB40E538B(cParam0, 8);
}

void func_45(int iParam0, int iParam1, int iParam2)
{
	if (func_533() && func_47())
	{
		while (Global_91486 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xD278B72A700DC2DC(0);
		if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
		{
			if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
			{
				unk_0x76956C8D11F030FD(unk_0x17B5CC8A8615737D());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0x23E9113C762466ED(iParam0))
				{
					if (unk_0x45CD66F0A131E554(iParam0, 0))
					{
						if (!unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iParam0, 0))
						{
							unk_0xFCB4AA590A0D6A59(unk_0x17B5CC8A8615737D(), iParam0, iParam1);
							unk_0x503F20CB07C55470(0f, 1065353216);
							unk_0xBA7CD73403732191(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
			{
				unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), true, 0);
			}
		}
		unk_0xACBDD7C9D459A6D9();
		func_46(0);
	}
}

void func_46(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xEB79FECD9022AAF0(&(Global_91491.f_20), 13);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 13);
	}
}

bool func_47()
{
	return unk_0x48B8265059381CD0(Global_91491.f_20, 13);
}

void func_48()
{
	char* sVar0;
	var uVar1;
	
	sVar0 = 0;
	switch (iLocal_3107)
	{
		case 0:
			if (func_34("NIGEL2_MISSION_FAIL", 0))
			{
				unk_0xD12BCC85C2F8B1DE();
				unk_0x2E2945F5602A744F(1);
				if (func_38())
				{
					func_18();
				}
				func_92();
				if (func_13(Local_3490.f_0))
				{
					if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), Local_3490.f_0, 0) || unk_0x9172DCBCA2E183EC(unk_0x17B5CC8A8615737D()))
					{
						unk_0xEEA9C8F490BB3507(Local_3490.f_0, 6f, 2, 0);
					}
				}
				if (func_20(Local_3476.f_0))
				{
					if (unk_0xF30AB065E07D2B0F(Local_3476.f_0))
					{
						unk_0xFB2D342CDD441DD9(Local_3476.f_0);
					}
					unk_0x15848523A8959DBC(Local_3476.f_0);
					if ((iLocal_3246 == 7 || iLocal_3246 == 6) || iLocal_3246 == 4)
					{
						unk_0xB195EE9DB37DA7F2(Local_3476.f_0, 2, 0);
						unk_0x86DD54980FE55567(&uVar1);
						if (unk_0xFD0FE723227D5AB6(Local_3476.f_0, 0))
						{
							unk_0x83150B7E65C16AFE(0, 0, 320);
						}
						unk_0xCA58071CE9CCE891(0, unk_0x17B5CC8A8615737D(), 300f, -1, 0, 0);
						unk_0x007AE2AA9E15FA7B(uVar1);
						unk_0x00E85C3B3BD34B10(Local_3476.f_0, uVar1);
						unk_0x08377FB2AE4C6899(&uVar1);
						unk_0x650BB0E111420EAF(Local_3476.f_0, 1);
					}
				}
				if (func_20(Local_3469.f_0))
				{
					if (unk_0xF30AB065E07D2B0F(Local_3469.f_0))
					{
						unk_0xFB2D342CDD441DD9(Local_3469.f_0);
					}
					unk_0x15848523A8959DBC(Local_3469.f_0);
					if ((iLocal_3246 == 5 || iLocal_3246 == 4) || iLocal_3246 == 6)
					{
						unk_0xB195EE9DB37DA7F2(Local_3469.f_0, 2, 0);
						if (unk_0xFD0FE723227D5AB6(Local_3469.f_0, 0))
						{
							unk_0x86DD54980FE55567(&uVar1);
							unk_0x83150B7E65C16AFE(0, 0, 320);
							unk_0xCA58071CE9CCE891(0, unk_0x17B5CC8A8615737D(), 300f, -1, 0, 0);
							unk_0x007AE2AA9E15FA7B(uVar1);
							unk_0x00E85C3B3BD34B10(Local_3469.f_0, uVar1);
							unk_0x08377FB2AE4C6899(&uVar1);
							unk_0x650BB0E111420EAF(Local_3469.f_0, 1);
						}
						else
						{
							unk_0xCA58071CE9CCE891(Local_3469.f_0, unk_0x17B5CC8A8615737D(), 300f, -1, 0, 0);
							unk_0x650BB0E111420EAF(Local_3469.f_0, 1);
						}
					}
				}
				if (func_13(Local_3497.f_0))
				{
					if (unk_0x72222684DEA44B9F(Local_3497.f_0))
					{
						unk_0x394D4A83F07AE208(Local_3497.f_0);
					}
					if (!bLocal_3213)
					{
						func_66(0, 1);
					}
				}
				if (func_20(Local_3483.f_0))
				{
					if (bLocal_3213)
					{
						unk_0x650BB0E111420EAF(Local_3483.f_0, 1);
					}
					else
					{
						unk_0x15848523A8959DBC(Local_3483.f_0);
						unk_0xB195EE9DB37DA7F2(Local_3483.f_0, 2, 1);
						unk_0xB195EE9DB37DA7F2(Local_3483.f_0, 8, 0);
						unk_0xB195EE9DB37DA7F2(Local_3483.f_0, 1, 0);
						unk_0xB195EE9DB37DA7F2(Local_3483.f_0, 32, 0);
						unk_0xB195EE9DB37DA7F2(Local_3483.f_0, 64, 0);
						if ((func_13(Local_3497.f_0) && unk_0x2315BB1606BC3DC3(Local_3483.f_0, Local_3497.f_0, 0)) && func_13(Local_3490.f_0))
						{
							unk_0x86DD54980FE55567(&uVar1);
							unk_0xA0F84EA3D7C06982(0, Local_3497.f_0, unk_0x17B5CC8A8615737D(), 8, 80f, 786468, 500f, -1f, 1);
							unk_0x007AE2AA9E15FA7B(uVar1);
							unk_0x00E85C3B3BD34B10(Local_3483.f_0, uVar1);
							unk_0x08377FB2AE4C6899(&uVar1);
						}
						else
						{
							unk_0x86DD54980FE55567(&uVar1);
							unk_0xCA58071CE9CCE891(0, unk_0x17B5CC8A8615737D(), 300f, -1, 0, 0);
							unk_0x007AE2AA9E15FA7B(uVar1);
							unk_0x00E85C3B3BD34B10(Local_3483.f_0, uVar1);
							unk_0x08377FB2AE4C6899(&uVar1);
						}
						unk_0x650BB0E111420EAF(Local_3483.f_0, 1);
					}
				}
				switch (iLocal_3246)
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
				if (iLocal_3246 == 0)
				{
					func_551(1);
				}
				else
				{
					func_64(sVar0, 1);
				}
				iLocal_3107 = 1;
			}
			break;
		
		case 1:
			if (func_63())
			{
				if (func_61(unk_0x17B5CC8A8615737D()))
				{
					func_59(279.4137f, -585.8815f, 42.3102f, 48.8028f);
					func_57(276.27f, -584f, 42.73f, 337.4f);
				}
				func_49(1);
				func_541();
			}
			break;
	}
}

void func_49(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_54(&(Local_3506[iVar0 /*2*/]), bParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_54(&(Local_3525[iVar0 /*2*/]), bParam0);
		iVar0++;
	}
	if (func_10(Local_3483.f_0))
	{
		unk_0x4114B83B329702FF(Local_3483.f_0, 0);
		if (!unk_0xCA41A00932714525(Local_3483.f_0))
		{
			unk_0x650BB0E111420EAF(Local_3483.f_0, 1);
		}
	}
	unk_0x16A327AF9E84ABA6(Local_3483.f_1, 0);
	func_54(&Local_3483, bParam0);
	unk_0x16A327AF9E84ABA6(Local_3469.f_1, 0);
	if (func_20(Local_3469.f_0))
	{
		unk_0x650BB0E111420EAF(Local_3469.f_0, 1);
	}
	func_54(&Local_3469, bParam0);
	unk_0x16A327AF9E84ABA6(Local_3476.f_1, 0);
	if (func_20(Local_3476.f_0))
	{
		unk_0x650BB0E111420EAF(Local_3476.f_0, 1);
	}
	func_54(&Local_3476, bParam0);
	func_53(&Local_3274);
	if (func_13(Local_3490.f_0))
	{
		unk_0xDED89A6CAC392246(Local_3490.f_0, 1);
		unk_0xEC2A26A6CA02C73C(Local_3490.f_0, 1);
		unk_0x3C87A0A1456D6253(Local_3490.f_0, 1);
		if (iLocal_3243)
		{
			unk_0x250DE4033DCCFBBA(Local_3490.f_0, 0);
			iLocal_3243 = 0;
		}
	}
	if (unk_0x23E9113C762466ED(Local_3490.f_0))
	{
		unk_0xA57C55CEA3DF591D(Local_3490.f_0);
	}
	func_50(&Local_3490, bParam0);
	if (func_13(Local_3497.f_0))
	{
		unk_0x4C44C1A3160350E2(Local_3497.f_0, 0, 0, 0, 0, 0, 0, 0, 0);
		unk_0x3D8459AD189E8571(Local_3497.f_0, 0);
		unk_0xDED89A6CAC392246(Local_3497.f_0, 1);
		unk_0xEC2A26A6CA02C73C(Local_3497.f_0, 1);
		unk_0x3C87A0A1456D6253(Local_3497.f_0, 1);
		if (bLocal_3213)
		{
			unk_0xEC0212C05F98C1DF(Local_3497.f_0, 0f);
		}
	}
	func_50(&Local_3497, bParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_50(&(Local_3534[iVar0 /*2*/]), bParam0);
		iVar0++;
	}
	func_50(&Local_3541, bParam0);
	func_54(&Local_3504, bParam0);
}

void func_50(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_52(uParam0);
	}
	else
	{
		func_51(uParam0);
	}
}

void func_51(var uParam0)
{
	if (unk_0x23E9113C762466ED(*uParam0))
	{
		unk_0xA929B2923D14E2F8(*uParam0, 0);
		if (unk_0xC26429B504BA534D(*uParam0) && unk_0x45CA7F42CA715849(*uParam0, 1))
		{
			unk_0x921CF98C637B0043(uParam0);
		}
	}
}

void func_52(int iParam0)
{
	if (unk_0x23E9113C762466ED(*iParam0))
	{
		if (!unk_0xC26429B504BA534D(*iParam0))
		{
			unk_0xF0F77C99098F999B(*iParam0, 1, 0);
		}
		if (func_13(*iParam0))
		{
			if (unk_0xC26429B504BA534D(*iParam0) && unk_0x45CA7F42CA715849(*iParam0, 1))
			{
				if (func_10(unk_0x17B5CC8A8615737D()))
				{
					if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), *iParam0, 0))
					{
						unk_0x921CF98C637B0043(iParam0);
						return;
					}
				}
				unk_0x813865264334331D(iParam0);
			}
		}
		else
		{
			if (func_10(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), *iParam0, 0))
				{
					unk_0x921CF98C637B0043(iParam0);
					return;
				}
			}
			unk_0x813865264334331D(iParam0);
		}
	}
}

void func_53(int iParam0)
{
	if (unk_0x23E9113C762466ED(*iParam0))
	{
		if (unk_0xF928485DD4C9E3C3(*iParam0))
		{
			unk_0xB2E72B5CFE1EC372(*iParam0, 1, 1);
		}
		unk_0x1AAFEA627BB9C402(iParam0);
	}
}

void func_54(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_56(iParam0);
	}
	else
	{
		func_55(iParam0, 1, 0, 1);
	}
}

void func_55(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x23E9113C762466ED(*uParam0))
	{
		if (!unk_0xCA41A00932714525(*uParam0))
		{
			unk_0x4114B83B329702FF(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0xFFAC04A19BFE8F03(*uParam0);
			}
			unk_0x650BB0E111420EAF(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xCC61640A821F277C(*uParam0, 0);
			}
		}
		unk_0x6500ADB01E821BC0(uParam0);
	}
}

void func_56(var uParam0)
{
	if (unk_0x23E9113C762466ED(*uParam0))
	{
		if (!unk_0xA929B2923D14E2F8(*uParam0, 0))
		{
			unk_0x4114B83B329702FF(*uParam0, 0);
		}
		if (!unk_0xC26429B504BA534D(*uParam0))
		{
			unk_0xF0F77C99098F999B(*uParam0, 1, 0);
		}
		unk_0x478AE709A466CB7E(uParam0);
	}
}

void func_57(struct<3> Param0, float fParam3)
{
	func_58(&(Global_96040.f_2311), Param0, fParam3);
}

void func_58(var uParam0, struct<3> Param1, var uParam4)
{
	*uParam0 = { Param1 };
	uParam0->f_6 = uParam4;
}

void func_59(struct<3> Param0, float fParam3)
{
	if (func_60(Global_69942, 0f, 0f, 0f, 0))
	{
		Global_69942 = { Param0 };
		Global_69945 = fParam3;
	}
}

bool func_60(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_61(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!unk_0x623BDE1B17A9D9E3(iLocal_3262))
	{
		return 0;
	}
	if (func_10(iParam0))
	{
		iVar0 = unk_0x2891D5935185F77D(iParam0);
		if (func_62(iVar0))
		{
			return 1;
		}
	}
	else
	{
		Var1 = { unk_0x57240623C1BC6E88(iParam0, 0) };
		if (unk_0x1A4C1C534F86E06A(Var1) == iLocal_3262)
		{
			return 1;
		}
	}
	return 0;
}

int func_62(int iParam0)
{
	if ((((iParam0 == unk_0x765F5B806B517045("v_40_Room1") || iParam0 == unk_0x765F5B806B517045("v_40_Room2")) || iParam0 == unk_0x765F5B806B517045("v_40_Room3")) || iParam0 == unk_0x765F5B806B517045("v_40_Room4")) || iParam0 == unk_0x765F5B806B517045("V_40_Room005"))
	{
		return 1;
	}
	return 0;
}

int func_63()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_91491 == 7 || Global_91491 == 8)
	{
		return 1;
	}
	return 0;
}

void func_64(char* sParam0, bool bParam1)
{
	func_65(sParam0);
	func_551(bParam1);
}

void func_65(char* sParam0)
{
	if (!unk_0x9C88EB7B70229335(sParam0))
	{
		if (unk_0xF9108830F4935563(sParam0) <= 16)
		{
			StringCopy(&Global_69934, sParam0, 16);
			StringCopy(&Global_69938, "", 16);
			if (unk_0xC81784511829F091())
			{
				unk_0x319B2408D3EC19AC();
			}
		}
	}
}

void func_66(bool bParam0, bool bParam1)
{
	if (!unk_0x9C88EB7B70229335(&cLocal_2583))
	{
		iLocal_136 = 0;
		func_91();
		unk_0x111E99E32A85B908(iLocal_2599);
		unk_0xE7281B4166C6A4CD(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			unk_0xAFC3FD1D11D31506(unk_0xBE369BE1BC57A796(), 1f);
			unk_0x86127BA83F24D556(unk_0xBE369BE1BC57A796(), 1);
			unk_0x59D2C41577DCED43(1);
		}
		if (bLocal_152)
		{
			unk_0x924CDE68BA2ED3BA(func_90());
		}
		unk_0x924CDE68BA2ED3BA(func_89());
		unk_0x924CDE68BA2ED3BA(func_88());
		unk_0x924CDE68BA2ED3BA(func_87());
		if (!unk_0x25BD4C26D84038CD() && !bParam0)
		{
			func_86();
			func_85();
			func_82();
		}
		else
		{
			func_78();
			func_77();
		}
		if (bParam1)
		{
			func_67(0);
		}
	}
}

void func_67(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 46)
	{
		func_68(iVar0, bParam0);
		iVar0++;
	}
}

void func_68(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_76(iParam0, 2, 1))
		{
			func_75(iParam0, 2, 1);
		}
	}
	else if (func_76(iParam0, 2, 1))
	{
		func_69(iParam0, 2, 1);
	}
}

void func_69(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x21E7933CCC7B3724(&(Global_91543.f_1308[iParam0]), iParam1);
	}
	else if (unk_0x63C468D583002D23())
	{
		if (func_74() == 0)
		{
			uVar0 = func_72(func_73(iParam0), -1, 0);
			unk_0x21E7933CCC7B3724(&uVar0, iParam1);
			func_70(func_73(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x21E7933CCC7B3724(&(Global_101700.f_668[iParam0]), iParam1);
	}
}

void func_70(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_71(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x731753D8494ABECD(iVar0, uParam1, iParam3);
	}
}

int func_71(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_28();
		if (iVar1 > -1)
		{
			Global_2503539 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2503539 = 1;
		}
	}
	return iVar0;
}

int func_72(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2503826[iParam0 /*3*/][func_71(iParam1)];
	if (unk_0x7FE4F330D3D74809(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_73(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 822;
			break;
		
		case 1:
			return 823;
			break;
		
		case 2:
			return 824;
			break;
		
		case 3:
			return 825;
			break;
		
		case 4:
			return 826;
			break;
		
		case 5:
			return 827;
			break;
		
		case 6:
			return 828;
			break;
		
		case 7:
			return 829;
			break;
		
		case 8:
			return 830;
			break;
		
		case 9:
			return 831;
			break;
		
		case 10:
			return 832;
			break;
		
		case 11:
			return 833;
			break;
		
		case 12:
			return 834;
			break;
		
		case 13:
			return 835;
			break;
		
		case 14:
			return 836;
			break;
		
		case 15:
			return 838;
			break;
		
		case 16:
			return 839;
			break;
		
		case 17:
			return 840;
			break;
		
		case 18:
			return 841;
			break;
		
		case 19:
			return 842;
			break;
		
		case 20:
			return 843;
			break;
		
		case 21:
			return 844;
			break;
		
		case 22:
			return 845;
			break;
		
		case 23:
			return 846;
			break;
		
		case 24:
			return 847;
			break;
		
		case 25:
			return 848;
			break;
		
		case 26:
			return 849;
			break;
		
		case 27:
			return 850;
			break;
		
		case 28:
			return 851;
			break;
		
		case 29:
			return 852;
			break;
		
		case 30:
			return 853;
			break;
		
		case 31:
			return 854;
			break;
		
		case 32:
			return 855;
			break;
		
		case 33:
			return 856;
			break;
		
		case 34:
			return 857;
			break;
		
		case 35:
			return 858;
			break;
		
		case 36:
			return 859;
			break;
		
		case 37:
			return 860;
			break;
		
		case 38:
			return 861;
			break;
		
		case 39:
			return 862;
			break;
		
		case 40:
			return 866;
			break;
		
		case 41:
			return 867;
			break;
		
		case 42:
			return 868;
			break;
		
		case 43:
			return 869;
			break;
		
		case 44:
			return 5847;
			break;
		
		case 45:
			return 3780;
			break;
		
		default:
			break;
	}
	return 6022;
}

int func_74()
{
	return Global_25190;
}

void func_75(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xEB79FECD9022AAF0(&(Global_91543.f_1308[iParam0]), iParam1);
	}
	else if (unk_0x63C468D583002D23())
	{
		if (func_74() == 0)
		{
			uVar0 = func_72(func_73(iParam0), -1, 0);
			unk_0xEB79FECD9022AAF0(&uVar0, iParam1);
			func_70(func_73(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xEB79FECD9022AAF0(&(Global_101700.f_668[iParam0]), iParam1);
	}
}

int func_76(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x48B8265059381CD0(Global_91543.f_1308[iParam0], iParam1);
	}
	else if (unk_0x63C468D583002D23())
	{
		if (func_74() == 0)
		{
			return unk_0x48B8265059381CD0(func_72(func_73(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x48B8265059381CD0(Global_101700.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_77()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 85)
	{
		iLocal_2831[iVar0] = 0;
		Local_1878[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_154[iVar0] = 0f;
		fLocal_240[iVar0] = 0f;
		fLocal_326[iVar0] = 0f;
		fLocal_412[iVar0] = 0f;
		iLocal_1319[iVar0] = 0;
		fLocal_498[iVar0] = 0f;
		iLocal_1405[iVar0] = 0;
		iLocal_2600[iVar0] = 0;
		iLocal_1491[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iLocal_2917[iVar0] = 0;
		iVar0++;
	}
	iLocal_1861 = 0;
	iVar0 = 0;
	while (iVar0 < 70)
	{
		iLocal_2933[iVar0] = 0;
		Local_2134[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_1014[iVar0] = 0f;
		fLocal_1085[iVar0] = 0f;
		fLocal_1156[iVar0] = 0f;
		fLocal_1227[iVar0] = 0f;
		iLocal_1790[iVar0] = 0;
		iLocal_2686[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_3075[iVar0] = 0;
		iVar0++;
	}
	iLocal_1863 = 0;
	iVar0 = 0;
	while (iVar0 < 70)
	{
		iLocal_3004[iVar0] = 0;
		Local_2345[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_588[iVar0] = 0f;
		fLocal_659[iVar0] = 0f;
		fLocal_730[iVar0] = 0f;
		fLocal_801[iVar0] = 0f;
		iLocal_1577[iVar0] = 0;
		fLocal_872[iVar0] = 0f;
		iLocal_1648[iVar0] = 0;
		iLocal_2757[iVar0] = 0;
		iLocal_1719[iVar0] = 0;
		iVar0++;
	}
	iLocal_1862 = 0;
	iLocal_1865 = 0;
	iLocal_1868 = 0;
	iLocal_1869 = 0;
	iLocal_1870 = 0;
}

void func_78()
{
	func_81();
	func_80();
	func_79();
}

void func_79()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (unk_0x23E9113C762466ED(iLocal_3004[iVar0]))
		{
			if (unk_0x45CD66F0A131E554(iLocal_3004[iVar0], 0))
			{
				if (unk_0x72222684DEA44B9F(iLocal_3004[iVar0]))
				{
					unk_0x394D4A83F07AE208(iLocal_3004[iVar0]);
				}
				iVar1 = unk_0x17206B315923243C(iLocal_3004[iVar0], -1, 0);
				if (unk_0x23E9113C762466ED(iVar1) && iVar1 != unk_0x17B5CC8A8615737D())
				{
					if (unk_0xC26429B504BA534D(iVar1))
					{
						unk_0x478AE709A466CB7E(&iVar1);
					}
				}
			}
			if (unk_0xC26429B504BA534D(iLocal_3004[iVar0]))
			{
				unk_0x813865264334331D(&(iLocal_3004[iVar0]));
			}
		}
		iLocal_1648[iVar0] = 0;
		if (!bLocal_132 && !bLocal_145)
		{
			if (iLocal_1577[iVar0] > 0)
			{
				unk_0xF8E2640CE709A221(iLocal_1577[iVar0], &cLocal_2583);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (!iLocal_2757[iVar0] == 0)
		{
			unk_0x924CDE68BA2ED3BA(iLocal_2757[iVar0]);
		}
		iVar0++;
	}
}

void func_80()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (unk_0x23E9113C762466ED(iLocal_2933[iVar0]))
		{
			if (unk_0xC26429B504BA534D(iLocal_2933[iVar0]))
			{
				unk_0x813865264334331D(&(iLocal_2933[iVar0]));
			}
		}
		iLocal_1790[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (!iLocal_2686[iVar0] == 0)
		{
			unk_0x924CDE68BA2ED3BA(iLocal_2686[iVar0]);
		}
		iVar0++;
	}
	iLocal_1866 = 0;
	iLocal_1863 = 0;
}

void func_81()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 85)
	{
		if (unk_0x23E9113C762466ED(iLocal_2831[iVar0]))
		{
			if (unk_0x45CD66F0A131E554(iLocal_2831[iVar0], 0))
			{
				if (unk_0x72222684DEA44B9F(iLocal_2831[iVar0]))
				{
					unk_0x394D4A83F07AE208(iLocal_2831[iVar0]);
				}
				iVar1 = unk_0x17206B315923243C(iLocal_2831[iVar0], -1, 0);
				if (unk_0x23E9113C762466ED(iVar1) && iVar1 != unk_0x17B5CC8A8615737D())
				{
					if (unk_0xC26429B504BA534D(iVar1))
					{
						unk_0x478AE709A466CB7E(&iVar1);
					}
				}
			}
			if (unk_0xC26429B504BA534D(iLocal_2831[iVar0]))
			{
				unk_0x813865264334331D(&(iLocal_2831[iVar0]));
			}
		}
		if (!bLocal_132 && !bLocal_145)
		{
			if (iLocal_1319[iVar0] > 0)
			{
				unk_0xF8E2640CE709A221(iLocal_1319[iVar0], &cLocal_2583);
			}
		}
		iLocal_1405[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 85)
	{
		if (!iLocal_2600[iVar0] == 0)
		{
			unk_0x924CDE68BA2ED3BA(iLocal_2600[iVar0]);
		}
		iVar0++;
	}
	iLocal_1865 = 0;
	iLocal_1861 = 0;
}

void func_82()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (unk_0x23E9113C762466ED(iLocal_3004[iVar0]))
		{
			if (unk_0x45CD66F0A131E554(iLocal_3004[iVar0], 0))
			{
				if (unk_0x72222684DEA44B9F(iLocal_3004[iVar0]))
				{
					unk_0x394D4A83F07AE208(iLocal_3004[iVar0]);
				}
			}
			func_84(iLocal_3004[iVar0]);
			func_83(iLocal_3004[iVar0]);
		}
		iLocal_1648[iVar0] = 0;
		iLocal_1719[iVar0] = 0;
		if (!bLocal_132 && !bLocal_145)
		{
			if (iLocal_1577[iVar0] > 0)
			{
				unk_0xF8E2640CE709A221(iLocal_1577[iVar0], &cLocal_2583);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (!iLocal_2757[iVar0] == 0)
		{
			unk_0x924CDE68BA2ED3BA(iLocal_2757[iVar0]);
		}
		iVar0++;
	}
	iLocal_1867 = 0;
}

void func_83(int iParam0)
{
	if (unk_0x23E9113C762466ED(uParam0))
	{
		unk_0x921CF98C637B0043(&iParam0);
	}
}

void func_84(int iParam0)
{
	float fVar0;
	int iVar1;
	
	if (unk_0x45CD66F0A131E554(iParam0, 0))
	{
		iVar1 = unk_0x17206B315923243C(iParam0, -1, 0);
		if (!unk_0xCA41A00932714525(iVar1))
		{
			if (!iVar1 == unk_0x17B5CC8A8615737D())
			{
				fVar0 = unk_0x13B7ACE69D27E3E4(iParam0);
				if (fVar0 < 8f)
				{
					fVar0 = 8f;
				}
				if (fVar0 > 62.9f)
				{
					fVar0 = 62.9f;
				}
				unk_0x398C18AE22628160(iVar1, iParam0, 0, 1, fVar0, 786603, 5f, 5f, 1);
				unk_0xB195EE9DB37DA7F2(iVar1, 8192, 1);
				if (bLocal_153)
				{
					unk_0xB195EE9DB37DA7F2(iVar1, 65536, 1);
					unk_0xB195EE9DB37DA7F2(iVar1, 2, 0);
				}
				unk_0xC96275575DC981A9(iVar1, 6, 0);
			}
		}
	}
}

void func_85()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (unk_0x23E9113C762466ED(iLocal_2933[iVar0]))
		{
			if (!unk_0xA929B2923D14E2F8(iLocal_2933[iVar0], 0))
			{
				unk_0xCEDF2A713644AEDA(iLocal_2933[iVar0], 1, 0);
			}
			func_83(iLocal_2933[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 70)
	{
		if (!iLocal_2686[iVar0] == 0)
		{
			unk_0x924CDE68BA2ED3BA(iLocal_2686[iVar0]);
		}
		iVar0++;
	}
	iLocal_1866 = 0;
	iLocal_1863 = 0;
}

void func_86()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 85)
	{
		if (unk_0x23E9113C762466ED(iLocal_2831[iVar0]))
		{
			if (!unk_0xA929B2923D14E2F8(iLocal_2831[iVar0], 0))
			{
				unk_0xCEDF2A713644AEDA(iLocal_2831[iVar0], 1, 0);
			}
			if (unk_0x45CD66F0A131E554(iLocal_2831[iVar0], 0))
			{
				if (unk_0x72222684DEA44B9F(iLocal_2831[iVar0]))
				{
					unk_0x394D4A83F07AE208(iLocal_2831[iVar0]);
				}
			}
			func_84(iLocal_2831[iVar0]);
			func_83(iLocal_2831[iVar0]);
		}
		iLocal_1405[iVar0] = 0;
		iLocal_1491[iVar0] = 0;
		if (!bLocal_132 && !bLocal_145)
		{
			if (iLocal_1319[iVar0] > 0)
			{
				unk_0xF8E2640CE709A221(iLocal_1319[iVar0], &cLocal_2583);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 85)
	{
		if (!iLocal_2600[iVar0] == 0)
		{
			unk_0x924CDE68BA2ED3BA(iLocal_2600[iVar0]);
		}
		iVar0++;
	}
	iLocal_1865 = 0;
	iLocal_1861 = 0;
}

int func_87()
{
	return joaat("s_m_y_cop_01");
}

int func_88()
{
	return joaat("police");
}

int func_89()
{
	return joaat("sultan");
}

int func_90()
{
	if (iLocal_2828 == 0)
	{
		return joaat("a_m_y_business_01");
	}
	return iLocal_2828;
}

void func_91()
{
	unk_0xF076395049E32F0C();
	unk_0x8E2C1C02547F9CA6(-1);
	unk_0xA9EB89B3EE589450(1);
	unk_0xE773F55CEC607580(1);
	unk_0x5BD872FA7F0EC076(1f);
	unk_0x79920BB32F3C316F(3);
	unk_0xBE02ABAAC92D1A06(3);
}

void func_92()
{
	func_93(&(Local_3483.f_2));
	func_93(&(Local_3490.f_2));
	func_93(&(Local_3476.f_2));
	func_93(&(Local_3469.f_2));
}

void func_93(var uParam0)
{
	if (unk_0xA3794949321E107C(*uParam0))
	{
		unk_0x5ACBCE67F0494242(*uParam0, 0);
		unk_0x020DF7300725ECAB(uParam0);
	}
}

void func_94()
{
	if (func_288(iLocal_3260, 1000))
	{
		if (func_20(Local_3476.f_0) && func_13(Local_3490.f_0))
		{
			if (unk_0x2315BB1606BC3DC3(Local_3476.f_0, Local_3490.f_0, 0))
			{
				if (unk_0x72222684DEA44B9F(Local_3490.f_0))
				{
					unk_0x394D4A83F07AE208(Local_3490.f_0);
					unk_0xF8E2640CE709A221(1, sLocal_3297);
				}
				if (!func_40(Local_3476.f_0, -258271821))
				{
					unk_0x9178B6CFE95D27C6(Local_3476.f_0, Local_3490.f_0, 60f, 786469);
					unk_0xCC61640A821F277C(Local_3476.f_0, 1);
					unk_0x650BB0E111420EAF(Local_3476.f_0, 1);
				}
			}
		}
		func_21(500, 1);
		func_95(100, 1);
		func_541();
	}
}

void func_95(int iParam0, bool bParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_286();
	if (iVar0 == -1)
	{
		return;
	}
	if (!Global_100787[iVar0 /*10*/].f_4)
	{
		return;
	}
	if (Global_100787[iVar0 /*10*/].f_5)
	{
		return;
	}
	if (Global_100787[iVar0 /*10*/].f_6)
	{
		return;
	}
	func_257(iVar0, 0);
	unk_0xEB79FECD9022AAF0(&Global_69950, 1);
	if (Global_100787[iVar0 /*10*/].f_9 == -1)
	{
	}
	else
	{
		func_256(&(Global_100787[iVar0 /*10*/].f_9));
	}
	if (bParam1)
	{
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			unk_0x809D9B021F305A70(unk_0xBE369BE1BC57A796(), 0, 0);
			unk_0xD189588DEC407D28(unk_0xBE369BE1BC57A796(), 0);
			unk_0x21F9081DAE2F8AF5(5000);
		}
	}
	func_244(iVar0, 1, 0, 0);
	func_243(0, 0);
	MemCopy(&uVar1, {func_241(iVar0)}, 4);
	func_238(&uVar1, func_239());
	func_120();
	if (unk_0x48B8265059381CD0(Global_101700.f_8975.f_25, 3))
	{
		func_119();
	}
	func_102();
	if (iParam0 == 210 || iParam0 == 211)
	{
		func_98(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111)
	{
		func_98(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322)
	{
		func_98(iParam0, 0, 0);
	}
	func_96();
}

int func_96()
{
	if (func_97(0))
	{
		return 0;
	}
	if (Global_91530.f_8)
	{
		if (Global_91530.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91530.f_10 > 1)
	{
		return 0;
	}
	Global_91530.f_10++;
	return 1;
}

bool func_97(bool bParam0)
{
	if (!bParam0 && unk_0x82F1A060D8F4583B(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x48B8265059381CD0(Global_69950, 0);
}

void func_98(int iParam0, int iParam1, int iParam2)
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
		func_101((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_101700.f_9153[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_101700.f_9153[iParam0 /*12*/].f_6 == 11 || Global_101700.f_9153[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_101700.f_9153[iParam0 /*12*/].f_5 = 1;
		Global_101700.f_9153[iParam0 /*12*/].f_10 = iParam1;
		Global_101700.f_9153[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x76FDB94571A85364(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x76FDB94571A85364(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x76FDB94571A85364(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_99();
	}
}

void func_99()
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
	Global_101436 = 0;
	Global_101437 = 0;
	Global_101438 = 0;
	Global_101439 = 0;
	Global_101440 = 0;
	Global_101441 = 0;
	Global_101442 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_101700.f_9153.f_3853;
	Global_101700.f_9153.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_101700.f_9153[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_101700.f_9153[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_101436++;
					fVar1 = (fVar1 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_101437++;
					fVar2 = (fVar2 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_101438++;
					fVar3 = (fVar3 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_101439++;
					fVar4 = (fVar4 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_101440++;
					fVar5 = (fVar5 + (Global_101700.f_9153[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_101441++;
					fVar6 = (fVar6 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_101442++;
					fVar7 = (fVar7 + Global_101700.f_9153[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_101419 > 0)
	{
		if (Global_101436 == Global_101419)
		{
			fVar1 = 55f;
		}
	}
	if (Global_101420 > 0)
	{
		if (Global_101437 == Global_101420)
		{
			fVar2 = 10f;
		}
	}
	if (Global_101421 > 0)
	{
		if (Global_101438 == Global_101421)
		{
			fVar3 = 0f;
		}
	}
	if (Global_101422 > 0)
	{
		if (Global_101439 == Global_101422)
		{
			fVar4 = 10f;
		}
	}
	if (Global_101423 > 0)
	{
		if (((Global_101440 == Global_101423 || (Global_101423 * 10 / Global_101440) < 41) || Global_101440 > Global_101426) || Global_101440 == Global_101426)
		{
			if (!unk_0x48B8265059381CD0(Global_101700.f_9153.f_3856, 14))
			{
				if (Global_101440 == Global_101423)
				{
					unk_0x76FDB94571A85364(joaat("num_rndevents_completed"), Global_101423, 0);
					unk_0xEB79FECD9022AAF0(&(Global_101700.f_9153.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_101424 > 0)
	{
		if (Global_101441 == Global_101424)
		{
			fVar6 = 15f;
		}
	}
	if (Global_101425 > 0)
	{
		if (Global_101442 == Global_101425)
		{
			fVar7 = 5f;
		}
	}
	Global_101700.f_9153.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_101440 > Global_101426 || Global_101440 == Global_101426)
	{
		iVar9 = Global_101426;
	}
	else
	{
		iVar9 = Global_101440;
	}
	unk_0x731753D8494ABECD(joaat("num_missions_completed"), Global_101436, 1);
	unk_0x731753D8494ABECD(joaat("num_missions_available"), Global_101419, 1);
	unk_0x731753D8494ABECD(joaat("num_minigames_completed"), Global_101437, 1);
	unk_0x731753D8494ABECD(joaat("num_minigames_available"), Global_101420, 1);
	unk_0x731753D8494ABECD(joaat("num_oddjobs_completed"), Global_101438, 1);
	unk_0x731753D8494ABECD(joaat("num_oddjobs_available"), Global_101421, 1);
	unk_0x731753D8494ABECD(joaat("num_rndpeople_completed"), Global_101439, 1);
	unk_0x731753D8494ABECD(joaat("num_rndpeople_available"), Global_101422, 1);
	unk_0x731753D8494ABECD(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x731753D8494ABECD(joaat("num_rndevents_available"), Global_101426, 1);
	unk_0x731753D8494ABECD(joaat("num_misc_completed"), (Global_101442 + Global_101441), 1);
	unk_0x731753D8494ABECD(joaat("num_misc_available"), (Global_101425 + Global_101424), 1);
	Global_101443 = (Global_101436 * 100 / Global_101419);
	Global_101445 = ((Global_101438 + Global_101437) * 100 / (Global_101421 + Global_101420));
	Global_101444 = ((Global_101439 + iVar9) * 100 / (Global_101422 + Global_101426));
	Global_101446 = ((Global_101441 + Global_101442) * 100 / (Global_101424 + Global_101425));
	unk_0x098CDAAE6268B0D0(joaat("total_progress_made"), Global_101700.f_9153.f_3853, 1);
	unk_0x731753D8494ABECD(joaat("percent_story_missions"), Global_101443, 1);
	unk_0x731753D8494ABECD(joaat("percent_ambient_missions"), Global_101444, 1);
	unk_0x731753D8494ABECD(joaat("percent_oddjobs"), Global_101445, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_101700.f_9153.f_3853))
	{
		func_100(13, unk_0xF34EE736CF047844(Global_101700.f_9153.f_3853));
	}
	if (!unk_0x9710FEDD2413A882())
	{
		if (!Global_69702)
		{
			if (func_74() == 2 == 0 && !unk_0x63C468D583002D23())
			{
				if (unk_0x877FC5FAF7DC9BC5())
				{
					Global_101434 = 0;
				}
				if (!Global_55822)
				{
					func_96();
				}
			}
		}
	}
}

int func_100(int iParam0, int iParam1)
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
	iVar0 = unk_0x71AAA4D97165244D(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xA1657EA7F5F15A59(iParam0, iParam1);
	}
	return 0;
}

int func_101(int iParam0, int iParam1, int iParam2, int iParam3)
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
	var uVar11;
	var uVar12;
	var uVar13;
	
	if (iParam2 == -1)
	{
		iParam2 = func_28();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xB14C33EF6CDC31A6((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xEC40FF50D6867780((iParam0 - 0)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xB14C33EF6CDC31A6((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xEC40FF50D6867780((iParam0 - 192)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xB14C33EF6CDC31A6((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xEC40FF50D6867780((iParam0 - 513)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xB14C33EF6CDC31A6((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xEC40FF50D6867780((iParam0 - 705)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x7425761F86762FAD((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xEC40FF50D6867780((iParam0 - 3111)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x7425761F86762FAD((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xEC40FF50D6867780((iParam0 - 2919)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x8C3FF8187D011700((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xEC40FF50D6867780((iParam0 - 4207)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x8C3FF8187D011700((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xEC40FF50D6867780((iParam0 - 4335)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x8C3FF8187D011700((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xEC40FF50D6867780((iParam0 - 6029)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x8C3FF8187D011700((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xEC40FF50D6867780((iParam0 - 7385)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x8C3FF8187D011700((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xEC40FF50D6867780((iParam0 - 7321)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x8C3FF8187D011700((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xEC40FF50D6867780((iParam0 - 9361)) * 64);
		iVar0 = unk_0x6BA2DFEDEA41B774(uVar13, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_102()
{
	func_118();
	func_110();
	func_106();
	func_105();
	func_104();
	func_103();
	Global_91528 = 0;
	Global_85999 = -1;
	unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 17);
	Global_91526 = 0;
	unk_0xFEBB03103CA42EBA(0);
	unk_0x88120C10222D1D74(0);
	unk_0x2359C336802E3CB4(1);
	unk_0x853F52F88ADE73F4(1);
	unk_0x32FDBF4A41B0698D(1);
	func_46(0);
}

void func_103()
{
	Global_69942 = { 0f, 0f, 0f };
	Global_69945 = 0f;
	Global_91491.f_21 = 145;
}

void func_104()
{
	StringCopy(&Global_69934, "", 16);
	StringCopy(&Global_69938, "", 16);
}

void func_105()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Global_91491.f_22[iVar0] = 0;
		iVar0++;
	}
}

void func_106()
{
	Global_91491 = 13;
	Global_91491.f_1 = -1;
	Global_91491.f_2 = 0;
	Global_91491.f_30 = 0f;
	unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 25);
	Global_91525 = 0;
	func_109(0);
	func_108();
	func_107();
	Global_91491.f_18 = -1;
	Global_91491.f_19 = -1;
}

void func_107()
{
	unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 22);
	unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 8);
}

void func_108()
{
	if (Global_91491.f_16 != 0)
	{
		unk_0x33CBABDFE7B17924(&(Global_91491.f_16));
		Global_91491.f_16 = 0;
	}
	if (Global_91491.f_17 != 0)
	{
		unk_0x33CBABDFE7B17924(&(Global_91491.f_17));
		Global_91491.f_17 = 0;
	}
}

void func_109(int iParam0)
{
	if (iParam0 == 1)
	{
		Global_36330 = 1;
	}
	else
	{
		Global_36330 = 0;
	}
}

void func_110()
{
	func_111(&Global_96040);
}

void func_111(var uParam0)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = 145;
	func_117(&(uParam0->f_1));
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
		func_116(&(uParam0->f_25[0 /*295*/][iVar1 /*98*/]));
		func_116(&(uParam0->f_25[1 /*295*/][iVar1 /*98*/]));
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
	func_115(&(uParam0->f_2305));
	func_113(&(uParam0->f_2311));
	func_112(&(uParam0->f_2401));
}

void func_112(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_113(var uParam0)
{
	func_114(&(uParam0->f_12));
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = 0f;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
}

void func_114(var uParam0)
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

void func_115(var uParam0)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	uParam0->f_5 = -1;
}

void func_116(var uParam0)
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

void func_117(var uParam0)
{
	*uParam0 = -15;
}

void func_118()
{
	StringCopy(&Global_93627, "", 32);
	func_111(&Global_93635);
}

void func_119()
{
	if (Global_3118[0 /*2811*/][0 /*281*/].f_259 == 0)
	{
		Global_3118[0 /*2811*/][0 /*281*/].f_259 = 2;
	}
	if (Global_3118[1 /*2811*/][0 /*281*/].f_259 == 0)
	{
		Global_3118[1 /*2811*/][0 /*281*/].f_259 = 2;
	}
	if (Global_3118[2 /*2811*/][0 /*281*/].f_259 == 0)
	{
		Global_3118[2 /*2811*/][0 /*281*/].f_259 = 2;
	}
	unk_0xEB79FECD9022AAF0(&Global_2313, 25);
	unk_0xEB79FECD9022AAF0(&Global_2314, 11);
}

void func_120()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		iVar1 = Global_89193[iVar0];
		if (unk_0x23E9113C762466ED(iVar1) && !unk_0xCA41A00932714525(iVar1))
		{
			iVar3 = func_235(iVar1);
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
				if (func_234(iVar1, 14, iVar2))
				{
					func_121(iVar1, 14, iVar2);
				}
				if (Global_101700.f_2095.f_539[iVar3 /*65*/].f_39[2] == iVar2)
				{
					Global_101700.f_2095.f_539[iVar3 /*65*/].f_39[2] = -1;
				}
			}
		}
		iVar0++;
	}
}

int func_121(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar19;
	int iVar20;
	var uVar21;
	var uVar31;
	int iVar48;
	
	if (unk_0xCA41A00932714525(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	iVar0 = unk_0x0324EEB10F81965F(iParam0);
	Global_69523[1 /*14*/] = { func_169(iVar0, iParam1, iParam2) };
	if (!unk_0x48B8265059381CD0(Global_69523[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!func_234(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { func_165(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_121(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar21 = { func_162(iVar0, iParam2) };
		iVar19 = 0;
		while (iVar19 <= 8)
		{
			if (!func_121(iParam0, 14, uVar21[iVar19]))
			{
				iVar20 = 0;
			}
			iVar19++;
		}
		return iVar20;
	}
	else if (iParam1 == 14)
	{
		unk_0x53BF0F279B4289EA(iParam0, Global_69523[1 /*14*/].f_12);
	}
	else
	{
		uVar31 = { func_165(iVar0, 0) };
		Global_69523[1 /*14*/] = { func_169(iVar0, iParam1, uVar31[iParam1]) };
		if (unk_0xC351741D5A347BCE(iParam0, func_161(iParam1)) > 0 && unk_0xD9BF60A9D14F12C8(iParam0, func_161(iParam1), Global_69523[1 /*14*/].f_3) > 0)
		{
			unk_0x2F933BB106547968(iParam0, func_161(iParam1), Global_69523[1 /*14*/].f_3, Global_69523[1 /*14*/].f_4, 0);
		}
	}
	if (func_160(iParam0, iVar0, &iVar48, 0))
	{
		func_124(iParam0, 2, iVar48, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_122(iParam0, iVar0, &iVar48))
	{
		func_124(iParam0, 1, iVar48, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_122(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_123(iParam1);
	if (Global_101700.f_2095.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_234(iParam0, Global_101700.f_2095.f_539[iVar0 /*65*/].f_64, Global_101700.f_2095.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_62;
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_63 = -99;
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_123(int iParam0)
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

int func_124(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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
	var uVar28;
	var uVar38;
	struct<14> Var55;
	var uVar69;
	
	if (unk_0xCA41A00932714525(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_69522++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = unk_0x0324EEB10F81965F(iParam0);
	if (iParam5 == 0)
	{
		Global_69523[1 /*14*/] = { func_169(iVar10, iParam1, iParam2) };
		if (!func_159(iParam3))
		{
			Global_69522 = (Global_69522 - 1);
			return 0;
		}
		func_155(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = func_153(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = func_153(iParam0, 9);
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
			iVar7 = func_152(iParam0, 1);
			if (!func_151(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = func_152(iParam0, 0);
			if (!func_150(iVar10, 14, iVar8, -1) && !func_149(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = func_152(iParam0, 2);
			}
		}
		unk_0x77DA108F7A79FB28(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_69566 };
		}
		else
		{
			uVar11 = { func_165(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_69523[1 /*14*/] = { func_169(iVar10, iVar0, uVar11[iVar0]) };
				if (unk_0x48B8265059381CD0(Global_69523[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar28 = 9;
						if (iParam5 == 1)
						{
							uVar28 = { Global_69583 };
						}
						else
						{
							uVar28 = { func_162(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_69523[1 /*14*/] = { func_169(iVar10, 14, uVar28[iVar1]) };
							func_140(iParam0, Global_69523[1 /*14*/].f_12, Global_69523[1 /*14*/].f_3, Global_69523[1 /*14*/].f_4);
							func_155(14);
							if (Global_69522 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_132(iParam0, iVar10, 14, uVar28[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_124(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
							func_131(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							unk_0x2F933BB106547968(iParam0, func_161(iVar0), Global_69523[1 /*14*/].f_3, Global_69523[1 /*14*/].f_4, unk_0x15D0CB3C99F0F8B0(iParam0, func_161(iVar0)));
						}
						else
						{
							unk_0x2F933BB106547968(iParam0, func_161(iVar0), Global_69523[1 /*14*/].f_3, Global_69523[1 /*14*/].f_4, iParam4);
						}
						func_155(iVar0);
						if (Global_69522 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_132(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_124(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_69523[1 /*14*/] = { func_169(iVar10, iVar0, func_130(iParam0, iVar0, -1)) };
				if (unk_0x48B8265059381CD0(Global_69523[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_160(iParam0, iVar10, &iVar4, 1))
							{
								func_124(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar38 = { func_165(iVar10, 0) };
						func_124(iParam0, iVar0, uVar38[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var55 = { func_169(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (func_128(iVar10, iParam2, 8, iVar5, &uVar11, &Var55))
				{
					func_124(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_169(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (func_128(iVar10, iParam2, 9, iVar6, &uVar11, &Var55))
				{
					func_124(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_169(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (func_128(iVar10, iParam2, 14, iVar7, &uVar11, &Var55))
				{
					func_124(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_169(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (func_128(iVar10, iParam2, 14, iVar8, &uVar11, &Var55))
				{
					func_124(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_169(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (func_128(iVar10, iParam2, 14, iVar9, &uVar11, &Var55))
				{
					func_124(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar69 = { func_162(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_69523[1 /*14*/] = { func_169(iVar10, 14, uVar69[iVar1]) };
			func_140(iParam0, Global_69523[1 /*14*/].f_12, Global_69523[1 /*14*/].f_3, Global_69523[1 /*14*/].f_4);
			func_155(14);
			if (Global_69522 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_132(iParam0, iVar10, 14, uVar69[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_124(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_140(iParam0, Global_69523[1 /*14*/].f_12, Global_69523[1 /*14*/].f_3, Global_69523[1 /*14*/].f_4);
		func_155(iParam1);
		if (Global_69522 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_132(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_124(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			unk_0x2F933BB106547968(iParam0, func_161(iParam1), Global_69523[1 /*14*/].f_3, Global_69523[1 /*14*/].f_4, unk_0x15D0CB3C99F0F8B0(iParam0, func_161(iParam1)));
		}
		else
		{
			unk_0x2F933BB106547968(iParam0, func_161(iParam1), Global_69523[1 /*14*/].f_3, Global_69523[1 /*14*/].f_4, iParam4);
		}
		if (Global_69522 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_132(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_124(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_125(iVar10, iParam1, iParam2);
		}
	}
	if (Global_69522 == 1)
	{
		if (func_160(iParam0, iVar10, &iVar4, 0))
		{
			func_124(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_122(iParam0, iVar10, &iVar4))
		{
			func_124(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_69522 = (Global_69522 - 1);
	return 1;
}

void func_125(int iParam0, int iParam1, int iParam2)
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
	if (func_127(iParam0, 12, iVar0))
	{
		if (func_126(iParam0, iParam1, iParam2))
		{
			iVar1 = func_123(iParam0);
			if (iParam1 == 3)
			{
				Global_101700.f_2095.f_539.f_196[iVar1] = iParam2;
			}
			else if (iParam1 == 4)
			{
				Global_101700.f_2095.f_539.f_200[iVar1] = iParam2;
			}
		}
	}
}

int func_126(int iParam0, int iParam1, int iParam2)
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

bool func_127(int iParam0, int iParam1, int iParam2)
{
	Global_69523[1 /*14*/] = { func_169(iParam0, iParam1, iParam2) };
	return unk_0x48B8265059381CD0(Global_69523[1 /*14*/].f_6, 2);
}

int func_128(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
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
		uVar0 = { func_162(iParam0, (*uParam4)[13]) };
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
	if (func_129(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_151(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_150(iParam0, iParam2, iParam3, -1))
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
		else if (func_149(iParam0, iParam2, iParam3, -1))
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
		if (func_151(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_150(iParam0, iParam2, iParam3, -1))
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
		else if (func_149(iParam0, iParam2, iParam3, -1))
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
		if (func_151(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_150(iParam0, iParam2, iParam3, -1))
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
		else if (func_149(iParam0, iParam2, iParam3, -1))
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

int func_129(int iParam0, int iParam1, int iParam2)
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

int func_130(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xCA41A00932714525(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_234(iParam0, iParam1, iVar0))
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
				if (func_234(iParam0, iParam1, iVar1))
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
				return func_152(iParam0, iParam2);
			}
		}
		else
		{
			return func_153(iParam0, iParam1);
		}
	}
	return -99;
}

int func_131(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iVar0 = func_123(iParam0);
		Global_101700.f_2095.f_539[iVar0 /*65*/].f_60 = iParam2;
		Global_101700.f_2095.f_539[iVar0 /*65*/].f_61 = iParam1;
		return 1;
	}
	return 0;
}

int func_132(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
				iVar1 = func_153(iParam0, 1);
				iVar0 = func_139(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = func_153(iParam0, 2);
				iVar0 = func_139(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		func_131(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		func_138(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (func_137(iParam1, iParam3, &iVar0))
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
									if (!func_136(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!func_136(iParam0, 3, 135, 150))
									{
										iVar0 = func_135(iParam1, 3, 135, 150);
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
									if (!func_136(iParam0, 3, 209, 222))
									{
										iVar0 = func_135(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!func_136(iParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = func_135(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = func_135(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = func_135(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = func_135(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!func_136(iParam0, 3, 176, 191) && !func_136(iParam0, 3, 227, 242))
									{
										iVar0 = func_135(iParam1, 3, 176, 191);
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
								iVar4 = func_153(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = func_153(iParam0, 11);
								iVar5 = func_134(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = func_153(iParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!func_133(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
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
								iVar7 = func_153(iParam0, 8);
								iVar8 = func_153(iParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = func_134(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = func_134(iParam1, iParam3, iVar8, 1);
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
								iVar9 = func_153(iParam0, 11);
								iVar0 = func_134(iParam1, -99, iVar9, 0);
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

int func_133(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
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

int func_134(int iParam0, int iParam1, int iParam2, int iParam3)
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
				iParam2 = func_135(iParam0, 11, 9, 24);
			}
			else
			{
				iParam2 = func_135(iParam0, 11, 25, 40);
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

int func_135(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam2;
	while (iVar0 <= (iParam3 - 1))
	{
		iVar1 = iVar0;
		if (func_127(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

int func_136(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_153(iParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3)
	{
		return 1;
	}
	return 0;
}

int func_137(int iParam0, int iParam1, int iParam2)
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

int func_138(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iVar0 = func_123(iParam0);
		Global_101700.f_2095.f_539[iVar0 /*65*/].f_63 = iParam2;
		Global_101700.f_2095.f_539[iVar0 /*65*/].f_64 = iParam1;
		return 1;
	}
	return 0;
}

int func_139(int iParam0, int iParam1, int iParam2)
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

void func_140(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam2 == -1)
	{
		unk_0x53BF0F279B4289EA(iParam0, iParam1);
		if (iParam1 == 0)
		{
			unk_0x6018E338F7ABCE75(iParam0, 34, 0);
			unk_0x6018E338F7ABCE75(iParam0, 36, 0);
		}
	}
	else
	{
		unk_0xCAA97B7826076AFA(iParam0, iParam1, iParam2, iParam3, unk_0x63C468D583002D23());
		if (iParam1 == 0)
		{
			iVar0 = func_145(iParam0, iParam2, iParam3, iParam1);
			if (func_141(unk_0x0324EEB10F81965F(iParam0), 14, iVar0, unk_0x8315E8D74F0CC85D(iParam0, 0, iParam2, iParam3)))
			{
				unk_0x6018E338F7ABCE75(iParam0, 34, 1);
				unk_0x6018E338F7ABCE75(iParam0, 36, 1);
			}
			else
			{
				unk_0x6018E338F7ABCE75(iParam0, 34, 0);
				unk_0x6018E338F7ABCE75(iParam0, 36, 0);
			}
		}
	}
}

int func_141(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_142(iParam0, iParam2, 14, 3);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0x0B547E4E2D1A8F1F(iParam3, joaat("HELMET"), 1)))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_142(iParam0, iParam2, 14, 4);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0x0B547E4E2D1A8F1F(iParam3, joaat("HELMET"), 1)))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_142(int iParam0, int iParam1, int iParam2, int iParam3)
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
		unk_0xA61F5F01E6B7823E(&Var0);
		iVar18 = 0;
		iVar19 = (iParam1 - func_144(iParam0));
		if (iVar19 < 0)
		{
			return -1;
		}
		iVar20 = unk_0xE423D4D72B60A747(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar20)
		{
			unk_0xF9D165820B09B032(iVar17, &Var0);
			if (!unk_0x5D46F50AE982AB28(Var0.f_0))
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
		unk_0x69407F3B7F2A9AB2(&Var21);
		iVar39 = 0;
		iVar40 = (iParam1 - func_143(iParam0, func_161(iParam2)));
		if (iVar40 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_69645.f_26[iParam2] && iParam1 == Global_69645[iParam2]) && Global_69645.f_13[iParam2] != 0)
		{
			return Global_69645.f_13[iParam2];
		}
		iVar41 = unk_0xE423D4D72B60A747(iParam3, 6, -1, 0, -1, func_161(iParam2));
		iVar38 = 0;
		while (iVar38 < iVar41)
		{
			unk_0xE6F167D1AE3B7FD1(iVar38, &Var21);
			if (!unk_0x5D46F50AE982AB28(Var21.f_0))
			{
				if (iVar39 == iVar40)
				{
					Global_69645.f_13[iParam2] = Var21.f_1;
					Global_69645[iParam2] = iParam1;
					Global_69645.f_26[iParam2] = iParam0;
					return Var21.f_1;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	return -1;
}

int func_143(int iParam0, int iParam1)
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

int func_144(int iParam0)
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

int func_145(int iParam0, int iParam1, int iParam2, int iParam3)
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
		return func_148(iParam3);
	}
	iVar0 = unk_0x0324EEB10F81965F(iParam0);
	iVar1 = unk_0x8315E8D74F0CC85D(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_147(unk_0x0324EEB10F81965F(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_147(unk_0x0324EEB10F81965F(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = unk_0x092E56DBB01C4882(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = unk_0x1D948F0050408132(iParam0, iParam3, iVar4);
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
					iVar3 = (iVar3 + func_146(iParam0, iParam3));
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
	return func_148(iParam3);
}

int func_146(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x0324EEB10F81965F(iParam0);
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

int func_147(int iParam0, int iParam1, int iParam2, int iParam3)
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
		unk_0xA61F5F01E6B7823E(&Var0);
		iVar18 = 0;
		iVar19 = unk_0xE423D4D72B60A747(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			unk_0xF9D165820B09B032(iVar17, &Var0);
			if (!unk_0x5D46F50AE982AB28(Var0.f_0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_144(iParam0) + iVar18);
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		unk_0x69407F3B7F2A9AB2(&Var20);
		iVar38 = 0;
		iVar39 = unk_0xE423D4D72B60A747(iParam3, 6, -1, 0, -1, func_161(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			unk_0xE6F167D1AE3B7FD1(iVar37, &Var20);
			if (!unk_0x5D46F50AE982AB28(Var20.f_0))
			{
				if (iParam1 == Var20.f_1)
				{
					return (func_143(iParam0, func_161(iParam2)) + iVar38);
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

int func_148(int iParam0)
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

int func_149(int iParam0, int iParam1, int iParam2, int iParam3)
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
						if (iParam3 == -1)
						{
							iParam3 = func_142(iParam0, iParam2, 14, 3);
						}
						return (unk_0x0B547E4E2D1A8F1F(iParam3, joaat("HAT"), 1) || unk_0x0B547E4E2D1A8F1F(func_142(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_142(iParam0, iParam2, 1, 3);
						}
						return (unk_0x0B547E4E2D1A8F1F(iParam3, joaat("HAT"), 0) || unk_0x0B547E4E2D1A8F1F(func_142(iParam0, iParam2, 1, 3), -1842686353, 0));
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
						if (iParam3 == -1)
						{
							iParam3 = func_142(iParam0, iParam2, 14, 4);
						}
						return (unk_0x0B547E4E2D1A8F1F(iParam3, joaat("HAT"), 1) || unk_0x0B547E4E2D1A8F1F(func_142(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_142(iParam0, iParam2, 1, 4);
						}
						return (unk_0x0B547E4E2D1A8F1F(iParam3, joaat("HAT"), 0) || unk_0x0B547E4E2D1A8F1F(func_142(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_150(int iParam0, int iParam1, int iParam2, int iParam3)
{
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
					if (iParam3 == -1)
					{
						iParam3 = func_142(iParam0, iParam2, 1, 3);
					}
					if (unk_0x0B547E4E2D1A8F1F(iParam3, joaat("HAT"), 0))
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
					if (iParam3 == -1)
					{
						iParam3 = func_142(iParam0, iParam2, 1, 4);
					}
					if (unk_0x0B547E4E2D1A8F1F(iParam3, joaat("HAT"), 0))
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

int func_151(int iParam0, int iParam1, int iParam2, int iParam3)
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
					if (iParam3 == -1)
					{
						iParam3 = func_142(iParam0, iParam2, 14, 3);
					}
					return unk_0x0B547E4E2D1A8F1F(iParam3, joaat("GLASSES"), 1);
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
					if (iParam3 == -1)
					{
						iParam3 = func_142(iParam0, iParam2, 14, 4);
					}
					return unk_0x0B547E4E2D1A8F1F(iParam3, joaat("GLASSES"), 1);
				}
			}
			break;
	}
	return 0;
}

int func_152(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xCA41A00932714525(iParam0))
	{
		return -99;
	}
	iVar0 = unk_0xB50239D338267F95(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_148(iParam1);
	}
	iVar1 = unk_0xBE372F0FD574ACB1(iParam0, iParam1);
	return func_145(iParam0, iVar0, iVar1, iParam1);
}

int func_153(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0xCA41A00932714525(iParam0))
	{
		return -99;
	}
	iVar0 = func_161(iParam1);
	iVar1 = unk_0xC72E4A160D2D5004(iParam0, iVar0);
	iVar2 = unk_0x9E9290608A6EFB37(iParam0, iVar0);
	return func_154(iParam0, iVar1, iVar2, iParam1);
}

int func_154(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_161(iParam3);
	iVar1 = unk_0xC351741D5A347BCE(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = unk_0xD9BF60A9D14F12C8(iParam0, iVar0, iVar3);
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

void func_155(int iParam0)
{
	if (unk_0x48B8265059381CD0(Global_69523[1 /*14*/].f_6, 1) && !unk_0x48B8265059381CD0(Global_69523[1 /*14*/].f_6, 6))
	{
		func_158(iParam0, Global_69523[1 /*14*/].f_5, Global_69523[1 /*14*/].f_2, 2, Global_69523[1 /*14*/].f_1, 1, 0);
	}
	if (unk_0x48B8265059381CD0(Global_69523[1 /*14*/].f_6, 1) && unk_0x48B8265059381CD0(Global_69523[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_156(Global_2621444, 2, 1, 1, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_156(Global_2621444, 2, 1, 1, -1);
		}
		else
		{
			func_156(Global_2621444, 2, 1, 1, -1);
		}
	}
}

void func_156(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = Global_69521;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_157(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		uVar3 = func_72(iVar2, iVar0, 0);
		unk_0xEB79FECD9022AAF0(&uVar3, iVar1);
		func_70(iVar2, uVar3, iVar0, 1, 0);
	}
}

bool func_157(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 6022;
	if ((bParam4 && Global_2592887) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 966;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 966;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 966;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 966;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 966;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 966;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 966;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 966;
						*uParam3 = 26;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_0"):
						*uParam2 = 930;
						*uParam3 = 0;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_1"):
						*uParam2 = 930;
						*uParam3 = 1;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_2"):
						*uParam2 = 930;
						*uParam3 = 2;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_3"):
						*uParam2 = 930;
						*uParam3 = 3;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_4"):
						*uParam2 = 930;
						*uParam3 = 4;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_5"):
						*uParam2 = 930;
						*uParam3 = 5;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_7"):
						*uParam2 = 930;
						*uParam3 = 7;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_8"):
						*uParam2 = 930;
						*uParam3 = 8;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_11"):
						*uParam2 = 930;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 1018;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 1018;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 1018;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 1018;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 1018;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 1018;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 1018;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 1018;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 966;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 966;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 966;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 966;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 966;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 966;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 966;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 966;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 1018;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 1018;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 1018;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 1018;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 1018;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 1018;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 1018;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 1018;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_2592887)
		{
			iVar0 = unk_0x1EC7846EE87D4DF2(iParam0);
		}
		else
		{
			iVar0 = unk_0xE8FEEF250EAC0115(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0x1EC7846EE87D4DF2(iParam0);
	}
	else
	{
		iVar0 = unk_0xE8FEEF250EAC0115(iParam0);
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
					*uParam2 = 1765;
					break;
				
				case 7:
					*uParam2 = 1766;
					break;
				
				case 8:
					*uParam2 = 1767;
					break;
				
				case 9:
					*uParam2 = 1768;
					break;
				
				case 10:
					*uParam2 = 1769;
					break;
				
				case 11:
					*uParam2 = 1770;
					break;
				
				case 12:
					*uParam2 = 1771;
					break;
				
				case 13:
					*uParam2 = 1779;
					break;
				
				case 14:
					*uParam2 = 1780;
					break;
				
				case 15:
					*uParam2 = 1881;
					break;
				
				case 16:
					*uParam2 = 1882;
					break;
				
				case 17:
					*uParam2 = 1913;
					break;
				
				case 18:
					*uParam2 = 1927;
					break;
				
				case 19:
					*uParam2 = 1928;
					break;
				
				case 20:
					*uParam2 = 1929;
					break;
				
				case 21:
					*uParam2 = 1930;
					break;
				
				case 22:
					*uParam2 = 1931;
					break;
				
				case 23:
					*uParam2 = 2035;
					break;
				
				case 24:
					*uParam2 = 2036;
					break;
				
				case 25:
					*uParam2 = 2062;
					break;
				
				case 26:
					*uParam2 = 2063;
					break;
				
				case 27:
					*uParam2 = 2064;
					break;
				
				case 28:
					*uParam2 = 2065;
					break;
				
				case 29:
					*uParam2 = 2066;
					break;
				
				case 30:
					*uParam2 = 2067;
					break;
				
				case 31:
					*uParam2 = 2068;
					break;
				
				case 32:
					*uParam2 = 2069;
					break;
				
				case 33:
					*uParam2 = 2070;
					break;
				
				case 34:
					*uParam2 = 2071;
					break;
				
				case 35:
					*uParam2 = 2318;
					break;
				
				case 36:
					*uParam2 = 2319;
					break;
				
				case 37:
					*uParam2 = 2371;
					break;
				
				case 38:
					*uParam2 = 2372;
					break;
				
				case 39:
					*uParam2 = 2373;
					break;
				
				case 40:
					*uParam2 = 2374;
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
				
				case 61:
					*uParam2 = 2581;
					break;
				
				case 62:
					*uParam2 = 3178;
					break;
				
				case 63:
					*uParam2 = 3179;
					break;
				
				case 64:
					*uParam2 = 3180;
					break;
				
				case 65:
					*uParam2 = 3181;
					break;
				
				case 66:
					*uParam2 = 3182;
					break;
				
				case 67:
					*uParam2 = 3183;
					break;
				
				case 68:
					*uParam2 = 3651;
					break;
				
				case 69:
					*uParam2 = 3652;
					break;
				
				case 70:
					*uParam2 = 3653;
					break;
				
				case 71:
					*uParam2 = 3654;
					break;
				
				case 72:
					*uParam2 = 3655;
					break;
				
				case 73:
					*uParam2 = 3656;
					break;
				
				case 74:
					*uParam2 = 3657;
					break;
				
				case 75:
					*uParam2 = 3658;
					break;
				
				case 76:
					*uParam2 = 3659;
					break;
				
				case 77:
					*uParam2 = 3660;
					break;
				
				case 78:
					*uParam2 = 3764;
					break;
				
				case joaat("mpsv_lp0_31"):
					*uParam2 = 3765;
					break;
				
				case 80:
					*uParam2 = 3766;
					break;
				
				case 81:
					*uParam2 = 3767;
					break;
				
				case 82:
					*uParam2 = 3768;
					break;
				
				case 83:
					*uParam2 = 3769;
					break;
				
				case 84:
					*uParam2 = 3770;
					break;
				
				case 85:
					*uParam2 = 3771;
					break;
				
				case 86:
					*uParam2 = 3874;
					break;
				
				case 87:
					*uParam2 = 3875;
					break;
				
				case 88:
					*uParam2 = 3876;
					break;
				
				case 89:
					*uParam2 = 5309;
					break;
				
				case 90:
					*uParam2 = 5310;
					break;
				
				case 91:
					*uParam2 = 5311;
					break;
				
				case 92:
					*uParam2 = 5312;
					break;
				
				case 93:
					*uParam2 = 5313;
					break;
				
				case 94:
					*uParam2 = 5314;
					break;
				
				case 95:
					*uParam2 = 5315;
					break;
				
				case 96:
					*uParam2 = 5316;
					break;
				
				case 97:
					*uParam2 = 5317;
					break;
				
				case 98:
					*uParam2 = 5318;
					break;
				
				case 99:
					*uParam2 = 5319;
					break;
				
				case 100:
					*uParam2 = 5320;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1759;
					break;
				
				case 1:
					*uParam2 = 1760;
					break;
				
				case 2:
					*uParam2 = 1761;
					break;
				
				case 3:
					*uParam2 = 1762;
					break;
				
				case 4:
					*uParam2 = 1763;
					break;
				
				case 5:
					*uParam2 = 1764;
					break;
				
				case 6:
					*uParam2 = 1772;
					break;
				
				case 7:
					*uParam2 = 1773;
					break;
				
				case 8:
					*uParam2 = 1774;
					break;
				
				case 9:
					*uParam2 = 1775;
					break;
				
				case 10:
					*uParam2 = 1776;
					break;
				
				case 11:
					*uParam2 = 1777;
					break;
				
				case 12:
					*uParam2 = 1778;
					break;
				
				case 13:
					*uParam2 = 1781;
					break;
				
				case 14:
					*uParam2 = 1782;
					break;
				
				case 15:
					*uParam2 = 1883;
					break;
				
				case 16:
					*uParam2 = 1884;
					break;
				
				case 17:
					*uParam2 = 1914;
					break;
				
				case 18:
					*uParam2 = 1932;
					break;
				
				case 19:
					*uParam2 = 1933;
					break;
				
				case 20:
					*uParam2 = 1934;
					break;
				
				case 21:
					*uParam2 = 1935;
					break;
				
				case 22:
					*uParam2 = 1936;
					break;
				
				case 23:
					*uParam2 = 2037;
					break;
				
				case 24:
					*uParam2 = 2038;
					break;
				
				case 25:
					*uParam2 = 2072;
					break;
				
				case 26:
					*uParam2 = 2073;
					break;
				
				case 27:
					*uParam2 = 2074;
					break;
				
				case 28:
					*uParam2 = 2075;
					break;
				
				case 29:
					*uParam2 = 2076;
					break;
				
				case 30:
					*uParam2 = 2077;
					break;
				
				case 31:
					*uParam2 = 2078;
					break;
				
				case 32:
					*uParam2 = 2079;
					break;
				
				case 33:
					*uParam2 = 2080;
					break;
				
				case 34:
					*uParam2 = 2081;
					break;
				
				case 35:
					*uParam2 = 2320;
					break;
				
				case 36:
					*uParam2 = 2321;
					break;
				
				case 37:
					*uParam2 = 2375;
					break;
				
				case 38:
					*uParam2 = 2376;
					break;
				
				case 39:
					*uParam2 = 2377;
					break;
				
				case 40:
					*uParam2 = 2378;
					break;
				
				case 41:
					*uParam2 = 2443;
					break;
				
				case 42:
					*uParam2 = 2444;
					break;
				
				case 43:
					*uParam2 = 2445;
					break;
				
				case 44:
					*uParam2 = 2446;
					break;
				
				case 45:
					*uParam2 = 2447;
					break;
				
				case 46:
					*uParam2 = 2448;
					break;
				
				case 47:
					*uParam2 = 2449;
					break;
				
				case 48:
					*uParam2 = 2450;
					break;
				
				case 49:
					*uParam2 = 2451;
					break;
				
				case 50:
					*uParam2 = 2452;
					break;
				
				case 51:
					*uParam2 = 2582;
					break;
				
				case 52:
					*uParam2 = 2583;
					break;
				
				case 53:
					*uParam2 = 2584;
					break;
				
				case 54:
					*uParam2 = 2585;
					break;
				
				case 55:
					*uParam2 = 2586;
					break;
				
				case 56:
					*uParam2 = 2587;
					break;
				
				case 57:
					*uParam2 = 2588;
					break;
				
				case 58:
					*uParam2 = 2589;
					break;
				
				case 59:
					*uParam2 = 2590;
					break;
				
				case 60:
					*uParam2 = 2591;
					break;
				
				case 61:
					*uParam2 = 2592;
					break;
				
				case 62:
					*uParam2 = 3184;
					break;
				
				case 63:
					*uParam2 = 3185;
					break;
				
				case 64:
					*uParam2 = 3186;
					break;
				
				case 65:
					*uParam2 = 3187;
					break;
				
				case 66:
					*uParam2 = 3188;
					break;
				
				case 67:
					*uParam2 = 3189;
					break;
				
				case 68:
					*uParam2 = 3661;
					break;
				
				case 69:
					*uParam2 = 3662;
					break;
				
				case 70:
					*uParam2 = 3663;
					break;
				
				case 71:
					*uParam2 = 3664;
					break;
				
				case 72:
					*uParam2 = 3665;
					break;
				
				case 73:
					*uParam2 = 3666;
					break;
				
				case 74:
					*uParam2 = 3667;
					break;
				
				case 75:
					*uParam2 = 3668;
					break;
				
				case 76:
					*uParam2 = 3669;
					break;
				
				case 77:
					*uParam2 = 3670;
					break;
				
				case 78:
					*uParam2 = 3772;
					break;
				
				case joaat("mpsv_lp0_31"):
					*uParam2 = 3773;
					break;
				
				case 80:
					*uParam2 = 3774;
					break;
				
				case 81:
					*uParam2 = 3775;
					break;
				
				case 82:
					*uParam2 = 3776;
					break;
				
				case 83:
					*uParam2 = 3777;
					break;
				
				case 84:
					*uParam2 = 3778;
					break;
				
				case 85:
					*uParam2 = 3779;
					break;
				
				case 86:
					*uParam2 = 3877;
					break;
				
				case 87:
					*uParam2 = 3878;
					break;
				
				case 88:
					*uParam2 = 3879;
					break;
				
				case 89:
					*uParam2 = 5321;
					break;
				
				case 90:
					*uParam2 = 5322;
					break;
				
				case 91:
					*uParam2 = 5323;
					break;
				
				case 92:
					*uParam2 = 5324;
					break;
				
				case 93:
					*uParam2 = 5325;
					break;
				
				case 94:
					*uParam2 = 5326;
					break;
				
				case 95:
					*uParam2 = 5327;
					break;
				
				case 96:
					*uParam2 = 5328;
					break;
				
				case 97:
					*uParam2 = 5329;
					break;
				
				case 98:
					*uParam2 = 5330;
					break;
				
				case 99:
					*uParam2 = 5331;
					break;
				
				case 100:
					*uParam2 = 5332;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 6022;
}

int func_158(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/][iParam3]), iParam4);
		}
		return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0xEB79FECD9022AAF0(&(Global_101700.f_2095[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x21E7933CCC7B3724(&(Global_101700.f_2095[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return unk_0x48B8265059381CD0(Global_101700.f_2095[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_159(int iParam0)
{
	if (!unk_0x48B8265059381CD0(Global_69523[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!unk_0x48B8265059381CD0(Global_69523[1 /*14*/].f_6, 1))
		{
			return 0;
		}
		if (!unk_0x48B8265059381CD0(Global_69523[1 /*14*/].f_6, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_160(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_123(iParam1);
	if (Global_101700.f_2095.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_234(iParam0, Global_101700.f_2095.f_539[iVar0 /*65*/].f_61, Global_101700.f_2095.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_59;
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_60 = -99;
			Global_101700.f_2095.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_161(int iParam0)
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

struct<10> func_162(int iParam0, int iParam1)
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
					func_164(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_164(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_164(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_164(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_164(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_164(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_164(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_164(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_164(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_164(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_164(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_163(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_164(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_164(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_164(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_164(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_164(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_164(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_164(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_164(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_164(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_164(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_163(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_164(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_164(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_164(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_164(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_164(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_164(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_164(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_164(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_164(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_164(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_163(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_164(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_164(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_164(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_164(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_164(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_164(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_164(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_164(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_164(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_164(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_164(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_164(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_164(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_164(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_164(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_164(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_164(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_164(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_164(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_164(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_164(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_164(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_164(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_164(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_164(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_164(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_163(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_164(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_164(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_164(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_164(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_164(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_164(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_164(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_164(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_164(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_164(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_164(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_164(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_164(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_164(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_164(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_164(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_164(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_164(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_164(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_164(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_164(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_164(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_164(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_164(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_164(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_163(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_163(int iParam0, int iParam1, int iParam2, int iParam3)
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
		unk_0xB615ADF659C5D565(iParam2, &Var1);
		if (!unk_0x5D46F50AE982AB28(Var1.f_0))
		{
			iVar19 = 0;
			while (iVar19 < Var1.f_3)
			{
				if (unk_0x79388F76277D529B(Var1.f_1, iVar19, &Var16) && Var16.f_2 != -1)
				{
					if ((Var16.f_0 != 0 && Var16.f_0 != -1) && Var16.f_0 != joaat("0"))
					{
						(*iParam0)[Var16.f_2] = func_147(iParam1, Var16.f_0, 14, iVar0);
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

void func_164(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

struct<17> func_165(int iParam0, int iParam1)
{
	int iVar0;
	struct<17> Var1;
	
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	Var1.f_16 = 0;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_101700.f_8044.f_99.f_58[120])
					{
						func_168(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_168(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_168(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_168(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_168(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_168(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_168(&Var1, -99, -99, Global_101700.f_2095.f_539.f_196[0], Global_101700.f_2095.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_168(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_168(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_168(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_168(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_168(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_168(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_168(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_168(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_168(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_168(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_168(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_168(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_168(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_168(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_168(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_168(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_168(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_168(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_168(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_168(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_168(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_168(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_168(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_168(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_168(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_168(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_168(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_168(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_168(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_168(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_168(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_168(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_168(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_168(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_168(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_168(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_168(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_168(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_168(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_168(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_168(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_168(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_168(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_168(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_168(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_168(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_168(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_166(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_168(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_168(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_168(&Var1, -99, -99, Global_101700.f_2095.f_539.f_196[1], Global_101700.f_2095.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_168(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_168(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_168(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_168(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_168(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_168(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_168(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_168(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_168(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_168(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_168(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_168(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_168(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_168(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_168(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_168(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_168(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_168(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_168(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_168(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_168(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_168(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_168(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_168(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_168(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_168(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_168(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_168(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_168(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_168(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_168(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_168(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_168(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_168(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_168(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_168(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_168(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_168(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_168(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_168(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_168(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_168(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_168(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_168(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_166(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_168(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_168(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_168(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_168(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_168(&Var1, -99, -99, Global_101700.f_2095.f_539.f_196[2], Global_101700.f_2095.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_168(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_168(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_168(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_168(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_168(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_168(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_168(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_168(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_168(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_168(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_168(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_168(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_168(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_168(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_168(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_168(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_168(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_168(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_168(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_168(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_168(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_168(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_168(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_168(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_168(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_168(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_168(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_168(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_168(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_168(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_168(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_168(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_168(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_168(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_168(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_168(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_168(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_168(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_168(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_168(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_168(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_168(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_168(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_166(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_168(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_168(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_168(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_168(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_168(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_168(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_168(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_168(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_168(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_168(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_168(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_168(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_168(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_168(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_168(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_168(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_168(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_168(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_168(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_168(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_168(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_168(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_168(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_168(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_168(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_168(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_166(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_168(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_168(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_168(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_168(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_168(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_168(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_168(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_168(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_168(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_168(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_168(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_168(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_168(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_168(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_168(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_168(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_168(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_168(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_168(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_168(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_168(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_168(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_168(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_168(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_168(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_168(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_168(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_168(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_166(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_166(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	struct<3> Var16;
	struct<2> Var19;
	int iVar36;
	
	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0;
		(*uParam0)[13] = (10 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 1;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 2;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 4;
	}
	unk_0x7B9598A1DCBD186F(iVar0, 0);
	unk_0xA56F6F017CB97DFE((iParam2 - iParam3), &Var1);
	if (!unk_0x5D46F50AE982AB28(Var1.f_0))
	{
		iVar36 = 0;
		while (iVar36 < Var1.f_4)
		{
			if (unk_0xABF16728DFC48025(Var1.f_1, iVar36, &Var16))
			{
				if ((Var16.f_0 != 0 && Var16.f_0 != -1) && Var16.f_0 != joaat("0"))
				{
					if (Var16.f_2 == 10)
					{
						unk_0x69407F3B7F2A9AB2(&Var19);
						unk_0xCD8FF71467FFD88E(Var16.f_0, &Var19);
						if (Var16.f_0 != Var19.f_1)
						{
							uParam0->f_16 = 1;
						}
					}
					if (Var16.f_2 == 10 && uParam0->f_16)
					{
						(*uParam0)[func_167(Var16.f_2)] = Var16.f_0;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[func_167(Var16.f_2)] = func_147(iParam1, Var16.f_0, func_167(Var16.f_2), iVar0);
					}
				}
				else if (Var16.f_1 != -1)
				{
					(*uParam0)[func_167(Var16.f_2)] = Var16.f_1;
				}
			}
			iVar36++;
		}
		if (Var1.f_3 == 0)
		{
			(*uParam0)[13] = -99;
		}
		else
		{
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

int func_167(int iParam0)
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

void func_168(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = -99;
}

struct<14> func_169(int iParam0, int iParam1, int iParam2)
{
	func_233();
	if (iParam0 == joaat("player_zero"))
	{
		func_215(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_196(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_170(iParam1, iParam2);
	}
	return Global_69523[0 /*14*/];
}

void func_170(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_195(iParam1);
			break;
		
		case 2:
			func_194(iParam1);
			break;
		
		case 3:
			func_191(iParam1);
			break;
		
		case 4:
			func_190(iParam1);
			break;
		
		case 6:
			func_189(iParam1);
			break;
		
		case 5:
			func_188(iParam1);
			break;
		
		case 8:
			func_187(iParam1);
			break;
		
		case 9:
			func_186(iParam1);
			break;
		
		case 10:
			func_185(iParam1);
			break;
		
		case 1:
			func_184(iParam1);
			break;
		
		case 7:
			func_183(iParam1);
			break;
		
		case 11:
			func_182(iParam1);
			break;
		
		case 12:
			func_181(iParam1);
			break;
		
		case 13:
			func_180(iParam1);
			break;
		
		case 14:
			func_171(iParam1);
			break;
	}
}

void func_171(int iParam0)
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
	Global_69523[0 /*14*/].f_5 = 2;
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
			func_179(iVar10, iParam0, 155);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_172(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
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
	uParam0->f_12 = func_178(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0x765F5B806B517045(sParam3) != unk_0x765F5B806B517045("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 5);
		}
		unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 1);
		unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 2);
		unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 6);
		if (func_177(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (unk_0x0B547E4E2D1A8F1F(Global_2621444, joaat("REBREATHER"), 0))
			{
				unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_176(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x21E7933CCC7B3724(&(uParam0->f_6), 2);
			}
			if (!func_176(Global_2621444, 2, 1, 1, -1))
			{
				unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_176(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x21E7933CCC7B3724(&(uParam0->f_6), 2);
			}
			if (!func_176(Global_2621444, 2, 1, 1, -1))
			{
				unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_176(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x21E7933CCC7B3724(&(uParam0->f_6), 2);
			}
			if (!func_176(Global_2621444, 2, 1, 1, -1))
			{
				unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 0);
		unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 5);
		if (func_158(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 1);
		}
		if (func_158(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 2);
		}
		if (!func_158(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_177(14))
			{
				return;
			}
			uVar0 = func_72(func_175(iParam1, uParam0->f_2), Global_69521, 0);
			if (unk_0x48B8265059381CD0(uVar0, uParam0->f_1))
			{
				unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 1);
			}
			iVar0 = func_72(func_174(iParam1, uParam0->f_2), Global_69521, 0);
			if (unk_0x48B8265059381CD0(iVar0, uParam0->f_1))
			{
				unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 2);
			}
			if (func_173(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_72(iVar1, Global_69521, 0);
				if (!unk_0x48B8265059381CD0(iVar0, uParam0->f_1))
				{
					unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 1);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 1);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_6), 2);
		}
	}
}

bool func_173(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 973;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 974;
					break;
				
				case 3:
					*uParam2 = 1424;
					break;
				
				case 4:
					*uParam2 = 990;
					break;
				
				case 6:
					*uParam2 = 998;
					break;
				
				case 8:
					*uParam2 = 1425;
					break;
				
				case 9:
					*uParam2 = 1433;
					break;
				
				case 10:
					*uParam2 = 1435;
					break;
				
				case 1:
					*uParam2 = 1006;
					break;
				
				case 7:
					*uParam2 = 1436;
					break;
				
				case 11:
					*uParam2 = 982;
					break;
				
				case 14:
					*uParam2 = 1014;
					break;
				
				case 12:
					*uParam2 = 1025;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 975;
					break;
				
				case 4:
					*uParam2 = 991;
					break;
				
				case 6:
					*uParam2 = 999;
					break;
				
				case 8:
					*uParam2 = 1426;
					break;
				
				case 9:
					*uParam2 = 1434;
					break;
				
				case 7:
					*uParam2 = 1437;
					break;
				
				case 11:
					*uParam2 = 983;
					break;
				
				case 14:
					*uParam2 = 1015;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 976;
					break;
				
				case 4:
					*uParam2 = 992;
					break;
				
				case 6:
					*uParam2 = 1000;
					break;
				
				case 8:
					*uParam2 = 1427;
					break;
				
				case 7:
					*uParam2 = 1438;
					break;
				
				case 11:
					*uParam2 = 984;
					break;
				
				case 14:
					*uParam2 = 1016;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 993;
					break;
				
				case 6:
					*uParam2 = 1001;
					break;
				
				case 8:
					*uParam2 = 1428;
					break;
				
				case 11:
					*uParam2 = 985;
					break;
				
				case 14:
					*uParam2 = 1017;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 994;
					break;
				
				case 6:
					*uParam2 = 1002;
					break;
				
				case 8:
					*uParam2 = 1429;
					break;
				
				case 11:
					*uParam2 = 986;
					break;
				
				case 14:
					*uParam2 = 1018;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 995;
					break;
				
				case 6:
					*uParam2 = 1003;
					break;
				
				case 8:
					*uParam2 = 1430;
					break;
				
				case 11:
					*uParam2 = 987;
					break;
				
				case 14:
					*uParam2 = 1019;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 996;
					break;
				
				case 6:
					*uParam2 = 1004;
					break;
				
				case 8:
					*uParam2 = 1431;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 997;
					break;
				
				case 6:
					*uParam2 = 1005;
					break;
				
				case 8:
					*uParam2 = 1432;
					break;
				
				case 11:
					*uParam2 = 989;
					break;
				
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
	}
	return *uParam2 != 973;
}

int func_174(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 922;
					break;
				
				case 3:
					return 1409;
					break;
				
				case 4:
					return 938;
					break;
				
				case 6:
					return 946;
					break;
				
				case 8:
					return 1410;
					break;
				
				case 9:
					return 1418;
					break;
				
				case 10:
					return 1420;
					break;
				
				case 1:
					return 954;
					break;
				
				case 7:
					return 1421;
					break;
				
				case 11:
					return 930;
					break;
				
				case 14:
					return 962;
					break;
				
				case 12:
					return 973;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 923;
					break;
				
				case 4:
					return 939;
					break;
				
				case 6:
					return 947;
					break;
				
				case 8:
					return 1411;
					break;
				
				case 9:
					return 1419;
					break;
				
				case 7:
					return 1422;
					break;
				
				case 11:
					return 931;
					break;
				
				case 14:
					return 963;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 924;
					break;
				
				case 4:
					return 940;
					break;
				
				case 6:
					return 948;
					break;
				
				case 8:
					return 1412;
					break;
				
				case 7:
					return 1423;
					break;
				
				case 11:
					return 932;
					break;
				
				case 14:
					return 964;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 941;
					break;
				
				case 6:
					return 949;
					break;
				
				case 8:
					return 1413;
					break;
				
				case 11:
					return 933;
					break;
				
				case 14:
					return 965;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 942;
					break;
				
				case 6:
					return 950;
					break;
				
				case 8:
					return 1414;
					break;
				
				case 11:
					return 934;
					break;
				
				case 14:
					return 966;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 943;
					break;
				
				case 6:
					return 951;
					break;
				
				case 8:
					return 1415;
					break;
				
				case 11:
					return 935;
					break;
				
				case 14:
					return 967;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 944;
					break;
				
				case 6:
					return 952;
					break;
				
				case 8:
					return 1416;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 945;
					break;
				
				case 6:
					return 953;
					break;
				
				case 8:
					return 1417;
					break;
				
				case 11:
					return 937;
					break;
				
				case 14:
					return 969;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 970;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 971;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 972;
					break;
			}
			break;
	}
	return 930;
}

int func_175(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 870;
					break;
				
				case 3:
					return 1394;
					break;
				
				case 4:
					return 886;
					break;
				
				case 6:
					return 894;
					break;
				
				case 8:
					return 1395;
					break;
				
				case 9:
					return 1403;
					break;
				
				case 10:
					return 1405;
					break;
				
				case 1:
					return 902;
					break;
				
				case 7:
					return 1406;
					break;
				
				case 11:
					return 878;
					break;
				
				case 14:
					return 910;
					break;
				
				case 12:
					return 921;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 871;
					break;
				
				case 4:
					return 887;
					break;
				
				case 6:
					return 895;
					break;
				
				case 8:
					return 1396;
					break;
				
				case 9:
					return 1404;
					break;
				
				case 7:
					return 1407;
					break;
				
				case 11:
					return 879;
					break;
				
				case 14:
					return 911;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 872;
					break;
				
				case 4:
					return 888;
					break;
				
				case 6:
					return 896;
					break;
				
				case 8:
					return 1397;
					break;
				
				case 7:
					return 1408;
					break;
				
				case 11:
					return 880;
					break;
				
				case 14:
					return 912;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 889;
					break;
				
				case 6:
					return 897;
					break;
				
				case 8:
					return 1398;
					break;
				
				case 11:
					return 881;
					break;
				
				case 14:
					return 913;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 890;
					break;
				
				case 6:
					return 898;
					break;
				
				case 8:
					return 1399;
					break;
				
				case 11:
					return 882;
					break;
				
				case 14:
					return 914;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 891;
					break;
				
				case 6:
					return 899;
					break;
				
				case 8:
					return 1400;
					break;
				
				case 11:
					return 883;
					break;
				
				case 14:
					return 915;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 892;
					break;
				
				case 6:
					return 900;
					break;
				
				case 8:
					return 1401;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 893;
					break;
				
				case 6:
					return 901;
					break;
				
				case 8:
					return 1402;
					break;
				
				case 11:
					return 885;
					break;
				
				case 14:
					return 917;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 918;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 919;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 920;
					break;
			}
			break;
	}
	return 878;
}

int func_176(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = Global_69521;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_157(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		uVar3 = func_72(iVar2, iVar0, 0);
		return unk_0x48B8265059381CD0(uVar3, iVar1);
	}
	return 0;
}

bool func_177(int iParam0)
{
	return Global_35781 == iParam0;
}

int func_178(int iParam0)
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

void func_179(int iParam0, int iParam1, int iParam2)
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
	uVar1 = Global_69523[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar18 = 0;
		iVar19 = unk_0x7B9598A1DCBD186F(uVar1, 0);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			unk_0xA56F6F017CB97DFE(iVar17, &Var2);
			if (!unk_0x5D46F50AE982AB28(Var2.f_0))
			{
				if (iVar18 == (iParam1 - iParam2))
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2.f_0;
					func_172(&(Global_69523[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13)
	{
		func_172(&(Global_69523[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0xA61F5F01E6B7823E(&Var20);
		iVar39 = 0;
		iVar40 = unk_0xE423D4D72B60A747(iVar1, 6, -1, 1, -1, -1);
		iVar38 = 0;
		while (iVar38 < iVar40)
		{
			unk_0xF9D165820B09B032(iVar38, &Var20);
			if (!unk_0x5D46F50AE982AB28(Var20.f_0))
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
					func_172(&(Global_69523[0 /*14*/]), iParam0, iParam1, &(Var20.f_9), Var20.f_3, Var20.f_4, Var20.f_5, unk_0x0B547E4E2D1A8F1F(Var20.f_1, joaat("OUTFIT_ONLY"), 0), iVar37, 2, Var20.f_1 != 0);
					return;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	else
	{
		unk_0x69407F3B7F2A9AB2(&Var41);
		iVar59 = 0;
		iVar60 = unk_0xE423D4D72B60A747(iVar1, 6, -1, 0, -1, func_161(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60)
		{
			unk_0xE6F167D1AE3B7FD1(iVar58, &Var41);
			if (!unk_0x5D46F50AE982AB28(Var41.f_0))
			{
				if (iVar59 == (iParam1 - iParam2))
				{
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41.f_0;
					func_172(&(Global_69523[0 /*14*/]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, unk_0x0B547E4E2D1A8F1F(Var41.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
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
	iVar10 = 13;
	Global_69523[0 /*14*/].f_5 = 2;
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
			func_179(iVar10, iParam0, 9);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 12;
	Global_69523[0 /*14*/].f_5 = 2;
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
			func_179(iVar10, iParam0, 48);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 11;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_179(iVar10, iParam0, 1);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 7;
	Global_69523[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_179(iVar10, iParam0, 1);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 1;
	Global_69523[0 /*14*/].f_5 = 2;
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
			func_179(iVar10, iParam0, 6);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 10;
	Global_69523[0 /*14*/].f_5 = 2;
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
			func_179(iVar10, iParam0, 33);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 9;
	Global_69523[0 /*14*/].f_5 = 2;
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
			func_179(iVar10, iParam0, 17);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 8;
	Global_69523[0 /*14*/].f_5 = 2;
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
			func_179(iVar10, iParam0, 18);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_188(int iParam0)
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
	Global_69523[0 /*14*/].f_5 = 2;
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
			func_179(iVar10, iParam0, 7);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 6;
	Global_69523[0 /*14*/].f_5 = 2;
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
			func_179(iVar10, iParam0, 84);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 4;
	Global_69523[0 /*14*/].f_5 = 2;
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
			func_179(iVar10, iParam0, 104);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_191(int iParam0)
{
	if (iParam0 < 136)
	{
		func_193(iParam0);
	}
	else
	{
		func_192(iParam0);
	}
	if (Global_69523[0 /*14*/].f_2 == -1)
	{
		func_179(3, iParam0, 242);
	}
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
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 2;
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
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_193(int iParam0)
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
	Global_69523[0 /*14*/].f_5 = 2;
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
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 2;
	Global_69523[0 /*14*/].f_5 = 2;
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
			func_179(iVar10, iParam0, 9);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 0;
	Global_69523[0 /*14*/].f_5 = 2;
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
			func_179(iVar10, iParam0, 7);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_196(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_214(iParam1);
			break;
		
		case 2:
			func_213(iParam1);
			break;
		
		case 3:
			func_209(iParam1);
			break;
		
		case 4:
			func_208(iParam1);
			break;
		
		case 6:
			func_207(iParam1);
			break;
		
		case 5:
			func_206(iParam1);
			break;
		
		case 8:
			func_205(iParam1);
			break;
		
		case 9:
			func_204(iParam1);
			break;
		
		case 10:
			func_203(iParam1);
			break;
		
		case 1:
			func_202(iParam1);
			break;
		
		case 7:
			func_201(iParam1);
			break;
		
		case 11:
			func_200(iParam1);
			break;
		
		case 12:
			func_199(iParam1);
			break;
		
		case 13:
			func_198(iParam1);
			break;
		
		case 14:
			func_197(iParam1);
			break;
	}
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
	iVar10 = 14;
	Global_69523[0 /*14*/].f_5 = 1;
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
			func_179(iVar10, iParam0, 175);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 13;
	Global_69523[0 /*14*/].f_5 = 1;
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
			func_179(iVar10, iParam0, 9);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 12;
	Global_69523[0 /*14*/].f_5 = 1;
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
			func_179(iVar10, iParam0, 47);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 11;
	Global_69523[0 /*14*/].f_5 = 1;
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
			func_179(iVar10, iParam0, 63);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 7;
	Global_69523[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_179(iVar10, iParam0, 1);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 1;
	Global_69523[0 /*14*/].f_5 = 1;
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
			func_179(iVar10, iParam0, 5);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 10;
	Global_69523[0 /*14*/].f_5 = 1;
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
			func_179(iVar10, iParam0, 53);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 9;
	Global_69523[0 /*14*/].f_5 = 1;
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
			func_179(iVar10, iParam0, 12);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 8;
	Global_69523[0 /*14*/].f_5 = 1;
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
			func_179(iVar10, iParam0, 77);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_206(int iParam0)
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
	Global_69523[0 /*14*/].f_5 = 1;
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
			func_179(iVar10, iParam0, 7);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 6;
	Global_69523[0 /*14*/].f_5 = 1;
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
			func_179(iVar10, iParam0, 134);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 4;
	Global_69523[0 /*14*/].f_5 = 1;
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
			func_179(iVar10, iParam0, 117);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_209(int iParam0)
{
	if (iParam0 < 107)
	{
		func_212(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_211(iParam0);
	}
	else
	{
		func_210(iParam0);
	}
	if (Global_69523[0 /*14*/].f_2 == -1)
	{
		func_179(3, iParam0, 318);
	}
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
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 1;
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
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 1;
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
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_212(int iParam0)
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
	Global_69523[0 /*14*/].f_5 = 1;
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
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 2;
	Global_69523[0 /*14*/].f_5 = 1;
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
			func_179(iVar10, iParam0, 21);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 0;
	Global_69523[0 /*14*/].f_5 = 1;
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
			func_179(iVar10, iParam0, 10);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_215(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_232(iParam1);
			break;
		
		case 2:
			func_231(iParam1);
			break;
		
		case 3:
			func_228(iParam1);
			break;
		
		case 4:
			func_227(iParam1);
			break;
		
		case 6:
			func_226(iParam1);
			break;
		
		case 5:
			func_225(iParam1);
			break;
		
		case 8:
			func_224(iParam1);
			break;
		
		case 9:
			func_223(iParam1);
			break;
		
		case 10:
			func_222(iParam1);
			break;
		
		case 1:
			func_221(iParam1);
			break;
		
		case 7:
			func_220(iParam1);
			break;
		
		case 11:
			func_219(iParam1);
			break;
		
		case 12:
			func_218(iParam1);
			break;
		
		case 13:
			func_217(iParam1);
			break;
		
		case 14:
			func_216(iParam1);
			break;
	}
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
	iVar10 = 14;
	Global_69523[0 /*14*/].f_5 = 0;
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
			func_179(iVar10, iParam0, 113);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 13;
	Global_69523[0 /*14*/].f_5 = 0;
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
			func_179(iVar10, iParam0, 10);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 12;
	Global_69523[0 /*14*/].f_5 = 0;
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
			func_179(iVar10, iParam0, 53);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 11;
	Global_69523[0 /*14*/].f_5 = 0;
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
			func_179(iVar10, iParam0, 45);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 7;
	Global_69523[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_179(iVar10, iParam0, 1);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 1;
	Global_69523[0 /*14*/].f_5 = 0;
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
			func_179(iVar10, iParam0, 5);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 10;
	Global_69523[0 /*14*/].f_5 = 0;
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
			func_179(iVar10, iParam0, 48);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 9;
	Global_69523[0 /*14*/].f_5 = 0;
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
			func_179(iVar10, iParam0, 20);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 8;
	Global_69523[0 /*14*/].f_5 = 0;
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
			func_179(iVar10, iParam0, 24);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_225(int iParam0)
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
	Global_69523[0 /*14*/].f_5 = 0;
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
			func_179(iVar10, iParam0, 14);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 6;
	Global_69523[0 /*14*/].f_5 = 0;
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
			func_179(iVar10, iParam0, 99);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
	iVar10 = 4;
	Global_69523[0 /*14*/].f_5 = 0;
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
			func_179(iVar10, iParam0, 113);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_228(int iParam0)
{
	if (iParam0 < 60)
	{
		func_230(iParam0);
	}
	else
	{
		func_229(iParam0);
	}
	if (Global_69523[0 /*14*/].f_2 == -1)
	{
		func_179(3, iParam0, 181);
	}
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
	iVar10 = 3;
	Global_69523[0 /*14*/].f_5 = 0;
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
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_230(int iParam0)
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
	Global_69523[0 /*14*/].f_5 = 0;
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
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_231(int iParam0)
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
	Global_69523[0 /*14*/].f_5 = 0;
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
			func_179(iVar10, iParam0, 6);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_232(int iParam0)
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
	Global_69523[0 /*14*/].f_5 = 0;
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
			func_179(iVar10, iParam0, 7);
			return;
			break;
	}
	func_172(&(Global_69523[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_233()
{
	Global_69523[0 /*14*/].f_1 = -1;
	Global_69523[0 /*14*/].f_2 = -1;
	Global_69523[0 /*14*/].f_5 = -1;
	Global_69523[0 /*14*/].f_3 = -1;
	Global_69523[0 /*14*/].f_4 = -1;
	Global_69523[0 /*14*/].f_7 = 0;
	Global_69523[0 /*14*/].f_6 = 0;
	Global_69523[0 /*14*/].f_13 = -1;
	Global_69523[0 /*14*/].f_12 = 0;
	Global_69523[0 /*14*/] = 0;
	StringCopy(&(Global_69523[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_234(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar22;
	int iVar32;
	var uVar33;
	
	if (unk_0xCA41A00932714525(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x0324EEB10F81965F(iParam0);
	Global_69523[1 /*14*/] = { func_169(iVar0, iParam1, iParam2) };
	if (!unk_0x48B8265059381CD0(Global_69523[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { func_165(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_234(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar22 = { func_162(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_234(iParam0, 14, uVar22[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_69523[2 /*14*/] = { func_169(iVar0, 14, iVar4) };
									if (Global_69523[2 /*14*/].f_12 == iVar3)
									{
										if (func_234(iParam0, 14, iVar4))
										{
											if (!func_128(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_69523[2 /*14*/])))
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
						iVar1 = func_153(iParam0, iVar2);
						Global_69523[2 /*14*/] = { func_169(iVar0, iVar2, iVar1) };
						if (!func_128(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_69523[2 /*14*/])))
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
		uVar33 = { func_162(iVar0, iParam2) };
		iVar32 = 0;
		while (iVar32 <= 8)
		{
			if (!func_234(iParam0, 14, uVar33[iVar32]))
			{
				return 0;
			}
			iVar32++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0xB50239D338267F95(iParam0, Global_69523[1 /*14*/].f_12) == Global_69523[1 /*14*/].f_3 && (unk_0xBE372F0FD574ACB1(iParam0, Global_69523[1 /*14*/].f_12) == Global_69523[1 /*14*/].f_4 || Global_69523[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_69523[1 /*14*/].f_3 == unk_0xC72E4A160D2D5004(iParam0, func_161(iParam1)) && Global_69523[1 /*14*/].f_4 == unk_0x9E9290608A6EFB37(iParam0, func_161(iParam1)))
	{
		return 1;
	}
	return 0;
}

int func_235(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x23E9113C762466ED(iParam0))
	{
		iVar1 = unk_0x0324EEB10F81965F(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_236(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_236(int iParam0)
{
	if (func_237(iParam0))
	{
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_237(int iParam0)
{
	return iParam0 < 3;
}

void func_238(var uParam0, int iParam1)
{
	unk_0x5F3FAD0D966E5D02(joaat("sp_last_mission_name"), uParam0, 1);
	if (unk_0x48B8265059381CD0(iParam1, 0))
	{
		unk_0x5F3FAD0D966E5D02(joaat("sp0_last_mission_name"), uParam0, 1);
	}
	if (unk_0x48B8265059381CD0(iParam1, 1))
	{
		unk_0x5F3FAD0D966E5D02(joaat("sp1_last_mission_name"), uParam0, 1);
	}
	if (unk_0x48B8265059381CD0(iParam1, 2))
	{
		unk_0x5F3FAD0D966E5D02(joaat("sp2_last_mission_name"), uParam0, 1);
	}
}

int func_239()
{
	func_240();
	switch (Global_101700.f_2095.f_539.f_3549)
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

void func_240()
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
	{
		if (func_236(Global_101700.f_2095.f_539.f_3549) != unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()))
		{
			iVar0 = func_235(unk_0x17B5CC8A8615737D());
			if (func_237(iVar0) && (!func_177(14) || Global_100652))
			{
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_237(Global_101700.f_2095.f_539.f_3549))
				{
					Global_101700.f_2095.f_539.f_3550 = Global_101700.f_2095.f_539.f_3549;
				}
				Global_101700.f_2095.f_539.f_3551 = iVar0;
				Global_101700.f_2095.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101700.f_2095.f_539.f_3549 != 145)
			{
				Global_101700.f_2095.f_539.f_3551 = Global_101700.f_2095.f_539.f_3549;
			}
			return;
		}
	}
	Global_101700.f_2095.f_539.f_3549 = 145;
}

struct<2> func_241(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_242(iParam0) };
	if (unk_0x9C88EB7B70229335(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_242(int iParam0)
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

void func_243(int iParam0, int iParam1)
{
	Global_69970 = iParam1;
	if (Global_55816)
	{
		return;
	}
	if (Global_55843)
	{
		Global_55843 = 0;
		return;
	}
	if (unk_0x82F1A060D8F4583B(joaat("mission_stat_watcher")) > 0)
	{
		if (Global_55816)
		{
		}
		Global_55842 = iParam0;
		Global_55816 = 1;
		Global_55827 = 1;
	}
}

void func_244(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 32, 1);
		unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 250, 1);
	}
	unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), true, 0);
	unk_0x000E46314C3A507F(1f);
	unk_0x6751FA44D6CA586D(5);
	unk_0xC8F90C1233866A01(unk_0xBE369BE1BC57A796(), 0);
	unk_0x36D329DB9B841EE5(unk_0xBE369BE1BC57A796(), 1f);
	unk_0x20F3A42843EDE83D(unk_0xBE369BE1BC57A796(), 1f);
	unk_0xE418A8E16B02C0AC(1);
	unk_0x2D28D5B324F77D2D(1);
	unk_0x990821B6B4780D69(0, 0);
	unk_0x8ADF92E4B51709E2(1f);
	func_255();
	func_254(1, 1);
	func_253();
	func_251();
	func_250(30000);
	if (iParam1 == 1)
	{
		func_245(iParam0, iParam2, iParam3);
	}
	unk_0x2A8465C4D16098B7(0, 0);
}

void func_245(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	var uVar32;
	
	if (iParam0 != -1)
	{
		func_247(iParam0, &Var0);
		MemCopy(&uVar32, {func_242(iParam0)}, 4);
		unk_0x7EAB099DE46EBC94(&uVar32, 0, Global_91528, 0);
		func_246(&uVar32, Var0.f_3, Global_91528, iParam1, iParam2);
	}
}

void func_246(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	if (unk_0x9C88EB7B70229335(&Global_88894))
	{
		return;
	}
	if (unk_0x8615D27AA923B8F4(uParam0, &Global_88894, 0, -1) != 0)
	{
		return;
	}
	unk_0xF3081BC2C9027A69(uParam0, uParam1, uParam2, uParam3, uParam4, Global_86001);
	StringCopy(&Global_88894, "", 64);
}

void func_247(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_248(uParam1, "Abigail1", func_241(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_249(iParam0), 1, 0);
			break;
		
		case 1:
			func_248(uParam1, "Abigail2", func_241(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_249(iParam0), 1, 0);
			break;
		
		case 2:
			func_248(uParam1, "Barry1", func_241(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_249(iParam0), 1, 0);
			break;
		
		case 3:
			func_248(uParam1, "Barry2", func_241(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_249(iParam0), 1, 1);
			break;
		
		case 4:
			func_248(uParam1, "Barry3", func_241(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_249(iParam0), 0, 0);
			break;
		
		case 5:
			func_248(uParam1, "Barry3A", func_241(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_249(iParam0), 0, 1);
			break;
		
		case 6:
			func_248(uParam1, "Barry3C", func_241(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_249(iParam0), 0, 1);
			break;
		
		case 7:
			func_248(uParam1, "Barry4", func_241(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_249(iParam0), 0, 0);
			break;
		
		case 8:
			func_248(uParam1, "Dreyfuss1", func_241(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_249(iParam0), 0, 0);
			break;
		
		case 9:
			func_248(uParam1, "Epsilon1", func_241(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_249(iParam0), 0, 0);
			break;
		
		case 10:
			func_248(uParam1, "Epsilon2", func_241(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_249(iParam0), 1, 0);
			break;
		
		case 11:
			func_248(uParam1, "Epsilon3", func_241(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_249(iParam0), 0, 0);
			break;
		
		case 12:
			func_248(uParam1, "Epsilon4", func_241(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_249(iParam0), 0, 0);
			break;
		
		case 13:
			func_248(uParam1, "Epsilon5", func_241(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_249(iParam0), 1, 0);
			break;
		
		case 14:
			func_248(uParam1, "Epsilon6", func_241(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_249(iParam0), 0, 1);
			break;
		
		case 15:
			func_248(uParam1, "Epsilon7", func_241(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_249(iParam0), 0, 0);
			break;
		
		case 16:
			func_248(uParam1, "Epsilon8", func_241(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_249(iParam0), 1, 0);
			break;
		
		case 17:
			func_248(uParam1, "Extreme1", func_241(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_249(iParam0), 0, 1);
			break;
		
		case 18:
			func_248(uParam1, "Extreme2", func_241(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_249(iParam0), 0, 1);
			break;
		
		case 19:
			func_248(uParam1, "Extreme3", func_241(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_249(iParam0), 0, 1);
			break;
		
		case 20:
			func_248(uParam1, "Extreme4", func_241(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_249(iParam0), 0, 0);
			break;
		
		case 21:
			func_248(uParam1, "Fanatic1", func_241(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_249(iParam0), 1, 0);
			break;
		
		case 22:
			func_248(uParam1, "Fanatic2", func_241(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_249(iParam0), 1, 0);
			break;
		
		case 23:
			func_248(uParam1, "Fanatic3", func_241(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_249(iParam0), 0, 1);
			break;
		
		case 24:
			func_248(uParam1, "Hao1", func_241(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_249(iParam0), 0, 1);
			break;
		
		case 25:
			func_248(uParam1, "Hunting1", func_241(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_249(iParam0), 0, 1);
			break;
		
		case 26:
			func_248(uParam1, "Hunting2", func_241(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_249(iParam0), 0, 1);
			break;
		
		case 27:
			func_248(uParam1, "Josh1", func_241(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_249(iParam0), 1, 0);
			break;
		
		case 28:
			func_248(uParam1, "Josh2", func_241(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_249(iParam0), 1, 1);
			break;
		
		case 29:
			func_248(uParam1, "Josh3", func_241(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_249(iParam0), 1, 1);
			break;
		
		case 30:
			func_248(uParam1, "Josh4", func_241(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_249(iParam0), 1, 0);
			break;
		
		case 31:
			func_248(uParam1, "Maude1", func_241(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_249(iParam0), 0, 1);
			break;
		
		case 32:
			func_248(uParam1, "Minute1", func_241(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_249(iParam0), 0, 1);
			break;
		
		case 33:
			func_248(uParam1, "Minute2", func_241(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_249(iParam0), 0, 1);
			break;
		
		case 34:
			func_248(uParam1, "Minute3", func_241(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_249(iParam0), 0, 1);
			break;
		
		case 35:
			func_248(uParam1, "MrsPhilips1", func_241(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_249(iParam0), 0, 0);
			break;
		
		case 36:
			func_248(uParam1, "MrsPhilips2", func_241(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_249(iParam0), 0, 0);
			break;
		
		case 37:
			func_248(uParam1, "Nigel1", func_241(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_249(iParam0), 1, 0);
			break;
		
		case 38:
			func_248(uParam1, "Nigel1A", func_241(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_249(iParam0), 1, 1);
			break;
		
		case 39:
			func_248(uParam1, "Nigel1B", func_241(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_249(iParam0), 1, 1);
			break;
		
		case 40:
			func_248(uParam1, "Nigel1C", func_241(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_249(iParam0), 1, 1);
			break;
		
		case 41:
			func_248(uParam1, "Nigel1D", func_241(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_249(iParam0), 1, 1);
			break;
		
		case 42:
			func_248(uParam1, "Nigel2", func_241(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_249(iParam0), 1, 1);
			break;
		
		case 43:
			func_248(uParam1, "Nigel3", func_241(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_249(iParam0), 1, 1);
			break;
		
		case 44:
			func_248(uParam1, "Omega1", func_241(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_249(iParam0), 0, 0);
			break;
		
		case 45:
			func_248(uParam1, "Omega2", func_241(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_249(iParam0), 0, 0);
			break;
		
		case 46:
			func_248(uParam1, "Paparazzo1", func_241(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_249(iParam0), 0, 1);
			break;
		
		case 47:
			func_248(uParam1, "Paparazzo2", func_241(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_249(iParam0), 0, 1);
			break;
		
		case 48:
			func_248(uParam1, "Paparazzo3", func_241(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_249(iParam0), 0, 0);
			break;
		
		case 49:
			func_248(uParam1, "Paparazzo3A", func_241(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_249(iParam0), 0, 1);
			break;
		
		case 50:
			func_248(uParam1, "Paparazzo3B", func_241(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_249(iParam0), 0, 1);
			break;
		
		case 51:
			func_248(uParam1, "Paparazzo4", func_241(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_249(iParam0), 0, 0);
			break;
		
		case 52:
			func_248(uParam1, "Rampage1", func_241(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_249(iParam0), 0, 0);
			break;
		
		case 54:
			func_248(uParam1, "Rampage3", func_241(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_249(iParam0), 1, 0);
			break;
		
		case 55:
			func_248(uParam1, "Rampage4", func_241(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_249(iParam0), 1, 0);
			break;
		
		case 56:
			func_248(uParam1, "Rampage5", func_241(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_249(iParam0), 0, 0);
			break;
		
		case 53:
			func_248(uParam1, "Rampage2", func_241(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_249(iParam0), 1, 0);
			break;
		
		case 57:
			func_248(uParam1, "TheLastOne", func_241(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_249(iParam0), 0, 1);
			break;
		
		case 58:
			func_248(uParam1, "Tonya1", func_241(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_249(iParam0), 0, 1);
			break;
		
		case 59:
			func_248(uParam1, "Tonya2", func_241(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_249(iParam0), 0, 1);
			break;
		
		case 60:
			func_248(uParam1, "Tonya3", func_241(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_249(iParam0), 0, 1);
			break;
		
		case 61:
			func_248(uParam1, "Tonya4", func_241(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_249(iParam0), 0, 1);
			break;
		
		case 62:
			func_248(uParam1, "Tonya5", func_241(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_249(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_248(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_249(int iParam0)
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

void func_250(int iParam0)
{
	Global_36332 = (unk_0x94E3E074F38DF86C() + iParam0);
}

void func_251()
{
	if (Global_89136)
	{
		func_240();
		unk_0xBF604BE03FE409A9(func_252(Global_101700.f_2095.f_539.f_3549));
	}
	else
	{
		unk_0xBF604BE03FE409A9("");
	}
}

char* func_252(var uParam0)
{
	uParam0 = uParam0;
	return "";
}

void func_253()
{
	char cVar0[24];
	
	if (unk_0xB15049400DCD8DC9() || unk_0x8EA3D5407E9F4AF0())
	{
		unk_0x21E9CCAA51709FD0(StackVal, 0, 0, 0);
	}
	else if (unk_0xF20D8448F6AFC86C() || unk_0x7C2F31E78C33DE0F())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		unk_0xCDDCD2630EF7A698(0, &cVar0);
	}
}

void func_254(int iParam0, int iParam1)
{
	Global_89131 = iParam0;
	Global_89132 = iParam1;
}

void func_255()
{
	if (Global_69956 != 6)
	{
	}
	if (Global_69961)
	{
		unk_0x81118A143DD8B493(15);
		Global_69961 = 0;
		Global_17290.f_7899 = 0;
	}
	Global_69956 = 6;
	Global_69958 = -1;
	Global_69957 = -1;
}

void func_256(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_35743)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_35742 = 0;
	Global_35744 = 0;
	Global_35781 = 15;
	Global_55819 = 0;
	Global_55820 = 0;
}

void func_257(int iParam0, bool bParam1)
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
	
	func_247(iParam0, &Var0);
	if (!unk_0x6A7B0D91FD88D9EE(&(Var0.f_16), ""))
	{
		while (!func_285(&(Var0.f_16)))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (Var0.f_22 != 0)
	{
		func_284(Var0.f_22, 0);
	}
	func_275(iParam0, Global_69971);
	if (!bParam1)
	{
		iVar32 = func_274(iParam0);
		if (iVar32 != 0)
		{
			if (!unk_0x6AC50891F506AFDE(iVar32))
			{
				unk_0x92C7309E11785E72(iVar32);
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
					func_247(iVar67, &Var35);
					if (Var35.f_5 == Var0.f_5)
					{
						if (!unk_0x48B8265059381CD0(Global_101700.f_17533[iVar67 /*6*/], 3))
						{
							bVar33 = false;
						}
						if (!unk_0x48B8265059381CD0(Global_101700.f_17533[iVar67 /*6*/], 0))
						{
							func_262(iVar67);
						}
					}
				}
				iVar34++;
			}
		}
		if (bVar33)
		{
			func_262(Var0.f_24);
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
				func_247(iVar101, &Var69);
				if (Var69.f_5 == Var0.f_25)
				{
					func_262(iVar101);
				}
			}
			iVar68++;
		}
	}
	if (!unk_0x48B8265059381CD0(Global_101700.f_17533[iParam0 /*6*/], 3))
	{
		unk_0xEB79FECD9022AAF0(&(Global_101700.f_17533[iParam0 /*6*/]), 3);
		Global_100787[iParam0 /*10*/].f_5 = 1;
		func_259(iParam0);
		iVar102 = func_258(iParam0);
		if (iVar102 != 322)
		{
			func_98(iVar102, 0, 0);
		}
	}
}

int func_258(int iParam0)
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

void func_259(int iParam0)
{
	func_261(iParam0, 1);
	Global_101700.f_17533[iParam0 /*6*/].f_3 = func_260();
	Global_101700.f_17533.f_380++;
}

int func_260()
{
	return (Global_101700.f_8975.f_21 + Global_101700.f_17533.f_380);
}

void func_261(var uParam0, bool bParam1)
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
		Global_101700.f_19523.f_472 = iVar0;
	}
}

void func_262(int iParam0)
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return;
	}
	func_263(iParam0);
	unk_0xEB79FECD9022AAF0(&(Global_101700.f_17533[iParam0 /*6*/]), 0);
}

void func_263(int iParam0)
{
	switch (iParam0)
	{
		case 30:
			func_267(22, 1, 0, 1, 0);
			break;
		
		case 15:
			func_264(37, 0);
			break;
		
		default:
			break;
	}
}

void func_264(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_266(iParam0, 0))
		{
			func_265(iParam0, 1, 0);
			func_265(iParam0, 2, 0);
			func_265(iParam0, 3, 0);
			func_265(iParam0, 4, 0);
			func_265(iParam0, 0, 1);
			Global_68531[iParam0] = 1;
		}
	}
	else
	{
		func_265(iParam0, 0, 0);
	}
}

void func_265(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xEB79FECD9022AAF0(&(Global_101700.f_31389[iParam0]), iParam1);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&(Global_101700.f_31389[iParam0]), iParam1);
	}
}

bool func_266(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x48B8265059381CD0(Global_101700.f_31389[iParam0], iParam1);
}

void func_267(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam0 != 198)
	{
		if (Global_69702)
		{
			Global_2433125.f_74.f_227[iParam0] = iParam1;
		}
		else
		{
			Global_101700.f_6220.f_227[iParam0] = iParam1;
		}
		Global_32749[iParam0] = iParam2;
		Global_32948[iParam0] = 1;
		func_270(iParam0, bParam3, iParam4, 0);
		func_268(iParam0, iParam1);
	}
}

void func_268(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
			{
				unk_0x911A2E2113B99B78("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
			}
			else
			{
				unk_0x911A2E2113B99B78("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
			}
			break;
		
		case 71:
			if (iParam1 != 1)
			{
				unk_0xD68AE97C94873C2B("HEIST_SWEATSHOP_ZONES", 0, 0);
			}
			else
			{
				unk_0xD68AE97C94873C2B("HEIST_SWEATSHOP_ZONES", 1, 0);
			}
			break;
		
		case 65:
			if (iParam1 == 1)
			{
				func_269(0, 0);
			}
			else
			{
				func_269(0, 1);
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				unk_0x911A2E2113B99B78("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
			}
			else
			{
				unk_0x911A2E2113B99B78("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
			}
			break;
		
		case 174:
			if (iParam1 == 2)
			{
				unk_0xB1F3FFD33B3C25FD("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				unk_0x396A8DEFD6DBA5FC("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
				unk_0x396A8DEFD6DBA5FC("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
				unk_0x396A8DEFD6DBA5FC("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
				unk_0x396A8DEFD6DBA5FC("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
			}
			break;
	}
}

void func_269(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xEB79FECD9022AAF0(&Global_100340, iParam0);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&Global_100340, iParam0);
	}
	Global_100339 = 1;
}

bool func_270(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
	func_273(&Var3, iParam0);
	if (func_271())
	{
		iVar1 = Global_101700.f_6220.f_227[iParam0];
	}
	else
	{
		iVar1 = Global_2433125.f_74.f_227[iParam0];
	}
	iVar2 = Global_33147[iParam0];
	if (unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()) && !bParam3)
	{
	}
	else
	{
		bVar99 = true;
		if (unk_0x765F5B806B517045(unk_0x6AF6B39BFDB53CB5()) != unk_0x765F5B806B517045("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_32749[iParam0] && unk_0x3DC4639D5F23DEA2(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0), Var3, 1) < 200f)
				{
					bVar99 = false;
				}
				if (!unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()) || unk_0x8ABAB1F335EBFAC2(unk_0x17B5CC8A8615737D()))
				{
					if (!unk_0x25BD4C26D84038CD())
					{
						bVar99 = false;
					}
				}
			}
		}
		if (unk_0xE41614517B6436B2() && (!unk_0xE9E6B5364105A000() || unk_0x4DA93F059B47A9FA() != 5))
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
							unk_0x55718AC3667F2A7D(Var3, 10f, Var3.f_4[iVar1], 0);
						}
						if (Var3.f_4[iVar2] != 0)
						{
							unk_0xB30185B1BE926A58(Var3, 10f, Var3.f_4[iVar2], 1);
						}
						Global_34343[iParam0] = 1;
					}
					bVar0 = true;
					break;
				
				case 1:
					if (iVar1 == 0)
					{
						if (unk_0x765F5B806B517045(&(Var3.f_8[1 /*8*/])) != unk_0x765F5B806B517045("") && unk_0x765F5B806B517045(&(Var3.f_8[1 /*8*/])) != unk_0x765F5B806B517045(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x4C30048D7CAD04A5(&(Var3.f_8[1 /*8*/])))
							{
								unk_0xE6A366D0E2B7DE39(&(Var3.f_8[1 /*8*/]));
							}
						}
						if ((unk_0x765F5B806B517045(&(Var3.f_8[2 /*8*/])) != unk_0x765F5B806B517045("") && unk_0x765F5B806B517045(&(Var3.f_8[2 /*8*/])) != unk_0x765F5B806B517045("REMOVE_ALL_STATES")) && unk_0x765F5B806B517045(&(Var3.f_8[2 /*8*/])) != unk_0x765F5B806B517045(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x4C30048D7CAD04A5(&(Var3.f_8[2 /*8*/])))
							{
								unk_0xE6A366D0E2B7DE39(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (unk_0x765F5B806B517045(&(Var3.f_8[0 /*8*/])) != unk_0x765F5B806B517045(""))
						{
							if (!unk_0x4C30048D7CAD04A5(&(Var3.f_8[0 /*8*/])))
							{
								unk_0x059B8D797D20327B(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (unk_0x765F5B806B517045(&(Var3.f_34)) != unk_0x765F5B806B517045(""))
						{
							if (!unk_0x4C30048D7CAD04A5(&(Var3.f_34)))
							{
								unk_0x059B8D797D20327B(&(Var3.f_34));
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (unk_0x765F5B806B517045(&(Var3.f_34)) != unk_0x765F5B806B517045(""))
						{
							if (unk_0x4C30048D7CAD04A5(&(Var3.f_34)))
							{
								unk_0xE6A366D0E2B7DE39(&(Var3.f_34));
							}
						}
						if (unk_0x765F5B806B517045(&(Var3.f_8[0 /*8*/])) != unk_0x765F5B806B517045("") && unk_0x765F5B806B517045(&(Var3.f_8[0 /*8*/])) != unk_0x765F5B806B517045(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x4C30048D7CAD04A5(&(Var3.f_8[0 /*8*/])))
							{
								unk_0xE6A366D0E2B7DE39(&(Var3.f_8[0 /*8*/]));
							}
						}
						if ((unk_0x765F5B806B517045(&(Var3.f_8[2 /*8*/])) != unk_0x765F5B806B517045("") && unk_0x765F5B806B517045(&(Var3.f_8[2 /*8*/])) != unk_0x765F5B806B517045("REMOVE_ALL_STATES")) && unk_0x765F5B806B517045(&(Var3.f_8[2 /*8*/])) != unk_0x765F5B806B517045(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x4C30048D7CAD04A5(&(Var3.f_8[2 /*8*/])))
							{
								unk_0xE6A366D0E2B7DE39(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (unk_0x765F5B806B517045(&(Var3.f_8[1 /*8*/])) != unk_0x765F5B806B517045(""))
						{
							if (!unk_0x4C30048D7CAD04A5(&(Var3.f_8[1 /*8*/])))
							{
								unk_0x059B8D797D20327B(&(Var3.f_8[1 /*8*/]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (unk_0x765F5B806B517045(&(Var3.f_34)) != unk_0x765F5B806B517045(""))
						{
							if (unk_0x4C30048D7CAD04A5(&(Var3.f_34)))
							{
								unk_0xE6A366D0E2B7DE39(&(Var3.f_34));
							}
						}
						if (unk_0x765F5B806B517045(&(Var3.f_8[0 /*8*/])) != unk_0x765F5B806B517045("") && unk_0x765F5B806B517045(&(Var3.f_8[0 /*8*/])) != unk_0x765F5B806B517045(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x4C30048D7CAD04A5(&(Var3.f_8[0 /*8*/])))
							{
								unk_0xE6A366D0E2B7DE39(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (unk_0x765F5B806B517045(&(Var3.f_8[1 /*8*/])) != unk_0x765F5B806B517045("") && unk_0x765F5B806B517045(&(Var3.f_8[1 /*8*/])) != unk_0x765F5B806B517045(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (unk_0x4C30048D7CAD04A5(&(Var3.f_8[1 /*8*/])))
							{
								unk_0xE6A366D0E2B7DE39(&(Var3.f_8[1 /*8*/]));
							}
						}
						if (unk_0x765F5B806B517045(&(Var3.f_8[2 /*8*/])) != unk_0x765F5B806B517045("") && unk_0x765F5B806B517045(&(Var3.f_8[2 /*8*/])) != unk_0x765F5B806B517045("REMOVE_ALL_STATES"))
						{
							if (!unk_0x4C30048D7CAD04A5(&(Var3.f_8[2 /*8*/])))
							{
								unk_0x059B8D797D20327B(&(Var3.f_8[2 /*8*/]));
							}
						}
					}
					Global_34144[iParam0] = 1;
					Global_34343[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 2:
					iVar100 = unk_0xCA0D2B42E97CB506(Var3, &(Var3.f_42));
					if (iVar100 != 0)
					{
						if (unk_0x765F5B806B517045(&(Var3.f_50)) != unk_0x765F5B806B517045(""))
						{
							if (unk_0xE3C122250634A582(iVar100, &(Var3.f_50)))
							{
								unk_0x9AEED011E34D9C65(iVar100, &(Var3.f_50));
							}
						}
						if (iVar1 == 0)
						{
							if (unk_0x765F5B806B517045(&(Var3.f_8[1 /*8*/])) != unk_0x765F5B806B517045(""))
							{
								if (unk_0xE3C122250634A582(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x9AEED011E34D9C65(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
							if ((unk_0x765F5B806B517045(&(Var3.f_8[2 /*8*/])) != unk_0x765F5B806B517045("") && unk_0x765F5B806B517045(&(Var3.f_8[2 /*8*/])) != unk_0x765F5B806B517045("REMOVE_ALL_STATES")) && unk_0x765F5B806B517045(&(Var3.f_8[2 /*8*/])) != unk_0x765F5B806B517045(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0xE3C122250634A582(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x9AEED011E34D9C65(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0x765F5B806B517045(&(Var3.f_8[0 /*8*/])) != unk_0x765F5B806B517045(""))
							{
								if (!unk_0xE3C122250634A582(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x874DE19CF8659CF5(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (unk_0x765F5B806B517045(&(Var3.f_8[0 /*8*/])) != unk_0x765F5B806B517045(""))
							{
								if (unk_0xE3C122250634A582(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x9AEED011E34D9C65(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
							if ((unk_0x765F5B806B517045(&(Var3.f_8[2 /*8*/])) != unk_0x765F5B806B517045("") && unk_0x765F5B806B517045(&(Var3.f_8[2 /*8*/])) != unk_0x765F5B806B517045("REMOVE_ALL_STATES")) && unk_0x765F5B806B517045(&(Var3.f_8[2 /*8*/])) != unk_0x765F5B806B517045(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (unk_0xE3C122250634A582(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x9AEED011E34D9C65(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (unk_0x765F5B806B517045(&(Var3.f_8[1 /*8*/])) != unk_0x765F5B806B517045(""))
							{
								if (!unk_0xE3C122250634A582(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x874DE19CF8659CF5(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (unk_0x765F5B806B517045(&(Var3.f_8[0 /*8*/])) != unk_0x765F5B806B517045(""))
							{
								if (unk_0xE3C122250634A582(iVar100, &(Var3.f_8[0 /*8*/])))
								{
									unk_0x9AEED011E34D9C65(iVar100, &(Var3.f_8[0 /*8*/]));
								}
							}
							if (unk_0x765F5B806B517045(&(Var3.f_8[1 /*8*/])) != unk_0x765F5B806B517045(""))
							{
								if (unk_0xE3C122250634A582(iVar100, &(Var3.f_8[1 /*8*/])))
								{
									unk_0x9AEED011E34D9C65(iVar100, &(Var3.f_8[1 /*8*/]));
								}
							}
							if (unk_0x765F5B806B517045(&(Var3.f_8[2 /*8*/])) != unk_0x765F5B806B517045("") && unk_0x765F5B806B517045(&(Var3.f_8[2 /*8*/])) != unk_0x765F5B806B517045("REMOVE_ALL_STATES"))
							{
								if (!unk_0xE3C122250634A582(iVar100, &(Var3.f_8[2 /*8*/])))
								{
									unk_0x874DE19CF8659CF5(iVar100, &(Var3.f_8[2 /*8*/]));
								}
							}
						}
						if (bParam1)
						{
							unk_0xCA6CBCAD7B35C261(iVar100);
						}
					}
					Global_34343[iParam0] = 1;
					Global_34144[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 3:
					if (unk_0x3DC4639D5F23DEA2(Var3, unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 0), 1) < 250f)
					{
						uVar98 = unk_0x0CE2297975A4AE38(Var3, 25f, &(Var3.f_8[0 /*8*/]));
						if (unk_0xF1DEF26108040848(uVar98))
						{
							if (iVar1 == 0)
							{
								unk_0x08B6ECD80C6BD224(uVar98, 3);
								Global_34343[iParam0] = 1;
								bVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((unk_0x46995C6DD9E9DF8F(uVar98) != 6 && unk_0x46995C6DD9E9DF8F(uVar98) != 7) && unk_0x46995C6DD9E9DF8F(uVar98) != 8)
								{
									unk_0x08B6ECD80C6BD224(uVar98, 10);
									Global_34343[iParam0] = 1;
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
						unk_0xBFB926900526C8A5(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
						unk_0x21E7933CCC7B3724(&(Global_32495[(iParam0 / 32)]), (iParam0 % 32));
					}
					else if (iVar1 == 1)
					{
						unk_0x95D497EEDCDA9DD1(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
						unk_0xEB79FECD9022AAF0(&(Global_32495[(iParam0 / 32)]), (iParam0 % 32));
					}
					bVar0 = true;
					break;
			}
			if (bVar0)
			{
				Global_32948[iParam0] = 0;
				Global_33147[iParam0] = iVar1;
				if (!func_271())
				{
					if (!Global_33744[iParam0])
					{
						Global_33744[iParam0] = 1;
						Global_33943++;
					}
				}
			}
		}
	}
	return bVar0;
}

int func_271()
{
	if ((func_74() == -1 || func_74() == 999) && !func_272() == 0)
	{
		return 1;
	}
	return 0;
}

int func_272()
{
	return Global_25191;
}

int func_273(var uParam0, int iParam1)
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

int func_274(int iParam0)
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
			if (unk_0x48B8265059381CD0(Global_101700.f_17533.f_382, 0))
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
			if (Global_101700.f_8044.f_99.f_58[101])
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

void func_275(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 46:
			func_276(4, bParam1);
			break;
		
		case 16:
			func_276(6, bParam1);
			break;
		
		case 37:
			func_276(17, bParam1);
			break;
		
		case 31:
			func_276(16, bParam1);
			break;
	}
}

void func_276(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31)
	{
		if (!func_283(iParam0))
		{
			unk_0xEB79FECD9022AAF0(&(Global_101700.f_25393), iVar0);
			if (!bParam1)
			{
				func_281(func_282(iParam0));
				if (!func_280(68))
				{
					func_277("DI_HLP_STRY", 2, 0, 20000, 10000, 7, 0, 208, 0);
				}
			}
		}
	}
}

void func_277(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_278(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_278(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x6A7B0D91FD88D9EE(sParam0, ""))
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
	while (iVar0 < Global_101700.f_19369.f_145)
	{
		if (unk_0x6A7B0D91FD88D9EE(&(Global_101700.f_19369[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_101700.f_19369.f_145 < 9)
	{
		StringCopy(&(Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_4), sParam1, 16);
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_8 = (unk_0x94E3E074F38DF86C() + iParam3);
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_9 = iParam5;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_11 = iParam6;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_12 = uParam2;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_13 = iParam7;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_14 = iParam8;
		Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_10 = ((unk_0x94E3E074F38DF86C() + iParam3) + iParam4);
		}
		else
		{
			Global_101700.f_19369[Global_101700.f_19369.f_145 /*16*/].f_10 = -1;
		}
		Global_101700.f_19369.f_145++;
		func_279();
	}
}

void func_279()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_101700.f_19369.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101700.f_19369.f_145)
	{
		if (unk_0x48B8265059381CD0(Global_101700.f_19369[iVar0 /*16*/].f_11, 0))
		{
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[0])
			{
				Global_101700.f_19369.f_146[0] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x48B8265059381CD0(Global_101700.f_19369[iVar0 /*16*/].f_11, 1))
		{
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[1])
			{
				Global_101700.f_19369.f_146[1] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x48B8265059381CD0(Global_101700.f_19369[iVar0 /*16*/].f_11, 2))
		{
			if (Global_101700.f_19369[iVar0 /*16*/].f_12 > Global_101700.f_19369.f_146[2])
			{
				Global_101700.f_19369.f_146[2] = Global_101700.f_19369[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_280(int iParam0)
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
		return unk_0x48B8265059381CD0(Global_101700.f_19369.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_281(var uParam0)
{
	unk_0xBD18006F0815A298("");
	unk_0xB49022457D56C68E("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", uParam0);
}

char* func_282(int iParam0)
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

int func_283(int iParam0)
{
	if (iParam0 != -1 && iParam0 != 28)
	{
		return unk_0x48B8265059381CD0(Global_101700.f_25393, iParam0);
	}
	return 0;
}

void func_284(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_101700.f_7572[iParam0] = 1;
	Global_101700.f_7572.f_236[iParam0] = (unk_0x94E3E074F38DF86C() + iParam1);
}

int func_285(char* sParam0)
{
	int iVar0;
	
	iVar0 = 1424;
	if (!unk_0xD5B2C67F250954B4(sParam0))
	{
		return 1;
	}
	if (unk_0x6A7B0D91FD88D9EE(sParam0, "controller_Races"))
	{
		if (unk_0x82F1A060D8F4583B(joaat("controller_races")) > 0)
		{
			return 1;
		}
		iVar0 = 128;
	}
	unk_0xFCDDC89C28E82BB4(sParam0);
	if (unk_0x32B1F051FF487881(sParam0))
	{
		unk_0xE81651AD79516E48(sParam0, iVar0);
		unk_0x07481837BFD9C1CD(sParam0);
		return 1;
	}
	return 0;
}

int func_286()
{
	return func_287(unk_0x6AF6B39BFDB53CB5(), 0);
}

int func_287(char* sParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = unk_0x765F5B806B517045(uParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_247(iVar0, &uVar1);
		if (unk_0x765F5B806B517045(uVar1) == iVar33)
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

bool func_288(int iParam0, int iParam1)
{
	return (unk_0x94E3E074F38DF86C() - iParam0) > iParam1;
}

void func_289()
{
	unk_0x4547FC28D02AD087(0.3f);
	switch (iLocal_3107)
	{
		case 0:
			if (!bLocal_3169)
			{
				if (!func_47())
				{
					unk_0xBA7CD73403732191(0f);
					unk_0x503F20CB07C55470(0f, 1065353216);
				}
				iLocal_3107 = 2;
			}
			else
			{
				unk_0xD1BB2AD73E7FC3A7(0, 75, 1);
				func_44(&cLocal_3544);
				unk_0xF5B59A4EB5622187(1, sLocal_3297);
				func_43();
				if (func_10(Local_3497.f_0))
				{
					unk_0x4C44C1A3160350E2(Local_3497.f_0, 0, 0, 0, 1, 0, 0, 0, 0);
				}
				if ((unk_0x63781672EC63FB83(1, sLocal_3297) && !func_296(&Local_3469)) && !func_296(&Local_3476))
				{
					if (func_36(1, 1093140480, 0))
					{
						unk_0xD9C496FEAA81FF4A(unk_0x17B5CC8A8615737D(), sLocal_3300, 0, 0, 0);
						if (func_10(Local_3476.f_0))
						{
							unk_0xD9C496FEAA81FF4A(Local_3476.f_0, sLocal_3299, 0, 0, 0);
						}
						if (func_10(Local_3469.f_0))
						{
							unk_0xD9C496FEAA81FF4A(Local_3469.f_0, sLocal_3298, 0, 0, 0);
						}
						if (func_10(Local_3483.f_0))
						{
							unk_0xD9C496FEAA81FF4A(Local_3483.f_0, sLocal_3301, 0, 0, 0);
						}
						if (func_10(Local_3490.f_0))
						{
							unk_0xD9C496FEAA81FF4A(Local_3490.f_0, sLocal_3302, 0, 0, 0);
						}
						if (func_10(Local_3497.f_0))
						{
							unk_0xD9C496FEAA81FF4A(Local_3497.f_0, sLocal_3303, 0, 0, 0);
							unk_0x38130BEB2174F958(unk_0x57240623C1BC6E88(Local_3497.f_0, 0), 4f);
						}
						unk_0x46081AAD7F4633BD(1);
						unk_0x51C344BE3DCB5CB5(0);
						unk_0x4EDE34FBADD967A6(0);
						func_21(800, 0);
						unk_0x2A5905FD3A0ED2A0(418.2838f, -571.6629f, 24.69794f, 362.0258f, -663.1398f, 38.33998f, 28f, 0, 0, 0, 1, 1);
						func_292(392.86f, -621.04f, 27.97f, 1, 1, 1, 0, 1, 1, 0, 1, 1, 1);
						func_291(1);
						unk_0x5BD872FA7F0EC076(0f);
						unk_0x4547FC28D02AD087(0.3f);
						iLocal_3107 = 1;
					}
				}
				else
				{
					if (func_13(Local_3490.f_0))
					{
						func_41(Local_3490.f_0, 10.5f, 1, 0f, 0, 1, 0);
					}
					func_5();
					unk_0xD1BB2AD73E7FC3A7(0, 21, 1);
					unk_0xD1BB2AD73E7FC3A7(0, 37, 1);
					unk_0xD1BB2AD73E7FC3A7(0, 25, 1);
					unk_0xD1BB2AD73E7FC3A7(0, 141, 1);
					unk_0xD1BB2AD73E7FC3A7(0, 140, 1);
					unk_0xD1BB2AD73E7FC3A7(0, 24, 1);
					unk_0xD1BB2AD73E7FC3A7(0, 257, 1);
					unk_0xD1BB2AD73E7FC3A7(0, 22, 1);
					unk_0xD1BB2AD73E7FC3A7(0, 23, 1);
				}
			}
			break;
		
		case 1:
			if (unk_0x649012AFAC9B7CD0(sLocal_3300, 0))
			{
				unk_0x2EE4FDDB1E7664FB();
				if (unk_0x8AE74E6771D8FA39() && unk_0x25BD4C26D84038CD())
				{
					unk_0xBA7CD73403732191(0f);
					unk_0x503F20CB07C55470(0f, 1065353216);
				}
				bLocal_3240 = true;
			}
			if ((func_20(Local_3476.f_0) && func_20(Local_3469.f_0)) && func_13(Local_3490.f_0))
			{
				if (unk_0x649012AFAC9B7CD0(sLocal_3299, 0))
				{
					if (!unk_0x7B816C72877502C5(Local_3476.f_0, Local_3490.f_0))
					{
						unk_0xFCB4AA590A0D6A59(Local_3476.f_0, Local_3490.f_0, -1);
					}
					unk_0xCC61640A821F277C(Local_3476.f_0, 1);
				}
				if (unk_0x649012AFAC9B7CD0(sLocal_3298, 0))
				{
					if (!unk_0x7B816C72877502C5(Local_3469.f_0, Local_3490.f_0))
					{
						unk_0xFCB4AA590A0D6A59(Local_3469.f_0, Local_3490.f_0, 0);
					}
					unk_0xCC61640A821F277C(Local_3469.f_0, 1);
					unk_0x650BB0E111420EAF(Local_3469.f_0, 1);
				}
				if (unk_0x649012AFAC9B7CD0(sLocal_3302, 0))
				{
					unk_0x524A422B74847594(Local_3490.f_0, 1, 1, 0);
					unk_0xFAC43F40071FC184(Local_3490.f_0, 17f);
					unk_0x016C65ED12A14D44(Local_3490.f_0, 1);
					if (!unk_0x72222684DEA44B9F(Local_3490.f_0))
					{
						unk_0x76370B982D7FB115(Local_3490.f_0, 1, sLocal_3297, 35f, 786468);
					}
				}
			}
			if (func_20(Local_3483.f_0))
			{
				if (unk_0x649012AFAC9B7CD0(sLocal_3301, 0))
				{
					unk_0x4114B83B329702FF(Local_3483.f_0, 0);
					func_54(&Local_3483, 1);
				}
			}
			if (!bLocal_3240)
			{
				unk_0xBA7CD73403732191(0f);
				unk_0x503F20CB07C55470(0f, 1065353216);
			}
			if (!unk_0x1B76B77EDF24A933())
			{
				iLocal_3107 = 2;
			}
			else
			{
				unk_0x5BD872FA7F0EC076(0f);
				unk_0x4547FC28D02AD087(0.3f);
			}
			break;
		
		case 2:
			if (unk_0x1B76B77EDF24A933())
			{
				unk_0x404A255180289CD1(0);
			}
			else
			{
				if (unk_0x77888DFE5B94E7E5())
				{
					unk_0xB5BD48559882D958();
				}
				if (func_10(Local_3483.f_0))
				{
					unk_0x4114B83B329702FF(Local_3483.f_0, 0);
				}
				func_54(&Local_3483, 1);
				if (func_13(Local_3490.f_0))
				{
					if (func_20(Local_3476.f_0))
					{
						if (!func_40(Local_3476.f_0, -258271821))
						{
							if (unk_0x7B816C72877502C5(Local_3476.f_0, Local_3490.f_0))
							{
								unk_0xCC61640A821F277C(Local_3476.f_0, 1);
							}
						}
					}
					if (func_20(Local_3469.f_0))
					{
						unk_0xCC61640A821F277C(Local_3469.f_0, 1);
						unk_0x650BB0E111420EAF(Local_3469.f_0, 1);
					}
				}
				if (func_10(Local_3497.f_0))
				{
					unk_0x4C44C1A3160350E2(Local_3497.f_0, 0, 0, 0, 0, 0, 0, 0, 0);
				}
				if (bLocal_3169)
				{
					func_23(1, 1, 1, 1);
				}
				iLocal_3260 = unk_0x94E3E074F38DF86C();
				func_290(4);
			}
			break;
	}
}

void func_290(int iParam0)
{
	iLocal_3105 = iParam0;
	iLocal_3107 = 0;
}

void func_291(bool bParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	Var1 = { 341.2f, -645.83f, 25f };
	Var4 = { 429.1f, -572.89f, 35f };
	unk_0xB82FD68B5DE68F01(Var1, Var4, 0, 1);
	unk_0x286691C5D34EF4EC(418.2838f, -571.6629f, 24.69794f, 362.0258f, -663.1398f, 38.33998f, 28f, 0, 0, 1);
	if (bParam0)
	{
		unk_0x862504E4C5E80C78(Var1, Var4, 0);
		unk_0x2A5905FD3A0ED2A0(418.2838f, -571.6629f, 24.69794f, 362.0258f, -663.1398f, 38.33998f, 28f, 0, 0, 0, 0, 0);
	}
	unk_0x176EBAF3DFCF7E54(Var1, Var4, 0, 0);
	unk_0xB57996B091C5D677(Var1, Var4);
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (iVar0 != 1)
		{
			unk_0x571422CE42B47889(uLocal_3290[iVar0], 0);
		}
		iVar0++;
	}
	uLocal_3289 = unk_0xD1D19967E553E144(Var1, Var4, 0, 1, 1, 1);
	if (bParam0)
	{
		unk_0x3FE1DC991D646A3B(395.2476f, -615.0134f, 27.87107f, 20f, 0);
		unk_0x1B60289D0F2A2E3C(395.2476f, -615.0134f, 27.87107f, 20f, 1, 0, 0, 0);
	}
}

void func_292(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)
{
	int iVar0;
	
	iVar0 = unk_0x592069F95C314814();
	if (unk_0xCF7855B965948E97(iVar0))
	{
		func_295(0);
		if (bParam9)
		{
			unk_0x6E56C821FA64C1F3(unk_0x592069F95C314814(), 1);
		}
		if (bParam8)
		{
			switch (func_294())
			{
				case 0:
					if (func_234(unk_0x17B5CC8A8615737D(), 8, 15))
					{
						func_124(unk_0x17B5CC8A8615737D(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (func_234(unk_0x17B5CC8A8615737D(), 9, 6))
					{
						func_124(unk_0x17B5CC8A8615737D(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				
				case 1:
					if (func_234(unk_0x17B5CC8A8615737D(), 8, 1) || func_234(unk_0x17B5CC8A8615737D(), 8, 10))
					{
						func_124(unk_0x17B5CC8A8615737D(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				
				case 2:
					if (func_234(unk_0x17B5CC8A8615737D(), 8, 4))
					{
						func_124(unk_0x17B5CC8A8615737D(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					break;
				}
		}
		if (iParam6 == 1)
		{
			unk_0x26D48449559660BA(func_293(unk_0x592069F95C314814()), 50f, 0);
		}
		if (iParam7 == 1)
		{
			unk_0x3FE1DC991D646A3B(Param0, 30f, 0);
		}
		if (bParam10)
		{
			unk_0x8F088665928570EA(Param0, 30f);
		}
		unk_0x7B408F9F309B3E56(Param0, 30f, 0);
		unk_0x809D9B021F305A70(iVar0, 0, 0);
		unk_0xD189588DEC407D28(iVar0, 0);
		unk_0x8549D98B1C1FCFA7(iVar0, 1);
		if (bParam12)
		{
			unk_0x2D28D5B324F77D2D(0);
			unk_0xE418A8E16B02C0AC(0);
		}
		unk_0xD12BCC85C2F8B1DE();
		if (iParam11 == 1)
		{
			unk_0x2E2945F5602A744F(1);
		}
		if (iParam3 == 1)
		{
			unk_0x990821B6B4780D69(1, 0);
		}
		if (iParam4 == 1)
		{
			iLocal_48 = 0;
			if (func_10(unk_0x17B5CC8A8615737D()))
			{
				iLocal_48 = unk_0x7FE5AAFFD84F38D2(unk_0x17B5CC8A8615737D());
				unk_0x0B25AB3A7FA0683C(unk_0x17B5CC8A8615737D(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1)
		{
			func_21(500, 0);
		}
	}
}

Vector3 func_293(var uParam0)
{
	return unk_0x57240623C1BC6E88(unk_0xDF7CE83326F434E9(uParam0), 0);
}

int func_294()
{
	func_240();
	return Global_101700.f_2095.f_539.f_3549;
}

void func_295(bool bParam0)
{
	int iVar0;
	
	iVar0 = unk_0x592069F95C314814();
	if (!unk_0xCEB2A4290BD633BE(iVar0))
	{
		if (bParam0)
		{
		}
		unk_0xC8C3338D4DBC00FE(iVar0, bParam0, 16);
		unk_0xC8C3338D4DBC00FE(iVar0, bParam0, 32);
	}
	func_24(1, 1, 0, 0);
}

int func_296(int iParam0)
{
	if (func_20(*iParam0))
	{
		if (unk_0x872115A210435770(*iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_297()
{
	unk_0x4547FC28D02AD087(0.3f);
	unk_0xF5B59A4EB5622187(1, sLocal_3297);
	func_366();
	func_365(1090519040);
	switch (iLocal_3107)
	{
		case 0:
			func_362();
			iLocal_3261 = unk_0x94E3E074F38DF86C();
			if (func_20(Local_3483.f_0))
			{
				if (iLocal_3205)
				{
					func_341(&uLocal_20, Local_3483.f_0, 0, 0, 1, 1, 1);
				}
			}
			iLocal_3107 = 1;
			break;
		
		case 1:
			if (func_20(Local_3483.f_0))
			{
				if (iLocal_3205)
				{
					func_341(&uLocal_20, Local_3483.f_0, 0, 0, 1, 1, 1);
				}
				if (unk_0x23E9113C762466ED(Local_3497.f_0))
				{
					fLocal_3265 = unk_0x2A488C176D52CCA5(Local_3556, unk_0x57240623C1BC6E88(Local_3497.f_0, 0));
				}
				if ((func_13(Local_3490.f_0) && func_20(Local_3476.f_0)) && func_20(Local_3469.f_0))
				{
					if (unk_0x7B816C72877502C5(unk_0x17B5CC8A8615737D(), Local_3490.f_0))
					{
						if (func_340("NIGEL2_04", 0, 0))
						{
							unk_0x69E47427C5084888("NIGEL2_04");
						}
						iLocal_3207 = 0;
						func_93(&(Local_3490.f_2));
						func_334(&iLocal_3242);
						if (!unk_0xA3794949321E107C(Local_3483.f_2))
						{
							Local_3483.f_2 = func_333(Local_3483.f_0, 1, 0, 5);
						}
						else
						{
							if (unk_0xFD0FE723227D5AB6(Local_3483.f_0, 0))
							{
								unk_0x00EA14207118EEE2(Local_3483.f_2, 1f);
							}
							func_332(Local_3483.f_2, Local_3483.f_0, 200f, 0.7f, iLocal_3242);
						}
						if (unk_0x70A9F320A34FAC28(Local_3490.f_0, 381.9156f, -628.1014f, 22.93229f, 394.4772f, -606.127f, 35.77483f, 18.5f, 0, 1, 0))
						{
							if (func_331(&Local_3490))
							{
								if (func_288(iLocal_3261, 500))
								{
									iLocal_3107 = 2;
								}
							}
							else
							{
								iLocal_3261 = unk_0x94E3E074F38DF86C();
							}
						}
						else
						{
							iLocal_3261 = unk_0x94E3E074F38DF86C();
						}
					}
					else
					{
						func_93(&(Local_3483.f_2));
						if (!unk_0xA3794949321E107C(Local_3490.f_2))
						{
							Local_3490.f_2 = func_330(Local_3490.f_0, 1, 7);
						}
						if (!iLocal_3207)
						{
							if (func_38())
							{
								func_328();
							}
							iLocal_3207 = 1;
						}
						if (!iLocal_3202)
						{
							func_327("NIGEL2_04", 7500, 1);
							iLocal_3251 = unk_0x94E3E074F38DF86C();
							iLocal_3202 = 1;
						}
						else if (!func_38())
						{
							if (fLocal_3267 < 20f)
							{
								if (unk_0x94E3E074F38DF86C() - iLocal_3251) > unk_0x0E29C61F26D96FDB(4500, 6500)
								{
									if (!unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), Local_3490.f_0, 0))
									{
										if (unk_0x0E29C61F26D96FDB(0, 11) > 5)
										{
											if (func_317(&uLocal_3304, "NIG2AUD", "NIG2_GIC", 8, 0, 0, 0))
											{
											}
										}
										else if (func_317(&uLocal_3304, "NIG2AUD", "NIG2_GIC2", 8, 0, 0, 0))
										{
										}
									}
								}
							}
						}
						else
						{
							iLocal_3251 = unk_0x94E3E074F38DF86C();
						}
						func_316();
						iLocal_3261 = unk_0x94E3E074F38DF86C();
					}
				}
				func_315();
			}
			func_362();
			func_304();
			break;
		
		case 2:
			func_93(&(Local_3490.f_2));
			func_93(&(Local_3483.f_2));
			unk_0xD12BCC85C2F8B1DE();
			unk_0x2E2945F5602A744F(1);
			func_302(&uLocal_20, 0, 0);
			if (func_38())
			{
				func_300();
			}
			if (!iLocal_3205)
			{
				func_299(0);
				unk_0x2EE4FDDB1E7664FB();
				iLocal_3205 = 1;
			}
			if (unk_0x97F2912BC85D905D(uLocal_3283))
			{
				unk_0x0A977DD607DA1424(uLocal_3283, 0);
			}
			iLocal_3543 = 2;
			func_53(&Local_3274);
			unk_0x7D861B56FA788D3F();
			if (!func_47() && bLocal_3169)
			{
				func_34("NIGEL2_STOP", 0);
			}
			func_298(3);
			func_290(3);
			break;
	}
}

void func_298(int iParam0)
{
	if (!func_47() && bLocal_3169)
	{
		if (iParam0 == iLocal_3255)
		{
			switch (iLocal_3255)
			{
				case 0:
					if (func_34("NIGEL2_START", 0))
					{
						iLocal_3255++;
					}
					break;
				
				case 1:
					if (func_34("NIGEL2_CAR", 0))
					{
						unk_0x5823F1F25CE33C5D("NIGEL2_JUMP");
						iLocal_3255++;
					}
					break;
				
				case 2:
					if (func_34("NIGEL2_JUMP", 1))
					{
						iLocal_3255++;
					}
					break;
				
				case 3:
					if (func_34("NIGEL2_STOP", 0))
					{
						iLocal_3255++;
					}
					break;
				
				default:
					break;
				}
			}
	}
}

void func_299(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0x0F1BF24ED3B7ED40(uLocal_3245))
		{
			uLocal_3245 = unk_0xBD7A488D61CE4287("DEFAULT_SCRIPTED_CAMERA", 1);
		}
		if (unk_0x0F1BF24ED3B7ED40(uLocal_3245))
		{
			unk_0x9274EF97A90581BE(1, 0, 3000, 1, 0, 0);
			unk_0x451B3BE1DE87C4F5(uLocal_3245, Local_3559);
			unk_0x4BF6276065449F9C(uLocal_3245, 14f);
			unk_0x38FEEA0E556305D7(uLocal_3245, Local_3490.f_0, Local_3562, 1);
			unk_0x2156AF318C71023B("NIGEL_02_SLOWMO_SETTING");
		}
	}
	else
	{
		unk_0x011AE968D1EA959B(0);
		if (unk_0x0F1BF24ED3B7ED40(uLocal_3245))
		{
			if (unk_0xA6312B4FE4134130(uLocal_3245))
			{
				unk_0xBA7CD73403732191(0);
				unk_0x503F20CB07C55470(0, 1065353216);
				unk_0xA652CA24468EC747(uLocal_3245, 0);
			}
			unk_0x2BC4A4AFFC2D937D(uLocal_3245, 0);
		}
		unk_0x9274EF97A90581BE(0, 0, 3000, 1, 0, 0);
		unk_0x8ADF92E4B51709E2(1f);
		unk_0x80D24361A541257A("NIGEL_02_SLOWMO_SETTING");
		bLocal_3206 = true;
	}
}

void func_300()
{
	Global_14611 = 0;
	func_301();
}

void func_301()
{
	if (unk_0x55C74612BE548D78())
	{
		unk_0x5FB0B609B3A49840();
		Global_16756 = 0;
		unk_0x660E8E7836E95077(1);
		Global_15745 = 6;
		return;
	}
}

void func_302(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x63C468D583002D23())
	{
		if (unk_0x48B8265059381CD0(Global_2494199.f_4449, 26))
		{
			return;
		}
	}
	if (unk_0xAB01297DD4A8577F())
	{
		unk_0x72B6EAB729050F5B(iParam2);
		unk_0x8BBC558C75738A6D("FocusIn");
		unk_0xB8CAC5F3774894A1("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x9AF1ABF0E97411BF("FocusOut", 0, 0);
			unk_0x4988C48537D1AE4F(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x73624B45C8E405BA(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xD3115E7F7876D6E6(sVar0))
	{
		if (!unk_0x63C468D583002D23())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xD3115E7F7876D6E6(uParam0->f_3))
	{
		if (func_303(uParam0->f_3))
		{
			unk_0x2E2945F5602A744F(1);
		}
	}
	if (!unk_0xD3115E7F7876D6E6(sVar0))
	{
		if (func_303(sVar0))
		{
			unk_0x2E2945F5602A744F(1);
		}
	}
}

bool func_303(char* sParam0)
{
	unk_0x1B345BEADF0C82A0(sParam0);
	return unk_0xCF2B4FB18449D099(0);
}

void func_304()
{
	if (!iLocal_3239)
	{
		if (func_314(Local_3556, 307.3065f, -589.9595f, 42.302f, 200f))
		{
			if (func_306())
			{
				func_305(794);
				iLocal_3239 = 1;
			}
		}
	}
}

void func_305(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_55823 = 0;
	if (!Global_56047[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_67917)
	{
		if (Global_67918[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_67918[iVar1 /*9*/].f_1 = 1;
			Global_67918[iVar1 /*9*/].f_2 = 0f;
			if (Global_67918[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

int func_306()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	iVar0 = 0;
	if (func_313())
	{
		iVar2 = func_312();
		if (iVar2 != 0)
		{
			bVar3 = false;
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				iVar1 = unk_0xB80CAAF3D65FBC1F(func_311(iVar0));
				if (unk_0x23E9113C762466ED(iVar1))
				{
					if (func_310(unk_0x57240623C1BC6E88(iVar1, 0)))
					{
						if (unk_0xC017443DBE6DA4D6(iVar1, unk_0x17B5CC8A8615737D(), 1))
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
	if (func_309())
	{
		iVar4 = func_308();
		if (iVar4 != 0)
		{
			bVar5 = false;
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < iVar4)
			{
				iVar1 = unk_0xB80CAAF3D65FBC1F(func_307(iVar0));
				if (unk_0x23E9113C762466ED(iVar1))
				{
					if (func_310(unk_0x57240623C1BC6E88(iVar1, 0)))
					{
						if (unk_0xC017443DBE6DA4D6(iVar1, unk_0x17B5CC8A8615737D(), 1))
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

var func_307(int iParam0)
{
	return Global_48073.f_25[iParam0];
}

var func_308()
{
	return Global_48073.f_24;
}

bool func_309()
{
	return Global_48073.f_24 > 0;
}

int func_310(struct<3> Param0)
{
	int iVar0;
	
	if (!unk_0x623BDE1B17A9D9E3(iLocal_3262))
	{
		return 0;
	}
	if (!unk_0xB0A41EC77A49B189(Param0))
	{
		iVar0 = unk_0x26CBF9EAAC681B92(Param0);
		if (iVar0 == iLocal_3262)
		{
			return 1;
		}
	}
	return 0;
}

var func_311(int iParam0)
{
	return Global_48073.f_37[iParam0];
}

var func_312()
{
	return Global_48073.f_36;
}

bool func_313()
{
	return Global_48073.f_36 > 0;
}

bool func_314(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return unk_0xB7A628320EFF8E47(Param0, Param3) <= (fParam6 * fParam6);
}

void func_315()
{
	float fVar0;
	
	fVar0 = 100f;
	if (iLocal_3237)
	{
		if (fLocal_3265 > fVar0)
		{
			func_305(793);
			iLocal_3237 = 0;
		}
	}
}

void func_316()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
	{
		iVar0 = unk_0xF566689615D97192(unk_0x17B5CC8A8615737D());
		if (unk_0x45CD66F0A131E554(iVar0, 0))
		{
			iVar1 = unk_0x17206B315923243C(iVar0, 0, 0);
			if (!unk_0xCA41A00932714525(iVar1))
			{
				if (iVar1 != unk_0x17B5CC8A8615737D())
				{
					if (unk_0xC26429B504BA534D(iVar1))
					{
						if (!unk_0x3D6623406E6D16C8(iVar1, unk_0x17B5CC8A8615737D()))
						{
							unk_0x4718A774D9248520(iVar1, unk_0x17B5CC8A8615737D(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

int func_317(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam4 == 0)
	{
		if (unk_0x75342B3CD0FB5275())
		{
			if (unk_0xBE675F7A607B46B0(203) != 0)
			{
				return 0;
			}
		}
	}
	if (func_318(uParam0, sParam1, sParam2, iParam3, iParam4, iParam5, iParam6))
	{
		return 1;
	}
	return 0;
}

bool func_318(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_326(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
	return func_319(sParam2, iParam3, 0);
}

int func_319(char* sParam0, int iParam1, bool bParam2)
{
	Global_15746 = 0;
	if (Global_15745 == 0 || Global_15747 == 2)
	{
		if (Global_15745 != 0)
		{
			if (iParam1 > Global_15747)
			{
				if (Global_15752 == 0)
				{
					unk_0x660E8E7836E95077(0);
					Global_14443.f_1 = 3;
					Global_15745 = 0;
					Global_15746 = 1;
					Global_15798 = 0;
					Global_15741 = 0;
					Global_15742 = 0;
					Global_15756 = 0;
					Global_15755 = 0;
					Global_14442 = 0;
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
		if (unk_0x55C74612BE548D78())
		{
			return 0;
		}
		if (func_325(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_324();
		Global_15034 = { Global_15199 };
		Global_15751 = Global_15752;
		Global_15758 = Global_15759;
		Global_2621442 = Global_2621441;
		Global_15760 = { Global_15776 };
		Global_15753 = Global_15754;
		Global_16735 = Global_16736;
		Global_16743 = { Global_16749 };
		Global_16737 = Global_16738;
		Global_16739 = Global_16740;
		Global_16741 = Global_16742;
		Global_15364.f_370 = Global_16734;
		Global_15364.f_368 = Global_16732;
		Global_15364.f_369 = Global_16733;
		Global_15741 = Global_15742;
		if (Global_15751)
		{
			unk_0x21E7933CCC7B3724(&Global_2313, 20);
			unk_0x21E7933CCC7B3724(&Global_2314, 17);
			unk_0x21E7933CCC7B3724(&Global_2315, 0);
			if (bParam2)
			{
				func_323();
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14443.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14409 == 1)
			{
				return 0;
			}
			if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
			{
				if (unk_0x658CF746EFCB633E(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (func_322())
				{
					return 0;
				}
				if (unk_0x9D317EC24D9CDD2F(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0xC3B1F1C9A58948C2(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0xBA11591586E3ABFF(unk_0x17B5CC8A8615737D(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69702)
				{
					if (unk_0xA77EE6C138A588EB(unk_0x17B5CC8A8615737D()))
					{
						return 0;
					}
					if (unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796()))
					{
						return 0;
					}
					if (unk_0x95E290AF7BCBF364(unk_0x17B5CC8A8615737D()))
					{
						return 0;
					}
					if (unk_0xDB3C032119056A8B(unk_0xBE369BE1BC57A796()))
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
				switch (Global_14443.f_1)
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
				if (unk_0x48B8265059381CD0(Global_2313, 9))
				{
					return 0;
				}
			}
			func_321();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_320();
		return 1;
	}
	if (Global_15745 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15747 || iParam1 == Global_15747)
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

void func_320()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x660E8E7836E95077(0);
	Global_15745 = 1;
}

void func_321()
{
	Global_15798 = Global_15797;
	Global_15792 = Global_15793;
	Global_15839 = { Global_15827 };
	Global_15845 = { Global_15833 };
	Global_15800 = Global_15799;
	Global_15869 = { Global_15851 };
	Global_15875 = { Global_15857 };
	Global_15881 = { Global_15863 };
	Global_15887 = { Global_15893 };
	Global_1628 = Global_1629;
	Global_1630 = Global_1631;
	Global_15756 = Global_15757;
	Global_15758 = Global_15759;
	Global_15760 = { Global_15776 };
	Global_15749 = Global_15750;
	Global_16761 = 0;
	Global_15794 = 0;
	Global_15795 = 0;
	unk_0x21E7933CCC7B3724(&Global_2314, 16);
}

int func_322()
{
	int iVar0;
	int iVar1;
	
	if (Global_69702)
	{
		iVar0 = 0;
		unk_0x5CD8291F2C5E0AD1(unk_0x17B5CC8A8615737D(), &iVar1, 1);
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5053725CE851B850() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		if (unk_0x780A193B53AF21CF(unk_0x17B5CC8A8615737D(), 78, 1))
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

void func_323()
{
	if (func_177(14))
	{
		if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[2 /*29*/])
			{
				Global_14443 = 2;
			}
			else
			{
				Global_14443 = 0;
			}
		}
	}
	else
	{
		Global_14443 = func_294();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69702)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

void func_324()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15034[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15034[iVar0 /*10*/].f_1), "", 24);
		Global_15034[iVar0 /*10*/].f_7 = 0;
		Global_15034[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15034.f_161 = -99;
	Global_15034.f_162 = { 0f, 0f, 0f };
}

bool func_325(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1353070.f_203[iParam1];
			}
			break;
	}
	return unk_0x48B8265059381CD0(Global_1353070.f_1015, iParam0);
}

void func_326(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = iParam5;
	if (iParam3 == 0)
	{
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else
	{
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else
	{
		Global_16733 = 0;
		Global_16731 = 1;
	}
}

void func_327(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x7F755B97D75D9B44(sParam0);
	unk_0x6EBC181C75DC822D(iParam1, 1);
}

void func_328()
{
	Global_14611 = 0;
	func_329();
}

void func_329()
{
	unk_0x5FB0B609B3A49840();
	Global_16756 = 0;
	if (unk_0x55C74612BE548D78())
	{
		unk_0x660E8E7836E95077(0);
		Global_15745 = 6;
	}
}

int func_330(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_10(iParam0))
	{
		iVar0 = unk_0xF1FE04D602EA392E(iParam0);
		unk_0xB8F5F7438C07CC5E(iVar0, iParam1);
		unk_0x84DAB725836026C6(iVar0, iParam2);
		unk_0x00EA14207118EEE2(iVar0, 1f);
	}
	return iVar0;
}

int func_331(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x14E01C4EC4170496(*iParam0))
	{
		return 0;
	}
	if (!unk_0x16924971637B41FA(*iParam0, 5f))
	{
		return 0;
	}
	if (unk_0x4950AAD2A16D6B22(*iParam0))
	{
		return 1;
	}
	Var0 = { unk_0x6FC0E19BFAEEC071(*iParam0) };
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

void func_332(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0xA3794949321E107C(uParam0))
	{
		if ((unk_0x23E9113C762466ED(iParam1) && unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D())) && !unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
		{
			if (unk_0x3983CCB0D958159C(iParam1))
			{
				if (unk_0x45CD66F0A131E554(unk_0xBFC71CD990E479DB(iParam1), 0))
				{
					fVar1 = unk_0x3DC4639D5F23DEA2(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), unk_0x57240623C1BC6E88(iParam1, 1), 1);
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
						unk_0x76C0584E1FF9B958(uParam0, 1);
						unk_0x5F97CFBDE7F2B599(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x76C0584E1FF9B958(uParam0, 0);
						unk_0x5F97CFBDE7F2B599(uParam0, 255);
					}
				}
			}
			else if (unk_0x80E9CA64E9C8E070(iParam1))
			{
				if (!unk_0xCA41A00932714525(unk_0xB80CAAF3D65FBC1F(iParam1)))
				{
					fVar1 = unk_0x3DC4639D5F23DEA2(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), unk_0x57240623C1BC6E88(iParam1, 1), 1);
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
						unk_0x76C0584E1FF9B958(uParam0, 1);
						unk_0x5F97CFBDE7F2B599(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x76C0584E1FF9B958(uParam0, 0);
						unk_0x5F97CFBDE7F2B599(uParam0, 255);
					}
				}
			}
		}
	}
}

int func_333(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	bVar1 = true;
	if (bVar1)
	{
		if (func_10(iParam0))
		{
			iVar0 = unk_0xF1FE04D602EA392E(iParam0);
			unk_0xB8F5F7438C07CC5E(iVar0, iParam2);
			unk_0x84DAB725836026C6(iVar0, iParam3);
			unk_0x00EA14207118EEE2(iVar0, 0.7f);
			if (!bParam1)
			{
				unk_0x00EA14207118EEE2(iVar0, 0.5f);
			}
		}
	}
	return iVar0;
}

void func_334(int iParam0)
{
	int iVar0;
	char cVar1[32];
	int iVar9;
	
	if (func_38())
	{
		iLocal_3250 = unk_0x94E3E074F38DF86C();
	}
	else
	{
		iLocal_3233 = 0;
	}
	if (iLocal_3234)
	{
		if (func_20(iLocal_3282))
		{
			if (!unk_0x872115A210435770(iLocal_3282))
			{
				iLocal_3282 = 0;
				iLocal_3234 = 0;
			}
		}
		else
		{
			iLocal_3282 = 0;
			iLocal_3234 = 0;
		}
	}
	if (!unk_0x14E01C4EC4170496(Local_3490.f_0))
	{
		iLocal_3252 = unk_0x94E3E074F38DF86C();
	}
	if (iLocal_3105 == 1)
	{
		if (fLocal_3265 < ((200f / 100f) * (0.7f * 100f)))
		{
			if (fLocal_3266 > 3000f && fLocal_3266 < 7500f)
			{
				if (!iLocal_3193)
				{
					if (!func_38())
					{
						iVar9 = 0;
						if (unk_0x75342B3CD0FB5275())
						{
							iVar9 = 1;
						}
						if (func_338(&uLocal_3304, "NIG2AUD", "NIG2_INSTR", "NIG2_INSTR_13", 8, iVar9, 0))
						{
							iLocal_3233 = 1;
							iLocal_3193 = 1;
						}
					}
				}
			}
			if (fLocal_3266 > 15500f && fLocal_3266 < 16000f)
			{
				if (!iLocal_3184[0])
				{
					if (unk_0x70A9F320A34FAC28(Local_3490.f_0, -1237.778f, -763.4679f, 26.42266f, -1186.703f, -829.4772f, 10.58047f, 31f, 0, 1, 0))
					{
						if (!func_38())
						{
							if (func_338(&uLocal_3304, "NIG2AUD", "NIG2_INSTR", "NIG2_INSTR_1", 8, 0, 0))
							{
								iLocal_3233 = 1;
								iLocal_3184[0] = 1;
							}
						}
					}
				}
			}
			if (fLocal_3266 > 45500f && fLocal_3266 < 47500f)
			{
				if (!iLocal_3184[1])
				{
					if (unk_0x70A9F320A34FAC28(Local_3490.f_0, -664.5371f, -580.7943f, 29.30828f, -590.7203f, -581.1932f, 23.30828f, 13.5f, 0, 1, 0))
					{
						if (func_38())
						{
							func_328();
						}
						if (func_317(&uLocal_3304, "NIG2AUD", "NIG_SP1", 8, 0, 0, 0))
						{
							unk_0x2DE9FDD822EE641B(3f, 3f, 0);
							iLocal_3233 = 1;
							iLocal_3184[1] = 1;
						}
					}
				}
			}
			if (fLocal_3266 > 69000f && fLocal_3266 < 71000f)
			{
				if (!iLocal_3184[2])
				{
					if (unk_0x70A9F320A34FAC28(Local_3490.f_0, -440.7857f, -828.3237f, 35.7356f, -511.8112f, -826.6559f, 27.66894f, 60f, 0, 1, 0))
					{
						if (func_38())
						{
							func_328();
						}
						if (func_317(&uLocal_3304, "NIG2AUD", "NIG_SP2", 8, 0, 0, 0))
						{
							unk_0x2DE9FDD822EE641B(3f, 3f, 0);
							iLocal_3233 = 1;
							iLocal_3184[2] = 1;
						}
					}
				}
			}
			if (fLocal_3266 > 85000f && fLocal_3266 < 89000f)
			{
				if (!iLocal_3184[3])
				{
					if (unk_0x70A9F320A34FAC28(Local_3490.f_0, -432.3278f, -540.988f, 44.07163f, -433.2483f, -485.5649f, 22.47039f, 60f, 0, 1, 0))
					{
						if (func_38())
						{
							func_328();
						}
						if (func_317(&uLocal_3304, "NIG2AUD", "NIG_SP3", 8, 0, 0, 0))
						{
							iLocal_3233 = 1;
							iLocal_3184[3] = 1;
						}
					}
				}
			}
			if (fLocal_3266 > 104000f && fLocal_3266 < 110000f)
			{
				if (!iLocal_3184[4])
				{
					if (func_38())
					{
						if (unk_0x70A9F320A34FAC28(Local_3490.f_0, 81.94607f, -518.6024f, 38.07428f, -107.3686f, -519.7444f, 27.81536f, 60f, 0, 1, 0))
						{
							if (func_38())
							{
								func_18();
							}
							if (func_338(&uLocal_3304, "NIG2AUD", "NIG2_INSTR", "NIG2_INSTR_12", 8, 0, 0))
							{
								iLocal_3233 = 1;
								iLocal_3184[4] = 1;
							}
						}
					}
				}
			}
			if (fLocal_3266 > 113000f && fLocal_3266 < 116000f)
			{
				if (!iLocal_3184[5])
				{
					if (unk_0x70A9F320A34FAC28(Local_3490.f_0, 254.9994f, -594.3826f, 49.60252f, 270.4643f, -527.226f, 39.68248f, 70f, 0, 1, 0))
					{
						if (func_38())
						{
							func_328();
						}
						if (func_317(&uLocal_3304, "NIG2AUD", "NIG2_HOSP01", 8, 0, 0, 0))
						{
							unk_0x2DE9FDD822EE641B(3f, 3f, 0);
							iLocal_3233 = 1;
							iLocal_3184[5] = 1;
						}
					}
				}
			}
			if (fLocal_3266 > 118000f)
			{
				if (!iLocal_3184[6])
				{
					if (unk_0x70A9F320A34FAC28(Local_3490.f_0, 338.0111f, -581.9055f, 41.57753f, 350.9869f, -586.7529f, 46.07751f, 6.75f, 0, 1, 0))
					{
						if (func_38())
						{
							func_328();
						}
						if (func_317(&uLocal_3304, "NIG2AUD", "NIG2_HWH", 8, 0, 0, 0))
						{
							iLocal_3233 = 1;
							iLocal_3184[6] = 1;
						}
					}
				}
				if (!iLocal_3184[7])
				{
					if (unk_0x70A9F320A34FAC28(Local_3490.f_0, 368.5714f, -594.9467f, 45.5422f, 389.5015f, -614.1279f, 27.11789f, 20.75f, 0, 1, 0))
					{
						if (!func_336("NIG2_HWH", 1))
						{
							if (func_38())
							{
								func_328();
							}
							if (func_317(&uLocal_3304, "NIG2AUD", "NIG2_HWS", 8, 0, 0, 0))
							{
								iLocal_3233 = 1;
								iLocal_3184[7] = 1;
							}
						}
					}
				}
			}
		}
	}
	if (!iLocal_3234)
	{
		if (!iLocal_3201)
		{
			if (((unk_0x745DF692265C6509(Local_3490.f_0) || unk_0x01F09F0D64EF3285(Local_3490.f_0, 0, 1000)) || unk_0x01F09F0D64EF3285(Local_3490.f_0, 1, 1000)) || func_288(iLocal_3256, 500))
			{
				StringCopy(&cVar1, "NIG2_FLIP_", 32);
				iVar0 = unk_0x0E29C61F26D96FDB(1, 3);
				StringIntConCat(&cVar1, iVar0, 32);
				if (iVar0 == 1)
				{
					unk_0x6DBB68211C17EAFC(Local_3476.f_0, "NIG2_CCAA", "NIGEL");
					iLocal_3201 = 1;
					iLocal_3282 = Local_3476.f_0;
					iLocal_3234 = 1;
					return;
				}
				else
				{
					unk_0x6DBB68211C17EAFC(Local_3469.f_0, "NIG2_CCAB", "MRSTHORNHILL");
					iLocal_3201 = 1;
					iLocal_3282 = Local_3469.f_0;
					iLocal_3234 = 1;
					return;
				}
			}
			else if (unk_0x14E01C4EC4170496(Local_3490.f_0))
			{
				if (func_288(iLocal_3252, 500))
				{
					if (!func_336("NIG2_HWH", 1) && !func_336("NIG2_HWS", 1))
					{
						if (unk_0x0E29C61F26D96FDB(0, 11) > 5)
						{
							StringCopy(&cVar1, "NIG2_CDAA", 32);
							unk_0x6DBB68211C17EAFC(Local_3476.f_0, &cVar1, "NIGEL");
							iLocal_3282 = Local_3476.f_0;
						}
						else
						{
							StringCopy(&cVar1, "NIG2_CDAB", 32);
							unk_0x6DBB68211C17EAFC(Local_3469.f_0, &cVar1, "MRSTHORNHILL");
							iLocal_3282 = Local_3469.f_0;
						}
						iLocal_3252 = unk_0x94E3E074F38DF86C();
						iLocal_3234 = 1;
						iLocal_3201 = 1;
						return;
					}
				}
			}
		}
		else if (!unk_0x14E01C4EC4170496(Local_3490.f_0))
		{
			if (unk_0x4950AAD2A16D6B22(Local_3490.f_0) || ((!unk_0x745DF692265C6509(Local_3490.f_0) && !unk_0x01F09F0D64EF3285(Local_3490.f_0, 0, 1000)) && !unk_0x01F09F0D64EF3285(Local_3490.f_0, 1, 1000)))
			{
				iLocal_3201 = 0;
			}
		}
		if (!iLocal_3233)
		{
			if (unk_0xF23F82CD34BEF310(unk_0xBE369BE1BC57A796()) >= 0 && unk_0xF23F82CD34BEF310(unk_0xBE369BE1BC57A796()) < 500)
			{
				if (unk_0x0E29C61F26D96FDB(0, 11) > 5)
				{
					StringCopy(&cVar1, "NIG2_CQAA", 32);
					unk_0x6DBB68211C17EAFC(Local_3476.f_0, &cVar1, "NIGEL");
					iLocal_3282 = Local_3476.f_0;
				}
				else
				{
					StringCopy(&cVar1, "NIG2_CPAA", 32);
					unk_0x6DBB68211C17EAFC(Local_3469.f_0, &cVar1, "MRSTHORNHILL");
					iLocal_3282 = Local_3469.f_0;
				}
				iLocal_3234 = 1;
				return;
			}
			if (unk_0xDF0087E7822095AA(Local_3490.f_0))
			{
				if (unk_0x0E29C61F26D96FDB(0, 11) > 5)
				{
					StringCopy(&cVar1, "NIG2_COAA", 32);
					unk_0x6DBB68211C17EAFC(Local_3476.f_0, &cVar1, "NIGEL");
					iLocal_3282 = Local_3476.f_0;
				}
				else
				{
					StringCopy(&cVar1, "NIG2_CNAA", 32);
					unk_0x6DBB68211C17EAFC(Local_3469.f_0, &cVar1, "MRSTHORNHILL");
					iLocal_3282 = Local_3469.f_0;
				}
				iLocal_3234 = 1;
				return;
			}
		}
	}
	if (!iLocal_3233 && !iLocal_3234)
	{
		if (unk_0x23E9113C762466ED(Local_3497.f_0))
		{
			if (unk_0xC017443DBE6DA4D6(Local_3497.f_0, unk_0x17B5CC8A8615737D(), 1) && unk_0x1B30FA4AAC96F398(unk_0x17B5CC8A8615737D()))
			{
				if (!func_336("NIG2_SHOOTS", 1) && !func_336("NIG2_SHOOTSN", 1))
				{
					if (func_38())
					{
						func_328();
					}
					if (unk_0x0E29C61F26D96FDB(0, 11) > 5)
					{
						if (func_317(&uLocal_3304, "NIG2AUD", "NIG2_SHOOTS", 8, 0, 0, 0))
						{
							unk_0xCF458DC2F9000261(Local_3497.f_0);
							iLocal_3234 = 1;
							return;
						}
					}
					else if (func_317(&uLocal_3304, "NIG2AUD", "NIG2_SHOOTSN", 8, 0, 0, 0))
					{
						unk_0xCF458DC2F9000261(Local_3497.f_0);
						iLocal_3234 = 1;
						return;
					}
				}
				unk_0xCF458DC2F9000261(Local_3497.f_0);
			}
			if (!iLocal_3197)
			{
				if (unk_0xC017443DBE6DA4D6(Local_3497.f_0, unk_0x17B5CC8A8615737D(), 1))
				{
					if (func_38())
					{
						func_328();
					}
					if (func_317(&uLocal_3304, "NIG2AUD", "NIG2_CHASE01", 8, 0, 0, 0))
					{
						unk_0xCF458DC2F9000261(Local_3497.f_0);
						iLocal_3233 = 1;
						iLocal_3197 = 1;
						return;
					}
				}
			}
		}
		if (unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0))
		{
			if (!iLocal_3198)
			{
				if (func_38())
				{
					func_300();
				}
				if (func_317(&uLocal_3304, "NIG2AUD", "NIG2_WANTED", 8, 0, 0, 0))
				{
					iLocal_3198 = 1;
					iLocal_3233 = 1;
				}
			}
			else if (!iLocal_3199)
			{
				if (!func_336("NIG2_WANTED", 1))
				{
					if (func_38())
					{
						func_328();
					}
					if (func_317(&uLocal_3304, "NIG2AUD", "NIG2_POLICE", 8, 0, 0, 0))
					{
						iLocal_3199 = 1;
						iLocal_3233 = 1;
					}
				}
			}
		}
		if (iLocal_3105 == 1)
		{
			if (fLocal_3265 < ((200f / 100f) * (0.7f * 100f)))
			{
				if (!iLocal_3233 && !func_38())
				{
					if (func_288(iLocal_3250, 500))
					{
						if (fLocal_3266 < 116000f)
						{
							if (!iLocal_3200)
							{
								if (fLocal_3266 > 20000f)
								{
									if (func_335())
									{
										if (func_317(&uLocal_3304, "NIG2AUD", "NIG2_LEFT", 8, 0, 0, 0))
										{
											iLocal_3200 = 1;
										}
									}
								}
							}
							if (!iLocal_3171[0])
							{
								if (func_317(&uLocal_3304, "NIG2AUD", "NIG2_CHASE02", 8, 0, 0, 0))
								{
									iLocal_3171[0] = 1;
								}
							}
							if (!iLocal_3171[1])
							{
								if (iLocal_3184[0] || fLocal_3266 > 16500f)
								{
									if (func_317(&uLocal_3304, "NIG2AUD", "NIG2_CHASE05", 8, 0, 0, 0))
									{
										iLocal_3171[1] = 1;
									}
								}
							}
							else if (!iLocal_3171[2])
							{
								if (func_317(&uLocal_3304, "NIG2AUD", "NIG2_CHASE08", 8, 0, 0, 0))
								{
									iLocal_3171[2] = 1;
								}
							}
							else if (!iLocal_3171[3])
							{
								if (iLocal_3184[1] || fLocal_3266 > 52500f)
								{
									if (func_317(&uLocal_3304, "NIG2AUD", "NIG2_CHASE06", 8, 0, 0, 0))
									{
										iLocal_3171[3] = 1;
									}
								}
							}
							else if (!iLocal_3171[4])
							{
								if (iLocal_3184[2] || fLocal_3266 > 71500f)
								{
									if (func_317(&uLocal_3304, "NIG2AUD", "NIG2_CHASE03", 8, 0, 0, 0))
									{
										iLocal_3171[4] = 1;
									}
								}
							}
							else if (!iLocal_3171[5])
							{
								if (iLocal_3184[3] || fLocal_3266 > 89500f)
								{
									if (func_317(&uLocal_3304, "NIG2AUD", "NIG2_CHASE04", 8, 0, 0, 0))
									{
										iLocal_3171[5] = 1;
									}
								}
							}
							else if (!iLocal_3171[6])
							{
								if (!iLocal_3184[5])
								{
									if (iLocal_3184[4] || fLocal_3266 > 106500f)
									{
										if (!unk_0x70A9F320A34FAC28(Local_3490.f_0, 81.94607f, -518.6024f, 38.07428f, -107.3686f, -519.7444f, 27.81536f, 60f, 0, 1, 0))
										{
											if (func_317(&uLocal_3304, "NIG2AUD", "NIG2_CHASE07", 8, 0, 0, 0))
											{
												iLocal_3171[6] = 1;
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
	if (fLocal_3265 > ((200f / 100f) * (0.7f * 100f)))
	{
		if (!iLocal_3233)
		{
			if (!iLocal_3179[2])
			{
				if (func_38())
				{
					func_300();
				}
				else if (!iLocal_3179[0])
				{
					if (func_317(&uLocal_3304, "NIG2AUD", "NIG2_CU01", 8, 0, 0, 0))
					{
						iLocal_3233 = 1;
						iLocal_3179[0] = 1;
					}
				}
				else if (!iLocal_3179[1])
				{
					if (func_317(&uLocal_3304, "NIG2AUD", "NIG2_CU02", 8, 0, 0, 0))
					{
						iLocal_3233 = 1;
						iLocal_3179[1] = 1;
					}
				}
				else if (!iLocal_3179[2])
				{
					if (func_317(&uLocal_3304, "NIG2AUD", "NIG2_CU03", 8, 0, 0, 0))
					{
						iLocal_3233 = 1;
						iLocal_3179[2] = 1;
					}
				}
			}
		}
	}
	else if (fLocal_3266 > 40000f)
	{
		if (fLocal_3266 < 58000f)
		{
			if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), -731.6891f, -657.8242f, 26.26911f, -448.3936f, -657.125f, 40.71734f, 40f, 0, 1, 0))
			{
				if (!iLocal_3183)
				{
					if (!iLocal_3179[1])
					{
						if (func_38())
						{
							func_328();
						}
						if (func_317(&uLocal_3304, "NIG2AUD", "NIG2_CU02", 8, 0, 0, 0))
						{
							iLocal_3233 = 1;
							iLocal_3179[1] = 1;
							iLocal_3183 = 1;
						}
					}
					else
					{
						if (func_38())
						{
							func_328();
						}
						if (func_317(&uLocal_3304, "NIG2AUD", "NIG2_CU03", 8, 0, 0, 0))
						{
							iLocal_3233 = 1;
							iLocal_3179[2] = 1;
							iLocal_3183 = 1;
						}
					}
				}
				*iParam0 = 1;
			}
		}
	}
}

int func_335()
{
	if (unk_0xA63B1E354C7DC608(unk_0xBE369BE1BC57A796(), 2))
	{
		return 1;
	}
	return 0;
}

int func_336(char* sParam0, bool bParam1)
{
	struct<6> Var0;
	
	if (func_38())
	{
		Var0 = { func_337() };
		if (unk_0x6A7B0D91FD88D9EE(&Var0, sParam0))
		{
			return 1;
		}
		if (bParam1)
		{
			if (unk_0x6A7B0D91FD88D9EE(&Var0, "NULL"))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<6> func_337()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15745 == 4)
	{
		return Global_15364;
	}
	return Var0;
}

int func_338(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam5 == 0)
	{
		if (unk_0x75342B3CD0FB5275())
		{
			if (unk_0xBE675F7A607B46B0(203) != 0)
			{
				return 0;
			}
		}
	}
	if (func_339(uParam0, sParam1, sParam2, sParam3, iParam4, iParam5, iParam6))
	{
		return 1;
	}
	return 0;
}

bool func_339(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_326(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15752 = 0;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 1;
	Global_16738 = 0;
	Global_16742 = 0;
	StringCopy(&Global_16749, sParam3, 24);
	Global_2621441 = 0;
	return func_319(sParam2, iParam4, 0);
}

bool func_340(char* sParam0, int iParam1, int iParam2)
{
	unk_0x5A99EA84320AB387(sParam0);
	if (iParam1 == 1)
	{
		unk_0x34D84D73B5DF8E80(iParam2);
	}
	return unk_0x2B886121A03F928A();
}

void func_341(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_342(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_342(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	func_343(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_343(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
	{
		func_302(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_344(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_344(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0xAB01297DD4A8577F())
	{
		if (unk_0x94E3E074F38DF86C() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0xD3115E7F7876D6E6(iVar0))
	{
		if (!unk_0x63C468D583002D23())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_303(iVar0))
	{
		func_361();
	}
	if (func_360(iParam1) && unk_0xADA6DD2D53C59AF0(iParam1))
	{
		iVar1 = 0;
		if (unk_0x80E9CA64E9C8E070(iParam1))
		{
			unk_0xCC614957B282546F(unk_0xB80CAAF3D65FBC1F(iParam1));
			unk_0x5A0679AC515DA45F(unk_0xB80CAAF3D65FBC1F(iParam1), 1);
			if (unk_0x4B08F3A62DC9B336(unk_0xB80CAAF3D65FBC1F(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x3983CCB0D958159C(iParam1))
		{
			unk_0x1976D6B36CACBFE7(unk_0xBFC71CD990E479DB(iParam1));
			if (unk_0x7D86ADEE79DE4C72(unk_0xBFC71CD990E479DB(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x1461B0B259D86067(iParam1))
		{
			unk_0xA8A81E4A8E21148C(unk_0xACDCB2312E61BD53(iParam1));
			if (unk_0xC61161F0BC70D70C(unk_0xACDCB2312E61BD53(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xAB01297DD4A8577F())
		{
			if (func_355(uParam0, bParam7, bParam9, 0))
			{
				func_352(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_349(iVar0))
				{
					if ((unk_0xD3115E7F7876D6E6(uParam0->f_3) && !unk_0xD3115E7F7876D6E6(iVar0)) && unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
					{
						if ((iVar1 && !unk_0x9E123D5FF2973C60()) && uParam8)
						{
							if (!func_303(iVar0))
							{
								func_348(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x6A7B0D91FD88D9EE("CMN_HINT", iVar0))
								{
									func_347(1);
								}
							}
						}
					}
				}
			}
			else if (func_349(iVar0))
			{
				if (unk_0xD3115E7F7876D6E6(uParam0->f_3) && !unk_0xD3115E7F7876D6E6(iVar0))
				{
					if (((unk_0x1DCFA79E268F3EE5(iParam1) && iVar1) && !unk_0x9E123D5FF2973C60()) && uParam8)
					{
						if (!func_303(iVar0))
						{
							func_348(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x6A7B0D91FD88D9EE("CMN_HINT", iVar0))
							{
								func_347(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0xD3115E7F7876D6E6(sParam5))
			{
				if (func_303(sParam5))
				{
					unk_0x2E2945F5602A744F(1);
				}
			}
			if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
			{
				if (unk_0x72FC030E928A5207(unk_0x17B5CC8A8615737D()))
				{
					if (unk_0xB866C0EABE959340(3) == 3 || unk_0xB866C0EABE959340(3) == 4)
					{
						func_302(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8EC3C2BC25ED8ECA(unk_0x17B5CC8A8615737D()))
				{
					if (unk_0xB866C0EABE959340(6) == 3 || unk_0xB866C0EABE959340(6) == 4)
					{
						func_302(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xE40FC0529CC75B0F(unk_0x17B5CC8A8615737D()))
				{
					if (unk_0xB866C0EABE959340(4) == 3 || unk_0xB866C0EABE959340(4) == 4)
					{
						func_302(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC5DC3C111D329A7C(unk_0x17B5CC8A8615737D()))
				{
					if (unk_0xB866C0EABE959340(5) == 3 || unk_0xB866C0EABE959340(5) == 4)
					{
						func_302(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x3B22E4CC0F88E52E(unk_0x17B5CC8A8615737D()))
				{
					if (unk_0xB866C0EABE959340(2) == 3 || unk_0xB866C0EABE959340(2) == 4)
					{
						func_302(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x428CA09FA2E92B87() == 3 || unk_0x428CA09FA2E92B87() == 4)
				{
					func_302(uParam0, iVar0, 1);
				}
			}
			if (!func_355(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_346(uParam0))
				{
					func_345(uParam0);
				}
			}
		}
	}
	else
	{
		func_302(uParam0, iVar0, 0);
	}
}

void func_345(var uParam0)
{
	if (func_360(unk_0x17B5CC8A8615737D()))
	{
		unk_0xEF9294ED57E4AC3D(unk_0x17B5CC8A8615737D());
	}
	if (unk_0xAB01297DD4A8577F())
	{
		unk_0x73624B45C8E405BA(1);
		unk_0x72B6EAB729050F5B(0);
		unk_0xB8CAC5F3774894A1("HINT_CAM_SCENE");
		unk_0x8BBC558C75738A6D("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x9AF1ABF0E97411BF("FocusOut", 0, 0);
			unk_0x4988C48537D1AE4F(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_346(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x94E3E074F38DF86C()
		{
			return 1;
		}
	}
	return 0;
}

int func_347(bool bParam0)
{
	switch (Global_35781)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_101700.f_9008.f_100++;
			}
			return Global_101700.f_9008.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_101700.f_9008.f_101++;
			}
			return Global_101700.f_9008.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_101700.f_9008.f_102++;
			}
			return Global_101700.f_9008.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_348(char* sParam0, int iParam1)
{
	unk_0x252D021C9D92DBA9(sParam0);
	unk_0x8B1500AADBA665BD(0, 0, 1, iParam1);
}

int func_349(char* sParam0)
{
	if (!func_350(1, 1, 0))
	{
		if ((!unk_0x9C88EB7B70229335(sParam0) && func_303(sParam0)) || func_303("CMN_HINT"))
		{
			unk_0x2E2945F5602A744F(1);
		}
		return 0;
	}
	switch (Global_35781)
	{
		case 0:
		case 3:
			if (func_347(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_347(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_347(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_350(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x94A5DEE82C898FDF(unk_0xBE369BE1BC57A796()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xE9E6B5364105A000())
	{
		return 0;
	}
	if (func_9(0))
	{
		return 0;
	}
	if (func_351())
	{
		return 0;
	}
	if (unk_0x349B6C82BE3EF6DD())
	{
		return 0;
	}
	if (Global_68131)
	{
		return 0;
	}
	if (unk_0x82F1A060D8F4583B(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53003)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
		{
			if (unk_0x72FC030E928A5207(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0xB866C0EABE959340(3) == 3 || unk_0xB866C0EABE959340(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8EC3C2BC25ED8ECA(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0xB866C0EABE959340(6) == 3 || unk_0xB866C0EABE959340(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xE40FC0529CC75B0F(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0xB866C0EABE959340(4) == 3 || unk_0xB866C0EABE959340(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xC5DC3C111D329A7C(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0xB866C0EABE959340(5) == 3 || unk_0xB866C0EABE959340(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x3B22E4CC0F88E52E(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0xB866C0EABE959340(2) == 3 || unk_0xB866C0EABE959340(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x428CA09FA2E92B87() == 3 || unk_0x428CA09FA2E92B87() == 4)
			{
				return 0;
			}
			if (unk_0x54271E538645DBDB())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_351()
{
	return unk_0x94E3E074F38DF86C() <= Global_17290.f_5745 + 100;
}

void func_352(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xA929B2923D14E2F8(iParam1, 0))
	{
		func_302(uParam0, 0, 0);
	}
	if (func_60(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x80E9CA64E9C8E070(iParam1))
		{
			iVar0 = unk_0xB80CAAF3D65FBC1F(iParam1);
			if (!unk_0xFD0FE723227D5AB6(iVar0, 0))
			{
				if (unk_0x0764AC92F08BEC9E(iVar0))
				{
					if (!func_353())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x81E2E02C57D459E6(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x73624B45C8E405BA(0);
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
	unk_0x986AC95588E8693B(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x4718A774D9248520(unk_0x17B5CC8A8615737D(), iParam1, -1, iVar3, iVar4);
	unk_0x9AF1ABF0E97411BF("FocusIn", 0, 0);
	unk_0x4A5D4AD0FE6ACF73("HINT_CAM_SCENE");
	unk_0x4988C48537D1AE4F(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x94E3E074F38DF86C();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_353()
{
	return func_354(unk_0xBE369BE1BC57A796());
}

int func_354(int iParam0)
{
	if (unk_0x0324EEB10F81965F(unk_0xDF7CE83326F434E9(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_355(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x94E3E074F38DF86C() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
				{
					if (func_359(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x94E3E074F38DF86C();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_358(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x94E3E074F38DF86C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_358(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x94E3E074F38DF86C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_359(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x94E3E074F38DF86C();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_346(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x94E3E074F38DF86C() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
					{
						if (!func_359(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x94E3E074F38DF86C();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_358(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x94E3E074F38DF86C();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_358(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x94E3E074F38DF86C();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_359(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x94E3E074F38DF86C();
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
				if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
				{
					if (!func_359(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_358(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_358(bParam1, bParam2, bParam3) || unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1) || unk_0x8B41403849A60C7C(unk_0x17B5CC8A8615737D(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_359(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x94E3E074F38DF86C() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1))
					{
						if (func_357(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_356(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1) || func_356(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 1) || unk_0x8B41403849A60C7C(unk_0x17B5CC8A8615737D(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_357(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_346(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_350(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_361();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_356(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_350(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		if (!unk_0x091275C60C62F17B(unk_0xBE369BE1BC57A796()))
		{
			unk_0xD1BB2AD73E7FC3A7(0, 140, 1);
			unk_0xD1BB2AD73E7FC3A7(0, 80, 1);
			if (unk_0x7C48E6953368E08B(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_357(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_350(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0xD1BB2AD73E7FC3A7(0, 80, 1);
		if (unk_0xBB4A435CD6A72A8E())
		{
			if (unk_0x7C48E6953368E08B(0, 80))
			{
				unk_0x73624B45C8E405BA(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_358(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_350(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		if (!unk_0x091275C60C62F17B(unk_0xBE369BE1BC57A796()))
		{
			unk_0xD1BB2AD73E7FC3A7(0, 140, 1);
			unk_0xD1BB2AD73E7FC3A7(0, 80, 1);
			if (unk_0x9E3D293A990C1BEF(0, 80) && unk_0x94E3E074F38DF86C() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_359(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_350(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0xD1BB2AD73E7FC3A7(0, 80, 1);
		if (unk_0xBB4A435CD6A72A8E())
		{
			if (unk_0x9E3D293A990C1BEF(0, 80) && unk_0x94E3E074F38DF86C() > Global_116)
			{
				unk_0x73624B45C8E405BA(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_360(int iParam0)
{
	if (unk_0x23E9113C762466ED(iParam0))
	{
		if (unk_0x3983CCB0D958159C(iParam0))
		{
			if (unk_0x45CD66F0A131E554(unk_0xBFC71CD990E479DB(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x80E9CA64E9C8E070(iParam0))
		{
			if (!unk_0xCA41A00932714525(unk_0xB80CAAF3D65FBC1F(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x1461B0B259D86067(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_361()
{
	unk_0xEB79FECD9022AAF0(&Global_2314, 4);
}

void func_362()
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (!bLocal_3206)
	{
		if (func_13(Local_3490.f_0))
		{
			if (unk_0x7B816C72877502C5(unk_0x17B5CC8A8615737D(), Local_3490.f_0))
			{
				if (!unk_0x70A9F320A34FAC28(Local_3490.f_0, 373.2886f, -580.871f, 37.23948f, 359.6602f, -605.2207f, 29.13826f, 20f, 0, 1, 0) && (unk_0x70A9F320A34FAC28(Local_3490.f_0, Local_3550, Local_3553, fLocal_3264, 0, 1, 0) || unk_0x70A9F320A34FAC28(Local_3490.f_0, 370.7054f, -596.1437f, 45.43948f, 361.3834f, -600.7f, 33.23949f, 6f, 0, 1, 0)))
				{
					func_298(2);
					if (iLocal_3205)
					{
						func_299(1);
						func_302(&uLocal_20, 0, 0);
						iLocal_3205 = 0;
						iLocal_3244 = 1;
						fLocal_3269 = 1f;
						unk_0x46081AAD7F4633BD(0);
					}
					if (iLocal_3238)
					{
						func_364(0, 795);
						iLocal_3238 = 0;
					}
					Var0 = { unk_0x57240623C1BC6E88(Local_3490.f_0, 1) };
					fVar3 = 0.2f;
					fVar4 = 0.9f;
					fVar5 = 2f;
					if (Var0.f_2 > 35.25f)
					{
						if (fLocal_3269 > fVar3)
						{
							fLocal_3269 = (fLocal_3269 - (fVar4 * unk_0x0000000050597EE2()));
							if (fLocal_3269 < fVar3)
							{
								fLocal_3269 = fVar3;
							}
							unk_0x8ADF92E4B51709E2(fLocal_3269);
						}
					}
					else if (Var0.f_2 < 35f)
					{
						if (fLocal_3269 < 1f)
						{
							fLocal_3269 = (fLocal_3269 + (fVar5 * unk_0x0000000050597EE2()));
							if (fLocal_3269 > 1f)
							{
								fLocal_3269 = 1f;
							}
							unk_0x8ADF92E4B51709E2(fLocal_3269);
						}
					}
					if (Var0.f_2 < 40f)
					{
						if (unk_0x4950AAD2A16D6B22(Local_3490.f_0))
						{
							if (!iLocal_3205)
							{
								func_299(0);
								unk_0x2EE4FDDB1E7664FB();
								iLocal_3205 = 1;
							}
						}
					}
				}
				else if (!iLocal_3205)
				{
					func_299(0);
					unk_0x2EE4FDDB1E7664FB();
					iLocal_3205 = 1;
				}
			}
			else if (!iLocal_3205)
			{
				func_299(0);
				unk_0x2EE4FDDB1E7664FB();
				iLocal_3244 = 0;
				iLocal_3205 = 1;
			}
		}
		else if (!iLocal_3205)
		{
			func_299(0);
			unk_0x2EE4FDDB1E7664FB();
			iLocal_3244 = 0;
			iLocal_3205 = 1;
		}
	}
	func_363();
}

void func_363()
{
	struct<3> Var0;
	
	if (iLocal_3244)
	{
		if (func_13(Local_3490.f_0))
		{
			Var0 = { unk_0x57240623C1BC6E88(Local_3490.f_0, 0) };
			if (Var0.f_2 < 35f)
			{
				if (unk_0xDF0087E7822095AA(Local_3490.f_0) || unk_0x4950AAD2A16D6B22(Local_3490.f_0))
				{
					unk_0xEE4ED1F88396A702(-1, "CAR_DROP_WRAP", Local_3490.f_0, 0, 0, 0);
					iLocal_3244 = 0;
				}
			}
		}
	}
}

void func_364(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_55835 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_67917)
	{
		if (iParam1 == -1 || Global_67918[iVar0 /*9*/] == iParam1)
		{
			if (Global_67918[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_67918[iVar0 /*9*/].f_6 = iParam0;
				Global_67918[iVar0 /*9*/].f_7 = 1;
				Global_67918[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_365(int iParam0)
{
	if (func_20(Local_3483.f_0))
	{
		if (!unk_0x5132972D2BBC5A62(Local_3483.f_0, "rcmnigel2", "die_horn", 3))
		{
			unk_0xA0E7D0E8FE126EE8("rcmnigel2");
			if (unk_0xF4F8AE8DD0F08C1E("rcmnigel2"))
			{
				unk_0xEB1EFACA68933402(Local_3483.f_0, "rcmnigel2", "die_horn", iParam0, -8f, -1, 2, 0.9f, 0, 0, 0);
			}
		}
	}
}

void func_366()
{
	struct<3> Var0;
	
	Var0 = { 392.9445f, -619.5032f, 27.9764f };
	if (func_314(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), Var0, 100f))
	{
		if (!func_367())
		{
			unk_0xF7CF05FEB40E538B(&cLocal_3544, 8);
			func_43();
			iLocal_3241 = 1;
		}
	}
	else if (iLocal_3241)
	{
		if (!func_314(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), Var0, 120f))
		{
			if (unk_0x77888DFE5B94E7E5())
			{
				unk_0xB5BD48559882D958();
				iLocal_3241 = 0;
			}
		}
		else
		{
			func_43();
		}
	}
	if (iLocal_3241)
	{
		if (func_367())
		{
			unk_0xB5BD48559882D958();
			iLocal_3241 = 0;
		}
	}
}

bool func_367()
{
	return Global_89133;
}

void func_368()
{
	unk_0x4547FC28D02AD087(0.3f);
	switch (iLocal_3107)
	{
		case 0:
			if (func_20(Local_3483.f_0) && func_13(Local_3497.f_0))
			{
				unk_0xCC61640A821F277C(Local_3483.f_0, 1);
				unk_0x0E21DA99F698AF06(Local_3483.f_0, 237, 1);
				unk_0xE4190D6FE693F9EC(Local_3497.f_0, "NIGEL_02_CHASE_CAR_MG", 0);
			}
			if (func_20(Local_3469.f_0))
			{
				unk_0xCC61640A821F277C(Local_3469.f_0, 1);
			}
			if (func_20(Local_3476.f_0))
			{
				unk_0xCC61640A821F277C(Local_3476.f_0, 1);
			}
			if (func_13(Local_3490.f_0))
			{
				if (!iLocal_3238)
				{
					func_364(Local_3490.f_0, 795);
					iLocal_3238 = 1;
				}
				unk_0x250DE4033DCCFBBA(Local_3490.f_0, 1);
				iLocal_3243 = 1;
			}
			unk_0x2DE9FDD822EE641B(0f, 15f, 1);
			func_419(fLocal_3268, Local_3556);
			unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 170, 1);
			unk_0x6B406797594AEA51(unk_0xBE369BE1BC57A796());
			iLocal_3107 = 1;
			break;
		
		case 1:
			func_298(0);
			func_418();
			iLocal_3242 = 0;
			if (unk_0x23E9113C762466ED(Local_3497.f_0))
			{
				fLocal_3265 = unk_0x2A488C176D52CCA5(Local_3556, unk_0x57240623C1BC6E88(Local_3497.f_0, 0));
			}
			if (func_20(Local_3483.f_0))
			{
				if (func_13(Local_3497.f_0))
				{
					if (!bLocal_3211)
					{
						unk_0x0E21DA99F698AF06(Local_3483.f_0, 237, 1);
						if (unk_0x7B816C72877502C5(Local_3483.f_0, Local_3497.f_0) && unk_0x17206B315923243C(Local_3497.f_0, -1, 0) == Local_3483.f_0)
						{
							if (!unk_0x72222684DEA44B9F(Local_3497.f_0))
							{
								unk_0x98F0FA127445E343(Local_3497.f_0, 0);
								unk_0x9D14C436A01A0B15(Local_3497.f_0, iLocal_3258, sLocal_3296, 1);
								unk_0x2099B88C16CE7D57(Local_3497.f_0, 1);
								fLocal_3266 = unk_0x76423F51C82ED0C8(Local_3497.f_0);
								fLocal_3268 = 0.85f;
								unk_0x1ECBE6CE58710983(Local_3497.f_0, fLocal_3268);
								func_417();
								func_395(Local_3497.f_0, fLocal_3268);
								func_391();
								if (!unk_0x4E1850F5FF023071("NIGEL_02_CHASE"))
								{
									if (!func_47() && bLocal_3169)
									{
										unk_0x4A5D4AD0FE6ACF73("NIGEL_02_CHASE");
									}
								}
								bLocal_3211 = true;
							}
						}
					}
					else if (unk_0x72222684DEA44B9F(Local_3497.f_0))
					{
						fLocal_3266 = unk_0x76423F51C82ED0C8(Local_3497.f_0);
						func_382(&fLocal_3268, fLocal_3266);
						unk_0x1ECBE6CE58710983(Local_3497.f_0, fLocal_3268);
						func_417();
						func_395(Local_3497.f_0, fLocal_3268);
						func_391();
						func_381();
						func_380();
						func_12(0, 1);
						if (fLocal_3266 > 82000f && fLocal_3266 < 105000f)
						{
							func_379();
						}
						if (unk_0x27CB4A87DBB58E6E(Local_3497.f_0) < 800f)
						{
							unk_0xEC0212C05F98C1DF(Local_3497.f_0, 800f);
						}
					}
					else if (!bLocal_3213)
					{
						func_66(0, 1);
						func_378();
						unk_0xF8E2640CE709A221(iLocal_3258, sLocal_3296);
						unk_0x6741124666983482(Local_3497.f_0, 0);
						if (unk_0x4E1850F5FF023071("NIGEL_02_CHASE"))
						{
							unk_0xB8CAC5F3774894A1("NIGEL_02_CHASE");
						}
						func_291(0);
						func_377();
						if (fLocal_3266 < 124136f)
						{
							fLocal_3266 = (124136f + 1000f);
						}
						func_380();
						bLocal_3213 = true;
					}
					else
					{
						func_365(1090519040);
					}
				}
				if (iLocal_3205)
				{
					func_341(&uLocal_20, Local_3483.f_0, 0, 0, 1, 1, 1);
				}
				func_376();
				func_375();
				func_374(fLocal_3266);
				func_371(Local_3556);
				func_370();
				func_315();
				func_419(fLocal_3268, Local_3556);
				if ((func_13(Local_3490.f_0) && func_20(Local_3476.f_0)) && func_20(Local_3469.f_0))
				{
					if (unk_0x7B816C72877502C5(unk_0x17B5CC8A8615737D(), Local_3490.f_0))
					{
						if (func_340("NIGEL2_03", 0, 0))
						{
							unk_0x69E47427C5084888("NIGEL2_03");
						}
						if (func_340("NIGEL2_04", 0, 0))
						{
							unk_0x69E47427C5084888("NIGEL2_04");
						}
						func_93(&(Local_3490.f_2));
						if (iLocal_3243)
						{
							unk_0x250DE4033DCCFBBA(Local_3490.f_0, 0);
							iLocal_3243 = 0;
						}
						if (!unk_0x7B816C72877502C5(Local_3476.f_0, Local_3490.f_0) || !unk_0x7B816C72877502C5(Local_3469.f_0, Local_3490.f_0))
						{
							func_93(&(Local_3483.f_2));
							if (func_340("NIGEL2_04", 0, 0))
							{
								unk_0x69E47427C5084888("NIGEL2_04");
							}
						}
						else
						{
							if (!iLocal_3212)
							{
								if (unk_0x17206B315923243C(Local_3490.f_0, -1, 0) == unk_0x17B5CC8A8615737D())
								{
									unk_0x524A422B74847594(Local_3490.f_0, 1, 0, 0);
									iLocal_3212 = 1;
								}
							}
							func_298(1);
							if (!bLocal_3208)
							{
								func_327("NIGEL2_01", 7500, 1);
								bLocal_3208 = true;
							}
							iLocal_3207 = 0;
							if (func_340("NIGEL2_05", 0, 0))
							{
								unk_0x69E47427C5084888("NIGEL2_05");
							}
							if (func_340("NIGEL2_08", 0, 0))
							{
								unk_0x69E47427C5084888("NIGEL2_08");
							}
							if (func_340("NIGEL2_09", 0, 0))
							{
								unk_0x69E47427C5084888("NIGEL2_09");
							}
							func_334(&iLocal_3242);
							if (!unk_0xA3794949321E107C(Local_3483.f_2))
							{
								Local_3483.f_2 = func_333(Local_3483.f_0, 1, 0, 5);
							}
							else
							{
								if (unk_0xFD0FE723227D5AB6(Local_3483.f_0, 0))
								{
									unk_0x00EA14207118EEE2(Local_3483.f_2, 1f);
								}
								func_332(Local_3483.f_2, Local_3483.f_0, 200f, 0.7f, iLocal_3242);
							}
							if (bLocal_3211)
							{
								if (bLocal_3213)
								{
									if (fLocal_3265 < 25f)
									{
										iLocal_3107 = 2;
									}
								}
							}
						}
						func_369();
					}
					else
					{
						if (iLocal_3243)
						{
							unk_0x250DE4033DCCFBBA(Local_3490.f_0, 1);
							iLocal_3243 = 1;
						}
						unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 170, 0);
						func_93(&(Local_3483.f_2));
						if (!unk_0xA3794949321E107C(Local_3490.f_2))
						{
							Local_3490.f_2 = func_330(Local_3490.f_0, 1, 7);
						}
						if (!bLocal_3208)
						{
							if (!iLocal_3194[0])
							{
								if (func_38())
								{
									func_328();
								}
								if (func_317(&uLocal_3304, "NIG2AUD", "NIG2_DAWDM", 7, 0, 0, 0))
								{
									iLocal_3194[0] = 1;
								}
							}
							else if (!iLocal_3203)
							{
								if (!func_38())
								{
									func_327("NIGEL2_03", 7500, 1);
									iLocal_3203 = 1;
								}
							}
							else if (!iLocal_3194[1])
							{
								if ((!func_38() && unk_0x7B816C72877502C5(Local_3476.f_0, Local_3490.f_0)) && unk_0x7B816C72877502C5(Local_3469.f_0, Local_3490.f_0))
								{
									if (func_317(&uLocal_3304, "NIG2AUD", "NIG2_SPOTSP", 8, 0, 0, 0))
									{
										iLocal_3194[1] = 1;
									}
								}
							}
						}
						else
						{
							if (!iLocal_3207)
							{
								if (func_38())
								{
									func_328();
								}
								iLocal_3207 = 1;
							}
							if (!iLocal_3202)
							{
								func_327("NIGEL2_04", 7500, 1);
								iLocal_3251 = unk_0x94E3E074F38DF86C();
								iLocal_3202 = 1;
							}
							else if (!func_38())
							{
								if (fLocal_3267 < 20f)
								{
									if (unk_0x94E3E074F38DF86C() - iLocal_3251) > unk_0x0E29C61F26D96FDB(4500, 6500)
									{
										if (!unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), Local_3490.f_0, 0))
										{
											if (unk_0x0E29C61F26D96FDB(0, 11) > 5)
											{
												if (func_317(&uLocal_3304, "NIG2AUD", "NIG2_GIC", 8, 0, 0, 0))
												{
												}
											}
											else if (func_317(&uLocal_3304, "NIG2AUD", "NIG2_GIC2", 8, 0, 0, 0))
											{
											}
										}
									}
								}
							}
							else
							{
								iLocal_3251 = unk_0x94E3E074F38DF86C();
							}
						}
						func_316();
					}
				}
			}
			func_362();
			func_304();
			break;
		
		case 2:
			if (!bLocal_3213)
			{
				func_66(0, 1);
				func_378();
				if (func_10(Local_3497.f_0))
				{
					if (unk_0x72222684DEA44B9F(Local_3497.f_0))
					{
						unk_0x394D4A83F07AE208(Local_3497.f_0);
					}
					unk_0x98F0FA127445E343(Local_3497.f_0, 1);
				}
				unk_0xF8E2640CE709A221(iLocal_3258, sLocal_3296);
				func_291(0);
				if (unk_0x4E1850F5FF023071("NIGEL_02_CHASE"))
				{
					unk_0xB8CAC5F3774894A1("NIGEL_02_CHASE");
				}
				if (fLocal_3266 < 124136f)
				{
					fLocal_3266 = (124136f + 1000f);
				}
				func_380();
				func_377();
				bLocal_3213 = true;
			}
			if (func_10(Local_3483.f_0))
			{
				if (iLocal_3205)
				{
					func_341(&uLocal_20, Local_3483.f_0, 0, 0, 1, 1, 1);
				}
			}
			func_362();
			if (iLocal_3238)
			{
				func_364(0, 795);
				iLocal_3238 = 0;
			}
			unk_0xFFE4319CE7BE2DBA(0);
			if (bLocal_3230)
			{
				if (unk_0x97F2912BC85D905D(uLocal_3284))
				{
					unk_0x0A977DD607DA1424(uLocal_3284, 0);
				}
			}
			unk_0x9A27E67BCD441C6E();
			func_290(2);
			break;
	}
}

void func_369()
{
	float fVar0;
	
	if (!bLocal_3230)
	{
		fVar0 = 115225f;
		if (fLocal_3266 > fVar0)
		{
			unk_0xD250AE1AB37DC648();
			if (unk_0xD181F97E98E28C18())
			{
				if (!unk_0x97F2912BC85D905D(uLocal_3284))
				{
					if (unk_0x13B7ACE69D27E3E4(Local_3490.f_0) > 8f)
					{
						if (unk_0x70A9F320A34FAC28(Local_3490.f_0, 368.911f, -599.1725f, 41.23884f, 366.0153f, -596.1f, 44.98576f, 6.5f, 0, 1, 0))
						{
							uLocal_3284 = unk_0x4281F7DFB73874A8("scr_rcn2_debris_trail", Local_3490.f_0, 0f, -1.5f, -0.4f, 0f, 0f, 0f, 0.3f, 0, 0, 0);
							bLocal_3230 = true;
						}
					}
				}
			}
		}
	}
	else if (unk_0x97F2912BC85D905D(uLocal_3284))
	{
		if (unk_0x13B7ACE69D27E3E4(Local_3490.f_0) < 4f || !unk_0x70A9F320A34FAC28(Local_3490.f_0, 368.911f, -599.1725f, 41.23884f, 366.0153f, -596.1f, 44.98576f, 6.5f, 0, 1, 0))
		{
			unk_0x0A977DD607DA1424(uLocal_3284, 0);
			bLocal_3230 = false;
		}
	}
}

void func_370()
{
	float fVar0;
	
	fVar0 = 115225f;
	if (!iLocal_3235)
	{
		if (!iLocal_3232)
		{
			if (fLocal_3266 > (fVar0 - 5000f))
			{
				unk_0xD250AE1AB37DC648();
				iLocal_3232 = 1;
			}
		}
		else
		{
			if (fLocal_3266 > fVar0)
			{
				if (unk_0xD181F97E98E28C18())
				{
					if (!unk_0x97F2912BC85D905D(uLocal_3283))
					{
						uLocal_3283 = unk_0x759E422F846BA6EC("scr_rcn2_ceiling_debris", 325f, -589f, 45f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
						iLocal_3235 = 1;
					}
				}
			}
			if (!unk_0xD181F97E98E28C18())
			{
				unk_0xD250AE1AB37DC648();
			}
		}
	}
}

void func_371(struct<3> Param0)
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
	if (func_10(Local_3483.f_0))
	{
		iVar7 = 0;
		while (iVar7 <= 3)
		{
			if (Local_3525[iVar7 /*2*/].f_1 == 0)
			{
				if (!bVar0)
				{
					if (fLocal_3266 >= 500f)
					{
						switch (iVar7)
						{
							case 0:
								iVar1 = iLocal_3270;
								Var2 = { -1262.53f, -731.25f, 21.88f };
								fVar5 = 47.38f;
								break;
							
							case 1:
								iVar1 = iLocal_3273;
								Var2 = { -1300.17f, -704.1f, 24.61f };
								fVar5 = -87.53f;
								break;
							
							case 2:
								iVar1 = iLocal_3273;
								Var2 = { -1298.33f, -704.16f, 24.53f };
								fVar5 = 83.96f;
								break;
							
							case 3:
								iVar1 = iLocal_3273;
								Var2 = { -1209.92f, -817.51f, 15.62f };
								fVar5 = 15.06f;
								break;
						}
						unk_0xE1324F59713746FA(iVar1);
						if (unk_0x9F746898F7881612(iVar1))
						{
							Local_3525[iVar7 /*2*/] = unk_0x2AD5F4170F4ACBEB(26, iVar1, Var2, fVar5, 1, 1);
							if (func_20(Local_3525[iVar7 /*2*/]))
							{
								Local_3525[iVar7 /*2*/].f_1 = 1;
								unk_0x38FF4F54BBF14419(Local_3525[iVar7 /*2*/], 0);
								unk_0x650BB0E111420EAF(Local_3525[iVar7 /*2*/], 1);
							}
							if (iVar7 != 0)
							{
								unk_0x924CDE68BA2ED3BA(iVar1);
							}
							bVar0 = true;
						}
					}
				}
			}
			else if ((unk_0x94E3E074F38DF86C() - iLocal_3253) > iVar6)
			{
				if (func_20(Local_3525[iVar7 /*2*/]))
				{
					switch (Local_3525[iVar7 /*2*/].f_1)
					{
						case 1:
							if (func_373(Local_3483.f_0, Local_3525[iVar7 /*2*/], 150f, 1))
							{
								if (iVar7 == 0 || iVar7 == 3)
								{
									unk_0xD11C043590A1D7B7(Local_3525[iVar7 /*2*/], 1, 1);
									unk_0x650BB0E111420EAF(Local_3525[iVar7 /*2*/], 0);
									Local_3525[iVar7 /*2*/].f_1 = 4;
								}
								else if (iVar7 == 1)
								{
									if (func_20(Local_3525[iVar7 + 1 /*2*/]))
									{
										unk_0xCD9701056CF2C3B8(Local_3525[iVar7 /*2*/], Local_3525[iVar7 + 1 /*2*/], 17, 0f, 0f, 0f, 0f, 0f);
										unk_0x650BB0E111420EAF(Local_3525[iVar7 /*2*/], 0);
										Local_3525[iVar7 /*2*/].f_1 = 4;
									}
								}
								else if (iVar7 == 2)
								{
									if (func_20(Local_3525[(iVar7 - 1) /*2*/]))
									{
										unk_0xCD9701056CF2C3B8(Local_3525[iVar7 /*2*/], Local_3525[(iVar7 - 1) /*2*/], 16, 0f, 0f, 0f, 0f, 0f);
										unk_0x650BB0E111420EAF(Local_3525[iVar7 /*2*/], 0);
										Local_3525[iVar7 /*2*/].f_1 = 4;
									}
								}
							}
							break;
						
						case 4:
							if (func_373(Local_3483.f_0, Local_3525[iVar7 /*2*/], 3f, 1))
							{
								unk_0x15848523A8959DBC(Local_3525[iVar7 /*2*/]);
								unk_0x86DD54980FE55567(&uVar8);
								unk_0x6349785089ED32B4(0, Local_3483.f_0, -1);
								unk_0x007AE2AA9E15FA7B(uVar8);
								unk_0x00E85C3B3BD34B10(Local_3525[iVar7 /*2*/], uVar8);
								unk_0x08377FB2AE4C6899(&uVar8);
								Local_3525[iVar7 /*2*/].f_1 = 6;
							}
							if (!func_372(Local_3525[iVar7 /*2*/], Param0, 300f))
							{
								func_54(&(Local_3525[iVar7 /*2*/]), 0);
								Local_3525[iVar7 /*2*/].f_1 = 7;
							}
							break;
						
						case 6:
							if (!func_372(Local_3525[iVar7 /*2*/], Param0, 150f))
							{
								func_54(&(Local_3525[iVar7 /*2*/]), 0);
								Local_3525[iVar7 /*2*/].f_1 = 7;
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
			if (Local_3506[iVar7 /*2*/].f_1 == 0)
			{
				if (!bVar0)
				{
					if (fLocal_3266 >= 111161f && iLocal_3263 > 1)
					{
						if (unk_0x623BDE1B17A9D9E3(iLocal_3262) && unk_0x1F02DB541727C048(iLocal_3262))
						{
							switch (iVar7)
							{
								case 0:
									iVar1 = iLocal_3272;
									Var2 = { 309.34f, -596.87f, 43.31f };
									fVar5 = 14.8f;
									break;
								
								case 1:
									iVar1 = iLocal_3272;
									Var2 = { 309.52f, -594.85f, 43.31f };
									fVar5 = 153.4102f;
									break;
								
								case 2:
									iVar1 = iLocal_3272;
									Var2 = { 316f, -588.77f, 42.3f };
									fVar5 = 207.556f;
									break;
								
								case 3:
									iVar1 = iLocal_3271;
									Var2 = { 317.1715f, -590.084f, 42.302f };
									fVar5 = 60.6f;
									break;
								
								case 4:
									iVar1 = iLocal_3272;
									Var2 = { 332.54f, -588.5f, 43.3f };
									fVar5 = 70.64f;
									break;
								
								case 5:
									iVar1 = iLocal_3272;
									Var2 = { 331.68f, -578.6f, 43.32f };
									fVar5 = 234.5983f;
									break;
								
								case 6:
									iVar1 = iLocal_3272;
									Var2 = { 362.56f, -589.32f, 43.33f };
									fVar5 = -21.77f;
									break;
								
								case 7:
									iVar1 = iLocal_3272;
									Var2 = { 363.3849f, -587.8508f, 42.3275f };
									fVar5 = 161.2689f;
									break;
								
								case 8:
									iVar1 = iLocal_3271;
									Var2 = { 358.5161f, -586.02f, 42.3275f };
									fVar5 = 67.7037f;
									break;
							}
							unk_0xE1324F59713746FA(iVar1);
							if (unk_0x9F746898F7881612(iVar1))
							{
								Local_3506[iVar7 /*2*/] = unk_0x2AD5F4170F4ACBEB(26, iVar1, Var2, fVar5, 1, 1);
								if (func_20(Local_3506[iVar7 /*2*/]))
								{
									Local_3506[iVar7 /*2*/].f_1 = 4;
									unk_0xCC61640A821F277C(Local_3506[iVar7 /*2*/], 1);
									unk_0xB195EE9DB37DA7F2(Local_3506[iVar7 /*2*/], 4, 1);
									unk_0x650BB0E111420EAF(Local_3506[iVar7 /*2*/], 1);
									switch (iVar7)
									{
										case 0:
											unk_0x2F933BB106547968(Local_3506[iVar7 /*2*/], 0, 0, 0, 0);
											unk_0x2F933BB106547968(Local_3506[iVar7 /*2*/], 2, 0, 0, 0);
											unk_0x2F933BB106547968(Local_3506[iVar7 /*2*/], 3, 0, 1, 0);
											unk_0x2F933BB106547968(Local_3506[iVar7 /*2*/], 4, 0, 0, 0);
											unk_0x2F933BB106547968(Local_3506[iVar7 /*2*/], 5, 0, 0, 0);
											unk_0x2F933BB106547968(Local_3506[iVar7 /*2*/], 8, 0, 0, 0);
											break;
										
										case 1:
											unk_0x2F933BB106547968(Local_3506[iVar7 /*2*/], 0, 1, 0, 0);
											unk_0x2F933BB106547968(Local_3506[iVar7 /*2*/], 2, 0, 0, 0);
											unk_0x2F933BB106547968(Local_3506[iVar7 /*2*/], 3, 0, 0, 0);
											unk_0x2F933BB106547968(Local_3506[iVar7 /*2*/], 4, 0, 0, 0);
											unk_0x2F933BB106547968(Local_3506[iVar7 /*2*/], 5, 0, 0, 0);
											unk_0x2F933BB106547968(Local_3506[iVar7 /*2*/], 8, 0, 0, 0);
											break;
										
										case 2:
											unk_0x2F933BB106547968(Local_3506[2 /*2*/], 0, 1, 0, 0);
											unk_0x2F933BB106547968(Local_3506[2 /*2*/], 2, 0, 0, 0);
											unk_0x2F933BB106547968(Local_3506[2 /*2*/], 3, 0, 1, 0);
											unk_0x2F933BB106547968(Local_3506[2 /*2*/], 4, 0, 1, 0);
											unk_0x2F933BB106547968(Local_3506[2 /*2*/], 5, 0, 1, 0);
											unk_0x2F933BB106547968(Local_3506[2 /*2*/], 8, 0, 0, 0);
											break;
										
										case 3:
											unk_0x2F933BB106547968(Local_3506[3 /*2*/], 0, 0, 0, 0);
											unk_0x2F933BB106547968(Local_3506[3 /*2*/], 3, 0, 0, 0);
											unk_0x2F933BB106547968(Local_3506[3 /*2*/], 4, 0, 0, 0);
											unk_0x2F933BB106547968(Local_3506[3 /*2*/], 8, 0, 0, 0);
											unk_0x2F933BB106547968(Local_3506[3 /*2*/], 11, 0, 0, 0);
											break;
										
										case 4:
											unk_0x2F933BB106547968(Local_3506[4 /*2*/], 0, 1, 0, 0);
											unk_0x2F933BB106547968(Local_3506[4 /*2*/], 2, 1, 1, 0);
											unk_0x2F933BB106547968(Local_3506[4 /*2*/], 3, 1, 0, 0);
											unk_0x2F933BB106547968(Local_3506[4 /*2*/], 4, 0, 0, 0);
											unk_0x2F933BB106547968(Local_3506[4 /*2*/], 5, 1, 1, 0);
											unk_0x2F933BB106547968(Local_3506[4 /*2*/], 8, 0, 0, 0);
											break;
										
										case 5:
											unk_0x2F933BB106547968(Local_3506[5 /*2*/], 0, 1, 0, 0);
											unk_0x2F933BB106547968(Local_3506[5 /*2*/], 2, 1, 1, 0);
											unk_0x2F933BB106547968(Local_3506[5 /*2*/], 3, 0, 2, 0);
											unk_0x2F933BB106547968(Local_3506[5 /*2*/], 4, 0, 0, 0);
											unk_0x2F933BB106547968(Local_3506[5 /*2*/], 5, 0, 2, 0);
											unk_0x2F933BB106547968(Local_3506[5 /*2*/], 8, 0, 0, 0);
											break;
										
										case 6:
											unk_0x2F933BB106547968(Local_3506[6 /*2*/], 0, 0, 0, 0);
											unk_0x2F933BB106547968(Local_3506[6 /*2*/], 2, 0, 1, 0);
											unk_0x2F933BB106547968(Local_3506[6 /*2*/], 3, 1, 1, 0);
											unk_0x2F933BB106547968(Local_3506[6 /*2*/], 4, 0, 0, 0);
											unk_0x2F933BB106547968(Local_3506[6 /*2*/], 5, 0, 0, 0);
											unk_0x2F933BB106547968(Local_3506[6 /*2*/], 8, 0, 0, 0);
											break;
										
										case 7:
											unk_0x2F933BB106547968(Local_3506[7 /*2*/], 0, 0, 0, 0);
											unk_0x2F933BB106547968(Local_3506[7 /*2*/], 2, 1, 0, 0);
											unk_0x2F933BB106547968(Local_3506[7 /*2*/], 3, 0, 0, 0);
											unk_0x2F933BB106547968(Local_3506[7 /*2*/], 4, 0, 0, 0);
											unk_0x2F933BB106547968(Local_3506[7 /*2*/], 5, 0, 0, 0);
											unk_0x2F933BB106547968(Local_3506[7 /*2*/], 8, 0, 0, 0);
											break;
										
										case 8:
											unk_0x2F933BB106547968(Local_3506[8 /*2*/], 0, 1, 1, 0);
											unk_0x2F933BB106547968(Local_3506[8 /*2*/], 3, 0, 0, 0);
											unk_0x2F933BB106547968(Local_3506[8 /*2*/], 4, 1, 2, 0);
											unk_0x2F933BB106547968(Local_3506[8 /*2*/], 8, 0, 0, 0);
											unk_0x2F933BB106547968(Local_3506[8 /*2*/], 11, 1, 2, 0);
											break;
										}
								}
								unk_0x924CDE68BA2ED3BA(iVar1);
								bVar0 = true;
							}
						}
					}
				}
			}
			else if ((unk_0x94E3E074F38DF86C() - iLocal_3253) > iVar6)
			{
				if (func_20(Local_3506[iVar7 /*2*/]))
				{
					switch (Local_3506[iVar7 /*2*/].f_1)
					{
						case 4:
							if (func_372(Local_3506[iVar7 /*2*/], Param0, 5f) || func_373(Local_3483.f_0, Local_3506[iVar7 /*2*/], 8f, 1))
							{
								unk_0x4E61D536D3C86A36(Local_3506[iVar7 /*2*/], -1);
								unk_0xCC61640A821F277C(Local_3506[iVar7 /*2*/], 1);
								Local_3506[iVar7 /*2*/].f_1 = 6;
							}
							break;
						
						case 5:
							break;
						
						case 6:
							if ((unk_0x1B30FA4AAC96F398(unk_0x17B5CC8A8615737D()) || unk_0x42B260AC2C6CA4ED(unk_0xBE369BE1BC57A796(), Local_3506[iVar7 /*2*/])) || unk_0x5ADC20A7C6AB8336(unk_0xBE369BE1BC57A796(), Local_3506[iVar7 /*2*/]))
							{
								if (unk_0x1F8F07D86DA1A701(Local_3506[iVar7 /*2*/], 474215631) != 1 && unk_0x1F8F07D86DA1A701(Local_3506[iVar7 /*2*/], 474215631) != 0)
								{
									unk_0x4E61D536D3C86A36(Local_3506[iVar7 /*2*/], -1);
								}
							}
							else if (!func_372(Local_3506[iVar7 /*2*/], Param0, 250f))
							{
								func_54(&(Local_3506[iVar7 /*2*/]), 0);
								Local_3506[iVar7 /*2*/].f_1 = 7;
							}
							break;
						}
					}
			}
			iVar7++;
		}
	}
	if ((unk_0x94E3E074F38DF86C() - iLocal_3253) > iVar6)
	{
		iLocal_3253 = unk_0x94E3E074F38DF86C();
	}
}

bool func_372(int iParam0, struct<3> Param1, float fParam4)
{
	return unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(iParam0, 1), Param1) <= (fParam4 * fParam4);
}

bool func_373(int iParam0, int iParam1, float fParam2, int iParam3)
{
	return unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(iParam0, iParam3), unk_0x57240623C1BC6E88(iParam1, iParam3)) <= (fParam2 * fParam2);
}

void func_374(float fParam0)
{
	int iVar0;
	
	switch (iLocal_3259)
	{
		case 0:
			if (fParam0 > 5000f)
			{
				unk_0xB57996B091C5D677(-1332.351f, -763.4576f, 10f, -1229.142f, -654.3546f, 42f);
				iLocal_3259++;
			}
			break;
		
		case 1:
			if (fParam0 > 10000f)
			{
				unk_0xB57996B091C5D677(-1274.148f, -842.6357f, 10f, -1139.836f, -703.7437f, 42f);
				iLocal_3259++;
			}
			break;
		
		case 2:
			if (fParam0 > 40000f)
			{
				iVar0 = 0;
				while (iVar0 <= 4)
				{
					unk_0x571422CE42B47889(uLocal_3290[iVar0], 0);
					iVar0++;
				}
				unk_0x286691C5D34EF4EC(-668.3635f, -658.3801f, 27.43382f, -440.022f, -657.4238f, 40.25127f, 40f, 0, 0, 1);
				iLocal_3259++;
			}
			break;
		
		case 3:
			if (fParam0 > 54000f)
			{
				iVar0 = 0;
				while (iVar0 <= 4)
				{
					unk_0x571422CE42B47889(uLocal_3290[iVar0], 0);
					iVar0++;
				}
				if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), -513.4877f, -598.4955f, 30.89824f, -695.001f, -593.8384f, 19.30782f, 60f, 0, 1, 0) || unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), -518.4041f, -622.8293f, 32.30106f, -608.4054f, -622.3588f, 26.78756f, 11f, 0, 1, 0))
				{
					unk_0x2A5905FD3A0ED2A0(-668.3635f, -658.3801f, 27.43382f, -440.022f, -657.4238f, 40.25127f, 40f, 0, 0, 0, 0, 0);
					unk_0x26D48449559660BA(-497.2258f, -710.6161f, 32.22013f, 5.85f, 0);
					unk_0x26D48449559660BA(-498.1823f, -719.3134f, 32.21197f, 2.15f, 0);
					unk_0x26D48449559660BA(-497.9032f, -724.9741f, 32.21197f, 3.8f, 0);
					unk_0x26D48449559660BA(-499.5668f, -731.9666f, 32.21197f, 7.3f, 0);
				}
				unk_0x176EBAF3DFCF7E54(-496.2885f, -681.5599f, 25f, -481.5988f, -668.7411f, 38f, 0, 0);
				unk_0xB57996B091C5D677(-496.2885f, -681.5599f, 25f, -481.5988f, -668.7411f, 38f);
				uLocal_3290[0] = unk_0xD1D19967E553E144(-497.2199f, -679.9771f, 22.0126f, -486.8124f, -672.0134f, 41.80794f, 0, 1, 1, 1);
				uLocal_3290[1] = unk_0xD1D19967E553E144(-489.7285f, -680.7455f, 22.0126f, -497.1978f, -690.007f, 41.80794f, 0, 1, 1, 1);
				iLocal_3259++;
			}
			break;
		
		case 4:
			if (fParam0 > 61000f)
			{
				iVar0 = 0;
				while (iVar0 <= 4)
				{
					unk_0x571422CE42B47889(uLocal_3290[iVar0], 0);
					iVar0++;
				}
				unk_0xD211CBCC0E735E4F(-668.3635f, -658.3801f, 27.43382f, -440.022f, -657.4238f, 40.25127f, 40f, 1);
				unk_0xB57996B091C5D677(-508.7908f, -764.6354f, 28f, -488.0437f, -702.8006f, 38f);
				uLocal_3290[0] = unk_0xD1D19967E553E144(-503.0949f, -754.9647f, 29f, -494.7944f, -730.1296f, 37f, 0, 1, 1, 1);
				iLocal_3259++;
			}
			break;
		
		case 5:
			if (fParam0 > 65000f)
			{
				iVar0 = 0;
				while (iVar0 <= 4)
				{
					unk_0x571422CE42B47889(uLocal_3290[iVar0], 0);
					iVar0++;
				}
				unk_0x700DE1253BAD8ADC(-496.2885f, -681.5599f, 25f, -481.5988f, -668.7411f, 38f, 0);
				unk_0x176EBAF3DFCF7E54(-463.2153f, -829.0475f, 22.4812f, -445.4645f, -813.1011f, 36.56588f, 0, 0);
				unk_0xB57996B091C5D677(-463.2153f, -829.0475f, 22.4812f, -445.4645f, -813.1011f, 36.56588f);
				uLocal_3290[0] = unk_0xD1D19967E553E144(-497.2199f, -679.9771f, 22.0126f, -486.8124f, -672.0134f, 41.80794f, 0, 1, 1, 1);
				iLocal_3259++;
			}
			break;
		
		case 6:
			if (fParam0 > 75000f)
			{
				unk_0x700DE1253BAD8ADC(-463.2153f, -829.0475f, 22.4812f, -445.4645f, -813.1011f, 36.56588f, 0);
				uLocal_3290[1] = unk_0xD1D19967E553E144(291.5848f, -588.8806f, 37f, 303.7603f, -579.5882f, 48f, 0, 1, 1, 1);
				iLocal_3259++;
			}
			break;
		
		case 7:
			if (fParam0 > 114500f)
			{
				func_291(1);
				iLocal_3259++;
			}
			break;
	}
}

void func_375()
{
	if (!iLocal_3209)
	{
		if (fLocal_3266 > (114436f - 4000f))
		{
			unk_0x985A2515CBAF7290("NIGEL_02_CRASH_A", 0, -1);
			unk_0x985A2515CBAF7290("NIGEL_02_CRASH_B", 0, -1);
			unk_0x985A2515CBAF7290("PANIC_WALLA_INTERIOR", 0, -1);
			if ((unk_0x985A2515CBAF7290("NIGEL_02_CRASH_A", 0, -1) && unk_0x985A2515CBAF7290("NIGEL_02_CRASH_B", 0, -1)) && unk_0x985A2515CBAF7290("PANIC_WALLA_INTERIOR", 0, -1))
			{
				iLocal_3209 = 1;
			}
		}
	}
	else
	{
		switch (iLocal_3247)
		{
			case 0:
				if (fLocal_3266 >= 114436f)
				{
					unk_0x4876B73C5A534970(-1, "DOOR_CRASH", 299.5664f, -584.6757f, 42.302f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					iLocal_3247++;
				}
				break;
			
			case 1:
				if (fLocal_3266 >= 114936f)
				{
					unk_0x4876B73C5A534970(-1, "SCREAMS", 310.5149f, -595.4158f, 42.302f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					unk_0xE8D4BE42CF780C50();
					unk_0x4876B73C5A534970(-1, "PANIC_WALLA", 316.4345f, -589.3902f, 42.2919f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					iLocal_3247++;
				}
				break;
			
			case 2:
				if (fLocal_3266 >= 117166f)
				{
					unk_0x4876B73C5A534970(-1, "WALL_CRASH", 325.66f, -589.01f, 42.3f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					iLocal_3247++;
				}
				break;
			
			case 3:
				if (fLocal_3266 >= 117736f)
				{
					unk_0x4876B73C5A534970(-1, "WALL_CRASH", 330.13f, -585.72f, 42.42f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					iLocal_3247++;
				}
				break;
			
			case 4:
				if (fLocal_3266 >= 118186f)
				{
					unk_0x4876B73C5A534970(-1, "SCREAMS", 331.7845f, -578.5184f, 42.3167f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					unk_0x4876B73C5A534970(-1, "PANIC_WALLA", 354.6585f, -584.2177f, 42.315f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					iLocal_3247++;
				}
				break;
			
			case 5:
				if (fLocal_3266 >= 118496f)
				{
					unk_0x4876B73C5A534970(-1, "WALL_CRASH", 337.89f, -582.38f, 42.33f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					iLocal_3247++;
				}
				break;
			
			case 6:
				if (fLocal_3266 >= 120986f)
				{
					unk_0x4876B73C5A534970(-1, "WINDOW_CRASH", 364.64f, -595.43f, 42.54f, "NIGEL_02_SOUNDSET", 0, 0, 0);
					iLocal_3247++;
				}
				break;
			
			default:
				break;
			}
	}
}

void func_376()
{
	if (!func_47() && bLocal_3169)
	{
		if (iLocal_3543 == 0)
		{
			if (fLocal_3266 >= 99000f)
			{
				if (func_314(Local_3556, 308.9679f, -591.075f, 43.29187f, 500f))
				{
					if (!unk_0x23E9113C762466ED(Local_3274.f_0))
					{
						unk_0xE1324F59713746FA(Local_3274.f_7);
						if (unk_0x9F746898F7881612(Local_3274.f_7))
						{
							Local_3274.f_0 = unk_0x521A82CF998EDB21(Local_3274.f_7, Local_3274.f_1, 1, 1, 0);
							if (func_10(Local_3274.f_0))
							{
								unk_0x04A5FAE5B1EB8E28(Local_3274.f_0, Local_3274.f_4, 2, 1);
								unk_0x394AE1BE8F25AC5B(Local_3274.f_0, Local_3274.f_1, 0, 0, 1);
								unk_0x98F0FA127445E343(Local_3274.f_0, 1);
								unk_0x924CDE68BA2ED3BA(Local_3274.f_7);
								iLocal_3543 = 1;
							}
						}
					}
				}
			}
		}
		else if (iLocal_3543 == 1)
		{
			if (fLocal_3266 >= 114436f)
			{
				if (unk_0x23E9113C762466ED(Local_3274.f_0))
				{
					func_53(&Local_3274);
					iLocal_3543 = 2;
				}
			}
		}
		else if (iLocal_3543 == 2)
		{
		}
		if (iLocal_3249 == 0)
		{
			if (fLocal_3266 >= 99000f)
			{
				if (func_314(Local_3556, 308.9679f, -591.075f, 43.29187f, 500f))
				{
					if (iLocal_3263 > 3)
					{
						uLocal_3285 = unk_0x0CE2297975A4AE38(299.4302f, -584.8925f, 42.2629f, 100f, "DES_hospitaldoors");
						if (unk_0xF1DEF26108040848(uLocal_3285))
						{
							unk_0x08B6ECD80C6BD224(uLocal_3285, 11);
							iLocal_3249++;
						}
					}
				}
			}
		}
		else if (iLocal_3249 == 1)
		{
			if (unk_0xF1DEF26108040848(uLocal_3285))
			{
				if (unk_0x46995C6DD9E9DF8F(uLocal_3285) == 5)
				{
					if (fLocal_3266 >= 114436f)
					{
						unk_0x08B6ECD80C6BD224(uLocal_3285, 6);
						iLocal_3249++;
					}
				}
				else if (unk_0x46995C6DD9E9DF8F(uLocal_3285) != 4)
				{
					unk_0x08B6ECD80C6BD224(uLocal_3285, 4);
				}
			}
			else
			{
				iLocal_3249 = (iLocal_3249 - 1);
			}
		}
	}
}

void func_377()
{
	unk_0xA0E7D0E8FE126EE8("rcmnigel2");
	if (func_10(Local_3497.f_0))
	{
		unk_0x482AE8C0EAF5AE07(Local_3497.f_0, 1084227584);
		unk_0x6741124666983482(Local_3497.f_0, 0);
		unk_0x98F0FA127445E343(Local_3497.f_0, 1);
		unk_0x4F94FF48185A8B4B(Local_3497.f_0, 0);
		unk_0x3D8459AD189E8571(Local_3497.f_0, 1);
		unk_0x524A422B74847594(Local_3497.f_0, 1, 1, 0);
		unk_0x48329CAC05D81A53(Local_3497.f_0, 1f);
		unk_0xEC0212C05F98C1DF(Local_3497.f_0, 0f);
	}
	if (func_20(Local_3483.f_0))
	{
		func_365(1090519040);
		if (unk_0xB5DF060B138CD2EA(Local_3483.f_0) > 110)
		{
			unk_0x4B04B4FAE554FA03(Local_3483.f_0, 110);
			unk_0x9AA7339B5138B5EF(Local_3483.f_0, 1);
		}
	}
	if (!unk_0xF7E1BD8196545EE3(393.38f, -617.53f, 27.91f, 30f))
	{
		unk_0x26D48449559660BA(393.38f, -617.53f, 27.91f, 35f, 0);
		unk_0x3FE1DC991D646A3B(393.38f, -617.53f, 27.91f, 8f, 0);
	}
}

void func_378()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iLocal_2831;
	iVar1 = iLocal_3004;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (iLocal_1319[iVar2] > 0)
		{
			unk_0xF8E2640CE709A221(iLocal_1319[iVar2], sLocal_3296);
		}
		iVar2++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (iLocal_1577[iVar2] > 0)
		{
			unk_0xF8E2640CE709A221(iLocal_1577[iVar2], sLocal_3296);
		}
		iVar2++;
	}
}

void func_379()
{
	iLocal_134 = 1;
}

void func_380()
{
	if (!iLocal_3229)
	{
		if (fLocal_3266 > 124136f)
		{
			if (func_20(Local_3483.f_0))
			{
				if (unk_0xB5DF060B138CD2EA(Local_3483.f_0) < 200)
				{
					unk_0x4B04B4FAE554FA03(Local_3483.f_0, 200);
				}
			}
			if (func_13(Local_3497.f_0))
			{
				unk_0x4B04B4FAE554FA03(Local_3497.f_0, 1000);
				if (!unk_0x9020DA20CF0C5F11(Local_3497.f_0, 4))
				{
					unk_0x5AD55E43AD73D13D(Local_3497.f_0, 4, 1);
				}
				unk_0x5DED87DD8464517B(Local_3497.f_0, 1);
				unk_0xC02DDC2677C29F43(Local_3497.f_0, 0);
				unk_0xC02DDC2677C29F43(Local_3497.f_0, 1);
				unk_0x1AC3F6005C5F3036(Local_3497.f_0);
				unk_0xE4FDA285C25BBA3A(Local_3497.f_0, 0f, 1f, 0.1f, 800f, 1850f, 1);
				unk_0xE4FDA285C25BBA3A(Local_3497.f_0, -0.2f, 1f, 0.5f, 50f, 650f, 1);
				unk_0xE4FDA285C25BBA3A(Local_3497.f_0, -0.7f, -0.2f, 0.3f, 50f, 500f, 1);
				iLocal_3229 = 1;
			}
		}
	}
}

void func_381()
{
	if (((((((((((fLocal_3266 > 3000f && fLocal_3266 < 3800f) || (fLocal_3266 > 14750f && fLocal_3266 < 15250f)) || (fLocal_3266 > 28500f && fLocal_3266 < 29400f)) || (fLocal_3266 > 34000f && fLocal_3266 < 35250f)) || (fLocal_3266 > 38800f && fLocal_3266 < 41000f)) || (fLocal_3266 > 47000f && fLocal_3266 < 48300f)) || (fLocal_3266 > 56000f && fLocal_3266 < 57200f)) || (fLocal_3266 > 66750f && fLocal_3266 < 67250f)) || (fLocal_3266 > 68500f && fLocal_3266 < 70500f)) || (fLocal_3266 > 101500f && fLocal_3266 < 102500f)) || (fLocal_3266 > 114500f && fLocal_3266 < 116500f))
	{
		unk_0x7B717981FC1BCC65(Local_3497.f_0, 1);
	}
	if ((((((fLocal_3266 > 6500f && fLocal_3266 < 7000f) || (fLocal_3266 > 7500f && fLocal_3266 < 8500f)) || (fLocal_3266 > 10500f && fLocal_3266 < 11250f)) || (fLocal_3266 > 11750f && fLocal_3266 < 12250f)) || (fLocal_3266 > 13250f && fLocal_3266 < 13500f)) || (fLocal_3266 > 14000f && fLocal_3266 < 14500f))
	{
		unk_0x5A2C4FFB2CA788C3(Local_3497.f_0);
	}
}

void func_382(float fParam0, float fParam1)
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
		if (func_13(Local_3490.f_0))
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
				if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), -423.2351f, -528.1853f, 22.33451f, -234.6718f, -527.774f, 30.57916f, 27f, 0, 1, 0))
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
			func_390(&fVar1, &Local_3490, Local_3497.f_0, fVar2, fVar3, fVar4, fVar5, fVar6, 1f, fVar7, fVar8, fVar9, 1, 0, 1097859072, 1);
			if (fParam1 > 114500f)
			{
				if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 290.1243f, -545.2184f, 38.39701f, 448.9054f, -554.2001f, 48.65286f, 19.25f, 0, 1, 0))
				{
					fVar1 = 1.2f;
				}
				else if (fParam1 < 120000f)
				{
					fVar1 = 2.2f;
					fVar10 = 1f;
				}
			}
			func_389(fParam0, fVar1, fVar10);
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
			if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), -423.2351f, -528.1853f, 22.33451f, -234.6718f, -527.774f, 30.57916f, 27f, 0, 1, 0))
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
		func_383(Local_3497.f_0, unk_0x17B5CC8A8615737D(), &fVar11, 1f, fVar12, fVar13, fVar14, fVar15, 1065353216, 1060320051, 1);
		if (fParam1 > 114500f && fParam1 < 118000f)
		{
			fVar11 = 2.2f;
		}
		if (fParam1 > 114500f)
		{
			if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), 290.1243f, -545.2184f, 38.39701f, 448.9054f, -554.2001f, 48.65286f, 19.25f, 0, 1, 0))
			{
				fVar11 = 1.2f;
			}
		}
		*fParam0 = fVar11;
	}
}

void func_383(int iParam0, int iParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, bool bParam10)
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
	
	if (iLocal_136 == 0)
	{
		if (*uParam2 < fParam3)
		{
			*uParam2 = fParam3;
			iLocal_136 = 1;
		}
	}
	if (fParam8 < 0f)
	{
		fParam8 = fLocal_1309;
	}
	fVar0 = (fParam3 * fParam7);
	if (!fVar0 > fParam3)
	{
		fVar0 = (fParam3 + 0.1f);
	}
	fVar5 = (fParam3 * fParam9);
	fVar6 = (((fParam6 - fParam5) * 0.4f) + fParam5);
	fVar2 = func_388(iParam0, iParam1);
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
	if (!unk_0xA929B2923D14E2F8(iParam1, 0))
	{
		if (func_386(iParam1, iParam0))
		{
			if (unk_0xFD0FE723227D5AB6(iParam1, 0))
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
			if (func_385(iParam0, iParam1) < fParam5)
			{
				fVar1 = func_384(iParam0, iParam1);
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
			iLocal_137 = 1;
		}
		else if (iLocal_137)
		{
			if (fVar2 < fVar6)
			{
				fVar4 = fParam3;
				iLocal_137 = 0;
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
		fVar1 = unk_0xE9F97E1BC0CACE24();
		fVar8 = ((fLocal_1316 * fParam3) * fVar1);
		fVar1 = (fVar4 - *uParam2);
		if (fVar1 > fVar8)
		{
			fVar1 = fVar8;
		}
		*uParam2 = (*uParam2 + fVar1);
	}
	else
	{
		fVar1 = unk_0xE9F97E1BC0CACE24();
		fVar8 = ((fLocal_1317 * fParam3) * fVar1);
		fVar1 = (fVar4 - *uParam2);
		if (fVar1 < (fVar8 * -1f))
		{
			fVar1 = (fVar8 * -1f);
		}
		*uParam2 = (*uParam2 + fVar1);
	}
	if (bParam10)
	{
		if (!unk_0xCA41A00932714525(iParam1))
		{
			if (unk_0xFD0FE723227D5AB6(iParam1, 0))
			{
				iVar9 = unk_0x60604E51E30D25B8(iParam1, 0);
				if (!unk_0xA929B2923D14E2F8(iVar9, 0))
				{
					iVar10 = unk_0x0324EEB10F81965F(iVar9);
					if (unk_0xC2AFD5CFEDC8F22A(iVar10) || unk_0xD28959FE5BC2D14D(iVar10))
					{
						if (unk_0x45CD66F0A131E554(iVar9, 0))
						{
							fVar1 = fVar4;
							if (fVar1 < fParam3)
							{
								fVar1 = fParam3;
							}
							fVar1 = (fVar1 - fParam3);
							fVar1 = (fVar1 / (fVar0 - fParam3));
							fVar1 = (fVar1 * fParam8);
							fVar1 = (fVar1 * (fLocal_1307 - fLocal_1308));
							fVar1 = (fVar1 + fLocal_1308);
							fLocal_1306 = fVar1;
							if (fLocal_1306 < fLocal_1308)
							{
								fLocal_1306 = fLocal_1308;
							}
							if (fLocal_1306 > fLocal_1307)
							{
								fLocal_1306 = fLocal_1307;
							}
							unk_0xAFC3FD1D11D31506(unk_0xBE369BE1BC57A796(), fLocal_1306);
						}
					}
				}
			}
		}
	}
}

float func_384(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	float fVar12;
	int iVar13;
	
	if (!unk_0xA929B2923D14E2F8(iParam0, 0))
	{
		Var0.f_0 = unk_0x3CC705FEE75AD924(iParam0);
		Var0.f_1 = unk_0x2CC1DDDC40661097(iParam0);
	}
	if (!unk_0xA929B2923D14E2F8(iParam1, 0))
	{
		Var3 = { unk_0x57240623C1BC6E88(iParam1, 1) };
		if (unk_0xFD0FE723227D5AB6(iParam1, 0))
		{
			iVar13 = unk_0x60604E51E30D25B8(iParam1, 0);
			Var9.f_0 = unk_0x3CC705FEE75AD924(iVar13);
			Var9.f_1 = unk_0x2CC1DDDC40661097(iVar13);
		}
		else
		{
			Var6 = { unk_0x854ED33E6D715648(iParam1, 0f, 5f, 0f) };
			Var9 = { Var6 - Var3 };
		}
	}
	fVar12 = unk_0xB1B7184870BDC5CC(Var0.f_0, Var0.f_1, Var9.f_0, Var9.f_1);
	return fVar12;
}

float func_385(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (!unk_0xA929B2923D14E2F8(iParam0, 0))
	{
		Var0 = { unk_0x57240623C1BC6E88(iParam0, 1) };
	}
	if (!unk_0xA929B2923D14E2F8(iParam1, 0))
	{
		Var3 = { unk_0x57240623C1BC6E88(iParam1, 1) };
	}
	Var6 = { Var3 - Var0 };
	Var6.f_2 = 0f;
	fVar9 = unk_0x652D2EEEF1D3E62C(Var6);
	return fVar9;
}

int func_386(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	
	if (!unk_0xCA41A00932714525(iParam0))
	{
		if (!unk_0xA929B2923D14E2F8(iParam1, 0))
		{
			if (unk_0x2315BB1606BC3DC3(iParam0, iParam1, 0))
			{
				return 0;
			}
		}
	}
	if (!unk_0xA929B2923D14E2F8(iParam0, 0))
	{
		Var0 = { unk_0x57240623C1BC6E88(iParam0, 1) };
	}
	if (unk_0x45CD66F0A131E554(iParam1, 0))
	{
		Var3 = { unk_0x57240623C1BC6E88(iParam1, 1) };
		Var6 = { unk_0x854ED33E6D715648(iParam1, 0f, 5f, 0f) };
		Var12 = { Var6 - Var3 };
	}
	Var9 = { Var3 - Var0 };
	Var9.f_2 = 0f;
	Var12.f_2 = 0f;
	fVar15 = func_387(Var9, Var12);
	if (fVar15 < 0f)
	{
		return 1;
	}
	return 0;
}

float func_387(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

float func_388(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	float fVar12;
	
	if (unk_0x45CD66F0A131E554(iParam0, 0))
	{
		Var0.f_0 = unk_0x3CC705FEE75AD924(iParam0);
		Var0.f_1 = unk_0x2CC1DDDC40661097(iParam0);
		Var6 = { unk_0x57240623C1BC6E88(iParam0, 1) };
	}
	if (!unk_0xA929B2923D14E2F8(iParam1, 0))
	{
		Var9 = { unk_0x57240623C1BC6E88(iParam1, 1) };
	}
	Var3 = { Var9 - Var6 };
	fVar12 = unk_0xB1B7184870BDC5CC(Var3.f_0, Var3.f_1, Var0.f_0, Var0.f_1);
	fVar12 = (fVar12 + -90f);
	if (fVar12 < 0f)
	{
		fVar12 = (fVar12 * -1f);
	}
	Var3.f_2 = 0f;
	return (unk_0x652D2EEEF1D3E62C(Var3) * unk_0x0BADBFA3B172435F(fVar12));
}

void func_389(var uParam0, float fParam1, float fParam2)
{
	*uParam0 = (*uParam0 + ((((fParam1 - *uParam0) * fParam2) * 30f) * unk_0x0000000050597EE2()));
}

void func_390(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, float fParam13, float fParam14, int iParam15)
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
	
	Var0 = { unk_0x57240623C1BC6E88(*iParam1, 1) };
	Var3 = { unk_0x57240623C1BC6E88(iParam2, 1) };
	Var6 = { unk_0x3ACAA2B62026685B(iParam2, Var0) };
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
			if (!unk_0x1DCFA79E268F3EE5(iParam2) || iVar13)
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
			if (unk_0xDB3C032119056A8B(unk_0xBE369BE1BC57A796()) && iParam15)
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
		fVar14 = (unk_0x13B7ACE69D27E3E4(iParam2) - unk_0x13B7ACE69D27E3E4(*iParam1));
		if (fVar14 > 0f)
		{
			fVar10 = (fVar10 * 0.5f);
		}
		if (unk_0xDB3C032119056A8B(unk_0xBE369BE1BC57A796()) && iParam15)
		{
			*uParam0 = (2f + fVar10);
		}
		else if (unk_0x13B7ACE69D27E3E4(*iParam1) < 5f && fVar14 > 0f)
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
		if (unk_0xDB3C032119056A8B(unk_0xBE369BE1BC57A796()) && iParam15)
		{
			fParam14 = (fParam14 * 2f);
			fParam13 = (fParam13 * 2f);
		}
		if (*uParam0 > 1f)
		{
			fVar15 = (fParam13 + ((fParam14 - fParam13) * (*uParam0 - 1f)));
		}
		unk_0x0753EA395BE94F83(*iParam1, -fVar15);
	}
}

void func_391()
{
	int iVar0;
	int iVar1;
	
	if ((unk_0x94E3E074F38DF86C() - iLocal_3254) > 50)
	{
		if (func_13(iLocal_3004[3]))
		{
			if (fLocal_3266 > 28750f && fLocal_3266 < 29750f)
			{
				unk_0xCA5EA8FBB2C07DB8(iLocal_3004[3], 2);
				unk_0xD0BA19E7E2215CA7(iLocal_3004[3], 2f);
				if (!iLocal_3216[0])
				{
					unk_0x64A46E3DF379F29C(iLocal_3004[3], 3500, unk_0x765F5B806B517045("HELDDOWN"), 0);
					iLocal_3216[0] = 1;
				}
			}
			else
			{
				unk_0xCA5EA8FBB2C07DB8(iLocal_3004[3], 1);
				unk_0xD0BA19E7E2215CA7(iLocal_3004[3], 1f);
			}
		}
		if (func_13(iLocal_3004[5]))
		{
			if (fLocal_3266 > 34500f && fLocal_3266 < 35500f)
			{
				unk_0xCA5EA8FBB2C07DB8(iLocal_3004[5], 2);
				unk_0xD0BA19E7E2215CA7(iLocal_3004[5], 2f);
				if (!iLocal_3216[1])
				{
					unk_0x64A46E3DF379F29C(iLocal_3004[5], 3000, unk_0x765F5B806B517045("HELDDOWN"), 0);
					iLocal_3216[1] = 1;
				}
			}
			else
			{
				unk_0xCA5EA8FBB2C07DB8(iLocal_3004[5], 1);
				unk_0xD0BA19E7E2215CA7(iLocal_3004[5], 1f);
			}
		}
		if (func_13(iLocal_3004[8]))
		{
			if (!bLocal_3214)
			{
				bLocal_3214 = func_392(iLocal_3004[8], joaat("s_m_y_garbage"), 26);
			}
			if (fLocal_3266 > 46000f && fLocal_3266 < 47000f)
			{
				unk_0xCA5EA8FBB2C07DB8(iLocal_3004[8], 2);
				unk_0xD0BA19E7E2215CA7(iLocal_3004[8], 2f);
				if (!iLocal_3216[2])
				{
					unk_0x64A46E3DF379F29C(iLocal_3004[8], 3500, unk_0x765F5B806B517045("HELDDOWN"), 0);
					iLocal_3216[2] = 1;
				}
			}
			else if (fLocal_3266 > 47500f && fLocal_3266 < 48500f)
			{
				unk_0xCA5EA8FBB2C07DB8(iLocal_3004[8], 2);
				unk_0xD0BA19E7E2215CA7(iLocal_3004[8], 2f);
			}
			else
			{
				unk_0xCA5EA8FBB2C07DB8(iLocal_3004[8], 1);
				unk_0xD0BA19E7E2215CA7(iLocal_3004[8], 1f);
			}
		}
		if (func_13(iLocal_3004[9]))
		{
			if (!bLocal_3215)
			{
				bLocal_3215 = func_392(iLocal_3004[9], joaat("a_m_y_cyclist_01"), 26);
			}
		}
		if (func_13(iLocal_3004[16]))
		{
			if (fLocal_3266 > 69000f && fLocal_3266 < 71000f)
			{
				unk_0xCA5EA8FBB2C07DB8(iLocal_3004[16], 2);
				unk_0xD0BA19E7E2215CA7(iLocal_3004[16], 2f);
				if (!iLocal_3216[3])
				{
					unk_0x64A46E3DF379F29C(iLocal_3004[16], 3500, unk_0x765F5B806B517045("HELDDOWN"), 0);
					iLocal_3216[3] = 1;
				}
			}
			else
			{
				unk_0xCA5EA8FBB2C07DB8(iLocal_3004[16], 1);
				unk_0xD0BA19E7E2215CA7(iLocal_3004[16], 1f);
			}
		}
		if (func_13(iLocal_2831[17]))
		{
			if (!iLocal_3216[4])
			{
				if (fLocal_3266 > 78700f && fLocal_3266 < 79300f)
				{
					unk_0x64A46E3DF379F29C(iLocal_2831[17], 3000, unk_0x765F5B806B517045("HELDDOWN"), 0);
					iLocal_3216[4] = 1;
				}
			}
		}
		if (func_13(iLocal_2831[19]))
		{
			if (!iLocal_3216[4])
			{
				if (fLocal_3266 > 79950f && fLocal_3266 < 82300f)
				{
					unk_0x64A46E3DF379F29C(iLocal_2831[19], 3000, unk_0x765F5B806B517045("HELDDOWN"), 0);
					iLocal_3216[4] = 1;
				}
			}
		}
		if (func_13(iLocal_3004[20]))
		{
			if (!iLocal_3216[5])
			{
				if (fLocal_3266 > 84000f && fLocal_3266 < 84750f)
				{
					unk_0x64A46E3DF379F29C(iLocal_3004[20], 3000, unk_0x765F5B806B517045("HELDDOWN"), 0);
					iLocal_3216[5] = 1;
				}
			}
		}
		if (func_13(iLocal_3004[21]))
		{
			if (fLocal_3266 > 88000f && fLocal_3266 < 90502f)
			{
				unk_0xCA5EA8FBB2C07DB8(iLocal_3004[21], 2);
				unk_0xD0BA19E7E2215CA7(iLocal_3004[21], 2f);
				if (!iLocal_3216[6])
				{
					unk_0x64A46E3DF379F29C(iLocal_3004[21], 3500, unk_0x765F5B806B517045("HELDDOWN"), 0);
					iLocal_3216[6] = 1;
				}
			}
			else
			{
				unk_0xCA5EA8FBB2C07DB8(iLocal_3004[21], 1);
				unk_0xD0BA19E7E2215CA7(iLocal_3004[21], 1f);
			}
		}
		if (func_13(iLocal_3004[23]))
		{
			if (fLocal_3266 > 84800f && fLocal_3266 < 87000f)
			{
				unk_0xCA5EA8FBB2C07DB8(iLocal_3004[23], 2);
				unk_0xD0BA19E7E2215CA7(iLocal_3004[23], 2f);
				if (!iLocal_3216[7])
				{
					unk_0x64A46E3DF379F29C(iLocal_3004[23], 3500, unk_0x765F5B806B517045("HELDDOWN"), 0);
					iLocal_3216[7] = 1;
				}
			}
			else
			{
				unk_0xCA5EA8FBB2C07DB8(iLocal_3004[23], 1);
				unk_0xD0BA19E7E2215CA7(iLocal_3004[23], 1f);
			}
		}
		if (func_13(iLocal_2831[21]))
		{
			if (!iLocal_3216[8])
			{
				if (fLocal_3266 > 98800f && fLocal_3266 < 99400f)
				{
					unk_0x64A46E3DF379F29C(iLocal_2831[21], 2000, unk_0x765F5B806B517045("HELDDOWN"), 0);
					iLocal_3216[8] = 1;
				}
			}
		}
		if (func_13(iLocal_2831[23]))
		{
			if (fLocal_3266 > 91200f && fLocal_3266 < 92200f)
			{
				unk_0xCA5EA8FBB2C07DB8(iLocal_2831[23], 2);
				unk_0xD0BA19E7E2215CA7(iLocal_2831[23], 2f);
				if (!iLocal_3216[9])
				{
					unk_0x64A46E3DF379F29C(iLocal_2831[23], 2000, unk_0x765F5B806B517045("HELDDOWN"), 0);
					iLocal_3216[9] = 1;
				}
			}
			else
			{
				unk_0xCA5EA8FBB2C07DB8(iLocal_2831[23], 1);
				unk_0xD0BA19E7E2215CA7(iLocal_2831[23], 1f);
			}
		}
		if (func_13(iLocal_3004[28]))
		{
			if (fLocal_3266 > 93500f && fLocal_3266 < 95000f)
			{
				unk_0xCA5EA8FBB2C07DB8(iLocal_3004[28], 2);
				unk_0xD0BA19E7E2215CA7(iLocal_3004[28], 2f);
				if (!iLocal_3216[10])
				{
					unk_0x64A46E3DF379F29C(iLocal_3004[28], 3500, unk_0x765F5B806B517045("HELDDOWN"), 0);
					iLocal_3216[10] = 1;
				}
			}
			else
			{
				unk_0xCA5EA8FBB2C07DB8(iLocal_3004[28], 1);
				unk_0xD0BA19E7E2215CA7(iLocal_3004[28], 1f);
			}
		}
		if (func_13(iLocal_3004[29]))
		{
			if (!iLocal_3216[11])
			{
				if (fLocal_3266 > 104500f && fLocal_3266 < 105000f)
				{
					unk_0x64A46E3DF379F29C(iLocal_3004[29], 2000, unk_0x765F5B806B517045("HELDDOWN"), 0);
					iLocal_3216[11] = 1;
				}
			}
		}
		if (func_13(iLocal_2933[31]))
		{
			if (!unk_0x8358BFE2634F295E(iLocal_2933[31], 2))
			{
				unk_0xDE043EE8B3F02B86(iLocal_2933[31], 2, 0, 0);
			}
			if (!unk_0x8358BFE2634F295E(iLocal_2933[31], 3))
			{
				unk_0xDE043EE8B3F02B86(iLocal_2933[31], 3, 0, 0);
			}
			if (!unk_0xA06AE352748BB860(iLocal_2933[31]))
			{
				unk_0x71FF26FDD46DECD5(iLocal_2933[31], 1);
			}
		}
		if (func_13(iLocal_3004[22]))
		{
			if (!unk_0xA06AE352748BB860(iLocal_3004[22]))
			{
				unk_0x71FF26FDD46DECD5(iLocal_3004[22], 1);
			}
		}
		if (func_13(iLocal_3004[19]))
		{
			iVar0 = -1;
			iVar1 = -1;
			unk_0xA22F7633B73159D3(iLocal_3004[19], &iVar0, &iVar1);
			if (iVar0 != 1)
			{
				unk_0xCA5EA8FBB2C07DB8(iLocal_3004[19], 2);
				unk_0xD0BA19E7E2215CA7(iLocal_3004[19], 2f);
			}
			if (iLocal_3257 == -1)
			{
				if (unk_0x72222684DEA44B9F(iLocal_3004[19]))
				{
					iLocal_3257 = unk_0x3DF2C10FD29336A3();
					unk_0xEE4ED1F88396A702(iLocal_3257, "FAKE_REVS_VEHICLE_02", iLocal_3004[19], "NIGEL_02_SOUNDSET", 0, 0);
				}
			}
			else if (!unk_0x7DFE463FA760D738(iLocal_3257))
			{
				if (!unk_0x72222684DEA44B9F(iLocal_3004[19]))
				{
					unk_0x2EB37CDED0E516F3(iLocal_3257);
					unk_0xB47CC6339ADB0B67(iLocal_3257);
					iLocal_3257 = -1;
				}
			}
		}
		iLocal_3254 = unk_0x94E3E074F38DF86C();
	}
}

int func_392(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x45CD66F0A131E554(iParam0, 0))
	{
		bVar0 = false;
		iVar1 = unk_0x17206B315923243C(iParam0, -1, 0);
		if (unk_0x23E9113C762466ED(iVar1))
		{
			if (iVar1 != unk_0x17B5CC8A8615737D())
			{
				if (unk_0x0324EEB10F81965F(iVar1) != iParam1)
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
			unk_0xE1324F59713746FA(iParam1);
			if (unk_0x9F746898F7881612(iParam1))
			{
				if (unk_0x23E9113C762466ED(iVar1))
				{
					unk_0xF0F77C99098F999B(iVar1, 1, 0);
					unk_0x478AE709A466CB7E(&iVar1);
				}
				iVar2 = unk_0x3FBC0964EB7878AF(iParam0, iParam2, iParam1, -1, 0, 0);
				if (func_394(unk_0x0324EEB10F81965F(iParam0)))
				{
					unk_0x3BB70315907D9456(iVar2, iLocal_2599);
				}
				unk_0x38FF4F54BBF14419(iVar2, 0);
				unk_0xCC61640A821F277C(iVar2, 1);
				unk_0x6FE87B0CB5BE8FB1(iVar2, 1);
				unk_0x9AA7339B5138B5EF(iVar2, 0);
				unk_0x6018E338F7ABCE75(iVar2, 32, 0);
				if (bLocal_153)
				{
					unk_0xB195EE9DB37DA7F2(iVar2, 8192, 1);
					unk_0xB195EE9DB37DA7F2(iVar2, 65536, 1);
					unk_0xB195EE9DB37DA7F2(iVar2, 2, 0);
					unk_0x3C87A0A1456D6253(iParam0, 1);
				}
				unk_0x924CDE68BA2ED3BA(iParam1);
				func_393(iVar2);
				return 1;
			}
		}
	}
	return 0;
}

void func_393(int iParam0)
{
	if (unk_0x23E9113C762466ED(iParam0))
	{
		unk_0x6500ADB01E821BC0(&iParam0);
	}
}

int func_394(int iParam0)
{
	if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("polmav")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff"))
	{
		return 1;
	}
	return 0;
}

void func_395(int iParam0, float fParam1)
{
	float fVar0;
	struct<3> Var1;
	int iVar4;
	
	fVar0 = unk_0xE9F97E1BC0CACE24();
	fVar0 = (fVar0 * 1000f);
	bLocal_151 = false;
	if (!bLocal_133)
	{
		if (bLocal_132)
		{
			func_416();
			if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
			{
				Var1 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
				unk_0x1B60289D0F2A2E3C(Var1, 1000f, 1, 0, 0, 0);
			}
			bLocal_133 = true;
		}
	}
	else if (!bLocal_132)
	{
		func_91();
		bLocal_133 = false;
	}
	if (bLocal_132)
	{
		fParam1 = 1f;
		unk_0x5BD872FA7F0EC076(0f);
	}
	if (!bLocal_126)
	{
		if (iLocal_121)
		{
			fLocal_1303 = 0f;
		}
		else
		{
			fLocal_1303 = 1f;
		}
		if (unk_0x45CD66F0A131E554(iParam0, 0))
		{
			if (unk_0x72222684DEA44B9F(iParam0))
			{
				if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
				{
					if (func_386(unk_0x17B5CC8A8615737D(), iParam0))
					{
						iLocal_131 = 1;
					}
					else
					{
						iLocal_131 = 0;
					}
				}
				fLocal_1300 = unk_0x76423F51C82ED0C8(iParam0);
				unk_0x1ECBE6CE58710983(iParam0, ((fParam1 * fLocal_1301) * fLocal_1303));
				if (bLocal_130)
				{
					func_415(iParam0, fLocal_1300);
					func_414(iParam0, fLocal_1310);
					if (fLocal_1305 > 1000f)
					{
						if (iLocal_1877 == 0)
						{
							func_413(iParam0, fLocal_1310);
						}
						fVar0 = ((fLocal_1300 + 4000f) + (unk_0xBBDA792448DB5A89(iLocal_1877) * 2000f));
						func_412(iParam0, fVar0, fLocal_1304);
						iLocal_1877++;
						if (iLocal_1877 > 2)
						{
							fLocal_1305 = 0f;
						}
					}
					else
					{
						iLocal_1877 = 0;
						fLocal_1305 = (fLocal_1305 + (unk_0xE9F97E1BC0CACE24() * 1000f));
					}
				}
			}
		}
		iVar4 = 0;
		if (unk_0x45CD66F0A131E554(iParam0, 0))
		{
			if (unk_0x72222684DEA44B9F(iParam0))
			{
				iVar4 = 1;
			}
		}
		if (fLocal_1300 == 0f || unk_0x25BD4C26D84038CD())
		{
			iVar4 = 1;
		}
		if (iVar4 && !bLocal_138)
		{
			if (!iLocal_120)
			{
				func_409(iParam0, ((fParam1 * fLocal_1301) * fLocal_1303), 0);
				if (!iLocal_141)
				{
				}
				iLocal_141 = 0;
			}
			if (bLocal_123)
			{
				func_408(iParam0);
			}
			if (!iLocal_120)
			{
				func_398(iParam0, ((fParam1 * fLocal_1301) * fLocal_1303), 0);
			}
		}
		if (iLocal_128)
		{
			if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
			{
				if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
				{
					iLocal_3086 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
					Local_2556 = { unk_0x57240623C1BC6E88(iLocal_3086, 1) };
					unk_0x356B03AFE1FA3C9A(iLocal_3086, &fLocal_584, &fLocal_585, &fLocal_586, &fLocal_587);
				}
			}
			iLocal_128 = 0;
		}
		if (iLocal_127)
		{
			if (unk_0x23E9113C762466ED(iLocal_3086))
			{
				func_83(iLocal_3087);
				iLocal_3087 = iLocal_3086;
			}
			if (unk_0x45CD66F0A131E554(iLocal_3087, 0))
			{
				unk_0x5DC8C2F2F8A363C2(iLocal_3087, Local_2556, 1, 0, 0, 1);
				unk_0xFE2306F4BAC122B2(iLocal_3087, fLocal_584, fLocal_585, fLocal_586, fLocal_587);
			}
			fLocal_1299 = fLocal_1302;
			iLocal_120 = 1;
			iLocal_127 = 0;
		}
		if (iLocal_120)
		{
			while (!func_396(&iParam0, fLocal_1299))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_121 = 1;
		}
		if (iLocal_134)
		{
			iLocal_134 = 0;
		}
	}
}

int func_396(int iParam0, float fParam1)
{
	if (!iLocal_135)
	{
		iLocal_120 = 1;
		func_78();
		if (unk_0x45CD66F0A131E554(*iParam0, 0))
		{
			if (unk_0x72222684DEA44B9F(*iParam0))
			{
				unk_0x394D4A83F07AE208(*iParam0);
				unk_0x31589F3476134C55(*iParam0);
			}
			if (!iLocal_1864 == -1)
			{
				while (!func_397(iParam0, iLocal_1864, fParam1, 1, 0, 0, 0, 0))
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				if (!bLocal_125)
				{
					iLocal_121 = 1;
					fLocal_1303 = 0f;
					iLocal_1865 = 0;
					iLocal_1867 = 0;
					iLocal_1866 = 0;
					iLocal_1861 = 0;
					iLocal_1862 = 0;
					iLocal_1863 = 0;
					iLocal_1868 = 0;
					iLocal_1869 = 0;
					iLocal_1870 = 0;
				}
			}
		}
		iLocal_135 = 1;
	}
	else
	{
		if (unk_0x45CD66F0A131E554(*iParam0, 0))
		{
			if (unk_0x72222684DEA44B9F(*iParam0))
			{
				unk_0x1ECBE6CE58710983(*iParam0, ((1f * fLocal_1301) * fLocal_1303));
				func_397(iParam0, iLocal_1864, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_1300 = fParam1;
		iLocal_1871 = 0;
		iLocal_1874 = 0;
		fLocal_1315 = 0f;
		fLocal_1314 = 0f;
		func_398(*iParam0, ((1f * fLocal_1301) * fLocal_1303), 1);
		func_409(*iParam0, ((1f * fLocal_1301) * fLocal_1303), 1);
		func_408(*iParam0);
		if ((iLocal_1868 == 0 && iLocal_1869 == 0) && iLocal_1870 == 0)
		{
			iLocal_121 = 0;
			iLocal_120 = 0;
			iLocal_135 = 0;
			return 1;
		}
	}
	return 0;
}

int func_397(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	float fVar0;
	
	if (iParam1 > 0)
	{
		unk_0xF5B59A4EB5622187(iParam1, &cLocal_2583);
		if (unk_0x63781672EC63FB83(iParam1, &cLocal_2583))
		{
			if (unk_0x45CD66F0A131E554(*uParam0, 0))
			{
				if (!unk_0x72222684DEA44B9F(*uParam0))
				{
					unk_0x98F0FA127445E343(*uParam0, 0);
					if (bParam4)
					{
						unk_0x76370B982D7FB115(*uParam0, iParam1, &cLocal_2583, 1092616192, 786603);
					}
					else
					{
						if (iParam1 != iLocal_1872 && iParam1 != iLocal_1873)
						{
							if (bParam7)
							{
								unk_0xAC472F160C64056B(*uParam0, iParam1, &cLocal_2583, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								unk_0xAC472F160C64056B(*uParam0, iParam1, &cLocal_2583, 1 | 4, 0, 786603);
							}
							else
							{
								unk_0x9D14C436A01A0B15(*uParam0, iParam1, &cLocal_2583, 1);
							}
						}
						else
						{
							unk_0x9D14C436A01A0B15(*uParam0, iParam1, &cLocal_2583, 1);
						}
						unk_0x367ABC65EA3C0FDD(*uParam0, fParam2);
						if (bParam5)
						{
							unk_0x2099B88C16CE7D57(*uParam0, 1);
						}
						return 1;
					}
				}
				else if (unk_0xE8A3FB5086332078(*uParam0) == unk_0x73E840EE8F5FADA3(iParam1, &cLocal_2583))
				{
					fVar0 = unk_0x76423F51C82ED0C8(*uParam0);
					unk_0x367ABC65EA3C0FDD(*uParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						unk_0x394D4A83F07AE208(*uParam0);
						unk_0xF5B59A4EB5622187(iParam1, &cLocal_2583);
					}
					if (bParam5)
					{
						unk_0x2099B88C16CE7D57(*uParam0, 1);
					}
					return 1;
				}
				else
				{
					unk_0x394D4A83F07AE208(*uParam0);
					unk_0x98F0FA127445E343(*uParam0, 0);
					if (bParam4)
					{
						unk_0x76370B982D7FB115(*uParam0, iParam1, &cLocal_2583, 1092616192, 786603);
					}
					else if (iParam1 != iLocal_1872 && iParam1 != iLocal_1873)
					{
						if (bParam7)
						{
							unk_0xAC472F160C64056B(*uParam0, iParam1, &cLocal_2583, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							unk_0xAC472F160C64056B(*uParam0, iParam1, &cLocal_2583, 1 | 4, 0, 786603);
						}
						else
						{
							unk_0x9D14C436A01A0B15(*uParam0, iParam1, &cLocal_2583, 1);
						}
					}
					else
					{
						unk_0x9D14C436A01A0B15(*uParam0, iParam1, &cLocal_2583, 1);
					}
					unk_0x367ABC65EA3C0FDD(*uParam0, fParam2);
					if (bParam5)
					{
						unk_0x2099B88C16CE7D57(*uParam0, 1);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_398(int iParam0, float fParam1, bool bParam2)
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
	
	bVar15 = unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796());
	uVar16 = unk_0xB4BE8FC646019C61();
	uVar17 = unk_0x18EF36DA59C7300B();
	bVar18 = false;
	if (bVar15)
	{
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
		{
			iVar2 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
		}
		Var9 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
	}
	if (unk_0x45CD66F0A131E554(iParam0, 0))
	{
		iVar0 = iLocal_1867;
		while (iVar0 < 70)
		{
			if (iLocal_1648[iVar0] != 99)
			{
				if (iLocal_1648[iVar0] == 0)
				{
					if (iLocal_1577[iVar0] > 0)
					{
						if (!iLocal_120)
						{
							if (fLocal_1300 > (fLocal_872[iVar0] - (7000f * fParam1)))
							{
								if (func_394(iLocal_2757[iVar0]))
								{
									unk_0xEB79FECD9022AAF0(&(iLocal_1719[iVar0]), 0);
								}
								else if (unk_0xD28959FE5BC2D14D(iLocal_2757[iVar0]))
								{
									unk_0xEB79FECD9022AAF0(&(iLocal_1719[iVar0]), 2);
								}
								unk_0x21E7933CCC7B3724(&(iLocal_1719[iVar0]), 1);
								iLocal_1648[iVar0]++;
								iLocal_1869++;
							}
						}
						else
						{
							fVar12 = (fLocal_1300 - fLocal_872[iVar0]);
							fVar12 = (fVar12 * fLocal_943[iVar0]);
							if (fVar12 >= 0f)
							{
								if (fVar12 < func_407(iLocal_1577[iVar0]))
								{
									if (func_394(iLocal_2757[iVar0]))
									{
										unk_0xEB79FECD9022AAF0(&(iLocal_1719[iVar0]), 0);
									}
									else if (unk_0xD28959FE5BC2D14D(iLocal_2757[iVar0]))
									{
										unk_0xEB79FECD9022AAF0(&(iLocal_1719[iVar0]), 2);
									}
									unk_0x21E7933CCC7B3724(&(iLocal_1719[iVar0]), 1);
									iLocal_1648[iVar0]++;
									iLocal_1869++;
								}
								else
								{
									iLocal_1648[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_1648[iVar0] = 99;
					}
				}
				else if (iLocal_1648[iVar0] == 1)
				{
					bVar14 = false;
					unk_0xF5B59A4EB5622187(iLocal_1577[iVar0], &cLocal_2583);
					if (unk_0x48B8265059381CD0(iLocal_1719[iVar0], 0))
					{
						unk_0xE1324F59713746FA(func_87());
						bVar14 = unk_0x9F746898F7881612(func_87());
					}
					else if (!bLocal_147 && ((!unk_0x48B8265059381CD0(iLocal_1719[iVar0], 2) && uVar16) || (unk_0x48B8265059381CD0(iLocal_1719[iVar0], 2) && uVar17)))
					{
						bVar14 = true;
					}
					else
					{
						unk_0xE1324F59713746FA(func_90());
						bVar14 = unk_0x9F746898F7881612(func_90());
					}
					if (bVar14)
					{
						if (!unk_0x23E9113C762466ED(iLocal_3004[iVar0]))
						{
							unk_0xE1324F59713746FA(iLocal_2757[iVar0]);
							if (unk_0x9F746898F7881612(iLocal_2757[iVar0]) && unk_0x63781672EC63FB83(iLocal_1577[iVar0], &cLocal_2583))
							{
								if (fLocal_1300 >= (fLocal_872[iVar0] - (fLocal_1313 * fParam1)))
								{
									if ((iLocal_134 || bParam2) || (!bLocal_151 && !func_406(Local_2345[iVar0 /*3*/], Var9, 5f, fLocal_1311)))
									{
										if (bLocal_130)
										{
											func_405(Local_2345[iVar0 /*3*/], Var9, fLocal_1304);
										}
										iLocal_3004[iVar0] = unk_0x692A2891A2BA7352(iLocal_2757[iVar0], Local_2345[iVar0 /*3*/], 0f, 0, 0);
										if (iLocal_2757[iVar0] == joaat("polmav"))
										{
											unk_0x866129976ECB1FB9(iLocal_3004[iVar0], 0);
										}
										if (iLocal_143 && !unk_0x48B8265059381CD0(iLocal_1719[iVar0], 0))
										{
											func_404(iLocal_3004[iVar0]);
										}
										if (unk_0x48B8265059381CD0(iLocal_1719[iVar0], 3))
										{
											unk_0xBDE4C59FD939CE4E(iLocal_3004[iVar0], 1);
										}
										unk_0x394AE1BE8F25AC5B(iLocal_3004[iVar0], Local_2345[iVar0 /*3*/], 0, 0, 1);
										unk_0xFE2306F4BAC122B2(iLocal_3004[iVar0], fLocal_588[iVar0], fLocal_659[iVar0], fLocal_730[iVar0], fLocal_801[iVar0]);
										if (unk_0xC2AFD5CFEDC8F22A(iLocal_2757[iVar0]) || unk_0xD28959FE5BC2D14D(iLocal_2757[iVar0]))
										{
											unk_0x482AE8C0EAF5AE07(iLocal_3004[iVar0], 1084227584);
										}
										if (!unk_0x48B8265059381CD0(iLocal_1719[iVar0], 0))
										{
											unk_0x524A422B74847594(iLocal_3004[iVar0], 1, 1, 0);
											if (unk_0x80BC37C67CB292E5() > 19 || unk_0x80BC37C67CB292E5() < 7)
											{
												unk_0xCA5EA8FBB2C07DB8(iLocal_3004[iVar0], 3);
											}
										}
										unk_0x98F0FA127445E343(iLocal_3004[iVar0], 1);
										unk_0x924CDE68BA2ED3BA(iLocal_2757[iVar0]);
										iLocal_1869 = (iLocal_1869 - 1);
										iLocal_1648[iVar0]++;
										bLocal_151 = true;
									}
								}
							}
						}
						else if (!unk_0xA929B2923D14E2F8(iLocal_3004[iVar0], 0) && unk_0x45CD66F0A131E554(iLocal_3004[iVar0], 0))
						{
							unk_0x394AE1BE8F25AC5B(iLocal_3004[iVar0], Local_2345[iVar0 /*3*/], 0, 0, 1);
							unk_0xFE2306F4BAC122B2(iLocal_3004[iVar0], fLocal_588[iVar0], fLocal_659[iVar0], fLocal_730[iVar0], fLocal_801[iVar0]);
							if (unk_0xC2AFD5CFEDC8F22A(iLocal_2757[iVar0]) || unk_0xD28959FE5BC2D14D(iLocal_2757[iVar0]))
							{
								unk_0x482AE8C0EAF5AE07(iLocal_3004[iVar0], 1084227584);
							}
							unk_0x98F0FA127445E343(iLocal_3004[iVar0], 1);
							unk_0x924CDE68BA2ED3BA(iLocal_2757[iVar0]);
							iLocal_1869 = (iLocal_1869 - 1);
							iLocal_1648[iVar0]++;
						}
					}
				}
				else if (iLocal_1648[iVar0] == 2)
				{
					unk_0xF5B59A4EB5622187(iLocal_1577[iVar0], &cLocal_2583);
					if (!unk_0x48B8265059381CD0(iLocal_1719[iVar0], 1))
					{
						bVar14 = false;
						if (unk_0x48B8265059381CD0(iLocal_1719[iVar0], 0))
						{
							unk_0xE1324F59713746FA(func_87());
							bVar14 = unk_0x9F746898F7881612(func_87());
							iVar19 = 2;
						}
						else if (!bLocal_147 && ((!unk_0x48B8265059381CD0(iLocal_1719[iVar0], 2) && uVar16) || (unk_0x48B8265059381CD0(iLocal_1719[iVar0], 2) && uVar17)))
						{
							bVar14 = true;
							iVar19 = 1;
						}
						else
						{
							unk_0xE1324F59713746FA(func_90());
							bVar14 = unk_0x9F746898F7881612(func_90());
							iVar19 = 0;
						}
						if (!unk_0xA929B2923D14E2F8(iLocal_3004[iVar0], 0))
						{
							if (!bLocal_151 && unk_0xC0FA8EEF6413F866(iLocal_3004[iVar0], -1, 0))
							{
								if (bVar14)
								{
									if ((unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(iLocal_3004[iVar0], 1), Var9) < 10000f || bParam2) || iLocal_134)
									{
										func_403(&(iLocal_3004[iVar0]), iVar19, 1);
										unk_0xEB79FECD9022AAF0(&(iLocal_1719[iVar0]), 1);
									}
								}
							}
						}
					}
					if (unk_0x45CD66F0A131E554(iLocal_3004[iVar0], 0))
					{
						if (fLocal_1300 >= fLocal_872[iVar0])
						{
							if (11 > iLocal_1862)
							{
								fVar12 = (fLocal_1300 - fLocal_872[iVar0]);
								fVar12 = (fVar12 * fLocal_943[iVar0]);
								if (unk_0x63781672EC63FB83(iLocal_1577[iVar0], &cLocal_2583))
								{
									if (fVar12 < unk_0x5871CF89CF524CD0(iLocal_1577[iVar0], &cLocal_2583))
									{
										Var3 = { unk_0x57240623C1BC6E88(iLocal_3004[iVar0], 1) };
										Var6 = { unk_0x7E8C3589CF175379(iLocal_1577[iVar0], fVar12, &cLocal_2583) };
										if (((!func_406(Var3, Var9, 5f, fLocal_1311) && func_406(Var6, Var9, 5f, fLocal_1311)) && !iLocal_134) && !bParam2)
										{
											if (!unk_0x48B8265059381CD0(iLocal_1719[iVar0], 1))
											{
												func_403(&(iLocal_3004[iVar0]), iVar19, 1);
											}
											iLocal_1862++;
											iLocal_1648[iVar0]++;
										}
										else if (((!bLocal_151 || unk_0x48B8265059381CD0(iLocal_1719[iVar0], 1)) || iLocal_134) || bParam2)
										{
											if (func_397(&(iLocal_3004[iVar0]), iLocal_1577[iVar0], fVar12, 1, 0, 0, bLocal_149, bLocal_148))
											{
												unk_0x1ECBE6CE58710983(iLocal_3004[iVar0], (fParam1 * fLocal_943[iVar0]));
												if (unk_0x45CD66F0A131E554(iLocal_3004[iVar0], 0))
												{
													if (unk_0x48B8265059381CD0(iLocal_1719[iVar0], 0))
													{
														unk_0x524A422B74847594(iLocal_3004[iVar0], 1, 1, 0);
														unk_0x71FF26FDD46DECD5(iLocal_3004[iVar0], 1);
														unk_0xCA5EA8FBB2C07DB8(iLocal_3004[iVar0], 2);
														if (!unk_0xD28959FE5BC2D14D(iLocal_2757[iVar0]))
														{
															unk_0x8D0713BFE7CB1CE1(iLocal_3004[iVar0], 1);
														}
													}
												}
												if (!unk_0x48B8265059381CD0(iLocal_1719[iVar0], 1))
												{
													func_403(&(iLocal_3004[iVar0]), iVar19, 1);
												}
												iLocal_1862++;
												iLocal_1648[iVar0]++;
											}
										}
									}
									else
									{
										if (!unk_0x48B8265059381CD0(iLocal_1719[iVar0], 1))
										{
											func_403(&(iLocal_3004[iVar0]), iVar19, 1);
										}
										iLocal_1862++;
										iLocal_1648[iVar0]++;
									}
								}
							}
							else
							{
								if (!unk_0x48B8265059381CD0(iLocal_1719[iVar0], 1))
								{
									func_403(&(iLocal_3004[iVar0]), iVar19, 1);
								}
								iLocal_1862++;
								iLocal_1648[iVar0]++;
							}
						}
					}
					else
					{
						if (!unk_0x48B8265059381CD0(iLocal_1719[iVar0], 1))
						{
							func_403(&(iLocal_3004[iVar0]), iVar19, 1);
						}
						iLocal_1862++;
						iLocal_1648[iVar0]++;
					}
				}
				else if (iLocal_1648[iVar0] == 3)
				{
					if (unk_0x45CD66F0A131E554(iLocal_3004[iVar0], 0))
					{
						if (unk_0x72222684DEA44B9F(iLocal_3004[iVar0]))
						{
							iVar1 = unk_0x17206B315923243C(iLocal_3004[iVar0], -1, 0);
							if (!unk_0xCA41A00932714525(iVar1))
							{
								if (bVar15)
								{
									if (((!bLocal_124 && !iLocal_121) && !bLocal_140) && (((!bLocal_149 && !bLocal_148) && unk_0xB42101338C533CB4(unk_0x17B5CC8A8615737D(), iLocal_3004[iVar0])) || func_402(iLocal_3004[iVar0])))
									{
										if (unk_0x23E9113C762466ED(iVar2))
										{
											bVar14 = false;
											if (bLocal_142)
											{
												bVar14 = true;
											}
											else
											{
												fVar13 = unk_0x13B7ACE69D27E3E4(iVar2);
												if (fVar13 < 1f)
												{
													bVar14 = true;
												}
												else if (unk_0xE851F22ED3518011((fVar13 - unk_0x13B7ACE69D27E3E4(iLocal_3004[iVar0]))) > 15f)
												{
													bVar14 = true;
												}
												else if (!func_401(iLocal_3004[iVar0], iVar2, 45f))
												{
													bVar14 = true;
												}
												else if (func_400(iVar2, iLocal_3004[iVar0], 0))
												{
													bVar14 = true;
												}
											}
											if (bVar14)
											{
												func_399(iLocal_3004[iVar0]);
												iLocal_1648[iVar0]++;
											}
										}
									}
									else
									{
										unk_0x1ECBE6CE58710983(iLocal_3004[iVar0], (fParam1 * fLocal_943[iVar0]));
									}
								}
							}
							else
							{
								unk_0x394D4A83F07AE208(iLocal_3004[iVar0]);
							}
						}
						else
						{
							iLocal_1648[iVar0]++;
						}
					}
					else
					{
						iLocal_1648[iVar0]++;
					}
				}
				else if (iLocal_1648[iVar0] == 4)
				{
					if (unk_0x45CD66F0A131E554(iLocal_3004[iVar0], 0))
					{
						if (!unk_0x72222684DEA44B9F(iLocal_3004[iVar0]))
						{
							iLocal_1648[iVar0]++;
						}
						else
						{
							iVar1 = unk_0x17206B315923243C(iLocal_3004[iVar0], -1, 0);
							if (!unk_0xCA41A00932714525(iVar1))
							{
								unk_0x1ECBE6CE58710983(iLocal_3004[iVar0], (fParam1 * fLocal_943[iVar0]));
							}
							else
							{
								unk_0x394D4A83F07AE208(iLocal_3004[iVar0]);
							}
							if (unk_0x63781672EC63FB83(iLocal_1577[iVar0], &cLocal_2583))
							{
								if (fLocal_1300 > (fLocal_872[iVar0] + unk_0x5871CF89CF524CD0(iLocal_1577[iVar0], &cLocal_2583)))
								{
									unk_0x394D4A83F07AE208(iLocal_3004[iVar0]);
								}
							}
							else
							{
								unk_0x394D4A83F07AE208(iLocal_3004[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1648[iVar0]++;
					}
				}
				else if (iLocal_1648[iVar0] == 5)
				{
					if (!iLocal_3004[iVar0] == iLocal_3088)
					{
						if (unk_0x45CD66F0A131E554(iLocal_3004[iVar0], 0))
						{
							iVar1 = unk_0x17206B315923243C(iLocal_3004[iVar0], -1, 0);
							if (!unk_0xCA41A00932714525(iVar1))
							{
								iVar20 = unk_0x1F8F07D86DA1A701(iVar1, 242628503);
								if (iVar20 == 7)
								{
									fVar13 = unk_0x13B7ACE69D27E3E4(iLocal_3004[iVar0]);
									if (fVar13 < 8f)
									{
										fVar13 = 8f;
									}
									if (fVar13 > 62.9f)
									{
										fVar13 = 62.9f;
									}
									unk_0x264C2948EAADA50E(iVar1, fVar13);
								}
							}
						}
						if (!bLocal_132 && !bLocal_145)
						{
							if (iLocal_1577[iVar0] > 0)
							{
								unk_0xF8E2640CE709A221(iLocal_1577[iVar0], &cLocal_2583);
							}
						}
						if (!bLocal_122)
						{
							if (!bLocal_150)
							{
								func_83(iLocal_3004[iVar0]);
							}
						}
						else if (unk_0x23E9113C762466ED(iLocal_3004[iVar0]))
						{
							unk_0x813865264334331D(&(iLocal_3004[iVar0]));
						}
					}
					iLocal_1862 = (iLocal_1862 - 1);
					iLocal_1648[iVar0] = 99;
				}
				if (!bVar18)
				{
					iLocal_1867 = iVar0;
					bVar18 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_82();
	}
}

void func_399(int iParam0)
{
	if (unk_0x45CD66F0A131E554(iParam0, 0))
	{
		func_84(iParam0);
		unk_0x2E46973EB80D8EDC(iParam0, 786603);
	}
}

int func_400(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	
	if (unk_0x45CD66F0A131E554(iParam0, 0))
	{
		Var0 = { unk_0x57240623C1BC6E88(iParam0, 1) };
	}
	if (unk_0x45CD66F0A131E554(iParam1, 0))
	{
		Var3 = { unk_0x57240623C1BC6E88(iParam1, 1) };
		if (bParam2)
		{
			Var15 = { unk_0xACA666C39EA49E82(iParam1) };
			Var12 = { Var15 / FtoV(unk_0x652D2EEEF1D3E62C(Var15)) };
		}
		else
		{
			Var6 = { unk_0x854ED33E6D715648(iParam1, 0f, 5f, 0f) };
			Var12 = { Var6 - Var3 };
		}
	}
	Var9 = { Var3 - Var0 };
	Var9.f_2 = 0f;
	Var12.f_2 = 0f;
	if (func_387(Var9, Var12) < 0f)
	{
		return 1;
	}
	return 0;
}

int func_401(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (unk_0x45CD66F0A131E554(iParam0, 0))
	{
		Var0 = { unk_0x4C17A06B99B6CC49(iParam0, 0) };
	}
	else
	{
		return 0;
	}
	if (unk_0x45CD66F0A131E554(iParam1, 0))
	{
		Var3 = { unk_0x4C17A06B99B6CC49(iParam1, 0) };
	}
	else
	{
		return 0;
	}
	Var0.f_2 = 0f;
	Var3.f_2 = 0f;
	fVar6 = func_387(Var0, Var3);
	if (fVar6 < 0f)
	{
		return 0;
	}
	fVar6 = unk_0xB1B7184870BDC5CC(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1);
	if (!fVar6 < fParam2)
	{
		return 0;
	}
	return 1;
}

int func_402(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bLocal_146)
	{
		iVar1 = unk_0x0C00E753D78DEA62();
		if (!unk_0xA929B2923D14E2F8(iVar1, 0))
		{
			iVar2 = unk_0x0324EEB10F81965F(iVar1);
			if (iVar2 == joaat("phantom"))
			{
				if (unk_0xB1C3C0AA8E1A5401(iVar1))
				{
					if (unk_0x1FB3B232C7EAF710(iVar1, &iVar0))
					{
						if (unk_0x45CD66F0A131E554(iVar0, 0))
						{
							if (unk_0xB42101338C533CB4(iVar0, uParam0))
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

int func_403(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xA929B2923D14E2F8(*uParam0, 0))
	{
		if (unk_0xC0FA8EEF6413F866(*uParam0, -1, 0))
		{
			if (iParam1 == 2)
			{
				iVar0 = unk_0x3FBC0964EB7878AF(*uParam0, 6, func_87(), -1, 0, 0);
				unk_0x3BB70315907D9456(iVar0, iLocal_2599);
				unk_0x924CDE68BA2ED3BA(func_87());
			}
			else if (iParam1 == 1)
			{
				iVar0 = unk_0x1F31203F4E478E9D(*uParam0, 1);
				if (unk_0xD28959FE5BC2D14D(unk_0x0324EEB10F81965F(*uParam0)))
				{
					unk_0xD0CB3DBFBB095E91(iVar0, 1, 4096, -1);
				}
			}
			else
			{
				iVar0 = unk_0x3FBC0964EB7878AF(*uParam0, 4, func_90(), -1, 0, 0);
				if (bLocal_152)
				{
					unk_0x924CDE68BA2ED3BA(func_90());
				}
			}
			if (bParam2)
			{
				unk_0x6FE87B0CB5BE8FB1(iVar0, 1);
				unk_0x9AA7339B5138B5EF(iVar0, 0);
				unk_0x6018E338F7ABCE75(iVar0, 32, 0);
			}
			if (bLocal_153)
			{
				unk_0xB195EE9DB37DA7F2(iVar0, 8192, 1);
				unk_0xB195EE9DB37DA7F2(iVar0, 65536, 1);
				unk_0xB195EE9DB37DA7F2(iVar0, 2, 0);
				unk_0x3C87A0A1456D6253(*uParam0, 1);
			}
			unk_0xCC61640A821F277C(iVar0, 1);
			func_393(iVar0);
			bLocal_151 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_404(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x0E29C61F26D96FDB(0, 12);
	if (iLocal_2829 >= -1 && iLocal_2830 >= -1)
	{
		while (iVar0 == iLocal_2829 || iVar0 == iLocal_2830)
		{
			iVar0++;
		}
	}
	else if (iLocal_2829 >= -1)
	{
		if (iVar0 == iLocal_2829)
		{
			iVar0++;
		}
	}
	iVar1 = iVar0;
	switch (iVar1)
	{
		case 0:
			unk_0x357EE036FE09513D(iParam0, 0, 0);
			break;
		
		case 1:
			unk_0x357EE036FE09513D(iParam0, 2, 2);
			break;
		
		case 2:
			unk_0x357EE036FE09513D(iParam0, 4, 4);
			break;
		
		case 3:
			unk_0x357EE036FE09513D(iParam0, 27, 27);
			break;
		
		case 4:
			unk_0x357EE036FE09513D(iParam0, 7, 7);
			break;
		
		case 5:
			unk_0x357EE036FE09513D(iParam0, 73, 73);
			break;
		
		case 6:
			unk_0x357EE036FE09513D(iParam0, 68, 68);
			break;
		
		case 7:
			unk_0x357EE036FE09513D(iParam0, 62, 62);
			break;
		
		case 8:
			unk_0x357EE036FE09513D(iParam0, 132, 132);
			break;
		
		case 9:
			unk_0x357EE036FE09513D(iParam0, 117, 0);
			break;
		
		case 10:
			unk_0x357EE036FE09513D(iParam0, 52, 52);
			break;
		
		case 11:
			unk_0x357EE036FE09513D(iParam0, 88, 88);
			break;
		
		case 12:
			unk_0x357EE036FE09513D(iParam0, 1, 1);
			break;
		
		case 13:
			unk_0x357EE036FE09513D(iParam0, 36, 36);
			break;
		
		case 14:
			unk_0x357EE036FE09513D(iParam0, 95, 95);
			break;
		
		default:
			unk_0x357EE036FE09513D(iParam0, 73, 73);
			break;
	}
}

void func_405(struct<3> Param0, struct<3> Param3, float fParam6)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (!bLocal_133)
	{
		if (!func_406(Param0, Param3, fParam6, 200f))
		{
			if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
			{
				iVar1 = unk_0x0C00E753D78DEA62();
				if (!unk_0xA929B2923D14E2F8(iVar1, 0))
				{
					if (unk_0x1C34CE8087E3897C(iVar1, Param0, fParam6, fParam6, fParam6, 0, 1, 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x0668B21A0C3A4821(Param0, fParam6, 0, 0, 0, 0, 0);
			}
		}
	}
}

int func_406(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7)
{
	if (!unk_0x25BD4C26D84038CD())
	{
		if (!bLocal_133)
		{
			if (!iLocal_120)
			{
				if (unk_0xA8CEACB4F35AE058(Param3 - Param0) - fParam6) < (fParam7 * fParam7)
				{
					if (unk_0xF7E1BD8196545EE3(Param0, fParam6))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

float func_407(int iParam0)
{
	var uVar0;
	
	unk_0xF5B59A4EB5622187(iParam0, &cLocal_2583);
	while (!unk_0x63781672EC63FB83(iParam0, &cLocal_2583))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	uVar0 = unk_0x5871CF89CF524CD0(iParam0, &cLocal_2583);
	unk_0xF8E2640CE709A221(iParam0, &cLocal_2583);
	return uVar0;
}

void func_408(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	bool bVar7;
	bool bVar8;
	
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		Var1 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
	}
	if (unk_0x45CD66F0A131E554(iParam0, 0))
	{
		bVar7 = false;
		bVar8 = false;
		iVar0 = iLocal_1866;
		while (iVar0 < 70)
		{
			switch (iLocal_1790[iVar0])
			{
				case 0:
					if (!iLocal_2686[iVar0] == 0)
					{
						if (unk_0x1C34CE8087E3897C(iParam0, Local_2134[iVar0 /*3*/], fLocal_1298, fLocal_1298, fLocal_1298, 0, 1, 0))
						{
							iLocal_1868++;
							iLocal_1790[iVar0]++;
						}
					}
					else
					{
						iLocal_1790[iVar0] = 99;
					}
					break;
				
				case 1:
					if (10 > iLocal_1863)
					{
						if (!unk_0x23E9113C762466ED(iLocal_2933[iVar0]))
						{
							unk_0xE1324F59713746FA(iLocal_2686[iVar0]);
							if (unk_0x9F746898F7881612(iLocal_2686[iVar0]))
							{
								if ((iLocal_120 || iLocal_134) || (!bLocal_151 && !func_406(Local_2134[iVar0 /*3*/], Var1, 5f, fLocal_1311)))
								{
									if (bLocal_130)
									{
										func_405(Local_2134[iVar0 /*3*/], Var1, fLocal_1304);
									}
									iLocal_2933[iVar0] = unk_0x692A2891A2BA7352(iLocal_2686[iVar0], Local_2134[iVar0 /*3*/], 0f, 0, 0);
									if (iLocal_2686[iVar0] == joaat("polmav"))
									{
										unk_0x866129976ECB1FB9(iLocal_2933[iVar0], 0);
									}
									unk_0xFE2306F4BAC122B2(iLocal_2933[iVar0], fLocal_1014[iVar0], fLocal_1085[iVar0], fLocal_1156[iVar0], fLocal_1227[iVar0]);
									unk_0x924CDE68BA2ED3BA(iLocal_2686[iVar0]);
									if (unk_0x5AF6E4F22F4B49C3(iLocal_2933[iVar0], func_88()))
									{
										unk_0x71FF26FDD46DECD5(iLocal_2933[iVar0], 1);
										if (!unk_0xD28959FE5BC2D14D(iLocal_2686[iVar0]))
										{
											unk_0x8D0713BFE7CB1CE1(iLocal_2933[iVar0], 1);
										}
									}
									if (unk_0x5AF6E4F22F4B49C3(iLocal_2933[iVar0], func_89()))
									{
										unk_0x357EE036FE09513D(iLocal_2933[iVar0], 0, 0);
									}
									unk_0xBDE4C59FD939CE4E(iLocal_2933[iVar0], 1);
									iLocal_1868 = (iLocal_1868 - 1);
									iLocal_1863++;
									iLocal_1790[iVar0]++;
									bLocal_151 = true;
								}
							}
						}
						else
						{
							iLocal_1868 = (iLocal_1868 - 1);
							iLocal_1863++;
							iLocal_1790[iVar0]++;
						}
					}
					break;
				
				case 2:
					if (!bVar7)
					{
						if (unk_0x45CD66F0A131E554(iLocal_2933[iVar0], 0))
						{
							Var4 = { unk_0x57240623C1BC6E88(iLocal_2933[iVar0], 1) };
						}
						if (fLocal_1312 == 0f || unk_0xB7A628320EFF8E47(Var1, Var4) < (fLocal_1312 * fLocal_1312))
						{
							if (!func_400(iLocal_2933[iVar0], iParam0, 0))
							{
								if (!bLocal_122)
								{
									func_83(iLocal_2933[iVar0]);
								}
								else
								{
									unk_0x813865264334331D(&(iLocal_2933[iVar0]));
								}
								iLocal_1863 = (iLocal_1863 - 1);
								iLocal_1790[iVar0] = 99;
								bVar7 = true;
							}
						}
					}
					break;
			}
			if (iLocal_1790[iVar0] != 99)
			{
				if (!bVar8)
				{
					iLocal_1866 = iVar0;
					bVar8 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_85();
	}
}

void func_409(int iParam0, float fParam1, int iParam2)
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
	bVar18 = unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796());
	uVar19 = unk_0xB4BE8FC646019C61();
	uVar20 = unk_0x18EF36DA59C7300B();
	if (bVar18)
	{
		if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
		{
			iVar5 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
		}
		Var12 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
	}
	iVar1 = 0;
	if (unk_0x45CD66F0A131E554(iParam0, 0))
	{
		if (unk_0x72222684DEA44B9F(iParam0))
		{
			fLocal_1300 = unk_0x76423F51C82ED0C8(iParam0);
		}
		iVar22 = -1;
		bVar23 = false;
		bVar24 = false;
		iVar0 = iLocal_1865;
		while (iVar0 < 85 && !bVar23)
		{
			if (iLocal_1405[iVar0] != 99)
			{
				if (iLocal_1405[iVar0] == 0)
				{
					if (iLocal_1319[iVar0] > 0 && iLocal_2600[iVar0] != 0)
					{
						if (!iLocal_120)
						{
							if (fLocal_1300 < (fLocal_498[iVar0] + 20000f))
							{
								if (fLocal_1300 >= (fLocal_498[iVar0] - (7000f * fParam1)))
								{
									if (func_394(iLocal_2600[iVar0]))
									{
										unk_0xEB79FECD9022AAF0(&(iLocal_1491[iVar0]), 0);
									}
									else if (unk_0xD28959FE5BC2D14D(iLocal_2600[iVar0]))
									{
										unk_0xEB79FECD9022AAF0(&(iLocal_1491[iVar0]), 2);
									}
									unk_0x21E7933CCC7B3724(&(iLocal_1491[iVar0]), 1);
									iLocal_1870++;
									iLocal_1405[iVar0]++;
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
								func_411(iVar0, 1090519040);
							}
						}
						else
						{
							fVar15 = (fLocal_1300 - fLocal_498[iVar0]);
							if (fVar15 >= 0f)
							{
								if (fVar15 < func_407(iLocal_1319[iVar0]))
								{
									if (func_394(iLocal_2600[iVar0]))
									{
										unk_0xEB79FECD9022AAF0(&(iLocal_1491[iVar0]), 0);
									}
									else if (unk_0xD28959FE5BC2D14D(iLocal_2600[iVar0]))
									{
										unk_0xEB79FECD9022AAF0(&(iLocal_1491[iVar0]), 2);
									}
									unk_0x21E7933CCC7B3724(&(iLocal_1491[iVar0]), 1);
									iLocal_1870++;
									iLocal_1405[iVar0]++;
								}
								else
								{
									func_411(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_411(iVar0, 1090519040);
					}
				}
				else if (iLocal_1405[iVar0] == 1)
				{
					unk_0xF5B59A4EB5622187(iLocal_1319[iVar0], &cLocal_2583);
					bVar17 = false;
					if (unk_0x48B8265059381CD0(iLocal_1491[iVar0], 0))
					{
						unk_0xE1324F59713746FA(func_87());
						if (unk_0x9F746898F7881612(func_87()))
						{
							bVar17 = true;
						}
					}
					else if (!bLocal_147 && ((!unk_0x48B8265059381CD0(iLocal_1491[iVar0], 2) && uVar19) || (unk_0x48B8265059381CD0(iLocal_1491[iVar0], 2) && uVar20)))
					{
						bVar17 = true;
					}
					else
					{
						unk_0xE1324F59713746FA(func_90());
						bVar17 = unk_0x9F746898F7881612(func_90());
					}
					if (!unk_0x23E9113C762466ED(iLocal_2831[iVar0]))
					{
						unk_0xE1324F59713746FA(iLocal_2600[iVar0]);
						if ((unk_0x9F746898F7881612(iLocal_2600[iVar0]) && unk_0x63781672EC63FB83(iLocal_1319[iVar0], &cLocal_2583)) && bVar17)
						{
							if (fLocal_1300 >= (fLocal_498[iVar0] - (fLocal_1313 * fParam1)))
							{
								if ((iLocal_134 || iParam2) || (!bLocal_151 && !func_406(Local_1878[iVar0 /*3*/], Var12, 5f, fLocal_1311)))
								{
									if (bLocal_130)
									{
										func_405(Local_1878[iVar0 /*3*/], Var12, fLocal_1304);
									}
									iLocal_2831[iVar0] = unk_0x692A2891A2BA7352(iLocal_2600[iVar0], Local_1878[iVar0 /*3*/], 0f, 0, 0);
									if (iLocal_2600[iVar0] == joaat("polmav"))
									{
										unk_0x866129976ECB1FB9(iLocal_2831[iVar0], 0);
									}
									if (iLocal_143 && !unk_0x48B8265059381CD0(iLocal_1491[iVar0], 0))
									{
										func_404(iLocal_2831[iVar0]);
									}
									unk_0x394AE1BE8F25AC5B(iLocal_2831[iVar0], Local_1878[iVar0 /*3*/], 0, 0, 1);
									unk_0xFE2306F4BAC122B2(iLocal_2831[iVar0], fLocal_154[iVar0], fLocal_240[iVar0], fLocal_326[iVar0], fLocal_412[iVar0]);
									if (unk_0xC2AFD5CFEDC8F22A(iLocal_2600[iVar0]) || unk_0xD28959FE5BC2D14D(iLocal_2600[iVar0]))
									{
										unk_0x482AE8C0EAF5AE07(iLocal_2831[iVar0], 1084227584);
									}
									if (unk_0x48B8265059381CD0(iLocal_1491[iVar0], 3))
									{
										unk_0xBDE4C59FD939CE4E(iLocal_2831[iVar0], 1);
									}
									if (!unk_0x48B8265059381CD0(iLocal_1491[iVar0], 0))
									{
										unk_0x524A422B74847594(iLocal_2831[iVar0], 1, 1, 0);
										if (unk_0x80BC37C67CB292E5() > 19 || unk_0x80BC37C67CB292E5() < 7)
										{
											unk_0xCA5EA8FBB2C07DB8(iLocal_2831[iVar0], 3);
										}
									}
									unk_0x98F0FA127445E343(iLocal_2831[iVar0], 1);
									unk_0x6FE87B0CB5BE8FB1(iLocal_2831[iVar0], 1);
									unk_0x924CDE68BA2ED3BA(iLocal_2600[iVar0]);
									iLocal_1870 = (iLocal_1870 - 1);
									iLocal_1405[iVar0]++;
									bLocal_151 = true;
								}
								else if (fLocal_1300 > fLocal_498[iVar0])
								{
									iLocal_1870 = (iLocal_1870 - 1);
									func_411(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_1405[iVar0] == 2)
				{
					bVar17 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_1876 || iLocal_1876 == 0)) || iLocal_134) || iParam2)
					{
						if (!unk_0x48B8265059381CD0(iLocal_1491[iVar0], 1))
						{
							if (unk_0x48B8265059381CD0(iLocal_1491[iVar0], 0))
							{
								unk_0xE1324F59713746FA(func_87());
								bVar17 = unk_0x9F746898F7881612(func_87());
								iVar21 = 2;
							}
							else if (!bLocal_147 && ((!unk_0x48B8265059381CD0(iLocal_1491[iVar0], 2) && uVar19) || (unk_0x48B8265059381CD0(iLocal_1491[iVar0], 2) && uVar20)))
							{
								bVar17 = true;
								iVar21 = 1;
							}
							else
							{
								unk_0xE1324F59713746FA(func_90());
								bVar17 = unk_0x9F746898F7881612(func_90());
								iVar21 = 0;
							}
							if (!unk_0xA929B2923D14E2F8(iLocal_2831[iVar0], 0))
							{
								if (!bLocal_151 && unk_0xC0FA8EEF6413F866(iLocal_2831[iVar0], -1, 0))
								{
									if (bVar17)
									{
										if ((unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(iLocal_2831[iVar0], 1), Var12) < 10000f || iParam2) || iLocal_134)
										{
											func_403(&(iLocal_2831[iVar0]), iVar21, 0);
											unk_0xEB79FECD9022AAF0(&(iLocal_1491[iVar0]), 1);
										}
									}
								}
							}
						}
						if (unk_0x45CD66F0A131E554(iLocal_2831[iVar0], 0))
						{
							unk_0xF5B59A4EB5622187(iLocal_1319[iVar0], &cLocal_2583);
							if (fLocal_1300 >= fLocal_498[iVar0])
							{
								if (15 > iLocal_1861)
								{
									fVar15 = (fLocal_1300 - fLocal_498[iVar0]);
									if (unk_0x63781672EC63FB83(iLocal_1319[iVar0], &cLocal_2583))
									{
										if (fVar15 < unk_0x5871CF89CF524CD0(iLocal_1319[iVar0], &cLocal_2583))
										{
											Var6 = { unk_0x57240623C1BC6E88(iLocal_2831[iVar0], 1) };
											Var9 = { unk_0x7E8C3589CF175379(iLocal_1319[iVar0], fVar15, &cLocal_2583) };
											if (!func_406(Var6, Var12, 5f, fLocal_1311) && func_406(Var9, Var12, 5f, fLocal_1311))
											{
												if (!unk_0x48B8265059381CD0(iLocal_1491[iVar0], 1))
												{
													func_403(&(iLocal_2831[iVar0]), iVar21, 0);
												}
												func_411(iVar0, 1090519040);
											}
											else if (((!bLocal_151 || unk_0x48B8265059381CD0(iLocal_1491[iVar0], 1)) || iLocal_134) || iParam2)
											{
												if (func_397(&(iLocal_2831[iVar0]), iLocal_1319[iVar0], fVar15, 1, 0, 0, 1, bLocal_148))
												{
													if (!unk_0x48B8265059381CD0(iLocal_1491[iVar0], 1))
													{
														func_403(&(iLocal_2831[iVar0]), iVar21, 0);
													}
													unk_0xCEDF2A713644AEDA(iLocal_2831[iVar0], 1, 0);
													unk_0x1ECBE6CE58710983(iLocal_2831[iVar0], fParam1);
													iLocal_1861++;
													iLocal_1405[iVar0]++;
												}
											}
										}
										else
										{
											if (!unk_0x48B8265059381CD0(iLocal_1491[iVar0], 1))
											{
												func_403(&(iLocal_2831[iVar0]), iVar21, 0);
											}
											func_411(iVar0, 1090519040);
										}
									}
									else if (fVar15 > unk_0x5871CF89CF524CD0(iLocal_1319[iVar0], &cLocal_2583))
									{
										if (!unk_0x48B8265059381CD0(iLocal_1491[iVar0], 1))
										{
											func_403(&(iLocal_2831[iVar0]), iVar21, 0);
										}
										func_411(iVar0, 1090519040);
									}
								}
								else
								{
									if (!unk_0x48B8265059381CD0(iLocal_1491[iVar0], 1))
									{
										func_403(&(iLocal_2831[iVar0]), iVar21, 0);
									}
									func_411(iVar0, 1090519040);
								}
							}
							else if (iLocal_131 && !bLocal_139)
							{
								if (!unk_0x48B8265059381CD0(iLocal_1491[iVar0], 1))
								{
									func_403(&(iLocal_2831[iVar0]), iVar21, 0);
								}
								func_411(iVar0, 1090519040);
							}
						}
						else
						{
							if (!unk_0x48B8265059381CD0(iLocal_1491[iVar0], 1))
							{
								func_403(&(iLocal_2831[iVar0]), iVar21, 0);
							}
							func_411(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_1876 = iVar0;
					}
				}
				else if (iLocal_1405[iVar0] == 3)
				{
					if (unk_0x45CD66F0A131E554(iLocal_2831[iVar0], 0))
					{
						if (unk_0x72222684DEA44B9F(iLocal_2831[iVar0]))
						{
							iVar4 = unk_0x17206B315923243C(iLocal_2831[iVar0], -1, 0);
							if (!unk_0xCA41A00932714525(iVar4))
							{
								if (bVar18)
								{
									bVar24 = false;
									if (!bLocal_129)
									{
										if ((!bLocal_124 && !iLocal_121) && func_402(iLocal_2831[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_1875 || iLocal_1875 == 0))
											{
												if (!unk_0xA929B2923D14E2F8(iVar5, 0))
												{
													bVar17 = false;
													if (!func_410(iLocal_2831[iVar0], iVar5) || func_400(iVar5, iLocal_2831[iVar0], 0))
													{
														bVar24 = true;
													}
												}
												iLocal_1875 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_144 && !unk_0x48B8265059381CD0(iLocal_1491[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_1875 || iLocal_1875 == 0))
										{
											Var25 = { unk_0x3ACAA2B62026685B(iParam0, unk_0x57240623C1BC6E88(iLocal_2831[iVar0], 1)) };
											if (Var25.f_1 < 0f)
											{
												if (unk_0xE851F22ED3518011(Var25.f_1) > unk_0xE851F22ED3518011(Var25.f_0))
												{
													bVar24 = true;
												}
											}
											iVar2++;
											iLocal_1875 = iVar0;
										}
									}
									if (bVar24)
									{
										func_399(iLocal_2831[iVar0]);
										iLocal_1405[iVar0]++;
									}
									else
									{
										unk_0x1ECBE6CE58710983(iLocal_2831[iVar0], fParam1);
									}
								}
							}
							else
							{
								unk_0x394D4A83F07AE208(iLocal_2831[iVar0]);
							}
						}
						else
						{
							iLocal_1405[iVar0]++;
						}
					}
					else
					{
						iLocal_1405[iVar0]++;
					}
				}
				else if (iLocal_1405[iVar0] == 4)
				{
					if (unk_0x45CD66F0A131E554(iLocal_2831[iVar0], 0))
					{
						if (!unk_0x72222684DEA44B9F(iLocal_2831[iVar0]))
						{
							iLocal_1405[iVar0]++;
						}
						else
						{
							iVar4 = unk_0x17206B315923243C(iLocal_2831[iVar0], -1, 0);
							if (!unk_0xCA41A00932714525(iVar4))
							{
								unk_0x1ECBE6CE58710983(iLocal_2831[iVar0], fParam1);
							}
							else
							{
								unk_0x394D4A83F07AE208(iLocal_2831[iVar0]);
							}
							if (unk_0x63781672EC63FB83(iLocal_1319[iVar0], &cLocal_2583))
							{
								if (fLocal_1300 > (fLocal_498[iVar0] + unk_0x5871CF89CF524CD0(iLocal_1319[iVar0], &cLocal_2583)))
								{
									unk_0x394D4A83F07AE208(iLocal_2831[iVar0]);
								}
							}
							else
							{
								unk_0x394D4A83F07AE208(iLocal_2831[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1405[iVar0]++;
					}
				}
				else if (iLocal_1405[iVar0] == 5)
				{
					if (!unk_0xA929B2923D14E2F8(iLocal_2831[iVar0], 0))
					{
						fVar16 = unk_0x13B7ACE69D27E3E4(iLocal_2831[iVar0]);
					}
					iLocal_1861 = (iLocal_1861 - 1);
					func_411(iVar0, fVar16);
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
			iLocal_1865 = iVar22;
		}
		if (iVar2 < 3)
		{
			iLocal_1875 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_1876 = 0;
		}
	}
	else
	{
		func_86();
	}
}

int func_410(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (unk_0x45CD66F0A131E554(iParam0, 0))
	{
		Var0 = { unk_0x4C17A06B99B6CC49(iParam0, 0) };
	}
	else
	{
		return 0;
	}
	if (unk_0x45CD66F0A131E554(iParam1, 0))
	{
		Var3 = { unk_0x4C17A06B99B6CC49(iParam1, 0) };
	}
	else
	{
		return 0;
	}
	Var0.f_2 = 0f;
	Var3.f_2 = 0f;
	fVar6 = func_387(Var0, Var3);
	if (fVar6 < 0f)
	{
		return 0;
	}
	return 1;
}

void func_411(int iParam0, float fParam1)
{
	int iVar0;
	
	if (!iLocal_2600[iParam0] == 0)
	{
		unk_0x924CDE68BA2ED3BA(iLocal_2600[iParam0]);
	}
	if (!unk_0xA929B2923D14E2F8(iLocal_2831[iParam0], 0))
	{
		unk_0xCEDF2A713644AEDA(iLocal_2831[iParam0], 1, 0);
		unk_0x98F0FA127445E343(iLocal_2831[iParam0], 0);
		iVar0 = unk_0x17206B315923243C(iLocal_2831[iParam0], -1, 0);
		if (!unk_0xCA41A00932714525(iVar0) && iVar0 != unk_0x17B5CC8A8615737D())
		{
			unk_0xCC61640A821F277C(iVar0, 0);
			if (fParam1 < 8f)
			{
				fParam1 = 8f;
			}
			if (fParam1 > 62.9f)
			{
				fParam1 = 62.9f;
			}
			unk_0x398C18AE22628160(iVar0, iLocal_2831[iParam0], 0, 1, fParam1, 786603, 5f, 5f, 1);
			unk_0xB195EE9DB37DA7F2(iVar0, 8192, 1);
			if (bLocal_153)
			{
				unk_0xB195EE9DB37DA7F2(iVar0, 65536, 1);
				unk_0xB195EE9DB37DA7F2(iVar0, 2, 0);
			}
			unk_0xC96275575DC981A9(iVar0, 6, 0);
			unk_0x264C2948EAADA50E(iVar0, fParam1);
		}
	}
	if (!bLocal_122)
	{
		if (!bLocal_150)
		{
			func_393(iVar0);
			func_83(iLocal_2831[iParam0]);
		}
	}
	else
	{
		if (unk_0x23E9113C762466ED(iVar0))
		{
			unk_0x478AE709A466CB7E(&iVar0);
		}
		if (unk_0x23E9113C762466ED(iLocal_2831[iParam0]))
		{
			unk_0x813865264334331D(&(iLocal_2831[iParam0]));
		}
	}
	if (!bLocal_132 && !bLocal_145)
	{
		if (iLocal_1319[iParam0] > 0)
		{
			unk_0xF8E2640CE709A221(iLocal_1319[iParam0], &cLocal_2583);
		}
	}
	iLocal_1405[iParam0] = 99;
}

void func_412(int iParam0, float fParam1, float fParam2)
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		Var10 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
	}
	if (unk_0x45CD66F0A131E554(iParam0, 0))
	{
		if (unk_0x72222684DEA44B9F(iParam0))
		{
			uVar0 = unk_0xE8A3FB5086332078(iParam0);
			Var1 = { unk_0x488E5EF59AEBBF9B(uVar0, fParam1) };
			Var4 = { unk_0x57240623C1BC6E88(iParam0, 1) };
			Var7 = { Var4 - Var1 };
			fVar13 = unk_0x652D2EEEF1D3E62C(Var7);
			if (fVar13 > fParam2)
			{
				fVar13 = fParam2;
			}
			func_405(Var1, Var10, fVar13);
		}
	}
}

void func_413(int iParam0, float fParam1)
{
	if (!bLocal_133)
	{
		if (!unk_0xA929B2923D14E2F8(iParam0, 0))
		{
			if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
			{
				if (unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(iParam0, 1), unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1)) > (fParam1 * fParam1))
				{
					unk_0x79920BB32F3C316F(1);
				}
				else
				{
					unk_0x79920BB32F3C316F(0);
				}
			}
		}
	}
}

void func_414(int iParam0, float fParam1)
{
	if (!bLocal_133)
	{
		if (!unk_0xA929B2923D14E2F8(iParam0, 0))
		{
			if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
			{
				if (unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(iParam0, 1), unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1)) > (fParam1 * fParam1))
				{
					unk_0x5BD872FA7F0EC076(1f);
				}
				else
				{
					unk_0x5BD872FA7F0EC076(0f);
				}
			}
		}
	}
}

void func_415(int iParam0, float fParam1)
{
	var uVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	
	if (!unk_0xA929B2923D14E2F8(iParam0, 0) && unk_0x72222684DEA44B9F(iParam0))
	{
		fVar1 = (fLocal_1314 + 2000f);
		fVar2 = (fLocal_1315 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			uVar0 = unk_0xE8A3FB5086332078(iParam0);
			if (fVar1 <= unk_0xD51E84ABC1CD715A(uVar0))
			{
				if (iLocal_1871 == 0)
				{
					Local_2571 = { unk_0x488E5EF59AEBBF9B(uVar0, fLocal_1314) };
					iLocal_1871++;
				}
				else if (iLocal_1871 == 1)
				{
					Local_2574 = { unk_0x488E5EF59AEBBF9B(uVar0, fVar1) };
					iLocal_1871++;
				}
				else if (!bLocal_151)
				{
					if (Local_2571.f_0 > Local_2574.f_0)
					{
						fVar3 = Local_2571.f_0;
						Local_2571.f_0 = Local_2574.f_0;
						Local_2574.f_0 = fVar3;
					}
					if (Local_2571.f_1 > Local_2574.f_1)
					{
						fVar3 = Local_2571.f_1;
						Local_2571.f_1 = Local_2574.f_1;
						Local_2574.f_1 = fVar3;
					}
					if (Local_2571.f_2 > Local_2574.f_2)
					{
						fVar3 = Local_2571.f_2;
						Local_2571.f_2 = Local_2574.f_2;
						Local_2574.f_2 = fVar3;
					}
					Local_2571 = { Local_2571 - Vector(fLocal_1318, fLocal_1318, fLocal_1318) };
					Local_2574 = { Local_2574 + Vector(fLocal_1318, fLocal_1318, fLocal_1318) };
					unk_0xE6FC8C18754D8C2D(Local_2571, Local_2574, 0, 0);
					fLocal_1314 = fVar1;
					iLocal_1871 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			uVar0 = unk_0xE8A3FB5086332078(iParam0);
			if (iLocal_1874 == 0)
			{
				Local_2577 = { unk_0x488E5EF59AEBBF9B(uVar0, fLocal_1315) };
				iLocal_1874++;
			}
			else if (iLocal_1874 == 1)
			{
				Local_2580 = { unk_0x488E5EF59AEBBF9B(uVar0, fVar2) };
				iLocal_1874++;
			}
			else if (!bLocal_151 && !bVar4)
			{
				if (Local_2577.f_0 > Local_2580.f_0)
				{
					fVar3 = Local_2577.f_0;
					Local_2577.f_0 = Local_2580.f_0;
					Local_2580.f_0 = fVar3;
				}
				if (Local_2577.f_1 > Local_2580.f_1)
				{
					fVar3 = Local_2577.f_1;
					Local_2577.f_1 = Local_2580.f_1;
					Local_2580.f_1 = fVar3;
				}
				if (Local_2577.f_2 > Local_2580.f_2)
				{
					fVar3 = Local_2577.f_2;
					Local_2577.f_2 = Local_2580.f_2;
					Local_2580.f_2 = fVar3;
				}
				Local_2577 = { Local_2577 - Vector(fLocal_1318, fLocal_1318, fLocal_1318) };
				Local_2580 = { Local_2580 + Vector(fLocal_1318, fLocal_1318, fLocal_1318) };
				unk_0xE7281B4166C6A4CD(Local_2577, Local_2580, 1);
				fLocal_1315 = fVar2;
				iLocal_1874 = 0;
			}
		}
	}
}

void func_416()
{
	unk_0xB82FD68B5DE68F01(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, 0, 1);
	unk_0x8E2C1C02547F9CA6(0);
	unk_0xA9EB89B3EE589450(0);
	unk_0xE773F55CEC607580(0);
	unk_0x5BD872FA7F0EC076(0f);
	unk_0x79920BB32F3C316F(0);
	unk_0xBE02ABAAC92D1A06(3);
}

void func_417()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if ((unk_0x94E3E074F38DF86C() - iLocal_3248) > 3)
	{
		iVar0 = 0;
		iVar1 = iLocal_3004;
		iVar2 = iLocal_2831;
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (iLocal_1577[iVar0] > 0)
			{
				if (fLocal_3266 > (fLocal_872[iVar0] - 5000f))
				{
					unk_0xF5B59A4EB5622187(iLocal_1577[iVar0], sLocal_3296);
				}
				else if (fLocal_3266 > (fLocal_872[iVar0] + 3000f))
				{
					if (!unk_0x72222684DEA44B9F(iLocal_3004[iVar0]))
					{
						unk_0xF8E2640CE709A221(iLocal_1577[iVar0], sLocal_3296);
					}
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iVar2)
		{
			if (iLocal_1319[iVar0] > 0)
			{
				if (fLocal_3266 > (fLocal_498[iVar0] - 5000f))
				{
					unk_0xF5B59A4EB5622187(iLocal_1319[iVar0], sLocal_3296);
				}
				else if (fLocal_3266 > (fLocal_498[iVar0] + 3000f))
				{
					if (!unk_0x72222684DEA44B9F(iLocal_2831[iVar0]))
					{
						unk_0xF8E2640CE709A221(iLocal_1319[iVar0], sLocal_3296);
					}
				}
			}
			iVar0++;
		}
		iLocal_3248 = unk_0x94E3E074F38DF86C();
	}
}

void func_418()
{
	if (iLocal_3263 == 0)
	{
		func_267(75, 1, 0, 1, 0);
		func_267(76, 0, 0, 1, 0);
		iLocal_3262 = unk_0xCA0D2B42E97CB506(307.3065f, -589.9595f, 43.302f, "v_hospital");
		iLocal_3263 = 1;
	}
	else if (iLocal_3263 == 1)
	{
		if (!func_47())
		{
			if (unk_0x623BDE1B17A9D9E3(iLocal_3262))
			{
				if (!unk_0x1F02DB541727C048(iLocal_3262))
				{
					unk_0xB746CFFEAA8CB784(iLocal_3262);
				}
				else
				{
					unk_0x88125DB6195C93A6(iLocal_3262, 1);
					iLocal_3263 = 2;
				}
			}
			else
			{
				iLocal_3262 = unk_0xCA0D2B42E97CB506(307.3065f, -589.9595f, 43.302f, "v_hospital");
			}
		}
	}
	else if (iLocal_3263 == 2)
	{
		if (unk_0x623BDE1B17A9D9E3(iLocal_3262))
		{
			if (unk_0x1F02DB541727C048(iLocal_3262))
			{
				func_267(181, 0, 0, 1, 0);
				iLocal_3263 = 3;
			}
			else
			{
				iLocal_3263 = 1;
			}
		}
		else
		{
			iLocal_3263 = 1;
		}
	}
	else if (iLocal_3263 == 3)
	{
		if (!func_47())
		{
			if (unk_0x623BDE1B17A9D9E3(iLocal_3262))
			{
				if (unk_0x1F02DB541727C048(iLocal_3262))
				{
					unk_0xCA6CBCAD7B35C261(iLocal_3262);
					iLocal_3263 = 4;
				}
				else
				{
					unk_0xB746CFFEAA8CB784(iLocal_3262);
				}
			}
			else
			{
				iLocal_3262 = unk_0xCA0D2B42E97CB506(307.3065f, -589.9595f, 43.302f, "v_hospital");
			}
		}
	}
	else if (iLocal_3263 == 4)
	{
		if (unk_0x623BDE1B17A9D9E3(iLocal_3262))
		{
			if (!unk_0x1F02DB541727C048(iLocal_3262))
			{
				unk_0xB746CFFEAA8CB784(iLocal_3262);
			}
		}
		else
		{
			iLocal_3262 = unk_0xCA0D2B42E97CB506(307.3065f, -589.9595f, 43.302f, "v_hospital");
		}
	}
}

void func_419(float fParam0, struct<3> Param1)
{
	float fVar0;
	
	if (func_13(Local_3534[0 /*2*/]))
	{
		unk_0x374812EC633DEA58(Local_3534[0 /*2*/], 1, 1);
		unk_0x374812EC633DEA58(Local_3534[0 /*2*/], 0, 1);
		if (fLocal_3266 > 10000f)
		{
			fVar0 = unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(Local_3534[0 /*2*/], 1), Param1);
			if (fVar0 > 14400f)
			{
				func_50(&(Local_3534[0 /*2*/]), 0);
			}
		}
	}
	if (func_13(Local_3534[1 /*2*/]))
	{
		if (fLocal_3266 > 10000f)
		{
			fVar0 = unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(Local_3534[1 /*2*/], 1), Param1);
			if (fVar0 > 14400f)
			{
				func_50(&(Local_3534[1 /*2*/]), 0);
			}
		}
	}
	if (func_13(Local_3534[2 /*2*/]))
	{
		if (Local_3504.f_1 == 0)
		{
			unk_0xE1324F59713746FA(iLocal_3270);
			if (unk_0x9F746898F7881612(iLocal_3270))
			{
				if (!unk_0x23E9113C762466ED(Local_3504.f_0))
				{
					Local_3504.f_0 = unk_0x3FBC0964EB7878AF(Local_3534[2 /*2*/], 26, iLocal_3270, -1, 1, 1);
					unk_0x924CDE68BA2ED3BA(iLocal_3270);
					unk_0xCC61640A821F277C(Local_3504.f_0, 1);
					Local_3504.f_1 = 1;
				}
			}
			if (!unk_0x72222684DEA44B9F(Local_3534[2 /*2*/]))
			{
				unk_0xFE2306F4BAC122B2(Local_3534[2 /*2*/], 0.0269f, 0.0079f, -0.4791f, 0.8773f);
			}
		}
		if (!unk_0x72222684DEA44B9F(Local_3534[2 /*2*/]))
		{
			if (!iLocal_3236)
			{
				if (fLocal_3266 >= 200f)
				{
					unk_0x9D14C436A01A0B15(Local_3534[2 /*2*/], 2, sLocal_3296, 1);
					unk_0x1ECBE6CE58710983(Local_3534[2 /*2*/], fParam0);
					iLocal_3236 = 1;
				}
			}
		}
		else
		{
			unk_0x1ECBE6CE58710983(Local_3534[2 /*2*/], fParam0);
			if (!iLocal_3210)
			{
				if (fLocal_3266 > 3500f && fLocal_3266 < 4500f)
				{
					unk_0x64A46E3DF379F29C(Local_3534[2 /*2*/], 2000, unk_0x765F5B806B517045("HELDDOWN"), 0);
					iLocal_3210 = 1;
				}
			}
		}
		if (fLocal_3266 > 10000f)
		{
			fVar0 = unk_0xB7A628320EFF8E47(unk_0x57240623C1BC6E88(Local_3534[2 /*2*/], 1), Param1);
			if (fVar0 > 14400f)
			{
				if (unk_0x72222684DEA44B9F(Local_3534[2 /*2*/]))
				{
					unk_0x394D4A83F07AE208(Local_3534[2 /*2*/]);
				}
				unk_0xF8E2640CE709A221(2, sLocal_3296);
				unk_0x924CDE68BA2ED3BA(iLocal_3270);
				func_54(&Local_3504, 0);
				func_50(&(Local_3534[2 /*2*/]), 0);
			}
		}
	}
}

void func_420()
{
	switch (iLocal_3107)
	{
		case 0:
			if (!bLocal_3169)
			{
				if (!func_47())
				{
					func_16(unk_0x17B5CC8A8615737D(), -1309.016f, -641.8671f, 25.5017f, 242.3463f, 0, 0);
					if (iLocal_3170 == 0)
					{
						if (iLocal_3106 == 1)
						{
							if (func_10(unk_0x17B5CC8A8615737D()))
							{
								func_3(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 50f, 13, 5000, 0, 0);
								iLocal_3170 = 1;
							}
						}
					}
					func_16(unk_0x17B5CC8A8615737D(), -1309.016f, -641.8671f, 25.5017f, 242.3463f, 1, 1);
				}
				func_56(&(Local_3108.f_28[0]));
				func_52(&(Local_3108.f_35[0]));
				func_52(&(Local_3108.f_35[1]));
				func_443();
				func_441(1);
				func_438();
				if (func_13(Local_3490.f_0))
				{
					unk_0x482AE8C0EAF5AE07(Local_3490.f_0, 1084227584);
				}
				func_419(fLocal_3268, Local_3556);
				func_431(1);
				iLocal_3107 = 2;
			}
			else
			{
				func_430("NMT_2_RCM", 0);
				if (unk_0x6E5BBCE1B1E5B2EB())
				{
					unk_0x5C9E441B0B13FC8B(sLocal_3301, 4, 0, 0, Local_3483.f_1);
				}
				if (func_36(1, 1093140480, 0))
				{
					if (func_10(Local_3108.f_35[0]))
					{
						func_429(&Local_3490, &(Local_3108.f_35[0]));
					}
					if (func_10(Local_3490.f_0))
					{
						unk_0x31589F3476134C55(Local_3490.f_0);
						unk_0x4C44C1A3160350E2(Local_3490.f_0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					if (func_10(Local_3108.f_35[1]))
					{
						func_429(&Local_3497, &(Local_3108.f_35[1]));
					}
					if (func_10(Local_3497.f_0))
					{
						unk_0x31589F3476134C55(Local_3497.f_0);
						unk_0x4C44C1A3160350E2(Local_3497.f_0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					unk_0xD9C496FEAA81FF4A(unk_0x17B5CC8A8615737D(), sLocal_3300, 0, 0, 0);
					unk_0xD9C496FEAA81FF4A(Local_3476.f_0, sLocal_3299, 2, Local_3476.f_1, 0);
					unk_0xD9C496FEAA81FF4A(Local_3469.f_0, sLocal_3298, 2, Local_3469.f_1, 0);
					unk_0xD9C496FEAA81FF4A(Local_3483.f_0, sLocal_3301, 2, Local_3483.f_1, 0);
					if (func_13(Local_3490.f_0))
					{
						unk_0xD9C496FEAA81FF4A(Local_3490.f_0, sLocal_3302, 0, 0, 0);
					}
					else
					{
						func_52(&(Local_3108.f_35[0]));
						func_52(&Local_3490);
						unk_0xD9C496FEAA81FF4A(Local_3490.f_0, sLocal_3302, 2, Local_3490.f_1, 0);
					}
					if (func_13(Local_3497.f_0))
					{
						unk_0xD9C496FEAA81FF4A(Local_3497.f_0, sLocal_3303, 0, 0, 0);
					}
					else
					{
						func_52(&(Local_3108.f_35[1]));
						func_52(&Local_3497);
						unk_0xD9C496FEAA81FF4A(Local_3497.f_0, sLocal_3303, 2, Local_3497.f_1, 0);
					}
					func_21(800, 0);
					unk_0x46081AAD7F4633BD(1);
					unk_0x51C344BE3DCB5CB5(0);
					unk_0x4EDE34FBADD967A6(0);
					func_428();
					func_292(-1310.7f, -640.22f, 26.54f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
					func_443();
					func_56(&(Local_3108.f_28[0]));
					unk_0x5BD872FA7F0EC076(0.3f);
					unk_0x4547FC28D02AD087(0.3f);
					func_441(0);
					func_419(fLocal_3268, Local_3556);
					iLocal_3107 = 1;
				}
			}
			break;
		
		case 1:
			func_419(fLocal_3268, Local_3556);
			if (!unk_0x23E9113C762466ED(Local_3476.f_0))
			{
				if (unk_0x23E9113C762466ED(unk_0x6DFA780BD6E87375(sLocal_3299, 0)))
				{
					Local_3476.f_0 = unk_0xB80CAAF3D65FBC1F(unk_0x6DFA780BD6E87375(sLocal_3299, 0));
				}
			}
			if (!unk_0x23E9113C762466ED(Local_3469.f_0))
			{
				if (unk_0x23E9113C762466ED(unk_0x6DFA780BD6E87375(sLocal_3298, 0)))
				{
					Local_3469.f_0 = unk_0xB80CAAF3D65FBC1F(unk_0x6DFA780BD6E87375(sLocal_3298, 0));
				}
			}
			if (!unk_0x23E9113C762466ED(Local_3483.f_0))
			{
				if (unk_0x23E9113C762466ED(unk_0x6DFA780BD6E87375(sLocal_3301, 0)))
				{
					Local_3483.f_0 = unk_0xB80CAAF3D65FBC1F(unk_0x6DFA780BD6E87375(sLocal_3301, 0));
				}
			}
			if (!unk_0x23E9113C762466ED(Local_3490.f_0))
			{
				if (unk_0x23E9113C762466ED(unk_0x6DFA780BD6E87375(sLocal_3302, 0)))
				{
					Local_3490.f_0 = unk_0xBFC71CD990E479DB(unk_0x6DFA780BD6E87375(sLocal_3302, 0));
				}
			}
			if (!unk_0x23E9113C762466ED(Local_3497.f_0))
			{
				if (unk_0x23E9113C762466ED(unk_0x6DFA780BD6E87375(sLocal_3303, 0)))
				{
					Local_3497.f_0 = unk_0xBFC71CD990E479DB(unk_0x6DFA780BD6E87375(sLocal_3303, 0));
				}
			}
			if ((func_13(Local_3490.f_0) && func_20(Local_3476.f_0)) && func_20(Local_3469.f_0))
			{
				if (unk_0x649012AFAC9B7CD0(sLocal_3299, 0))
				{
					unk_0x2EE4FDDB1E7664FB();
					if (!unk_0x7B816C72877502C5(Local_3476.f_0, Local_3490.f_0))
					{
						unk_0xFCB4AA590A0D6A59(Local_3476.f_0, Local_3490.f_0, 0);
					}
					func_427();
				}
				if (unk_0x649012AFAC9B7CD0(sLocal_3298, 0))
				{
					if (!unk_0x7B816C72877502C5(Local_3469.f_0, Local_3490.f_0))
					{
						unk_0xFCB4AA590A0D6A59(Local_3469.f_0, Local_3490.f_0, 2);
					}
					func_426();
				}
				if (unk_0x649012AFAC9B7CD0(sLocal_3302, 0))
				{
					func_425();
					unk_0x016C65ED12A14D44(Local_3490.f_0, 1);
					unk_0x482AE8C0EAF5AE07(Local_3490.f_0, 1084227584);
					unk_0x464F1CA52B023D8D(Local_3490.f_0);
				}
				unk_0x250DE4033DCCFBBA(Local_3490.f_0, 1);
				iLocal_3243 = 1;
			}
			if (func_13(Local_3497.f_0) && func_20(Local_3483.f_0))
			{
				if (unk_0x649012AFAC9B7CD0(sLocal_3301, 0))
				{
					if (!unk_0x7B816C72877502C5(Local_3483.f_0, Local_3497.f_0))
					{
						unk_0xFCB4AA590A0D6A59(Local_3483.f_0, Local_3497.f_0, -1);
					}
					func_423();
				}
				if (unk_0x649012AFAC9B7CD0(sLocal_3303, 0))
				{
					func_421();
					unk_0x016C65ED12A14D44(Local_3497.f_0, 1);
					unk_0x464F1CA52B023D8D(Local_3497.f_0);
				}
			}
			if (unk_0x66FBC42991B0D41E(0))
			{
				unk_0xBA7CD73403732191(22f);
				unk_0x503F20CB07C55470(0f, 1065353216);
			}
			if (unk_0x8AE74E6771D8FA39() && unk_0x25BD4C26D84038CD())
			{
				unk_0x0668B21A0C3A4821(-1312.556f, -664.3428f, 25.5716f, 150f, 0, 0, 0, 0, 0);
			}
			if (!unk_0x1B76B77EDF24A933())
			{
				func_441(1);
				func_438();
				func_431(0);
				iLocal_3107 = 2;
			}
			else
			{
				if (unk_0x4A933E1DE60245B7() >= 104000)
				{
					unk_0xD1BB2AD73E7FC3A7(2, 18, 1);
				}
				if (unk_0x4A933E1DE60245B7() > 900 && unk_0x4A933E1DE60245B7() < 1480)
				{
					unk_0x5BD872FA7F0EC076(0f);
					unk_0x4547FC28D02AD087(0f);
				}
				else
				{
					unk_0x5BD872FA7F0EC076(0.3f);
					unk_0x4547FC28D02AD087(0.3f);
				}
				func_441(0);
			}
			break;
		
		case 2:
			if (func_13(Local_3490.f_0))
			{
				unk_0x250DE4033DCCFBBA(Local_3490.f_0, 1);
				iLocal_3243 = 1;
			}
			if (unk_0x1B76B77EDF24A933())
			{
				unk_0x404A255180289CD1(0);
			}
			else
			{
				if (unk_0x77888DFE5B94E7E5())
				{
					unk_0xB5BD48559882D958();
				}
				if (bLocal_3169)
				{
					func_23(1, 1, 1, 1);
					func_31(0, 0, 1, 0);
				}
				iLocal_3242 = 0;
				func_532(&Local_3108, 0, 1);
				func_419(fLocal_3268, Local_3556);
				func_290(1);
			}
			break;
	}
}

void func_421()
{
	if (func_13(Local_3497.f_0))
	{
		unk_0x31589F3476134C55(Local_3497.f_0);
		unk_0xD602D152E57C823D(Local_3497.f_0, 1);
		unk_0x357EE036FE09513D(Local_3497.f_0, 0, 0);
		unk_0x524A422B74847594(Local_3497.f_0, 1, 1, 0);
		unk_0x5DED87DD8464517B(Local_3497.f_0, 0);
		unk_0x2B9B4DCEF80D1566(Local_3497.f_0, 1);
		unk_0xF8EDF3B7E8D2CD26(Local_3497.f_0, 1);
		unk_0x4B04B4FAE554FA03(Local_3497.f_0, 2000);
		unk_0x3D8459AD189E8571(Local_3497.f_0, 1);
		unk_0xDED89A6CAC392246(Local_3497.f_0, 0);
		unk_0xEC2A26A6CA02C73C(Local_3497.f_0, 0);
		unk_0x4F94FF48185A8B4B(Local_3497.f_0, 0);
		unk_0xFBD8170293283E41(Local_3497.f_0, 0, 1);
		unk_0xD602D152E57C823D(Local_3497.f_0, 3);
		unk_0x114D595E662E3EFD(Local_3497.f_0, 0, 0);
		unk_0xD90CB3CF9A40791C(Local_3497.f_1, 1);
		func_422(Local_3497.f_0, 1);
		unk_0x5DC8C2F2F8A363C2(Local_3497.f_0, Local_3497.f_3, 1, 0, 0, 1);
		unk_0xFE2306F4BAC122B2(Local_3497.f_0, -0.0248f, 0.0004f, 0.8949f, 0.4456f);
		unk_0x98F0FA127445E343(Local_3497.f_0, 1);
	}
}

void func_422(var uParam0, int iParam1)
{
	Global_91491.f_22[iParam1] = uParam0;
}

void func_423()
{
	if (func_20(Local_3483.f_0))
	{
		unk_0x2F933BB106547968(Local_3483.f_0, 4, 0, 0, 0);
		unk_0x16A327AF9E84ABA6(Local_3483.f_1, 1);
		unk_0x6F65279C9BC14EDB(Local_3483.f_0, 0);
		unk_0x5A1E5F0E805EF8B8(Local_3483.f_0, 0);
		unk_0x6018E338F7ABCE75(Local_3483.f_0, 32, 0);
		unk_0x6018E338F7ABCE75(Local_3483.f_0, 29, 0);
		unk_0x6018E338F7ABCE75(Local_3483.f_0, 116, 0);
		unk_0x9DFD53125A4416A3(Local_3483.f_0, 1);
		unk_0x4114B83B329702FF(Local_3483.f_0, 1);
		if (unk_0xF30AB065E07D2B0F(Local_3483.f_0))
		{
			unk_0xFB2D342CDD441DD9(Local_3483.f_0);
		}
		unk_0x3BB70315907D9456(Local_3483.f_0, iLocal_3286);
		func_424(&uLocal_3304, 3, Local_3483.f_0, "DINAPOLI", 0, 1);
		unk_0x8E601051A3FDE8ED(Local_3483.f_0, 1);
		unk_0xCC61640A821F277C(Local_3483.f_0, 1);
	}
}

void func_424(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69702)
	{
		if (!unk_0xCA41A00932714525(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xFB616ABA635A95B3(iParam2, 0);
			}
			else
			{
				unk_0xFB616ABA635A95B3(iParam2, 1);
			}
		}
		if (!unk_0xCA41A00932714525(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x8E601051A3FDE8ED(iParam2, 0);
			}
			else
			{
				unk_0x8E601051A3FDE8ED(iParam2, 1);
			}
		}
	}
}

void func_425()
{
	if (func_13(Local_3490.f_0))
	{
		unk_0x31589F3476134C55(Local_3490.f_0);
		unk_0xD602D152E57C823D(Local_3490.f_0, 1);
		unk_0x357EE036FE09513D(Local_3490.f_0, 65, 0);
		unk_0x2B9B4DCEF80D1566(Local_3490.f_0, 1);
		unk_0xF8EDF3B7E8D2CD26(Local_3490.f_0, 1);
		unk_0x4B04B4FAE554FA03(Local_3490.f_0, 2000);
		unk_0xDED89A6CAC392246(Local_3490.f_0, 0);
		unk_0xEC2A26A6CA02C73C(Local_3490.f_0, 0);
		unk_0x114D595E662E3EFD(Local_3490.f_0, 5, 0);
		unk_0xD90CB3CF9A40791C(Local_3490.f_1, 1);
		unk_0x26C9531CF391AB1D(Local_3490.f_0);
		func_422(Local_3490.f_0, 0);
	}
}

void func_426()
{
	if (func_20(Local_3469.f_0))
	{
		unk_0x7F73E2B58861632F(Local_3469.f_0);
		unk_0x16A327AF9E84ABA6(Local_3469.f_1, 1);
		unk_0x6F65279C9BC14EDB(Local_3469.f_0, 0);
		unk_0xB5E6A8B9C64444C4(Local_3469.f_0, 0);
		unk_0x6018E338F7ABCE75(Local_3469.f_0, 32, 0);
		unk_0x6018E338F7ABCE75(Local_3469.f_0, 132, 1);
		unk_0x6018E338F7ABCE75(Local_3469.f_0, 29, 0);
		unk_0x6018E338F7ABCE75(Local_3469.f_0, 116, 0);
		if (unk_0xF30AB065E07D2B0F(Local_3469.f_0))
		{
			unk_0xFB2D342CDD441DD9(Local_3469.f_0);
		}
		unk_0x3BB70315907D9456(Local_3469.f_0, iLocal_3287);
		func_424(&uLocal_3304, 5, Local_3469.f_0, "MRSTHORNHILL", 0, 1);
		unk_0x8E601051A3FDE8ED(Local_3469.f_0, 1);
		unk_0xCC61640A821F277C(Local_3469.f_0, 1);
	}
}

void func_427()
{
	if (func_20(Local_3476.f_0))
	{
		unk_0x7F73E2B58861632F(Local_3476.f_0);
		unk_0x16A327AF9E84ABA6(Local_3476.f_1, 1);
		unk_0x6F65279C9BC14EDB(Local_3476.f_0, 0);
		unk_0xB5E6A8B9C64444C4(Local_3476.f_0, 0);
		unk_0x6018E338F7ABCE75(Local_3476.f_0, 32, 0);
		unk_0x6018E338F7ABCE75(Local_3476.f_0, 132, 1);
		unk_0x6018E338F7ABCE75(Local_3476.f_0, 29, 0);
		unk_0x6018E338F7ABCE75(Local_3476.f_0, 116, 0);
		if (unk_0xF30AB065E07D2B0F(Local_3476.f_0))
		{
			unk_0xFB2D342CDD441DD9(Local_3476.f_0);
		}
		unk_0x3BB70315907D9456(Local_3476.f_0, iLocal_3287);
		func_424(&uLocal_3304, 4, Local_3476.f_0, "NIGEL", 0, 1);
		unk_0x8E601051A3FDE8ED(Local_3476.f_0, 1);
		unk_0xCC61640A821F277C(Local_3476.f_0, 1);
	}
}

void func_428()
{
	int iVar0;
	
	iVar0 = func_286();
	if (iVar0 == -1)
	{
		return;
	}
	Global_100787[iVar0 /*10*/] = 1;
}

void func_429(int iParam0, var uParam1)
{
	*iParam0 = *uParam1;
	*uParam1 = 0;
}

void func_430(char* sParam0, bool bParam1)
{
	func_295(bParam1);
	unk_0xF7CF05FEB40E538B(sParam0, 8);
}

void func_431(bool bParam0)
{
	func_437(sLocal_3296, iLocal_3258, bParam0, 1);
	func_436();
	func_435(1);
	func_434(joaat("a_m_m_bevhills_02"));
	func_379();
	fLocal_1310 = 250f;
	bLocal_142 = true;
	func_433(1);
	bLocal_148 = true;
	func_432(1, 0, -1);
	unk_0xFFE4319CE7BE2DBA(2);
}

void func_432(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		iLocal_143 = 1;
		iLocal_2829 = iParam1;
		iLocal_2830 = iParam2;
	}
}

void func_433(bool bParam0)
{
	bLocal_153 = bParam0;
}

void func_434(int iParam0)
{
	iLocal_2828 = iParam0;
}

void func_435(int iParam0)
{
	bLocal_147 = iParam0;
}

void func_436()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Local_1878[0 /*3*/] = { -1189.919f, -864.3419f, 13.5062f };
	fLocal_154[0] = 0.011f;
	fLocal_240[0] = -0.0057f;
	fLocal_326[0] = -0.4728f;
	fLocal_412[0] = 0.8811f;
	iLocal_1319[0] = 3;
	fLocal_498[0] = 12794f;
	iLocal_2600[0] = joaat("f620");
	Local_1878[1 /*3*/] = { -1168.025f, -846.5394f, 13.8245f };
	fLocal_154[1] = 0.0067f;
	fLocal_240[1] = 0.0025f;
	fLocal_326[1] = 0.3507f;
	fLocal_412[1] = 0.9364f;
	iLocal_1319[1] = 4;
	fLocal_498[1] = 12926f;
	iLocal_2600[1] = joaat("washington");
	Local_1878[2 /*3*/] = { -1052.359f, -730.7704f, 18.729f };
	fLocal_154[2] = -0.0125f;
	fLocal_240[2] = -0.0121f;
	fLocal_326[2] = 0.9079f;
	fLocal_412[2] = 0.4187f;
	iLocal_1319[2] = 14;
	fLocal_498[2] = 19594.96f;
	iLocal_2600[2] = joaat("serrano");
	Local_1878[3 /*3*/] = { -1050.453f, -743.3076f, 18.7718f };
	fLocal_154[3] = -0.0019f;
	fLocal_240[3] = -0.0002f;
	fLocal_326[3] = -0.3894f;
	fLocal_412[3] = 0.9211f;
	iLocal_1319[3] = 6;
	fLocal_498[3] = 20400f;
	iLocal_2600[3] = joaat("washington");
	Local_1878[4 /*3*/] = { -1032.554f, -734.0855f, 19.1223f };
	fLocal_154[4] = 0.0233f;
	fLocal_240[4] = -0.0077f;
	fLocal_326[4] = -0.4212f;
	fLocal_412[4] = 0.9066f;
	iLocal_1319[4] = 16;
	fLocal_498[4] = 19960.85f;
	iLocal_2600[4] = joaat("serrano");
	Local_1878[5 /*3*/] = { -865.4848f, -623.928f, 28.3187f };
	fLocal_154[5] = 0.0038f;
	fLocal_240[5] = -0.0257f;
	fLocal_326[5] = 0.9893f;
	fLocal_412[5] = -0.1433f;
	iLocal_1319[5] = 7;
	fLocal_498[5] = 28417f;
	iLocal_2600[5] = joaat("washington");
	Local_1878[6 /*3*/] = { -869.6063f, -612.9931f, 28.5539f };
	fLocal_154[6] = 0.005f;
	fLocal_240[6] = -0.0119f;
	fLocal_326[6] = 0.9777f;
	fLocal_412[6] = -0.2094f;
	iLocal_1319[6] = 8;
	fLocal_498[6] = 28417f;
	iLocal_2600[6] = joaat("serrano");
	Local_1878[7 /*3*/] = { -853.7338f, -652.7806f, 27.3348f };
	fLocal_154[7] = -0.0022f;
	fLocal_240[7] = -0.0021f;
	fLocal_326[7] = 0.7085f;
	fLocal_412[7] = 0.7057f;
	iLocal_1319[7] = 9;
	fLocal_498[7] = 28549f;
	iLocal_2600[7] = joaat("serrano");
	Local_1878[8 /*3*/] = { -797.3943f, -667.453f, 28.1434f };
	fLocal_154[8] = 0.0434f;
	fLocal_240[8] = 0.0031f;
	fLocal_326[8] = -0.7039f;
	fLocal_412[8] = 0.709f;
	iLocal_1319[8] = 10;
	fLocal_498[8] = 30654f;
	iLocal_2600[8] = joaat("feltzer2");
	Local_1878[9 /*3*/] = { -728.5153f, -661.8074f, 29.8396f };
	fLocal_154[9] = -0.0017f;
	fLocal_240[9] = 0.0032f;
	fLocal_326[9] = -0.7028f;
	fLocal_412[9] = 0.7114f;
	iLocal_1319[9] = 11;
	fLocal_498[9] = 33027f;
	iLocal_2600[9] = joaat("rapidgt");
	Local_1878[10 /*3*/] = { -595.1748f, -661.9557f, 31.8497f };
	fLocal_154[10] = 0.0098f;
	fLocal_240[10] = -0.0088f;
	fLocal_326[10] = -0.7017f;
	fLocal_412[10] = 0.7123f;
	iLocal_1319[10] = 15;
	fLocal_498[10] = 48186f;
	iLocal_2600[10] = joaat("sultan");
	Local_1878[11 /*3*/] = { -477.1852f, -644.7173f, 32.0538f };
	fLocal_154[11] = -0.0087f;
	fLocal_240[11] = 0.0318f;
	fLocal_326[11] = 0.0461f;
	fLocal_412[11] = 0.9984f;
	iLocal_1319[11] = 17;
	fLocal_498[11] = 55765.85f;
	iLocal_2600[11] = joaat("serrano");
	Local_1878[12 /*3*/] = { -489.0458f, -666.3751f, 32.3303f };
	fLocal_154[12] = 0.0113f;
	fLocal_240[12] = 0.0176f;
	fLocal_326[12] = -0.7063f;
	fLocal_412[12] = 0.7076f;
	iLocal_1319[12] = 23;
	fLocal_498[12] = 58613f;
	iLocal_2600[12] = joaat("asterope");
	Local_1878[13 /*3*/] = { -487.5655f, -744.9453f, 32.6015f };
	fLocal_154[13] = -0.0937f;
	fLocal_240[13] = 0.045f;
	fLocal_326[13] = 0.8793f;
	fLocal_412[13] = 0.4648f;
	iLocal_1319[13] = 19;
	fLocal_498[13] = 60459.32f;
	iLocal_2600[13] = joaat("bmx");
	Local_1878[14 /*3*/] = { -478.1905f, -835.1024f, 29.9746f };
	fLocal_154[14] = -0.0021f;
	fLocal_240[14] = -0.0021f;
	fLocal_326[14] = 0.7008f;
	fLocal_412[14] = 0.7134f;
	iLocal_1319[14] = 18;
	fLocal_498[14] = 64923.85f;
	iLocal_2600[14] = joaat("serrano");
	Local_1878[15 /*3*/] = { -430.6053f, -816.6718f, 36.8249f };
	fLocal_154[15] = -0.0001f;
	fLocal_240[15] = 0.0048f;
	fLocal_326[15] = 0.9993f;
	fLocal_412[15] = 0.0373f;
	iLocal_1319[15] = 28;
	fLocal_498[15] = 68551f;
	iLocal_2600[15] = joaat("asterope");
	Local_1878[16 /*3*/] = { -427.4086f, -762.012f, 36.6573f };
	fLocal_154[16] = 0.0001f;
	fLocal_240[16] = 0.0049f;
	fLocal_326[16] = 1f;
	fLocal_412[16] = 0.0047f;
	iLocal_1319[16] = 30;
	fLocal_498[16] = 70333f;
	iLocal_2600[16] = joaat("sultan");
	Local_1878[17 /*3*/] = { -476.9606f, -664.9507f, 31.9901f };
	fLocal_154[17] = -0.003f;
	fLocal_240[17] = -0.0083f;
	fLocal_326[17] = 0.7264f;
	fLocal_412[17] = -0.6872f;
	iLocal_1319[17] = 70;
	fLocal_498[17] = 77000f;
	iLocal_2600[17] = joaat("sultan");
	Local_1878[18 /*3*/] = { -436.342f, -650.5261f, 30.4239f };
	fLocal_154[18] = 0.0056f;
	fLocal_240[18] = 0.0224f;
	fLocal_326[18] = 0.7071f;
	fLocal_412[18] = 0.7068f;
	iLocal_1319[18] = 13;
	fLocal_498[18] = 77590f;
	iLocal_2600[18] = joaat("sultan");
	Local_1878[19 /*3*/] = { -420.96f, -656.3897f, 30.5754f };
	fLocal_154[19] = 0.0112f;
	fLocal_240[19] = 0.0112f;
	fLocal_326[19] = 0.707f;
	fLocal_412[19] = 0.707f;
	iLocal_1319[19] = 12;
	fLocal_498[19] = 78000f;
	iLocal_2600[19] = joaat("packer");
	Local_1878[20 /*3*/] = { -455.2408f, -535.85f, 24.7102f };
	fLocal_154[20] = -0.0022f;
	fLocal_240[20] = 0.0022f;
	fLocal_326[20] = -0.707f;
	fLocal_412[20] = 0.7072f;
	iLocal_1319[20] = 31;
	fLocal_498[20] = 80849f;
	iLocal_2600[20] = joaat("sultan");
	Local_1878[21 /*3*/] = { -421.8391f, -535.8503f, 24.7099f };
	fLocal_154[21] = -0.0024f;
	fLocal_240[21] = 0.0024f;
	fLocal_326[21] = -0.7071f;
	fLocal_412[21] = 0.7071f;
	iLocal_1319[21] = 32;
	fLocal_498[21] = 80849f;
	iLocal_2600[21] = joaat("sultan");
	Local_1878[22 /*3*/] = { -323.2696f, -519.5041f, 24.769f };
	fLocal_154[22] = -0.0086f;
	fLocal_240[22] = -0.0166f;
	fLocal_326[22] = -0.7001f;
	fLocal_412[22] = 0.7138f;
	iLocal_1319[22] = 34;
	fLocal_498[22] = 85280f;
	iLocal_2600[22] = joaat("asterope");
	Local_1878[23 /*3*/] = { -384.7831f, -496.5516f, 24.806f };
	fLocal_154[23] = -0.0022f;
	fLocal_240[23] = -0.0022f;
	fLocal_326[23] = 0.7072f;
	fLocal_412[23] = 0.7071f;
	iLocal_1319[23] = 33;
	fLocal_498[23] = 85722f;
	iLocal_2600[23] = joaat("landstalker");
	Local_1878[24 /*3*/] = { -299.8336f, -519.6835f, 24.804f };
	fLocal_154[24] = -0.0071f;
	fLocal_240[24] = -0.0166f;
	fLocal_326[24] = -0.7047f;
	fLocal_412[24] = 0.7093f;
	iLocal_1319[24] = 35;
	fLocal_498[24] = 86195f;
	iLocal_2600[24] = joaat("asterope");
	Local_1878[25 /*3*/] = { -296.6222f, -496.012f, 24.8684f };
	fLocal_154[25] = -0.0026f;
	fLocal_240[25] = -0.0022f;
	fLocal_326[25] = 0.7084f;
	fLocal_412[25] = 0.7058f;
	iLocal_1319[25] = 21;
	fLocal_498[25] = 87170.85f;
	iLocal_2600[25] = joaat("landstalker");
	Local_1878[26 /*3*/] = { -242.5362f, -502.0159f, 25.6451f };
	fLocal_154[26] = -0.0096f;
	fLocal_240[26] = -0.0094f;
	fLocal_326[26] = 0.7194f;
	fLocal_412[26] = 0.6945f;
	iLocal_1319[26] = 36;
	fLocal_498[26] = 88537f;
	iLocal_2600[26] = joaat("landstalker");
	Local_1878[27 /*3*/] = { -234.2082f, -530.1547f, 25.9344f };
	fLocal_154[27] = -0.0058f;
	fLocal_240[27] = 0.0064f;
	fLocal_326[27] = 0.7091f;
	fLocal_412[27] = -0.705f;
	iLocal_1319[27] = 39;
	fLocal_498[27] = 90066f;
	iLocal_2600[27] = joaat("rapidgt");
	Local_1878[28 /*3*/] = { -204.8521f, -534.9627f, 26.6094f };
	fLocal_154[28] = 0.0281f;
	fLocal_240[28] = 0.0002f;
	fLocal_326[28] = -0.6936f;
	fLocal_412[28] = 0.7198f;
	iLocal_1319[28] = 37;
	fLocal_498[28] = 91140f;
	iLocal_2600[28] = joaat("asterope");
	Local_1878[29 /*3*/] = { -186.2448f, -518.6406f, 27.3221f };
	fLocal_154[29] = -0.0061f;
	fLocal_240[29] = -0.0197f;
	fLocal_326[29] = -0.7053f;
	fLocal_412[29] = 0.7086f;
	iLocal_1319[29] = 41;
	fLocal_498[29] = 91890f;
	iLocal_2600[29] = joaat("fq2");
	Local_1878[30 /*3*/] = { -181.6259f, -523.8001f, 27.2923f };
	fLocal_154[30] = 0.0116f;
	fLocal_240[30] = -0.0124f;
	fLocal_326[30] = -0.7029f;
	fLocal_412[30] = 0.7111f;
	iLocal_1319[30] = 38;
	fLocal_498[30] = 92230f;
	iLocal_2600[30] = joaat("sultan");
	Local_1878[31 /*3*/] = { -152.8287f, -489.4706f, 28.3269f };
	fLocal_154[31] = -0.0213f;
	fLocal_240[31] = 0.0018f;
	fLocal_326[31] = 0.7254f;
	fLocal_412[31] = 0.688f;
	iLocal_1319[31] = 24;
	fLocal_498[31] = 92554.85f;
	iLocal_2600[31] = joaat("landstalker");
	Local_1878[32 /*3*/] = { -172.1277f, -500.8638f, 27.8326f };
	fLocal_154[32] = -0.0252f;
	fLocal_240[32] = -0.0296f;
	fLocal_326[32] = 0.7083f;
	fLocal_412[32] = 0.7048f;
	iLocal_1319[32] = 40;
	fLocal_498[32] = 94528f;
	iLocal_2600[32] = joaat("fq2");
	Local_1878[33 /*3*/] = { -114.866f, -500.2346f, 29.8111f };
	fLocal_154[33] = -0.0104f;
	fLocal_240[33] = -0.0098f;
	fLocal_326[33] = 0.7021f;
	fLocal_412[33] = 0.7119f;
	iLocal_1319[33] = 78;
	fLocal_498[33] = 95865.44f;
	iLocal_2600[33] = joaat("asterope");
	Local_1878[34 /*3*/] = { -129.1858f, -505.694f, 29.242f };
	fLocal_154[34] = -0.015f;
	fLocal_240[34] = -0.0163f;
	fLocal_326[34] = 0.7139f;
	fLocal_412[34] = 0.6999f;
	iLocal_1319[34] = 42;
	fLocal_498[34] = 95886f;
	iLocal_2600[34] = joaat("asterope");
	Local_1878[35 /*3*/] = { -55.6079f, -499.5939f, 31.8493f };
	fLocal_154[35] = -0.0116f;
	fLocal_240[35] = -0.0112f;
	fLocal_326[35] = 0.7134f;
	fLocal_412[35] = 0.7006f;
	iLocal_1319[35] = 25;
	fLocal_498[35] = 96787.85f;
	iLocal_2600[35] = joaat("landstalker");
	Local_1878[36 /*3*/] = { -87.112f, -504.988f, 30.9077f };
	fLocal_154[36] = -0.0159f;
	fLocal_240[36] = -0.0149f;
	fLocal_326[36] = 0.7118f;
	fLocal_412[36] = 0.702f;
	iLocal_1319[36] = 43;
	fLocal_498[36] = 97140f;
	iLocal_2600[36] = joaat("fq2");
	Local_1878[37 /*3*/] = { 26.5103f, -499.3918f, 34.2088f };
	fLocal_154[37] = -0.0005f;
	fLocal_240[37] = -0.0002f;
	fLocal_326[37] = 0.7186f;
	fLocal_412[37] = 0.6954f;
	iLocal_1319[37] = 79;
	fLocal_498[37] = 100001.4f;
	iLocal_2600[37] = joaat("packer");
	Local_1878[39 /*3*/] = { 70.5888f, -526.8503f, 33.7031f };
	fLocal_154[39] = -0.0004f;
	fLocal_240[39] = -0.0004f;
	fLocal_326[39] = -0.7039f;
	fLocal_412[39] = 0.7103f;
	iLocal_1319[39] = 46;
	fLocal_498[39] = 102948f;
	iLocal_2600[39] = joaat("ninef2");
	Local_1878[40 /*3*/] = { 99.8609f, -521.5526f, 33.5624f };
	fLocal_154[40] = 0.0145f;
	fLocal_240[40] = -0.0145f;
	fLocal_326[40] = 0.707f;
	fLocal_412[40] = -0.7069f;
	iLocal_1319[40] = 47;
	fLocal_498[40] = 104004f;
	iLocal_2600[40] = joaat("landstalker");
	Local_1878[41 /*3*/] = { 196.1974f, -526.9512f, 33.5498f };
	fLocal_154[41] = 0.0178f;
	fLocal_240[41] = -0.0178f;
	fLocal_326[41] = 0.7069f;
	fLocal_412[41] = -0.7068f;
	iLocal_1319[41] = 48;
	fLocal_498[41] = 107502f;
	iLocal_2600[41] = joaat("landstalker");
	Local_1878[42 /*3*/] = { 230.2825f, -516.1511f, 33.5591f };
	fLocal_154[42] = -0.0023f;
	fLocal_240[42] = 0.0023f;
	fLocal_326[42] = -0.7071f;
	fLocal_412[42] = 0.7071f;
	iLocal_1319[42] = 49;
	fLocal_498[42] = 108624f;
	iLocal_2600[42] = joaat("landstalker");
	Local_1878[44 /*3*/] = { 301.1906f, -521.55f, 33.4621f };
	fLocal_154[44] = 0.0001f;
	fLocal_240[44] = -0.0001f;
	fLocal_326[44] = 0.7071f;
	fLocal_412[44] = -0.7071f;
	iLocal_1319[44] = 50;
	fLocal_498[44] = 111198f;
	iLocal_2600[44] = joaat("sultan");
	Local_2134[0 /*3*/] = { -1200.091f, -849.0596f, 13.5431f };
	fLocal_1014[0] = -0.0171f;
	fLocal_1085[0] = -0.0063f;
	fLocal_1156[0] = 0.88f;
	fLocal_1227[0] = 0.4747f;
	iLocal_2686[0] = joaat("feltzer2");
	Local_2134[1 /*3*/] = { -1058.345f, -772.2757f, 18.8924f };
	fLocal_1014[1] = -0.0028f;
	fLocal_1085[1] = 0.0149f;
	fLocal_1156[1] = 0.3553f;
	fLocal_1227[1] = 0.9346f;
	iLocal_2686[1] = joaat("feltzer2");
	Local_2134[2 /*3*/] = { -1070.664f, -739.6081f, 18.8482f };
	fLocal_1014[2] = -0.0111f;
	fLocal_1085[2] = 0.0192f;
	fLocal_1156[2] = 0.9254f;
	fLocal_1227[2] = 0.3784f;
	iLocal_2686[2] = joaat("feltzer2");
	Local_2134[3 /*3*/] = { -1121.096f, -880.1656f, 7.6752f };
	fLocal_1014[3] = 0.0021f;
	fLocal_1085[3] = -0.0011f;
	fLocal_1156[3] = -0.4944f;
	fLocal_1227[3] = 0.8692f;
	iLocal_2686[3] = joaat("serrano");
	Local_2134[4 /*3*/] = { -1115.618f, -807.3134f, 16.6315f };
	fLocal_1014[4] = -0.0414f;
	fLocal_1085[4] = -0.0257f;
	fLocal_1156[4] = 0.8471f;
	fLocal_1227[4] = -0.5292f;
	iLocal_2686[4] = joaat("serrano");
	Local_2134[5 /*3*/] = { -1112.403f, -774.3158f, 18.3801f };
	fLocal_1014[5] = -0.0097f;
	fLocal_1085[5] = -0.0319f;
	fLocal_1156[5] = 0.5058f;
	fLocal_1227[5] = 0.862f;
	iLocal_2686[5] = joaat("serrano");
	Local_2134[6 /*3*/] = { -1130.529f, -792.3233f, 16.5972f };
	fLocal_1014[6] = -0.0307f;
	fLocal_1085[6] = -0.0293f;
	fLocal_1156[6] = 0.9133f;
	fLocal_1227[6] = 0.4051f;
	iLocal_2686[6] = joaat("feltzer2");
	Local_2134[7 /*3*/] = { -1045.39f, -778.9995f, 18.3863f };
	fLocal_1014[7] = 0.0118f;
	fLocal_1085[7] = 0.037f;
	fLocal_1156[7] = 0.5106f;
	fLocal_1227[7] = 0.859f;
	iLocal_2686[7] = joaat("serrano");
	Local_2134[8 /*3*/] = { -1034.826f, -739.7039f, 18.881f };
	fLocal_1014[8] = 0.0195f;
	fLocal_1085[8] = 0.019f;
	fLocal_1156[8] = -0.4353f;
	fLocal_1227[8] = 0.8999f;
	iLocal_2686[8] = joaat("radi");
	Local_2134[9 /*3*/] = { -1033.929f, -712.6562f, 19.4857f };
	fLocal_1014[9] = -0.0193f;
	fLocal_1085[9] = -0.0194f;
	fLocal_1156[9] = 0.9056f;
	fLocal_1227[9] = 0.4231f;
	iLocal_2686[9] = joaat("serrano");
	Local_2134[10 /*3*/] = { -1005.538f, -715.5715f, 20.3848f };
	fLocal_1014[10] = -0.044f;
	fLocal_1085[10] = -0.1329f;
	fLocal_1156[10] = -0.3895f;
	fLocal_1227[10] = 0.9103f;
	iLocal_2686[10] = joaat("bati");
	Local_2134[11 /*3*/] = { -980.4462f, -670.3936f, 22.8034f };
	fLocal_1014[11] = -0.0432f;
	fLocal_1085[11] = -0.0121f;
	fLocal_1156[11] = 0.8701f;
	fLocal_1227[11] = 0.4908f;
	iLocal_2686[11] = joaat("washington");
	Local_2134[12 /*3*/] = { -969.1606f, -664.5714f, 23.887f };
	fLocal_1014[12] = -0.046f;
	fLocal_1085[12] = -0.0213f;
	fLocal_1156[12] = 0.8534f;
	fLocal_1227[12] = 0.5187f;
	iLocal_2686[12] = joaat("rapidgt");
	Local_2134[13 /*3*/] = { -928.2644f, -652.7425f, 26.6901f };
	fLocal_1014[13] = -0.0303f;
	fLocal_1085[13] = -0.0054f;
	fLocal_1156[13] = 0.7573f;
	fLocal_1227[13] = 0.6524f;
	iLocal_2686[13] = joaat("rapidgt");
	Local_2134[14 /*3*/] = { -916.6693f, -650.6878f, 27.0863f };
	fLocal_1014[14] = -0.024f;
	fLocal_1085[14] = 0.0101f;
	fLocal_1156[14] = 0.7742f;
	fLocal_1227[14] = 0.6324f;
	iLocal_2686[14] = joaat("feltzer2");
	Local_2134[15 /*3*/] = { -790.8272f, -667.5106f, 28.4613f };
	fLocal_1014[15] = -0.0369f;
	fLocal_1085[15] = -0.005f;
	fLocal_1156[15] = 0.7209f;
	fLocal_1227[15] = -0.6921f;
	iLocal_2686[15] = joaat("rapidgt");
	Local_2134[16 /*3*/] = { -790.0645f, -647.0408f, 28.4882f };
	fLocal_1014[16] = -0.037f;
	fLocal_1085[16] = 0.0003f;
	fLocal_1156[16] = 0.7201f;
	fLocal_1227[16] = 0.6929f;
	iLocal_2686[16] = joaat("feltzer2");
	Local_2134[17 /*3*/] = { -716.8614f, -667.7233f, 29.6724f };
	fLocal_1014[17] = -0.0267f;
	fLocal_1085[17] = -0.0106f;
	fLocal_1156[17] = 0.7068f;
	fLocal_1227[17] = -0.7068f;
	iLocal_2686[17] = joaat("sultan");
	Local_2134[18 /*3*/] = { -653.5672f, -605.7774f, 32.8442f };
	fLocal_1014[18] = 0.0008f;
	fLocal_1085[18] = -0.0298f;
	fLocal_1156[18] = 0.9991f;
	fLocal_1227[18] = 0.031f;
	iLocal_2686[18] = joaat("radi");
	Local_2134[19 /*3*/] = { -598.4409f, -647.7642f, 31.2207f };
	fLocal_1014[19] = 0.0659f;
	fLocal_1085[19] = -0.1257f;
	fLocal_1156[19] = 0.6417f;
	fLocal_1227[19] = 0.7537f;
	iLocal_2686[19] = joaat("bati");
	Local_2134[20 /*3*/] = { -457.3376f, -774.9608f, 29.9679f };
	fLocal_1014[20] = -0.0002f;
	fLocal_1085[20] = 0f;
	fLocal_1156[20] = 0.7033f;
	fLocal_1227[20] = 0.7109f;
	iLocal_2686[20] = joaat("sultan");
	Local_2134[21 /*3*/] = { -506.0643f, -614.7634f, 29.6699f };
	fLocal_1014[21] = -0.0131f;
	fLocal_1085[21] = -0.1302f;
	fLocal_1156[21] = -0.0218f;
	fLocal_1227[21] = 0.9912f;
	iLocal_2686[21] = joaat("bati");
	Local_2134[22 /*3*/] = { -487.6026f, -614.804f, 30.58f };
	fLocal_1014[22] = 0.0002f;
	fLocal_1085[22] = 0f;
	fLocal_1156[22] = 0.9999f;
	fLocal_1227[22] = 0.0166f;
	iLocal_2686[22] = joaat("sultan");
	Local_2134[23 /*3*/] = { -856.7647f, -679.063f, 27.2491f };
	fLocal_1014[23] = -0.008f;
	fLocal_1085[23] = 0.0277f;
	fLocal_1156[23] = 0.0148f;
	fLocal_1227[23] = 0.9995f;
	iLocal_2686[23] = joaat("sultan");
	Local_2134[24 /*3*/] = { -750.8827f, -607.8928f, 29.5466f };
	fLocal_1014[24] = 0.0609f;
	fLocal_1085[24] = 0.0021f;
	fLocal_1156[24] = 0.9978f;
	fLocal_1227[24] = -0.0261f;
	iLocal_2686[24] = joaat("sultan");
	Local_2134[25 /*3*/] = { -477.1844f, -757.5135f, 30.1527f };
	fLocal_1014[25] = -0.0022f;
	fLocal_1085[25] = -0.0021f;
	fLocal_1156[25] = 0.7233f;
	fLocal_1227[25] = 0.6905f;
	iLocal_2686[25] = joaat("rapidgt");
	Local_2134[26 /*3*/] = { -471.01f, -624.55f, 30.58f };
	fLocal_1014[26] = 0.0001f;
	fLocal_1085[26] = -0.0002f;
	fLocal_1156[26] = -0.0144f;
	fLocal_1227[26] = 0.9999f;
	iLocal_2686[26] = joaat("sultan");
	Local_2134[27 /*3*/] = { -679.3469f, -593.3812f, 24.7059f };
	fLocal_1014[27] = -0.0011f;
	fLocal_1085[27] = 0.0004f;
	fLocal_1156[27] = 0.6772f;
	fLocal_1227[27] = 0.7358f;
	iLocal_2686[27] = joaat("sultan");
	Local_2134[28 /*3*/] = { 433.6576f, -608.7065f, 27.7732f };
	fLocal_1014[28] = -0.0003f;
	fLocal_1085[28] = 0.0005f;
	fLocal_1156[28] = 0.7774f;
	fLocal_1227[28] = -0.629f;
	iLocal_2686[28] = joaat("sultan");
	Local_2134[29 /*3*/] = { 416.3534f, -638.7431f, 27.8704f };
	fLocal_1014[29] = 0.0891f;
	fLocal_1085[29] = -0.0957f;
	fLocal_1156[29] = 0.7111f;
	fLocal_1227[29] = 0.6908f;
	iLocal_2686[29] = joaat("bati");
	Local_2134[30 /*3*/] = { 433.9501f, -603.2841f, 27.8743f };
	fLocal_1014[30] = 0.0794f;
	fLocal_1085[30] = -0.1039f;
	fLocal_1156[30] = 0.6505f;
	fLocal_1227[30] = 0.7482f;
	iLocal_2686[30] = joaat("bati");
	Local_2134[31 /*3*/] = { 291.0103f, -589.8865f, 42.9593f };
	fLocal_1014[31] = 0.0053f;
	fLocal_1085[31] = -0.0026f;
	fLocal_1156[31] = 0.9489f;
	fLocal_1227[31] = 0.3156f;
	iLocal_2686[31] = joaat("ambulance");
	Local_2345[0 /*3*/] = { -1104.283f, -775.1389f, 18.8468f };
	fLocal_588[0] = -0.0068f;
	fLocal_659[0] = -0.0121f;
	fLocal_730[0] = 0.9186f;
	fLocal_801[0] = 0.3949f;
	iLocal_1577[0] = 52;
	fLocal_872[0] = 16000f;
	fLocal_943[0] = 1f;
	iLocal_2757[0] = joaat("feltzer2");
	Local_2345[1 /*3*/] = { -1129.485f, -805.7412f, 15.9592f };
	fLocal_588[1] = 0.0303f;
	fLocal_659[1] = -0.0208f;
	fLocal_730[1] = -0.3298f;
	fLocal_801[1] = 0.9433f;
	iLocal_1577[1] = 5;
	fLocal_872[1] = 16488f;
	fLocal_943[1] = 1f;
	iLocal_2757[1] = joaat("washington");
	Local_2345[2 /*3*/] = { -998.2445f, -692.8199f, 21.5328f };
	fLocal_588[2] = -0.0136f;
	fLocal_659[2] = -0.0158f;
	fLocal_730[2] = 0.8929f;
	fLocal_801[2] = 0.4498f;
	iLocal_1577[2] = 53;
	fLocal_872[2] = 21412f;
	fLocal_943[2] = 1f;
	iLocal_2757[2] = joaat("feltzer2");
	Local_2345[3 /*3*/] = { -883.8546f, -655.3506f, 27.5493f };
	fLocal_588[3] = 0.0032f;
	fLocal_659[3] = -0.0018f;
	fLocal_730[3] = 0.712f;
	fLocal_801[3] = 0.7021f;
	iLocal_1577[3] = 54;
	fLocal_872[3] = 25000f;
	fLocal_943[3] = 1f;
	iLocal_2757[3] = joaat("feltzer2");
	Local_2345[4 /*3*/] = { -850.7409f, -661.5627f, 27.3668f };
	fLocal_588[4] = -0.0015f;
	fLocal_659[4] = 0.0017f;
	fLocal_730[4] = -0.6912f;
	fLocal_801[4] = 0.7227f;
	iLocal_1577[4] = 55;
	fLocal_872[4] = 28500f;
	fLocal_943[4] = 1f;
	iLocal_2757[4] = joaat("serrano");
	Local_2345[5 /*3*/] = { -721.2928f, -652.8879f, 29.816f };
	fLocal_588[5] = -0.0024f;
	fLocal_659[5] = -0.0102f;
	fLocal_730[5] = 0.6908f;
	fLocal_801[5] = 0.723f;
	iLocal_1577[5] = 56;
	fLocal_872[5] = 32500f;
	fLocal_943[5] = 1f;
	iLocal_2757[5] = joaat("serrano");
	Local_2345[6 /*3*/] = { -724.7061f, -648.64f, 29.7668f };
	fLocal_588[6] = -0.0212f;
	fLocal_659[6] = 0.005f;
	fLocal_730[6] = 0.7061f;
	fLocal_801[6] = 0.7078f;
	iLocal_1577[6] = 57;
	fLocal_872[6] = 32750f;
	fLocal_943[6] = 1f;
	iLocal_2757[6] = joaat("washington");
	Local_2345[7 /*3*/] = { -688.4173f, -579.6989f, 24.8499f };
	fLocal_588[7] = 0.0026f;
	fLocal_659[7] = -0.0029f;
	fLocal_730[7] = 0.7397f;
	fLocal_801[7] = -0.673f;
	iLocal_1577[7] = 58;
	fLocal_872[7] = 40273f;
	fLocal_943[7] = 1f;
	iLocal_2757[7] = joaat("washington");
	Local_2345[8 /*3*/] = { -563.1786f, -579.4122f, 25.3124f };
	fLocal_588[8] = 0.002f;
	fLocal_659[8] = 0.0021f;
	fLocal_730[8] = 0.7032f;
	fLocal_801[8] = 0.711f;
	iLocal_1577[8] = 59;
	fLocal_872[8] = 43500f;
	fLocal_943[8] = 1f;
	iLocal_2757[8] = joaat("trash");
	Local_2345[9 /*3*/] = { -556.1506f, -631.2017f, 30.562f };
	fLocal_588[9] = -0.0352f;
	fLocal_659[9] = 0.0378f;
	fLocal_730[9] = -0.6805f;
	fLocal_801[9] = 0.7309f;
	iLocal_1577[9] = 60;
	fLocal_872[9] = 51889f;
	fLocal_943[9] = 1f;
	iLocal_2757[9] = joaat("bmx");
	Local_2345[10 /*3*/] = { -445.0543f, -655.1606f, 31.3466f };
	fLocal_588[10] = 0.0076f;
	fLocal_659[10] = 0.0093f;
	fLocal_730[10] = 0.7136f;
	fLocal_801[10] = 0.7005f;
	iLocal_1577[10] = 61;
	fLocal_872[10] = 56772f;
	fLocal_943[10] = 1f;
	iLocal_2757[10] = joaat("sultan");
	Local_2345[11 /*3*/] = { -519.4122f, -666.3391f, 32.7365f };
	fLocal_588[11] = 0.0105f;
	fLocal_659[11] = 0.0179f;
	fLocal_730[11] = -0.6817f;
	fLocal_801[11] = 0.7313f;
	iLocal_1577[11] = 62;
	fLocal_872[11] = 57772f;
	fLocal_943[11] = 1f;
	iLocal_2757[11] = joaat("washington");
	Local_2345[12 /*3*/] = { -491.8959f, -716.5375f, 32.5585f };
	fLocal_588[12] = 0.1433f;
	fLocal_659[12] = 0.0787f;
	fLocal_730[12] = 0.9609f;
	fLocal_801[12] = -0.2234f;
	iLocal_1577[12] = 63;
	fLocal_872[12] = 60800f;
	fLocal_943[12] = 1.2f;
	iLocal_2757[12] = joaat("bmx");
	Local_2345[13 /*3*/] = { -492.3147f, -827.8944f, 29.9952f };
	fLocal_588[13] = -0.005f;
	fLocal_659[13] = 0.0046f;
	fLocal_730[13] = 0.0169f;
	fLocal_801[13] = 0.9998f;
	iLocal_1577[13] = 64;
	fLocal_872[13] = 64030f;
	fLocal_943[13] = 1f;
	iLocal_2757[13] = joaat("washington");
	Local_2345[14 /*3*/] = { -518.8372f, -756.7956f, 31.5421f };
	fLocal_588[14] = -0.0147f;
	fLocal_659[14] = -0.0264f;
	fLocal_730[14] = 0.9686f;
	fLocal_801[14] = -0.2467f;
	iLocal_1577[14] = 65;
	fLocal_872[14] = 64230f;
	fLocal_943[14] = 1f;
	iLocal_2757[14] = joaat("washington");
	Local_2345[15 /*3*/] = { -477.6166f, -806.7344f, 30.0523f };
	fLocal_588[15] = 0f;
	fLocal_659[15] = 0.0025f;
	fLocal_730[15] = -0.701f;
	fLocal_801[15] = 0.7132f;
	iLocal_1577[15] = 66;
	fLocal_872[15] = 66084f;
	fLocal_943[15] = 1f;
	iLocal_2757[15] = joaat("washington");
	Local_2345[16 /*3*/] = { -417.4774f, -836.1498f, 31.442f };
	fLocal_588[16] = -0.0077f;
	fLocal_659[16] = -0.0047f;
	fLocal_730[16] = 0.7025f;
	fLocal_801[16] = 0.7117f;
	iLocal_1577[16] = 67;
	fLocal_872[16] = 65384f;
	fLocal_943[16] = 1f;
	iLocal_2757[16] = joaat("benson");
	Local_2345[17 /*3*/] = { -413.1984f, -831.7321f, 30.8216f };
	fLocal_588[17] = -0.0237f;
	fLocal_659[17] = 0.0144f;
	fLocal_730[17] = 0.7088f;
	fLocal_801[17] = 0.7049f;
	iLocal_1577[17] = 68;
	fLocal_872[17] = 67078f;
	fLocal_943[17] = 1f;
	iLocal_2757[17] = joaat("sultan");
	Local_2345[18 /*3*/] = { -528.5989f, -840.7145f, 29.413f };
	fLocal_588[18] = -0.0237f;
	fLocal_659[18] = 0.0236f;
	fLocal_730[18] = 0.7098f;
	fLocal_801[18] = -0.7036f;
	iLocal_1577[18] = 69;
	fLocal_872[18] = 64606.32f;
	fLocal_943[18] = 1f;
	iLocal_2757[18] = joaat("sultan");
	Local_2345[19 /*3*/] = { -446.0574f, -767.6522f, 29.9676f };
	fLocal_588[19] = -0.0002f;
	fLocal_659[19] = 0.0001f;
	fLocal_730[19] = 0.711f;
	fLocal_801[19] = 0.7032f;
	iLocal_1577[19] = 51;
	fLocal_872[19] = 70071.85f;
	fLocal_943[19] = 1f;
	iLocal_2757[19] = joaat("sultan");
	Local_2345[20 /*3*/] = { -488.5203f, -523.8471f, 24.8363f };
	fLocal_588[20] = -0.001f;
	fLocal_659[20] = 0.0015f;
	fLocal_730[20] = 0.7208f;
	fLocal_801[20] = -0.6931f;
	iLocal_1577[20] = 71;
	fLocal_872[20] = 81355.85f;
	fLocal_943[20] = 1f;
	iLocal_2757[20] = joaat("landstalker");
	Local_2345[21 /*3*/] = { -305.7855f, -508.727f, 24.7583f };
	fLocal_588[21] = 0.0168f;
	fLocal_659[21] = -0.0137f;
	fLocal_730[21] = 0.7019f;
	fLocal_801[21] = 0.7119f;
	iLocal_1577[21] = 72;
	fLocal_872[21] = 86290.85f;
	fLocal_943[21] = 1f;
	iLocal_2757[21] = joaat("landstalker");
	Local_2345[22 /*3*/] = { 294.6554f, -576.5358f, 42.9547f };
	fLocal_588[22] = 0.0001f;
	fLocal_659[22] = 0.0078f;
	fLocal_730[22] = 0.2262f;
	fLocal_801[22] = 0.974f;
	iLocal_1577[22] = 73;
	fLocal_872[22] = 109000f;
	fLocal_943[22] = 1f;
	iLocal_2757[22] = joaat("ambulance");
	Local_2345[23 /*3*/] = { -393.8603f, -503.4236f, 25.4432f };
	fLocal_588[23] = 0.0016f;
	fLocal_659[23] = 0.0018f;
	fLocal_730[23] = 0.7075f;
	fLocal_801[23] = 0.7067f;
	iLocal_1577[23] = 74;
	fLocal_872[23] = 82431.85f;
	fLocal_943[23] = 1f;
	iLocal_2757[23] = joaat("packer");
	Local_2345[24 /*3*/] = { -527.6368f, -846.5891f, 29.9361f };
	fLocal_588[24] = 0.0422f;
	fLocal_659[24] = -0.0031f;
	fLocal_730[24] = -0.7009f;
	fLocal_801[24] = 0.712f;
	iLocal_1577[24] = 75;
	fLocal_872[24] = 62500f;
	fLocal_943[24] = 1f;
	iLocal_2757[24] = joaat("bus");
	Local_2345[25 /*3*/] = { 3.4457f, -533.8352f, 33.2443f };
	fLocal_588[25] = 0.0232f;
	fLocal_659[25] = 0.0045f;
	fLocal_730[25] = -0.6929f;
	fLocal_801[25] = 0.7206f;
	iLocal_1577[25] = 80;
	fLocal_872[25] = 100001.4f;
	fLocal_943[25] = 1f;
	iLocal_2757[25] = joaat("asterope");
	Local_2345[26 /*3*/] = { -483.5551f, -531.6314f, 24.8571f };
	fLocal_588[26] = 0.0034f;
	fLocal_659[26] = -0.0031f;
	fLocal_730[26] = -0.6972f;
	fLocal_801[26] = 0.7168f;
	iLocal_1577[26] = 76;
	fLocal_872[26] = 81217.44f;
	fLocal_943[26] = 1f;
	iLocal_2757[26] = joaat("asterope");
	Local_2345[27 /*3*/] = { -277.6243f, -508.3559f, 24.9767f };
	fLocal_588[27] = 0.0108f;
	fLocal_659[27] = -0.0139f;
	fLocal_730[27] = 0.7117f;
	fLocal_801[27] = 0.7023f;
	iLocal_1577[27] = 77;
	fLocal_872[27] = 87256.44f;
	fLocal_943[27] = 1f;
	iLocal_2757[27] = joaat("asterope");
	Local_2345[28 /*3*/] = { -201.7354f, -496.1847f, 27.3531f };
	fLocal_588[28] = -0.0125f;
	fLocal_659[28] = -0.0117f;
	fLocal_730[28] = 0.7296f;
	fLocal_801[28] = 0.6837f;
	iLocal_1577[28] = 82;
	fLocal_872[28] = 90798.32f;
	fLocal_943[28] = 1f;
	iLocal_2757[28] = joaat("packer");
	Local_2345[29 /*3*/] = { -118.4835f, -529.6654f, 29.6739f };
	fLocal_588[29] = 0.0116f;
	fLocal_659[29] = -0.0127f;
	fLocal_730[29] = -0.686f;
	fLocal_801[29] = 0.7274f;
	iLocal_1577[29] = 44;
	fLocal_872[29] = 94954.86f;
	fLocal_943[29] = 1f;
	iLocal_2757[29] = joaat("landstalker");
	iVar0 = 0;
	iVar1 = iLocal_3004;
	iVar2 = iLocal_2831;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (fLocal_872[iVar0] >= 41011f)
		{
			fLocal_872[iVar0] = (fLocal_872[iVar0] - 43.5f);
		}
		if (fLocal_872[iVar0] >= 77018.5f)
		{
			fLocal_872[iVar0] = (fLocal_872[iVar0] - 78.5f);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (fLocal_498[iVar0] >= 41011f)
		{
			fLocal_498[iVar0] = (fLocal_498[iVar0] - 43.5f);
		}
		if (fLocal_498[iVar0] >= 77018.5f)
		{
			fLocal_498[iVar0] = (fLocal_498[iVar0] - 78.5f);
		}
		iVar0++;
	}
}

void func_437(char* sParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	
	StringCopy(&cLocal_2583, sParam0, 64);
	bLocal_130 = true;
	iLocal_135 = 0;
	iLocal_1861 = 0;
	iLocal_1862 = 0;
	iLocal_1863 = 0;
	iLocal_1864 = iParam1;
	iLocal_1865 = 0;
	iLocal_1866 = 0;
	iLocal_1867 = 0;
	iLocal_1871 = 0;
	iLocal_1874 = 0;
	iLocal_1872 = -1;
	iLocal_1873 = -1;
	iLocal_1875 = 0;
	iLocal_1876 = 0;
	fLocal_1314 = 0f;
	fLocal_1315 = 0f;
	fLocal_1300 = 0f;
	iLocal_136 = 0;
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		Var0 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
		Local_2559.f_0 = (Var0.f_0 - 100f);
		Local_2559.f_1 = (Var0.f_1 - 100f);
		Local_2559.f_2 = (Var0.f_2 - 100f);
		Local_2562.f_0 = (Var0.f_0 + 100f);
		Local_2562.f_1 = (Var0.f_1 + 100f);
		Local_2562.f_2 = (Var0.f_2 + 100f);
		unk_0xE6FC8C18754D8C2D(Local_2559, Local_2562, 0, 0);
		if (bParam2)
		{
			unk_0x0668B21A0C3A4821(Var0, 500f, 0, 0, 0, 0, 0);
		}
	}
	unk_0x1EF7A8224AE81790("rgh_traffic", &iLocal_2599);
	func_416();
	if (bParam3)
	{
		func_67(1);
	}
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		unk_0x86127BA83F24D556(unk_0xBE369BE1BC57A796(), 0);
		unk_0x59D2C41577DCED43(0);
	}
	func_77();
}

void func_438()
{
	int iVar0;
	
	func_52(&(Local_3108.f_35[0]));
	if (!unk_0x23E9113C762466ED(Local_3490.f_0))
	{
		unk_0x1B60289D0F2A2E3C(Local_3490.f_3, 2f, 1, 0, 0, 0);
		func_439(&Local_3490, Local_3490.f_3, Local_3490.f_6, 0, 1);
		func_425();
	}
	unk_0x924CDE68BA2ED3BA(Local_3490.f_1);
	func_52(&(Local_3108.f_35[1]));
	if (!unk_0x23E9113C762466ED(Local_3497.f_0))
	{
		unk_0x1B60289D0F2A2E3C(Local_3497.f_3, 2f, 1, 0, 0, 0);
		Local_3497.f_0 = unk_0x692A2891A2BA7352(Local_3497.f_1, Local_3497.f_3, Local_3497.f_6, 1, 1);
		if (func_13(Local_3497.f_0))
		{
			unk_0x5DC8C2F2F8A363C2(Local_3497.f_0, Local_3497.f_3, 1, 0, 0, 1);
			unk_0xFE2306F4BAC122B2(Local_3497.f_0, -0.0248f, 0.0004f, 0.8949f, 0.4456f);
		}
		func_421();
	}
	unk_0x924CDE68BA2ED3BA(Local_3497.f_1);
	if (func_13(Local_3490.f_0))
	{
		if (!unk_0x23E9113C762466ED(Local_3469.f_0))
		{
			Local_3469.f_0 = unk_0x3FBC0964EB7878AF(Local_3490.f_0, 26, Local_3469.f_1, 2, 1, 1);
			func_426();
		}
		func_56(&(Local_3108.f_28[0]));
		if (!unk_0x23E9113C762466ED(Local_3476.f_0))
		{
			Local_3476.f_0 = unk_0x3FBC0964EB7878AF(Local_3490.f_0, 26, Local_3476.f_1, 0, 1, 1);
			func_427();
		}
	}
	unk_0x924CDE68BA2ED3BA(Local_3469.f_1);
	unk_0x924CDE68BA2ED3BA(Local_3476.f_1);
	if (func_13(Local_3497.f_0))
	{
		if (!unk_0x23E9113C762466ED(Local_3483.f_0))
		{
			Local_3483.f_0 = unk_0x3FBC0964EB7878AF(Local_3497.f_0, 26, Local_3483.f_1, -1, 1, 1);
			func_423();
		}
	}
	unk_0x924CDE68BA2ED3BA(Local_3483.f_1);
	if (func_20(unk_0x17B5CC8A8615737D()))
	{
		func_424(&uLocal_3304, 2, unk_0x17B5CC8A8615737D(), "TREVOR", 0, 1);
		unk_0x8E601051A3FDE8ED(unk_0x17B5CC8A8615737D(), 1);
	}
	if (!unk_0x23E9113C762466ED(Local_3534[0 /*2*/]))
	{
		unk_0x1B60289D0F2A2E3C(-1329.742f, -665.3537f, 26.3413f, 2f, 1, 0, 0, 0);
		Local_3534[0 /*2*/] = unk_0x692A2891A2BA7352(Local_3534[0 /*2*/].f_1, -1329.742f, -665.3537f, 26.3413f, 126.9722f, 1, 1);
	}
	if (func_13(Local_3534[0 /*2*/]))
	{
		unk_0xFE2306F4BAC122B2(Local_3534[0 /*2*/], -0.0318f, 0.0067f, 0.8936f, 0.4476f);
		if (!unk_0x8358BFE2634F295E(Local_3534[0 /*2*/], 2))
		{
			unk_0xDE043EE8B3F02B86(Local_3534[0 /*2*/], 2, 0, 0);
		}
		if (!unk_0x8358BFE2634F295E(Local_3534[0 /*2*/], 3))
		{
			unk_0xDE043EE8B3F02B86(Local_3534[0 /*2*/], 3, 0, 0);
		}
		unk_0x374812EC633DEA58(Local_3534[0 /*2*/], 1, 1);
		unk_0x374812EC633DEA58(Local_3534[0 /*2*/], 0, 1);
	}
	if (!unk_0x23E9113C762466ED(Local_3534[1 /*2*/]))
	{
		unk_0x1B60289D0F2A2E3C(-1329.751f, -676.4864f, 25.8557f, 2f, 1, 0, 0, 0);
		Local_3534[1 /*2*/] = unk_0x692A2891A2BA7352(Local_3534[1 /*2*/].f_1, -1329.751f, -676.4864f, 25.8557f, 307.7227f, 1, 1);
	}
	if (func_13(Local_3534[1 /*2*/]))
	{
		unk_0xFE2306F4BAC122B2(Local_3534[1 /*2*/], 0.0248f, 0.0142f, -0.4405f, 0.8973f);
	}
	if (!unk_0x23E9113C762466ED(Local_3534[2 /*2*/]))
	{
		unk_0x1B60289D0F2A2E3C(-1336.317f, -680.9752f, 25.5144f, 2f, 1, 0, 0, 0);
		Local_3534[2 /*2*/] = unk_0x692A2891A2BA7352(Local_3534[2 /*2*/].f_1, -1336.317f, -680.9752f, 25.5144f, 307.7227f, 1, 1);
	}
	if (func_13(Local_3534[2 /*2*/]))
	{
		unk_0xFE2306F4BAC122B2(Local_3534[2 /*2*/], 0.0269f, 0.0079f, -0.4791f, 0.8773f);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_13(Local_3534[iVar0 /*2*/]))
		{
			unk_0x924CDE68BA2ED3BA(Local_3534[iVar0 /*2*/].f_1);
		}
		iVar0++;
	}
	func_419(fLocal_3268, Local_3556);
	if (bLocal_3169)
	{
		if (bLocal_3231)
		{
			if (!unk_0x30F06AB0772AFB80() && !unk_0x5C0856D86B18EE57())
			{
				func_21(800, 0);
			}
		}
	}
}

int func_439(var uParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6)
{
	unk_0xE1324F59713746FA(iLocal_95);
	if (iParam6 == 1)
	{
		while (!unk_0x9F746898F7881612(iLocal_95))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	else if (!unk_0x9F746898F7881612(iLocal_95))
	{
		return 0;
	}
	func_440(uParam0, iLocal_95, Param1, fParam4);
	if (func_10(*uParam0))
	{
		unk_0x357EE036FE09513D(*uParam0, 65, 0);
		unk_0x114D595E662E3EFD(*uParam0, 5, 0);
		unk_0xBFA6D869BA395202(*uParam0, "28BNT310");
		unk_0xE0B7A718D08DF2B6(*uParam0, 0);
		if (iParam5 == 1)
		{
			unk_0xD602D152E57C823D(*uParam0, 10);
		}
	}
	unk_0x924CDE68BA2ED3BA(iLocal_95);
	return 1;
}

void func_440(var uParam0, int iParam1, struct<3> Param2, float fParam5)
{
	func_52(uParam0);
	*uParam0 = unk_0x692A2891A2BA7352(iParam1, Param2, fParam5, 1, 1);
	if (unk_0x23E9113C762466ED(*uParam0))
	{
		unk_0x482AE8C0EAF5AE07(*uParam0, 1084227584);
		unk_0x4B04B4FAE554FA03(*uParam0, 1000);
	}
}

void func_441(bool bParam0)
{
	unk_0xA73AE78D2491E6E1("NIGEL2", 0);
	unk_0xF5B59A4EB5622187(iLocal_3258, sLocal_3296);
	unk_0xE1324F59713746FA(Local_3497.f_1);
	unk_0xE1324F59713746FA(Local_3490.f_1);
	unk_0xE1324F59713746FA(Local_3483.f_1);
	unk_0xE1324F59713746FA(Local_3469.f_1);
	unk_0xE1324F59713746FA(Local_3476.f_1);
	unk_0xE1324F59713746FA(Local_3534[0 /*2*/].f_1);
	unk_0xE1324F59713746FA(Local_3534[1 /*2*/].f_1);
	unk_0xE1324F59713746FA(Local_3534[2 /*2*/].f_1);
	unk_0xF5B59A4EB5622187(2, sLocal_3296);
	if (bParam0)
	{
		while ((((((((((!unk_0x657558590DD37F85(0) || !unk_0x63781672EC63FB83(iLocal_3258, sLocal_3296)) || !unk_0x9F746898F7881612(Local_3497.f_1)) || !unk_0x9F746898F7881612(Local_3490.f_1)) || !unk_0x9F746898F7881612(Local_3483.f_1)) || !unk_0x9F746898F7881612(Local_3469.f_1)) || !unk_0x9F746898F7881612(Local_3476.f_1)) || !unk_0x9F746898F7881612(Local_3534[0 /*2*/].f_1)) || !unk_0x9F746898F7881612(Local_3534[1 /*2*/].f_1)) || !unk_0x9F746898F7881612(Local_3534[2 /*2*/].f_1)) || !unk_0x63781672EC63FB83(2, sLocal_3296))
		{
			if (bLocal_3169)
			{
				if (!unk_0x25BD4C26D84038CD())
				{
					func_442(0, 1);
					bLocal_3231 = true;
				}
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
}

void func_442(int iParam0, bool bParam1)
{
	if (unk_0x30F06AB0772AFB80())
	{
		if (!unk_0x46EEE08565CE19CA())
		{
			unk_0x50FD1894558DE186(iParam0);
			if (bParam1)
			{
				while (!unk_0x25BD4C26D84038CD())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
			}
		}
	}
}

void func_443()
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { -1290f, -646.1f, 26.05f };
	fVar3 = 307.66f;
	func_493(-1311.409f, -648.4133f, 24.92526f, -1289.028f, -632.043f, 29.5522f, 17.5f, Var0, fVar3, func_500(), 1, 0, 1, 0, 0);
	func_493(-1319.69f, -655.7773f, 29.45839f, -1184.461f, -834.8201f, 12.34378f, 30f, Var0, fVar3, func_500(), 1, 0, 1, 0, 0);
	if (func_491(0f, 0f, 0f, 1))
	{
		func_444(Var0, fVar3, 0, 145);
	}
	unk_0xB82FD68B5DE68F01(-1409.344f, -756.381f, 17.59896f, -1239.148f, -587.1219f, 31.25266f, 0, 1);
	unk_0x862504E4C5E80C78(-1409.344f, -756.381f, 17.59896f, -1239.148f, -587.1219f, 31.25266f, 0);
	unk_0x286691C5D34EF4EC(-1415.904f, -732.5489f, 17.54549f, -1236.628f, -601.0265f, 31.15345f, 23f, 0, 0, 1);
	unk_0x2A5905FD3A0ED2A0(-1415.904f, -732.5489f, 17.54549f, -1236.628f, -601.0265f, 31.15345f, 23f, 0, 0, 0, 1, 1);
	unk_0x176EBAF3DFCF7E54(-1318.5f, -678.8826f, 23f, -1296.628f, -631.5449f, 29f, 0, 0);
	unk_0xB57996B091C5D677(-1318.5f, -678.8826f, 23f, -1296.628f, -631.5449f, 29f);
	uLocal_3288 = unk_0xD1D19967E553E144(-1318.5f, -678.8826f, 23f, -1296.628f, -631.5449f, 29f, 0, 1, 1, 1);
	unk_0x3FE1DC991D646A3B(-1297.8f, -637.42f, 25.55f, 16f, 0);
	uLocal_3290[0] = unk_0xD1D19967E553E144(-1315.68f, -682.7614f, 23.24123f, -1295.266f, -670.376f, 27.9768f, 0, 1, 1, 1);
	unk_0x1B60289D0F2A2E3C(-1305.332f, -676.3739f, 25.79325f, 10f, 1, 0, 0, 0);
	uLocal_3290[1] = unk_0xD1D19967E553E144(-1286.906f, -697.5593f, 21.7392f, -1279.698f, -691.5876f, 26.33636f, 0, 1, 1, 1);
	unk_0x1B60289D0F2A2E3C(-1287.702f, -698.1957f, 27.50166f, 10f, 1, 0, 0, 0);
	uLocal_3290[2] = unk_0xD1D19967E553E144(-1270.72f, -723.8903f, 19.46898f, -1262.898f, -718.2786f, 24.43682f, 0, 1, 1, 1);
	unk_0x1B60289D0F2A2E3C(-1269.86f, -722.4664f, 21.54627f, 8f, 1, 0, 0, 0);
	uLocal_3290[3] = unk_0xD1D19967E553E144(-1268.057f, -731.5182f, 18.92047f, -1263.574f, -727.5502f, 24.05783f, 0, 1, 1, 1);
	unk_0x1B60289D0F2A2E3C(-1266.431f, -728.9227f, 21.08542f, 2.5f, 1, 0, 0, 0);
	uLocal_3290[3] = unk_0xD1D19967E553E144(-1237.024f, -777.4222f, 15.58289f, -1221.889f, -764.5969f, 20.58871f, 0, 1, 1, 1);
	unk_0x1B60289D0F2A2E3C(-1231.441f, -770.9479f, 17.70891f, 8.5f, 1, 0, 0, 0);
	uLocal_3290[4] = unk_0xD1D19967E553E144(-1222.448f, -786.7349f, 13.60073f, -1215.773f, -780.2021f, 20.43715f, 0, 1, 1, 1);
	unk_0x1B60289D0F2A2E3C(-1222.008f, -783.6834f, 16.73119f, 7.5f, 1, 0, 0, 0);
	unk_0x0668B21A0C3A4821(-1459.2f, -736.9f, 23.6f, 50f, 0, 0, 0, 1, 0);
	unk_0x0668B21A0C3A4821(-1332.2f, -537.6f, 31.5f, 30f, 0, 0, 0, 1, 0);
}

void func_444(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	var uVar3;
	
	if (unk_0x23E9113C762466ED(Global_93635.f_4))
	{
		if (unk_0x45CD66F0A131E554(Global_93635.f_4, 0))
		{
			if (func_490(24) != Global_93635.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_487(unk_0x57240623C1BC6E88(Global_93635.f_4, 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_445(Global_93635.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_445(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0x23E9113C762466ED(iParam0) && unk_0x45CD66F0A131E554(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0x23E9113C762466ED(Global_68531.f_484[25]) && unk_0x45CD66F0A131E554(Global_68531.f_484[25], 0))
			{
				if (Global_68531.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0x3C6792805E3BEB1B(iParam0) || unk_0x0324EEB10F81965F(iParam0) == joaat("bus")) || unk_0x0324EEB10F81965F(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_486(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_483(iParam0, &Var0);
		if (func_60(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0x57240623C1BC6E88(iParam0, 1) };
			fParam4 = unk_0x638527C9799F2AE4(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x765F5B806B517045(unk_0x6AF6B39BFDB53CB5()) != joaat("vehicle_gen_controller"))
			{
				Global_69519 = unk_0x765F5B806B517045(unk_0x6AF6B39BFDB53CB5());
			}
		}
		func_479(iParam5, &Var0, Param1, fParam4, func_482(iParam0));
		func_446(iParam5, iParam0, 0);
	}
}

void func_446(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_476(&(Global_68531.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0x48B8265059381CD0(Global_68531.f_555[0 /*21*/].f_9, 12) && !unk_0x48B8265059381CD0(Global_68531.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_68531.f_555[0 /*21*/].f_4 != unk_0x0324EEB10F81965F(iParam1))
		{
			return;
		}
	}
	if (Global_69438 != -1 && Global_69438 != iParam0)
	{
		return;
	}
	if (unk_0x23E9113C762466ED(iParam1))
	{
		if (unk_0x45CD66F0A131E554(iParam1, 0))
		{
			if (!unk_0xC26429B504BA534D(iParam1))
			{
				unk_0xF0F77C99098F999B(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_101700.f_31389.f_4801 = func_465();
			}
			if (iParam1 != Global_68531.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_490(iParam0);
					if ((unk_0x23E9113C762466ED(iVar0) && unk_0x45CD66F0A131E554(iVar0, 0)) && iParam1 != iVar0)
					{
						func_447(iVar0, 145);
					}
				}
				Global_69437 = iParam1;
				Global_69438 = iParam0;
				Global_69439 = iParam2;
			}
		}
	}
}

void func_447(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_448(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x17206B315923243C(iParam0, -1, 0);
		if (!unk_0x23E9113C762466ED(iVar0))
		{
			iVar0 = unk_0x67649920B2C3A244(iParam0, -1);
		}
		if (unk_0x23E9113C762466ED(iVar0) && !unk_0xCA41A00932714525(iVar0))
		{
			if (unk_0x0324EEB10F81965F(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x0324EEB10F81965F(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x0324EEB10F81965F(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_101700.f_2095.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x0324EEB10F81965F(iParam0) == Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0x9C88EB7B70229335(&(Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x6A7B0D91FD88D9EE(unk_0xE184AC3A4DAF353D(iParam0), &(Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_101700.f_31389.f_5592[iVar1] = iVar2;
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
		if (unk_0x0324EEB10F81965F(iParam0) == Global_101700.f_31389.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0x9C88EB7B70229335(&(Global_101700.f_31389.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x6A7B0D91FD88D9EE(unk_0xE184AC3A4DAF353D(iParam0), &(Global_101700.f_31389.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_101700.f_31389.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_101700.f_31389.f_5590 = iParam1;
	Global_69436 = iParam0;
	Global_101700.f_31389.f_5588 = 1;
	func_483(iParam0, &(Global_101700.f_31389.f_5510));
}

int func_448(int iParam0)
{
	if ((((((((((!unk_0x23E9113C762466ED(iParam0) || !unk_0x45CD66F0A131E554(iParam0, 0)) || func_463(iParam0, 0, 0)) || func_463(iParam0, 1, 0)) || func_463(iParam0, 2, 0)) || func_482(iParam0) != 145) || func_462(iParam0)) || func_461(iParam0)) || func_460(iParam0)) || func_459(iParam0)) || !func_449(unk_0x0324EEB10F81965F(iParam0)))
	{
		if (func_461(iParam0))
		{
		}
		if (func_461(iParam0))
		{
		}
		if (func_463(iParam0, 0, 0))
		{
		}
		if (func_463(iParam0, 1, 0))
		{
		}
		if (func_463(iParam0, 2, 0))
		{
		}
		if (func_482(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_449(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_450(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0xA55B002FED5A9858(iParam0) || unk_0x8432EA469FDB418D(iParam0)) || unk_0xC5082382D5482C0C(iParam0)) || unk_0x3B548F49528B5FA7(iParam0))
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

int func_450(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x2ED6701376DBCF71(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x63C468D583002D23()) || (iParam0 == joaat("buffalo3") && !unk_0x63C468D583002D23())) || (iParam0 == joaat("gauntlet2") && !unk_0x63C468D583002D23())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x63C468D583002D23())) || iParam0 == joaat("blista3"))
	{
		if (!func_458())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x9AEFEF0C873443F4())
		{
			if (unk_0xE8885AFFB348EA8C(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x5D46F50AE982AB28(Var1.f_0))
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
		if ((((!func_457() && !func_456()) && !func_455()) && !func_454()) && !func_458())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x8EA3D5407E9F4AF0() || unk_0xEF4E5E47AF0D4480()) || unk_0x7C2F31E78C33DE0F())
		{
		}
		else if (!func_455())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_453(iParam0))
		{
			return 0;
		}
	}
	if (!func_451(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_451(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_452())
	{
		return 1;
	}
	unk_0x5E5FAFB02AD6B99F(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x03E2F3A2203722EB(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_452()
{
	if (unk_0xEF4E5E47AF0D4480())
	{
		return 1;
	}
	return 0;
}

int func_453(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2482093)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x57E9911EC23E2C54();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5506 && !Global_262145.f_11530) && iVar1 < Global_262145.f_11531)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_12342 && iVar1 < Global_262145.f_12354)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_12338 && iVar1 < Global_262145.f_12350)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_12339 && iVar1 < Global_262145.f_12351)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_12340 && iVar1 < Global_262145.f_12352)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_12341 && iVar1 < Global_262145.f_12353)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_12343 && iVar1 < Global_262145.f_12355)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_12344 && iVar1 < Global_262145.f_12347)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_12345 && iVar1 < Global_262145.f_12348)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_12346 && iVar1 < Global_262145.f_12349)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_14969 && iVar1 < Global_262145.f_14934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_14964 && iVar1 < Global_262145.f_14929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_14968 && iVar1 < Global_262145.f_14933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_14967 && iVar1 < Global_262145.f_14932)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_14961 && iVar1 < Global_262145.f_14926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_14962 && iVar1 < Global_262145.f_14927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_14965 && iVar1 < Global_262145.f_14930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_14966 && iVar1 < Global_262145.f_14931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_14963 && iVar1 < Global_262145.f_14928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_14971 && iVar1 < Global_262145.f_14936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_14972 && iVar1 < Global_262145.f_14937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_14960 && iVar1 < Global_262145.f_14925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_14959 && iVar1 < Global_262145.f_14924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_14958 && iVar1 < Global_262145.f_14923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_14970 && iVar1 < Global_262145.f_14935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_14973 && iVar1 < Global_262145.f_14938)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_14974 && iVar1 < Global_262145.f_14939)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_14975 && iVar1 < Global_262145.f_14940)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_14976 && iVar1 < Global_262145.f_14941)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_15121 && iVar1 < Global_262145.f_15143)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_15122 && iVar1 < Global_262145.f_15144)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_15123 && iVar1 < Global_262145.f_15145)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_15124 && iVar1 < Global_262145.f_15146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_15125 && iVar1 < Global_262145.f_15147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_15126 && iVar1 < Global_262145.f_15148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_15128 && iVar1 < Global_262145.f_15149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_15129 && iVar1 < Global_262145.f_15150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_15130 && iVar1 < Global_262145.f_15151)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_15131 && iVar1 < Global_262145.f_15152)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_15132 && iVar1 < Global_262145.f_15153)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_15133 && iVar1 < Global_262145.f_15154)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_15134 && iVar1 < Global_262145.f_15155)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_15140 && iVar1 < Global_262145.f_15162)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_15137 && iVar1 < Global_262145.f_15158)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_15138 && iVar1 < Global_262145.f_15159)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_15139 && iVar1 < Global_262145.f_15160)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_15127 && iVar1 < Global_262145.f_15161)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_15141 && iVar1 < Global_262145.f_15163)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_15135 && iVar1 < Global_262145.f_15156)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_15136 && iVar1 < Global_262145.f_15157)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_15142 && iVar1 < Global_262145.f_15164)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_16770 && iVar1 < Global_262145.f_16811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_16771 && iVar1 < Global_262145.f_16812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_16772 && iVar1 < Global_262145.f_16813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_16773 && iVar1 < Global_262145.f_16814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_16774 && iVar1 < Global_262145.f_16815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_16775 && iVar1 < Global_262145.f_16816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_16776 && iVar1 < Global_262145.f_16817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_16777 && iVar1 < Global_262145.f_16818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_16778 && iVar1 < Global_262145.f_16819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_16779 && iVar1 < Global_262145.f_16820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_16780 && iVar1 < Global_262145.f_16821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_16781 && iVar1 < Global_262145.f_16822)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_16782 && iVar1 < Global_262145.f_16823)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_16783 && iVar1 < Global_262145.f_16824)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_16784 && iVar1 < Global_262145.f_16825)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_16785 && iVar1 < Global_262145.f_16826)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_16786 && iVar1 < Global_262145.f_16827)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_16787 && iVar1 < Global_262145.f_16828)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_16788 && iVar1 < Global_262145.f_16829)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_16789 && iVar1 < Global_262145.f_16830)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_16790 && iVar1 < Global_262145.f_16831)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_16791 && iVar1 < Global_262145.f_16832)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_16792 && iVar1 < Global_262145.f_16833)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_16793 && iVar1 < Global_262145.f_16834)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_16794 && iVar1 < Global_262145.f_16835)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_17797 && iVar1 < Global_262145.f_17793)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_17798 && iVar1 < Global_262145.f_17794)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_17799 && iVar1 < Global_262145.f_17795)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_17800 && iVar1 < Global_262145.f_17796)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_454()
{
	return 0;
}

int func_455()
{
	return 1;
}

int func_456()
{
	return 1;
}

int func_457()
{
	if (unk_0x6948821CC8D52AC2(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_458()
{
	var uVar0;
	
	if (unk_0x98ECB3AD32B89920())
	{
		if (unk_0xA50BC4F5AE68D0BA())
		{
			if (unk_0x017971300978783B())
			{
				unk_0x7FE4F330D3D74809(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xEB79FECD9022AAF0(&uVar0, 2);
				unk_0xEB79FECD9022AAF0(&uVar0, 4);
				unk_0xEB79FECD9022AAF0(&uVar0, 6);
				unk_0xEB79FECD9022AAF0(&Global_25, 2);
				unk_0xEB79FECD9022AAF0(&Global_25, 4);
				unk_0xEB79FECD9022AAF0(&Global_25, 6);
				unk_0x731753D8494ABECD(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x8B57B9443E19F940())
				{
					iVar0 = unk_0xBE675F7A607B46B0(866);
					unk_0xEB79FECD9022AAF0(&iVar0, 0);
					unk_0x0D1285E5ED89254D(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_139179 == 2)
	{
		return 1;
	}
	else if (Global_139179 == 3)
	{
		return 0;
	}
	if (unk_0x8B57B9443E19F940())
	{
		if (unk_0x48B8265059381CD0(unk_0xBE675F7A607B46B0(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_459(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x0324EEB10F81965F(iParam0);
	sVar1 = unk_0xE184AC3A4DAF353D(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x6A7B0D91FD88D9EE(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_450(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_460(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x23E9113C762466ED(Global_89185[iVar0]))
		{
			if (Global_89185[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_461(int iParam0)
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(iParam0) && unk_0x45CD66F0A131E554(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x23E9113C762466ED(Global_89155[iVar0]) && unk_0x45CD66F0A131E554(Global_89155[iVar0], 0))
			{
				if (Global_89155[iVar0] == iParam0 && unk_0x0324EEB10F81965F(Global_89155[iVar0]) == unk_0x0324EEB10F81965F(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_462(int iParam0)
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(Global_68531.f_484[24]))
	{
		if (iParam0 == Global_68531.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x23E9113C762466ED(Global_68531.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68531.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_463(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x23E9113C762466ED(iParam0) || !unk_0x45CD66F0A131E554(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_464(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x48B8265059381CD0(Global_101700.f_6188[iVar9], 0))
		{
			if (unk_0xA3342DAAC0684FAC(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_464(int iParam0, int iParam1, char* sParam2, var uParam3)
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

var func_465()
{
	var uVar0;
	
	func_475(&uVar0, unk_0x0956E4296D9CC40A());
	func_474(&uVar0, unk_0x32883EAC7DC86C40());
	func_473(&uVar0, unk_0x80BC37C67CB292E5());
	func_468(&uVar0, unk_0x202B089E6328ABFA());
	func_467(&uVar0, unk_0xCD8338A83E1BCC14());
	func_466(&uVar0, unk_0x1BBFD9409EC2598C());
	return uVar0;
}

void func_466(var uParam0, int iParam1)
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

void func_467(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_468(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_472(*uParam0);
	iVar1 = func_470(*uParam0);
	if (iParam1 < 1 || iParam1 > func_469(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_469(int iParam0, int iParam1)
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

var func_470(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_471(unk_0x48B8265059381CD0(iParam0, 31), -1, 1)) + 2011;
}

int func_471(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_472(var uParam0)
{
	return uParam0 & 15;
}

void func_473(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_474(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_475(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_476(var uParam0, int iParam1)
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
			uParam0->f_4 = func_477(0, 1);
			uParam0->f_12 = 0;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 20);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_477(0, 1);
			uParam0->f_12 = 0;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 20);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_477(1, 1);
			uParam0->f_12 = 1;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 20);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_477(1, 2);
			uParam0->f_12 = 1;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 19);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_477(1, 1);
			uParam0->f_12 = 1;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 20);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_477(1, 2);
			uParam0->f_12 = 1;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 19);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_477(2, 1);
			uParam0->f_12 = 2;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 20);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_477(2, 1);
			uParam0->f_12 = 2;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 20);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_477(2, 1);
			uParam0->f_12 = 2;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 20);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 22);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 22);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 22);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 24);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 24);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 14);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 24);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 28);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 29);
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
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 27);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 24);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 29);
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
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 27);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 24);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 29);
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
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 7);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 27);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 24);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 11);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 13);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 10);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 11);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 13);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 9);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 9);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 8);
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
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 2);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 30);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 2);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 22);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
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
			if (func_458())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 13);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 2);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 1);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_458())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 13);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 2);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 1);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 0);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 21);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 30);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 30);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 23);
			unk_0xEB79FECD9022AAF0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0x48B8265059381CD0(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_101700.f_31389.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_60(Global_101700.f_31389.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101700.f_31389.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_101700.f_31389.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_101700.f_31389.f_1934[uParam0->f_14];
		}
	}
	if (unk_0x48B8265059381CD0(uParam0->f_9, 19))
	{
		if (!func_60(Global_101700.f_2095.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101700.f_2095.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_101700.f_2095.f_539.f_2837[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0x48B8265059381CD0(uParam0->f_9, 20))
	{
		if (!func_60(Global_101700.f_2095.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101700.f_2095.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_101700.f_2095.f_539.f_2837[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_477(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_237(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_478(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_478(int iParam0, var uParam1, int iParam2)
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
			if (Global_101700.f_8044.f_99.f_58[128] && !Global_101700.f_8044.f_99.f_58[131])
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
					if (Global_101700.f_8044.f_99.f_58[119])
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
			else if (Global_101700.f_8044.f_99.f_58[118])
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

void func_479(int iParam0, var uParam1, struct<3> Param2, float fParam5, int iParam6)
{
	if (func_476(&(Global_68531.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x48B8265059381CD0(Global_68531.f_555[0 /*21*/].f_9, 10))
		{
			func_481(iParam0);
			func_480(uParam1, &(Global_101700.f_31389.f_69[Global_68531.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0x48B8265059381CD0(Global_68531.f_555[0 /*21*/].f_9, 11))
			{
				Global_101700.f_31389.f_1864[Global_68531.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_101700.f_31389.f_1934[Global_68531.f_555[0 /*21*/].f_14] = fParam5;
			}
			else
			{
				Global_101700.f_31389.f_1864[Global_68531.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_101700.f_31389.f_1934[Global_68531.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_101700.f_31389.f_1958[Global_68531.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_264(iParam0, 1);
		}
	}
}

void func_480(var uParam0, var uParam1)
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

void func_481(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_476(&(Global_68531.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x23E9113C762466ED(Global_68531.f_139[iParam0]))
		{
			unk_0xF0F77C99098F999B(Global_68531.f_139[iParam0], 1, 1);
			unk_0x921CF98C637B0043(&(Global_68531.f_139[iParam0]));
			Global_68531.f_139[iParam0] = 0;
		}
		if (unk_0x48B8265059381CD0(Global_68531.f_555[0 /*21*/].f_9, 13))
		{
			func_264(iParam0, 0);
		}
	}
}

int func_482(int iParam0)
{
	int iVar0;
	
	if (!unk_0x23E9113C762466ED(iParam0))
	{
		return 145;
	}
	if (!unk_0x45CD66F0A131E554(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x23E9113C762466ED(Global_89155[iVar0]))
		{
			if (Global_89155[iVar0] == iParam0)
			{
				return Global_89165[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

void func_483(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x45CD66F0A131E554(iParam0, 0))
	{
		func_114(uParam1);
		uParam1->f_66 = unk_0x0324EEB10F81965F(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xE184AC3A4DAF353D(iParam0), 16);
		*uParam1 = unk_0x420AD4B7A2DA4F74(iParam0);
		unk_0x3C5D9FD265196560(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x5CE46A3E89B49FAE(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xEFB6EA0CF01B73B1(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xB3A30C9CBD0AF035(iParam0);
		uParam1->f_67 = unk_0x7C73B96D4046CE64(iParam0);
		uParam1->f_69 = unk_0x5AADFFFE972FF9B9(iParam0);
		uParam1->f_70 = unk_0xB7541DEA333EE53D(iParam0);
		unk_0x44A79540466923A3(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x86916C0F8ACCF8A7(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0xA2BD8E71E4EDAA75(iParam0, 2))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 28);
		}
		if (unk_0xA2BD8E71E4EDAA75(iParam0, 3))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 29);
		}
		if (unk_0xA2BD8E71E4EDAA75(iParam0, 0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 30);
		}
		if (unk_0xA2BD8E71E4EDAA75(iParam0, 1))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x4555FC519F5B33E3(iParam0, 0))
		{
			uParam1->f_68 = unk_0x575D47C669B84572(iParam0);
		}
		if (unk_0x8432EA469FDB418D(uParam1->f_66))
		{
			if (unk_0x3B236BCC7CA86F1F(iParam0))
			{
				switch (unk_0xF4925FA16E991774(iParam0))
				{
					case 2:
					case 0:
						unk_0x21E7933CCC7B3724(&(uParam1->f_77), 23);
						unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0x21E7933CCC7B3724(&(uParam1->f_77), 23);
						unk_0x21E7933CCC7B3724(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x3AAC868F49EC1E0A(iParam0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 9);
		}
		if (unk_0xDABC65773FAE7D61(iParam0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 10);
		}
		if (unk_0xD74AC52CAC4E709E(iParam0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 13);
			unk_0xF1A2595FDE7845CA(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x9FC3D9B8F2BAF3E6(iParam0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 12);
		}
		func_485(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xA13396827DE7EB7C(iParam0, iVar0 + 1))
			{
				unk_0xEB79FECD9022AAF0(&(uParam1->f_77), func_484(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0xA95FCE90BA930118(iParam0, 0))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x21E7933CCC7B3724(&(uParam1->f_77), 11);
		}
		if (unk_0x44748DA5CF34DA5E(iParam0, "IgnoredByQuickSave") && unk_0x12D059B73664565A(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xEB79FECD9022AAF0(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x21E7933CCC7B3724(&(uParam1->f_77), 27);
		}
	}
}

int func_484(int iParam0)
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

int func_485(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x45CD66F0A131E554(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xFA4A2220118417AE(*iParam0) == 0)
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
			if (unk_0x2E6E95784D18C8E0(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x68BE46B0EA4FCFAF(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x1D2F98CF2A472A00(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x1D2F98CF2A472A00(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_486(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_481(iParam0);
	func_264(iParam0, 0);
}

int func_487(struct<3> Param0, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	iVar0 = func_488(Param0, iParam3, 1);
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

int func_488(struct<3> Param0, int iParam3, int iParam4)
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
		if (Global_86862[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_86862[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_489(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0x3DC4639D5F23DEA2(Param0, Global_86862[iVar0 /*10*/].f_3, 1);
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

bool func_489(int iParam0)
{
	return unk_0x48B8265059381CD0(Global_101700.f_6188[iParam0], 0);
}

int func_490(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_68531.f_139[iParam0];
}

bool func_491(struct<3> Param0, int iParam3)
{
	return func_492(Global_93635.f_2311.f_12.f_66, Param0, iParam3);
}

int func_492(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam4 == 1)
	{
		Param1 = { func_500() };
	}
	unk_0x9475086C69ACF470(iParam0, &Var0, &Var3);
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

void func_493(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	func_494(Param0, Param3, fParam6, Param7, fParam10, Param11, bParam14, bParam15, bParam16, bParam17, bParam18);
}

void func_494(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
	iVar0 = unk_0x0C00E753D78DEA62();
	if (unk_0x23E9113C762466ED(iVar0))
	{
		if (!unk_0xC26429B504BA534D(iVar0))
		{
			unk_0xF0F77C99098F999B(iVar0, 1, 0);
			iVar3 = 1;
		}
		if (unk_0x45CD66F0A131E554(iVar0, 0))
		{
			if (bParam18)
			{
				func_499(iVar0);
			}
			if (unk_0x70A9F320A34FAC28(iVar0, Param0, Param3, fParam6, 0, 1, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var10 = { unk_0x57240623C1BC6E88(iVar0, 1) };
				if ((Var10.f_2 > Param0.f_2 && Var10.f_2 < Param3.f_2) || (Var10.f_2 > Param3.f_2 && Var10.f_2 < Param0.f_2))
				{
					if (func_496(iVar0, Param0, Param3, fParam6))
					{
						bVar1 = true;
					}
				}
			}
			if (unk_0x45CD66F0A131E554(iVar0, 0))
			{
				if (unk_0x5AF6E4F22F4B49C3(iVar0, joaat("taxi")))
				{
					if (unk_0x17206B315923243C(iVar0, -1, 0) != unk_0x17B5CC8A8615737D() && unk_0x17206B315923243C(iVar0, -1, 0) != 0)
					{
						if (unk_0x3DC4639D5F23DEA2(Param0 + Param3 / Vector(2f, 2f, 2f), unk_0x57240623C1BC6E88(iVar0, 1), 1) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam16)
			{
				if (func_463(iVar0, func_294(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_495(Param11))
				{
					if (unk_0x45CD66F0A131E554(iVar0, 0))
					{
						iVar13 = unk_0x0324EEB10F81965F(iVar0);
						unk_0x397665926E912F5B(iVar0, &Var4, &Var7);
						if (unk_0xC5082382D5482C0C(iVar13))
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
				if (unk_0x45CD66F0A131E554(iVar0, 0))
				{
					if (bVar2)
					{
						unk_0x0668B21A0C3A4821(Param7, 5f, 0, 0, 0, 0, 0);
						unk_0x0608D50823C6AA6D(iVar0, uParam10);
						unk_0x5DC8C2F2F8A363C2(iVar0, Param7, 1, 0, 0, 1);
						unk_0x482AE8C0EAF5AE07(iVar0, 1084227584);
						if (bParam17)
						{
							unk_0x524A422B74847594(iVar0, 0, 1, 0);
							unk_0x016C65ED12A14D44(iVar0, 1);
						}
					}
					else
					{
						if (!unk_0xC26429B504BA534D(iVar0) || !unk_0x45CA7F42CA715849(iVar0, 1))
						{
							unk_0xF0F77C99098F999B(iVar0, 1, 1);
						}
						if (unk_0x2315BB1606BC3DC3(unk_0x17B5CC8A8615737D(), iVar0, 0))
						{
							unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), unk_0x57240623C1BC6E88(iVar0, 1), 1, 0, 0, 1);
						}
						unk_0x813865264334331D(&iVar0);
					}
				}
			}
			if (bParam14)
			{
				unk_0x2A5905FD3A0ED2A0(Param0, Param3, fParam6, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (unk_0x23E9113C762466ED(iVar0))
				{
					if (unk_0xC26429B504BA534D(iVar0))
					{
						unk_0x921CF98C637B0043(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!unk_0xC26429B504BA534D(iVar0))
			{
				unk_0xF0F77C99098F999B(iVar0, 1, 0);
			}
			iVar14 = unk_0x17206B315923243C(iVar0, -1, 0);
			if (unk_0x23E9113C762466ED(iVar14) && !unk_0xCA41A00932714525(iVar14))
			{
				unk_0x5DC8C2F2F8A363C2(iVar14, unk_0x57240623C1BC6E88(iVar14, 1), 1, 0, 0, 1);
			}
			iVar15 = unk_0x74EBEFF57C45B722(unk_0x0324EEB10F81965F(iVar0));
			if (iVar15 <= 2)
			{
				iVar14 = unk_0x17206B315923243C(iVar0, 0, 0);
				if (unk_0x23E9113C762466ED(iVar14) && !unk_0xCA41A00932714525(iVar14))
				{
					unk_0x5DC8C2F2F8A363C2(iVar14, unk_0x57240623C1BC6E88(iVar14, 1), 1, 0, 0, 1);
				}
			}
			if (iVar15 <= 4)
			{
				iVar14 = unk_0x17206B315923243C(iVar0, 1, 0);
				if (unk_0x23E9113C762466ED(iVar14) && !unk_0xCA41A00932714525(iVar14))
				{
					unk_0x5DC8C2F2F8A363C2(iVar14, unk_0x57240623C1BC6E88(iVar14, 1), 1, 0, 0, 1);
				}
				iVar14 = unk_0x17206B315923243C(iVar0, 2, 0);
				if (unk_0x23E9113C762466ED(iVar14) && !unk_0xCA41A00932714525(iVar14))
				{
					unk_0x5DC8C2F2F8A363C2(iVar14, unk_0x57240623C1BC6E88(iVar14, 1), 1, 0, 0, 1);
				}
			}
			unk_0x813865264334331D(&iVar0);
		}
	}
}

int func_495(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_496(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7)
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
	
	if (unk_0x45CD66F0A131E554(iParam0, 0))
	{
		Param1.f_2 = Param4.f_2;
		Var0 = { func_498(Param1 - Param4) };
		Var3 = { Var0 };
		Var0.f_0 = -Var3.f_1;
		Var0.f_1 = Var3.f_0;
		Var0.f_2 = 0f;
		Var6 = { Param1 - Var0 * FtoV((fParam7 / 2f)) };
		Var9 = { Param1 + Var0 * FtoV((fParam7 / 2f)) };
		Var12 = { Param4 - Var0 * FtoV((fParam7 / 2f)) };
		Var15 = { Param4 + Var0 * FtoV((fParam7 / 2f)) };
		unk_0x9475086C69ACF470(unk_0x0324EEB10F81965F(iParam0), &Var31, &Var34);
		Var18[0 /*3*/] = { unk_0x854ED33E6D715648(iParam0, Var31.f_0, Var31.f_1, 0f) };
		Var18[1 /*3*/] = { unk_0x854ED33E6D715648(iParam0, Var31.f_0, Var34.f_1, 0f) };
		Var18[2 /*3*/] = { unk_0x854ED33E6D715648(iParam0, Var34.f_0, Var31.f_1, 0f) };
		Var18[3 /*3*/] = { unk_0x854ED33E6D715648(iParam0, Var34.f_0, Var34.f_1, 0f) };
		if (((((((((((((((func_497(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var9) || func_497(Var18[0 /*3*/], Var18[1 /*3*/], Var9, Var15)) || func_497(Var18[0 /*3*/], Var18[1 /*3*/], Var12, Var15)) || func_497(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var12)) || func_497(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var9)) || func_497(Var18[1 /*3*/], Var18[3 /*3*/], Var9, Var15)) || func_497(Var18[1 /*3*/], Var18[3 /*3*/], Var12, Var15)) || func_497(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var12)) || func_497(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var9)) || func_497(Var18[3 /*3*/], Var18[2 /*3*/], Var9, Var15)) || func_497(Var18[3 /*3*/], Var18[2 /*3*/], Var12, Var15)) || func_497(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var12)) || func_497(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var9)) || func_497(Var18[2 /*3*/], Var18[0 /*3*/], Var9, Var15)) || func_497(Var18[2 /*3*/], Var18[0 /*3*/], Var12, Var15)) || func_497(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var12))
		{
			return 1;
		}
	}
	return 0;
}

int func_497(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11)
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

Vector3 func_498(struct<3> Param0)
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

void func_499(int iParam0)
{
	if (unk_0x23E9113C762466ED(iParam0))
	{
		if (unk_0x45CD66F0A131E554(iParam0, 0))
		{
			if (unk_0x27CB4A87DBB58E6E(iParam0) <= 200f)
			{
				unk_0xEC0212C05F98C1DF(iParam0, 500f);
			}
			if (unk_0x1667F287C40D3CA4(iParam0) <= 700f)
			{
				unk_0xEC0212C05F98C1DF(iParam0, 900f);
			}
			if (unk_0xB5DF060B138CD2EA(iParam0) < 200)
			{
				unk_0xEC0212C05F98C1DF(iParam0, 500f);
			}
		}
	}
}

Vector3 func_500()
{
	return 2.55f, 5.665f, 2.55f;
}

void func_501()
{
	if (bLocal_3169)
	{
		if (((iLocal_3105 != 5 && iLocal_3105 != 0) && iLocal_3105 != 3) && iLocal_3105 != 4)
		{
			func_502();
			if (iLocal_3246 != 0)
			{
				func_290(5);
			}
		}
	}
}

void func_502()
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (unk_0x23E9113C762466ED(Local_3476.f_0) && unk_0x23E9113C762466ED(Local_3469.f_0))
	{
		if (unk_0xA929B2923D14E2F8(Local_3476.f_0, 0) || unk_0xCA41A00932714525(Local_3476.f_0))
		{
			iLocal_3246 = 5;
			return;
		}
		if (unk_0xA929B2923D14E2F8(Local_3469.f_0, 0) || unk_0xCA41A00932714525(Local_3469.f_0))
		{
			iLocal_3246 = 7;
			return;
		}
		if (unk_0xC017443DBE6DA4D6(Local_3476.f_0, unk_0x17B5CC8A8615737D(), 1))
		{
			unk_0x6B406797594AEA51(unk_0xBE369BE1BC57A796());
			iLocal_3246 = 4;
			return;
		}
		if (unk_0xC017443DBE6DA4D6(Local_3469.f_0, unk_0x17B5CC8A8615737D(), 1))
		{
			unk_0x6B406797594AEA51(unk_0xBE369BE1BC57A796());
			iLocal_3246 = 6;
			return;
		}
	}
	if (unk_0x23E9113C762466ED(Local_3483.f_0))
	{
		if (unk_0xA929B2923D14E2F8(Local_3483.f_0, 0) || unk_0xCA41A00932714525(Local_3483.f_0))
		{
			iLocal_3246 = 1;
			return;
		}
		else if (unk_0x23E9113C762466ED(Local_3497.f_0))
		{
			if (!unk_0xA929B2923D14E2F8(Local_3497.f_0, 0) && unk_0x03767DFC5EE2B0C6(Local_3497.f_0))
			{
				unk_0x28EB63CAF526B891(Local_3497.f_0, 1, 0);
			}
		}
	}
	if (unk_0x23E9113C762466ED(Local_3490.f_0))
	{
		if ((unk_0xA929B2923D14E2F8(Local_3490.f_0, 0) || unk_0xA77EE6C138A588EB(Local_3490.f_0)) || !unk_0x45CD66F0A131E554(Local_3490.f_0, 0))
		{
			iLocal_3246 = 3;
			return;
		}
		else if (iLocal_3105 != 0)
		{
			if (unk_0x745DF692265C6509(Local_3490.f_0))
			{
				if (func_288(iLocal_3256, 3000))
				{
					iLocal_3246 = 3;
					return;
				}
			}
			else
			{
				iLocal_3256 = unk_0x94E3E074F38DF86C();
			}
		}
	}
	if (((iLocal_3246 == 8 || iLocal_3246 == 9) || iLocal_3246 == 10) || iLocal_3246 == 2)
	{
		return;
	}
	if (iLocal_3105 == 1 || iLocal_3105 == 2)
	{
		if (func_20(Local_3483.f_0))
		{
			if (fLocal_3265 > 200f)
			{
				iLocal_3246 = 2;
				return;
			}
			if (fLocal_3266 > 50000f && fLocal_3266 < 58000f)
			{
				if (iLocal_3183 || !unk_0x7B816C72877502C5(unk_0x17B5CC8A8615737D(), Local_3490.f_0))
				{
					if (unk_0x70A9F320A34FAC28(unk_0x17B5CC8A8615737D(), -668.3635f, -658.3801f, 27.43382f, -440.022f, -657.4238f, 40.25127f, 40f, 0, 1, 0))
					{
						iLocal_3246 = 2;
						return;
					}
				}
			}
		}
		if ((func_13(Local_3490.f_0) && func_10(Local_3476.f_0)) && func_10(Local_3469.f_0))
		{
			Var0 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
			if (!unk_0x7B816C72877502C5(Local_3476.f_0, Local_3490.f_0))
			{
				if (!unk_0x7B816C72877502C5(Local_3469.f_0, Local_3490.f_0))
				{
					if (!iLocal_3204)
					{
						if (!func_372(Local_3476.f_0, Var0, 60f) || !func_372(Local_3469.f_0, Var0, 60f))
						{
							func_18();
							func_327("NIGEL2_08", 7500, 1);
							iLocal_3204 = 1;
						}
					}
					else if (func_372(Local_3476.f_0, Var0, 30f) && func_372(Local_3469.f_0, Var0, 30f))
					{
						if (func_340("NIGEL2_08", 0, 0))
						{
							unk_0x69E47427C5084888("NIGEL2_08");
						}
						iLocal_3204 = 0;
					}
					else if (!func_372(Local_3476.f_0, Var0, 100f) && !func_372(Local_3469.f_0, Var0, 100f))
					{
						iLocal_3246 = 8;
						return;
					}
				}
				else if (!iLocal_3204)
				{
					if (!func_372(Local_3476.f_0, Var0, 60f))
					{
						func_18();
						func_327("NIGEL2_05", 7500, 1);
						iLocal_3204 = 1;
					}
				}
				else if (func_372(Local_3476.f_0, Var0, 30f))
				{
					if (func_340("NIGEL2_05", 0, 0))
					{
						unk_0x69E47427C5084888("NIGEL2_05");
					}
					iLocal_3204 = 0;
				}
				else if (!func_372(Local_3476.f_0, Var0, 100f))
				{
					iLocal_3246 = 9;
					return;
				}
			}
			else if (!unk_0x7B816C72877502C5(Local_3469.f_0, Local_3490.f_0))
			{
				if (!iLocal_3204)
				{
					if (!func_372(Local_3469.f_0, Var0, 60f))
					{
						func_18();
						func_327("NIGEL2_09", 7500, 1);
						iLocal_3204 = 1;
					}
				}
				else if (func_372(Local_3469.f_0, Var0, 30f))
				{
					if (func_340("NIGEL2_09", 0, 0))
					{
						unk_0x69E47427C5084888("NIGEL2_09");
					}
					iLocal_3204 = 0;
				}
				else if (!func_372(Local_3469.f_0, Var0, 100f))
				{
					iLocal_3246 = 10;
					return;
				}
			}
			else if (!unk_0x7B816C72877502C5(unk_0x17B5CC8A8615737D(), Local_3490.f_0))
			{
				Var3 = { unk_0x57240623C1BC6E88(Local_3490.f_0, 1) };
				fLocal_3267 = unk_0x2A488C176D52CCA5(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), Var3);
				if (!iLocal_3204)
				{
					if (fLocal_3267 > 60f)
					{
						func_18();
						func_327("NIGEL2_08", 7500, 1);
						iLocal_3204 = 1;
					}
				}
				else if (fLocal_3267 > 100f)
				{
					iLocal_3246 = 8;
					return;
				}
				else if (fLocal_3267 < 30f)
				{
					if (func_340("NIGEL2_08", 0, 0))
					{
						unk_0x69E47427C5084888("NIGEL2_08");
					}
					iLocal_3204 = 0;
				}
				if (bLocal_3213)
				{
					if (fLocal_3265 < 35f)
					{
						if (func_503(Local_3490.f_0))
						{
							iLocal_3246 = 8;
							return;
						}
					}
				}
			}
		}
	}
}

int func_503(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	if (!unk_0x623BDE1B17A9D9E3(iLocal_3262))
	{
		return 0;
	}
	if (unk_0x45CD66F0A131E554(iParam0, 0))
	{
		Var0 = { unk_0x57240623C1BC6E88(iParam0, 1) };
		if (unk_0x1A4C1C534F86E06A(Var0) == iLocal_3262)
		{
			iVar3 = unk_0x2891D5935185F77D(iParam0);
			if (func_62(iVar3))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_504(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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
	
	if (Global_69956 != 6)
	{
		if (Global_69958 == -1)
		{
			if (func_515(1, Param0))
			{
				if (Global_69959 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_33 > fVar0)
				{
					Global_69958 = unk_0x94E3E074F38DF86C();
					Local_34 = { unk_0x715C91CE329F2B21(15) };
					fLocal_33 = 0f;
				}
				else
				{
					fLocal_33 = (fLocal_33 + unk_0xE9F97E1BC0CACE24());
				}
			}
			else
			{
				fLocal_33 = 0f;
			}
		}
		else
		{
			if (!func_515(0, Param0))
			{
				Global_69958 = (unk_0x94E3E074F38DF86C() - 9000);
			}
			unk_0xE57F94EA937AAD99(7);
			unk_0xE57F94EA937AAD99(6);
			unk_0xE57F94EA937AAD99(8);
			unk_0xE57F94EA937AAD99(9);
			iVar1 = (unk_0x94E3E074F38DF86C() - Global_69958);
			if (iVar1 < 9000 && !unk_0x25BD4C26D84038CD())
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
				switch (Global_69956)
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
				unk_0x4933838CDEC9827A(82, 66);
				unk_0x6C65E322B18B5D28(1);
				unk_0xE32F769454EED7A6(2);
				iVar12 = func_294();
				if (Global_69959 == 1 && Global_69957 == 62)
				{
					iVar12 = Global_101700.f_2095.f_539.f_3550;
				}
				switch (iVar12)
				{
					case 0:
						unk_0xE3B46F8779F1AB2E(143, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 1:
						unk_0xE3B46F8779F1AB2E(144, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 2:
						unk_0xE3B46F8779F1AB2E(145, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					default:
						iVar8 = 240;
						iVar9 = 200;
						iVar10 = 80;
				}
				unk_0x95F5FAE83A0364F7(iVar8, iVar9, iVar10, iVar2);
				unk_0xB83A3BA4CB555E81();
				Var4 = { func_506(Global_69957, Global_69959, iParam10) };
				if (fVar7 == -0.014f)
				{
				}
				unk_0x28611CDA71EBBA91(fVar6, fVar7, 0f, 0.01f);
				unk_0xF52EFF0C6EF215CB(0.67f, 0.67f);
				if (!unk_0x4FF5482BE67FE954() && !unk_0x8D2F3225653CAD77())
				{
					fLocal_38 = 0.14f;
				}
				else
				{
					fLocal_38 = 0.17f;
				}
				if (fVar7 == -0.014f)
				{
					if (func_505(&Var4) > fLocal_38)
					{
						if (unk_0x33243A46E91831D5(15))
						{
							unk_0x0E544F498B88F47B(15, Local_34.f_0, (Local_34.f_1 + fLocal_37));
							Global_69961 = 1;
						}
					}
				}
				unk_0x169EAB5A8FBE845B(&Var4);
				unk_0x30122BDF124C9221(fVar6, fVar7, 0);
				unk_0x526D61ADDDE6C626();
				if (Global_69960 == 1)
				{
					func_255();
					fLocal_33 = 0f;
				}
			}
			else
			{
				func_255();
				fLocal_33 = 0f;
			}
		}
	}
}

float func_505(var uParam0)
{
	unk_0x2FCB88845EB45E2E(uParam0);
	return unk_0x79BC75FF4F056899(1);
}

struct<2> func_506(int iParam0, int iParam1, int iParam2)
{
	struct<2> Var0;
	int iVar2;
	
	StringCopy(&Var0, "", 8);
	switch (iParam1)
	{
		case 1:
			Var0 = { func_514(iParam0) };
			break;
		
		case 7:
			Var0 = { func_241(iParam0) };
			break;
		
		case 3:
			iVar2 = iParam0;
			switch (iVar2)
			{
				case 0:
					Var0 = { func_513(iParam2) };
					break;
				
				case 8:
					Var0 = { func_512(iParam2) };
					break;
				
				case 7:
					Var0 = { func_511(iParam2) };
					break;
				
				case 10:
					Var0 = { func_510(iParam2) };
					break;
				
				case 5:
					Var0 = { func_509(iParam2) };
					break;
				
				case 4:
					Var0 = { func_508(iParam2) };
					break;
				
				default:
					StringCopy(&Var0, func_507(iVar2), 8);
					break;
			}
			break;
		
		default:
			break;
	}
	return Var0;
}

char* func_507(int iParam0)
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

struct<2> func_508(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0x9C88EB7B70229335(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGOR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_509(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0x9C88EB7B70229335(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGFS_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_510(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0x9C88EB7B70229335(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSP_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_511(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0x9C88EB7B70229335(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_512(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0x9C88EB7B70229335(&cVar2) || iParam0 == 3)
	{
	}
	else
	{
		StringCopy(&Var0, "MGCR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_513(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (unk_0x9C88EB7B70229335(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGBJ_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_514(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_82612[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_101700.f_8044.f_99.f_205[7])
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

int func_515(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	if (((!func_517(0) || Global_69971) || Global_69960 == 1) || !unk_0x30F06AB0772AFB80())
	{
		return 0;
	}
	switch (Global_69956)
	{
		case 0:
			if (unk_0x6A7B0D91FD88D9EE(&uParam1, "NONE") || unk_0x9C88EB7B70229335(&uParam1))
			{
				Global_69956 = 3;
			}
			else
			{
				Global_69956 = 1;
			}
			break;
		
		case 1:
			if (unk_0x77888DFE5B94E7E5())
			{
				Global_69956 = 2;
			}
			break;
		
		case 2:
			if (unk_0x1B76B77EDF24A933())
			{
				Global_69956 = 4;
				return 1;
			}
			else if (!unk_0x80A7A5165A9C7607())
			{
				Global_69956 = 3;
			}
			break;
		
		case 3:
			if (unk_0x1B76B77EDF24A933())
			{
			}
			else
			{
				Global_69956 = 5;
				return 1;
			}
			break;
		
		case 4:
			if (unk_0x1B76B77EDF24A933())
			{
				return 1;
			}
			else if (iParam0 == 1)
			{
				Global_69956 = 5;
			}
			break;
		
		case 5:
			if ((unk_0x1B76B77EDF24A933() || func_9(0)) || func_516(1))
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

bool func_516(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17151.f_4 && Global_17151.f_104 == 4);
	}
	return Global_17151.f_4;
}

int func_517(int iParam0)
{
	if (Global_35781 == 15)
	{
		return 0;
	}
	if (func_518(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_518(int iParam0)
{
	return func_519(iParam0, Global_35781);
}

int func_519(int iParam0, int iParam1)
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

void func_520(int iParam0, bool bParam1)
{
	func_529(bParam1, 1);
	if (!func_47())
	{
		func_34("NIGEL2_MISSION_FAIL", 0);
	}
	if (bParam1)
	{
		func_521();
	}
	iLocal_3106 = iParam0;
	bLocal_3169 = false;
	if (func_47())
	{
		iLocal_3170 = 1;
	}
	else
	{
		iLocal_3170 = 0;
	}
	if (!func_47())
	{
		if (iLocal_3106 == 0)
		{
			if (func_10(unk_0x17B5CC8A8615737D()))
			{
				func_16(unk_0x17B5CC8A8615737D(), -1309.016f, -641.8671f, 25.5017f, 242.3463f, 0, 0);
				func_3(unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1), 50f, 13, 5000, 0, 0);
				iLocal_3170 = 1;
			}
		}
	}
	func_1(iLocal_3106);
}

void func_521()
{
	func_522(1, 0);
	if (!func_47() && bLocal_3169)
	{
		while (!func_34("NIGEL2_MISSION_FAIL", 0))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	unk_0x9274EF97A90581BE(0, 0, 3000, 1, 0, 0);
	if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
	{
		if (!func_47())
		{
			unk_0xBC8C26E1CC191108(unk_0x17B5CC8A8615737D());
		}
		unk_0x809D9B021F305A70(unk_0xBE369BE1BC57A796(), 0, 0);
		unk_0xD189588DEC407D28(unk_0xBE369BE1BC57A796(), 0);
	}
	func_534();
	func_290(0);
}

void func_522(bool bParam0, bool bParam1)
{
	int iVar0;
	
	unk_0xD12BCC85C2F8B1DE();
	if (unk_0x9E123D5FF2973C60())
	{
		unk_0x2E2945F5602A744F(1);
	}
	func_18();
	unk_0x000E46314C3A507F(1f);
	func_527(0);
	func_23(1, 1, 1, 1);
	unk_0x011AE968D1EA959B(0);
	unk_0xFFE4319CE7BE2DBA(0);
	func_299(0);
	if (!iLocal_3205)
	{
		unk_0x2EE4FDDB1E7664FB();
	}
	unk_0xD211CBCC0E735E4F(-1415.904f, -732.5489f, 17.54549f, -1236.628f, -601.0265f, 31.15345f, 23f, 1);
	unk_0xD211CBCC0E735E4F(418.2838f, -571.6629f, 24.69794f, 362.0258f, -663.1398f, 38.33998f, 28f, 1);
	unk_0xD211CBCC0E735E4F(-668.3635f, -658.3801f, 27.43382f, -440.022f, -657.4238f, 40.25127f, 40f, 1);
	unk_0xB82FD68B5DE68F01(-1409.344f, -756.381f, 17.59896f, -1239.148f, -587.1219f, 31.25266f, 1, 1);
	unk_0xB82FD68B5DE68F01(341.2f, -645.83f, 25f, 429.1f, -572.89f, 35f, 1, 1);
	unk_0x571422CE42B47889(uLocal_3288, 0);
	unk_0x571422CE42B47889(uLocal_3289, 0);
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		unk_0x571422CE42B47889(uLocal_3290[iVar0], 0);
		iVar0++;
	}
	unk_0x700DE1253BAD8ADC(-1318.5f, -678.8826f, 23f, -1296.628f, -631.5449f, 28f, 0);
	unk_0x700DE1253BAD8ADC(-496.2885f, -681.5599f, 25f, -481.5988f, -668.7411f, 38f, 0);
	unk_0x700DE1253BAD8ADC(-463.2153f, -829.0475f, 22.4812f, -445.4645f, -813.1011f, 36.56588f, 0);
	unk_0x700DE1253BAD8ADC(341.2f, -645.83f, 25f, 429.1f, -572.89f, 35f, 0);
	unk_0xB61819CCF7A3F445();
	unk_0x82ED97CBD659E983(0);
	func_526(0);
	if (!func_47() && bLocal_3169)
	{
		func_34("NIGEL2_MISSION_FAIL", 0);
	}
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), true, 0);
		unk_0x6018E338F7ABCE75(unk_0x17B5CC8A8615737D(), 170, 0);
	}
	if (unk_0x0F1BF24ED3B7ED40(uLocal_3245))
	{
		unk_0xA652CA24468EC747(uLocal_3245, 0);
		unk_0x2BC4A4AFFC2D937D(uLocal_3245, 0);
	}
	func_525(1, 1, 1);
	func_524(&uLocal_3304, 2);
	func_524(&uLocal_3304, 3);
	func_524(&uLocal_3304, 4);
	func_524(&uLocal_3304, 5);
	func_302(&uLocal_20, 0, 0);
	unk_0xD6B605293CA6F397(1);
	unk_0x8ADF92E4B51709E2(1f);
	unk_0x111E99E32A85B908(iLocal_3286);
	unk_0xD90CB3CF9A40791C(Local_3490.f_1, 0);
	unk_0xD90CB3CF9A40791C(Local_3497.f_1, 0);
	func_92();
	func_49(bParam0);
	func_523(bParam1);
	if (iLocal_3105 == 4)
	{
		func_267(75, 2, 1, 1, 0);
		func_267(76, 1, 1, 1, 0);
		func_267(181, 2, 1, 1, 0);
	}
	else
	{
		func_267(75, 0, 0, 1, 0);
		func_267(76, 1, 0, 1, 0);
		func_267(181, 1, 0, 1, 0);
	}
}

void func_523(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x623BDE1B17A9D9E3(iLocal_3262))
	{
		if (unk_0x1F02DB541727C048(iLocal_3262))
		{
			unk_0x88125DB6195C93A6(iLocal_3262, 0);
			unk_0xDD5B92F304023AEF(iLocal_3262);
		}
	}
	if (unk_0xF1DEF26108040848(uLocal_3285))
	{
		if (unk_0x46995C6DD9E9DF8F(uLocal_3285) != 10)
		{
			unk_0x08B6ECD80C6BD224(uLocal_3285, 9);
		}
	}
	unk_0xF8E2640CE709A221(iLocal_3258, sLocal_3296);
	unk_0xF8E2640CE709A221(2, sLocal_3296);
	unk_0xF8E2640CE709A221(1, sLocal_3297);
	func_378();
	func_66(0, 1);
	if (unk_0x97F2912BC85D905D(uLocal_3283))
	{
		unk_0x0A977DD607DA1424(uLocal_3283, 0);
	}
	if (unk_0x97F2912BC85D905D(uLocal_3284))
	{
		unk_0x0A977DD607DA1424(uLocal_3284, 0);
	}
	unk_0x7D861B56FA788D3F();
	if (func_13(Local_3497.f_0))
	{
		unk_0x6741124666983482(Local_3497.f_0, 0);
	}
	if (unk_0x4E1850F5FF023071("NIGEL_02_CHASE"))
	{
		unk_0xB8CAC5F3774894A1("NIGEL_02_CHASE");
	}
	unk_0xB47CC6339ADB0B67(iLocal_3257);
	unk_0x9A27E67BCD441C6E();
	unk_0xC40055F09E9CA169();
	unk_0xF9FFB9857F3120F8("rcmnigel2");
	unk_0x924CDE68BA2ED3BA(Local_3274.f_7);
	unk_0x924CDE68BA2ED3BA(Local_3497.f_1);
	unk_0x924CDE68BA2ED3BA(Local_3490.f_1);
	unk_0x924CDE68BA2ED3BA(Local_3483.f_1);
	unk_0x924CDE68BA2ED3BA(Local_3469.f_1);
	unk_0x924CDE68BA2ED3BA(Local_3476.f_1);
	unk_0x924CDE68BA2ED3BA(iLocal_3270);
	unk_0x924CDE68BA2ED3BA(iLocal_3271);
	unk_0x924CDE68BA2ED3BA(iLocal_3272);
	unk_0x924CDE68BA2ED3BA(iLocal_3273);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		unk_0x924CDE68BA2ED3BA(Local_3534[iVar0 /*2*/].f_1);
		iVar0++;
	}
	unk_0x924CDE68BA2ED3BA(Local_3541.f_1);
	if (bParam0)
	{
		unk_0x6DB5F7460B043A80(0, 1);
	}
}

void func_524(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_525(bool bParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	bVar0 = true;
	if (unk_0x80A7A5165A9C7607())
	{
		while (bVar0)
		{
			bVar0 = unk_0x80A7A5165A9C7607();
			if (unk_0x1B76B77EDF24A933())
			{
				unk_0x404A255180289CD1(0);
			}
			if (unk_0x77888DFE5B94E7E5())
			{
				unk_0xB5BD48559882D958();
			}
			if (unk_0x80A7A5165A9C7607() && !unk_0x1B76B77EDF24A933())
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

void func_526(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_100756, unk_0x6AF6B39BFDB53CB5(), 24);
		Global_100750 = 1;
	}
	else
	{
		StringCopy(&Global_100756, "NULL", 24);
		Global_100750 = 0;
	}
}

void func_527(bool bParam0)
{
	if (bParam0)
	{
		func_528();
		if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
		{
			unk_0xEB79FECD9022AAF0(&Global_2314, 16);
		}
		Global_14443.f_1 = 1;
		if (func_9(0))
		{
			func_6(0);
		}
	}
	else if (Global_14443.f_1 == 1)
	{
		if (!Global_14443.f_1 == 0)
		{
			Global_14443.f_1 = 3;
		}
	}
}

void func_528()
{
	if (Global_14443.f_1 == 9 || Global_14443.f_1 == 10)
	{
		Global_15798 = 0;
		Global_15794 = 1;
	}
}

void func_529(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_525(0, 1, 1);
	}
	if (!unk_0x25BD4C26D84038CD())
	{
		unk_0x50FD1894558DE186(0);
	}
	func_292(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_530(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_533())
	{
		unk_0xAA78C60F0BF0F8D4(0);
		unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 2);
		unk_0xD278B72A700DC2DC(1);
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), false, 0);
		}
		Global_91487 = { Param0 };
		Global_91490 = fParam3;
		Global_91486 = 1;
		if (iParam4 == 1)
		{
			unk_0xEB79FECD9022AAF0(&(Global_91491.f_20), 14);
		}
		else
		{
			unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0xEB79FECD9022AAF0(&(Global_91491.f_20), 24);
		}
		else
		{
			unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 24);
		}
		func_46(1);
	}
}

int func_531()
{
	if (!Global_91491 == 10 && !Global_91491 == 9)
	{
		return 0;
	}
	return Global_91491.f_2;
}

void func_532(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_10(uParam0->f_28[iVar0]))
		{
			unk_0x4C44C1A3160350E2(uParam0->f_28[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_10(uParam0->f_35[iVar0]))
		{
			unk_0x4C44C1A3160350E2(uParam0->f_35[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_10(uParam0->f_41[iVar0]))
		{
			unk_0x4C44C1A3160350E2(uParam0->f_41[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0x4C44C1A3160350E2(unk_0x17B5CC8A8615737D(), iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		unk_0xC6042F55A6EA17B2(unk_0x17B5CC8A8615737D(), iParam1);
		if (bParam2)
		{
			unk_0x0B25AB3A7FA0683C(unk_0x17B5CC8A8615737D(), joaat("weapon_unarmed"), 1);
		}
	}
}

int func_533()
{
	if (Global_91491 == 10 || Global_91491 == 9)
	{
		return 1;
	}
	return 0;
}

void func_534()
{
	func_538();
	func_536(64, 2, 0);
	unk_0x000E46314C3A507F(0.2f);
	unk_0xFCBD7340FBF1FE46(2, 0);
	unk_0xFCBD7340FBF1FE46(3, 0);
	unk_0xFCBD7340FBF1FE46(4, 0);
	unk_0xFCBD7340FBF1FE46(5, 0);
	unk_0x82ED97CBD659E983(1);
	func_526(1);
	unk_0x8D25D78C081AB5E2(0);
	func_535();
}

void func_535()
{
	Global_86002 = 1;
}

void func_536(int iParam0, int iParam1, bool bParam2)
{
	Global_2999 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		func_323();
		if (iParam1 == 4)
		{
			Global_101700.f_27009[iParam0 /*29*/].f_12[0] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_12[1] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_12[2] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_24[0] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_24[1] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_101700.f_27009[iParam0 /*29*/].f_12[iParam1] == 1 && Global_101700.f_27009[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_101700.f_27009[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_101700.f_27009[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_69702)
			{
				if (iParam1 != 4)
				{
					if (Global_14443 != iParam1)
					{
						Global_2972[iParam1 /*4*/] = { Global_101700.f_27009[iParam0 /*29*/].f_3 };
						Global_2989[iParam1] = 1;
						Global_2994[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14443)
					{
					}
					else
					{
						Global_2923[1 /*6*/] = { Global_101700.f_27009[iParam0 /*29*/].f_3 };
						Global_2923[1 /*6*/].f_5 = iParam1;
						func_537();
					}
				}
				else
				{
					Global_2923[1 /*6*/] = { Global_101700.f_27009[iParam0 /*29*/].f_3 };
					Global_2923[1 /*6*/].f_5 = iParam1;
					func_537();
				}
			}
			else
			{
				Global_2923[1 /*6*/] = { Global_101700.f_27009[iParam0 /*29*/].f_3 };
				Global_2923[1 /*6*/].f_5 = iParam1;
				func_537();
			}
		}
	}
}

void func_537()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, unk_0xC7E52B74A3B4973C(&(Global_101700.f_27009[Global_2999 /*29*/].f_7)), 64);
	if (Global_3018 == 0)
	{
		unk_0xBD18006F0815A298("");
		StringCopy(&cVar16, unk_0xC7E52B74A3B4973C(&(Global_2923[1 /*6*/])), 64);
		sVar32 = unk_0xC7E52B74A3B4973C("CELL_253");
		unk_0x6132B0FB7289E50A(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0xBD18006F0815A298("CELL_255");
		unk_0x34D84D73B5DF8E80(&(Global_2923[1 /*6*/]));
		unk_0x6132B0FB7289E50A(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0x21E7933CCC7B3724(&Global_2313, 0);
}

void func_538()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		iLocal_3184[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		iLocal_3171[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_3179[iVar0] = 0;
		iVar0++;
	}
	iLocal_3193 = 0;
	iLocal_3197 = 0;
	iLocal_3204 = 0;
	iLocal_3201 = 0;
	iLocal_3202 = 0;
	iLocal_3198 = 0;
	iLocal_3199 = 0;
	iLocal_3200 = 0;
	bLocal_3213 = false;
	bLocal_3211 = false;
	bLocal_3208 = false;
	iLocal_3203 = 0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iLocal_3194[iVar0] = 0;
		iVar0++;
	}
	iLocal_3235 = 0;
	iLocal_3232 = 0;
	iLocal_3233 = 0;
	iLocal_3234 = 0;
	iLocal_3236 = 0;
	iLocal_3237 = 1;
	iLocal_3238 = 0;
	iLocal_3239 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		iLocal_3216[iVar0] = 0;
		iVar0++;
	}
	iLocal_3210 = 0;
	iLocal_3212 = 0;
	iLocal_3205 = 1;
	bLocal_3206 = false;
	iLocal_3209 = 0;
	iLocal_3207 = 0;
	bLocal_3231 = false;
	iLocal_3229 = 0;
	bLocal_3230 = false;
	bLocal_3214 = false;
	bLocal_3215 = false;
	bLocal_3240 = false;
	iLocal_3241 = 0;
	iLocal_3242 = 0;
	iLocal_3243 = 0;
	iLocal_3244 = 0;
	iLocal_3246 = 0;
	iLocal_3253 = 0;
	iLocal_3248 = 0;
	iLocal_3254 = 0;
	iLocal_3255 = 0;
	iLocal_3256 = 0;
	iLocal_3249 = 0;
	iLocal_3250 = 0;
	iLocal_3247 = 0;
	iLocal_3251 = 0;
	iLocal_3252 = 0;
	iLocal_3257 = -1;
	iLocal_3258 = 1;
	iLocal_3259 = 0;
	fLocal_3265 = 0f;
	fLocal_3266 = 0f;
	fLocal_3264 = 20.75f;
	fLocal_3267 = 0f;
	Local_3550 = { 368.5714f, -594.9467f, 45.5422f };
	Local_3553 = { 389.5015f, -614.1279f, 29.618f };
	iLocal_3263 = 0;
	Local_3534[0 /*2*/].f_1 = joaat("boxville2");
	Local_3534[1 /*2*/].f_1 = joaat("washington");
	Local_3534[2 /*2*/].f_1 = joaat("washington");
	Local_3541.f_1 = joaat("sultan");
	iLocal_3270 = joaat("a_m_y_business_01");
	iLocal_3271 = joaat("s_m_m_doctor_01");
	iLocal_3272 = joaat("s_f_y_scrubs_01");
	iLocal_3273 = joaat("a_f_y_bevhills_03");
	Local_3497.f_1 = joaat("dubsta");
	Local_3497.f_3 = { -1290.73f, -634.603f, 26.1004f };
	Local_3497.f_6 = 126.961f;
	Local_3490.f_1 = func_540();
	Local_3490.f_3 = { -1304.01f, -644.58f, 25.91f };
	Local_3490.f_6 = 127.67f;
	Local_3483.f_1 = func_539();
	Local_3483.f_3 = { -1290.048f, -631.459f, 25.6863f };
	Local_3483.f_6 = 121.506f;
	Local_3469.f_1 = func_572(63);
	Local_3469.f_3 = { -1309.61f, -640.33f, 26.53f };
	Local_3469.f_6 = -124f;
	Local_3476.f_1 = func_572(64);
	Local_3476.f_3 = { -1310.24f, -640.19f, 26.53f };
	Local_3476.f_6 = -73.78f;
	Local_3274.f_1 = { 299.48f, -584.84f, 41.445f };
	Local_3274.f_4 = { 0f, 0f, -20f };
	Local_3274.f_7 = joaat("prop_hospitaldoors_start");
	iLocal_3543 = 0;
	Local_3559 = { 394.5f, -619.1f, 28.2f };
	Local_3562 = { 0f, 0f, 0f };
	unk_0x1EF7A8224AE81790("ENEMIES", &iLocal_3286);
	iLocal_3287 = unk_0x7B619B0C33282280(unk_0x17B5CC8A8615737D());
	unk_0xDE574EA7A7A2CAF8(5, iLocal_3286, joaat("player"));
	unk_0xDE574EA7A7A2CAF8(5, joaat("player"), iLocal_3286);
	unk_0xDE574EA7A7A2CAF8(5, iLocal_3286, iLocal_3287);
	unk_0xDE574EA7A7A2CAF8(5, iLocal_3287, iLocal_3286);
	unk_0xDE574EA7A7A2CAF8(1, iLocal_3287, joaat("player"));
	unk_0xDE574EA7A7A2CAF8(1, joaat("player"), iLocal_3287);
}

int func_539()
{
	return joaat("u_m_m_aldinapoli");
}

int func_540()
{
	return iLocal_95;
}

void func_541()
{
	func_428();
	if (func_550())
	{
		func_522(0, 1);
	}
	func_542(&Local_3108, 1, 0, 0);
	unk_0x921053BAF754303D();
}

void func_542(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_548(uParam0, iParam1);
	func_546(uParam0, bParam2);
	func_543(uParam0, bParam3);
}

void func_543(var uParam0, bool bParam1)
{
	func_544(&(uParam0->f_41), bParam1);
}

void func_544(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_53(uParam0[iVar0]);
		}
		else
		{
			func_545(uParam0[iVar0], 0);
		}
		iVar0++;
	}
}

void func_545(var uParam0, bool bParam1)
{
	if (unk_0x23E9113C762466ED(*uParam0))
	{
		if (unk_0xF928485DD4C9E3C3(*uParam0))
		{
			unk_0xB2E72B5CFE1EC372(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0x7572E8CAC3330ACE(uParam0);
		}
		else
		{
			unk_0x6CCB4081AEF003A1(*uParam0);
		}
	}
}

void func_546(var uParam0, bool bParam1)
{
	func_547(&(uParam0->f_35), bParam1);
}

void func_547(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_52(uParam0[iVar0]);
		}
		else
		{
			func_51(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_548(var uParam0, int iParam1)
{
	func_549(&(uParam0->f_28), iParam1);
}

void func_549(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (iParam1 == 1)
		{
			func_56(uParam0[iVar0]);
		}
		else
		{
			func_55(uParam0[iVar0], 0, 1, 0);
		}
		iVar0++;
	}
}

int func_550()
{
	int iVar0;
	
	iVar0 = func_286();
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!Global_100787[iVar0 /*10*/].f_4)
	{
		return 0;
	}
	Global_100787[iVar0 /*10*/].f_4 = 0;
	unk_0x6DB5F7460B043A80(0, 1);
	unk_0x6DB5F7460B043A80(3, 1);
	unk_0x6DB5F7460B043A80(2, 1);
	if (!func_97(0))
	{
		if (Global_100787[iVar0 /*10*/].f_5 && Global_100787[iVar0 /*10*/].f_6)
		{
			Global_100787[iVar0 /*10*/].f_6 = 0;
		}
		if (!Global_100787[iVar0 /*10*/].f_6 && !Global_100787[iVar0 /*10*/].f_5)
		{
			Global_100787[iVar0 /*10*/].f_6 = 1;
		}
	}
	return 1;
}

void func_551(bool bParam0)
{
	int iVar0;
	
	func_567();
	if (!func_566())
	{
		iVar0 = func_286();
		if (iVar0 == -1)
		{
			return;
		}
		if (!Global_100787[iVar0 /*10*/].f_4)
		{
			return;
		}
		if (Global_100787[iVar0 /*10*/].f_5)
		{
			return;
		}
		if (Global_100787[iVar0 /*10*/].f_6)
		{
			return;
		}
		if (Global_85999 == Global_91528)
		{
			Global_101700.f_17533[iVar0 /*6*/].f_4++;
		}
		Global_85999 = Global_91528;
		if (bParam0)
		{
			func_245(iVar0, 1, 0);
			func_552(unk_0x6AF6B39BFDB53CB5(), iVar0);
		}
		else
		{
			if (Global_100787[iVar0 /*10*/].f_9 == -1)
			{
			}
			else
			{
				func_256(&(Global_100787[iVar0 /*10*/].f_9));
			}
			func_244(iVar0, 1, 1, 0);
		}
		Global_100787[iVar0 /*10*/].f_6 = 1;
	}
}

void func_552(char* sParam0, int iParam1)
{
	if (Global_91491 != 12)
	{
		if (func_553(sParam0, 6, iParam1))
		{
			Global_91491.f_1 = iParam1;
		}
	}
}

int func_553(char* sParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<32> Var1;
	int iVar33;
	
	func_106();
	func_565();
	Global_91491 = 0;
	StringCopy(&(Global_91491.f_3), sParam0, 32);
	Global_91491.f_11 = iParam1;
	unk_0xFEBB03103CA42EBA(1);
	unk_0x853F52F88ADE73F4(0);
	unk_0x32FDBF4A41B0698D(0);
	func_6(1);
	func_527(1);
	func_562(0);
	func_561(1);
	unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 9);
	unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 6);
	unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 20);
	unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 21);
	unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 5);
	if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
	{
		if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
		{
			if (unk_0xFD0FE723227D5AB6(unk_0x17B5CC8A8615737D(), 0))
			{
				uVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
				if (unk_0x879A5482D4D7A218(uVar0))
				{
					unk_0xEB79FECD9022AAF0(&(Global_91491.f_20), 5);
				}
			}
		}
	}
	unk_0x2E2945F5602A744F(1);
	unk_0xD12BCC85C2F8B1DE();
	func_560(0);
	func_109(1);
	Global_91491.f_2 = Global_91528;
	if (func_559())
	{
		if (func_558())
		{
			if (Global_91528 >= func_555())
			{
				if (!unk_0x48B8265059381CD0(Global_82612[iParam2 /*34*/].f_15, 16))
				{
					if (Global_101700.f_8044.f_330[iParam2 /*6*/].f_1 >= 2)
					{
						Global_86000 = 1;
					}
				}
			}
		}
		else if (Global_91491.f_11 == 6)
		{
			func_247(iParam2, &Var1);
			if (Var1.f_31 == 1)
			{
				if (Global_101700.f_17533[iParam2 /*6*/].f_4 >= 2)
				{
					Global_86000 = 1;
				}
			}
		}
		else
		{
			iVar33 = func_554(unk_0x6AF6B39BFDB53CB5());
			if (iVar33 > -1)
			{
				if (Global_101700.f_23945.f_4[iVar33] >= 2)
				{
					Global_86000 = 1;
				}
			}
		}
	}
	return 1;
}

int func_554(char* sParam0)
{
	if (unk_0x6A7B0D91FD88D9EE("BailBond1", uParam0))
	{
		return 0;
	}
	else if (unk_0x6A7B0D91FD88D9EE("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0x6A7B0D91FD88D9EE("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0x6A7B0D91FD88D9EE("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

int func_555()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_556(&(Global_91491.f_3), 0);
	iVar1 = 0;
	if (iVar0 == 53)
	{
		iVar1 = 1;
	}
	return iVar1;
}

int func_556(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x765F5B806B517045(uParam0);
	iVar1 = func_557(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_557(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_82612[iVar0 /*34*/].f_6 == iParam0)
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

int func_558()
{
	if ((((Global_91491.f_11 == 0 || Global_91491.f_11 == 1) || Global_91491.f_11 == 2) || Global_91491.f_11 == 3) || Global_91491.f_11 == 4)
	{
		return 1;
	}
	return 0;
}

int func_559()
{
	if ((((Global_91491.f_11 == 0 || Global_91491.f_11 == 1) || Global_91491.f_11 == 2) || Global_91491.f_11 == 6) || Global_91491.f_11 == 3)
	{
		return 1;
	}
	if (Global_91491.f_11 == 5)
	{
		if (func_554(&(Global_91491.f_3)) > -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_560(int iParam0)
{
	unk_0xE418A8E16B02C0AC(iParam0);
	unk_0x2D28D5B324F77D2D(iParam0);
}

void func_561(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD57128A757C0216E();
		unk_0xEB79FECD9022AAF0(&(Global_91491.f_20), 3);
	}
	else if (unk_0x48B8265059381CD0(Global_91491.f_20, 3))
	{
		unk_0x42DE1068884C3BE9();
		unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 3);
	}
}

void func_562(int iParam0)
{
	if (iParam0 == 1)
	{
		if (unk_0x48B8265059381CD0(Global_91491.f_20, 4))
		{
			func_564();
			unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 4);
		}
	}
	else
	{
		func_563();
		unk_0xEB79FECD9022AAF0(&(Global_91491.f_20), 4);
	}
}

void func_563()
{
	Global_17151.f_5 = 1;
}

void func_564()
{
	Global_17151.f_5 = 0;
}

void func_565()
{
	Global_86000 = 0;
	Global_86001 = 0;
}

int func_566()
{
	if (((Global_91491 == 13 || Global_91491 == 10) || Global_91491 == 11) || Global_91491 == 12)
	{
		return 0;
	}
	return 1;
}

void func_567()
{
	Global_91526 = 1;
	if (unk_0x5078D2C096A3D8E4(unk_0xBE369BE1BC57A796(), 1))
	{
		if (unk_0x9C88EB7B70229335(&Global_69934))
		{
			switch (func_294())
			{
				case 0:
					StringCopy(&Global_69934, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_69934, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_69934, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_69938, "", 16);
		}
		Global_91526 = 0;
	}
	else if (!unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		if (unk_0x9C88EB7B70229335(&Global_69934))
		{
			switch (func_294())
			{
				case 0:
					StringCopy(&Global_69934, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_69934, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_69934, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_69938, "", 16);
		}
		Global_91526 = 0;
		unk_0xEB79FECD9022AAF0(&(Global_91491.f_20), 25);
	}
}

void func_568(char* sParam0)
{
	if (!unk_0x9C88EB7B70229335(sParam0))
	{
	}
}

void func_569(var uParam0)
{
	func_570(&(uParam0->f_28));
	func_570(&(uParam0->f_35));
	func_570(&(uParam0->f_41));
}

void func_570(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (unk_0x23E9113C762466ED((*uParam0)[iVar0]))
		{
			unk_0xF0F77C99098F999B((*uParam0)[iVar0], 0, 1);
		}
		iVar0++;
	}
}

char* func_571()
{
	return "Al_DiNapoli";
}

int func_572(int iParam0)
{
	if (!func_237(iParam0))
	{
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

