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
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = -1;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 1000;
	var uLocal_37 = 1000;
	var uLocal_38 = 0;
	bool bLocal_39 = 0;
	bool bLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	float fLocal_50 = 0f;
	float fLocal_51 = 0f;
	float fLocal_52 = 0f;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	float fLocal_57 = 0f;
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	bool bLocal_76 = 0;
	bool bLocal_77 = 0;
	bool bLocal_78 = 0;
	bool bLocal_79 = 0;
	bool bLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	bool bLocal_83 = 0;
	bool bLocal_84 = 0;
	int iLocal_85 = 0;
	bool bLocal_86 = 0;
	bool bLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	bool bLocal_92 = 0;
	bool bLocal_93 = 0;
	bool bLocal_94 = 0;
	int iLocal_95 = 0;
	bool bLocal_96 = 0;
	var uLocal_97 = 0;
	bool bLocal_98 = 0;
	bool bLocal_99 = 0;
	bool bLocal_100 = 0;
	bool bLocal_101 = 0;
	bool bLocal_102 = 0;
	bool bLocal_103 = 0;
	bool bLocal_104 = 0;
	bool bLocal_105 = 0;
	bool bLocal_106 = 0;
	bool bLocal_107 = 0;
	float fLocal_108[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_284[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_460[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_636[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_812[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_988 = 0f;
	float fLocal_989 = 0f;
	float fLocal_990 = 0f;
	float fLocal_991 = 0f;
	float fLocal_992[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1028[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1064[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1100[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1136[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1172[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1208[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1224[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1240[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1256[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1272 = 0f;
	float fLocal_1273 = 0f;
	float fLocal_1274 = 0f;
	float fLocal_1275 = 0f;
	float fLocal_1276 = 0f;
	float fLocal_1277 = 0f;
	float fLocal_1278 = 0f;
	float fLocal_1279 = 0f;
	float fLocal_1280 = 0f;
	float fLocal_1281 = 0f;
	float fLocal_1282 = 0f;
	float fLocal_1283 = 0f;
	float fLocal_1284 = 0f;
	float fLocal_1285 = 0f;
	float fLocal_1286 = 0f;
	float fLocal_1287 = 0f;
	float fLocal_1288 = 0f;
	float fLocal_1289 = 0f;
	float fLocal_1290 = 0f;
	float fLocal_1291 = 0f;
	float fLocal_1292 = 0f;
	int iLocal_1293[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1469[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1645[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1821[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1857[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1893[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1929[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1945 = 0;
	int iLocal_1946 = 0;
	int iLocal_1947 = 0;
	int iLocal_1948 = 0;
	int iLocal_1949 = 0;
	int iLocal_1950 = 0;
	int iLocal_1951 = 0;
	int iLocal_1952 = 0;
	int iLocal_1953 = 0;
	int iLocal_1954 = 0;
	int iLocal_1955 = 0;
	int iLocal_1956 = 0;
	int iLocal_1957 = 0;
	int iLocal_1958 = 0;
	int iLocal_1959 = 0;
	int iLocal_1960 = 0;
	int iLocal_1961 = 0;
	struct<3> Local_1962[175];
	struct<3> Local_2488[15];
	struct<3> Local_2534[35];
	struct<3> Local_2640 = { 0, 0, 0 } ;
	struct<3> Local_2643 = { 0, 0, 0 } ;
	struct<3> Local_2646 = { 0, 0, 0 } ;
	struct<3> Local_2649 = { 0, 0, 0 } ;
	struct<3> Local_2652 = { 0, 0, 0 } ;
	struct<3> Local_2655 = { 0, 0, 0 } ;
	struct<3> Local_2658 = { 0, 0, 0 } ;
	struct<3> Local_2661 = { 0, 0, 0 } ;
	struct<3> Local_2664 = { 0, 0, 0 } ;
	char cLocal_2667[64] = "";
	var uLocal_2675 = 0;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	int iLocal_2683 = 0;
	int iLocal_2684[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2860[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2876[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2912 = 0;
	int iLocal_2913 = 0;
	int iLocal_2914 = 0;
	int iLocal_2915[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3091[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3104[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3120[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3156[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_3163 = 0;
	int iLocal_3164 = 0;
	int iLocal_3165 = 0;
	var uLocal_3166 = 12;
	var uLocal_3167 = 0;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 0;
	var uLocal_3171 = 0;
	var uLocal_3172 = 0;
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
	var uLocal_3175 = 0;
	var uLocal_3176 = 0;
	var uLocal_3177 = 0;
	var uLocal_3178 = 0;
	int iLocal_3179 = 0;
	int iLocal_3180 = 0;
	int iLocal_3181 = 0;
	int iLocal_3182 = 0;
	var uLocal_3183 = 0;
	int iLocal_3184 = 0;
	int iLocal_3185 = 0;
	int iLocal_3186 = 0;
	int iLocal_3187 = 0;
	int iLocal_3188 = 0;
	int iLocal_3189 = 0;
	int iLocal_3190 = 0;
	int iLocal_3191 = 0;
	int iLocal_3192 = 0;
	int iLocal_3193 = 0;
	int iLocal_3194 = 0;
	int iLocal_3195 = 0;
	int iLocal_3196 = 0;
	int iLocal_3197 = 0;
	int iLocal_3198 = 0;
	int iLocal_3199 = 0;
	int iLocal_3200 = 0;
	int iLocal_3201 = 0;
	int iLocal_3202 = 0;
	int iLocal_3203 = 0;
	int iLocal_3204 = 0;
	int iLocal_3205 = 0;
	int iLocal_3206 = 0;
	var uLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 0;
	int iLocal_3210 = 0;
	int iLocal_3211 = 0;
	int iLocal_3212 = 0;
	int iLocal_3213 = 0;
	int iLocal_3214 = 0;
	int iLocal_3215 = 0;
	int iLocal_3216 = 0;
	int iLocal_3217 = 0;
	int iLocal_3218 = 0;
	int iLocal_3219 = 0;
	var uLocal_3220 = 0;
	int iLocal_3221 = 0;
	int iLocal_3222[4] = { 0, 0, 0, 0 };
	int iLocal_3227 = 0;
	var uLocal_3228[3] = { 0, 0, 0 };
	int iLocal_3232[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3244 = 0;
	int iLocal_3245 = 0;
	int iLocal_3246 = 0;
	int iLocal_3247 = 0;
	int iLocal_3248 = 0;
	int iLocal_3249 = 0;
	int iLocal_3250[2] = { 0, 0 };
	int iLocal_3253[2] = { 0, 0 };
	int iLocal_3256 = 0;
	int iLocal_3257 = 0;
	int iLocal_3258 = 0;
	int iLocal_3259[2] = { 0, 0 };
	int iLocal_3262 = 0;
	int iLocal_3263 = 0;
	int iLocal_3264 = 0;
	int iLocal_3265 = 0;
	int iLocal_3266 = 0;
	int iLocal_3267[2] = { 0, 0 };
	int iLocal_3270 = 0;
	int iLocal_3271[2] = { 0, 0 };
	int iLocal_3274 = 0;
	int iLocal_3275 = 0;
	int iLocal_3276 = 0;
	int iLocal_3277 = 0;
	int iLocal_3278[2] = { 0, 0 };
	int iLocal_3281 = 0;
	int iLocal_3282 = 0;
	int iLocal_3283 = 0;
	var uLocal_3284 = 0;
	var uLocal_3285 = 0;
	var uLocal_3286 = 0;
	var uLocal_3287 = 0;
	var uLocal_3288 = 0;
	var uLocal_3289 = 0;
	var uLocal_3290 = 0;
	var uLocal_3291 = 0;
	var uLocal_3292 = 0;
	struct<3> Local_3293 = { 0, 0, 0 } ;
	struct<3> Local_3296 = { 0, 0, 0 } ;
	struct<3> Local_3299 = { 0, 0, 0 } ;
	struct<3> Local_3302 = { 0, 0, 0 } ;
	var uLocal_3305 = 0;
	var uLocal_3306 = 0;
	var uLocal_3307 = 0;
	var uLocal_3308 = 0;
	var uLocal_3309 = 0;
	var uLocal_3310 = 0;
	struct<3> Local_3311 = { 0, 0, 0 } ;
	struct<3> Local_3314 = { 0, 0, 0 } ;
	struct<3> Local_3317 = { 0, 0, 0 } ;
	float fLocal_3320 = 0f;
	float fLocal_3321 = 0f;
	float fLocal_3322 = 0f;
	float fLocal_3323 = 0f;
	float fLocal_3324 = 0f;
	float fLocal_3325 = 0f;
	int iLocal_3326 = 0;
	int iLocal_3327 = 0;
	var uLocal_3328 = 0;
	int iLocal_3329 = 0;
	int iLocal_3330 = 0;
	int iLocal_3331 = 0;
	int iLocal_3332 = 0;
	int iLocal_3333 = 0;
	int iLocal_3334 = 0;
	int iLocal_3335 = 0;
	int iLocal_3336 = 0;
	int iLocal_3337 = 0;
	int iLocal_3338 = 0;
	int iLocal_3339 = 0;
	int iLocal_3340 = 0;
	int iLocal_3341 = 0;
	int iLocal_3342 = 0;
	int iLocal_3343 = 0;
	int iLocal_3344 = 0;
	int iLocal_3345 = 0;
	int iLocal_3346 = 0;
	int iLocal_3347 = 0;
	int iLocal_3348 = 0;
	int iLocal_3349 = 0;
	int iLocal_3350 = 0;
	int iLocal_3351 = 0;
	int iLocal_3352 = 0;
	int iLocal_3353 = 0;
	int iLocal_3354 = 0;
	int iLocal_3355 = 0;
	int iLocal_3356 = 0;
	int iLocal_3357 = 0;
	int iLocal_3358 = 0;
	int iLocal_3359 = 0;
	int iLocal_3360 = 0;
	int iLocal_3361 = 0;
	int iLocal_3362 = 0;
	int iLocal_3363 = 0;
	int iLocal_3364[3] = { 0, 0, 0 };
	int iLocal_3368[2] = { 0, 0 };
	int iLocal_3371 = 0;
	int iLocal_3372 = 0;
	int iLocal_3373 = 0;
	int iLocal_3374 = 0;
	int iLocal_3375 = 0;
	int iLocal_3376 = 0;
	int iLocal_3377 = 0;
	int iLocal_3378 = 0;
	int iLocal_3379 = 0;
	int iLocal_3380 = 0;
	int iLocal_3381 = 0;
	int iLocal_3382 = 0;
	int iLocal_3383 = 0;
	int iLocal_3384 = 0;
	int iLocal_3385 = 0;
	int iLocal_3386 = 0;
	int iLocal_3387 = 0;
	int iLocal_3388 = 0;
	int iLocal_3389 = 0;
	int iLocal_3390 = 0;
	int iLocal_3391 = 0;
	int iLocal_3392 = 0;
	int iLocal_3393 = 0;
	int iLocal_3394 = 0;
	int iLocal_3395 = 0;
	int iLocal_3396 = 0;
	int iLocal_3397 = 0;
	int iLocal_3398 = 0;
	var uLocal_3399 = 0;
	int iLocal_3400 = 0;
	int iLocal_3401 = 0;
	int iLocal_3402 = 0;
	int iLocal_3403[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3429 = 0;
	int iLocal_3430 = 0;
	int iLocal_3431 = 0;
	int iLocal_3432 = 0;
	int iLocal_3433 = 0;
	int iLocal_3434 = 0;
	int iLocal_3435 = 0;
	int iLocal_3436 = 0;
	int iLocal_3437 = 0;
	int iLocal_3438 = 0;
	int iLocal_3439 = 0;
	int iLocal_3440 = 0;
	int iLocal_3441 = 0;
	int iLocal_3442 = 0;
	int iLocal_3443 = 0;
	int iLocal_3444[19] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3464 = 0;
	int iLocal_3465 = 0;
	int iLocal_3466 = 0;
	int iLocal_3467 = 0;
	int iLocal_3468 = 0;
	int iLocal_3469 = 0;
	int iLocal_3470 = 0;
	int iLocal_3471 = 0;
	int iLocal_3472 = 0;
	int iLocal_3473 = 0;
	int iLocal_3474 = 0;
	int iLocal_3475 = 0;
	int iLocal_3476 = 0;
	int iLocal_3477 = 0;
	int iLocal_3478 = 0;
	int iLocal_3479[2] = { 0, 0 };
	int iLocal_3482[2] = { 0, 0 };
	int iLocal_3485 = 0;
	int iLocal_3486 = 0;
	int iLocal_3487 = 0;
	int iLocal_3488 = 0;
	int iLocal_3489[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3497[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3505 = 0;
	int iLocal_3506 = 0;
	int iLocal_3507 = 0;
	int iLocal_3508 = 0;
	int iLocal_3509 = 0;
	int iLocal_3510 = 0;
	int iLocal_3511 = 0;
	int iLocal_3512 = 0;
	int iLocal_3513 = 0;
	int iLocal_3514 = 0;
	int iLocal_3515[3] = { 0, 0, 0 };
	int iLocal_3519[2] = { 0, 0 };
	int iLocal_3522 = 0;
	int iLocal_3523[4] = { 0, 0, 0, 0 };
	int iLocal_3528 = 0;
	int iLocal_3529 = 0;
	int iLocal_3530 = 0;
	int iLocal_3531 = 0;
	int iLocal_3532 = 0;
	int iLocal_3533 = 0;
	int iLocal_3534 = 0;
	int iLocal_3535 = 0;
	int iLocal_3536 = 0;
	int iLocal_3537 = 0;
	int iLocal_3538 = 0;
	int iLocal_3539 = 0;
	int iLocal_3540 = 0;
	int iLocal_3541 = 0;
	int iLocal_3542[3] = { 0, 0, 0 };
	int iLocal_3546[3] = { 0, 0, 0 };
	int iLocal_3550 = 0;
	int iLocal_3551 = 0;
	int iLocal_3552 = 0;
	int iLocal_3553 = 0;
	int iLocal_3554 = 0;
	int iLocal_3555 = 0;
	int iLocal_3556 = 0;
	int iLocal_3557 = 0;
	int iLocal_3558 = 0;
	int iLocal_3559 = 0;
	int iLocal_3560 = 0;
	int iLocal_3561 = 0;
	int iLocal_3562 = 0;
	int iLocal_3563 = 0;
	int iLocal_3564 = 0;
	int iLocal_3565 = 0;
	int iLocal_3566 = 0;
	int iLocal_3567 = 0;
	int iLocal_3568 = 0;
	int iLocal_3569 = 0;
	int iLocal_3570[4] = { 0, 0, 0, 0 };
	int iLocal_3575 = 0;
	char* sLocal_3576 = NULL;
	var uLocal_3577 = 16;
	var uLocal_3578 = 0;
	var uLocal_3579 = 0;
	var uLocal_3580 = 0;
	var uLocal_3581 = 0;
	var uLocal_3582 = 0;
	var uLocal_3583 = 0;
	var uLocal_3584 = 0;
	var uLocal_3585 = 0;
	var uLocal_3586 = 0;
	var uLocal_3587 = 0;
	var uLocal_3588 = 0;
	var uLocal_3589 = 0;
	var uLocal_3590 = 0;
	var uLocal_3591 = 0;
	var uLocal_3592 = 0;
	var uLocal_3593 = 0;
	var uLocal_3594 = 0;
	var uLocal_3595 = 0;
	var uLocal_3596 = 0;
	var uLocal_3597 = 0;
	var uLocal_3598 = 0;
	var uLocal_3599 = 0;
	var uLocal_3600 = 0;
	var uLocal_3601 = 0;
	var uLocal_3602 = 0;
	var uLocal_3603 = 0;
	var uLocal_3604 = 0;
	var uLocal_3605 = 0;
	var uLocal_3606 = 0;
	var uLocal_3607 = 0;
	var uLocal_3608 = 0;
	var uLocal_3609 = 0;
	var uLocal_3610 = 0;
	var uLocal_3611 = 0;
	var uLocal_3612 = 0;
	var uLocal_3613 = 0;
	var uLocal_3614 = 0;
	var uLocal_3615 = 0;
	var uLocal_3616 = 0;
	var uLocal_3617 = 0;
	var uLocal_3618 = 0;
	var uLocal_3619 = 0;
	var uLocal_3620 = 0;
	var uLocal_3621 = 0;
	var uLocal_3622 = 0;
	var uLocal_3623 = 0;
	var uLocal_3624 = 0;
	var uLocal_3625 = 0;
	var uLocal_3626 = 0;
	var uLocal_3627 = 0;
	var uLocal_3628 = 0;
	var uLocal_3629 = 0;
	var uLocal_3630 = 0;
	var uLocal_3631 = 0;
	var uLocal_3632 = 0;
	var uLocal_3633 = 0;
	var uLocal_3634 = 0;
	var uLocal_3635 = 0;
	var uLocal_3636 = 0;
	var uLocal_3637 = 0;
	var uLocal_3638 = 0;
	var uLocal_3639 = 0;
	var uLocal_3640 = 0;
	var uLocal_3641 = 0;
	var uLocal_3642 = 0;
	var uLocal_3643 = 0;
	var uLocal_3644 = 0;
	var uLocal_3645 = 0;
	var uLocal_3646 = 0;
	var uLocal_3647 = 0;
	var uLocal_3648 = 0;
	var uLocal_3649 = 0;
	var uLocal_3650 = 0;
	var uLocal_3651 = 0;
	var uLocal_3652 = 0;
	var uLocal_3653 = 0;
	var uLocal_3654 = 0;
	var uLocal_3655 = 0;
	var uLocal_3656 = 0;
	var uLocal_3657 = 0;
	var uLocal_3658 = 0;
	var uLocal_3659 = 0;
	var uLocal_3660 = 0;
	var uLocal_3661 = 0;
	var uLocal_3662 = 0;
	var uLocal_3663 = 0;
	var uLocal_3664 = 0;
	var uLocal_3665 = 0;
	var uLocal_3666 = 0;
	var uLocal_3667 = 0;
	var uLocal_3668 = 0;
	var uLocal_3669 = 0;
	var uLocal_3670 = 0;
	var uLocal_3671 = 0;
	var uLocal_3672 = 0;
	var uLocal_3673 = 0;
	var uLocal_3674 = 0;
	var uLocal_3675 = 0;
	var uLocal_3676 = 0;
	var uLocal_3677 = 0;
	var uLocal_3678 = 0;
	var uLocal_3679 = 0;
	var uLocal_3680 = 0;
	var uLocal_3681 = 0;
	var uLocal_3682 = 0;
	var uLocal_3683 = 0;
	var uLocal_3684 = 0;
	var uLocal_3685 = 0;
	var uLocal_3686 = 0;
	var uLocal_3687 = 0;
	var uLocal_3688 = 0;
	var uLocal_3689 = 0;
	var uLocal_3690 = 0;
	var uLocal_3691 = 0;
	var uLocal_3692 = 0;
	var uLocal_3693 = 0;
	var uLocal_3694 = 0;
	var uLocal_3695 = 0;
	var uLocal_3696 = 0;
	var uLocal_3697 = 0;
	var uLocal_3698 = 0;
	var uLocal_3699 = 0;
	var uLocal_3700 = 0;
	var uLocal_3701 = 0;
	var uLocal_3702 = 0;
	var uLocal_3703 = 0;
	var uLocal_3704 = 0;
	var uLocal_3705 = 0;
	var uLocal_3706 = 0;
	var uLocal_3707 = 0;
	var uLocal_3708 = 0;
	var uLocal_3709 = 0;
	var uLocal_3710 = 0;
	var uLocal_3711 = 0;
	var uLocal_3712 = 0;
	var uLocal_3713 = 0;
	var uLocal_3714 = 0;
	var uLocal_3715 = 0;
	var uLocal_3716 = 0;
	var uLocal_3717 = 0;
	var uLocal_3718 = 0;
	var uLocal_3719 = 0;
	var uLocal_3720 = 0;
	var uLocal_3721 = 0;
	var uLocal_3722 = 0;
	var uLocal_3723 = 0;
	var uLocal_3724 = 0;
	var uLocal_3725 = 0;
	var uLocal_3726 = 0;
	var uLocal_3727 = 0;
	var uLocal_3728 = 0;
	var uLocal_3729 = 0;
	var uLocal_3730 = 0;
	var uLocal_3731 = 0;
	var uLocal_3732 = 0;
	var uLocal_3733 = 0;
	var uLocal_3734 = 0;
	var uLocal_3735 = 0;
	var uLocal_3736 = 0;
	var uLocal_3737 = 0;
	var uLocal_3738 = 0;
	var uLocal_3739 = 0;
	var uLocal_3740 = 0;
	var uLocal_3741 = 0;
	var uLocal_3742 = 0;
	var uLocal_3743 = 0;
	var uLocal_3744 = 0;
	var uLocal_3745 = 0;
	var uLocal_3746 = 0;
	var uLocal_3747 = 0;
	var uLocal_3748 = 0;
	var uLocal_3749 = 21;
	var uLocal_3750 = 6;
	var uLocal_3751 = 0;
	var uLocal_3752 = 0;
	var uLocal_3753 = 0;
	var uLocal_3754[3] = { 0, 0, 0 };
	var uLocal_3758 = 0;
	var uLocal_3759 = 0;
	var uLocal_3760 = 0;
	var uLocal_3761 = 0;
	var uLocal_3762 = 0;
	var uLocal_3763 = 0;
#endregion

void __EntryFunction__()
{
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_54 = 3;
	fLocal_57 = 80f;
	fLocal_58 = 140f;
	fLocal_59 = 180f;
	iLocal_65 = 1;
	iLocal_66 = 65;
	iLocal_67 = 49;
	iLocal_68 = 64;
	uLocal_72 = unk_0xE30164C14FFD22B6();
	uLocal_73 = unk_0xE1ABDD92C442B1EE();
	bLocal_77 = true;
	bLocal_84 = true;
	bLocal_106 = true;
	fLocal_1272 = 120f;
	fLocal_1273 = 0f;
	fLocal_1275 = 1f;
	fLocal_1276 = 0f;
	fLocal_1277 = 1f;
	fLocal_1278 = 30f;
	fLocal_1280 = 1f;
	fLocal_1281 = 5f;
	fLocal_1282 = 1f;
	fLocal_1283 = 1f;
	fLocal_1284 = 100f;
	fLocal_1285 = 100f;
	fLocal_1286 = 0f;
	fLocal_1287 = 7000f;
	fLocal_1288 = 0f;
	fLocal_1289 = 0f;
	fLocal_1290 = 0.3f;
	fLocal_1291 = 0.5f;
	fLocal_1292 = 50f;
	iLocal_1948 = -1;
	iLocal_1956 = -1;
	iLocal_1957 = -1;
	Local_3293 = { -1024.1f, -485.3321f, 35.9816f };
	Local_3296 = { -428.0263f, -2153.577f, 9.2997f };
	Local_3299 = { -498.7f, -2136.5f, 8.4f };
	Local_3311 = { -272.8615f, -2186.932f, 9.3174f };
	fLocal_3320 = 209.7233f;
	fLocal_3321 = 90.947f;
	fLocal_3324 = 46.7161f;
	if (func_390(0))
	{
		func_383(24, 0);
	}
	unk_0x342437AFD16ED2D2(0);
	unk_0x396F0C76E11511A8("EXTRASUNNY", 20f);
	if (unk_0x8D841F1DD3FA555F(3))
	{
		func_381(unk_0x81873881071CD9FE(), 0);
		unk_0x80650551CC58C784("TRV4_FAIL");
		func_379();
		func_377();
	}
	func_376(1);
	unk_0xAE2A9FD3EEF99954(1);
	iLocal_3180 = 0;
	iLocal_3179 = 0;
	while (true)
	{
		unk_0x36137B7A77318822("M_LegalTrouble", 0);
		if (iLocal_3206 > unk_0x48E480685981C7D4())
		{
			unk_0x37B8363C1453E921();
		}
		func_372();
		func_371();
		func_369();
		func_365();
		func_364();
		switch (iLocal_3179)
		{
			case 0:
				func_360();
				break;
			
			case 1:
				func_315();
				break;
			
			case 2:
				func_309();
				break;
			
			case 3:
				func_306();
				break;
			
			case 4:
				func_217();
				break;
			
			case 5:
				func_205();
				break;
			
			case 6:
				func_199();
				break;
			
			case 7:
				func_190();
				break;
			
			case 8:
				func_5();
				break;
			
			case 9:
				break;
			
			case 10:
				break;
			
			case 11:
				break;
		}
		unk_0x4EDE34FBADD967A6(0);
		func_1();
	}
}

void func_1()
{
	if (iLocal_3442 == 0)
	{
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			func_4(unk_0x81873881071CD9FE(), 476);
			iLocal_3442 = 1;
		}
	}
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			if (iLocal_3443 == 0)
			{
				iLocal_3274 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
				if (unk_0x86CCCD2FAE9D5E65(iLocal_3274))
				{
					if (unk_0x7404950238A154C2(iLocal_3274, 0))
					{
						func_3(iLocal_3274, -1);
						func_4(iLocal_3274, 479);
						iLocal_3443 = 1;
					}
				}
			}
		}
		else
		{
			func_4(0, 479);
			func_3(0, -1);
			if (iLocal_3443 == 1)
			{
				iLocal_3443 = 0;
			}
		}
	}
	if (iLocal_3444[0] == 0)
	{
		if (unk_0x86CCCD2FAE9D5E65(uLocal_3228[0]))
		{
			if (unk_0x5FEB513A4402FD59(uLocal_3228[0]))
			{
				iLocal_3190++;
				iLocal_3444[0] = 1;
			}
		}
	}
	if (iLocal_3444[1] == 0)
	{
		if (unk_0x86CCCD2FAE9D5E65(uLocal_3228[1]))
		{
			if (unk_0x5FEB513A4402FD59(uLocal_3228[1]))
			{
				iLocal_3190++;
				iLocal_3444[1] = 1;
			}
		}
	}
	if (iLocal_3444[2] == 0)
	{
		if (unk_0x86CCCD2FAE9D5E65(uLocal_3228[2]))
		{
			if (unk_0x5FEB513A4402FD59(uLocal_3228[2]))
			{
				iLocal_3190++;
				iLocal_3444[2] = 1;
			}
		}
	}
	if (iLocal_3444[3] == 0)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[0]))
		{
			if (unk_0x5FEB513A4402FD59(iLocal_3232[0]))
			{
				iLocal_3190++;
				iLocal_3444[3] = 1;
			}
		}
	}
	if (iLocal_3444[4] == 0)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[1]))
		{
			if (unk_0x5FEB513A4402FD59(iLocal_3232[1]))
			{
				iLocal_3190++;
				iLocal_3444[4] = 1;
			}
		}
	}
	if (iLocal_3444[5] == 0)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[2]))
		{
			if (unk_0x5FEB513A4402FD59(iLocal_3232[2]))
			{
				iLocal_3190++;
				iLocal_3444[5] = 1;
			}
		}
	}
	if (iLocal_3444[6] == 0)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[3]))
		{
			if (unk_0x5FEB513A4402FD59(iLocal_3232[3]))
			{
				iLocal_3190++;
				iLocal_3444[6] = 1;
			}
		}
	}
	if (iLocal_3444[7] == 0)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[4]))
		{
			if (unk_0x5FEB513A4402FD59(iLocal_3232[4]))
			{
				iLocal_3190++;
				iLocal_3444[7] = 1;
			}
		}
	}
	if (iLocal_3444[8] == 0)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[5]))
		{
			if (unk_0x5FEB513A4402FD59(iLocal_3232[5]))
			{
				iLocal_3190++;
				iLocal_3444[8] = 1;
			}
		}
	}
	if (iLocal_3444[9] == 0)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[6]))
		{
			if (unk_0x5FEB513A4402FD59(iLocal_3232[6]))
			{
				iLocal_3190++;
				iLocal_3444[9] = 1;
			}
		}
	}
	if (iLocal_3444[10] == 0)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[7]))
		{
			if (unk_0x5FEB513A4402FD59(iLocal_3232[7]))
			{
				iLocal_3190++;
				iLocal_3444[10] = 1;
			}
		}
	}
	if (iLocal_3444[11] == 0)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[8]))
		{
			if (unk_0x5FEB513A4402FD59(iLocal_3232[8]))
			{
				iLocal_3190++;
				iLocal_3444[11] = 1;
			}
		}
	}
	if (iLocal_3444[12] == 0)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[9]))
		{
			if (unk_0x5FEB513A4402FD59(iLocal_3232[9]))
			{
				iLocal_3190++;
				iLocal_3444[12] = 1;
			}
		}
	}
	if (iLocal_3444[13] == 0)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[10]))
		{
			if (unk_0x5FEB513A4402FD59(iLocal_3232[10]))
			{
				iLocal_3190++;
				iLocal_3444[13] = 1;
			}
		}
	}
	if (iLocal_3444[14] == 0)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3247))
		{
			if (unk_0x5FEB513A4402FD59(iLocal_3247))
			{
				iLocal_3190++;
				iLocal_3444[14] = 1;
			}
		}
	}
	if (iLocal_3444[15] == 0)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3248))
		{
			if (unk_0x5FEB513A4402FD59(iLocal_3248))
			{
				iLocal_3190++;
				iLocal_3444[15] = 1;
			}
		}
	}
	if (iLocal_3444[16] == 0)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3249))
		{
			if (unk_0x5FEB513A4402FD59(iLocal_3249))
			{
				iLocal_3190++;
				iLocal_3444[16] = 1;
			}
		}
	}
	if (iLocal_3444[17] == 0)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3250[0]))
		{
			if (unk_0x5FEB513A4402FD59(iLocal_3250[0]))
			{
				iLocal_3190++;
				iLocal_3444[17] = 1;
			}
		}
	}
	if (iLocal_3179 == 8)
	{
		if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) != 0)
		{
			if (iLocal_3464 == 0)
			{
				func_2(482, 0);
				iLocal_3464 = 1;
			}
		}
	}
}

void func_2(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_55412 = iParam0;
	if (!Global_55410)
	{
		Global_55410 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67497)
		{
			if (Global_67498[iVar0 /*9*/] == iParam0)
			{
				Global_67498[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_3(int iParam0, int iParam1)
{
	Global_55413 = iParam0;
	Global_55414 = iParam1;
}

void func_4(int iParam0, int iParam1)
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

void func_5()
{
	if (unk_0x29AFA2493D7C23D0())
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3266))
		{
			unk_0x4DBA43D6DE677017(iLocal_3266, 0, 0, 1);
		}
	}
	if (iLocal_3180 > 0)
	{
		func_188();
	}
	if (iLocal_3180 == 0)
	{
		if (iLocal_3344 == 1)
		{
			func_104();
			iLocal_3344 = 0;
		}
		func_25(3, "STAGE_EVADE_POLICE", 1, 0, 0, 1);
		iLocal_3373 = 0;
		iLocal_3374 = 0;
		iLocal_3375 = 0;
		iLocal_3345 = 0;
		iLocal_3346 = 0;
		iLocal_3347 = 0;
		iLocal_3429 = 0;
		iLocal_3430 = 0;
		iLocal_3431 = 0;
		iLocal_3468 = 0;
		iLocal_3469 = 0;
		iLocal_3473 = 0;
		iLocal_3476 = 0;
		iLocal_3184 = 0;
		unk_0x295DC04FC13E025B("Misssolomon_3");
		unk_0x32A12757CBF48A33(joaat("oracle2"));
		unk_0x32A12757CBF48A33(joaat("baller2"));
		if (unk_0xFBACB273AA628CC5(uLocal_3284))
		{
			unk_0x0A8175F24237A3D4(&uLocal_3284);
		}
		if (unk_0x0F7866B4F5BE7CD4("Trev4_5"))
		{
			unk_0x228E7FCA637CBD19("Trev4_5", 0, 1f, 1f);
			unk_0x010ACF5A865CA942("Trev4_5");
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3258))
		{
			unk_0xE0913C01F5C0CC3D(&iLocal_3258);
		}
		unk_0xC1B1E9A034A63A62(0);
		if (unk_0x29AFA2493D7C23D0())
		{
			if (!func_24())
			{
				unk_0xBCFD171E27A90624(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1));
			}
			func_21(0, -1, 1);
		}
		if (!unk_0xECDEA377354CBDA4())
		{
			unk_0xAE2B1C30F8A0B67C(800);
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3227))
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_3227))
			{
				unk_0x33B1E568CEF14B0D(iLocal_3227, 1);
				unk_0x1D15D99A10A15334(iLocal_3227, 0);
			}
		}
		unk_0x80650551CC58C784("TRV4_LOSE_COPS");
		if (!unk_0x12F24A1A22BF90A7("SOL_3_LOSE_COPS"))
		{
			unk_0xF2A6D4C99549CA85("SOL_3_LOSE_COPS");
		}
		unk_0xD1C83BD797927DD5();
		func_20("TRV4_END1", 7500, 1);
		if (unk_0x12F24A1A22BF90A7("SOL_3_ENGINE_DEATH_SCENE"))
		{
			unk_0x0C22E352114F699C("SOL_3_ENGINE_DEATH_SCENE");
		}
		if (func_19(2))
		{
			func_18(2, 0);
		}
		uLocal_3220 = unk_0x5BF7BCF26E3E564B(-948.4f, -2992.6f, 13.3f, 6f, 5f, 4f, 60f, 0, 7);
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3265))
		{
			if (unk_0x7404950238A154C2(iLocal_3265, 0))
			{
				unk_0xB61003DE06C879FC(iLocal_3265, 0);
			}
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3266))
		{
			if (unk_0x7404950238A154C2(iLocal_3266, 0))
			{
				unk_0xB61003DE06C879FC(iLocal_3266, 0);
			}
		}
		unk_0x9BAE0FF806E5C2E5(5);
		unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 3, 0);
		unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 0);
		func_17(&uLocal_3577, 0, unk_0x81873881071CD9FE(), "MICHAEL", 0, 1);
		unk_0x59BBCA8743D045AE("PoliceScannerDisabled", 0);
		iLocal_3180 = 1;
	}
	if (iLocal_3180 == 1)
	{
		if (iLocal_3468 == 0)
		{
			if (!unk_0x86CCCD2FAE9D5E65(iLocal_3278[0]))
			{
				if (unk_0x33ACB874CECA2D4B(joaat("oracle2")))
				{
					iLocal_3278[0] = unk_0xE00F8DEA9778FC87(joaat("oracle2"), -1025.596f, -2869.237f, 12.9585f, 241.0686f, 1, 1);
					unk_0x3B7AFF7DCE22C1CF(iLocal_3278[0], 1);
					unk_0x5CC9D6711FE01F0D(iLocal_3278[0]);
					unk_0x887F4488DA99FD21(joaat("oracle2"));
					iLocal_3468 = 1;
				}
			}
		}
		if (iLocal_3469 == 0)
		{
			if (!unk_0x86CCCD2FAE9D5E65(iLocal_3278[1]))
			{
				if (unk_0x33ACB874CECA2D4B(joaat("baller2")))
				{
					iLocal_3278[1] = unk_0xE00F8DEA9778FC87(joaat("baller2"), -971.4223f, -2903.354f, 12.9652f, 61.0213f, 1, 1);
					unk_0x3B7AFF7DCE22C1CF(iLocal_3278[1], 1);
					unk_0x5CC9D6711FE01F0D(iLocal_3278[1]);
					unk_0x887F4488DA99FD21(joaat("baller2"));
					iLocal_3469 = 1;
				}
			}
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3278[0]))
		{
			if (unk_0x7404950238A154C2(iLocal_3278[0], 0))
			{
				if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_3278[0], 0))
				{
					if (!unk_0x12F24A1A22BF90A7("SOL_3_LOSE_COPS_VEHICLE"))
					{
						unk_0xF2A6D4C99549CA85("SOL_3_LOSE_COPS_VEHICLE");
					}
				}
			}
			if (func_16(unk_0x81873881071CD9FE(), iLocal_3278[0], 1) > 200f || unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_3278[0], 0))
			{
				unk_0xE0913C01F5C0CC3D(&(iLocal_3278[0]));
			}
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3278[1]))
		{
			if (unk_0x7404950238A154C2(iLocal_3278[1], 0))
			{
				if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_3278[1], 0))
				{
					if (!unk_0x12F24A1A22BF90A7("SOL_3_LOSE_COPS_VEHICLE"))
					{
						unk_0xF2A6D4C99549CA85("SOL_3_LOSE_COPS_VEHICLE");
					}
				}
			}
			if (func_16(unk_0x81873881071CD9FE(), iLocal_3278[1], 1) > 200f || unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_3278[1], 0))
			{
				unk_0xE0913C01F5C0CC3D(&(iLocal_3278[1]));
			}
		}
		if (iLocal_3429 == 0)
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_3232[0]))
			{
				func_14(iLocal_3232[0], "SURROUNDED", 24);
				iLocal_3429 = 1;
			}
		}
		if (iLocal_3373 == 0)
		{
			if (unk_0x83666F9FB8FEBD4B() > 8000)
			{
				if (unk_0x7404950238A154C2(iLocal_3267[0], 0))
				{
					unk_0xC8F62804B10A6701(iLocal_3267[0], 68, "BB_Chase", 1);
					unk_0xDB6B77B2A908C5F3(iLocal_3267[0], 0f, 0f, 0.15f);
				}
				if (unk_0x7404950238A154C2(iLocal_3267[1], 0))
				{
					unk_0xC8F62804B10A6701(iLocal_3267[1], 69, "BB_Chase", 1);
					unk_0xDB6B77B2A908C5F3(iLocal_3267[1], 0f, 0f, 0.15f);
				}
				iLocal_3373 = 1;
			}
		}
		else
		{
			if (unk_0x7404950238A154C2(iLocal_3267[0], 0))
			{
				if (unk_0xE20321A2D7F8960C(iLocal_3267[0]))
				{
					if (unk_0x678BA9CA7610A13E(iLocal_3267[0]) > 5000f)
					{
						if (unk_0x01C5771BE1D8ECE5(iLocal_3267[0]))
						{
							unk_0x05ACEF4F060B9B4E(iLocal_3267[0]);
						}
					}
				}
				else if (iLocal_3374 == 0)
				{
					if (!unk_0x5FEB513A4402FD59(iLocal_3232[6]))
					{
						unk_0x1D15D99A10A15334(iLocal_3232[6], 0);
					}
					if (!unk_0x5FEB513A4402FD59(iLocal_3232[7]))
					{
						unk_0x1D15D99A10A15334(iLocal_3232[7], 0);
					}
					iLocal_3374 = 1;
				}
			}
			if (unk_0x7404950238A154C2(iLocal_3267[1], 0))
			{
				if (unk_0xE20321A2D7F8960C(iLocal_3267[1]))
				{
					if (unk_0x678BA9CA7610A13E(iLocal_3267[1]) > 5000f)
					{
						if (unk_0x01C5771BE1D8ECE5(iLocal_3267[1]))
						{
							unk_0x05ACEF4F060B9B4E(iLocal_3267[1]);
						}
					}
				}
				else if (iLocal_3375 == 0)
				{
					if (!unk_0x5FEB513A4402FD59(iLocal_3232[8]))
					{
						unk_0x1D15D99A10A15334(iLocal_3232[8], 0);
					}
					if (!unk_0x5FEB513A4402FD59(iLocal_3232[9]))
					{
						unk_0x1D15D99A10A15334(iLocal_3232[9], 0);
					}
					iLocal_3375 = 1;
				}
			}
		}
		func_12();
		if (iLocal_3473 == 0)
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_3266))
			{
				if (unk_0x7404950238A154C2(iLocal_3266, 0))
				{
					if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_3266, 0))
					{
						unk_0x80650551CC58C784("TRV4_JET_ENTERED");
						if (!unk_0x12F24A1A22BF90A7("SOL_3_LOSE_COPS_PLANE"))
						{
							unk_0xF2A6D4C99549CA85("SOL_3_LOSE_COPS_PLANE");
						}
						unk_0x2CEC5A597B1DFFE1(4f, 15f, 4);
						unk_0xE0913C01F5C0CC3D(&iLocal_3266);
						iLocal_3473 = 1;
					}
					else if (func_16(unk_0x81873881071CD9FE(), iLocal_3266, 1) > 200f)
					{
						unk_0xE0913C01F5C0CC3D(&iLocal_3266);
					}
				}
			}
		}
		if (iLocal_3473 == 1)
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_3266))
			{
				if (unk_0x7404950238A154C2(iLocal_3266, 0))
				{
					if (!unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_3266, 0))
					{
						if (unk_0x12F24A1A22BF90A7("SOL_3_LOSE_COPS_PLANE"))
						{
							unk_0x0C22E352114F699C("SOL_3_LOSE_COPS_PLANE");
						}
						unk_0x80650551CC58C784("TRV4_LOSE_COPS");
						iLocal_3473 = 0;
					}
				}
			}
		}
		if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) == 0)
		{
			if (iLocal_3476 == 0)
			{
				iLocal_3192 = unk_0x48E480685981C7D4();
				iLocal_3476 = 1;
			}
		}
		if (iLocal_3476 == 1)
		{
			if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) == 0)
			{
				if (unk_0x48E480685981C7D4() > iLocal_3192 + 3500)
				{
					if (unk_0x12F24A1A22BF90A7("SOL_3_LOSE_COPS_PLANE"))
					{
						unk_0x0C22E352114F699C("SOL_3_LOSE_COPS_PLANE");
					}
					if (unk_0x12F24A1A22BF90A7("SOL_3_LOSE_COPS"))
					{
						unk_0x0C22E352114F699C("SOL_3_LOSE_COPS");
					}
					if (unk_0x12F24A1A22BF90A7("SOL_3_LOSE_COPS_VEHICLE"))
					{
						unk_0x0C22E352114F699C("SOL_3_LOSE_COPS_VEHICLE");
					}
					unk_0x80650551CC58C784("TRV4_COPS_LOST");
					func_11(0, -1);
					func_6();
				}
			}
			else
			{
				iLocal_3476 = 0;
			}
		}
	}
}

void func_6()
{
	func_10(481, iLocal_3190, 0);
	func_7(0, 0);
	func_377();
}

void func_7(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_55404)
	{
		Global_55404 = iParam1;
	}
	if (bParam0)
	{
		if ((func_390(0) && Global_69266.f_1 == 1) && func_9(Global_69266))
		{
		}
		else
		{
			Global_55402 = 1;
		}
	}
	if (Global_98931.f_7699 || func_390(0))
	{
		iVar0 = func_8();
		iVar1 = Global_81894[iVar0 /*5*/];
		uVar2 = Global_69289.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_98931.f_7699)
			{
			}
			return;
		}
		if (unk_0x236D8AD7EE179F46(Global_81894[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0x236D8AD7EE179F46(Global_81894[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0xF3148AAF69AF9CBC(&(Global_81894[iVar0 /*5*/].f_1), 4);
		unk_0xF3148AAF69AF9CBC(&Global_69268, 1);
		Global_69284 = uVar2;
		Global_69285 = unk_0x48E480685981C7D4();
	}
}

int func_8()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0x236D8AD7EE179F46(Global_81894[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_9(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void func_10(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67497)
	{
		if (Global_67498[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_67498[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_67498[iVar0 /*9*/].f_1 = (Global_67498[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_67498[iVar0 /*9*/] != -1)
	{
		if (Global_55627[Global_67498[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_67498[iVar0 /*9*/].f_1 > 1)
			{
				Global_67498[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_67498[iVar0 /*9*/].f_1 < 0)
			{
				Global_67498[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_11(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_55410)
	{
	}
	Global_55410 = 0;
	if (bParam0)
	{
		Global_55411 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67497)
		{
			if (Global_55627[Global_67498[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_67498[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_67497)
		{
			if (Global_67498[iVar0 /*9*/] > 0)
			{
				if (Global_67498[iVar0 /*9*/] == iParam1)
				{
					Global_67498[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_12()
{
	iLocal_3188 = 0;
	while (iLocal_3188 <= 9)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[iLocal_3188]))
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_3232[iLocal_3188]))
			{
				if (!unk_0xE5AB05962FA1FF3F(iLocal_3232[iLocal_3188], 0))
				{
					if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
					{
						if (func_13(unk_0x81873881071CD9FE(), iLocal_3232[iLocal_3188]) > 200f)
						{
							unk_0x27CC98B7C879C320(iLocal_3232[iLocal_3188]);
							unk_0x71A8BCA218722FA1(&(iLocal_3232[iLocal_3188]));
						}
						else if (func_13(unk_0x81873881071CD9FE(), iLocal_3232[iLocal_3188]) > 20f)
						{
							if (unk_0xFA1212DE7C455679(iLocal_3232[iLocal_3188], -1207174364) != 1 && unk_0xFA1212DE7C455679(iLocal_3232[iLocal_3188], -1207174364) != 0)
							{
								unk_0xF450705EF1F7E415(iLocal_3232[iLocal_3188], unk_0x81873881071CD9FE(), unk_0x81873881071CD9FE(), 2f, 1, 15f, 20f, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"));
							}
						}
						else if (unk_0xFA1212DE7C455679(iLocal_3232[iLocal_3188], 780511057) != 1 && unk_0xFA1212DE7C455679(iLocal_3232[iLocal_3188], 780511057) != 0)
						{
							unk_0x633A554EB6BC4E71(iLocal_3232[iLocal_3188], unk_0x81873881071CD9FE(), 0, 16);
							unk_0x4B9FA68A3AC8C29D(iLocal_3232[iLocal_3188], 50, 1);
						}
					}
					else if (func_13(unk_0x81873881071CD9FE(), iLocal_3232[iLocal_3188]) > 200f)
					{
						unk_0x71A8BCA218722FA1(&(iLocal_3232[iLocal_3188]));
					}
					else if (func_13(unk_0x81873881071CD9FE(), iLocal_3232[iLocal_3188]) > 5f)
					{
						if (unk_0xFA1212DE7C455679(iLocal_3232[iLocal_3188], -1207174364) != 1 && unk_0xFA1212DE7C455679(iLocal_3232[iLocal_3188], -1207174364) != 0)
						{
							unk_0xF450705EF1F7E415(iLocal_3232[iLocal_3188], unk_0x81873881071CD9FE(), unk_0x81873881071CD9FE(), 2f, 1, 15f, 20f, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"));
						}
					}
					else if (unk_0xFA1212DE7C455679(iLocal_3232[iLocal_3188], 780511057) != 1 && unk_0xFA1212DE7C455679(iLocal_3232[iLocal_3188], 780511057) != 0)
					{
						unk_0x633A554EB6BC4E71(iLocal_3232[iLocal_3188], unk_0x81873881071CD9FE(), 0, 16);
						unk_0x4B9FA68A3AC8C29D(iLocal_3232[iLocal_3188], 50, 1);
					}
				}
			}
		}
		iLocal_3188++;
	}
	if (iLocal_3373 == 1)
	{
		if (iLocal_3345 == 0)
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_3267[0]))
			{
				if (unk_0x7404950238A154C2(iLocal_3267[0], 0))
				{
					if (unk_0xE20321A2D7F8960C(iLocal_3267[0]))
					{
					}
					else
					{
						if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[6]))
						{
							if (!unk_0x5FEB513A4402FD59(iLocal_3232[6]))
							{
								unk_0x1D15D99A10A15334(iLocal_3232[6], 0);
								unk_0x27CC98B7C879C320(iLocal_3232[6]);
								unk_0xEAD984C2869B8B7C(&uLocal_3291);
								unk_0x3535A48C04BEA949(0, iLocal_3267[0], 256);
								unk_0x633A554EB6BC4E71(0, unk_0x81873881071CD9FE(), 0, 16);
								unk_0x56D9ED1541046AF6(uLocal_3291);
								unk_0xC65002CAA1212AF9(iLocal_3232[6], uLocal_3291);
								unk_0xA3561415EB3DA3A3(&uLocal_3291);
							}
						}
						if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[7]))
						{
							if (!unk_0x5FEB513A4402FD59(iLocal_3232[7]))
							{
								unk_0x1D15D99A10A15334(iLocal_3232[7], 0);
								unk_0x27CC98B7C879C320(iLocal_3232[7]);
								unk_0xEAD984C2869B8B7C(&uLocal_3291);
								unk_0x3535A48C04BEA949(0, iLocal_3267[0], 256);
								unk_0x633A554EB6BC4E71(0, unk_0x81873881071CD9FE(), 0, 16);
								unk_0x56D9ED1541046AF6(uLocal_3291);
								unk_0xC65002CAA1212AF9(iLocal_3232[7], uLocal_3291);
								unk_0xA3561415EB3DA3A3(&uLocal_3291);
							}
						}
						iLocal_3345 = 1;
					}
				}
			}
		}
		else if (iLocal_3430 == 0)
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_3267[0]))
			{
				if (unk_0x7404950238A154C2(iLocal_3267[0], 0))
				{
					if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[6]))
					{
						if (!unk_0x5FEB513A4402FD59(iLocal_3232[6]))
						{
							if (!unk_0x04C377C10639B842(iLocal_3232[6], iLocal_3267[0], 0))
							{
								if (func_13(unk_0x81873881071CD9FE(), iLocal_3232[6]) < 20f)
								{
									func_14(iLocal_3232[6], "DRAW_GUN", 24);
									iLocal_3430 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3346 == 0)
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_3267[1]))
			{
				if (unk_0x7404950238A154C2(iLocal_3267[1], 0))
				{
					if (unk_0xE20321A2D7F8960C(iLocal_3267[1]))
					{
					}
					else
					{
						if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[8]))
						{
							if (!unk_0x5FEB513A4402FD59(iLocal_3232[8]))
							{
								unk_0x1D15D99A10A15334(iLocal_3232[8], 0);
								unk_0x27CC98B7C879C320(iLocal_3232[8]);
								unk_0xEAD984C2869B8B7C(&uLocal_3291);
								unk_0x3535A48C04BEA949(0, iLocal_3267[1], 256);
								unk_0x633A554EB6BC4E71(0, unk_0x81873881071CD9FE(), 0, 16);
								unk_0x56D9ED1541046AF6(uLocal_3291);
								unk_0xC65002CAA1212AF9(iLocal_3232[8], uLocal_3291);
								unk_0xA3561415EB3DA3A3(&uLocal_3291);
							}
						}
						if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[9]))
						{
							if (!unk_0x5FEB513A4402FD59(iLocal_3232[9]))
							{
								unk_0x1D15D99A10A15334(iLocal_3232[9], 0);
								unk_0x27CC98B7C879C320(iLocal_3232[9]);
								unk_0xEAD984C2869B8B7C(&uLocal_3291);
								unk_0x3535A48C04BEA949(0, iLocal_3267[1], 256);
								unk_0x633A554EB6BC4E71(0, unk_0x81873881071CD9FE(), 0, 16);
								unk_0x56D9ED1541046AF6(uLocal_3291);
								unk_0xC65002CAA1212AF9(iLocal_3232[9], uLocal_3291);
								unk_0xA3561415EB3DA3A3(&uLocal_3291);
							}
						}
						iLocal_3346 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3347 == 0)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[10]))
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_3232[10]))
			{
				if (func_13(unk_0x81873881071CD9FE(), iLocal_3232[10]) > 200f)
				{
					unk_0x71A8BCA218722FA1(&(iLocal_3232[iLocal_3188]));
					unk_0xD8323B49BAE93D80("misssolomon_3");
				}
				else if (unk_0x8E8B546E1A81D27F("misssolomon_3"))
				{
					if (unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), -923.2303f, -2948.004f, 12.9451f, 2f, 2f, 2f, 0, 1, 0))
					{
						if (!unk_0x5FEB513A4402FD59(iLocal_3232[10]))
						{
							unk_0x27CC98B7C879C320(iLocal_3232[10]);
							unk_0xEAD984C2869B8B7C(&uLocal_3291);
							unk_0x31C1393E4ACFD794(0, "misssolomon_3", "plyr_roll_left", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x633A554EB6BC4E71(0, unk_0x81873881071CD9FE(), 0, 16);
							unk_0x56D9ED1541046AF6(uLocal_3291);
							unk_0xC65002CAA1212AF9(iLocal_3232[10], uLocal_3291);
							unk_0xA3561415EB3DA3A3(&uLocal_3291);
							iLocal_3347 = 1;
						}
					}
				}
			}
		}
	}
}

float func_13(int iParam0, int iParam1)
{
	return func_16(iParam0, iParam1, 1);
}

void func_14(var uParam0, char* sParam1, int iParam2)
{
	unk_0xE66E1668957ECE7B(uParam0, sParam1, func_15(iParam2), 1);
}

int func_15(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

float func_16(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 0) };
	}
	if (!unk_0x930F8FBB8E9537CC(iParam1))
	{
		Var3 = { unk_0xB6AE0DAE06D56288(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xB6AE0DAE06D56288(iParam1, 0) };
	}
	return unk_0x0D6E79537424BACE(Var0, Var3, iParam2);
}

void func_17(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_18(int iParam0, bool bParam1)
{
	if (unk_0x236D8AD7EE179F46(Global_25103, iParam0))
	{
		if (!bParam1)
		{
			unk_0xC69E84EBBD7166E6(&Global_25103, iParam0);
			StringCopy(&(Global_25104[iParam0 /*6*/]), "NULL", 24);
			Global_25159[iParam0] = bParam1;
		}
	}
}

int func_19(int iParam0)
{
	if (unk_0x236D8AD7EE179F46(Global_25103, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_20(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x645DF34C4E038370(sParam0);
	unk_0x16885CADDEC73B2E(iParam1, 1);
}

void func_21(int iParam0, int iParam1, int iParam2)
{
	if (func_23() && func_24())
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
		func_22(0);
	}
}

void func_22(int iParam0)
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

int func_23()
{
	if (Global_90809 == 10 || Global_90809 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_24()
{
	return unk_0x236D8AD7EE179F46(Global_90809.f_20, 13);
}

void func_25(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	var uVar2;
	char[] cVar3[8];
	int iVar5;
	var uVar6;
	int iVar10;
	
	if (iParam3 == 1)
	{
		if (!unk_0xD994929E13CC1ED5("FinaleC2", unk_0x11CA2334E341B424()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_90846)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_90846)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_103(1);
		if (iParam0 <= Global_90846)
		{
		}
		iVar1 = func_101(unk_0x11CA2334E341B424(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_98931.f_7699.f_330[iVar1 /*6*/].f_1 = 0;
			uVar2 = func_99(iVar1);
			cVar3 = { Global_81930[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_98931.f_7699.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0x27F839BD3200E49D(&cVar3, uVar2, Global_90846, iParam0);
		}
		else
		{
			iVar5 = func_94(unk_0x11CA2334E341B424(), 1);
			if (iVar5 != -1)
			{
				Global_98931.f_17188[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_93(iVar5)}, 4);
				unk_0x27F839BD3200E49D(&uVar6, 0, Global_90846, iParam0);
			}
			else
			{
				iVar10 = func_92(&(Global_90809.f_3));
				if (iVar10 > -1)
				{
					Global_98931.f_29435.f_4[iVar10] = 0;
				}
			}
		}
		Global_85320 = iParam2;
		Global_90846 = iParam0;
		func_26(iParam0, sParam1, iParam4, iParam5);
		if (unk_0xD994929E13CC1ED5(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_90846)
	{
	}
}

void func_26(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_27(&Global_94997, unk_0x11CA2334E341B424(), iParam0, uParam1, iParam3, iParam2);
}

void func_27(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_91();
	uParam0->f_1 = func_80();
	unk_0x35BE5A2CA47115D2(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		func_65(&(uParam0->f_2305), 0);
		func_64(unk_0x81873881071CD9FE());
		func_58(unk_0x81873881071CD9FE(), 0);
		unk_0x5F446E70DA9B8122(unk_0x81873881071CD9FE(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_98931.f_1750.f_539.f_294[iVar1];
		if (iVar1 == func_55())
		{
			func_48(unk_0x81873881071CD9FE(), &(uParam0->f_616[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_90599[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_90599[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_90599[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_90599[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_90599[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_90599[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_90599[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_90599[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_90599[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_90599[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/] = { Global_98931.f_1750.f_539.f_298[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_98931.f_1750.f_539.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0x85C45034BA638694(joaat("sp0_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0x85C45034BA638694(joaat("sp0_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0x85C45034BA638694(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0x85C45034BA638694(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0x85C45034BA638694(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0x85C45034BA638694(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0x85C45034BA638694(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0x85C45034BA638694(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0x85C45034BA638694(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0x85C45034BA638694(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0x85C45034BA638694(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0x85C45034BA638694(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0x85C45034BA638694(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0x85C45034BA638694(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0x85C45034BA638694(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0x85C45034BA638694(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0x85C45034BA638694(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0x85C45034BA638694(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0x85C45034BA638694(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0x85C45034BA638694(joaat("sp1_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0x85C45034BA638694(joaat("sp1_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0x85C45034BA638694(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0x85C45034BA638694(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0x85C45034BA638694(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0x85C45034BA638694(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0x85C45034BA638694(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0x85C45034BA638694(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0x85C45034BA638694(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0x85C45034BA638694(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0x85C45034BA638694(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0x85C45034BA638694(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0x85C45034BA638694(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0x85C45034BA638694(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0x85C45034BA638694(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0x85C45034BA638694(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0x85C45034BA638694(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0x85C45034BA638694(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0x85C45034BA638694(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0x85C45034BA638694(joaat("sp2_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0x85C45034BA638694(joaat("sp2_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0x85C45034BA638694(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0x85C45034BA638694(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0x85C45034BA638694(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0x85C45034BA638694(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0x85C45034BA638694(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0x85C45034BA638694(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0x85C45034BA638694(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0x85C45034BA638694(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0x85C45034BA638694(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0x85C45034BA638694(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0x85C45034BA638694(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0x85C45034BA638694(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0x85C45034BA638694(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0x85C45034BA638694(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0x85C45034BA638694(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0x85C45034BA638694(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0x85C45034BA638694(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_98931.f_25013.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_52577[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_98931.f_1750.f_539.f_1635[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_98931.f_1750.f_539.f_1635[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2259[iVar1 /*15*/][iVar0] = Global_98931.f_1750.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_5[iVar0] = Global_98931.f_1750.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_10[iVar0] = Global_98931.f_1750.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_1766[iVar1 /*164*/][iVar0] = Global_98931.f_1750[iVar1 /*164*/][iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_4[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_8[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_12[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_16[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_20[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_24[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_28[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_32[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_36[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_40[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_44[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_48[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_52[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_56[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_60[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_64[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_68[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_72[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_76[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_80[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_84[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_88[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_92[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_96[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_100[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_104[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_108[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_112[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_116[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_120[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_124[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_128[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_132[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_136[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_140[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_144[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_148[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_152[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_156[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_160[iVar0] = Global_98931.f_1750[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x85C45034BA638694(joaat("sp0_special_ability"), &(uParam0->f_1762[0]), -1);
	unk_0x85C45034BA638694(joaat("sp1_special_ability"), &(uParam0->f_1762[1]), -1);
	unk_0x85C45034BA638694(joaat("sp2_special_ability"), &(uParam0->f_1762[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_29(&(uParam0->f_2311), uParam0, iParam5, 1, 1, 0);
	}
	func_28(&(uParam0->f_2401));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_28(var uParam0)
{
	*uParam0 = Global_86991;
	uParam0->f_1 = Global_86992;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_29(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0x81873881071CD9FE();
	}
	if (unk_0x86CCCD2FAE9D5E65(iParam2))
	{
		uParam1->f_5 = func_46(iParam2);
	}
	if (func_43(iParam2, &iVar0, iParam3, iParam5))
	{
		func_30(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0x86CCCD2FAE9D5E65(iVar0))
	{
		if (!unk_0x930F8FBB8E9537CC(iVar0))
		{
			if (unk_0xCC6B00B8460CDA0E(iVar0, joaat("skylift")) && unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iVar0, 0))
			{
				func_30(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_30(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0x7404950238A154C2(iParam2, 0))
	{
		func_32(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_31(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_31(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_90809.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_32(var uParam0, int iParam1, int iParam2)
{
	func_39(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_35(iParam1, 145, 0);
	uParam0->f_11 = func_34(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_33(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0xB6AE0DAE06D56288(iParam1, 1) };
		uParam0->f_6 = unk_0x3306AAAFE3B25098(iParam1);
		uParam0->f_3 = { unk_0xC684AF573327E1AB(iParam1) };
		if (unk_0xD1FFD959917D4ED8(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_68794 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_33(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x86CCCD2FAE9D5E65(Global_67889.f_484[iVar0]))
		{
			if (iParam0 == Global_67889.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_34(int iParam0)
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

int func_35(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		return 0;
	}
	if (!unk_0x7404950238A154C2(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x86CCCD2FAE9D5E65(Global_88473[iVar0]))
		{
			if (Global_88473[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_88483[iVar0])
				{
					if (iParam2 == 0 || unk_0x14B7103DBD149FFE(iParam0) == func_36(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_36(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_38(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_37(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_37(int iParam0, var uParam1, int iParam2)
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

bool func_38(int iParam0)
{
	return iParam0 < 3;
}

void func_39(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x7404950238A154C2(iParam0, 0))
	{
		func_42(uParam1);
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
		func_41(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x5CBBEE14743C3376(iParam0, iVar0 + 1))
			{
				unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), func_40(iVar0 + 1));
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

int func_40(int iParam0)
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

int func_41(int iParam0, var uParam1, var uParam2)
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

void func_42(var uParam0)
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

int func_43(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		if (!unk_0x5FEB513A4402FD59(iParam0))
		{
			if (iParam0 == unk_0x81873881071CD9FE())
			{
				*uParam1 = unk_0x2ADE2CEED2637E95();
			}
			else
			{
				*uParam1 = unk_0xE68E6B44DABA9C05(iParam0, 1);
			}
			if (unk_0x86CCCD2FAE9D5E65(*uParam1))
			{
				if (unk_0x7404950238A154C2(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(*uParam1, 1), unk_0xB6AE0DAE06D56288(iParam0, 1), 1) < 100f)
					{
						if (unk_0xCC6B00B8460CDA0E(*uParam1, joaat("taxi")))
						{
							if (unk_0xB0B9E53CEFDB16AA(*uParam1, -1) != iParam0 && unk_0xB0B9E53CEFDB16AA(*uParam1, -1) != 0)
							{
								return 0;
							}
						}
						if (func_44(*uParam1, func_91(), 1))
						{
							sVar0 = unk_0x11CA2334E341B424();
							if (!unk_0xD994929E13CC1ED5(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0xE5AB05962FA1FF3F(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0xCEC9D74C9FF51C8C(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0x53ABC9BE848EA65A(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0xCC6B00B8460CDA0E(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_44(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x86CCCD2FAE9D5E65(iParam0) || !unk_0x7404950238A154C2(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_45(iParam1, iVar0, &sVar1, &iVar9))
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

int func_45(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_47(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_47(int iParam0)
{
	if (func_38(iParam0))
	{
		return Global_98931.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_48(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x5FEB513A4402FD59(iParam0))
	{
		iVar0 = func_46(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_54(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_53(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_38(iVar0))
		{
			uParam1->f_59 = Global_98931.f_1750.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_98931.f_1750.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_98931.f_1750.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_98931.f_1750.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_98931.f_1750.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_98931.f_1750.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x1C6DF6AD69BE853E() && unk_0x14B7103DBD149FFE(iParam0) == unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			if (func_52(161, -1))
			{
				uParam1->f_59 = func_49(2039, Global_68879, 0);
			}
			else
			{
				uParam1->f_59 = func_49(742, Global_68879, 0);
			}
			uParam1->f_60 = func_49(743, Global_68879, 0);
			uParam1->f_61 = func_49(744, Global_68879, 0);
		}
		if (unk_0x1C6DF6AD69BE853E() && iParam0 == unk_0x81873881071CD9FE())
		{
			if (func_52(161, -1))
			{
				uParam1->f_59 = func_49(2039, Global_68879, 0);
			}
			else
			{
				uParam1->f_59 = func_49(742, Global_68879, 0);
			}
		}
	}
}

int func_49(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2459767[iParam0 /*5*/][func_50(iParam1)];
	if (unk_0x85C45034BA638694(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_50(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_51();
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

int func_51()
{
	return Global_1312729;
}

int func_52(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2478104[iParam0 /*5*/][func_50(iParam1)];
	if (unk_0xFD72912C9064BF1F(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_53(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_46(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x0F7FE22229DBD748(iParam0, iParam1);
		*uParam3 = unk_0xC2F100D1D0DEC7FF(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (unk_0x77B5315758411237(iParam0) && unk_0xC97D759CF4C6805E(iParam0) != -1)
				{
					*uParam2 = unk_0xC97D759CF4C6805E(iParam0);
					*uParam3 = unk_0x18883962AD2D25EF(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_54(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_46(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x1CFC95A2D6BABBA2(iParam0, iParam1);
		*uParam3 = unk_0x2933140C98919EB1(iParam0, iParam1);
		*uParam4 = unk_0xB1E925960A89BB08(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_55()
{
	func_56();
	return Global_98931.f_1750.f_539.f_3549;
}

void func_56()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_47(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_46(unk_0x81873881071CD9FE());
			if (func_38(iVar0) && (!func_57(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_38(Global_98931.f_1750.f_539.f_3549))
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

bool func_57(int iParam0)
{
	return Global_35443 == iParam0;
}

void func_58(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_46(iParam0);
	if (func_38(iVar0) && !unk_0x5FEB513A4402FD59(iParam0))
	{
		if (iParam0 == unk_0x81873881071CD9FE())
		{
			func_59(iParam0, &(Global_98931.f_1750.f_539.f_298[iVar0 /*284*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_98931.f_1750.f_539.f_1151[iVar2 /*4*/][iVar0] = unk_0x7FB198AADD22362C(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0x6CF90324F6A0B8F3();
					if (Global_98931.f_1750.f_539.f_1151[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_98931.f_1750.f_539.f_1184 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0xA40BC19E8BB8991D(unk_0x1329891157A54C63(), &uVar3);
			if (iVar0 == 0)
			{
				unk_0x123B783056E76C4E(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0x123B783056E76C4E(joaat("sp1_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0x123B783056E76C4E(joaat("sp2_parachute_current_tint"), uVar3, 1);
			}
		}
	}
}

void func_59(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	struct<4> Var48;
	int iVar70;
	
	if (!unk_0x5FEB513A4402FD59(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*3*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_63(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0x13B650C36AE69686(iParam0, func_63(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x712EDC894350DB50(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					unk_0xF3148AAF69AF9CBC(&(Var4.f_2), (20 + unk_0x32814C11329F4061(iParam0, Var4.f_0)));
					if (Var4.f_1 == -1)
					{
						if (!unk_0x111F41850B6F7B4F(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*3*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_61(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0xC5EBF9C65C27D453(iParam0, Var4.f_0, iVar2))
						{
							unk_0xF3148AAF69AF9CBC(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_61(Var4.f_0, iVar1);
					}
				}
				*(uParam1[iVar0 /*3*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (50 - 1))
		{
			uParam1->f_133[iVar0 /*3*/].f_1 = 0;
			iVar0++;
		}
		iVar8 = unk_0x854E447BB6DC0C78();
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if ((unk_0xDA7A61DFB1D6C7E0(iVar7, &Var9) && !func_60(Var9.f_1)) && iVar70 < 50)
			{
				if (!unk_0xA10BCE9255970BC8(Var9.f_0))
				{
					Var4.f_0 = Var9.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_1 = unk_0x712EDC894350DB50(iParam0, Var4.f_0);
					if (unk_0xE27746D8DF950073(iParam0, Var4.f_0, 0))
					{
						unk_0xF3148AAF69AF9CBC(&(Var4.f_2), (20 + unk_0x32814C11329F4061(iParam0, Var4.f_0)));
					}
					else
					{
						unk_0xF3148AAF69AF9CBC(&(Var4.f_2), 20);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0x111F41850B6F7B4F(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_133[iVar70 /*3*/].f_1 = Var4.f_1;
					iVar1 = 0;
					while (iVar1 < unk_0x7F50FC7BCF33C5DE(iVar7))
					{
						if (unk_0x8742A52A2950D16C(iVar7, iVar1, &Var48))
						{
							if (unk_0xC5EBF9C65C27D453(iParam0, Var4.f_0, Var48.f_3))
							{
								unk_0xF3148AAF69AF9CBC(&(Var4.f_2), iVar1);
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0xE27746D8DF950073(iParam0, Var4.f_0, 0))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_133[iVar70 /*3*/] = { Var4 };
				iVar70++;
			}
			iVar7++;
		}
	}
}

int func_60(int iParam0)
{
	if (unk_0x1C6DF6AD69BE853E())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case joaat("weapon_heavyrifle"):
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_61(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<4> Var41;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 7:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 4:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_62(iParam0, &uVar2);
				if (iVar1 != -1)
				{
					if (iParam1 < unk_0x7F50FC7BCF33C5DE(iVar1))
					{
						if (unk_0x8742A52A2950D16C(iVar1, iParam1, &Var41))
						{
							return Var41.f_3;
						}
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_62(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x854E447BB6DC0C78();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0xDA7A61DFB1D6C7E0(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_63(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_64(int iParam0)
{
	int iVar0;
	
	iVar0 = func_46(iParam0);
	if (func_38(iVar0) && !unk_0x5FEB513A4402FD59(iParam0))
	{
		Global_98931.f_1750.f_539.f_294[iVar0] = unk_0xD5D8090026387C69(iParam0);
	}
}

void func_65(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	*uParam0 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
	uParam0->f_3 = unk_0x3306AAAFE3B25098(unk_0x81873881071CD9FE());
	uParam0->f_5 = unk_0x212579F7919ACAFB(unk_0x81873881071CD9FE());
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		uParam0->f_4 = unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63());
	}
	if (unk_0x2A488C176D52CCA5(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (unk_0x968BF1C2C695B61A(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0x236D8AD7EE179F46(Global_69268, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0x236D8AD7EE179F46(Global_69268, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0x236D8AD7EE179F46(Global_69268, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0x236D8AD7EE179F46(Global_69268, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE()) == unk_0xA17AB437A96481B6(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (unk_0x2A488C176D52CCA5(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_69(&iVar0))
		{
			if (func_67(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			iVar5 = func_91();
			if (iVar5 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar5 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar5 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_66(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_66(struct<3> Param0, char* sParam3, struct<3> Param4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xD58E02A689955E29(Param0))
	{
		iVar0 = unk_0xA17AB437A96481B6(Param4, sParam3);
		if (!unk_0x59F36F53A82C2E72(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0xB5745E430823E791(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_67(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
	}
	return !func_68(*uParam1, 0f, 0f, 0f, 0);
}

bool func_68(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_69(var uParam0)
{
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()) && !unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (func_79())
		{
			*uParam0 = func_75(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0), 5, -1, 0, 1, -1);
			if (func_74(*uParam0) && !func_70(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_70(int iParam0)
{
	return func_71(iParam0, 0, 1);
}

int func_71(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x236D8AD7EE179F46(Global_90861.f_1279[iParam0], iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_73() == 0)
		{
			return unk_0x236D8AD7EE179F46(func_49(func_72(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x236D8AD7EE179F46(Global_98931.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_72(int iParam0)
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

int func_73()
{
	return Global_24946;
}

int func_74(int iParam0)
{
	return func_71(iParam0, 5, 1);
}

int func_75(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 44)
	{
		if (iParam3 == 5 || iParam3 == func_78(iVar0))
		{
			if (!bParam5 || func_77(iVar0))
			{
				fVar1 = unk_0x0D6E79537424BACE(Param0, func_76(iVar0, 0), 1);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21)) && iVar0 != iParam7)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_76(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_77(int iParam0)
{
	return func_71(iParam0, 0, 0);
}

int func_78(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 5;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
	}
	return 5;
}

bool func_79()
{
	return Global_90861.f_296 > 0;
}

var func_80()
{
	var uVar0;
	
	func_90(&uVar0, unk_0xBF0A1447DA6AE4B5());
	func_89(&uVar0, unk_0x25B31B877207A3A9());
	func_88(&uVar0, unk_0x0C937048CF6952B5());
	func_83(&uVar0, unk_0x8B6B3DD84CE74978());
	func_82(&uVar0, unk_0x02DC618B9A1DB8D1());
	func_81(&uVar0, unk_0x57E483B654EDD986());
	return uVar0;
}

void func_81(var uParam0, int iParam1)
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

void func_82(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_83(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_87(*uParam0);
	iVar1 = func_85(*uParam0);
	if (iParam1 < 1 || iParam1 > func_84(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_84(int iParam0, int iParam1)
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

int func_85(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_86(unk_0x236D8AD7EE179F46(iParam0, 31), -1, 1)) + 2011;
}

int func_86(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_87(int iParam0)
{
	return iParam0 & 15;
}

void func_88(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_89(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_90(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_91()
{
	func_56();
	return Global_98931.f_1750.f_539.f_3549;
}

int func_92(char* sParam0)
{
	if (unk_0xD994929E13CC1ED5("BailBond1", sParam0))
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

struct<2> func_93(int iParam0)
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

int func_94(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = unk_0x8DAF7A748E41AD46(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_95(iVar0, &sVar1);
		if (unk_0x8DAF7A748E41AD46(sVar1) == iVar33)
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

void func_95(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_96(uParam1, "Abigail1", func_98(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 1:
			func_96(uParam1, "Abigail2", func_98(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 2:
			func_96(uParam1, "Barry1", func_98(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 3:
			func_96(uParam1, "Barry2", func_98(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_97(iParam0), 1, 1);
			break;
		
		case 4:
			func_96(uParam1, "Barry3", func_98(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 5:
			func_96(uParam1, "Barry3A", func_98(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 6:
			func_96(uParam1, "Barry3C", func_98(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 7:
			func_96(uParam1, "Barry4", func_98(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_97(iParam0), 0, 0);
			break;
		
		case 8:
			func_96(uParam1, "Dreyfuss1", func_98(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 9:
			func_96(uParam1, "Epsilon1", func_98(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 10:
			func_96(uParam1, "Epsilon2", func_98(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 11:
			func_96(uParam1, "Epsilon3", func_98(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 12:
			func_96(uParam1, "Epsilon4", func_98(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 13:
			func_96(uParam1, "Epsilon5", func_98(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 14:
			func_96(uParam1, "Epsilon6", func_98(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 15:
			func_96(uParam1, "Epsilon7", func_98(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 16:
			func_96(uParam1, "Epsilon8", func_98(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 17:
			func_96(uParam1, "Extreme1", func_98(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 18:
			func_96(uParam1, "Extreme2", func_98(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 19:
			func_96(uParam1, "Extreme3", func_98(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 20:
			func_96(uParam1, "Extreme4", func_98(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 21:
			func_96(uParam1, "Fanatic1", func_98(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_97(iParam0), 1, 0);
			break;
		
		case 22:
			func_96(uParam1, "Fanatic2", func_98(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_97(iParam0), 1, 0);
			break;
		
		case 23:
			func_96(uParam1, "Fanatic3", func_98(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_97(iParam0), 0, 1);
			break;
		
		case 24:
			func_96(uParam1, "Hao1", func_98(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_97(iParam0), 0, 1);
			break;
		
		case 25:
			func_96(uParam1, "Hunting1", func_98(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 26:
			func_96(uParam1, "Hunting2", func_98(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 27:
			func_96(uParam1, "Josh1", func_98(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 28:
			func_96(uParam1, "Josh2", func_98(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_97(iParam0), 1, 1);
			break;
		
		case 29:
			func_96(uParam1, "Josh3", func_98(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_97(iParam0), 1, 1);
			break;
		
		case 30:
			func_96(uParam1, "Josh4", func_98(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 31:
			func_96(uParam1, "Maude1", func_98(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 32:
			func_96(uParam1, "Minute1", func_98(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 33:
			func_96(uParam1, "Minute2", func_98(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 34:
			func_96(uParam1, "Minute3", func_98(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 35:
			func_96(uParam1, "MrsPhilips1", func_98(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 36:
			func_96(uParam1, "MrsPhilips2", func_98(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 37:
			func_96(uParam1, "Nigel1", func_98(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 38:
			func_96(uParam1, "Nigel1A", func_98(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_97(iParam0), 1, 1);
			break;
		
		case 39:
			func_96(uParam1, "Nigel1B", func_98(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_97(iParam0), 1, 1);
			break;
		
		case 40:
			func_96(uParam1, "Nigel1C", func_98(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_97(iParam0), 1, 1);
			break;
		
		case 41:
			func_96(uParam1, "Nigel1D", func_98(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_97(iParam0), 1, 1);
			break;
		
		case 42:
			func_96(uParam1, "Nigel2", func_98(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_97(iParam0), 1, 1);
			break;
		
		case 43:
			func_96(uParam1, "Nigel3", func_98(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_97(iParam0), 1, 1);
			break;
		
		case 44:
			func_96(uParam1, "Omega1", func_98(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 45:
			func_96(uParam1, "Omega2", func_98(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 46:
			func_96(uParam1, "Paparazzo1", func_98(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 47:
			func_96(uParam1, "Paparazzo2", func_98(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 48:
			func_96(uParam1, "Paparazzo3", func_98(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 49:
			func_96(uParam1, "Paparazzo3A", func_98(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 50:
			func_96(uParam1, "Paparazzo3B", func_98(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 51:
			func_96(uParam1, "Paparazzo4", func_98(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 52:
			func_96(uParam1, "Rampage1", func_98(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 54:
			func_96(uParam1, "Rampage3", func_98(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 55:
			func_96(uParam1, "Rampage4", func_98(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 56:
			func_96(uParam1, "Rampage5", func_98(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_97(iParam0), 0, 0);
			break;
		
		case 53:
			func_96(uParam1, "Rampage2", func_98(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_97(iParam0), 1, 0);
			break;
		
		case 57:
			func_96(uParam1, "TheLastOne", func_98(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 58:
			func_96(uParam1, "Tonya1", func_98(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 59:
			func_96(uParam1, "Tonya2", func_98(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 60:
			func_96(uParam1, "Tonya3", func_98(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 61:
			func_96(uParam1, "Tonya4", func_98(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		case 62:
			func_96(uParam1, "Tonya5", func_98(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_97(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_96(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_97(int iParam0)
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

struct<2> func_98(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_93(iParam0) };
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

int func_99(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_100(Global_98931.f_7699.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_100(Global_98931.f_7699.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_100(Global_98931.f_7699.f_99.f_205[11]);
			break;
		
		case 90:
			return func_100(Global_98931.f_7699.f_99.f_205[7]);
			break;
		
		case 93:
			return func_100(Global_98931.f_7699.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_100(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_101(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x8DAF7A748E41AD46(sParam0);
	iVar1 = func_102(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_102(int iParam0, bool bParam1)
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

void func_103(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_98931.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52585[iVar0 /*3*/][0] = Global_98931.f_25013[iVar0];
		Global_52585.f_31[iVar0 /*3*/][0] = Global_98931.f_25013.f_11[iVar0];
		Global_52585.f_62[iVar0 /*3*/][0] = Global_98931.f_25013.f_22[iVar0];
		Global_52585.f_93[iVar0 /*3*/][0] = Global_98931.f_25013.f_33[iVar0];
		Global_52585.f_124[iVar0 /*3*/][0] = Global_98931.f_25013.f_44[iVar0];
		Global_52585.f_155[iVar0 /*3*/][0] = Global_98931.f_25013.f_55[iVar0];
		Global_52585.f_186[iVar0 /*3*/][0] = Global_98931.f_25013.f_66[iVar0];
		Global_52585.f_217[iVar0 /*3*/][0] = Global_98931.f_25013.f_77[iVar0];
		Global_52585.f_248[iVar0 /*3*/][0] = Global_98931.f_25013.f_88[iVar0];
		if (!bParam0)
		{
			Global_52585[iVar0 /*3*/][1] = Global_98931.f_25013[iVar0];
			Global_52585.f_31[iVar0 /*3*/][1] = Global_98931.f_25013.f_11[iVar0];
			Global_52585.f_62[iVar0 /*3*/][1] = Global_98931.f_25013.f_22[iVar0];
			Global_52585.f_93[iVar0 /*3*/][1] = Global_98931.f_25013.f_33[iVar0];
			Global_52585.f_124[iVar0 /*3*/][1] = Global_98931.f_25013.f_44[iVar0];
			Global_52585.f_155[iVar0 /*3*/][1] = Global_98931.f_25013.f_55[iVar0];
			Global_52585.f_186[iVar0 /*3*/][1] = Global_98931.f_25013.f_66[iVar0];
			Global_52585.f_217[iVar0 /*3*/][1] = Global_98931.f_25013.f_77[iVar0];
			Global_52585.f_248[iVar0 /*3*/][1] = Global_98931.f_25013.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_104()
{
	unk_0xA6CBD0155C6CE079("EXTRASUNNY");
	func_187();
	func_159();
	func_106();
	if (!func_24())
	{
		func_105();
	}
	iLocal_3350 = 1;
	unk_0x270066FDBAF3A458(0f);
}

void func_105()
{
	switch (iLocal_3179)
	{
		case 2:
			unk_0x27CC98B7C879C320(unk_0x81873881071CD9FE());
			unk_0xB067093BBAF0A747(unk_0x81873881071CD9FE(), -1019.579f, -484.872f, 36.0795f, 1, 0, 0, 1);
			unk_0xC24172029826A66F(unk_0x81873881071CD9FE(), 93.7701f);
			break;
		
		case 3:
			if (unk_0x7404950238A154C2(iLocal_3258, 0))
			{
				if (!unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_3258, 0))
				{
					unk_0xDC81A805934C85CD(unk_0x81873881071CD9FE(), iLocal_3258, -1);
				}
				unk_0x9765BF567DB87B5F(iLocal_3258, 3000);
				unk_0xCEDA5B7DDF6C8846(iLocal_3258, 0, 1, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 5:
			unk_0x1E2B48EE3EC55DCF(unk_0x81873881071CD9FE());
			unk_0xB067093BBAF0A747(unk_0x81873881071CD9FE(), -935.4413f, -2928.061f, 12.9451f, 1, 0, 0, 1);
			unk_0xC24172029826A66F(unk_0x81873881071CD9FE(), 178.466f);
			unk_0x3B7AFF7DCE22C1CF(unk_0x81873881071CD9FE(), 1);
			break;
		
		case 8:
			unk_0x1E2B48EE3EC55DCF(unk_0x81873881071CD9FE());
			unk_0xB067093BBAF0A747(unk_0x81873881071CD9FE(), -937.5466f, -2968.713f, 12.9451f, 1, 0, 0, 1);
			unk_0xC24172029826A66F(unk_0x81873881071CD9FE(), 111.5016f);
			unk_0x3B7AFF7DCE22C1CF(unk_0x81873881071CD9FE(), 1);
			break;
	}
}

void func_106()
{
	switch (iLocal_3179)
	{
		case 2:
			unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 0, 0);
			unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 0);
			unk_0x7C6BF0CD5D7454C9(-1026.8f, -492.1f, 36f, 18f, 1, 0, 0, 0);
			unk_0x3DD1ED742E99F292(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, 0, 1);
			unk_0x14271BAB2BB24399(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f);
			unk_0x32A12757CBF48A33(joaat("rapidgt"));
			unk_0x32A12757CBF48A33(joaat("surano"));
			unk_0x32A12757CBF48A33(joaat("carbonizzare"));
			while ((!unk_0x33ACB874CECA2D4B(joaat("rapidgt")) || !unk_0x33ACB874CECA2D4B(joaat("surano"))) || !unk_0x33ACB874CECA2D4B(joaat("carbonizzare")))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (!unk_0x86CCCD2FAE9D5E65(iLocal_3258))
			{
				unk_0x7C6BF0CD5D7454C9(Local_3293, 5f, 1, 0, 0, 0);
				iLocal_3258 = unk_0xE00F8DEA9778FC87(joaat("rapidgt"), Local_3293, fLocal_3320, 1, 1);
				unk_0xFD021BAF9614D437(iLocal_3258, 112, 112);
				unk_0x9765BF567DB87B5F(iLocal_3258, 3000);
				unk_0xDEE6369ABB2B517A(iLocal_3258, 1);
				unk_0x887F4488DA99FD21(joaat("rapidgt"));
				unk_0xB5A91586385F755B(joaat("rapidgt"), 1);
				unk_0xEA89E72C99125D9C(iLocal_3258, 1);
				unk_0x50C9C2E3327FDF31(iLocal_3258, 1);
			}
			if (!unk_0x86CCCD2FAE9D5E65(iLocal_3275))
			{
				if (unk_0x33ACB874CECA2D4B(joaat("surano")))
				{
					unk_0x7C6BF0CD5D7454C9(-1037.398f, -491.6539f, 35.5545f, 5f, 1, 0, 0, 0);
					iLocal_3275 = unk_0xE00F8DEA9778FC87(joaat("surano"), -1037.398f, -491.6539f, 35.5545f, 208.889f, 1, 1);
					unk_0xFD021BAF9614D437(iLocal_3275, 0, 0);
					unk_0x9765BF567DB87B5F(iLocal_3275, 3000);
					unk_0xDEE6369ABB2B517A(iLocal_3275, 1);
					unk_0x887F4488DA99FD21(joaat("surano"));
					unk_0xB5A91586385F755B(joaat("surano"), 1);
					unk_0x50C9C2E3327FDF31(iLocal_3275, 1);
				}
			}
			if (!unk_0x86CCCD2FAE9D5E65(iLocal_3276))
			{
				if (unk_0x33ACB874CECA2D4B(joaat("carbonizzare")))
				{
					unk_0x7C6BF0CD5D7454C9(Local_3293, 5f, 1, 0, 0, 0);
					iLocal_3276 = unk_0xE00F8DEA9778FC87(joaat("carbonizzare"), -1033.938f, -489.7475f, 35.8323f, 207.1758f, 1, 1);
					unk_0xFD021BAF9614D437(iLocal_3276, 89, 89);
					unk_0x9765BF567DB87B5F(iLocal_3276, 3000);
					unk_0xDEE6369ABB2B517A(iLocal_3276, 1);
					unk_0x887F4488DA99FD21(joaat("carbonizzare"));
					unk_0xB5A91586385F755B(joaat("carbonizzare"), 1);
					unk_0x50C9C2E3327FDF31(iLocal_3276, 1);
				}
			}
			break;
		
		case 3:
			unk_0xA3BC6AA446F03669("TRV4_CHASE");
			unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 0, 0);
			unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 0);
			func_156();
			unk_0x7C6BF0CD5D7454C9(Local_3296, 200f, 1, 0, 0, 0);
			if (!unk_0x86CCCD2FAE9D5E65(iLocal_3257))
			{
				iLocal_3257 = unk_0xE00F8DEA9778FC87(joaat("cogcabrio"), Local_3296, fLocal_3321, 1, 1);
				unk_0xCEDA5B7DDF6C8846(iLocal_3257, 1, 1, 1, 1, 1, 0, 0, 0);
				unk_0xFD021BAF9614D437(iLocal_3257, 27, 27);
				unk_0x887F4488DA99FD21(joaat("cogcabrio"));
				unk_0x80E2E482FDBC2DD9(iLocal_3257, "SOL_3_MOLLY_CAR_Group", 0);
			}
			if (!unk_0x86CCCD2FAE9D5E65(iLocal_3221))
			{
				iLocal_3221 = unk_0x4D135F3066A9BF9C(iLocal_3257, 26, joaat("ig_molly"), -1, 1, 1);
				unk_0xCEDA5B7DDF6C8846(iLocal_3221, 1, 1, 1, 1, 1, 0, 0, 0);
				unk_0x210A4A0B257F8433(iLocal_3221, 1);
				unk_0x33B1E568CEF14B0D(iLocal_3221, 0);
				unk_0x887F4488DA99FD21(joaat("ig_molly"));
				unk_0x506A601663C5417C(iLocal_3221, joaat("player"));
			}
			if (func_23())
			{
				if (!unk_0x86CCCD2FAE9D5E65(iLocal_3258))
				{
					if (func_155())
					{
						if (!unk_0xE083914AB72DD7CE(func_154()) && !unk_0x1699D7B95446F15C(func_154()))
						{
							iLocal_3258 = func_123(Local_3311, fLocal_3324);
							unk_0x887F4488DA99FD21(func_154());
							unk_0x50C9C2E3327FDF31(iLocal_3258, 1);
						}
						else
						{
							iLocal_3258 = unk_0xE00F8DEA9778FC87(joaat("rapidgt"), Local_3311, fLocal_3324, 1, 1);
							unk_0xFD021BAF9614D437(iLocal_3258, 112, 112);
						}
					}
					else
					{
						iLocal_3258 = unk_0xE00F8DEA9778FC87(joaat("rapidgt"), Local_3311, fLocal_3324, 1, 1);
						unk_0xFD021BAF9614D437(iLocal_3258, 112, 112);
					}
					unk_0x9765BF567DB87B5F(iLocal_3258, 3000);
					unk_0xDEE6369ABB2B517A(iLocal_3258, 1);
					unk_0xCEDA5B7DDF6C8846(iLocal_3258, 0, 1, 0, 0, 0, 0, 0, 0);
					unk_0xEA89E72C99125D9C(iLocal_3258, 1);
					unk_0x887F4488DA99FD21(joaat("rapidgt"));
					unk_0x50C9C2E3327FDF31(iLocal_3258, 1);
				}
			}
			else if (!unk_0x86CCCD2FAE9D5E65(iLocal_3258))
			{
				iLocal_3258 = unk_0xE00F8DEA9778FC87(joaat("rapidgt"), Local_3311, fLocal_3324, 1, 1);
				unk_0xFD021BAF9614D437(iLocal_3258, 112, 112);
				unk_0x887F4488DA99FD21(joaat("rapidgt"));
				unk_0x9765BF567DB87B5F(iLocal_3258, 3000);
				unk_0xDEE6369ABB2B517A(iLocal_3258, 1);
				unk_0xCEDA5B7DDF6C8846(iLocal_3258, 0, 1, 0, 0, 0, 0, 0, 0);
				unk_0xEA89E72C99125D9C(iLocal_3258, 1);
				unk_0x50C9C2E3327FDF31(iLocal_3258, 1);
			}
			break;
		
		case 5:
			iLocal_3351 = 0;
			unk_0x7C6BF0CD5D7454C9(-973.3f, -2967.7f, 13.5f, 100f, 1, 0, 0, 0);
			unk_0xC1B1E9A034A63A62(0);
			unk_0x32A12757CBF48A33(joaat("jet"));
			unk_0x32A12757CBF48A33(joaat("shamal"));
			unk_0x2D148CBB17A2B0C7("BB_MOLLY_2");
			unk_0x32A12757CBF48A33(joaat("s_m_y_airworker"));
			unk_0x32A12757CBF48A33(joaat("s_m_y_cop_01"));
			unk_0x32A12757CBF48A33(joaat("police3"));
			unk_0x32A12757CBF48A33(joaat("ig_molly"));
			unk_0x32A12757CBF48A33(joaat("cogcabrio"));
			unk_0x32A12757CBF48A33(joaat("rapidgt"));
			unk_0x32A12757CBF48A33(joaat("prop_cs_film_reel_01"));
			unk_0x995DCDA796A47049(68, "BB_Chase");
			unk_0x995DCDA796A47049(69, "BB_Chase");
			unk_0x2D148CBB17A2B0C7("Trev4_5");
			unk_0x18C8823792832C78();
			unk_0x295DC04FC13E025B("move_f@film_reel_arms");
			unk_0x295DC04FC13E025B("misssolomon_3");
			while (((((((((((((((!unk_0x33ACB874CECA2D4B(joaat("jet")) || !unk_0x33ACB874CECA2D4B(joaat("shamal"))) || !unk_0x0F7866B4F5BE7CD4("BB_MOLLY_2")) || !unk_0x33ACB874CECA2D4B(joaat("s_m_y_airworker"))) || !unk_0x33ACB874CECA2D4B(joaat("s_m_y_cop_01"))) || !unk_0x33ACB874CECA2D4B(joaat("police3"))) || !unk_0x33ACB874CECA2D4B(joaat("ig_molly"))) || !unk_0x33ACB874CECA2D4B(joaat("cogcabrio"))) || !unk_0x33ACB874CECA2D4B(joaat("rapidgt"))) || !unk_0x33ACB874CECA2D4B(joaat("prop_cs_film_reel_01"))) || !unk_0x498998F33897432E(68, "BB_Chase")) || !unk_0x498998F33897432E(69, "BB_Chase")) || !unk_0x0F7866B4F5BE7CD4("Trev4_5")) || !unk_0x7A74065A1435C8AB()) || !unk_0x8E8B546E1A81D27F("move_f@film_reel_arms")) || !unk_0x8E8B546E1A81D27F("misssolomon_3"))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (!unk_0x86CCCD2FAE9D5E65(iLocal_3221))
			{
				iLocal_3221 = unk_0x206897C6DBC12488(26, joaat("ig_molly"), -920.5093f, -2943.93f, 12.9451f, 157.6203f, 1, 1);
				unk_0x210A4A0B257F8433(iLocal_3221, 1);
				unk_0x33B1E568CEF14B0D(iLocal_3221, 0);
				unk_0x1D15D99A10A15334(iLocal_3221, 1);
				unk_0x887F4488DA99FD21(joaat("ig_molly"));
				unk_0x3B7AFF7DCE22C1CF(iLocal_3221, 1);
				unk_0x506A601663C5417C(iLocal_3221, joaat("player"));
			}
			iLocal_3282 = unk_0xF364195A57BB7AE3(joaat("prop_cs_film_reel_01"), -929f, -2917f, 13f, 1, 1, 0);
			unk_0x75F9EE7629363312(iLocal_3282, iLocal_3221, unk_0xDED1B3B1138F742B(iLocal_3221, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			if (!unk_0x86CCCD2FAE9D5E65(iLocal_3265))
			{
				iLocal_3265 = unk_0xE00F8DEA9778FC87(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 1, 1);
				unk_0x24F85A008ECA63FB(iLocal_3265, 2);
				unk_0x8F26EC305B587F81(iLocal_3265, 0);
				unk_0xA8F22633ACC22189(iLocal_3265, 1);
				unk_0xCEDA5B7DDF6C8846(iLocal_3265, 1, 1, 1, 1, 1, 0, 0, 0);
				unk_0x887F4488DA99FD21(joaat("jet"));
				unk_0x6927F8C100125A71(iLocal_3265, 500);
			}
			if (func_23())
			{
				if (func_155())
				{
					func_121();
					while (!func_112())
					{
						unk_0x4EDE34FBADD967A6(0);
					}
				}
				if (!unk_0x86CCCD2FAE9D5E65(iLocal_3258))
				{
					if (func_155())
					{
						iLocal_3258 = func_123(-918.6263f, -2926.631f, 12.9666f, 43.1705f);
						unk_0xEA89E72C99125D9C(iLocal_3258, 1);
						unk_0x887F4488DA99FD21(func_154());
						unk_0x50C9C2E3327FDF31(iLocal_3258, 1);
					}
					else
					{
						iLocal_3258 = unk_0xE00F8DEA9778FC87(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, 1);
						unk_0xFD021BAF9614D437(iLocal_3258, 112, 112);
						unk_0xEA89E72C99125D9C(iLocal_3258, 1);
						unk_0x887F4488DA99FD21(joaat("rapidgt"));
						unk_0x50C9C2E3327FDF31(iLocal_3258, 1);
					}
				}
			}
			else if (!unk_0x86CCCD2FAE9D5E65(iLocal_3258))
			{
				iLocal_3258 = unk_0xE00F8DEA9778FC87(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, 1);
				unk_0xFD021BAF9614D437(iLocal_3258, 112, 112);
				unk_0x887F4488DA99FD21(joaat("rapidgt"));
				unk_0xEA89E72C99125D9C(iLocal_3258, 1);
				unk_0x50C9C2E3327FDF31(iLocal_3258, 1);
			}
			if (!unk_0x86CCCD2FAE9D5E65(iLocal_3257))
			{
				iLocal_3257 = unk_0xE00F8DEA9778FC87(joaat("cogcabrio"), -928.3279f, -2916.16f, 12.945f, 61.7688f, 1, 1);
				unk_0xFD021BAF9614D437(iLocal_3257, 27, 27);
				unk_0x887F4488DA99FD21(joaat("cogcabrio"));
			}
			if (!unk_0x86CCCD2FAE9D5E65(iLocal_3262))
			{
				iLocal_3262 = unk_0xE00F8DEA9778FC87(joaat("police3"), -924.2796f, -2914.371f, 12.945f, 86.6188f, 1, 1);
			}
			if (!unk_0x86CCCD2FAE9D5E65(iLocal_3247))
			{
				iLocal_3247 = unk_0x206897C6DBC12488(6, joaat("s_m_y_cop_01"), -922.942f, -2912.509f, 12.945f, 156.2652f, 1, 1);
				unk_0x8E4A427F5C43E416(iLocal_3247, joaat("weapon_pistol"), 1000, 1, 1);
				func_111(iLocal_3247, 0);
				unk_0x887F4488DA99FD21(joaat("s_m_y_cop_01"));
			}
			unk_0xC1B1E9A034A63A62(0);
			func_110(2, 1);
			iLocal_3359 = 1;
			break;
		
		case 8:
			unk_0x7C6BF0CD5D7454C9(-973.3f, -2967.7f, 13.5f, 100f, 1, 0, 0, 0);
			unk_0xC1B1E9A034A63A62(0);
			iLocal_3351 = 0;
			iLocal_3359 = 0;
			iLocal_3338 = 0;
			unk_0x32A12757CBF48A33(joaat("jet"));
			unk_0x32A12757CBF48A33(joaat("s_m_y_airworker"));
			unk_0x32A12757CBF48A33(joaat("shamal"));
			unk_0x32A12757CBF48A33(joaat("s_m_y_cop_01"));
			unk_0x32A12757CBF48A33(joaat("police3"));
			unk_0x32A12757CBF48A33(joaat("cogcabrio"));
			unk_0x32A12757CBF48A33(joaat("rapidgt"));
			unk_0x32A12757CBF48A33(joaat("prop_jet_bloodsplat_01"));
			unk_0x995DCDA796A47049(68, "BB_Chase");
			unk_0x995DCDA796A47049(69, "BB_Chase");
			unk_0x18C8823792832C78();
			while ((((((((((!unk_0x33ACB874CECA2D4B(joaat("jet")) || !unk_0x33ACB874CECA2D4B(joaat("s_m_y_airworker"))) || !unk_0x33ACB874CECA2D4B(joaat("shamal"))) || !unk_0x33ACB874CECA2D4B(joaat("s_m_y_cop_01"))) || !unk_0x33ACB874CECA2D4B(joaat("police3"))) || !unk_0x33ACB874CECA2D4B(joaat("cogcabrio"))) || !unk_0x33ACB874CECA2D4B(joaat("rapidgt"))) || !unk_0x33ACB874CECA2D4B(joaat("prop_jet_bloodsplat_01"))) || !unk_0x498998F33897432E(68, "BB_Chase")) || !unk_0x498998F33897432E(69, "BB_Chase")) || !unk_0x7A74065A1435C8AB())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			func_109();
			if (func_23())
			{
				if (func_155())
				{
					func_121();
					while (!func_112())
					{
						unk_0x4EDE34FBADD967A6(0);
					}
				}
				if (!unk_0x86CCCD2FAE9D5E65(iLocal_3258))
				{
					if (func_155())
					{
						iLocal_3258 = func_123(-918.6263f, -2926.631f, 12.9666f, 43.1705f);
						unk_0xEA89E72C99125D9C(iLocal_3258, 1);
						unk_0x887F4488DA99FD21(func_154());
						unk_0x50C9C2E3327FDF31(iLocal_3258, 1);
					}
					else
					{
						iLocal_3258 = unk_0xE00F8DEA9778FC87(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, 1);
						unk_0xFD021BAF9614D437(iLocal_3258, 112, 112);
						unk_0xEA89E72C99125D9C(iLocal_3258, 1);
						unk_0x887F4488DA99FD21(joaat("rapidgt"));
						unk_0x50C9C2E3327FDF31(iLocal_3258, 1);
					}
				}
			}
			else if (!unk_0x86CCCD2FAE9D5E65(iLocal_3258))
			{
				iLocal_3258 = unk_0xE00F8DEA9778FC87(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, 1);
				unk_0xFD021BAF9614D437(iLocal_3258, 112, 112);
				unk_0x887F4488DA99FD21(joaat("rapidgt"));
				unk_0xEA89E72C99125D9C(iLocal_3258, 1);
				unk_0x50C9C2E3327FDF31(iLocal_3258, 1);
			}
			if (!unk_0x86CCCD2FAE9D5E65(iLocal_3257))
			{
				iLocal_3257 = unk_0xE00F8DEA9778FC87(joaat("cogcabrio"), -928.3279f, -2916.16f, 12.945f, 61.7688f, 1, 1);
				unk_0xFD021BAF9614D437(iLocal_3257, 27, 27);
				unk_0x887F4488DA99FD21(joaat("cogcabrio"));
			}
			if (!unk_0x86CCCD2FAE9D5E65(iLocal_3262))
			{
				iLocal_3262 = unk_0xE00F8DEA9778FC87(joaat("police3"), -924.2796f, -2914.371f, 12.945f, 86.6188f, 1, 1);
			}
			if (!unk_0x86CCCD2FAE9D5E65(iLocal_3247))
			{
				iLocal_3247 = unk_0x206897C6DBC12488(6, joaat("s_m_y_cop_01"), -922.942f, -2912.509f, 12.945f, 156.2652f, 1, 1);
				unk_0x8E4A427F5C43E416(iLocal_3247, joaat("weapon_pistol"), 1000, 1, 1);
				func_111(iLocal_3247, 0);
				unk_0x887F4488DA99FD21(joaat("s_m_y_cop_01"));
			}
			if (!unk_0x86CCCD2FAE9D5E65(iLocal_3281))
			{
				iLocal_3281 = unk_0xF364195A57BB7AE3(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, 1, 1, 0);
				unk_0x3A45EB0810EBE71C(iLocal_3281, 0f, 0f, -121.5948f, 2, 1);
				unk_0x5D6F89F6DD9B0781(iLocal_3281, 0f, 0f, 0.8729f, -0.4879f);
				unk_0x887F4488DA99FD21(joaat("prop_jet_bloodsplat_01"));
			}
			if (!unk_0x86CCCD2FAE9D5E65(iLocal_3265))
			{
				iLocal_3265 = unk_0xE00F8DEA9778FC87(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 1, 1);
				unk_0x24F85A008ECA63FB(iLocal_3265, 2);
				unk_0x8F26EC305B587F81(iLocal_3265, 0);
				unk_0xA8F22633ACC22189(iLocal_3265, 1);
				unk_0xCEDA5B7DDF6C8846(iLocal_3265, 1, 1, 1, 1, 1, 0, 0, 0);
				unk_0x887F4488DA99FD21(joaat("jet"));
				uLocal_3762 = unk_0xAB454B9B11E38180("scr_trev4_747_engine_damage", iLocal_3265, -11.956f, 10.528f, -7.657f, 0f, 2f, 0f, 1065353216, 0, 0, 0);
				unk_0x6927F8C100125A71(iLocal_3265, 500);
			}
			if (!unk_0x86CCCD2FAE9D5E65(iLocal_3227))
			{
				iLocal_3227 = unk_0x206897C6DBC12488(26, joaat("s_m_y_airworker"), -933.8942f, -2965.785f, 12.9451f, 331.7339f, 1, 1);
				func_17(&uLocal_3577, 4, iLocal_3227, "HangerWorker", 0, 1);
				unk_0x887F4488DA99FD21(joaat("s_m_y_airworker"));
				unk_0x33B1E568CEF14B0D(iLocal_3227, 1);
				unk_0x1D15D99A10A15334(iLocal_3227, 1);
				unk_0x754376E2234CBB4A(iLocal_3227, unk_0x81873881071CD9FE(), 150f, -1, 0, 0);
				unk_0x6CB332CB31E9FA96(iLocal_3227, 1);
				unk_0xCEDA5B7DDF6C8846(iLocal_3227, 0, 0, 0, 0, 0, 0, 0, 0);
				unk_0x71A8BCA218722FA1(&iLocal_3227);
			}
			if (func_108(0) == 0 || func_108(0) == joaat("weapon_unarmed"))
			{
				func_107(1);
			}
			break;
	}
}

void func_107(int iParam0)
{
	int iVar0;
	
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		iVar0 = unk_0x44149D3E0AE3AB22(unk_0x81873881071CD9FE(), 0);
		if (iVar0 != joaat("weapon_unarmed"))
		{
			unk_0x649CF94A4282A7FD(unk_0x81873881071CD9FE(), iVar0, iParam0);
		}
	}
}

int func_108(int iParam0)
{
	if (Global_90846 > 0)
	{
		return Global_94997.f_21[iParam0];
	}
	return Global_92592.f_21[iParam0];
}

void func_109()
{
	if (iLocal_3338 == 0)
	{
		if (!unk_0x86CCCD2FAE9D5E65(iLocal_3267[0]))
		{
			iLocal_3267[0] = unk_0xE00F8DEA9778FC87(joaat("police3"), -994.5278f, -2903.285f, 12.9447f, 158.7951f, 1, 1);
			unk_0x40F51ABAD34CAD94(iLocal_3267[0], 0);
		}
		if (!unk_0x86CCCD2FAE9D5E65(iLocal_3232[0]))
		{
			iLocal_3232[0] = unk_0x206897C6DBC12488(6, joaat("s_m_y_cop_01"), -969.06f, -2955.186f, 12.945f, 241.1703f, 1, 1);
			unk_0x8E4A427F5C43E416(iLocal_3232[0], joaat("weapon_pistol"), 1000, 1, 1);
			unk_0xD31C3826B16CD027(iLocal_3232[0], 20);
			unk_0x3B7AFF7DCE22C1CF(iLocal_3232[0], 1);
			unk_0xE7D69AA8A129E7D3(iLocal_3232[0], unk_0x81873881071CD9FE(), -1, 1);
			func_111(iLocal_3232[0], 0);
		}
		if (!unk_0x86CCCD2FAE9D5E65(iLocal_3266))
		{
			iLocal_3266 = unk_0xE00F8DEA9778FC87(joaat("shamal"), -968.3718f, -2952.298f, 12.9451f, 114.9439f, 1, 1);
			unk_0x5CC9D6711FE01F0D(iLocal_3266);
			unk_0x887F4488DA99FD21(joaat("shamal"));
			unk_0x9765BF567DB87B5F(iLocal_3266, 2000);
			unk_0x4DBA43D6DE677017(iLocal_3266, 0, 0, 1);
		}
		if (!unk_0x86CCCD2FAE9D5E65(iLocal_3232[6]))
		{
			iLocal_3232[6] = unk_0x4D135F3066A9BF9C(iLocal_3267[0], 6, joaat("s_m_y_cop_01"), 0, 1, 1);
			unk_0x8E4A427F5C43E416(iLocal_3232[6], joaat("weapon_pistol"), 1000, 1, 1);
			unk_0xD31C3826B16CD027(iLocal_3232[6], 20);
			unk_0x3B7AFF7DCE22C1CF(iLocal_3232[6], 1);
			unk_0x1D15D99A10A15334(iLocal_3232[6], 1);
			func_111(iLocal_3232[6], 0);
		}
		if (!unk_0x86CCCD2FAE9D5E65(iLocal_3232[7]))
		{
			iLocal_3232[7] = unk_0x4D135F3066A9BF9C(iLocal_3267[0], 6, joaat("s_m_y_cop_01"), -1, 1, 1);
			unk_0x8E4A427F5C43E416(iLocal_3232[7], joaat("weapon_pistol"), 1000, 1, 1);
			unk_0xD31C3826B16CD027(iLocal_3232[7], 20);
			unk_0x3B7AFF7DCE22C1CF(iLocal_3232[7], 1);
			unk_0x1D15D99A10A15334(iLocal_3232[7], 1);
			func_111(iLocal_3232[7], 0);
		}
		if (!unk_0x86CCCD2FAE9D5E65(iLocal_3267[1]))
		{
			iLocal_3267[1] = unk_0xE00F8DEA9778FC87(joaat("police3"), -962.2432f, -2864.16f, 12.9447f, 149.5586f, 1, 1);
			unk_0x40F51ABAD34CAD94(iLocal_3267[1], 0);
		}
		if (!unk_0x86CCCD2FAE9D5E65(iLocal_3232[8]))
		{
			iLocal_3232[8] = unk_0x4D135F3066A9BF9C(iLocal_3267[1], 6, joaat("s_m_y_cop_01"), 0, 1, 1);
			unk_0x8E4A427F5C43E416(iLocal_3232[8], joaat("weapon_pistol"), 1000, 1, 1);
			unk_0xD31C3826B16CD027(iLocal_3232[8], 20);
			unk_0x3B7AFF7DCE22C1CF(iLocal_3232[8], 1);
			unk_0x1D15D99A10A15334(iLocal_3232[8], 1);
			func_111(iLocal_3232[8], 0);
		}
		if (!unk_0x86CCCD2FAE9D5E65(iLocal_3232[9]))
		{
			iLocal_3232[9] = unk_0x4D135F3066A9BF9C(iLocal_3267[1], 6, joaat("s_m_y_cop_01"), -1, 1, 1);
			unk_0x8E4A427F5C43E416(iLocal_3232[9], joaat("weapon_pistol"), 1000, 1, 1);
			unk_0xD31C3826B16CD027(iLocal_3232[9], 20);
			unk_0x3B7AFF7DCE22C1CF(iLocal_3232[9], 1);
			unk_0x1D15D99A10A15334(iLocal_3232[9], 1);
			func_111(iLocal_3232[9], 0);
		}
		if (!unk_0x86CCCD2FAE9D5E65(iLocal_3232[10]))
		{
			iLocal_3232[10] = unk_0x206897C6DBC12488(6, joaat("s_m_y_cop_01"), -922.1185f, -2939.595f, 12.9451f, 156.1408f, 1, 1);
			unk_0x8E4A427F5C43E416(iLocal_3232[10], joaat("weapon_pistol"), 1000, 1, 1);
			unk_0xD31C3826B16CD027(iLocal_3232[10], 20);
			unk_0x3B7AFF7DCE22C1CF(iLocal_3232[10], 1);
			unk_0x1D15D99A10A15334(iLocal_3232[10], 1);
			func_111(iLocal_3232[10], 0);
			unk_0x0312925C32B20A0E(iLocal_3232[10], 1);
		}
		iLocal_3338 = 1;
	}
}

void func_110(int iParam0, int iParam1)
{
	unk_0xF3148AAF69AF9CBC(&Global_25103, iParam0);
	StringCopy(&(Global_25104[iParam0 /*6*/]), unk_0x11CA2334E341B424(), 24);
	Global_25159[iParam0] = iParam1;
}

void func_111(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 64)
		{
			if (Global_55432[iVar0 /*2*/] != 0)
			{
				if (Global_55432[iVar0 /*2*/] == iParam0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
	if (64 == Global_55431)
	{
		return;
	}
	iVar1 = -1;
	iVar2 = 0;
	while (iVar1 == -1 && iVar2 != 64)
	{
		if (Global_55432[iVar2 /*2*/] == 0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	Global_55432[iVar1 /*2*/] = iParam0;
	Global_55432[iVar1 /*2*/].f_1 = 7;
	Global_55431++;
}

bool func_112()
{
	return func_113(&(Global_94997.f_2311));
}

int func_113(var uParam0)
{
	if (func_114(uParam0))
	{
		if (unk_0x33ACB874CECA2D4B(uParam0->f_12.f_66))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_114(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_115(uParam0->f_12.f_66))
	{
		return 0;
	}
	return 1;
}

int func_115(int iParam0)
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
		if (!func_120())
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
		if ((((!func_119() && !func_118()) && !func_117()) && !func_116()) && !func_120())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x3F0C224D3CC05EF2() || unk_0x913B1C01C1BA6C6F()) || unk_0xEC209B562C5EFDB2())
		{
		}
		else if (!func_117())
		{
			return 0;
		}
	}
	return 1;
}

int func_116()
{
	return 0;
}

int func_117()
{
	return 1;
}

int func_118()
{
	return 1;
}

int func_119()
{
	if (unk_0x2D6859674806FDCE(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_120()
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
					uVar0 = unk_0xE19FDB171CBF814A(866);
					unk_0xF3148AAF69AF9CBC(&uVar0, 0);
					unk_0x0A726855B16BE29A(uVar0);
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

void func_121()
{
	func_122(&(Global_94997.f_2311));
}

void func_122(var uParam0)
{
	if (func_114(uParam0))
	{
		unk_0x32A12757CBF48A33(uParam0->f_12.f_66);
	}
}

int func_123(struct<3> Param0, float fParam3)
{
	return func_124(&(Global_94997.f_2311), Param0, fParam3, 0);
}

int func_124(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (func_114(uParam0))
	{
		if (func_68(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (unk_0xE15A3D0C3294EAF3(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
		if (func_113(uParam0))
		{
			unk_0x7C6BF0CD5D7454C9(Param1, 5f, 1, 0, 0, 0);
			func_153(Param1, 5f, 0);
			iVar0 = unk_0xE00F8DEA9778FC87(uParam0->f_12.f_66, Param1, fParam4, 1, 1);
			if (unk_0x86CCCD2FAE9D5E65(iVar0))
			{
				Var1 = { unk_0xB6AE0DAE06D56288(iVar0, 1) };
				if (unk_0xB7A628320EFF8E47(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0xB901CB880393ADF7(iVar0, Param1, 0, 0, 1);
				}
				func_146(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (unk_0x9F59BCFFFEAAD4B1(uParam0->f_12.f_66) || unk_0xE10D8610CC6BB347(uParam0->f_12.f_66))
				{
					if (!unk_0x8F5A903B7374B7A0(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					unk_0x5CC9D6711FE01F0D(iVar0);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (unk_0x61A26017817C6AED(unk_0x14B7103DBD149FFE(iVar0)))
						{
							func_145(uParam0->f_11, 1);
						}
						else if (unk_0xC5ABD699DDC9D5A0(unk_0x14B7103DBD149FFE(iVar0)))
						{
							func_145(uParam0->f_11, 2);
						}
					}
					unk_0x726A9B2010B2B4D6(iVar0, 0);
					unk_0x40F51ABAD34CAD94(iVar0, 0);
					unk_0x50C9C2E3327FDF31(iVar0, 1);
					func_144(iVar0, uParam0->f_11);
				}
				else if ((!func_141(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0xD994929E13CC1ED5(unk_0x11CA2334E341B424(), "startup_positioning"))
				{
					iVar8 = func_140(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_135(iVar8);
					}
				}
				if (((Global_90809 != 13 && Global_90809 != 10) && Global_90809 != 11) && Global_90809 != 12)
				{
					if (unk_0x8DAF7A748E41AD46(&(Global_90809.f_3)) == Global_68877)
					{
						if (uParam0->f_12.f_66 == Global_98931.f_18731.f_69[21 /*78*/].f_66)
						{
							func_132(24, 0);
							func_135(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_125(iVar0, uParam0->f_11);
				}
				unk_0x887F4488DA99FD21(uParam0->f_12.f_66);
				Var1 = { unk_0xB6AE0DAE06D56288(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_125(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_126(iParam0))
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
	func_39(iParam0, &(Global_98931.f_18731.f_5510));
}

int func_126(int iParam0)
{
	if ((((((((((!unk_0x86CCCD2FAE9D5E65(iParam0) || !unk_0x7404950238A154C2(iParam0, 0)) || func_44(iParam0, 0, 0)) || func_44(iParam0, 1, 0)) || func_44(iParam0, 2, 0)) || func_34(iParam0) != 145) || func_131(iParam0)) || func_130(iParam0)) || func_129(iParam0)) || func_128(iParam0)) || !func_127(unk_0x14B7103DBD149FFE(iParam0)))
	{
		if (func_130(iParam0))
		{
		}
		if (func_130(iParam0))
		{
		}
		if (func_44(iParam0, 0, 0))
		{
		}
		if (func_44(iParam0, 1, 0))
		{
		}
		if (func_44(iParam0, 2, 0))
		{
		}
		if (func_34(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_127(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_115(iParam0))
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

int func_128(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x14B7103DBD149FFE(iParam0);
	sVar1 = unk_0xE0DCE5625B61B0CC(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xD994929E13CC1ED5(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_115(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_129(int iParam0)
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

int func_130(int iParam0)
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

int func_131(int iParam0)
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

void func_132(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_134(iParam0, 0))
		{
			func_133(iParam0, 1, 0);
			func_133(iParam0, 2, 0);
			func_133(iParam0, 3, 0);
			func_133(iParam0, 4, 0);
			func_133(iParam0, 0, 1);
			Global_67889[iParam0] = 1;
		}
	}
	else
	{
		func_133(iParam0, 0, 0);
	}
}

void func_133(int iParam0, int iParam1, bool bParam2)
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

bool func_134(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x236D8AD7EE179F46(Global_98931.f_18731[iParam0], iParam1);
}

void func_135(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_139(&(Global_67889.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x86CCCD2FAE9D5E65(Global_67889.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				if (unk_0x7404950238A154C2(Global_67889.f_139[iParam0], 0))
				{
					if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), Global_67889.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0xD768713E73165208(Global_67889.f_139[iParam0], 1, 1);
				unk_0x5D00E836B6BE8693(&(Global_67889.f_139[iParam0]));
			}
		}
		Global_67889[iParam0] = 1;
		if (unk_0x236D8AD7EE179F46(Global_67889.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_134(iParam0, 0)) && Global_68798.f_66 == 0) && Global_98931.f_18731.f_1958[Global_67889.f_555[0 /*21*/].f_14] != 0) && Global_98931.f_18731.f_1958[Global_67889.f_555[0 /*21*/].f_14] > 3) && (!func_137(0, Global_67889.f_555[0 /*21*/].f_12) || !func_137(1, Global_67889.f_555[0 /*21*/].f_12)))
			{
				func_136(&(Global_98931.f_18731.f_69[Global_67889.f_555[0 /*21*/].f_14 /*78*/]), &Global_68798);
				Global_68876 = Global_98931.f_18731.f_5591;
			}
			func_132(iParam0, 0);
		}
	}
}

void func_136(var uParam0, var uParam1)
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

int func_137(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_138(&(Global_98931.f_18731.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_115(Global_98931.f_18731.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66);
}

int func_138(var uParam0)
{
	return *uParam0;
}

int func_139(var uParam0, int iParam1)
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
			uParam0->f_4 = func_36(0, 1);
			uParam0->f_12 = 0;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 20);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_36(0, 1);
			uParam0->f_12 = 0;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 20);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_36(1, 1);
			uParam0->f_12 = 1;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 20);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_36(1, 2);
			uParam0->f_12 = 1;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 19);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_36(1, 1);
			uParam0->f_12 = 1;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 20);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_36(1, 2);
			uParam0->f_12 = 1;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 19);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_36(2, 1);
			uParam0->f_12 = 2;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 20);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_36(2, 1);
			uParam0->f_12 = 2;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 20);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_36(2, 1);
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
			if (func_120())
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
			if (func_120())
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
		if (!func_68(Global_98931.f_18731.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_68(Global_98931.f_1750.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_98931.f_1750.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_98931.f_1750.f_539.f_2837[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0x236D8AD7EE179F46(uParam0->f_9, 20))
	{
		if (!func_68(Global_98931.f_1750.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_98931.f_1750.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_98931.f_1750.f_539.f_2837[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_140(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0x86CCCD2FAE9D5E65(Global_67889.f_484[iVar0]) && !unk_0x930F8FBB8E9537CC(Global_67889.f_484[iVar0])) && unk_0x7404950238A154C2(Global_67889.f_484[iVar0], 0))
		{
			unk_0x1D3AAB0507DD3600(iParam0, &iVar1, &iVar2);
			unk_0x1D3AAB0507DD3600(Global_67889.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0x14B7103DBD149FFE(iParam0) == unk_0x14B7103DBD149FFE(Global_67889.f_484[iVar0]) && unk_0xA3EFB2F9FFCDC48D(iParam0) == unk_0xA3EFB2F9FFCDC48D(Global_67889.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_141(int iParam0, struct<3> Param1, bool bParam4)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0x14B7103DBD149FFE(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_143(iParam0, Global_67889.f_139[38], 0))
			{
				func_135(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_143(iParam0, Global_67889.f_139[43], 1))
			{
				func_135(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = unk_0x4E560E0D96659196(unk_0x81873881071CD9FE(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_143(iParam0, uVar1[iVar6], 1) && func_142(unk_0xB6AE0DAE06D56288(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam4 || func_68(Param1, 0f, 0f, 0f, 0)) || unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(iParam0, 1), unk_0xB6AE0DAE06D56288(uVar1[iVar6], 1), 1) < 10f)
					{
						unk_0x5D00E836B6BE8693(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar6++;
			}
			break;
		
		case joaat("luxor2"):
			if ((unk_0x86CCCD2FAE9D5E65(Global_67889.f_484[14]) && unk_0x7404950238A154C2(iParam0, 0)) && unk_0x7404950238A154C2(Global_67889.f_484[14], 0))
			{
				if (unk_0x14B7103DBD149FFE(Global_67889.f_484[14]) == joaat("luxor2") && unk_0xA3EFB2F9FFCDC48D(iParam0) == unk_0xA3EFB2F9FFCDC48D(Global_67889.f_484[14]))
				{
					func_135(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0x86CCCD2FAE9D5E65(Global_67889.f_484[20]) && unk_0x7404950238A154C2(iParam0, 0)) && unk_0x7404950238A154C2(Global_67889.f_484[20], 0))
			{
				if (unk_0x14B7103DBD149FFE(Global_67889.f_484[20]) == joaat("swift2") && unk_0xA3EFB2F9FFCDC48D(iParam0) == unk_0xA3EFB2F9FFCDC48D(Global_67889.f_484[20]))
				{
					func_135(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_142(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0xB9AA84B14E04BC20((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xB9AA84B14E04BC20((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xB9AA84B14E04BC20((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xB9AA84B14E04BC20((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xB9AA84B14E04BC20((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_143(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0x86CCCD2FAE9D5E65(iParam1) && !unk_0x930F8FBB8E9537CC(iParam1)) && unk_0x7404950238A154C2(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0x1D3AAB0507DD3600(iParam0, &iVar0, &iVar1);
			unk_0x1D3AAB0507DD3600(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_144(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x86CCCD2FAE9D5E65(Global_88473[iVar0]))
		{
			Global_88473[iVar0] = iParam0;
			Global_88483[iVar0] = iParam1;
			Global_88493[iVar0] = unk_0x14B7103DBD149FFE(iParam0);
			if (unk_0x61A26017817C6AED(Global_88493[iVar0]))
			{
				Global_88521[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_88521[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_145(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x86CCCD2FAE9D5E65(Global_88473[iVar0]))
		{
			if (iParam0 == 145 || Global_88483[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x14B7103DBD149FFE(Global_88473[iVar0]) == func_36(iParam0, iParam1))
				{
					if (!unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), Global_88473[iVar0], 0))
					{
						unk_0xD768713E73165208(Global_88473[iVar0], 0, 1);
						unk_0x5D00E836B6BE8693(&(Global_88473[iVar0]));
						Global_88483[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_146(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (unk_0x7404950238A154C2(iParam0, 0))
	{
		if (unk_0x8DAF7A748E41AD46(&(uParam1->f_1)) != 0)
		{
			unk_0xA9FDEEBC09186222(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < unk_0x5393C767E0A1742B())
		{
			unk_0x1E6C0DB293E78345(iParam0, *uParam1);
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
		}
		if (unk_0x236D8AD7EE179F46(uParam1->f_77, 13))
		{
			unk_0x80D60E160186B2B6(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xF72A7A302D6CE95C(iParam0);
		}
		if (unk_0x236D8AD7EE179F46(uParam1->f_77, 12))
		{
			unk_0x5D9A3C8DE55806B3(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xC6F2A508D9D94662(iParam0);
		}
		unk_0xFD021BAF9614D437(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0x3CA38E5C9A060AAD(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0x236D8AD7EE179F46(uParam1->f_77, 15) || func_152(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_151())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		unk_0xCAFB5A22098B8EA4(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			unk_0xBA0A17020F825714(iParam0, 0);
		}
		else
		{
			unk_0xBA0A17020F825714(iParam0, 0);
			unk_0xBA0A17020F825714(iParam0, uParam1->f_65);
		}
		unk_0xDD213338390D43E1(iParam0, !unk_0x236D8AD7EE179F46(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0xC390A6485FB80923(iParam0, uParam1->f_70);
		}
		unk_0x34318363F8442B01(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0x797EA5FDEC3CF253(iParam0, 2, unk_0x236D8AD7EE179F46(uParam1->f_77, 28));
		unk_0x797EA5FDEC3CF253(iParam0, 3, unk_0x236D8AD7EE179F46(uParam1->f_77, 29));
		unk_0x797EA5FDEC3CF253(iParam0, 0, unk_0x236D8AD7EE179F46(uParam1->f_77, 30));
		unk_0x797EA5FDEC3CF253(iParam0, 1, unk_0x236D8AD7EE179F46(uParam1->f_77, 31));
		unk_0xF239D177F4EB07F9(iParam0, unk_0x236D8AD7EE179F46(uParam1->f_77, 10));
		if (unk_0x9DCB5D9F2125C30D(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0x24F85A008ECA63FB(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0xD382045D1EFD12D3(unk_0x14B7103DBD149FFE(iParam0)))
			{
				if (unk_0xC5ABD699DDC9D5A0(unk_0x14B7103DBD149FFE(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_150(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_150(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0xD31A4E6B116BE250(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x1AFB2E2B0F799DD7(iParam0, 1);
			}
			else
			{
				unk_0xC9340C45BD8F401B(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_147(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xE083914AB72DD7CE(uParam1->f_66) && !unk_0x9F59BCFFFEAAD4B1(uParam1->f_66))
		{
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				if (unk_0x236D8AD7EE179F46(uParam1->f_77, func_40(iVar0 + 1)))
				{
					if (!unk_0x5CBBEE14743C3376(iParam0, iVar0 + 1))
					{
						unk_0x90B59F54B0DB5FF7(iParam0, iVar0 + 1, 0);
					}
				}
				else if (unk_0x5CBBEE14743C3376(iParam0, iVar0 + 1))
				{
					unk_0x90B59F54B0DB5FF7(iParam0, iVar0 + 1, 1);
				}
				iVar0++;
			}
		}
		if (unk_0x1699D7B95446F15C(uParam1->f_66))
		{
			if (!unk_0x236D8AD7EE179F46(uParam1->f_77, 23))
			{
				if (unk_0x236D8AD7EE179F46(uParam1->f_77, 22))
				{
					unk_0xDE113FA802D77FA6(iParam0, 2);
				}
				else
				{
					unk_0xDE113FA802D77FA6(iParam0, 3);
				}
			}
			else
			{
				unk_0xDE113FA802D77FA6(iParam0, 4);
			}
		}
		if (unk_0x236D8AD7EE179F46(uParam1->f_77, 27))
		{
			unk_0xDD6B145BC3BFD188(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0xDD6B145BC3BFD188(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_147(int iParam0, var uParam1, var uParam2)
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
	unk_0xF196EBA065B17452(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0xC163DC4217AA2669(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0x64D946BA23568D30(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x5039214D6DAE5ECC(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x323720FEE81B53C0(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x323720FEE81B53C0(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x323720FEE81B53C0(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if ((unk_0x728464249800975B(*iParam0, 38) != 0 && unk_0x728464249800975B(*iParam0, 24) != 0) && unk_0x64D946BA23568D30(*iParam0, 24) != func_149(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x323720FEE81B53C0(*iParam0, 24, func_149(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	if (func_148(*iParam0))
	{
		unk_0xDEE6369ABB2B517A(*iParam0, 1);
		unk_0x50C9C2E3327FDF31(*iParam0, 1);
	}
	return 1;
}

int func_148(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x86CCCD2FAE9D5E65(iParam0) && unk_0x7404950238A154C2(iParam0, 0)) && unk_0xBE23E5C609DF6E79(iParam0) > 0)
	{
		unk_0xF196EBA065B17452(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x64D946BA23568D30(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0xFAEBBFA35E2022F2(iParam0, iVar1, unk_0x64D946BA23568D30(iParam0, iVar1)), 16);
				iVar2 = unk_0x8DAF7A748E41AD46(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x8DAF7A748E41AD46("MNU_CAGE") || iVar2 == unk_0x8DAF7A748E41AD46("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_149(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x86CCCD2FAE9D5E65(iParam0) && unk_0x7404950238A154C2(iParam0, 0))
	{
		iVar0 = unk_0x728464249800975B(iParam0, 38);
		iVar1 = unk_0x728464249800975B(iParam0, 24);
		fVar2 = (unk_0xBBDA792448DB5A89(iParam1 + 1) / unk_0xBBDA792448DB5A89(iVar0));
		iVar3 = (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

void func_150(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xBE23E5C609DF6E79(iParam0) > 0)
	{
		unk_0xF196EBA065B17452(iParam0, 0);
		iVar0 = unk_0x64D946BA23568D30(iParam0, 24);
		iVar1 = unk_0xB0BC5473B799F536(iParam0, 24);
		unk_0xE82FEE20AC58682A(iParam0, uParam1);
		if (iVar0 == -1)
		{
			unk_0x5039214D6DAE5ECC(iParam0, 24);
		}
		else
		{
			unk_0x323720FEE81B53C0(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_151()
{
	return unk_0x2D6859674806FDCE(joaat("mpindependence"));
}

int func_152(int iParam0)
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		if (unk_0x7404950238A154C2(iParam0, 0))
		{
			if (unk_0x9C1418C53B05D47B("MPBitset", 3))
			{
				if (unk_0xCEC9D74C9FF51C8C(iParam0, "MPBitset"))
				{
					iVar0 = unk_0x8B4662A1D2DF932C(iParam0, "MPBitset");
				}
				return unk_0x236D8AD7EE179F46(iVar0, 4);
			}
		}
	}
	return 0;
}

void func_153(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_139(&(Global_67889.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x0D6E79537424BACE(Param0, Global_67889.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_135(iVar0);
			}
		}
		iVar0++;
	}
}

var func_154()
{
	return Global_94997.f_2311.f_12.f_66;
}

bool func_155()
{
	return func_114(&(Global_94997.f_2311));
}

void func_156()
{
	uLocal_3292 = unk_0x95EF972E3A07B525("BREAKING_NEWS");
	unk_0x32A12757CBF48A33(joaat("jet"));
	unk_0x32A12757CBF48A33(joaat("police3"));
	unk_0x32A12757CBF48A33(joaat("maverick"));
	unk_0x32A12757CBF48A33(joaat("bison"));
	unk_0x32A12757CBF48A33(joaat("blista"));
	unk_0x32A12757CBF48A33(joaat("ig_molly"));
	unk_0x32A12757CBF48A33(joaat("cogcabrio"));
	unk_0x32A12757CBF48A33(joaat("rapidgt"));
	unk_0x995DCDA796A47049(45, "BB_Chase");
	unk_0x995DCDA796A47049(35, "BB_Chase");
	unk_0x995DCDA796A47049(2, "BB_Chase");
	unk_0x995DCDA796A47049(54, "BB_Chase");
	unk_0x995DCDA796A47049(55, "BB_Chase");
	unk_0x995DCDA796A47049(67, "BB_Chase");
	func_158(1, "BB_Chase");
	if (func_23())
	{
		if (func_155())
		{
			if (!unk_0xE083914AB72DD7CE(func_154()) && !unk_0x1699D7B95446F15C(func_154()))
			{
				func_121();
				while (!func_112())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
			}
		}
	}
	while (((((((!unk_0x33ACB874CECA2D4B(joaat("jet")) || !unk_0x33ACB874CECA2D4B(joaat("police3"))) || !unk_0x33ACB874CECA2D4B(joaat("maverick"))) || !unk_0x33ACB874CECA2D4B(joaat("bison"))) || !unk_0x33ACB874CECA2D4B(joaat("blista"))) || !unk_0x33ACB874CECA2D4B(joaat("ig_molly"))) || !unk_0x33ACB874CECA2D4B(joaat("cogcabrio"))) || !unk_0x33ACB874CECA2D4B(joaat("rapidgt")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!unk_0xCC8E3BAC62A29F42(uLocal_3292) || !func_157(1, "BB_Chase"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (((((!unk_0x498998F33897432E(45, "BB_Chase") || !unk_0x498998F33897432E(35, "BB_Chase")) || !unk_0x498998F33897432E(2, "BB_Chase")) || !unk_0x498998F33897432E(54, "BB_Chase")) || !unk_0x498998F33897432E(55, "BB_Chase")) || !unk_0x498998F33897432E(67, "BB_Chase"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

bool func_157(int iParam0, char* sParam1)
{
	return unk_0x498998F33897432E(iParam0, sParam1);
}

void func_158(int iParam0, char* sParam1)
{
	unk_0x995DCDA796A47049(iParam0, sParam1);
}

void func_159()
{
	func_185();
	func_183();
	unk_0xD1C83BD797927DD5();
	unk_0xDD17978B9F91686B(0);
	unk_0x057B94C6D10C1119(0);
	unk_0x0D7089406F6A5C6E(1);
	if (unk_0x0017826B6757A11F(iLocal_3219))
	{
		unk_0xFD441218304BE040(iLocal_3219);
	}
	if (unk_0x239FCE53874D846F(uLocal_3220))
	{
		unk_0x8492108E769E5C1B(uLocal_3220);
	}
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		unk_0xB067093BBAF0A747(unk_0x81873881071CD9FE(), -1019.579f, -484.872f, 36.0795f, 1, 0, 0, 1);
		unk_0xC24172029826A66F(unk_0x81873881071CD9FE(), 93.7701f);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3258))
	{
		if (unk_0x7404950238A154C2(iLocal_3258, 0))
		{
			if (unk_0xE20321A2D7F8960C(iLocal_3258))
			{
				unk_0x05ACEF4F060B9B4E(iLocal_3258);
			}
		}
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
	{
		if (unk_0x7404950238A154C2(iLocal_3257, 0))
		{
			unk_0xA5F9A8EE8A45DD7E(iLocal_3257, 0);
			if (unk_0xE20321A2D7F8960C(iLocal_3257))
			{
				unk_0x05ACEF4F060B9B4E(iLocal_3257);
			}
		}
	}
	if (unk_0x3D675D69D18A10E9(uLocal_3758))
	{
		unk_0xA080515881A08702(uLocal_3758, 0);
	}
	if (unk_0x3D675D69D18A10E9(uLocal_3759))
	{
		unk_0xA080515881A08702(uLocal_3759, 0);
	}
	if (unk_0x3D675D69D18A10E9(uLocal_3760))
	{
		unk_0xA080515881A08702(uLocal_3760, 0);
	}
	if (unk_0x3D675D69D18A10E9(uLocal_3761))
	{
		unk_0xA080515881A08702(uLocal_3761, 0);
	}
	if (unk_0x3D675D69D18A10E9(uLocal_3762))
	{
		unk_0xA080515881A08702(uLocal_3762, 0);
	}
	if (unk_0x3D675D69D18A10E9(uLocal_3754[0]))
	{
		unk_0xA080515881A08702(uLocal_3754[0], 0);
	}
	if (unk_0x3D675D69D18A10E9(uLocal_3754[1]))
	{
		unk_0xA080515881A08702(uLocal_3754[1], 0);
	}
	if (unk_0x3D675D69D18A10E9(uLocal_3754[2]))
	{
		unk_0xA080515881A08702(uLocal_3754[2], 0);
	}
	unk_0x954FB3FC1E04A7A9();
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3221))
	{
		unk_0xF210D34D7F7152ED(&iLocal_3221);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3227))
	{
		unk_0xF210D34D7F7152ED(&iLocal_3227);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3244))
	{
		unk_0xF210D34D7F7152ED(&iLocal_3244);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3245))
	{
		unk_0xF210D34D7F7152ED(&iLocal_3245);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3246))
	{
		unk_0xF210D34D7F7152ED(&iLocal_3246);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3247))
	{
		unk_0xF210D34D7F7152ED(&iLocal_3247);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3248))
	{
		unk_0xF210D34D7F7152ED(&iLocal_3248);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3249))
	{
		unk_0xF210D34D7F7152ED(&iLocal_3249);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3222[0]))
	{
		unk_0xF210D34D7F7152ED(&(iLocal_3222[0]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3222[1]))
	{
		unk_0xF210D34D7F7152ED(&(iLocal_3222[1]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3222[2]))
	{
		unk_0xF210D34D7F7152ED(&(iLocal_3222[2]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3222[3]))
	{
		unk_0xF210D34D7F7152ED(&(iLocal_3222[3]));
	}
	if (unk_0x86CCCD2FAE9D5E65(uLocal_3228[0]))
	{
		unk_0xF210D34D7F7152ED(&(uLocal_3228[0]));
	}
	if (unk_0x86CCCD2FAE9D5E65(uLocal_3228[1]))
	{
		unk_0xF210D34D7F7152ED(&(uLocal_3228[1]));
	}
	if (unk_0x86CCCD2FAE9D5E65(uLocal_3228[2]))
	{
		unk_0xF210D34D7F7152ED(&(uLocal_3228[2]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[0]))
	{
		unk_0xF210D34D7F7152ED(&(iLocal_3232[0]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[1]))
	{
		unk_0xF210D34D7F7152ED(&(iLocal_3232[1]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[2]))
	{
		unk_0xF210D34D7F7152ED(&(iLocal_3232[2]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[3]))
	{
		unk_0xF210D34D7F7152ED(&(iLocal_3232[3]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[4]))
	{
		unk_0xF210D34D7F7152ED(&(iLocal_3232[4]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[5]))
	{
		unk_0xF210D34D7F7152ED(&(iLocal_3232[5]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[6]))
	{
		unk_0xF210D34D7F7152ED(&(iLocal_3232[6]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[7]))
	{
		unk_0xF210D34D7F7152ED(&(iLocal_3232[7]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[8]))
	{
		unk_0xF210D34D7F7152ED(&(iLocal_3232[8]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[9]))
	{
		unk_0xF210D34D7F7152ED(&(iLocal_3232[9]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[10]))
	{
		unk_0xF210D34D7F7152ED(&(iLocal_3232[10]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3250[0]))
	{
		unk_0xF210D34D7F7152ED(&(iLocal_3250[0]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3253[0]))
	{
		unk_0xF210D34D7F7152ED(&(iLocal_3253[0]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3253[1]))
	{
		unk_0xF210D34D7F7152ED(&(iLocal_3253[1]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
	{
		unk_0x5D00E836B6BE8693(&iLocal_3257);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3258))
	{
		if (!unk_0xE86442941AE40E75(iLocal_3258))
		{
			unk_0xD768713E73165208(iLocal_3258, 1, 0);
		}
		unk_0x5D00E836B6BE8693(&iLocal_3258);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3263))
	{
		unk_0x5D00E836B6BE8693(&iLocal_3263);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3264))
	{
		unk_0x5D00E836B6BE8693(&iLocal_3264);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3265))
	{
		unk_0x5D00E836B6BE8693(&iLocal_3265);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3266))
	{
		unk_0x5D00E836B6BE8693(&iLocal_3266);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3270))
	{
		unk_0x5D00E836B6BE8693(&iLocal_3270);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3274))
	{
		unk_0x5D00E836B6BE8693(&iLocal_3274);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3278[0]))
	{
		unk_0x5D00E836B6BE8693(&(iLocal_3278[0]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3278[1]))
	{
		unk_0x5D00E836B6BE8693(&(iLocal_3278[1]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3259[0]))
	{
		unk_0x5D00E836B6BE8693(&(iLocal_3259[0]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3259[1]))
	{
		unk_0x5D00E836B6BE8693(&(iLocal_3259[1]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3278[0]))
	{
		unk_0x5D00E836B6BE8693(&(iLocal_3278[0]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3278[1]))
	{
		unk_0x5D00E836B6BE8693(&(iLocal_3278[1]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3267[0]))
	{
		unk_0x5D00E836B6BE8693(&(iLocal_3267[0]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3267[1]))
	{
		unk_0x5D00E836B6BE8693(&(iLocal_3267[1]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3271[0]))
	{
		unk_0x5D00E836B6BE8693(&(iLocal_3271[0]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3262))
	{
		unk_0x5D00E836B6BE8693(&iLocal_3262);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3281))
	{
		unk_0xAB6AFD52AD641D70(&iLocal_3281);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3282))
	{
		unk_0xAB6AFD52AD641D70(&iLocal_3282);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3283))
	{
		unk_0xAB6AFD52AD641D70(&iLocal_3283);
	}
	unk_0xABF33AFE6B2877A8();
	if (unk_0x12F24A1A22BF90A7("SOL_3_DRIVE_TO_AIRPORT"))
	{
		unk_0x0C22E352114F699C("SOL_3_DRIVE_TO_AIRPORT");
	}
	if (unk_0x12F24A1A22BF90A7("SOL_3_MAIN_CHASE"))
	{
		unk_0x0C22E352114F699C("SOL_3_MAIN_CHASE");
	}
	if (unk_0x12F24A1A22BF90A7("SOL_3_CHOPPER_CAM"))
	{
		unk_0x0C22E352114F699C("SOL_3_CHOPPER_CAM");
	}
	if (unk_0x12F24A1A22BF90A7("SOL_3_HELI_TAKEOFF"))
	{
		unk_0x0C22E352114F699C("SOL_3_HELI_TAKEOFF");
	}
	if (unk_0x12F24A1A22BF90A7("SOL_3_EVENT_TANKER_CRASH"))
	{
		unk_0x0C22E352114F699C("SOL_3_EVENT_TANKER_CRASH");
	}
	if (unk_0x12F24A1A22BF90A7("SOL_3_CAR_JET_ENGINE"))
	{
		unk_0x0C22E352114F699C("SOL_3_CAR_JET_ENGINE");
	}
	if (unk_0x12F24A1A22BF90A7("SOL_3_PLANE_ON_FIRE"))
	{
		unk_0x0C22E352114F699C("SOL_3_PLANE_ON_FIRE");
	}
	if (unk_0x12F24A1A22BF90A7("SOL_3_EVENT_JET_LANDING"))
	{
		unk_0x0C22E352114F699C("SOL_3_EVENT_JET_LANDING");
	}
	if (unk_0x12F24A1A22BF90A7("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION"))
	{
		unk_0x0C22E352114F699C("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
	}
	if (unk_0x12F24A1A22BF90A7("SOL_3_ARRIVE_AT_HANGAR"))
	{
		unk_0x0C22E352114F699C("SOL_3_ARRIVE_AT_HANGAR");
	}
	if (unk_0x12F24A1A22BF90A7("SOL_3_ON_FOOT_CHASE"))
	{
		unk_0x0C22E352114F699C("SOL_3_ON_FOOT_CHASE");
	}
	if (unk_0x12F24A1A22BF90A7("SOL_3_LOSE_COPS"))
	{
		unk_0x0C22E352114F699C("SOL_3_LOSE_COPS");
	}
	if (unk_0x12F24A1A22BF90A7("SOL_3_LOSE_COPS_PLANE"))
	{
		unk_0x0C22E352114F699C("SOL_3_LOSE_COPS_PLANE");
	}
	if (unk_0x12F24A1A22BF90A7("SOL_3_LOSE_COPS_VEHICLE"))
	{
		unk_0x0C22E352114F699C("SOL_3_LOSE_COPS_VEHICLE");
	}
	if (unk_0x12F24A1A22BF90A7("SOL_3_ENGINE_DEATH_SCENE"))
	{
		unk_0x0C22E352114F699C("SOL_3_ENGINE_DEATH_SCENE");
	}
	unk_0x98A5E5B909F1B162(iLocal_3210);
	unk_0x98A5E5B909F1B162(iLocal_3212);
	unk_0x98A5E5B909F1B162(iLocal_3213);
	unk_0x98A5E5B909F1B162(iLocal_3214);
	unk_0x98A5E5B909F1B162(iLocal_3215);
	unk_0x98A5E5B909F1B162(iLocal_3216);
	unk_0x98A5E5B909F1B162(iLocal_3217);
	unk_0x98A5E5B909F1B162(iLocal_3218);
	unk_0x98A5E5B909F1B162(iLocal_3211);
	func_181(&uLocal_27, 0, 0);
	if (unk_0x42E36F2D658EB2FF(uLocal_3288))
	{
		unk_0x35B958B469415A23(uLocal_3288, 0);
	}
	if (unk_0x42E36F2D658EB2FF(uLocal_3289))
	{
		unk_0x35B958B469415A23(uLocal_3289, 0);
	}
	if (unk_0x42E36F2D658EB2FF(uLocal_3290))
	{
		unk_0x35B958B469415A23(uLocal_3290, 0);
	}
	func_160(1, 1);
	unk_0xD8323B49BAE93D80("misssolomon_3");
	unk_0xD8323B49BAE93D80("amb@world_human_clipboard@male@base");
	unk_0xD8323B49BAE93D80("missheist_agency3aig_lift_waitped_a");
	unk_0x4855165A2773595C(1, "BB_CHASE");
	unk_0x4855165A2773595C(2, "BB_Chase");
	unk_0x4855165A2773595C(9, "BB_CHASE");
	unk_0x4855165A2773595C(35, "BB_Chase");
	unk_0x4855165A2773595C(45, "BB_Chase");
	unk_0x4855165A2773595C(54, "BB_Chase");
	unk_0x4855165A2773595C(55, "BB_Chase");
	unk_0x4855165A2773595C(61, "BB_CHASE");
	unk_0x4855165A2773595C(63, "BB_CHASE");
	unk_0x4855165A2773595C(64, "BB_CHASE");
	unk_0x4855165A2773595C(67, "BB_Chase");
	unk_0x4855165A2773595C(68, "BB_CHASE");
	unk_0x4855165A2773595C(69, "BB_Chase");
	unk_0x4B6F01DE8CCE643E(&uLocal_3292);
	unk_0x9B331DCFDFC55491("digitalOverlay");
}

void func_160(bool bParam0, bool bParam1)
{
	if (!unk_0xB318FDA0D1ABDB20(&cLocal_2667))
	{
		iLocal_90 = 0;
		func_180();
		unk_0x4BF7FC7E9DBAB99B(iLocal_2683);
		unk_0xFEA6E2B6E5CAFC2E(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			unk_0x81DD7930F7EBF531(unk_0x1329891157A54C63(), 1f);
			unk_0xD8AF255B8B5F4FB8(unk_0x1329891157A54C63(), 1);
			unk_0xA9DF4B73BBB06CE5(1);
		}
		if (bLocal_106)
		{
			unk_0x887F4488DA99FD21(func_179());
		}
		unk_0x887F4488DA99FD21(func_178());
		unk_0x887F4488DA99FD21(func_177());
		unk_0x887F4488DA99FD21(func_176());
		if (!unk_0x29AFA2493D7C23D0() && !bParam0)
		{
			func_175();
			func_174();
			func_171();
		}
		else
		{
			func_167();
			func_166();
		}
		if (bParam1)
		{
			func_161(0);
		}
	}
}

void func_161(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_162(iVar0, bParam0);
		iVar0++;
	}
}

void func_162(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_71(iParam0, 2, 1))
		{
			func_165(iParam0, 2, 1);
		}
	}
	else if (func_71(iParam0, 2, 1))
	{
		func_163(iParam0, 2, 1);
	}
}

void func_163(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xC69E84EBBD7166E6(&(Global_90861.f_1279[iParam0]), iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_73() == 0)
		{
			uVar0 = func_49(func_72(iParam0), -1, 0);
			unk_0xC69E84EBBD7166E6(&uVar0, iParam1);
			func_164(func_72(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_98931.f_668[iParam0]), iParam1);
	}
}

void func_164(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2459767[iParam0 /*5*/][func_50(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, uParam1, iParam3);
	}
}

void func_165(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_90861.f_1279[iParam0]), iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_73() == 0)
		{
			uVar0 = func_49(func_72(iParam0), -1, 0);
			unk_0xF3148AAF69AF9CBC(&uVar0, iParam1);
			func_164(func_72(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xF3148AAF69AF9CBC(&(Global_98931.f_668[iParam0]), iParam1);
	}
}

void func_166()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 175)
	{
		iLocal_2915[iVar0] = 0;
		Local_1962[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_108[iVar0] = 0f;
		fLocal_284[iVar0] = 0f;
		fLocal_460[iVar0] = 0f;
		fLocal_636[iVar0] = 0f;
		iLocal_1293[iVar0] = 0;
		fLocal_812[iVar0] = 0f;
		iLocal_1469[iVar0] = 0;
		iLocal_2684[iVar0] = 0;
		iLocal_1645[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		iLocal_3091[iVar0] = 0;
		iVar0++;
	}
	iLocal_1945 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iLocal_3104[iVar0] = 0;
		Local_2488[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_1208[iVar0] = 0f;
		fLocal_1224[iVar0] = 0f;
		fLocal_1240[iVar0] = 0f;
		fLocal_1256[iVar0] = 0f;
		iLocal_1929[iVar0] = 0;
		iLocal_2860[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iLocal_3156[iVar0] = 0;
		iVar0++;
	}
	iLocal_1947 = 0;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		iLocal_3120[iVar0] = 0;
		Local_2534[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_992[iVar0] = 0f;
		fLocal_1028[iVar0] = 0f;
		fLocal_1064[iVar0] = 0f;
		fLocal_1100[iVar0] = 0f;
		iLocal_1821[iVar0] = 0;
		fLocal_1136[iVar0] = 0f;
		iLocal_1857[iVar0] = 0;
		iLocal_2876[iVar0] = 0;
		iLocal_1893[iVar0] = 0;
		iVar0++;
	}
	iLocal_1946 = 0;
	iLocal_1949 = 0;
	iLocal_1952 = 0;
	iLocal_1953 = 0;
	iLocal_1954 = 0;
}

void func_167()
{
	func_170();
	func_169();
	func_168();
}

void func_168()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[iVar0]))
		{
			if (unk_0x7404950238A154C2(iLocal_3120[iVar0], 0))
			{
				if (unk_0xE20321A2D7F8960C(iLocal_3120[iVar0]))
				{
					unk_0x05ACEF4F060B9B4E(iLocal_3120[iVar0]);
				}
				iVar1 = unk_0xB0B9E53CEFDB16AA(iLocal_3120[iVar0], -1);
				if (unk_0x86CCCD2FAE9D5E65(iVar1) && iVar1 != unk_0x81873881071CD9FE())
				{
					if (unk_0xE86442941AE40E75(iVar1))
					{
						unk_0xF210D34D7F7152ED(&iVar1);
					}
				}
			}
			if (unk_0xE86442941AE40E75(iLocal_3120[iVar0]))
			{
				unk_0x5D00E836B6BE8693(&(iLocal_3120[iVar0]));
			}
		}
		iLocal_1857[iVar0] = 0;
		if (!bLocal_86 && !bLocal_99)
		{
			if (iLocal_1821[iVar0] > 0)
			{
				unk_0x4855165A2773595C(iLocal_1821[iVar0], &cLocal_2667);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!iLocal_2876[iVar0] == 0)
		{
			unk_0x887F4488DA99FD21(iLocal_2876[iVar0]);
		}
		iVar0++;
	}
}

void func_169()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3104[iVar0]))
		{
			if (unk_0xE86442941AE40E75(iLocal_3104[iVar0]))
			{
				unk_0x5D00E836B6BE8693(&(iLocal_3104[iVar0]));
			}
		}
		iLocal_1929[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_2860[iVar0] == 0)
		{
			unk_0x887F4488DA99FD21(iLocal_2860[iVar0]);
		}
		iVar0++;
	}
	iLocal_1950 = 0;
	iLocal_1947 = 0;
}

void func_170()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_2915[iVar0]))
		{
			if (unk_0x7404950238A154C2(iLocal_2915[iVar0], 0))
			{
				if (unk_0xE20321A2D7F8960C(iLocal_2915[iVar0]))
				{
					unk_0x05ACEF4F060B9B4E(iLocal_2915[iVar0]);
				}
				iVar1 = unk_0xB0B9E53CEFDB16AA(iLocal_2915[iVar0], -1);
				if (unk_0x86CCCD2FAE9D5E65(iVar1) && iVar1 != unk_0x81873881071CD9FE())
				{
					if (unk_0xE86442941AE40E75(iVar1))
					{
						unk_0xF210D34D7F7152ED(&iVar1);
					}
				}
			}
			if (unk_0xE86442941AE40E75(iLocal_2915[iVar0]))
			{
				unk_0x5D00E836B6BE8693(&(iLocal_2915[iVar0]));
			}
		}
		if (!bLocal_86 && !bLocal_99)
		{
			if (iLocal_1293[iVar0] > 0)
			{
				unk_0x4855165A2773595C(iLocal_1293[iVar0], &cLocal_2667);
			}
		}
		iLocal_1469[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (!iLocal_2684[iVar0] == 0)
		{
			unk_0x887F4488DA99FD21(iLocal_2684[iVar0]);
		}
		iVar0++;
	}
	iLocal_1949 = 0;
	iLocal_1945 = 0;
}

void func_171()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[iVar0]))
		{
			if (unk_0x7404950238A154C2(iLocal_3120[iVar0], 0))
			{
				if (unk_0xE20321A2D7F8960C(iLocal_3120[iVar0]))
				{
					unk_0x05ACEF4F060B9B4E(iLocal_3120[iVar0]);
				}
			}
			func_173(iLocal_3120[iVar0]);
			func_172(iLocal_3120[iVar0]);
		}
		iLocal_1857[iVar0] = 0;
		iLocal_1893[iVar0] = 0;
		if (!bLocal_86 && !bLocal_99)
		{
			if (iLocal_1821[iVar0] > 0)
			{
				unk_0x4855165A2773595C(iLocal_1821[iVar0], &cLocal_2667);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!iLocal_2876[iVar0] == 0)
		{
			unk_0x887F4488DA99FD21(iLocal_2876[iVar0]);
		}
		iVar0++;
	}
	iLocal_1951 = 0;
}

void func_172(int iParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		unk_0xE0913C01F5C0CC3D(&iParam0);
	}
}

void func_173(int iParam0)
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
				if (bLocal_107)
				{
					unk_0x7F5F0D37173E518C(iVar1, 65536, 1);
					unk_0x7F5F0D37173E518C(iVar1, 2, 0);
				}
				unk_0x4B9FA68A3AC8C29D(iVar1, 6, 0);
			}
		}
	}
}

void func_174()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3104[iVar0]))
		{
			if (!unk_0x930F8FBB8E9537CC(iLocal_3104[iVar0]))
			{
				unk_0x5CEA5F12775261F2(iLocal_3104[iVar0], 1, 0);
			}
			func_172(iLocal_3104[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_2860[iVar0] == 0)
		{
			unk_0x887F4488DA99FD21(iLocal_2860[iVar0]);
		}
		iVar0++;
	}
	iLocal_1950 = 0;
	iLocal_1947 = 0;
}

void func_175()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_2915[iVar0]))
		{
			if (!unk_0x930F8FBB8E9537CC(iLocal_2915[iVar0]))
			{
				unk_0x5CEA5F12775261F2(iLocal_2915[iVar0], 1, 0);
			}
			if (unk_0x7404950238A154C2(iLocal_2915[iVar0], 0))
			{
				if (unk_0xE20321A2D7F8960C(iLocal_2915[iVar0]))
				{
					unk_0x05ACEF4F060B9B4E(iLocal_2915[iVar0]);
				}
			}
			func_173(iLocal_2915[iVar0]);
			func_172(iLocal_2915[iVar0]);
		}
		iLocal_1469[iVar0] = 0;
		iLocal_1645[iVar0] = 0;
		if (!bLocal_86 && !bLocal_99)
		{
			if (iLocal_1293[iVar0] > 0)
			{
				unk_0x4855165A2773595C(iLocal_1293[iVar0], &cLocal_2667);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (!iLocal_2684[iVar0] == 0)
		{
			unk_0x887F4488DA99FD21(iLocal_2684[iVar0]);
		}
		iVar0++;
	}
	iLocal_1949 = 0;
	iLocal_1945 = 0;
}

int func_176()
{
	return joaat("s_m_y_cop_01");
}

int func_177()
{
	return joaat("police");
}

int func_178()
{
	return joaat("sultan");
}

int func_179()
{
	if (iLocal_2912 == 0)
	{
		return joaat("a_m_y_business_01");
	}
	return iLocal_2912;
}

void func_180()
{
	unk_0xA5EC8D4B74D54C9B();
	unk_0x24E17EE0B44D9A19(-1);
	unk_0x14EDFFB16F85839D(1);
	unk_0x9897700A81F3DE35(1);
	unk_0xCDE668E40D482687(1f);
	unk_0xB740337582B8FF04(3);
	unk_0xAFFB324194E5B6B2(3);
}

void func_181(var uParam0, int iParam1, int iParam2)
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
		if (func_182(uParam0->f_3))
		{
			unk_0xB8BB626315D394F5(1);
		}
	}
	if (!unk_0x4357449749A521B1(sVar0))
	{
		if (func_182(sVar0))
		{
			unk_0xB8BB626315D394F5(1);
		}
	}
}

bool func_182(char* sParam0)
{
	unk_0xF7F787102FC9BCAC(sParam0);
	return unk_0xEF468B98099969A5(0);
}

void func_183()
{
	Global_14559 = 0;
	func_184();
}

void func_184()
{
	unk_0xE1BF98267C70D822();
	Global_16704 = 0;
	if (unk_0xE1772957381F609F())
	{
		unk_0x9E95048D8C96C1EA(0);
		Global_15693 = 6;
	}
}

void func_185()
{
	Global_14559 = 0;
	func_186();
}

void func_186()
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

void func_187()
{
	if (unk_0xFBACB273AA628CC5(uLocal_3284))
	{
		unk_0x0A8175F24237A3D4(&uLocal_3284);
	}
	if (unk_0xFBACB273AA628CC5(uLocal_3285))
	{
		unk_0x0A8175F24237A3D4(&uLocal_3285);
	}
	if (unk_0xFBACB273AA628CC5(uLocal_3286))
	{
		unk_0x0A8175F24237A3D4(&uLocal_3286);
	}
	if (unk_0xFBACB273AA628CC5(uLocal_3287))
	{
		unk_0x0A8175F24237A3D4(&uLocal_3287);
	}
}

void func_188()
{
	if (iLocal_3569 == 0)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3227))
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_3227))
			{
				if (unk_0xBBEF8270CE27C0EE(iLocal_3227, unk_0x81873881071CD9FE(), 0))
				{
					iLocal_3569 = 1;
				}
			}
		}
	}
	if (iLocal_3569 == 0)
	{
		if (iLocal_3533 == 0)
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_3227))
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_3227))
				{
					if (unk_0x86CCCD2FAE9D5E65(iLocal_3221))
					{
						if (!unk_0x5FEB513A4402FD59(iLocal_3221))
						{
							if (unk_0xAF67F8863F1E68BF(iLocal_3221))
							{
								if (unk_0x46097D87132D43A3(iLocal_3221) > 18)
								{
									if (unk_0x86CCCD2FAE9D5E65(iLocal_3283))
									{
										if (unk_0xCB8B9E751036ECB2(iLocal_3283))
										{
											unk_0xD88DD5B581458979(iLocal_3283, 1, 1);
										}
									}
									uLocal_3209 = unk_0x59C061A719024602(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
									unk_0x58BEA8B2364F8C48(iLocal_3227, uLocal_3209, "misssolomon_3", "_action", 1000f, -1000f, 4, 0, 1148846080, 0);
									unk_0xAF625598EDA64AD3(iLocal_3227, unk_0x81873881071CD9FE(), 9000, 1024, 3);
									iLocal_3533 = 1;
									iLocal_3534 = 0;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3533 == 1 && iLocal_3535 == 0)
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_3227))
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_3227))
				{
					if (unk_0xDD7720E17AF5FE17(uLocal_3209))
					{
						if (!iLocal_3534)
						{
							if (unk_0xF855C83E3A17514B(uLocal_3209) > 0.25f)
							{
								func_17(&uLocal_3577, 4, iLocal_3227, "HangerWorker", 0, 1);
								func_189(iLocal_3227, "T1M4_BCAA", "HangerWorker", 11);
								iLocal_3534 = 1;
							}
						}
						if (unk_0xF855C83E3A17514B(uLocal_3209) > 0.99f)
						{
							uLocal_3209 = unk_0x59C061A719024602(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
							unk_0x58BEA8B2364F8C48(iLocal_3227, uLocal_3209, "misssolomon_3", "_react_to_death", 1000f, -1.5f, 3, 16, 1148846080, 0);
							iLocal_3535 = 1;
						}
					}
				}
			}
		}
		if (iLocal_3535 == 1 && iLocal_3538 == 0)
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_3227))
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_3227))
				{
					if (unk_0xDD7720E17AF5FE17(uLocal_3209))
					{
						if (unk_0x61BAE3B4A4A2B2BB(iLocal_3227, unk_0x8DAF7A748E41AD46("ENDS_IN_RUN")))
						{
							unk_0xEAD984C2869B8B7C(&uLocal_3291);
							unk_0x33335816B3DFE65B(0, joaat("MotionState_Sprint"), 0);
							unk_0xCEF5C750AC257B88(0, -1001.9f, -2954.3f, 13.1f, 3f, -1, 40000f, 3f);
							unk_0x754376E2234CBB4A(0, unk_0x81873881071CD9FE(), 200f, -1, 0, 0);
							unk_0x56D9ED1541046AF6(uLocal_3291);
							unk_0xC65002CAA1212AF9(iLocal_3227, uLocal_3291);
							unk_0xA3561415EB3DA3A3(&uLocal_3291);
							unk_0x03EB8112BA30917C(iLocal_3227, joaat("MotionState_Sprint"), 0, 0, 0);
							iLocal_3538 = 1;
						}
					}
				}
			}
		}
	}
	else if (iLocal_3538 == 0)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3227))
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_3227))
			{
				unk_0xEAD984C2869B8B7C(&uLocal_3291);
				unk_0xCEF5C750AC257B88(0, -1001.9f, -2954.3f, 13.1f, 3f, -1, 40000f, 3f);
				unk_0x754376E2234CBB4A(0, unk_0x81873881071CD9FE(), 200f, -1, 0, 0);
				unk_0x56D9ED1541046AF6(uLocal_3291);
				unk_0xC65002CAA1212AF9(iLocal_3227, uLocal_3291);
				unk_0xA3561415EB3DA3A3(&uLocal_3291);
				iLocal_3538 = 1;
			}
		}
	}
}

void func_189(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x00641949E82961EF(iParam0, sParam1, sParam2, func_15(iParam3), 0);
}

void func_190()
{
	if (iLocal_3180 == 0)
	{
		iLocal_3182 = 0;
		iLocal_3210 = unk_0xEDDCCC3D357A50F8();
		unk_0x0ADAEB274E23621D("TRV_4_MCS_2", 8);
		unk_0x32A12757CBF48A33(joaat("prop_jet_bloodsplat_01"));
		if (unk_0x0F7866B4F5BE7CD4("Trev4_5"))
		{
			unk_0x228E7FCA637CBD19("Trev4_5", 0, 0.5f, 1f);
		}
		if (!unk_0xECDEA377354CBDA4())
		{
			unk_0xAE2B1C30F8A0B67C(800);
		}
		iLocal_3180 = 1;
	}
	if (iLocal_3180 == 1)
	{
		switch (iLocal_3182)
		{
			case 0:
				while (!unk_0x0A11B2F86364F5B7())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), false, 0);
				if (!unk_0x5FEB513A4402FD59(iLocal_3221))
				{
					unk_0x991ABCA492D8C897(iLocal_3221, "Molly", 1, joaat("ig_molly"), 0);
				}
				if (!unk_0x5FEB513A4402FD59(iLocal_3227))
				{
					unk_0x991ABCA492D8C897(iLocal_3227, "Airworker_Tackle_trevor", 0, joaat("s_m_y_airworker"), 0);
				}
				if (unk_0x7404950238A154C2(iLocal_3265, 0))
				{
					unk_0x991ABCA492D8C897(iLocal_3265, "JET_TRV4", 0, joaat("jet"), 0);
				}
				func_191(1, 1, 1, 0);
				unk_0x80650551CC58C784("TRV4_SUCK_CS");
				unk_0x5632EA201EAF956B(0);
				iLocal_3182++;
				break;
			
			case 1:
				func_109();
				if (unk_0x673E6879232705DA("JET_TRV4", joaat("jet")))
				{
					if (unk_0x7404950238A154C2(iLocal_3265, 0))
					{
						if (!unk_0x930F8FBB8E9537CC(iLocal_3265))
						{
							unk_0xA8F22633ACC22189(iLocal_3265, 1);
						}
					}
				}
				if (unk_0x673E6879232705DA("Airworker_Tackle_trevor", joaat("s_m_y_airworker")))
				{
					if (!unk_0x5FEB513A4402FD59(iLocal_3227))
					{
						unk_0x1D15D99A10A15334(iLocal_3227, 1);
						unk_0x754376E2234CBB4A(iLocal_3227, unk_0x81873881071CD9FE(), 150f, -1, 0, 0);
						unk_0x210A4A0B257F8433(iLocal_3227, 0);
						unk_0x33B1E568CEF14B0D(iLocal_3227, 1);
						unk_0xCEDA5B7DDF6C8846(iLocal_3227, 0, 0, 0, 0, 0, 0, 0, 0);
					}
				}
				if (unk_0x673E6879232705DA("Michael", 0))
				{
					func_109();
					func_107(1);
				}
				if (!unk_0xEF7A631CCBD01652())
				{
					iLocal_3337 = 1;
					if (!unk_0x86CCCD2FAE9D5E65(iLocal_3281))
					{
						if (unk_0x33ACB874CECA2D4B(joaat("prop_jet_bloodsplat_01")))
						{
							iLocal_3281 = unk_0xF364195A57BB7AE3(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, 1, 1, 0);
							unk_0x3A45EB0810EBE71C(iLocal_3281, 0f, 0f, -121.5948f, 2, 1);
							unk_0x5D6F89F6DD9B0781(iLocal_3281, 0f, 0f, 0.8729f, -0.4879f);
							unk_0x887F4488DA99FD21(joaat("prop_jet_bloodsplat_01"));
						}
					}
					unk_0x0C64B47F8E6AF117(0);
					func_191(0, 1, 1, 0);
					unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), true, 0);
					if (!unk_0xE27746D8DF950073(unk_0x81873881071CD9FE(), 0, 2))
					{
						unk_0x8E4A427F5C43E416(unk_0x81873881071CD9FE(), joaat("weapon_smg"), 150, 1, 1);
					}
					iLocal_3180 = 2;
				}
				break;
			}
	}
	if (iLocal_3180 == 2)
	{
		iLocal_3180 = 0;
		iLocal_3179 = 8;
	}
}

void func_191(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xA01309A4CCECDBBE(unk_0x1329891157A54C63());
		unk_0x334B670F8C2E871D(unk_0x1329891157A54C63(), 1);
		unk_0x302581C7F63C3DAF(unk_0x1329891157A54C63(), 1);
		func_198(1);
		unk_0x314942833427CBA3();
		unk_0xDF12B8D7DEE2158B();
		if (Global_14394.f_1 > 3)
		{
			if (unk_0xE0A43912E369FFA5())
			{
				unk_0x9E95048D8C96C1EA(0);
			}
			if (!func_197())
			{
				Global_14394.f_1 = 3;
			}
			Global_15693 = 5;
		}
		func_196(1, iParam3, iParam2, 0);
		Global_55408 = 1;
		Global_67713 = 1;
		Global_69018 = 1;
	}
	else
	{
		func_198(0);
		unk_0x6246FB0D4AFA25CC();
		Global_55408 = 0;
		if (bParam1)
		{
			unk_0x5A01C8176534B756();
		}
		unk_0x334B670F8C2E871D(unk_0x1329891157A54C63(), 0);
		unk_0x302581C7F63C3DAF(unk_0x1329891157A54C63(), 0);
		func_196(0, iParam3, iParam2, 0);
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) && !func_192(unk_0x1329891157A54C63()))
		{
			unk_0x210A4A0B257F8433(unk_0x81873881071CD9FE(), 0);
		}
		Global_69018 = 0;
	}
}

int func_192(int iParam0)
{
	if (func_194(iParam0, 0))
	{
		return 1;
	}
	if (func_193())
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

bool func_193()
{
	return unk_0x236D8AD7EE179F46(Global_2359301, 3);
}

bool func_194(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1329891157A54C63())
	{
		bVar0 = func_195(-1, 0) == 8;
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

int func_195(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_51();
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

int func_196(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_197()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_198(int iParam0)
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

void func_199()
{
	if (iLocal_3510 == 0)
	{
		if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -926.0258f, -2958.615f, 12.46467f, -930.6525f, -2956.061f, 16.45945f, 2.75f, 0, 1, 0))
		{
			iLocal_3510 = 1;
		}
	}
	else if (iLocal_3514 == 0)
	{
		unk_0xDE1125A413AF241C(0, 22, 1);
		unk_0xDE1125A413AF241C(0, 25, 1);
		if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -938.5178f, -2972.022f, 12.46715f, -934.1034f, -2974.613f, 15.96715f, 5.25f, 0, 1, 0))
		{
			unk_0x99E525B7A12DCDBE(unk_0x81873881071CD9FE(), 0f);
		}
		else
		{
			if (fLocal_3325 < 1f)
			{
				fLocal_3325 = 1f;
			}
			fLocal_3325 = (fLocal_3325 * 0.975f);
			unk_0x99E525B7A12DCDBE(unk_0x81873881071CD9FE(), fLocal_3325);
		}
	}
	if (iLocal_3180 > 0)
	{
		func_188();
	}
	if (iLocal_3180 == 0)
	{
		iLocal_3338 = 0;
		iLocal_3339 = 0;
		iLocal_3340 = 0;
		iLocal_3341 = 0;
		iLocal_3343 = 0;
		iLocal_3359 = 0;
		iLocal_3470 = 0;
		iLocal_3471 = 0;
		iLocal_3472 = 0;
		iLocal_3478 = 0;
		iLocal_3511 = 0;
		iLocal_3512 = 0;
		iLocal_3513 = 0;
		iLocal_3514 = 0;
		iLocal_3515[0] = 0;
		iLocal_3519[0] = 0;
		iLocal_3515[1] = 0;
		iLocal_3519[1] = 0;
		iLocal_3515[2] = 0;
		iLocal_3533 = 0;
		iLocal_3535 = 0;
		iLocal_3536 = 0;
		iLocal_3537 = 0;
		iLocal_3538 = 0;
		iLocal_3541 = 0;
		iLocal_3567 = 0;
		iLocal_3569 = 0;
		iLocal_3570[3] = 0;
		unk_0x32A12757CBF48A33(joaat("prop_jet_bloodsplat_01"));
		unk_0x9A7465274D411DCE("V_60_HangerRm");
		unk_0x9BAE0FF806E5C2E5(5);
		unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 3, 0);
		unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 0);
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3221))
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_3221))
			{
				if (unk_0xAF67F8863F1E68BF(iLocal_3221))
				{
					unk_0xCA01282F29256D49(iLocal_3221, 3f, 1);
				}
			}
		}
		if (!unk_0xECDEA377354CBDA4())
		{
			unk_0xAE2B1C30F8A0B67C(800);
		}
		iLocal_3180 = 1;
	}
	if (iLocal_3180 == 1)
	{
		if (iLocal_3478 == 0)
		{
			if (unk_0x9D2B95F4020E5347("Trv_4_747", 0))
			{
				iLocal_3478 = 1;
			}
		}
		if (iLocal_3470 == 0)
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_3221))
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_3221))
				{
					if (unk_0xAF67F8863F1E68BF(iLocal_3221))
					{
						if (unk_0x46097D87132D43A3(iLocal_3221) > 20)
						{
							if (unk_0x86CCCD2FAE9D5E65(iLocal_3265))
							{
								if (unk_0x7404950238A154C2(iLocal_3265, 0))
								{
									func_204(&iLocal_3265);
									unk_0x5A24D808FBE871F7(iLocal_3210, "Trevor_4_747_Jet_Engine", -937.77f, -2981.36f, 15.44f, 0, 0, 0, 0);
									unk_0x686D6CDC14C4BA6C(iLocal_3265, 1, 0);
									iLocal_3470 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3511 == 0)
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_3221))
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_3221))
				{
					if (unk_0xAF67F8863F1E68BF(iLocal_3221))
					{
						if (unk_0x46097D87132D43A3(iLocal_3221) > 23)
						{
							unk_0x27CC98B7C879C320(iLocal_3221);
							if (unk_0x86CCCD2FAE9D5E65(iLocal_3265))
							{
								if (unk_0x7404950238A154C2(iLocal_3265, 0))
								{
									if (!unk_0x12F24A1A22BF90A7("SOL_3_ENGINE_DEATH_SCENE"))
									{
										unk_0xF2A6D4C99549CA85("SOL_3_ENGINE_DEATH_SCENE");
									}
									uLocal_3208 = unk_0x59C061A719024602(0f, 0f, 0f, 0f, 0f, 0f, 2);
									unk_0xBCD946677FB3F5D5(uLocal_3208, iLocal_3265, unk_0x2430739394FC68FC(iLocal_3265, "chassis_Control"));
									unk_0x58BEA8B2364F8C48(iLocal_3221, uLocal_3208, "MISSSOLOMON_3", "molly_death", 1.5f, -8f, 4, 0, 1148846080, 0);
									unk_0xC64A07C5C44EA267(uLocal_3208, 1);
									iLocal_3511 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3512 == 0)
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_3221))
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_3221))
				{
					if (iLocal_3511 == 1)
					{
						Local_3317 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
						if (Local_3317.f_1 < -2965f)
						{
							unk_0xA9076AE35130AE29(iLocal_3221, 0f, 0f, 0f, 1, 6000, 1000, 2000, 0);
							unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), false, 0);
							unk_0xF88735A9354A45F3(unk_0x81873881071CD9FE(), iLocal_3221, 0);
							unk_0xAF625598EDA64AD3(unk_0x81873881071CD9FE(), iLocal_3221, 4000, 48, 4);
							iLocal_3512 = 1;
						}
					}
				}
			}
		}
		else if (iLocal_3513 == 0)
		{
			if (!unk_0x86CCCD2FAE9D5E65(iLocal_3221))
			{
				unk_0x59E3A6BEFC421137(0);
				unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), true, 0);
				if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[0]))
				{
					if (!unk_0x5FEB513A4402FD59(iLocal_3232[0]))
					{
						unk_0x27CC98B7C879C320(iLocal_3232[0]);
						unk_0x1D15D99A10A15334(iLocal_3232[0], 0);
					}
				}
				iLocal_3513 = 1;
			}
		}
		if (iLocal_3472 == 0)
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_3221))
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_3221))
				{
					if (unk_0x86CCCD2FAE9D5E65(iLocal_3282))
					{
						if (unk_0xEB15D648177E41E9(iLocal_3282, iLocal_3221))
						{
							if (unk_0x0BAE7BE122182FA8(iLocal_3221, "MISSSOLOMON_3", "molly_death", 3))
							{
								if (unk_0xF855C83E3A17514B(uLocal_3208) > 0.59f)
								{
									unk_0xD88DD5B581458979(iLocal_3282, 1, 1);
									if (unk_0xFBACB273AA628CC5(uLocal_3284))
									{
										unk_0x0A8175F24237A3D4(&uLocal_3284);
									}
									if (!unk_0xFBACB273AA628CC5(uLocal_3287))
									{
										func_189(iLocal_3221, "HIGH_FALL", "WAVELOAD_PAIN_FEMALE", 11);
										if (unk_0x12F24A1A22BF90A7("SOL_3_ON_FOOT_CHASE"))
										{
											unk_0x0C22E352114F699C("SOL_3_ON_FOOT_CHASE");
										}
										if (!unk_0x12F24A1A22BF90A7("SOL_3_LOSE_COPS"))
										{
											unk_0xF2A6D4C99549CA85("SOL_3_LOSE_COPS");
										}
										unk_0x5AE11BC36633DE4E(0);
										iLocal_3472 = 1;
									}
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3514 == 0)
		{
			if (iLocal_3472 == 1 && unk_0xC9D9444186B5A374() > 2500)
			{
				uLocal_3287 = func_201(iLocal_3282);
				func_20("SOL3_GOD1", 7500, -1);
				unk_0x5AE11BC36633DE4E(0);
				iLocal_3514 = 1;
			}
		}
		if (iLocal_3570[3] == 0)
		{
			if (iLocal_3514 == 1 && iLocal_3513 == 1)
			{
				if (unk_0xC9D9444186B5A374() > 2500)
				{
					unk_0x2CEC5A597B1DFFE1(10f, 2f, 3);
					iLocal_3570[3] = 1;
				}
			}
		}
		if (iLocal_3471 == 0)
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_3221))
			{
				if (unk_0x0BAE7BE122182FA8(iLocal_3221, "MISSSOLOMON_3", "molly_death", 3))
				{
					if (unk_0xF855C83E3A17514B(uLocal_3208) > 0.89f)
					{
						if (unk_0x86CCCD2FAE9D5E65(iLocal_3265))
						{
							if (unk_0x7404950238A154C2(iLocal_3265, 0))
							{
								unk_0xF210D34D7F7152ED(&iLocal_3221);
								unk_0x5CBC8B584F025FB4("scr_trev4_747_blood_impact", iLocal_3265, -12.5793f, 12.2f, -7.09421f, 0f, 0f, 0f, 1f, 0, 0, 0);
								uLocal_3763 = unk_0xAB454B9B11E38180("scr_trev4_747_exhaust_plane_misfire", iLocal_3265, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, 0, 0, 0);
								unk_0x5A24D808FBE871F7(iLocal_3211, "Trevor_4_747_Man_Sucked_In", -938.6f, -2984.13f, 15.47f, 0, 0, 0, 0);
								iLocal_3191 = unk_0x48E480685981C7D4();
								iLocal_3471 = 1;
							}
						}
					}
				}
			}
		}
		else
		{
			if (unk_0x48E480685981C7D4() > iLocal_3191 + 574)
			{
				if (!unk_0x86CCCD2FAE9D5E65(iLocal_3281))
				{
					if (unk_0x33ACB874CECA2D4B(joaat("prop_jet_bloodsplat_01")))
					{
						iLocal_3281 = unk_0xF364195A57BB7AE3(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, 1, 1, 0);
						unk_0x3A45EB0810EBE71C(iLocal_3281, 0f, 0f, -121.5948f, 2, 1);
						unk_0x5D6F89F6DD9B0781(iLocal_3281, 0f, 0f, 0.8729f, -0.4879f);
						unk_0x887F4488DA99FD21(joaat("prop_jet_bloodsplat_01"));
					}
				}
				if (iLocal_3567 == 0)
				{
					if (unk_0x86CCCD2FAE9D5E65(iLocal_3265))
					{
						if (unk_0x7404950238A154C2(iLocal_3265, 0))
						{
							unk_0x5CBC8B584F025FB4("scr_trev4_747_engine_debris", iLocal_3265, -12.6286f, 6.85353f, -7.13622f, 180f, 0f, 0f, 1f, 0, 0, 0);
							unk_0x686D6CDC14C4BA6C(iLocal_3265, 0, 0);
							func_200();
							unk_0x98A5E5B909F1B162(iLocal_3210);
							iLocal_3567 = 1;
						}
					}
				}
			}
			if (iLocal_3515[0] == 0)
			{
				if (unk_0x48E480685981C7D4() > iLocal_3191 + 300)
				{
					if (unk_0x3D675D69D18A10E9(uLocal_3763))
					{
						unk_0xA080515881A08702(uLocal_3763, 0);
					}
					iLocal_3515[0] = 1;
				}
			}
			else if (iLocal_3519[0] == 0)
			{
				if (unk_0x48E480685981C7D4() > iLocal_3191 + 700)
				{
					if (unk_0x86CCCD2FAE9D5E65(iLocal_3265))
					{
						if (unk_0x7404950238A154C2(iLocal_3265, 0))
						{
							uLocal_3763 = unk_0xAB454B9B11E38180("scr_trev4_747_exhaust_plane_misfire", iLocal_3265, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, 0, 0, 0);
							iLocal_3519[0] = 1;
						}
					}
				}
			}
			else if (iLocal_3515[1] == 0)
			{
				if (unk_0x48E480685981C7D4() > iLocal_3191 + 1000)
				{
					if (unk_0x3D675D69D18A10E9(uLocal_3763))
					{
						unk_0xA080515881A08702(uLocal_3763, 0);
					}
					iLocal_3515[1] = 1;
				}
			}
			else if (iLocal_3519[1] == 0)
			{
				if (unk_0x48E480685981C7D4() > iLocal_3191 + 1400)
				{
					if (unk_0x86CCCD2FAE9D5E65(iLocal_3265))
					{
						if (unk_0x7404950238A154C2(iLocal_3265, 0))
						{
							uLocal_3763 = unk_0xAB454B9B11E38180("scr_trev4_747_exhaust_plane_misfire", iLocal_3265, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, 0, 0, 0);
							uLocal_3762 = unk_0xAB454B9B11E38180("scr_trev4_747_engine_damage", iLocal_3265, -11.956f, 10.528f, -7.657f, 0f, 2f, 0f, 1065353216, 0, 0, 0);
							iLocal_3519[1] = 1;
						}
					}
				}
			}
			else if (iLocal_3515[2] == 0)
			{
				if (unk_0x48E480685981C7D4() > iLocal_3191 + 3500)
				{
					if (unk_0x3D675D69D18A10E9(uLocal_3763))
					{
						unk_0xA080515881A08702(uLocal_3763, 0);
					}
					if (unk_0x86CCCD2FAE9D5E65(iLocal_3265))
					{
						if (unk_0x7404950238A154C2(iLocal_3265, 0))
						{
							unk_0xCEDA5B7DDF6C8846(iLocal_3265, 0, 0, 0, 0, 0, 0, 0, 0);
						}
					}
					iLocal_3515[2] = 1;
				}
			}
		}
		if (iLocal_3536 == 0)
		{
			if (iLocal_3472 == 1)
			{
				if (iLocal_3537 == 0)
				{
					if (!unk_0x0752B24E8A13FF0E(iLocal_3282))
					{
						iLocal_3201 = unk_0x48E480685981C7D4();
						iLocal_3537 = 1;
					}
				}
				else if (unk_0x48E480685981C7D4() > iLocal_3201 + 2000)
				{
					unk_0xA8F22633ACC22189(iLocal_3282, 1);
					iLocal_3536 = 1;
				}
			}
		}
		if (iLocal_3541 == 0)
		{
			if (!unk_0x86CCCD2FAE9D5E65(iLocal_3221))
			{
				if (unk_0x86CCCD2FAE9D5E65(iLocal_3265))
				{
					unk_0xA8F22633ACC22189(iLocal_3265, 0);
					iLocal_3541 = 1;
				}
			}
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3282))
		{
			if (unk_0xFBACB273AA628CC5(uLocal_3287))
			{
				if (func_16(unk_0x81873881071CD9FE(), iLocal_3282, 1) < 1.5f && !unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
				{
					unk_0x35D7948F61AA3FEC(-1, "PICK_UP", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					unk_0x0A8175F24237A3D4(&uLocal_3287);
					unk_0xAB6AFD52AD641D70(&iLocal_3282);
					func_109();
					iLocal_3180 = 0;
					iLocal_3179 = 8;
				}
			}
		}
	}
}

void func_200()
{
	if (unk_0x3D675D69D18A10E9(uLocal_3758))
	{
		unk_0xA080515881A08702(uLocal_3758, 0);
	}
	if (unk_0x3D675D69D18A10E9(uLocal_3759))
	{
		unk_0xA080515881A08702(uLocal_3759, 0);
	}
	if (unk_0x3D675D69D18A10E9(uLocal_3760))
	{
		unk_0xA080515881A08702(uLocal_3760, 0);
	}
	if (unk_0x3D675D69D18A10E9(uLocal_3761))
	{
		unk_0xA080515881A08702(uLocal_3761, 0);
	}
}

int func_201(int iParam0)
{
	return func_202(iParam0, 1, 0);
}

int func_202(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xE122DDAE9E94767B(iParam0);
	if (unk_0xCF8AA94BAD0F766A(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_203(unk_0x1C6DF6AD69BE853E(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xD5CD0E7173F858FF(uVar0, iParam1);
		}
		else
		{
			unk_0x1B86E7A8766EA6B4(uVar0, 2);
		}
	}
	else if (unk_0xCF0C46D719D5302C(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_203(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
		unk_0xD5CD0E7173F858FF(uVar0, iParam1);
	}
	else if (unk_0x9F76B19299294A0E(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(uVar0, func_203(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_203(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_204(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	if (!unk_0x930F8FBB8E9537CC(*iParam0))
	{
		Var0 = { 22.6057f, -2.10018f, -6.22841f };
		Var3 = { 12.6349f, 7.89711f, -7.09742f };
		Var6 = { -22.5879f, -2.2931f, -6.22542f };
		Var9 = { -12.6675f, 8.15519f, -6.98833f };
		Var12 = { 180f, 0f, 0f };
		uLocal_3758 = unk_0xAB454B9B11E38180("scr_trev4_747_engine_heathaze", *iParam0, Var0, Var12, 1065353216, 0, 0, 0);
		uLocal_3759 = unk_0xAB454B9B11E38180("scr_trev4_747_engine_heathaze", *iParam0, Var3, Var12, 1065353216, 0, 0, 0);
		uLocal_3760 = unk_0xAB454B9B11E38180("scr_trev4_747_engine_heathaze", *iParam0, Var6, Var12, 1065353216, 0, 0, 0);
		uLocal_3761 = unk_0xAB454B9B11E38180("scr_trev4_747_engine_heathaze", *iParam0, Var9, Var12, 1065353216, 0, 0, 0);
	}
}

void func_205()
{
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3221))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_3221))
		{
			if (unk_0xAF67F8863F1E68BF(iLocal_3221))
			{
				if (func_16(unk_0x81873881071CD9FE(), iLocal_3221, 1) < 17f)
				{
					unk_0xCA01282F29256D49(iLocal_3221, 3f, 1);
				}
				if (func_16(unk_0x81873881071CD9FE(), iLocal_3221, 1) < 22f && func_16(unk_0x81873881071CD9FE(), iLocal_3221, 1) > 17f)
				{
					unk_0xCA01282F29256D49(iLocal_3221, 2f, 1);
				}
				if (unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), -921.7f, -2946.4f, 13.4f, 1) > 8f && !unk_0x331E7ACCFD0869AD(iLocal_3221))
				{
					if (func_16(unk_0x81873881071CD9FE(), iLocal_3221, 1) > 22f)
					{
						unk_0xCA01282F29256D49(iLocal_3221, 1f, 1);
					}
				}
				else if (func_16(unk_0x81873881071CD9FE(), iLocal_3221, 1) > 22f)
				{
					unk_0xCA01282F29256D49(iLocal_3221, 2f, 1);
				}
			}
		}
	}
	if (iLocal_3180 > 0)
	{
		if (iLocal_3510 == 0)
		{
			if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -926.0258f, -2958.615f, 12.46467f, -930.6525f, -2956.061f, 16.45945f, 2.75f, 0, 1, 0))
			{
				iLocal_3510 = 1;
			}
		}
		else
		{
			unk_0xDE1125A413AF241C(0, 22, 1);
			unk_0xDE1125A413AF241C(0, 25, 1);
			if (fLocal_3325 < 1f)
			{
				fLocal_3325 = 1f;
			}
			fLocal_3325 = (fLocal_3325 * 0.98f);
			unk_0x99E525B7A12DCDBE(unk_0x81873881071CD9FE(), fLocal_3325);
		}
		if (!unk_0x86CCCD2FAE9D5E65(iLocal_3265))
		{
			unk_0x32A12757CBF48A33(joaat("jet"));
			if (unk_0x33ACB874CECA2D4B(joaat("jet")))
			{
				iLocal_3265 = unk_0xE00F8DEA9778FC87(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 1, 1);
				unk_0x24F85A008ECA63FB(iLocal_3265, 2);
				unk_0x8F26EC305B587F81(iLocal_3265, 0);
				unk_0xA8F22633ACC22189(iLocal_3265, 1);
				unk_0xCEDA5B7DDF6C8846(iLocal_3265, 1, 1, 1, 1, 1, 0, 0, 0);
				unk_0x887F4488DA99FD21(joaat("jet"));
				unk_0x6927F8C100125A71(iLocal_3265, 500);
			}
		}
		if (!unk_0x86CCCD2FAE9D5E65(iLocal_3227))
		{
			unk_0x32A12757CBF48A33(joaat("s_m_y_airworker"));
			unk_0x295DC04FC13E025B("misssolomon_3");
			unk_0x32A12757CBF48A33(joaat("p_amb_clipboard_01"));
			if ((unk_0x33ACB874CECA2D4B(joaat("s_m_y_airworker")) && unk_0x8E8B546E1A81D27F("misssolomon_3")) && unk_0x33ACB874CECA2D4B(joaat("p_amb_clipboard_01")))
			{
				iLocal_3227 = unk_0x206897C6DBC12488(26, joaat("s_m_y_airworker"), -932.1812f, -2967.947f, 12.9451f, 170.7182f, 1, 1);
				unk_0xCEDA5B7DDF6C8846(iLocal_3227, 0, 0, 0, 0, 0, 0, 0, 0);
				unk_0x33B1E568CEF14B0D(iLocal_3227, 0);
				unk_0x1D15D99A10A15334(iLocal_3227, 1);
				func_17(&uLocal_3577, 4, iLocal_3227, "HangerWorker", 0, 1);
				iLocal_3283 = unk_0xF364195A57BB7AE3(joaat("p_amb_clipboard_01"), -932.1812f, -2967.947f, 12.9451f, 1, 1, 0);
				unk_0x75F9EE7629363312(iLocal_3283, iLocal_3227, unk_0xDED1B3B1138F742B(iLocal_3221, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				uLocal_3209 = unk_0x59C061A719024602(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
				unk_0x58BEA8B2364F8C48(iLocal_3227, uLocal_3209, "misssolomon_3", "_start_loop", 1000f, -8f, 68, 0, 1148846080, 0);
				unk_0x887F4488DA99FD21(joaat("s_m_y_airworker"));
				unk_0x887F4488DA99FD21(joaat("p_amb_clipboard_01"));
			}
		}
		if (!unk_0x86CCCD2FAE9D5E65(iLocal_3232[0]))
		{
			unk_0x32A12757CBF48A33(joaat("s_m_y_cop_01"));
			if (unk_0x33ACB874CECA2D4B(joaat("s_m_y_cop_01")))
			{
				iLocal_3232[0] = unk_0x206897C6DBC12488(6, joaat("s_m_y_cop_01"), -969.06f, -2955.186f, 12.945f, 241.1703f, 1, 1);
				unk_0x8E4A427F5C43E416(iLocal_3232[0], joaat("weapon_pistol"), 1000, 1, 1);
				unk_0xD31C3826B16CD027(iLocal_3232[0], 20);
				unk_0x3B7AFF7DCE22C1CF(iLocal_3232[0], 1);
				unk_0x1D15D99A10A15334(iLocal_3232[0], 1);
				unk_0xE7D69AA8A129E7D3(iLocal_3232[0], unk_0x81873881071CD9FE(), -1, 1);
				func_111(iLocal_3232[0], 0);
			}
		}
		if (!unk_0x86CCCD2FAE9D5E65(iLocal_3266))
		{
			unk_0x32A12757CBF48A33(joaat("shamal"));
			if (unk_0x33ACB874CECA2D4B(joaat("shamal")))
			{
				iLocal_3266 = unk_0xE00F8DEA9778FC87(joaat("shamal"), -968.3718f, -2952.298f, 12.9451f, 114.9439f, 1, 1);
				unk_0x4DBA43D6DE677017(iLocal_3266, 0, 0, 1);
				unk_0x5CC9D6711FE01F0D(iLocal_3266);
				unk_0x887F4488DA99FD21(joaat("shamal"));
				unk_0x9765BF567DB87B5F(iLocal_3266, 2000);
			}
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3266))
		{
			if (unk_0x7404950238A154C2(iLocal_3266, 0))
			{
				if (func_16(unk_0x81873881071CD9FE(), iLocal_3266, 1) > 5f)
				{
					unk_0x4DBA43D6DE677017(iLocal_3266, 0, 0, 0);
				}
			}
		}
	}
	if (iLocal_3180 == 0)
	{
		func_25(2, "STAGE_ON_FOOT_CHASE", 0, 0, 0, 1);
		if (iLocal_3344 == 1)
		{
			if (!unk_0x29AFA2493D7C23D0())
			{
				unk_0x3B283FEBA87FFBEB(0);
			}
			func_104();
			func_17(&uLocal_3577, 0, unk_0x81873881071CD9FE(), "MICHAEL", 0, 1);
			iLocal_3344 = 0;
		}
		iLocal_3431 = 0;
		iLocal_3432 = 0;
		iLocal_3510 = 0;
		fLocal_3325 = 3f;
		iLocal_3184 = 0;
		func_160(0, 1);
		unk_0x4855165A2773595C(45, "BB_CHASE");
		unk_0x4855165A2773595C(35, "BB_CHASE");
		unk_0x4855165A2773595C(2, "BB_CHASE");
		unk_0x4855165A2773595C(54, "BB_CHASE");
		unk_0x4855165A2773595C(1, "BB_CHASE");
		unk_0x4855165A2773595C(9, "BB_CHASE");
		unk_0x4855165A2773595C(61, "BB_CHASE");
		unk_0x4855165A2773595C(63, "BB_CHASE");
		unk_0x4855165A2773595C(64, "BB_CHASE");
		unk_0x4B6F01DE8CCE643E(&uLocal_3292);
		unk_0x9B331DCFDFC55491("digitalOverlay");
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
		{
			unk_0xA5F9A8EE8A45DD7E(iLocal_3257, 0);
			unk_0xE0913C01F5C0CC3D(&iLocal_3257);
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3270))
		{
			unk_0x5D00E836B6BE8693(&iLocal_3270);
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3253[0]))
		{
			unk_0xF210D34D7F7152ED(&(iLocal_3253[0]));
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3259[0]))
		{
			unk_0x5D00E836B6BE8693(&(iLocal_3259[0]));
		}
		unk_0x035BECCA38FC76EA(0);
		unk_0xA1427E25E074F116(1);
		if (!unk_0x5FEB513A4402FD59(iLocal_3221))
		{
			if (!unk_0xFBACB273AA628CC5(uLocal_3284))
			{
				uLocal_3284 = unk_0xE122DDAE9E94767B(iLocal_3221);
				unk_0xD5CD0E7173F858FF(uLocal_3284, 1);
			}
		}
		unk_0x59BBCA8743D045AE("PoliceScannerDisabled", 1);
		if (iLocal_3364[2] == 1)
		{
			if (!unk_0xBDC7EB9D855C9610(iLocal_3218))
			{
				unk_0x98A5E5B909F1B162(iLocal_3218);
			}
			unk_0x54206B7CE6FF2360(iLocal_3218);
			iLocal_3396 = 0;
			iLocal_3364[2] = 0;
		}
		unk_0x9BAE0FF806E5C2E5(5);
		unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 3, 0);
		unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 0);
		unk_0x80650551CC58C784("TRV4_RUN");
		if (!unk_0x86CCCD2FAE9D5E65(iLocal_3265))
		{
			unk_0x32A12757CBF48A33(joaat("jet"));
		}
		if (!unk_0x86CCCD2FAE9D5E65(iLocal_3227))
		{
			unk_0x32A12757CBF48A33(joaat("s_m_y_airworker"));
		}
		unk_0x32A12757CBF48A33(joaat("shamal"));
		unk_0x32A12757CBF48A33(joaat("s_m_y_cop_01"));
		unk_0x32A12757CBF48A33(joaat("police3"));
		unk_0x32A12757CBF48A33(joaat("p_amb_clipboard_01"));
		unk_0x995DCDA796A47049(68, "BB_Chase");
		unk_0x995DCDA796A47049(69, "BB_Chase");
		unk_0x295DC04FC13E025B("misssolomon_3");
		unk_0xC1B1E9A034A63A62(0);
		if (unk_0x0F7866B4F5BE7CD4("Trev4_5"))
		{
			unk_0x228E7FCA637CBD19("Trev4_5", 1, 1f, 1f);
		}
		if (unk_0x29AFA2493D7C23D0())
		{
			if (!func_24())
			{
				unk_0xBCFD171E27A90624(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1));
			}
			func_21(0, -1, 1);
			func_20("TRV4_CHASE1", 7500, 1);
		}
		if (!unk_0xECDEA377354CBDA4())
		{
			unk_0xAE2B1C30F8A0B67C(800);
		}
		iLocal_3180 = 1;
	}
	if (iLocal_3180 == 1)
	{
		iLocal_3180 = 2;
	}
	if (iLocal_3180 == 2)
	{
		if (unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), -880.365f, -2942.26f, 14f, 9.55f, 15.69f, 5f, 0, 1, 0))
		{
			func_206("TRV4_FAIL1");
		}
		if (unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), -945.725f, -2893.15f, 14f, 4.5f, 9.56f, 5f, 0, 1, 0))
		{
			func_206("TRV4_FAIL1");
		}
		if (unk_0x83666F9FB8FEBD4B() > 15000)
		{
			func_206("TRV4_FAIL1");
		}
		if (unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), -932.1196f, -2934.317f, 12.9448f, 2f, 2f, 2f, 0, 1, 0))
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_3221))
			{
				if (!unk_0xAF67F8863F1E68BF(iLocal_3221))
				{
					unk_0xDA3EE2B44E12D00C(iLocal_3221, "BB_MOLLY_2", 10, 4, -1);
					unk_0x31C1393E4ACFD794(iLocal_3221, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
				}
			}
			unk_0xC1B1E9A034A63A62(0);
			iLocal_3180 = 3;
		}
	}
	if (iLocal_3180 == 3)
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_3221))
		{
			if (unk_0xAF67F8863F1E68BF(iLocal_3221))
			{
				if (unk_0x46097D87132D43A3(iLocal_3221) > 18 && iLocal_3436 == 0)
				{
					iLocal_3351 = 0;
					unk_0xCA01282F29256D49(iLocal_3221, 3f, 1);
					iLocal_3180 = 0;
					iLocal_3179 = 6;
				}
			}
		}
		if (unk_0x83666F9FB8FEBD4B() > 50000)
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_3221))
			{
				unk_0x1E2B48EE3EC55DCF(iLocal_3221);
				unk_0xB067093BBAF0A747(iLocal_3221, -932.5f, -2964.1f, 13.4f, 1, 0, 0, 1);
				unk_0xDA3EE2B44E12D00C(iLocal_3221, "BB_MOLLY_2", 18, 4, -1);
				unk_0x31C1393E4ACFD794(iLocal_3221, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
				iLocal_3351 = 0;
				iLocal_3180 = 0;
				iLocal_3179 = 6;
			}
		}
	}
}

void func_206(char* sParam0)
{
	if (iLocal_3436 == 0)
	{
		if (iLocal_3335)
		{
			func_196(0, 1, 1, 0);
			unk_0xDD0B0D77CB8995B1(uLocal_3288, 0);
			unk_0xFEBF3DDE5E4DC5C5(false, 0, 3000, 1, 0, 0);
			unk_0x3BF4F473786B0150(1);
			if (unk_0x12F24A1A22BF90A7("SOL_3_CHOPPER_CAM"))
			{
				unk_0x0C22E352114F699C("SOL_3_CHOPPER_CAM");
			}
			unk_0x98A5E5B909F1B162(iLocal_3218);
			func_216();
			unk_0xA1427E25E074F116(1);
			iLocal_3364[2] = 0;
			iLocal_3335 = 0;
		}
		unk_0x80650551CC58C784("TRV4_FAIL");
		sLocal_3576 = sParam0;
		unk_0xD1C83BD797927DD5();
		func_185();
		func_183();
		func_207(sLocal_3576);
		iLocal_3436 = 1;
	}
}

void func_207(char* sParam0)
{
	func_215(sParam0);
	func_208(0);
}

void func_208(int iParam0)
{
	int iVar0;
	
	if (Global_98931.f_7699 || func_390(0))
	{
		iVar0 = func_8();
		if (!func_209(iVar0))
		{
			return;
		}
		unk_0xF3148AAF69AF9CBC(&(Global_81894[iVar0 /*5*/].f_1), 5);
		Global_90845 = iParam0;
	}
}

int func_209(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_214();
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		unk_0x4F3A07F7DCB0EB80(5000);
	}
	iVar0 = Global_81894[iParam0 /*5*/];
	iVar1 = Global_69289.f_109[iVar0 /*4*/];
	func_213(iVar1, 1);
	unk_0x46C84B7D00FF3624(unk_0x1329891157A54C63());
	unk_0xA4DB0275D854F239(unk_0x1329891157A54C63());
	func_210(&(Global_98931.f_1750.f_539), iVar1);
	if (Global_85317 == Global_90846)
	{
		Global_98931.f_7699.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0x236D8AD7EE179F46(Global_81930[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			unk_0x3937B60F47657E06(0);
		}
	}
	Global_98931.f_7699.f_330[iVar1 /*6*/].f_2++;
	Global_85317 = Global_90846;
	if (iParam0 == -1)
	{
		if (Global_98931.f_7699)
		{
		}
		return 0;
	}
	if (unk_0x236D8AD7EE179F46(Global_81894[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0x236D8AD7EE179F46(Global_81894[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_210(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_98931.f_17147[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0x236D8AD7EE179F46(Global_98931.f_7699.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_212(Global_98931.f_17147[iVar0], &Var2, &fVar5))
			{
				Global_98931.f_17147[iVar0] = 318;
				func_211(&(uParam0->f_1524[iVar0]));
				uParam0->f_1528[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1538[iVar0] = 0f;
				uParam0->f_1542[iVar0] = 0;
				uParam0->f_1546[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1556[iVar0] = 0;
				Global_88532[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_88532[iVar0 /*29*/].f_9 = 0f;
				Global_88532[iVar0 /*29*/].f_12 = 0f;
				Global_88532[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_88532[iVar0 /*29*/].f_10 = 0f;
				Global_88532[iVar0 /*29*/].f_13 = 0f;
				Global_88532[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_88532[iVar0 /*29*/].f_11 = 0f;
				Global_88532[iVar0 /*29*/].f_14 = 0f;
				Global_88532[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_88532[iVar0 /*29*/].f_26 = 0f;
				Global_88532[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_88532[iVar0 /*29*/].f_27 = 0f;
				Global_88532[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_88532[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_211(var uParam0)
{
	*uParam0 = -15;
}

int func_212(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_212(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_212(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_213(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_85127[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85127[iParam0 /*2*/] = 0;
	}
}

void func_214()
{
	Global_90844 = 1;
	if (unk_0x375975027050A891(unk_0x1329891157A54C63(), 1))
	{
		if (unk_0xB318FDA0D1ABDB20(&Global_69252))
		{
			switch (func_91())
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
			switch (func_91())
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

void func_215(char* sParam0)
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

void func_216()
{
	Global_55409 = 0;
}

void func_217()
{
	if (!unk_0x86CCCD2FAE9D5E65(iLocal_3265))
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
		{
			if (unk_0x7404950238A154C2(iLocal_3257, 0))
			{
				if (unk_0xE20321A2D7F8960C(iLocal_3257))
				{
					if (unk_0x678BA9CA7610A13E(iLocal_3257) > 30000f)
					{
						unk_0x32A12757CBF48A33(joaat("jet"));
						if (unk_0x33ACB874CECA2D4B(joaat("jet")))
						{
							iLocal_3265 = unk_0xE00F8DEA9778FC87(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 1, 1);
							unk_0x24F85A008ECA63FB(iLocal_3265, 2);
							unk_0x8F26EC305B587F81(iLocal_3265, 0);
							unk_0xA8F22633ACC22189(iLocal_3265, 1);
							unk_0xCEDA5B7DDF6C8846(iLocal_3265, 1, 1, 1, 1, 1, 0, 0, 0);
							unk_0x887F4488DA99FD21(joaat("jet"));
							unk_0x6927F8C100125A71(iLocal_3265, 500);
						}
					}
				}
			}
		}
	}
	func_305();
	if (unk_0xFBACB273AA628CC5(uLocal_3284))
	{
		func_304(uLocal_3284, iLocal_3221, 300f, 0.9f, 0);
	}
	if (iLocal_3180 == 0)
	{
		if (iLocal_3181 < 2)
		{
			unk_0x562CC048D820CB02(unk_0x81873881071CD9FE(), 0);
		}
		func_303();
		func_271();
		if (iLocal_3401 == 0)
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[20]))
			{
				if (unk_0x7404950238A154C2(iLocal_3120[20], 0))
				{
					unk_0x686D6CDC14C4BA6C(iLocal_3120[20], 1, 1);
					unk_0x50638C188ABB218B(iLocal_3120[20]);
					iLocal_3401 = 1;
				}
			}
		}
		func_270();
		func_269();
		if (iLocal_3348 == 0)
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
			{
				if (unk_0x7404950238A154C2(iLocal_3257, 0))
				{
					if (unk_0xE20321A2D7F8960C(iLocal_3257))
					{
						func_268(uLocal_3288, iLocal_3270, "BB_Chase", 1);
						iLocal_3348 = 1;
					}
				}
			}
		}
		else if (unk_0x7404950238A154C2(iLocal_3257, 0))
		{
			if (unk_0xE20321A2D7F8960C(iLocal_3257))
			{
				func_267(uLocal_3288, iLocal_3270, fLocal_3322);
				unk_0xBF1C17EB7F681E53(uLocal_3288, 45f);
			}
		}
		if (iLocal_3336 == 0)
		{
			if (unk_0x7404950238A154C2(iLocal_3257, 0))
			{
				if (unk_0xE20321A2D7F8960C(iLocal_3257))
				{
					if ((unk_0x678BA9CA7610A13E(iLocal_3257) > 15000f && unk_0x678BA9CA7610A13E(iLocal_3257) < 125464f) && func_265(1, 0, 0))
					{
						iLocal_3351 = 1;
						if (iLocal_3436 == 0)
						{
							unk_0xB8BB626315D394F5(1);
							func_264("TRV4_HELP1", -1);
							func_259(1);
							func_181(&uLocal_27, 0, 0);
							unk_0x0D7089406F6A5C6E(0);
							iLocal_3336 = 1;
						}
					}
				}
			}
		}
		else if (unk_0x7404950238A154C2(iLocal_3257, 0))
		{
			if (unk_0xE20321A2D7F8960C(iLocal_3257))
			{
				if (unk_0xCC8E3BAC62A29F42(uLocal_3292) && func_157(1, "BB_Chase"))
				{
					if (((unk_0x678BA9CA7610A13E(iLocal_3257) > 15000f && unk_0x678BA9CA7610A13E(iLocal_3257) < 125464f) && iLocal_3436 == 0) && unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
					{
						func_237();
					}
					if (unk_0x678BA9CA7610A13E(iLocal_3257) > 125464f || !unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
					{
						if (iLocal_3335)
						{
							unk_0xB8BB626315D394F5(1);
							func_196(0, 1, 1, 0);
							unk_0xDD0B0D77CB8995B1(uLocal_3288, 0);
							unk_0xFEBF3DDE5E4DC5C5(false, 0, 3000, 1, 0, 0);
							unk_0x3BF4F473786B0150(1);
							if (unk_0x12F24A1A22BF90A7("SOL_3_CHOPPER_CAM"))
							{
								unk_0x0C22E352114F699C("SOL_3_CHOPPER_CAM");
							}
							unk_0x98A5E5B909F1B162(iLocal_3218);
							func_216();
							unk_0xA1427E25E074F116(1);
							iLocal_3364[2] = 0;
							iLocal_3335 = 0;
						}
					}
				}
			}
		}
		switch (iLocal_3181)
		{
			case 0:
				if (iLocal_3570[0] == 0)
				{
					if (unk_0x7404950238A154C2(iLocal_3257, 0))
					{
						if (unk_0xE20321A2D7F8960C(iLocal_3257))
						{
							if (unk_0x678BA9CA7610A13E(iLocal_3257) > 44255f && unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), -1187.3f, -2847.8f, 13.6f, 1) < 100f)
							{
								unk_0x2CEC5A597B1DFFE1(10f, 2f, 3);
								iLocal_3570[0] = 1;
							}
						}
					}
				}
				if (iLocal_3570[1] == 0)
				{
					if (unk_0x7404950238A154C2(iLocal_3257, 0))
					{
						if (unk_0xE20321A2D7F8960C(iLocal_3257))
						{
							if (unk_0x678BA9CA7610A13E(iLocal_3257) > 52875f && unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), -1349f, -2720f, 14f, 1) < 50f)
							{
								unk_0x2CEC5A597B1DFFE1(6f, 2f, 3);
								iLocal_3570[1] = 1;
							}
						}
					}
				}
				if (iLocal_3570[2] == 0)
				{
					if (unk_0x7404950238A154C2(iLocal_3257, 0))
					{
						if (unk_0xE20321A2D7F8960C(iLocal_3257))
						{
							if (unk_0x678BA9CA7610A13E(iLocal_3257) > 87085f && unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), -1507f, -2520f, 14f, 1) < 70f)
							{
								unk_0x2CEC5A597B1DFFE1(10f, 2f, 3);
								iLocal_3570[2] = 1;
							}
						}
					}
				}
				func_236();
				func_235();
				if (!unk_0x12F24A1A22BF90A7("SOL_3_PLANE_ON_FIRE"))
				{
					if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
					{
						if (unk_0x7404950238A154C2(iLocal_3257, 0))
						{
							if (unk_0xE20321A2D7F8960C(iLocal_3257))
							{
								if (unk_0x678BA9CA7610A13E(iLocal_3257) > 64280f && unk_0x678BA9CA7610A13E(iLocal_3257) < 72000f)
								{
									if (unk_0x0D6E79537424BACE(-1149.6f, -2323.7f, 22.5f, unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 1) < 130f)
									{
										unk_0xF2A6D4C99549CA85("SOL_3_PLANE_ON_FIRE");
									}
								}
							}
						}
					}
				}
				else if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
				{
					if (unk_0x7404950238A154C2(iLocal_3257, 0))
					{
						if (unk_0xE20321A2D7F8960C(iLocal_3257))
						{
							if (unk_0x678BA9CA7610A13E(iLocal_3257) > 72500f)
							{
								unk_0x0C22E352114F699C("SOL_3_PLANE_ON_FIRE");
							}
						}
					}
				}
				if (!unk_0x12F24A1A22BF90A7("SOL_3_EVENT_JET_LANDING"))
				{
					if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
					{
						if (unk_0x7404950238A154C2(iLocal_3257, 0))
						{
							if (unk_0xE20321A2D7F8960C(iLocal_3257))
							{
								if (unk_0x678BA9CA7610A13E(iLocal_3257) > 78000f && unk_0x678BA9CA7610A13E(iLocal_3257) < 85000f)
								{
									unk_0xF2A6D4C99549CA85("SOL_3_EVENT_JET_LANDING");
								}
							}
						}
					}
				}
				else if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
				{
					if (unk_0x7404950238A154C2(iLocal_3257, 0))
					{
						if (unk_0xE20321A2D7F8960C(iLocal_3257))
						{
							if (unk_0x678BA9CA7610A13E(iLocal_3257) > 85500f)
							{
								unk_0x0C22E352114F699C("SOL_3_EVENT_JET_LANDING");
							}
						}
					}
				}
				if (!unk_0x12F24A1A22BF90A7("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION"))
				{
					if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
					{
						if (unk_0x7404950238A154C2(iLocal_3257, 0))
						{
							if (unk_0xE20321A2D7F8960C(iLocal_3257))
							{
								if (unk_0x678BA9CA7610A13E(iLocal_3257) > 100000f && unk_0x678BA9CA7610A13E(iLocal_3257) < 107000f)
								{
									unk_0xF2A6D4C99549CA85("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
								}
							}
						}
					}
				}
				else if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
				{
					if (unk_0x7404950238A154C2(iLocal_3257, 0))
					{
						if (unk_0xE20321A2D7F8960C(iLocal_3257))
						{
							if (unk_0x678BA9CA7610A13E(iLocal_3257) > 107500f)
							{
								unk_0x0C22E352114F699C("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
							}
						}
					}
				}
				if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
				{
					if (unk_0x7404950238A154C2(iLocal_3257, 0))
					{
						if (unk_0xE20321A2D7F8960C(iLocal_3257))
						{
							if (unk_0x678BA9CA7610A13E(iLocal_3257) < 10000f)
							{
								func_234();
							}
						}
					}
				}
				if (unk_0x7404950238A154C2(iLocal_3257, 0))
				{
					if (unk_0xE20321A2D7F8960C(iLocal_3257))
					{
						if (unk_0x678BA9CA7610A13E(iLocal_3257) < 30000f)
						{
							func_233(iLocal_3257, unk_0x678BA9CA7610A13E(iLocal_3257));
						}
					}
				}
				if (iLocal_3439 == 0)
				{
					if (unk_0x7404950238A154C2(iLocal_3257, 0))
					{
						if (unk_0xE20321A2D7F8960C(iLocal_3257))
						{
							if (unk_0x678BA9CA7610A13E(iLocal_3257) > 22000f)
							{
								unk_0xA3BC6AA446F03669("TRV4_AIRPORT_ENTERED");
								iLocal_3439 = 1;
							}
						}
					}
				}
				else if (iLocal_3440 == 0)
				{
					if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -940.8253f, -2858.602f, 11.94482f, -1001.272f, -2823.764f, 21.00674f, 5.75f, 0, 1, 0))
					{
						unk_0x80650551CC58C784("TRV4_AIRPORT_ENTERED");
						iLocal_3440 = 1;
					}
				}
				if (iLocal_3342 == 0)
				{
					if (unk_0x7404950238A154C2(iLocal_3257, 0))
					{
						if (func_16(iLocal_3257, unk_0x81873881071CD9FE(), 1) < 170f && unk_0x331E7ACCFD0869AD(iLocal_3257))
						{
							if (unk_0xFBACB273AA628CC5(uLocal_3286))
							{
								unk_0x0A8175F24237A3D4(&uLocal_3286);
							}
							if (unk_0x12F24A1A22BF90A7("SOL_3_DRIVE_TO_AIRPORT"))
							{
								unk_0x0C22E352114F699C("SOL_3_DRIVE_TO_AIRPORT");
							}
							if (!unk_0x12F24A1A22BF90A7("SOL_3_MAIN_CHASE"))
							{
								unk_0xF2A6D4C99549CA85("SOL_3_MAIN_CHASE");
							}
							if (!unk_0xFBACB273AA628CC5(uLocal_3284))
							{
								if (!unk_0x5FEB513A4402FD59(iLocal_3221))
								{
									uLocal_3284 = unk_0xE122DDAE9E94767B(iLocal_3221);
									unk_0xD5CD0E7173F858FF(uLocal_3284, 1);
								}
							}
							unk_0x169327598E00BC8A();
							if (!unk_0xDBD19E93A4D01117())
							{
								func_20("TRV4_CHASE2", 7500, 1);
								func_25(1, "STAGE_CHASE_START", 0, 0, 0, 1);
								unk_0x80650551CC58C784("TRV4_CHASE");
								iLocal_3342 = 1;
							}
						}
					}
					if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -536.0366f, -2102.793f, 5.672412f, -464.5755f, -2165.133f, 14.75182f, 65.25f, 0, 1, 0))
					{
						if (unk_0xFBACB273AA628CC5(uLocal_3286))
						{
							unk_0x0A8175F24237A3D4(&uLocal_3286);
						}
						if (!unk_0xFBACB273AA628CC5(uLocal_3284))
						{
							if (!unk_0x5FEB513A4402FD59(iLocal_3221))
							{
								uLocal_3284 = unk_0xE122DDAE9E94767B(iLocal_3221);
								unk_0xD5CD0E7173F858FF(uLocal_3284, 1);
							}
						}
						unk_0x169327598E00BC8A();
						if (!unk_0xDBD19E93A4D01117())
						{
							func_20("TRV4_CHASE2", 7500, 1);
							func_25(1, "STAGE_CHASE_START", 0, 0, 0, 1);
							unk_0x80650551CC58C784("TRV4_CHASE");
							iLocal_3342 = 1;
						}
					}
				}
				else if (unk_0x7404950238A154C2(iLocal_3257, 0))
				{
					if (unk_0xE20321A2D7F8960C(iLocal_3257))
					{
						if (unk_0x678BA9CA7610A13E(iLocal_3257) < 15000f)
						{
						}
					}
				}
				if (iLocal_3327 == 0)
				{
					unk_0x32A12757CBF48A33(joaat("jet"));
					if (unk_0x33ACB874CECA2D4B(joaat("jet")))
					{
						if (unk_0x7404950238A154C2(iLocal_3257, 0))
						{
							if (unk_0xE20321A2D7F8960C(iLocal_3257))
							{
								if (unk_0x678BA9CA7610A13E(iLocal_3257) > 18490f)
								{
									iLocal_3259[1] = unk_0xE00F8DEA9778FC87(joaat("jet"), -441.3117f, -3435.736f, 409.9454f, 148.3975f, 1, 1);
									unk_0xC8F62804B10A6701(iLocal_3259[1], 2, "BB_Chase", 1);
									unk_0x887F4488DA99FD21(joaat("jet"));
									iLocal_3327 = 1;
								}
							}
						}
					}
				}
				else if (unk_0x86CCCD2FAE9D5E65(iLocal_3259[1]))
				{
					if (unk_0x7404950238A154C2(iLocal_3259[1], 0))
					{
						if (unk_0xE20321A2D7F8960C(iLocal_3259[1]))
						{
							unk_0x1248DFEEEEE716FC(iLocal_3259[1], fLocal_3322);
							if (unk_0x678BA9CA7610A13E(iLocal_3259[1]) > 20000f)
							{
								if (func_16(unk_0x81873881071CD9FE(), iLocal_3259[1], 1) > 200f && !unk_0x331E7ACCFD0869AD(iLocal_3259[1]))
								{
									unk_0x05ACEF4F060B9B4E(iLocal_3259[1]);
									if (unk_0x86CCCD2FAE9D5E65(iLocal_3253[1]))
									{
										unk_0xF210D34D7F7152ED(&(iLocal_3253[1]));
									}
									unk_0x5D00E836B6BE8693(&(iLocal_3259[1]));
									iLocal_3206 = unk_0x48E480685981C7D4() + 1000;
								}
							}
							if (unk_0x86CCCD2FAE9D5E65(iLocal_3259[1]))
							{
								if (unk_0x678BA9CA7610A13E(iLocal_3259[1]) > 31543f)
								{
									unk_0x05ACEF4F060B9B4E(iLocal_3259[1]);
									unk_0xA8F22633ACC22189(iLocal_3259[1], 1);
								}
							}
						}
						else if (func_16(unk_0x81873881071CD9FE(), iLocal_3259[1], 1) > 200f && !unk_0x331E7ACCFD0869AD(iLocal_3259[1]))
						{
							if (unk_0x86CCCD2FAE9D5E65(iLocal_3253[1]))
							{
								unk_0xF210D34D7F7152ED(&(iLocal_3253[1]));
							}
							unk_0x5D00E836B6BE8693(&(iLocal_3259[1]));
							iLocal_3206 = unk_0x48E480685981C7D4() + 1000;
						}
					}
				}
				if (iLocal_3486 == 0)
				{
					if (!unk_0x86CCCD2FAE9D5E65(iLocal_3264))
					{
						if (unk_0x7404950238A154C2(iLocal_3257, 0))
						{
							if (unk_0xE20321A2D7F8960C(iLocal_3257))
							{
								if (unk_0x678BA9CA7610A13E(iLocal_3257) > 23000f)
								{
									unk_0x32A12757CBF48A33(joaat("tanker"));
									if (unk_0x33ACB874CECA2D4B(joaat("tanker")))
									{
										iLocal_3264 = unk_0xE00F8DEA9778FC87(joaat("tanker"), -1325f, -2779f, 14f, 233.9563f, 1, 1);
										unk_0x887F4488DA99FD21(joaat("tanker"));
										unk_0xFD021BAF9614D437(iLocal_3264, 57, 57);
										iLocal_3486 = 1;
									}
								}
							}
						}
					}
				}
				if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[1]))
				{
					if (unk_0x7404950238A154C2(iLocal_3120[1], 0))
					{
						if (unk_0xE20321A2D7F8960C(iLocal_3120[1]))
						{
							if (unk_0x678BA9CA7610A13E(iLocal_3120[1]) > 13000f)
							{
								if (iLocal_3376 == 0)
								{
									fLocal_1172[1] = 0.5f;
									iLocal_3244 = unk_0xB0B9E53CEFDB16AA(iLocal_3120[1], -1);
									iLocal_3376 = 1;
								}
							}
						}
					}
				}
				if (iLocal_3333 == 0)
				{
					unk_0x7F6095C73DDAB13F(-1325f, -2779f, 14f);
					if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[1]))
					{
						if (iLocal_3362 == 0)
						{
							unk_0xFD021BAF9614D437(iLocal_3120[1], 57, 57);
							iLocal_3362 = 1;
						}
						if (unk_0x86CCCD2FAE9D5E65(iLocal_3264))
						{
							if (!unk_0x930F8FBB8E9537CC(iLocal_3120[1]))
							{
								if (!unk_0x930F8FBB8E9537CC(iLocal_3264))
								{
									if (unk_0xE20321A2D7F8960C(iLocal_3120[1]))
									{
										unk_0x7F5AD17F7679391B(iLocal_3120[1], iLocal_3264, 1065353216);
									}
								}
							}
						}
					}
					if (unk_0x86CCCD2FAE9D5E65(iLocal_3264))
					{
						if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
						{
							if (unk_0x7404950238A154C2(iLocal_3257, 0))
							{
								if (unk_0xE20321A2D7F8960C(iLocal_3257))
								{
									if (unk_0x678BA9CA7610A13E(iLocal_3257) > 41430f)
									{
										unk_0xD88DD5B581458979(iLocal_3264, 1, 1);
										iLocal_3333 = 1;
									}
								}
							}
						}
					}
				}
				else if (iLocal_3379 == 0)
				{
					if (unk_0x7404950238A154C2(iLocal_3120[1], 0))
					{
						if (unk_0x7404950238A154C2(iLocal_3257, 0))
						{
							if (unk_0xE20321A2D7F8960C(iLocal_3257))
							{
								if (unk_0x678BA9CA7610A13E(iLocal_3257) > 42700f)
								{
									if (unk_0x86CCCD2FAE9D5E65(iLocal_3244))
									{
										if (!unk_0x5FEB513A4402FD59(iLocal_3244))
										{
											unk_0x9765BF567DB87B5F(iLocal_3244, 0);
										}
									}
									if (unk_0xE20321A2D7F8960C(iLocal_3120[1]))
									{
										unk_0x05ACEF4F060B9B4E(iLocal_3120[1]);
										iLocal_3379 = 1;
									}
								}
							}
						}
					}
				}
				if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
				{
					if (unk_0x7404950238A154C2(iLocal_3257, 0))
					{
						if (unk_0xE20321A2D7F8960C(iLocal_3257))
						{
							if (iLocal_3550 == 0)
							{
								if (unk_0x678BA9CA7610A13E(iLocal_3257) > 38000f)
								{
									if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[1]) && unk_0x7404950238A154C2(iLocal_3120[1], 0))
									{
										unk_0x058526005957A956(-1, "Trevor_4_747_Tanker_Horn", iLocal_3120[1], 0, 0, 0);
										iLocal_3550 = 1;
									}
								}
							}
							if (iLocal_3364[1] == 0)
							{
								if (unk_0x678BA9CA7610A13E(iLocal_3257) > 39000f)
								{
									if (!unk_0x12F24A1A22BF90A7("SOL_3_EVENT_TANKER_CRASH"))
									{
										unk_0xF2A6D4C99549CA85("SOL_3_EVENT_TANKER_CRASH");
									}
									if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
									{
										unk_0xCEDA5B7DDF6C8846(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 0, 1, 1, 0, 0, 0, 0, 0);
									}
									iLocal_3364[1] = 1;
								}
							}
							if (iLocal_3434 == 0)
							{
								if (unk_0x678BA9CA7610A13E(iLocal_3257) > 41611f)
								{
									if (unk_0x86CCCD2FAE9D5E65(iLocal_3264))
									{
										if (!unk_0x930F8FBB8E9537CC(iLocal_3264))
										{
											if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[7]))
											{
												if (!unk_0x930F8FBB8E9537CC(iLocal_3120[7]))
												{
													unk_0x058526005957A956(-1, "Trevor_4_747_Tanker_Explosion", iLocal_3264, 0, 0, 0);
													unk_0x05ACEF4F060B9B4E(iLocal_3120[7]);
													unk_0x11B340FC7EE49BD2(iLocal_3120[7], 1, 0);
													unk_0x11B340FC7EE49BD2(iLocal_3264, 1, 0);
													unk_0x337FDC38F86A8A02(-1221f, -2852f, 17f, 14, 1f, 1, 0, 1065353216);
													unk_0x337FDC38F86A8A02(-1212f, -2855f, 14.34f, 14, 1f, 1, 0, 1065353216);
													unk_0xE0913C01F5C0CC3D(&iLocal_3264);
													unk_0xE0913C01F5C0CC3D(&(iLocal_3120[1]));
													iLocal_3434 = 1;
												}
											}
										}
									}
								}
							}
							if (iLocal_3368[1] == 0)
							{
								if (unk_0x678BA9CA7610A13E(iLocal_3257) > 43204f)
								{
									if (unk_0x12F24A1A22BF90A7("SOL_3_EVENT_TANKER_CRASH"))
									{
										unk_0x0C22E352114F699C("SOL_3_EVENT_TANKER_CRASH");
									}
									unk_0x2D2FB8B6D397597E("SCRIPT\Trv_4_747_Tanker_Explosion");
									if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
									{
										unk_0xCEDA5B7DDF6C8846(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 0, 0, 0, 0, 0, 0, 0, 0);
									}
									iLocal_3368[1] = 1;
								}
							}
						}
					}
				}
				if (!unk_0x12F24A1A22BF90A7("SOL_3_HELI_TAKEOFF"))
				{
					if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[0]))
					{
						if (unk_0x7404950238A154C2(iLocal_3120[0], 0))
						{
							if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
							{
								if (unk_0x7404950238A154C2(iLocal_3257, 0))
								{
									if (unk_0xE20321A2D7F8960C(iLocal_3257))
									{
										if (unk_0x678BA9CA7610A13E(iLocal_3257) > 36000f && unk_0x678BA9CA7610A13E(iLocal_3257) < 40000f)
										{
											unk_0xF2A6D4C99549CA85("SOL_3_HELI_TAKEOFF");
										}
									}
								}
							}
						}
					}
				}
				else if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[0]))
				{
					if (unk_0x7404950238A154C2(iLocal_3120[0], 0))
					{
						if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
						{
							if (unk_0x7404950238A154C2(iLocal_3257, 0))
							{
								if (unk_0xE20321A2D7F8960C(iLocal_3257))
								{
									if (unk_0x678BA9CA7610A13E(iLocal_3257) > 43204f)
									{
										unk_0x0C22E352114F699C("SOL_3_HELI_TAKEOFF");
									}
								}
							}
						}
					}
				}
				if (iLocal_3326 == 0)
				{
					if (unk_0x7404950238A154C2(iLocal_3257, 0))
					{
						if (unk_0xE20321A2D7F8960C(iLocal_3257))
						{
							if (unk_0x678BA9CA7610A13E(iLocal_3257) > 60500f)
							{
								unk_0x32A12757CBF48A33(joaat("jet"));
							}
							if (unk_0x678BA9CA7610A13E(iLocal_3257) > 66500f)
							{
								if (unk_0x33ACB874CECA2D4B(joaat("jet")))
								{
									iLocal_3259[0] = unk_0xE00F8DEA9778FC87(joaat("jet"), -1119.072f, -1864.548f, -8.2205f, 148.3975f, 1, 1);
									unk_0x210A4A0B257F8433(iLocal_3259[0], 1);
									unk_0x24F85A008ECA63FB(iLocal_3259[0], 2);
									unk_0xC8F62804B10A6701(iLocal_3259[0], 35, "BB_Chase", 1);
									unk_0x0039C5B0E3E4993E(iLocal_3259[0], 3491f);
									unk_0x887F4488DA99FD21(joaat("jet"));
									iLocal_3326 = 1;
								}
							}
						}
					}
				}
				else if (unk_0x86CCCD2FAE9D5E65(iLocal_3259[0]))
				{
					if (unk_0x7404950238A154C2(iLocal_3259[0], 0))
					{
						if (unk_0x7404950238A154C2(iLocal_3257, 0))
						{
							if (unk_0xE20321A2D7F8960C(iLocal_3257))
							{
								if (unk_0xE20321A2D7F8960C(iLocal_3259[0]))
								{
									unk_0x1248DFEEEEE716FC(iLocal_3259[0], fLocal_3322);
									if (unk_0x678BA9CA7610A13E(iLocal_3257) > 80000f)
									{
										if (func_16(iLocal_3259[0], unk_0x81873881071CD9FE(), 1) > 200f)
										{
											unk_0x05ACEF4F060B9B4E(iLocal_3259[0]);
										}
									}
								}
								else if (unk_0x678BA9CA7610A13E(iLocal_3257) > 80000f)
								{
									if (func_16(iLocal_3259[0], unk_0x81873881071CD9FE(), 1) > 200f && !unk_0x331E7ACCFD0869AD(iLocal_3259[0]))
									{
										if (unk_0x86CCCD2FAE9D5E65(iLocal_3253[0]))
										{
											unk_0xF210D34D7F7152ED(&(iLocal_3253[0]));
										}
										unk_0x5D00E836B6BE8693(&(iLocal_3259[0]));
										iLocal_3206 = unk_0x48E480685981C7D4() + 1000;
									}
								}
							}
						}
					}
				}
				if (iLocal_3398 == 0)
				{
					if (iLocal_3397 == 0)
					{
						if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
						{
							if (unk_0x7404950238A154C2(iLocal_3257, 0))
							{
								if (unk_0xE20321A2D7F8960C(iLocal_3257))
								{
									if (unk_0x678BA9CA7610A13E(iLocal_3257) > 50000f)
									{
										unk_0x32A12757CBF48A33(joaat("s_m_y_airworker"));
										unk_0x295DC04FC13E025B("misstrevor4");
										if (unk_0x33ACB874CECA2D4B(joaat("s_m_y_airworker")))
										{
											iLocal_3245 = unk_0x206897C6DBC12488(26, joaat("s_m_y_airworker"), -1170.541f, -2507.111f, 12.9455f, 218.3035f, 1, 1);
											iLocal_3246 = unk_0x206897C6DBC12488(26, joaat("s_m_y_airworker"), -1168.264f, -2508.715f, 12.9455f, 70.7735f, 1, 1);
											unk_0x1D15D99A10A15334(iLocal_3245, 1);
											unk_0x1D15D99A10A15334(iLocal_3246, 1);
											unk_0x887F4488DA99FD21(joaat("s_m_y_airworker"));
											iLocal_3397 = 1;
										}
									}
								}
							}
						}
					}
					else if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
					{
						if (unk_0x7404950238A154C2(iLocal_3257, 0))
						{
							if (unk_0xE20321A2D7F8960C(iLocal_3257))
							{
								if (unk_0x678BA9CA7610A13E(iLocal_3257) > 58000f)
								{
									if (!unk_0x5FEB513A4402FD59(iLocal_3245))
									{
										if (unk_0x8E8B546E1A81D27F("misstrevor4"))
										{
											if (!unk_0x0BAE7BE122182FA8(iLocal_3245, "misstrevor4", "dive_clear_goon1", 3))
											{
												unk_0x31C1393E4ACFD794(iLocal_3245, "misstrevor4", "dive_clear_goon1", 8f, -8f, -1, 0, 0, 0, 0, 0);
											}
										}
									}
									if (!unk_0x5FEB513A4402FD59(iLocal_3246))
									{
										if (unk_0x8E8B546E1A81D27F("misstrevor4"))
										{
											if (!unk_0x0BAE7BE122182FA8(iLocal_3246, "misstrevor4", "dive_clear_goon2", 3))
											{
												unk_0x31C1393E4ACFD794(iLocal_3246, "misstrevor4", "dive_clear_goon2", 8f, -8f, -1, 0, 0, 0, 0, 0);
											}
										}
									}
									iLocal_3398 = 1;
								}
							}
						}
					}
				}
				else if (unk_0x86CCCD2FAE9D5E65(iLocal_3245))
				{
					if (!unk_0x5FEB513A4402FD59(iLocal_3245))
					{
						if (!unk_0x0BAE7BE122182FA8(iLocal_3245, "misstrevor4", "dive_clear_goon1", 3))
						{
							if (unk_0x86CCCD2FAE9D5E65(iLocal_3246))
							{
								if (!unk_0x5FEB513A4402FD59(iLocal_3246))
								{
									if (!unk_0x0BAE7BE122182FA8(iLocal_3246, "misstrevor4", "dive_clear_goon2", 3))
									{
										unk_0xD8323B49BAE93D80("misstrevor4");
										unk_0x71A8BCA218722FA1(&iLocal_3245);
										unk_0x71A8BCA218722FA1(&iLocal_3246);
									}
								}
							}
						}
					}
				}
				if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[8]))
				{
					if (unk_0x7404950238A154C2(iLocal_3120[8], 0))
					{
						if (unk_0xE20321A2D7F8960C(iLocal_3120[8]))
						{
							if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
							{
								if (unk_0x7404950238A154C2(iLocal_3257, 0))
								{
									if (unk_0xE20321A2D7F8960C(iLocal_3257))
									{
										if (unk_0x678BA9CA7610A13E(iLocal_3257) > 50200f)
										{
											if (iLocal_3329 == 0)
											{
												unk_0x1248DFEEEEE716FC(iLocal_3120[8], 1f);
												if (func_16(unk_0x81873881071CD9FE(), iLocal_3120[8], 1) < 100f)
												{
													unk_0xCF2F32222FF93448(0.3f);
													iLocal_3372 = 0;
													if (!unk_0x12F24A1A22BF90A7("SOL_3_CAR_JET_ENGINE"))
													{
														unk_0xF2A6D4C99549CA85("SOL_3_CAR_JET_ENGINE");
													}
													unk_0xE7B81FA5331B1559(iLocal_3120[8], 0f, 0f, 0f, 1, 1500, 500, 100);
												}
												unk_0x3B7AFF7DCE22C1CF(iLocal_3120[8], 1);
												unk_0xBACAE7435A25DB26(iLocal_3120[8], 1, 0);
												unk_0x058526005957A956(iLocal_3212, "Trevor_4_747_Flying_Car", iLocal_3120[8], 0, 0, 0);
												unk_0x5AE11BC36633DE4E(0);
												iLocal_3329 = 1;
											}
										}
										if (iLocal_3329 == 1)
										{
											if (unk_0xC9D9444186B5A374() > 662)
											{
												if (unk_0x12F24A1A22BF90A7("SOL_3_CAR_JET_ENGINE"))
												{
													unk_0x0C22E352114F699C("SOL_3_CAR_JET_ENGINE");
												}
												unk_0xCF2F32222FF93448(1f);
												iLocal_3372 = 1;
											}
											if (unk_0xC9D9444186B5A374() > 1872)
											{
												unk_0x05ACEF4F060B9B4E(iLocal_3120[8]);
											}
										}
									}
								}
							}
						}
						else if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
						{
							if (unk_0x7404950238A154C2(iLocal_3257, 0))
							{
								if (unk_0xE20321A2D7F8960C(iLocal_3257))
								{
									if (unk_0x678BA9CA7610A13E(iLocal_3257) > 50200f)
									{
										if (!unk_0x0752B24E8A13FF0E(iLocal_3120[8]))
										{
											if (iLocal_3384 == 0)
											{
												unk_0x058526005957A956(iLocal_3212, "Trevor_4_747_Carsplosion", iLocal_3120[8], 0, 0, 0);
												unk_0x11B340FC7EE49BD2(iLocal_3120[8], 1, 0);
												iLocal_3384 = 1;
											}
										}
									}
								}
							}
						}
					}
					else if (iLocal_3372 == 0)
					{
						if (iLocal_3329 == 1)
						{
							if (unk_0xC9D9444186B5A374() > 662)
							{
								if (unk_0x12F24A1A22BF90A7("SOL_3_CAR_JET_ENGINE"))
								{
									unk_0x0C22E352114F699C("SOL_3_CAR_JET_ENGINE");
								}
								unk_0xCF2F32222FF93448(1f);
								iLocal_3372 = 1;
							}
						}
					}
				}
				else if (iLocal_3372 == 0)
				{
					if (iLocal_3329 == 1)
					{
						if (unk_0xC9D9444186B5A374() > 662)
						{
							if (unk_0x12F24A1A22BF90A7("SOL_3_CAR_JET_ENGINE"))
							{
								unk_0x0C22E352114F699C("SOL_3_CAR_JET_ENGINE");
							}
							unk_0xCF2F32222FF93448(1f);
							iLocal_3372 = 1;
						}
					}
				}
				if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[11]))
				{
					if (unk_0x7404950238A154C2(iLocal_3120[11], 0))
					{
						if (unk_0xE20321A2D7F8960C(iLocal_3120[11]))
						{
							if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
							{
								if (unk_0x7404950238A154C2(iLocal_3257, 0))
								{
									if (unk_0xE20321A2D7F8960C(iLocal_3257))
									{
										if (unk_0x678BA9CA7610A13E(iLocal_3257) > 82683f)
										{
											if (iLocal_3330 == 0)
											{
												unk_0x058526005957A956(iLocal_3214, "Trevor_4_747_Flying_Car", iLocal_3120[11], 0, 0, 0);
												iLocal_3330 = 1;
												unk_0x5AE11BC36633DE4E(0);
											}
											if (iLocal_3330 == 1)
											{
												if (unk_0xC9D9444186B5A374() > 1872)
												{
													if (!unk_0x0752B24E8A13FF0E(iLocal_3120[11]))
													{
														unk_0x05ACEF4F060B9B4E(iLocal_3120[11]);
													}
												}
											}
										}
									}
								}
							}
						}
						else if (iLocal_3330 == 1)
						{
							if (iLocal_3385 == 0)
							{
								if (!unk_0x0752B24E8A13FF0E(iLocal_3120[11]))
								{
									unk_0x058526005957A956(iLocal_3214, "Trevor_4_747_Carsplosion", iLocal_3120[11], 0, 0, 0);
									unk_0x11B340FC7EE49BD2(iLocal_3120[11], 1, 0);
									iLocal_3385 = 1;
								}
							}
						}
					}
				}
				if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[12]))
				{
					if (unk_0x7404950238A154C2(iLocal_3120[12], 0))
					{
						if (unk_0xE20321A2D7F8960C(iLocal_3120[12]))
						{
							if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
							{
								if (unk_0x7404950238A154C2(iLocal_3257, 0))
								{
									if (unk_0xE20321A2D7F8960C(iLocal_3257))
									{
										if (unk_0x678BA9CA7610A13E(iLocal_3257) > 82463f)
										{
											if (iLocal_3331 == 0)
											{
												unk_0x058526005957A956(iLocal_3215, "Trevor_4_747_Flying_Car", iLocal_3120[12], 0, 0, 0);
												iLocal_3331 = 1;
												unk_0x5AE11BC36633DE4E(0);
											}
											if (iLocal_3331 == 1)
											{
												if (unk_0xC9D9444186B5A374() > 1000)
												{
													if (!unk_0x0752B24E8A13FF0E(iLocal_3120[12]))
													{
														unk_0x05ACEF4F060B9B4E(iLocal_3120[12]);
													}
												}
											}
										}
									}
								}
							}
							if (iLocal_3540 == 0)
							{
								if (unk_0xE20321A2D7F8960C(iLocal_3120[12]))
								{
									if (unk_0x678BA9CA7610A13E(iLocal_3120[12]) > 22216f && func_16(iLocal_3258, iLocal_3120[12], 1) < 90f)
									{
										unk_0xCF2F32222FF93448(0.3f);
										unk_0xE7B81FA5331B1559(iLocal_3120[12], 0f, 0f, 0f, 1, 2000, 1000, 500);
										iLocal_3202 = unk_0x48E480685981C7D4();
										iLocal_3540 = 1;
									}
								}
							}
						}
						else if (iLocal_3331 == 1)
						{
							if (iLocal_3386 == 0)
							{
								if (!unk_0x0752B24E8A13FF0E(iLocal_3120[12]))
								{
									unk_0x058526005957A956(iLocal_3215, "Trevor_4_747_Carsplosion", iLocal_3120[12], 0, 0, 0);
									unk_0x11B340FC7EE49BD2(iLocal_3120[12], 1, 0);
									iLocal_3386 = 1;
								}
							}
						}
					}
				}
				if (iLocal_3540 == 1)
				{
				}
				if (iLocal_3539 == 0 && iLocal_3540 == 1)
				{
					if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[12]))
					{
						if (unk_0x7404950238A154C2(iLocal_3120[12], 0))
						{
							Local_3314 = { unk_0xB6AE0DAE06D56288(iLocal_3120[12], 1) };
						}
					}
					Local_3317 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
					if (unk_0x48E480685981C7D4() > iLocal_3202 + 1579 || Local_3317.f_1 < Local_3314.f_1)
					{
						unk_0xCF2F32222FF93448(1f);
						unk_0x59E3A6BEFC421137(0);
						iLocal_3539 = 1;
					}
				}
				if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
				{
					if (unk_0x7404950238A154C2(iLocal_3257, 0))
					{
						if (unk_0xE20321A2D7F8960C(iLocal_3257))
						{
							if (unk_0x678BA9CA7610A13E(iLocal_3257) > 105000f && unk_0x678BA9CA7610A13E(iLocal_3257) < 113000f)
							{
								unk_0x7F6095C73DDAB13F(-1172.3f, -3027.5f, 13.3f);
							}
						}
					}
				}
				if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[13]))
				{
					if (unk_0x7404950238A154C2(iLocal_3120[13], 0))
					{
						if (unk_0xE20321A2D7F8960C(iLocal_3120[13]))
						{
							if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
							{
								if (unk_0x7404950238A154C2(iLocal_3257, 0))
								{
									if (unk_0xE20321A2D7F8960C(iLocal_3257))
									{
										if (unk_0x678BA9CA7610A13E(iLocal_3257) > 108830f)
										{
											unk_0x50A8082D054BFD08(iLocal_3120[13], 0);
											unk_0x3B7AFF7DCE22C1CF(iLocal_3120[13], 1);
											unk_0xEA89E72C99125D9C(iLocal_3120[13], 0);
											unk_0xC1B1E9A034A63A62(0);
											iLocal_3485 = 1;
										}
									}
								}
							}
						}
						else if (iLocal_3485 == 1)
						{
							unk_0x9765BF567DB87B5F(iLocal_3120[13], 0);
							unk_0x80AB12DA216C1F6B(iLocal_3120[13], 1);
							unk_0x9765BF567DB87B5F(unk_0xB0B9E53CEFDB16AA(iLocal_3120[13], -1), 0);
						}
					}
				}
				if (iLocal_3477 == 0)
				{
					if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[5]))
					{
						if (unk_0x7404950238A154C2(iLocal_3120[5], 0))
						{
							unk_0x24F85A008ECA63FB(iLocal_3120[5], 0);
							unk_0x210A4A0B257F8433(iLocal_3120[5], 1);
							iLocal_3477 = 1;
						}
					}
				}
				if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[15]))
				{
					if (unk_0x7404950238A154C2(iLocal_3120[15], 0))
					{
						if (unk_0xE20321A2D7F8960C(iLocal_3120[15]))
						{
							if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
							{
								if (unk_0x7404950238A154C2(iLocal_3257, 0))
								{
									if (unk_0xE20321A2D7F8960C(iLocal_3257))
									{
										if (unk_0x678BA9CA7610A13E(iLocal_3257) > 104989f)
										{
											unk_0x05ACEF4F060B9B4E(iLocal_3120[15]);
											func_231(iLocal_3120[15], -0.04f, -2.21f, 0.887f, 0f, -1f, 0f, 5f, 1);
											func_231(iLocal_3120[15], 0.44f, -0.802f, 15.303f, 0f, 0f, 0f, 12f, 1);
											unk_0x11B340FC7EE49BD2(iLocal_3120[15], 1, 0);
											unk_0x2CEC5A597B1DFFE1(4f, 4f, 4);
											unk_0x058526005957A956(-1, "Trevor_4_747_Carsplosion", iLocal_3120[15], 0, 0, 0);
											unk_0x2D2FB8B6D397597E("SCRIPT\Trv_4_747_Cop_Cars");
										}
									}
								}
							}
						}
					}
				}
				if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
				{
					if (unk_0x7404950238A154C2(iLocal_3257, 0))
					{
						if (unk_0xE20321A2D7F8960C(iLocal_3257))
						{
							if (unk_0x678BA9CA7610A13E(iLocal_3257) > 112000f)
							{
								unk_0x2D148CBB17A2B0C7("BB_MOLLY_2");
								unk_0x295DC04FC13E025B("misssolomon_3");
								unk_0x295DC04FC13E025B("move_f@film_reel_arms");
								iLocal_3181 = 1;
							}
						}
					}
				}
				break;
			
			case 1:
				if (iLocal_3507 == 0)
				{
					if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -887.1561f, -2957.106f, 12.46766f, -848.108f, -2997.588f, 18.23435f, 5f, 0, 1, 0))
					{
						iLocal_3507 = 1;
					}
				}
				if (unk_0x86CCCD2FAE9D5E65(iLocal_3271[0]))
				{
					if (unk_0x7404950238A154C2(iLocal_3271[0], 0))
					{
						unk_0xA5F9A8EE8A45DD7E(iLocal_3271[0], 0);
						unk_0xE0913C01F5C0CC3D(&(iLocal_3271[0]));
					}
				}
				if (unk_0x86CCCD2FAE9D5E65(iLocal_3250[0]))
				{
					if (!unk_0x5FEB513A4402FD59(iLocal_3250[0]))
					{
						unk_0x27CC98B7C879C320(iLocal_3250[0]);
						unk_0x71A8BCA218722FA1(&(iLocal_3250[0]));
					}
				}
				if (iLocal_3400 == 0)
				{
					if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
					{
						if (unk_0x7404950238A154C2(iLocal_3257, 0))
						{
							if (unk_0xE20321A2D7F8960C(iLocal_3257))
							{
								if (unk_0x678BA9CA7610A13E(iLocal_3257) > 115000f)
								{
									unk_0x2D148CBB17A2B0C7("Trev4_5");
									unk_0x32A12757CBF48A33(joaat("prop_cs_film_reel_01"));
									if (!unk_0x2CB3B76C90F08111())
									{
										unk_0x3DEBEEC5B1D7D4C5(-930.7f, -2916.9f, 13.4f, 10f, 0);
									}
									iLocal_3400 = 1;
								}
							}
						}
					}
				}
				if (iLocal_3436 == 0)
				{
					if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
					{
						if (unk_0x7404950238A154C2(iLocal_3257, 0))
						{
							if (unk_0xE20321A2D7F8960C(iLocal_3257))
							{
								if (unk_0x678BA9CA7610A13E(iLocal_3257) > 120000f)
								{
									if (!unk_0x12F24A1A22BF90A7("SOL_3_ARRIVE_AT_HANGAR"))
									{
										unk_0xF2A6D4C99549CA85("SOL_3_ARRIVE_AT_HANGAR");
									}
									unk_0x2EDBED0C31D95957(iLocal_3257);
								}
								if (unk_0x678BA9CA7610A13E(iLocal_3257) > 125513f)
								{
									unk_0x05ACEF4F060B9B4E(iLocal_3257);
									unk_0xA8F22633ACC22189(iLocal_3257, 1);
									func_230();
									unk_0xB0CC34FB1640F35B();
									unk_0xF47DE13A08D86AB8(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f, 1, 0);
									unk_0x0C22E352114F699C("TREVOR_4_MAIN_CHASE");
									if (!unk_0x42E36F2D658EB2FF(uLocal_3290))
									{
										uLocal_3290 = unk_0xAAC4D4F273757469("DEFAULT_SCRIPTED_CAMERA", 0);
									}
									if (!unk_0x42E36F2D658EB2FF(uLocal_3289))
									{
										uLocal_3289 = unk_0xAAC4D4F273757469("DEFAULT_SCRIPTED_CAMERA", 0);
									}
									iLocal_3193 = unk_0x48E480685981C7D4();
									unk_0x0D7089406F6A5C6E(1);
									unk_0xDD17978B9F91686B(0);
									iLocal_3181 = 2;
								}
							}
						}
					}
				}
				break;
			
			case 2:
				Local_3317 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
				unk_0x2EDBED0C31D95957(iLocal_3257);
				if (iLocal_3507 == 0)
				{
					if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -887.1561f, -2957.106f, 12.46766f, -848.108f, -2997.588f, 18.23435f, 5f, 0, 1, 0))
					{
						iLocal_3507 = 1;
					}
				}
				if (iLocal_3436 == 0)
				{
					if (unk_0x0D6E79537424BACE(Local_3317, -930.7f, -2916.9f, 13.4f, 1) < 45f)
					{
						iLocal_3181 = 3;
					}
					if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
					{
						if (unk_0x331E7ACCFD0869AD(iLocal_3257))
						{
							if (iLocal_3507 == 1)
							{
								iLocal_3181 = 3;
							}
						}
					}
					if (unk_0x48E480685981C7D4() > iLocal_3193 + 5000 && iLocal_3507 == 1)
					{
						iLocal_3181 = 3;
					}
				}
				break;
			
			case 3:
				if (unk_0x2CB3B76C90F08111())
				{
					unk_0x5AD73EF670D05F7D();
				}
				unk_0x2EDBED0C31D95957(iLocal_3257);
				if (!unk_0x5FEB513A4402FD59(iLocal_3221))
				{
					if (unk_0x0BAE7BE122182FA8(iLocal_3221, "misssolomon_3", "molly_escapes_car_mol", 3))
					{
					}
				}
				if (iLocal_3465 == 0)
				{
					if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
					{
						if (unk_0x7404950238A154C2(iLocal_3257, 0))
						{
							if (!unk_0xE20321A2D7F8960C(iLocal_3257))
							{
								if (unk_0x8E8B546E1A81D27F("misssolomon_3"))
								{
									if (!unk_0x5FEB513A4402FD59(iLocal_3221))
									{
										if (!unk_0x86CCCD2FAE9D5E65(iLocal_3282))
										{
											if (unk_0x33ACB874CECA2D4B(joaat("prop_cs_film_reel_01")))
											{
												iLocal_3282 = unk_0xF364195A57BB7AE3(joaat("prop_cs_film_reel_01"), -929f, -2917f, 13f, 1, 1, 0);
												unk_0x75F9EE7629363312(iLocal_3282, iLocal_3221, unk_0xDED1B3B1138F742B(iLocal_3221, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
											}
										}
										if (!unk_0x0BAE7BE122182FA8(iLocal_3221, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											unk_0xA8F22633ACC22189(iLocal_3257, 0);
											uLocal_3207 = unk_0x59C061A719024602(-929.492f, -2913.472f, 14.16f, 0f, 0f, -28.96f, 2);
											unk_0x0F5BEB6747CF25B4(iLocal_3257, uLocal_3207, "molly_escapes_car_car", "misssolomon_3", 8f, -8f, 0, 1000f);
											unk_0x58BEA8B2364F8C48(iLocal_3221, uLocal_3207, "misssolomon_3", "molly_escapes_car_mol", 1000f, -1000f, 5, 0, 1148846080, 0);
											unk_0xC64A07C5C44EA267(uLocal_3207, 0);
											unk_0x80650551CC58C784("TRV4_EXIT_CARS");
										}
										else
										{
											iLocal_3465 = 1;
										}
									}
								}
							}
						}
					}
				}
				if (iLocal_3467 == 0)
				{
					if (iLocal_3465 == 1)
					{
						if (!unk_0x5FEB513A4402FD59(iLocal_3221))
						{
							if (unk_0xD1FFD959917D4ED8(iLocal_3221, -937.6656f, -2927.864f, 12.77007f, -934.8479f, -2929.484f, 14.46523f, 1.5f, 0, 1, 0))
							{
								if (unk_0x0BAE7BE122182FA8(iLocal_3221, "misssolomon_3", "molly_escapes_car_mol", 3))
								{
									unk_0x80E0D9AA3C331C9A(iLocal_3221, -1000f, 1);
								}
								unk_0x1E2B48EE3EC55DCF(iLocal_3221);
								unk_0x1D15D99A10A15334(iLocal_3221, 1);
								unk_0xB067093BBAF0A747(iLocal_3221, -934.8388f, -2932.831f, 12.9649f, 1, 0, 0, 1);
								unk_0xC24172029826A66F(iLocal_3221, 236.5739f);
								unk_0xDA3EE2B44E12D00C(iLocal_3221, "BB_MOLLY_2", 1, 4, -1);
								if (unk_0x8E8B546E1A81D27F("move_f@film_reel_arms"))
								{
									unk_0x31C1393E4ACFD794(iLocal_3221, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
								}
								iLocal_3467 = 1;
							}
						}
					}
				}
				if (iLocal_3436 == 0)
				{
					if (iLocal_3475 == 0)
					{
						if (iLocal_3474 == 0)
						{
							if (!unk_0x5FEB513A4402FD59(iLocal_3221))
							{
								if (unk_0x0BAE7BE122182FA8(iLocal_3221, "misssolomon_3", "molly_escapes_car_mol", 3))
								{
									if (unk_0xF855C83E3A17514B(uLocal_3207) > 0.18f || unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), -930.7f, -2916.9f, 13.4f, 1) < 10f)
									{
										iLocal_3182 = 0;
										iLocal_3474 = 1;
									}
								}
							}
						}
						while (iLocal_3474 == 1)
						{
							unk_0x36137B7A77318822("M_LegalTrouble", 0);
							switch (iLocal_3182)
							{
								case 0:
									unk_0xD269CB43D12C6BF5(uLocal_3290, -927.0851f, -2921.173f, 13.66304f, 1.738541f, 1.294743f, 28.05799f, 34.66404f, 0, 1, 1, 2);
									unk_0xD269CB43D12C6BF5(uLocal_3289, -927.0851f, -2921.173f, 13.66304f, 1.738541f, 1.294742f, 32.59915f, 34.66404f, 0, 1, 1, 2);
									unk_0x2CD388BEA8B3C5E8(uLocal_3289, uLocal_3290, 4000, 1, 1);
									unk_0x3BF4F473786B0150(0);
									unk_0xF1BC58601CA4A5C7(0);
									unk_0xFEBF3DDE5E4DC5C5(true, 0, 3000, 1, 0, 0);
									if (unk_0x86CCCD2FAE9D5E65(iLocal_3270))
									{
										unk_0x5D00E836B6BE8693(&iLocal_3270);
									}
									if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
									{
										unk_0xB067093BBAF0A747(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), -918.6157f, -2926.646f, 12.9667f, 1, 0, 0, 1);
										unk_0xC24172029826A66F(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 47.9465f);
									}
									else
									{
										unk_0xB067093BBAF0A747(unk_0x81873881071CD9FE(), -918.6157f, -2926.646f, 12.9667f, 1, 0, 0, 1);
										unk_0xC24172029826A66F(unk_0x81873881071CD9FE(), 47.9465f);
									}
									if (!unk_0x5FEB513A4402FD59(iLocal_3221))
									{
										func_17(&uLocal_3577, 2, iLocal_3221, "MOLLY", 0, 1);
										unk_0x10B0C4BE8F4890AA(iLocal_3221, 1);
									}
									unk_0x2CEC5A597B1DFFE1(4f, 0f, 3);
									unk_0xE8F8B47D8785FAD4(4);
									unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), false, 0);
									iLocal_3528 = 0;
									iLocal_3182++;
									break;
								
								case 1:
									if (!unk_0x5FEB513A4402FD59(iLocal_3221))
									{
										if (unk_0x0BAE7BE122182FA8(iLocal_3221, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											if (iLocal_3528 == 0)
											{
												if (unk_0xF855C83E3A17514B(uLocal_3207) > 0.3f)
												{
													if (func_229(&uLocal_3577, "T1M4AUD", "SOL3_GETOUT", 7, 0, 0, 0))
													{
														unk_0x2CEC5A597B1DFFE1(6f, 7f, 4);
														iLocal_3528 = 1;
													}
												}
											}
											if (unk_0xF855C83E3A17514B(uLocal_3207) > 0.5f)
											{
												unk_0xD269CB43D12C6BF5(uLocal_3290, -926.0932f, -2916.891f, 14.47074f, -3.471637f, 1.294743f, 125.8315f, 34.66404f, 0, 1, 1, 2);
												unk_0xD269CB43D12C6BF5(uLocal_3289, -926.0932f, -2916.891f, 14.47074f, -3.471636f, 1.294743f, 135.4584f, 34.66404f, 0, 1, 1, 2);
												unk_0x2CD388BEA8B3C5E8(uLocal_3289, uLocal_3290, 4000, 1, 1);
												iLocal_3205 = unk_0x48E480685981C7D4();
												iLocal_3182++;
											}
										}
									}
									break;
								
								case 2:
									if (!unk_0x5FEB513A4402FD59(iLocal_3221))
									{
										if (unk_0x0BAE7BE122182FA8(iLocal_3221, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											if ((iLocal_3205 != -1 && unk_0x7FCE6803A3D23268(0) == 4) && (unk_0x48E480685981C7D4() - iLocal_3205) >= 2230)
											{
												unk_0x45D2AAD93E9AC4B3("CamPushInNeutral", 0, 0);
												unk_0x35D7948F61AA3FEC(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
												iLocal_3205 = -1;
											}
											if (unk_0xF855C83E3A17514B(uLocal_3207) > 0.85f)
											{
												unk_0xF1BC58601CA4A5C7(1);
												unk_0x3BF4F473786B0150(1);
												unk_0xFEBF3DDE5E4DC5C5(false, 0, 3000, 1, 0, 0);
												unk_0x270066FDBAF3A458(0f);
												iLocal_3219 = 346732587;
												unk_0x5DFB58C2BA8EB905(iLocal_3219, joaat("v_ilev_ss_door5_r"), -935.641f, -2927.185f, 14.0945f, 1, 1, 0);
												unk_0xD11D7C58F752B552(iLocal_3219, 1f, 0, 1);
												unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), true, 0);
												if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
												{
													unk_0x3535A48C04BEA949(unk_0x81873881071CD9FE(), unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 0);
													if (unk_0x7FCE6803A3D23268(1) != 4 && unk_0x7FCE6803A3D23268(0) == 4)
													{
														unk_0x95BE9BA77CA91710(unk_0x81873881071CD9FE(), 1, 0);
													}
												}
												unk_0x10B0C4BE8F4890AA(iLocal_3221, 0);
												unk_0x30550E796AC03903();
												unk_0x2CEC5A597B1DFFE1(0f, 4f, 3);
												iLocal_3194 = unk_0x48E480685981C7D4();
												iLocal_3474 = 0;
												iLocal_3475 = 1;
												iLocal_3182++;
											}
										}
									}
									break;
							}
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
				if (iLocal_3475 == 1)
				{
					unk_0xFF3E86C4D581F64B(iLocal_3219, 5, 0, 1);
					if (iLocal_3551 == 0)
					{
						if (unk_0x86CCCD2FAE9D5E65(iLocal_3221))
						{
							if (!unk_0x5FEB513A4402FD59(iLocal_3221))
							{
								if (unk_0x515B65C19A5CA9B1(iLocal_3221, -935.3f, -2927.3f, 13f, 1.5f, 1.5f, 2f, 0, 1, 0))
								{
									unk_0x5A24D808FBE871F7(-1, "Trevor_4_747_Molly_Open_Doors", -935.1f, -2927.6f, 13.2f, 0, 0, 0, 0);
									iLocal_3551 = 1;
								}
							}
						}
					}
				}
				if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
				{
					if (unk_0x12F24A1A22BF90A7("SOL_3_MAIN_CHASE"))
					{
						unk_0x0C22E352114F699C("SOL_3_MAIN_CHASE");
					}
					if (unk_0x12F24A1A22BF90A7("SOL_3_ARRIVE_AT_HANGAR"))
					{
						unk_0x0C22E352114F699C("SOL_3_ARRIVE_AT_HANGAR");
					}
					if (!unk_0x12F24A1A22BF90A7("SOL_3_ON_FOOT_CHASE"))
					{
						unk_0xF2A6D4C99549CA85("SOL_3_ON_FOOT_CHASE");
					}
				}
				if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
				{
					func_218();
				}
				if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -929.7908f, -2928.213f, 12.19499f, -935.7283f, -2924.685f, 15.44832f, 4.75f, 0, 1, 1))
				{
					if (iLocal_3467 == 0)
					{
						if (!unk_0x5FEB513A4402FD59(iLocal_3221))
						{
							if (unk_0x0BAE7BE122182FA8(iLocal_3221, "misssolomon_3", "molly_escapes_car_mol", 3))
							{
								unk_0x80E0D9AA3C331C9A(iLocal_3221, -1000f, 1);
							}
							unk_0x1E2B48EE3EC55DCF(iLocal_3221);
							unk_0x1D15D99A10A15334(iLocal_3221, 1);
							unk_0xB067093BBAF0A747(iLocal_3221, -934.8388f, -2932.831f, 12.9649f, 1, 0, 0, 1);
							unk_0xC24172029826A66F(iLocal_3221, 236.5739f);
							unk_0xDA3EE2B44E12D00C(iLocal_3221, "BB_MOLLY_2", 1, 4, -1);
							if (unk_0x8E8B546E1A81D27F("move_f@film_reel_arms"))
							{
								unk_0x31C1393E4ACFD794(iLocal_3221, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
							}
							iLocal_3467 = 1;
						}
					}
					if (unk_0x86CCCD2FAE9D5E65(iLocal_3265))
					{
						unk_0x5D00E836B6BE8693(&iLocal_3265);
					}
					iLocal_3180 = 0;
					iLocal_3182 = 0;
					iLocal_3179 = 5;
				}
				break;
			}
	}
}

void func_218()
{
	if (iLocal_3432 == 0)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[14]))
		{
			if (unk_0x7404950238A154C2(iLocal_3120[14], 0))
			{
				iLocal_3247 = unk_0xB0B9E53CEFDB16AA(iLocal_3120[14], -1);
				unk_0x8E4A427F5C43E416(iLocal_3247, joaat("weapon_pistol"), 1000, 1, 1);
				unk_0xD768713E73165208(iLocal_3247, 1, 0);
				unk_0x1D15D99A10A15334(iLocal_3247, 1);
				unk_0xD31C3826B16CD027(iLocal_3247, 5);
				unk_0x9765BF567DB87B5F(iLocal_3247, 150);
				func_17(&uLocal_3577, 3, iLocal_3247, "TREV4POLICE3", 0, 1);
			}
		}
		iLocal_3432 = 1;
	}
	else if (iLocal_3431 == 0)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3247))
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_3247))
			{
				unk_0x27CC98B7C879C320(iLocal_3247);
				unk_0x692D479A615C1EDF(iLocal_3247, unk_0xB6AE0DAE06D56288(iLocal_3247, 1), 5f, 0, 0);
				unk_0xEAD984C2869B8B7C(&uLocal_3291);
				unk_0x98046F3D16B9CF76(0, 0, 0);
				unk_0xFD21E38B63412197(0, unk_0x81873881071CD9FE(), 5000, 1);
				unk_0x633A554EB6BC4E71(0, unk_0x81873881071CD9FE(), 0, 16);
				unk_0x56D9ED1541046AF6(uLocal_3291);
				unk_0xC65002CAA1212AF9(iLocal_3247, uLocal_3291);
				unk_0xA3561415EB3DA3A3(&uLocal_3291);
				iLocal_3431 = 1;
			}
		}
	}
	else if (iLocal_3488 == 0)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3247))
		{
			if (!unk_0x5FEB513A4402FD59(iLocal_3247))
			{
				if (!unk_0xE5AB05962FA1FF3F(iLocal_3247, 0) && func_13(unk_0x81873881071CD9FE(), iLocal_3247) < 20f)
				{
					if (!func_228())
					{
						if (!unk_0xDBD19E93A4D01117() || !unk_0x3EA487B1116F83F7())
						{
							func_17(&uLocal_3577, 4, iLocal_3247, "SOL3COP", 0, 1);
							if (func_219(&uLocal_3577, "T1M4AUD", "SOL3_MOLPOL", "SOL3_MOLPOL_2", 7, 0, 0))
							{
								iLocal_3488 = 1;
							}
						}
					}
				}
			}
		}
	}
}

bool func_219(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_227(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_220(sParam2, iParam4, 0);
}

int func_220(char* sParam0, int iParam1, bool bParam2)
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
					func_186();
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
		if (func_226(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_225();
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
				func_224();
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
				if (func_223())
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
			if (func_197())
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
			func_222();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_221();
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
		func_186();
	}
	return 0;
}

void func_221()
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

void func_222()
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

int func_223()
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

void func_224()
{
	if (func_57(14))
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
		Global_14394 = func_91();
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

void func_225()
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

bool func_226(int iParam0, int iParam1)
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

void func_227(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_228()
{
	if (Global_15693 != 0 || unk_0xE1772957381F609F())
	{
		return 1;
	}
	return 0;
}

bool func_229(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_227(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_220(sParam2, iParam3, 0);
}

void func_230()
{
	if (unk_0x3D675D69D18A10E9(uLocal_3754[0]))
	{
		unk_0xA080515881A08702(uLocal_3754[0], 0);
	}
	if (unk_0x3D675D69D18A10E9(uLocal_3754[1]))
	{
		unk_0xA080515881A08702(uLocal_3754[1], 0);
	}
	if (unk_0x3D675D69D18A10E9(uLocal_3754[2]))
	{
		unk_0xA080515881A08702(uLocal_3754[2], 0);
	}
	if (iLocal_3387 == 1)
	{
		unk_0x54206B7CE6FF2360(iLocal_3216);
		iLocal_3395 = 0;
	}
}

void func_231(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7, bool bParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		if (unk_0xE20321A2D7F8960C(iParam0))
		{
			unk_0x05ACEF4F060B9B4E(iParam0);
		}
		Var3 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
		if (bParam8)
		{
			Var0 = { unk_0xB07F27EC3B05E4EA(iParam0, Param1) };
		}
		else
		{
			Var0 = { Param1 };
		}
		Var6 = { func_232(Var0 - Var3) };
		Var6 = { Var6 * Vector(fParam7, fParam7, fParam7) };
		unk_0x14A3456454DB40CE(iParam0, 3, Var6, Param4, 0, 0, 1, 1, 0, 1);
	}
}

Vector3 func_232(struct<3> Param0)
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

void func_233(int iParam0, float fParam1)
{
	int iVar0;
	struct<3> Var1;
	
	if (iLocal_1955 < 15)
	{
		if (iLocal_1955 == 0)
		{
			Local_2655 = { 99999.9f, 99999.9f, 99999.9f };
			Local_2658 = { -99999.9f, -99999.9f, -99999.9f };
		}
		if (unk_0x7404950238A154C2(iParam0, 0))
		{
			if (unk_0xE20321A2D7F8960C(iParam0))
			{
				iVar0 = unk_0x579D32FAAD5CA6B8(iParam0);
				Var1 = { unk_0x13F97659039A0D0E(iVar0, (fParam1 + (unk_0xBBDA792448DB5A89((iLocal_1955 - 1)) * 2000f))) };
				if (Var1.f_0 < Local_2655.f_0)
				{
					Local_2655.f_0 = Var1.f_0;
				}
				if (Var1.f_1 < Local_2655.f_1)
				{
					Local_2655.f_1 = Var1.f_1;
				}
				if (Var1.f_2 < Local_2655.f_2)
				{
					Local_2655.f_2 = Var1.f_2;
				}
				if (Var1.f_0 > Local_2658.f_0)
				{
					Local_2658.f_0 = Var1.f_0;
				}
				if (Var1.f_1 > Local_2658.f_1)
				{
					Local_2658.f_1 = Var1.f_1;
				}
				if (Var1.f_2 > Local_2658.f_2)
				{
					Local_2658.f_2 = Var1.f_2;
				}
			}
		}
		iLocal_1955++;
	}
	else if (!bLocal_105)
	{
		unk_0xFEA6E2B6E5CAFC2E(-9999.9f, -9999.9f, -9999.9f, 9999.9f, 9999.9f, 9999.9f, 1);
		Local_2655 = { Local_2655 + Vector((fLocal_1292 * -1f), (fLocal_1292 * -1f), (fLocal_1292 * -1f)) };
		Local_2658 = { Local_2658 + Vector(fLocal_1292, fLocal_1292, fLocal_1292) };
		Local_2649 = { Local_2655 };
		Local_2652 = { Local_2658 };
		unk_0xEB1F3AEB071C6A9E(Local_2649, Local_2652, 0, 0);
		iLocal_1955 = 0;
	}
}

void func_234()
{
	iLocal_88 = 1;
}

void func_235()
{
	if (iLocal_3332 == 0)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
		{
			if (unk_0xE20321A2D7F8960C(iLocal_3257))
			{
				if (unk_0x678BA9CA7610A13E(iLocal_3257) > 55000f)
				{
					unk_0x32A12757CBF48A33(joaat("firetruk"));
					unk_0x32A12757CBF48A33(joaat("s_m_y_fireman_01"));
					unk_0x295DC04FC13E025B("missheist_agency3aig_lift_waitped_a");
					if ((unk_0x33ACB874CECA2D4B(joaat("firetruk")) && unk_0x33ACB874CECA2D4B(joaat("s_m_y_fireman_01"))) && unk_0x8E8B546E1A81D27F("missheist_agency3aig_lift_waitped_a"))
					{
						if (!unk_0x86CCCD2FAE9D5E65(iLocal_3263))
						{
							unk_0x7C6BF0CD5D7454C9(-1129.566f, -2319.888f, 12.9445f, 10f, 0, 0, 0, 0);
							iLocal_3263 = unk_0xE00F8DEA9778FC87(joaat("firetruk"), -1129.566f, -2319.888f, 12.9445f, 16.5423f, 1, 1);
						}
						uLocal_3754[0] = unk_0xBCBFC611FE1A1291("scr_trev4_trailer_fire", -1151f, -2311f, 15f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
						if (iLocal_3387 == 0)
						{
							unk_0x5A24D808FBE871F7(iLocal_3216, "Trevor_4_747_Loud_Fire", -1151f, -2311f, 15f, 0, 0, 0, 0);
							iLocal_3387 = 1;
						}
						uLocal_3754[1] = unk_0xBCBFC611FE1A1291("scr_trev4_trailer_fire", -1140f, -2328f, 18f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
						uLocal_3754[2] = unk_0xBCBFC611FE1A1291("scr_trev4_trailer_fire", -1150f, -2327f, 19f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
						if (!unk_0x86CCCD2FAE9D5E65(iLocal_3222[0]))
						{
							iLocal_3222[0] = unk_0x4D135F3066A9BF9C(iLocal_3263, 21, joaat("s_m_y_fireman_01"), -1, 1, 1);
							unk_0x1D15D99A10A15334(iLocal_3222[0], 1);
							unk_0x6CB332CB31E9FA96(iLocal_3222[0], 1);
							unk_0x19B674232CE24924(iLocal_3222[0], -1147.07f, -2320.65f, 18.93f, 1101004800);
						}
						if (!unk_0x86CCCD2FAE9D5E65(iLocal_3222[1]))
						{
							iLocal_3222[1] = unk_0x206897C6DBC12488(21, joaat("s_m_y_fireman_01"), -1138.313f, -2313.277f, 12.9445f, 155.4271f, 1, 1);
							unk_0x31C1393E4ACFD794(iLocal_3222[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 8f, -8f, -1, 9, 0, 0, 0, 0);
							unk_0x1D15D99A10A15334(iLocal_3222[1], 1);
							unk_0x6CB332CB31E9FA96(iLocal_3222[1], 1);
						}
						if (!unk_0x86CCCD2FAE9D5E65(iLocal_3222[2]))
						{
							iLocal_3222[2] = unk_0x206897C6DBC12488(21, joaat("s_m_y_fireman_01"), -1145.362f, -2309.387f, 12.9445f, 96.0786f, 1, 1);
							unk_0x31C1393E4ACFD794(iLocal_3222[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 8f, -8f, -1, 9, 0, 0, 0, 0);
							unk_0x1D15D99A10A15334(iLocal_3222[2], 1);
							unk_0x6CB332CB31E9FA96(iLocal_3222[2], 1);
						}
						if (!unk_0x86CCCD2FAE9D5E65(iLocal_3222[3]))
						{
							iLocal_3222[3] = unk_0x206897C6DBC12488(21, joaat("s_m_y_fireman_01"), -1147.461f, -2314.511f, 13.1518f, 57.8707f, 1, 1);
							unk_0x31C1393E4ACFD794(iLocal_3222[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 8f, -8f, -1, 9, 0, 0, 0, 0);
							unk_0x1D15D99A10A15334(iLocal_3222[3], 1);
							unk_0x6CB332CB31E9FA96(iLocal_3222[3], 1);
						}
						unk_0x887F4488DA99FD21(joaat("s_m_y_fireman_01"));
						unk_0x887F4488DA99FD21(joaat("firetruk"));
						iLocal_3332 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3332 == 1)
	{
		if (iLocal_3542[0] == 0)
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_3222[1]))
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_3222[1]))
				{
					if (iLocal_3546[0] == 0)
					{
						if (unk_0x0BAE7BE122182FA8(iLocal_3222[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 3))
						{
							iLocal_3546[0] = 1;
						}
					}
					if (iLocal_3546[0] == 1)
					{
						if (!unk_0x0BAE7BE122182FA8(iLocal_3222[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 3))
						{
							unk_0x492E306B5A7C779A(iLocal_3222[1], -1);
							unk_0x6CB332CB31E9FA96(iLocal_3222[1], 1);
							unk_0x1D15D99A10A15334(iLocal_3222[1], 0);
							iLocal_3542[0] = 1;
						}
					}
				}
			}
		}
		if (iLocal_3542[1] == 0)
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_3222[2]))
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_3222[2]))
				{
					if (iLocal_3546[1] == 0)
					{
						if (unk_0x0BAE7BE122182FA8(iLocal_3222[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 3))
						{
							iLocal_3546[1] = 1;
						}
					}
					if (iLocal_3546[1] == 1)
					{
						if (!unk_0x0BAE7BE122182FA8(iLocal_3222[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 3))
						{
							unk_0x492E306B5A7C779A(iLocal_3222[2], -1);
							unk_0x6CB332CB31E9FA96(iLocal_3222[2], 1);
							unk_0x1D15D99A10A15334(iLocal_3222[2], 0);
							iLocal_3542[1] = 1;
						}
					}
				}
			}
		}
		if (iLocal_3542[2] == 0)
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_3222[3]))
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_3222[3]))
				{
					if (iLocal_3546[2] == 0)
					{
						if (unk_0x0BAE7BE122182FA8(iLocal_3222[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 3))
						{
							iLocal_3546[2] = 1;
						}
					}
					if (iLocal_3546[2] == 1)
					{
						if (!unk_0x0BAE7BE122182FA8(iLocal_3222[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 3))
						{
							unk_0x492E306B5A7C779A(iLocal_3222[3], -1);
							unk_0x6CB332CB31E9FA96(iLocal_3222[3], 1);
							unk_0x1D15D99A10A15334(iLocal_3222[3], 0);
							iLocal_3542[2] = 1;
						}
					}
				}
			}
		}
	}
}

void func_236()
{
	if (iLocal_3433 == 0)
	{
		unk_0x32A12757CBF48A33(joaat("police3"));
		unk_0x32A12757CBF48A33(joaat("s_m_y_cop_01"));
		unk_0x995DCDA796A47049(1, "BB_AIChase");
		if (unk_0x33ACB874CECA2D4B(joaat("police3")) && unk_0x33ACB874CECA2D4B(joaat("s_m_y_cop_01")))
		{
			if (unk_0x7404950238A154C2(iLocal_3257, 0))
			{
				if (unk_0xE20321A2D7F8960C(iLocal_3257))
				{
					if (unk_0x678BA9CA7610A13E(iLocal_3257) > 15500f)
					{
						unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 2, 0);
						unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 0);
						iLocal_3271[0] = unk_0xE00F8DEA9778FC87(joaat("police3"), -847.2593f, -2379.987f, 15.9304f, 196.4921f, 1, 1);
						iLocal_3250[0] = unk_0x4D135F3066A9BF9C(iLocal_3271[0], 6, joaat("s_m_y_cop_01"), -1, 1, 1);
						unk_0x1D15D99A10A15334(iLocal_3250[0], 1);
						unk_0x80E2E482FDBC2DD9(iLocal_3271[0], "SOL_3_POLICE_CARS_Group", 0);
						func_111(iLocal_3250[0], 0);
						unk_0x686D6CDC14C4BA6C(iLocal_3271[0], 1, 1);
						unk_0xC8F62804B10A6701(iLocal_3271[0], 1, "BB_AIChase", 1);
						unk_0x8E4A427F5C43E416(iLocal_3250[0], joaat("weapon_pistol"), 1000, 1, 1);
						unk_0x6A8A78C1DAEC9CEB(iLocal_3271[0], 1);
						unk_0x887F4488DA99FD21(joaat("police3"));
						unk_0x887F4488DA99FD21(joaat("s_m_y_cop_01"));
						iLocal_3433 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3433 == 1)
	{
		if (iLocal_3479[0] == 0)
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_3271[0]))
			{
				if (unk_0x7404950238A154C2(iLocal_3271[0], 0))
				{
					if (unk_0xE20321A2D7F8960C(iLocal_3271[0]))
					{
						unk_0x1248DFEEEEE716FC(iLocal_3271[0], fLocal_3322);
						if (unk_0x678BA9CA7610A13E(iLocal_3271[0]) > 13000f)
						{
							unk_0x05ACEF4F060B9B4E(iLocal_3271[0]);
						}
					}
					else if (unk_0x86CCCD2FAE9D5E65(iLocal_3250[0]))
					{
						if (!unk_0x5FEB513A4402FD59(iLocal_3250[0]))
						{
							unk_0x1D15D99A10A15334(iLocal_3250[0], 1);
							if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
							{
								unk_0xBA713A6A2D589F71(iLocal_3250[0], unk_0x81873881071CD9FE());
								unk_0x6CB332CB31E9FA96(iLocal_3250[0], 1);
							}
							else
							{
								unk_0x633A554EB6BC4E71(iLocal_3250[0], unk_0x81873881071CD9FE(), 0, 16);
								unk_0x6CB332CB31E9FA96(iLocal_3250[0], 1);
							}
							unk_0x4855165A2773595C(1, "BB_AIChase");
							iLocal_3195 = unk_0x48E480685981C7D4();
							iLocal_3479[0] = 1;
						}
					}
				}
			}
		}
		if (iLocal_3482[0] == 0)
		{
			if (iLocal_3479[0] == 1)
			{
				if (unk_0x48E480685981C7D4() > iLocal_3195 + 500)
				{
					if (unk_0x86CCCD2FAE9D5E65(iLocal_3250[0]))
					{
						if (!unk_0x5FEB513A4402FD59(iLocal_3250[0]))
						{
							if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
							{
								unk_0x93EA44151428DA6B(iLocal_3250[0], 16, 1);
								unk_0x93EA44151428DA6B(iLocal_3250[0], 1, 1);
								iLocal_3482[0] = 1;
							}
							else
							{
								iLocal_3482[0] = 1;
							}
						}
					}
				}
			}
		}
	}
}

void func_237()
{
	if (!iLocal_3334)
	{
		if (unk_0x7404950238A154C2(iLocal_3120[20], 0))
		{
			uLocal_3288 = unk_0xAAC4D4F273757469("DEFAULT_SCRIPTED_CAMERA", 0);
			unk_0xDD0B0D77CB8995B1(uLocal_3288, 1);
			iLocal_3335 = 0;
			iLocal_3334 = 1;
		}
	}
	else if (func_252(&uLocal_27, 1, 0, 0) && iLocal_3436 == 0)
	{
		if (unk_0xA83A609D74168B30())
		{
			unk_0xB8BB626315D394F5(1);
		}
		if (func_228())
		{
			unk_0xD1C83BD797927DD5();
			func_183();
		}
		if (iLocal_3364[2] == 0)
		{
			if (!unk_0x12F24A1A22BF90A7("SOL_3_CHOPPER_CAM"))
			{
				unk_0xF2A6D4C99549CA85("SOL_3_CHOPPER_CAM");
			}
			unk_0x35D7948F61AA3FEC(iLocal_3218, "Trevor_4_747_TV", 0, 1);
			iLocal_3364[2] = 1;
		}
		func_243(1, 1, 30, 5, 0);
		if (iLocal_3353 == 0)
		{
			unk_0x21ED0FC9B5CC748B(uLocal_3292, "SET_TEXT");
			func_242("TRV4_NEWS1");
			func_242("");
			unk_0xBA9BA6181F2B6111();
			iLocal_3353 = 1;
		}
		if (iLocal_3354 == 0)
		{
			unk_0x21ED0FC9B5CC748B(uLocal_3292, "SET_SCROLL_TEXT");
			unk_0x518198639630AE08(1f);
			unk_0x518198639630AE08(0f);
			func_242("TRV4_NEWS2");
			unk_0xBA9BA6181F2B6111();
			unk_0x21ED0FC9B5CC748B(uLocal_3292, "SET_SCROLL_TEXT");
			unk_0x518198639630AE08(0f);
			unk_0x518198639630AE08(0f);
			func_242("TRV4_NEWS6");
			unk_0xBA9BA6181F2B6111();
			unk_0x21ED0FC9B5CC748B(uLocal_3292, "SET_SCROLL_TEXT");
			unk_0x518198639630AE08(0f);
			unk_0x518198639630AE08(1f);
			func_242("TRV4_NEWS7");
			unk_0xBA9BA6181F2B6111();
			unk_0x21ED0FC9B5CC748B(uLocal_3292, "SET_SCROLL_TEXT");
			unk_0x518198639630AE08(0f);
			unk_0x518198639630AE08(2f);
			func_242("TRV4_NEWS8");
			unk_0xBA9BA6181F2B6111();
			unk_0x21ED0FC9B5CC748B(uLocal_3292, "SET_SCROLL_TEXT");
			unk_0x518198639630AE08(0f);
			unk_0x518198639630AE08(3f);
			func_242("TRV4_NEWS9");
			unk_0xBA9BA6181F2B6111();
			unk_0x21ED0FC9B5CC748B(uLocal_3292, "SET_SCROLL_TEXT");
			unk_0x518198639630AE08(0f);
			unk_0x518198639630AE08(4f);
			func_242("TRV4_NEWS10");
			unk_0xBA9BA6181F2B6111();
			unk_0x21ED0FC9B5CC748B(uLocal_3292, "DISPLAY_SCROLL_TEXT");
			unk_0x518198639630AE08(1f);
			unk_0x518198639630AE08(0f);
			unk_0xBA9BA6181F2B6111();
			iLocal_3200 = (unk_0x48E480685981C7D4() - 5000);
			iLocal_3354 = 1;
		}
		if (unk_0x48E480685981C7D4() > iLocal_3200 + 5000)
		{
			func_241();
			iLocal_3200 = unk_0x48E480685981C7D4();
		}
		if (iLocal_3355 == 0)
		{
			if (unk_0x7404950238A154C2(iLocal_3257, 0))
			{
				if (unk_0xE20321A2D7F8960C(iLocal_3257))
				{
					if (unk_0x678BA9CA7610A13E(iLocal_3257) > 25000f && unk_0x678BA9CA7610A13E(iLocal_3257) < 50000f)
					{
						unk_0x21ED0FC9B5CC748B(uLocal_3292, "SET_SCROLL_TEXT");
						unk_0x518198639630AE08(1f);
						unk_0x518198639630AE08(1f);
						func_242("TRV4_NEWS5");
						unk_0xBA9BA6181F2B6111();
						unk_0x21ED0FC9B5CC748B(uLocal_3292, "DISPLAY_SCROLL_TEXT");
						unk_0x518198639630AE08(1f);
						unk_0x518198639630AE08(1f);
						unk_0xBA9BA6181F2B6111();
						iLocal_3355 = 1;
					}
				}
			}
		}
		if (iLocal_3356 == 0)
		{
			if (unk_0x7404950238A154C2(iLocal_3257, 0))
			{
				if (unk_0xE20321A2D7F8960C(iLocal_3257))
				{
					if (unk_0x678BA9CA7610A13E(iLocal_3257) > 77600f && unk_0x678BA9CA7610A13E(iLocal_3257) < 115000f)
					{
						unk_0x21ED0FC9B5CC748B(uLocal_3292, "SET_SCROLL_TEXT");
						unk_0x518198639630AE08(1f);
						unk_0x518198639630AE08(2f);
						func_242("TRV4_NEWS3");
						unk_0xBA9BA6181F2B6111();
						unk_0x21ED0FC9B5CC748B(uLocal_3292, "DISPLAY_SCROLL_TEXT");
						unk_0x518198639630AE08(1f);
						unk_0x518198639630AE08(2f);
						unk_0xBA9BA6181F2B6111();
						iLocal_3356 = 1;
					}
				}
			}
		}
		if (iLocal_3357 == 0)
		{
			if (unk_0x7404950238A154C2(iLocal_3257, 0))
			{
				if (unk_0xE20321A2D7F8960C(iLocal_3257))
				{
					if (unk_0x678BA9CA7610A13E(iLocal_3257) > 115000f)
					{
						unk_0x21ED0FC9B5CC748B(uLocal_3292, "SET_SCROLL_TEXT");
						unk_0x518198639630AE08(1f);
						unk_0x518198639630AE08(3f);
						func_242("TRV4_NEWS4");
						unk_0xBA9BA6181F2B6111();
						unk_0x21ED0FC9B5CC748B(uLocal_3292, "DISPLAY_SCROLL_TEXT");
						unk_0x518198639630AE08(1f);
						unk_0x518198639630AE08(3f);
						unk_0xBA9BA6181F2B6111();
						iLocal_3357 = 1;
					}
				}
			}
		}
		unk_0x4F520AA3A2F8C801(uLocal_3183);
		unk_0x88188CE25DF2572C(uLocal_3292, 255, 255, 255, 0, 0);
		if (iLocal_3335 == 0)
		{
			func_196(1, 1, 1, 0);
			unk_0x4BC806FF702341FC(uLocal_3288, "ROAD_VIBRATION_SHAKE", 1f);
			unk_0xDD0B0D77CB8995B1(uLocal_3288, 1);
			unk_0xFEBF3DDE5E4DC5C5(true, 0, 3000, 1, 0, 0);
			unk_0x3BF4F473786B0150(0);
			unk_0xA4DB0275D854F239(unk_0x1329891157A54C63());
			func_240();
			iLocal_3335 = 1;
		}
		func_238();
		unk_0xC9A352663D97EFC3(6);
		unk_0xC9A352663D97EFC3(7);
		unk_0xC9A352663D97EFC3(8);
		unk_0xC9A352663D97EFC3(9);
		unk_0xC9A352663D97EFC3(1);
		unk_0xC9A352663D97EFC3(2);
		unk_0xC9A352663D97EFC3(15);
		unk_0xC9A352663D97EFC3(3);
		unk_0xDE1125A413AF241C(0, 85, 1);
		unk_0xA1427E25E074F116(0);
	}
	else if (iLocal_3335)
	{
		func_196(0, 1, 1, 0);
		unk_0xDD0B0D77CB8995B1(uLocal_3288, 0);
		unk_0xFEBF3DDE5E4DC5C5(false, 0, 3000, 1, 0, 0);
		unk_0x3BF4F473786B0150(1);
		if (unk_0x12F24A1A22BF90A7("SOL_3_CHOPPER_CAM"))
		{
			unk_0x0C22E352114F699C("SOL_3_CHOPPER_CAM");
		}
		unk_0x98A5E5B909F1B162(iLocal_3218);
		func_216();
		unk_0xA1427E25E074F116(1);
		iLocal_3364[2] = 0;
		iLocal_3335 = 0;
	}
}

void func_238()
{
	unk_0xF4753D4FA13FFE6E();
	func_239();
}

void func_239()
{
	Global_17099.f_134 = 1;
}

void func_240()
{
	Global_55409 = 1;
}

void func_241()
{
	if (iLocal_3185 > 4)
	{
		iLocal_3185 = 0;
	}
	unk_0x21ED0FC9B5CC748B(uLocal_3292, "DISPLAY_SCROLL_TEXT");
	unk_0xBD0C54D89298454E(0);
	unk_0xBD0C54D89298454E(iLocal_3185);
	unk_0xBA9BA6181F2B6111();
	iLocal_3185++;
}

void func_242(char* sParam0)
{
	unk_0x6CE839BF5D87A428(sParam0);
	unk_0xC3822F70D0E7940B();
}

void func_243(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_251())
	{
		func_251();
	}
	else if (bParam0)
	{
		if (iParam4 == 1)
		{
			if (iLocal_49 <= 225 && iLocal_43 == 0)
			{
				iLocal_49 += 30;
				if (iLocal_49 >= 225)
				{
					iLocal_43 = 1;
				}
			}
			else if (iLocal_49 >= 30)
			{
				iLocal_49 = (iLocal_49 - 30);
				if (iLocal_49 <= 30)
				{
					iLocal_43 = 0;
				}
			}
		}
		func_250(1, 200);
		if (iLocal_47 <= iParam2 && iLocal_42 == 0)
		{
			iLocal_47++;
			func_247(1, iLocal_47);
			if (iLocal_47 == iParam2)
			{
				iLocal_42 = 1;
				iLocal_48 = unk_0x2E0A9E3291F398E3(iParam3, iParam2);
			}
		}
		else if (iLocal_47 > 0)
		{
			if (iLocal_47 > iLocal_48)
			{
				iLocal_47 = (iLocal_47 - 1);
				func_247(1, iLocal_47);
				if (iLocal_47 == iLocal_48)
				{
					iLocal_42 = 0;
				}
			}
		}
		if (bParam1)
		{
			func_244(1, 40, 1, 1, 1);
		}
	}
}

void func_244(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_251())
	{
		func_251();
	}
	else if (bParam0)
	{
		if (bParam2)
		{
			if (!func_246(0))
			{
				func_245(0);
			}
			else
			{
				unk_0xE31E1C3DC82BAC87("digitalOverlay", "nscuzz1", 0.5f, fLocal_50, 1f, 0.2f, 0f, 255, 255, 255, iParam1, 0);
			}
			if (fLocal_50 < 1f)
			{
				fLocal_50 = (fLocal_50 + 0.01f);
			}
			else
			{
				fLocal_50 = 0f;
			}
		}
		if (bParam3)
		{
			if (!func_246(1))
			{
				func_245(1);
			}
			else
			{
				unk_0xE31E1C3DC82BAC87("digitalOverlay", "nscuzz2", 0.5f, fLocal_51, 1f, 0.2f, 0f, 255, 255, 255, iParam1, 0);
			}
			if (fLocal_51 < 1f)
			{
				fLocal_51 = (fLocal_51 + 0.02f);
			}
			else
			{
				fLocal_51 = 0f;
			}
		}
		if (bParam4)
		{
			if (!func_246(2))
			{
				func_245(2);
			}
			else
			{
				unk_0xE31E1C3DC82BAC87("digitalOverlay", "nscuzz3", 0.5f, fLocal_52, 1f, 0.2f, 0f, 255, 255, 255, iParam1, 0);
			}
			if (fLocal_52 < 1f)
			{
				fLocal_52 = (fLocal_52 + 0.028f);
			}
			else
			{
				fLocal_52 = 0f;
			}
		}
	}
}

void func_245(int iParam0)
{
	if (iParam0 < 32)
	{
		unk_0xF3148AAF69AF9CBC(&iLocal_53, iParam0);
	}
}

int func_246(int iParam0)
{
	if (unk_0x236D8AD7EE179F46(iLocal_53, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_247(bool bParam0, int iParam1)
{
	if (!func_251())
	{
		func_251();
	}
	else if (bParam0)
	{
		iLocal_45 = func_249(5);
		iLocal_44 = unk_0x2E0A9E3291F398E3(0, 4);
		while (iLocal_46 == iLocal_45)
		{
			iLocal_45 = func_249(5);
		}
		if (iLocal_45 == 0)
		{
			if (!func_246(3))
			{
				func_245(3);
			}
			else
			{
				unk_0xE31E1C3DC82BAC87("digitalOverlay", "Static1", 0.5f, 0.5f, (1f * func_248(bLocal_39)), (1f * func_248(bLocal_40)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_45 == 1)
		{
			if (!func_246(4))
			{
				func_245(4);
			}
			else
			{
				unk_0xE31E1C3DC82BAC87("digitalOverlay", "Static2", 0.5f, 0.5f, (1f * func_248(bLocal_39)), (1f * func_248(bLocal_40)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_45 == 2)
		{
			if (!func_246(5))
			{
				func_245(5);
			}
			else
			{
				unk_0xE31E1C3DC82BAC87("digitalOverlay", "Static3", 0.5f, 0.5f, (1f * func_248(bLocal_39)), (1f * func_248(bLocal_40)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_45 == 3)
		{
			if (!func_246(6))
			{
				func_245(6);
			}
			else
			{
				unk_0xE31E1C3DC82BAC87("digitalOverlay", "Static4", 0.5f, 0.5f, (1f * func_248(bLocal_39)), (1f * func_248(bLocal_40)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_45 == 4)
		{
			if (!func_246(7))
			{
				func_245(7);
			}
			else
			{
				unk_0xE31E1C3DC82BAC87("digitalOverlay", "Static5", 0.5f, 0.5f, (1f * func_248(bLocal_39)), (1f * func_248(bLocal_40)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
	}
}

float func_248(bool bParam0)
{
	if (bParam0)
	{
		return -1f;
	}
	else
	{
		return 1f;
	}
	return 1f;
}

int func_249(int iParam0)
{
	if (unk_0x2E0A9E3291F398E3(0, 50) > 25)
	{
		bLocal_39 = true;
	}
	else
	{
		bLocal_39 = false;
	}
	if (unk_0x2E0A9E3291F398E3(0, 50) > 25)
	{
		bLocal_40 = true;
	}
	else
	{
		bLocal_40 = false;
	}
	return unk_0x2E0A9E3291F398E3(0, iParam0);
}

void func_250(bool bParam0, int iParam1)
{
	if (!func_251())
	{
		func_251();
	}
	else if (bParam0)
	{
		if (iLocal_41)
		{
			if (!func_246(8))
			{
				func_245(8);
			}
			else
			{
				unk_0xE31E1C3DC82BAC87("digitalOverlay", "nscanline1", 0.5f, 0.5f, 1f, 1f, 0f, 255, 255, 255, iParam1, 0);
			}
			iLocal_41 = 0;
		}
		else
		{
			if (!func_246(8))
			{
				func_245(8);
			}
			else
			{
				unk_0xE31E1C3DC82BAC87("digitalOverlay", "nscanline1", 0.5f, 0.5f, -1f, -1f, 0f, 255, 255, 255, iParam1, 0);
			}
			iLocal_41 = 1;
		}
	}
}

int func_251()
{
	unk_0xB711FC19ADBD3C70("digitalOverlay", 0);
	if (unk_0x682001A921A80123("digitalOverlay"))
	{
		return 1;
	}
	return 0;
}

int func_252(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_258(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x48E480685981C7D4();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_257(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x48E480685981C7D4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_257(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x48E480685981C7D4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_258(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x48E480685981C7D4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_256(uParam0))
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
						if (!func_258(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x48E480685981C7D4();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_257(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x48E480685981C7D4();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_257(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x48E480685981C7D4();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_258(bParam1, bParam2, bParam3))
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
					if (!func_258(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_257(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_257(bParam1, bParam2, bParam3) || unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
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
				else if (!func_258(bParam1, bParam2, bParam3))
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
						if (func_255(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_254(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1) || func_254(bParam1, bParam2, bParam3))
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
					else if (func_255(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_256(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_265(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_253();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_253()
{
	unk_0xF3148AAF69AF9CBC(&Global_2265, 4);
}

int func_254(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_265(bParam0, bParam1, bParam2))
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

int func_255(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_265(bParam0, bParam1, bParam2))
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

int func_256(var uParam0)
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

int func_257(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_265(bParam0, bParam1, bParam2))
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

int func_258(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_265(bParam0, bParam1, bParam2))
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

void func_259(bool bParam0)
{
	if (bParam0)
	{
		func_263();
		if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
		{
			unk_0xF3148AAF69AF9CBC(&Global_2265, 16);
		}
		Global_14394.f_1 = 1;
		if (func_262(0))
		{
			func_260(0);
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

void func_260(int iParam0)
{
	if (Global_14552)
	{
		func_261(0, 0);
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
	if (!func_197())
	{
		Global_14394.f_1 = 3;
	}
}

void func_261(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_262(0))
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

int func_262(int iParam0)
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

void func_263()
{
	if (Global_14394.f_1 == 9 || Global_14394.f_1 == 10)
	{
		Global_15746 = 0;
		Global_15742 = 1;
	}
}

void func_264(char* sParam0, int iParam1)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0xC592EBAF1D879BDC(0, 0, 1, iParam1);
}

int func_265(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_262(0))
	{
		return 0;
	}
	if (func_266())
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

bool func_266()
{
	return unk_0x48E480685981C7D4() <= Global_17238.f_5630 + 100;
}

void func_267(var uParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x930F8FBB8E9537CC(iParam1))
	{
		if (unk_0xE20321A2D7F8960C(iParam1))
		{
			unk_0x1248DFEEEEE716FC(iParam1, fParam2);
			Var0 = { unk_0xB6AE0DAE06D56288(iParam1, 1) };
			Var3 = { unk_0x1FC13B3C61DF24B9(iParam1, 2) };
			unk_0xD68C8B031E2BDFA7(uParam0, Var0);
			unk_0x19F9FD4DDAD99CB2(uParam0, Var3, 2);
		}
	}
}

void func_268(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	if (!unk_0x930F8FBB8E9537CC(iParam1))
	{
		unk_0xABA9860C0161F3CD(iParam1, 0);
		unk_0x5CEA5F12775261F2(iParam1, 0, 0);
		unk_0x210A4A0B257F8433(iParam1, 1);
		unk_0xCEDA5B7DDF6C8846(iParam1, 1, 1, 1, 1, 1, 0, 0, 0);
		unk_0xC8F62804B10A6701(iParam1, iParam3, sParam2, 1);
		Var0 = { unk_0xB6AE0DAE06D56288(iParam1, 1) };
		unk_0xD68C8B031E2BDFA7(uParam0, Var0);
		unk_0x19F9FD4DDAD99CB2(uParam0, unk_0x1FC13B3C61DF24B9(iParam1, 2), 2);
	}
}

void func_269()
{
	if (iLocal_3217 != -1)
	{
		if (iLocal_3388 == 1)
		{
			if (iLocal_3380 == 0)
			{
				unk_0x54206B7CE6FF2360(iLocal_3217);
				iLocal_3390 = 0;
				iLocal_3380 = 1;
			}
		}
	}
	if (iLocal_3212 != -1)
	{
		if (iLocal_3384 == 1)
		{
			if (iLocal_3382 == 0)
			{
				unk_0x54206B7CE6FF2360(iLocal_3212);
				iLocal_3391 = 0;
				iLocal_3382 = 1;
			}
		}
	}
	if (iLocal_3213 != -1)
	{
		if (iLocal_3389 == 1)
		{
			if (iLocal_3371 == 0)
			{
				unk_0x54206B7CE6FF2360(iLocal_3213);
				iLocal_3392 = 0;
				iLocal_3371 = 1;
			}
		}
	}
	if (iLocal_3214 != -1)
	{
		if (iLocal_3385 == 1)
		{
			if (iLocal_3381 == 0)
			{
				unk_0x54206B7CE6FF2360(iLocal_3214);
				iLocal_3393 = 0;
				iLocal_3381 = 1;
			}
		}
	}
	if (iLocal_3215 != -1)
	{
		if (iLocal_3386 == 1)
		{
			if (iLocal_3383 == 0)
			{
				unk_0x54206B7CE6FF2360(iLocal_3215);
				iLocal_3394 = 0;
				iLocal_3383 = 1;
			}
		}
	}
}

void func_270()
{
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[19]))
	{
		if (!unk_0x930F8FBB8E9537CC(iLocal_3120[19]))
		{
			if (!unk_0xC122B4F3141161B3(iLocal_3120[19]))
			{
				unk_0x6A8A78C1DAEC9CEB(iLocal_3120[19], 1);
			}
		}
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[7]))
	{
		if (!unk_0x930F8FBB8E9537CC(iLocal_3120[7]))
		{
			if (!unk_0xC122B4F3141161B3(iLocal_3120[7]))
			{
				unk_0x6A8A78C1DAEC9CEB(iLocal_3120[7], 1);
			}
		}
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[8]))
	{
		if (!unk_0x930F8FBB8E9537CC(iLocal_3120[8]))
		{
			if (!unk_0xC122B4F3141161B3(iLocal_3120[8]))
			{
				unk_0x6A8A78C1DAEC9CEB(iLocal_3120[8], 1);
			}
		}
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[9]))
	{
		if (!unk_0x930F8FBB8E9537CC(iLocal_3120[9]))
		{
			if (!unk_0xC122B4F3141161B3(iLocal_3120[9]))
			{
				unk_0x6A8A78C1DAEC9CEB(iLocal_3120[9], 1);
			}
		}
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[10]))
	{
		if (!unk_0x930F8FBB8E9537CC(iLocal_3120[10]))
		{
			if (!unk_0xC122B4F3141161B3(iLocal_3120[10]))
			{
				unk_0x6A8A78C1DAEC9CEB(iLocal_3120[10], 1);
			}
		}
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[11]))
	{
		if (!unk_0x930F8FBB8E9537CC(iLocal_3120[11]))
		{
			if (!unk_0xC122B4F3141161B3(iLocal_3120[11]))
			{
				unk_0x6A8A78C1DAEC9CEB(iLocal_3120[11], 1);
			}
		}
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[13]))
	{
		if (!unk_0x930F8FBB8E9537CC(iLocal_3120[13]))
		{
			if (!unk_0xC122B4F3141161B3(iLocal_3120[13]))
			{
				unk_0x6A8A78C1DAEC9CEB(iLocal_3120[13], 1);
			}
		}
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[14]))
	{
		if (!unk_0x930F8FBB8E9537CC(iLocal_3120[14]))
		{
			if (!unk_0xC122B4F3141161B3(iLocal_3120[14]))
			{
				unk_0x6A8A78C1DAEC9CEB(iLocal_3120[14], 1);
			}
		}
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[15]))
	{
		if (!unk_0x930F8FBB8E9537CC(iLocal_3120[15]))
		{
			if (!unk_0xC122B4F3141161B3(iLocal_3120[15]))
			{
				unk_0x6A8A78C1DAEC9CEB(iLocal_3120[15], 1);
			}
		}
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[16]))
	{
		if (!unk_0x930F8FBB8E9537CC(iLocal_3120[16]))
		{
			if (!unk_0xC122B4F3141161B3(iLocal_3120[16]))
			{
				unk_0x6A8A78C1DAEC9CEB(iLocal_3120[16], 1);
			}
		}
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[17]))
	{
		if (!unk_0x930F8FBB8E9537CC(iLocal_3120[17]))
		{
			if (!unk_0xC122B4F3141161B3(iLocal_3120[17]))
			{
				unk_0x6A8A78C1DAEC9CEB(iLocal_3120[17], 1);
			}
		}
	}
}

void func_271()
{
	if (func_302())
	{
		fLocal_3323 = 0.5f;
	}
	else if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		if (unk_0x5855978686FD0737(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)) > 40f)
		{
			fLocal_3323 = 0.85f;
		}
		else
		{
			fLocal_3323 = 0.9f;
		}
	}
	else
	{
		fLocal_3323 = 0.9f;
	}
	if (!unk_0x930F8FBB8E9537CC(iLocal_3257))
	{
		if (unk_0x7404950238A154C2(iLocal_3257, 0))
		{
			if (unk_0xE20321A2D7F8960C(iLocal_3257))
			{
				if (iLocal_3358 == 0)
				{
					if (unk_0x678BA9CA7610A13E(iLocal_3257) < 10000f)
					{
						if (func_16(unk_0x81873881071CD9FE(), iLocal_3257, 1) < 100f || unk_0x331E7ACCFD0869AD(iLocal_3257))
						{
							func_298(iLocal_3257, unk_0x81873881071CD9FE(), &fLocal_3322, 1f, 40f, 55f, 100f, 1.7f, 1f, fLocal_3323, 0);
							unk_0x1248DFEEEEE716FC(iLocal_3257, fLocal_3322);
							func_272(iLocal_3257, fLocal_3322);
						}
						else
						{
							func_298(iLocal_3257, unk_0x81873881071CD9FE(), &fLocal_3322, 0.6f, 40f, 50f, 60f, 1.7f, 1f, fLocal_3323, 0);
							unk_0x1248DFEEEEE716FC(iLocal_3257, fLocal_3322);
							func_272(iLocal_3257, fLocal_3322);
						}
					}
				}
				else if (func_16(unk_0x81873881071CD9FE(), iLocal_3257, 1) > 175f)
				{
					fLocal_3322 = 0.6f;
					unk_0x1248DFEEEEE716FC(iLocal_3257, fLocal_3322);
					func_272(iLocal_3257, fLocal_3322);
				}
				else if (unk_0x678BA9CA7610A13E(iLocal_3257) < 10000f)
				{
					func_298(iLocal_3257, unk_0x81873881071CD9FE(), &fLocal_3322, 1f, 25f, 40f, 180f, 1.7f, 1f, fLocal_3323, 0);
					unk_0x1248DFEEEEE716FC(iLocal_3257, fLocal_3322);
					func_272(iLocal_3257, fLocal_3322);
				}
				if (unk_0x678BA9CA7610A13E(iLocal_3257) > 10000f && unk_0x678BA9CA7610A13E(iLocal_3257) < 23000f)
				{
					if (unk_0x7404950238A154C2(iLocal_3120[8], 0))
					{
						func_298(iLocal_3120[8], unk_0x81873881071CD9FE(), &fLocal_3322, 1f, 25f, 30f, 50f, 1.7f, 0.5f, fLocal_3323, 1);
						unk_0x1248DFEEEEE716FC(iLocal_3257, fLocal_3322);
						func_272(iLocal_3257, fLocal_3322);
					}
					else
					{
						func_298(iLocal_3257, unk_0x81873881071CD9FE(), &fLocal_3322, 1f, 25f, 35f, 180f, 1.7f, 0.5f, fLocal_3323, 1);
						unk_0x1248DFEEEEE716FC(iLocal_3257, fLocal_3322);
						func_272(iLocal_3257, fLocal_3322);
					}
				}
				if (unk_0x678BA9CA7610A13E(iLocal_3257) > 23000f && unk_0x678BA9CA7610A13E(iLocal_3257) < 32000f)
				{
					if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[7]))
					{
						if (unk_0x7404950238A154C2(iLocal_3120[7], 0))
						{
							func_298(iLocal_3120[7], unk_0x81873881071CD9FE(), &fLocal_3322, 1f, 20f, 30f, 100f, 1.8f, 1f, fLocal_3323, 0);
							unk_0x1248DFEEEEE716FC(iLocal_3257, fLocal_3322);
							func_272(iLocal_3257, fLocal_3322);
						}
						else if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[8]))
						{
							if (unk_0x7404950238A154C2(iLocal_3120[8], 0))
							{
								func_298(iLocal_3120[8], unk_0x81873881071CD9FE(), &fLocal_3322, 1f, 10f, 20f, 40f, 1.8f, 1f, fLocal_3323, 0);
								unk_0x1248DFEEEEE716FC(iLocal_3257, fLocal_3322);
								func_272(iLocal_3257, fLocal_3322);
							}
							else
							{
								func_298(iLocal_3257, unk_0x81873881071CD9FE(), &fLocal_3322, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3323, 0);
								unk_0x1248DFEEEEE716FC(iLocal_3257, fLocal_3322);
								func_272(iLocal_3257, fLocal_3322);
							}
						}
						else
						{
							func_298(iLocal_3257, unk_0x81873881071CD9FE(), &fLocal_3322, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3323, 0);
							unk_0x1248DFEEEEE716FC(iLocal_3257, fLocal_3322);
							func_272(iLocal_3257, fLocal_3322);
						}
					}
					else if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[8]))
					{
						if (unk_0x7404950238A154C2(iLocal_3120[8], 0))
						{
							func_298(iLocal_3120[8], unk_0x81873881071CD9FE(), &fLocal_3322, 1f, 10f, 20f, 40f, 1.8f, 1f, fLocal_3323, 0);
							unk_0x1248DFEEEEE716FC(iLocal_3257, fLocal_3322);
							func_272(iLocal_3257, fLocal_3322);
						}
						else
						{
							func_298(iLocal_3257, unk_0x81873881071CD9FE(), &fLocal_3322, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3323, 0);
							unk_0x1248DFEEEEE716FC(iLocal_3257, fLocal_3322);
							func_272(iLocal_3257, fLocal_3322);
						}
					}
					else
					{
						func_298(iLocal_3257, unk_0x81873881071CD9FE(), &fLocal_3322, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3323, 0);
						unk_0x1248DFEEEEE716FC(iLocal_3257, fLocal_3322);
						func_272(iLocal_3257, fLocal_3322);
					}
				}
				if (unk_0x678BA9CA7610A13E(iLocal_3257) > 32000f && unk_0x678BA9CA7610A13E(iLocal_3257) < 39000f)
				{
					if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[7]))
					{
						if (unk_0x7404950238A154C2(iLocal_3120[7], 0))
						{
							func_298(iLocal_3120[7], unk_0x81873881071CD9FE(), &fLocal_3322, 1f, 22f, 25f, 100f, 1.8f, 0.5f, fLocal_3323, 1);
							unk_0x1248DFEEEEE716FC(iLocal_3257, fLocal_3322);
							func_272(iLocal_3257, fLocal_3322);
						}
						else
						{
							func_298(iLocal_3257, unk_0x81873881071CD9FE(), &fLocal_3322, 1f, 25f, 35f, 150f, 1.8f, 0.5f, fLocal_3323, 1);
							unk_0x1248DFEEEEE716FC(iLocal_3257, fLocal_3322);
							func_272(iLocal_3257, fLocal_3322);
						}
					}
					else
					{
						func_298(iLocal_3257, unk_0x81873881071CD9FE(), &fLocal_3322, 1f, 25f, 35f, 150f, 1.8f, 0.5f, fLocal_3323, 1);
						unk_0x1248DFEEEEE716FC(iLocal_3257, fLocal_3322);
						func_272(iLocal_3257, fLocal_3322);
					}
				}
				if (unk_0x678BA9CA7610A13E(iLocal_3257) > 39000f && unk_0x678BA9CA7610A13E(iLocal_3257) < 56000f)
				{
					if (unk_0x7404950238A154C2(iLocal_3120[8], 0))
					{
						func_298(iLocal_3120[8], unk_0x81873881071CD9FE(), &fLocal_3322, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3323, 0);
						unk_0x1248DFEEEEE716FC(iLocal_3257, fLocal_3322);
						func_272(iLocal_3257, fLocal_3322);
					}
					else
					{
						func_298(iLocal_3257, unk_0x81873881071CD9FE(), &fLocal_3322, 1f, 25f, 35f, 150f, 1.8f, 1f, fLocal_3323, 0);
						unk_0x1248DFEEEEE716FC(iLocal_3257, fLocal_3322);
						func_272(iLocal_3257, fLocal_3322);
					}
				}
				if (unk_0x678BA9CA7610A13E(iLocal_3257) > 56000f && unk_0x678BA9CA7610A13E(iLocal_3257) < 65000f)
				{
					if (unk_0x7404950238A154C2(iLocal_3120[11], 0))
					{
						func_298(iLocal_3120[11], unk_0x81873881071CD9FE(), &fLocal_3322, 1f, 25f, 30f, 100f, 1.8f, 1f, fLocal_3323, 0);
						unk_0x1248DFEEEEE716FC(iLocal_3257, fLocal_3322);
						func_272(iLocal_3257, fLocal_3322);
					}
					else
					{
						func_298(iLocal_3257, unk_0x81873881071CD9FE(), &fLocal_3322, 1f, 25f, 35f, 100f, 1.8f, 1f, fLocal_3323, 0);
						unk_0x1248DFEEEEE716FC(iLocal_3257, fLocal_3322);
						func_272(iLocal_3257, fLocal_3322);
					}
				}
				if (unk_0x678BA9CA7610A13E(iLocal_3257) > 65000f && unk_0x678BA9CA7610A13E(iLocal_3257) < 90000f)
				{
					if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[13]))
					{
						if (unk_0x7404950238A154C2(iLocal_3120[13], 0))
						{
							func_298(iLocal_3120[13], unk_0x81873881071CD9FE(), &fLocal_3322, 1f, 30f, 35f, 50f, 1.8f, 1f, fLocal_3323, 0);
							unk_0x1248DFEEEEE716FC(iLocal_3257, fLocal_3322);
							func_272(iLocal_3257, fLocal_3322);
						}
						else
						{
							func_298(iLocal_3257, unk_0x81873881071CD9FE(), &fLocal_3322, 1f, 45f, 55f, 150f, 1.8f, 1f, fLocal_3323, 0);
							unk_0x1248DFEEEEE716FC(iLocal_3257, fLocal_3322);
							func_272(iLocal_3257, fLocal_3322);
						}
					}
					else
					{
						func_298(iLocal_3257, unk_0x81873881071CD9FE(), &fLocal_3322, 1f, 45f, 55f, 150f, 1.8f, 1f, fLocal_3323, 0);
						unk_0x1248DFEEEEE716FC(iLocal_3257, fLocal_3322);
						func_272(iLocal_3257, fLocal_3322);
					}
				}
				if (unk_0x678BA9CA7610A13E(iLocal_3257) > 90000f && unk_0x678BA9CA7610A13E(iLocal_3257) < 110000f)
				{
					func_298(iLocal_3257, unk_0x81873881071CD9FE(), &fLocal_3322, 1f, 60f, 70f, 150f, 1.5f, 0.5f, fLocal_3323, 1);
					unk_0x1248DFEEEEE716FC(iLocal_3257, fLocal_3322);
					func_272(iLocal_3257, fLocal_3322);
				}
				if (unk_0x678BA9CA7610A13E(iLocal_3257) > 110000f)
				{
					func_298(iLocal_3257, unk_0x81873881071CD9FE(), &fLocal_3322, 1f, 100f, 120f, 150f, 1.6f, 1f, fLocal_3323, 0);
					unk_0x1248DFEEEEE716FC(iLocal_3257, fLocal_3322);
					func_272(iLocal_3257, fLocal_3322);
				}
			}
		}
	}
}

void func_272(int iParam0, float fParam1)
{
	float fVar0;
	struct<3> Var1;
	int iVar4;
	
	fVar0 = unk_0x8D51D24D214E2FF2();
	fVar0 = (fVar0 * 1000f);
	bLocal_105 = false;
	if (!bLocal_87)
	{
		if (bLocal_86)
		{
			func_297();
			if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
			{
				Var1 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
				unk_0x7C6BF0CD5D7454C9(Var1, 1000f, 1, 0, 0, 0);
			}
			bLocal_87 = true;
		}
	}
	else if (!bLocal_86)
	{
		func_180();
		bLocal_87 = false;
	}
	if (bLocal_86)
	{
		fParam1 = 1f;
		unk_0xCDE668E40D482687(0f);
	}
	if (!bLocal_80)
	{
		if (iLocal_75)
		{
			fLocal_1277 = 0f;
		}
		else
		{
			fLocal_1277 = 1f;
		}
		if (unk_0x7404950238A154C2(iParam0, 0))
		{
			if (unk_0xE20321A2D7F8960C(iParam0))
			{
				if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
				{
					if (func_296(unk_0x81873881071CD9FE(), iParam0))
					{
						iLocal_85 = 1;
					}
					else
					{
						iLocal_85 = 0;
					}
				}
				fLocal_1274 = unk_0x678BA9CA7610A13E(iParam0);
				unk_0x1248DFEEEEE716FC(iParam0, ((fParam1 * fLocal_1275) * fLocal_1277));
				if (bLocal_84)
				{
					func_295(iParam0, fLocal_1274);
					func_294(iParam0, fLocal_1284);
					if (fLocal_1279 > 1000f)
					{
						if (iLocal_1961 == 0)
						{
							func_293(iParam0, fLocal_1284);
						}
						fVar0 = ((fLocal_1274 + 4000f) + (unk_0xBBDA792448DB5A89(iLocal_1961) * 2000f));
						func_292(iParam0, fVar0, fLocal_1278);
						iLocal_1961++;
						if (iLocal_1961 > 2)
						{
							fLocal_1279 = 0f;
						}
					}
					else
					{
						iLocal_1961 = 0;
						fLocal_1279 = (fLocal_1279 + (unk_0x8D51D24D214E2FF2() * 1000f));
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
		if (fLocal_1274 == 0f || unk_0x29AFA2493D7C23D0())
		{
			iVar4 = 1;
		}
		if (iVar4 && !bLocal_92)
		{
			if (!iLocal_74)
			{
				func_289(iParam0, ((fParam1 * fLocal_1275) * fLocal_1277), 0);
				if (!iLocal_95)
				{
				}
				iLocal_95 = 0;
			}
			if (bLocal_77)
			{
				func_288(iParam0);
			}
			if (!iLocal_74)
			{
				func_275(iParam0, ((fParam1 * fLocal_1275) * fLocal_1277), 0);
			}
		}
		if (iLocal_82)
		{
			if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
			{
				if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
				{
					iLocal_3163 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
					Local_2640 = { unk_0xB6AE0DAE06D56288(iLocal_3163, 1) };
					unk_0xA8BCFD25BABF9DAF(iLocal_3163, &fLocal_988, &fLocal_989, &fLocal_990, &fLocal_991);
				}
			}
			iLocal_82 = 0;
		}
		if (iLocal_81)
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_3163))
			{
				func_172(iLocal_3164);
				iLocal_3164 = iLocal_3163;
			}
			if (unk_0x7404950238A154C2(iLocal_3164, 0))
			{
				unk_0xB067093BBAF0A747(iLocal_3164, Local_2640, 1, 0, 0, 1);
				unk_0x5D6F89F6DD9B0781(iLocal_3164, fLocal_988, fLocal_989, fLocal_990, fLocal_991);
			}
			fLocal_1273 = fLocal_1276;
			iLocal_74 = 1;
			iLocal_81 = 0;
		}
		if (iLocal_74)
		{
			while (!func_273(&iParam0, fLocal_1273))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_75 = 1;
		}
		if (iLocal_88)
		{
			iLocal_88 = 0;
		}
	}
}

int func_273(int iParam0, float fParam1)
{
	if (!iLocal_89)
	{
		iLocal_74 = 1;
		func_167();
		if (unk_0x7404950238A154C2(*iParam0, 0))
		{
			if (unk_0xE20321A2D7F8960C(*iParam0))
			{
				unk_0x05ACEF4F060B9B4E(*iParam0);
				unk_0x4F7552F76F378DB7(*iParam0);
			}
			if (!iLocal_1948 == -1)
			{
				while (!func_274(iParam0, iLocal_1948, fParam1, 1, 0, 0, 0, 0))
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				if (!bLocal_79)
				{
					iLocal_75 = 1;
					fLocal_1277 = 0f;
					iLocal_1949 = 0;
					iLocal_1951 = 0;
					iLocal_1950 = 0;
					iLocal_1945 = 0;
					iLocal_1946 = 0;
					iLocal_1947 = 0;
					iLocal_1952 = 0;
					iLocal_1953 = 0;
					iLocal_1954 = 0;
				}
			}
		}
		iLocal_89 = 1;
	}
	else
	{
		if (unk_0x7404950238A154C2(*iParam0, 0))
		{
			if (unk_0xE20321A2D7F8960C(*iParam0))
			{
				unk_0x1248DFEEEEE716FC(*iParam0, ((1f * fLocal_1275) * fLocal_1277));
				func_274(iParam0, iLocal_1948, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_1274 = fParam1;
		iLocal_1955 = 0;
		iLocal_1958 = 0;
		fLocal_1289 = 0f;
		fLocal_1288 = 0f;
		func_275(*iParam0, ((1f * fLocal_1275) * fLocal_1277), 1);
		func_289(*iParam0, ((1f * fLocal_1275) * fLocal_1277), 1);
		func_288(*iParam0);
		if ((iLocal_1952 == 0 && iLocal_1953 == 0) && iLocal_1954 == 0)
		{
			iLocal_75 = 0;
			iLocal_74 = 0;
			iLocal_89 = 0;
			return 1;
		}
	}
	return 0;
}

int func_274(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	float fVar0;
	
	if (iParam1 > 0)
	{
		unk_0x995DCDA796A47049(iParam1, &cLocal_2667);
		if (unk_0x498998F33897432E(iParam1, &cLocal_2667))
		{
			if (unk_0x7404950238A154C2(*uParam0, 0))
			{
				if (!unk_0xE20321A2D7F8960C(*uParam0))
				{
					unk_0xA8F22633ACC22189(*uParam0, 0);
					if (bParam4)
					{
						unk_0xFD59D9ECD844449F(*uParam0, iParam1, &cLocal_2667, 1092616192, 786603);
					}
					else
					{
						if (iParam1 != iLocal_1956 && iParam1 != iLocal_1957)
						{
							if (bParam7)
							{
								unk_0xFE508DC43429A724(*uParam0, iParam1, &cLocal_2667, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								unk_0xFE508DC43429A724(*uParam0, iParam1, &cLocal_2667, 1 | 4, 0, 786603);
							}
							else
							{
								unk_0xC8F62804B10A6701(*uParam0, iParam1, &cLocal_2667, 1);
							}
						}
						else
						{
							unk_0xC8F62804B10A6701(*uParam0, iParam1, &cLocal_2667, 1);
						}
						unk_0x0039C5B0E3E4993E(*uParam0, fParam2);
						if (bParam5)
						{
							unk_0xDC099970C8216FC4(*uParam0, 1);
						}
						return 1;
					}
				}
				else if (unk_0x579D32FAAD5CA6B8(*uParam0) == unk_0xFCFD8E6E4FB394AD(iParam1, &cLocal_2667))
				{
					fVar0 = unk_0x678BA9CA7610A13E(*uParam0);
					unk_0x0039C5B0E3E4993E(*uParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						unk_0x05ACEF4F060B9B4E(*uParam0);
						unk_0x995DCDA796A47049(iParam1, &cLocal_2667);
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
						unk_0xFD59D9ECD844449F(*uParam0, iParam1, &cLocal_2667, 1092616192, 786603);
					}
					else if (iParam1 != iLocal_1956 && iParam1 != iLocal_1957)
					{
						if (bParam7)
						{
							unk_0xFE508DC43429A724(*uParam0, iParam1, &cLocal_2667, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							unk_0xFE508DC43429A724(*uParam0, iParam1, &cLocal_2667, 1 | 4, 0, 786603);
						}
						else
						{
							unk_0xC8F62804B10A6701(*uParam0, iParam1, &cLocal_2667, 1);
						}
					}
					else
					{
						unk_0xC8F62804B10A6701(*uParam0, iParam1, &cLocal_2667, 1);
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

void func_275(int iParam0, float fParam1, bool bParam2)
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
		iVar0 = iLocal_1951;
		while (iVar0 < 35)
		{
			if (iLocal_1857[iVar0] != 99)
			{
				if (iLocal_1857[iVar0] == 0)
				{
					if (iLocal_1821[iVar0] > 0)
					{
						if (!iLocal_74)
						{
							if (fLocal_1274 > (fLocal_1136[iVar0] - (7000f * fParam1)))
							{
								if (func_287(iLocal_2876[iVar0]))
								{
									unk_0xF3148AAF69AF9CBC(&(iLocal_1893[iVar0]), 0);
								}
								else if (unk_0xC5ABD699DDC9D5A0(iLocal_2876[iVar0]))
								{
									unk_0xF3148AAF69AF9CBC(&(iLocal_1893[iVar0]), 2);
								}
								unk_0xC69E84EBBD7166E6(&(iLocal_1893[iVar0]), 1);
								iLocal_1857[iVar0]++;
								iLocal_1953++;
							}
						}
						else
						{
							fVar12 = (fLocal_1274 - fLocal_1136[iVar0]);
							fVar12 = (fVar12 * fLocal_1172[iVar0]);
							if (fVar12 >= 0f)
							{
								if (fVar12 < func_286(iLocal_1821[iVar0]))
								{
									if (func_287(iLocal_2876[iVar0]))
									{
										unk_0xF3148AAF69AF9CBC(&(iLocal_1893[iVar0]), 0);
									}
									else if (unk_0xC5ABD699DDC9D5A0(iLocal_2876[iVar0]))
									{
										unk_0xF3148AAF69AF9CBC(&(iLocal_1893[iVar0]), 2);
									}
									unk_0xC69E84EBBD7166E6(&(iLocal_1893[iVar0]), 1);
									iLocal_1857[iVar0]++;
									iLocal_1953++;
								}
								else
								{
									iLocal_1857[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_1857[iVar0] = 99;
					}
				}
				else if (iLocal_1857[iVar0] == 1)
				{
					bVar14 = false;
					unk_0x995DCDA796A47049(iLocal_1821[iVar0], &cLocal_2667);
					if (unk_0x236D8AD7EE179F46(iLocal_1893[iVar0], 0))
					{
						unk_0x32A12757CBF48A33(func_176());
						bVar14 = unk_0x33ACB874CECA2D4B(func_176());
					}
					else if (!bLocal_101 && ((!unk_0x236D8AD7EE179F46(iLocal_1893[iVar0], 2) && uVar16) || (unk_0x236D8AD7EE179F46(iLocal_1893[iVar0], 2) && uVar17)))
					{
						bVar14 = true;
					}
					else
					{
						unk_0x32A12757CBF48A33(func_179());
						bVar14 = unk_0x33ACB874CECA2D4B(func_179());
					}
					if (bVar14)
					{
						if (!unk_0x86CCCD2FAE9D5E65(iLocal_3120[iVar0]))
						{
							unk_0x32A12757CBF48A33(iLocal_2876[iVar0]);
							if (unk_0x33ACB874CECA2D4B(iLocal_2876[iVar0]) && unk_0x498998F33897432E(iLocal_1821[iVar0], &cLocal_2667))
							{
								if (fLocal_1274 >= (fLocal_1136[iVar0] - (fLocal_1287 * fParam1)))
								{
									if ((iLocal_88 || bParam2) || (!bLocal_105 && !func_285(Local_2534[iVar0 /*3*/], Var9, 5f, fLocal_1285)))
									{
										if (bLocal_84)
										{
											func_284(Local_2534[iVar0 /*3*/], Var9, fLocal_1278);
										}
										iLocal_3120[iVar0] = unk_0xE00F8DEA9778FC87(iLocal_2876[iVar0], Local_2534[iVar0 /*3*/], 0f, 0, 0);
										if (iLocal_2876[iVar0] == joaat("polmav"))
										{
											unk_0x24F85A008ECA63FB(iLocal_3120[iVar0], 0);
										}
										if (uLocal_97 && !unk_0x236D8AD7EE179F46(iLocal_1893[iVar0], 0))
										{
											func_283(iLocal_3120[iVar0]);
										}
										if (unk_0x236D8AD7EE179F46(iLocal_1893[iVar0], 3))
										{
											unk_0xEA89E72C99125D9C(iLocal_3120[iVar0], 1);
										}
										unk_0xB901CB880393ADF7(iLocal_3120[iVar0], Local_2534[iVar0 /*3*/], 0, 0, 1);
										unk_0x5D6F89F6DD9B0781(iLocal_3120[iVar0], fLocal_992[iVar0], fLocal_1028[iVar0], fLocal_1064[iVar0], fLocal_1100[iVar0]);
										if (unk_0x61A26017817C6AED(iLocal_2876[iVar0]) || unk_0xC5ABD699DDC9D5A0(iLocal_2876[iVar0]))
										{
											unk_0x5CC9D6711FE01F0D(iLocal_3120[iVar0]);
										}
										if (!unk_0x236D8AD7EE179F46(iLocal_1893[iVar0], 0))
										{
											unk_0x686D6CDC14C4BA6C(iLocal_3120[iVar0], 1, 1);
											if (unk_0x0C937048CF6952B5() > 19 || unk_0x0C937048CF6952B5() < 7)
											{
												unk_0x69AA788B6BA4CB68(iLocal_3120[iVar0], 3);
											}
										}
										unk_0xA8F22633ACC22189(iLocal_3120[iVar0], 1);
										unk_0x887F4488DA99FD21(iLocal_2876[iVar0]);
										iLocal_1953 = (iLocal_1953 - 1);
										iLocal_1857[iVar0]++;
										bLocal_105 = true;
									}
								}
							}
						}
						else if (!unk_0x930F8FBB8E9537CC(iLocal_3120[iVar0]) && unk_0x7404950238A154C2(iLocal_3120[iVar0], 0))
						{
							unk_0xB901CB880393ADF7(iLocal_3120[iVar0], Local_2534[iVar0 /*3*/], 0, 0, 1);
							unk_0x5D6F89F6DD9B0781(iLocal_3120[iVar0], fLocal_992[iVar0], fLocal_1028[iVar0], fLocal_1064[iVar0], fLocal_1100[iVar0]);
							if (unk_0x61A26017817C6AED(iLocal_2876[iVar0]) || unk_0xC5ABD699DDC9D5A0(iLocal_2876[iVar0]))
							{
								unk_0x5CC9D6711FE01F0D(iLocal_3120[iVar0]);
							}
							unk_0xA8F22633ACC22189(iLocal_3120[iVar0], 1);
							unk_0x887F4488DA99FD21(iLocal_2876[iVar0]);
							iLocal_1953 = (iLocal_1953 - 1);
							iLocal_1857[iVar0]++;
						}
					}
				}
				else if (iLocal_1857[iVar0] == 2)
				{
					unk_0x995DCDA796A47049(iLocal_1821[iVar0], &cLocal_2667);
					if (!unk_0x236D8AD7EE179F46(iLocal_1893[iVar0], 1))
					{
						bVar14 = false;
						if (unk_0x236D8AD7EE179F46(iLocal_1893[iVar0], 0))
						{
							unk_0x32A12757CBF48A33(func_176());
							bVar14 = unk_0x33ACB874CECA2D4B(func_176());
							iVar19 = 2;
						}
						else if (!bLocal_101 && ((!unk_0x236D8AD7EE179F46(iLocal_1893[iVar0], 2) && uVar16) || (unk_0x236D8AD7EE179F46(iLocal_1893[iVar0], 2) && uVar17)))
						{
							bVar14 = true;
							iVar19 = 1;
						}
						else
						{
							unk_0x32A12757CBF48A33(func_179());
							bVar14 = unk_0x33ACB874CECA2D4B(func_179());
							iVar19 = 0;
						}
						if (!unk_0x930F8FBB8E9537CC(iLocal_3120[iVar0]))
						{
							if (!bLocal_105 && unk_0xBEB00EB4ADDC2A33(iLocal_3120[iVar0], -1))
							{
								if (bVar14)
								{
									if ((unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(iLocal_3120[iVar0], 1), Var9) < 10000f || bParam2) || iLocal_88)
									{
										func_281(&(iLocal_3120[iVar0]), iVar19, 1);
										unk_0xF3148AAF69AF9CBC(&(iLocal_1893[iVar0]), 1);
									}
								}
							}
						}
					}
					if (unk_0x7404950238A154C2(iLocal_3120[iVar0], 0))
					{
						if (fLocal_1274 >= fLocal_1136[iVar0])
						{
							if (14 > iLocal_1946)
							{
								fVar12 = (fLocal_1274 - fLocal_1136[iVar0]);
								fVar12 = (fVar12 * fLocal_1172[iVar0]);
								if (unk_0x498998F33897432E(iLocal_1821[iVar0], &cLocal_2667))
								{
									if (fVar12 < unk_0x60D934BFDF90E0F0(iLocal_1821[iVar0], &cLocal_2667))
									{
										Var3 = { unk_0xB6AE0DAE06D56288(iLocal_3120[iVar0], 1) };
										Var6 = { unk_0xD0CC9D77E98DFF73(iLocal_1821[iVar0], fVar12, &cLocal_2667) };
										if (((!func_285(Var3, Var9, 5f, fLocal_1285) && func_285(Var6, Var9, 5f, fLocal_1285)) && !iLocal_88) && !bParam2)
										{
											if (!unk_0x236D8AD7EE179F46(iLocal_1893[iVar0], 1))
											{
												func_281(&(iLocal_3120[iVar0]), iVar19, 1);
											}
											iLocal_1946++;
											iLocal_1857[iVar0]++;
										}
										else if (((!bLocal_105 || unk_0x236D8AD7EE179F46(iLocal_1893[iVar0], 1)) || iLocal_88) || bParam2)
										{
											if (func_274(&(iLocal_3120[iVar0]), iLocal_1821[iVar0], fVar12, 1, 0, 0, bLocal_103, bLocal_102))
											{
												unk_0x1248DFEEEEE716FC(iLocal_3120[iVar0], (fParam1 * fLocal_1172[iVar0]));
												if (unk_0x7404950238A154C2(iLocal_3120[iVar0], 0))
												{
													if (unk_0x236D8AD7EE179F46(iLocal_1893[iVar0], 0))
													{
														unk_0x686D6CDC14C4BA6C(iLocal_3120[iVar0], 1, 1);
														unk_0x6A8A78C1DAEC9CEB(iLocal_3120[iVar0], 1);
														unk_0x69AA788B6BA4CB68(iLocal_3120[iVar0], 2);
														if (!unk_0xC5ABD699DDC9D5A0(iLocal_2876[iVar0]))
														{
															unk_0x466892F4AAB03B4B(iLocal_3120[iVar0], 1);
														}
													}
												}
												if (!unk_0x236D8AD7EE179F46(iLocal_1893[iVar0], 1))
												{
													func_281(&(iLocal_3120[iVar0]), iVar19, 1);
												}
												iLocal_1946++;
												iLocal_1857[iVar0]++;
											}
										}
									}
									else
									{
										if (!unk_0x236D8AD7EE179F46(iLocal_1893[iVar0], 1))
										{
											func_281(&(iLocal_3120[iVar0]), iVar19, 1);
										}
										iLocal_1946++;
										iLocal_1857[iVar0]++;
									}
								}
							}
							else
							{
								if (!unk_0x236D8AD7EE179F46(iLocal_1893[iVar0], 1))
								{
									func_281(&(iLocal_3120[iVar0]), iVar19, 1);
								}
								iLocal_1946++;
								iLocal_1857[iVar0]++;
							}
						}
					}
					else
					{
						if (!unk_0x236D8AD7EE179F46(iLocal_1893[iVar0], 1))
						{
							func_281(&(iLocal_3120[iVar0]), iVar19, 1);
						}
						iLocal_1946++;
						iLocal_1857[iVar0]++;
					}
				}
				else if (iLocal_1857[iVar0] == 3)
				{
					if (unk_0x7404950238A154C2(iLocal_3120[iVar0], 0))
					{
						if (unk_0xE20321A2D7F8960C(iLocal_3120[iVar0]))
						{
							iVar1 = unk_0xB0B9E53CEFDB16AA(iLocal_3120[iVar0], -1);
							if (!unk_0x5FEB513A4402FD59(iVar1))
							{
								if (bVar15)
								{
									if (((!bLocal_78 && !iLocal_75) && !bLocal_94) && (((!bLocal_103 && !bLocal_102) && unk_0xB454AC819016CE5E(unk_0x81873881071CD9FE(), iLocal_3120[iVar0])) || func_280(iLocal_3120[iVar0])))
									{
										if (unk_0x86CCCD2FAE9D5E65(iVar2))
										{
											bVar14 = false;
											if (bLocal_96)
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
												else if (unk_0xB9AA84B14E04BC20((fVar13 - unk_0xA04824262F150982(iLocal_3120[iVar0]))) > 15f)
												{
													bVar14 = true;
												}
												else if (!func_279(iLocal_3120[iVar0], iVar2, 45f))
												{
													bVar14 = true;
												}
												else if (func_277(iVar2, iLocal_3120[iVar0], 0))
												{
													bVar14 = true;
												}
											}
											if (bVar14)
											{
												func_276(iLocal_3120[iVar0]);
												iLocal_1857[iVar0]++;
											}
										}
									}
									else
									{
										unk_0x1248DFEEEEE716FC(iLocal_3120[iVar0], (fParam1 * fLocal_1172[iVar0]));
									}
								}
							}
							else
							{
								unk_0x05ACEF4F060B9B4E(iLocal_3120[iVar0]);
							}
						}
						else
						{
							iLocal_1857[iVar0]++;
						}
					}
					else
					{
						iLocal_1857[iVar0]++;
					}
				}
				else if (iLocal_1857[iVar0] == 4)
				{
					if (unk_0x7404950238A154C2(iLocal_3120[iVar0], 0))
					{
						if (!unk_0xE20321A2D7F8960C(iLocal_3120[iVar0]))
						{
							iLocal_1857[iVar0]++;
						}
						else
						{
							iVar1 = unk_0xB0B9E53CEFDB16AA(iLocal_3120[iVar0], -1);
							if (!unk_0x5FEB513A4402FD59(iVar1))
							{
								unk_0x1248DFEEEEE716FC(iLocal_3120[iVar0], (fParam1 * fLocal_1172[iVar0]));
							}
							else
							{
								unk_0x05ACEF4F060B9B4E(iLocal_3120[iVar0]);
							}
							if (unk_0x498998F33897432E(iLocal_1821[iVar0], &cLocal_2667))
							{
								if (fLocal_1274 > (fLocal_1136[iVar0] + unk_0x60D934BFDF90E0F0(iLocal_1821[iVar0], &cLocal_2667)))
								{
									unk_0x05ACEF4F060B9B4E(iLocal_3120[iVar0]);
								}
							}
							else
							{
								unk_0x05ACEF4F060B9B4E(iLocal_3120[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1857[iVar0]++;
					}
				}
				else if (iLocal_1857[iVar0] == 5)
				{
					if (!iLocal_3120[iVar0] == iLocal_3165)
					{
						if (unk_0x7404950238A154C2(iLocal_3120[iVar0], 0))
						{
							iVar1 = unk_0xB0B9E53CEFDB16AA(iLocal_3120[iVar0], -1);
							if (!unk_0x5FEB513A4402FD59(iVar1))
							{
								iVar20 = unk_0xFA1212DE7C455679(iVar1, 242628503);
								if (iVar20 == 7)
								{
									fVar13 = unk_0xA04824262F150982(iLocal_3120[iVar0]);
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
						if (!bLocal_86 && !bLocal_99)
						{
							if (iLocal_1821[iVar0] > 0)
							{
								unk_0x4855165A2773595C(iLocal_1821[iVar0], &cLocal_2667);
							}
						}
						if (!bLocal_76)
						{
							if (!bLocal_104)
							{
								func_172(iLocal_3120[iVar0]);
							}
						}
						else if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[iVar0]))
						{
							unk_0x5D00E836B6BE8693(&(iLocal_3120[iVar0]));
						}
					}
					iLocal_1946 = (iLocal_1946 - 1);
					iLocal_1857[iVar0] = 99;
				}
				if (!bVar18)
				{
					iLocal_1951 = iVar0;
					bVar18 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_171();
	}
}

void func_276(int iParam0)
{
	if (unk_0x7404950238A154C2(iParam0, 0))
	{
		func_173(iParam0);
		unk_0x4BB2BF146DC5CBFA(iParam0, 786603);
	}
}

int func_277(int iParam0, int iParam1, bool bParam2)
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
	if (func_278(Var9, Var12) < 0f)
	{
		return 1;
	}
	return 0;
}

float func_278(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_279(int iParam0, int iParam1, float fParam2)
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
	fVar6 = func_278(Var0, Var3);
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

int func_280(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bLocal_100)
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

int func_281(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x930F8FBB8E9537CC(*uParam0))
	{
		if (unk_0xBEB00EB4ADDC2A33(*uParam0, -1))
		{
			if (iParam1 == 2)
			{
				iVar0 = unk_0x4D135F3066A9BF9C(*uParam0, 6, func_176(), -1, 0, 0);
				unk_0x506A601663C5417C(iVar0, iLocal_2683);
				unk_0x887F4488DA99FD21(func_176());
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
				iVar0 = unk_0x4D135F3066A9BF9C(*uParam0, 4, func_179(), -1, 0, 0);
				if (bLocal_106)
				{
					unk_0x887F4488DA99FD21(func_179());
				}
			}
			if (bParam2)
			{
				unk_0x4351E8D40CE67994(iVar0, 1);
				unk_0x88ED7588393C4981(iVar0, 0);
				unk_0xCE566DBDCACD245E(iVar0, 32, 0);
			}
			if (bLocal_107)
			{
				unk_0x7F5F0D37173E518C(iVar0, 8192, 1);
				unk_0x7F5F0D37173E518C(iVar0, 65536, 1);
				unk_0x7F5F0D37173E518C(iVar0, 2, 0);
				unk_0x0E465BF3FB5C8001(*uParam0, 1);
			}
			unk_0x1D15D99A10A15334(iVar0, 1);
			func_282(iVar0);
			bLocal_105 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_282(int iParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		unk_0x71A8BCA218722FA1(&iParam0);
	}
}

void func_283(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x2E0A9E3291F398E3(0, 12);
	if (iLocal_2913 >= -1 && iLocal_2914 >= -1)
	{
		while (iVar0 == iLocal_2913 || iVar0 == iLocal_2914)
		{
			iVar0++;
		}
	}
	else if (iLocal_2913 >= -1)
	{
		if (iVar0 == iLocal_2913)
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

void func_284(struct<3> Param0, struct<3> Param3, float fParam6)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (!bLocal_87)
	{
		if (!func_285(Param0, Param3, fParam6, 200f))
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

int func_285(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7)
{
	if (!unk_0x29AFA2493D7C23D0())
	{
		if (!bLocal_87)
		{
			if (!iLocal_74)
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

float func_286(int iParam0)
{
	var uVar0;
	
	unk_0x995DCDA796A47049(iParam0, &cLocal_2667);
	while (!unk_0x498998F33897432E(iParam0, &cLocal_2667))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	uVar0 = unk_0x60D934BFDF90E0F0(iParam0, &cLocal_2667);
	unk_0x4855165A2773595C(iParam0, &cLocal_2667);
	return uVar0;
}

int func_287(int iParam0)
{
	if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("polmav")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff"))
	{
		return 1;
	}
	return 0;
}

void func_288(int iParam0)
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
		iVar0 = iLocal_1950;
		while (iVar0 < 15)
		{
			switch (iLocal_1929[iVar0])
			{
				case 0:
					if (!iLocal_2860[iVar0] == 0)
					{
						if (unk_0x515B65C19A5CA9B1(iParam0, Local_2488[iVar0 /*3*/], fLocal_1272, fLocal_1272, fLocal_1272, 0, 1, 0))
						{
							iLocal_1952++;
							iLocal_1929[iVar0]++;
						}
					}
					else
					{
						iLocal_1929[iVar0] = 99;
					}
					break;
				
				case 1:
					if (6 > iLocal_1947)
					{
						if (!unk_0x86CCCD2FAE9D5E65(iLocal_3104[iVar0]))
						{
							unk_0x32A12757CBF48A33(iLocal_2860[iVar0]);
							if (unk_0x33ACB874CECA2D4B(iLocal_2860[iVar0]))
							{
								if ((iLocal_74 || iLocal_88) || (!bLocal_105 && !func_285(Local_2488[iVar0 /*3*/], Var1, 5f, fLocal_1285)))
								{
									if (bLocal_84)
									{
										func_284(Local_2488[iVar0 /*3*/], Var1, fLocal_1278);
									}
									iLocal_3104[iVar0] = unk_0xE00F8DEA9778FC87(iLocal_2860[iVar0], Local_2488[iVar0 /*3*/], 0f, 0, 0);
									if (iLocal_2860[iVar0] == joaat("polmav"))
									{
										unk_0x24F85A008ECA63FB(iLocal_3104[iVar0], 0);
									}
									unk_0x5D6F89F6DD9B0781(iLocal_3104[iVar0], fLocal_1208[iVar0], fLocal_1224[iVar0], fLocal_1240[iVar0], fLocal_1256[iVar0]);
									unk_0x887F4488DA99FD21(iLocal_2860[iVar0]);
									if (unk_0xCC6B00B8460CDA0E(iLocal_3104[iVar0], func_177()))
									{
										unk_0x6A8A78C1DAEC9CEB(iLocal_3104[iVar0], 1);
										if (!unk_0xC5ABD699DDC9D5A0(iLocal_2860[iVar0]))
										{
											unk_0x466892F4AAB03B4B(iLocal_3104[iVar0], 1);
										}
									}
									if (unk_0xCC6B00B8460CDA0E(iLocal_3104[iVar0], func_178()))
									{
										unk_0xFD021BAF9614D437(iLocal_3104[iVar0], 0, 0);
									}
									unk_0xEA89E72C99125D9C(iLocal_3104[iVar0], 1);
									iLocal_1952 = (iLocal_1952 - 1);
									iLocal_1947++;
									iLocal_1929[iVar0]++;
									bLocal_105 = true;
								}
							}
						}
						else
						{
							iLocal_1952 = (iLocal_1952 - 1);
							iLocal_1947++;
							iLocal_1929[iVar0]++;
						}
					}
					break;
				
				case 2:
					if (!bVar7)
					{
						if (unk_0x7404950238A154C2(iLocal_3104[iVar0], 0))
						{
							Var4 = { unk_0xB6AE0DAE06D56288(iLocal_3104[iVar0], 1) };
						}
						if (fLocal_1286 == 0f || unk_0xB7A628320EFF8E47(Var1, Var4) < (fLocal_1286 * fLocal_1286))
						{
							if (!func_277(iLocal_3104[iVar0], iParam0, 0))
							{
								if (!bLocal_76)
								{
									func_172(iLocal_3104[iVar0]);
								}
								else
								{
									unk_0x5D00E836B6BE8693(&(iLocal_3104[iVar0]));
								}
								iLocal_1947 = (iLocal_1947 - 1);
								iLocal_1929[iVar0] = 99;
								bVar7 = true;
							}
						}
					}
					break;
			}
			if (iLocal_1929[iVar0] != 99)
			{
				if (!bVar8)
				{
					iLocal_1950 = iVar0;
					bVar8 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_174();
	}
}

void func_289(int iParam0, float fParam1, int iParam2)
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
			fLocal_1274 = unk_0x678BA9CA7610A13E(iParam0);
		}
		iVar22 = -1;
		bVar23 = false;
		bVar24 = false;
		iVar0 = iLocal_1949;
		while (iVar0 < 175 && !bVar23)
		{
			if (iLocal_1469[iVar0] != 99)
			{
				if (iLocal_1469[iVar0] == 0)
				{
					if (iLocal_1293[iVar0] > 0 && iLocal_2684[iVar0] != 0)
					{
						if (!iLocal_74)
						{
							if (fLocal_1274 < (fLocal_812[iVar0] + 20000f))
							{
								if (fLocal_1274 >= (fLocal_812[iVar0] - (7000f * fParam1)))
								{
									if (func_287(iLocal_2684[iVar0]))
									{
										unk_0xF3148AAF69AF9CBC(&(iLocal_1645[iVar0]), 0);
									}
									else if (unk_0xC5ABD699DDC9D5A0(iLocal_2684[iVar0]))
									{
										unk_0xF3148AAF69AF9CBC(&(iLocal_1645[iVar0]), 2);
									}
									unk_0xC69E84EBBD7166E6(&(iLocal_1645[iVar0]), 1);
									iLocal_1954++;
									iLocal_1469[iVar0]++;
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
								func_291(iVar0, 1090519040);
							}
						}
						else
						{
							fVar15 = (fLocal_1274 - fLocal_812[iVar0]);
							if (fVar15 >= 0f)
							{
								if (fVar15 < func_286(iLocal_1293[iVar0]))
								{
									if (func_287(iLocal_2684[iVar0]))
									{
										unk_0xF3148AAF69AF9CBC(&(iLocal_1645[iVar0]), 0);
									}
									else if (unk_0xC5ABD699DDC9D5A0(iLocal_2684[iVar0]))
									{
										unk_0xF3148AAF69AF9CBC(&(iLocal_1645[iVar0]), 2);
									}
									unk_0xC69E84EBBD7166E6(&(iLocal_1645[iVar0]), 1);
									iLocal_1954++;
									iLocal_1469[iVar0]++;
								}
								else
								{
									func_291(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_291(iVar0, 1090519040);
					}
				}
				else if (iLocal_1469[iVar0] == 1)
				{
					unk_0x995DCDA796A47049(iLocal_1293[iVar0], &cLocal_2667);
					bVar17 = false;
					if (unk_0x236D8AD7EE179F46(iLocal_1645[iVar0], 0))
					{
						unk_0x32A12757CBF48A33(func_176());
						if (unk_0x33ACB874CECA2D4B(func_176()))
						{
							bVar17 = true;
						}
					}
					else if (!bLocal_101 && ((!unk_0x236D8AD7EE179F46(iLocal_1645[iVar0], 2) && uVar19) || (unk_0x236D8AD7EE179F46(iLocal_1645[iVar0], 2) && uVar20)))
					{
						bVar17 = true;
					}
					else
					{
						unk_0x32A12757CBF48A33(func_179());
						bVar17 = unk_0x33ACB874CECA2D4B(func_179());
					}
					if (!unk_0x86CCCD2FAE9D5E65(iLocal_2915[iVar0]))
					{
						unk_0x32A12757CBF48A33(iLocal_2684[iVar0]);
						if ((unk_0x33ACB874CECA2D4B(iLocal_2684[iVar0]) && unk_0x498998F33897432E(iLocal_1293[iVar0], &cLocal_2667)) && bVar17)
						{
							if (fLocal_1274 >= (fLocal_812[iVar0] - (fLocal_1287 * fParam1)))
							{
								if ((iLocal_88 || iParam2) || (!bLocal_105 && !func_285(Local_1962[iVar0 /*3*/], Var12, 5f, fLocal_1285)))
								{
									if (bLocal_84)
									{
										func_284(Local_1962[iVar0 /*3*/], Var12, fLocal_1278);
									}
									iLocal_2915[iVar0] = unk_0xE00F8DEA9778FC87(iLocal_2684[iVar0], Local_1962[iVar0 /*3*/], 0f, 0, 0);
									if (iLocal_2684[iVar0] == joaat("polmav"))
									{
										unk_0x24F85A008ECA63FB(iLocal_2915[iVar0], 0);
									}
									if (uLocal_97 && !unk_0x236D8AD7EE179F46(iLocal_1645[iVar0], 0))
									{
										func_283(iLocal_2915[iVar0]);
									}
									unk_0xB901CB880393ADF7(iLocal_2915[iVar0], Local_1962[iVar0 /*3*/], 0, 0, 1);
									unk_0x5D6F89F6DD9B0781(iLocal_2915[iVar0], fLocal_108[iVar0], fLocal_284[iVar0], fLocal_460[iVar0], fLocal_636[iVar0]);
									if (unk_0x61A26017817C6AED(iLocal_2684[iVar0]) || unk_0xC5ABD699DDC9D5A0(iLocal_2684[iVar0]))
									{
										unk_0x5CC9D6711FE01F0D(iLocal_2915[iVar0]);
									}
									if (unk_0x236D8AD7EE179F46(iLocal_1645[iVar0], 3))
									{
										unk_0xEA89E72C99125D9C(iLocal_2915[iVar0], 1);
									}
									if (!unk_0x236D8AD7EE179F46(iLocal_1645[iVar0], 0))
									{
										unk_0x686D6CDC14C4BA6C(iLocal_2915[iVar0], 1, 1);
										if (unk_0x0C937048CF6952B5() > 19 || unk_0x0C937048CF6952B5() < 7)
										{
											unk_0x69AA788B6BA4CB68(iLocal_2915[iVar0], 3);
										}
									}
									unk_0xA8F22633ACC22189(iLocal_2915[iVar0], 1);
									unk_0x4351E8D40CE67994(iLocal_2915[iVar0], 1);
									unk_0x887F4488DA99FD21(iLocal_2684[iVar0]);
									iLocal_1954 = (iLocal_1954 - 1);
									iLocal_1469[iVar0]++;
									bLocal_105 = true;
								}
								else if (fLocal_1274 > fLocal_812[iVar0])
								{
									iLocal_1954 = (iLocal_1954 - 1);
									func_291(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_1469[iVar0] == 2)
				{
					bVar17 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_1960 || iLocal_1960 == 0)) || iLocal_88) || iParam2)
					{
						if (!unk_0x236D8AD7EE179F46(iLocal_1645[iVar0], 1))
						{
							if (unk_0x236D8AD7EE179F46(iLocal_1645[iVar0], 0))
							{
								unk_0x32A12757CBF48A33(func_176());
								bVar17 = unk_0x33ACB874CECA2D4B(func_176());
								iVar21 = 2;
							}
							else if (!bLocal_101 && ((!unk_0x236D8AD7EE179F46(iLocal_1645[iVar0], 2) && uVar19) || (unk_0x236D8AD7EE179F46(iLocal_1645[iVar0], 2) && uVar20)))
							{
								bVar17 = true;
								iVar21 = 1;
							}
							else
							{
								unk_0x32A12757CBF48A33(func_179());
								bVar17 = unk_0x33ACB874CECA2D4B(func_179());
								iVar21 = 0;
							}
							if (!unk_0x930F8FBB8E9537CC(iLocal_2915[iVar0]))
							{
								if (!bLocal_105 && unk_0xBEB00EB4ADDC2A33(iLocal_2915[iVar0], -1))
								{
									if (bVar17)
									{
										if ((unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(iLocal_2915[iVar0], 1), Var12) < 10000f || iParam2) || iLocal_88)
										{
											func_281(&(iLocal_2915[iVar0]), iVar21, 0);
											unk_0xF3148AAF69AF9CBC(&(iLocal_1645[iVar0]), 1);
										}
									}
								}
							}
						}
						if (unk_0x7404950238A154C2(iLocal_2915[iVar0], 0))
						{
							unk_0x995DCDA796A47049(iLocal_1293[iVar0], &cLocal_2667);
							if (fLocal_1274 >= fLocal_812[iVar0])
							{
								if (12 > iLocal_1945)
								{
									fVar15 = (fLocal_1274 - fLocal_812[iVar0]);
									if (unk_0x498998F33897432E(iLocal_1293[iVar0], &cLocal_2667))
									{
										if (fVar15 < unk_0x60D934BFDF90E0F0(iLocal_1293[iVar0], &cLocal_2667))
										{
											Var6 = { unk_0xB6AE0DAE06D56288(iLocal_2915[iVar0], 1) };
											Var9 = { unk_0xD0CC9D77E98DFF73(iLocal_1293[iVar0], fVar15, &cLocal_2667) };
											if (!func_285(Var6, Var12, 5f, fLocal_1285) && func_285(Var9, Var12, 5f, fLocal_1285))
											{
												if (!unk_0x236D8AD7EE179F46(iLocal_1645[iVar0], 1))
												{
													func_281(&(iLocal_2915[iVar0]), iVar21, 0);
												}
												func_291(iVar0, 1090519040);
											}
											else if (((!bLocal_105 || unk_0x236D8AD7EE179F46(iLocal_1645[iVar0], 1)) || iLocal_88) || iParam2)
											{
												if (func_274(&(iLocal_2915[iVar0]), iLocal_1293[iVar0], fVar15, 1, 0, 0, 1, bLocal_102))
												{
													if (!unk_0x236D8AD7EE179F46(iLocal_1645[iVar0], 1))
													{
														func_281(&(iLocal_2915[iVar0]), iVar21, 0);
													}
													unk_0x5CEA5F12775261F2(iLocal_2915[iVar0], 1, 0);
													unk_0x1248DFEEEEE716FC(iLocal_2915[iVar0], fParam1);
													iLocal_1945++;
													iLocal_1469[iVar0]++;
												}
											}
										}
										else
										{
											if (!unk_0x236D8AD7EE179F46(iLocal_1645[iVar0], 1))
											{
												func_281(&(iLocal_2915[iVar0]), iVar21, 0);
											}
											func_291(iVar0, 1090519040);
										}
									}
									else if (fVar15 > unk_0x60D934BFDF90E0F0(iLocal_1293[iVar0], &cLocal_2667))
									{
										if (!unk_0x236D8AD7EE179F46(iLocal_1645[iVar0], 1))
										{
											func_281(&(iLocal_2915[iVar0]), iVar21, 0);
										}
										func_291(iVar0, 1090519040);
									}
								}
								else
								{
									if (!unk_0x236D8AD7EE179F46(iLocal_1645[iVar0], 1))
									{
										func_281(&(iLocal_2915[iVar0]), iVar21, 0);
									}
									func_291(iVar0, 1090519040);
								}
							}
							else if (iLocal_85 && !bLocal_93)
							{
								if (!unk_0x236D8AD7EE179F46(iLocal_1645[iVar0], 1))
								{
									func_281(&(iLocal_2915[iVar0]), iVar21, 0);
								}
								func_291(iVar0, 1090519040);
							}
						}
						else
						{
							if (!unk_0x236D8AD7EE179F46(iLocal_1645[iVar0], 1))
							{
								func_281(&(iLocal_2915[iVar0]), iVar21, 0);
							}
							func_291(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_1960 = iVar0;
					}
				}
				else if (iLocal_1469[iVar0] == 3)
				{
					if (unk_0x7404950238A154C2(iLocal_2915[iVar0], 0))
					{
						if (unk_0xE20321A2D7F8960C(iLocal_2915[iVar0]))
						{
							iVar4 = unk_0xB0B9E53CEFDB16AA(iLocal_2915[iVar0], -1);
							if (!unk_0x5FEB513A4402FD59(iVar4))
							{
								if (bVar18)
								{
									bVar24 = false;
									if (!bLocal_83)
									{
										if ((!bLocal_78 && !iLocal_75) && func_280(iLocal_2915[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_1959 || iLocal_1959 == 0))
											{
												if (!unk_0x930F8FBB8E9537CC(iVar5))
												{
													bVar17 = false;
													if (!func_290(iLocal_2915[iVar0], iVar5) || func_277(iVar5, iLocal_2915[iVar0], 0))
													{
														bVar24 = true;
													}
												}
												iLocal_1959 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_98 && !unk_0x236D8AD7EE179F46(iLocal_1645[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_1959 || iLocal_1959 == 0))
										{
											Var25 = { unk_0xFF603DE3EBE2C5F9(iParam0, unk_0xB6AE0DAE06D56288(iLocal_2915[iVar0], 1)) };
											if (Var25.f_1 < 0f)
											{
												if (unk_0xB9AA84B14E04BC20(Var25.f_1) > unk_0xB9AA84B14E04BC20(Var25.f_0))
												{
													bVar24 = true;
												}
											}
											iVar2++;
											iLocal_1959 = iVar0;
										}
									}
									if (bVar24)
									{
										func_276(iLocal_2915[iVar0]);
										iLocal_1469[iVar0]++;
									}
									else
									{
										unk_0x1248DFEEEEE716FC(iLocal_2915[iVar0], fParam1);
									}
								}
							}
							else
							{
								unk_0x05ACEF4F060B9B4E(iLocal_2915[iVar0]);
							}
						}
						else
						{
							iLocal_1469[iVar0]++;
						}
					}
					else
					{
						iLocal_1469[iVar0]++;
					}
				}
				else if (iLocal_1469[iVar0] == 4)
				{
					if (unk_0x7404950238A154C2(iLocal_2915[iVar0], 0))
					{
						if (!unk_0xE20321A2D7F8960C(iLocal_2915[iVar0]))
						{
							iLocal_1469[iVar0]++;
						}
						else
						{
							iVar4 = unk_0xB0B9E53CEFDB16AA(iLocal_2915[iVar0], -1);
							if (!unk_0x5FEB513A4402FD59(iVar4))
							{
								unk_0x1248DFEEEEE716FC(iLocal_2915[iVar0], fParam1);
							}
							else
							{
								unk_0x05ACEF4F060B9B4E(iLocal_2915[iVar0]);
							}
							if (unk_0x498998F33897432E(iLocal_1293[iVar0], &cLocal_2667))
							{
								if (fLocal_1274 > (fLocal_812[iVar0] + unk_0x60D934BFDF90E0F0(iLocal_1293[iVar0], &cLocal_2667)))
								{
									unk_0x05ACEF4F060B9B4E(iLocal_2915[iVar0]);
								}
							}
							else
							{
								unk_0x05ACEF4F060B9B4E(iLocal_2915[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1469[iVar0]++;
					}
				}
				else if (iLocal_1469[iVar0] == 5)
				{
					if (!unk_0x930F8FBB8E9537CC(iLocal_2915[iVar0]))
					{
						fVar16 = unk_0xA04824262F150982(iLocal_2915[iVar0]);
					}
					iLocal_1945 = (iLocal_1945 - 1);
					func_291(iVar0, fVar16);
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
			iLocal_1949 = iVar22;
		}
		if (iVar2 < 3)
		{
			iLocal_1959 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_1960 = 0;
		}
	}
	else
	{
		func_175();
	}
}

int func_290(int iParam0, int iParam1)
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
	fVar6 = func_278(Var0, Var3);
	if (fVar6 < 0f)
	{
		return 0;
	}
	return 1;
}

void func_291(int iParam0, float fParam1)
{
	int iVar0;
	
	if (!iLocal_2684[iParam0] == 0)
	{
		unk_0x887F4488DA99FD21(iLocal_2684[iParam0]);
	}
	if (!unk_0x930F8FBB8E9537CC(iLocal_2915[iParam0]))
	{
		unk_0x5CEA5F12775261F2(iLocal_2915[iParam0], 1, 0);
		unk_0xA8F22633ACC22189(iLocal_2915[iParam0], 0);
		iVar0 = unk_0xB0B9E53CEFDB16AA(iLocal_2915[iParam0], -1);
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
			unk_0x31F198965149F7F4(iVar0, iLocal_2915[iParam0], 0, 1, fParam1, 786603, 5f, 5f, 1);
			unk_0x7F5F0D37173E518C(iVar0, 8192, 1);
			if (bLocal_107)
			{
				unk_0x7F5F0D37173E518C(iVar0, 65536, 1);
				unk_0x7F5F0D37173E518C(iVar0, 2, 0);
			}
			unk_0x4B9FA68A3AC8C29D(iVar0, 6, 0);
			unk_0xB8BE32B6C4B45732(iVar0, fParam1);
		}
	}
	if (!bLocal_76)
	{
		if (!bLocal_104)
		{
			func_282(iVar0);
			func_172(iLocal_2915[iParam0]);
		}
	}
	else
	{
		if (unk_0x86CCCD2FAE9D5E65(iVar0))
		{
			unk_0xF210D34D7F7152ED(&iVar0);
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_2915[iParam0]))
		{
			unk_0x5D00E836B6BE8693(&(iLocal_2915[iParam0]));
		}
	}
	if (!bLocal_86 && !bLocal_99)
	{
		if (iLocal_1293[iParam0] > 0)
		{
			unk_0x4855165A2773595C(iLocal_1293[iParam0], &cLocal_2667);
		}
	}
	iLocal_1469[iParam0] = 99;
}

void func_292(int iParam0, float fParam1, float fParam2)
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
			func_284(Var1, Var10, fVar13);
		}
	}
}

void func_293(int iParam0, float fParam1)
{
	if (!bLocal_87)
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

void func_294(int iParam0, float fParam1)
{
	if (!bLocal_87)
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

void func_295(int iParam0, float fParam1)
{
	var uVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	
	if (!unk_0x930F8FBB8E9537CC(iParam0) && unk_0xE20321A2D7F8960C(iParam0))
	{
		fVar1 = (fLocal_1288 + 2000f);
		fVar2 = (fLocal_1289 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			uVar0 = unk_0x579D32FAAD5CA6B8(iParam0);
			if (fVar1 <= unk_0x9061C733DD63AF79(uVar0))
			{
				if (iLocal_1955 == 0)
				{
					Local_2655 = { unk_0x13F97659039A0D0E(uVar0, fLocal_1288) };
					iLocal_1955++;
				}
				else if (iLocal_1955 == 1)
				{
					Local_2658 = { unk_0x13F97659039A0D0E(iVar0, fVar1) };
					iLocal_1955++;
				}
				else if (!bLocal_105)
				{
					if (Local_2655.f_0 > Local_2658.f_0)
					{
						fVar3 = Local_2655.f_0;
						Local_2655.f_0 = Local_2658.f_0;
						Local_2658.f_0 = fVar3;
					}
					if (Local_2655.f_1 > Local_2658.f_1)
					{
						fVar3 = Local_2655.f_1;
						Local_2655.f_1 = Local_2658.f_1;
						Local_2658.f_1 = fVar3;
					}
					if (Local_2655.f_2 > Local_2658.f_2)
					{
						fVar3 = Local_2655.f_2;
						Local_2655.f_2 = Local_2658.f_2;
						Local_2658.f_2 = fVar3;
					}
					Local_2655 = { Local_2655 - Vector(fLocal_1292, fLocal_1292, fLocal_1292) };
					Local_2658 = { Local_2658 + Vector(fLocal_1292, fLocal_1292, fLocal_1292) };
					unk_0xEB1F3AEB071C6A9E(Local_2655, Local_2658, 0, 0);
					fLocal_1288 = fVar1;
					iLocal_1955 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			iVar0 = unk_0x579D32FAAD5CA6B8(iParam0);
			if (iLocal_1958 == 0)
			{
				Local_2661 = { unk_0x13F97659039A0D0E(iVar0, fLocal_1289) };
				iLocal_1958++;
			}
			else if (iLocal_1958 == 1)
			{
				Local_2664 = { unk_0x13F97659039A0D0E(iVar0, fVar2) };
				iLocal_1958++;
			}
			else if (!bLocal_105 && !bVar4)
			{
				if (Local_2661.f_0 > Local_2664.f_0)
				{
					fVar3 = Local_2661.f_0;
					Local_2661.f_0 = Local_2664.f_0;
					Local_2664.f_0 = fVar3;
				}
				if (Local_2661.f_1 > Local_2664.f_1)
				{
					fVar3 = Local_2661.f_1;
					Local_2661.f_1 = Local_2664.f_1;
					Local_2664.f_1 = fVar3;
				}
				if (Local_2661.f_2 > Local_2664.f_2)
				{
					fVar3 = Local_2661.f_2;
					Local_2661.f_2 = Local_2664.f_2;
					Local_2664.f_2 = fVar3;
				}
				Local_2661 = { Local_2661 - Vector(fLocal_1292, fLocal_1292, fLocal_1292) };
				Local_2664 = { Local_2664 + Vector(fLocal_1292, fLocal_1292, fLocal_1292) };
				unk_0xFEA6E2B6E5CAFC2E(Local_2661, Local_2664, 1);
				fLocal_1289 = fVar2;
				iLocal_1958 = 0;
			}
		}
	}
}

int func_296(int iParam0, int iParam1)
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
	fVar15 = func_278(Var9, Var12);
	if (fVar15 < 0f)
	{
		return 1;
	}
	return 0;
}

void func_297()
{
	unk_0x3DD1ED742E99F292(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, 0, 1);
	unk_0x24E17EE0B44D9A19(0);
	unk_0x14EDFFB16F85839D(0);
	unk_0x9897700A81F3DE35(0);
	unk_0xCDE668E40D482687(0f);
	unk_0xB740337582B8FF04(0);
	unk_0xAFFB324194E5B6B2(3);
}

void func_298(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, bool bParam10)
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
	
	if (iLocal_90 == 0)
	{
		if (*fParam2 < fParam3)
		{
			*fParam2 = fParam3;
			iLocal_90 = 1;
		}
	}
	if (fParam8 < 0f)
	{
		fParam8 = fLocal_1283;
	}
	fVar0 = (fParam3 * fParam7);
	if (!fVar0 > fParam3)
	{
		fVar0 = (fParam3 + 0.1f);
	}
	fVar5 = (fParam3 * fParam9);
	fVar6 = (((fParam6 - fParam5) * 0.4f) + fParam5);
	fVar2 = func_301(iParam0, iParam1);
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
		if (func_296(iParam1, iParam0))
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
			if (func_300(iParam0, iParam1) < fParam5)
			{
				fVar1 = func_299(iParam0, iParam1);
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
			iLocal_91 = 1;
		}
		else if (iLocal_91)
		{
			if (fVar2 < fVar6)
			{
				fVar4 = fParam3;
				iLocal_91 = 0;
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
	fVar1 = (fVar4 - *fParam2);
	if (fVar1 > 0f)
	{
		fVar1 = unk_0x8D51D24D214E2FF2();
		fVar8 = ((fLocal_1290 * fParam3) * fVar1);
		fVar1 = (fVar4 - *fParam2);
		if (fVar1 > fVar8)
		{
			fVar1 = fVar8;
		}
		*fParam2 = (*fParam2 + fVar1);
	}
	else
	{
		fVar1 = unk_0x8D51D24D214E2FF2();
		fVar8 = ((fLocal_1291 * fParam3) * fVar1);
		fVar1 = (fVar4 - *fParam2);
		if (fVar1 < (fVar8 * -1f))
		{
			fVar1 = (fVar8 * -1f);
		}
		*fParam2 = (*fParam2 + fVar1);
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
							fVar1 = (fVar1 * (fLocal_1281 - fLocal_1282));
							fVar1 = (fVar1 + fLocal_1282);
							fLocal_1280 = fVar1;
							if (fLocal_1280 < fLocal_1282)
							{
								fLocal_1280 = fLocal_1282;
							}
							if (fLocal_1280 > fLocal_1281)
							{
								fLocal_1280 = fLocal_1281;
							}
							unk_0x81DD7930F7EBF531(unk_0x1329891157A54C63(), fLocal_1280);
						}
					}
				}
			}
		}
	}
}

var func_299(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	var uVar12;
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
	uVar12 = unk_0x340B0B7228EC1565(Var0.f_0, Var0.f_1, Var9.f_0, Var9.f_1);
	return uVar12;
}

float func_300(int iParam0, int iParam1)
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

float func_301(int iParam0, int iParam1)
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

int func_302()
{
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
	{
		if (unk_0x7404950238A154C2(iLocal_3257, 0))
		{
			if (!unk_0x331E7ACCFD0869AD(iLocal_3257))
			{
				iLocal_3402 = 1;
			}
			else
			{
				iLocal_3402 = 0;
			}
		}
		else
		{
			iLocal_3402 = 1;
		}
	}
	else
	{
		iLocal_3402 = 1;
	}
	iLocal_3189 = 0;
	while (iLocal_3189 <= 24)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[iLocal_3189]))
		{
			if (unk_0x7404950238A154C2(iLocal_3120[iLocal_3189], 0))
			{
				if (!unk_0x331E7ACCFD0869AD(iLocal_3120[iLocal_3189]))
				{
					iLocal_3403[iLocal_3189] = 1;
				}
				else
				{
					iLocal_3403[iLocal_3189] = 0;
				}
			}
			else
			{
				iLocal_3403[iLocal_3189] = 1;
			}
		}
		else
		{
			iLocal_3403[iLocal_3189] = 1;
		}
		iLocal_3189++;
	}
	if (((((((((((((((((((((((((iLocal_3402 == 1 && iLocal_3403[0] == 1) && iLocal_3403[1] == 1) && iLocal_3403[2] == 1) && iLocal_3403[3] == 1) && iLocal_3403[4] == 1) && iLocal_3403[5] == 1) && iLocal_3403[6] == 1) && iLocal_3403[7] == 1) && iLocal_3403[8] == 1) && iLocal_3403[9] == 1) && iLocal_3403[10] == 1) && iLocal_3403[11] == 1) && iLocal_3403[12] == 1) && iLocal_3403[13] == 1) && iLocal_3403[14] == 1) && iLocal_3403[15] == 1) && iLocal_3403[16] == 1) && iLocal_3403[17] == 1) && iLocal_3403[18] == 1) && iLocal_3403[19] == 1) && iLocal_3403[20] == 1) && iLocal_3403[21] == 1) && iLocal_3403[22] == 1) && iLocal_3403[23] == 1) && iLocal_3403[24] == 1)
	{
		return 1;
	}
	return 0;
}

void func_303()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[4]))
	{
		if (unk_0x7404950238A154C2(iLocal_3120[4], 0))
		{
			if (unk_0xE20321A2D7F8960C(iLocal_3120[4]))
			{
				Local_3302 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
				Var3 = { unk_0xB6AE0DAE06D56288(iLocal_3120[4], 1) };
				if (Local_3302.f_0 < (Var3.f_0 - 10f) && !unk_0x331E7ACCFD0869AD(iLocal_3120[4]))
				{
					unk_0x05ACEF4F060B9B4E(iLocal_3120[4]);
					unk_0xE0913C01F5C0CC3D(&(iLocal_3120[4]));
				}
			}
		}
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[3]))
	{
		if (unk_0x7404950238A154C2(iLocal_3120[3], 0))
		{
			if (unk_0xE20321A2D7F8960C(iLocal_3120[3]))
			{
				Local_3302 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
				Var0 = { unk_0xB6AE0DAE06D56288(iLocal_3120[3], 1) };
				if (Local_3302.f_0 < (Var0.f_0 - 10f) && !unk_0x331E7ACCFD0869AD(iLocal_3120[3]))
				{
					unk_0x05ACEF4F060B9B4E(iLocal_3120[3]);
					unk_0xE0913C01F5C0CC3D(&(iLocal_3120[3]));
				}
			}
		}
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[21]))
	{
		if (unk_0x7404950238A154C2(iLocal_3120[21], 0))
		{
			if (unk_0xE20321A2D7F8960C(iLocal_3120[21]))
			{
				Local_3302 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
				Var6 = { unk_0xB6AE0DAE06D56288(iLocal_3120[21], 1) };
				if (Local_3302.f_0 < (Var6.f_0 - 10f) && !unk_0x331E7ACCFD0869AD(iLocal_3120[21]))
				{
					unk_0x05ACEF4F060B9B4E(iLocal_3120[21]);
					unk_0xE0913C01F5C0CC3D(&(iLocal_3120[21]));
				}
			}
		}
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[0]))
	{
		if (unk_0x7404950238A154C2(iLocal_3120[0], 0))
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
			{
				if (unk_0x7404950238A154C2(iLocal_3257, 0))
				{
					if (unk_0xE20321A2D7F8960C(iLocal_3257))
					{
						if (unk_0x678BA9CA7610A13E(iLocal_3257) > 50000f && !unk_0x331E7ACCFD0869AD(iLocal_3120[0]))
						{
							if (unk_0xE20321A2D7F8960C(iLocal_3120[0]))
							{
								unk_0x05ACEF4F060B9B4E(iLocal_3120[0]);
							}
							unk_0xE0913C01F5C0CC3D(&(iLocal_3120[0]));
						}
					}
				}
			}
		}
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3263))
	{
		if (unk_0x7404950238A154C2(iLocal_3263, 0))
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
			{
				if (unk_0x7404950238A154C2(iLocal_3257, 0))
				{
					if (unk_0xE20321A2D7F8960C(iLocal_3257))
					{
						if (unk_0x678BA9CA7610A13E(iLocal_3257) > 90000f && !unk_0x331E7ACCFD0869AD(iLocal_3263))
						{
							unk_0xA080515881A08702(uLocal_3754[0], 0);
							unk_0xA080515881A08702(uLocal_3754[1], 0);
							unk_0xA080515881A08702(uLocal_3754[2], 0);
							if (unk_0x86CCCD2FAE9D5E65(iLocal_3222[0]))
							{
								unk_0x71A8BCA218722FA1(&(iLocal_3222[0]));
							}
							if (unk_0x86CCCD2FAE9D5E65(iLocal_3222[1]))
							{
								unk_0x71A8BCA218722FA1(&(iLocal_3222[1]));
							}
							if (unk_0x86CCCD2FAE9D5E65(iLocal_3222[2]))
							{
								unk_0x71A8BCA218722FA1(&(iLocal_3222[2]));
							}
							if (unk_0x86CCCD2FAE9D5E65(iLocal_3222[3]))
							{
								unk_0x71A8BCA218722FA1(&(iLocal_3222[3]));
							}
							unk_0xE0913C01F5C0CC3D(&iLocal_3263);
							unk_0xD8323B49BAE93D80("missheist_agency3aig_lift_waitped_a");
						}
					}
				}
			}
		}
	}
}

void func_304(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)
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

void func_305()
{
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[2]))
	{
		if (unk_0x7404950238A154C2(iLocal_3120[2], 0))
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
			{
				if (unk_0x7404950238A154C2(iLocal_3257, 0))
				{
					if (unk_0xE20321A2D7F8960C(iLocal_3257))
					{
						if (unk_0x678BA9CA7610A13E(iLocal_3257) < 50530f)
						{
							if (!unk_0x5B7A5D69AB3A14D6(iLocal_3120[2]))
							{
								unk_0x686D6CDC14C4BA6C(iLocal_3120[2], 1, 1);
							}
						}
						else if (unk_0x5B7A5D69AB3A14D6(iLocal_3120[2]))
						{
							unk_0x686D6CDC14C4BA6C(iLocal_3120[2], 0, 0);
						}
					}
				}
			}
		}
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[5]))
	{
		if (unk_0x7404950238A154C2(iLocal_3120[5], 0))
		{
			if (!unk_0x5B7A5D69AB3A14D6(iLocal_3120[5]))
			{
				unk_0x686D6CDC14C4BA6C(iLocal_3120[5], 1, 1);
			}
		}
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3259[0]))
	{
		if (unk_0x7404950238A154C2(iLocal_3259[0], 0))
		{
			if (!unk_0x5B7A5D69AB3A14D6(iLocal_3259[0]))
			{
				unk_0x686D6CDC14C4BA6C(iLocal_3259[0], 1, 1);
			}
			if (unk_0xBEB00EB4ADDC2A33(iLocal_3259[0], -1))
			{
				if (!unk_0x86CCCD2FAE9D5E65(iLocal_3253[0]))
				{
					unk_0x32A12757CBF48A33(joaat("s_m_m_gentransport"));
					if (unk_0x33ACB874CECA2D4B(joaat("s_m_m_gentransport")))
					{
						iLocal_3253[0] = unk_0x4D135F3066A9BF9C(iLocal_3259[0], 26, joaat("s_m_m_gentransport"), -1, 1, 1);
						unk_0x887F4488DA99FD21(joaat("s_m_m_gentransport"));
					}
				}
			}
		}
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3259[1]))
	{
		if (unk_0x7404950238A154C2(iLocal_3259[1], 0))
		{
			if (!unk_0x5B7A5D69AB3A14D6(iLocal_3259[1]))
			{
				unk_0x686D6CDC14C4BA6C(iLocal_3259[1], 1, 1);
			}
			if (unk_0xBEB00EB4ADDC2A33(iLocal_3259[1], -1))
			{
				if (!unk_0x86CCCD2FAE9D5E65(iLocal_3253[1]))
				{
					unk_0x32A12757CBF48A33(joaat("s_m_m_gentransport"));
					if (unk_0x33ACB874CECA2D4B(joaat("s_m_m_gentransport")))
					{
						iLocal_3253[1] = unk_0x4D135F3066A9BF9C(iLocal_3259[1], 26, joaat("s_m_m_gentransport"), -1, 1, 1);
						unk_0x887F4488DA99FD21(joaat("s_m_m_gentransport"));
					}
				}
			}
		}
	}
}

void func_306()
{
	if (iLocal_3180 == 0)
	{
		unk_0x9D2B95F4020E5347("SCRIPT\Trv_4_747_Cop_Cars", 0);
		unk_0x9D2B95F4020E5347("SCRIPT\Trv_4_747_Plane_Explosion", 0);
		unk_0x9D2B95F4020E5347("SCRIPT\Trv_4_747_Tanker_Explosion", 0);
		unk_0x9D2B95F4020E5347("SCRIPT\TV_Monitors", 0);
		if (iLocal_3391 == 0)
		{
			iLocal_3212 = unk_0xEDDCCC3D357A50F8();
			iLocal_3391 = 1;
		}
		if (iLocal_3392 == 0)
		{
			iLocal_3213 = unk_0xEDDCCC3D357A50F8();
			iLocal_3392 = 1;
		}
		if (iLocal_3393 == 0)
		{
			iLocal_3214 = unk_0xEDDCCC3D357A50F8();
			iLocal_3393 = 1;
		}
		if (iLocal_3394 == 0)
		{
			iLocal_3215 = unk_0xEDDCCC3D357A50F8();
			iLocal_3394 = 1;
		}
		if (iLocal_3395 == 0)
		{
			iLocal_3216 = unk_0xEDDCCC3D357A50F8();
			iLocal_3395 = 1;
		}
		if (iLocal_3390 == 0)
		{
			iLocal_3217 = unk_0xEDDCCC3D357A50F8();
			iLocal_3390 = 1;
		}
		if (iLocal_3396 == 0)
		{
			iLocal_3218 = unk_0xEDDCCC3D357A50F8();
			iLocal_3396 = 1;
		}
		if (iLocal_3344 == 1)
		{
			func_104();
			iLocal_3344 = 0;
		}
		if (!unk_0x42E36F2D658EB2FF(uLocal_3288))
		{
			uLocal_3288 = unk_0xAAC4D4F273757469("DEFAULT_SCRIPTED_CAMERA", 1);
			unk_0xBF1C17EB7F681E53(uLocal_3288, 40f);
		}
		iLocal_3342 = 0;
		iLocal_3336 = 0;
		iLocal_3348 = 0;
		iLocal_3332 = 0;
		iLocal_3327 = 0;
		iLocal_3333 = 0;
		iLocal_3326 = 0;
		iLocal_3362 = 0;
		iLocal_3364[0] = 0;
		iLocal_3368[0] = 0;
		iLocal_3364[1] = 0;
		iLocal_3368[1] = 0;
		iLocal_3364[2] = 0;
		iLocal_3371 = 0;
		iLocal_3372 = 0;
		iLocal_3330 = 0;
		iLocal_3331 = 0;
		iLocal_3329 = 0;
		iLocal_3376 = 0;
		iLocal_3379 = 0;
		iLocal_3380 = 0;
		iLocal_3381 = 0;
		iLocal_3383 = 0;
		iLocal_3382 = 0;
		iLocal_3384 = 0;
		iLocal_3385 = 0;
		iLocal_3386 = 0;
		iLocal_3387 = 0;
		iLocal_3388 = 0;
		iLocal_3389 = 0;
		iLocal_3397 = 0;
		iLocal_3398 = 0;
		iLocal_3400 = 0;
		iLocal_3401 = 0;
		iLocal_3433 = 0;
		iLocal_3434 = 0;
		iLocal_3550 = 0;
		iLocal_3350 = 1;
		iLocal_3351 = 1;
		iLocal_3359 = 1;
		iLocal_3439 = 0;
		iLocal_3440 = 0;
		iLocal_3465 = 0;
		iLocal_3467 = 0;
		iLocal_3474 = 0;
		iLocal_3475 = 0;
		iLocal_3477 = 0;
		iLocal_3479[0] = 0;
		iLocal_3479[1] = 0;
		iLocal_3482[0] = 0;
		iLocal_3482[1] = 0;
		iLocal_3485 = 0;
		iLocal_3486 = 0;
		iLocal_3488 = 0;
		iLocal_3507 = 0;
		iLocal_3508 = 0;
		iLocal_3509 = 0;
		iLocal_3539 = 0;
		iLocal_3540 = 0;
		iLocal_3551 = 0;
		iLocal_3184 = 0;
		iLocal_3197 = 0;
		iLocal_3188 = 0;
		while (iLocal_3188 <= 2)
		{
			iLocal_3542[iLocal_3188] = 0;
			iLocal_3546[iLocal_3188] = 0;
			iLocal_3188++;
		}
		iLocal_3188 = 0;
		while (iLocal_3188 <= 2)
		{
			iLocal_3570[iLocal_3188] = 0;
			iLocal_3188++;
		}
		iLocal_3188 = 0;
		while (iLocal_3188 <= 6)
		{
			iLocal_3489[iLocal_3188] = 0;
			iLocal_3497[iLocal_3188] = 0;
			iLocal_3188++;
		}
		unk_0x18C8823792832C78();
		iLocal_88 = 1;
		bLocal_94 = true;
		func_251();
		uLocal_3183 = unk_0x7A7AF41733D771B9();
		unk_0x7C6BF0CD5D7454C9(-823.71f, -2548.2f, 13.75f, 20f, 1, 0, 0, 0);
		unk_0x536B53396BA193B3(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f);
		unk_0xF47DE13A08D86AB8(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f, 0, 0);
		unk_0xEB1F3AEB071C6A9E(-482f, -2118f, 6f, -1072f, -2724f, 17f, 0, 1);
		func_110(2, 1);
		func_308("BB_Chase", 45, 0, 1);
		unk_0x9BAE0FF806E5C2E5(3);
		func_17(&uLocal_3577, 0, unk_0x81873881071CD9FE(), "MICHAEL", 0, 1);
		if (unk_0x29AFA2493D7C23D0())
		{
			if (!func_24())
			{
				unk_0xBCFD171E27A90624(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1));
			}
			func_21(iLocal_3258, -1, 1);
		}
		iLocal_3181 = 0;
		iLocal_3180 = 1;
	}
	if (iLocal_3180 == 1)
	{
		unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), true, 0);
		func_307();
		iLocal_3180 = 2;
	}
	if (iLocal_3180 == 2)
	{
		if (!unk_0x86CCCD2FAE9D5E65(iLocal_3270))
		{
			iLocal_3270 = unk_0xE00F8DEA9778FC87(joaat("blista"), 0f, 0f, 1f, 0f, 1, 1);
		}
		while (!unk_0x498998F33897432E(45, "BB_Chase"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		if (unk_0x29AFA2493D7C23D0())
		{
			if (unk_0x7404950238A154C2(iLocal_3258, 0))
			{
				unk_0x686D6CDC14C4BA6C(iLocal_3258, 1, 1);
				unk_0x3D24414865131CB8(iLocal_3258, 30f);
				unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), true, 0);
			}
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
		{
			if (unk_0x7404950238A154C2(iLocal_3257, 0))
			{
				unk_0xC8F62804B10A6701(iLocal_3257, 45, "BB_Chase", 1);
				unk_0x5AE11BC36633DE4E(0);
				func_234();
				unk_0xDD17978B9F91686B(2);
				if (unk_0x86CCCD2FAE9D5E65(iLocal_3258))
				{
					if (unk_0x7404950238A154C2(iLocal_3258, 0))
					{
						unk_0xE0913C01F5C0CC3D(&iLocal_3258);
					}
				}
				if (!unk_0xECDEA377354CBDA4())
				{
					unk_0xAE2B1C30F8A0B67C(800);
				}
				iLocal_3180 = 0;
				iLocal_3179 = 4;
			}
		}
	}
}

void func_307()
{
	Local_2488[0 /*3*/] = { -583.6427f, -2157.497f, 5.7947f };
	fLocal_1208[0] = -0.0003f;
	fLocal_1224[0] = -0.0085f;
	fLocal_1240[0] = 0.9998f;
	fLocal_1256[0] = 0.0158f;
	iLocal_2860[0] = joaat("blista");
	Local_1962[4 /*3*/] = { -827.2035f, -2575.697f, 13.5688f };
	fLocal_108[4] = 0.0004f;
	fLocal_284[4] = -0.0003f;
	fLocal_460[4] = -0.2526f;
	fLocal_636[4] = 0.9676f;
	iLocal_1293[4] = 50;
	fLocal_812[4] = 20310f;
	iLocal_2684[4] = joaat("manana");
	Local_2488[1 /*3*/] = { -1033.717f, -2949.014f, 13.4922f };
	fLocal_1208[1] = 0.0032f;
	fLocal_1224[1] = -0.0003f;
	fLocal_1240[1] = -0.0255f;
	fLocal_1256[1] = 0.9997f;
	iLocal_2860[1] = joaat("bison2");
	Local_2534[0 /*3*/] = { -1178.365f, -2845.981f, 13.9027f };
	fLocal_992[0] = 0.0018f;
	fLocal_1028[0] = 0.0123f;
	fLocal_1064[0] = 0.9644f;
	fLocal_1100[0] = 0.2642f;
	iLocal_1821[0] = 9;
	fLocal_1136[0] = 22357f;
	fLocal_1172[0] = 1f;
	iLocal_2876[0] = joaat("buzzard");
	Local_2534[1 /*3*/] = { -1376.197f, -2755.167f, 14.0646f };
	fLocal_992[1] = -0.0012f;
	fLocal_1028[1] = 0.0013f;
	fLocal_1064[1] = 0.8439f;
	fLocal_1100[1] = -0.5365f;
	iLocal_1821[1] = 10;
	fLocal_1136[1] = 27135f;
	fLocal_1172[1] = 1f;
	iLocal_2876[1] = joaat("packer");
	Local_2534[2 /*3*/] = { -1342.543f, -2688.482f, 22.8254f };
	fLocal_992[2] = 0.0057f;
	fLocal_1028[2] = -0.0014f;
	fLocal_1064[2] = -0.2451f;
	fLocal_1100[2] = 0.9695f;
	iLocal_1821[2] = 11;
	fLocal_1136[2] = 35135f;
	fLocal_1172[2] = 1f;
	iLocal_2876[2] = joaat("jet");
	Local_2534[3 /*3*/] = { -898.3506f, -2698.965f, 20.159f };
	fLocal_992[3] = 0.0065f;
	fLocal_1028[3] = 0.0191f;
	fLocal_1064[3] = -0.2629f;
	fLocal_1100[3] = 0.9646f;
	iLocal_1821[3] = 3;
	fLocal_1136[3] = 6764f;
	fLocal_1172[3] = 1f;
	iLocal_2876[3] = joaat("bus");
	Local_2534[4 /*3*/] = { -576.655f, -2231.905f, 5.2834f };
	fLocal_992[4] = 0.0043f;
	fLocal_1028[4] = 0.0331f;
	fLocal_1064[4] = -0.3125f;
	fLocal_1100[4] = 0.9493f;
	iLocal_1821[4] = 4;
	fLocal_1136[4] = 2102f;
	fLocal_1172[4] = 1f;
	iLocal_2876[4] = joaat("bison");
	Local_2534[5 /*3*/] = { -994.9925f, -3154.125f, 23.1145f };
	fLocal_992[5] = 0.0056f;
	fLocal_1028[5] = 0.0029f;
	fLocal_1064[5] = 0.4915f;
	fLocal_1100[5] = 0.8708f;
	iLocal_1821[5] = 21;
	fLocal_1136[5] = 92500f;
	fLocal_1172[5] = 1f;
	iLocal_2876[5] = joaat("jet");
	Local_2534[7 /*3*/] = { -553.3315f, -2073.951f, 6.8909f };
	fLocal_992[7] = 0.0072f;
	fLocal_1028[7] = 0.0176f;
	fLocal_1064[7] = 0.9739f;
	fLocal_1100[7] = -0.2263f;
	iLocal_1821[7] = 54;
	fLocal_1136[7] = 0f;
	fLocal_1172[7] = 1f;
	iLocal_2876[7] = joaat("police3");
	Local_2534[8 /*3*/] = { -561.7264f, -2076.761f, 6.7664f };
	fLocal_992[8] = -0.027f;
	fLocal_1028[8] = 0.0016f;
	fLocal_1064[8] = 0.9169f;
	fLocal_1100[8] = -0.3981f;
	iLocal_1821[8] = 108;
	fLocal_1136[8] = 150f;
	fLocal_1172[8] = 1f;
	iLocal_2876[8] = joaat("police3");
	Local_2534[11 /*3*/] = { -1563.918f, -2745.409f, 13.5643f };
	fLocal_992[11] = -0.0022f;
	fLocal_1028[11] = -0.0019f;
	fLocal_1064[11] = 0.928f;
	fLocal_1100[11] = -0.3726f;
	iLocal_1821[11] = 111;
	fLocal_1136[11] = 36000f;
	fLocal_1172[11] = 1f;
	iLocal_2876[11] = joaat("police3");
	Local_2534[12 /*3*/] = { -1026.024f, -2336.396f, 13.5678f };
	fLocal_992[12] = -0.0083f;
	fLocal_1028[12] = -0.0054f;
	fLocal_1064[12] = 0.55f;
	fLocal_1100[12] = 0.8351f;
	iLocal_1821[12] = 112;
	fLocal_1136[12] = 60000f;
	fLocal_1172[12] = 1f;
	iLocal_2876[12] = joaat("police3");
	Local_2534[13 /*3*/] = { -1013.316f, -2340.457f, 13.5678f };
	fLocal_992[13] = -0.0086f;
	fLocal_1028[13] = -0.005f;
	fLocal_1064[13] = 0.5052f;
	fLocal_1100[13] = 0.8629f;
	iLocal_1821[13] = 113;
	fLocal_1136[13] = 60000f;
	fLocal_1172[13] = 1f;
	iLocal_2876[13] = joaat("police3");
	Local_2534[14 /*3*/] = { -1221.049f, -2731.169f, 13.5681f };
	fLocal_992[14] = -0.0083f;
	fLocal_1028[14] = -0.0057f;
	fLocal_1064[14] = 0.6469f;
	fLocal_1100[14] = 0.7625f;
	iLocal_1821[14] = 61;
	fLocal_1136[14] = 80000f;
	fLocal_1172[14] = 1f;
	iLocal_2876[14] = joaat("police3");
	Local_2534[15 /*3*/] = { -1227.203f, -2735.872f, 13.568f };
	fLocal_992[15] = -0.0041f;
	fLocal_1028[15] = -0.0091f;
	fLocal_1064[15] = 0.9133f;
	fLocal_1100[15] = 0.4072f;
	iLocal_1821[15] = 62;
	fLocal_1136[15] = 80000f;
	fLocal_1172[15] = 1f;
	iLocal_2876[15] = joaat("police3");
	Local_2534[19 /*3*/] = { -1240.048f, -2203.457f, 14.0347f };
	fLocal_992[19] = 0.0002f;
	fLocal_1028[19] = 0.0018f;
	fLocal_1064[19] = 0.9611f;
	fLocal_1100[19] = -0.2763f;
	iLocal_1821[19] = 66;
	fLocal_1136[19] = 55125f;
	fLocal_1172[19] = 1f;
	iLocal_2876[19] = joaat("firetruk");
	Local_2534[20 /*3*/] = { -438.0192f, -2060.751f, 73.6354f };
	fLocal_992[20] = -0.0005f;
	fLocal_1028[20] = 0.0018f;
	fLocal_1064[20] = 0.9559f;
	fLocal_1100[20] = 0.2938f;
	iLocal_1821[20] = 67;
	fLocal_1136[20] = 0f;
	fLocal_1172[20] = 1f;
	iLocal_2876[20] = joaat("maverick");
	Local_2534[21 /*3*/] = { -546.8047f, -2187.925f, 5.8819f };
	fLocal_992[21] = -0.0252f;
	fLocal_1028[21] = -0.0034f;
	fLocal_1064[21] = 0.9369f;
	fLocal_1100[21] = 0.3487f;
	iLocal_1821[21] = 5;
	fLocal_1136[21] = 3834f;
	fLocal_1172[21] = 1f;
	iLocal_2876[21] = joaat("blista");
	Local_2534[22 /*3*/] = { -1001.674f, -2947.732f, 13.3947f };
	fLocal_992[22] = 0.001f;
	fLocal_1028[22] = -0.0004f;
	fLocal_1064[22] = 0.8616f;
	fLocal_1100[22] = 0.5075f;
	iLocal_1821[22] = 6;
	fLocal_1136[22] = 20176f;
	fLocal_1172[22] = 1f;
	iLocal_2876[22] = joaat("airtug");
	Local_2534[23 /*3*/] = { -1249.588f, -2525.9f, 13.3942f };
	fLocal_992[23] = 0.001f;
	fLocal_1028[23] = -0.0001f;
	fLocal_1064[23] = 0.9749f;
	fLocal_1100[23] = -0.2228f;
	iLocal_1821[23] = 7;
	fLocal_1136[23] = 48538f;
	fLocal_1172[23] = 1f;
	iLocal_2876[23] = joaat("airtug");
	Local_2534[24 /*3*/] = { -1362.538f, -2625.609f, 13.3895f };
	fLocal_992[24] = -0.0001f;
	fLocal_1028[24] = 0.0018f;
	fLocal_1064[24] = 0.5344f;
	fLocal_1100[24] = 0.8452f;
	iLocal_1821[24] = 8;
	fLocal_1136[24] = 75112f;
	fLocal_1172[24] = 1f;
	iLocal_2876[24] = joaat("airtug");
}

void func_308(char* sParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	
	StringCopy(&cLocal_2667, sParam0, 64);
	bLocal_84 = true;
	iLocal_89 = 0;
	iLocal_1945 = 0;
	iLocal_1946 = 0;
	iLocal_1947 = 0;
	iLocal_1948 = iParam1;
	iLocal_1949 = 0;
	iLocal_1950 = 0;
	iLocal_1951 = 0;
	iLocal_1955 = 0;
	iLocal_1958 = 0;
	iLocal_1956 = -1;
	iLocal_1957 = -1;
	iLocal_1959 = 0;
	iLocal_1960 = 0;
	fLocal_1288 = 0f;
	fLocal_1289 = 0f;
	fLocal_1274 = 0f;
	iLocal_90 = 0;
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
		Local_2643.f_0 = (Var0.f_0 - 100f);
		Local_2643.f_1 = (Var0.f_1 - 100f);
		Local_2643.f_2 = (Var0.f_2 - 100f);
		Local_2646.f_0 = (Var0.f_0 + 100f);
		Local_2646.f_1 = (Var0.f_1 + 100f);
		Local_2646.f_2 = (Var0.f_2 + 100f);
		unk_0xEB1F3AEB071C6A9E(Local_2643, Local_2646, 0, 0);
		if (bParam2)
		{
			unk_0xA450601E968044DB(Var0, 500f, 0, 0, 0, 0, 0);
		}
	}
	unk_0x4865E80F793024CE("rgh_traffic", &iLocal_2683);
	func_297();
	if (bParam3)
	{
		func_161(1);
	}
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		unk_0xD8AF255B8B5F4FB8(unk_0x1329891157A54C63(), 0);
		unk_0xA9DF4B73BBB06CE5(0);
	}
	func_166();
}

void func_309()
{
	if (iLocal_3180 == 0)
	{
		unk_0x2CEC5A597B1DFFE1(0f, 14f, 4);
		if (iLocal_3344 == 1)
		{
			func_104();
			iLocal_3344 = 0;
		}
		iLocal_3358 = 0;
		iLocal_3359 = 0;
		iLocal_3361 = 0;
		iLocal_3363 = 0;
		iLocal_3378 = 0;
		iLocal_3326 = 0;
		iLocal_3327 = 0;
		iLocal_3330 = 0;
		iLocal_3332 = 0;
		iLocal_3333 = 0;
		iLocal_3334 = 0;
		iLocal_3335 = 0;
		iLocal_3336 = 0;
		iLocal_3337 = 0;
		iLocal_3342 = 0;
		iLocal_3351 = 0;
		iLocal_3349 = 0;
		iLocal_3438 = 0;
		iLocal_3441 = 0;
		iLocal_3522 = 0;
		iLocal_3377 = 0;
		iLocal_3350 = 1;
		iLocal_3184 = 0;
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			iLocal_3360 = 1;
		}
		else
		{
			iLocal_3360 = 0;
		}
		func_17(&uLocal_3577, 0, unk_0x81873881071CD9FE(), "MICHAEL", 0, 1);
		unk_0x057B94C6D10C1119(1);
		unk_0xEB1F3AEB071C6A9E(-617f, -2274f, 0f, -406.01f, -2044f, 15f, 0, 1);
		iLocal_3187 = unk_0x48E480685981C7D4();
		if (unk_0x29AFA2493D7C23D0())
		{
			if (!func_24())
			{
				unk_0xBCFD171E27A90624(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1));
			}
			func_21(0, -1, 1);
			unk_0xE0913C01F5C0CC3D(&iLocal_3258);
			unk_0xE0913C01F5C0CC3D(&iLocal_3275);
			unk_0xE0913C01F5C0CC3D(&iLocal_3276);
		}
		if (!unk_0xECDEA377354CBDA4())
		{
			unk_0xAE2B1C30F8A0B67C(800);
		}
		if (!unk_0xFBACB273AA628CC5(uLocal_3286))
		{
			uLocal_3286 = func_314(Local_3299, 0);
		}
		unk_0x80650551CC58C784("TRV4_GAMEPLAY_START");
		Local_3317 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
		iLocal_3180 = 1;
	}
	if (iLocal_3180 == 1)
	{
		if (iLocal_3349 == 0 && iLocal_3363 == 1)
		{
			if (!func_228() || !unk_0x3EA487B1116F83F7())
			{
				func_20("TRV4_GO1", 7500, 1);
				iLocal_3349 = 1;
			}
		}
		if (iLocal_3377 == 0 && !func_313())
		{
			if (unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Local_3299, 1) < 800f)
			{
				iLocal_3186 = unk_0x2E0A9E3291F398E3(0, 2);
				if (iLocal_3186 == 0)
				{
					unk_0x82608A776F2B66C4("SCRIPTED_SCANNER_REPORT_Sol_3_01", 0f);
					unk_0x2CEC5A597B1DFFE1(0f, 6f, 3);
					iLocal_3377 = 1;
				}
				if (iLocal_3186 == 1)
				{
					unk_0x82608A776F2B66C4("SCRIPTED_SCANNER_REPORT_Sol_3_02", 0f);
					unk_0x2CEC5A597B1DFFE1(0f, 6f, 3);
					iLocal_3377 = 1;
				}
			}
		}
		if (unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Local_3299, 1) < 600f)
		{
			if (!unk_0x86CCCD2FAE9D5E65(iLocal_3257))
			{
				unk_0x32A12757CBF48A33(joaat("cogcabrio"));
				if (unk_0x33ACB874CECA2D4B(joaat("cogcabrio")))
				{
					iLocal_3257 = unk_0xE00F8DEA9778FC87(joaat("cogcabrio"), -428.0226f, -2153.558f, 9.2992f, 90.9098f, 1, 1);
					unk_0xCEDA5B7DDF6C8846(iLocal_3257, 0, 1, 1, 1, 0, 0, 0, 0);
					unk_0xFD021BAF9614D437(iLocal_3257, 27, 27);
					unk_0x887F4488DA99FD21(joaat("cogcabrio"));
					unk_0x80E2E482FDBC2DD9(iLocal_3257, "SOL_3_MOLLY_CAR_Group", 0);
				}
			}
			if (!unk_0x86CCCD2FAE9D5E65(iLocal_3221))
			{
				unk_0x32A12757CBF48A33(joaat("ig_molly"));
				if (unk_0x33ACB874CECA2D4B(joaat("ig_molly")))
				{
					if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
					{
						if (unk_0x7404950238A154C2(iLocal_3257, 0))
						{
							iLocal_3221 = unk_0x4D135F3066A9BF9C(iLocal_3257, 26, joaat("ig_molly"), -1, 1, 1);
							unk_0x210A4A0B257F8433(iLocal_3221, 1);
							unk_0x33B1E568CEF14B0D(iLocal_3221, 0);
							unk_0x887F4488DA99FD21(joaat("cogcabrio"));
							unk_0x887F4488DA99FD21(joaat("ig_molly"));
							unk_0x506A601663C5417C(iLocal_3221, joaat("player"));
							iLocal_3359 = 1;
						}
					}
				}
			}
		}
		else
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_3221))
			{
				unk_0xF210D34D7F7152ED(&iLocal_3221);
			}
			if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
			{
				unk_0x5D00E836B6BE8693(&iLocal_3257);
			}
		}
		if (unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), Local_3299, 1) < 500f)
		{
			if (iLocal_3361 == 0)
			{
				uLocal_3292 = unk_0x95EF972E3A07B525("BREAKING_NEWS");
				unk_0x32A12757CBF48A33(joaat("police3"));
				unk_0x32A12757CBF48A33(joaat("maverick"));
				unk_0x32A12757CBF48A33(joaat("bison"));
				unk_0x32A12757CBF48A33(joaat("blista"));
				unk_0x995DCDA796A47049(45, "BB_Chase");
				unk_0x995DCDA796A47049(35, "BB_Chase");
				unk_0x995DCDA796A47049(2, "BB_Chase");
				unk_0x995DCDA796A47049(54, "BB_Chase");
				unk_0x995DCDA796A47049(55, "BB_Chase");
				unk_0x995DCDA796A47049(67, "BB_Chase");
				func_158(1, "BB_Chase");
				unk_0xA3BC6AA446F03669("TRV4_CHASE");
				iLocal_3361 = 1;
			}
		}
		else if (iLocal_3361 == 1)
		{
			unk_0x887F4488DA99FD21(joaat("police3"));
			unk_0x887F4488DA99FD21(joaat("maverick"));
			unk_0x887F4488DA99FD21(joaat("bison"));
			unk_0x887F4488DA99FD21(joaat("blista"));
			unk_0x4855165A2773595C(45, "BB_Chase");
			unk_0x4855165A2773595C(35, "BB_Chase");
			unk_0x4855165A2773595C(2, "BB_Chase");
			unk_0x4855165A2773595C(54, "BB_Chase");
			unk_0x4855165A2773595C(55, "BB_Chase");
			unk_0x4855165A2773595C(67, "BB_Chase");
			func_312(1, "BB_Chase");
			unk_0x9CEDFD70C55A7F8F("TRV4_CHASE");
			iLocal_3361 = 0;
		}
		if (iLocal_3378 == 0)
		{
			if (unk_0x48E480685981C7D4() > (iLocal_3187 + 135000))
			{
				unk_0xD1C83BD797927DD5();
				func_20("TRV4_WARN1", 7500, 1);
				iLocal_3187 = unk_0x48E480685981C7D4();
				iLocal_3378 = 1;
			}
		}
		if (iLocal_3378 == 1)
		{
			if (unk_0x48E480685981C7D4() > (iLocal_3187 + 135000))
			{
				func_206("TRV4_FAIL1");
			}
		}
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			if (!unk_0x12F24A1A22BF90A7("SOL_3_DRIVE_TO_AIRPORT"))
			{
				unk_0xF2A6D4C99549CA85("SOL_3_DRIVE_TO_AIRPORT");
			}
			if (iLocal_3438 == 0)
			{
				unk_0x80650551CC58C784("TRV4_CAR_ENTERED");
				iLocal_3438 = 1;
			}
			if (!unk_0x86CCCD2FAE9D5E65(iLocal_3258))
			{
				iLocal_3258 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
				unk_0xCEDA5B7DDF6C8846(iLocal_3258, 0, 1, 0, 0, 0, 0, 0, 0);
				unk_0x7DB4FC1A893751E2(iLocal_3258);
				unk_0x50C9C2E3327FDF31(iLocal_3258, 1);
			}
		}
		else if (unk_0x86CCCD2FAE9D5E65(iLocal_3258))
		{
			if (unk_0x7404950238A154C2(iLocal_3258, 0))
			{
				if (iLocal_3360 == 0)
				{
					unk_0xCEDA5B7DDF6C8846(iLocal_3258, 0, 0, 0, 0, 0, 0, 0, 0);
					iLocal_3360 = 1;
				}
				if (iLocal_3352 == 1)
				{
					unk_0x3DD8579AB91A77D6(iLocal_3258);
					iLocal_3352 = 0;
				}
				if (unk_0x46AE53A47E5D03D5(iLocal_3258, 1))
				{
					unk_0xE0913C01F5C0CC3D(&iLocal_3258);
				}
			}
		}
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			if (iLocal_3441 == 0)
			{
				unk_0xCAE3865F646A9D4F(156, 1, 0);
				unk_0x90839A8FE39393A1(-244f, -1842.74f, 28.48f);
				unk_0x90839A8FE39393A1(-1.5f, -2014.4f, 11.5f);
				unk_0x90839A8FE39393A1(-498.7f, -2136.5f, 8.4f);
				unk_0xD327B3F9D26CFBBC(1);
				iLocal_3441 = 1;
			}
		}
		else if (iLocal_3441 == 1)
		{
			unk_0xD327B3F9D26CFBBC(0);
			iLocal_3441 = 0;
		}
		if ((iLocal_3361 == 1 && unk_0x86CCCD2FAE9D5E65(iLocal_3257)) && unk_0x86CCCD2FAE9D5E65(iLocal_3221))
		{
			if (unk_0x7404950238A154C2(iLocal_3257, 0))
			{
				if (unk_0xCF1857501787B489(iLocal_3257, func_311(unk_0x81873881071CD9FE()), 0))
				{
					func_310();
					iLocal_3180 = 0;
					iLocal_3182 = 0;
					iLocal_3179 = 3;
				}
			}
			if (unk_0x7404950238A154C2(iLocal_3257, 0))
			{
				if (unk_0xE8039CE2181EACCB(unk_0x1329891157A54C63(), iLocal_3257))
				{
					func_310();
					iLocal_3180 = 0;
					iLocal_3182 = 0;
					iLocal_3179 = 3;
				}
			}
			if (unk_0x7404950238A154C2(iLocal_3257, 0))
			{
				if (unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), unk_0xB6AE0DAE06D56288(iLocal_3257, 1), 200f, 132f, 100f, 0, 1, 0))
				{
					iLocal_3358 = 0;
					func_310();
					iLocal_3180 = 0;
					iLocal_3182 = 0;
					iLocal_3179 = 3;
				}
			}
			if (unk_0x7404950238A154C2(iLocal_3257, 0))
			{
				if (unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), -577f, -2051.5f, 7f, 84f, 87.5f, 15f, 0, 1, 0))
				{
					iLocal_3358 = 1;
					func_310();
					iLocal_3180 = 0;
					iLocal_3182 = 0;
					iLocal_3179 = 3;
				}
			}
			if (unk_0x7404950238A154C2(iLocal_3257, 0))
			{
				if (unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), -703.5f, -1969.5f, 10f, 53.5f, 62.5f, 10f, 0, 1, 0))
				{
					unk_0x169327598E00BC8A();
					unk_0x057B94C6D10C1119(0);
					iLocal_3358 = 1;
					func_310();
					iLocal_3180 = 0;
					iLocal_3182 = 0;
					iLocal_3179 = 3;
				}
			}
		}
	}
}

void func_310()
{
	while (((!unk_0x33ACB874CECA2D4B(joaat("police3")) || !unk_0x33ACB874CECA2D4B(joaat("maverick"))) || !unk_0x33ACB874CECA2D4B(joaat("bison"))) || !unk_0x33ACB874CECA2D4B(joaat("blista")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (((((!unk_0x498998F33897432E(45, "BB_Chase") || !unk_0x498998F33897432E(35, "BB_Chase")) || !unk_0x498998F33897432E(2, "BB_Chase")) || !unk_0x498998F33897432E(54, "BB_Chase")) || !unk_0x498998F33897432E(55, "BB_Chase")) || !unk_0x498998F33897432E(67, "BB_Chase"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

var func_311(int iParam0)
{
	var uVar0;
	
	unk_0x5F446E70DA9B8122(iParam0, &uVar0, 1);
	return uVar0;
}

void func_312(int iParam0, char* sParam1)
{
	unk_0x4855165A2773595C(iParam0, sParam1);
}

int func_313()
{
	if (Global_15693 == 4)
	{
		if (unk_0xE0A43912E369FFA5())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

var func_314(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xA949BE56543040D2(Param0);
	unk_0xD6DF56BB9537BCC5(uVar0, func_203(unk_0x1C6DF6AD69BE853E(), 1f, 1f));
	unk_0x116FDB7E27590C7F(uVar0, iParam3);
	return uVar0;
}

void func_315()
{
	if (iLocal_3180 == 0)
	{
		iLocal_3337 = 1;
		iLocal_3466 = 0;
		iLocal_3487 = 0;
		iLocal_3505 = 0;
		while (iLocal_3337 == 1)
		{
			unk_0x36137B7A77318822("M_LegalTrouble", 0);
			switch (iLocal_3182)
			{
				case 0:
					unk_0x0ADAEB274E23621D("sol_3_int", 8);
					if (func_359())
					{
						while (!func_331(61, &uLocal_3742, 0, 1, 0, 0, 0))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						iLocal_3437 = 0;
						unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), false, 0);
						func_191(1, 1, 1, 0);
						unk_0x991ABCA492D8C897(unk_0x81873881071CD9FE(), "Michael", 0, 0, 0);
						if (unk_0x86CCCD2FAE9D5E65(Global_87639[0]))
						{
							if (unk_0x7404950238A154C2(Global_87639[0], 0))
							{
								unk_0xD768713E73165208(Global_87639[0], 1, 1);
								iLocal_3258 = Global_87639[0];
							}
						}
						if (unk_0x86CCCD2FAE9D5E65(Global_87639[1]))
						{
							if (unk_0x7404950238A154C2(Global_87639[1], 0))
							{
								unk_0xD768713E73165208(Global_87639[1], 1, 1);
								iLocal_3275 = Global_87639[1];
							}
						}
						if (unk_0x86CCCD2FAE9D5E65(Global_87639[2]))
						{
							if (unk_0x7404950238A154C2(Global_87639[2], 0))
							{
								unk_0xD768713E73165208(Global_87639[2], 1, 1);
								iLocal_3276 = Global_87639[2];
							}
						}
						if (unk_0x86CCCD2FAE9D5E65(Global_87639[3]))
						{
							if (unk_0x7404950238A154C2(Global_87639[3], 0))
							{
								unk_0xD768713E73165208(Global_87639[3], 1, 1);
								iLocal_3277 = Global_87639[3];
							}
						}
						unk_0x5632EA201EAF956B(0);
						unk_0xE8F8B47D8785FAD4(4);
						func_330();
						if (!unk_0xECDEA377354CBDA4())
						{
							unk_0xAE2B1C30F8A0B67C(250);
						}
						iLocal_3182++;
					}
					break;
				
				case 1:
					if (iLocal_3466 == 0)
					{
						if (unk_0xEF7A631CCBD01652())
						{
							if (iLocal_3505 == 0)
							{
								if (unk_0x86CCCD2FAE9D5E65(iLocal_3277))
								{
									if (unk_0x7404950238A154C2(iLocal_3277, 0))
									{
										if (unk_0xE083914AB72DD7CE(unk_0x14B7103DBD149FFE(iLocal_3277)))
										{
											unk_0xDE113FA802D77FA6(iLocal_3277, 2);
											unk_0xB067093BBAF0A747(iLocal_3277, -1048.722f, -506.8387f, 35.0386f, 1, 0, 0, 1);
											unk_0xC24172029826A66F(iLocal_3277, 357.1288f);
											unk_0xE6116B2B5D358CE9(iLocal_3277, 1);
											unk_0x5CC9D6711FE01F0D(iLocal_3277);
											func_320(-1048.722f, -506.8387f, 35.0386f, 357.1288f, 0, 145);
											iLocal_3505 = 1;
										}
										if (((unk_0x61A26017817C6AED(unk_0x14B7103DBD149FFE(iLocal_3277)) || unk_0xC5ABD699DDC9D5A0(unk_0x14B7103DBD149FFE(iLocal_3277))) || unk_0xD382045D1EFD12D3(unk_0x14B7103DBD149FFE(iLocal_3277))) || unk_0x8923BC9F314B991D(unk_0x14B7103DBD149FFE(iLocal_3277)))
										{
											if ((((((((unk_0x14B7103DBD149FFE(iLocal_3277) != joaat("bus") && unk_0x14B7103DBD149FFE(iLocal_3277) != joaat("pounder")) && unk_0x14B7103DBD149FFE(iLocal_3277) != joaat("packer")) && unk_0x14B7103DBD149FFE(iLocal_3277) != joaat("airbus")) && unk_0x14B7103DBD149FFE(iLocal_3277) != joaat("ambulance")) && unk_0x14B7103DBD149FFE(iLocal_3277) != joaat("barracks")) && unk_0x14B7103DBD149FFE(iLocal_3277) != joaat("barracks2")) && unk_0x14B7103DBD149FFE(iLocal_3277) != joaat("benson")) && unk_0x14B7103DBD149FFE(iLocal_3277) != joaat("biff"))
											{
												unk_0xB067093BBAF0A747(iLocal_3277, -1027.657f, -486.6945f, 35.9571f, 1, 0, 0, 1);
												unk_0xC24172029826A66F(iLocal_3277, 207.7515f);
												unk_0x5CC9D6711FE01F0D(iLocal_3277);
												func_320(-1027.657f, -486.6945f, 35.9571f, 207.7515f, 0, 145);
												iLocal_3505 = 1;
											}
										}
										if ((((!unk_0xE083914AB72DD7CE(unk_0x14B7103DBD149FFE(iLocal_3277)) && !unk_0x61A26017817C6AED(unk_0x14B7103DBD149FFE(iLocal_3277))) && !unk_0xC5ABD699DDC9D5A0(unk_0x14B7103DBD149FFE(iLocal_3277))) && !unk_0xD382045D1EFD12D3(unk_0x14B7103DBD149FFE(iLocal_3277))) && !unk_0x8923BC9F314B991D(unk_0x14B7103DBD149FFE(iLocal_3277)))
										{
											unk_0x5D00E836B6BE8693(&iLocal_3277);
											iLocal_3505 = 1;
										}
									}
								}
							}
							func_318(&uLocal_3742, 0, 0, 2000, 1, 1, 0, 1);
							iLocal_3466 = 1;
						}
					}
					if (iLocal_3437 == 0)
					{
						unk_0x4865E80F793024CE("SecGuards", &iLocal_3575);
						unk_0xF8E77F310A5B6EAB(5, joaat("player"), iLocal_3575);
						unk_0xF8E77F310A5B6EAB(5, iLocal_3575, joaat("player"));
						unk_0x86B83C54AF71BD12("TREV4", 0);
						iLocal_3437 = 1;
					}
					if (iLocal_3487 == 0)
					{
						if (unk_0x521385D8214D27C4())
						{
							unk_0x59DEC64833EB09EA(unk_0x81873881071CD9FE());
							unk_0x9B7B11FF30198957(unk_0x81873881071CD9FE());
							unk_0x6165FD779AC7C568(unk_0x81873881071CD9FE());
							if (unk_0x9317F2B481D935D4() > 120000)
							{
								unk_0x80650551CC58C784("TRV4_START");
								iLocal_3487 = 1;
							}
						}
					}
					if (unk_0x673E6879232705DA("Michael", 0))
					{
						unk_0xB067093BBAF0A747(unk_0x81873881071CD9FE(), -1012.268f, -480.0742f, 38.9757f, 1, 0, 0, 1);
						unk_0xC24172029826A66F(unk_0x81873881071CD9FE(), 121.4087f);
						unk_0x4C6646EAFB3AD914(unk_0x1329891157A54C63(), 2f, 3000, 0, 1, 0);
						unk_0x95BE9BA77CA91710(unk_0x81873881071CD9FE(), 0, 0);
						unk_0x03EB8112BA30917C(unk_0x81873881071CD9FE(), joaat("MotionState_Run"), 0, 0, 0);
					}
					if (unk_0x1787C7476F17BD5C(0))
					{
						unk_0x270066FDBAF3A458(0f);
					}
					if (!unk_0xEF7A631CCBD01652())
					{
						func_317(61);
						if (iLocal_3487 == 0)
						{
							unk_0x80650551CC58C784("TRV4_START_CS_SKIP");
							iLocal_3487 = 1;
						}
						unk_0x30550E796AC03903();
						func_191(0, 1, 1, 0);
						iLocal_3182++;
					}
					break;
				
				case 2:
					unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), true, 0);
					if (unk_0x86CCCD2FAE9D5E65(iLocal_3258))
					{
						if (unk_0x7404950238A154C2(iLocal_3258, 0))
						{
							if (unk_0x46AE53A47E5D03D5(iLocal_3258, 1))
							{
								unk_0xE0913C01F5C0CC3D(&iLocal_3258);
							}
						}
					}
					if (unk_0x86CCCD2FAE9D5E65(iLocal_3275))
					{
						if (unk_0x7404950238A154C2(iLocal_3275, 0))
						{
							if (unk_0x46AE53A47E5D03D5(iLocal_3275, 1))
							{
								unk_0xE0913C01F5C0CC3D(&iLocal_3275);
							}
						}
					}
					if (unk_0x86CCCD2FAE9D5E65(iLocal_3276))
					{
						if (unk_0x7404950238A154C2(iLocal_3276, 0))
						{
							if (unk_0x46AE53A47E5D03D5(iLocal_3276, 1))
							{
								unk_0xE0913C01F5C0CC3D(&iLocal_3276);
							}
						}
					}
					func_316();
					iLocal_3337 = 0;
					iLocal_3182 = 0;
					iLocal_3180 = 0;
					iLocal_3179 = 2;
					break;
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
}

void func_316()
{
	Global_55408 = 0;
}

void func_317(int iParam0)
{
	if (Global_88064 != -1)
	{
		if (iParam0 == Global_88064)
		{
			Global_88068 = 1;
			return;
		}
	}
}

void func_318(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	
	if (iParam4 == 1)
	{
		unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63()), 64);
	}
	if (!unk_0x521385D8214D27C4())
	{
		unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			unk_0x78693D09089780B5(unk_0x81873881071CD9FE(), 1);
		}
	}
	if (!bParam1 && iParam6)
	{
		unk_0x4D7278EDFCDA8389(0, 0, 3, 0);
	}
	else
	{
		unk_0xFEBF3DDE5E4DC5C5(bParam1, iParam2, iParam3, 1, 0, 0);
	}
	if (bParam1)
	{
		unk_0xB8BB626315D394F5(1);
	}
	else
	{
		if (unk_0x42E36F2D658EB2FF(uParam0->f_4))
		{
			if (unk_0x6B6362BE9BFD1ACA(uParam0->f_4))
			{
				unk_0xDD0B0D77CB8995B1(uParam0->f_4, 0);
			}
			unk_0x35B958B469415A23(uParam0->f_4, 1);
		}
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			unk_0xABA9860C0161F3CD(unk_0x81873881071CD9FE(), 1);
		}
		iVar0 = unk_0x2ADE2CEED2637E95();
		if (unk_0x86CCCD2FAE9D5E65(iVar0))
		{
			unk_0xABA9860C0161F3CD(iVar0, 1);
		}
		unk_0x2D2FB8B6D397597E("TIME_LAPSE");
		if (unk_0x12F24A1A22BF90A7("TOD_SHIFT_SCENE"))
		{
			unk_0x98A5E5B909F1B162(uParam0->f_10);
			unk_0x2D2FB8B6D397597E("TIME_LAPSE");
			unk_0x0C22E352114F699C("TOD_SHIFT_SCENE");
		}
	}
	func_191(bParam1, 1, 0, 0);
	func_319();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			unk_0xF17C5F2A2EECAA41(uParam0->f_7, 0, 0);
		}
		else
		{
			unk_0xF17C5F2A2EECAA41(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (unk_0x29AFA2493D7C23D0())
		{
			unk_0xAE2B1C30F8A0B67C(250);
		}
	}
	if (!bParam1)
	{
		if (Global_98931.f_18731.f_4801 != -15)
		{
			Global_98931.f_18731.f_4801 = func_80();
		}
	}
}

void func_319()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		unk_0x4474CF0FD32A90B2(Global_98931.f_12755[iVar0 /*104*/].f_16);
		iVar0++;
	}
}

void func_320(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	var uVar3;
	
	if (unk_0x86CCCD2FAE9D5E65(Global_92592.f_4))
	{
		if (unk_0x7404950238A154C2(Global_92592.f_4, 0))
		{
			if (func_329(24) != Global_92592.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_326(unk_0xB6AE0DAE06D56288(Global_92592.f_4, 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_321(Global_92592.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_321(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)
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
		func_325(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_39(iParam0, &Var0);
		if (func_68(Param1, 0f, 0f, 0f, 0))
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
		func_323(iParam5, &Var0, Param1, fParam4, func_34(iParam0));
		func_322(iParam5, iParam0, 0);
	}
}

void func_322(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_139(&(Global_67889.f_555[0 /*21*/]), iParam0))
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
				Global_98931.f_18731.f_4801 = func_80();
			}
			if (iParam1 != Global_67889.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_329(iParam0);
					if ((unk_0x86CCCD2FAE9D5E65(iVar0) && unk_0x7404950238A154C2(iVar0, 0)) && iParam1 != iVar0)
					{
						func_125(iVar0, 145);
					}
				}
				Global_68795 = iParam1;
				Global_68796 = iParam0;
				Global_68797 = iParam2;
			}
		}
	}
}

void func_323(int iParam0, var uParam1, struct<3> Param2, float fParam5, int iParam6)
{
	if (func_139(&(Global_67889.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x236D8AD7EE179F46(Global_67889.f_555[0 /*21*/].f_9, 10))
		{
			func_324(iParam0);
			func_136(uParam1, &(Global_98931.f_18731.f_69[Global_67889.f_555[0 /*21*/].f_14 /*78*/]));
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
			func_132(iParam0, 1);
		}
	}
}

void func_324(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_139(&(Global_67889.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x86CCCD2FAE9D5E65(Global_67889.f_139[iParam0]))
		{
			unk_0xD768713E73165208(Global_67889.f_139[iParam0], 1, 1);
			unk_0xE0913C01F5C0CC3D(&(Global_67889.f_139[iParam0]));
			Global_67889.f_139[iParam0] = 0;
		}
		if (unk_0x236D8AD7EE179F46(Global_67889.f_555[0 /*21*/].f_9, 13))
		{
			func_132(iParam0, 0);
		}
	}
}

void func_325(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_324(iParam0);
	func_132(iParam0, 0);
}

int func_326(struct<3> Param0, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	iVar0 = func_327(Param0, iParam3, 1);
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

int func_327(struct<3> Param0, int iParam3, int iParam4)
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
				if (func_328(iVar0) || iParam4 == 0)
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

bool func_328(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_98931.f_5843[iParam0], 0);
}

int func_329(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_67889.f_139[iParam0];
}

void func_330()
{
	Global_55408 = 1;
}

bool func_331(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<2> Var0;
	
	func_358(iParam0, &Var0);
	func_357(iParam0, &Var0, &(Var0.f_1));
	return func_332(uParam1, &Var0, bParam2, bParam3, bParam4, bParam5, bParam6);
}

int func_332(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	
	uParam0->f_7 = *uParam1;
	uParam0->f_8 = uParam1->f_1;
	if ((func_390(0) && !bParam2) && !bParam4)
	{
		if (uParam0->f_5)
		{
			unk_0xF17C5F2A2EECAA41(uParam0->f_7, 0, 0);
		}
		else
		{
			unk_0xF17C5F2A2EECAA41(uParam0->f_8, 0, 0);
		}
		return 1;
	}
	if (uParam0->f_2 == 0)
	{
		if (uParam0->f_7 != -1 && uParam0->f_8 != -1)
		{
			if (bParam2 || !func_355(uParam0->f_8, uParam0->f_7))
			{
				if (unk_0xD448083BD24932DC("TIME_LAPSE", 0))
				{
					uParam0->f_6 = 0;
					uParam0->f_2 = 1;
				}
			}
			else
			{
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else
		{
			uParam0->f_2 = -1;
			return 1;
		}
	}
	unk_0xD61D5795530D0627();
	unk_0xC9A352663D97EFC3(7);
	unk_0x2EC65073E30146EC(0f);
	if (uParam0->f_2 == 1)
	{
		if (bParam2)
		{
			unk_0x35B958B469415A23(uParam0->f_4, 0);
			uParam0->f_4 = unk_0xAAC4D4F273757469("DEFAULT_SPLINE_CAMERA", 0);
			unk_0x0AE74125895277D3(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				unk_0x0AE74125895277D3(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				unk_0x0AE74125895277D3(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			unk_0xBF1C17EB7F681E53(uParam0->f_4, uParam1->f_14);
			unk_0xDD0B0D77CB8995B1(uParam0->f_4, 1);
			if (!bParam6)
			{
				if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
				{
					unk_0xABA9860C0161F3CD(unk_0x81873881071CD9FE(), 0);
				}
				iVar0 = unk_0x2ADE2CEED2637E95();
				if (unk_0x86CCCD2FAE9D5E65(iVar0))
				{
					if (!unk_0xE86442941AE40E75(iVar0))
					{
						unk_0xD768713E73165208(iVar0, 1, 0);
					}
					unk_0xABA9860C0161F3CD(iVar0, 0);
				}
			}
			uVar1 = unk_0xA62E2B5BC6286321(uParam0->f_4);
			unk_0xC5C7E6C074F8D513();
			unk_0x7BEFD33B400C27C1(uParam1->f_2, uVar1, 0);
			unk_0x9FDA5C65BF0EE91F(uParam1->f_2, uVar1);
			unk_0xE7AEBD5A9C95E5E0(uParam1->f_2, uVar1);
			if (bParam3)
			{
				unk_0x7C6BF0CD5D7454C9(uParam1->f_2, 5000f, 1, 1, 0, 0);
			}
			func_354(&(uParam0->f_1), 0, 0, 0, unk_0x8B6B3DD84CE74978(), unk_0x02DC618B9A1DB8D1(), unk_0x57E483B654EDD986());
			func_318(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else if (!func_355(uParam0->f_7, uParam0->f_8))
		{
			if (uParam0->f_5)
			{
				unk_0x35B958B469415A23(uParam0->f_4, 0);
				uParam0->f_4 = unk_0xAAC4D4F273757469("DEFAULT_SPLINE_CAMERA", 0);
				unk_0x0AE74125895277D3(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				if (uParam1->f_17 < 0)
				{
					unk_0x0AE74125895277D3(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				}
				else
				{
					unk_0x0AE74125895277D3(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				}
				unk_0xBF1C17EB7F681E53(uParam0->f_4, uParam1->f_14);
				unk_0xDD0B0D77CB8995B1(uParam0->f_4, 1);
				if (!bParam6)
				{
					if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
					{
						unk_0xABA9860C0161F3CD(unk_0x81873881071CD9FE(), 0);
					}
					iVar2 = unk_0x2ADE2CEED2637E95();
					if (unk_0x86CCCD2FAE9D5E65(iVar2))
					{
						if (!unk_0xE86442941AE40E75(iVar2))
						{
							unk_0xD768713E73165208(iVar2, 1, 0);
						}
						unk_0xABA9860C0161F3CD(iVar2, 0);
					}
				}
				uVar3 = unk_0xA62E2B5BC6286321(uParam0->f_4);
				unk_0xC5C7E6C074F8D513();
				unk_0x7BEFD33B400C27C1(uParam1->f_2, uVar3, 0);
				unk_0x9FDA5C65BF0EE91F(uParam1->f_2, uVar3);
				unk_0xE7AEBD5A9C95E5E0(uParam1->f_2, uVar3);
				if (bParam3)
				{
					unk_0x7C6BF0CD5D7454C9(uParam1->f_2, 5000f, 1, 1, 0, 0);
				}
				func_354(&(uParam0->f_1), 0, 0, 8, unk_0x8B6B3DD84CE74978(), unk_0x02DC618B9A1DB8D1(), unk_0x57E483B654EDD986());
				func_318(uParam0, 1, 0, 2000, 1, 1, 0, 1);
				uParam0->f_2 = 2;
			}
			else
			{
				unk_0x2D2FB8B6D397597E("TIME_LAPSE");
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else if (!uParam0->f_5)
		{
			unk_0x35B958B469415A23(uParam0->f_4, 0);
			uParam0->f_4 = unk_0xAAC4D4F273757469("DEFAULT_SPLINE_CAMERA", 0);
			unk_0x0AE74125895277D3(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				unk_0x0AE74125895277D3(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				unk_0x0AE74125895277D3(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			unk_0xBF1C17EB7F681E53(uParam0->f_4, uParam1->f_14);
			unk_0x64A4D13EFF43DC21(uParam0->f_4, 3);
			unk_0xDD0B0D77CB8995B1(uParam0->f_4, 1);
			if (!bParam6)
			{
				if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
				{
					unk_0xABA9860C0161F3CD(unk_0x81873881071CD9FE(), 0);
				}
				iVar4 = unk_0x2ADE2CEED2637E95();
				if (unk_0x86CCCD2FAE9D5E65(iVar4))
				{
					if (!unk_0xE86442941AE40E75(iVar4))
					{
						unk_0xD768713E73165208(iVar4, 1, 0);
					}
					unk_0xABA9860C0161F3CD(iVar4, 0);
				}
			}
			uVar5 = unk_0xA62E2B5BC6286321(uParam0->f_4);
			unk_0xC5C7E6C074F8D513();
			unk_0x7BEFD33B400C27C1(uParam1->f_2, uVar5, 0);
			unk_0x9FDA5C65BF0EE91F(uParam1->f_2, uVar5);
			unk_0xE7AEBD5A9C95E5E0(uParam1->f_2, uVar5);
			if (bParam3)
			{
				unk_0x7C6BF0CD5D7454C9(uParam1->f_2, 5000f, 0, 1, 0, 0);
			}
			func_354(&(uParam0->f_1), 0, 0, 0, unk_0x8B6B3DD84CE74978(), unk_0x02DC618B9A1DB8D1(), unk_0x57E483B654EDD986());
			func_318(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else
		{
			unk_0x2D2FB8B6D397597E("TIME_LAPSE");
			uParam0->f_2 = -1;
			return 1;
		}
	}
	if (uParam0->f_2 == 2)
	{
		if (bParam3)
		{
			unk_0x7C6BF0CD5D7454C9(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (!uParam0->f_5)
		{
			if (func_335(uParam0->f_8, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
			{
				if (uParam1->f_17 < 0)
				{
					uParam0->f_9 = unk_0x48E480685981C7D4();
					uParam0->f_2 = 3;
				}
				else
				{
					uParam0->f_4 = unk_0xAAC4D4F273757469("DEFAULT_SPLINE_CAMERA", 0);
					unk_0x0AE74125895277D3(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
					unk_0x0AE74125895277D3(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
					unk_0xBF1C17EB7F681E53(uParam0->f_4, uParam1->f_14);
					unk_0x64A4D13EFF43DC21(uParam0->f_4, 3);
					unk_0xDD0B0D77CB8995B1(uParam0->f_4, 1);
					uParam0->f_9 = unk_0x48E480685981C7D4();
					uParam0->f_2 = 22;
				}
			}
		}
		else if (func_335(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
		{
			if (uParam1->f_17 < 0)
			{
				uParam0->f_9 = unk_0x48E480685981C7D4();
				uParam0->f_2 = 3;
			}
			else
			{
				uParam0->f_4 = unk_0xAAC4D4F273757469("DEFAULT_SPLINE_CAMERA", 0);
				unk_0x0AE74125895277D3(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				unk_0x0AE74125895277D3(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				unk_0xBF1C17EB7F681E53(uParam0->f_4, uParam1->f_14);
				unk_0x64A4D13EFF43DC21(uParam0->f_4, 3);
				unk_0xDD0B0D77CB8995B1(uParam0->f_4, 1);
				uParam0->f_9 = unk_0x48E480685981C7D4();
				uParam0->f_2 = 22;
			}
		}
		if (!bParam5)
		{
			if (func_333(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!unk_0xC584A413BCB2AA39())
				{
					unk_0x3B283FEBA87FFBEB(250);
				}
				if (!unk_0x29AFA2493D7C23D0())
				{
					unk_0xD61D5795530D0627();
					unk_0xC9A352663D97EFC3(7);
					return 0;
				}
				if (uParam0->f_3 != 0)
				{
					func_335(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, 1f, 0, 1, 1065353216);
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 22)
	{
		if (bParam3)
		{
			unk_0x7C6BF0CD5D7454C9(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (unk_0x42E36F2D658EB2FF(uParam0->f_4) && unk_0xEBA04D3308C6781F(uParam0->f_4))
		{
		}
		else
		{
			uParam0->f_9 = unk_0x48E480685981C7D4();
			uParam0->f_2 = 3;
		}
		if (!bParam5)
		{
			if (func_333(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!unk_0xC584A413BCB2AA39())
				{
					unk_0x3B283FEBA87FFBEB(250);
				}
				if (!unk_0x29AFA2493D7C23D0())
				{
					unk_0xD61D5795530D0627();
					unk_0xC9A352663D97EFC3(7);
					return 0;
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 3)
	{
		if (bParam3)
		{
			unk_0x7C6BF0CD5D7454C9(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (uParam0->f_9 + 1000 > unk_0x48E480685981C7D4())
		{
			uParam0->f_2 = 4;
		}
	}
	if (uParam0->f_2 == 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_2 = -1;
		return 1;
	}
	if (uParam0->f_2 == -1)
	{
		return 1;
	}
	return 0;
}

int func_333(int iParam0)
{
	if (unk_0xECDEA377354CBDA4())
	{
		if ((unk_0x48E480685981C7D4() - Global_28) > iParam0)
		{
			Global_27 = unk_0x48E480685981C7D4();
		}
		Global_28 = unk_0x48E480685981C7D4();
		if ((unk_0x48E480685981C7D4() - Global_27) > iParam0)
		{
			if (func_334())
			{
				Global_27 = unk_0x48E480685981C7D4();
				return 1;
			}
		}
	}
	return 0;
}

int func_334()
{
	if (unk_0xDB10DED5ABC4AA20())
	{
		return 0;
	}
	if (unk_0x093DEAE9A023FAA0(0, 18) || unk_0x093DEAE9A023FAA0(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_335(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6, bool bParam7, float fParam8)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = -1f;
	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = func_80();
			iVar5 = func_80();
			func_88(&iVar5, iParam0);
			func_89(&iVar5, iParam1);
			func_90(&iVar5, 0);
			if (func_352(*uParam4, iVar5))
			{
				func_351(&iVar5, 0, 0, 0, 1, 0, 0);
			}
			func_349(*uParam4, iVar5, &iVar1, &iVar2, &iVar3, &uVar6, &uVar7, &uVar8);
			uParam4->f_11 = ((iVar1 + iVar2 * 60) + (iVar3 + iParam6) * 3600);
			func_342((unk_0xBBDA792448DB5A89(uParam4->f_11) / 3600f));
			if (bParam7)
			{
				unk_0xF42638C5F9CFB208(0.6f);
				unk_0xE52010B703D6579E(0);
				unk_0x17EFBD7C07660E31(0);
			}
			func_341();
			uParam4->f_10 = unk_0xEDDCCC3D357A50F8();
			unk_0x35D7948F61AA3FEC(uParam4->f_10, "TIME_LAPSE_MASTER", 0, 1);
			unk_0xF2A6D4C99549CA85("TOD_SHIFT_SCENE");
			func_319();
			uParam4->f_3++;
			break;
		
		case 1:
		case 2:
			if ((unk_0x42E36F2D658EB2FF(uParam4->f_4) && unk_0xEBA04D3308C6781F(uParam4->f_4)) || !(fParam5 >= 0.99f || fParam5 == -1f))
			{
				if (unk_0x42E36F2D658EB2FF(uParam4->f_4) && unk_0xEBA04D3308C6781F(uParam4->f_4))
				{
					fVar0 = unk_0x189423318639F563(uParam4->f_4);
				}
				else if (!(fParam5 >= 0.99f || fParam5 == -1f))
				{
					fVar0 = fParam5;
				}
				else
				{
					fVar0 = -1f;
				}
				if (fVar0 >= 0.5f)
				{
					if (uParam4->f_3 == 1)
					{
						if (unk_0x8DAF7A748E41AD46(sParam2) != 0)
						{
							unk_0x396F0C76E11511A8(sParam2, fParam8);
						}
						if (unk_0x8DAF7A748E41AD46(sParam3) != 0)
						{
							unk_0xED211CB5CA1BCD13();
							unk_0xD6C6A4CDACA04556(sParam3, 0);
						}
						uParam4->f_3 = 2;
					}
				}
			}
			if (fVar0 >= 0.99f || fVar0 == -1f)
			{
				iVar5 = *uParam4;
				func_351(&iVar5, uParam4->f_11, 0, 0, 0, 0, 0);
				unk_0xF17C5F2A2EECAA41(func_340(iVar5), func_339(iVar5), func_338(iVar5));
				if (bParam7)
				{
					unk_0x5A01C8176534B756();
				}
				unk_0x98A5E5B909F1B162(uParam4->f_10);
				unk_0x2D2FB8B6D397597E("TIME_LAPSE");
				if (bParam7)
				{
					unk_0x17EFBD7C07660E31(1);
					unk_0xE52010B703D6579E(1);
				}
				return 1;
			}
			fVar11 = fVar0;
			fVar9 = 0.1f;
			fVar10 = 0.9f;
			fVar12 = func_337(((fVar11 - fVar9) / (fVar10 - fVar9)), 0f, 1f);
			iVar4 = unk_0xF2DB717A73826179((IntToFloat(uParam4->f_11) * fVar12));
			iVar5 = *uParam4;
			func_351(&iVar5, iVar4, 0, 0, 0, 0, 0);
			unk_0xF17C5F2A2EECAA41(func_340(iVar5), func_339(iVar5), func_338(iVar5));
			if (func_336(iVar5) != unk_0x8B6B3DD84CE74978())
			{
				unk_0x7E6529D8BD2E5BE5(func_336(iVar5), func_87(iVar5), func_85(iVar5));
			}
			func_238();
			unk_0xFF37998A011E1E8E(6);
			break;
	}
	return 0;
}

int func_336(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

float func_337(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_338(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_339(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_340(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_341()
{
	int iVar0;
	
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		return 0;
	}
	if (!unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
	{
		return 0;
	}
	iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
	if (!unk_0x930F8FBB8E9537CC(iVar0))
	{
		return 0;
	}
	unk_0xD578599BB87169AA(iVar0, "OFF");
	return 1;
}

void func_342(float fParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_348(&(Global_98931.f_16717.f_175[iVar0 /*19*/].f_5)))
		{
			func_343(&(Global_98931.f_16717.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_348(&(Global_98931.f_16717.f_362[iVar1 /*3*/])))
		{
			func_343(&(Global_98931.f_16717.f_362[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	unk_0x870AE8ECD52E0687();
}

void func_343(var uParam0, float fParam1)
{
	if (func_348(uParam0))
	{
		func_344(uParam0, (func_346(uParam0) + fParam1));
	}
}

void func_344(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_345(unk_0x236D8AD7EE179F46(*uParam0, 4)) - fParam1);
	unk_0xF3148AAF69AF9CBC(uParam0, 1);
	unk_0xC69E84EBBD7166E6(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_345(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x48E480685981C7D4()) / 1000f);
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		iVar0 = unk_0xD74C7D8D2E5E43D2();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x48E480685981C7D4()) / 1000f);
}

float func_346(var uParam0)
{
	if (func_348(uParam0))
	{
		if (func_347(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_345(unk_0x236D8AD7EE179F46(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_347(var uParam0)
{
	return unk_0x236D8AD7EE179F46(*uParam0, 2);
}

bool func_348(var uParam0)
{
	return unk_0x236D8AD7EE179F46(*uParam0, 1);
}

void func_349(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_352(iParam0, iParam1))
	{
		iVar0 = func_87(iParam1);
		iVar1 = func_85(iParam0);
		iVar2 = (func_85(iParam0) - func_85(iParam1));
		iVar3 = (func_87(iParam0) - func_87(iParam1));
		iVar4 = (func_336(iParam0) - func_336(iParam1));
		iVar5 = (func_340(iParam0) - func_340(iParam1));
		iVar6 = (func_339(iParam0) - func_339(iParam1));
		iVar7 = (func_338(iParam0) - func_338(iParam1));
	}
	else
	{
		iVar0 = func_87(iParam0);
		iVar1 = func_85(iParam1);
		iVar2 = (func_85(iParam1) - func_85(iParam0));
		iVar3 = (func_87(iParam1) - func_87(iParam0));
		iVar4 = (func_336(iParam1) - func_336(iParam0));
		iVar5 = (func_340(iParam1) - func_340(iParam0));
		iVar6 = (func_339(iParam1) - func_339(iParam0));
		iVar7 = (func_338(iParam1) - func_338(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_84(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_350(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_350(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(unk_0xF2DB717A73826179(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

void func_351(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_85(*iParam0);
	iVar1 = func_87(*iParam0);
	iVar2 = func_336(*iParam0);
	iVar3 = func_340(*iParam0);
	iVar4 = func_339(*iParam0);
	iVar5 = func_338(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_84(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_84(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_354(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_352(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_353(iParam1) || !func_353(iParam0))
	{
		return 1;
	}
	iVar0 = func_85(iParam0);
	iVar1 = func_85(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_87(iParam0);
	iVar1 = func_87(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_336(iParam0);
	iVar1 = func_336(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_340(iParam0);
	iVar1 = func_340(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_339(iParam0);
	iVar1 = func_339(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_338(iParam0);
	iVar1 = func_338(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_353(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_338(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_339(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_340(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_85(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_87(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_336(iParam0);
	if (iVar5 < 1 || iVar5 > func_84(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_354(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_90(uParam0, iParam1);
	func_89(uParam0, iParam2);
	func_88(uParam0, iParam3);
	func_82(uParam0, iParam5);
	func_83(uParam0, iParam4);
	func_81(uParam0, iParam6);
}

bool func_355(int iParam0, int iParam1)
{
	return func_356(unk_0x0C937048CF6952B5(), iParam0, iParam1);
}

int func_356(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

void func_357(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 65:
			*uParam1 = 20;
			*uParam2 = 22;
			break;
		
		case 27:
			*uParam1 = 20;
			*uParam2 = 20;
			break;
		
		default:
			*uParam1 = Global_81930[iParam0 /*34*/].f_14;
			*uParam2 = Global_81930[iParam0 /*34*/].f_13;
			break;
	}
}

void func_358(int iParam0, var uParam1)
{
	uParam1->f_17 = -1;
	switch (iParam0)
	{
		case 1:
		case 2:
			uParam1->f_2 = { -58.1338f, -1115.653f, 25.8856f };
			uParam1->f_5 = { 18.4907f, 0f, 3.566f };
			uParam1->f_8 = { -58.3857f, -1115.083f, 26.0824f };
			uParam1->f_11 = { 18.4907f, 0f, 2.0628f };
			uParam1->f_14 = 40.0256f;
			uParam1->f_15 = 4000;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			uParam1->f_16 = 0;
			break;
		
		case 17:
		case 18:
			uParam1->f_2 = { -830.1f, 171.4f, 71.5f };
			uParam1->f_5 = { 17.5f, 0f, -76f };
			uParam1->f_8 = { -829.5f, 171.6f, 71.7f };
			uParam1->f_11 = { 17.9f, 0f, -75.4f };
			uParam1->f_14 = 47.9931f;
			uParam1->f_15 = 6600;
			uParam1->f_16 = 0;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			break;
		
		case 21:
		case 22:
			uParam1->f_2 = { -776.5807f, 181.1033f, 72.2059f };
			uParam1->f_5 = { 11.8135f, 0f, 95.7275f };
			uParam1->f_8 = { -776.8288f, 181.0926f, 72.2551f };
			uParam1->f_11 = { 11.8134f, 0f, 95.7284f };
			uParam1->f_14 = 46.7255f;
			uParam1->f_15 = 5500;
			uParam1->f_16 = 0;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			break;
		
		case 20:
			switch (func_91())
			{
				case 0:
					uParam1->f_2 = { -846.3013f, 186.777f, 72.0316f };
					uParam1->f_5 = { 4.202026f, 0f, -111.2882f };
					uParam1->f_8 = { -846.1907f, 186.7339f, 72.0403f };
					uParam1->f_11 = { 4.202f, 0f, -111.2882f };
					uParam1->f_14 = 47f;
					uParam1->f_15 = 5500;
					uParam1->f_16 = 0;
					break;
				
				case 2:
					uParam1->f_2 = { -846.3013f, 186.777f, 72.0316f };
					uParam1->f_5 = { 4.202026f, 0f, -111.2882f };
					uParam1->f_8 = { -846.1907f, 186.7339f, 72.0403f };
					uParam1->f_11 = { 4.202f, 0f, -111.2882f };
					uParam1->f_14 = 47f;
					uParam1->f_15 = 5500;
					uParam1->f_16 = 0;
					break;
			}
			break;
		
		case 40:
			uParam1->f_2 = { -8.0845f, -1450.367f, 36.8585f };
			uParam1->f_5 = { 13.3776f, 0f, 4.513f };
			uParam1->f_8 = { -9.0519f, -1450.444f, 36.8585f };
			uParam1->f_11 = { 13.3776f, 0f, 4.513f };
			uParam1->f_14 = 39.9659f;
			uParam1->f_15 = 7200;
			uParam1->f_16 = 0;
			break;
		
		case 27:
			uParam1->f_2 = { -1576.132f, 5160.888f, 24.1175f };
			uParam1->f_5 = { 4.8389f, -0.011f, 92.1057f };
			uParam1->f_8 = { -1576.132f, 5160.888f, 24.1175f };
			uParam1->f_11 = { 4.8389f, -0.011f, 92.1057f };
			uParam1->f_14 = 40f;
			uParam1->f_15 = 7200;
			uParam1->f_16 = 0;
			break;
		
		case 43:
			uParam1->f_2 = { -7.205f, -1471.656f, 31.1614f };
			uParam1->f_5 = { 9.3776f, 0f, 11.4737f };
			uParam1->f_8 = { -7.2909f, -1471.232f, 31.2546f };
			uParam1->f_11 = { 9.3776f, 0f, 11.4737f };
			uParam1->f_14 = 38.5265f;
			uParam1->f_15 = 5000;
			uParam1->f_16 = 0;
			break;
		
		case 61:
			uParam1->f_2 = { -1060.658f, -464.0052f, 44.994f };
			uParam1->f_5 = { 5.6441f, 0f, -138.7474f };
			uParam1->f_8 = { -1060.658f, -464.0052f, 44.994f };
			uParam1->f_11 = { 4.8242f, 0f, -118.3167f };
			uParam1->f_14 = 37f;
			uParam1->f_15 = 5000;
			uParam1->f_16 = 0;
			break;
		
		case 91:
		case 93:
			uParam1->f_2 = { 1406.112f, 3590.231f, 34.4113f };
			uParam1->f_5 = { 17.5005f, 0f, 55.9579f };
			uParam1->f_8 = { 1405.673f, 3590.525f, 34.4113f };
			uParam1->f_11 = { 18.4979f, 0f, 55.9579f };
			uParam1->f_14 = 56.3199f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 69:
		case 86:
		case 90:
			uParam1->f_2 = { 739.1493f, -990.3961f, 29.85194f };
			uParam1->f_5 = { 17.19917f, 0f, 44.21184f };
			uParam1->f_8 = { 738.4197f, -989.6462f, 30.17581f };
			uParam1->f_11 = { 17.19917f, 0f, 44.21184f };
			uParam1->f_14 = 47.56362f;
			uParam1->f_15 = 6000;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			uParam1->f_16 = 0;
			break;
		
		case 70:
			uParam1->f_2 = { 2503.9f, -288.8f, 112.8f };
			uParam1->f_5 = { -0.2f, 0f, -169.6f };
			uParam1->f_8 = { 2503.9f, -288.8f, 112.8f };
			uParam1->f_11 = { -0.2f, 0f, -169.6f };
			uParam1->f_14 = 47.6f;
			uParam1->f_15 = 5000;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			uParam1->f_16 = 1;
			break;
		
		case 45:
			uParam1->f_2 = { -458.5666f, 1010.097f, 316.3736f };
			uParam1->f_5 = { 14.47186f, 0f, -18.28884f };
			uParam1->f_8 = { -457.3f, 1011.6f, 316.9f };
			uParam1->f_11 = { 14.5f, 0f, -18.5f };
			uParam1->f_14 = 50f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 49:
			uParam1->f_2 = { -723.9982f, -155.7184f, 38.12362f };
			uParam1->f_5 = { 30.12048f, 0f, -99.11243f };
			uParam1->f_8 = { -722.4385f, -155.7817f, 37.4443f };
			uParam1->f_11 = { 2.0429f, 0f, -101.5132f };
			uParam1->f_14 = 45f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 9:
			switch (func_91())
			{
				case 2:
					uParam1->f_2 = { 416.3221f, -960.2586f, 30.6696f };
					uParam1->f_5 = { 21.5747f, 0f, -135.2969f };
					uParam1->f_8 = { 416.8894f, -960.832f, 30.9887f };
					uParam1->f_11 = { 21.9916f, 0f, -135.2969f };
					uParam1->f_14 = 47.1057f;
					uParam1->f_15 = 6000;
					uParam1->f_16 = 0;
					break;
				
				case 1:
					uParam1->f_2 = { 1393.363f, -2052.581f, 65.4054f };
					uParam1->f_5 = { 2.5107f, 0f, 51.1167f };
					uParam1->f_8 = { 1393.456f, -2052.656f, 68.146f };
					uParam1->f_11 = { 2.5107f, 0f, 51.1167f };
					uParam1->f_14 = 35.9859f;
					uParam1->f_15 = 6000;
					uParam1->f_16 = 0;
					break;
			}
			break;
		
		case 30:
			uParam1->f_2 = { 59.3f, -751.7f, 46.8f };
			uParam1->f_5 = { 61.9f, 0f, -63.8f };
			uParam1->f_8 = { 59.3f, -751.7f, 46.8f };
			uParam1->f_11 = { 61.9f, 0f, -63.8f };
			uParam1->f_14 = 46.6f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 39:
			uParam1->f_2 = { 3841.93f, 4464.658f, 2.6587f };
			uParam1->f_5 = { 8.4859f, 0.0024f, 143.0775f };
			uParam1->f_8 = { 3842.54f, 4464.184f, 2.6587f };
			uParam1->f_11 = { 8.4859f, 0.0024f, 142.0089f };
			uParam1->f_14 = 34.1544f;
			uParam1->f_15 = 3000;
			uParam1->f_16 = 0;
			break;
		
		case 71:
			uParam1->f_2 = { -1193.1f, -1525.3f, 4.4f };
			uParam1->f_5 = { 9.4f, 0f, -78.8f };
			uParam1->f_8 = { -1192.2f, -1525.1f, 4.4f };
			uParam1->f_11 = { 9.4f, 0f, -78.5f };
			uParam1->f_14 = 30.4f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 74:
			uParam1->f_2 = { -24.2f, -2417.6f, 7.8f };
			uParam1->f_5 = { 10.4f, 0f, 80.4f };
			uParam1->f_8 = { -23.8f, -2414.8f, 7.8f };
			uParam1->f_11 = { 10.4f, 0f, 81.4f };
			uParam1->f_14 = 48.1095f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 84:
		case 85:
		case 65:
			uParam1->f_2 = { 146.9733f, -1310.644f, 30.85177f };
			uParam1->f_5 = { 16.26885f, -2.1E-05f, 45.00475f };
			uParam1->f_8 = { 146.9733f, -1310.644f, 30.85177f };
			uParam1->f_11 = { 16.26885f, -2.1E-05f, 45.00475f };
			uParam1->f_14 = 39.4027f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 62:
		case 15:
		case 16:
			uParam1->f_2 = { 1998.215f, 3816.983f, 33.0117f };
			uParam1->f_5 = { 5.9088f, 0f, 89.1989f };
			uParam1->f_8 = { 1997.154f, 3817.004f, 33.1215f };
			uParam1->f_11 = { 5.9088f, 0f, 89.1989f };
			uParam1->f_14 = 36.8186f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			if (iParam0 == 62)
			{
				if (func_91() != 2)
				{
					uParam1->f_2 = { 0f, 0f, 0f };
					uParam1->f_5 = { 0f, 0f, 0f };
					uParam1->f_8 = { 0f, 0f, 0f };
					uParam1->f_11 = { 0f, 0f, 0f };
					uParam1->f_14 = -1f;
					uParam1->f_15 = -1;
					uParam1->f_16 = 0;
				}
			}
			break;
		
		case 63:
			uParam1->f_2 = { 1576f, 3363.9f, 55.5f };
			uParam1->f_5 = { 0.5f, 0f, -123.8f };
			uParam1->f_8 = { 1575.2f, 3364.4f, 49.2f };
			uParam1->f_11 = { -4.3f, 0f, -124.1f };
			uParam1->f_14 = 50f;
			uParam1->f_15 = 8000;
			uParam1->f_16 = 0;
			break;
		
		case 64:
			uParam1->f_2 = { 1566f, 3378.8f, 42.8f };
			uParam1->f_5 = { -2.4f, 0f, -126.3f };
			uParam1->f_8 = { 1567.6f, 3376.9f, 45f };
			uParam1->f_11 = { 1.6f, 0f, -124.6f };
			uParam1->f_14 = 34.7f;
			uParam1->f_15 = 8000;
			uParam1->f_16 = 0;
			break;
		
		case 24:
			uParam1->f_2 = { 1339.573f, -2550.873f, 56.28254f };
			uParam1->f_5 = { -2.348373f, -2.1E-05f, 159.736f };
			uParam1->f_8 = { 1334.491f, -2549.345f, 47.69109f };
			uParam1->f_11 = { 2.789334f, -2.1E-05f, -156.4397f };
			uParam1->f_14 = 25.66f;
			uParam1->f_15 = 8000;
			uParam1->f_16 = 0;
			break;
		
		case 25:
			uParam1->f_2 = { 2383.651f, 2624.787f, 46.9527f };
			uParam1->f_5 = { 14.6191f, 0f, 64.366f };
			uParam1->f_8 = { 2383.929f, 2622.802f, 47.2707f };
			uParam1->f_11 = { 33.17714f, -0.13073f, 12.31436f };
			uParam1->f_14 = 35.31843f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 26:
			uParam1->f_2 = { 1755.519f, -1474.981f, 126.1743f };
			uParam1->f_5 = { 4.5341f, 0f, 89.6405f };
			uParam1->f_8 = { 1772.26f, -1475.085f, 125.9465f };
			uParam1->f_11 = { 5.8327f, 0f, 89.6405f };
			uParam1->f_14 = 32.7f;
			uParam1->f_15 = 6500;
			uParam1->f_16 = 0;
			break;
		
		case 3:
			uParam1->f_2 = { -1514.257f, -947.7281f, 15.0253f };
			uParam1->f_5 = { -3.5807f, -0.0001f, -46.3209f };
			uParam1->f_8 = { -1512.601f, -949.2796f, 14.8827f };
			uParam1->f_11 = { -4.7682f, -0.0001f, -34.1393f };
			uParam1->f_14 = 29.9555f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 4:
			uParam1->f_2 = { -698.2578f, -934.4238f, 31.6909f };
			uParam1->f_5 = { -22.0467f, 0f, 32.1888f };
			uParam1->f_8 = { -697.8695f, -935.0406f, 31.9861f };
			uParam1->f_11 = { -20.6093f, 0f, 32.1888f };
			uParam1->f_14 = 30f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 5:
			uParam1->f_2 = { 221.8613f, -830.6434f, 45.3154f };
			uParam1->f_5 = { -13.9263f, 0f, 140.7092f };
			uParam1->f_8 = { 227.5233f, -832.8285f, 45.3154f };
			uParam1->f_11 = { -13.9263f, 0f, 140.7092f };
			uParam1->f_14 = 35f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 6:
			uParam1->f_2 = { -23.3747f, -120.3161f, 64.139f };
			uParam1->f_5 = { -5.7232f, 0f, 5.1015f };
			uParam1->f_8 = { -22.5824f, -122.52f, 64.139f };
			uParam1->f_11 = { -5.7232f, 0f, 6.6362f };
			uParam1->f_14 = 35f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 7:
			uParam1->f_2 = { 803.5977f, -1075.869f, 37.1981f };
			uParam1->f_5 = { -10.7685f, 0f, -38.1705f };
			uParam1->f_8 = { 803.5977f, -1075.869f, 32.7981f };
			uParam1->f_11 = { -10.7685f, 0f, -38.1705f };
			uParam1->f_14 = 35f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		default:
			uParam1->f_2 = { 0f, 0f, 0f };
			uParam1->f_5 = { 0f, 0f, 0f };
			uParam1->f_8 = { 0f, 0f, 0f };
			uParam1->f_11 = { 0f, 0f, 0f };
			uParam1->f_14 = -1f;
			uParam1->f_15 = -1;
			uParam1->f_16 = 0;
			break;
	}
	if (unk_0x8DAF7A748E41AD46("RAIN") == unk_0x35B52128F77CC1FF())
	{
		if (unk_0xB318FDA0D1ABDB20(&(uParam1->f_18)))
		{
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
		}
		if (unk_0xB318FDA0D1ABDB20(&(uParam1->f_22)))
		{
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
		}
	}
}

bool func_359()
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

void func_360()
{
	unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), true, 0);
	if (!func_23())
	{
		if (func_390(0))
		{
			unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 0, 0);
			unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 0);
			unk_0x32A12757CBF48A33(joaat("rapidgt"));
			unk_0x32A12757CBF48A33(joaat("surano"));
			unk_0x32A12757CBF48A33(joaat("carbonizzare"));
			while ((!unk_0x33ACB874CECA2D4B(joaat("rapidgt")) || !unk_0x33ACB874CECA2D4B(joaat("surano"))) || !unk_0x33ACB874CECA2D4B(joaat("carbonizzare")))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (!unk_0x86CCCD2FAE9D5E65(iLocal_3258))
			{
				unk_0x7C6BF0CD5D7454C9(Local_3293, 5f, 1, 0, 0, 0);
				iLocal_3258 = unk_0xE00F8DEA9778FC87(joaat("rapidgt"), Local_3293, fLocal_3320, 1, 1);
				unk_0xFD021BAF9614D437(iLocal_3258, 112, 112);
				unk_0x9765BF567DB87B5F(iLocal_3258, 3000);
				unk_0xDEE6369ABB2B517A(iLocal_3258, 1);
				unk_0x887F4488DA99FD21(joaat("rapidgt"));
				unk_0xB5A91586385F755B(joaat("rapidgt"), 1);
				unk_0xEA89E72C99125D9C(iLocal_3258, 1);
				unk_0x50C9C2E3327FDF31(iLocal_3258, 1);
			}
			if (!unk_0x86CCCD2FAE9D5E65(iLocal_3275))
			{
				if (unk_0x33ACB874CECA2D4B(joaat("surano")))
				{
					unk_0x7C6BF0CD5D7454C9(-1037.398f, -491.6539f, 35.5545f, 5f, 1, 0, 0, 0);
					iLocal_3275 = unk_0xE00F8DEA9778FC87(joaat("surano"), -1037.398f, -491.6539f, 35.5545f, 208.889f, 1, 1);
					unk_0xFD021BAF9614D437(iLocal_3275, 0, 0);
					unk_0x9765BF567DB87B5F(iLocal_3275, 3000);
					unk_0xDEE6369ABB2B517A(iLocal_3275, 1);
					unk_0x887F4488DA99FD21(joaat("surano"));
					unk_0xB5A91586385F755B(joaat("surano"), 1);
					unk_0x50C9C2E3327FDF31(iLocal_3275, 1);
				}
			}
			if (!unk_0x86CCCD2FAE9D5E65(iLocal_3276))
			{
				if (unk_0x33ACB874CECA2D4B(joaat("carbonizzare")))
				{
					unk_0x7C6BF0CD5D7454C9(Local_3293, 5f, 1, 0, 0, 0);
					iLocal_3276 = unk_0xE00F8DEA9778FC87(joaat("carbonizzare"), -1033.938f, -489.7475f, 35.8323f, 207.1758f, 1, 1);
					unk_0xFD021BAF9614D437(iLocal_3276, 89, 89);
					unk_0x9765BF567DB87B5F(iLocal_3276, 3000);
					unk_0xDEE6369ABB2B517A(iLocal_3276, 1);
					unk_0x887F4488DA99FD21(joaat("carbonizzare"));
					unk_0xB5A91586385F755B(joaat("carbonizzare"), 1);
					unk_0x50C9C2E3327FDF31(iLocal_3276, 1);
				}
			}
		}
		iLocal_3180 = 0;
		iLocal_3182 = 0;
		iLocal_3344 = 0;
		iLocal_3179 = 1;
	}
	else
	{
		unk_0x4865E80F793024CE("SecGuards", &iLocal_3575);
		unk_0xF8E77F310A5B6EAB(5, joaat("player"), iLocal_3575);
		unk_0xF8E77F310A5B6EAB(5, iLocal_3575, joaat("player"));
		if (Global_85319 == 1)
		{
			if (func_363() == 0)
			{
				func_362(Local_3311, fLocal_3324, 1, 0);
				iLocal_3180 = 0;
				iLocal_3344 = 1;
				unk_0x80650551CC58C784("TRV4_START_RT");
				iLocal_3179 = 3;
			}
			if (func_363() == 1)
			{
				func_362(-935.4413f, -2928.061f, 12.9451f, 178.466f, 1, 0);
				iLocal_3180 = 0;
				iLocal_3344 = 1;
				unk_0x80650551CC58C784("TRV4_FOOT_CHASE_RT");
				iLocal_3179 = 5;
			}
			if (func_363() == 2)
			{
				func_362(-937.5466f, -2968.713f, 12.9451f, 111.5016f, 1, 0);
				iLocal_3180 = 0;
				iLocal_3344 = 1;
				unk_0x80650551CC58C784("TRV4_EVADE_RT");
				iLocal_3179 = 8;
			}
			if (func_363() == 3)
			{
				func_362(-920.0547f, -2744.661f, 12.9322f, 357.1374f, 1, 0);
				func_361();
			}
		}
		else
		{
			if (func_363() == 0)
			{
				func_362(-1019.579f, -484.872f, 36.0795f, 93.7701f, 1, 0);
				iLocal_3180 = 0;
				iLocal_3344 = 1;
				unk_0x80650551CC58C784("TRV4_START_RT");
				iLocal_3179 = 2;
			}
			if (func_363() == 1)
			{
				func_362(Local_3311, fLocal_3324, 1, 0);
				iLocal_3180 = 0;
				iLocal_3344 = 1;
				unk_0x80650551CC58C784("TRV4_START_RT");
				iLocal_3179 = 3;
			}
			if (func_363() == 2)
			{
				func_362(-935.4413f, -2928.061f, 12.9451f, 178.466f, 1, 0);
				iLocal_3180 = 0;
				iLocal_3344 = 1;
				unk_0x80650551CC58C784("TRV4_FOOT_CHASE_RT");
				iLocal_3179 = 5;
			}
			if (func_363() == 3)
			{
				func_362(-937.5466f, -2968.713f, 12.9451f, 111.5016f, 1, 0);
				iLocal_3180 = 0;
				iLocal_3344 = 1;
				unk_0x80650551CC58C784("TRV4_EVADE_RT");
				iLocal_3179 = 8;
			}
		}
		unk_0x86B83C54AF71BD12("TREV4", 0);
		while (!unk_0xCD8DA898314F3016(0))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
}

void func_361()
{
	if (iLocal_3180 == 0)
	{
		unk_0x7C6BF0CD5D7454C9(-920.0547f, -2744.662f, 12.8434f, 20f, 1, 0, 0, 0);
		unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 0, 0);
		unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 0);
		iLocal_3180++;
	}
	if (iLocal_3180 == 1)
	{
		unk_0xBCFD171E27A90624(-920.0547f, -2744.662f, 12.8434f);
		if (!unk_0xECDEA377354CBDA4())
		{
			func_21(0, -1, 1);
			unk_0xAE2B1C30F8A0B67C(800);
		}
		func_6();
	}
}

void func_362(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_23())
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
		func_22(1);
	}
}

int func_363()
{
	if (!Global_90809 == 10 && !Global_90809 == 9)
	{
		return 0;
	}
	return Global_90809.f_2;
}

void func_364()
{
	if (iLocal_3489[0] == 0)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[7]))
		{
			if (unk_0x7404950238A154C2(iLocal_3120[7], 0))
			{
				unk_0x80E2E482FDBC2DD9(iLocal_3120[7], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3489[0] = 1;
			}
		}
	}
	if (iLocal_3497[0] == 0)
	{
		if (iLocal_3489[0] == 1)
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[7]))
			{
				if (!unk_0x7404950238A154C2(iLocal_3120[7], 0))
				{
					unk_0xA5F9A8EE8A45DD7E(iLocal_3120[7], 0);
					iLocal_3497[0] = 1;
				}
				else if (iLocal_3179 == 5)
				{
					unk_0xA5F9A8EE8A45DD7E(iLocal_3120[7], 0);
					iLocal_3497[0] = 1;
				}
			}
			else
			{
				iLocal_3497[0] = 1;
			}
		}
	}
	if (iLocal_3489[1] == 0)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[8]))
		{
			if (unk_0x7404950238A154C2(iLocal_3120[8], 0))
			{
				unk_0x80E2E482FDBC2DD9(iLocal_3120[8], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3489[1] = 1;
			}
		}
	}
	if (iLocal_3497[1] == 0)
	{
		if (iLocal_3489[1] == 1)
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[8]))
			{
				if (!unk_0x7404950238A154C2(iLocal_3120[8], 0))
				{
					unk_0xA5F9A8EE8A45DD7E(iLocal_3120[8], 0);
					iLocal_3497[1] = 1;
				}
				else if (iLocal_3179 == 5)
				{
					unk_0xA5F9A8EE8A45DD7E(iLocal_3120[8], 0);
					iLocal_3497[1] = 1;
				}
			}
			else
			{
				iLocal_3497[1] = 1;
			}
		}
	}
	if (iLocal_3489[2] == 0)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[11]))
		{
			if (unk_0x7404950238A154C2(iLocal_3120[11], 0))
			{
				unk_0x80E2E482FDBC2DD9(iLocal_3120[11], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3489[2] = 1;
			}
		}
	}
	if (iLocal_3497[2] == 0)
	{
		if (iLocal_3489[2] == 1)
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[11]))
			{
				if (!unk_0x7404950238A154C2(iLocal_3120[11], 0))
				{
					unk_0xA5F9A8EE8A45DD7E(iLocal_3120[11], 0);
					iLocal_3497[2] = 1;
				}
				else if (iLocal_3179 == 5)
				{
					unk_0xA5F9A8EE8A45DD7E(iLocal_3120[11], 0);
					iLocal_3497[2] = 1;
				}
			}
			else
			{
				iLocal_3497[2] = 1;
			}
		}
	}
	if (iLocal_3489[3] == 0)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[12]))
		{
			if (unk_0x7404950238A154C2(iLocal_3120[12], 0))
			{
				unk_0x80E2E482FDBC2DD9(iLocal_3120[12], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3489[3] = 1;
			}
		}
	}
	if (iLocal_3497[3] == 0)
	{
		if (iLocal_3489[3] == 1)
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[12]))
			{
				if (!unk_0x7404950238A154C2(iLocal_3120[12], 0))
				{
					unk_0xA5F9A8EE8A45DD7E(iLocal_3120[12], 0);
					iLocal_3497[3] = 1;
				}
				else if (iLocal_3179 == 5)
				{
					unk_0xA5F9A8EE8A45DD7E(iLocal_3120[12], 0);
					iLocal_3497[3] = 1;
				}
			}
			else
			{
				iLocal_3497[3] = 1;
			}
		}
	}
	if (iLocal_3489[4] == 0)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[13]))
		{
			if (unk_0x7404950238A154C2(iLocal_3120[13], 0))
			{
				unk_0x80E2E482FDBC2DD9(iLocal_3120[13], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3489[4] = 1;
			}
		}
	}
	if (iLocal_3497[4] == 0)
	{
		if (iLocal_3489[4] == 1)
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[13]))
			{
				if (!unk_0x7404950238A154C2(iLocal_3120[13], 0))
				{
					unk_0xA5F9A8EE8A45DD7E(iLocal_3120[13], 0);
					iLocal_3497[4] = 1;
				}
				else if (iLocal_3179 == 5)
				{
					unk_0xA5F9A8EE8A45DD7E(iLocal_3120[13], 0);
					iLocal_3497[4] = 1;
				}
			}
			else
			{
				iLocal_3497[4] = 1;
			}
		}
	}
	if (iLocal_3489[5] == 0)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[14]))
		{
			if (unk_0x7404950238A154C2(iLocal_3120[14], 0))
			{
				unk_0x80E2E482FDBC2DD9(iLocal_3120[14], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3489[5] = 1;
			}
		}
	}
	if (iLocal_3497[5] == 0)
	{
		if (iLocal_3489[5] == 1)
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[14]))
			{
				if (!unk_0x7404950238A154C2(iLocal_3120[14], 0))
				{
					unk_0xA5F9A8EE8A45DD7E(iLocal_3120[14], 0);
					iLocal_3497[5] = 1;
				}
				else if (iLocal_3179 == 5)
				{
					unk_0xA5F9A8EE8A45DD7E(iLocal_3120[14], 0);
					iLocal_3497[5] = 1;
				}
			}
			else
			{
				iLocal_3497[5] = 1;
			}
		}
	}
	if (iLocal_3489[6] == 0)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[15]))
		{
			if (unk_0x7404950238A154C2(iLocal_3120[15], 0))
			{
				unk_0x80E2E482FDBC2DD9(iLocal_3120[15], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3489[6] = 1;
			}
		}
	}
	if (iLocal_3497[6] == 0)
	{
		if (iLocal_3489[6] == 1)
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[15]))
			{
				if (!unk_0x7404950238A154C2(iLocal_3120[15], 0))
				{
					unk_0xA5F9A8EE8A45DD7E(iLocal_3120[15], 0);
					iLocal_3497[6] = 1;
				}
				else if (iLocal_3179 == 5)
				{
					unk_0xA5F9A8EE8A45DD7E(iLocal_3120[15], 0);
					iLocal_3497[6] = 1;
				}
			}
			else
			{
				iLocal_3497[6] = 1;
			}
		}
	}
}

void func_365()
{
	switch (iLocal_3179)
	{
		case 2:
			if (iLocal_3180 > 0)
			{
				if (iLocal_3184 == 0)
				{
					iLocal_3363 = 0;
					iLocal_3522 = 0;
					iLocal_3555 = 0;
					iLocal_3556 = 0;
					func_17(&uLocal_3577, 1, 0, "Devin", 0, 1);
					func_17(&uLocal_3577, 0, unk_0x81873881071CD9FE(), "Michael", 0, 1);
					iLocal_3184 = 1;
				}
				if (iLocal_3184 == 1)
				{
					if (iLocal_3363 == 0)
					{
						if (unk_0x0D6E79537424BACE(Local_3317, unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 1) > 2f)
						{
							if (!unk_0xDBD19E93A4D01117() || !unk_0x3EA487B1116F83F7())
							{
								if (func_229(&uLocal_3577, "T1M4AUD", "T1M4_CHASE", 3, 0, 0, 0))
								{
									iLocal_3363 = 1;
								}
							}
						}
					}
					if (iLocal_3522 == 0)
					{
						if (unk_0x0D6E79537424BACE(Local_3317, unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 1) > 100f)
						{
							if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
							{
								if (func_368(&uLocal_3577, 29, "T1M4AUD", "SOL3_DEVCALL", 7, 0, 0, 1))
								{
									unk_0x2CEC5A597B1DFFE1(4f, 10f, 4);
									iLocal_3522 = 1;
								}
							}
						}
					}
					if (iLocal_3555 == 0 && iLocal_3522 == 1)
					{
						if (func_367())
						{
							if (!unk_0xDBD19E93A4D01117() || !unk_0x3EA487B1116F83F7())
							{
								if (func_229(&uLocal_3577, "T1M4AUD", "T1M4_REACT", 3, 0, 0, 0))
								{
									iLocal_3555 = 1;
								}
							}
						}
					}
					if (iLocal_3556 == 0)
					{
						if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
						{
							if (unk_0x7404950238A154C2(iLocal_3257, 0))
							{
								if (func_16(unk_0x81873881071CD9FE(), iLocal_3257, 1) < 200f && unk_0x331E7ACCFD0869AD(iLocal_3257))
								{
									if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
									{
										if (!unk_0xDBD19E93A4D01117() || !unk_0x3EA487B1116F83F7())
										{
											if (func_229(&uLocal_3577, "T1M4AUD", "T1M4_CHASE2", 3, 0, 0, 0))
											{
												unk_0x2CEC5A597B1DFFE1(3f, 12f, 4);
												iLocal_3556 = 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (iLocal_3180 >= 0)
			{
				if (iLocal_3184 == 0)
				{
					iLocal_3523[0] = 0;
					iLocal_3523[1] = 0;
					iLocal_3523[2] = 0;
					iLocal_3523[3] = 0;
					iLocal_3552 = 0;
					iLocal_3553 = 0;
					iLocal_3554 = 0;
					iLocal_3557 = 0;
					iLocal_3558 = 0;
					iLocal_3559 = 0;
					iLocal_3560 = 0;
					iLocal_3561 = 0;
					iLocal_3198 = unk_0x48E480685981C7D4();
					func_17(&uLocal_3577, 0, unk_0x81873881071CD9FE(), "Michael", 0, 1);
					func_17(&uLocal_3577, 4, 0, "SOL3COP", 0, 1);
					iLocal_3184 = 1;
				}
				if (iLocal_3184 == 1)
				{
					if (iLocal_3556 == 0)
					{
						if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
						{
							if (unk_0x7404950238A154C2(iLocal_3257, 0))
							{
								if (func_16(unk_0x81873881071CD9FE(), iLocal_3257, 1) < 200f && unk_0x331E7ACCFD0869AD(iLocal_3257))
								{
									if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
									{
										if (!unk_0xDBD19E93A4D01117() || !unk_0x3EA487B1116F83F7())
										{
											if (func_229(&uLocal_3577, "T1M4AUD", "T1M4_CHASE2", 3, 0, 0, 0))
											{
												iLocal_3556 = 1;
											}
										}
									}
								}
							}
						}
					}
					if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
					{
						if (unk_0x7404950238A154C2(iLocal_3257, 0))
						{
							if (unk_0xE20321A2D7F8960C(iLocal_3257))
							{
								if (iLocal_3523[0] == 0)
								{
									if (unk_0x7404950238A154C2(iLocal_3120[7], 0) || unk_0x7404950238A154C2(iLocal_3120[8], 0))
									{
										if (unk_0x678BA9CA7610A13E(iLocal_3257) > 7000f && unk_0x678BA9CA7610A13E(iLocal_3257) < 28000f)
										{
											if (!func_228())
											{
												if (!unk_0xDBD19E93A4D01117() || !unk_0x3EA487B1116F83F7())
												{
													if (func_229(&uLocal_3577, "T1M4AUD", "T1M4_POLICE", 7, 0, 0, 0))
													{
														iLocal_3523[0] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3523[1] == 0)
								{
									if (unk_0x7404950238A154C2(iLocal_3120[7], 0) || unk_0x7404950238A154C2(iLocal_3120[8], 0))
									{
										if (unk_0x678BA9CA7610A13E(iLocal_3257) > 28000f && unk_0x678BA9CA7610A13E(iLocal_3257) < 34500f)
										{
											if (!func_228())
											{
												if (!unk_0xDBD19E93A4D01117() || !unk_0x3EA487B1116F83F7())
												{
													if (func_229(&uLocal_3577, "T1M4AUD", "T1M4_POLICE2", 7, 0, 0, 0))
													{
														unk_0x2CEC5A597B1DFFE1(4f, 4f, 4);
														iLocal_3523[1] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3523[2] == 0)
								{
									if (unk_0x7404950238A154C2(iLocal_3120[7], 0) || unk_0x7404950238A154C2(iLocal_3120[8], 0))
									{
										if (unk_0x678BA9CA7610A13E(iLocal_3257) > 36000f && unk_0x678BA9CA7610A13E(iLocal_3257) < 41000f)
										{
											if (!func_228())
											{
												if (!unk_0xDBD19E93A4D01117() || !unk_0x3EA487B1116F83F7())
												{
													if (func_229(&uLocal_3577, "T1M4AUD", "T1M4_POLICE3", 7, 0, 0, 0))
													{
														unk_0x2CEC5A597B1DFFE1(2f, 4f, 4);
														iLocal_3523[2] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3553 == 0)
								{
									if (unk_0x678BA9CA7610A13E(iLocal_3257) > 41000f && unk_0x678BA9CA7610A13E(iLocal_3257) < 43500f)
									{
										if (unk_0x86CCCD2FAE9D5E65(iLocal_3264) && unk_0x331E7ACCFD0869AD(iLocal_3264))
										{
											if (!func_228())
											{
												if (!unk_0xDBD19E93A4D01117() || !unk_0x3EA487B1116F83F7())
												{
													if (func_229(&uLocal_3577, "T1M4AUD", "T1M4_BOOM", 7, 0, 0, 0))
													{
														unk_0x2CEC5A597B1DFFE1(4f, 4f, 4);
														iLocal_3553 = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3554 == 0)
								{
									if (unk_0x678BA9CA7610A13E(iLocal_3257) > 50509f && unk_0x678BA9CA7610A13E(iLocal_3257) < 50872f)
									{
										if (unk_0x86CCCD2FAE9D5E65(iLocal_3264) && unk_0x331E7ACCFD0869AD(iLocal_3264))
										{
											if (!func_228())
											{
												if (!unk_0xDBD19E93A4D01117() || !unk_0x3EA487B1116F83F7())
												{
													if (func_229(&uLocal_3577, "T1M4AUD", "T1M4_BLOW", 7, 0, 0, 0))
													{
														iLocal_3554 = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3523[3] == 0)
								{
									if (unk_0x678BA9CA7610A13E(iLocal_3257) > 58000f && unk_0x678BA9CA7610A13E(iLocal_3257) < 68000f)
									{
										if (!func_228())
										{
											if (!unk_0xDBD19E93A4D01117() || !unk_0x3EA487B1116F83F7())
											{
												if (func_229(&uLocal_3577, "T1M4AUD", "T1M4_POLICE4", 7, 0, 0, 0))
												{
													iLocal_3523[3] = 1;
												}
											}
										}
									}
								}
								if (iLocal_3557 == 0 && iLocal_3523[3] == 1)
								{
									if (unk_0x678BA9CA7610A13E(iLocal_3257) < 76000f)
									{
										if (!func_228())
										{
											if (!unk_0xDBD19E93A4D01117() || !unk_0x3EA487B1116F83F7())
											{
												if (func_229(&uLocal_3577, "T1M4AUD", "T1M4_CHASE3", 7, 0, 0, 0))
												{
													iLocal_3557 = 1;
												}
											}
										}
									}
								}
								if (iLocal_3552 == 0)
								{
									if (unk_0x678BA9CA7610A13E(iLocal_3257) > 80000f && unk_0x678BA9CA7610A13E(iLocal_3257) < 82000f)
									{
										if (unk_0x86CCCD2FAE9D5E65(iLocal_3259[0]))
										{
											if (unk_0x7404950238A154C2(iLocal_3259[0], 0))
											{
												if (unk_0x331E7ACCFD0869AD(iLocal_3259[0]))
												{
													if (!func_228())
													{
														if (!unk_0xDBD19E93A4D01117() || !unk_0x3EA487B1116F83F7())
														{
															if (func_229(&uLocal_3577, "T1M4AUD", "T1M4_CHASE4", 7, 0, 0, 0))
															{
																unk_0x2CEC5A597B1DFFE1(3f, 10f, 4);
																iLocal_3552 = 1;
															}
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_3558 == 0)
								{
									if (unk_0x678BA9CA7610A13E(iLocal_3257) > 82100f && unk_0x678BA9CA7610A13E(iLocal_3257) < 83500f)
									{
										if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[11]))
										{
											if (unk_0x331E7ACCFD0869AD(iLocal_3120[11]))
											{
												if (!func_228())
												{
													if (!unk_0xDBD19E93A4D01117() || !unk_0x3EA487B1116F83F7())
													{
														if (func_229(&uLocal_3577, "T1M4AUD", "T1M4_CHASE5", 7, 0, 0, 0))
														{
															iLocal_3558 = 1;
														}
													}
												}
											}
										}
										else if (unk_0x86CCCD2FAE9D5E65(iLocal_3120[12]))
										{
											if (unk_0x331E7ACCFD0869AD(iLocal_3120[12]))
											{
												if (!func_228())
												{
													if (!unk_0xDBD19E93A4D01117() || !unk_0x3EA487B1116F83F7())
													{
														if (func_229(&uLocal_3577, "T1M4AUD", "T1M4_CHASE5", 7, 0, 0, 0))
														{
															iLocal_3558 = 1;
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_3561 == 0)
								{
									if ((unk_0x678BA9CA7610A13E(iLocal_3257) > 101891f && unk_0x678BA9CA7610A13E(iLocal_3257) < 105000f) && unk_0x331E7ACCFD0869AD(iLocal_3257))
									{
										if (!func_228())
										{
											if (!unk_0xDBD19E93A4D01117() || !unk_0x3EA487B1116F83F7())
											{
												if (func_229(&uLocal_3577, "T1M4AUD", "T1M4_CHASE7", 7, 0, 0, 0))
												{
													unk_0x2CEC5A597B1DFFE1(3f, 10f, 4);
													iLocal_3561 = 1;
												}
											}
										}
									}
								}
								if (((unk_0x678BA9CA7610A13E(iLocal_3257) > 105500f && unk_0x678BA9CA7610A13E(iLocal_3257) < 119000f) && unk_0x48E480685981C7D4() > iLocal_3198 + 7000) && iLocal_3560 == 0)
								{
									if (!func_228())
									{
										if (!unk_0xDBD19E93A4D01117() || !unk_0x3EA487B1116F83F7())
										{
											if (func_229(&uLocal_3577, "T1M4AUD", "T1M4_POLICE5", 7, 0, 0, 0))
											{
												iLocal_3198 = unk_0x48E480685981C7D4();
												iLocal_3560 = 1;
											}
										}
									}
								}
								if (iLocal_3559 == 0 && iLocal_3560 == 1)
								{
									if (!func_228())
									{
										if (!unk_0xDBD19E93A4D01117() || !unk_0x3EA487B1116F83F7())
										{
											if (func_229(&uLocal_3577, "T1M4AUD", "T1M4_CHASE6", 7, 0, 0, 0))
											{
												iLocal_3559 = 1;
											}
										}
									}
								}
								if (((unk_0x678BA9CA7610A13E(iLocal_3257) > 105500f && unk_0x678BA9CA7610A13E(iLocal_3257) < 119000f) && unk_0x48E480685981C7D4() > iLocal_3198 + 7000) && iLocal_3559 == 1)
								{
									if (!func_228())
									{
										if (!unk_0xDBD19E93A4D01117() || !unk_0x3EA487B1116F83F7())
										{
											if (func_229(&uLocal_3577, "T1M4AUD", "T1M4_POLICE5", 7, 0, 0, 0))
											{
												iLocal_3198 = unk_0x48E480685981C7D4();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 5:
			if (iLocal_3180 > 0)
			{
				if (iLocal_3184 == 0)
				{
					iLocal_3529 = 0;
					iLocal_3562 = 0;
					iLocal_3568 = 0;
					iLocal_3563 = 1;
					iLocal_3203 = unk_0x48E480685981C7D4();
					func_17(&uLocal_3577, 0, unk_0x81873881071CD9FE(), "Michael", 0, 1);
					if (!unk_0x5FEB513A4402FD59(iLocal_3221))
					{
						func_17(&uLocal_3577, 2, iLocal_3221, "MOLLY", 0, 1);
					}
					iLocal_3184 = 1;
				}
				if (iLocal_3184 == 1)
				{
					if (iLocal_3568 == 0)
					{
						unk_0x38A0ABFF3403AAE9("T1M4_BBAA", "AIRPORTANNO", -939.5f, -2932.2f, 16f, "SPEECH_PARAMS_FORCE_FRONTEND");
						iLocal_3568 = 1;
					}
					if (iLocal_3563 == 1)
					{
						if (iLocal_3529 == 0)
						{
							if (!func_228())
							{
								if (!unk_0xDBD19E93A4D01117() || !unk_0x3EA487B1116F83F7())
								{
									if (func_229(&uLocal_3577, "T1M4AUD", "SOL3_RUNS", 7, 0, 0, 0))
									{
										unk_0x2CEC5A597B1DFFE1(4f, 6f, 4);
										iLocal_3199 = unk_0x48E480685981C7D4();
										iLocal_3529 = 1;
										iLocal_3562 = 1;
										iLocal_3563 = 0;
									}
								}
							}
						}
						if (unk_0x48E480685981C7D4() > iLocal_3199 + 5000)
						{
							if (!func_228())
							{
								if (!unk_0xDBD19E93A4D01117() || !unk_0x3EA487B1116F83F7())
								{
									if (func_229(&uLocal_3577, "T1M4AUD", "SOL3_RUNS", 7, 0, 0, 0))
									{
										unk_0x2CEC5A597B1DFFE1(4f, 6f, 4);
										iLocal_3199 = unk_0x48E480685981C7D4();
									}
								}
							}
						}
					}
					if (iLocal_3562 == 1 && unk_0x48E480685981C7D4() > iLocal_3203 + 4000)
					{
						if (!func_228())
						{
							if (!unk_0xDBD19E93A4D01117() || !unk_0x3EA487B1116F83F7())
							{
								if (func_229(&uLocal_3577, "T1M4AUD", "T1M4_SHOUT1", 7, 0, 0, 0))
								{
									unk_0x2CEC5A597B1DFFE1(4f, 6f, 4);
									iLocal_3203 = unk_0x48E480685981C7D4();
									iLocal_3563 = 1;
									iLocal_3562 = 0;
								}
							}
						}
					}
				}
			}
			break;
		
		case 6:
			if (iLocal_3180 > 0)
			{
				if (iLocal_3184 == 0)
				{
					iLocal_3530 = 0;
					iLocal_3531 = 0;
					iLocal_3532 = 0;
					iLocal_3564 = 0;
					iLocal_3565 = 0;
					func_17(&uLocal_3577, 0, unk_0x81873881071CD9FE(), "Michael", 0, 1);
					if (!unk_0x5FEB513A4402FD59(iLocal_3221))
					{
						func_17(&uLocal_3577, 2, iLocal_3221, "MOLLY", 0, 1);
					}
					iLocal_3184 = 1;
				}
				if (iLocal_3184 == 1)
				{
					if (iLocal_3530 == 0)
					{
						if (!func_228())
						{
							if (!unk_0xDBD19E93A4D01117() || !unk_0x3EA487B1116F83F7())
							{
								if (func_229(&uLocal_3577, "T1M4AUD", "SOL3_PAST", 7, 0, 0, 0))
								{
									iLocal_3530 = 1;
								}
							}
						}
					}
					if (iLocal_3530 == 1 && iLocal_3532 == 0)
					{
						if (!func_228())
						{
							if (!unk_0xDBD19E93A4D01117() || !unk_0x3EA487B1116F83F7())
							{
								if (func_229(&uLocal_3577, "T1M4AUD", "SOL3_WATCH", 7, 0, 0, 0))
								{
									iLocal_3532 = 1;
								}
							}
						}
					}
					if (iLocal_3531 == 0)
					{
						if (unk_0x86CCCD2FAE9D5E65(iLocal_3221))
						{
							if (!unk_0x5FEB513A4402FD59(iLocal_3221))
							{
								if (unk_0xDD7720E17AF5FE17(uLocal_3208))
								{
									if (unk_0xF855C83E3A17514B(uLocal_3208) > 0.65f && unk_0xF855C83E3A17514B(uLocal_3208) < 0.835f)
									{
										if (!func_228())
										{
											if (!unk_0xDBD19E93A4D01117() || !unk_0x3EA487B1116F83F7())
											{
												if (func_229(&uLocal_3577, "T1M4AUD", "SOL3_SUCKS", 7, 0, 0, 0))
												{
													unk_0x2CEC5A597B1DFFE1(8f, 8f, 4);
													iLocal_3531 = 1;
												}
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_3564 == 0)
					{
						if (!unk_0x86CCCD2FAE9D5E65(iLocal_3221))
						{
							if (!func_228())
							{
								if (!unk_0xDBD19E93A4D01117() || !unk_0x3EA487B1116F83F7())
								{
									if (func_229(&uLocal_3577, "T1M4AUD", "T1M4_SMUSH", 7, 0, 0, 0))
									{
										iLocal_3564 = 1;
									}
								}
							}
						}
					}
					if (iLocal_3564 == 1 && iLocal_3565 == 0)
					{
						if (!func_228())
						{
							if (!unk_0xDBD19E93A4D01117() || !unk_0x3EA487B1116F83F7())
							{
								if (func_229(&uLocal_3577, "T1M4AUD", "T1M4_SMUSH2", 7, 0, 0, 0))
								{
									iLocal_3565 = 1;
								}
							}
						}
					}
				}
			}
			break;
		
		case 8:
			if (iLocal_3180 > 0)
			{
				if (iLocal_3184 == 0)
				{
					iLocal_3566 = 0;
					iLocal_3204 = unk_0x48E480685981C7D4();
					func_17(&uLocal_3577, 0, unk_0x81873881071CD9FE(), "Michael", 0, 1);
					iLocal_3184 = 1;
				}
				if (iLocal_3184 == 1)
				{
					if (iLocal_3566 == 0)
					{
						if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
						{
							iLocal_3256 = func_366(unk_0x81873881071CD9FE(), joaat("COP"), 0, 0, 28);
							if (unk_0x86CCCD2FAE9D5E65(iLocal_3256))
							{
								if (func_16(unk_0x81873881071CD9FE(), iLocal_3256, 1) < 40f)
								{
									if (!func_228())
									{
										if (!unk_0xDBD19E93A4D01117() || !unk_0x3EA487B1116F83F7())
										{
											if (func_229(&uLocal_3577, "T1M4AUD", "T1M4_COPS", 7, 0, 0, 0))
											{
												iLocal_3566 = 1;
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_3566 == 1 && unk_0x48E480685981C7D4() > iLocal_3204 + 5000)
					{
						if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
						{
							iLocal_3256 = func_366(unk_0x81873881071CD9FE(), joaat("COP"), 0, 0, 28);
							if (unk_0x86CCCD2FAE9D5E65(iLocal_3256))
							{
								if (func_16(unk_0x81873881071CD9FE(), iLocal_3256, 1) < 40f)
								{
									if (!func_228())
									{
										if (!unk_0xDBD19E93A4D01117() || !unk_0x3EA487B1116F83F7())
										{
											if (func_229(&uLocal_3577, "T1M4AUD", "T1M4_COPS", 7, 0, 0, 0))
											{
												iLocal_3204 = unk_0x48E480685981C7D4();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
	}
}

int func_366(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0[16];
	int iVar17;
	
	iVar17 = 0;
	if (!unk_0x5FEB513A4402FD59(iParam0))
	{
		unk_0x382F30F9319DA363(iParam0, &iVar0, iParam4);
		iVar17 = 0;
		while (iVar17 <= (iVar0 - 1))
		{
			if (unk_0x86CCCD2FAE9D5E65(iVar0[iVar17]))
			{
				if (!unk_0x5FEB513A4402FD59(iVar0[iVar17]))
				{
					if (unk_0x88594869E178AFA2(iVar0[iVar17]) == iParam1)
					{
						if (iParam2 <= 0)
						{
							if (iParam3 == 1)
							{
								if (unk_0x331E7ACCFD0869AD(iVar0[iVar17]))
								{
									return iVar0[iVar17];
								}
							}
							else
							{
								return iVar0[iVar17];
							}
						}
						else if (iVar17 + iParam2) <= (iVar0 - 1)
						{
							if (unk_0x86CCCD2FAE9D5E65(iVar0[(iVar17 + iParam2)]))
							{
								if (!unk_0x5FEB513A4402FD59(iVar0[(iVar17 + iParam2)]))
								{
									if (unk_0x88594869E178AFA2(iVar0[(iVar17 + iParam2)]) == iParam1)
									{
										if (iParam3 == 1)
										{
											if (unk_0x331E7ACCFD0869AD(iVar0[(iVar17 + iParam2)]))
											{
												return iVar0[(iVar17 + iParam2)];
											}
										}
										else
										{
											return iVar0[(iVar17 + iParam2)];
										}
									}
								}
							}
						}
					}
				}
			}
			iVar17++;
		}
	}
	return 0;
}

int func_367()
{
	if (Global_15693 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_368(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_227(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15741 = 1;
	Global_15700 = 1;
	Global_15707 = 0;
	Global_15702 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_15698 = 0;
	Global_15745 = 0;
	Global_15747 = 0;
	Global_2621441 = 0;
	return func_220(sParam3, iParam4, bParam7);
}

void func_369()
{
	if (((iLocal_3179 == 4 || iLocal_3179 == 5) || iLocal_3179 == 8) || iLocal_3179 == 6)
	{
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			if (func_370(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 2, 200, 0))
			{
				unk_0xDF7972620F9AA146(unk_0x1329891157A54C63());
				unk_0x7D76ECE8AFE31F19(unk_0x1329891157A54C63());
			}
		}
	}
	if (iLocal_3509 == 0)
	{
		if (iLocal_3179 == 4)
		{
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				if (func_370(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 2, 200, 0))
				{
					unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 3, 0);
					unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 0);
					iLocal_3509 = 1;
				}
			}
		}
	}
}

int func_370(struct<3> Param0, int iParam3, int iParam4, bool bParam5)
{
	struct<3> Var0[15];
	struct<3> Var46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	
	iVar110 = 0;
	switch (iParam3)
	{
		case 1:
			Var0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			Var46[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar92[0] = 171.25f;
			Var0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			Var46[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar92[1] = 132f;
			Var0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			Var46[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			Var46[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 247f;
			Var0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			Var46[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 149f;
			Var0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			Var46[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 185.5f;
			Var0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			Var46[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 250f;
			Var0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			Var46[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 193.5f;
			Var0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			Var46[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 234.5f;
			Var0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			Var46[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar92[6] = 16f;
			Var0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			Var46[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 80f;
			Var0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			Var46[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 142f;
			Var0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			Var46[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam4)) };
			fVar92[9] = 30.75f;
			Var0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			Var46[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam4)) };
			fVar92[10] = 150f;
			Var0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			Var46[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam4)) };
			fVar92[11] = 29.25f;
			Var0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			Var46[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam4)) };
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			Var46[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 250f;
			Var0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			Var46[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			Var0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			Var46[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 200f;
			Var0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			Var46[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			Var46[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 140.5f;
			Var0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			Var46[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 140.5f;
			Var0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			Var46[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam4)) };
			fVar92[6] = 90f;
			Var0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			Var46[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 100f;
			Var0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			Var46[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 248.75f;
			Var0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			Var46[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar92[9] = 128f;
			Var0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			Var46[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar92[10] = 127.25f;
			Var0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			Var46[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar92[11] = 16f;
			Var0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			Var46[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar92[12] = 214.25f;
			Var0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			Var46[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar92[13] = 65.75f;
			if (bParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			Var46[9 /*3*/].f_2 = (Var46[9 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[10 /*3*/].f_2 = (Var46[10 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[11 /*3*/].f_2 = (Var46[11 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[12 /*3*/].f_2 = (Var46[12 /*3*/].f_2 + IntToFloat(iVar111));
			Var46[13 /*3*/].f_2 = (Var46[13 /*3*/].f_2 + IntToFloat(iVar111));
			iVar108 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			Var46[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam4)) };
			fVar92[0] = 114f;
			Var0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			Var46[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam4)) };
			fVar92[1] = 88.5f;
			Var0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			Var46[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam4)) };
			fVar92[2] = 133.25f;
			Var0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			Var46[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam4)) };
			fVar92[3] = 104.5f;
			Var0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			Var46[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam4)) };
			fVar92[4] = 121.75f;
			Var0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			Var46[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam4)) };
			fVar92[5] = 84.5f;
			Var0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			Var46[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam4)) };
			fVar92[6] = 103.75f;
			Var0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			Var46[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam4)) };
			fVar92[7] = 104.25f;
			Var0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			Var46[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam4)) };
			fVar92[8] = 91f;
			Var0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			Var46[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam4)) };
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			Var46[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam4)) };
			fVar92[0] = 45.75f;
			Var0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			Var46[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam4)) };
			fVar92[1] = 99f;
			Var0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			Var46[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam4)) };
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			Var46[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam4)) };
			fVar92[0] = 120f;
			Var0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			Var46[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar92[1] = 170f;
			Var0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			Var46[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar92[2] = 12.5f;
			Var0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			Var46[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			Var46[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam4)) };
			fVar92[0] = 162f;
			Var0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			Var46[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam4)) };
			fVar92[1] = 124f;
			Var0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			Var46[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam4)) };
			fVar92[2] = 55f;
			Var0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			Var46[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam4)) };
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			Var46[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar92[0] = 7.75f;
			Var0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			Var46[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar92[1] = 14.75f;
			Var0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			Var46[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar92[2] = 31.5f;
			Var0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			Var46[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar92[3] = 30.5f;
			Var0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			Var46[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (unk_0xE15A3D0C3294EAF3(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

void func_371()
{
	if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
	{
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			iLocal_3258 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
		}
	}
}

void func_372()
{
	if (iLocal_3350 == 1)
	{
		if (iLocal_3179 == 4)
		{
			if (iLocal_3181 > 1 && iLocal_3474 == 0)
			{
				if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -828.6987f, -2938.073f, 12.21745f, -807.6911f, -2905.148f, 16.35626f, 28f, 0, 1, 0))
				{
					func_206("TRV4_FAIL1");
				}
			}
		}
		if (iLocal_3179 == 6)
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_3282))
			{
				if (unk_0xFBACB273AA628CC5(uLocal_3287))
				{
					if (func_16(unk_0x81873881071CD9FE(), iLocal_3282, 1) > 100f)
					{
						func_206("TRV4_FAIL6");
					}
				}
			}
		}
		if (iLocal_3179 == 4)
		{
			if (iLocal_3181 == 2)
			{
				if (unk_0x48E480685981C7D4() > iLocal_3193 + 7000 && iLocal_3507 == 0)
				{
					func_206("TRV4_FAIL1");
				}
			}
		}
		if (iLocal_3179 == 4)
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
			{
				if (unk_0x7404950238A154C2(iLocal_3257, 0))
				{
					if (unk_0xE20321A2D7F8960C(iLocal_3257))
					{
						if (unk_0x678BA9CA7610A13E(iLocal_3257) > 62000f && unk_0x678BA9CA7610A13E(iLocal_3257) < 77000f)
						{
							if (unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), -1219f, -2570f, 13f, 1) < 210f)
							{
								if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
								{
									if (unk_0x3306AAAFE3B25098(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)) < 200f && unk_0x3306AAAFE3B25098(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)) > 125f)
									{
										if (iLocal_3506 == 0)
										{
											iLocal_3196 = unk_0x48E480685981C7D4();
											iLocal_3506 = 1;
										}
										if (iLocal_3506 == 1 && unk_0x48E480685981C7D4() > iLocal_3196 + 4000)
										{
											func_206("TRV4_FAIL1");
										}
									}
									else if (iLocal_3506 == 1)
									{
										iLocal_3506 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3179 == 5 || iLocal_3179 == 6)
		{
			if (unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), -928.9f, -2935f, 13f, 1) < 5f && !unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63()))
			{
				func_206("TRV4_FAIL1");
			}
		}
		if (iLocal_3179 == 2 || iLocal_3179 == 4)
		{
			if (unk_0xF8F0C55E476A5A81(unk_0x81873881071CD9FE()) || unk_0x25B75802E65C5545(unk_0x81873881071CD9FE()))
			{
				if (func_370(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 2, 200, 0))
				{
					func_206("TRV4_FAIL2");
				}
				else if (!func_182("TRV4_HELP3"))
				{
					func_375("TRV4_HELP3");
				}
			}
			else if (func_182("TRV4_HELP3"))
			{
				unk_0xB8BB626315D394F5(1);
			}
		}
		if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
		{
			if (!unk_0x7404950238A154C2(iLocal_3257, 0))
			{
				if (unk_0x86CCCD2FAE9D5E65(iLocal_3221))
				{
					if (!unk_0x5FEB513A4402FD59(iLocal_3221))
					{
						unk_0x210A4A0B257F8433(iLocal_3221, 0);
						unk_0x9765BF567DB87B5F(iLocal_3221, 0);
					}
				}
			}
		}
		if (iLocal_3359 == 1)
		{
			if (unk_0x86CCCD2FAE9D5E65(iLocal_3221))
			{
				if (unk_0x5FEB513A4402FD59(iLocal_3221))
				{
					func_206("TRV4_FAIL3");
				}
			}
		}
		if (iLocal_3179 == 4)
		{
			if (iLocal_3351 == 1)
			{
				if (!unk_0x5FEB513A4402FD59(iLocal_3221))
				{
					if (func_13(unk_0x81873881071CD9FE(), iLocal_3221) > 300f)
					{
						if (iLocal_3435 == 1)
						{
							unk_0xD1C83BD797927DD5();
							func_20("TRV4_WARN1", 7500, 1);
							iLocal_3435 = 0;
						}
					}
					else if (iLocal_3435 == 0)
					{
						iLocal_3435 = 1;
					}
					if (unk_0x7404950238A154C2(iLocal_3257, 0))
					{
						if (unk_0xE20321A2D7F8960C(iLocal_3257))
						{
							if (unk_0x678BA9CA7610A13E(iLocal_3257) < 40000f)
							{
								if (func_13(unk_0x81873881071CD9FE(), iLocal_3221) > 400f)
								{
									func_206("TRV4_FAIL1");
								}
							}
							else if (func_13(unk_0x81873881071CD9FE(), iLocal_3221) > 350f)
							{
								func_206("TRV4_FAIL1");
							}
						}
					}
				}
			}
			if (iLocal_3181 == 3)
			{
				if (iLocal_3475 == 1)
				{
					if (unk_0x0D6E79537424BACE(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), -934.4f, -2927.2f, 13.2f, 1) > 25f || unk_0x48E480685981C7D4() > iLocal_3194 + 12000)
					{
						func_206("TRV4_FAIL1");
					}
				}
			}
		}
		if (iLocal_3179 == 2 || iLocal_3179 == 4)
		{
			if (unk_0x2ADC2166A28358CB(unk_0x81873881071CD9FE()))
			{
				func_206("TRV4_FAIL1");
			}
		}
		if (iLocal_3179 == 4)
		{
			if (unk_0x7404950238A154C2(iLocal_3257, 0))
			{
				if (unk_0xE20321A2D7F8960C(iLocal_3257))
				{
					if (unk_0x678BA9CA7610A13E(iLocal_3257) > 111509f)
					{
						if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -1070.838f, -2942.241f, 12.19534f, -1009.038f, -2977.609f, 17.44443f, 89.5f, 0, 1, 0))
						{
							func_206("TRV4_FAIL1");
						}
					}
					if (unk_0x678BA9CA7610A13E(iLocal_3257) > 122000f)
					{
						if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
						{
							if (unk_0x69F59C68E86FDF3D(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0)))
							{
								if (iLocal_3508 == 0)
								{
									iLocal_3197 = unk_0x48E480685981C7D4();
									iLocal_3508 = 1;
								}
								if (iLocal_3508 == 1)
								{
									if (unk_0x48E480685981C7D4() > iLocal_3197 + 4000)
									{
										func_206("TRV4_FAIL1");
									}
								}
							}
							else
							{
								iLocal_3508 = 0;
							}
						}
					}
				}
			}
		}
		if (iLocal_3179 == 2)
		{
			if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -803.4108f, -2173.417f, -1.911488f, -605.6846f, -2358.229f, 27.32842f, 250f, 0, 1, 0))
			{
				func_206("TRV4_FAIL1");
			}
		}
		if (iLocal_3436 == 1)
		{
			if (func_374())
			{
				func_373();
			}
		}
	}
}

void func_373()
{
	func_381(unk_0x81873881071CD9FE(), 0);
	func_377();
}

int func_374()
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

void func_375(char* sParam0)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0xC592EBAF1D879BDC(0, 1, 1, -1);
}

void func_376(bool bParam0)
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

void func_377()
{
	func_383(24, 1);
	unk_0x59BBCA8743D045AE("PoliceScannerDisabled", 0);
	unk_0x3DD1ED742E99F292(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, 1, 1);
	func_378();
	func_181(&uLocal_27, 0, 0);
	unk_0xDD17978B9F91686B(0);
	unk_0x057B94C6D10C1119(0);
	unk_0xABF33AFE6B2877A8();
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3270))
	{
		unk_0x5D00E836B6BE8693(&iLocal_3270);
	}
	func_376(0);
	if (unk_0x239FCE53874D846F(uLocal_3220))
	{
		unk_0x8492108E769E5C1B(uLocal_3220);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3221))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_3221))
		{
			unk_0x6CB332CB31E9FA96(iLocal_3221, 1);
		}
		unk_0x71A8BCA218722FA1(&iLocal_3221);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3227))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_3227))
		{
			unk_0x6CB332CB31E9FA96(iLocal_3227, 1);
		}
		unk_0x71A8BCA218722FA1(&iLocal_3227);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3244))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_3244))
		{
			unk_0x6CB332CB31E9FA96(iLocal_3244, 1);
		}
		unk_0x71A8BCA218722FA1(&iLocal_3244);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3245))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_3245))
		{
			unk_0x6CB332CB31E9FA96(iLocal_3245, 1);
		}
		unk_0x71A8BCA218722FA1(&iLocal_3245);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3246))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_3246))
		{
			unk_0x6CB332CB31E9FA96(iLocal_3246, 1);
		}
		unk_0x71A8BCA218722FA1(&iLocal_3246);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3247))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_3247))
		{
			unk_0x6CB332CB31E9FA96(iLocal_3247, 1);
		}
		unk_0x71A8BCA218722FA1(&iLocal_3247);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3248))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_3248))
		{
			unk_0x6CB332CB31E9FA96(iLocal_3248, 1);
		}
		unk_0x71A8BCA218722FA1(&iLocal_3248);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3249))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_3249))
		{
			unk_0x6CB332CB31E9FA96(iLocal_3249, 1);
		}
		unk_0x71A8BCA218722FA1(&iLocal_3249);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3222[0]))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_3222[0]))
		{
			unk_0x6CB332CB31E9FA96(iLocal_3222[0], 1);
		}
		unk_0x71A8BCA218722FA1(&(iLocal_3222[0]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3222[1]))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_3222[1]))
		{
			unk_0x6CB332CB31E9FA96(iLocal_3222[1], 1);
		}
		unk_0x71A8BCA218722FA1(&(iLocal_3222[1]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3222[2]))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_3222[2]))
		{
			unk_0x6CB332CB31E9FA96(iLocal_3222[2], 1);
		}
		unk_0x71A8BCA218722FA1(&(iLocal_3222[2]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3222[3]))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_3222[3]))
		{
			unk_0x6CB332CB31E9FA96(iLocal_3222[3], 1);
		}
		unk_0x71A8BCA218722FA1(&(iLocal_3222[3]));
	}
	if (unk_0x86CCCD2FAE9D5E65(uLocal_3228[0]))
	{
		if (!unk_0x5FEB513A4402FD59(uLocal_3228[0]))
		{
			unk_0x6CB332CB31E9FA96(uLocal_3228[0], 1);
		}
		unk_0x71A8BCA218722FA1(&(uLocal_3228[0]));
	}
	if (unk_0x86CCCD2FAE9D5E65(uLocal_3228[1]))
	{
		if (!unk_0x5FEB513A4402FD59(uLocal_3228[1]))
		{
			unk_0x6CB332CB31E9FA96(uLocal_3228[1], 1);
		}
		unk_0x71A8BCA218722FA1(&(uLocal_3228[1]));
	}
	if (unk_0x86CCCD2FAE9D5E65(uLocal_3228[2]))
	{
		if (!unk_0x5FEB513A4402FD59(uLocal_3228[2]))
		{
			unk_0x6CB332CB31E9FA96(uLocal_3228[2], 1);
		}
		unk_0x71A8BCA218722FA1(&(uLocal_3228[2]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[0]))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_3232[0]))
		{
			unk_0x6CB332CB31E9FA96(iLocal_3232[0], 1);
		}
		unk_0x71A8BCA218722FA1(&(iLocal_3232[0]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[1]))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_3232[1]))
		{
			unk_0x6CB332CB31E9FA96(iLocal_3232[1], 1);
		}
		unk_0x71A8BCA218722FA1(&(iLocal_3232[1]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[2]))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_3232[2]))
		{
			unk_0x6CB332CB31E9FA96(iLocal_3232[2], 1);
		}
		unk_0x71A8BCA218722FA1(&(iLocal_3232[2]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[3]))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_3232[3]))
		{
			unk_0x6CB332CB31E9FA96(iLocal_3232[3], 1);
		}
		unk_0x71A8BCA218722FA1(&(iLocal_3232[3]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[4]))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_3232[4]))
		{
			unk_0x6CB332CB31E9FA96(iLocal_3232[4], 1);
		}
		unk_0x71A8BCA218722FA1(&(iLocal_3232[4]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[5]))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_3232[5]))
		{
			unk_0x6CB332CB31E9FA96(iLocal_3232[5], 1);
		}
		unk_0x71A8BCA218722FA1(&(iLocal_3232[5]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[6]))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_3232[6]))
		{
			unk_0x6CB332CB31E9FA96(iLocal_3232[6], 1);
		}
		unk_0x71A8BCA218722FA1(&(iLocal_3232[6]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[7]))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_3232[7]))
		{
			unk_0x6CB332CB31E9FA96(iLocal_3232[7], 1);
		}
		unk_0x71A8BCA218722FA1(&(iLocal_3232[7]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[8]))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_3232[8]))
		{
			unk_0x6CB332CB31E9FA96(iLocal_3232[8], 1);
		}
		unk_0x71A8BCA218722FA1(&(iLocal_3232[8]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[9]))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_3232[9]))
		{
			unk_0x6CB332CB31E9FA96(iLocal_3232[9], 1);
		}
		unk_0x71A8BCA218722FA1(&(iLocal_3232[9]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3232[10]))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_3232[10]))
		{
			unk_0x6CB332CB31E9FA96(iLocal_3232[10], 1);
		}
		unk_0x71A8BCA218722FA1(&(iLocal_3232[10]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3250[0]))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_3250[0]))
		{
			unk_0x6CB332CB31E9FA96(iLocal_3250[0], 1);
		}
		unk_0x71A8BCA218722FA1(&(iLocal_3250[0]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3253[0]))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_3253[0]))
		{
			unk_0x6CB332CB31E9FA96(iLocal_3253[0], 1);
		}
		unk_0x71A8BCA218722FA1(&(iLocal_3253[0]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3253[1]))
	{
		if (!unk_0x5FEB513A4402FD59(iLocal_3253[1]))
		{
			unk_0x6CB332CB31E9FA96(iLocal_3253[1], 1);
		}
		unk_0x71A8BCA218722FA1(&(iLocal_3253[1]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3257))
	{
		unk_0xE0913C01F5C0CC3D(&iLocal_3257);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3258))
	{
		if (unk_0x46AE53A47E5D03D5(iLocal_3258, 0))
		{
			unk_0xE0913C01F5C0CC3D(&iLocal_3258);
		}
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3263))
	{
		unk_0xE0913C01F5C0CC3D(&iLocal_3263);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3264))
	{
		unk_0xE0913C01F5C0CC3D(&iLocal_3264);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3265))
	{
		unk_0xE0913C01F5C0CC3D(&iLocal_3265);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3266))
	{
		unk_0xE0913C01F5C0CC3D(&iLocal_3266);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3270))
	{
		unk_0xE0913C01F5C0CC3D(&iLocal_3270);
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3274))
	{
		if (unk_0x46AE53A47E5D03D5(iLocal_3274, 0))
		{
			unk_0xE0913C01F5C0CC3D(&iLocal_3274);
		}
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3278[0]))
	{
		unk_0xE0913C01F5C0CC3D(&(iLocal_3278[0]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3278[1]))
	{
		unk_0xE0913C01F5C0CC3D(&(iLocal_3278[1]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3259[0]))
	{
		unk_0xE0913C01F5C0CC3D(&(iLocal_3259[0]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3259[1]))
	{
		unk_0xE0913C01F5C0CC3D(&(iLocal_3259[1]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3278[0]))
	{
		unk_0xE0913C01F5C0CC3D(&(iLocal_3278[0]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3278[1]))
	{
		unk_0xE0913C01F5C0CC3D(&(iLocal_3278[1]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3267[0]))
	{
		unk_0xE0913C01F5C0CC3D(&(iLocal_3267[0]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3267[1]))
	{
		unk_0xE0913C01F5C0CC3D(&(iLocal_3267[1]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3271[0]))
	{
		unk_0xE0913C01F5C0CC3D(&(iLocal_3271[0]));
	}
	if (unk_0x86CCCD2FAE9D5E65(iLocal_3262))
	{
		unk_0xE0913C01F5C0CC3D(&iLocal_3262);
	}
	unk_0x9CEDFD70C55A7F8F("TRV4_START");
	unk_0x9CEDFD70C55A7F8F("TRV4_GAMEPLAY_START");
	unk_0x9CEDFD70C55A7F8F("TRV4_START_CS_SKIP");
	unk_0x9CEDFD70C55A7F8F("TRV4_START_RT");
	unk_0x9CEDFD70C55A7F8F("TRV4_FOOT_CHASE_RT");
	unk_0x9CEDFD70C55A7F8F("TRV4_EVADE_RT");
	unk_0x9CEDFD70C55A7F8F("TRV4_CAR_ENTERED");
	unk_0x9CEDFD70C55A7F8F("TRV4_AIRPORT_ENTERED");
	unk_0x9CEDFD70C55A7F8F("TRV4_CHASE");
	unk_0x9CEDFD70C55A7F8F("TRV4_JET_ENTERED");
	if (unk_0x0017826B6757A11F(iLocal_3219))
	{
		unk_0xFD441218304BE040(iLocal_3219);
	}
	if (unk_0x3D675D69D18A10E9(uLocal_3762))
	{
		unk_0x82463470A763AABA(uLocal_3762, 0);
	}
	unk_0x169327598E00BC8A();
	unk_0x4B6F01DE8CCE643E(&uLocal_3292);
	unk_0x9B331DCFDFC55491("digitalOverlay");
	unk_0xEB1F3AEB071C6A9E(-617f, -2274f, 0f, -406.01f, -2044f, 15f, 1, 1);
	unk_0xEB1F3AEB071C6A9E(-482f, -2118f, 6f, -1072f, -2724f, 17f, 1, 1);
	if (unk_0x0F7866B4F5BE7CD4("Trev4_5"))
	{
		unk_0x228E7FCA637CBD19("Trev4_5", 0, 0.5f, 1f);
	}
	unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), true, 0);
	unk_0xCF2F32222FF93448(1f);
	unk_0x3BF4F473786B0150(1);
	unk_0xF1BC58601CA4A5C7(1);
	unk_0xD8323B49BAE93D80("missheist_agency3aig_lift_waitped_a");
	func_259(0);
	unk_0x0D7089406F6A5C6E(1);
	if (func_19(2))
	{
		func_18(2, 0);
	}
	unk_0xC23A229F78DAD92A();
}

void func_378()
{
	int iVar0;
	
	Global_55431 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_55432[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

void func_379()
{
	int iVar0;
	
	if (unk_0x06D4A1BE3DF77306("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_98931.f_7699 || func_390(0))
	{
		if (!func_380())
		{
			iVar0 = func_8();
			if (iVar0 != -1)
			{
				if (!func_209(iVar0))
				{
					return;
				}
				unk_0xF3148AAF69AF9CBC(&(Global_81894[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_214();
		}
	}
}

int func_380()
{
	if (((Global_90809 == 13 || Global_90809 == 10) || Global_90809 == 11) || Global_90809 == 12)
	{
		return 0;
	}
	return 1;
}

void func_381(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		if (unk_0x5F446E70DA9B8122(iParam0, &iVar0, 0))
		{
			if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
			{
				if (!func_382(iParam1, iVar0))
				{
					iVar0 = 0;
				}
			}
		}
	}
	if (Global_90846 > 0)
	{
		Global_94997.f_21[iParam1] = iVar0;
	}
	else
	{
		Global_92592.f_21[iParam1] = iVar0;
	}
}

int func_382(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_90846 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_94997.f_812[iParam0 /*284*/][iVar0 /*3*/] == iParam1)
			{
				if (Global_94997.f_812[iParam0 /*284*/][iVar0 /*3*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (Global_94997.f_812[iParam0 /*284*/].f_133[iVar0 /*3*/] == iParam1)
			{
				if (Global_94997.f_812[iParam0 /*284*/].f_133[iVar0 /*3*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_92592.f_812[iParam0 /*284*/][iVar0 /*3*/] == iParam1)
			{
				if (Global_92592.f_812[iParam0 /*284*/][iVar0 /*3*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (Global_92592.f_812[iParam0 /*284*/].f_133[iVar0 /*3*/] == iParam1)
			{
				if (Global_92592.f_812[iParam0 /*284*/].f_133[iVar0 /*3*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_383(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_387(iParam0, &iVar1);
	if (!unk_0xD994929E13CC1ED5("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (unk_0x722B1277ED8601B6(iVar1))
			{
				return;
			}
			if (unk_0x74D4E5ACB4DAF9B8(unk_0x81873881071CD9FE()) == iVar1)
			{
				func_386(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!unk_0x722B1277ED8601B6(iVar1))
			{
				return;
			}
			if (func_384(iParam0))
			{
				func_386(iParam0, 0);
			}
		}
		unk_0x1409374EEBBAEF54(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_384(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_385(iParam0) };
	if (unk_0x236D8AD7EE179F46(Global_31307[Var0.f_1], Var0.f_0))
	{
		return 1;
	}
	return 0;
}

struct<2> func_385(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	
	iVar0 = uParam0;
	iVar1 = 0;
	iVar2 = 0;
	Var3.f_0 = -1;
	Var3.f_1 = -1;
	while (iVar1 < 2)
	{
		iVar2 += 32;
		if (iVar0 < iVar2)
		{
			Var3.f_1 = iVar1;
			Var3.f_0 = (iVar0 - Var3.f_1 * 32);
			return Var3;
		}
		iVar1++;
	}
	return Var3;
}

void func_386(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_385(iParam0) };
	if (bParam1)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_31307[Var0.f_1]), Var0.f_0);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_31307[Var0.f_1]), Var0.f_0);
	}
}

var func_387(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_388(iParam0) };
	*iParam1 = unk_0xA17AB437A96481B6(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_388(int iParam0)
{
	struct<5> Var0;
	struct<3> Var5;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			Var5 = { func_389(1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var5 = { func_389(2) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var5 = { func_389(3) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var5 = { func_389(4) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var5 = { func_389(5) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var5 = { func_389(6) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var5 = { func_389(7) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1049033[34 /*1485*/].f_146.f_1101 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var5 = { func_389(35) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var5 = { func_389(36) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var5 = { func_389(37) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var5 = { func_389(38) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var5 = { func_389(39) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var5 = { func_389(40) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var5 = { func_389(41) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var5 = { func_389(42) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var5 = { func_389(43) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 47:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 48:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 49:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 50:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<6> func_389(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

bool func_390(bool bParam0)
{
	if (!bParam0 && unk_0x968BF1C2C695B61A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x236D8AD7EE179F46(Global_69268, 0);
}

