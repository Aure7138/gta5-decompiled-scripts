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
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = -1;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 1000;
	var uLocal_38 = 1000;
	var uLocal_39 = 0;
	bool bLocal_40 = 0;
	bool bLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	float fLocal_51 = 0f;
	float fLocal_52 = 0f;
	float fLocal_53 = 0f;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	float fLocal_58 = 0f;
	float fLocal_59 = 0f;
	float fLocal_60 = 0f;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	bool bLocal_77 = 0;
	bool bLocal_78 = 0;
	bool bLocal_79 = 0;
	bool bLocal_80 = 0;
	bool bLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	bool bLocal_84 = 0;
	bool bLocal_85 = 0;
	int iLocal_86 = 0;
	bool bLocal_87 = 0;
	bool bLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	bool bLocal_93 = 0;
	bool bLocal_94 = 0;
	bool bLocal_95 = 0;
	int iLocal_96 = 0;
	bool bLocal_97 = 0;
	var uLocal_98 = 0;
	bool bLocal_99 = 0;
	bool bLocal_100 = 0;
	bool bLocal_101 = 0;
	bool bLocal_102 = 0;
	bool bLocal_103 = 0;
	bool bLocal_104 = 0;
	bool bLocal_105 = 0;
	bool bLocal_106 = 0;
	bool bLocal_107 = 0;
	bool bLocal_108 = 0;
	float fLocal_109[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_285[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_461[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_637[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_813[175] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_989 = 0f;
	float fLocal_990 = 0f;
	float fLocal_991 = 0f;
	float fLocal_992 = 0f;
	float fLocal_993[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1029[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1065[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1101[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1137[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1173[35] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1209[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1225[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1241[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_1257[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
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
	float fLocal_1293 = 0f;
	int iLocal_1294[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1470[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1646[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1822[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1858[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1894[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1930[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	int iLocal_1962 = 0;
	struct<3> Local_1963[175];
	struct<3> Local_2489[15];
	struct<3> Local_2535[35];
	struct<3> Local_2641 = { 0, 0, 0 } ;
	struct<3> Local_2644 = { 0, 0, 0 } ;
	struct<3> Local_2647 = { 0, 0, 0 } ;
	struct<3> Local_2650 = { 0, 0, 0 } ;
	struct<3> Local_2653 = { 0, 0, 0 } ;
	struct<3> Local_2656 = { 0, 0, 0 } ;
	struct<3> Local_2659 = { 0, 0, 0 } ;
	struct<3> Local_2662 = { 0, 0, 0 } ;
	struct<3> Local_2665 = { 0, 0, 0 } ;
	char cLocal_2668[64] = "";
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	int iLocal_2684 = 0;
	int iLocal_2685[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2861[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2877[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2913 = 0;
	int iLocal_2914 = 0;
	int iLocal_2915 = 0;
	int iLocal_2916[175] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3092[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3105[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3121[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3157[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_3164 = 0;
	int iLocal_3165 = 0;
	int iLocal_3166 = 0;
	var uLocal_3167 = 12;
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
	var uLocal_3179 = 0;
	int iLocal_3180 = 0;
	int iLocal_3181 = 0;
	int iLocal_3182 = 0;
	int iLocal_3183 = 0;
	var uLocal_3184 = 0;
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
	int iLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 0;
	var uLocal_3210 = 0;
	int iLocal_3211 = 0;
	int iLocal_3212 = 0;
	int iLocal_3213 = 0;
	int iLocal_3214 = 0;
	int iLocal_3215 = 0;
	int iLocal_3216 = 0;
	int iLocal_3217 = 0;
	int iLocal_3218 = 0;
	int iLocal_3219 = 0;
	int iLocal_3220 = 0;
	var uLocal_3221 = 0;
	int iLocal_3222 = 0;
	int iLocal_3223[4] = { 0, 0, 0, 0 };
	int iLocal_3228 = 0;
	var uLocal_3229[3] = { 0, 0, 0 };
	int iLocal_3233[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3245 = 0;
	int iLocal_3246 = 0;
	int iLocal_3247 = 0;
	int iLocal_3248 = 0;
	int iLocal_3249 = 0;
	int iLocal_3250 = 0;
	int iLocal_3251[2] = { 0, 0 };
	int iLocal_3254[2] = { 0, 0 };
	int iLocal_3257 = 0;
	int iLocal_3258 = 0;
	int iLocal_3259 = 0;
	int iLocal_3260[2] = { 0, 0 };
	int iLocal_3263 = 0;
	int iLocal_3264 = 0;
	int iLocal_3265 = 0;
	int iLocal_3266 = 0;
	int iLocal_3267 = 0;
	int iLocal_3268[2] = { 0, 0 };
	int iLocal_3271 = 0;
	int iLocal_3272[2] = { 0, 0 };
	int iLocal_3275 = 0;
	int iLocal_3276 = 0;
	int iLocal_3277 = 0;
	int iLocal_3278 = 0;
	int iLocal_3279[2] = { 0, 0 };
	int iLocal_3282 = 0;
	int iLocal_3283 = 0;
	int iLocal_3284 = 0;
	var uLocal_3285 = 0;
	var uLocal_3286 = 0;
	var uLocal_3287 = 0;
	var uLocal_3288 = 0;
	var uLocal_3289 = 0;
	var uLocal_3290 = 0;
	var uLocal_3291 = 0;
	var uLocal_3292 = 0;
	var uLocal_3293 = 0;
	struct<3> Local_3294 = { 0, 0, 0 } ;
	struct<3> Local_3297 = { 0, 0, 0 } ;
	struct<3> Local_3300 = { 0, 0, 0 } ;
	struct<3> Local_3303 = { 0, 0, 0 } ;
	var uLocal_3306 = 0;
	var uLocal_3307 = 0;
	var uLocal_3308 = 0;
	var uLocal_3309 = 0;
	var uLocal_3310 = 0;
	var uLocal_3311 = 0;
	struct<3> Local_3312 = { 0, 0, 0 } ;
	struct<3> Local_3315 = { 0, 0, 0 } ;
	struct<3> Local_3318 = { 0, 0, 0 } ;
	float fLocal_3321 = 0f;
	float fLocal_3322 = 0f;
	float fLocal_3323 = 0f;
	float fLocal_3324 = 0f;
	float fLocal_3325 = 0f;
	float fLocal_3326 = 0f;
	int iLocal_3327 = 0;
	int iLocal_3328 = 0;
	var uLocal_3329 = 0;
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
	int iLocal_3364 = 0;
	int iLocal_3365[3] = { 0, 0, 0 };
	int iLocal_3369[2] = { 0, 0 };
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
	int iLocal_3399 = 0;
	var uLocal_3400 = 0;
	int iLocal_3401 = 0;
	int iLocal_3402 = 0;
	int iLocal_3403 = 0;
	int iLocal_3404[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	int iLocal_3444 = 0;
	int iLocal_3445[19] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	int iLocal_3479 = 0;
	int iLocal_3480[2] = { 0, 0 };
	int iLocal_3483[2] = { 0, 0 };
	int iLocal_3486 = 0;
	int iLocal_3487 = 0;
	int iLocal_3488 = 0;
	int iLocal_3489 = 0;
	int iLocal_3490[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3498[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_3506 = 0;
	int iLocal_3507 = 0;
	int iLocal_3508 = 0;
	int iLocal_3509 = 0;
	int iLocal_3510 = 0;
	int iLocal_3511 = 0;
	int iLocal_3512 = 0;
	int iLocal_3513 = 0;
	int iLocal_3514 = 0;
	int iLocal_3515 = 0;
	int iLocal_3516[3] = { 0, 0, 0 };
	int iLocal_3520[2] = { 0, 0 };
	int iLocal_3523 = 0;
	int iLocal_3524[4] = { 0, 0, 0, 0 };
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
	int iLocal_3542 = 0;
	int iLocal_3543[3] = { 0, 0, 0 };
	int iLocal_3547[3] = { 0, 0, 0 };
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
	int iLocal_3570 = 0;
	int iLocal_3571[4] = { 0, 0, 0, 0 };
	int iLocal_3576 = 0;
	char* sLocal_3577 = NULL;
	var uLocal_3578 = 16;
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
	var uLocal_3749 = 0;
	var uLocal_3750 = 21;
	var uLocal_3751 = 6;
	var uLocal_3752 = 0;
	var uLocal_3753 = 0;
	var uLocal_3754 = 0;
	var uLocal_3755[3] = { 0, 0, 0 };
	var uLocal_3759 = 0;
	var uLocal_3760 = 0;
	var uLocal_3761 = 0;
	var uLocal_3762 = 0;
	var uLocal_3763 = 0;
	var uLocal_3764 = 0;
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
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_55 = 3;
	fLocal_58 = 80f;
	fLocal_59 = 140f;
	fLocal_60 = 180f;
	iLocal_66 = 1;
	iLocal_67 = 65;
	iLocal_68 = 49;
	iLocal_69 = 64;
	uLocal_73 = unk_0x41A93ECFFBBAC499();
	uLocal_74 = unk_0xEF74E92BF5AB1FC4();
	bLocal_78 = true;
	bLocal_85 = true;
	bLocal_107 = true;
	fLocal_1273 = 120f;
	fLocal_1274 = 0f;
	fLocal_1276 = 1f;
	fLocal_1277 = 0f;
	fLocal_1278 = 1f;
	fLocal_1279 = 30f;
	fLocal_1281 = 1f;
	fLocal_1282 = 5f;
	fLocal_1283 = 1f;
	fLocal_1284 = 1f;
	fLocal_1285 = 100f;
	fLocal_1286 = 100f;
	fLocal_1287 = 0f;
	fLocal_1288 = 7000f;
	fLocal_1289 = 0f;
	fLocal_1290 = 0f;
	fLocal_1291 = 0.3f;
	fLocal_1292 = 0.5f;
	fLocal_1293 = 50f;
	iLocal_1949 = -1;
	iLocal_1957 = -1;
	iLocal_1958 = -1;
	Local_3294 = { -1024.1f, -485.3321f, 35.9816f };
	Local_3297 = { -428.0263f, -2153.577f, 9.2997f };
	Local_3300 = { -498.7f, -2136.5f, 8.4f };
	Local_3312 = { -272.8615f, -2186.932f, 9.3174f };
	fLocal_3321 = 209.7233f;
	fLocal_3322 = 90.947f;
	fLocal_3325 = 46.7161f;
	if (func_390(0))
	{
		func_383(24, 0);
	}
	unk_0xDFB60ABAB3033893(0);
	unk_0xD20ADBE7BCFF20AB("EXTRASUNNY", 20f);
	if (unk_0x89522B8E487D4EF9(3))
	{
		func_381(unk_0xE7869D5D7816A9B6(), 0);
		unk_0xE72D045151F6CA70("TRV4_FAIL");
		func_379();
		func_377();
	}
	func_376(1);
	unk_0x3F95CDEE236B6AD7(1);
	iLocal_3181 = 0;
	iLocal_3180 = 0;
	while (true)
	{
		unk_0xE10447427D928F55("M_LegalTrouble", 0);
		if (iLocal_3207 > unk_0x9D40BBF80D8F5E8A())
		{
			unk_0xA67F231DA4AFAB1F();
		}
		func_372();
		func_371();
		func_369();
		func_365();
		func_364();
		switch (iLocal_3180)
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
	if (iLocal_3443 == 0)
	{
		if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
		{
			func_4(unk_0xE7869D5D7816A9B6(), 476);
			iLocal_3443 = 1;
		}
	}
	if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
		{
			if (iLocal_3444 == 0)
			{
				iLocal_3275 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
				if (unk_0xD51CFE69539DB6D8(iLocal_3275))
				{
					if (unk_0xC45A34912542C4EB(iLocal_3275, 0))
					{
						func_3(iLocal_3275, -1);
						func_4(iLocal_3275, 479);
						iLocal_3444 = 1;
					}
				}
			}
		}
		else
		{
			func_4(0, 479);
			func_3(0, -1);
			if (iLocal_3444 == 1)
			{
				iLocal_3444 = 0;
			}
		}
	}
	if (iLocal_3445[0] == 0)
	{
		if (unk_0xD51CFE69539DB6D8(uLocal_3229[0]))
		{
			if (unk_0xAF437D7C802AB246(uLocal_3229[0]))
			{
				iLocal_3191++;
				iLocal_3445[0] = 1;
			}
		}
	}
	if (iLocal_3445[1] == 0)
	{
		if (unk_0xD51CFE69539DB6D8(uLocal_3229[1]))
		{
			if (unk_0xAF437D7C802AB246(uLocal_3229[1]))
			{
				iLocal_3191++;
				iLocal_3445[1] = 1;
			}
		}
	}
	if (iLocal_3445[2] == 0)
	{
		if (unk_0xD51CFE69539DB6D8(uLocal_3229[2]))
		{
			if (unk_0xAF437D7C802AB246(uLocal_3229[2]))
			{
				iLocal_3191++;
				iLocal_3445[2] = 1;
			}
		}
	}
	if (iLocal_3445[3] == 0)
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_3233[0]))
		{
			if (unk_0xAF437D7C802AB246(iLocal_3233[0]))
			{
				iLocal_3191++;
				iLocal_3445[3] = 1;
			}
		}
	}
	if (iLocal_3445[4] == 0)
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_3233[1]))
		{
			if (unk_0xAF437D7C802AB246(iLocal_3233[1]))
			{
				iLocal_3191++;
				iLocal_3445[4] = 1;
			}
		}
	}
	if (iLocal_3445[5] == 0)
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_3233[2]))
		{
			if (unk_0xAF437D7C802AB246(iLocal_3233[2]))
			{
				iLocal_3191++;
				iLocal_3445[5] = 1;
			}
		}
	}
	if (iLocal_3445[6] == 0)
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_3233[3]))
		{
			if (unk_0xAF437D7C802AB246(iLocal_3233[3]))
			{
				iLocal_3191++;
				iLocal_3445[6] = 1;
			}
		}
	}
	if (iLocal_3445[7] == 0)
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_3233[4]))
		{
			if (unk_0xAF437D7C802AB246(iLocal_3233[4]))
			{
				iLocal_3191++;
				iLocal_3445[7] = 1;
			}
		}
	}
	if (iLocal_3445[8] == 0)
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_3233[5]))
		{
			if (unk_0xAF437D7C802AB246(iLocal_3233[5]))
			{
				iLocal_3191++;
				iLocal_3445[8] = 1;
			}
		}
	}
	if (iLocal_3445[9] == 0)
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_3233[6]))
		{
			if (unk_0xAF437D7C802AB246(iLocal_3233[6]))
			{
				iLocal_3191++;
				iLocal_3445[9] = 1;
			}
		}
	}
	if (iLocal_3445[10] == 0)
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_3233[7]))
		{
			if (unk_0xAF437D7C802AB246(iLocal_3233[7]))
			{
				iLocal_3191++;
				iLocal_3445[10] = 1;
			}
		}
	}
	if (iLocal_3445[11] == 0)
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_3233[8]))
		{
			if (unk_0xAF437D7C802AB246(iLocal_3233[8]))
			{
				iLocal_3191++;
				iLocal_3445[11] = 1;
			}
		}
	}
	if (iLocal_3445[12] == 0)
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_3233[9]))
		{
			if (unk_0xAF437D7C802AB246(iLocal_3233[9]))
			{
				iLocal_3191++;
				iLocal_3445[12] = 1;
			}
		}
	}
	if (iLocal_3445[13] == 0)
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_3233[10]))
		{
			if (unk_0xAF437D7C802AB246(iLocal_3233[10]))
			{
				iLocal_3191++;
				iLocal_3445[13] = 1;
			}
		}
	}
	if (iLocal_3445[14] == 0)
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_3248))
		{
			if (unk_0xAF437D7C802AB246(iLocal_3248))
			{
				iLocal_3191++;
				iLocal_3445[14] = 1;
			}
		}
	}
	if (iLocal_3445[15] == 0)
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_3249))
		{
			if (unk_0xAF437D7C802AB246(iLocal_3249))
			{
				iLocal_3191++;
				iLocal_3445[15] = 1;
			}
		}
	}
	if (iLocal_3445[16] == 0)
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_3250))
		{
			if (unk_0xAF437D7C802AB246(iLocal_3250))
			{
				iLocal_3191++;
				iLocal_3445[16] = 1;
			}
		}
	}
	if (iLocal_3445[17] == 0)
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_3251[0]))
		{
			if (unk_0xAF437D7C802AB246(iLocal_3251[0]))
			{
				iLocal_3191++;
				iLocal_3445[17] = 1;
			}
		}
	}
	if (iLocal_3180 == 8)
	{
		if (unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) != 0)
		{
			if (iLocal_3465 == 0)
			{
				func_2(482, 0);
				iLocal_3465 = 1;
			}
		}
	}
}

void func_2(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_55588 = iParam0;
	if (!Global_55586)
	{
		Global_55586 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67673)
		{
			if (Global_67674[iVar0 /*9*/] == iParam0)
			{
				Global_67674[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_3(int iParam0, int iParam1)
{
	Global_55589 = iParam0;
	Global_55590 = iParam1;
}

void func_4(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_55591 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_67673)
	{
		if (iParam1 == -1 || Global_67674[iVar0 /*9*/] == iParam1)
		{
			if (Global_67674[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_67674[iVar0 /*9*/].f_6 = iParam0;
				Global_67674[iVar0 /*9*/].f_7 = 1;
				Global_67674[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_5()
{
	if (unk_0xAEF17BDE274A1247())
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_3267))
		{
			unk_0xDBF2D7502C37C299(iLocal_3267, 0, 0, 1);
		}
	}
	if (iLocal_3181 > 0)
	{
		func_188();
	}
	if (iLocal_3181 == 0)
	{
		if (iLocal_3345 == 1)
		{
			func_104();
			iLocal_3345 = 0;
		}
		func_25(3, "STAGE_EVADE_POLICE", 1, 0, 0, 1);
		iLocal_3374 = 0;
		iLocal_3375 = 0;
		iLocal_3376 = 0;
		iLocal_3346 = 0;
		iLocal_3347 = 0;
		iLocal_3348 = 0;
		iLocal_3430 = 0;
		iLocal_3431 = 0;
		iLocal_3432 = 0;
		iLocal_3469 = 0;
		iLocal_3470 = 0;
		iLocal_3474 = 0;
		iLocal_3477 = 0;
		iLocal_3185 = 0;
		unk_0x2B0BB514F9140141("Misssolomon_3");
		unk_0x801429C020C467BA(joaat("oracle2"));
		unk_0x801429C020C467BA(joaat("baller2"));
		if (unk_0xD11595488376CB53(uLocal_3285))
		{
			unk_0x5B62CAB9B0D6ABF1(&uLocal_3285);
		}
		if (unk_0x729A24E50365D07B("Trev4_5"))
		{
			unk_0xAD0C8ABDA1A371CA("Trev4_5", 0, 1f, 1f);
			unk_0x4C5B723663B8F630("Trev4_5");
		}
		if (unk_0xD51CFE69539DB6D8(iLocal_3259))
		{
			unk_0xC1F2137782A816E9(&iLocal_3259);
		}
		unk_0xC1B1E9A034A63A62(0);
		if (unk_0xAEF17BDE274A1247())
		{
			if (!func_24())
			{
				unk_0x899C0AB969919A6A(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1));
			}
			func_21(0, -1, 1);
		}
		if (!unk_0xDE185266FE919B68())
		{
			unk_0x2D3BB3EF936C4B76(800);
		}
		if (unk_0xD51CFE69539DB6D8(iLocal_3228))
		{
			if (!unk_0xAF437D7C802AB246(iLocal_3228))
			{
				unk_0x321C1AA209172C00(iLocal_3228, 1);
				unk_0x9BEE7E791BC4D38B(iLocal_3228, 0);
			}
		}
		unk_0xE72D045151F6CA70("TRV4_LOSE_COPS");
		if (!unk_0x64C1636D480771D9("SOL_3_LOSE_COPS"))
		{
			unk_0x91523366B2FDCD40("SOL_3_LOSE_COPS");
		}
		unk_0x00400F14096FE01D();
		func_20("TRV4_END1", 7500, 1);
		if (unk_0x64C1636D480771D9("SOL_3_ENGINE_DEATH_SCENE"))
		{
			unk_0x61B624BA2305D0E5("SOL_3_ENGINE_DEATH_SCENE");
		}
		if (func_19(2))
		{
			func_18(2, 0);
		}
		uLocal_3221 = unk_0xC94877F1D01BEFB9(-948.4f, -2992.6f, 13.3f, 6f, 5f, 4f, 60f, 0, 7);
		if (unk_0xD51CFE69539DB6D8(iLocal_3266))
		{
			if (unk_0xC45A34912542C4EB(iLocal_3266, 0))
			{
				unk_0x1AA196C9F812B1A2(iLocal_3266, 0);
			}
		}
		if (unk_0xD51CFE69539DB6D8(iLocal_3267))
		{
			if (unk_0xC45A34912542C4EB(iLocal_3267, 0))
			{
				unk_0x1AA196C9F812B1A2(iLocal_3267, 0);
			}
		}
		unk_0x8C1CE4F676968E94(5);
		unk_0x1B1CE102A7E7999E(unk_0x3F80C6638E3A1A90(), 3, 0);
		unk_0x6FF6F40CA433340F(unk_0x3F80C6638E3A1A90(), 0);
		func_17(&uLocal_3578, 0, unk_0xE7869D5D7816A9B6(), "MICHAEL", 0, 1);
		unk_0xD5181C7DAF762C60("PoliceScannerDisabled", 0);
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1)
	{
		if (iLocal_3469 == 0)
		{
			if (!unk_0xD51CFE69539DB6D8(iLocal_3279[0]))
			{
				if (unk_0x5053BF6D5604065B(joaat("oracle2")))
				{
					iLocal_3279[0] = unk_0xD504D1FF5DD2FFD7(joaat("oracle2"), -1025.596f, -2869.237f, 12.9585f, 241.0686f, 1, 1);
					unk_0xC602CB510D8B9EAE(iLocal_3279[0], 1);
					unk_0xC9CEB5227A733CE6(iLocal_3279[0]);
					unk_0x839E9476E54502A2(joaat("oracle2"));
					iLocal_3469 = 1;
				}
			}
		}
		if (iLocal_3470 == 0)
		{
			if (!unk_0xD51CFE69539DB6D8(iLocal_3279[1]))
			{
				if (unk_0x5053BF6D5604065B(joaat("baller2")))
				{
					iLocal_3279[1] = unk_0xD504D1FF5DD2FFD7(joaat("baller2"), -971.4223f, -2903.354f, 12.9652f, 61.0213f, 1, 1);
					unk_0xC602CB510D8B9EAE(iLocal_3279[1], 1);
					unk_0xC9CEB5227A733CE6(iLocal_3279[1]);
					unk_0x839E9476E54502A2(joaat("baller2"));
					iLocal_3470 = 1;
				}
			}
		}
		if (unk_0xD51CFE69539DB6D8(iLocal_3279[0]))
		{
			if (unk_0xC45A34912542C4EB(iLocal_3279[0], 0))
			{
				if (unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iLocal_3279[0], 0))
				{
					if (!unk_0x64C1636D480771D9("SOL_3_LOSE_COPS_VEHICLE"))
					{
						unk_0x91523366B2FDCD40("SOL_3_LOSE_COPS_VEHICLE");
					}
				}
			}
			if (func_16(unk_0xE7869D5D7816A9B6(), iLocal_3279[0], 1) > 200f || unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iLocal_3279[0], 0))
			{
				unk_0xC1F2137782A816E9(&(iLocal_3279[0]));
			}
		}
		if (unk_0xD51CFE69539DB6D8(iLocal_3279[1]))
		{
			if (unk_0xC45A34912542C4EB(iLocal_3279[1], 0))
			{
				if (unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iLocal_3279[1], 0))
				{
					if (!unk_0x64C1636D480771D9("SOL_3_LOSE_COPS_VEHICLE"))
					{
						unk_0x91523366B2FDCD40("SOL_3_LOSE_COPS_VEHICLE");
					}
				}
			}
			if (func_16(unk_0xE7869D5D7816A9B6(), iLocal_3279[1], 1) > 200f || unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iLocal_3279[1], 0))
			{
				unk_0xC1F2137782A816E9(&(iLocal_3279[1]));
			}
		}
		if (iLocal_3430 == 0)
		{
			if (!unk_0xAF437D7C802AB246(iLocal_3233[0]))
			{
				func_14(iLocal_3233[0], "SURROUNDED", 24);
				iLocal_3430 = 1;
			}
		}
		if (iLocal_3374 == 0)
		{
			if (unk_0x83666F9FB8FEBD4B() > 8000)
			{
				if (unk_0xC45A34912542C4EB(iLocal_3268[0], 0))
				{
					unk_0x23F0735A27D6F6B3(iLocal_3268[0], 68, "BB_Chase", 1);
					unk_0x7D9CB73E9BF1F784(iLocal_3268[0], 0f, 0f, 0.15f);
				}
				if (unk_0xC45A34912542C4EB(iLocal_3268[1], 0))
				{
					unk_0x23F0735A27D6F6B3(iLocal_3268[1], 69, "BB_Chase", 1);
					unk_0x7D9CB73E9BF1F784(iLocal_3268[1], 0f, 0f, 0.15f);
				}
				iLocal_3374 = 1;
			}
		}
		else
		{
			if (unk_0xC45A34912542C4EB(iLocal_3268[0], 0))
			{
				if (unk_0x05BA2AC20921A37E(iLocal_3268[0]))
				{
					if (unk_0x97DF87DF18B03512(iLocal_3268[0]) > 5000f)
					{
						if (unk_0x6D30046757C9C4F9(iLocal_3268[0]))
						{
							unk_0x6035B71FBC2881EC(iLocal_3268[0]);
						}
					}
				}
				else if (iLocal_3375 == 0)
				{
					if (!unk_0xAF437D7C802AB246(iLocal_3233[6]))
					{
						unk_0x9BEE7E791BC4D38B(iLocal_3233[6], 0);
					}
					if (!unk_0xAF437D7C802AB246(iLocal_3233[7]))
					{
						unk_0x9BEE7E791BC4D38B(iLocal_3233[7], 0);
					}
					iLocal_3375 = 1;
				}
			}
			if (unk_0xC45A34912542C4EB(iLocal_3268[1], 0))
			{
				if (unk_0x05BA2AC20921A37E(iLocal_3268[1]))
				{
					if (unk_0x97DF87DF18B03512(iLocal_3268[1]) > 5000f)
					{
						if (unk_0x6D30046757C9C4F9(iLocal_3268[1]))
						{
							unk_0x6035B71FBC2881EC(iLocal_3268[1]);
						}
					}
				}
				else if (iLocal_3376 == 0)
				{
					if (!unk_0xAF437D7C802AB246(iLocal_3233[8]))
					{
						unk_0x9BEE7E791BC4D38B(iLocal_3233[8], 0);
					}
					if (!unk_0xAF437D7C802AB246(iLocal_3233[9]))
					{
						unk_0x9BEE7E791BC4D38B(iLocal_3233[9], 0);
					}
					iLocal_3376 = 1;
				}
			}
		}
		func_12();
		if (iLocal_3474 == 0)
		{
			if (unk_0xD51CFE69539DB6D8(iLocal_3267))
			{
				if (unk_0xC45A34912542C4EB(iLocal_3267, 0))
				{
					if (unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iLocal_3267, 0))
					{
						unk_0xE72D045151F6CA70("TRV4_JET_ENTERED");
						if (!unk_0x64C1636D480771D9("SOL_3_LOSE_COPS_PLANE"))
						{
							unk_0x91523366B2FDCD40("SOL_3_LOSE_COPS_PLANE");
						}
						unk_0xD73158C5794398B4(4f, 15f, 4);
						unk_0xC1F2137782A816E9(&iLocal_3267);
						iLocal_3474 = 1;
					}
					else if (func_16(unk_0xE7869D5D7816A9B6(), iLocal_3267, 1) > 200f)
					{
						unk_0xC1F2137782A816E9(&iLocal_3267);
					}
				}
			}
		}
		if (iLocal_3474 == 1)
		{
			if (unk_0xD51CFE69539DB6D8(iLocal_3267))
			{
				if (unk_0xC45A34912542C4EB(iLocal_3267, 0))
				{
					if (!unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iLocal_3267, 0))
					{
						if (unk_0x64C1636D480771D9("SOL_3_LOSE_COPS_PLANE"))
						{
							unk_0x61B624BA2305D0E5("SOL_3_LOSE_COPS_PLANE");
						}
						unk_0xE72D045151F6CA70("TRV4_LOSE_COPS");
						iLocal_3474 = 0;
					}
				}
			}
		}
		if (unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) == 0)
		{
			if (iLocal_3477 == 0)
			{
				iLocal_3193 = unk_0x9D40BBF80D8F5E8A();
				iLocal_3477 = 1;
			}
		}
		if (iLocal_3477 == 1)
		{
			if (unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) == 0)
			{
				if (unk_0x9D40BBF80D8F5E8A() > iLocal_3193 + 3500)
				{
					if (unk_0x64C1636D480771D9("SOL_3_LOSE_COPS_PLANE"))
					{
						unk_0x61B624BA2305D0E5("SOL_3_LOSE_COPS_PLANE");
					}
					if (unk_0x64C1636D480771D9("SOL_3_LOSE_COPS"))
					{
						unk_0x61B624BA2305D0E5("SOL_3_LOSE_COPS");
					}
					if (unk_0x64C1636D480771D9("SOL_3_LOSE_COPS_VEHICLE"))
					{
						unk_0x61B624BA2305D0E5("SOL_3_LOSE_COPS_VEHICLE");
					}
					unk_0xE72D045151F6CA70("TRV4_COPS_LOST");
					func_11(0, -1);
					func_6();
				}
			}
			else
			{
				iLocal_3477 = 0;
			}
		}
	}
}

void func_6()
{
	func_10(481, iLocal_3191, 0);
	func_7(0, 0);
	func_377();
}

void func_7(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_55580)
	{
		Global_55580 = iParam1;
	}
	if (bParam0)
	{
		if ((func_390(0) && Global_69482.f_1 == 1) && func_9(Global_69482))
		{
		}
		else
		{
			Global_55578 = 1;
		}
	}
	if (Global_99155.f_7699 || func_390(0))
	{
		iVar0 = func_8();
		iVar1 = Global_82110[iVar0 /*5*/];
		uVar2 = Global_69505.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_99155.f_7699)
			{
			}
			return;
		}
		if (unk_0xB519E5386FBF69E5(Global_82110[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0xB519E5386FBF69E5(Global_82110[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0x9956FB0E4B50ECB8(&(Global_82110[iVar0 /*5*/].f_1), 4);
		unk_0x9956FB0E4B50ECB8(&Global_69484, 1);
		Global_69500 = uVar2;
		Global_69501 = unk_0x9D40BBF80D8F5E8A();
	}
}

int func_8()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0xB519E5386FBF69E5(Global_82110[iVar0 /*5*/].f_1, 2))
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
	while (iVar0 < Global_67673)
	{
		if (Global_67674[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_67674[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_67674[iVar0 /*9*/].f_1 = (Global_67674[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_67674[iVar0 /*9*/] != -1)
	{
		if (Global_55803[Global_67674[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_67674[iVar0 /*9*/].f_1 > 1)
			{
				Global_67674[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_67674[iVar0 /*9*/].f_1 < 0)
			{
				Global_67674[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_11(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_55586)
	{
	}
	Global_55586 = 0;
	if (bParam0)
	{
		Global_55587 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67673)
		{
			if (Global_55803[Global_67674[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_67674[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_67673)
		{
			if (Global_67674[iVar0 /*9*/] > 0)
			{
				if (Global_67674[iVar0 /*9*/] == iParam1)
				{
					Global_67674[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_12()
{
	iLocal_3189 = 0;
	while (iLocal_3189 <= 9)
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_3233[iLocal_3189]))
		{
			if (!unk_0xAF437D7C802AB246(iLocal_3233[iLocal_3189]))
			{
				if (!unk_0x51374A0BB2871E6E(iLocal_3233[iLocal_3189], 0))
				{
					if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
					{
						if (func_13(unk_0xE7869D5D7816A9B6(), iLocal_3233[iLocal_3189]) > 200f)
						{
							unk_0xFA2C5C2D054C888E(iLocal_3233[iLocal_3189]);
							unk_0x506D42CB68AE4EA5(&(iLocal_3233[iLocal_3189]));
						}
						else if (func_13(unk_0xE7869D5D7816A9B6(), iLocal_3233[iLocal_3189]) > 20f)
						{
							if (unk_0xC47857E5E74EA5AF(iLocal_3233[iLocal_3189], -1207174364) != 1 && unk_0xC47857E5E74EA5AF(iLocal_3233[iLocal_3189], -1207174364) != 0)
							{
								unk_0x8C2752F3FF55C28A(iLocal_3233[iLocal_3189], unk_0xE7869D5D7816A9B6(), unk_0xE7869D5D7816A9B6(), 2f, 1, 15f, 20f, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"));
							}
						}
						else if (unk_0xC47857E5E74EA5AF(iLocal_3233[iLocal_3189], 780511057) != 1 && unk_0xC47857E5E74EA5AF(iLocal_3233[iLocal_3189], 780511057) != 0)
						{
							unk_0x13C351F151D49F89(iLocal_3233[iLocal_3189], unk_0xE7869D5D7816A9B6(), 0, 16);
							unk_0x7E3DC7ED30B648F0(iLocal_3233[iLocal_3189], 50, 1);
						}
					}
					else if (func_13(unk_0xE7869D5D7816A9B6(), iLocal_3233[iLocal_3189]) > 200f)
					{
						unk_0x506D42CB68AE4EA5(&(iLocal_3233[iLocal_3189]));
					}
					else if (func_13(unk_0xE7869D5D7816A9B6(), iLocal_3233[iLocal_3189]) > 5f)
					{
						if (unk_0xC47857E5E74EA5AF(iLocal_3233[iLocal_3189], -1207174364) != 1 && unk_0xC47857E5E74EA5AF(iLocal_3233[iLocal_3189], -1207174364) != 0)
						{
							unk_0x8C2752F3FF55C28A(iLocal_3233[iLocal_3189], unk_0xE7869D5D7816A9B6(), unk_0xE7869D5D7816A9B6(), 2f, 1, 15f, 20f, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"));
						}
					}
					else if (unk_0xC47857E5E74EA5AF(iLocal_3233[iLocal_3189], 780511057) != 1 && unk_0xC47857E5E74EA5AF(iLocal_3233[iLocal_3189], 780511057) != 0)
					{
						unk_0x13C351F151D49F89(iLocal_3233[iLocal_3189], unk_0xE7869D5D7816A9B6(), 0, 16);
						unk_0x7E3DC7ED30B648F0(iLocal_3233[iLocal_3189], 50, 1);
					}
				}
			}
		}
		iLocal_3189++;
	}
	if (iLocal_3374 == 1)
	{
		if (iLocal_3346 == 0)
		{
			if (unk_0xD51CFE69539DB6D8(iLocal_3268[0]))
			{
				if (unk_0xC45A34912542C4EB(iLocal_3268[0], 0))
				{
					if (unk_0x05BA2AC20921A37E(iLocal_3268[0]))
					{
					}
					else
					{
						if (unk_0xD51CFE69539DB6D8(iLocal_3233[6]))
						{
							if (!unk_0xAF437D7C802AB246(iLocal_3233[6]))
							{
								unk_0x9BEE7E791BC4D38B(iLocal_3233[6], 0);
								unk_0xFA2C5C2D054C888E(iLocal_3233[6]);
								unk_0x94026C1D1DB14225(&uLocal_3292);
								unk_0x663F1B23D2C4D20A(0, iLocal_3268[0], 256);
								unk_0x13C351F151D49F89(0, unk_0xE7869D5D7816A9B6(), 0, 16);
								unk_0x911ECBCE73F8EC3F(uLocal_3292);
								unk_0xC2C4A3A9FF2FBFFF(iLocal_3233[6], uLocal_3292);
								unk_0x33A90AD8FA327B72(&uLocal_3292);
							}
						}
						if (unk_0xD51CFE69539DB6D8(iLocal_3233[7]))
						{
							if (!unk_0xAF437D7C802AB246(iLocal_3233[7]))
							{
								unk_0x9BEE7E791BC4D38B(iLocal_3233[7], 0);
								unk_0xFA2C5C2D054C888E(iLocal_3233[7]);
								unk_0x94026C1D1DB14225(&uLocal_3292);
								unk_0x663F1B23D2C4D20A(0, iLocal_3268[0], 256);
								unk_0x13C351F151D49F89(0, unk_0xE7869D5D7816A9B6(), 0, 16);
								unk_0x911ECBCE73F8EC3F(uLocal_3292);
								unk_0xC2C4A3A9FF2FBFFF(iLocal_3233[7], uLocal_3292);
								unk_0x33A90AD8FA327B72(&uLocal_3292);
							}
						}
						iLocal_3346 = 1;
					}
				}
			}
		}
		else if (iLocal_3431 == 0)
		{
			if (unk_0xD51CFE69539DB6D8(iLocal_3268[0]))
			{
				if (unk_0xC45A34912542C4EB(iLocal_3268[0], 0))
				{
					if (unk_0xD51CFE69539DB6D8(iLocal_3233[6]))
					{
						if (!unk_0xAF437D7C802AB246(iLocal_3233[6]))
						{
							if (!unk_0x8AF655CC5761C7A2(iLocal_3233[6], iLocal_3268[0], 0))
							{
								if (func_13(unk_0xE7869D5D7816A9B6(), iLocal_3233[6]) < 20f)
								{
									func_14(iLocal_3233[6], "DRAW_GUN", 24);
									iLocal_3431 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3347 == 0)
		{
			if (unk_0xD51CFE69539DB6D8(iLocal_3268[1]))
			{
				if (unk_0xC45A34912542C4EB(iLocal_3268[1], 0))
				{
					if (unk_0x05BA2AC20921A37E(iLocal_3268[1]))
					{
					}
					else
					{
						if (unk_0xD51CFE69539DB6D8(iLocal_3233[8]))
						{
							if (!unk_0xAF437D7C802AB246(iLocal_3233[8]))
							{
								unk_0x9BEE7E791BC4D38B(iLocal_3233[8], 0);
								unk_0xFA2C5C2D054C888E(iLocal_3233[8]);
								unk_0x94026C1D1DB14225(&uLocal_3292);
								unk_0x663F1B23D2C4D20A(0, iLocal_3268[1], 256);
								unk_0x13C351F151D49F89(0, unk_0xE7869D5D7816A9B6(), 0, 16);
								unk_0x911ECBCE73F8EC3F(uLocal_3292);
								unk_0xC2C4A3A9FF2FBFFF(iLocal_3233[8], uLocal_3292);
								unk_0x33A90AD8FA327B72(&uLocal_3292);
							}
						}
						if (unk_0xD51CFE69539DB6D8(iLocal_3233[9]))
						{
							if (!unk_0xAF437D7C802AB246(iLocal_3233[9]))
							{
								unk_0x9BEE7E791BC4D38B(iLocal_3233[9], 0);
								unk_0xFA2C5C2D054C888E(iLocal_3233[9]);
								unk_0x94026C1D1DB14225(&uLocal_3292);
								unk_0x663F1B23D2C4D20A(0, iLocal_3268[1], 256);
								unk_0x13C351F151D49F89(0, unk_0xE7869D5D7816A9B6(), 0, 16);
								unk_0x911ECBCE73F8EC3F(uLocal_3292);
								unk_0xC2C4A3A9FF2FBFFF(iLocal_3233[9], uLocal_3292);
								unk_0x33A90AD8FA327B72(&uLocal_3292);
							}
						}
						iLocal_3347 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3348 == 0)
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_3233[10]))
		{
			if (!unk_0xAF437D7C802AB246(iLocal_3233[10]))
			{
				if (func_13(unk_0xE7869D5D7816A9B6(), iLocal_3233[10]) > 200f)
				{
					unk_0x506D42CB68AE4EA5(&(iLocal_3233[iLocal_3189]));
					unk_0x8B10CC9832827D27("misssolomon_3");
				}
				else if (unk_0x2917D5E1CB5CE43A("misssolomon_3"))
				{
					if (unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), -923.2303f, -2948.004f, 12.9451f, 2f, 2f, 2f, 0, 1, 0))
					{
						if (!unk_0xAF437D7C802AB246(iLocal_3233[10]))
						{
							unk_0xFA2C5C2D054C888E(iLocal_3233[10]);
							unk_0x94026C1D1DB14225(&uLocal_3292);
							unk_0xDCF460AE46C9489C(0, "misssolomon_3", "plyr_roll_left", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x13C351F151D49F89(0, unk_0xE7869D5D7816A9B6(), 0, 16);
							unk_0x911ECBCE73F8EC3F(uLocal_3292);
							unk_0xC2C4A3A9FF2FBFFF(iLocal_3233[10], uLocal_3292);
							unk_0x33A90AD8FA327B72(&uLocal_3292);
							iLocal_3348 = 1;
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
	unk_0x489E3B00AFB0758C(uParam0, sParam1, func_15(iParam2), 1);
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
	
	if (!unk_0x76B2D234F1895632(iParam0))
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 0) };
	}
	if (!unk_0x76B2D234F1895632(iParam1))
	{
		Var3 = { unk_0x1141852D07400777(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x1141852D07400777(iParam1, 0) };
	}
	return unk_0xF18329472591CFE6(Var0, Var3, iParam2);
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
	if (!Global_69236)
	{
		if (!unk_0xAF437D7C802AB246(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xA6ED3077A967AC63(iParam2, 0);
			}
			else
			{
				unk_0xA6ED3077A967AC63(iParam2, 1);
			}
		}
		if (!unk_0xAF437D7C802AB246(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7294CF31F80E052D(iParam2, 0);
			}
			else
			{
				unk_0x7294CF31F80E052D(iParam2, 1);
			}
		}
	}
}

void func_18(int iParam0, bool bParam1)
{
	if (unk_0xB519E5386FBF69E5(Global_25191, iParam0))
	{
		if (!bParam1)
		{
			unk_0x73817D396768E4C6(&Global_25191, iParam0);
			StringCopy(&(Global_25192[iParam0 /*6*/]), "NULL", 24);
			Global_25247[iParam0] = bParam1;
		}
	}
}

int func_19(int iParam0)
{
	if (unk_0xB519E5386FBF69E5(Global_25191, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_20(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x81E3FE28C9E14CDE(sParam0);
	unk_0xE45B7EE472DD7F7F(iParam1, 1);
}

void func_21(int iParam0, int iParam1, int iParam2)
{
	if (func_23() && func_24())
	{
		while (Global_91020 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x307133C47B1565B0(0);
		if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
		{
			if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
			{
				unk_0x1E08281A4D8EAD3C(unk_0xE7869D5D7816A9B6());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
			{
				if (unk_0xD51CFE69539DB6D8(iParam0))
				{
					if (unk_0xC45A34912542C4EB(iParam0, 0))
					{
						if (!unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iParam0, 0))
						{
							unk_0x0CC1C59D57D7212B(unk_0xE7869D5D7816A9B6(), iParam0, iParam1);
							unk_0x6EF372C057320AD4(0f, 1065353216);
							unk_0x7FB81B1DD14A3BE4(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
			{
				unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), true, 0);
			}
		}
		unk_0xCE6D6B0EAA418D44();
		func_22(0);
	}
}

void func_22(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x9956FB0E4B50ECB8(&(Global_91025.f_20), 13);
	}
	else
	{
		unk_0x73817D396768E4C6(&(Global_91025.f_20), 13);
	}
}

int func_23()
{
	if (Global_91025 == 10 || Global_91025 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_24()
{
	return unk_0xB519E5386FBF69E5(Global_91025.f_20, 13);
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
		if (!unk_0x04E7E853E31F41A3("FinaleC2", unk_0x959E7FA37C0D0892()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_91062)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_91062)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_103(1);
		if (iParam0 <= Global_91062)
		{
		}
		iVar1 = func_101(unk_0x959E7FA37C0D0892(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_99155.f_7699.f_330[iVar1 /*6*/].f_1 = 0;
			uVar2 = func_99(iVar1);
			cVar3 = { Global_82146[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_99155.f_7699.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0x3E355C7CA68AF348(&cVar3, uVar2, Global_91062, iParam0);
		}
		else
		{
			iVar5 = func_94(unk_0x959E7FA37C0D0892(), 1);
			if (iVar5 != -1)
			{
				Global_99155.f_17188[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_93(iVar5)}, 4);
				unk_0x3E355C7CA68AF348(&uVar6, 0, Global_91062, iParam0);
			}
			else
			{
				iVar10 = func_92(&(Global_91025.f_3));
				if (iVar10 > -1)
				{
					Global_99155.f_29435.f_4[iVar10] = 0;
				}
			}
		}
		Global_85536 = iParam2;
		Global_91062 = iParam0;
		func_26(iParam0, sParam1, iParam4, iParam5);
		if (unk_0x04E7E853E31F41A3(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_91062)
	{
	}
}

void func_26(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_27(&Global_95220, unk_0x959E7FA37C0D0892(), iParam0, uParam1, iParam3, iParam2);
}

void func_27(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_91();
	uParam0->f_1 = func_80();
	unk_0x8F305E87CAD8DE0B(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		func_65(&(uParam0->f_2305), 0);
		func_64(unk_0xE7869D5D7816A9B6());
		func_58(unk_0xE7869D5D7816A9B6(), 0);
		unk_0x5E99B63A819500A5(unk_0xE7869D5D7816A9B6(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_99155.f_1750.f_539.f_294[iVar1];
		if (iVar1 == func_55())
		{
			func_48(unk_0xE7869D5D7816A9B6(), &(uParam0->f_616[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_90815[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_90815[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_90815[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_90815[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_90815[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_90815[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_90815[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_90815[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_90815[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_90815[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/] = { Global_99155.f_1750.f_539.f_298[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_99155.f_1750.f_539.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_purch_0"), &(uParam0->f_1665[iVar1 /*32*/][0]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_purch_1"), &(uParam0->f_1665[iVar1 /*32*/][1]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_5[0]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_5[1]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_5[2]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_5[3]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_5[4]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_1665[iVar1 /*32*/].f_16[0]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_1665[iVar1 /*32*/].f_16[1]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_1665[iVar1 /*32*/].f_16[2]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_1665[iVar1 /*32*/].f_16[3]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_1665[iVar1 /*32*/].f_16[4]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_1665[iVar1 /*32*/].f_16[5]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_1665[iVar1 /*32*/].f_16[6]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_1665[iVar1 /*32*/].f_16[7]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_1665[iVar1 /*32*/].f_16[8]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_1665[iVar1 /*32*/].f_16[9]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_1665[iVar1 /*32*/].f_16[10]), -1);
				unk_0x56DCF5665F92F9BD(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_1665[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_99155.f_25013.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_52753[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_99155.f_1750.f_539.f_1635[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_99155.f_1750.f_539.f_1635[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2259[iVar1 /*15*/][iVar0] = Global_99155.f_1750.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_5[iVar0] = Global_99155.f_1750.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_10[iVar0] = Global_99155.f_1750.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_1766[iVar1 /*164*/][iVar0] = Global_99155.f_1750[iVar1 /*164*/][iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_4[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_8[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_12[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_16[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_20[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_24[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_28[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_32[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_36[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_40[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_44[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_48[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_52[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_56[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_60[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_64[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_68[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_72[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_76[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_80[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_84[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_88[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_92[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_96[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_100[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_104[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_108[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_112[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_116[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_120[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_124[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_128[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_132[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_136[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_140[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_144[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_148[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_152[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_156[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_160[iVar0] = Global_99155.f_1750[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x56DCF5665F92F9BD(joaat("sp0_special_ability"), &(uParam0->f_1762[0]), -1);
	unk_0x56DCF5665F92F9BD(joaat("sp1_special_ability"), &(uParam0->f_1762[1]), -1);
	unk_0x56DCF5665F92F9BD(joaat("sp2_special_ability"), &(uParam0->f_1762[2]), -1);
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
	*uParam0 = Global_87207;
	uParam0->f_1 = Global_87208;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_29(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0xE7869D5D7816A9B6();
	}
	if (unk_0xD51CFE69539DB6D8(iParam2))
	{
		uParam1->f_5 = func_46(iParam2);
	}
	if (func_43(iParam2, &iVar0, iParam3, iParam5))
	{
		func_30(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0xD51CFE69539DB6D8(iVar0))
	{
		if (!unk_0x76B2D234F1895632(iVar0))
		{
			if (unk_0x7579897B912B3328(iVar0, joaat("skylift")) && unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iVar0, 0))
			{
				func_30(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_30(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xC45A34912542C4EB(iParam2, 0))
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
		if (Global_91025.f_22[iVar0] == iParam0)
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
		*uParam0 = { unk_0x1141852D07400777(iParam1, 1) };
		uParam0->f_6 = unk_0x2CAFFCD9F5E16D2F(iParam1);
		uParam0->f_3 = { unk_0x834FF019A048DE2C(iParam1) };
		if (unk_0x22E902D6AF27E232(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_69010 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
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
		if (unk_0xD51CFE69539DB6D8(Global_68105.f_484[iVar0]))
		{
			if (iParam0 == Global_68105.f_484[iVar0])
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
	
	if (!unk_0xD51CFE69539DB6D8(iParam0))
	{
		return 145;
	}
	if (!unk_0xC45A34912542C4EB(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xD51CFE69539DB6D8(Global_88689[iVar0]))
		{
			if (Global_88689[iVar0] == iParam0)
			{
				return Global_88699[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_35(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xD51CFE69539DB6D8(iParam0))
	{
		return 0;
	}
	if (!unk_0xC45A34912542C4EB(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xD51CFE69539DB6D8(Global_88689[iVar0]))
		{
			if (Global_88689[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_88699[iVar0])
				{
					if (iParam2 == 0 || unk_0x1B2DC87EFB36DF80(iParam0) == func_36(iParam1, iParam2))
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
			if (Global_99155.f_7699.f_99.f_58[128] && !Global_99155.f_7699.f_99.f_58[131])
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
					if (Global_99155.f_7699.f_99.f_58[119])
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
			else if (Global_99155.f_7699.f_99.f_58[118])
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
	
	if (unk_0xC45A34912542C4EB(iParam0, 0))
	{
		func_42(uParam1);
		uParam1->f_66 = unk_0x1B2DC87EFB36DF80(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xC2421167AF5744AC(iParam0), 16);
		*uParam1 = unk_0x0FD17058EC3E1147(iParam0);
		unk_0x95C00B12C5FCA494(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xCFEF2B49C7ED1A18(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x8062A8ED0C7F4651(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x71D4F790860F6A5A(iParam0);
		uParam1->f_67 = unk_0x90DC8CCD4852ECAA(iParam0);
		uParam1->f_69 = unk_0x31211750BC54126F(iParam0);
		uParam1->f_70 = unk_0xF222368EEA38E69D(iParam0);
		unk_0xCCD9F17DFC40BAE7(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x7C2F17D7A0663F15(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x2C876F34337848DC(iParam0, 2))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 28);
		}
		if (unk_0x2C876F34337848DC(iParam0, 3))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 29);
		}
		if (unk_0x2C876F34337848DC(iParam0, 0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 30);
		}
		if (unk_0x2C876F34337848DC(iParam0, 1))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x657F8DC28088EB36(iParam0, 0))
		{
			uParam1->f_68 = unk_0x96616C6B22C7747D(iParam0);
		}
		if (unk_0xD1C57B32C6DE7BB6(uParam1->f_66))
		{
			if (unk_0x852BA91F4F2922FF(iParam0))
			{
				switch (unk_0x97AE2442D106D426(iParam0))
				{
					case 2:
					case 0:
						unk_0x73817D396768E4C6(&(uParam1->f_77), 23);
						unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0x73817D396768E4C6(&(uParam1->f_77), 23);
						unk_0x73817D396768E4C6(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x54AAF075A06F73AA(iParam0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 9);
		}
		if (unk_0xB1748D5D7F598D5E(iParam0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 10);
		}
		if (unk_0x22929DCF418D8AAF(iParam0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 13);
			unk_0x6A5331108E27160A(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x3781B3A8FED51121(iParam0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 12);
		}
		func_41(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xDF705551345526F6(iParam0, iVar0 + 1))
			{
				unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), func_40(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x43CA43F21BD77772(iParam0, 0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x73817D396768E4C6(&(uParam1->f_77), 11);
		}
		if (unk_0xB7AFC499DA70400A(iParam0, "IgnoredByQuickSave") && unk_0x4A36D1C22F217975(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x73817D396768E4C6(&(uParam1->f_77), 27);
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
	
	if (!unk_0xC45A34912542C4EB(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xA9D3956F42AEC644(*iParam0) == 0)
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
			if (unk_0x44EF52A7698B3306(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x1C8AF615CFEF2FE5(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xB4686A5F9149447D(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xB4686A5F9149447D(*iParam0, iVar0);
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
	
	if (unk_0xD51CFE69539DB6D8(iParam0))
	{
		if (!unk_0xAF437D7C802AB246(iParam0))
		{
			if (iParam0 == unk_0xE7869D5D7816A9B6())
			{
				*uParam1 = unk_0xA0B1717D806F4901();
			}
			else
			{
				*uParam1 = unk_0xF0295FF51F2D7803(iParam0, 1);
			}
			if (unk_0xD51CFE69539DB6D8(*uParam1))
			{
				if (unk_0xC45A34912542C4EB(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0xF18329472591CFE6(unk_0x1141852D07400777(*uParam1, 1), unk_0x1141852D07400777(iParam0, 1), 1) < 100f)
					{
						if (unk_0x7579897B912B3328(*uParam1, joaat("taxi")))
						{
							if (unk_0xBD6B21D725712BDE(*uParam1, -1) != iParam0 && unk_0xBD6B21D725712BDE(*uParam1, -1) != 0)
							{
								return 0;
							}
						}
						if (func_44(*uParam1, func_91(), 1))
						{
							sVar0 = unk_0x959E7FA37C0D0892();
							if (!unk_0x04E7E853E31F41A3(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x51374A0BB2871E6E(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0xB7AFC499DA70400A(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0x4A36D1C22F217975(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x7579897B912B3328(*uParam1, joaat("blimp")))
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
	
	if (!unk_0xD51CFE69539DB6D8(iParam0) || !unk_0xC45A34912542C4EB(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_45(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xB519E5386FBF69E5(Global_99155.f_5843[iVar9], 0))
		{
			if (unk_0x56C8E476471194F1(&sVar1, iParam0))
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
	
	if (unk_0xD51CFE69539DB6D8(iParam0))
	{
		iVar1 = unk_0x1B2DC87EFB36DF80(iParam0);
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
		return Global_99155.f_32499[iParam0 /*29*/];
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
	
	if (!unk_0xAF437D7C802AB246(iParam0))
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
			uParam1->f_59 = Global_99155.f_1750.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_99155.f_1750.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_99155.f_1750.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_99155.f_1750.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_99155.f_1750.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_99155.f_1750.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x00AAD79B42B3E036() && unk_0x1B2DC87EFB36DF80(iParam0) == unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()))
		{
			if (func_52(161, -1))
			{
				uParam1->f_59 = func_49(2040, Global_69095, 0);
			}
			else
			{
				uParam1->f_59 = func_49(742, Global_69095, 0);
			}
			uParam1->f_60 = func_49(743, Global_69095, 0);
			uParam1->f_61 = func_49(744, Global_69095, 0);
		}
		if (unk_0x00AAD79B42B3E036() && iParam0 == unk_0xE7869D5D7816A9B6())
		{
			if (func_52(161, -1))
			{
				uParam1->f_59 = func_49(2040, Global_69095, 0);
			}
			else
			{
				uParam1->f_59 = func_49(742, Global_69095, 0);
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
	iVar0 = Global_2466310[iParam0 /*5*/][func_50(iParam1)];
	if (unk_0x56DCF5665F92F9BD(iVar0, &uVar1, -1))
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
			Global_2466023 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2466023 = 1;
		}
	}
	return iVar0;
}

int func_51()
{
	return Global_1312746;
}

int func_52(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2486042[iParam0 /*5*/][func_50(iParam1)];
	if (unk_0xA1B21B1D84085DB0(uVar0, &uVar1, -1))
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
		*uParam2 = unk_0x83058EDD668C4856(iParam0, iParam1);
		*uParam3 = unk_0x377FCFBE04F73608(iParam0, iParam1);
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
				if (unk_0xAD7645F387EFDC15(iParam0) && unk_0x0B3E0BA36394B459(iParam0) != -1)
				{
					*uParam2 = unk_0x0B3E0BA36394B459(iParam0);
					*uParam3 = unk_0x4F862D22CA6059E9(iParam0);
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
		*uParam2 = unk_0x0CBEED266436AEFF(iParam0, iParam1);
		*uParam3 = unk_0xB9111DA78E2971F6(iParam0, iParam1);
		*uParam4 = unk_0x5B56B32E043336F7(iParam0, iParam1);
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
	return Global_99155.f_1750.f_539.f_3549;
}

void func_56()
{
	int iVar0;
	
	if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
	{
		if (func_47(Global_99155.f_1750.f_539.f_3549) != unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()))
		{
			iVar0 = func_46(unk_0xE7869D5D7816A9B6());
			if (func_38(iVar0) && (!func_57(14) || Global_98107))
			{
				if (Global_99155.f_1750.f_539.f_3549 != iVar0 && func_38(Global_99155.f_1750.f_539.f_3549))
				{
					Global_99155.f_1750.f_539.f_3550 = Global_99155.f_1750.f_539.f_3549;
				}
				Global_99155.f_1750.f_539.f_3551 = iVar0;
				Global_99155.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_99155.f_1750.f_539.f_3549 != 145)
			{
				Global_99155.f_1750.f_539.f_3551 = Global_99155.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_99155.f_1750.f_539.f_3549 = 145;
}

bool func_57(int iParam0)
{
	return Global_35619 == iParam0;
}

void func_58(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_46(iParam0);
	if (func_38(iVar0) && !unk_0xAF437D7C802AB246(iParam0))
	{
		if (iParam0 == unk_0xE7869D5D7816A9B6())
		{
			func_59(iParam0, &(Global_99155.f_1750.f_539.f_298[iVar0 /*284*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_99155.f_1750.f_539.f_1151[iVar2 /*4*/][iVar0] = unk_0x3E9A9913C8317DB2(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0x32C7968FD411D702();
					if (Global_99155.f_1750.f_539.f_1151[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_99155.f_1750.f_539.f_1184 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0xC4EFB6A96FD4EFD7(unk_0x3F80C6638E3A1A90(), &uVar3);
			if (iVar0 == 0)
			{
				unk_0x39DEDCCD70293F58(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0x39DEDCCD70293F58(joaat("sp1_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0x39DEDCCD70293F58(joaat("sp2_parachute_current_tint"), uVar3, 1);
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
	
	if (!unk_0xAF437D7C802AB246(iParam0))
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
				Var4.f_0 = unk_0x08B9ED9EC2BBF5E8(iParam0, func_63(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x4B88462744233B66(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					unk_0x9956FB0E4B50ECB8(&(Var4.f_2), (20 + unk_0x59E70E8146E8C2AB(iParam0, Var4.f_0)));
					if (Var4.f_1 == -1)
					{
						if (!unk_0x34AED71D17A91BDF(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*3*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_61(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0xA5DA14627B3BFA44(iParam0, Var4.f_0, iVar2))
						{
							unk_0x9956FB0E4B50ECB8(&(Var4.f_2), iVar1);
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
		iVar8 = unk_0xEBEB71E208C23D76();
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			if ((unk_0x74CFE4255BC4FBF3(iVar7, &Var9) && !func_60(Var9.f_1)) && iVar70 < 50)
			{
				if (!unk_0xCA0E36ABF4510784(Var9.f_0))
				{
					Var4.f_0 = Var9.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_1 = unk_0x4B88462744233B66(iParam0, Var4.f_0);
					if (unk_0xFB3EFA6765C8A823(iParam0, Var4.f_0, 0))
					{
						unk_0x9956FB0E4B50ECB8(&(Var4.f_2), (20 + unk_0x59E70E8146E8C2AB(iParam0, Var4.f_0)));
					}
					else
					{
						unk_0x9956FB0E4B50ECB8(&(Var4.f_2), 20);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0x34AED71D17A91BDF(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_133[iVar70 /*3*/].f_1 = Var4.f_1;
					iVar1 = 0;
					while (iVar1 < unk_0x8D57B92B1C3958E6(iVar7))
					{
						if (unk_0x71E17ACF157ADB35(iVar7, iVar1, &Var48))
						{
							if (unk_0xA5DA14627B3BFA44(iParam0, Var4.f_0, Var48.f_3))
							{
								unk_0x9956FB0E4B50ECB8(&(Var4.f_2), iVar1);
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0xFB3EFA6765C8A823(iParam0, Var4.f_0, 0))
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
	if (unk_0x00AAD79B42B3E036())
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
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
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
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_62(iParam0, &uVar2);
				if (iVar1 != -1)
				{
					if (iParam1 < unk_0x8D57B92B1C3958E6(iVar1))
					{
						if (unk_0x71E17ACF157ADB35(iVar1, iParam1, &Var41))
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
	
	iVar1 = unk_0xEBEB71E208C23D76();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x74CFE4255BC4FBF3(iVar0, uParam1))
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
	if (func_38(iVar0) && !unk_0xAF437D7C802AB246(iParam0))
	{
		Global_99155.f_1750.f_539.f_294[iVar0] = unk_0xCF6C3B9035370727(iParam0);
	}
}

void func_65(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	*uParam0 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) };
	uParam0->f_3 = unk_0x2CAFFCD9F5E16D2F(unk_0xE7869D5D7816A9B6());
	uParam0->f_5 = unk_0x3CDEA125E379201E(unk_0xE7869D5D7816A9B6());
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		uParam0->f_4 = unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90());
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
	else if (unk_0xFF6891E21E7FC193(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0xB519E5386FBF69E5(Global_69484, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0xB519E5386FBF69E5(Global_69484, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0xB519E5386FBF69E5(Global_69484, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0xB519E5386FBF69E5(Global_69484, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0xB034B5B185BD9C69(unk_0xE7869D5D7816A9B6()) == unk_0x41D9D981197E60A2(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
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
		else if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
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
		else if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
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
	
	if (!unk_0x0EDE95A6D2634A75(Param0))
	{
		iVar0 = unk_0x41D9D981197E60A2(Param4, sParam3);
		if (!unk_0x4443D8D533ACB547(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x1F8C689B25A0EC84(Param0);
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
	if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()) && !unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		if (func_79())
		{
			*uParam0 = func_75(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0), 5, -1, 0, 1, -1);
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
		return unk_0xB519E5386FBF69E5(Global_91077.f_1286[iParam0], iParam1);
	}
	else if (unk_0x00AAD79B42B3E036())
	{
		if (func_73() == 0)
		{
			return unk_0xB519E5386FBF69E5(func_49(func_72(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xB519E5386FBF69E5(Global_99155.f_668[iParam0], iParam1);
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
			return 3640;
			break;
		
		default:
			break;
	}
	return 3717;
}

int func_73()
{
	return Global_25034;
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
				fVar1 = unk_0xF18329472591CFE6(Param0, func_76(iVar0, 0), 1);
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
	return Global_91077.f_296 > 0;
}

var func_80()
{
	var uVar0;
	
	func_90(&uVar0, unk_0x0CE219089BDB83C5());
	func_89(&uVar0, unk_0x1B24A2CA27443F7B());
	func_88(&uVar0, unk_0x7C833E3C6EEE41E0());
	func_83(&uVar0, unk_0x2DA3502053F9E535());
	func_82(&uVar0, unk_0xEB4EA596232DA76E());
	func_81(&uVar0, unk_0xB99227ECC84A576C());
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
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_86(unk_0xB519E5386FBF69E5(iParam0, 31), -1, 1)) + 2011;
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
	return Global_99155.f_1750.f_539.f_3549;
}

int func_92(char* sParam0)
{
	if (unk_0x04E7E853E31F41A3("BailBond1", sParam0))
	{
		return 0;
	}
	else if (unk_0x04E7E853E31F41A3("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0x04E7E853E31F41A3("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0x04E7E853E31F41A3("BailBond4", sParam0))
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
	
	iVar33 = unk_0xC7C6DDDE84A8E734(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_95(iVar0, &sVar1);
		if (unk_0xC7C6DDDE84A8E734(sVar1) == iVar33)
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
	if (unk_0xF6917DE0E003509D(&cVar2))
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
			return func_100(Global_99155.f_7699.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_100(Global_99155.f_7699.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_100(Global_99155.f_7699.f_99.f_205[11]);
			break;
		
		case 90:
			return func_100(Global_99155.f_7699.f_99.f_205[7]);
			break;
		
		case 93:
			return func_100(Global_99155.f_7699.f_99.f_205[9]);
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
	
	iVar0 = unk_0xC7C6DDDE84A8E734(sParam0);
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
		if (Global_82146[iVar0 /*34*/].f_6 == iParam0)
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
			Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52761[iVar0 /*3*/][0] = Global_99155.f_25013[iVar0];
		Global_52761.f_31[iVar0 /*3*/][0] = Global_99155.f_25013.f_11[iVar0];
		Global_52761.f_62[iVar0 /*3*/][0] = Global_99155.f_25013.f_22[iVar0];
		Global_52761.f_93[iVar0 /*3*/][0] = Global_99155.f_25013.f_33[iVar0];
		Global_52761.f_124[iVar0 /*3*/][0] = Global_99155.f_25013.f_44[iVar0];
		Global_52761.f_155[iVar0 /*3*/][0] = Global_99155.f_25013.f_55[iVar0];
		Global_52761.f_186[iVar0 /*3*/][0] = Global_99155.f_25013.f_66[iVar0];
		Global_52761.f_217[iVar0 /*3*/][0] = Global_99155.f_25013.f_77[iVar0];
		Global_52761.f_248[iVar0 /*3*/][0] = Global_99155.f_25013.f_88[iVar0];
		if (!bParam0)
		{
			Global_52761[iVar0 /*3*/][1] = Global_99155.f_25013[iVar0];
			Global_52761.f_31[iVar0 /*3*/][1] = Global_99155.f_25013.f_11[iVar0];
			Global_52761.f_62[iVar0 /*3*/][1] = Global_99155.f_25013.f_22[iVar0];
			Global_52761.f_93[iVar0 /*3*/][1] = Global_99155.f_25013.f_33[iVar0];
			Global_52761.f_124[iVar0 /*3*/][1] = Global_99155.f_25013.f_44[iVar0];
			Global_52761.f_155[iVar0 /*3*/][1] = Global_99155.f_25013.f_55[iVar0];
			Global_52761.f_186[iVar0 /*3*/][1] = Global_99155.f_25013.f_66[iVar0];
			Global_52761.f_217[iVar0 /*3*/][1] = Global_99155.f_25013.f_77[iVar0];
			Global_52761.f_248[iVar0 /*3*/][1] = Global_99155.f_25013.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_104()
{
	unk_0x2343850214D9442C("EXTRASUNNY");
	func_187();
	func_159();
	func_106();
	if (!func_24())
	{
		func_105();
	}
	iLocal_3351 = 1;
	unk_0x7FB81B1DD14A3BE4(0f);
}

void func_105()
{
	switch (iLocal_3180)
	{
		case 2:
			unk_0xFA2C5C2D054C888E(unk_0xE7869D5D7816A9B6());
			unk_0x88A973CE47FBEF95(unk_0xE7869D5D7816A9B6(), -1019.579f, -484.872f, 36.0795f, 1, 0, 0, 1);
			unk_0x151F32CB40BE730C(unk_0xE7869D5D7816A9B6(), 93.7701f);
			break;
		
		case 3:
			if (unk_0xC45A34912542C4EB(iLocal_3259, 0))
			{
				if (!unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iLocal_3259, 0))
				{
					unk_0x0CC1C59D57D7212B(unk_0xE7869D5D7816A9B6(), iLocal_3259, -1);
				}
				unk_0x09714949CF524B00(iLocal_3259, 3000);
				unk_0xD39141689169EF06(iLocal_3259, 0, 1, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 5:
			unk_0xDE31B2587775EDAD(unk_0xE7869D5D7816A9B6());
			unk_0x88A973CE47FBEF95(unk_0xE7869D5D7816A9B6(), -935.4413f, -2928.061f, 12.9451f, 1, 0, 0, 1);
			unk_0x151F32CB40BE730C(unk_0xE7869D5D7816A9B6(), 178.466f);
			unk_0xC602CB510D8B9EAE(unk_0xE7869D5D7816A9B6(), 1);
			break;
		
		case 8:
			unk_0xDE31B2587775EDAD(unk_0xE7869D5D7816A9B6());
			unk_0x88A973CE47FBEF95(unk_0xE7869D5D7816A9B6(), -937.5466f, -2968.713f, 12.9451f, 1, 0, 0, 1);
			unk_0x151F32CB40BE730C(unk_0xE7869D5D7816A9B6(), 111.5016f);
			unk_0xC602CB510D8B9EAE(unk_0xE7869D5D7816A9B6(), 1);
			break;
	}
}

void func_106()
{
	switch (iLocal_3180)
	{
		case 2:
			unk_0x1B1CE102A7E7999E(unk_0x3F80C6638E3A1A90(), 0, 0);
			unk_0x6FF6F40CA433340F(unk_0x3F80C6638E3A1A90(), 0);
			unk_0xB86B1248EA9B87EA(-1026.8f, -492.1f, 36f, 18f, 1, 0, 0, 0);
			unk_0xBDF0A810DD6A47D3(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, 0, 1);
			unk_0x98ED910C6513D537(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, 0);
			unk_0x801429C020C467BA(joaat("rapidgt"));
			unk_0x801429C020C467BA(joaat("surano"));
			unk_0x801429C020C467BA(joaat("carbonizzare"));
			while ((!unk_0x5053BF6D5604065B(joaat("rapidgt")) || !unk_0x5053BF6D5604065B(joaat("surano"))) || !unk_0x5053BF6D5604065B(joaat("carbonizzare")))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (!unk_0xD51CFE69539DB6D8(iLocal_3259))
			{
				unk_0xB86B1248EA9B87EA(Local_3294, 5f, 1, 0, 0, 0);
				iLocal_3259 = unk_0xD504D1FF5DD2FFD7(joaat("rapidgt"), Local_3294, fLocal_3321, 1, 1);
				unk_0x408AD7E5AD0BB545(iLocal_3259, 112, 112);
				unk_0x09714949CF524B00(iLocal_3259, 3000);
				unk_0x9DB0432DBE539D98(iLocal_3259, 1);
				unk_0x839E9476E54502A2(joaat("rapidgt"));
				unk_0x7E38E815EF844C74(joaat("rapidgt"), 1);
				unk_0xFD092FF761E54535(iLocal_3259, 1);
				unk_0x8100F8AA27EE924B(iLocal_3259, 1);
			}
			if (!unk_0xD51CFE69539DB6D8(iLocal_3276))
			{
				if (unk_0x5053BF6D5604065B(joaat("surano")))
				{
					unk_0xB86B1248EA9B87EA(-1037.398f, -491.6539f, 35.5545f, 5f, 1, 0, 0, 0);
					iLocal_3276 = unk_0xD504D1FF5DD2FFD7(joaat("surano"), -1037.398f, -491.6539f, 35.5545f, 208.889f, 1, 1);
					unk_0x408AD7E5AD0BB545(iLocal_3276, 0, 0);
					unk_0x09714949CF524B00(iLocal_3276, 3000);
					unk_0x9DB0432DBE539D98(iLocal_3276, 1);
					unk_0x839E9476E54502A2(joaat("surano"));
					unk_0x7E38E815EF844C74(joaat("surano"), 1);
					unk_0x8100F8AA27EE924B(iLocal_3276, 1);
				}
			}
			if (!unk_0xD51CFE69539DB6D8(iLocal_3277))
			{
				if (unk_0x5053BF6D5604065B(joaat("carbonizzare")))
				{
					unk_0xB86B1248EA9B87EA(Local_3294, 5f, 1, 0, 0, 0);
					iLocal_3277 = unk_0xD504D1FF5DD2FFD7(joaat("carbonizzare"), -1033.938f, -489.7475f, 35.8323f, 207.1758f, 1, 1);
					unk_0x408AD7E5AD0BB545(iLocal_3277, 89, 89);
					unk_0x09714949CF524B00(iLocal_3277, 3000);
					unk_0x9DB0432DBE539D98(iLocal_3277, 1);
					unk_0x839E9476E54502A2(joaat("carbonizzare"));
					unk_0x7E38E815EF844C74(joaat("carbonizzare"), 1);
					unk_0x8100F8AA27EE924B(iLocal_3277, 1);
				}
			}
			break;
		
		case 3:
			unk_0x062A4B39164546AD("TRV4_CHASE");
			unk_0x1B1CE102A7E7999E(unk_0x3F80C6638E3A1A90(), 0, 0);
			unk_0x6FF6F40CA433340F(unk_0x3F80C6638E3A1A90(), 0);
			func_156();
			unk_0xB86B1248EA9B87EA(Local_3297, 200f, 1, 0, 0, 0);
			if (!unk_0xD51CFE69539DB6D8(iLocal_3258))
			{
				iLocal_3258 = unk_0xD504D1FF5DD2FFD7(joaat("cogcabrio"), Local_3297, fLocal_3322, 1, 1);
				unk_0xD39141689169EF06(iLocal_3258, 1, 1, 1, 1, 1, 0, 0, 0);
				unk_0x408AD7E5AD0BB545(iLocal_3258, 27, 27);
				unk_0x839E9476E54502A2(joaat("cogcabrio"));
				unk_0x28EB71E26B7A2DE2(iLocal_3258, "SOL_3_MOLLY_CAR_Group", 0);
			}
			if (!unk_0xD51CFE69539DB6D8(iLocal_3222))
			{
				iLocal_3222 = unk_0xF430A9686E704FA3(iLocal_3258, 26, joaat("ig_molly"), -1, 1, 1);
				unk_0xD39141689169EF06(iLocal_3222, 1, 1, 1, 1, 1, 0, 0, 0);
				unk_0x2EF7A8CB89D363F6(iLocal_3222, 1);
				unk_0x321C1AA209172C00(iLocal_3222, 0);
				unk_0x839E9476E54502A2(joaat("ig_molly"));
				unk_0x690C5239500171FE(iLocal_3222, joaat("player"));
			}
			if (func_23())
			{
				if (!unk_0xD51CFE69539DB6D8(iLocal_3259))
				{
					if (func_155())
					{
						if (!unk_0xFFD2CE10E8C7E77F(func_154()) && !unk_0xD1C57B32C6DE7BB6(func_154()))
						{
							iLocal_3259 = func_124(Local_3312, fLocal_3325);
							unk_0x839E9476E54502A2(func_154());
							unk_0x8100F8AA27EE924B(iLocal_3259, 1);
						}
						else
						{
							iLocal_3259 = unk_0xD504D1FF5DD2FFD7(joaat("rapidgt"), Local_3312, fLocal_3325, 1, 1);
							unk_0x408AD7E5AD0BB545(iLocal_3259, 112, 112);
						}
					}
					else
					{
						iLocal_3259 = unk_0xD504D1FF5DD2FFD7(joaat("rapidgt"), Local_3312, fLocal_3325, 1, 1);
						unk_0x408AD7E5AD0BB545(iLocal_3259, 112, 112);
					}
					unk_0x09714949CF524B00(iLocal_3259, 3000);
					unk_0x9DB0432DBE539D98(iLocal_3259, 1);
					unk_0xD39141689169EF06(iLocal_3259, 0, 1, 0, 0, 0, 0, 0, 0);
					unk_0xFD092FF761E54535(iLocal_3259, 1);
					unk_0x839E9476E54502A2(joaat("rapidgt"));
					unk_0x8100F8AA27EE924B(iLocal_3259, 1);
				}
			}
			else if (!unk_0xD51CFE69539DB6D8(iLocal_3259))
			{
				iLocal_3259 = unk_0xD504D1FF5DD2FFD7(joaat("rapidgt"), Local_3312, fLocal_3325, 1, 1);
				unk_0x408AD7E5AD0BB545(iLocal_3259, 112, 112);
				unk_0x839E9476E54502A2(joaat("rapidgt"));
				unk_0x09714949CF524B00(iLocal_3259, 3000);
				unk_0x9DB0432DBE539D98(iLocal_3259, 1);
				unk_0xD39141689169EF06(iLocal_3259, 0, 1, 0, 0, 0, 0, 0, 0);
				unk_0xFD092FF761E54535(iLocal_3259, 1);
				unk_0x8100F8AA27EE924B(iLocal_3259, 1);
			}
			break;
		
		case 5:
			iLocal_3352 = 0;
			unk_0xB86B1248EA9B87EA(-973.3f, -2967.7f, 13.5f, 100f, 1, 0, 0, 0);
			unk_0xC1B1E9A034A63A62(0);
			unk_0x801429C020C467BA(joaat("jet"));
			unk_0x801429C020C467BA(joaat("shamal"));
			unk_0xCBEB830866A6963D("BB_MOLLY_2");
			unk_0x801429C020C467BA(joaat("s_m_y_airworker"));
			unk_0x801429C020C467BA(joaat("s_m_y_cop_01"));
			unk_0x801429C020C467BA(joaat("police3"));
			unk_0x801429C020C467BA(joaat("ig_molly"));
			unk_0x801429C020C467BA(joaat("cogcabrio"));
			unk_0x801429C020C467BA(joaat("rapidgt"));
			unk_0x801429C020C467BA(joaat("prop_cs_film_reel_01"));
			unk_0xDBDFBE5906702D9E(68, "BB_Chase");
			unk_0xDBDFBE5906702D9E(69, "BB_Chase");
			unk_0xCBEB830866A6963D("Trev4_5");
			unk_0xDF14478656A9018C();
			unk_0x2B0BB514F9140141("move_f@film_reel_arms");
			unk_0x2B0BB514F9140141("misssolomon_3");
			while (((((((((((((((!unk_0x5053BF6D5604065B(joaat("jet")) || !unk_0x5053BF6D5604065B(joaat("shamal"))) || !unk_0x729A24E50365D07B("BB_MOLLY_2")) || !unk_0x5053BF6D5604065B(joaat("s_m_y_airworker"))) || !unk_0x5053BF6D5604065B(joaat("s_m_y_cop_01"))) || !unk_0x5053BF6D5604065B(joaat("police3"))) || !unk_0x5053BF6D5604065B(joaat("ig_molly"))) || !unk_0x5053BF6D5604065B(joaat("cogcabrio"))) || !unk_0x5053BF6D5604065B(joaat("rapidgt"))) || !unk_0x5053BF6D5604065B(joaat("prop_cs_film_reel_01"))) || !unk_0x08F84BB137ADEE81(68, "BB_Chase")) || !unk_0x08F84BB137ADEE81(69, "BB_Chase")) || !unk_0x729A24E50365D07B("Trev4_5")) || !unk_0xD6306290BE90B505()) || !unk_0x2917D5E1CB5CE43A("move_f@film_reel_arms")) || !unk_0x2917D5E1CB5CE43A("misssolomon_3"))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (!unk_0xD51CFE69539DB6D8(iLocal_3222))
			{
				iLocal_3222 = unk_0xA7F4088D9A2629CC(26, joaat("ig_molly"), -920.5093f, -2943.93f, 12.9451f, 157.6203f, 1, 1);
				unk_0x2EF7A8CB89D363F6(iLocal_3222, 1);
				unk_0x321C1AA209172C00(iLocal_3222, 0);
				unk_0x9BEE7E791BC4D38B(iLocal_3222, 1);
				unk_0x839E9476E54502A2(joaat("ig_molly"));
				unk_0xC602CB510D8B9EAE(iLocal_3222, 1);
				unk_0x690C5239500171FE(iLocal_3222, joaat("player"));
			}
			iLocal_3283 = unk_0x8C15E6EC0BC9B4BE(joaat("prop_cs_film_reel_01"), -929f, -2917f, 13f, 1, 1, 0);
			unk_0x9E4D318905B670CB(iLocal_3283, iLocal_3222, unk_0x206A9EC63F98F19D(iLocal_3222, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			if (!unk_0xD51CFE69539DB6D8(iLocal_3266))
			{
				iLocal_3266 = unk_0xD504D1FF5DD2FFD7(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 1, 1);
				unk_0xED6BC33BD669B45F(iLocal_3266, 2);
				unk_0x4F6C6B452FA34B13(iLocal_3266, 0);
				unk_0x2878EC06B3F897A0(iLocal_3266, 1);
				unk_0xD39141689169EF06(iLocal_3266, 1, 1, 1, 1, 1, 0, 0, 0);
				unk_0x839E9476E54502A2(joaat("jet"));
				unk_0x29627C73E3F24F9A(iLocal_3266, 500);
			}
			if (func_23())
			{
				if (func_155())
				{
					func_122();
					while (!func_112())
					{
						unk_0x4EDE34FBADD967A6(0);
					}
				}
				if (!unk_0xD51CFE69539DB6D8(iLocal_3259))
				{
					if (func_155())
					{
						iLocal_3259 = func_124(-918.6263f, -2926.631f, 12.9666f, 43.1705f);
						unk_0xFD092FF761E54535(iLocal_3259, 1);
						unk_0x839E9476E54502A2(func_154());
						unk_0x8100F8AA27EE924B(iLocal_3259, 1);
					}
					else
					{
						iLocal_3259 = unk_0xD504D1FF5DD2FFD7(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, 1);
						unk_0x408AD7E5AD0BB545(iLocal_3259, 112, 112);
						unk_0xFD092FF761E54535(iLocal_3259, 1);
						unk_0x839E9476E54502A2(joaat("rapidgt"));
						unk_0x8100F8AA27EE924B(iLocal_3259, 1);
					}
				}
			}
			else if (!unk_0xD51CFE69539DB6D8(iLocal_3259))
			{
				iLocal_3259 = unk_0xD504D1FF5DD2FFD7(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, 1);
				unk_0x408AD7E5AD0BB545(iLocal_3259, 112, 112);
				unk_0x839E9476E54502A2(joaat("rapidgt"));
				unk_0xFD092FF761E54535(iLocal_3259, 1);
				unk_0x8100F8AA27EE924B(iLocal_3259, 1);
			}
			if (!unk_0xD51CFE69539DB6D8(iLocal_3258))
			{
				iLocal_3258 = unk_0xD504D1FF5DD2FFD7(joaat("cogcabrio"), -928.3279f, -2916.16f, 12.945f, 61.7688f, 1, 1);
				unk_0x408AD7E5AD0BB545(iLocal_3258, 27, 27);
				unk_0x839E9476E54502A2(joaat("cogcabrio"));
			}
			if (!unk_0xD51CFE69539DB6D8(iLocal_3263))
			{
				iLocal_3263 = unk_0xD504D1FF5DD2FFD7(joaat("police3"), -924.2796f, -2914.371f, 12.945f, 86.6188f, 1, 1);
			}
			if (!unk_0xD51CFE69539DB6D8(iLocal_3248))
			{
				iLocal_3248 = unk_0xA7F4088D9A2629CC(6, joaat("s_m_y_cop_01"), -922.942f, -2912.509f, 12.945f, 156.2652f, 1, 1);
				unk_0xCC897563F1971D6A(iLocal_3248, joaat("weapon_pistol"), 1000, 1, 1);
				func_111(iLocal_3248, 0);
				unk_0x839E9476E54502A2(joaat("s_m_y_cop_01"));
			}
			unk_0xC1B1E9A034A63A62(0);
			func_110(2, 1);
			iLocal_3360 = 1;
			break;
		
		case 8:
			unk_0xB86B1248EA9B87EA(-973.3f, -2967.7f, 13.5f, 100f, 1, 0, 0, 0);
			unk_0xC1B1E9A034A63A62(0);
			iLocal_3352 = 0;
			iLocal_3360 = 0;
			iLocal_3339 = 0;
			unk_0x801429C020C467BA(joaat("jet"));
			unk_0x801429C020C467BA(joaat("s_m_y_airworker"));
			unk_0x801429C020C467BA(joaat("shamal"));
			unk_0x801429C020C467BA(joaat("s_m_y_cop_01"));
			unk_0x801429C020C467BA(joaat("police3"));
			unk_0x801429C020C467BA(joaat("cogcabrio"));
			unk_0x801429C020C467BA(joaat("rapidgt"));
			unk_0x801429C020C467BA(joaat("prop_jet_bloodsplat_01"));
			unk_0xDBDFBE5906702D9E(68, "BB_Chase");
			unk_0xDBDFBE5906702D9E(69, "BB_Chase");
			unk_0xDF14478656A9018C();
			while ((((((((((!unk_0x5053BF6D5604065B(joaat("jet")) || !unk_0x5053BF6D5604065B(joaat("s_m_y_airworker"))) || !unk_0x5053BF6D5604065B(joaat("shamal"))) || !unk_0x5053BF6D5604065B(joaat("s_m_y_cop_01"))) || !unk_0x5053BF6D5604065B(joaat("police3"))) || !unk_0x5053BF6D5604065B(joaat("cogcabrio"))) || !unk_0x5053BF6D5604065B(joaat("rapidgt"))) || !unk_0x5053BF6D5604065B(joaat("prop_jet_bloodsplat_01"))) || !unk_0x08F84BB137ADEE81(68, "BB_Chase")) || !unk_0x08F84BB137ADEE81(69, "BB_Chase")) || !unk_0xD6306290BE90B505())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			func_109();
			if (func_23())
			{
				if (func_155())
				{
					func_122();
					while (!func_112())
					{
						unk_0x4EDE34FBADD967A6(0);
					}
				}
				if (!unk_0xD51CFE69539DB6D8(iLocal_3259))
				{
					if (func_155())
					{
						iLocal_3259 = func_124(-918.6263f, -2926.631f, 12.9666f, 43.1705f);
						unk_0xFD092FF761E54535(iLocal_3259, 1);
						unk_0x839E9476E54502A2(func_154());
						unk_0x8100F8AA27EE924B(iLocal_3259, 1);
					}
					else
					{
						iLocal_3259 = unk_0xD504D1FF5DD2FFD7(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, 1);
						unk_0x408AD7E5AD0BB545(iLocal_3259, 112, 112);
						unk_0xFD092FF761E54535(iLocal_3259, 1);
						unk_0x839E9476E54502A2(joaat("rapidgt"));
						unk_0x8100F8AA27EE924B(iLocal_3259, 1);
					}
				}
			}
			else if (!unk_0xD51CFE69539DB6D8(iLocal_3259))
			{
				iLocal_3259 = unk_0xD504D1FF5DD2FFD7(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, 1);
				unk_0x408AD7E5AD0BB545(iLocal_3259, 112, 112);
				unk_0x839E9476E54502A2(joaat("rapidgt"));
				unk_0xFD092FF761E54535(iLocal_3259, 1);
				unk_0x8100F8AA27EE924B(iLocal_3259, 1);
			}
			if (!unk_0xD51CFE69539DB6D8(iLocal_3258))
			{
				iLocal_3258 = unk_0xD504D1FF5DD2FFD7(joaat("cogcabrio"), -928.3279f, -2916.16f, 12.945f, 61.7688f, 1, 1);
				unk_0x408AD7E5AD0BB545(iLocal_3258, 27, 27);
				unk_0x839E9476E54502A2(joaat("cogcabrio"));
			}
			if (!unk_0xD51CFE69539DB6D8(iLocal_3263))
			{
				iLocal_3263 = unk_0xD504D1FF5DD2FFD7(joaat("police3"), -924.2796f, -2914.371f, 12.945f, 86.6188f, 1, 1);
			}
			if (!unk_0xD51CFE69539DB6D8(iLocal_3248))
			{
				iLocal_3248 = unk_0xA7F4088D9A2629CC(6, joaat("s_m_y_cop_01"), -922.942f, -2912.509f, 12.945f, 156.2652f, 1, 1);
				unk_0xCC897563F1971D6A(iLocal_3248, joaat("weapon_pistol"), 1000, 1, 1);
				func_111(iLocal_3248, 0);
				unk_0x839E9476E54502A2(joaat("s_m_y_cop_01"));
			}
			if (!unk_0xD51CFE69539DB6D8(iLocal_3282))
			{
				iLocal_3282 = unk_0x8C15E6EC0BC9B4BE(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, 1, 1, 0);
				unk_0x11089405D5CD3FD2(iLocal_3282, 0f, 0f, -121.5948f, 2, 1);
				unk_0x1F8CB81CA52CE552(iLocal_3282, 0f, 0f, 0.8729f, -0.4879f);
				unk_0x839E9476E54502A2(joaat("prop_jet_bloodsplat_01"));
			}
			if (!unk_0xD51CFE69539DB6D8(iLocal_3266))
			{
				iLocal_3266 = unk_0xD504D1FF5DD2FFD7(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 1, 1);
				unk_0xED6BC33BD669B45F(iLocal_3266, 2);
				unk_0x4F6C6B452FA34B13(iLocal_3266, 0);
				unk_0x2878EC06B3F897A0(iLocal_3266, 1);
				unk_0xD39141689169EF06(iLocal_3266, 1, 1, 1, 1, 1, 0, 0, 0);
				unk_0x839E9476E54502A2(joaat("jet"));
				uLocal_3763 = unk_0x8290B5289783C18C("scr_trev4_747_engine_damage", iLocal_3266, -11.956f, 10.528f, -7.657f, 0f, 2f, 0f, 1065353216, 0, 0, 0);
				unk_0x29627C73E3F24F9A(iLocal_3266, 500);
			}
			if (!unk_0xD51CFE69539DB6D8(iLocal_3228))
			{
				iLocal_3228 = unk_0xA7F4088D9A2629CC(26, joaat("s_m_y_airworker"), -933.8942f, -2965.785f, 12.9451f, 331.7339f, 1, 1);
				func_17(&uLocal_3578, 4, iLocal_3228, "HangerWorker", 0, 1);
				unk_0x839E9476E54502A2(joaat("s_m_y_airworker"));
				unk_0x321C1AA209172C00(iLocal_3228, 1);
				unk_0x9BEE7E791BC4D38B(iLocal_3228, 1);
				unk_0x4B79E06845D63B96(iLocal_3228, unk_0xE7869D5D7816A9B6(), 150f, -1, 0, 0);
				unk_0x8D6671D78D1F569B(iLocal_3228, 1);
				unk_0xD39141689169EF06(iLocal_3228, 0, 0, 0, 0, 0, 0, 0, 0);
				unk_0x506D42CB68AE4EA5(&iLocal_3228);
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
	
	if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		iVar0 = unk_0x6932EF44AAFF2C73(unk_0xE7869D5D7816A9B6(), 0);
		if (iVar0 != joaat("weapon_unarmed"))
		{
			unk_0x36EE5CBF45EC4826(unk_0xE7869D5D7816A9B6(), iVar0, iParam0);
		}
	}
}

int func_108(int iParam0)
{
	if (Global_91062 > 0)
	{
		return Global_95220.f_21[iParam0];
	}
	return Global_92815.f_21[iParam0];
}

void func_109()
{
	if (iLocal_3339 == 0)
	{
		if (!unk_0xD51CFE69539DB6D8(iLocal_3268[0]))
		{
			iLocal_3268[0] = unk_0xD504D1FF5DD2FFD7(joaat("police3"), -994.5278f, -2903.285f, 12.9447f, 158.7951f, 1, 1);
			unk_0xC0C7A9F655DB1456(iLocal_3268[0], 0);
		}
		if (!unk_0xD51CFE69539DB6D8(iLocal_3233[0]))
		{
			iLocal_3233[0] = unk_0xA7F4088D9A2629CC(6, joaat("s_m_y_cop_01"), -969.06f, -2955.186f, 12.945f, 241.1703f, 1, 1);
			unk_0xCC897563F1971D6A(iLocal_3233[0], joaat("weapon_pistol"), 1000, 1, 1);
			unk_0xB161EBD04DDDE4AD(iLocal_3233[0], 20);
			unk_0xC602CB510D8B9EAE(iLocal_3233[0], 1);
			unk_0xA02736B50802C8BB(iLocal_3233[0], unk_0xE7869D5D7816A9B6(), -1, 1);
			func_111(iLocal_3233[0], 0);
		}
		if (!unk_0xD51CFE69539DB6D8(iLocal_3267))
		{
			iLocal_3267 = unk_0xD504D1FF5DD2FFD7(joaat("shamal"), -968.3718f, -2952.298f, 12.9451f, 114.9439f, 1, 1);
			unk_0xC9CEB5227A733CE6(iLocal_3267);
			unk_0x839E9476E54502A2(joaat("shamal"));
			unk_0x09714949CF524B00(iLocal_3267, 2000);
			unk_0xDBF2D7502C37C299(iLocal_3267, 0, 0, 1);
		}
		if (!unk_0xD51CFE69539DB6D8(iLocal_3233[6]))
		{
			iLocal_3233[6] = unk_0xF430A9686E704FA3(iLocal_3268[0], 6, joaat("s_m_y_cop_01"), 0, 1, 1);
			unk_0xCC897563F1971D6A(iLocal_3233[6], joaat("weapon_pistol"), 1000, 1, 1);
			unk_0xB161EBD04DDDE4AD(iLocal_3233[6], 20);
			unk_0xC602CB510D8B9EAE(iLocal_3233[6], 1);
			unk_0x9BEE7E791BC4D38B(iLocal_3233[6], 1);
			func_111(iLocal_3233[6], 0);
		}
		if (!unk_0xD51CFE69539DB6D8(iLocal_3233[7]))
		{
			iLocal_3233[7] = unk_0xF430A9686E704FA3(iLocal_3268[0], 6, joaat("s_m_y_cop_01"), -1, 1, 1);
			unk_0xCC897563F1971D6A(iLocal_3233[7], joaat("weapon_pistol"), 1000, 1, 1);
			unk_0xB161EBD04DDDE4AD(iLocal_3233[7], 20);
			unk_0xC602CB510D8B9EAE(iLocal_3233[7], 1);
			unk_0x9BEE7E791BC4D38B(iLocal_3233[7], 1);
			func_111(iLocal_3233[7], 0);
		}
		if (!unk_0xD51CFE69539DB6D8(iLocal_3268[1]))
		{
			iLocal_3268[1] = unk_0xD504D1FF5DD2FFD7(joaat("police3"), -962.2432f, -2864.16f, 12.9447f, 149.5586f, 1, 1);
			unk_0xC0C7A9F655DB1456(iLocal_3268[1], 0);
		}
		if (!unk_0xD51CFE69539DB6D8(iLocal_3233[8]))
		{
			iLocal_3233[8] = unk_0xF430A9686E704FA3(iLocal_3268[1], 6, joaat("s_m_y_cop_01"), 0, 1, 1);
			unk_0xCC897563F1971D6A(iLocal_3233[8], joaat("weapon_pistol"), 1000, 1, 1);
			unk_0xB161EBD04DDDE4AD(iLocal_3233[8], 20);
			unk_0xC602CB510D8B9EAE(iLocal_3233[8], 1);
			unk_0x9BEE7E791BC4D38B(iLocal_3233[8], 1);
			func_111(iLocal_3233[8], 0);
		}
		if (!unk_0xD51CFE69539DB6D8(iLocal_3233[9]))
		{
			iLocal_3233[9] = unk_0xF430A9686E704FA3(iLocal_3268[1], 6, joaat("s_m_y_cop_01"), -1, 1, 1);
			unk_0xCC897563F1971D6A(iLocal_3233[9], joaat("weapon_pistol"), 1000, 1, 1);
			unk_0xB161EBD04DDDE4AD(iLocal_3233[9], 20);
			unk_0xC602CB510D8B9EAE(iLocal_3233[9], 1);
			unk_0x9BEE7E791BC4D38B(iLocal_3233[9], 1);
			func_111(iLocal_3233[9], 0);
		}
		if (!unk_0xD51CFE69539DB6D8(iLocal_3233[10]))
		{
			iLocal_3233[10] = unk_0xA7F4088D9A2629CC(6, joaat("s_m_y_cop_01"), -922.1185f, -2939.595f, 12.9451f, 156.1408f, 1, 1);
			unk_0xCC897563F1971D6A(iLocal_3233[10], joaat("weapon_pistol"), 1000, 1, 1);
			unk_0xB161EBD04DDDE4AD(iLocal_3233[10], 20);
			unk_0xC602CB510D8B9EAE(iLocal_3233[10], 1);
			unk_0x9BEE7E791BC4D38B(iLocal_3233[10], 1);
			func_111(iLocal_3233[10], 0);
			unk_0x34DCA6051298B2F6(iLocal_3233[10], 1);
		}
		iLocal_3339 = 1;
	}
}

void func_110(int iParam0, int iParam1)
{
	unk_0x9956FB0E4B50ECB8(&Global_25191, iParam0);
	StringCopy(&(Global_25192[iParam0 /*6*/]), unk_0x959E7FA37C0D0892(), 24);
	Global_25247[iParam0] = iParam1;
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
			if (Global_55608[iVar0 /*2*/] != 0)
			{
				if (Global_55608[iVar0 /*2*/] == iParam0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
	if (64 == Global_55607)
	{
		return;
	}
	iVar1 = -1;
	iVar2 = 0;
	while (iVar1 == -1 && iVar2 != 64)
	{
		if (Global_55608[iVar2 /*2*/] == 0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	Global_55608[iVar1 /*2*/] = iParam0;
	Global_55608[iVar1 /*2*/].f_1 = 7;
	Global_55607++;
}

bool func_112()
{
	return func_113(&(Global_95220.f_2311));
}

int func_113(var uParam0)
{
	if (func_114(uParam0))
	{
		if (unk_0x5053BF6D5604065B(uParam0->f_12.f_66))
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
	if (!func_116(uParam0->f_12.f_66))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_115(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

int func_115(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x7F38A542899D217A((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x7F38A542899D217A((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x7F38A542899D217A((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x7F38A542899D217A((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x7F38A542899D217A((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_116(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x6A3E3EA4770CE80A(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x00AAD79B42B3E036())) || (iParam0 == joaat("buffalo3") && !unk_0x00AAD79B42B3E036())) || (iParam0 == joaat("gauntlet2") && !unk_0x00AAD79B42B3E036())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x00AAD79B42B3E036())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_121())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x49371C7B668CA46F())
		{
			if (unk_0x373784C902F4F74E(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xCA0E36ABF4510784(Var1.f_0))
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
		if ((((!func_120() && !func_119()) && !func_118()) && !func_117()) && !func_121())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xFD563D1BF81A2CB8() || unk_0xA78EA29AC2FFBADE()) || unk_0x7ECD3D8283875DD1())
		{
		}
		else if (!func_118())
		{
			return 0;
		}
	}
	return 1;
}

int func_117()
{
	return 0;
}

int func_118()
{
	return 1;
}

int func_119()
{
	return 1;
}

int func_120()
{
	if (unk_0x3442D8DA379C5187(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_121()
{
	var uVar0;
	
	if (unk_0x6E2954F2B1919678())
	{
		if (unk_0x6935836F937B7980())
		{
			if (unk_0xACCC319A72FE75AB())
			{
				unk_0x56DCF5665F92F9BD(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x9956FB0E4B50ECB8(&uVar0, 2);
				unk_0x9956FB0E4B50ECB8(&uVar0, 4);
				unk_0x9956FB0E4B50ECB8(&uVar0, 6);
				unk_0x9956FB0E4B50ECB8(&Global_25, 2);
				unk_0x9956FB0E4B50ECB8(&Global_25, 4);
				unk_0x9956FB0E4B50ECB8(&Global_25, 6);
				unk_0x39DEDCCD70293F58(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x6FBD7D781A378269())
				{
					uVar0 = unk_0x623F98022BC99367(866);
					unk_0x9956FB0E4B50ECB8(&uVar0, 0);
					unk_0x305E571F148D27EA(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_136199 == 2)
	{
		return 1;
	}
	else if (Global_136199 == 3)
	{
		return 0;
	}
	if (unk_0x6FBD7D781A378269())
	{
		if (unk_0xB519E5386FBF69E5(unk_0x623F98022BC99367(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_122()
{
	func_123(&(Global_95220.f_2311));
}

void func_123(var uParam0)
{
	if (func_114(uParam0))
	{
		unk_0x801429C020C467BA(uParam0->f_12.f_66);
	}
}

int func_124(struct<3> Param0, float fParam3)
{
	return func_125(&(Global_95220.f_2311), Param0, fParam3, 0);
}

int func_125(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
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
			if (unk_0xB84E12C6EBFF63A4(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
		if (func_113(uParam0))
		{
			unk_0xB86B1248EA9B87EA(Param1, 5f, 1, 0, 0, 0);
			func_153(Param1, 5f, 0);
			iVar0 = unk_0xD504D1FF5DD2FFD7(uParam0->f_12.f_66, Param1, fParam4, 1, 1);
			if (unk_0xD51CFE69539DB6D8(iVar0))
			{
				Var1 = { unk_0x1141852D07400777(iVar0, 1) };
				if (unk_0xB7A628320EFF8E47(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0x9CA89729A675E8FF(iVar0, Param1, 0, 0, 1);
				}
				func_146(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (unk_0xAA65D1F2BF4AAFFB(uParam0->f_12.f_66) || unk_0xD4023077B0753359(uParam0->f_12.f_66))
				{
					if (!unk_0x44A90CB76CA95162(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					unk_0xC9CEB5227A733CE6(iVar0);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (unk_0x3937C84F74FAABA4(unk_0x1B2DC87EFB36DF80(iVar0)))
						{
							func_145(uParam0->f_11, 1);
						}
						else if (unk_0x07C6F7E084F6A97E(unk_0x1B2DC87EFB36DF80(iVar0)))
						{
							func_145(uParam0->f_11, 2);
						}
					}
					unk_0xE07FEB47C3650425(iVar0, 0);
					unk_0xC0C7A9F655DB1456(iVar0, 0);
					unk_0x8100F8AA27EE924B(iVar0, 1);
					func_144(iVar0, uParam0->f_11);
				}
				else if ((!func_142(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0x04E7E853E31F41A3(unk_0x959E7FA37C0D0892(), "startup_positioning"))
				{
					iVar8 = func_141(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_136(iVar8);
					}
				}
				if (((Global_91025 != 13 && Global_91025 != 10) && Global_91025 != 11) && Global_91025 != 12)
				{
					if (unk_0xC7C6DDDE84A8E734(&(Global_91025.f_3)) == Global_69093)
					{
						if (uParam0->f_12.f_66 == Global_99155.f_18731.f_69[21 /*78*/].f_66)
						{
							func_133(24, 0);
							func_136(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_126(iVar0, uParam0->f_11);
				}
				unk_0x839E9476E54502A2(uParam0->f_12.f_66);
				Var1 = { unk_0x1141852D07400777(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_126(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_127(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xBD6B21D725712BDE(iParam0, -1);
		if (!unk_0xD51CFE69539DB6D8(iVar0))
		{
			iVar0 = unk_0xFC6351163F828F49(iParam0, -1);
		}
		if (unk_0xD51CFE69539DB6D8(iVar0) && !unk_0xAF437D7C802AB246(iVar0))
		{
			if (unk_0x1B2DC87EFB36DF80(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x1B2DC87EFB36DF80(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x1B2DC87EFB36DF80(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_99155.f_1750.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x1B2DC87EFB36DF80(iParam0) == Global_99155.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xF6917DE0E003509D(&(Global_99155.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x04E7E853E31F41A3(unk_0xC2421167AF5744AC(iParam0), &(Global_99155.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_99155.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_99155.f_18731.f_5592[iVar1] = iVar2;
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
		if (unk_0x1B2DC87EFB36DF80(iParam0) == Global_99155.f_18731.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xF6917DE0E003509D(&(Global_99155.f_18731.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x04E7E853E31F41A3(unk_0xC2421167AF5744AC(iParam0), &(Global_99155.f_18731.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_99155.f_18731.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_99155.f_18731.f_5590 = iParam1;
	Global_69010 = iParam0;
	Global_99155.f_18731.f_5588 = 1;
	func_39(iParam0, &(Global_99155.f_18731.f_5510));
}

int func_127(int iParam0)
{
	if ((((((((((!unk_0xD51CFE69539DB6D8(iParam0) || !unk_0xC45A34912542C4EB(iParam0, 0)) || func_44(iParam0, 0, 0)) || func_44(iParam0, 1, 0)) || func_44(iParam0, 2, 0)) || func_34(iParam0) != 145) || func_132(iParam0)) || func_131(iParam0)) || func_130(iParam0)) || func_129(iParam0)) || !func_128(unk_0x1B2DC87EFB36DF80(iParam0)))
	{
		if (func_131(iParam0))
		{
		}
		if (func_131(iParam0))
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

int func_128(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_116(iParam0))
	{
		return 0;
	}
	if (((unk_0xAA65D1F2BF4AAFFB(iParam0) || unk_0xD1C57B32C6DE7BB6(iParam0)) || unk_0xFFD2CE10E8C7E77F(iParam0)) || unk_0x437C3632DA4A7584(iParam0))
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

int func_129(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x1B2DC87EFB36DF80(iParam0);
	sVar1 = unk_0xC2421167AF5744AC(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x04E7E853E31F41A3(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_116(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_130(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xD51CFE69539DB6D8(Global_88719[iVar0]))
		{
			if (Global_88719[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_131(int iParam0)
{
	int iVar0;
	
	if (unk_0xD51CFE69539DB6D8(iParam0) && unk_0xC45A34912542C4EB(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xD51CFE69539DB6D8(Global_88689[iVar0]) && unk_0xC45A34912542C4EB(Global_88689[iVar0], 0))
			{
				if (Global_88689[iVar0] == iParam0 && unk_0x1B2DC87EFB36DF80(Global_88689[iVar0]) == unk_0x1B2DC87EFB36DF80(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_132(int iParam0)
{
	int iVar0;
	
	if (unk_0xD51CFE69539DB6D8(Global_68105.f_484[24]))
	{
		if (iParam0 == Global_68105.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xD51CFE69539DB6D8(Global_68105.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68105.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_133(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_135(iParam0, 0))
		{
			func_134(iParam0, 1, 0);
			func_134(iParam0, 2, 0);
			func_134(iParam0, 3, 0);
			func_134(iParam0, 4, 0);
			func_134(iParam0, 0, 1);
			Global_68105[iParam0] = 1;
		}
	}
	else
	{
		func_134(iParam0, 0, 0);
	}
}

void func_134(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x9956FB0E4B50ECB8(&(Global_99155.f_18731[iParam0]), iParam1);
	}
	else
	{
		unk_0x73817D396768E4C6(&(Global_99155.f_18731[iParam0]), iParam1);
	}
}

bool func_135(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xB519E5386FBF69E5(Global_99155.f_18731[iParam0], iParam1);
}

void func_136(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_140(&(Global_68105.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xD51CFE69539DB6D8(Global_68105.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
			{
				if (unk_0xC45A34912542C4EB(Global_68105.f_139[iParam0], 0))
				{
					if (unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), Global_68105.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x20BB4B94CC6DDC9A(Global_68105.f_139[iParam0], 1, 1);
				unk_0x9E55BD45B84E7BDC(&(Global_68105.f_139[iParam0]));
			}
		}
		Global_68105[iParam0] = 1;
		if (unk_0xB519E5386FBF69E5(Global_68105.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_135(iParam0, 0)) && Global_69014.f_66 == 0) && Global_99155.f_18731.f_1958[Global_68105.f_555[0 /*21*/].f_14] != 0) && Global_99155.f_18731.f_1958[Global_68105.f_555[0 /*21*/].f_14] > 3) && (!func_138(0, Global_68105.f_555[0 /*21*/].f_12) || !func_138(1, Global_68105.f_555[0 /*21*/].f_12)))
			{
				func_137(&(Global_99155.f_18731.f_69[Global_68105.f_555[0 /*21*/].f_14 /*78*/]), &Global_69014);
				Global_69092 = Global_99155.f_18731.f_5591;
			}
			func_133(iParam0, 0);
		}
	}
}

void func_137(var uParam0, var uParam1)
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

int func_138(int iParam0, int iParam1)
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
	if (iParam0 < 0 || iParam0 >= func_139(&(Global_99155.f_18731.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_116(Global_99155.f_18731.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66);
}

int func_139(var uParam0)
{
	return *uParam0;
}

int func_140(var uParam0, int iParam1)
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
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 20);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_36(0, 1);
			uParam0->f_12 = 0;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 20);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_36(1, 1);
			uParam0->f_12 = 1;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 20);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_36(1, 2);
			uParam0->f_12 = 1;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 19);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_36(1, 1);
			uParam0->f_12 = 1;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 20);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_36(1, 2);
			uParam0->f_12 = 1;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 19);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_36(2, 1);
			uParam0->f_12 = 2;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 20);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_36(2, 1);
			uParam0->f_12 = 2;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 20);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_36(2, 1);
			uParam0->f_12 = 2;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 20);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 22);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 22);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 22);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 24);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 24);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 24);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 29);
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
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 27);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 24);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 29);
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
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 27);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 24);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 29);
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
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 27);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 24);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 11);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 13);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 11);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 13);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 9);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 9);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 8);
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
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 2);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 30);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 2);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 22);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
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
			if (func_121())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 13);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 2);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 1);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_121())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 13);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 2);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 1);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 30);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 30);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xB519E5386FBF69E5(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_99155.f_18731.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_68(Global_99155.f_18731.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_99155.f_18731.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_99155.f_18731.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_99155.f_18731.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xB519E5386FBF69E5(uParam0->f_9, 19))
	{
		if (!func_68(Global_99155.f_1750.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_99155.f_1750.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_99155.f_1750.f_539.f_2837[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xB519E5386FBF69E5(uParam0->f_9, 20))
	{
		if (!func_68(Global_99155.f_1750.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_99155.f_1750.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_99155.f_1750.f_539.f_2837[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_141(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0xD51CFE69539DB6D8(Global_68105.f_484[iVar0]) && !unk_0x76B2D234F1895632(Global_68105.f_484[iVar0])) && unk_0xC45A34912542C4EB(Global_68105.f_484[iVar0], 0))
		{
			unk_0x95C00B12C5FCA494(iParam0, &iVar1, &iVar2);
			unk_0x95C00B12C5FCA494(Global_68105.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0x1B2DC87EFB36DF80(iParam0) == unk_0x1B2DC87EFB36DF80(Global_68105.f_484[iVar0]) && unk_0x90DC8CCD4852ECAA(iParam0) == unk_0x90DC8CCD4852ECAA(Global_68105.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_142(int iParam0, struct<3> Param1, bool bParam4)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0x1B2DC87EFB36DF80(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_143(iParam0, Global_68105.f_139[38], 0))
			{
				func_136(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_143(iParam0, Global_68105.f_139[43], 1))
			{
				func_136(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = unk_0x03FA0C4EFCD138FB(unk_0xE7869D5D7816A9B6(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_143(iParam0, uVar1[iVar6], 1) && func_115(unk_0x1141852D07400777(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam4 || func_68(Param1, 0f, 0f, 0f, 0)) || unk_0xF18329472591CFE6(unk_0x1141852D07400777(iParam0, 1), unk_0x1141852D07400777(uVar1[iVar6], 1), 1) < 10f)
					{
						unk_0x9E55BD45B84E7BDC(&iParam0);
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
			if ((unk_0xD51CFE69539DB6D8(Global_68105.f_484[14]) && unk_0xC45A34912542C4EB(iParam0, 0)) && unk_0xC45A34912542C4EB(Global_68105.f_484[14], 0))
			{
				if (unk_0x1B2DC87EFB36DF80(Global_68105.f_484[14]) == joaat("luxor2") && unk_0x90DC8CCD4852ECAA(iParam0) == unk_0x90DC8CCD4852ECAA(Global_68105.f_484[14]))
				{
					func_136(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0xD51CFE69539DB6D8(Global_68105.f_484[20]) && unk_0xC45A34912542C4EB(iParam0, 0)) && unk_0xC45A34912542C4EB(Global_68105.f_484[20], 0))
			{
				if (unk_0x1B2DC87EFB36DF80(Global_68105.f_484[20]) == joaat("swift2") && unk_0x90DC8CCD4852ECAA(iParam0) == unk_0x90DC8CCD4852ECAA(Global_68105.f_484[20]))
				{
					func_136(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_143(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0xD51CFE69539DB6D8(iParam1) && !unk_0x76B2D234F1895632(iParam1)) && unk_0xC45A34912542C4EB(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0x95C00B12C5FCA494(iParam0, &iVar0, &iVar1);
			unk_0x95C00B12C5FCA494(iParam1, &iVar2, &iVar3);
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
		if (!unk_0xD51CFE69539DB6D8(Global_88689[iVar0]))
		{
			Global_88689[iVar0] = iParam0;
			Global_88699[iVar0] = iParam1;
			Global_88709[iVar0] = unk_0x1B2DC87EFB36DF80(iParam0);
			if (unk_0x3937C84F74FAABA4(Global_88709[iVar0]))
			{
				Global_88737[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_88737[iParam1 /*3*/][1] = -1;
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
		if (unk_0xD51CFE69539DB6D8(Global_88689[iVar0]))
		{
			if (iParam0 == 145 || Global_88699[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x1B2DC87EFB36DF80(Global_88689[iVar0]) == func_36(iParam0, iParam1))
				{
					if (!unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), Global_88689[iVar0], 0))
					{
						unk_0x20BB4B94CC6DDC9A(Global_88689[iVar0], 0, 1);
						unk_0x9E55BD45B84E7BDC(&(Global_88689[iVar0]));
						Global_88699[iVar0] = 145;
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
	int iVar1;
	int iVar2;
	
	if (unk_0xC45A34912542C4EB(iParam0, 0))
	{
		if (unk_0xC7C6DDDE84A8E734(&(uParam1->f_1)) != 0)
		{
			unk_0xAA38ABB77E443507(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < unk_0x93CF2A62AE3C8085())
		{
			unk_0x0E88E3FDED7F6766(iParam0, *uParam1);
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (unk_0xB519E5386FBF69E5(uParam1->f_77, func_40(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), func_40(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xB519E5386FBF69E5(uParam1->f_77, func_40(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), func_40(iVar1 + 1));
			}
		}
		if (unk_0xB519E5386FBF69E5(uParam1->f_77, 13))
		{
			unk_0x145645B37AE71EFB(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xA2F299A29CED1AB0(iParam0);
		}
		if (unk_0xB519E5386FBF69E5(uParam1->f_77, 12))
		{
			unk_0x2CF4F678CED1EB9D(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x50BBB995D0E3481E(iParam0);
		}
		unk_0x408AD7E5AD0BB545(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0xC5F406A695E19D8A(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xB519E5386FBF69E5(uParam1->f_77, 15) || func_152(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_151())
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
		unk_0x2AA0B1D3DB2C3E10(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			unk_0x40B9990275E6AD59(iParam0, 0);
		}
		else
		{
			unk_0x40B9990275E6AD59(iParam0, 0);
			unk_0x40B9990275E6AD59(iParam0, uParam1->f_65);
		}
		unk_0x0C27C841171728F7(iParam0, !unk_0xB519E5386FBF69E5(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0x18F90CF5D756C783(iParam0, uParam1->f_70);
		}
		unk_0x4FD36E73DE133D3F(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0x2706D464EB8463E7(iParam0, 2, unk_0xB519E5386FBF69E5(uParam1->f_77, 28));
		unk_0x2706D464EB8463E7(iParam0, 3, unk_0xB519E5386FBF69E5(uParam1->f_77, 29));
		unk_0x2706D464EB8463E7(iParam0, 0, unk_0xB519E5386FBF69E5(uParam1->f_77, 30));
		unk_0x2706D464EB8463E7(iParam0, 1, unk_0xB519E5386FBF69E5(uParam1->f_77, 31));
		unk_0xB862D2A317F182C4(iParam0, unk_0xB519E5386FBF69E5(uParam1->f_77, 10));
		if (unk_0x5349DE586C4C8ACB(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0xED6BC33BD669B45F(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x48E903ADD98A5FDD(unk_0x1B2DC87EFB36DF80(iParam0)))
			{
				if (unk_0x07C6F7E084F6A97E(unk_0x1B2DC87EFB36DF80(iParam0)))
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
		if (unk_0x657F8DC28088EB36(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0xD0005B9DEEF3CBA9(iParam0, 1);
			}
			else
			{
				unk_0x38FE2C5E44C306D8(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_147(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xFFD2CE10E8C7E77F(uParam1->f_66) && !unk_0xAA65D1F2BF4AAFFB(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0xB519E5386FBF69E5(uParam1->f_77, func_40(iVar2 + 1)))
				{
					if (!unk_0xDF705551345526F6(iParam0, iVar2 + 1))
					{
						unk_0xC1DD29CFE93055E7(iParam0, iVar2 + 1, 0);
					}
				}
				else if (unk_0xDF705551345526F6(iParam0, iVar2 + 1))
				{
					unk_0xC1DD29CFE93055E7(iParam0, iVar2 + 1, 1);
				}
				iVar2++;
			}
		}
		if (unk_0xD1C57B32C6DE7BB6(uParam1->f_66))
		{
			if (!unk_0xB519E5386FBF69E5(uParam1->f_77, 23))
			{
				if (unk_0xB519E5386FBF69E5(uParam1->f_77, 22))
				{
					unk_0xD390C3A4EAD66C38(iParam0, 2);
				}
				else
				{
					unk_0xD390C3A4EAD66C38(iParam0, 3);
				}
			}
			else
			{
				unk_0xD390C3A4EAD66C38(iParam0, 4);
			}
		}
		if (unk_0xB519E5386FBF69E5(uParam1->f_77, 27))
		{
			unk_0xFBDEFAD3C34AC9CF(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0xFBDEFAD3C34AC9CF(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_147(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xC45A34912542C4EB(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xA9D3956F42AEC644(*iParam0) == 0)
	{
		return 0;
	}
	unk_0x5DAB69BA0BF447FC(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0xFB0870DB05D28CB1(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0x1C8AF615CFEF2FE5(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x91C889C88C57B287(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x16580F6E093503C8(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x16580F6E093503C8(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x16580F6E093503C8(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if ((unk_0xBAA70A4A1B1A59C8(*iParam0, 38) != 0 && unk_0xBAA70A4A1B1A59C8(*iParam0, 24) != 0) && unk_0x1C8AF615CFEF2FE5(*iParam0, 24) != func_149(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x16580F6E093503C8(*iParam0, 24, func_149(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	if (func_148(*iParam0))
	{
		unk_0x9DB0432DBE539D98(*iParam0, 1);
		unk_0x8100F8AA27EE924B(*iParam0, 1);
	}
	return 1;
}

int func_148(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0xD51CFE69539DB6D8(iParam0) && unk_0xC45A34912542C4EB(iParam0, 0)) && unk_0xA9D3956F42AEC644(iParam0) > 0)
	{
		unk_0x5DAB69BA0BF447FC(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x1C8AF615CFEF2FE5(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x84501D0C09CEA717(iParam0, iVar1, unk_0x1C8AF615CFEF2FE5(iParam0, iVar1)), 16);
				iVar2 = unk_0xC7C6DDDE84A8E734(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0xC7C6DDDE84A8E734("MNU_CAGE") || iVar2 == unk_0xC7C6DDDE84A8E734("SABRE_CAG"))
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
	
	if (unk_0xD51CFE69539DB6D8(iParam0) && unk_0xC45A34912542C4EB(iParam0, 0))
	{
		iVar0 = unk_0xBAA70A4A1B1A59C8(iParam0, 38);
		iVar1 = unk_0xBAA70A4A1B1A59C8(iParam0, 24);
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
	
	if (unk_0xA9D3956F42AEC644(iParam0) > 0)
	{
		unk_0x5DAB69BA0BF447FC(iParam0, 0);
		iVar0 = unk_0x1C8AF615CFEF2FE5(iParam0, 24);
		iVar1 = unk_0xB4686A5F9149447D(iParam0, 24);
		unk_0xE9ECD7D720B42CB4(iParam0, uParam1);
		if (iVar0 == -1)
		{
			unk_0x91C889C88C57B287(iParam0, 24);
		}
		else
		{
			unk_0x16580F6E093503C8(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_151()
{
	return unk_0x3442D8DA379C5187(joaat("mpindependence"));
}

int func_152(int iParam0)
{
	int iVar0;
	
	if (unk_0xD51CFE69539DB6D8(iParam0))
	{
		if (unk_0xC45A34912542C4EB(iParam0, 0))
		{
			if (unk_0x8FFABA46948DBAD8("MPBitset", 3))
			{
				if (unk_0xB7AFC499DA70400A(iParam0, "MPBitset"))
				{
					iVar0 = unk_0x3947414BC68E5255(iParam0, "MPBitset");
				}
				return unk_0xB519E5386FBF69E5(iVar0, 4);
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
		if (func_140(&(Global_68105.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0xF18329472591CFE6(Param0, Global_68105.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_136(iVar0);
			}
		}
		iVar0++;
	}
}

var func_154()
{
	return Global_95220.f_2311.f_12.f_66;
}

bool func_155()
{
	return func_114(&(Global_95220.f_2311));
}

void func_156()
{
	uLocal_3293 = unk_0xE3C796DC28BC3254("BREAKING_NEWS");
	unk_0x801429C020C467BA(joaat("jet"));
	unk_0x801429C020C467BA(joaat("police3"));
	unk_0x801429C020C467BA(joaat("maverick"));
	unk_0x801429C020C467BA(joaat("bison"));
	unk_0x801429C020C467BA(joaat("blista"));
	unk_0x801429C020C467BA(joaat("ig_molly"));
	unk_0x801429C020C467BA(joaat("cogcabrio"));
	unk_0x801429C020C467BA(joaat("rapidgt"));
	unk_0xDBDFBE5906702D9E(45, "BB_Chase");
	unk_0xDBDFBE5906702D9E(35, "BB_Chase");
	unk_0xDBDFBE5906702D9E(2, "BB_Chase");
	unk_0xDBDFBE5906702D9E(54, "BB_Chase");
	unk_0xDBDFBE5906702D9E(55, "BB_Chase");
	unk_0xDBDFBE5906702D9E(67, "BB_Chase");
	func_158(1, "BB_Chase");
	if (func_23())
	{
		if (func_155())
		{
			if (!unk_0xFFD2CE10E8C7E77F(func_154()) && !unk_0xD1C57B32C6DE7BB6(func_154()))
			{
				func_122();
				while (!func_112())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
			}
		}
	}
	while (((((((!unk_0x5053BF6D5604065B(joaat("jet")) || !unk_0x5053BF6D5604065B(joaat("police3"))) || !unk_0x5053BF6D5604065B(joaat("maverick"))) || !unk_0x5053BF6D5604065B(joaat("bison"))) || !unk_0x5053BF6D5604065B(joaat("blista"))) || !unk_0x5053BF6D5604065B(joaat("ig_molly"))) || !unk_0x5053BF6D5604065B(joaat("cogcabrio"))) || !unk_0x5053BF6D5604065B(joaat("rapidgt")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!unk_0x4A4851D44CDF03C0(uLocal_3293) || !func_157(1, "BB_Chase"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (((((!unk_0x08F84BB137ADEE81(45, "BB_Chase") || !unk_0x08F84BB137ADEE81(35, "BB_Chase")) || !unk_0x08F84BB137ADEE81(2, "BB_Chase")) || !unk_0x08F84BB137ADEE81(54, "BB_Chase")) || !unk_0x08F84BB137ADEE81(55, "BB_Chase")) || !unk_0x08F84BB137ADEE81(67, "BB_Chase"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

bool func_157(int iParam0, char* sParam1)
{
	return unk_0x08F84BB137ADEE81(iParam0, sParam1);
}

void func_158(int iParam0, char* sParam1)
{
	unk_0xDBDFBE5906702D9E(iParam0, sParam1);
}

void func_159()
{
	func_185();
	func_183();
	unk_0x00400F14096FE01D();
	unk_0x515F66600A2670E2(0);
	unk_0x7195FF09321CD5EC(0);
	unk_0x1B8E0930AB96444B(1);
	if (unk_0x17C7D2D5A8AF4A62(iLocal_3220))
	{
		unk_0x0F0E3F0F32F8E90E(iLocal_3220);
	}
	if (unk_0x17FCDE390FBC3959(uLocal_3221))
	{
		unk_0x1FDB9F077F1FC25C(uLocal_3221);
	}
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		unk_0x88A973CE47FBEF95(unk_0xE7869D5D7816A9B6(), -1019.579f, -484.872f, 36.0795f, 1, 0, 0, 1);
		unk_0x151F32CB40BE730C(unk_0xE7869D5D7816A9B6(), 93.7701f);
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3259))
	{
		if (unk_0xC45A34912542C4EB(iLocal_3259, 0))
		{
			if (unk_0x05BA2AC20921A37E(iLocal_3259))
			{
				unk_0x6035B71FBC2881EC(iLocal_3259);
			}
		}
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3258))
	{
		if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
		{
			unk_0xD1AE9D189CB65173(iLocal_3258, 0);
			if (unk_0x05BA2AC20921A37E(iLocal_3258))
			{
				unk_0x6035B71FBC2881EC(iLocal_3258);
			}
		}
	}
	if (unk_0xA288661B75BFC01B(uLocal_3759))
	{
		unk_0x52F57B57CB8B4432(uLocal_3759, 0);
	}
	if (unk_0xA288661B75BFC01B(uLocal_3760))
	{
		unk_0x52F57B57CB8B4432(uLocal_3760, 0);
	}
	if (unk_0xA288661B75BFC01B(uLocal_3761))
	{
		unk_0x52F57B57CB8B4432(uLocal_3761, 0);
	}
	if (unk_0xA288661B75BFC01B(uLocal_3762))
	{
		unk_0x52F57B57CB8B4432(uLocal_3762, 0);
	}
	if (unk_0xA288661B75BFC01B(uLocal_3763))
	{
		unk_0x52F57B57CB8B4432(uLocal_3763, 0);
	}
	if (unk_0xA288661B75BFC01B(uLocal_3755[0]))
	{
		unk_0x52F57B57CB8B4432(uLocal_3755[0], 0);
	}
	if (unk_0xA288661B75BFC01B(uLocal_3755[1]))
	{
		unk_0x52F57B57CB8B4432(uLocal_3755[1], 0);
	}
	if (unk_0xA288661B75BFC01B(uLocal_3755[2]))
	{
		unk_0x52F57B57CB8B4432(uLocal_3755[2], 0);
	}
	unk_0x5736B7F949DFB3D6();
	if (unk_0xD51CFE69539DB6D8(iLocal_3222))
	{
		unk_0x2C9DDB5306DF417C(&iLocal_3222);
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3228))
	{
		unk_0x2C9DDB5306DF417C(&iLocal_3228);
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3245))
	{
		unk_0x2C9DDB5306DF417C(&iLocal_3245);
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3246))
	{
		unk_0x2C9DDB5306DF417C(&iLocal_3246);
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3247))
	{
		unk_0x2C9DDB5306DF417C(&iLocal_3247);
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3248))
	{
		unk_0x2C9DDB5306DF417C(&iLocal_3248);
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3249))
	{
		unk_0x2C9DDB5306DF417C(&iLocal_3249);
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3250))
	{
		unk_0x2C9DDB5306DF417C(&iLocal_3250);
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3223[0]))
	{
		unk_0x2C9DDB5306DF417C(&(iLocal_3223[0]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3223[1]))
	{
		unk_0x2C9DDB5306DF417C(&(iLocal_3223[1]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3223[2]))
	{
		unk_0x2C9DDB5306DF417C(&(iLocal_3223[2]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3223[3]))
	{
		unk_0x2C9DDB5306DF417C(&(iLocal_3223[3]));
	}
	if (unk_0xD51CFE69539DB6D8(uLocal_3229[0]))
	{
		unk_0x2C9DDB5306DF417C(&(uLocal_3229[0]));
	}
	if (unk_0xD51CFE69539DB6D8(uLocal_3229[1]))
	{
		unk_0x2C9DDB5306DF417C(&(uLocal_3229[1]));
	}
	if (unk_0xD51CFE69539DB6D8(uLocal_3229[2]))
	{
		unk_0x2C9DDB5306DF417C(&(uLocal_3229[2]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3233[0]))
	{
		unk_0x2C9DDB5306DF417C(&(iLocal_3233[0]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3233[1]))
	{
		unk_0x2C9DDB5306DF417C(&(iLocal_3233[1]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3233[2]))
	{
		unk_0x2C9DDB5306DF417C(&(iLocal_3233[2]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3233[3]))
	{
		unk_0x2C9DDB5306DF417C(&(iLocal_3233[3]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3233[4]))
	{
		unk_0x2C9DDB5306DF417C(&(iLocal_3233[4]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3233[5]))
	{
		unk_0x2C9DDB5306DF417C(&(iLocal_3233[5]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3233[6]))
	{
		unk_0x2C9DDB5306DF417C(&(iLocal_3233[6]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3233[7]))
	{
		unk_0x2C9DDB5306DF417C(&(iLocal_3233[7]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3233[8]))
	{
		unk_0x2C9DDB5306DF417C(&(iLocal_3233[8]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3233[9]))
	{
		unk_0x2C9DDB5306DF417C(&(iLocal_3233[9]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3233[10]))
	{
		unk_0x2C9DDB5306DF417C(&(iLocal_3233[10]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3251[0]))
	{
		unk_0x2C9DDB5306DF417C(&(iLocal_3251[0]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3254[0]))
	{
		unk_0x2C9DDB5306DF417C(&(iLocal_3254[0]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3254[1]))
	{
		unk_0x2C9DDB5306DF417C(&(iLocal_3254[1]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3258))
	{
		unk_0x9E55BD45B84E7BDC(&iLocal_3258);
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3259))
	{
		if (!unk_0x28D33422BA6C479D(iLocal_3259))
		{
			unk_0x20BB4B94CC6DDC9A(iLocal_3259, 1, 0);
		}
		unk_0x9E55BD45B84E7BDC(&iLocal_3259);
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3264))
	{
		unk_0x9E55BD45B84E7BDC(&iLocal_3264);
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3265))
	{
		unk_0x9E55BD45B84E7BDC(&iLocal_3265);
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3266))
	{
		unk_0x9E55BD45B84E7BDC(&iLocal_3266);
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3267))
	{
		unk_0x9E55BD45B84E7BDC(&iLocal_3267);
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3271))
	{
		unk_0x9E55BD45B84E7BDC(&iLocal_3271);
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3275))
	{
		unk_0x9E55BD45B84E7BDC(&iLocal_3275);
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3279[0]))
	{
		unk_0x9E55BD45B84E7BDC(&(iLocal_3279[0]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3279[1]))
	{
		unk_0x9E55BD45B84E7BDC(&(iLocal_3279[1]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3260[0]))
	{
		unk_0x9E55BD45B84E7BDC(&(iLocal_3260[0]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3260[1]))
	{
		unk_0x9E55BD45B84E7BDC(&(iLocal_3260[1]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3279[0]))
	{
		unk_0x9E55BD45B84E7BDC(&(iLocal_3279[0]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3279[1]))
	{
		unk_0x9E55BD45B84E7BDC(&(iLocal_3279[1]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3268[0]))
	{
		unk_0x9E55BD45B84E7BDC(&(iLocal_3268[0]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3268[1]))
	{
		unk_0x9E55BD45B84E7BDC(&(iLocal_3268[1]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3272[0]))
	{
		unk_0x9E55BD45B84E7BDC(&(iLocal_3272[0]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3263))
	{
		unk_0x9E55BD45B84E7BDC(&iLocal_3263);
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3282))
	{
		unk_0xD4E454973E16D31B(&iLocal_3282);
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3283))
	{
		unk_0xD4E454973E16D31B(&iLocal_3283);
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3284))
	{
		unk_0xD4E454973E16D31B(&iLocal_3284);
	}
	unk_0x26512D4F43AB2347();
	if (unk_0x64C1636D480771D9("SOL_3_DRIVE_TO_AIRPORT"))
	{
		unk_0x61B624BA2305D0E5("SOL_3_DRIVE_TO_AIRPORT");
	}
	if (unk_0x64C1636D480771D9("SOL_3_MAIN_CHASE"))
	{
		unk_0x61B624BA2305D0E5("SOL_3_MAIN_CHASE");
	}
	if (unk_0x64C1636D480771D9("SOL_3_CHOPPER_CAM"))
	{
		unk_0x61B624BA2305D0E5("SOL_3_CHOPPER_CAM");
	}
	if (unk_0x64C1636D480771D9("SOL_3_HELI_TAKEOFF"))
	{
		unk_0x61B624BA2305D0E5("SOL_3_HELI_TAKEOFF");
	}
	if (unk_0x64C1636D480771D9("SOL_3_EVENT_TANKER_CRASH"))
	{
		unk_0x61B624BA2305D0E5("SOL_3_EVENT_TANKER_CRASH");
	}
	if (unk_0x64C1636D480771D9("SOL_3_CAR_JET_ENGINE"))
	{
		unk_0x61B624BA2305D0E5("SOL_3_CAR_JET_ENGINE");
	}
	if (unk_0x64C1636D480771D9("SOL_3_PLANE_ON_FIRE"))
	{
		unk_0x61B624BA2305D0E5("SOL_3_PLANE_ON_FIRE");
	}
	if (unk_0x64C1636D480771D9("SOL_3_EVENT_JET_LANDING"))
	{
		unk_0x61B624BA2305D0E5("SOL_3_EVENT_JET_LANDING");
	}
	if (unk_0x64C1636D480771D9("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION"))
	{
		unk_0x61B624BA2305D0E5("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
	}
	if (unk_0x64C1636D480771D9("SOL_3_ARRIVE_AT_HANGAR"))
	{
		unk_0x61B624BA2305D0E5("SOL_3_ARRIVE_AT_HANGAR");
	}
	if (unk_0x64C1636D480771D9("SOL_3_ON_FOOT_CHASE"))
	{
		unk_0x61B624BA2305D0E5("SOL_3_ON_FOOT_CHASE");
	}
	if (unk_0x64C1636D480771D9("SOL_3_LOSE_COPS"))
	{
		unk_0x61B624BA2305D0E5("SOL_3_LOSE_COPS");
	}
	if (unk_0x64C1636D480771D9("SOL_3_LOSE_COPS_PLANE"))
	{
		unk_0x61B624BA2305D0E5("SOL_3_LOSE_COPS_PLANE");
	}
	if (unk_0x64C1636D480771D9("SOL_3_LOSE_COPS_VEHICLE"))
	{
		unk_0x61B624BA2305D0E5("SOL_3_LOSE_COPS_VEHICLE");
	}
	if (unk_0x64C1636D480771D9("SOL_3_ENGINE_DEATH_SCENE"))
	{
		unk_0x61B624BA2305D0E5("SOL_3_ENGINE_DEATH_SCENE");
	}
	unk_0x3948245C8BD5EDA0(iLocal_3211);
	unk_0x3948245C8BD5EDA0(iLocal_3213);
	unk_0x3948245C8BD5EDA0(iLocal_3214);
	unk_0x3948245C8BD5EDA0(iLocal_3215);
	unk_0x3948245C8BD5EDA0(iLocal_3216);
	unk_0x3948245C8BD5EDA0(iLocal_3217);
	unk_0x3948245C8BD5EDA0(iLocal_3218);
	unk_0x3948245C8BD5EDA0(iLocal_3219);
	unk_0x3948245C8BD5EDA0(iLocal_3212);
	func_181(&uLocal_28, 0, 0);
	if (unk_0xCF686B56FD5328B5(uLocal_3289))
	{
		unk_0x74FF6D08DE291367(uLocal_3289, 0);
	}
	if (unk_0xCF686B56FD5328B5(uLocal_3290))
	{
		unk_0x74FF6D08DE291367(uLocal_3290, 0);
	}
	if (unk_0xCF686B56FD5328B5(uLocal_3291))
	{
		unk_0x74FF6D08DE291367(uLocal_3291, 0);
	}
	func_160(1, 1);
	unk_0x8B10CC9832827D27("misssolomon_3");
	unk_0x8B10CC9832827D27("amb@world_human_clipboard@male@base");
	unk_0x8B10CC9832827D27("missheist_agency3aig_lift_waitped_a");
	unk_0xFC8E26A6FE4C2E54(1, "BB_CHASE");
	unk_0xFC8E26A6FE4C2E54(2, "BB_Chase");
	unk_0xFC8E26A6FE4C2E54(9, "BB_CHASE");
	unk_0xFC8E26A6FE4C2E54(35, "BB_Chase");
	unk_0xFC8E26A6FE4C2E54(45, "BB_Chase");
	unk_0xFC8E26A6FE4C2E54(54, "BB_Chase");
	unk_0xFC8E26A6FE4C2E54(55, "BB_Chase");
	unk_0xFC8E26A6FE4C2E54(61, "BB_CHASE");
	unk_0xFC8E26A6FE4C2E54(63, "BB_CHASE");
	unk_0xFC8E26A6FE4C2E54(64, "BB_CHASE");
	unk_0xFC8E26A6FE4C2E54(67, "BB_Chase");
	unk_0xFC8E26A6FE4C2E54(68, "BB_CHASE");
	unk_0xFC8E26A6FE4C2E54(69, "BB_Chase");
	unk_0x8A86A209B0F0AF7D(&uLocal_3293);
	unk_0xA857A54226CCD303("digitalOverlay");
}

void func_160(bool bParam0, bool bParam1)
{
	if (!unk_0xF6917DE0E003509D(&cLocal_2668))
	{
		iLocal_91 = 0;
		func_180();
		unk_0xF6231EA8B0BD197C(iLocal_2684);
		unk_0x3EB6E5FC1FA6912C(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
		{
			unk_0x357AD83D909BF584(unk_0x3F80C6638E3A1A90(), 1f);
			unk_0x33E519C1449D7A54(unk_0x3F80C6638E3A1A90(), 1);
			unk_0x0DC2F8EF73751B15(1);
		}
		if (bLocal_107)
		{
			unk_0x839E9476E54502A2(func_179());
		}
		unk_0x839E9476E54502A2(func_178());
		unk_0x839E9476E54502A2(func_177());
		unk_0x839E9476E54502A2(func_176());
		if (!unk_0xAEF17BDE274A1247() && !bParam0)
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
		unk_0x73817D396768E4C6(&(Global_91077.f_1286[iParam0]), iParam1);
	}
	else if (unk_0x00AAD79B42B3E036())
	{
		if (func_73() == 0)
		{
			uVar0 = func_49(func_72(iParam0), -1, 0);
			unk_0x73817D396768E4C6(&uVar0, iParam1);
			func_164(func_72(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x73817D396768E4C6(&(Global_99155.f_668[iParam0]), iParam1);
	}
}

void func_164(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466310[iParam0 /*5*/][func_50(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x39DEDCCD70293F58(iVar0, uParam1, iParam3);
	}
}

void func_165(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x9956FB0E4B50ECB8(&(Global_91077.f_1286[iParam0]), iParam1);
	}
	else if (unk_0x00AAD79B42B3E036())
	{
		if (func_73() == 0)
		{
			uVar0 = func_49(func_72(iParam0), -1, 0);
			unk_0x9956FB0E4B50ECB8(&uVar0, iParam1);
			func_164(func_72(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x9956FB0E4B50ECB8(&(Global_99155.f_668[iParam0]), iParam1);
	}
}

void func_166()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 175)
	{
		iLocal_2916[iVar0] = 0;
		Local_1963[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_109[iVar0] = 0f;
		fLocal_285[iVar0] = 0f;
		fLocal_461[iVar0] = 0f;
		fLocal_637[iVar0] = 0f;
		iLocal_1294[iVar0] = 0;
		fLocal_813[iVar0] = 0f;
		iLocal_1470[iVar0] = 0;
		iLocal_2685[iVar0] = 0;
		iLocal_1646[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		iLocal_3092[iVar0] = 0;
		iVar0++;
	}
	iLocal_1946 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iLocal_3105[iVar0] = 0;
		Local_2489[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_1209[iVar0] = 0f;
		fLocal_1225[iVar0] = 0f;
		fLocal_1241[iVar0] = 0f;
		fLocal_1257[iVar0] = 0f;
		iLocal_1930[iVar0] = 0;
		iLocal_2861[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iLocal_3157[iVar0] = 0;
		iVar0++;
	}
	iLocal_1948 = 0;
	iVar0 = 0;
	while (iVar0 < 35)
	{
		iLocal_3121[iVar0] = 0;
		Local_2535[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_993[iVar0] = 0f;
		fLocal_1029[iVar0] = 0f;
		fLocal_1065[iVar0] = 0f;
		fLocal_1101[iVar0] = 0f;
		iLocal_1822[iVar0] = 0;
		fLocal_1137[iVar0] = 0f;
		iLocal_1858[iVar0] = 0;
		iLocal_2877[iVar0] = 0;
		iLocal_1894[iVar0] = 0;
		iVar0++;
	}
	iLocal_1947 = 0;
	iLocal_1950 = 0;
	iLocal_1953 = 0;
	iLocal_1954 = 0;
	iLocal_1955 = 0;
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
		if (unk_0xD51CFE69539DB6D8(iLocal_3121[iVar0]))
		{
			if (unk_0xC45A34912542C4EB(iLocal_3121[iVar0], 0))
			{
				if (unk_0x05BA2AC20921A37E(iLocal_3121[iVar0]))
				{
					unk_0x6035B71FBC2881EC(iLocal_3121[iVar0]);
				}
				iVar1 = unk_0xBD6B21D725712BDE(iLocal_3121[iVar0], -1);
				if (unk_0xD51CFE69539DB6D8(iVar1) && iVar1 != unk_0xE7869D5D7816A9B6())
				{
					if (unk_0x28D33422BA6C479D(iVar1))
					{
						unk_0x2C9DDB5306DF417C(&iVar1);
					}
				}
			}
			if (unk_0x28D33422BA6C479D(iLocal_3121[iVar0]))
			{
				unk_0x9E55BD45B84E7BDC(&(iLocal_3121[iVar0]));
			}
		}
		iLocal_1858[iVar0] = 0;
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_1822[iVar0] > 0)
			{
				unk_0xFC8E26A6FE4C2E54(iLocal_1822[iVar0], &cLocal_2668);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!iLocal_2877[iVar0] == 0)
		{
			unk_0x839E9476E54502A2(iLocal_2877[iVar0]);
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
		if (unk_0xD51CFE69539DB6D8(iLocal_3105[iVar0]))
		{
			if (unk_0x28D33422BA6C479D(iLocal_3105[iVar0]))
			{
				unk_0x9E55BD45B84E7BDC(&(iLocal_3105[iVar0]));
			}
		}
		iLocal_1930[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_2861[iVar0] == 0)
		{
			unk_0x839E9476E54502A2(iLocal_2861[iVar0]);
		}
		iVar0++;
	}
	iLocal_1951 = 0;
	iLocal_1948 = 0;
}

void func_170()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_2916[iVar0]))
		{
			if (unk_0xC45A34912542C4EB(iLocal_2916[iVar0], 0))
			{
				if (unk_0x05BA2AC20921A37E(iLocal_2916[iVar0]))
				{
					unk_0x6035B71FBC2881EC(iLocal_2916[iVar0]);
				}
				iVar1 = unk_0xBD6B21D725712BDE(iLocal_2916[iVar0], -1);
				if (unk_0xD51CFE69539DB6D8(iVar1) && iVar1 != unk_0xE7869D5D7816A9B6())
				{
					if (unk_0x28D33422BA6C479D(iVar1))
					{
						unk_0x2C9DDB5306DF417C(&iVar1);
					}
				}
			}
			if (unk_0x28D33422BA6C479D(iLocal_2916[iVar0]))
			{
				unk_0x9E55BD45B84E7BDC(&(iLocal_2916[iVar0]));
			}
		}
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_1294[iVar0] > 0)
			{
				unk_0xFC8E26A6FE4C2E54(iLocal_1294[iVar0], &cLocal_2668);
			}
		}
		iLocal_1470[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (!iLocal_2685[iVar0] == 0)
		{
			unk_0x839E9476E54502A2(iLocal_2685[iVar0]);
		}
		iVar0++;
	}
	iLocal_1950 = 0;
	iLocal_1946 = 0;
}

void func_171()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_3121[iVar0]))
		{
			if (unk_0xC45A34912542C4EB(iLocal_3121[iVar0], 0))
			{
				if (unk_0x05BA2AC20921A37E(iLocal_3121[iVar0]))
				{
					unk_0x6035B71FBC2881EC(iLocal_3121[iVar0]);
				}
			}
			func_173(iLocal_3121[iVar0]);
			func_172(iLocal_3121[iVar0]);
		}
		iLocal_1858[iVar0] = 0;
		iLocal_1894[iVar0] = 0;
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_1822[iVar0] > 0)
			{
				unk_0xFC8E26A6FE4C2E54(iLocal_1822[iVar0], &cLocal_2668);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!iLocal_2877[iVar0] == 0)
		{
			unk_0x839E9476E54502A2(iLocal_2877[iVar0]);
		}
		iVar0++;
	}
	iLocal_1952 = 0;
}

void func_172(int iParam0)
{
	if (unk_0xD51CFE69539DB6D8(iParam0))
	{
		unk_0xC1F2137782A816E9(&iParam0);
	}
}

void func_173(int iParam0)
{
	float fVar0;
	int iVar1;
	
	if (unk_0xC45A34912542C4EB(iParam0, 0))
	{
		iVar1 = unk_0xBD6B21D725712BDE(iParam0, -1);
		if (!unk_0xAF437D7C802AB246(iVar1))
		{
			if (!iVar1 == unk_0xE7869D5D7816A9B6())
			{
				fVar0 = unk_0xD4F0FC8FFEDE152B(iParam0);
				if (fVar0 < 8f)
				{
					fVar0 = 8f;
				}
				if (fVar0 > 62.9f)
				{
					fVar0 = 62.9f;
				}
				unk_0x03C1B195D300CB1D(iVar1, iParam0, 0, 1, fVar0, 786603, 5f, 5f, 1);
				unk_0x7346544C767CFCBF(iVar1, 8192, 1);
				if (bLocal_108)
				{
					unk_0x7346544C767CFCBF(iVar1, 65536, 1);
					unk_0x7346544C767CFCBF(iVar1, 2, 0);
				}
				unk_0x7E3DC7ED30B648F0(iVar1, 6, 0);
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
		if (unk_0xD51CFE69539DB6D8(iLocal_3105[iVar0]))
		{
			if (!unk_0x76B2D234F1895632(iLocal_3105[iVar0]))
			{
				unk_0x70EE8EFEE355AD29(iLocal_3105[iVar0], 1, 0);
			}
			func_172(iLocal_3105[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_2861[iVar0] == 0)
		{
			unk_0x839E9476E54502A2(iLocal_2861[iVar0]);
		}
		iVar0++;
	}
	iLocal_1951 = 0;
	iLocal_1948 = 0;
}

void func_175()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_2916[iVar0]))
		{
			if (!unk_0x76B2D234F1895632(iLocal_2916[iVar0]))
			{
				unk_0x70EE8EFEE355AD29(iLocal_2916[iVar0], 1, 0);
			}
			if (unk_0xC45A34912542C4EB(iLocal_2916[iVar0], 0))
			{
				if (unk_0x05BA2AC20921A37E(iLocal_2916[iVar0]))
				{
					unk_0x6035B71FBC2881EC(iLocal_2916[iVar0]);
				}
			}
			func_173(iLocal_2916[iVar0]);
			func_172(iLocal_2916[iVar0]);
		}
		iLocal_1470[iVar0] = 0;
		iLocal_1646[iVar0] = 0;
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_1294[iVar0] > 0)
			{
				unk_0xFC8E26A6FE4C2E54(iLocal_1294[iVar0], &cLocal_2668);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (!iLocal_2685[iVar0] == 0)
		{
			unk_0x839E9476E54502A2(iLocal_2685[iVar0]);
		}
		iVar0++;
	}
	iLocal_1950 = 0;
	iLocal_1946 = 0;
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
	if (iLocal_2913 == 0)
	{
		return joaat("a_m_y_business_01");
	}
	return iLocal_2913;
}

void func_180()
{
	unk_0x666CB64FA00E0CF6();
	unk_0x4BAFD83665B00619(-1);
	unk_0x860964F2A77E1393(1);
	unk_0x1E448CAD2CCD4493(1);
	unk_0x6423C366AD1DAA00(1f);
	unk_0xE7B4713D32F6F9DC(3);
	unk_0xEB6EADE1FB086748(3);
}

void func_181(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x00AAD79B42B3E036())
	{
		if (unk_0xB519E5386FBF69E5(Global_2457699.f_4416, 26))
		{
			return;
		}
	}
	if (unk_0xA16CC47187A94189())
	{
		unk_0xC36FD2B6875CA6EA(iParam2);
		unk_0x1E79BB0C6A422F63("FocusIn");
		unk_0x61B624BA2305D0E5("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xCD0E4FEA8B60FCA3("FocusOut", 0, 0);
			unk_0xCC18B241D266EF14(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x1B8E0930AB96444B(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x356491C12DAD1A37(sVar0))
	{
		if (!unk_0x00AAD79B42B3E036())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x356491C12DAD1A37(uParam0->f_3))
	{
		if (func_182(uParam0->f_3))
		{
			unk_0x1D208E4A4E1D4FFE(1);
		}
	}
	if (!unk_0x356491C12DAD1A37(sVar0))
	{
		if (func_182(sVar0))
		{
			unk_0x1D208E4A4E1D4FFE(1);
		}
	}
}

bool func_182(char* sParam0)
{
	unk_0xAA8D087D7A86072A(sParam0);
	return unk_0x360D41DC76A83E6A(0);
}

void func_183()
{
	Global_14578 = 0;
	func_184();
}

void func_184()
{
	unk_0xACA77D3E6C847C83();
	Global_16723 = 0;
	if (unk_0xF0A330A29F97AA7E())
	{
		unk_0xDA09A6E60FE9645E(0);
		Global_15712 = 6;
	}
}

void func_185()
{
	Global_14578 = 0;
	func_186();
}

void func_186()
{
	unk_0xACA77D3E6C847C83();
	Global_16723 = 0;
	if ((unk_0xD6F17BA188A65E8F() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xDA09A6E60FE9645E(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0xF0A330A29F97AA7E())
	{
		unk_0xDA09A6E60FE9645E(1);
		Global_15712 = 6;
		return;
	}
}

void func_187()
{
	if (unk_0xD11595488376CB53(uLocal_3285))
	{
		unk_0x5B62CAB9B0D6ABF1(&uLocal_3285);
	}
	if (unk_0xD11595488376CB53(uLocal_3286))
	{
		unk_0x5B62CAB9B0D6ABF1(&uLocal_3286);
	}
	if (unk_0xD11595488376CB53(uLocal_3287))
	{
		unk_0x5B62CAB9B0D6ABF1(&uLocal_3287);
	}
	if (unk_0xD11595488376CB53(uLocal_3288))
	{
		unk_0x5B62CAB9B0D6ABF1(&uLocal_3288);
	}
}

void func_188()
{
	if (iLocal_3570 == 0)
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_3228))
		{
			if (!unk_0xAF437D7C802AB246(iLocal_3228))
			{
				if (unk_0x915685CA559C211B(iLocal_3228, unk_0xE7869D5D7816A9B6(), 0))
				{
					iLocal_3570 = 1;
				}
			}
		}
	}
	if (iLocal_3570 == 0)
	{
		if (iLocal_3534 == 0)
		{
			if (unk_0xD51CFE69539DB6D8(iLocal_3228))
			{
				if (!unk_0xAF437D7C802AB246(iLocal_3228))
				{
					if (unk_0xD51CFE69539DB6D8(iLocal_3222))
					{
						if (!unk_0xAF437D7C802AB246(iLocal_3222))
						{
							if (unk_0x84ABD5D965FE0C04(iLocal_3222))
							{
								if (unk_0xA31041E73957A31E(iLocal_3222) > 18)
								{
									if (unk_0xD51CFE69539DB6D8(iLocal_3284))
									{
										if (unk_0xD55D878601C46BA9(iLocal_3284))
										{
											unk_0x27B54A887EC71B05(iLocal_3284, 1, 1);
										}
									}
									uLocal_3210 = unk_0xB839A1C489B63ACC(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
									unk_0x360F0D01112F8AD0(iLocal_3228, uLocal_3210, "misssolomon_3", "_action", 1000f, -1000f, 4, 0, 1148846080, 0);
									unk_0x6A8BCE61F660B8D0(iLocal_3228, unk_0xE7869D5D7816A9B6(), 9000, 1024, 3);
									iLocal_3534 = 1;
									iLocal_3535 = 0;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3534 == 1 && iLocal_3536 == 0)
		{
			if (unk_0xD51CFE69539DB6D8(iLocal_3228))
			{
				if (!unk_0xAF437D7C802AB246(iLocal_3228))
				{
					if (unk_0x47B2F09FC779F5CD(uLocal_3210))
					{
						if (!iLocal_3535)
						{
							if (unk_0x4D221DFBB84DCF0B(uLocal_3210) > 0.25f)
							{
								func_17(&uLocal_3578, 4, iLocal_3228, "HangerWorker", 0, 1);
								func_189(iLocal_3228, "T1M4_BCAA", "HangerWorker", 11);
								iLocal_3535 = 1;
							}
						}
						if (unk_0x4D221DFBB84DCF0B(uLocal_3210) > 0.99f)
						{
							uLocal_3210 = unk_0xB839A1C489B63ACC(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
							unk_0x360F0D01112F8AD0(iLocal_3228, uLocal_3210, "misssolomon_3", "_react_to_death", 1000f, -1.5f, 3, 16, 1148846080, 0);
							iLocal_3536 = 1;
						}
					}
				}
			}
		}
		if (iLocal_3536 == 1 && iLocal_3539 == 0)
		{
			if (unk_0xD51CFE69539DB6D8(iLocal_3228))
			{
				if (!unk_0xAF437D7C802AB246(iLocal_3228))
				{
					if (unk_0x47B2F09FC779F5CD(uLocal_3210))
					{
						if (unk_0x8442AE3B8EA7046F(iLocal_3228, unk_0xC7C6DDDE84A8E734("ENDS_IN_RUN")))
						{
							unk_0x94026C1D1DB14225(&uLocal_3292);
							unk_0xF3CA309478CD9721(0, joaat("MotionState_Sprint"), 0);
							unk_0x34912824AE482D65(0, -1001.9f, -2954.3f, 13.1f, 3f, -1, 40000f, 3f);
							unk_0x4B79E06845D63B96(0, unk_0xE7869D5D7816A9B6(), 200f, -1, 0, 0);
							unk_0x911ECBCE73F8EC3F(uLocal_3292);
							unk_0xC2C4A3A9FF2FBFFF(iLocal_3228, uLocal_3292);
							unk_0x33A90AD8FA327B72(&uLocal_3292);
							unk_0x29F3FAC40F745C80(iLocal_3228, joaat("MotionState_Sprint"), 0, 0, 0);
							iLocal_3539 = 1;
						}
					}
				}
			}
		}
	}
	else if (iLocal_3539 == 0)
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_3228))
		{
			if (!unk_0xAF437D7C802AB246(iLocal_3228))
			{
				unk_0x94026C1D1DB14225(&uLocal_3292);
				unk_0x34912824AE482D65(0, -1001.9f, -2954.3f, 13.1f, 3f, -1, 40000f, 3f);
				unk_0x4B79E06845D63B96(0, unk_0xE7869D5D7816A9B6(), 200f, -1, 0, 0);
				unk_0x911ECBCE73F8EC3F(uLocal_3292);
				unk_0xC2C4A3A9FF2FBFFF(iLocal_3228, uLocal_3292);
				unk_0x33A90AD8FA327B72(&uLocal_3292);
				iLocal_3539 = 1;
			}
		}
	}
}

void func_189(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x63170E828689585A(iParam0, sParam1, sParam2, func_15(iParam3), 0);
}

void func_190()
{
	if (iLocal_3181 == 0)
	{
		iLocal_3183 = 0;
		iLocal_3211 = unk_0x2AD909D8CB732A41();
		unk_0x21CDC0BA99DF1B1B("TRV_4_MCS_2", 8);
		unk_0x801429C020C467BA(joaat("prop_jet_bloodsplat_01"));
		if (unk_0x729A24E50365D07B("Trev4_5"))
		{
			unk_0xAD0C8ABDA1A371CA("Trev4_5", 0, 0.5f, 1f);
		}
		if (!unk_0xDE185266FE919B68())
		{
			unk_0x2D3BB3EF936C4B76(800);
		}
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1)
	{
		switch (iLocal_3183)
		{
			case 0:
				while (!unk_0x3CBB06ED9434F6B3())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), false, 0);
				if (!unk_0xAF437D7C802AB246(iLocal_3222))
				{
					unk_0x5AF2634ABA4DA81D(iLocal_3222, "Molly", 1, joaat("ig_molly"), 0);
				}
				if (!unk_0xAF437D7C802AB246(iLocal_3228))
				{
					unk_0x5AF2634ABA4DA81D(iLocal_3228, "Airworker_Tackle_trevor", 0, joaat("s_m_y_airworker"), 0);
				}
				if (unk_0xC45A34912542C4EB(iLocal_3266, 0))
				{
					unk_0x5AF2634ABA4DA81D(iLocal_3266, "JET_TRV4", 0, joaat("jet"), 0);
				}
				func_191(1, 1, 1, 0);
				unk_0xE72D045151F6CA70("TRV4_SUCK_CS");
				unk_0x9E2BC25163283628(0);
				iLocal_3183++;
				break;
			
			case 1:
				func_109();
				if (unk_0x22400A8448EEFFA3("JET_TRV4", joaat("jet")))
				{
					if (unk_0xC45A34912542C4EB(iLocal_3266, 0))
					{
						if (!unk_0x76B2D234F1895632(iLocal_3266))
						{
							unk_0x2878EC06B3F897A0(iLocal_3266, 1);
						}
					}
				}
				if (unk_0x22400A8448EEFFA3("Airworker_Tackle_trevor", joaat("s_m_y_airworker")))
				{
					if (!unk_0xAF437D7C802AB246(iLocal_3228))
					{
						unk_0x9BEE7E791BC4D38B(iLocal_3228, 1);
						unk_0x4B79E06845D63B96(iLocal_3228, unk_0xE7869D5D7816A9B6(), 150f, -1, 0, 0);
						unk_0x2EF7A8CB89D363F6(iLocal_3228, 0);
						unk_0x321C1AA209172C00(iLocal_3228, 1);
						unk_0xD39141689169EF06(iLocal_3228, 0, 0, 0, 0, 0, 0, 0, 0);
					}
				}
				if (unk_0x22400A8448EEFFA3("Michael", 0))
				{
					func_109();
					func_107(1);
				}
				if (!unk_0x9E77A197C8591F81())
				{
					iLocal_3338 = 1;
					if (!unk_0xD51CFE69539DB6D8(iLocal_3282))
					{
						if (unk_0x5053BF6D5604065B(joaat("prop_jet_bloodsplat_01")))
						{
							iLocal_3282 = unk_0x8C15E6EC0BC9B4BE(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, 1, 1, 0);
							unk_0x11089405D5CD3FD2(iLocal_3282, 0f, 0f, -121.5948f, 2, 1);
							unk_0x1F8CB81CA52CE552(iLocal_3282, 0f, 0f, 0.8729f, -0.4879f);
							unk_0x839E9476E54502A2(joaat("prop_jet_bloodsplat_01"));
						}
					}
					unk_0xD60DE78AB9B18914(0);
					func_191(0, 1, 1, 0);
					unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), true, 0);
					if (!unk_0xFB3EFA6765C8A823(unk_0xE7869D5D7816A9B6(), 0, 2))
					{
						unk_0xCC897563F1971D6A(unk_0xE7869D5D7816A9B6(), joaat("weapon_smg"), 150, 1, 1);
					}
					iLocal_3181 = 2;
				}
				break;
			}
	}
	if (iLocal_3181 == 2)
	{
		iLocal_3181 = 0;
		iLocal_3180 = 8;
	}
}

void func_191(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xB14E3E3C57569BDB(unk_0x3F80C6638E3A1A90());
		unk_0x7CBBF6C9E2EED3EA(unk_0x3F80C6638E3A1A90(), 1);
		unk_0x30584A18ECB7ED72(unk_0x3F80C6638E3A1A90(), 1);
		func_198(1);
		unk_0x86F04B1FEFFA59AF();
		unk_0x7D5D106C0BC41E4F();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xD6F17BA188A65E8F())
			{
				unk_0xDA09A6E60FE9645E(0);
			}
			if (!func_197())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_196(1, iParam3, iParam2, 0);
		Global_55584 = 1;
		Global_67890 = 1;
		Global_69234 = 1;
	}
	else
	{
		func_198(0);
		unk_0x77B6DFDC1F6D6D54();
		Global_55584 = 0;
		if (bParam1)
		{
			unk_0xDD8068D05776246D();
		}
		unk_0x7CBBF6C9E2EED3EA(unk_0x3F80C6638E3A1A90(), 0);
		unk_0x30584A18ECB7ED72(unk_0x3F80C6638E3A1A90(), 0);
		func_196(0, iParam3, iParam2, 0);
		if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()) && !func_192(unk_0x3F80C6638E3A1A90()))
		{
			unk_0x2EF7A8CB89D363F6(unk_0xE7869D5D7816A9B6(), 0);
		}
		Global_69234 = 0;
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
		if (iParam0 == unk_0x3F80C6638E3A1A90())
		{
			return 1;
		}
	}
	if (unk_0xB519E5386FBF69E5(Global_2416794[iParam0 /*303*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_193()
{
	return unk_0xB519E5386FBF69E5(Global_2359301, 3);
}

bool func_194(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x3F80C6638E3A1A90())
	{
		bVar0 = func_195(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1586079[iParam0 /*408*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xD18C3CF631455087(iParam0))
		{
			bVar0 = unk_0x2CC717AC6CF51F8F(iParam0) == 8;
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
	if (Global_1315887[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312740[iVar1];
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
	if (unk_0xA78EA29AC2FFBADE())
	{
		if (unk_0xE5021B3C1EC84FDE() != iParam0 && iParam2)
		{
			unk_0xA0DB703A9F74EAE8(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_197()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_198(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x9956FB0E4B50ECB8(&Global_2283, 13);
	}
	else
	{
		unk_0x73817D396768E4C6(&Global_2283, 13);
	}
}

void func_199()
{
	if (iLocal_3511 == 0)
	{
		if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), -926.0258f, -2958.615f, 12.46467f, -930.6525f, -2956.061f, 16.45945f, 2.75f, 0, 1, 0))
		{
			iLocal_3511 = 1;
		}
	}
	else if (iLocal_3515 == 0)
	{
		unk_0x8CCCC48313B0F20F(0, 22, 1);
		unk_0x8CCCC48313B0F20F(0, 25, 1);
		if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), -938.5178f, -2972.022f, 12.46715f, -934.1034f, -2974.613f, 15.96715f, 5.25f, 0, 1, 0))
		{
			unk_0x97A05AC1E676667E(unk_0xE7869D5D7816A9B6(), 0f);
		}
		else
		{
			if (fLocal_3326 < 1f)
			{
				fLocal_3326 = 1f;
			}
			fLocal_3326 = (fLocal_3326 * 0.975f);
			unk_0x97A05AC1E676667E(unk_0xE7869D5D7816A9B6(), fLocal_3326);
		}
	}
	if (iLocal_3181 > 0)
	{
		func_188();
	}
	if (iLocal_3181 == 0)
	{
		iLocal_3339 = 0;
		iLocal_3340 = 0;
		iLocal_3341 = 0;
		iLocal_3342 = 0;
		iLocal_3344 = 0;
		iLocal_3360 = 0;
		iLocal_3471 = 0;
		iLocal_3472 = 0;
		iLocal_3473 = 0;
		iLocal_3479 = 0;
		iLocal_3512 = 0;
		iLocal_3513 = 0;
		iLocal_3514 = 0;
		iLocal_3515 = 0;
		iLocal_3516[0] = 0;
		iLocal_3520[0] = 0;
		iLocal_3516[1] = 0;
		iLocal_3520[1] = 0;
		iLocal_3516[2] = 0;
		iLocal_3534 = 0;
		iLocal_3536 = 0;
		iLocal_3537 = 0;
		iLocal_3538 = 0;
		iLocal_3539 = 0;
		iLocal_3542 = 0;
		iLocal_3568 = 0;
		iLocal_3570 = 0;
		iLocal_3571[3] = 0;
		unk_0x801429C020C467BA(joaat("prop_jet_bloodsplat_01"));
		unk_0x40974B149DE65C3B("V_60_HangerRm");
		unk_0x8C1CE4F676968E94(5);
		unk_0x1B1CE102A7E7999E(unk_0x3F80C6638E3A1A90(), 3, 0);
		unk_0x6FF6F40CA433340F(unk_0x3F80C6638E3A1A90(), 0);
		if (unk_0xD51CFE69539DB6D8(iLocal_3222))
		{
			if (!unk_0xAF437D7C802AB246(iLocal_3222))
			{
				if (unk_0x84ABD5D965FE0C04(iLocal_3222))
				{
					unk_0x17BE705C82F0754A(iLocal_3222, 3f, 1);
				}
			}
		}
		if (!unk_0xDE185266FE919B68())
		{
			unk_0x2D3BB3EF936C4B76(800);
		}
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1)
	{
		if (iLocal_3479 == 0)
		{
			if (unk_0xDF83A33BF4D93E6F("Trv_4_747", 0))
			{
				iLocal_3479 = 1;
			}
		}
		if (iLocal_3471 == 0)
		{
			if (unk_0xD51CFE69539DB6D8(iLocal_3222))
			{
				if (!unk_0xAF437D7C802AB246(iLocal_3222))
				{
					if (unk_0x84ABD5D965FE0C04(iLocal_3222))
					{
						if (unk_0xA31041E73957A31E(iLocal_3222) > 20)
						{
							if (unk_0xD51CFE69539DB6D8(iLocal_3266))
							{
								if (unk_0xC45A34912542C4EB(iLocal_3266, 0))
								{
									func_204(&iLocal_3266);
									unk_0xC0F4535E64974FE0(iLocal_3211, "Trevor_4_747_Jet_Engine", -937.77f, -2981.36f, 15.44f, 0, 0, 0, 0);
									unk_0xE9A614E9191BFB4A(iLocal_3266, 1, 0, 0);
									iLocal_3471 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3512 == 0)
		{
			if (unk_0xD51CFE69539DB6D8(iLocal_3222))
			{
				if (!unk_0xAF437D7C802AB246(iLocal_3222))
				{
					if (unk_0x84ABD5D965FE0C04(iLocal_3222))
					{
						if (unk_0xA31041E73957A31E(iLocal_3222) > 23)
						{
							unk_0xFA2C5C2D054C888E(iLocal_3222);
							if (unk_0xD51CFE69539DB6D8(iLocal_3266))
							{
								if (unk_0xC45A34912542C4EB(iLocal_3266, 0))
								{
									if (!unk_0x64C1636D480771D9("SOL_3_ENGINE_DEATH_SCENE"))
									{
										unk_0x91523366B2FDCD40("SOL_3_ENGINE_DEATH_SCENE");
									}
									uLocal_3209 = unk_0xB839A1C489B63ACC(0f, 0f, 0f, 0f, 0f, 0f, 2);
									unk_0x50316D6F55CBD74A(uLocal_3209, iLocal_3266, unk_0x56ADDC5BECDDD8A5(iLocal_3266, "chassis_Control"));
									unk_0x360F0D01112F8AD0(iLocal_3222, uLocal_3209, "MISSSOLOMON_3", "molly_death", 1.5f, -8f, 4, 0, 1148846080, 0);
									unk_0xDB14F40E3E8CB36F(uLocal_3209, 1);
									iLocal_3512 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3513 == 0)
		{
			if (unk_0xD51CFE69539DB6D8(iLocal_3222))
			{
				if (!unk_0xAF437D7C802AB246(iLocal_3222))
				{
					if (iLocal_3512 == 1)
					{
						Local_3318 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) };
						if (Local_3318.f_1 < -2965f)
						{
							unk_0xA109811CF2C55706(iLocal_3222, 0f, 0f, 0f, 1, 6000, 1000, 2000, 0);
							unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), false, 0);
							unk_0x58F62EDF6111D598(unk_0xE7869D5D7816A9B6(), iLocal_3222, 0);
							unk_0x6A8BCE61F660B8D0(unk_0xE7869D5D7816A9B6(), iLocal_3222, 4000, 48, 4);
							iLocal_3513 = 1;
						}
					}
				}
			}
		}
		else if (iLocal_3514 == 0)
		{
			if (!unk_0xD51CFE69539DB6D8(iLocal_3222))
			{
				unk_0xC36FD2B6875CA6EA(0);
				unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), true, 0);
				if (unk_0xD51CFE69539DB6D8(iLocal_3233[0]))
				{
					if (!unk_0xAF437D7C802AB246(iLocal_3233[0]))
					{
						unk_0xFA2C5C2D054C888E(iLocal_3233[0]);
						unk_0x9BEE7E791BC4D38B(iLocal_3233[0], 0);
					}
				}
				iLocal_3514 = 1;
			}
		}
		if (iLocal_3473 == 0)
		{
			if (unk_0xD51CFE69539DB6D8(iLocal_3222))
			{
				if (!unk_0xAF437D7C802AB246(iLocal_3222))
				{
					if (unk_0xD51CFE69539DB6D8(iLocal_3283))
					{
						if (unk_0x6CE07ABFB69A4990(iLocal_3283, iLocal_3222))
						{
							if (unk_0x23417CDB252083F9(iLocal_3222, "MISSSOLOMON_3", "molly_death", 3))
							{
								if (unk_0x4D221DFBB84DCF0B(uLocal_3209) > 0.59f)
								{
									unk_0x27B54A887EC71B05(iLocal_3283, 1, 1);
									if (unk_0xD11595488376CB53(uLocal_3285))
									{
										unk_0x5B62CAB9B0D6ABF1(&uLocal_3285);
									}
									if (!unk_0xD11595488376CB53(uLocal_3288))
									{
										func_189(iLocal_3222, "HIGH_FALL", "WAVELOAD_PAIN_FEMALE", 11);
										if (unk_0x64C1636D480771D9("SOL_3_ON_FOOT_CHASE"))
										{
											unk_0x61B624BA2305D0E5("SOL_3_ON_FOOT_CHASE");
										}
										if (!unk_0x64C1636D480771D9("SOL_3_LOSE_COPS"))
										{
											unk_0x91523366B2FDCD40("SOL_3_LOSE_COPS");
										}
										unk_0x5AE11BC36633DE4E(0);
										iLocal_3473 = 1;
									}
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3515 == 0)
		{
			if (iLocal_3473 == 1 && unk_0xC9D9444186B5A374() > 2500)
			{
				uLocal_3288 = func_201(iLocal_3283);
				func_20("SOL3_GOD1", 7500, -1);
				unk_0x5AE11BC36633DE4E(0);
				iLocal_3515 = 1;
			}
		}
		if (iLocal_3571[3] == 0)
		{
			if (iLocal_3515 == 1 && iLocal_3514 == 1)
			{
				if (unk_0xC9D9444186B5A374() > 2500)
				{
					unk_0xD73158C5794398B4(10f, 2f, 3);
					iLocal_3571[3] = 1;
				}
			}
		}
		if (iLocal_3472 == 0)
		{
			if (!unk_0xAF437D7C802AB246(iLocal_3222))
			{
				if (unk_0x23417CDB252083F9(iLocal_3222, "MISSSOLOMON_3", "molly_death", 3))
				{
					if (unk_0x4D221DFBB84DCF0B(uLocal_3209) > 0.89f)
					{
						if (unk_0xD51CFE69539DB6D8(iLocal_3266))
						{
							if (unk_0xC45A34912542C4EB(iLocal_3266, 0))
							{
								unk_0x2C9DDB5306DF417C(&iLocal_3222);
								unk_0x48800639A234092B("scr_trev4_747_blood_impact", iLocal_3266, -12.5793f, 12.2f, -7.09421f, 0f, 0f, 0f, 1f, 0, 0, 0);
								uLocal_3764 = unk_0x8290B5289783C18C("scr_trev4_747_exhaust_plane_misfire", iLocal_3266, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, 0, 0, 0);
								unk_0xC0F4535E64974FE0(iLocal_3212, "Trevor_4_747_Man_Sucked_In", -938.6f, -2984.13f, 15.47f, 0, 0, 0, 0);
								iLocal_3192 = unk_0x9D40BBF80D8F5E8A();
								iLocal_3472 = 1;
							}
						}
					}
				}
			}
		}
		else
		{
			if (unk_0x9D40BBF80D8F5E8A() > iLocal_3192 + 574)
			{
				if (!unk_0xD51CFE69539DB6D8(iLocal_3282))
				{
					if (unk_0x5053BF6D5604065B(joaat("prop_jet_bloodsplat_01")))
					{
						iLocal_3282 = unk_0x8C15E6EC0BC9B4BE(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, 1, 1, 0);
						unk_0x11089405D5CD3FD2(iLocal_3282, 0f, 0f, -121.5948f, 2, 1);
						unk_0x1F8CB81CA52CE552(iLocal_3282, 0f, 0f, 0.8729f, -0.4879f);
						unk_0x839E9476E54502A2(joaat("prop_jet_bloodsplat_01"));
					}
				}
				if (iLocal_3568 == 0)
				{
					if (unk_0xD51CFE69539DB6D8(iLocal_3266))
					{
						if (unk_0xC45A34912542C4EB(iLocal_3266, 0))
						{
							unk_0x48800639A234092B("scr_trev4_747_engine_debris", iLocal_3266, -12.6286f, 6.85353f, -7.13622f, 180f, 0f, 0f, 1f, 0, 0, 0);
							unk_0xE9A614E9191BFB4A(iLocal_3266, 0, 0, 0);
							func_200();
							unk_0x3948245C8BD5EDA0(iLocal_3211);
							iLocal_3568 = 1;
						}
					}
				}
			}
			if (iLocal_3516[0] == 0)
			{
				if (unk_0x9D40BBF80D8F5E8A() > iLocal_3192 + 300)
				{
					if (unk_0xA288661B75BFC01B(uLocal_3764))
					{
						unk_0x52F57B57CB8B4432(uLocal_3764, 0);
					}
					iLocal_3516[0] = 1;
				}
			}
			else if (iLocal_3520[0] == 0)
			{
				if (unk_0x9D40BBF80D8F5E8A() > iLocal_3192 + 700)
				{
					if (unk_0xD51CFE69539DB6D8(iLocal_3266))
					{
						if (unk_0xC45A34912542C4EB(iLocal_3266, 0))
						{
							uLocal_3764 = unk_0x8290B5289783C18C("scr_trev4_747_exhaust_plane_misfire", iLocal_3266, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, 0, 0, 0);
							iLocal_3520[0] = 1;
						}
					}
				}
			}
			else if (iLocal_3516[1] == 0)
			{
				if (unk_0x9D40BBF80D8F5E8A() > iLocal_3192 + 1000)
				{
					if (unk_0xA288661B75BFC01B(uLocal_3764))
					{
						unk_0x52F57B57CB8B4432(uLocal_3764, 0);
					}
					iLocal_3516[1] = 1;
				}
			}
			else if (iLocal_3520[1] == 0)
			{
				if (unk_0x9D40BBF80D8F5E8A() > iLocal_3192 + 1400)
				{
					if (unk_0xD51CFE69539DB6D8(iLocal_3266))
					{
						if (unk_0xC45A34912542C4EB(iLocal_3266, 0))
						{
							uLocal_3764 = unk_0x8290B5289783C18C("scr_trev4_747_exhaust_plane_misfire", iLocal_3266, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, 0, 0, 0);
							uLocal_3763 = unk_0x8290B5289783C18C("scr_trev4_747_engine_damage", iLocal_3266, -11.956f, 10.528f, -7.657f, 0f, 2f, 0f, 1065353216, 0, 0, 0);
							iLocal_3520[1] = 1;
						}
					}
				}
			}
			else if (iLocal_3516[2] == 0)
			{
				if (unk_0x9D40BBF80D8F5E8A() > iLocal_3192 + 3500)
				{
					if (unk_0xA288661B75BFC01B(uLocal_3764))
					{
						unk_0x52F57B57CB8B4432(uLocal_3764, 0);
					}
					if (unk_0xD51CFE69539DB6D8(iLocal_3266))
					{
						if (unk_0xC45A34912542C4EB(iLocal_3266, 0))
						{
							unk_0xD39141689169EF06(iLocal_3266, 0, 0, 0, 0, 0, 0, 0, 0);
						}
					}
					iLocal_3516[2] = 1;
				}
			}
		}
		if (iLocal_3537 == 0)
		{
			if (iLocal_3473 == 1)
			{
				if (iLocal_3538 == 0)
				{
					if (!unk_0x47EF9ED961F4F559(iLocal_3283))
					{
						iLocal_3202 = unk_0x9D40BBF80D8F5E8A();
						iLocal_3538 = 1;
					}
				}
				else if (unk_0x9D40BBF80D8F5E8A() > iLocal_3202 + 2000)
				{
					unk_0x2878EC06B3F897A0(iLocal_3283, 1);
					iLocal_3537 = 1;
				}
			}
		}
		if (iLocal_3542 == 0)
		{
			if (!unk_0xD51CFE69539DB6D8(iLocal_3222))
			{
				if (unk_0xD51CFE69539DB6D8(iLocal_3266))
				{
					unk_0x2878EC06B3F897A0(iLocal_3266, 0);
					iLocal_3542 = 1;
				}
			}
		}
		if (unk_0xD51CFE69539DB6D8(iLocal_3283))
		{
			if (unk_0xD11595488376CB53(uLocal_3288))
			{
				if (func_16(unk_0xE7869D5D7816A9B6(), iLocal_3283, 1) < 1.5f && !unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
				{
					unk_0xCC18B241D266EF14(-1, "PICK_UP", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					unk_0x5B62CAB9B0D6ABF1(&uLocal_3288);
					unk_0xD4E454973E16D31B(&iLocal_3283);
					func_109();
					iLocal_3181 = 0;
					iLocal_3180 = 8;
				}
			}
		}
	}
}

void func_200()
{
	if (unk_0xA288661B75BFC01B(uLocal_3759))
	{
		unk_0x52F57B57CB8B4432(uLocal_3759, 0);
	}
	if (unk_0xA288661B75BFC01B(uLocal_3760))
	{
		unk_0x52F57B57CB8B4432(uLocal_3760, 0);
	}
	if (unk_0xA288661B75BFC01B(uLocal_3761))
	{
		unk_0x52F57B57CB8B4432(uLocal_3761, 0);
	}
	if (unk_0xA288661B75BFC01B(uLocal_3762))
	{
		unk_0x52F57B57CB8B4432(uLocal_3762, 0);
	}
}

int func_201(int iParam0)
{
	return func_202(iParam0, 1, 0);
}

int func_202(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xD51CFE69539DB6D8(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xF800CF9298ABC708(iParam0);
	if (unk_0x8C1ED5BB2888BA25(iParam0))
	{
		unk_0xFC630C7120A34CE4(uVar0, func_203(unk_0x00AAD79B42B3E036(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x4ADC112587E95B61(uVar0, iParam1);
		}
		else
		{
			unk_0xA887303978A245B8(uVar0, 2);
		}
	}
	else if (unk_0x41B17741CACC905E(iParam0))
	{
		unk_0xFC630C7120A34CE4(uVar0, func_203(unk_0x00AAD79B42B3E036(), 0.7f, 0.7f));
		unk_0x4ADC112587E95B61(uVar0, iParam1);
	}
	else if (unk_0xC2F1E05878620398(iParam0))
	{
		unk_0xFC630C7120A34CE4(uVar0, func_203(unk_0x00AAD79B42B3E036(), 0.7f, 0.7f));
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
	
	if (!unk_0x76B2D234F1895632(*iParam0))
	{
		Var0 = { 22.6057f, -2.10018f, -6.22841f };
		Var3 = { 12.6349f, 7.89711f, -7.09742f };
		Var6 = { -22.5879f, -2.2931f, -6.22542f };
		Var9 = { -12.6675f, 8.15519f, -6.98833f };
		Var12 = { 180f, 0f, 0f };
		uLocal_3759 = unk_0x8290B5289783C18C("scr_trev4_747_engine_heathaze", *iParam0, Var0, Var12, 1065353216, 0, 0, 0);
		uLocal_3760 = unk_0x8290B5289783C18C("scr_trev4_747_engine_heathaze", *iParam0, Var3, Var12, 1065353216, 0, 0, 0);
		uLocal_3761 = unk_0x8290B5289783C18C("scr_trev4_747_engine_heathaze", *iParam0, Var6, Var12, 1065353216, 0, 0, 0);
		uLocal_3762 = unk_0x8290B5289783C18C("scr_trev4_747_engine_heathaze", *iParam0, Var9, Var12, 1065353216, 0, 0, 0);
	}
}

void func_205()
{
	if (unk_0xD51CFE69539DB6D8(iLocal_3222))
	{
		if (!unk_0xAF437D7C802AB246(iLocal_3222))
		{
			if (unk_0x84ABD5D965FE0C04(iLocal_3222))
			{
				if (func_16(unk_0xE7869D5D7816A9B6(), iLocal_3222, 1) < 17f)
				{
					unk_0x17BE705C82F0754A(iLocal_3222, 3f, 1);
				}
				if (func_16(unk_0xE7869D5D7816A9B6(), iLocal_3222, 1) < 22f && func_16(unk_0xE7869D5D7816A9B6(), iLocal_3222, 1) > 17f)
				{
					unk_0x17BE705C82F0754A(iLocal_3222, 2f, 1);
				}
				if (unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), -921.7f, -2946.4f, 13.4f, 1) > 8f && !unk_0xD525F9D50CBB6A5D(iLocal_3222))
				{
					if (func_16(unk_0xE7869D5D7816A9B6(), iLocal_3222, 1) > 22f)
					{
						unk_0x17BE705C82F0754A(iLocal_3222, 1f, 1);
					}
				}
				else if (func_16(unk_0xE7869D5D7816A9B6(), iLocal_3222, 1) > 22f)
				{
					unk_0x17BE705C82F0754A(iLocal_3222, 2f, 1);
				}
			}
		}
	}
	if (iLocal_3181 > 0)
	{
		if (iLocal_3511 == 0)
		{
			if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), -926.0258f, -2958.615f, 12.46467f, -930.6525f, -2956.061f, 16.45945f, 2.75f, 0, 1, 0))
			{
				iLocal_3511 = 1;
			}
		}
		else
		{
			unk_0x8CCCC48313B0F20F(0, 22, 1);
			unk_0x8CCCC48313B0F20F(0, 25, 1);
			if (fLocal_3326 < 1f)
			{
				fLocal_3326 = 1f;
			}
			fLocal_3326 = (fLocal_3326 * 0.98f);
			unk_0x97A05AC1E676667E(unk_0xE7869D5D7816A9B6(), fLocal_3326);
		}
		if (!unk_0xD51CFE69539DB6D8(iLocal_3266))
		{
			unk_0x801429C020C467BA(joaat("jet"));
			if (unk_0x5053BF6D5604065B(joaat("jet")))
			{
				iLocal_3266 = unk_0xD504D1FF5DD2FFD7(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 1, 1);
				unk_0xED6BC33BD669B45F(iLocal_3266, 2);
				unk_0x4F6C6B452FA34B13(iLocal_3266, 0);
				unk_0x2878EC06B3F897A0(iLocal_3266, 1);
				unk_0xD39141689169EF06(iLocal_3266, 1, 1, 1, 1, 1, 0, 0, 0);
				unk_0x839E9476E54502A2(joaat("jet"));
				unk_0x29627C73E3F24F9A(iLocal_3266, 500);
			}
		}
		if (!unk_0xD51CFE69539DB6D8(iLocal_3228))
		{
			unk_0x801429C020C467BA(joaat("s_m_y_airworker"));
			unk_0x2B0BB514F9140141("misssolomon_3");
			unk_0x801429C020C467BA(joaat("p_amb_clipboard_01"));
			if ((unk_0x5053BF6D5604065B(joaat("s_m_y_airworker")) && unk_0x2917D5E1CB5CE43A("misssolomon_3")) && unk_0x5053BF6D5604065B(joaat("p_amb_clipboard_01")))
			{
				iLocal_3228 = unk_0xA7F4088D9A2629CC(26, joaat("s_m_y_airworker"), -932.1812f, -2967.947f, 12.9451f, 170.7182f, 1, 1);
				unk_0xD39141689169EF06(iLocal_3228, 0, 0, 0, 0, 0, 0, 0, 0);
				unk_0x321C1AA209172C00(iLocal_3228, 0);
				unk_0x9BEE7E791BC4D38B(iLocal_3228, 1);
				func_17(&uLocal_3578, 4, iLocal_3228, "HangerWorker", 0, 1);
				iLocal_3284 = unk_0x8C15E6EC0BC9B4BE(joaat("p_amb_clipboard_01"), -932.1812f, -2967.947f, 12.9451f, 1, 1, 0);
				unk_0x9E4D318905B670CB(iLocal_3284, iLocal_3228, unk_0x206A9EC63F98F19D(iLocal_3222, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				uLocal_3210 = unk_0xB839A1C489B63ACC(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
				unk_0x360F0D01112F8AD0(iLocal_3228, uLocal_3210, "misssolomon_3", "_start_loop", 1000f, -8f, 68, 0, 1148846080, 0);
				unk_0x839E9476E54502A2(joaat("s_m_y_airworker"));
				unk_0x839E9476E54502A2(joaat("p_amb_clipboard_01"));
			}
		}
		if (!unk_0xD51CFE69539DB6D8(iLocal_3233[0]))
		{
			unk_0x801429C020C467BA(joaat("s_m_y_cop_01"));
			if (unk_0x5053BF6D5604065B(joaat("s_m_y_cop_01")))
			{
				iLocal_3233[0] = unk_0xA7F4088D9A2629CC(6, joaat("s_m_y_cop_01"), -969.06f, -2955.186f, 12.945f, 241.1703f, 1, 1);
				unk_0xCC897563F1971D6A(iLocal_3233[0], joaat("weapon_pistol"), 1000, 1, 1);
				unk_0xB161EBD04DDDE4AD(iLocal_3233[0], 20);
				unk_0xC602CB510D8B9EAE(iLocal_3233[0], 1);
				unk_0x9BEE7E791BC4D38B(iLocal_3233[0], 1);
				unk_0xA02736B50802C8BB(iLocal_3233[0], unk_0xE7869D5D7816A9B6(), -1, 1);
				func_111(iLocal_3233[0], 0);
			}
		}
		if (!unk_0xD51CFE69539DB6D8(iLocal_3267))
		{
			unk_0x801429C020C467BA(joaat("shamal"));
			if (unk_0x5053BF6D5604065B(joaat("shamal")))
			{
				iLocal_3267 = unk_0xD504D1FF5DD2FFD7(joaat("shamal"), -968.3718f, -2952.298f, 12.9451f, 114.9439f, 1, 1);
				unk_0xDBF2D7502C37C299(iLocal_3267, 0, 0, 1);
				unk_0xC9CEB5227A733CE6(iLocal_3267);
				unk_0x839E9476E54502A2(joaat("shamal"));
				unk_0x09714949CF524B00(iLocal_3267, 2000);
			}
		}
		if (unk_0xD51CFE69539DB6D8(iLocal_3267))
		{
			if (unk_0xC45A34912542C4EB(iLocal_3267, 0))
			{
				if (func_16(unk_0xE7869D5D7816A9B6(), iLocal_3267, 1) > 5f)
				{
					unk_0xDBF2D7502C37C299(iLocal_3267, 0, 0, 0);
				}
			}
		}
	}
	if (iLocal_3181 == 0)
	{
		func_25(2, "STAGE_ON_FOOT_CHASE", 0, 0, 0, 1);
		if (iLocal_3345 == 1)
		{
			if (!unk_0xAEF17BDE274A1247())
			{
				unk_0x6A6E764D1DB633C7(0);
			}
			func_104();
			func_17(&uLocal_3578, 0, unk_0xE7869D5D7816A9B6(), "MICHAEL", 0, 1);
			iLocal_3345 = 0;
		}
		iLocal_3432 = 0;
		iLocal_3433 = 0;
		iLocal_3511 = 0;
		fLocal_3326 = 3f;
		iLocal_3185 = 0;
		func_160(0, 1);
		unk_0xFC8E26A6FE4C2E54(45, "BB_CHASE");
		unk_0xFC8E26A6FE4C2E54(35, "BB_CHASE");
		unk_0xFC8E26A6FE4C2E54(2, "BB_CHASE");
		unk_0xFC8E26A6FE4C2E54(54, "BB_CHASE");
		unk_0xFC8E26A6FE4C2E54(1, "BB_CHASE");
		unk_0xFC8E26A6FE4C2E54(9, "BB_CHASE");
		unk_0xFC8E26A6FE4C2E54(61, "BB_CHASE");
		unk_0xFC8E26A6FE4C2E54(63, "BB_CHASE");
		unk_0xFC8E26A6FE4C2E54(64, "BB_CHASE");
		unk_0x8A86A209B0F0AF7D(&uLocal_3293);
		unk_0xA857A54226CCD303("digitalOverlay");
		if (unk_0xD51CFE69539DB6D8(iLocal_3258))
		{
			unk_0xD1AE9D189CB65173(iLocal_3258, 0);
			unk_0xC1F2137782A816E9(&iLocal_3258);
		}
		if (unk_0xD51CFE69539DB6D8(iLocal_3271))
		{
			unk_0x9E55BD45B84E7BDC(&iLocal_3271);
		}
		if (unk_0xD51CFE69539DB6D8(iLocal_3254[0]))
		{
			unk_0x2C9DDB5306DF417C(&(iLocal_3254[0]));
		}
		if (unk_0xD51CFE69539DB6D8(iLocal_3260[0]))
		{
			unk_0x9E55BD45B84E7BDC(&(iLocal_3260[0]));
		}
		unk_0x510705DAE0A8BF53(0);
		unk_0x19A78B976FE53AD5(1);
		if (!unk_0xAF437D7C802AB246(iLocal_3222))
		{
			if (!unk_0xD11595488376CB53(uLocal_3285))
			{
				uLocal_3285 = unk_0xF800CF9298ABC708(iLocal_3222);
				unk_0x4ADC112587E95B61(uLocal_3285, 1);
			}
		}
		unk_0xD5181C7DAF762C60("PoliceScannerDisabled", 1);
		if (iLocal_3365[2] == 1)
		{
			if (!unk_0x60B62574BB51DADA(iLocal_3219))
			{
				unk_0x3948245C8BD5EDA0(iLocal_3219);
			}
			unk_0x9B51AF2075B026EA(iLocal_3219);
			iLocal_3397 = 0;
			iLocal_3365[2] = 0;
		}
		unk_0x8C1CE4F676968E94(5);
		unk_0x1B1CE102A7E7999E(unk_0x3F80C6638E3A1A90(), 3, 0);
		unk_0x6FF6F40CA433340F(unk_0x3F80C6638E3A1A90(), 0);
		unk_0xE72D045151F6CA70("TRV4_RUN");
		if (!unk_0xD51CFE69539DB6D8(iLocal_3266))
		{
			unk_0x801429C020C467BA(joaat("jet"));
		}
		if (!unk_0xD51CFE69539DB6D8(iLocal_3228))
		{
			unk_0x801429C020C467BA(joaat("s_m_y_airworker"));
		}
		unk_0x801429C020C467BA(joaat("shamal"));
		unk_0x801429C020C467BA(joaat("s_m_y_cop_01"));
		unk_0x801429C020C467BA(joaat("police3"));
		unk_0x801429C020C467BA(joaat("p_amb_clipboard_01"));
		unk_0xDBDFBE5906702D9E(68, "BB_Chase");
		unk_0xDBDFBE5906702D9E(69, "BB_Chase");
		unk_0x2B0BB514F9140141("misssolomon_3");
		unk_0xC1B1E9A034A63A62(0);
		if (unk_0x729A24E50365D07B("Trev4_5"))
		{
			unk_0xAD0C8ABDA1A371CA("Trev4_5", 1, 1f, 1f);
		}
		if (unk_0xAEF17BDE274A1247())
		{
			if (!func_24())
			{
				unk_0x899C0AB969919A6A(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1));
			}
			func_21(0, -1, 1);
			func_20("TRV4_CHASE1", 7500, 1);
		}
		if (!unk_0xDE185266FE919B68())
		{
			unk_0x2D3BB3EF936C4B76(800);
		}
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1)
	{
		iLocal_3181 = 2;
	}
	if (iLocal_3181 == 2)
	{
		if (unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), -880.365f, -2942.26f, 14f, 9.55f, 15.69f, 5f, 0, 1, 0))
		{
			func_206("TRV4_FAIL1");
		}
		if (unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), -945.725f, -2893.15f, 14f, 4.5f, 9.56f, 5f, 0, 1, 0))
		{
			func_206("TRV4_FAIL1");
		}
		if (unk_0x83666F9FB8FEBD4B() > 15000)
		{
			func_206("TRV4_FAIL1");
		}
		if (unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), -932.1196f, -2934.317f, 12.9448f, 2f, 2f, 2f, 0, 1, 0))
		{
			if (!unk_0xAF437D7C802AB246(iLocal_3222))
			{
				if (!unk_0x84ABD5D965FE0C04(iLocal_3222))
				{
					unk_0x634CF9AFCB879C0D(iLocal_3222, "BB_MOLLY_2", 10, 4, -1);
					unk_0xDCF460AE46C9489C(iLocal_3222, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
				}
			}
			unk_0xC1B1E9A034A63A62(0);
			iLocal_3181 = 3;
		}
	}
	if (iLocal_3181 == 3)
	{
		if (!unk_0xAF437D7C802AB246(iLocal_3222))
		{
			if (unk_0x84ABD5D965FE0C04(iLocal_3222))
			{
				if (unk_0xA31041E73957A31E(iLocal_3222) > 18 && iLocal_3437 == 0)
				{
					iLocal_3352 = 0;
					unk_0x17BE705C82F0754A(iLocal_3222, 3f, 1);
					iLocal_3181 = 0;
					iLocal_3180 = 6;
				}
			}
		}
		if (unk_0x83666F9FB8FEBD4B() > 50000)
		{
			if (!unk_0xAF437D7C802AB246(iLocal_3222))
			{
				unk_0xDE31B2587775EDAD(iLocal_3222);
				unk_0x88A973CE47FBEF95(iLocal_3222, -932.5f, -2964.1f, 13.4f, 1, 0, 0, 1);
				unk_0x634CF9AFCB879C0D(iLocal_3222, "BB_MOLLY_2", 18, 4, -1);
				unk_0xDCF460AE46C9489C(iLocal_3222, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
				iLocal_3352 = 0;
				iLocal_3181 = 0;
				iLocal_3180 = 6;
			}
		}
	}
}

void func_206(char* sParam0)
{
	if (iLocal_3437 == 0)
	{
		if (iLocal_3336)
		{
			func_196(0, 1, 1, 0);
			unk_0x63498CF6CF35C6A2(uLocal_3289, 0);
			unk_0x538689EF05955EF7(false, 0, 3000, 1, 0, 0);
			unk_0xA8010B7497A9230B(1);
			if (unk_0x64C1636D480771D9("SOL_3_CHOPPER_CAM"))
			{
				unk_0x61B624BA2305D0E5("SOL_3_CHOPPER_CAM");
			}
			unk_0x3948245C8BD5EDA0(iLocal_3219);
			func_216();
			unk_0x19A78B976FE53AD5(1);
			iLocal_3365[2] = 0;
			iLocal_3336 = 0;
		}
		unk_0xE72D045151F6CA70("TRV4_FAIL");
		sLocal_3577 = sParam0;
		unk_0x00400F14096FE01D();
		func_185();
		func_183();
		func_207(sLocal_3577);
		iLocal_3437 = 1;
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
	
	if (Global_99155.f_7699 || func_390(0))
	{
		iVar0 = func_8();
		if (!func_209(iVar0))
		{
			return;
		}
		unk_0x9956FB0E4B50ECB8(&(Global_82110[iVar0 /*5*/].f_1), 5);
		Global_91061 = iParam0;
	}
}

int func_209(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_214();
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		unk_0x9F8FD6071D5A40B6(5000);
	}
	iVar0 = Global_82110[iParam0 /*5*/];
	iVar1 = Global_69505.f_109[iVar0 /*4*/];
	func_213(iVar1, 1);
	unk_0xCC01DB5BB34A420E(unk_0x3F80C6638E3A1A90());
	unk_0x7BB1D0BBB1E5E5A7(unk_0x3F80C6638E3A1A90());
	func_210(&(Global_99155.f_1750.f_539), iVar1);
	if (Global_85533 == Global_91062)
	{
		Global_99155.f_7699.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xB519E5386FBF69E5(Global_82146[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
		{
			unk_0xBE3A91305A4366F2(0);
		}
	}
	Global_99155.f_7699.f_330[iVar1 /*6*/].f_2++;
	Global_85533 = Global_91062;
	if (iParam0 == -1)
	{
		if (Global_99155.f_7699)
		{
		}
		return 0;
	}
	if (unk_0xB519E5386FBF69E5(Global_82110[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0xB519E5386FBF69E5(Global_82110[iParam0 /*5*/].f_1, 5))
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
		iVar1 = Global_99155.f_17147[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xB519E5386FBF69E5(Global_99155.f_7699.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_212(Global_99155.f_17147[iVar0], &Var2, &fVar5))
			{
				Global_99155.f_17147[iVar0] = 318;
				func_211(&(uParam0->f_1524[iVar0]));
				uParam0->f_1528[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1538[iVar0] = 0f;
				uParam0->f_1542[iVar0] = 0;
				uParam0->f_1546[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1556[iVar0] = 0;
				Global_88748[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_88748[iVar0 /*29*/].f_9 = 0f;
				Global_88748[iVar0 /*29*/].f_12 = 0f;
				Global_88748[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_88748[iVar0 /*29*/].f_10 = 0f;
				Global_88748[iVar0 /*29*/].f_13 = 0f;
				Global_88748[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_88748[iVar0 /*29*/].f_11 = 0f;
				Global_88748[iVar0 /*29*/].f_14 = 0f;
				Global_88748[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_88748[iVar0 /*29*/].f_26 = 0f;
				Global_88748[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_88748[iVar0 /*29*/].f_27 = 0f;
				Global_88748[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_88748[iVar0 /*29*/].f_28 = 0f;
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
			Global_85343[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85343[iParam0 /*2*/] = 0;
	}
}

void func_214()
{
	Global_91060 = 1;
	if (unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1))
	{
		if (unk_0xF6917DE0E003509D(&Global_69468))
		{
			switch (func_91())
			{
				case 0:
					StringCopy(&Global_69468, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_69468, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_69468, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_69472, "", 16);
		}
		Global_91060 = 0;
	}
	else if (!unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		if (unk_0xF6917DE0E003509D(&Global_69468))
		{
			switch (func_91())
			{
				case 0:
					StringCopy(&Global_69468, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_69468, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_69468, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_69472, "", 16);
		}
		Global_91060 = 0;
		unk_0x9956FB0E4B50ECB8(&(Global_91025.f_20), 25);
	}
}

void func_215(char* sParam0)
{
	if (!unk_0xF6917DE0E003509D(sParam0))
	{
		if (unk_0x21DDB8B32E12806A(sParam0) <= 16)
		{
			StringCopy(&Global_69468, sParam0, 16);
			StringCopy(&Global_69472, "", 16);
			if (unk_0x850C4267F4883C31())
			{
				unk_0x63842D98ECE6507A();
			}
		}
	}
}

void func_216()
{
	Global_55585 = 0;
}

void func_217()
{
	if (!unk_0xD51CFE69539DB6D8(iLocal_3266))
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_3258))
		{
			if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
			{
				if (unk_0x05BA2AC20921A37E(iLocal_3258))
				{
					if (unk_0x97DF87DF18B03512(iLocal_3258) > 30000f)
					{
						unk_0x801429C020C467BA(joaat("jet"));
						if (unk_0x5053BF6D5604065B(joaat("jet")))
						{
							iLocal_3266 = unk_0xD504D1FF5DD2FFD7(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 1, 1);
							unk_0xED6BC33BD669B45F(iLocal_3266, 2);
							unk_0x4F6C6B452FA34B13(iLocal_3266, 0);
							unk_0x2878EC06B3F897A0(iLocal_3266, 1);
							unk_0xD39141689169EF06(iLocal_3266, 1, 1, 1, 1, 1, 0, 0, 0);
							unk_0x839E9476E54502A2(joaat("jet"));
							unk_0x29627C73E3F24F9A(iLocal_3266, 500);
						}
					}
				}
			}
		}
	}
	func_305();
	if (unk_0xD11595488376CB53(uLocal_3285))
	{
		func_304(uLocal_3285, iLocal_3222, 300f, 0.9f, 0);
	}
	if (iLocal_3181 == 0)
	{
		if (iLocal_3182 < 2)
		{
			unk_0x404FF6486E7FF873(unk_0xE7869D5D7816A9B6(), 0);
		}
		func_303();
		func_271();
		if (iLocal_3402 == 0)
		{
			if (unk_0xD51CFE69539DB6D8(iLocal_3121[20]))
			{
				if (unk_0xC45A34912542C4EB(iLocal_3121[20], 0))
				{
					unk_0xE9A614E9191BFB4A(iLocal_3121[20], 1, 1, 0);
					unk_0x1C2B331EA00BB294(iLocal_3121[20]);
					iLocal_3402 = 1;
				}
			}
		}
		func_270();
		func_269();
		if (iLocal_3349 == 0)
		{
			if (unk_0xD51CFE69539DB6D8(iLocal_3258))
			{
				if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
				{
					if (unk_0x05BA2AC20921A37E(iLocal_3258))
					{
						func_268(uLocal_3289, iLocal_3271, "BB_Chase", 1);
						iLocal_3349 = 1;
					}
				}
			}
		}
		else if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
		{
			if (unk_0x05BA2AC20921A37E(iLocal_3258))
			{
				func_267(uLocal_3289, iLocal_3271, fLocal_3323);
				unk_0xD2E0A9EDD55F008D(uLocal_3289, 45f);
			}
		}
		if (iLocal_3337 == 0)
		{
			if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
			{
				if (unk_0x05BA2AC20921A37E(iLocal_3258))
				{
					if ((unk_0x97DF87DF18B03512(iLocal_3258) > 15000f && unk_0x97DF87DF18B03512(iLocal_3258) < 125464f) && func_265(1, 0, 0))
					{
						iLocal_3352 = 1;
						if (iLocal_3437 == 0)
						{
							unk_0x1D208E4A4E1D4FFE(1);
							func_264("TRV4_HELP1", -1);
							func_259(1);
							func_181(&uLocal_28, 0, 0);
							unk_0x1B8E0930AB96444B(0);
							iLocal_3337 = 1;
						}
					}
				}
			}
		}
		else if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
		{
			if (unk_0x05BA2AC20921A37E(iLocal_3258))
			{
				if (unk_0x4A4851D44CDF03C0(uLocal_3293) && func_157(1, "BB_Chase"))
				{
					if (((unk_0x97DF87DF18B03512(iLocal_3258) > 15000f && unk_0x97DF87DF18B03512(iLocal_3258) < 125464f) && iLocal_3437 == 0) && unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
					{
						func_237();
					}
					if (unk_0x97DF87DF18B03512(iLocal_3258) > 125464f || !unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
					{
						if (iLocal_3336)
						{
							unk_0x1D208E4A4E1D4FFE(1);
							func_196(0, 1, 1, 0);
							unk_0x63498CF6CF35C6A2(uLocal_3289, 0);
							unk_0x538689EF05955EF7(false, 0, 3000, 1, 0, 0);
							unk_0xA8010B7497A9230B(1);
							if (unk_0x64C1636D480771D9("SOL_3_CHOPPER_CAM"))
							{
								unk_0x61B624BA2305D0E5("SOL_3_CHOPPER_CAM");
							}
							unk_0x3948245C8BD5EDA0(iLocal_3219);
							func_216();
							unk_0x19A78B976FE53AD5(1);
							iLocal_3365[2] = 0;
							iLocal_3336 = 0;
						}
					}
				}
			}
		}
		switch (iLocal_3182)
		{
			case 0:
				if (iLocal_3571[0] == 0)
				{
					if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
					{
						if (unk_0x05BA2AC20921A37E(iLocal_3258))
						{
							if (unk_0x97DF87DF18B03512(iLocal_3258) > 44255f && unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), -1187.3f, -2847.8f, 13.6f, 1) < 100f)
							{
								unk_0xD73158C5794398B4(10f, 2f, 3);
								iLocal_3571[0] = 1;
							}
						}
					}
				}
				if (iLocal_3571[1] == 0)
				{
					if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
					{
						if (unk_0x05BA2AC20921A37E(iLocal_3258))
						{
							if (unk_0x97DF87DF18B03512(iLocal_3258) > 52875f && unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), -1349f, -2720f, 14f, 1) < 50f)
							{
								unk_0xD73158C5794398B4(6f, 2f, 3);
								iLocal_3571[1] = 1;
							}
						}
					}
				}
				if (iLocal_3571[2] == 0)
				{
					if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
					{
						if (unk_0x05BA2AC20921A37E(iLocal_3258))
						{
							if (unk_0x97DF87DF18B03512(iLocal_3258) > 87085f && unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), -1507f, -2520f, 14f, 1) < 70f)
							{
								unk_0xD73158C5794398B4(10f, 2f, 3);
								iLocal_3571[2] = 1;
							}
						}
					}
				}
				func_236();
				func_235();
				if (!unk_0x64C1636D480771D9("SOL_3_PLANE_ON_FIRE"))
				{
					if (unk_0xD51CFE69539DB6D8(iLocal_3258))
					{
						if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
						{
							if (unk_0x05BA2AC20921A37E(iLocal_3258))
							{
								if (unk_0x97DF87DF18B03512(iLocal_3258) > 64280f && unk_0x97DF87DF18B03512(iLocal_3258) < 72000f)
								{
									if (unk_0xF18329472591CFE6(-1149.6f, -2323.7f, 22.5f, unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), 1) < 130f)
									{
										unk_0x91523366B2FDCD40("SOL_3_PLANE_ON_FIRE");
									}
								}
							}
						}
					}
				}
				else if (unk_0xD51CFE69539DB6D8(iLocal_3258))
				{
					if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
					{
						if (unk_0x05BA2AC20921A37E(iLocal_3258))
						{
							if (unk_0x97DF87DF18B03512(iLocal_3258) > 72500f)
							{
								unk_0x61B624BA2305D0E5("SOL_3_PLANE_ON_FIRE");
							}
						}
					}
				}
				if (!unk_0x64C1636D480771D9("SOL_3_EVENT_JET_LANDING"))
				{
					if (unk_0xD51CFE69539DB6D8(iLocal_3258))
					{
						if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
						{
							if (unk_0x05BA2AC20921A37E(iLocal_3258))
							{
								if (unk_0x97DF87DF18B03512(iLocal_3258) > 78000f && unk_0x97DF87DF18B03512(iLocal_3258) < 85000f)
								{
									unk_0x91523366B2FDCD40("SOL_3_EVENT_JET_LANDING");
								}
							}
						}
					}
				}
				else if (unk_0xD51CFE69539DB6D8(iLocal_3258))
				{
					if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
					{
						if (unk_0x05BA2AC20921A37E(iLocal_3258))
						{
							if (unk_0x97DF87DF18B03512(iLocal_3258) > 85500f)
							{
								unk_0x61B624BA2305D0E5("SOL_3_EVENT_JET_LANDING");
							}
						}
					}
				}
				if (!unk_0x64C1636D480771D9("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION"))
				{
					if (unk_0xD51CFE69539DB6D8(iLocal_3258))
					{
						if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
						{
							if (unk_0x05BA2AC20921A37E(iLocal_3258))
							{
								if (unk_0x97DF87DF18B03512(iLocal_3258) > 100000f && unk_0x97DF87DF18B03512(iLocal_3258) < 107000f)
								{
									unk_0x91523366B2FDCD40("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
								}
							}
						}
					}
				}
				else if (unk_0xD51CFE69539DB6D8(iLocal_3258))
				{
					if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
					{
						if (unk_0x05BA2AC20921A37E(iLocal_3258))
						{
							if (unk_0x97DF87DF18B03512(iLocal_3258) > 107500f)
							{
								unk_0x61B624BA2305D0E5("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
							}
						}
					}
				}
				if (unk_0xD51CFE69539DB6D8(iLocal_3258))
				{
					if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
					{
						if (unk_0x05BA2AC20921A37E(iLocal_3258))
						{
							if (unk_0x97DF87DF18B03512(iLocal_3258) < 10000f)
							{
								func_234();
							}
						}
					}
				}
				if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
				{
					if (unk_0x05BA2AC20921A37E(iLocal_3258))
					{
						if (unk_0x97DF87DF18B03512(iLocal_3258) < 30000f)
						{
							func_233(iLocal_3258, unk_0x97DF87DF18B03512(iLocal_3258));
						}
					}
				}
				if (iLocal_3440 == 0)
				{
					if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
					{
						if (unk_0x05BA2AC20921A37E(iLocal_3258))
						{
							if (unk_0x97DF87DF18B03512(iLocal_3258) > 22000f)
							{
								unk_0x062A4B39164546AD("TRV4_AIRPORT_ENTERED");
								iLocal_3440 = 1;
							}
						}
					}
				}
				else if (iLocal_3441 == 0)
				{
					if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), -940.8253f, -2858.602f, 11.94482f, -1001.272f, -2823.764f, 21.00674f, 5.75f, 0, 1, 0))
					{
						unk_0xE72D045151F6CA70("TRV4_AIRPORT_ENTERED");
						iLocal_3441 = 1;
					}
				}
				if (iLocal_3343 == 0)
				{
					if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
					{
						if (func_16(iLocal_3258, unk_0xE7869D5D7816A9B6(), 1) < 170f && unk_0xD525F9D50CBB6A5D(iLocal_3258))
						{
							if (unk_0xD11595488376CB53(uLocal_3287))
							{
								unk_0x5B62CAB9B0D6ABF1(&uLocal_3287);
							}
							if (unk_0x64C1636D480771D9("SOL_3_DRIVE_TO_AIRPORT"))
							{
								unk_0x61B624BA2305D0E5("SOL_3_DRIVE_TO_AIRPORT");
							}
							if (!unk_0x64C1636D480771D9("SOL_3_MAIN_CHASE"))
							{
								unk_0x91523366B2FDCD40("SOL_3_MAIN_CHASE");
							}
							if (!unk_0xD11595488376CB53(uLocal_3285))
							{
								if (!unk_0xAF437D7C802AB246(iLocal_3222))
								{
									uLocal_3285 = unk_0xF800CF9298ABC708(iLocal_3222);
									unk_0x4ADC112587E95B61(uLocal_3285, 1);
								}
							}
							unk_0x5288DF8B264BDD67();
							if (!unk_0x13ACC601BB29A690())
							{
								func_20("TRV4_CHASE2", 7500, 1);
								func_25(1, "STAGE_CHASE_START", 0, 0, 0, 1);
								unk_0xE72D045151F6CA70("TRV4_CHASE");
								iLocal_3343 = 1;
							}
						}
					}
					if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), -536.0366f, -2102.793f, 5.672412f, -464.5755f, -2165.133f, 14.75182f, 65.25f, 0, 1, 0))
					{
						if (unk_0xD11595488376CB53(uLocal_3287))
						{
							unk_0x5B62CAB9B0D6ABF1(&uLocal_3287);
						}
						if (!unk_0xD11595488376CB53(uLocal_3285))
						{
							if (!unk_0xAF437D7C802AB246(iLocal_3222))
							{
								uLocal_3285 = unk_0xF800CF9298ABC708(iLocal_3222);
								unk_0x4ADC112587E95B61(uLocal_3285, 1);
							}
						}
						unk_0x5288DF8B264BDD67();
						if (!unk_0x13ACC601BB29A690())
						{
							func_20("TRV4_CHASE2", 7500, 1);
							func_25(1, "STAGE_CHASE_START", 0, 0, 0, 1);
							unk_0xE72D045151F6CA70("TRV4_CHASE");
							iLocal_3343 = 1;
						}
					}
				}
				else if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
				{
					if (unk_0x05BA2AC20921A37E(iLocal_3258))
					{
						if (unk_0x97DF87DF18B03512(iLocal_3258) < 15000f)
						{
						}
					}
				}
				if (iLocal_3328 == 0)
				{
					unk_0x801429C020C467BA(joaat("jet"));
					if (unk_0x5053BF6D5604065B(joaat("jet")))
					{
						if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
						{
							if (unk_0x05BA2AC20921A37E(iLocal_3258))
							{
								if (unk_0x97DF87DF18B03512(iLocal_3258) > 18490f)
								{
									iLocal_3260[1] = unk_0xD504D1FF5DD2FFD7(joaat("jet"), -441.3117f, -3435.736f, 409.9454f, 148.3975f, 1, 1);
									unk_0x23F0735A27D6F6B3(iLocal_3260[1], 2, "BB_Chase", 1);
									unk_0x839E9476E54502A2(joaat("jet"));
									iLocal_3328 = 1;
								}
							}
						}
					}
				}
				else if (unk_0xD51CFE69539DB6D8(iLocal_3260[1]))
				{
					if (unk_0xC45A34912542C4EB(iLocal_3260[1], 0))
					{
						if (unk_0x05BA2AC20921A37E(iLocal_3260[1]))
						{
							unk_0xEB35A2486E0DCF8F(iLocal_3260[1], fLocal_3323);
							if (unk_0x97DF87DF18B03512(iLocal_3260[1]) > 20000f)
							{
								if (func_16(unk_0xE7869D5D7816A9B6(), iLocal_3260[1], 1) > 200f && !unk_0xD525F9D50CBB6A5D(iLocal_3260[1]))
								{
									unk_0x6035B71FBC2881EC(iLocal_3260[1]);
									if (unk_0xD51CFE69539DB6D8(iLocal_3254[1]))
									{
										unk_0x2C9DDB5306DF417C(&(iLocal_3254[1]));
									}
									unk_0x9E55BD45B84E7BDC(&(iLocal_3260[1]));
									iLocal_3207 = unk_0x9D40BBF80D8F5E8A() + 1000;
								}
							}
							if (unk_0xD51CFE69539DB6D8(iLocal_3260[1]))
							{
								if (unk_0x97DF87DF18B03512(iLocal_3260[1]) > 31543f)
								{
									unk_0x6035B71FBC2881EC(iLocal_3260[1]);
									unk_0x2878EC06B3F897A0(iLocal_3260[1], 1);
								}
							}
						}
						else if (func_16(unk_0xE7869D5D7816A9B6(), iLocal_3260[1], 1) > 200f && !unk_0xD525F9D50CBB6A5D(iLocal_3260[1]))
						{
							if (unk_0xD51CFE69539DB6D8(iLocal_3254[1]))
							{
								unk_0x2C9DDB5306DF417C(&(iLocal_3254[1]));
							}
							unk_0x9E55BD45B84E7BDC(&(iLocal_3260[1]));
							iLocal_3207 = unk_0x9D40BBF80D8F5E8A() + 1000;
						}
					}
				}
				if (iLocal_3487 == 0)
				{
					if (!unk_0xD51CFE69539DB6D8(iLocal_3265))
					{
						if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
						{
							if (unk_0x05BA2AC20921A37E(iLocal_3258))
							{
								if (unk_0x97DF87DF18B03512(iLocal_3258) > 23000f)
								{
									unk_0x801429C020C467BA(joaat("tanker"));
									if (unk_0x5053BF6D5604065B(joaat("tanker")))
									{
										iLocal_3265 = unk_0xD504D1FF5DD2FFD7(joaat("tanker"), -1325f, -2779f, 14f, 233.9563f, 1, 1);
										unk_0x839E9476E54502A2(joaat("tanker"));
										unk_0x408AD7E5AD0BB545(iLocal_3265, 57, 57);
										iLocal_3487 = 1;
									}
								}
							}
						}
					}
				}
				if (unk_0xD51CFE69539DB6D8(iLocal_3121[1]))
				{
					if (unk_0xC45A34912542C4EB(iLocal_3121[1], 0))
					{
						if (unk_0x05BA2AC20921A37E(iLocal_3121[1]))
						{
							if (unk_0x97DF87DF18B03512(iLocal_3121[1]) > 13000f)
							{
								if (iLocal_3377 == 0)
								{
									fLocal_1173[1] = 0.5f;
									iLocal_3245 = unk_0xBD6B21D725712BDE(iLocal_3121[1], -1);
									iLocal_3377 = 1;
								}
							}
						}
					}
				}
				if (iLocal_3334 == 0)
				{
					unk_0x6BA6B5532D538363(-1325f, -2779f, 14f);
					if (unk_0xD51CFE69539DB6D8(iLocal_3121[1]))
					{
						if (iLocal_3363 == 0)
						{
							unk_0x408AD7E5AD0BB545(iLocal_3121[1], 57, 57);
							iLocal_3363 = 1;
						}
						if (unk_0xD51CFE69539DB6D8(iLocal_3265))
						{
							if (!unk_0x76B2D234F1895632(iLocal_3121[1]))
							{
								if (!unk_0x76B2D234F1895632(iLocal_3265))
								{
									if (unk_0x05BA2AC20921A37E(iLocal_3121[1]))
									{
										unk_0x64016D4B11327EF1(iLocal_3121[1], iLocal_3265, 1065353216);
									}
								}
							}
						}
					}
					if (unk_0xD51CFE69539DB6D8(iLocal_3265))
					{
						if (unk_0xD51CFE69539DB6D8(iLocal_3258))
						{
							if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
							{
								if (unk_0x05BA2AC20921A37E(iLocal_3258))
								{
									if (unk_0x97DF87DF18B03512(iLocal_3258) > 41430f)
									{
										unk_0x27B54A887EC71B05(iLocal_3265, 1, 1);
										iLocal_3334 = 1;
									}
								}
							}
						}
					}
				}
				else if (iLocal_3380 == 0)
				{
					if (unk_0xC45A34912542C4EB(iLocal_3121[1], 0))
					{
						if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
						{
							if (unk_0x05BA2AC20921A37E(iLocal_3258))
							{
								if (unk_0x97DF87DF18B03512(iLocal_3258) > 42700f)
								{
									if (unk_0xD51CFE69539DB6D8(iLocal_3245))
									{
										if (!unk_0xAF437D7C802AB246(iLocal_3245))
										{
											unk_0x09714949CF524B00(iLocal_3245, 0);
										}
									}
									if (unk_0x05BA2AC20921A37E(iLocal_3121[1]))
									{
										unk_0x6035B71FBC2881EC(iLocal_3121[1]);
										iLocal_3380 = 1;
									}
								}
							}
						}
					}
				}
				if (unk_0xD51CFE69539DB6D8(iLocal_3258))
				{
					if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
					{
						if (unk_0x05BA2AC20921A37E(iLocal_3258))
						{
							if (iLocal_3551 == 0)
							{
								if (unk_0x97DF87DF18B03512(iLocal_3258) > 38000f)
								{
									if (unk_0xD51CFE69539DB6D8(iLocal_3121[1]) && unk_0xC45A34912542C4EB(iLocal_3121[1], 0))
									{
										unk_0x3A8AEDC6680712C1(-1, "Trevor_4_747_Tanker_Horn", iLocal_3121[1], 0, 0, 0);
										iLocal_3551 = 1;
									}
								}
							}
							if (iLocal_3365[1] == 0)
							{
								if (unk_0x97DF87DF18B03512(iLocal_3258) > 39000f)
								{
									if (!unk_0x64C1636D480771D9("SOL_3_EVENT_TANKER_CRASH"))
									{
										unk_0x91523366B2FDCD40("SOL_3_EVENT_TANKER_CRASH");
									}
									if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
									{
										unk_0xD39141689169EF06(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), 0, 1, 1, 0, 0, 0, 0, 0);
									}
									iLocal_3365[1] = 1;
								}
							}
							if (iLocal_3435 == 0)
							{
								if (unk_0x97DF87DF18B03512(iLocal_3258) > 41611f)
								{
									if (unk_0xD51CFE69539DB6D8(iLocal_3265))
									{
										if (!unk_0x76B2D234F1895632(iLocal_3265))
										{
											if (unk_0xD51CFE69539DB6D8(iLocal_3121[7]))
											{
												if (!unk_0x76B2D234F1895632(iLocal_3121[7]))
												{
													unk_0x3A8AEDC6680712C1(-1, "Trevor_4_747_Tanker_Explosion", iLocal_3265, 0, 0, 0);
													unk_0x6035B71FBC2881EC(iLocal_3121[7]);
													unk_0xCF219408C2548110(iLocal_3121[7], 1, 0);
													unk_0xCF219408C2548110(iLocal_3265, 1, 0);
													unk_0xDD20AC898717225A(-1221f, -2852f, 17f, 14, 1f, 1, 0, 1065353216);
													unk_0xDD20AC898717225A(-1212f, -2855f, 14.34f, 14, 1f, 1, 0, 1065353216);
													unk_0xC1F2137782A816E9(&iLocal_3265);
													unk_0xC1F2137782A816E9(&(iLocal_3121[1]));
													iLocal_3435 = 1;
												}
											}
										}
									}
								}
							}
							if (iLocal_3369[1] == 0)
							{
								if (unk_0x97DF87DF18B03512(iLocal_3258) > 43204f)
								{
									if (unk_0x64C1636D480771D9("SOL_3_EVENT_TANKER_CRASH"))
									{
										unk_0x61B624BA2305D0E5("SOL_3_EVENT_TANKER_CRASH");
									}
									unk_0x9694B1DF874054DF("SCRIPT\Trv_4_747_Tanker_Explosion");
									if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
									{
										unk_0xD39141689169EF06(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), 0, 0, 0, 0, 0, 0, 0, 0);
									}
									iLocal_3369[1] = 1;
								}
							}
						}
					}
				}
				if (!unk_0x64C1636D480771D9("SOL_3_HELI_TAKEOFF"))
				{
					if (unk_0xD51CFE69539DB6D8(iLocal_3121[0]))
					{
						if (unk_0xC45A34912542C4EB(iLocal_3121[0], 0))
						{
							if (unk_0xD51CFE69539DB6D8(iLocal_3258))
							{
								if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
								{
									if (unk_0x05BA2AC20921A37E(iLocal_3258))
									{
										if (unk_0x97DF87DF18B03512(iLocal_3258) > 36000f && unk_0x97DF87DF18B03512(iLocal_3258) < 40000f)
										{
											unk_0x91523366B2FDCD40("SOL_3_HELI_TAKEOFF");
										}
									}
								}
							}
						}
					}
				}
				else if (unk_0xD51CFE69539DB6D8(iLocal_3121[0]))
				{
					if (unk_0xC45A34912542C4EB(iLocal_3121[0], 0))
					{
						if (unk_0xD51CFE69539DB6D8(iLocal_3258))
						{
							if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
							{
								if (unk_0x05BA2AC20921A37E(iLocal_3258))
								{
									if (unk_0x97DF87DF18B03512(iLocal_3258) > 43204f)
									{
										unk_0x61B624BA2305D0E5("SOL_3_HELI_TAKEOFF");
									}
								}
							}
						}
					}
				}
				if (iLocal_3327 == 0)
				{
					if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
					{
						if (unk_0x05BA2AC20921A37E(iLocal_3258))
						{
							if (unk_0x97DF87DF18B03512(iLocal_3258) > 60500f)
							{
								unk_0x801429C020C467BA(joaat("jet"));
							}
							if (unk_0x97DF87DF18B03512(iLocal_3258) > 66500f)
							{
								if (unk_0x5053BF6D5604065B(joaat("jet")))
								{
									iLocal_3260[0] = unk_0xD504D1FF5DD2FFD7(joaat("jet"), -1119.072f, -1864.548f, -8.2205f, 148.3975f, 1, 1);
									unk_0x2EF7A8CB89D363F6(iLocal_3260[0], 1);
									unk_0xED6BC33BD669B45F(iLocal_3260[0], 2);
									unk_0x23F0735A27D6F6B3(iLocal_3260[0], 35, "BB_Chase", 1);
									unk_0x00E52220EE436481(iLocal_3260[0], 3491f);
									unk_0x839E9476E54502A2(joaat("jet"));
									iLocal_3327 = 1;
								}
							}
						}
					}
				}
				else if (unk_0xD51CFE69539DB6D8(iLocal_3260[0]))
				{
					if (unk_0xC45A34912542C4EB(iLocal_3260[0], 0))
					{
						if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
						{
							if (unk_0x05BA2AC20921A37E(iLocal_3258))
							{
								if (unk_0x05BA2AC20921A37E(iLocal_3260[0]))
								{
									unk_0xEB35A2486E0DCF8F(iLocal_3260[0], fLocal_3323);
									if (unk_0x97DF87DF18B03512(iLocal_3258) > 80000f)
									{
										if (func_16(iLocal_3260[0], unk_0xE7869D5D7816A9B6(), 1) > 200f)
										{
											unk_0x6035B71FBC2881EC(iLocal_3260[0]);
										}
									}
								}
								else if (unk_0x97DF87DF18B03512(iLocal_3258) > 80000f)
								{
									if (func_16(iLocal_3260[0], unk_0xE7869D5D7816A9B6(), 1) > 200f && !unk_0xD525F9D50CBB6A5D(iLocal_3260[0]))
									{
										if (unk_0xD51CFE69539DB6D8(iLocal_3254[0]))
										{
											unk_0x2C9DDB5306DF417C(&(iLocal_3254[0]));
										}
										unk_0x9E55BD45B84E7BDC(&(iLocal_3260[0]));
										iLocal_3207 = unk_0x9D40BBF80D8F5E8A() + 1000;
									}
								}
							}
						}
					}
				}
				if (iLocal_3399 == 0)
				{
					if (iLocal_3398 == 0)
					{
						if (unk_0xD51CFE69539DB6D8(iLocal_3258))
						{
							if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
							{
								if (unk_0x05BA2AC20921A37E(iLocal_3258))
								{
									if (unk_0x97DF87DF18B03512(iLocal_3258) > 50000f)
									{
										unk_0x801429C020C467BA(joaat("s_m_y_airworker"));
										unk_0x2B0BB514F9140141("misstrevor4");
										if (unk_0x5053BF6D5604065B(joaat("s_m_y_airworker")))
										{
											iLocal_3246 = unk_0xA7F4088D9A2629CC(26, joaat("s_m_y_airworker"), -1170.541f, -2507.111f, 12.9455f, 218.3035f, 1, 1);
											iLocal_3247 = unk_0xA7F4088D9A2629CC(26, joaat("s_m_y_airworker"), -1168.264f, -2508.715f, 12.9455f, 70.7735f, 1, 1);
											unk_0x9BEE7E791BC4D38B(iLocal_3246, 1);
											unk_0x9BEE7E791BC4D38B(iLocal_3247, 1);
											unk_0x839E9476E54502A2(joaat("s_m_y_airworker"));
											iLocal_3398 = 1;
										}
									}
								}
							}
						}
					}
					else if (unk_0xD51CFE69539DB6D8(iLocal_3258))
					{
						if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
						{
							if (unk_0x05BA2AC20921A37E(iLocal_3258))
							{
								if (unk_0x97DF87DF18B03512(iLocal_3258) > 58000f)
								{
									if (!unk_0xAF437D7C802AB246(iLocal_3246))
									{
										if (unk_0x2917D5E1CB5CE43A("misstrevor4"))
										{
											if (!unk_0x23417CDB252083F9(iLocal_3246, "misstrevor4", "dive_clear_goon1", 3))
											{
												unk_0xDCF460AE46C9489C(iLocal_3246, "misstrevor4", "dive_clear_goon1", 8f, -8f, -1, 0, 0, 0, 0, 0);
											}
										}
									}
									if (!unk_0xAF437D7C802AB246(iLocal_3247))
									{
										if (unk_0x2917D5E1CB5CE43A("misstrevor4"))
										{
											if (!unk_0x23417CDB252083F9(iLocal_3247, "misstrevor4", "dive_clear_goon2", 3))
											{
												unk_0xDCF460AE46C9489C(iLocal_3247, "misstrevor4", "dive_clear_goon2", 8f, -8f, -1, 0, 0, 0, 0, 0);
											}
										}
									}
									iLocal_3399 = 1;
								}
							}
						}
					}
				}
				else if (unk_0xD51CFE69539DB6D8(iLocal_3246))
				{
					if (!unk_0xAF437D7C802AB246(iLocal_3246))
					{
						if (!unk_0x23417CDB252083F9(iLocal_3246, "misstrevor4", "dive_clear_goon1", 3))
						{
							if (unk_0xD51CFE69539DB6D8(iLocal_3247))
							{
								if (!unk_0xAF437D7C802AB246(iLocal_3247))
								{
									if (!unk_0x23417CDB252083F9(iLocal_3247, "misstrevor4", "dive_clear_goon2", 3))
									{
										unk_0x8B10CC9832827D27("misstrevor4");
										unk_0x506D42CB68AE4EA5(&iLocal_3246);
										unk_0x506D42CB68AE4EA5(&iLocal_3247);
									}
								}
							}
						}
					}
				}
				if (unk_0xD51CFE69539DB6D8(iLocal_3121[8]))
				{
					if (unk_0xC45A34912542C4EB(iLocal_3121[8], 0))
					{
						if (unk_0x05BA2AC20921A37E(iLocal_3121[8]))
						{
							if (unk_0xD51CFE69539DB6D8(iLocal_3258))
							{
								if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
								{
									if (unk_0x05BA2AC20921A37E(iLocal_3258))
									{
										if (unk_0x97DF87DF18B03512(iLocal_3258) > 50200f)
										{
											if (iLocal_3330 == 0)
											{
												unk_0xEB35A2486E0DCF8F(iLocal_3121[8], 1f);
												if (func_16(unk_0xE7869D5D7816A9B6(), iLocal_3121[8], 1) < 100f)
												{
													unk_0xC34D34ABA99A6872(0.3f);
													iLocal_3373 = 0;
													if (!unk_0x64C1636D480771D9("SOL_3_CAR_JET_ENGINE"))
													{
														unk_0x91523366B2FDCD40("SOL_3_CAR_JET_ENGINE");
													}
													unk_0x1A134F7200BE99B1(iLocal_3121[8], 0f, 0f, 0f, 1, 1500, 500, 100);
												}
												unk_0xC602CB510D8B9EAE(iLocal_3121[8], 1);
												unk_0x0FAB2ABDF190DBF3(iLocal_3121[8], 1, 0);
												unk_0x3A8AEDC6680712C1(iLocal_3213, "Trevor_4_747_Flying_Car", iLocal_3121[8], 0, 0, 0);
												unk_0x5AE11BC36633DE4E(0);
												iLocal_3330 = 1;
											}
										}
										if (iLocal_3330 == 1)
										{
											if (unk_0xC9D9444186B5A374() > 662)
											{
												if (unk_0x64C1636D480771D9("SOL_3_CAR_JET_ENGINE"))
												{
													unk_0x61B624BA2305D0E5("SOL_3_CAR_JET_ENGINE");
												}
												unk_0xC34D34ABA99A6872(1f);
												iLocal_3373 = 1;
											}
											if (unk_0xC9D9444186B5A374() > 1872)
											{
												unk_0x6035B71FBC2881EC(iLocal_3121[8]);
											}
										}
									}
								}
							}
						}
						else if (unk_0xD51CFE69539DB6D8(iLocal_3258))
						{
							if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
							{
								if (unk_0x05BA2AC20921A37E(iLocal_3258))
								{
									if (unk_0x97DF87DF18B03512(iLocal_3258) > 50200f)
									{
										if (!unk_0x47EF9ED961F4F559(iLocal_3121[8]))
										{
											if (iLocal_3385 == 0)
											{
												unk_0x3A8AEDC6680712C1(iLocal_3213, "Trevor_4_747_Carsplosion", iLocal_3121[8], 0, 0, 0);
												unk_0xCF219408C2548110(iLocal_3121[8], 1, 0);
												iLocal_3385 = 1;
											}
										}
									}
								}
							}
						}
					}
					else if (iLocal_3373 == 0)
					{
						if (iLocal_3330 == 1)
						{
							if (unk_0xC9D9444186B5A374() > 662)
							{
								if (unk_0x64C1636D480771D9("SOL_3_CAR_JET_ENGINE"))
								{
									unk_0x61B624BA2305D0E5("SOL_3_CAR_JET_ENGINE");
								}
								unk_0xC34D34ABA99A6872(1f);
								iLocal_3373 = 1;
							}
						}
					}
				}
				else if (iLocal_3373 == 0)
				{
					if (iLocal_3330 == 1)
					{
						if (unk_0xC9D9444186B5A374() > 662)
						{
							if (unk_0x64C1636D480771D9("SOL_3_CAR_JET_ENGINE"))
							{
								unk_0x61B624BA2305D0E5("SOL_3_CAR_JET_ENGINE");
							}
							unk_0xC34D34ABA99A6872(1f);
							iLocal_3373 = 1;
						}
					}
				}
				if (unk_0xD51CFE69539DB6D8(iLocal_3121[11]))
				{
					if (unk_0xC45A34912542C4EB(iLocal_3121[11], 0))
					{
						if (unk_0x05BA2AC20921A37E(iLocal_3121[11]))
						{
							if (unk_0xD51CFE69539DB6D8(iLocal_3258))
							{
								if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
								{
									if (unk_0x05BA2AC20921A37E(iLocal_3258))
									{
										if (unk_0x97DF87DF18B03512(iLocal_3258) > 82683f)
										{
											if (iLocal_3331 == 0)
											{
												unk_0x3A8AEDC6680712C1(iLocal_3215, "Trevor_4_747_Flying_Car", iLocal_3121[11], 0, 0, 0);
												iLocal_3331 = 1;
												unk_0x5AE11BC36633DE4E(0);
											}
											if (iLocal_3331 == 1)
											{
												if (unk_0xC9D9444186B5A374() > 1872)
												{
													if (!unk_0x47EF9ED961F4F559(iLocal_3121[11]))
													{
														unk_0x6035B71FBC2881EC(iLocal_3121[11]);
													}
												}
											}
										}
									}
								}
							}
						}
						else if (iLocal_3331 == 1)
						{
							if (iLocal_3386 == 0)
							{
								if (!unk_0x47EF9ED961F4F559(iLocal_3121[11]))
								{
									unk_0x3A8AEDC6680712C1(iLocal_3215, "Trevor_4_747_Carsplosion", iLocal_3121[11], 0, 0, 0);
									unk_0xCF219408C2548110(iLocal_3121[11], 1, 0);
									iLocal_3386 = 1;
								}
							}
						}
					}
				}
				if (unk_0xD51CFE69539DB6D8(iLocal_3121[12]))
				{
					if (unk_0xC45A34912542C4EB(iLocal_3121[12], 0))
					{
						if (unk_0x05BA2AC20921A37E(iLocal_3121[12]))
						{
							if (unk_0xD51CFE69539DB6D8(iLocal_3258))
							{
								if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
								{
									if (unk_0x05BA2AC20921A37E(iLocal_3258))
									{
										if (unk_0x97DF87DF18B03512(iLocal_3258) > 82463f)
										{
											if (iLocal_3332 == 0)
											{
												unk_0x3A8AEDC6680712C1(iLocal_3216, "Trevor_4_747_Flying_Car", iLocal_3121[12], 0, 0, 0);
												iLocal_3332 = 1;
												unk_0x5AE11BC36633DE4E(0);
											}
											if (iLocal_3332 == 1)
											{
												if (unk_0xC9D9444186B5A374() > 1000)
												{
													if (!unk_0x47EF9ED961F4F559(iLocal_3121[12]))
													{
														unk_0x6035B71FBC2881EC(iLocal_3121[12]);
													}
												}
											}
										}
									}
								}
							}
							if (iLocal_3541 == 0)
							{
								if (unk_0x05BA2AC20921A37E(iLocal_3121[12]))
								{
									if (unk_0x97DF87DF18B03512(iLocal_3121[12]) > 22216f && func_16(iLocal_3259, iLocal_3121[12], 1) < 90f)
									{
										unk_0xC34D34ABA99A6872(0.3f);
										unk_0x1A134F7200BE99B1(iLocal_3121[12], 0f, 0f, 0f, 1, 2000, 1000, 500);
										iLocal_3203 = unk_0x9D40BBF80D8F5E8A();
										iLocal_3541 = 1;
									}
								}
							}
						}
						else if (iLocal_3332 == 1)
						{
							if (iLocal_3387 == 0)
							{
								if (!unk_0x47EF9ED961F4F559(iLocal_3121[12]))
								{
									unk_0x3A8AEDC6680712C1(iLocal_3216, "Trevor_4_747_Carsplosion", iLocal_3121[12], 0, 0, 0);
									unk_0xCF219408C2548110(iLocal_3121[12], 1, 0);
									iLocal_3387 = 1;
								}
							}
						}
					}
				}
				if (iLocal_3541 == 1)
				{
				}
				if (iLocal_3540 == 0 && iLocal_3541 == 1)
				{
					if (unk_0xD51CFE69539DB6D8(iLocal_3121[12]))
					{
						if (unk_0xC45A34912542C4EB(iLocal_3121[12], 0))
						{
							Local_3315 = { unk_0x1141852D07400777(iLocal_3121[12], 1) };
						}
					}
					Local_3318 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) };
					if (unk_0x9D40BBF80D8F5E8A() > iLocal_3203 + 1579 || Local_3318.f_1 < Local_3315.f_1)
					{
						unk_0xC34D34ABA99A6872(1f);
						unk_0xC36FD2B6875CA6EA(0);
						iLocal_3540 = 1;
					}
				}
				if (unk_0xD51CFE69539DB6D8(iLocal_3258))
				{
					if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
					{
						if (unk_0x05BA2AC20921A37E(iLocal_3258))
						{
							if (unk_0x97DF87DF18B03512(iLocal_3258) > 105000f && unk_0x97DF87DF18B03512(iLocal_3258) < 113000f)
							{
								unk_0x6BA6B5532D538363(-1172.3f, -3027.5f, 13.3f);
							}
						}
					}
				}
				if (unk_0xD51CFE69539DB6D8(iLocal_3121[13]))
				{
					if (unk_0xC45A34912542C4EB(iLocal_3121[13], 0))
					{
						if (unk_0x05BA2AC20921A37E(iLocal_3121[13]))
						{
							if (unk_0xD51CFE69539DB6D8(iLocal_3258))
							{
								if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
								{
									if (unk_0x05BA2AC20921A37E(iLocal_3258))
									{
										if (unk_0x97DF87DF18B03512(iLocal_3258) > 108830f)
										{
											unk_0x2363D576670633B2(iLocal_3121[13], 0);
											unk_0xC602CB510D8B9EAE(iLocal_3121[13], 1);
											unk_0xFD092FF761E54535(iLocal_3121[13], 0);
											unk_0xC1B1E9A034A63A62(0);
											iLocal_3486 = 1;
										}
									}
								}
							}
						}
						else if (iLocal_3486 == 1)
						{
							unk_0x09714949CF524B00(iLocal_3121[13], 0);
							unk_0x336384ED9A73289A(iLocal_3121[13], 1);
							unk_0x09714949CF524B00(unk_0xBD6B21D725712BDE(iLocal_3121[13], -1), 0);
						}
					}
				}
				if (iLocal_3478 == 0)
				{
					if (unk_0xD51CFE69539DB6D8(iLocal_3121[5]))
					{
						if (unk_0xC45A34912542C4EB(iLocal_3121[5], 0))
						{
							unk_0xED6BC33BD669B45F(iLocal_3121[5], 0);
							unk_0x2EF7A8CB89D363F6(iLocal_3121[5], 1);
							iLocal_3478 = 1;
						}
					}
				}
				if (unk_0xD51CFE69539DB6D8(iLocal_3121[15]))
				{
					if (unk_0xC45A34912542C4EB(iLocal_3121[15], 0))
					{
						if (unk_0x05BA2AC20921A37E(iLocal_3121[15]))
						{
							if (unk_0xD51CFE69539DB6D8(iLocal_3258))
							{
								if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
								{
									if (unk_0x05BA2AC20921A37E(iLocal_3258))
									{
										if (unk_0x97DF87DF18B03512(iLocal_3258) > 104989f)
										{
											unk_0x6035B71FBC2881EC(iLocal_3121[15]);
											func_231(iLocal_3121[15], -0.04f, -2.21f, 0.887f, 0f, -1f, 0f, 5f, 1);
											func_231(iLocal_3121[15], 0.44f, -0.802f, 15.303f, 0f, 0f, 0f, 12f, 1);
											unk_0xCF219408C2548110(iLocal_3121[15], 1, 0);
											unk_0xD73158C5794398B4(4f, 4f, 4);
											unk_0x3A8AEDC6680712C1(-1, "Trevor_4_747_Carsplosion", iLocal_3121[15], 0, 0, 0);
											unk_0x9694B1DF874054DF("SCRIPT\Trv_4_747_Cop_Cars");
										}
									}
								}
							}
						}
					}
				}
				if (unk_0xD51CFE69539DB6D8(iLocal_3258))
				{
					if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
					{
						if (unk_0x05BA2AC20921A37E(iLocal_3258))
						{
							if (unk_0x97DF87DF18B03512(iLocal_3258) > 112000f)
							{
								unk_0xCBEB830866A6963D("BB_MOLLY_2");
								unk_0x2B0BB514F9140141("misssolomon_3");
								unk_0x2B0BB514F9140141("move_f@film_reel_arms");
								iLocal_3182 = 1;
							}
						}
					}
				}
				break;
			
			case 1:
				if (iLocal_3508 == 0)
				{
					if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), -887.1561f, -2957.106f, 12.46766f, -848.108f, -2997.588f, 18.23435f, 5f, 0, 1, 0))
					{
						iLocal_3508 = 1;
					}
				}
				if (unk_0xD51CFE69539DB6D8(iLocal_3272[0]))
				{
					if (unk_0xC45A34912542C4EB(iLocal_3272[0], 0))
					{
						unk_0xD1AE9D189CB65173(iLocal_3272[0], 0);
						unk_0xC1F2137782A816E9(&(iLocal_3272[0]));
					}
				}
				if (unk_0xD51CFE69539DB6D8(iLocal_3251[0]))
				{
					if (!unk_0xAF437D7C802AB246(iLocal_3251[0]))
					{
						unk_0xFA2C5C2D054C888E(iLocal_3251[0]);
						unk_0x506D42CB68AE4EA5(&(iLocal_3251[0]));
					}
				}
				if (iLocal_3401 == 0)
				{
					if (unk_0xD51CFE69539DB6D8(iLocal_3258))
					{
						if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
						{
							if (unk_0x05BA2AC20921A37E(iLocal_3258))
							{
								if (unk_0x97DF87DF18B03512(iLocal_3258) > 115000f)
								{
									unk_0xCBEB830866A6963D("Trev4_5");
									unk_0x801429C020C467BA(joaat("prop_cs_film_reel_01"));
									if (!unk_0xC5E5B5BBBE4693F6())
									{
										unk_0x3D81DBD4F6A29824(-930.7f, -2916.9f, 13.4f, 10f, 0);
									}
									iLocal_3401 = 1;
								}
							}
						}
					}
				}
				if (iLocal_3437 == 0)
				{
					if (unk_0xD51CFE69539DB6D8(iLocal_3258))
					{
						if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
						{
							if (unk_0x05BA2AC20921A37E(iLocal_3258))
							{
								if (unk_0x97DF87DF18B03512(iLocal_3258) > 120000f)
								{
									if (!unk_0x64C1636D480771D9("SOL_3_ARRIVE_AT_HANGAR"))
									{
										unk_0x91523366B2FDCD40("SOL_3_ARRIVE_AT_HANGAR");
									}
									unk_0x1E983D1C62BA179E(iLocal_3258);
								}
								if (unk_0x97DF87DF18B03512(iLocal_3258) > 125513f)
								{
									unk_0x6035B71FBC2881EC(iLocal_3258);
									unk_0x2878EC06B3F897A0(iLocal_3258, 1);
									func_230();
									unk_0x1D23906D962EED92();
									unk_0xE822C342FB4392F1(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f, 1, 0);
									unk_0x61B624BA2305D0E5("TREVOR_4_MAIN_CHASE");
									if (!unk_0xCF686B56FD5328B5(uLocal_3291))
									{
										uLocal_3291 = unk_0x01A00DEC76A48F14("DEFAULT_SCRIPTED_CAMERA", 0);
									}
									if (!unk_0xCF686B56FD5328B5(uLocal_3290))
									{
										uLocal_3290 = unk_0x01A00DEC76A48F14("DEFAULT_SCRIPTED_CAMERA", 0);
									}
									iLocal_3194 = unk_0x9D40BBF80D8F5E8A();
									unk_0x1B8E0930AB96444B(1);
									unk_0x515F66600A2670E2(0);
									iLocal_3182 = 2;
								}
							}
						}
					}
				}
				break;
			
			case 2:
				Local_3318 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) };
				unk_0x1E983D1C62BA179E(iLocal_3258);
				if (iLocal_3508 == 0)
				{
					if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), -887.1561f, -2957.106f, 12.46766f, -848.108f, -2997.588f, 18.23435f, 5f, 0, 1, 0))
					{
						iLocal_3508 = 1;
					}
				}
				if (iLocal_3437 == 0)
				{
					if (unk_0xF18329472591CFE6(Local_3318, -930.7f, -2916.9f, 13.4f, 1) < 45f)
					{
						iLocal_3182 = 3;
					}
					if (unk_0xD51CFE69539DB6D8(iLocal_3258))
					{
						if (unk_0xD525F9D50CBB6A5D(iLocal_3258))
						{
							if (iLocal_3508 == 1)
							{
								iLocal_3182 = 3;
							}
						}
					}
					if (unk_0x9D40BBF80D8F5E8A() > iLocal_3194 + 5000 && iLocal_3508 == 1)
					{
						iLocal_3182 = 3;
					}
				}
				break;
			
			case 3:
				if (unk_0xC5E5B5BBBE4693F6())
				{
					unk_0xEF1C0568E9BDCF78();
				}
				unk_0x1E983D1C62BA179E(iLocal_3258);
				if (!unk_0xAF437D7C802AB246(iLocal_3222))
				{
					if (unk_0x23417CDB252083F9(iLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
					{
					}
				}
				if (iLocal_3466 == 0)
				{
					if (unk_0xD51CFE69539DB6D8(iLocal_3258))
					{
						if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
						{
							if (!unk_0x05BA2AC20921A37E(iLocal_3258))
							{
								if (unk_0x2917D5E1CB5CE43A("misssolomon_3"))
								{
									if (!unk_0xAF437D7C802AB246(iLocal_3222))
									{
										if (!unk_0xD51CFE69539DB6D8(iLocal_3283))
										{
											if (unk_0x5053BF6D5604065B(joaat("prop_cs_film_reel_01")))
											{
												iLocal_3283 = unk_0x8C15E6EC0BC9B4BE(joaat("prop_cs_film_reel_01"), -929f, -2917f, 13f, 1, 1, 0);
												unk_0x9E4D318905B670CB(iLocal_3283, iLocal_3222, unk_0x206A9EC63F98F19D(iLocal_3222, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
											}
										}
										if (!unk_0x23417CDB252083F9(iLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											unk_0x2878EC06B3F897A0(iLocal_3258, 0);
											uLocal_3208 = unk_0xB839A1C489B63ACC(-929.492f, -2913.472f, 14.16f, 0f, 0f, -28.96f, 2);
											unk_0xDE77F887DBEE3953(iLocal_3258, uLocal_3208, "molly_escapes_car_car", "misssolomon_3", 8f, -8f, 0, 1000f);
											unk_0x360F0D01112F8AD0(iLocal_3222, uLocal_3208, "misssolomon_3", "molly_escapes_car_mol", 1000f, -1000f, 5, 0, 1148846080, 0);
											unk_0xDB14F40E3E8CB36F(uLocal_3208, 0);
											unk_0xE72D045151F6CA70("TRV4_EXIT_CARS");
										}
										else
										{
											iLocal_3466 = 1;
										}
									}
								}
							}
						}
					}
				}
				if (iLocal_3468 == 0)
				{
					if (iLocal_3466 == 1)
					{
						if (!unk_0xAF437D7C802AB246(iLocal_3222))
						{
							if (unk_0x22E902D6AF27E232(iLocal_3222, -937.6656f, -2927.864f, 12.77007f, -934.8479f, -2929.484f, 14.46523f, 1.5f, 0, 1, 0))
							{
								if (unk_0x23417CDB252083F9(iLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
								{
									unk_0xB4E40069DFD4B86F(iLocal_3222, -1000f, 1);
								}
								unk_0xDE31B2587775EDAD(iLocal_3222);
								unk_0x9BEE7E791BC4D38B(iLocal_3222, 1);
								unk_0x88A973CE47FBEF95(iLocal_3222, -934.8388f, -2932.831f, 12.9649f, 1, 0, 0, 1);
								unk_0x151F32CB40BE730C(iLocal_3222, 236.5739f);
								unk_0x634CF9AFCB879C0D(iLocal_3222, "BB_MOLLY_2", 1, 4, -1);
								if (unk_0x2917D5E1CB5CE43A("move_f@film_reel_arms"))
								{
									unk_0xDCF460AE46C9489C(iLocal_3222, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
								}
								iLocal_3468 = 1;
							}
						}
					}
				}
				if (iLocal_3437 == 0)
				{
					if (iLocal_3476 == 0)
					{
						if (iLocal_3475 == 0)
						{
							if (!unk_0xAF437D7C802AB246(iLocal_3222))
							{
								if (unk_0x23417CDB252083F9(iLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
								{
									if (unk_0x4D221DFBB84DCF0B(uLocal_3208) > 0.18f || unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), -930.7f, -2916.9f, 13.4f, 1) < 10f)
									{
										iLocal_3183 = 0;
										iLocal_3475 = 1;
									}
								}
							}
						}
						while (iLocal_3475 == 1)
						{
							unk_0xE10447427D928F55("M_LegalTrouble", 0);
							switch (iLocal_3183)
							{
								case 0:
									unk_0x011A61B80E2BFA7F(uLocal_3291, -927.0851f, -2921.173f, 13.66304f, 1.738541f, 1.294743f, 28.05799f, 34.66404f, 0, 1, 1, 2);
									unk_0x011A61B80E2BFA7F(uLocal_3290, -927.0851f, -2921.173f, 13.66304f, 1.738541f, 1.294742f, 32.59915f, 34.66404f, 0, 1, 1, 2);
									unk_0x7D333E815920766B(uLocal_3290, uLocal_3291, 4000, 1, 1);
									unk_0xA8010B7497A9230B(0);
									unk_0xE242D0D27B122FAC(0);
									unk_0x538689EF05955EF7(true, 0, 3000, 1, 0, 0);
									if (unk_0xD51CFE69539DB6D8(iLocal_3271))
									{
										unk_0x9E55BD45B84E7BDC(&iLocal_3271);
									}
									if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
									{
										unk_0x88A973CE47FBEF95(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), -918.6157f, -2926.646f, 12.9667f, 1, 0, 0, 1);
										unk_0x151F32CB40BE730C(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), 47.9465f);
									}
									else
									{
										unk_0x88A973CE47FBEF95(unk_0xE7869D5D7816A9B6(), -918.6157f, -2926.646f, 12.9667f, 1, 0, 0, 1);
										unk_0x151F32CB40BE730C(unk_0xE7869D5D7816A9B6(), 47.9465f);
									}
									if (!unk_0xAF437D7C802AB246(iLocal_3222))
									{
										func_17(&uLocal_3578, 2, iLocal_3222, "MOLLY", 0, 1);
										unk_0x187F7608BA81D7D9(iLocal_3222, 1);
									}
									unk_0xD73158C5794398B4(4f, 0f, 3);
									unk_0x79B550FADF7D3978(4);
									unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), false, 0);
									iLocal_3529 = 0;
									iLocal_3183++;
									break;
								
								case 1:
									if (!unk_0xAF437D7C802AB246(iLocal_3222))
									{
										if (unk_0x23417CDB252083F9(iLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											if (iLocal_3529 == 0)
											{
												if (unk_0x4D221DFBB84DCF0B(uLocal_3208) > 0.3f)
												{
													if (func_229(&uLocal_3578, "T1M4AUD", "SOL3_GETOUT", 7, 0, 0, 0))
													{
														unk_0xD73158C5794398B4(6f, 7f, 4);
														iLocal_3529 = 1;
													}
												}
											}
											if (unk_0x4D221DFBB84DCF0B(uLocal_3208) > 0.5f)
											{
												unk_0x011A61B80E2BFA7F(uLocal_3291, -926.0932f, -2916.891f, 14.47074f, -3.471637f, 1.294743f, 125.8315f, 34.66404f, 0, 1, 1, 2);
												unk_0x011A61B80E2BFA7F(uLocal_3290, -926.0932f, -2916.891f, 14.47074f, -3.471636f, 1.294743f, 135.4584f, 34.66404f, 0, 1, 1, 2);
												unk_0x7D333E815920766B(uLocal_3290, uLocal_3291, 4000, 1, 1);
												iLocal_3206 = unk_0x9D40BBF80D8F5E8A();
												iLocal_3183++;
											}
										}
									}
									break;
								
								case 2:
									if (!unk_0xAF437D7C802AB246(iLocal_3222))
									{
										if (unk_0x23417CDB252083F9(iLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											if ((iLocal_3206 != -1 && unk_0x08EE17D4722097C7(0) == 4) && (unk_0x9D40BBF80D8F5E8A() - iLocal_3206) >= 2230)
											{
												unk_0xCD0E4FEA8B60FCA3("CamPushInNeutral", 0, 0);
												unk_0xCC18B241D266EF14(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
												iLocal_3206 = -1;
											}
											if (unk_0x4D221DFBB84DCF0B(uLocal_3208) > 0.85f)
											{
												unk_0xE242D0D27B122FAC(1);
												unk_0xA8010B7497A9230B(1);
												unk_0x538689EF05955EF7(false, 0, 3000, 1, 0, 0);
												unk_0x7FB81B1DD14A3BE4(0f);
												iLocal_3220 = 346732587;
												unk_0x9053753949C172D6(iLocal_3220, joaat("v_ilev_ss_door5_r"), -935.641f, -2927.185f, 14.0945f, 1, 1, 0);
												unk_0xDDAACCFB9CA1B68D(iLocal_3220, 1f, 0, 1);
												unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), true, 0);
												if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
												{
													unk_0x663F1B23D2C4D20A(unk_0xE7869D5D7816A9B6(), unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), 0);
													if (unk_0x08EE17D4722097C7(1) != 4 && unk_0x08EE17D4722097C7(0) == 4)
													{
														unk_0xA573D5E64CDFAF83(unk_0xE7869D5D7816A9B6(), 1, 0);
													}
												}
												unk_0x187F7608BA81D7D9(iLocal_3222, 0);
												unk_0xAA3EE135C1B3E902();
												unk_0xD73158C5794398B4(0f, 4f, 3);
												iLocal_3195 = unk_0x9D40BBF80D8F5E8A();
												iLocal_3475 = 0;
												iLocal_3476 = 1;
												iLocal_3183++;
											}
										}
									}
									break;
							}
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
				if (iLocal_3476 == 1)
				{
					unk_0x31DB7F67CAF7CCFA(iLocal_3220, 5, 0, 1);
					if (iLocal_3552 == 0)
					{
						if (unk_0xD51CFE69539DB6D8(iLocal_3222))
						{
							if (!unk_0xAF437D7C802AB246(iLocal_3222))
							{
								if (unk_0x3761EA7F8628B81A(iLocal_3222, -935.3f, -2927.3f, 13f, 1.5f, 1.5f, 2f, 0, 1, 0))
								{
									unk_0xC0F4535E64974FE0(-1, "Trevor_4_747_Molly_Open_Doors", -935.1f, -2927.6f, 13.2f, 0, 0, 0, 0);
									iLocal_3552 = 1;
								}
							}
						}
					}
				}
				if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
				{
					if (unk_0x64C1636D480771D9("SOL_3_MAIN_CHASE"))
					{
						unk_0x61B624BA2305D0E5("SOL_3_MAIN_CHASE");
					}
					if (unk_0x64C1636D480771D9("SOL_3_ARRIVE_AT_HANGAR"))
					{
						unk_0x61B624BA2305D0E5("SOL_3_ARRIVE_AT_HANGAR");
					}
					if (!unk_0x64C1636D480771D9("SOL_3_ON_FOOT_CHASE"))
					{
						unk_0x91523366B2FDCD40("SOL_3_ON_FOOT_CHASE");
					}
				}
				if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
				{
					func_218();
				}
				if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), -929.7908f, -2928.213f, 12.19499f, -935.7283f, -2924.685f, 15.44832f, 4.75f, 0, 1, 1))
				{
					if (iLocal_3468 == 0)
					{
						if (!unk_0xAF437D7C802AB246(iLocal_3222))
						{
							if (unk_0x23417CDB252083F9(iLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
							{
								unk_0xB4E40069DFD4B86F(iLocal_3222, -1000f, 1);
							}
							unk_0xDE31B2587775EDAD(iLocal_3222);
							unk_0x9BEE7E791BC4D38B(iLocal_3222, 1);
							unk_0x88A973CE47FBEF95(iLocal_3222, -934.8388f, -2932.831f, 12.9649f, 1, 0, 0, 1);
							unk_0x151F32CB40BE730C(iLocal_3222, 236.5739f);
							unk_0x634CF9AFCB879C0D(iLocal_3222, "BB_MOLLY_2", 1, 4, -1);
							if (unk_0x2917D5E1CB5CE43A("move_f@film_reel_arms"))
							{
								unk_0xDCF460AE46C9489C(iLocal_3222, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
							}
							iLocal_3468 = 1;
						}
					}
					if (unk_0xD51CFE69539DB6D8(iLocal_3266))
					{
						unk_0x9E55BD45B84E7BDC(&iLocal_3266);
					}
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 5;
				}
				break;
			}
	}
}

void func_218()
{
	if (iLocal_3433 == 0)
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_3121[14]))
		{
			if (unk_0xC45A34912542C4EB(iLocal_3121[14], 0))
			{
				iLocal_3248 = unk_0xBD6B21D725712BDE(iLocal_3121[14], -1);
				unk_0xCC897563F1971D6A(iLocal_3248, joaat("weapon_pistol"), 1000, 1, 1);
				unk_0x20BB4B94CC6DDC9A(iLocal_3248, 1, 0);
				unk_0x9BEE7E791BC4D38B(iLocal_3248, 1);
				unk_0xB161EBD04DDDE4AD(iLocal_3248, 5);
				unk_0x09714949CF524B00(iLocal_3248, 150);
				func_17(&uLocal_3578, 3, iLocal_3248, "TREV4POLICE3", 0, 1);
			}
		}
		iLocal_3433 = 1;
	}
	else if (iLocal_3432 == 0)
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_3248))
		{
			if (!unk_0xAF437D7C802AB246(iLocal_3248))
			{
				unk_0xFA2C5C2D054C888E(iLocal_3248);
				unk_0xCDB54400CEA326E7(iLocal_3248, unk_0x1141852D07400777(iLocal_3248, 1), 5f, 0, 0);
				unk_0x94026C1D1DB14225(&uLocal_3292);
				unk_0xCD7A5BCC47D00FB2(0, 0, 0);
				unk_0x3E92A38A135CF88A(0, unk_0xE7869D5D7816A9B6(), 5000, 1);
				unk_0x13C351F151D49F89(0, unk_0xE7869D5D7816A9B6(), 0, 16);
				unk_0x911ECBCE73F8EC3F(uLocal_3292);
				unk_0xC2C4A3A9FF2FBFFF(iLocal_3248, uLocal_3292);
				unk_0x33A90AD8FA327B72(&uLocal_3292);
				iLocal_3432 = 1;
			}
		}
	}
	else if (iLocal_3489 == 0)
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_3248))
		{
			if (!unk_0xAF437D7C802AB246(iLocal_3248))
			{
				if (!unk_0x51374A0BB2871E6E(iLocal_3248, 0) && func_13(unk_0xE7869D5D7816A9B6(), iLocal_3248) < 20f)
				{
					if (!func_228())
					{
						if (!unk_0x13ACC601BB29A690() || !unk_0xA7E452C0F82F7C56())
						{
							func_17(&uLocal_3578, 4, iLocal_3248, "SOL3COP", 0, 1);
							if (func_219(&uLocal_3578, "T1M4AUD", "SOL3_MOLPOL", "SOL3_MOLPOL_2", 7, 0, 0))
							{
								iLocal_3489 = 1;
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
	Global_15719 = 0;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 1;
	Global_16705 = 0;
	Global_16709 = 0;
	StringCopy(&Global_16716, sParam3, 24);
	Global_2621441 = 0;
	return func_220(sParam2, iParam4, 0);
}

int func_220(char* sParam0, int iParam1, bool bParam2)
{
	Global_15713 = 0;
	if (Global_15712 == 0 || Global_15714 == 2)
	{
		if (Global_15712 != 0)
		{
			if (iParam1 > Global_15714)
			{
				if (Global_15719 == 0)
				{
					unk_0xDA09A6E60FE9645E(0);
					Global_14413.f_1 = 3;
					Global_15712 = 0;
					Global_15713 = 1;
					Global_15765 = 0;
					Global_15708 = 0;
					Global_15709 = 0;
					Global_15723 = 0;
					Global_15722 = 0;
					Global_14412 = 0;
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
		if (unk_0xF0A330A29F97AA7E())
		{
			return 0;
		}
		if (func_226(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_225();
		Global_15001 = { Global_15166 };
		Global_15718 = Global_15719;
		Global_15725 = Global_15726;
		Global_2621442 = Global_2621441;
		Global_15727 = { Global_15743 };
		Global_15720 = Global_15721;
		Global_16702 = Global_16703;
		Global_16710 = { Global_16716 };
		Global_16704 = Global_16705;
		Global_16706 = Global_16707;
		Global_16708 = Global_16709;
		Global_15331.f_370 = Global_16701;
		Global_15331.f_368 = Global_16699;
		Global_15331.f_369 = Global_16700;
		Global_15708 = Global_15709;
		if (Global_15718)
		{
			unk_0x73817D396768E4C6(&Global_2283, 20);
			unk_0x73817D396768E4C6(&Global_2284, 17);
			unk_0x73817D396768E4C6(&Global_2285, 0);
			if (bParam2)
			{
				func_224();
				if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14413.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14379 == 1)
			{
				return 0;
			}
			if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
			{
				if (unk_0xC3AE89795D844EE9(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (func_223())
				{
					return 0;
				}
				if (unk_0x25AE83AAAFB359D8(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (unk_0x3A065D524128D33B(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (unk_0x14618ECB1EB17B8F(unk_0xE7869D5D7816A9B6(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69236)
				{
					if (unk_0xA7D2A868253353BE(unk_0xE7869D5D7816A9B6()))
					{
						return 0;
					}
					if (unk_0x39CB1B5DEC5DD307(unk_0x3F80C6638E3A1A90()))
					{
						return 0;
					}
					if (unk_0xA7AC3687807201B4(unk_0xE7869D5D7816A9B6()))
					{
						return 0;
					}
					if (unk_0x3CD36EADD6272F29(unk_0x3F80C6638E3A1A90()))
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
				switch (Global_14413.f_1)
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
				if (unk_0xB519E5386FBF69E5(Global_2283, 9))
				{
					return 0;
				}
			}
			func_222();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_221();
		return 1;
	}
	if (Global_15712 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15714 || iParam1 == Global_15714)
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
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xDA09A6E60FE9645E(0);
	Global_15712 = 1;
}

void func_222()
{
	Global_15765 = Global_15764;
	Global_15759 = Global_15760;
	Global_15806 = { Global_15794 };
	Global_15812 = { Global_15800 };
	Global_15767 = Global_15766;
	Global_15836 = { Global_15818 };
	Global_15842 = { Global_15824 };
	Global_15848 = { Global_15830 };
	Global_15854 = { Global_15860 };
	Global_1598 = Global_1599;
	Global_1600 = Global_1601;
	Global_15723 = Global_15724;
	Global_15725 = Global_15726;
	Global_15727 = { Global_15743 };
	Global_15716 = Global_15717;
	Global_16728 = 0;
	Global_15761 = 0;
	Global_15762 = 0;
	unk_0x73817D396768E4C6(&Global_2284, 16);
}

int func_223()
{
	int iVar0;
	int iVar1;
	
	if (Global_69236)
	{
		iVar0 = 0;
		unk_0x5E99B63A819500A5(unk_0xE7869D5D7816A9B6(), &iVar1, 1);
		if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x834CA326769DA173() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		if (unk_0x9699041CFA6517D2(unk_0xE7869D5D7816A9B6(), 78, 1))
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
		if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
		{
			if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[2 /*29*/])
			{
				Global_14413 = 2;
			}
			else
			{
				Global_14413 = 0;
			}
		}
	}
	else
	{
		Global_14413 = func_91();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69236)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

void func_225()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15001[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15001[iVar0 /*10*/].f_1), "", 24);
		Global_15001[iVar0 /*10*/].f_7 = 0;
		Global_15001[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15001.f_161 = -99;
	Global_15001.f_162 = { 0f, 0f, 0f };
}

bool func_226(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338577.f_203[iParam1];
			}
			break;
	}
	return unk_0xB519E5386FBF69E5(Global_1338577.f_949, iParam0);
}

void func_227(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15166 = { *uParam0 };
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = iParam5;
	if (iParam3 == 0)
	{
		Global_16699 = 1;
		Global_16697 = 0;
	}
	else
	{
		Global_16699 = 0;
		Global_16697 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16700 = 1;
		Global_16698 = 0;
	}
	else
	{
		Global_16700 = 0;
		Global_16698 = 1;
	}
}

int func_228()
{
	if (Global_15712 != 0 || unk_0xF0A330A29F97AA7E())
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
	Global_15719 = 0;
	Global_15721 = 0;
	Global_15726 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_2621441 = 0;
	return func_220(sParam2, iParam3, 0);
}

void func_230()
{
	if (unk_0xA288661B75BFC01B(uLocal_3755[0]))
	{
		unk_0x52F57B57CB8B4432(uLocal_3755[0], 0);
	}
	if (unk_0xA288661B75BFC01B(uLocal_3755[1]))
	{
		unk_0x52F57B57CB8B4432(uLocal_3755[1], 0);
	}
	if (unk_0xA288661B75BFC01B(uLocal_3755[2]))
	{
		unk_0x52F57B57CB8B4432(uLocal_3755[2], 0);
	}
	if (iLocal_3388 == 1)
	{
		unk_0x9B51AF2075B026EA(iLocal_3217);
		iLocal_3396 = 0;
	}
}

void func_231(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7, bool bParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if (!unk_0x76B2D234F1895632(iParam0))
	{
		if (unk_0x05BA2AC20921A37E(iParam0))
		{
			unk_0x6035B71FBC2881EC(iParam0);
		}
		Var3 = { unk_0x1141852D07400777(iParam0, 1) };
		if (bParam8)
		{
			Var0 = { unk_0xBD306D8AFEF4E078(iParam0, Param1) };
		}
		else
		{
			Var0 = { Param1 };
		}
		Var6 = { func_232(Var0 - Var3) };
		Var6 = { Var6 * Vector(fParam7, fParam7, fParam7) };
		unk_0x4B89CEB084587C7F(iParam0, 3, Var6, Param4, 0, 0, 1, 1, 0, 1);
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
	
	if (iLocal_1956 < 15)
	{
		if (iLocal_1956 == 0)
		{
			Local_2656 = { 99999.9f, 99999.9f, 99999.9f };
			Local_2659 = { -99999.9f, -99999.9f, -99999.9f };
		}
		if (unk_0xC45A34912542C4EB(iParam0, 0))
		{
			if (unk_0x05BA2AC20921A37E(iParam0))
			{
				iVar0 = unk_0x088A0569FB43960B(iParam0);
				Var1 = { unk_0x232293F1B0A3E165(iVar0, (fParam1 + (unk_0xBBDA792448DB5A89((iLocal_1956 - 1)) * 2000f))) };
				if (Var1.f_0 < Local_2656.f_0)
				{
					Local_2656.f_0 = Var1.f_0;
				}
				if (Var1.f_1 < Local_2656.f_1)
				{
					Local_2656.f_1 = Var1.f_1;
				}
				if (Var1.f_2 < Local_2656.f_2)
				{
					Local_2656.f_2 = Var1.f_2;
				}
				if (Var1.f_0 > Local_2659.f_0)
				{
					Local_2659.f_0 = Var1.f_0;
				}
				if (Var1.f_1 > Local_2659.f_1)
				{
					Local_2659.f_1 = Var1.f_1;
				}
				if (Var1.f_2 > Local_2659.f_2)
				{
					Local_2659.f_2 = Var1.f_2;
				}
			}
		}
		iLocal_1956++;
	}
	else if (!bLocal_106)
	{
		unk_0x3EB6E5FC1FA6912C(-9999.9f, -9999.9f, -9999.9f, 9999.9f, 9999.9f, 9999.9f, 1);
		Local_2656 = { Local_2656 + Vector((fLocal_1293 * -1f), (fLocal_1293 * -1f), (fLocal_1293 * -1f)) };
		Local_2659 = { Local_2659 + Vector(fLocal_1293, fLocal_1293, fLocal_1293) };
		Local_2650 = { Local_2656 };
		Local_2653 = { Local_2659 };
		unk_0x39895086D78BEA60(Local_2650, Local_2653, 0, 0);
		iLocal_1956 = 0;
	}
}

void func_234()
{
	iLocal_89 = 1;
}

void func_235()
{
	if (iLocal_3333 == 0)
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_3258))
		{
			if (unk_0x05BA2AC20921A37E(iLocal_3258))
			{
				if (unk_0x97DF87DF18B03512(iLocal_3258) > 55000f)
				{
					unk_0x801429C020C467BA(joaat("firetruk"));
					unk_0x801429C020C467BA(joaat("s_m_y_fireman_01"));
					unk_0x2B0BB514F9140141("missheist_agency3aig_lift_waitped_a");
					if ((unk_0x5053BF6D5604065B(joaat("firetruk")) && unk_0x5053BF6D5604065B(joaat("s_m_y_fireman_01"))) && unk_0x2917D5E1CB5CE43A("missheist_agency3aig_lift_waitped_a"))
					{
						if (!unk_0xD51CFE69539DB6D8(iLocal_3264))
						{
							unk_0xB86B1248EA9B87EA(-1129.566f, -2319.888f, 12.9445f, 10f, 0, 0, 0, 0);
							iLocal_3264 = unk_0xD504D1FF5DD2FFD7(joaat("firetruk"), -1129.566f, -2319.888f, 12.9445f, 16.5423f, 1, 1);
						}
						uLocal_3755[0] = unk_0x3423743090764FB4("scr_trev4_trailer_fire", -1151f, -2311f, 15f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
						if (iLocal_3388 == 0)
						{
							unk_0xC0F4535E64974FE0(iLocal_3217, "Trevor_4_747_Loud_Fire", -1151f, -2311f, 15f, 0, 0, 0, 0);
							iLocal_3388 = 1;
						}
						uLocal_3755[1] = unk_0x3423743090764FB4("scr_trev4_trailer_fire", -1140f, -2328f, 18f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
						uLocal_3755[2] = unk_0x3423743090764FB4("scr_trev4_trailer_fire", -1150f, -2327f, 19f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
						if (!unk_0xD51CFE69539DB6D8(iLocal_3223[0]))
						{
							iLocal_3223[0] = unk_0xF430A9686E704FA3(iLocal_3264, 21, joaat("s_m_y_fireman_01"), -1, 1, 1);
							unk_0x9BEE7E791BC4D38B(iLocal_3223[0], 1);
							unk_0x8D6671D78D1F569B(iLocal_3223[0], 1);
							unk_0xD756DD58B9A34169(iLocal_3223[0], -1147.07f, -2320.65f, 18.93f, 1101004800);
						}
						if (!unk_0xD51CFE69539DB6D8(iLocal_3223[1]))
						{
							iLocal_3223[1] = unk_0xA7F4088D9A2629CC(21, joaat("s_m_y_fireman_01"), -1138.313f, -2313.277f, 12.9445f, 155.4271f, 1, 1);
							unk_0xDCF460AE46C9489C(iLocal_3223[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 8f, -8f, -1, 9, 0, 0, 0, 0);
							unk_0x9BEE7E791BC4D38B(iLocal_3223[1], 1);
							unk_0x8D6671D78D1F569B(iLocal_3223[1], 1);
						}
						if (!unk_0xD51CFE69539DB6D8(iLocal_3223[2]))
						{
							iLocal_3223[2] = unk_0xA7F4088D9A2629CC(21, joaat("s_m_y_fireman_01"), -1145.362f, -2309.387f, 12.9445f, 96.0786f, 1, 1);
							unk_0xDCF460AE46C9489C(iLocal_3223[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 8f, -8f, -1, 9, 0, 0, 0, 0);
							unk_0x9BEE7E791BC4D38B(iLocal_3223[2], 1);
							unk_0x8D6671D78D1F569B(iLocal_3223[2], 1);
						}
						if (!unk_0xD51CFE69539DB6D8(iLocal_3223[3]))
						{
							iLocal_3223[3] = unk_0xA7F4088D9A2629CC(21, joaat("s_m_y_fireman_01"), -1147.461f, -2314.511f, 13.1518f, 57.8707f, 1, 1);
							unk_0xDCF460AE46C9489C(iLocal_3223[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 8f, -8f, -1, 9, 0, 0, 0, 0);
							unk_0x9BEE7E791BC4D38B(iLocal_3223[3], 1);
							unk_0x8D6671D78D1F569B(iLocal_3223[3], 1);
						}
						unk_0x839E9476E54502A2(joaat("s_m_y_fireman_01"));
						unk_0x839E9476E54502A2(joaat("firetruk"));
						iLocal_3333 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3333 == 1)
	{
		if (iLocal_3543[0] == 0)
		{
			if (unk_0xD51CFE69539DB6D8(iLocal_3223[1]))
			{
				if (!unk_0xAF437D7C802AB246(iLocal_3223[1]))
				{
					if (iLocal_3547[0] == 0)
					{
						if (unk_0x23417CDB252083F9(iLocal_3223[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 3))
						{
							iLocal_3547[0] = 1;
						}
					}
					if (iLocal_3547[0] == 1)
					{
						if (!unk_0x23417CDB252083F9(iLocal_3223[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 3))
						{
							unk_0xC2EA5B4B2052D2F1(iLocal_3223[1], -1);
							unk_0x8D6671D78D1F569B(iLocal_3223[1], 1);
							unk_0x9BEE7E791BC4D38B(iLocal_3223[1], 0);
							iLocal_3543[0] = 1;
						}
					}
				}
			}
		}
		if (iLocal_3543[1] == 0)
		{
			if (unk_0xD51CFE69539DB6D8(iLocal_3223[2]))
			{
				if (!unk_0xAF437D7C802AB246(iLocal_3223[2]))
				{
					if (iLocal_3547[1] == 0)
					{
						if (unk_0x23417CDB252083F9(iLocal_3223[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 3))
						{
							iLocal_3547[1] = 1;
						}
					}
					if (iLocal_3547[1] == 1)
					{
						if (!unk_0x23417CDB252083F9(iLocal_3223[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 3))
						{
							unk_0xC2EA5B4B2052D2F1(iLocal_3223[2], -1);
							unk_0x8D6671D78D1F569B(iLocal_3223[2], 1);
							unk_0x9BEE7E791BC4D38B(iLocal_3223[2], 0);
							iLocal_3543[1] = 1;
						}
					}
				}
			}
		}
		if (iLocal_3543[2] == 0)
		{
			if (unk_0xD51CFE69539DB6D8(iLocal_3223[3]))
			{
				if (!unk_0xAF437D7C802AB246(iLocal_3223[3]))
				{
					if (iLocal_3547[2] == 0)
					{
						if (unk_0x23417CDB252083F9(iLocal_3223[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 3))
						{
							iLocal_3547[2] = 1;
						}
					}
					if (iLocal_3547[2] == 1)
					{
						if (!unk_0x23417CDB252083F9(iLocal_3223[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 3))
						{
							unk_0xC2EA5B4B2052D2F1(iLocal_3223[3], -1);
							unk_0x8D6671D78D1F569B(iLocal_3223[3], 1);
							unk_0x9BEE7E791BC4D38B(iLocal_3223[3], 0);
							iLocal_3543[2] = 1;
						}
					}
				}
			}
		}
	}
}

void func_236()
{
	if (iLocal_3434 == 0)
	{
		unk_0x801429C020C467BA(joaat("police3"));
		unk_0x801429C020C467BA(joaat("s_m_y_cop_01"));
		unk_0xDBDFBE5906702D9E(1, "BB_AIChase");
		if (unk_0x5053BF6D5604065B(joaat("police3")) && unk_0x5053BF6D5604065B(joaat("s_m_y_cop_01")))
		{
			if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
			{
				if (unk_0x05BA2AC20921A37E(iLocal_3258))
				{
					if (unk_0x97DF87DF18B03512(iLocal_3258) > 15500f)
					{
						unk_0x1B1CE102A7E7999E(unk_0x3F80C6638E3A1A90(), 2, 0);
						unk_0x6FF6F40CA433340F(unk_0x3F80C6638E3A1A90(), 0);
						iLocal_3272[0] = unk_0xD504D1FF5DD2FFD7(joaat("police3"), -847.2593f, -2379.987f, 15.9304f, 196.4921f, 1, 1);
						iLocal_3251[0] = unk_0xF430A9686E704FA3(iLocal_3272[0], 6, joaat("s_m_y_cop_01"), -1, 1, 1);
						unk_0x9BEE7E791BC4D38B(iLocal_3251[0], 1);
						unk_0x28EB71E26B7A2DE2(iLocal_3272[0], "SOL_3_POLICE_CARS_Group", 0);
						func_111(iLocal_3251[0], 0);
						unk_0xE9A614E9191BFB4A(iLocal_3272[0], 1, 1, 0);
						unk_0x23F0735A27D6F6B3(iLocal_3272[0], 1, "BB_AIChase", 1);
						unk_0xCC897563F1971D6A(iLocal_3251[0], joaat("weapon_pistol"), 1000, 1, 1);
						unk_0x821446383BC10D9B(iLocal_3272[0], 1);
						unk_0x839E9476E54502A2(joaat("police3"));
						unk_0x839E9476E54502A2(joaat("s_m_y_cop_01"));
						iLocal_3434 = 1;
					}
				}
			}
		}
	}
	if (iLocal_3434 == 1)
	{
		if (iLocal_3480[0] == 0)
		{
			if (unk_0xD51CFE69539DB6D8(iLocal_3272[0]))
			{
				if (unk_0xC45A34912542C4EB(iLocal_3272[0], 0))
				{
					if (unk_0x05BA2AC20921A37E(iLocal_3272[0]))
					{
						unk_0xEB35A2486E0DCF8F(iLocal_3272[0], fLocal_3323);
						if (unk_0x97DF87DF18B03512(iLocal_3272[0]) > 13000f)
						{
							unk_0x6035B71FBC2881EC(iLocal_3272[0]);
						}
					}
					else if (unk_0xD51CFE69539DB6D8(iLocal_3251[0]))
					{
						if (!unk_0xAF437D7C802AB246(iLocal_3251[0]))
						{
							unk_0x9BEE7E791BC4D38B(iLocal_3251[0], 1);
							if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
							{
								unk_0xDB2C416809306C42(iLocal_3251[0], unk_0xE7869D5D7816A9B6());
								unk_0x8D6671D78D1F569B(iLocal_3251[0], 1);
							}
							else
							{
								unk_0x13C351F151D49F89(iLocal_3251[0], unk_0xE7869D5D7816A9B6(), 0, 16);
								unk_0x8D6671D78D1F569B(iLocal_3251[0], 1);
							}
							unk_0xFC8E26A6FE4C2E54(1, "BB_AIChase");
							iLocal_3196 = unk_0x9D40BBF80D8F5E8A();
							iLocal_3480[0] = 1;
						}
					}
				}
			}
		}
		if (iLocal_3483[0] == 0)
		{
			if (iLocal_3480[0] == 1)
			{
				if (unk_0x9D40BBF80D8F5E8A() > iLocal_3196 + 500)
				{
					if (unk_0xD51CFE69539DB6D8(iLocal_3251[0]))
					{
						if (!unk_0xAF437D7C802AB246(iLocal_3251[0]))
						{
							if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
							{
								unk_0xC33C6138F75D7C68(iLocal_3251[0], 16, 1);
								unk_0xC33C6138F75D7C68(iLocal_3251[0], 1, 1);
								iLocal_3483[0] = 1;
							}
							else
							{
								iLocal_3483[0] = 1;
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
	if (!iLocal_3335)
	{
		if (unk_0xC45A34912542C4EB(iLocal_3121[20], 0))
		{
			uLocal_3289 = unk_0x01A00DEC76A48F14("DEFAULT_SCRIPTED_CAMERA", 0);
			unk_0x63498CF6CF35C6A2(uLocal_3289, 1);
			iLocal_3336 = 0;
			iLocal_3335 = 1;
		}
	}
	else if (func_252(&uLocal_28, 1, 0, 0) && iLocal_3437 == 0)
	{
		if (unk_0x23741E39BEA32E66())
		{
			unk_0x1D208E4A4E1D4FFE(1);
		}
		if (func_228())
		{
			unk_0x00400F14096FE01D();
			func_183();
		}
		if (iLocal_3365[2] == 0)
		{
			if (!unk_0x64C1636D480771D9("SOL_3_CHOPPER_CAM"))
			{
				unk_0x91523366B2FDCD40("SOL_3_CHOPPER_CAM");
			}
			unk_0xCC18B241D266EF14(iLocal_3219, "Trevor_4_747_TV", 0, 1);
			iLocal_3365[2] = 1;
		}
		func_243(1, 1, 30, 5, 0);
		if (iLocal_3354 == 0)
		{
			unk_0xA4F3B84032D46C13(uLocal_3293, "SET_TEXT");
			func_242("TRV4_NEWS1");
			func_242("");
			unk_0xFF141057ED7B4C73();
			iLocal_3354 = 1;
		}
		if (iLocal_3355 == 0)
		{
			unk_0xA4F3B84032D46C13(uLocal_3293, "SET_SCROLL_TEXT");
			unk_0x73B039A1CD485226(1f);
			unk_0x73B039A1CD485226(0f);
			func_242("TRV4_NEWS2");
			unk_0xFF141057ED7B4C73();
			unk_0xA4F3B84032D46C13(uLocal_3293, "SET_SCROLL_TEXT");
			unk_0x73B039A1CD485226(0f);
			unk_0x73B039A1CD485226(0f);
			func_242("TRV4_NEWS6");
			unk_0xFF141057ED7B4C73();
			unk_0xA4F3B84032D46C13(uLocal_3293, "SET_SCROLL_TEXT");
			unk_0x73B039A1CD485226(0f);
			unk_0x73B039A1CD485226(1f);
			func_242("TRV4_NEWS7");
			unk_0xFF141057ED7B4C73();
			unk_0xA4F3B84032D46C13(uLocal_3293, "SET_SCROLL_TEXT");
			unk_0x73B039A1CD485226(0f);
			unk_0x73B039A1CD485226(2f);
			func_242("TRV4_NEWS8");
			unk_0xFF141057ED7B4C73();
			unk_0xA4F3B84032D46C13(uLocal_3293, "SET_SCROLL_TEXT");
			unk_0x73B039A1CD485226(0f);
			unk_0x73B039A1CD485226(3f);
			func_242("TRV4_NEWS9");
			unk_0xFF141057ED7B4C73();
			unk_0xA4F3B84032D46C13(uLocal_3293, "SET_SCROLL_TEXT");
			unk_0x73B039A1CD485226(0f);
			unk_0x73B039A1CD485226(4f);
			func_242("TRV4_NEWS10");
			unk_0xFF141057ED7B4C73();
			unk_0xA4F3B84032D46C13(uLocal_3293, "DISPLAY_SCROLL_TEXT");
			unk_0x73B039A1CD485226(1f);
			unk_0x73B039A1CD485226(0f);
			unk_0xFF141057ED7B4C73();
			iLocal_3201 = (unk_0x9D40BBF80D8F5E8A() - 5000);
			iLocal_3355 = 1;
		}
		if (unk_0x9D40BBF80D8F5E8A() > iLocal_3201 + 5000)
		{
			func_241();
			iLocal_3201 = unk_0x9D40BBF80D8F5E8A();
		}
		if (iLocal_3356 == 0)
		{
			if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
			{
				if (unk_0x05BA2AC20921A37E(iLocal_3258))
				{
					if (unk_0x97DF87DF18B03512(iLocal_3258) > 25000f && unk_0x97DF87DF18B03512(iLocal_3258) < 50000f)
					{
						unk_0xA4F3B84032D46C13(uLocal_3293, "SET_SCROLL_TEXT");
						unk_0x73B039A1CD485226(1f);
						unk_0x73B039A1CD485226(1f);
						func_242("TRV4_NEWS5");
						unk_0xFF141057ED7B4C73();
						unk_0xA4F3B84032D46C13(uLocal_3293, "DISPLAY_SCROLL_TEXT");
						unk_0x73B039A1CD485226(1f);
						unk_0x73B039A1CD485226(1f);
						unk_0xFF141057ED7B4C73();
						iLocal_3356 = 1;
					}
				}
			}
		}
		if (iLocal_3357 == 0)
		{
			if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
			{
				if (unk_0x05BA2AC20921A37E(iLocal_3258))
				{
					if (unk_0x97DF87DF18B03512(iLocal_3258) > 77600f && unk_0x97DF87DF18B03512(iLocal_3258) < 115000f)
					{
						unk_0xA4F3B84032D46C13(uLocal_3293, "SET_SCROLL_TEXT");
						unk_0x73B039A1CD485226(1f);
						unk_0x73B039A1CD485226(2f);
						func_242("TRV4_NEWS3");
						unk_0xFF141057ED7B4C73();
						unk_0xA4F3B84032D46C13(uLocal_3293, "DISPLAY_SCROLL_TEXT");
						unk_0x73B039A1CD485226(1f);
						unk_0x73B039A1CD485226(2f);
						unk_0xFF141057ED7B4C73();
						iLocal_3357 = 1;
					}
				}
			}
		}
		if (iLocal_3358 == 0)
		{
			if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
			{
				if (unk_0x05BA2AC20921A37E(iLocal_3258))
				{
					if (unk_0x97DF87DF18B03512(iLocal_3258) > 115000f)
					{
						unk_0xA4F3B84032D46C13(uLocal_3293, "SET_SCROLL_TEXT");
						unk_0x73B039A1CD485226(1f);
						unk_0x73B039A1CD485226(3f);
						func_242("TRV4_NEWS4");
						unk_0xFF141057ED7B4C73();
						unk_0xA4F3B84032D46C13(uLocal_3293, "DISPLAY_SCROLL_TEXT");
						unk_0x73B039A1CD485226(1f);
						unk_0x73B039A1CD485226(3f);
						unk_0xFF141057ED7B4C73();
						iLocal_3358 = 1;
					}
				}
			}
		}
		unk_0xFEC09A9FB6A5B7D4(uLocal_3184);
		unk_0xE2B331FD5EEF4684(uLocal_3293, 255, 255, 255, 0, 0);
		if (iLocal_3336 == 0)
		{
			func_196(1, 1, 1, 0);
			unk_0x657EEE601EEC4152(uLocal_3289, "ROAD_VIBRATION_SHAKE", 1f);
			unk_0x63498CF6CF35C6A2(uLocal_3289, 1);
			unk_0x538689EF05955EF7(true, 0, 3000, 1, 0, 0);
			unk_0xA8010B7497A9230B(0);
			unk_0x7BB1D0BBB1E5E5A7(unk_0x3F80C6638E3A1A90());
			func_240();
			iLocal_3336 = 1;
		}
		func_238();
		unk_0x1B7A773B18DF3DB0(6);
		unk_0x1B7A773B18DF3DB0(7);
		unk_0x1B7A773B18DF3DB0(8);
		unk_0x1B7A773B18DF3DB0(9);
		unk_0x1B7A773B18DF3DB0(1);
		unk_0x1B7A773B18DF3DB0(2);
		unk_0x1B7A773B18DF3DB0(15);
		unk_0x1B7A773B18DF3DB0(3);
		unk_0x8CCCC48313B0F20F(0, 85, 1);
		unk_0x19A78B976FE53AD5(0);
	}
	else if (iLocal_3336)
	{
		func_196(0, 1, 1, 0);
		unk_0x63498CF6CF35C6A2(uLocal_3289, 0);
		unk_0x538689EF05955EF7(false, 0, 3000, 1, 0, 0);
		unk_0xA8010B7497A9230B(1);
		if (unk_0x64C1636D480771D9("SOL_3_CHOPPER_CAM"))
		{
			unk_0x61B624BA2305D0E5("SOL_3_CHOPPER_CAM");
		}
		unk_0x3948245C8BD5EDA0(iLocal_3219);
		func_216();
		unk_0x19A78B976FE53AD5(1);
		iLocal_3365[2] = 0;
		iLocal_3336 = 0;
	}
}

void func_238()
{
	unk_0x02FBF8551A36D88F();
	func_239();
}

void func_239()
{
	Global_17118.f_134 = 1;
}

void func_240()
{
	Global_55585 = 1;
}

void func_241()
{
	if (iLocal_3186 > 4)
	{
		iLocal_3186 = 0;
	}
	unk_0xA4F3B84032D46C13(uLocal_3293, "DISPLAY_SCROLL_TEXT");
	unk_0x43C93E686A1E92C5(0);
	unk_0x43C93E686A1E92C5(iLocal_3186);
	unk_0xFF141057ED7B4C73();
	iLocal_3186++;
}

void func_242(char* sParam0)
{
	unk_0x33D37B75FC2BCC8C(sParam0);
	unk_0x057886C01DDC535D();
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
			if (iLocal_50 <= 225 && iLocal_44 == 0)
			{
				iLocal_50 += 30;
				if (iLocal_50 >= 225)
				{
					iLocal_44 = 1;
				}
			}
			else if (iLocal_50 >= 30)
			{
				iLocal_50 = (iLocal_50 - 30);
				if (iLocal_50 <= 30)
				{
					iLocal_44 = 0;
				}
			}
		}
		func_250(1, 200);
		if (iLocal_48 <= iParam2 && iLocal_43 == 0)
		{
			iLocal_48++;
			func_247(1, iLocal_48);
			if (iLocal_48 == iParam2)
			{
				iLocal_43 = 1;
				iLocal_49 = unk_0x0ADD324BC46177EF(iParam3, iParam2);
			}
		}
		else if (iLocal_48 > 0)
		{
			if (iLocal_48 > iLocal_49)
			{
				iLocal_48 = (iLocal_48 - 1);
				func_247(1, iLocal_48);
				if (iLocal_48 == iLocal_49)
				{
					iLocal_43 = 0;
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
				unk_0xFE6A5236E50BDF64("digitalOverlay", "nscuzz1", 0.5f, fLocal_51, 1f, 0.2f, 0f, 255, 255, 255, iParam1, 0);
			}
			if (fLocal_51 < 1f)
			{
				fLocal_51 = (fLocal_51 + 0.01f);
			}
			else
			{
				fLocal_51 = 0f;
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
				unk_0xFE6A5236E50BDF64("digitalOverlay", "nscuzz2", 0.5f, fLocal_52, 1f, 0.2f, 0f, 255, 255, 255, iParam1, 0);
			}
			if (fLocal_52 < 1f)
			{
				fLocal_52 = (fLocal_52 + 0.02f);
			}
			else
			{
				fLocal_52 = 0f;
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
				unk_0xFE6A5236E50BDF64("digitalOverlay", "nscuzz3", 0.5f, fLocal_53, 1f, 0.2f, 0f, 255, 255, 255, iParam1, 0);
			}
			if (fLocal_53 < 1f)
			{
				fLocal_53 = (fLocal_53 + 0.028f);
			}
			else
			{
				fLocal_53 = 0f;
			}
		}
	}
}

void func_245(int iParam0)
{
	if (iParam0 < 32)
	{
		unk_0x9956FB0E4B50ECB8(&iLocal_54, iParam0);
	}
}

int func_246(int iParam0)
{
	if (unk_0xB519E5386FBF69E5(iLocal_54, iParam0))
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
		iLocal_46 = func_249(5);
		iLocal_45 = unk_0x0ADD324BC46177EF(0, 4);
		while (iLocal_47 == iLocal_46)
		{
			iLocal_46 = func_249(5);
		}
		if (iLocal_46 == 0)
		{
			if (!func_246(3))
			{
				func_245(3);
			}
			else
			{
				unk_0xFE6A5236E50BDF64("digitalOverlay", "Static1", 0.5f, 0.5f, (1f * func_248(bLocal_40)), (1f * func_248(bLocal_41)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_46 == 1)
		{
			if (!func_246(4))
			{
				func_245(4);
			}
			else
			{
				unk_0xFE6A5236E50BDF64("digitalOverlay", "Static2", 0.5f, 0.5f, (1f * func_248(bLocal_40)), (1f * func_248(bLocal_41)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_46 == 2)
		{
			if (!func_246(5))
			{
				func_245(5);
			}
			else
			{
				unk_0xFE6A5236E50BDF64("digitalOverlay", "Static3", 0.5f, 0.5f, (1f * func_248(bLocal_40)), (1f * func_248(bLocal_41)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_46 == 3)
		{
			if (!func_246(6))
			{
				func_245(6);
			}
			else
			{
				unk_0xFE6A5236E50BDF64("digitalOverlay", "Static4", 0.5f, 0.5f, (1f * func_248(bLocal_40)), (1f * func_248(bLocal_41)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_46 == 4)
		{
			if (!func_246(7))
			{
				func_245(7);
			}
			else
			{
				unk_0xFE6A5236E50BDF64("digitalOverlay", "Static5", 0.5f, 0.5f, (1f * func_248(bLocal_40)), (1f * func_248(bLocal_41)), 0f, 255, 255, 255, iParam1, 0);
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
	if (unk_0x0ADD324BC46177EF(0, 50) > 25)
	{
		bLocal_40 = true;
	}
	else
	{
		bLocal_40 = false;
	}
	if (unk_0x0ADD324BC46177EF(0, 50) > 25)
	{
		bLocal_41 = true;
	}
	else
	{
		bLocal_41 = false;
	}
	return unk_0x0ADD324BC46177EF(0, iParam0);
}

void func_250(bool bParam0, int iParam1)
{
	if (!func_251())
	{
		func_251();
	}
	else if (bParam0)
	{
		if (iLocal_42)
		{
			if (!func_246(8))
			{
				func_245(8);
			}
			else
			{
				unk_0xFE6A5236E50BDF64("digitalOverlay", "nscanline1", 0.5f, 0.5f, 1f, 1f, 0f, 255, 255, 255, iParam1, 0);
			}
			iLocal_42 = 0;
		}
		else
		{
			if (!func_246(8))
			{
				func_245(8);
			}
			else
			{
				unk_0xFE6A5236E50BDF64("digitalOverlay", "nscanline1", 0.5f, 0.5f, -1f, -1f, 0f, 255, 255, 255, iParam1, 0);
			}
			iLocal_42 = 1;
		}
	}
}

int func_251()
{
	unk_0xDF7D4AE1A984CEF7("digitalOverlay", 0);
	if (unk_0x0B4924B3F0DADDD1("digitalOverlay"))
	{
		return 1;
	}
	return 0;
}

int func_252(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x9D40BBF80D8F5E8A() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
				{
					if (func_258(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9D40BBF80D8F5E8A();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_257(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9D40BBF80D8F5E8A();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_257(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9D40BBF80D8F5E8A();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_258(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9D40BBF80D8F5E8A();
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
			if ((unk_0x9D40BBF80D8F5E8A() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
					{
						if (!func_258(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x9D40BBF80D8F5E8A();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_257(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9D40BBF80D8F5E8A();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_257(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9D40BBF80D8F5E8A();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_258(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9D40BBF80D8F5E8A();
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
				if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
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
				if (!func_257(bParam1, bParam2, bParam3) || unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1) || unk_0xA93197082225A470(unk_0xE7869D5D7816A9B6(), 2))
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
			if ((unk_0x9D40BBF80D8F5E8A() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
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
					if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1) || func_254(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1) || unk_0xA93197082225A470(unk_0xE7869D5D7816A9B6(), 2))
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
	unk_0x9956FB0E4B50ECB8(&Global_2284, 4);
}

int func_254(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_265(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		if (!unk_0x21E4A126B001732E(unk_0x3F80C6638E3A1A90()))
		{
			unk_0x8CCCC48313B0F20F(0, 140, 1);
			unk_0x8CCCC48313B0F20F(0, 80, 1);
			if (unk_0x8B4FAB242D8FEF11(0, 80))
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
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		unk_0x8CCCC48313B0F20F(0, 80, 1);
		if (unk_0xAB629695087578E9())
		{
			if (unk_0x8B4FAB242D8FEF11(0, 80))
			{
				unk_0x1B8E0930AB96444B(0);
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
		if (uParam0->f_2 + iVar0) > unk_0x9D40BBF80D8F5E8A()
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
	if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		if (!unk_0x21E4A126B001732E(unk_0x3F80C6638E3A1A90()))
		{
			unk_0x8CCCC48313B0F20F(0, 140, 1);
			unk_0x8CCCC48313B0F20F(0, 80, 1);
			if (unk_0x2E080842BD1CBD38(0, 80) && unk_0x9D40BBF80D8F5E8A() > Global_116)
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
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		unk_0x8CCCC48313B0F20F(0, 80, 1);
		if (unk_0xAB629695087578E9())
		{
			if (unk_0x2E080842BD1CBD38(0, 80) && unk_0x9D40BBF80D8F5E8A() > Global_116)
			{
				unk_0x1B8E0930AB96444B(0);
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
		if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
		{
			unk_0x9956FB0E4B50ECB8(&Global_2284, 16);
		}
		Global_14413.f_1 = 1;
		if (func_262(0))
		{
			func_260(0);
		}
	}
	else if (Global_14413.f_1 == 1)
	{
		if (!Global_14413.f_1 == 0)
		{
			Global_14413.f_1 = 3;
		}
	}
}

void func_260(int iParam0)
{
	if (Global_14571)
	{
		func_261(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x9956FB0E4B50ECB8(&Global_2284, 16);
	}
	if (unk_0xD6F17BA188A65E8F())
	{
		unk_0xDA09A6E60FE9645E(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x9956FB0E4B50ECB8(&Global_2283, 30);
	}
	else
	{
		unk_0x73817D396768E4C6(&Global_2283, 30);
	}
	if (!func_197())
	{
		Global_14413.f_1 = 3;
	}
}

void func_261(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_262(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0x2EA67F1118848733(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xD61764696C2259C9(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xD61764696C2259C9(Global_14350);
		}
		else
		{
			unk_0xD61764696C2259C9(Global_14341);
		}
	}
}

int func_262(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xB519E5386FBF69E5(Global_2283, 14))
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
	if (unk_0xFF6891E21E7FC193(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_263()
{
	if (Global_14413.f_1 == 9 || Global_14413.f_1 == 10)
	{
		Global_15765 = 0;
		Global_15761 = 1;
	}
}

void func_264(char* sParam0, int iParam1)
{
	unk_0xCAFBB15049416379(sParam0);
	unk_0x7CBFB87C647743C3(0, 0, 1, iParam1);
}

int func_265(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x4844BC1882594FDB(unk_0x3F80C6638E3A1A90()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xF478777FFCC96862())
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
	if (unk_0x29C4AA4F29B1E539())
	{
		return 0;
	}
	if (Global_67887)
	{
		return 0;
	}
	if (unk_0xFF6891E21E7FC193(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_52760)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
		{
			if (unk_0x8AA6E648EA73FF4C(unk_0xE7869D5D7816A9B6()))
			{
				if (unk_0x08EE17D4722097C7(3) == 3 || unk_0x08EE17D4722097C7(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x523C6F050AF90E4F(unk_0xE7869D5D7816A9B6()))
			{
				if (unk_0x08EE17D4722097C7(6) == 3 || unk_0x08EE17D4722097C7(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8BFF7CA791EED675(unk_0xE7869D5D7816A9B6()))
			{
				if (unk_0x08EE17D4722097C7(4) == 3 || unk_0x08EE17D4722097C7(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x32C78E85F7C35A47(unk_0xE7869D5D7816A9B6()))
			{
				if (unk_0x08EE17D4722097C7(5) == 3 || unk_0x08EE17D4722097C7(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x83A7252D14019A24(unk_0xE7869D5D7816A9B6()))
			{
				if (unk_0x08EE17D4722097C7(2) == 3 || unk_0x08EE17D4722097C7(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x96A11F2A7C8A4DB5() == 3 || unk_0x96A11F2A7C8A4DB5() == 4)
			{
				return 0;
			}
			if (unk_0x55B32F062B30EC90())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_266()
{
	return unk_0x9D40BBF80D8F5E8A() <= Global_17257.f_5666 + 100;
}

void func_267(var uParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x76B2D234F1895632(iParam1))
	{
		if (unk_0x05BA2AC20921A37E(iParam1))
		{
			unk_0xEB35A2486E0DCF8F(iParam1, fParam2);
			Var0 = { unk_0x1141852D07400777(iParam1, 1) };
			Var3 = { unk_0x18AD8448B5C85E6D(iParam1, 2) };
			unk_0x34F8B34A8E9D3B57(uParam0, Var0);
			unk_0x3B330DB318EF2761(uParam0, Var3, 2);
		}
	}
}

void func_268(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	if (!unk_0x76B2D234F1895632(iParam1))
	{
		unk_0x60365B5AF8BF1FFA(iParam1, 0, 0);
		unk_0x70EE8EFEE355AD29(iParam1, 0, 0);
		unk_0x2EF7A8CB89D363F6(iParam1, 1);
		unk_0xD39141689169EF06(iParam1, 1, 1, 1, 1, 1, 0, 0, 0);
		unk_0x23F0735A27D6F6B3(iParam1, iParam3, sParam2, 1);
		Var0 = { unk_0x1141852D07400777(iParam1, 1) };
		unk_0x34F8B34A8E9D3B57(uParam0, Var0);
		unk_0x3B330DB318EF2761(uParam0, unk_0x18AD8448B5C85E6D(iParam1, 2), 2);
	}
}

void func_269()
{
	if (iLocal_3218 != -1)
	{
		if (iLocal_3389 == 1)
		{
			if (iLocal_3381 == 0)
			{
				unk_0x9B51AF2075B026EA(iLocal_3218);
				iLocal_3391 = 0;
				iLocal_3381 = 1;
			}
		}
	}
	if (iLocal_3213 != -1)
	{
		if (iLocal_3385 == 1)
		{
			if (iLocal_3383 == 0)
			{
				unk_0x9B51AF2075B026EA(iLocal_3213);
				iLocal_3392 = 0;
				iLocal_3383 = 1;
			}
		}
	}
	if (iLocal_3214 != -1)
	{
		if (iLocal_3390 == 1)
		{
			if (iLocal_3372 == 0)
			{
				unk_0x9B51AF2075B026EA(iLocal_3214);
				iLocal_3393 = 0;
				iLocal_3372 = 1;
			}
		}
	}
	if (iLocal_3215 != -1)
	{
		if (iLocal_3386 == 1)
		{
			if (iLocal_3382 == 0)
			{
				unk_0x9B51AF2075B026EA(iLocal_3215);
				iLocal_3394 = 0;
				iLocal_3382 = 1;
			}
		}
	}
	if (iLocal_3216 != -1)
	{
		if (iLocal_3387 == 1)
		{
			if (iLocal_3384 == 0)
			{
				unk_0x9B51AF2075B026EA(iLocal_3216);
				iLocal_3395 = 0;
				iLocal_3384 = 1;
			}
		}
	}
}

void func_270()
{
	if (unk_0xD51CFE69539DB6D8(iLocal_3121[19]))
	{
		if (!unk_0x76B2D234F1895632(iLocal_3121[19]))
		{
			if (!unk_0xB24099FCD7E05D26(iLocal_3121[19]))
			{
				unk_0x821446383BC10D9B(iLocal_3121[19], 1);
			}
		}
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3121[7]))
	{
		if (!unk_0x76B2D234F1895632(iLocal_3121[7]))
		{
			if (!unk_0xB24099FCD7E05D26(iLocal_3121[7]))
			{
				unk_0x821446383BC10D9B(iLocal_3121[7], 1);
			}
		}
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3121[8]))
	{
		if (!unk_0x76B2D234F1895632(iLocal_3121[8]))
		{
			if (!unk_0xB24099FCD7E05D26(iLocal_3121[8]))
			{
				unk_0x821446383BC10D9B(iLocal_3121[8], 1);
			}
		}
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3121[9]))
	{
		if (!unk_0x76B2D234F1895632(iLocal_3121[9]))
		{
			if (!unk_0xB24099FCD7E05D26(iLocal_3121[9]))
			{
				unk_0x821446383BC10D9B(iLocal_3121[9], 1);
			}
		}
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3121[10]))
	{
		if (!unk_0x76B2D234F1895632(iLocal_3121[10]))
		{
			if (!unk_0xB24099FCD7E05D26(iLocal_3121[10]))
			{
				unk_0x821446383BC10D9B(iLocal_3121[10], 1);
			}
		}
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3121[11]))
	{
		if (!unk_0x76B2D234F1895632(iLocal_3121[11]))
		{
			if (!unk_0xB24099FCD7E05D26(iLocal_3121[11]))
			{
				unk_0x821446383BC10D9B(iLocal_3121[11], 1);
			}
		}
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3121[13]))
	{
		if (!unk_0x76B2D234F1895632(iLocal_3121[13]))
		{
			if (!unk_0xB24099FCD7E05D26(iLocal_3121[13]))
			{
				unk_0x821446383BC10D9B(iLocal_3121[13], 1);
			}
		}
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3121[14]))
	{
		if (!unk_0x76B2D234F1895632(iLocal_3121[14]))
		{
			if (!unk_0xB24099FCD7E05D26(iLocal_3121[14]))
			{
				unk_0x821446383BC10D9B(iLocal_3121[14], 1);
			}
		}
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3121[15]))
	{
		if (!unk_0x76B2D234F1895632(iLocal_3121[15]))
		{
			if (!unk_0xB24099FCD7E05D26(iLocal_3121[15]))
			{
				unk_0x821446383BC10D9B(iLocal_3121[15], 1);
			}
		}
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3121[16]))
	{
		if (!unk_0x76B2D234F1895632(iLocal_3121[16]))
		{
			if (!unk_0xB24099FCD7E05D26(iLocal_3121[16]))
			{
				unk_0x821446383BC10D9B(iLocal_3121[16], 1);
			}
		}
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3121[17]))
	{
		if (!unk_0x76B2D234F1895632(iLocal_3121[17]))
		{
			if (!unk_0xB24099FCD7E05D26(iLocal_3121[17]))
			{
				unk_0x821446383BC10D9B(iLocal_3121[17], 1);
			}
		}
	}
}

void func_271()
{
	if (func_302())
	{
		fLocal_3324 = 0.5f;
	}
	else if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		if (unk_0x94DAC33E95329409(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0)) > 40f)
		{
			fLocal_3324 = 0.85f;
		}
		else
		{
			fLocal_3324 = 0.9f;
		}
	}
	else
	{
		fLocal_3324 = 0.9f;
	}
	if (!unk_0x76B2D234F1895632(iLocal_3258))
	{
		if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
		{
			if (unk_0x05BA2AC20921A37E(iLocal_3258))
			{
				if (iLocal_3359 == 0)
				{
					if (unk_0x97DF87DF18B03512(iLocal_3258) < 10000f)
					{
						if (func_16(unk_0xE7869D5D7816A9B6(), iLocal_3258, 1) < 100f || unk_0xD525F9D50CBB6A5D(iLocal_3258))
						{
							func_298(iLocal_3258, unk_0xE7869D5D7816A9B6(), &fLocal_3323, 1f, 40f, 55f, 100f, 1.7f, 1f, fLocal_3324, 0);
							unk_0xEB35A2486E0DCF8F(iLocal_3258, fLocal_3323);
							func_272(iLocal_3258, fLocal_3323);
						}
						else
						{
							func_298(iLocal_3258, unk_0xE7869D5D7816A9B6(), &fLocal_3323, 0.6f, 40f, 50f, 60f, 1.7f, 1f, fLocal_3324, 0);
							unk_0xEB35A2486E0DCF8F(iLocal_3258, fLocal_3323);
							func_272(iLocal_3258, fLocal_3323);
						}
					}
				}
				else if (func_16(unk_0xE7869D5D7816A9B6(), iLocal_3258, 1) > 175f)
				{
					fLocal_3323 = 0.6f;
					unk_0xEB35A2486E0DCF8F(iLocal_3258, fLocal_3323);
					func_272(iLocal_3258, fLocal_3323);
				}
				else if (unk_0x97DF87DF18B03512(iLocal_3258) < 10000f)
				{
					func_298(iLocal_3258, unk_0xE7869D5D7816A9B6(), &fLocal_3323, 1f, 25f, 40f, 180f, 1.7f, 1f, fLocal_3324, 0);
					unk_0xEB35A2486E0DCF8F(iLocal_3258, fLocal_3323);
					func_272(iLocal_3258, fLocal_3323);
				}
				if (unk_0x97DF87DF18B03512(iLocal_3258) > 10000f && unk_0x97DF87DF18B03512(iLocal_3258) < 23000f)
				{
					if (unk_0xC45A34912542C4EB(iLocal_3121[8], 0))
					{
						func_298(iLocal_3121[8], unk_0xE7869D5D7816A9B6(), &fLocal_3323, 1f, 25f, 30f, 50f, 1.7f, 0.5f, fLocal_3324, 1);
						unk_0xEB35A2486E0DCF8F(iLocal_3258, fLocal_3323);
						func_272(iLocal_3258, fLocal_3323);
					}
					else
					{
						func_298(iLocal_3258, unk_0xE7869D5D7816A9B6(), &fLocal_3323, 1f, 25f, 35f, 180f, 1.7f, 0.5f, fLocal_3324, 1);
						unk_0xEB35A2486E0DCF8F(iLocal_3258, fLocal_3323);
						func_272(iLocal_3258, fLocal_3323);
					}
				}
				if (unk_0x97DF87DF18B03512(iLocal_3258) > 23000f && unk_0x97DF87DF18B03512(iLocal_3258) < 32000f)
				{
					if (unk_0xD51CFE69539DB6D8(iLocal_3121[7]))
					{
						if (unk_0xC45A34912542C4EB(iLocal_3121[7], 0))
						{
							func_298(iLocal_3121[7], unk_0xE7869D5D7816A9B6(), &fLocal_3323, 1f, 20f, 30f, 100f, 1.8f, 1f, fLocal_3324, 0);
							unk_0xEB35A2486E0DCF8F(iLocal_3258, fLocal_3323);
							func_272(iLocal_3258, fLocal_3323);
						}
						else if (unk_0xD51CFE69539DB6D8(iLocal_3121[8]))
						{
							if (unk_0xC45A34912542C4EB(iLocal_3121[8], 0))
							{
								func_298(iLocal_3121[8], unk_0xE7869D5D7816A9B6(), &fLocal_3323, 1f, 10f, 20f, 40f, 1.8f, 1f, fLocal_3324, 0);
								unk_0xEB35A2486E0DCF8F(iLocal_3258, fLocal_3323);
								func_272(iLocal_3258, fLocal_3323);
							}
							else
							{
								func_298(iLocal_3258, unk_0xE7869D5D7816A9B6(), &fLocal_3323, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3324, 0);
								unk_0xEB35A2486E0DCF8F(iLocal_3258, fLocal_3323);
								func_272(iLocal_3258, fLocal_3323);
							}
						}
						else
						{
							func_298(iLocal_3258, unk_0xE7869D5D7816A9B6(), &fLocal_3323, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3324, 0);
							unk_0xEB35A2486E0DCF8F(iLocal_3258, fLocal_3323);
							func_272(iLocal_3258, fLocal_3323);
						}
					}
					else if (unk_0xD51CFE69539DB6D8(iLocal_3121[8]))
					{
						if (unk_0xC45A34912542C4EB(iLocal_3121[8], 0))
						{
							func_298(iLocal_3121[8], unk_0xE7869D5D7816A9B6(), &fLocal_3323, 1f, 10f, 20f, 40f, 1.8f, 1f, fLocal_3324, 0);
							unk_0xEB35A2486E0DCF8F(iLocal_3258, fLocal_3323);
							func_272(iLocal_3258, fLocal_3323);
						}
						else
						{
							func_298(iLocal_3258, unk_0xE7869D5D7816A9B6(), &fLocal_3323, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3324, 0);
							unk_0xEB35A2486E0DCF8F(iLocal_3258, fLocal_3323);
							func_272(iLocal_3258, fLocal_3323);
						}
					}
					else
					{
						func_298(iLocal_3258, unk_0xE7869D5D7816A9B6(), &fLocal_3323, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3324, 0);
						unk_0xEB35A2486E0DCF8F(iLocal_3258, fLocal_3323);
						func_272(iLocal_3258, fLocal_3323);
					}
				}
				if (unk_0x97DF87DF18B03512(iLocal_3258) > 32000f && unk_0x97DF87DF18B03512(iLocal_3258) < 39000f)
				{
					if (unk_0xD51CFE69539DB6D8(iLocal_3121[7]))
					{
						if (unk_0xC45A34912542C4EB(iLocal_3121[7], 0))
						{
							func_298(iLocal_3121[7], unk_0xE7869D5D7816A9B6(), &fLocal_3323, 1f, 22f, 25f, 100f, 1.8f, 0.5f, fLocal_3324, 1);
							unk_0xEB35A2486E0DCF8F(iLocal_3258, fLocal_3323);
							func_272(iLocal_3258, fLocal_3323);
						}
						else
						{
							func_298(iLocal_3258, unk_0xE7869D5D7816A9B6(), &fLocal_3323, 1f, 25f, 35f, 150f, 1.8f, 0.5f, fLocal_3324, 1);
							unk_0xEB35A2486E0DCF8F(iLocal_3258, fLocal_3323);
							func_272(iLocal_3258, fLocal_3323);
						}
					}
					else
					{
						func_298(iLocal_3258, unk_0xE7869D5D7816A9B6(), &fLocal_3323, 1f, 25f, 35f, 150f, 1.8f, 0.5f, fLocal_3324, 1);
						unk_0xEB35A2486E0DCF8F(iLocal_3258, fLocal_3323);
						func_272(iLocal_3258, fLocal_3323);
					}
				}
				if (unk_0x97DF87DF18B03512(iLocal_3258) > 39000f && unk_0x97DF87DF18B03512(iLocal_3258) < 56000f)
				{
					if (unk_0xC45A34912542C4EB(iLocal_3121[8], 0))
					{
						func_298(iLocal_3121[8], unk_0xE7869D5D7816A9B6(), &fLocal_3323, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3324, 0);
						unk_0xEB35A2486E0DCF8F(iLocal_3258, fLocal_3323);
						func_272(iLocal_3258, fLocal_3323);
					}
					else
					{
						func_298(iLocal_3258, unk_0xE7869D5D7816A9B6(), &fLocal_3323, 1f, 25f, 35f, 150f, 1.8f, 1f, fLocal_3324, 0);
						unk_0xEB35A2486E0DCF8F(iLocal_3258, fLocal_3323);
						func_272(iLocal_3258, fLocal_3323);
					}
				}
				if (unk_0x97DF87DF18B03512(iLocal_3258) > 56000f && unk_0x97DF87DF18B03512(iLocal_3258) < 65000f)
				{
					if (unk_0xC45A34912542C4EB(iLocal_3121[11], 0))
					{
						func_298(iLocal_3121[11], unk_0xE7869D5D7816A9B6(), &fLocal_3323, 1f, 25f, 30f, 100f, 1.8f, 1f, fLocal_3324, 0);
						unk_0xEB35A2486E0DCF8F(iLocal_3258, fLocal_3323);
						func_272(iLocal_3258, fLocal_3323);
					}
					else
					{
						func_298(iLocal_3258, unk_0xE7869D5D7816A9B6(), &fLocal_3323, 1f, 25f, 35f, 100f, 1.8f, 1f, fLocal_3324, 0);
						unk_0xEB35A2486E0DCF8F(iLocal_3258, fLocal_3323);
						func_272(iLocal_3258, fLocal_3323);
					}
				}
				if (unk_0x97DF87DF18B03512(iLocal_3258) > 65000f && unk_0x97DF87DF18B03512(iLocal_3258) < 90000f)
				{
					if (unk_0xD51CFE69539DB6D8(iLocal_3121[13]))
					{
						if (unk_0xC45A34912542C4EB(iLocal_3121[13], 0))
						{
							func_298(iLocal_3121[13], unk_0xE7869D5D7816A9B6(), &fLocal_3323, 1f, 30f, 35f, 50f, 1.8f, 1f, fLocal_3324, 0);
							unk_0xEB35A2486E0DCF8F(iLocal_3258, fLocal_3323);
							func_272(iLocal_3258, fLocal_3323);
						}
						else
						{
							func_298(iLocal_3258, unk_0xE7869D5D7816A9B6(), &fLocal_3323, 1f, 45f, 55f, 150f, 1.8f, 1f, fLocal_3324, 0);
							unk_0xEB35A2486E0DCF8F(iLocal_3258, fLocal_3323);
							func_272(iLocal_3258, fLocal_3323);
						}
					}
					else
					{
						func_298(iLocal_3258, unk_0xE7869D5D7816A9B6(), &fLocal_3323, 1f, 45f, 55f, 150f, 1.8f, 1f, fLocal_3324, 0);
						unk_0xEB35A2486E0DCF8F(iLocal_3258, fLocal_3323);
						func_272(iLocal_3258, fLocal_3323);
					}
				}
				if (unk_0x97DF87DF18B03512(iLocal_3258) > 90000f && unk_0x97DF87DF18B03512(iLocal_3258) < 110000f)
				{
					func_298(iLocal_3258, unk_0xE7869D5D7816A9B6(), &fLocal_3323, 1f, 60f, 70f, 150f, 1.5f, 0.5f, fLocal_3324, 1);
					unk_0xEB35A2486E0DCF8F(iLocal_3258, fLocal_3323);
					func_272(iLocal_3258, fLocal_3323);
				}
				if (unk_0x97DF87DF18B03512(iLocal_3258) > 110000f)
				{
					func_298(iLocal_3258, unk_0xE7869D5D7816A9B6(), &fLocal_3323, 1f, 100f, 120f, 150f, 1.6f, 1f, fLocal_3324, 0);
					unk_0xEB35A2486E0DCF8F(iLocal_3258, fLocal_3323);
					func_272(iLocal_3258, fLocal_3323);
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
	
	fVar0 = unk_0x3B75450B0AEE5786();
	fVar0 = (fVar0 * 1000f);
	bLocal_106 = false;
	if (!bLocal_88)
	{
		if (bLocal_87)
		{
			func_297();
			if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
			{
				Var1 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) };
				unk_0xB86B1248EA9B87EA(Var1, 1000f, 1, 0, 0, 0);
			}
			bLocal_88 = true;
		}
	}
	else if (!bLocal_87)
	{
		func_180();
		bLocal_88 = false;
	}
	if (bLocal_87)
	{
		fParam1 = 1f;
		unk_0x6423C366AD1DAA00(0f);
	}
	if (!bLocal_81)
	{
		if (iLocal_76)
		{
			fLocal_1278 = 0f;
		}
		else
		{
			fLocal_1278 = 1f;
		}
		if (unk_0xC45A34912542C4EB(iParam0, 0))
		{
			if (unk_0x05BA2AC20921A37E(iParam0))
			{
				if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
				{
					if (func_296(unk_0xE7869D5D7816A9B6(), iParam0))
					{
						iLocal_86 = 1;
					}
					else
					{
						iLocal_86 = 0;
					}
				}
				fLocal_1275 = unk_0x97DF87DF18B03512(iParam0);
				unk_0xEB35A2486E0DCF8F(iParam0, ((fParam1 * fLocal_1276) * fLocal_1278));
				if (bLocal_85)
				{
					func_295(iParam0, fLocal_1275);
					func_294(iParam0, fLocal_1285);
					if (fLocal_1280 > 1000f)
					{
						if (iLocal_1962 == 0)
						{
							func_293(iParam0, fLocal_1285);
						}
						fVar0 = ((fLocal_1275 + 4000f) + (unk_0xBBDA792448DB5A89(iLocal_1962) * 2000f));
						func_292(iParam0, fVar0, fLocal_1279);
						iLocal_1962++;
						if (iLocal_1962 > 2)
						{
							fLocal_1280 = 0f;
						}
					}
					else
					{
						iLocal_1962 = 0;
						fLocal_1280 = (fLocal_1280 + (unk_0x3B75450B0AEE5786() * 1000f));
					}
				}
			}
		}
		iVar4 = 0;
		if (unk_0xC45A34912542C4EB(iParam0, 0))
		{
			if (unk_0x05BA2AC20921A37E(iParam0))
			{
				iVar4 = 1;
			}
		}
		if (fLocal_1275 == 0f || unk_0xAEF17BDE274A1247())
		{
			iVar4 = 1;
		}
		if (iVar4 && !bLocal_93)
		{
			if (!iLocal_75)
			{
				func_289(iParam0, ((fParam1 * fLocal_1276) * fLocal_1278), 0);
				if (!iLocal_96)
				{
				}
				iLocal_96 = 0;
			}
			if (bLocal_78)
			{
				func_288(iParam0);
			}
			if (!iLocal_75)
			{
				func_275(iParam0, ((fParam1 * fLocal_1276) * fLocal_1278), 0);
			}
		}
		if (iLocal_83)
		{
			if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
			{
				if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
				{
					iLocal_3164 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
					Local_2641 = { unk_0x1141852D07400777(iLocal_3164, 1) };
					unk_0x43BD4837BE6F546A(iLocal_3164, &fLocal_989, &fLocal_990, &fLocal_991, &fLocal_992);
				}
			}
			iLocal_83 = 0;
		}
		if (iLocal_82)
		{
			if (unk_0xD51CFE69539DB6D8(iLocal_3164))
			{
				func_172(iLocal_3165);
				iLocal_3165 = iLocal_3164;
			}
			if (unk_0xC45A34912542C4EB(iLocal_3165, 0))
			{
				unk_0x88A973CE47FBEF95(iLocal_3165, Local_2641, 1, 0, 0, 1);
				unk_0x1F8CB81CA52CE552(iLocal_3165, fLocal_989, fLocal_990, fLocal_991, fLocal_992);
			}
			fLocal_1274 = fLocal_1277;
			iLocal_75 = 1;
			iLocal_82 = 0;
		}
		if (iLocal_75)
		{
			while (!func_273(&iParam0, fLocal_1274))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			iLocal_76 = 1;
		}
		if (iLocal_89)
		{
			iLocal_89 = 0;
		}
	}
}

int func_273(int iParam0, float fParam1)
{
	if (!iLocal_90)
	{
		iLocal_75 = 1;
		func_167();
		if (unk_0xC45A34912542C4EB(*iParam0, 0))
		{
			if (unk_0x05BA2AC20921A37E(*iParam0))
			{
				unk_0x6035B71FBC2881EC(*iParam0);
				unk_0x8C0100931D16FCD7(*iParam0);
			}
			if (!iLocal_1949 == -1)
			{
				while (!func_274(iParam0, iLocal_1949, fParam1, 1, 0, 0, 0, 0))
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				if (!bLocal_80)
				{
					iLocal_76 = 1;
					fLocal_1278 = 0f;
					iLocal_1950 = 0;
					iLocal_1952 = 0;
					iLocal_1951 = 0;
					iLocal_1946 = 0;
					iLocal_1947 = 0;
					iLocal_1948 = 0;
					iLocal_1953 = 0;
					iLocal_1954 = 0;
					iLocal_1955 = 0;
				}
			}
		}
		iLocal_90 = 1;
	}
	else
	{
		if (unk_0xC45A34912542C4EB(*iParam0, 0))
		{
			if (unk_0x05BA2AC20921A37E(*iParam0))
			{
				unk_0xEB35A2486E0DCF8F(*iParam0, ((1f * fLocal_1276) * fLocal_1278));
				func_274(iParam0, iLocal_1949, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_1275 = fParam1;
		iLocal_1956 = 0;
		iLocal_1959 = 0;
		fLocal_1290 = 0f;
		fLocal_1289 = 0f;
		func_275(*iParam0, ((1f * fLocal_1276) * fLocal_1278), 1);
		func_289(*iParam0, ((1f * fLocal_1276) * fLocal_1278), 1);
		func_288(*iParam0);
		if ((iLocal_1953 == 0 && iLocal_1954 == 0) && iLocal_1955 == 0)
		{
			iLocal_76 = 0;
			iLocal_75 = 0;
			iLocal_90 = 0;
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
		unk_0xDBDFBE5906702D9E(iParam1, &cLocal_2668);
		if (unk_0x08F84BB137ADEE81(iParam1, &cLocal_2668))
		{
			if (unk_0xC45A34912542C4EB(*uParam0, 0))
			{
				if (!unk_0x05BA2AC20921A37E(*uParam0))
				{
					unk_0x2878EC06B3F897A0(*uParam0, 0);
					if (bParam4)
					{
						unk_0x1F15ABFC77091A59(*uParam0, iParam1, &cLocal_2668, 1092616192, 786603);
					}
					else
					{
						if (iParam1 != iLocal_1957 && iParam1 != iLocal_1958)
						{
							if (bParam7)
							{
								unk_0xD7D06DA6B376A8F9(*uParam0, iParam1, &cLocal_2668, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								unk_0xD7D06DA6B376A8F9(*uParam0, iParam1, &cLocal_2668, 1 | 4, 0, 786603);
							}
							else
							{
								unk_0x23F0735A27D6F6B3(*uParam0, iParam1, &cLocal_2668, 1);
							}
						}
						else
						{
							unk_0x23F0735A27D6F6B3(*uParam0, iParam1, &cLocal_2668, 1);
						}
						unk_0x00E52220EE436481(*uParam0, fParam2);
						if (bParam5)
						{
							unk_0x46B4C9B6A12598D1(*uParam0, 1);
						}
						return 1;
					}
				}
				else if (unk_0x088A0569FB43960B(*uParam0) == unk_0x4F804572A750487C(iParam1, &cLocal_2668))
				{
					fVar0 = unk_0x97DF87DF18B03512(*uParam0);
					unk_0x00E52220EE436481(*uParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						unk_0x6035B71FBC2881EC(*uParam0);
						unk_0xDBDFBE5906702D9E(iParam1, &cLocal_2668);
					}
					if (bParam5)
					{
						unk_0x46B4C9B6A12598D1(*uParam0, 1);
					}
					return 1;
				}
				else
				{
					unk_0x6035B71FBC2881EC(*uParam0);
					unk_0x2878EC06B3F897A0(*uParam0, 0);
					if (bParam4)
					{
						unk_0x1F15ABFC77091A59(*uParam0, iParam1, &cLocal_2668, 1092616192, 786603);
					}
					else if (iParam1 != iLocal_1957 && iParam1 != iLocal_1958)
					{
						if (bParam7)
						{
							unk_0xD7D06DA6B376A8F9(*uParam0, iParam1, &cLocal_2668, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							unk_0xD7D06DA6B376A8F9(*uParam0, iParam1, &cLocal_2668, 1 | 4, 0, 786603);
						}
						else
						{
							unk_0x23F0735A27D6F6B3(*uParam0, iParam1, &cLocal_2668, 1);
						}
					}
					else
					{
						unk_0x23F0735A27D6F6B3(*uParam0, iParam1, &cLocal_2668, 1);
					}
					unk_0x00E52220EE436481(*uParam0, fParam2);
					if (bParam5)
					{
						unk_0x46B4C9B6A12598D1(*uParam0, 1);
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
	
	bVar15 = unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90());
	uVar16 = unk_0x411E10E414330982();
	uVar17 = unk_0xA422DE4024B0ADE8();
	bVar18 = false;
	if (bVar15)
	{
		if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
		{
			iVar2 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
		}
		Var9 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) };
	}
	if (unk_0xC45A34912542C4EB(iParam0, 0))
	{
		iVar0 = iLocal_1952;
		while (iVar0 < 35)
		{
			if (iLocal_1858[iVar0] != 99)
			{
				if (iLocal_1858[iVar0] == 0)
				{
					if (iLocal_1822[iVar0] > 0)
					{
						if (!iLocal_75)
						{
							if (fLocal_1275 > (fLocal_1137[iVar0] - (7000f * fParam1)))
							{
								if (func_287(iLocal_2877[iVar0]))
								{
									unk_0x9956FB0E4B50ECB8(&(iLocal_1894[iVar0]), 0);
								}
								else if (unk_0x07C6F7E084F6A97E(iLocal_2877[iVar0]))
								{
									unk_0x9956FB0E4B50ECB8(&(iLocal_1894[iVar0]), 2);
								}
								unk_0x73817D396768E4C6(&(iLocal_1894[iVar0]), 1);
								iLocal_1858[iVar0]++;
								iLocal_1954++;
							}
						}
						else
						{
							fVar12 = (fLocal_1275 - fLocal_1137[iVar0]);
							fVar12 = (fVar12 * fLocal_1173[iVar0]);
							if (fVar12 >= 0f)
							{
								if (fVar12 < func_286(iLocal_1822[iVar0]))
								{
									if (func_287(iLocal_2877[iVar0]))
									{
										unk_0x9956FB0E4B50ECB8(&(iLocal_1894[iVar0]), 0);
									}
									else if (unk_0x07C6F7E084F6A97E(iLocal_2877[iVar0]))
									{
										unk_0x9956FB0E4B50ECB8(&(iLocal_1894[iVar0]), 2);
									}
									unk_0x73817D396768E4C6(&(iLocal_1894[iVar0]), 1);
									iLocal_1858[iVar0]++;
									iLocal_1954++;
								}
								else
								{
									iLocal_1858[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_1858[iVar0] = 99;
					}
				}
				else if (iLocal_1858[iVar0] == 1)
				{
					bVar14 = false;
					unk_0xDBDFBE5906702D9E(iLocal_1822[iVar0], &cLocal_2668);
					if (unk_0xB519E5386FBF69E5(iLocal_1894[iVar0], 0))
					{
						unk_0x801429C020C467BA(func_176());
						bVar14 = unk_0x5053BF6D5604065B(func_176());
					}
					else if (!bLocal_102 && ((!unk_0xB519E5386FBF69E5(iLocal_1894[iVar0], 2) && uVar16) || (unk_0xB519E5386FBF69E5(iLocal_1894[iVar0], 2) && uVar17)))
					{
						bVar14 = true;
					}
					else
					{
						unk_0x801429C020C467BA(func_179());
						bVar14 = unk_0x5053BF6D5604065B(func_179());
					}
					if (bVar14)
					{
						if (!unk_0xD51CFE69539DB6D8(iLocal_3121[iVar0]))
						{
							unk_0x801429C020C467BA(iLocal_2877[iVar0]);
							if (unk_0x5053BF6D5604065B(iLocal_2877[iVar0]) && unk_0x08F84BB137ADEE81(iLocal_1822[iVar0], &cLocal_2668))
							{
								if (fLocal_1275 >= (fLocal_1137[iVar0] - (fLocal_1288 * fParam1)))
								{
									if ((iLocal_89 || bParam2) || (!bLocal_106 && !func_285(Local_2535[iVar0 /*3*/], Var9, 5f, fLocal_1286)))
									{
										if (bLocal_85)
										{
											func_284(Local_2535[iVar0 /*3*/], Var9, fLocal_1279);
										}
										iLocal_3121[iVar0] = unk_0xD504D1FF5DD2FFD7(iLocal_2877[iVar0], Local_2535[iVar0 /*3*/], 0f, 0, 0);
										if (iLocal_2877[iVar0] == joaat("polmav"))
										{
											unk_0xED6BC33BD669B45F(iLocal_3121[iVar0], 0);
										}
										if (uLocal_98 && !unk_0xB519E5386FBF69E5(iLocal_1894[iVar0], 0))
										{
											func_283(iLocal_3121[iVar0]);
										}
										if (unk_0xB519E5386FBF69E5(iLocal_1894[iVar0], 3))
										{
											unk_0xFD092FF761E54535(iLocal_3121[iVar0], 1);
										}
										unk_0x9CA89729A675E8FF(iLocal_3121[iVar0], Local_2535[iVar0 /*3*/], 0, 0, 1);
										unk_0x1F8CB81CA52CE552(iLocal_3121[iVar0], fLocal_993[iVar0], fLocal_1029[iVar0], fLocal_1065[iVar0], fLocal_1101[iVar0]);
										if (unk_0x3937C84F74FAABA4(iLocal_2877[iVar0]) || unk_0x07C6F7E084F6A97E(iLocal_2877[iVar0]))
										{
											unk_0xC9CEB5227A733CE6(iLocal_3121[iVar0]);
										}
										if (!unk_0xB519E5386FBF69E5(iLocal_1894[iVar0], 0))
										{
											unk_0xE9A614E9191BFB4A(iLocal_3121[iVar0], 1, 1, 0);
											if (unk_0x7C833E3C6EEE41E0() > 19 || unk_0x7C833E3C6EEE41E0() < 7)
											{
												unk_0x01A5F35B4016EFD8(iLocal_3121[iVar0], 3);
											}
										}
										unk_0x2878EC06B3F897A0(iLocal_3121[iVar0], 1);
										unk_0x839E9476E54502A2(iLocal_2877[iVar0]);
										iLocal_1954 = (iLocal_1954 - 1);
										iLocal_1858[iVar0]++;
										bLocal_106 = true;
									}
								}
							}
						}
						else if (!unk_0x76B2D234F1895632(iLocal_3121[iVar0]) && unk_0xC45A34912542C4EB(iLocal_3121[iVar0], 0))
						{
							unk_0x9CA89729A675E8FF(iLocal_3121[iVar0], Local_2535[iVar0 /*3*/], 0, 0, 1);
							unk_0x1F8CB81CA52CE552(iLocal_3121[iVar0], fLocal_993[iVar0], fLocal_1029[iVar0], fLocal_1065[iVar0], fLocal_1101[iVar0]);
							if (unk_0x3937C84F74FAABA4(iLocal_2877[iVar0]) || unk_0x07C6F7E084F6A97E(iLocal_2877[iVar0]))
							{
								unk_0xC9CEB5227A733CE6(iLocal_3121[iVar0]);
							}
							unk_0x2878EC06B3F897A0(iLocal_3121[iVar0], 1);
							unk_0x839E9476E54502A2(iLocal_2877[iVar0]);
							iLocal_1954 = (iLocal_1954 - 1);
							iLocal_1858[iVar0]++;
						}
					}
				}
				else if (iLocal_1858[iVar0] == 2)
				{
					unk_0xDBDFBE5906702D9E(iLocal_1822[iVar0], &cLocal_2668);
					if (!unk_0xB519E5386FBF69E5(iLocal_1894[iVar0], 1))
					{
						bVar14 = false;
						if (unk_0xB519E5386FBF69E5(iLocal_1894[iVar0], 0))
						{
							unk_0x801429C020C467BA(func_176());
							bVar14 = unk_0x5053BF6D5604065B(func_176());
							iVar19 = 2;
						}
						else if (!bLocal_102 && ((!unk_0xB519E5386FBF69E5(iLocal_1894[iVar0], 2) && uVar16) || (unk_0xB519E5386FBF69E5(iLocal_1894[iVar0], 2) && uVar17)))
						{
							bVar14 = true;
							iVar19 = 1;
						}
						else
						{
							unk_0x801429C020C467BA(func_179());
							bVar14 = unk_0x5053BF6D5604065B(func_179());
							iVar19 = 0;
						}
						if (!unk_0x76B2D234F1895632(iLocal_3121[iVar0]))
						{
							if (!bLocal_106 && unk_0xD12071DBE8393EC8(iLocal_3121[iVar0], -1))
							{
								if (bVar14)
								{
									if ((unk_0xB7A628320EFF8E47(unk_0x1141852D07400777(iLocal_3121[iVar0], 1), Var9) < 10000f || bParam2) || iLocal_89)
									{
										func_281(&(iLocal_3121[iVar0]), iVar19, 1);
										unk_0x9956FB0E4B50ECB8(&(iLocal_1894[iVar0]), 1);
									}
								}
							}
						}
					}
					if (unk_0xC45A34912542C4EB(iLocal_3121[iVar0], 0))
					{
						if (fLocal_1275 >= fLocal_1137[iVar0])
						{
							if (14 > iLocal_1947)
							{
								fVar12 = (fLocal_1275 - fLocal_1137[iVar0]);
								fVar12 = (fVar12 * fLocal_1173[iVar0]);
								if (unk_0x08F84BB137ADEE81(iLocal_1822[iVar0], &cLocal_2668))
								{
									if (fVar12 < unk_0x686986496F16B625(iLocal_1822[iVar0], &cLocal_2668))
									{
										Var3 = { unk_0x1141852D07400777(iLocal_3121[iVar0], 1) };
										Var6 = { unk_0x628822AEBDA1B8F8(iLocal_1822[iVar0], fVar12, &cLocal_2668) };
										if (((!func_285(Var3, Var9, 5f, fLocal_1286) && func_285(Var6, Var9, 5f, fLocal_1286)) && !iLocal_89) && !bParam2)
										{
											if (!unk_0xB519E5386FBF69E5(iLocal_1894[iVar0], 1))
											{
												func_281(&(iLocal_3121[iVar0]), iVar19, 1);
											}
											iLocal_1947++;
											iLocal_1858[iVar0]++;
										}
										else if (((!bLocal_106 || unk_0xB519E5386FBF69E5(iLocal_1894[iVar0], 1)) || iLocal_89) || bParam2)
										{
											if (func_274(&(iLocal_3121[iVar0]), iLocal_1822[iVar0], fVar12, 1, 0, 0, bLocal_104, bLocal_103))
											{
												unk_0xEB35A2486E0DCF8F(iLocal_3121[iVar0], (fParam1 * fLocal_1173[iVar0]));
												if (unk_0xC45A34912542C4EB(iLocal_3121[iVar0], 0))
												{
													if (unk_0xB519E5386FBF69E5(iLocal_1894[iVar0], 0))
													{
														unk_0xE9A614E9191BFB4A(iLocal_3121[iVar0], 1, 1, 0);
														unk_0x821446383BC10D9B(iLocal_3121[iVar0], 1);
														unk_0x01A5F35B4016EFD8(iLocal_3121[iVar0], 2);
														if (!unk_0x07C6F7E084F6A97E(iLocal_2877[iVar0]))
														{
															unk_0xBF71B7FCF453800C(iLocal_3121[iVar0], 1);
														}
													}
												}
												if (!unk_0xB519E5386FBF69E5(iLocal_1894[iVar0], 1))
												{
													func_281(&(iLocal_3121[iVar0]), iVar19, 1);
												}
												iLocal_1947++;
												iLocal_1858[iVar0]++;
											}
										}
									}
									else
									{
										if (!unk_0xB519E5386FBF69E5(iLocal_1894[iVar0], 1))
										{
											func_281(&(iLocal_3121[iVar0]), iVar19, 1);
										}
										iLocal_1947++;
										iLocal_1858[iVar0]++;
									}
								}
							}
							else
							{
								if (!unk_0xB519E5386FBF69E5(iLocal_1894[iVar0], 1))
								{
									func_281(&(iLocal_3121[iVar0]), iVar19, 1);
								}
								iLocal_1947++;
								iLocal_1858[iVar0]++;
							}
						}
					}
					else
					{
						if (!unk_0xB519E5386FBF69E5(iLocal_1894[iVar0], 1))
						{
							func_281(&(iLocal_3121[iVar0]), iVar19, 1);
						}
						iLocal_1947++;
						iLocal_1858[iVar0]++;
					}
				}
				else if (iLocal_1858[iVar0] == 3)
				{
					if (unk_0xC45A34912542C4EB(iLocal_3121[iVar0], 0))
					{
						if (unk_0x05BA2AC20921A37E(iLocal_3121[iVar0]))
						{
							iVar1 = unk_0xBD6B21D725712BDE(iLocal_3121[iVar0], -1);
							if (!unk_0xAF437D7C802AB246(iVar1))
							{
								if (bVar15)
								{
									if (((!bLocal_79 && !iLocal_76) && !bLocal_95) && (((!bLocal_104 && !bLocal_103) && unk_0x3C1B1C07A878AE1D(unk_0xE7869D5D7816A9B6(), iLocal_3121[iVar0])) || func_280(iLocal_3121[iVar0])))
									{
										if (unk_0xD51CFE69539DB6D8(iVar2))
										{
											bVar14 = false;
											if (bLocal_97)
											{
												bVar14 = true;
											}
											else
											{
												fVar13 = unk_0xD4F0FC8FFEDE152B(iVar2);
												if (fVar13 < 1f)
												{
													bVar14 = true;
												}
												else if (unk_0x7F38A542899D217A((fVar13 - unk_0xD4F0FC8FFEDE152B(iLocal_3121[iVar0]))) > 15f)
												{
													bVar14 = true;
												}
												else if (!func_279(iLocal_3121[iVar0], iVar2, 45f))
												{
													bVar14 = true;
												}
												else if (func_277(iVar2, iLocal_3121[iVar0], 0))
												{
													bVar14 = true;
												}
											}
											if (bVar14)
											{
												func_276(iLocal_3121[iVar0]);
												iLocal_1858[iVar0]++;
											}
										}
									}
									else
									{
										unk_0xEB35A2486E0DCF8F(iLocal_3121[iVar0], (fParam1 * fLocal_1173[iVar0]));
									}
								}
							}
							else
							{
								unk_0x6035B71FBC2881EC(iLocal_3121[iVar0]);
							}
						}
						else
						{
							iLocal_1858[iVar0]++;
						}
					}
					else
					{
						iLocal_1858[iVar0]++;
					}
				}
				else if (iLocal_1858[iVar0] == 4)
				{
					if (unk_0xC45A34912542C4EB(iLocal_3121[iVar0], 0))
					{
						if (!unk_0x05BA2AC20921A37E(iLocal_3121[iVar0]))
						{
							iLocal_1858[iVar0]++;
						}
						else
						{
							iVar1 = unk_0xBD6B21D725712BDE(iLocal_3121[iVar0], -1);
							if (!unk_0xAF437D7C802AB246(iVar1))
							{
								unk_0xEB35A2486E0DCF8F(iLocal_3121[iVar0], (fParam1 * fLocal_1173[iVar0]));
							}
							else
							{
								unk_0x6035B71FBC2881EC(iLocal_3121[iVar0]);
							}
							if (unk_0x08F84BB137ADEE81(iLocal_1822[iVar0], &cLocal_2668))
							{
								if (fLocal_1275 > (fLocal_1137[iVar0] + unk_0x686986496F16B625(iLocal_1822[iVar0], &cLocal_2668)))
								{
									unk_0x6035B71FBC2881EC(iLocal_3121[iVar0]);
								}
							}
							else
							{
								unk_0x6035B71FBC2881EC(iLocal_3121[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1858[iVar0]++;
					}
				}
				else if (iLocal_1858[iVar0] == 5)
				{
					if (!iLocal_3121[iVar0] == iLocal_3166)
					{
						if (unk_0xC45A34912542C4EB(iLocal_3121[iVar0], 0))
						{
							iVar1 = unk_0xBD6B21D725712BDE(iLocal_3121[iVar0], -1);
							if (!unk_0xAF437D7C802AB246(iVar1))
							{
								iVar20 = unk_0xC47857E5E74EA5AF(iVar1, 242628503);
								if (iVar20 == 7)
								{
									fVar13 = unk_0xD4F0FC8FFEDE152B(iLocal_3121[iVar0]);
									if (fVar13 < 8f)
									{
										fVar13 = 8f;
									}
									if (fVar13 > 62.9f)
									{
										fVar13 = 62.9f;
									}
									unk_0x3293DD7EB0BC0756(iVar1, fVar13);
								}
							}
						}
						if (!bLocal_87 && !bLocal_100)
						{
							if (iLocal_1822[iVar0] > 0)
							{
								unk_0xFC8E26A6FE4C2E54(iLocal_1822[iVar0], &cLocal_2668);
							}
						}
						if (!bLocal_77)
						{
							if (!bLocal_105)
							{
								func_172(iLocal_3121[iVar0]);
							}
						}
						else if (unk_0xD51CFE69539DB6D8(iLocal_3121[iVar0]))
						{
							unk_0x9E55BD45B84E7BDC(&(iLocal_3121[iVar0]));
						}
					}
					iLocal_1947 = (iLocal_1947 - 1);
					iLocal_1858[iVar0] = 99;
				}
				if (!bVar18)
				{
					iLocal_1952 = iVar0;
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
	if (unk_0xC45A34912542C4EB(iParam0, 0))
	{
		func_173(iParam0);
		unk_0x649BAA01CD9AFFC1(iParam0, 786603);
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
	
	if (unk_0xC45A34912542C4EB(iParam0, 0))
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 1) };
	}
	if (unk_0xC45A34912542C4EB(iParam1, 0))
	{
		Var3 = { unk_0x1141852D07400777(iParam1, 1) };
		if (bParam2)
		{
			Var15 = { unk_0x834FF019A048DE2C(iParam1) };
			Var12 = { Var15 / FtoV(unk_0x652D2EEEF1D3E62C(Var15)) };
		}
		else
		{
			Var6 = { unk_0xBD306D8AFEF4E078(iParam1, 0f, 5f, 0f) };
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
	
	if (unk_0xC45A34912542C4EB(iParam0, 0))
	{
		Var0 = { unk_0x3BB233C973B4C0FC(iParam0, 0) };
	}
	else
	{
		return 0;
	}
	if (unk_0xC45A34912542C4EB(iParam1, 0))
	{
		Var3 = { unk_0x3BB233C973B4C0FC(iParam1, 0) };
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
	fVar6 = unk_0x36C9BE33708F029F(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1);
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
	
	if (bLocal_101)
	{
		iVar1 = unk_0xA0B1717D806F4901();
		if (!unk_0x76B2D234F1895632(iVar1))
		{
			iVar2 = unk_0x1B2DC87EFB36DF80(iVar1);
			if (iVar2 == joaat("phantom"))
			{
				if (unk_0x62A80FFAACC757A8(iVar1))
				{
					if (unk_0x3567DD6AFD1905FD(iVar1, &iVar0))
					{
						if (unk_0xC45A34912542C4EB(iVar0, 0))
						{
							if (unk_0x3C1B1C07A878AE1D(iVar0, uParam0))
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
	
	if (!unk_0x76B2D234F1895632(*uParam0))
	{
		if (unk_0xD12071DBE8393EC8(*uParam0, -1))
		{
			if (iParam1 == 2)
			{
				iVar0 = unk_0xF430A9686E704FA3(*uParam0, 6, func_176(), -1, 0, 0);
				unk_0x690C5239500171FE(iVar0, iLocal_2684);
				unk_0x839E9476E54502A2(func_176());
			}
			else if (iParam1 == 1)
			{
				iVar0 = unk_0x9B2DD4AED0B6E7E4(*uParam0, 1);
				if (unk_0x07C6F7E084F6A97E(unk_0x1B2DC87EFB36DF80(*uParam0)))
				{
					unk_0xF9333020973682B9(iVar0, 1, 4096, -1);
				}
			}
			else
			{
				iVar0 = unk_0xF430A9686E704FA3(*uParam0, 4, func_179(), -1, 0, 0);
				if (bLocal_107)
				{
					unk_0x839E9476E54502A2(func_179());
				}
			}
			if (bParam2)
			{
				unk_0x059F430B70190AB2(iVar0, 1);
				unk_0xDEF79D33A50B28A7(iVar0, 0);
				unk_0x1C26C4B0DAB91B21(iVar0, 32, 0);
			}
			if (bLocal_108)
			{
				unk_0x7346544C767CFCBF(iVar0, 8192, 1);
				unk_0x7346544C767CFCBF(iVar0, 65536, 1);
				unk_0x7346544C767CFCBF(iVar0, 2, 0);
				unk_0x8734A10B003ED2B6(*uParam0, 1);
			}
			unk_0x9BEE7E791BC4D38B(iVar0, 1);
			func_282(iVar0);
			bLocal_106 = true;
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
	if (unk_0xD51CFE69539DB6D8(iParam0))
	{
		unk_0x506D42CB68AE4EA5(&iParam0);
	}
}

void func_283(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x0ADD324BC46177EF(0, 12);
	if (iLocal_2914 >= -1 && iLocal_2915 >= -1)
	{
		while (iVar0 == iLocal_2914 || iVar0 == iLocal_2915)
		{
			iVar0++;
		}
	}
	else if (iLocal_2914 >= -1)
	{
		if (iVar0 == iLocal_2914)
		{
			iVar0++;
		}
	}
	iVar1 = iVar0;
	switch (iVar1)
	{
		case 0:
			unk_0x408AD7E5AD0BB545(iParam0, 0, 0);
			break;
		
		case 1:
			unk_0x408AD7E5AD0BB545(iParam0, 2, 2);
			break;
		
		case 2:
			unk_0x408AD7E5AD0BB545(iParam0, 4, 4);
			break;
		
		case 3:
			unk_0x408AD7E5AD0BB545(iParam0, 27, 27);
			break;
		
		case 4:
			unk_0x408AD7E5AD0BB545(iParam0, 7, 7);
			break;
		
		case 5:
			unk_0x408AD7E5AD0BB545(iParam0, 73, 73);
			break;
		
		case 6:
			unk_0x408AD7E5AD0BB545(iParam0, 68, 68);
			break;
		
		case 7:
			unk_0x408AD7E5AD0BB545(iParam0, 62, 62);
			break;
		
		case 8:
			unk_0x408AD7E5AD0BB545(iParam0, 132, 132);
			break;
		
		case 9:
			unk_0x408AD7E5AD0BB545(iParam0, 117, 0);
			break;
		
		case 10:
			unk_0x408AD7E5AD0BB545(iParam0, 52, 52);
			break;
		
		case 11:
			unk_0x408AD7E5AD0BB545(iParam0, 88, 88);
			break;
		
		case 12:
			unk_0x408AD7E5AD0BB545(iParam0, 1, 1);
			break;
		
		case 13:
			unk_0x408AD7E5AD0BB545(iParam0, 36, 36);
			break;
		
		case 14:
			unk_0x408AD7E5AD0BB545(iParam0, 95, 95);
			break;
		
		default:
			unk_0x408AD7E5AD0BB545(iParam0, 73, 73);
			break;
	}
}

void func_284(struct<3> Param0, struct<3> Param3, float fParam6)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (!bLocal_88)
	{
		if (!func_285(Param0, Param3, fParam6, 200f))
		{
			if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
			{
				iVar1 = unk_0xA0B1717D806F4901();
				if (!unk_0x76B2D234F1895632(iVar1))
				{
					if (unk_0x3761EA7F8628B81A(iVar1, Param0, fParam6, fParam6, fParam6, 0, 1, 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0xC797AB6C3A6482E1(Param0, fParam6, 0, 0, 0, 0, 0);
			}
		}
	}
}

int func_285(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7)
{
	if (!unk_0xAEF17BDE274A1247())
	{
		if (!bLocal_88)
		{
			if (!iLocal_75)
			{
				if (unk_0xA8CEACB4F35AE058(Param3 - Param0) - fParam6) < (fParam7 * fParam7)
				{
					if (unk_0x86ECD59CFE6143AC(Param0, fParam6))
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
	
	unk_0xDBDFBE5906702D9E(iParam0, &cLocal_2668);
	while (!unk_0x08F84BB137ADEE81(iParam0, &cLocal_2668))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	uVar0 = unk_0x686986496F16B625(iParam0, &cLocal_2668);
	unk_0xFC8E26A6FE4C2E54(iParam0, &cLocal_2668);
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
	
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		Var1 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) };
	}
	if (unk_0xC45A34912542C4EB(iParam0, 0))
	{
		bVar7 = false;
		bVar8 = false;
		iVar0 = iLocal_1951;
		while (iVar0 < 15)
		{
			switch (iLocal_1930[iVar0])
			{
				case 0:
					if (!iLocal_2861[iVar0] == 0)
					{
						if (unk_0x3761EA7F8628B81A(iParam0, Local_2489[iVar0 /*3*/], fLocal_1273, fLocal_1273, fLocal_1273, 0, 1, 0))
						{
							iLocal_1953++;
							iLocal_1930[iVar0]++;
						}
					}
					else
					{
						iLocal_1930[iVar0] = 99;
					}
					break;
				
				case 1:
					if (6 > iLocal_1948)
					{
						if (!unk_0xD51CFE69539DB6D8(iLocal_3105[iVar0]))
						{
							unk_0x801429C020C467BA(iLocal_2861[iVar0]);
							if (unk_0x5053BF6D5604065B(iLocal_2861[iVar0]))
							{
								if ((iLocal_75 || iLocal_89) || (!bLocal_106 && !func_285(Local_2489[iVar0 /*3*/], Var1, 5f, fLocal_1286)))
								{
									if (bLocal_85)
									{
										func_284(Local_2489[iVar0 /*3*/], Var1, fLocal_1279);
									}
									iLocal_3105[iVar0] = unk_0xD504D1FF5DD2FFD7(iLocal_2861[iVar0], Local_2489[iVar0 /*3*/], 0f, 0, 0);
									if (iLocal_2861[iVar0] == joaat("polmav"))
									{
										unk_0xED6BC33BD669B45F(iLocal_3105[iVar0], 0);
									}
									unk_0x1F8CB81CA52CE552(iLocal_3105[iVar0], fLocal_1209[iVar0], fLocal_1225[iVar0], fLocal_1241[iVar0], fLocal_1257[iVar0]);
									unk_0x839E9476E54502A2(iLocal_2861[iVar0]);
									if (unk_0x7579897B912B3328(iLocal_3105[iVar0], func_177()))
									{
										unk_0x821446383BC10D9B(iLocal_3105[iVar0], 1);
										if (!unk_0x07C6F7E084F6A97E(iLocal_2861[iVar0]))
										{
											unk_0xBF71B7FCF453800C(iLocal_3105[iVar0], 1);
										}
									}
									if (unk_0x7579897B912B3328(iLocal_3105[iVar0], func_178()))
									{
										unk_0x408AD7E5AD0BB545(iLocal_3105[iVar0], 0, 0);
									}
									unk_0xFD092FF761E54535(iLocal_3105[iVar0], 1);
									iLocal_1953 = (iLocal_1953 - 1);
									iLocal_1948++;
									iLocal_1930[iVar0]++;
									bLocal_106 = true;
								}
							}
						}
						else
						{
							iLocal_1953 = (iLocal_1953 - 1);
							iLocal_1948++;
							iLocal_1930[iVar0]++;
						}
					}
					break;
				
				case 2:
					if (!bVar7)
					{
						if (unk_0xC45A34912542C4EB(iLocal_3105[iVar0], 0))
						{
							Var4 = { unk_0x1141852D07400777(iLocal_3105[iVar0], 1) };
						}
						if (fLocal_1287 == 0f || unk_0xB7A628320EFF8E47(Var1, Var4) < (fLocal_1287 * fLocal_1287))
						{
							if (!func_277(iLocal_3105[iVar0], iParam0, 0))
							{
								if (!bLocal_77)
								{
									func_172(iLocal_3105[iVar0]);
								}
								else
								{
									unk_0x9E55BD45B84E7BDC(&(iLocal_3105[iVar0]));
								}
								iLocal_1948 = (iLocal_1948 - 1);
								iLocal_1930[iVar0] = 99;
								bVar7 = true;
							}
						}
					}
					break;
			}
			if (iLocal_1930[iVar0] != 99)
			{
				if (!bVar8)
				{
					iLocal_1951 = iVar0;
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
	bVar18 = unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90());
	uVar19 = unk_0x411E10E414330982();
	uVar20 = unk_0xA422DE4024B0ADE8();
	if (bVar18)
	{
		if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
		{
			iVar5 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
		}
		Var12 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) };
	}
	iVar1 = 0;
	if (unk_0xC45A34912542C4EB(iParam0, 0))
	{
		if (unk_0x05BA2AC20921A37E(iParam0))
		{
			fLocal_1275 = unk_0x97DF87DF18B03512(iParam0);
		}
		iVar22 = -1;
		bVar23 = false;
		bVar24 = false;
		iVar0 = iLocal_1950;
		while (iVar0 < 175 && !bVar23)
		{
			if (iLocal_1470[iVar0] != 99)
			{
				if (iLocal_1470[iVar0] == 0)
				{
					if (iLocal_1294[iVar0] > 0 && iLocal_2685[iVar0] != 0)
					{
						if (!iLocal_75)
						{
							if (fLocal_1275 < (fLocal_813[iVar0] + 20000f))
							{
								if (fLocal_1275 >= (fLocal_813[iVar0] - (7000f * fParam1)))
								{
									if (func_287(iLocal_2685[iVar0]))
									{
										unk_0x9956FB0E4B50ECB8(&(iLocal_1646[iVar0]), 0);
									}
									else if (unk_0x07C6F7E084F6A97E(iLocal_2685[iVar0]))
									{
										unk_0x9956FB0E4B50ECB8(&(iLocal_1646[iVar0]), 2);
									}
									unk_0x73817D396768E4C6(&(iLocal_1646[iVar0]), 1);
									iLocal_1955++;
									iLocal_1470[iVar0]++;
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
							fVar15 = (fLocal_1275 - fLocal_813[iVar0]);
							if (fVar15 >= 0f)
							{
								if (fVar15 < func_286(iLocal_1294[iVar0]))
								{
									if (func_287(iLocal_2685[iVar0]))
									{
										unk_0x9956FB0E4B50ECB8(&(iLocal_1646[iVar0]), 0);
									}
									else if (unk_0x07C6F7E084F6A97E(iLocal_2685[iVar0]))
									{
										unk_0x9956FB0E4B50ECB8(&(iLocal_1646[iVar0]), 2);
									}
									unk_0x73817D396768E4C6(&(iLocal_1646[iVar0]), 1);
									iLocal_1955++;
									iLocal_1470[iVar0]++;
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
				else if (iLocal_1470[iVar0] == 1)
				{
					unk_0xDBDFBE5906702D9E(iLocal_1294[iVar0], &cLocal_2668);
					bVar17 = false;
					if (unk_0xB519E5386FBF69E5(iLocal_1646[iVar0], 0))
					{
						unk_0x801429C020C467BA(func_176());
						if (unk_0x5053BF6D5604065B(func_176()))
						{
							bVar17 = true;
						}
					}
					else if (!bLocal_102 && ((!unk_0xB519E5386FBF69E5(iLocal_1646[iVar0], 2) && uVar19) || (unk_0xB519E5386FBF69E5(iLocal_1646[iVar0], 2) && uVar20)))
					{
						bVar17 = true;
					}
					else
					{
						unk_0x801429C020C467BA(func_179());
						bVar17 = unk_0x5053BF6D5604065B(func_179());
					}
					if (!unk_0xD51CFE69539DB6D8(iLocal_2916[iVar0]))
					{
						unk_0x801429C020C467BA(iLocal_2685[iVar0]);
						if ((unk_0x5053BF6D5604065B(iLocal_2685[iVar0]) && unk_0x08F84BB137ADEE81(iLocal_1294[iVar0], &cLocal_2668)) && bVar17)
						{
							if (fLocal_1275 >= (fLocal_813[iVar0] - (fLocal_1288 * fParam1)))
							{
								if ((iLocal_89 || iParam2) || (!bLocal_106 && !func_285(Local_1963[iVar0 /*3*/], Var12, 5f, fLocal_1286)))
								{
									if (bLocal_85)
									{
										func_284(Local_1963[iVar0 /*3*/], Var12, fLocal_1279);
									}
									iLocal_2916[iVar0] = unk_0xD504D1FF5DD2FFD7(iLocal_2685[iVar0], Local_1963[iVar0 /*3*/], 0f, 0, 0);
									if (iLocal_2685[iVar0] == joaat("polmav"))
									{
										unk_0xED6BC33BD669B45F(iLocal_2916[iVar0], 0);
									}
									if (uLocal_98 && !unk_0xB519E5386FBF69E5(iLocal_1646[iVar0], 0))
									{
										func_283(iLocal_2916[iVar0]);
									}
									unk_0x9CA89729A675E8FF(iLocal_2916[iVar0], Local_1963[iVar0 /*3*/], 0, 0, 1);
									unk_0x1F8CB81CA52CE552(iLocal_2916[iVar0], fLocal_109[iVar0], fLocal_285[iVar0], fLocal_461[iVar0], fLocal_637[iVar0]);
									if (unk_0x3937C84F74FAABA4(iLocal_2685[iVar0]) || unk_0x07C6F7E084F6A97E(iLocal_2685[iVar0]))
									{
										unk_0xC9CEB5227A733CE6(iLocal_2916[iVar0]);
									}
									if (unk_0xB519E5386FBF69E5(iLocal_1646[iVar0], 3))
									{
										unk_0xFD092FF761E54535(iLocal_2916[iVar0], 1);
									}
									if (!unk_0xB519E5386FBF69E5(iLocal_1646[iVar0], 0))
									{
										unk_0xE9A614E9191BFB4A(iLocal_2916[iVar0], 1, 1, 0);
										if (unk_0x7C833E3C6EEE41E0() > 19 || unk_0x7C833E3C6EEE41E0() < 7)
										{
											unk_0x01A5F35B4016EFD8(iLocal_2916[iVar0], 3);
										}
									}
									unk_0x2878EC06B3F897A0(iLocal_2916[iVar0], 1);
									unk_0x059F430B70190AB2(iLocal_2916[iVar0], 1);
									unk_0x839E9476E54502A2(iLocal_2685[iVar0]);
									iLocal_1955 = (iLocal_1955 - 1);
									iLocal_1470[iVar0]++;
									bLocal_106 = true;
								}
								else if (fLocal_1275 > fLocal_813[iVar0])
								{
									iLocal_1955 = (iLocal_1955 - 1);
									func_291(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_1470[iVar0] == 2)
				{
					bVar17 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_1961 || iLocal_1961 == 0)) || iLocal_89) || iParam2)
					{
						if (!unk_0xB519E5386FBF69E5(iLocal_1646[iVar0], 1))
						{
							if (unk_0xB519E5386FBF69E5(iLocal_1646[iVar0], 0))
							{
								unk_0x801429C020C467BA(func_176());
								bVar17 = unk_0x5053BF6D5604065B(func_176());
								iVar21 = 2;
							}
							else if (!bLocal_102 && ((!unk_0xB519E5386FBF69E5(iLocal_1646[iVar0], 2) && uVar19) || (unk_0xB519E5386FBF69E5(iLocal_1646[iVar0], 2) && uVar20)))
							{
								bVar17 = true;
								iVar21 = 1;
							}
							else
							{
								unk_0x801429C020C467BA(func_179());
								bVar17 = unk_0x5053BF6D5604065B(func_179());
								iVar21 = 0;
							}
							if (!unk_0x76B2D234F1895632(iLocal_2916[iVar0]))
							{
								if (!bLocal_106 && unk_0xD12071DBE8393EC8(iLocal_2916[iVar0], -1))
								{
									if (bVar17)
									{
										if ((unk_0xB7A628320EFF8E47(unk_0x1141852D07400777(iLocal_2916[iVar0], 1), Var12) < 10000f || iParam2) || iLocal_89)
										{
											func_281(&(iLocal_2916[iVar0]), iVar21, 0);
											unk_0x9956FB0E4B50ECB8(&(iLocal_1646[iVar0]), 1);
										}
									}
								}
							}
						}
						if (unk_0xC45A34912542C4EB(iLocal_2916[iVar0], 0))
						{
							unk_0xDBDFBE5906702D9E(iLocal_1294[iVar0], &cLocal_2668);
							if (fLocal_1275 >= fLocal_813[iVar0])
							{
								if (12 > iLocal_1946)
								{
									fVar15 = (fLocal_1275 - fLocal_813[iVar0]);
									if (unk_0x08F84BB137ADEE81(iLocal_1294[iVar0], &cLocal_2668))
									{
										if (fVar15 < unk_0x686986496F16B625(iLocal_1294[iVar0], &cLocal_2668))
										{
											Var6 = { unk_0x1141852D07400777(iLocal_2916[iVar0], 1) };
											Var9 = { unk_0x628822AEBDA1B8F8(iLocal_1294[iVar0], fVar15, &cLocal_2668) };
											if (!func_285(Var6, Var12, 5f, fLocal_1286) && func_285(Var9, Var12, 5f, fLocal_1286))
											{
												if (!unk_0xB519E5386FBF69E5(iLocal_1646[iVar0], 1))
												{
													func_281(&(iLocal_2916[iVar0]), iVar21, 0);
												}
												func_291(iVar0, 1090519040);
											}
											else if (((!bLocal_106 || unk_0xB519E5386FBF69E5(iLocal_1646[iVar0], 1)) || iLocal_89) || iParam2)
											{
												if (func_274(&(iLocal_2916[iVar0]), iLocal_1294[iVar0], fVar15, 1, 0, 0, 1, bLocal_103))
												{
													if (!unk_0xB519E5386FBF69E5(iLocal_1646[iVar0], 1))
													{
														func_281(&(iLocal_2916[iVar0]), iVar21, 0);
													}
													unk_0x70EE8EFEE355AD29(iLocal_2916[iVar0], 1, 0);
													unk_0xEB35A2486E0DCF8F(iLocal_2916[iVar0], fParam1);
													iLocal_1946++;
													iLocal_1470[iVar0]++;
												}
											}
										}
										else
										{
											if (!unk_0xB519E5386FBF69E5(iLocal_1646[iVar0], 1))
											{
												func_281(&(iLocal_2916[iVar0]), iVar21, 0);
											}
											func_291(iVar0, 1090519040);
										}
									}
									else if (fVar15 > unk_0x686986496F16B625(iLocal_1294[iVar0], &cLocal_2668))
									{
										if (!unk_0xB519E5386FBF69E5(iLocal_1646[iVar0], 1))
										{
											func_281(&(iLocal_2916[iVar0]), iVar21, 0);
										}
										func_291(iVar0, 1090519040);
									}
								}
								else
								{
									if (!unk_0xB519E5386FBF69E5(iLocal_1646[iVar0], 1))
									{
										func_281(&(iLocal_2916[iVar0]), iVar21, 0);
									}
									func_291(iVar0, 1090519040);
								}
							}
							else if (iLocal_86 && !bLocal_94)
							{
								if (!unk_0xB519E5386FBF69E5(iLocal_1646[iVar0], 1))
								{
									func_281(&(iLocal_2916[iVar0]), iVar21, 0);
								}
								func_291(iVar0, 1090519040);
							}
						}
						else
						{
							if (!unk_0xB519E5386FBF69E5(iLocal_1646[iVar0], 1))
							{
								func_281(&(iLocal_2916[iVar0]), iVar21, 0);
							}
							func_291(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_1961 = iVar0;
					}
				}
				else if (iLocal_1470[iVar0] == 3)
				{
					if (unk_0xC45A34912542C4EB(iLocal_2916[iVar0], 0))
					{
						if (unk_0x05BA2AC20921A37E(iLocal_2916[iVar0]))
						{
							iVar4 = unk_0xBD6B21D725712BDE(iLocal_2916[iVar0], -1);
							if (!unk_0xAF437D7C802AB246(iVar4))
							{
								if (bVar18)
								{
									bVar24 = false;
									if (!bLocal_84)
									{
										if ((!bLocal_79 && !iLocal_76) && func_280(iLocal_2916[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_1960 || iLocal_1960 == 0))
											{
												if (!unk_0x76B2D234F1895632(iVar5))
												{
													bVar17 = false;
													if (!func_290(iLocal_2916[iVar0], iVar5) || func_277(iVar5, iLocal_2916[iVar0], 0))
													{
														bVar24 = true;
													}
												}
												iLocal_1960 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_99 && !unk_0xB519E5386FBF69E5(iLocal_1646[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_1960 || iLocal_1960 == 0))
										{
											Var25 = { unk_0x61CBEF33034AF6B9(iParam0, unk_0x1141852D07400777(iLocal_2916[iVar0], 1)) };
											if (Var25.f_1 < 0f)
											{
												if (unk_0x7F38A542899D217A(Var25.f_1) > unk_0x7F38A542899D217A(Var25.f_0))
												{
													bVar24 = true;
												}
											}
											iVar2++;
											iLocal_1960 = iVar0;
										}
									}
									if (bVar24)
									{
										func_276(iLocal_2916[iVar0]);
										iLocal_1470[iVar0]++;
									}
									else
									{
										unk_0xEB35A2486E0DCF8F(iLocal_2916[iVar0], fParam1);
									}
								}
							}
							else
							{
								unk_0x6035B71FBC2881EC(iLocal_2916[iVar0]);
							}
						}
						else
						{
							iLocal_1470[iVar0]++;
						}
					}
					else
					{
						iLocal_1470[iVar0]++;
					}
				}
				else if (iLocal_1470[iVar0] == 4)
				{
					if (unk_0xC45A34912542C4EB(iLocal_2916[iVar0], 0))
					{
						if (!unk_0x05BA2AC20921A37E(iLocal_2916[iVar0]))
						{
							iLocal_1470[iVar0]++;
						}
						else
						{
							iVar4 = unk_0xBD6B21D725712BDE(iLocal_2916[iVar0], -1);
							if (!unk_0xAF437D7C802AB246(iVar4))
							{
								unk_0xEB35A2486E0DCF8F(iLocal_2916[iVar0], fParam1);
							}
							else
							{
								unk_0x6035B71FBC2881EC(iLocal_2916[iVar0]);
							}
							if (unk_0x08F84BB137ADEE81(iLocal_1294[iVar0], &cLocal_2668))
							{
								if (fLocal_1275 > (fLocal_813[iVar0] + unk_0x686986496F16B625(iLocal_1294[iVar0], &cLocal_2668)))
								{
									unk_0x6035B71FBC2881EC(iLocal_2916[iVar0]);
								}
							}
							else
							{
								unk_0x6035B71FBC2881EC(iLocal_2916[iVar0]);
							}
						}
					}
					else
					{
						iLocal_1470[iVar0]++;
					}
				}
				else if (iLocal_1470[iVar0] == 5)
				{
					if (!unk_0x76B2D234F1895632(iLocal_2916[iVar0]))
					{
						fVar16 = unk_0xD4F0FC8FFEDE152B(iLocal_2916[iVar0]);
					}
					iLocal_1946 = (iLocal_1946 - 1);
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
			iLocal_1950 = iVar22;
		}
		if (iVar2 < 3)
		{
			iLocal_1960 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_1961 = 0;
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
	
	if (unk_0xC45A34912542C4EB(iParam0, 0))
	{
		Var0 = { unk_0x3BB233C973B4C0FC(iParam0, 0) };
	}
	else
	{
		return 0;
	}
	if (unk_0xC45A34912542C4EB(iParam1, 0))
	{
		Var3 = { unk_0x3BB233C973B4C0FC(iParam1, 0) };
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
	
	if (!iLocal_2685[iParam0] == 0)
	{
		unk_0x839E9476E54502A2(iLocal_2685[iParam0]);
	}
	if (!unk_0x76B2D234F1895632(iLocal_2916[iParam0]))
	{
		unk_0x70EE8EFEE355AD29(iLocal_2916[iParam0], 1, 0);
		unk_0x2878EC06B3F897A0(iLocal_2916[iParam0], 0);
		iVar0 = unk_0xBD6B21D725712BDE(iLocal_2916[iParam0], -1);
		if (!unk_0xAF437D7C802AB246(iVar0) && iVar0 != unk_0xE7869D5D7816A9B6())
		{
			unk_0x9BEE7E791BC4D38B(iVar0, 0);
			if (fParam1 < 8f)
			{
				fParam1 = 8f;
			}
			if (fParam1 > 62.9f)
			{
				fParam1 = 62.9f;
			}
			unk_0x03C1B195D300CB1D(iVar0, iLocal_2916[iParam0], 0, 1, fParam1, 786603, 5f, 5f, 1);
			unk_0x7346544C767CFCBF(iVar0, 8192, 1);
			if (bLocal_108)
			{
				unk_0x7346544C767CFCBF(iVar0, 65536, 1);
				unk_0x7346544C767CFCBF(iVar0, 2, 0);
			}
			unk_0x7E3DC7ED30B648F0(iVar0, 6, 0);
			unk_0x3293DD7EB0BC0756(iVar0, fParam1);
		}
	}
	if (!bLocal_77)
	{
		if (!bLocal_105)
		{
			func_282(iVar0);
			func_172(iLocal_2916[iParam0]);
		}
	}
	else
	{
		if (unk_0xD51CFE69539DB6D8(iVar0))
		{
			unk_0x2C9DDB5306DF417C(&iVar0);
		}
		if (unk_0xD51CFE69539DB6D8(iLocal_2916[iParam0]))
		{
			unk_0x9E55BD45B84E7BDC(&(iLocal_2916[iParam0]));
		}
	}
	if (!bLocal_87 && !bLocal_100)
	{
		if (iLocal_1294[iParam0] > 0)
		{
			unk_0xFC8E26A6FE4C2E54(iLocal_1294[iParam0], &cLocal_2668);
		}
	}
	iLocal_1470[iParam0] = 99;
}

void func_292(int iParam0, float fParam1, float fParam2)
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		Var10 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) };
	}
	if (unk_0xC45A34912542C4EB(iParam0, 0))
	{
		if (unk_0x05BA2AC20921A37E(iParam0))
		{
			uVar0 = unk_0x088A0569FB43960B(iParam0);
			Var1 = { unk_0x232293F1B0A3E165(uVar0, fParam1) };
			Var4 = { unk_0x1141852D07400777(iParam0, 1) };
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
	if (!bLocal_88)
	{
		if (!unk_0x76B2D234F1895632(iParam0))
		{
			if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
			{
				if (unk_0xB7A628320EFF8E47(unk_0x1141852D07400777(iParam0, 1), unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1)) > (fParam1 * fParam1))
				{
					unk_0xE7B4713D32F6F9DC(1);
				}
				else
				{
					unk_0xE7B4713D32F6F9DC(0);
				}
			}
		}
	}
}

void func_294(int iParam0, float fParam1)
{
	if (!bLocal_88)
	{
		if (!unk_0x76B2D234F1895632(iParam0))
		{
			if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
			{
				if (unk_0xB7A628320EFF8E47(unk_0x1141852D07400777(iParam0, 1), unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1)) > (fParam1 * fParam1))
				{
					unk_0x6423C366AD1DAA00(1f);
				}
				else
				{
					unk_0x6423C366AD1DAA00(0f);
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
	
	if (!unk_0x76B2D234F1895632(iParam0) && unk_0x05BA2AC20921A37E(iParam0))
	{
		fVar1 = (fLocal_1289 + 2000f);
		fVar2 = (fLocal_1290 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			uVar0 = unk_0x088A0569FB43960B(iParam0);
			if (fVar1 <= unk_0x0A38D50B20A3D44E(uVar0))
			{
				if (iLocal_1956 == 0)
				{
					Local_2656 = { unk_0x232293F1B0A3E165(uVar0, fLocal_1289) };
					iLocal_1956++;
				}
				else if (iLocal_1956 == 1)
				{
					Local_2659 = { unk_0x232293F1B0A3E165(iVar0, fVar1) };
					iLocal_1956++;
				}
				else if (!bLocal_106)
				{
					if (Local_2656.f_0 > Local_2659.f_0)
					{
						fVar3 = Local_2656.f_0;
						Local_2656.f_0 = Local_2659.f_0;
						Local_2659.f_0 = fVar3;
					}
					if (Local_2656.f_1 > Local_2659.f_1)
					{
						fVar3 = Local_2656.f_1;
						Local_2656.f_1 = Local_2659.f_1;
						Local_2659.f_1 = fVar3;
					}
					if (Local_2656.f_2 > Local_2659.f_2)
					{
						fVar3 = Local_2656.f_2;
						Local_2656.f_2 = Local_2659.f_2;
						Local_2659.f_2 = fVar3;
					}
					Local_2656 = { Local_2656 - Vector(fLocal_1293, fLocal_1293, fLocal_1293) };
					Local_2659 = { Local_2659 + Vector(fLocal_1293, fLocal_1293, fLocal_1293) };
					unk_0x39895086D78BEA60(Local_2656, Local_2659, 0, 0);
					fLocal_1289 = fVar1;
					iLocal_1956 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			iVar0 = unk_0x088A0569FB43960B(iParam0);
			if (iLocal_1959 == 0)
			{
				Local_2662 = { unk_0x232293F1B0A3E165(iVar0, fLocal_1290) };
				iLocal_1959++;
			}
			else if (iLocal_1959 == 1)
			{
				Local_2665 = { unk_0x232293F1B0A3E165(iVar0, fVar2) };
				iLocal_1959++;
			}
			else if (!bLocal_106 && !bVar4)
			{
				if (Local_2662.f_0 > Local_2665.f_0)
				{
					fVar3 = Local_2662.f_0;
					Local_2662.f_0 = Local_2665.f_0;
					Local_2665.f_0 = fVar3;
				}
				if (Local_2662.f_1 > Local_2665.f_1)
				{
					fVar3 = Local_2662.f_1;
					Local_2662.f_1 = Local_2665.f_1;
					Local_2665.f_1 = fVar3;
				}
				if (Local_2662.f_2 > Local_2665.f_2)
				{
					fVar3 = Local_2662.f_2;
					Local_2662.f_2 = Local_2665.f_2;
					Local_2665.f_2 = fVar3;
				}
				Local_2662 = { Local_2662 - Vector(fLocal_1293, fLocal_1293, fLocal_1293) };
				Local_2665 = { Local_2665 + Vector(fLocal_1293, fLocal_1293, fLocal_1293) };
				unk_0x3EB6E5FC1FA6912C(Local_2662, Local_2665, 1);
				fLocal_1290 = fVar2;
				iLocal_1959 = 0;
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
	
	if (!unk_0xAF437D7C802AB246(iParam0))
	{
		if (!unk_0x76B2D234F1895632(iParam1))
		{
			if (unk_0x8AF655CC5761C7A2(iParam0, iParam1, 0))
			{
				return 0;
			}
		}
	}
	if (!unk_0x76B2D234F1895632(iParam0))
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 1) };
	}
	if (unk_0xC45A34912542C4EB(iParam1, 0))
	{
		Var3 = { unk_0x1141852D07400777(iParam1, 1) };
		Var6 = { unk_0xBD306D8AFEF4E078(iParam1, 0f, 5f, 0f) };
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
	unk_0xBDF0A810DD6A47D3(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, 0, 1);
	unk_0x4BAFD83665B00619(0);
	unk_0x860964F2A77E1393(0);
	unk_0x1E448CAD2CCD4493(0);
	unk_0x6423C366AD1DAA00(0f);
	unk_0xE7B4713D32F6F9DC(0);
	unk_0xEB6EADE1FB086748(3);
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
	
	if (iLocal_91 == 0)
	{
		if (*fParam2 < fParam3)
		{
			*fParam2 = fParam3;
			iLocal_91 = 1;
		}
	}
	if (fParam8 < 0f)
	{
		fParam8 = fLocal_1284;
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
	if (!unk_0x76B2D234F1895632(iParam1))
	{
		if (func_296(iParam1, iParam0))
		{
			if (unk_0x51374A0BB2871E6E(iParam1, 0))
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
			iLocal_92 = 1;
		}
		else if (iLocal_92)
		{
			if (fVar2 < fVar6)
			{
				fVar4 = fParam3;
				iLocal_92 = 0;
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
		fVar1 = unk_0x3B75450B0AEE5786();
		fVar8 = ((fLocal_1291 * fParam3) * fVar1);
		fVar1 = (fVar4 - *fParam2);
		if (fVar1 > fVar8)
		{
			fVar1 = fVar8;
		}
		*fParam2 = (*fParam2 + fVar1);
	}
	else
	{
		fVar1 = unk_0x3B75450B0AEE5786();
		fVar8 = ((fLocal_1292 * fParam3) * fVar1);
		fVar1 = (fVar4 - *fParam2);
		if (fVar1 < (fVar8 * -1f))
		{
			fVar1 = (fVar8 * -1f);
		}
		*fParam2 = (*fParam2 + fVar1);
	}
	if (bParam10)
	{
		if (!unk_0xAF437D7C802AB246(iParam1))
		{
			if (unk_0x51374A0BB2871E6E(iParam1, 0))
			{
				iVar9 = unk_0xF0295FF51F2D7803(iParam1, 0);
				if (!unk_0x76B2D234F1895632(iVar9))
				{
					iVar10 = unk_0x1B2DC87EFB36DF80(iVar9);
					if (unk_0x3937C84F74FAABA4(iVar10) || unk_0x07C6F7E084F6A97E(iVar10))
					{
						if (unk_0xC45A34912542C4EB(iVar9, 0))
						{
							fVar1 = fVar4;
							if (fVar1 < fParam3)
							{
								fVar1 = fParam3;
							}
							fVar1 = (fVar1 - fParam3);
							fVar1 = (fVar1 / (fVar0 - fParam3));
							fVar1 = (fVar1 * fParam8);
							fVar1 = (fVar1 * (fLocal_1282 - fLocal_1283));
							fVar1 = (fVar1 + fLocal_1283);
							fLocal_1281 = fVar1;
							if (fLocal_1281 < fLocal_1283)
							{
								fLocal_1281 = fLocal_1283;
							}
							if (fLocal_1281 > fLocal_1282)
							{
								fLocal_1281 = fLocal_1282;
							}
							unk_0x357AD83D909BF584(unk_0x3F80C6638E3A1A90(), fLocal_1281);
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
	
	if (!unk_0x76B2D234F1895632(iParam0))
	{
		Var0.f_0 = unk_0xA202B3228B38DCA3(iParam0);
		Var0.f_1 = unk_0x589A23D1D8592F27(iParam0);
	}
	if (!unk_0x76B2D234F1895632(iParam1))
	{
		Var3 = { unk_0x1141852D07400777(iParam1, 1) };
		if (unk_0x51374A0BB2871E6E(iParam1, 0))
		{
			iVar13 = unk_0xF0295FF51F2D7803(iParam1, 0);
			Var9.f_0 = unk_0xA202B3228B38DCA3(iVar13);
			Var9.f_1 = unk_0x589A23D1D8592F27(iVar13);
		}
		else
		{
			Var6 = { unk_0xBD306D8AFEF4E078(iParam1, 0f, 5f, 0f) };
			Var9 = { Var6 - Var3 };
		}
	}
	uVar12 = unk_0x36C9BE33708F029F(Var0.f_0, Var0.f_1, Var9.f_0, Var9.f_1);
	return uVar12;
}

float func_300(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (!unk_0x76B2D234F1895632(iParam0))
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 1) };
	}
	if (!unk_0x76B2D234F1895632(iParam1))
	{
		Var3 = { unk_0x1141852D07400777(iParam1, 1) };
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
	
	if (unk_0xC45A34912542C4EB(iParam0, 0))
	{
		Var0.f_0 = unk_0xA202B3228B38DCA3(iParam0);
		Var0.f_1 = unk_0x589A23D1D8592F27(iParam0);
		Var6 = { unk_0x1141852D07400777(iParam0, 1) };
	}
	if (!unk_0x76B2D234F1895632(iParam1))
	{
		Var9 = { unk_0x1141852D07400777(iParam1, 1) };
	}
	Var3 = { Var9 - Var6 };
	fVar12 = unk_0x36C9BE33708F029F(Var3.f_0, Var3.f_1, Var0.f_0, Var0.f_1);
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
	if (unk_0xD51CFE69539DB6D8(iLocal_3258))
	{
		if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
		{
			if (!unk_0xD525F9D50CBB6A5D(iLocal_3258))
			{
				iLocal_3403 = 1;
			}
			else
			{
				iLocal_3403 = 0;
			}
		}
		else
		{
			iLocal_3403 = 1;
		}
	}
	else
	{
		iLocal_3403 = 1;
	}
	iLocal_3190 = 0;
	while (iLocal_3190 <= 24)
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_3121[iLocal_3190]))
		{
			if (unk_0xC45A34912542C4EB(iLocal_3121[iLocal_3190], 0))
			{
				if (!unk_0xD525F9D50CBB6A5D(iLocal_3121[iLocal_3190]))
				{
					iLocal_3404[iLocal_3190] = 1;
				}
				else
				{
					iLocal_3404[iLocal_3190] = 0;
				}
			}
			else
			{
				iLocal_3404[iLocal_3190] = 1;
			}
		}
		else
		{
			iLocal_3404[iLocal_3190] = 1;
		}
		iLocal_3190++;
	}
	if (((((((((((((((((((((((((iLocal_3403 == 1 && iLocal_3404[0] == 1) && iLocal_3404[1] == 1) && iLocal_3404[2] == 1) && iLocal_3404[3] == 1) && iLocal_3404[4] == 1) && iLocal_3404[5] == 1) && iLocal_3404[6] == 1) && iLocal_3404[7] == 1) && iLocal_3404[8] == 1) && iLocal_3404[9] == 1) && iLocal_3404[10] == 1) && iLocal_3404[11] == 1) && iLocal_3404[12] == 1) && iLocal_3404[13] == 1) && iLocal_3404[14] == 1) && iLocal_3404[15] == 1) && iLocal_3404[16] == 1) && iLocal_3404[17] == 1) && iLocal_3404[18] == 1) && iLocal_3404[19] == 1) && iLocal_3404[20] == 1) && iLocal_3404[21] == 1) && iLocal_3404[22] == 1) && iLocal_3404[23] == 1) && iLocal_3404[24] == 1)
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
	
	if (unk_0xD51CFE69539DB6D8(iLocal_3121[4]))
	{
		if (unk_0xC45A34912542C4EB(iLocal_3121[4], 0))
		{
			if (unk_0x05BA2AC20921A37E(iLocal_3121[4]))
			{
				Local_3303 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) };
				Var3 = { unk_0x1141852D07400777(iLocal_3121[4], 1) };
				if (Local_3303.f_0 < (Var3.f_0 - 10f) && !unk_0xD525F9D50CBB6A5D(iLocal_3121[4]))
				{
					unk_0x6035B71FBC2881EC(iLocal_3121[4]);
					unk_0xC1F2137782A816E9(&(iLocal_3121[4]));
				}
			}
		}
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3121[3]))
	{
		if (unk_0xC45A34912542C4EB(iLocal_3121[3], 0))
		{
			if (unk_0x05BA2AC20921A37E(iLocal_3121[3]))
			{
				Local_3303 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) };
				Var0 = { unk_0x1141852D07400777(iLocal_3121[3], 1) };
				if (Local_3303.f_0 < (Var0.f_0 - 10f) && !unk_0xD525F9D50CBB6A5D(iLocal_3121[3]))
				{
					unk_0x6035B71FBC2881EC(iLocal_3121[3]);
					unk_0xC1F2137782A816E9(&(iLocal_3121[3]));
				}
			}
		}
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3121[21]))
	{
		if (unk_0xC45A34912542C4EB(iLocal_3121[21], 0))
		{
			if (unk_0x05BA2AC20921A37E(iLocal_3121[21]))
			{
				Local_3303 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) };
				Var6 = { unk_0x1141852D07400777(iLocal_3121[21], 1) };
				if (Local_3303.f_0 < (Var6.f_0 - 10f) && !unk_0xD525F9D50CBB6A5D(iLocal_3121[21]))
				{
					unk_0x6035B71FBC2881EC(iLocal_3121[21]);
					unk_0xC1F2137782A816E9(&(iLocal_3121[21]));
				}
			}
		}
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3121[0]))
	{
		if (unk_0xC45A34912542C4EB(iLocal_3121[0], 0))
		{
			if (unk_0xD51CFE69539DB6D8(iLocal_3258))
			{
				if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
				{
					if (unk_0x05BA2AC20921A37E(iLocal_3258))
					{
						if (unk_0x97DF87DF18B03512(iLocal_3258) > 50000f && !unk_0xD525F9D50CBB6A5D(iLocal_3121[0]))
						{
							if (unk_0x05BA2AC20921A37E(iLocal_3121[0]))
							{
								unk_0x6035B71FBC2881EC(iLocal_3121[0]);
							}
							unk_0xC1F2137782A816E9(&(iLocal_3121[0]));
						}
					}
				}
			}
		}
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3264))
	{
		if (unk_0xC45A34912542C4EB(iLocal_3264, 0))
		{
			if (unk_0xD51CFE69539DB6D8(iLocal_3258))
			{
				if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
				{
					if (unk_0x05BA2AC20921A37E(iLocal_3258))
					{
						if (unk_0x97DF87DF18B03512(iLocal_3258) > 90000f && !unk_0xD525F9D50CBB6A5D(iLocal_3264))
						{
							unk_0x52F57B57CB8B4432(uLocal_3755[0], 0);
							unk_0x52F57B57CB8B4432(uLocal_3755[1], 0);
							unk_0x52F57B57CB8B4432(uLocal_3755[2], 0);
							if (unk_0xD51CFE69539DB6D8(iLocal_3223[0]))
							{
								unk_0x506D42CB68AE4EA5(&(iLocal_3223[0]));
							}
							if (unk_0xD51CFE69539DB6D8(iLocal_3223[1]))
							{
								unk_0x506D42CB68AE4EA5(&(iLocal_3223[1]));
							}
							if (unk_0xD51CFE69539DB6D8(iLocal_3223[2]))
							{
								unk_0x506D42CB68AE4EA5(&(iLocal_3223[2]));
							}
							if (unk_0xD51CFE69539DB6D8(iLocal_3223[3]))
							{
								unk_0x506D42CB68AE4EA5(&(iLocal_3223[3]));
							}
							unk_0xC1F2137782A816E9(&iLocal_3264);
							unk_0x8B10CC9832827D27("missheist_agency3aig_lift_waitped_a");
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
	if (unk_0xD11595488376CB53(uParam0))
	{
		if ((unk_0xD51CFE69539DB6D8(iParam1) && unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6())) && !unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
		{
			if (unk_0x8C1ED5BB2888BA25(iParam1))
			{
				if (unk_0xC45A34912542C4EB(unk_0xE59FAD6B5E1AA42D(iParam1), 0))
				{
					fVar1 = unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), unk_0x1141852D07400777(iParam1, 1), 1);
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
						unk_0xDBFA9591B1E30DFA(uParam0, 1);
						unk_0x95FCF148333C6A88(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0xDBFA9591B1E30DFA(uParam0, 0);
						unk_0x95FCF148333C6A88(uParam0, 255);
					}
				}
			}
			else if (unk_0x41B17741CACC905E(iParam1))
			{
				if (!unk_0xAF437D7C802AB246(unk_0x10E754B2E0DF2A70(iParam1)))
				{
					fVar1 = unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), unk_0x1141852D07400777(iParam1, 1), 1);
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
						unk_0xDBFA9591B1E30DFA(uParam0, 1);
						unk_0x95FCF148333C6A88(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0xDBFA9591B1E30DFA(uParam0, 0);
						unk_0x95FCF148333C6A88(uParam0, 255);
					}
				}
			}
		}
	}
}

void func_305()
{
	if (unk_0xD51CFE69539DB6D8(iLocal_3121[2]))
	{
		if (unk_0xC45A34912542C4EB(iLocal_3121[2], 0))
		{
			if (unk_0xD51CFE69539DB6D8(iLocal_3258))
			{
				if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
				{
					if (unk_0x05BA2AC20921A37E(iLocal_3258))
					{
						if (unk_0x97DF87DF18B03512(iLocal_3258) < 50530f)
						{
							if (!unk_0x66697A81EB591EA3(iLocal_3121[2]))
							{
								unk_0xE9A614E9191BFB4A(iLocal_3121[2], 1, 1, 0);
							}
						}
						else if (unk_0x66697A81EB591EA3(iLocal_3121[2]))
						{
							unk_0xE9A614E9191BFB4A(iLocal_3121[2], 0, 0, 0);
						}
					}
				}
			}
		}
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3121[5]))
	{
		if (unk_0xC45A34912542C4EB(iLocal_3121[5], 0))
		{
			if (!unk_0x66697A81EB591EA3(iLocal_3121[5]))
			{
				unk_0xE9A614E9191BFB4A(iLocal_3121[5], 1, 1, 0);
			}
		}
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3260[0]))
	{
		if (unk_0xC45A34912542C4EB(iLocal_3260[0], 0))
		{
			if (!unk_0x66697A81EB591EA3(iLocal_3260[0]))
			{
				unk_0xE9A614E9191BFB4A(iLocal_3260[0], 1, 1, 0);
			}
			if (unk_0xD12071DBE8393EC8(iLocal_3260[0], -1))
			{
				if (!unk_0xD51CFE69539DB6D8(iLocal_3254[0]))
				{
					unk_0x801429C020C467BA(joaat("s_m_m_gentransport"));
					if (unk_0x5053BF6D5604065B(joaat("s_m_m_gentransport")))
					{
						iLocal_3254[0] = unk_0xF430A9686E704FA3(iLocal_3260[0], 26, joaat("s_m_m_gentransport"), -1, 1, 1);
						unk_0x839E9476E54502A2(joaat("s_m_m_gentransport"));
					}
				}
			}
		}
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3260[1]))
	{
		if (unk_0xC45A34912542C4EB(iLocal_3260[1], 0))
		{
			if (!unk_0x66697A81EB591EA3(iLocal_3260[1]))
			{
				unk_0xE9A614E9191BFB4A(iLocal_3260[1], 1, 1, 0);
			}
			if (unk_0xD12071DBE8393EC8(iLocal_3260[1], -1))
			{
				if (!unk_0xD51CFE69539DB6D8(iLocal_3254[1]))
				{
					unk_0x801429C020C467BA(joaat("s_m_m_gentransport"));
					if (unk_0x5053BF6D5604065B(joaat("s_m_m_gentransport")))
					{
						iLocal_3254[1] = unk_0xF430A9686E704FA3(iLocal_3260[1], 26, joaat("s_m_m_gentransport"), -1, 1, 1);
						unk_0x839E9476E54502A2(joaat("s_m_m_gentransport"));
					}
				}
			}
		}
	}
}

void func_306()
{
	if (iLocal_3181 == 0)
	{
		unk_0xDF83A33BF4D93E6F("SCRIPT\Trv_4_747_Cop_Cars", 0);
		unk_0xDF83A33BF4D93E6F("SCRIPT\Trv_4_747_Plane_Explosion", 0);
		unk_0xDF83A33BF4D93E6F("SCRIPT\Trv_4_747_Tanker_Explosion", 0);
		unk_0xDF83A33BF4D93E6F("SCRIPT\TV_Monitors", 0);
		if (iLocal_3392 == 0)
		{
			iLocal_3213 = unk_0x2AD909D8CB732A41();
			iLocal_3392 = 1;
		}
		if (iLocal_3393 == 0)
		{
			iLocal_3214 = unk_0x2AD909D8CB732A41();
			iLocal_3393 = 1;
		}
		if (iLocal_3394 == 0)
		{
			iLocal_3215 = unk_0x2AD909D8CB732A41();
			iLocal_3394 = 1;
		}
		if (iLocal_3395 == 0)
		{
			iLocal_3216 = unk_0x2AD909D8CB732A41();
			iLocal_3395 = 1;
		}
		if (iLocal_3396 == 0)
		{
			iLocal_3217 = unk_0x2AD909D8CB732A41();
			iLocal_3396 = 1;
		}
		if (iLocal_3391 == 0)
		{
			iLocal_3218 = unk_0x2AD909D8CB732A41();
			iLocal_3391 = 1;
		}
		if (iLocal_3397 == 0)
		{
			iLocal_3219 = unk_0x2AD909D8CB732A41();
			iLocal_3397 = 1;
		}
		if (iLocal_3345 == 1)
		{
			func_104();
			iLocal_3345 = 0;
		}
		if (!unk_0xCF686B56FD5328B5(uLocal_3289))
		{
			uLocal_3289 = unk_0x01A00DEC76A48F14("DEFAULT_SCRIPTED_CAMERA", 1);
			unk_0xD2E0A9EDD55F008D(uLocal_3289, 40f);
		}
		iLocal_3343 = 0;
		iLocal_3337 = 0;
		iLocal_3349 = 0;
		iLocal_3333 = 0;
		iLocal_3328 = 0;
		iLocal_3334 = 0;
		iLocal_3327 = 0;
		iLocal_3363 = 0;
		iLocal_3365[0] = 0;
		iLocal_3369[0] = 0;
		iLocal_3365[1] = 0;
		iLocal_3369[1] = 0;
		iLocal_3365[2] = 0;
		iLocal_3372 = 0;
		iLocal_3373 = 0;
		iLocal_3331 = 0;
		iLocal_3332 = 0;
		iLocal_3330 = 0;
		iLocal_3377 = 0;
		iLocal_3380 = 0;
		iLocal_3381 = 0;
		iLocal_3382 = 0;
		iLocal_3384 = 0;
		iLocal_3383 = 0;
		iLocal_3385 = 0;
		iLocal_3386 = 0;
		iLocal_3387 = 0;
		iLocal_3388 = 0;
		iLocal_3389 = 0;
		iLocal_3390 = 0;
		iLocal_3398 = 0;
		iLocal_3399 = 0;
		iLocal_3401 = 0;
		iLocal_3402 = 0;
		iLocal_3434 = 0;
		iLocal_3435 = 0;
		iLocal_3551 = 0;
		iLocal_3351 = 1;
		iLocal_3352 = 1;
		iLocal_3360 = 1;
		iLocal_3440 = 0;
		iLocal_3441 = 0;
		iLocal_3466 = 0;
		iLocal_3468 = 0;
		iLocal_3475 = 0;
		iLocal_3476 = 0;
		iLocal_3478 = 0;
		iLocal_3480[0] = 0;
		iLocal_3480[1] = 0;
		iLocal_3483[0] = 0;
		iLocal_3483[1] = 0;
		iLocal_3486 = 0;
		iLocal_3487 = 0;
		iLocal_3489 = 0;
		iLocal_3508 = 0;
		iLocal_3509 = 0;
		iLocal_3510 = 0;
		iLocal_3540 = 0;
		iLocal_3541 = 0;
		iLocal_3552 = 0;
		iLocal_3185 = 0;
		iLocal_3198 = 0;
		iLocal_3189 = 0;
		while (iLocal_3189 <= 2)
		{
			iLocal_3543[iLocal_3189] = 0;
			iLocal_3547[iLocal_3189] = 0;
			iLocal_3189++;
		}
		iLocal_3189 = 0;
		while (iLocal_3189 <= 2)
		{
			iLocal_3571[iLocal_3189] = 0;
			iLocal_3189++;
		}
		iLocal_3189 = 0;
		while (iLocal_3189 <= 6)
		{
			iLocal_3490[iLocal_3189] = 0;
			iLocal_3498[iLocal_3189] = 0;
			iLocal_3189++;
		}
		unk_0xDF14478656A9018C();
		iLocal_89 = 1;
		bLocal_95 = true;
		func_251();
		uLocal_3184 = unk_0xF39B3464B1C83713();
		unk_0xB86B1248EA9B87EA(-823.71f, -2548.2f, 13.75f, 20f, 1, 0, 0, 0);
		unk_0xA30D54731C0AAECF(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f);
		unk_0xE822C342FB4392F1(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f, 0, 0);
		unk_0x39895086D78BEA60(-482f, -2118f, 6f, -1072f, -2724f, 17f, 0, 1);
		func_110(2, 1);
		func_308("BB_Chase", 45, 0, 1);
		unk_0x8C1CE4F676968E94(3);
		func_17(&uLocal_3578, 0, unk_0xE7869D5D7816A9B6(), "MICHAEL", 0, 1);
		if (unk_0xAEF17BDE274A1247())
		{
			if (!func_24())
			{
				unk_0x899C0AB969919A6A(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1));
			}
			func_21(iLocal_3259, -1, 1);
		}
		iLocal_3182 = 0;
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1)
	{
		unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), true, 0);
		func_307();
		iLocal_3181 = 2;
	}
	if (iLocal_3181 == 2)
	{
		if (!unk_0xD51CFE69539DB6D8(iLocal_3271))
		{
			iLocal_3271 = unk_0xD504D1FF5DD2FFD7(joaat("blista"), 0f, 0f, 1f, 0f, 1, 1);
		}
		while (!unk_0x08F84BB137ADEE81(45, "BB_Chase"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		if (unk_0xAEF17BDE274A1247())
		{
			if (unk_0xC45A34912542C4EB(iLocal_3259, 0))
			{
				unk_0xE9A614E9191BFB4A(iLocal_3259, 1, 1, 0);
				unk_0xA299DFC4364AB573(iLocal_3259, 30f);
				unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), true, 0);
			}
		}
		if (unk_0xD51CFE69539DB6D8(iLocal_3258))
		{
			if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
			{
				unk_0x23F0735A27D6F6B3(iLocal_3258, 45, "BB_Chase", 1);
				unk_0x5AE11BC36633DE4E(0);
				func_234();
				unk_0x515F66600A2670E2(2);
				if (unk_0xD51CFE69539DB6D8(iLocal_3259))
				{
					if (unk_0xC45A34912542C4EB(iLocal_3259, 0))
					{
						unk_0xC1F2137782A816E9(&iLocal_3259);
					}
				}
				if (!unk_0xDE185266FE919B68())
				{
					unk_0x2D3BB3EF936C4B76(800);
				}
				iLocal_3181 = 0;
				iLocal_3180 = 4;
			}
		}
	}
}

void func_307()
{
	Local_2489[0 /*3*/] = { -583.6427f, -2157.497f, 5.7947f };
	fLocal_1209[0] = -0.0003f;
	fLocal_1225[0] = -0.0085f;
	fLocal_1241[0] = 0.9998f;
	fLocal_1257[0] = 0.0158f;
	iLocal_2861[0] = joaat("blista");
	Local_1963[4 /*3*/] = { -827.2035f, -2575.697f, 13.5688f };
	fLocal_109[4] = 0.0004f;
	fLocal_285[4] = -0.0003f;
	fLocal_461[4] = -0.2526f;
	fLocal_637[4] = 0.9676f;
	iLocal_1294[4] = 50;
	fLocal_813[4] = 20310f;
	iLocal_2685[4] = joaat("manana");
	Local_2489[1 /*3*/] = { -1033.717f, -2949.014f, 13.4922f };
	fLocal_1209[1] = 0.0032f;
	fLocal_1225[1] = -0.0003f;
	fLocal_1241[1] = -0.0255f;
	fLocal_1257[1] = 0.9997f;
	iLocal_2861[1] = joaat("bison2");
	Local_2535[0 /*3*/] = { -1178.365f, -2845.981f, 13.9027f };
	fLocal_993[0] = 0.0018f;
	fLocal_1029[0] = 0.0123f;
	fLocal_1065[0] = 0.9644f;
	fLocal_1101[0] = 0.2642f;
	iLocal_1822[0] = 9;
	fLocal_1137[0] = 22357f;
	fLocal_1173[0] = 1f;
	iLocal_2877[0] = joaat("buzzard");
	Local_2535[1 /*3*/] = { -1376.197f, -2755.167f, 14.0646f };
	fLocal_993[1] = -0.0012f;
	fLocal_1029[1] = 0.0013f;
	fLocal_1065[1] = 0.8439f;
	fLocal_1101[1] = -0.5365f;
	iLocal_1822[1] = 10;
	fLocal_1137[1] = 27135f;
	fLocal_1173[1] = 1f;
	iLocal_2877[1] = joaat("packer");
	Local_2535[2 /*3*/] = { -1342.543f, -2688.482f, 22.8254f };
	fLocal_993[2] = 0.0057f;
	fLocal_1029[2] = -0.0014f;
	fLocal_1065[2] = -0.2451f;
	fLocal_1101[2] = 0.9695f;
	iLocal_1822[2] = 11;
	fLocal_1137[2] = 35135f;
	fLocal_1173[2] = 1f;
	iLocal_2877[2] = joaat("jet");
	Local_2535[3 /*3*/] = { -898.3506f, -2698.965f, 20.159f };
	fLocal_993[3] = 0.0065f;
	fLocal_1029[3] = 0.0191f;
	fLocal_1065[3] = -0.2629f;
	fLocal_1101[3] = 0.9646f;
	iLocal_1822[3] = 3;
	fLocal_1137[3] = 6764f;
	fLocal_1173[3] = 1f;
	iLocal_2877[3] = joaat("bus");
	Local_2535[4 /*3*/] = { -576.655f, -2231.905f, 5.2834f };
	fLocal_993[4] = 0.0043f;
	fLocal_1029[4] = 0.0331f;
	fLocal_1065[4] = -0.3125f;
	fLocal_1101[4] = 0.9493f;
	iLocal_1822[4] = 4;
	fLocal_1137[4] = 2102f;
	fLocal_1173[4] = 1f;
	iLocal_2877[4] = joaat("bison");
	Local_2535[5 /*3*/] = { -994.9925f, -3154.125f, 23.1145f };
	fLocal_993[5] = 0.0056f;
	fLocal_1029[5] = 0.0029f;
	fLocal_1065[5] = 0.4915f;
	fLocal_1101[5] = 0.8708f;
	iLocal_1822[5] = 21;
	fLocal_1137[5] = 92500f;
	fLocal_1173[5] = 1f;
	iLocal_2877[5] = joaat("jet");
	Local_2535[7 /*3*/] = { -553.3315f, -2073.951f, 6.8909f };
	fLocal_993[7] = 0.0072f;
	fLocal_1029[7] = 0.0176f;
	fLocal_1065[7] = 0.9739f;
	fLocal_1101[7] = -0.2263f;
	iLocal_1822[7] = 54;
	fLocal_1137[7] = 0f;
	fLocal_1173[7] = 1f;
	iLocal_2877[7] = joaat("police3");
	Local_2535[8 /*3*/] = { -561.7264f, -2076.761f, 6.7664f };
	fLocal_993[8] = -0.027f;
	fLocal_1029[8] = 0.0016f;
	fLocal_1065[8] = 0.9169f;
	fLocal_1101[8] = -0.3981f;
	iLocal_1822[8] = 108;
	fLocal_1137[8] = 150f;
	fLocal_1173[8] = 1f;
	iLocal_2877[8] = joaat("police3");
	Local_2535[11 /*3*/] = { -1563.918f, -2745.409f, 13.5643f };
	fLocal_993[11] = -0.0022f;
	fLocal_1029[11] = -0.0019f;
	fLocal_1065[11] = 0.928f;
	fLocal_1101[11] = -0.3726f;
	iLocal_1822[11] = 111;
	fLocal_1137[11] = 36000f;
	fLocal_1173[11] = 1f;
	iLocal_2877[11] = joaat("police3");
	Local_2535[12 /*3*/] = { -1026.024f, -2336.396f, 13.5678f };
	fLocal_993[12] = -0.0083f;
	fLocal_1029[12] = -0.0054f;
	fLocal_1065[12] = 0.55f;
	fLocal_1101[12] = 0.8351f;
	iLocal_1822[12] = 112;
	fLocal_1137[12] = 60000f;
	fLocal_1173[12] = 1f;
	iLocal_2877[12] = joaat("police3");
	Local_2535[13 /*3*/] = { -1013.316f, -2340.457f, 13.5678f };
	fLocal_993[13] = -0.0086f;
	fLocal_1029[13] = -0.005f;
	fLocal_1065[13] = 0.5052f;
	fLocal_1101[13] = 0.8629f;
	iLocal_1822[13] = 113;
	fLocal_1137[13] = 60000f;
	fLocal_1173[13] = 1f;
	iLocal_2877[13] = joaat("police3");
	Local_2535[14 /*3*/] = { -1221.049f, -2731.169f, 13.5681f };
	fLocal_993[14] = -0.0083f;
	fLocal_1029[14] = -0.0057f;
	fLocal_1065[14] = 0.6469f;
	fLocal_1101[14] = 0.7625f;
	iLocal_1822[14] = 61;
	fLocal_1137[14] = 80000f;
	fLocal_1173[14] = 1f;
	iLocal_2877[14] = joaat("police3");
	Local_2535[15 /*3*/] = { -1227.203f, -2735.872f, 13.568f };
	fLocal_993[15] = -0.0041f;
	fLocal_1029[15] = -0.0091f;
	fLocal_1065[15] = 0.9133f;
	fLocal_1101[15] = 0.4072f;
	iLocal_1822[15] = 62;
	fLocal_1137[15] = 80000f;
	fLocal_1173[15] = 1f;
	iLocal_2877[15] = joaat("police3");
	Local_2535[19 /*3*/] = { -1240.048f, -2203.457f, 14.0347f };
	fLocal_993[19] = 0.0002f;
	fLocal_1029[19] = 0.0018f;
	fLocal_1065[19] = 0.9611f;
	fLocal_1101[19] = -0.2763f;
	iLocal_1822[19] = 66;
	fLocal_1137[19] = 55125f;
	fLocal_1173[19] = 1f;
	iLocal_2877[19] = joaat("firetruk");
	Local_2535[20 /*3*/] = { -438.0192f, -2060.751f, 73.6354f };
	fLocal_993[20] = -0.0005f;
	fLocal_1029[20] = 0.0018f;
	fLocal_1065[20] = 0.9559f;
	fLocal_1101[20] = 0.2938f;
	iLocal_1822[20] = 67;
	fLocal_1137[20] = 0f;
	fLocal_1173[20] = 1f;
	iLocal_2877[20] = joaat("maverick");
	Local_2535[21 /*3*/] = { -546.8047f, -2187.925f, 5.8819f };
	fLocal_993[21] = -0.0252f;
	fLocal_1029[21] = -0.0034f;
	fLocal_1065[21] = 0.9369f;
	fLocal_1101[21] = 0.3487f;
	iLocal_1822[21] = 5;
	fLocal_1137[21] = 3834f;
	fLocal_1173[21] = 1f;
	iLocal_2877[21] = joaat("blista");
	Local_2535[22 /*3*/] = { -1001.674f, -2947.732f, 13.3947f };
	fLocal_993[22] = 0.001f;
	fLocal_1029[22] = -0.0004f;
	fLocal_1065[22] = 0.8616f;
	fLocal_1101[22] = 0.5075f;
	iLocal_1822[22] = 6;
	fLocal_1137[22] = 20176f;
	fLocal_1173[22] = 1f;
	iLocal_2877[22] = joaat("airtug");
	Local_2535[23 /*3*/] = { -1249.588f, -2525.9f, 13.3942f };
	fLocal_993[23] = 0.001f;
	fLocal_1029[23] = -0.0001f;
	fLocal_1065[23] = 0.9749f;
	fLocal_1101[23] = -0.2228f;
	iLocal_1822[23] = 7;
	fLocal_1137[23] = 48538f;
	fLocal_1173[23] = 1f;
	iLocal_2877[23] = joaat("airtug");
	Local_2535[24 /*3*/] = { -1362.538f, -2625.609f, 13.3895f };
	fLocal_993[24] = -0.0001f;
	fLocal_1029[24] = 0.0018f;
	fLocal_1065[24] = 0.5344f;
	fLocal_1101[24] = 0.8452f;
	iLocal_1822[24] = 8;
	fLocal_1137[24] = 75112f;
	fLocal_1173[24] = 1f;
	iLocal_2877[24] = joaat("airtug");
}

void func_308(char* sParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	
	StringCopy(&cLocal_2668, sParam0, 64);
	bLocal_85 = true;
	iLocal_90 = 0;
	iLocal_1946 = 0;
	iLocal_1947 = 0;
	iLocal_1948 = 0;
	iLocal_1949 = iParam1;
	iLocal_1950 = 0;
	iLocal_1951 = 0;
	iLocal_1952 = 0;
	iLocal_1956 = 0;
	iLocal_1959 = 0;
	iLocal_1957 = -1;
	iLocal_1958 = -1;
	iLocal_1960 = 0;
	iLocal_1961 = 0;
	fLocal_1289 = 0f;
	fLocal_1290 = 0f;
	fLocal_1275 = 0f;
	iLocal_91 = 0;
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		Var0 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) };
		Local_2644.f_0 = (Var0.f_0 - 100f);
		Local_2644.f_1 = (Var0.f_1 - 100f);
		Local_2644.f_2 = (Var0.f_2 - 100f);
		Local_2647.f_0 = (Var0.f_0 + 100f);
		Local_2647.f_1 = (Var0.f_1 + 100f);
		Local_2647.f_2 = (Var0.f_2 + 100f);
		unk_0x39895086D78BEA60(Local_2644, Local_2647, 0, 0);
		if (bParam2)
		{
			unk_0xC797AB6C3A6482E1(Var0, 500f, 0, 0, 0, 0, 0);
		}
	}
	unk_0x103FCC2BD24292A3("rgh_traffic", &iLocal_2684);
	func_297();
	if (bParam3)
	{
		func_161(1);
	}
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		unk_0x33E519C1449D7A54(unk_0x3F80C6638E3A1A90(), 0);
		unk_0x0DC2F8EF73751B15(0);
	}
	func_166();
}

void func_309()
{
	if (iLocal_3181 == 0)
	{
		unk_0xD73158C5794398B4(0f, 14f, 4);
		if (iLocal_3345 == 1)
		{
			func_104();
			iLocal_3345 = 0;
		}
		iLocal_3359 = 0;
		iLocal_3360 = 0;
		iLocal_3362 = 0;
		iLocal_3364 = 0;
		iLocal_3379 = 0;
		iLocal_3327 = 0;
		iLocal_3328 = 0;
		iLocal_3331 = 0;
		iLocal_3333 = 0;
		iLocal_3334 = 0;
		iLocal_3335 = 0;
		iLocal_3336 = 0;
		iLocal_3337 = 0;
		iLocal_3338 = 0;
		iLocal_3343 = 0;
		iLocal_3352 = 0;
		iLocal_3350 = 0;
		iLocal_3439 = 0;
		iLocal_3442 = 0;
		iLocal_3523 = 0;
		iLocal_3378 = 0;
		iLocal_3351 = 1;
		iLocal_3185 = 0;
		if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
		{
			iLocal_3361 = 1;
		}
		else
		{
			iLocal_3361 = 0;
		}
		func_17(&uLocal_3578, 0, unk_0xE7869D5D7816A9B6(), "MICHAEL", 0, 1);
		unk_0x7195FF09321CD5EC(1);
		unk_0x39895086D78BEA60(-617f, -2274f, 0f, -406.01f, -2044f, 15f, 0, 1);
		iLocal_3188 = unk_0x9D40BBF80D8F5E8A();
		if (unk_0xAEF17BDE274A1247())
		{
			if (!func_24())
			{
				unk_0x899C0AB969919A6A(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1));
			}
			func_21(0, -1, 1);
			unk_0xC1F2137782A816E9(&iLocal_3259);
			unk_0xC1F2137782A816E9(&iLocal_3276);
			unk_0xC1F2137782A816E9(&iLocal_3277);
		}
		if (!unk_0xDE185266FE919B68())
		{
			unk_0x2D3BB3EF936C4B76(800);
		}
		if (!unk_0xD11595488376CB53(uLocal_3287))
		{
			uLocal_3287 = func_314(Local_3300, 0);
		}
		unk_0xE72D045151F6CA70("TRV4_GAMEPLAY_START");
		Local_3318 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) };
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1)
	{
		if (iLocal_3350 == 0 && iLocal_3364 == 1)
		{
			if (!func_228() || !unk_0xA7E452C0F82F7C56())
			{
				func_20("TRV4_GO1", 7500, 1);
				iLocal_3350 = 1;
			}
		}
		if (iLocal_3378 == 0 && !func_313())
		{
			if (unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), Local_3300, 1) < 800f)
			{
				iLocal_3187 = unk_0x0ADD324BC46177EF(0, 2);
				if (iLocal_3187 == 0)
				{
					unk_0xD079B121AAC8BC2A("SCRIPTED_SCANNER_REPORT_Sol_3_01", 0f);
					unk_0xD73158C5794398B4(0f, 6f, 3);
					iLocal_3378 = 1;
				}
				if (iLocal_3187 == 1)
				{
					unk_0xD079B121AAC8BC2A("SCRIPTED_SCANNER_REPORT_Sol_3_02", 0f);
					unk_0xD73158C5794398B4(0f, 6f, 3);
					iLocal_3378 = 1;
				}
			}
		}
		if (unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), Local_3300, 1) < 600f)
		{
			if (!unk_0xD51CFE69539DB6D8(iLocal_3258))
			{
				unk_0x801429C020C467BA(joaat("cogcabrio"));
				if (unk_0x5053BF6D5604065B(joaat("cogcabrio")))
				{
					iLocal_3258 = unk_0xD504D1FF5DD2FFD7(joaat("cogcabrio"), -428.0226f, -2153.558f, 9.2992f, 90.9098f, 1, 1);
					unk_0xD39141689169EF06(iLocal_3258, 0, 1, 1, 1, 0, 0, 0, 0);
					unk_0x408AD7E5AD0BB545(iLocal_3258, 27, 27);
					unk_0x839E9476E54502A2(joaat("cogcabrio"));
					unk_0x28EB71E26B7A2DE2(iLocal_3258, "SOL_3_MOLLY_CAR_Group", 0);
				}
			}
			if (!unk_0xD51CFE69539DB6D8(iLocal_3222))
			{
				unk_0x801429C020C467BA(joaat("ig_molly"));
				if (unk_0x5053BF6D5604065B(joaat("ig_molly")))
				{
					if (unk_0xD51CFE69539DB6D8(iLocal_3258))
					{
						if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
						{
							iLocal_3222 = unk_0xF430A9686E704FA3(iLocal_3258, 26, joaat("ig_molly"), -1, 1, 1);
							unk_0x2EF7A8CB89D363F6(iLocal_3222, 1);
							unk_0x321C1AA209172C00(iLocal_3222, 0);
							unk_0x839E9476E54502A2(joaat("cogcabrio"));
							unk_0x839E9476E54502A2(joaat("ig_molly"));
							unk_0x690C5239500171FE(iLocal_3222, joaat("player"));
							iLocal_3360 = 1;
						}
					}
				}
			}
		}
		else
		{
			if (unk_0xD51CFE69539DB6D8(iLocal_3222))
			{
				unk_0x2C9DDB5306DF417C(&iLocal_3222);
			}
			if (unk_0xD51CFE69539DB6D8(iLocal_3258))
			{
				unk_0x9E55BD45B84E7BDC(&iLocal_3258);
			}
		}
		if (unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), Local_3300, 1) < 500f)
		{
			if (iLocal_3362 == 0)
			{
				uLocal_3293 = unk_0xE3C796DC28BC3254("BREAKING_NEWS");
				unk_0x801429C020C467BA(joaat("police3"));
				unk_0x801429C020C467BA(joaat("maverick"));
				unk_0x801429C020C467BA(joaat("bison"));
				unk_0x801429C020C467BA(joaat("blista"));
				unk_0xDBDFBE5906702D9E(45, "BB_Chase");
				unk_0xDBDFBE5906702D9E(35, "BB_Chase");
				unk_0xDBDFBE5906702D9E(2, "BB_Chase");
				unk_0xDBDFBE5906702D9E(54, "BB_Chase");
				unk_0xDBDFBE5906702D9E(55, "BB_Chase");
				unk_0xDBDFBE5906702D9E(67, "BB_Chase");
				func_158(1, "BB_Chase");
				unk_0x062A4B39164546AD("TRV4_CHASE");
				iLocal_3362 = 1;
			}
		}
		else if (iLocal_3362 == 1)
		{
			unk_0x839E9476E54502A2(joaat("police3"));
			unk_0x839E9476E54502A2(joaat("maverick"));
			unk_0x839E9476E54502A2(joaat("bison"));
			unk_0x839E9476E54502A2(joaat("blista"));
			unk_0xFC8E26A6FE4C2E54(45, "BB_Chase");
			unk_0xFC8E26A6FE4C2E54(35, "BB_Chase");
			unk_0xFC8E26A6FE4C2E54(2, "BB_Chase");
			unk_0xFC8E26A6FE4C2E54(54, "BB_Chase");
			unk_0xFC8E26A6FE4C2E54(55, "BB_Chase");
			unk_0xFC8E26A6FE4C2E54(67, "BB_Chase");
			func_312(1, "BB_Chase");
			unk_0x384203CA8728BC4D("TRV4_CHASE");
			iLocal_3362 = 0;
		}
		if (iLocal_3379 == 0)
		{
			if (unk_0x9D40BBF80D8F5E8A() > (iLocal_3188 + 135000))
			{
				unk_0x00400F14096FE01D();
				func_20("TRV4_WARN1", 7500, 1);
				iLocal_3188 = unk_0x9D40BBF80D8F5E8A();
				iLocal_3379 = 1;
			}
		}
		if (iLocal_3379 == 1)
		{
			if (unk_0x9D40BBF80D8F5E8A() > (iLocal_3188 + 135000))
			{
				func_206("TRV4_FAIL1");
			}
		}
		if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
		{
			if (!unk_0x64C1636D480771D9("SOL_3_DRIVE_TO_AIRPORT"))
			{
				unk_0x91523366B2FDCD40("SOL_3_DRIVE_TO_AIRPORT");
			}
			if (iLocal_3439 == 0)
			{
				unk_0xE72D045151F6CA70("TRV4_CAR_ENTERED");
				iLocal_3439 = 1;
			}
			if (!unk_0xD51CFE69539DB6D8(iLocal_3259))
			{
				iLocal_3259 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
				unk_0xD39141689169EF06(iLocal_3259, 0, 1, 0, 0, 0, 0, 0, 0);
				unk_0x2EA9D513624CAB16(iLocal_3259);
				unk_0x8100F8AA27EE924B(iLocal_3259, 1);
			}
		}
		else if (unk_0xD51CFE69539DB6D8(iLocal_3259))
		{
			if (unk_0xC45A34912542C4EB(iLocal_3259, 0))
			{
				if (iLocal_3361 == 0)
				{
					unk_0xD39141689169EF06(iLocal_3259, 0, 0, 0, 0, 0, 0, 0, 0);
					iLocal_3361 = 1;
				}
				if (iLocal_3353 == 1)
				{
					unk_0x814812A00D591F4F(iLocal_3259);
					iLocal_3353 = 0;
				}
				if (unk_0x4C5CA989AEF3A14C(iLocal_3259, 1))
				{
					unk_0xC1F2137782A816E9(&iLocal_3259);
				}
			}
		}
		if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
		{
			if (iLocal_3442 == 0)
			{
				unk_0xA7D7FAE7DD97EE11(156, 1, 0);
				unk_0x5AF829C0C279A2A5(-244f, -1842.74f, 28.48f);
				unk_0x5AF829C0C279A2A5(-1.5f, -2014.4f, 11.5f);
				unk_0x5AF829C0C279A2A5(-498.7f, -2136.5f, 8.4f);
				unk_0x680E7900A7AC1C49(1);
				iLocal_3442 = 1;
			}
		}
		else if (iLocal_3442 == 1)
		{
			unk_0x680E7900A7AC1C49(0);
			iLocal_3442 = 0;
		}
		if ((iLocal_3362 == 1 && unk_0xD51CFE69539DB6D8(iLocal_3258)) && unk_0xD51CFE69539DB6D8(iLocal_3222))
		{
			if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
			{
				if (unk_0x3D06E0340496855A(iLocal_3258, func_311(unk_0xE7869D5D7816A9B6()), 0))
				{
					func_310();
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 3;
				}
			}
			if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
			{
				if (unk_0xBC273BCD46110BE6(unk_0x3F80C6638E3A1A90(), iLocal_3258))
				{
					func_310();
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 3;
				}
			}
			if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
			{
				if (unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), unk_0x1141852D07400777(iLocal_3258, 1), 200f, 132f, 100f, 0, 1, 0))
				{
					iLocal_3359 = 0;
					func_310();
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 3;
				}
			}
			if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
			{
				if (unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), -577f, -2051.5f, 7f, 84f, 87.5f, 15f, 0, 1, 0))
				{
					iLocal_3359 = 1;
					func_310();
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 3;
				}
			}
			if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
			{
				if (unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), -703.5f, -1969.5f, 10f, 53.5f, 62.5f, 10f, 0, 1, 0))
				{
					unk_0x5288DF8B264BDD67();
					unk_0x7195FF09321CD5EC(0);
					iLocal_3359 = 1;
					func_310();
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 3;
				}
			}
		}
	}
}

void func_310()
{
	while (((!unk_0x5053BF6D5604065B(joaat("police3")) || !unk_0x5053BF6D5604065B(joaat("maverick"))) || !unk_0x5053BF6D5604065B(joaat("bison"))) || !unk_0x5053BF6D5604065B(joaat("blista")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (((((!unk_0x08F84BB137ADEE81(45, "BB_Chase") || !unk_0x08F84BB137ADEE81(35, "BB_Chase")) || !unk_0x08F84BB137ADEE81(2, "BB_Chase")) || !unk_0x08F84BB137ADEE81(54, "BB_Chase")) || !unk_0x08F84BB137ADEE81(55, "BB_Chase")) || !unk_0x08F84BB137ADEE81(67, "BB_Chase"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

var func_311(int iParam0)
{
	var uVar0;
	
	unk_0x5E99B63A819500A5(iParam0, &uVar0, 1);
	return uVar0;
}

void func_312(int iParam0, char* sParam1)
{
	unk_0xFC8E26A6FE4C2E54(iParam0, sParam1);
}

int func_313()
{
	if (Global_15712 == 4)
	{
		if (unk_0xD6F17BA188A65E8F())
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
	
	uVar0 = unk_0x3779A616B93955A6(Param0);
	unk_0xFC630C7120A34CE4(uVar0, func_203(unk_0x00AAD79B42B3E036(), 1f, 1f));
	unk_0x1AD7485666C5160C(uVar0, iParam3);
	return uVar0;
}

void func_315()
{
	if (iLocal_3181 == 0)
	{
		iLocal_3338 = 1;
		iLocal_3467 = 0;
		iLocal_3488 = 0;
		iLocal_3506 = 0;
		while (iLocal_3338 == 1)
		{
			unk_0xE10447427D928F55("M_LegalTrouble", 0);
			switch (iLocal_3183)
			{
				case 0:
					unk_0x21CDC0BA99DF1B1B("sol_3_int", 8);
					if (func_359())
					{
						while (!func_331(61, &uLocal_3743, 0, 1, 0, 0, 0))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						iLocal_3438 = 0;
						unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), false, 0);
						func_191(1, 1, 1, 0);
						unk_0x5AF2634ABA4DA81D(unk_0xE7869D5D7816A9B6(), "Michael", 0, 0, 0);
						if (unk_0xD51CFE69539DB6D8(Global_87855[0]))
						{
							if (unk_0xC45A34912542C4EB(Global_87855[0], 0))
							{
								unk_0x20BB4B94CC6DDC9A(Global_87855[0], 1, 1);
								iLocal_3259 = Global_87855[0];
							}
						}
						if (unk_0xD51CFE69539DB6D8(Global_87855[1]))
						{
							if (unk_0xC45A34912542C4EB(Global_87855[1], 0))
							{
								unk_0x20BB4B94CC6DDC9A(Global_87855[1], 1, 1);
								iLocal_3276 = Global_87855[1];
							}
						}
						if (unk_0xD51CFE69539DB6D8(Global_87855[2]))
						{
							if (unk_0xC45A34912542C4EB(Global_87855[2], 0))
							{
								unk_0x20BB4B94CC6DDC9A(Global_87855[2], 1, 1);
								iLocal_3277 = Global_87855[2];
							}
						}
						if (unk_0xD51CFE69539DB6D8(Global_87855[3]))
						{
							if (unk_0xC45A34912542C4EB(Global_87855[3], 0))
							{
								unk_0x20BB4B94CC6DDC9A(Global_87855[3], 1, 1);
								iLocal_3278 = Global_87855[3];
							}
						}
						unk_0x9E2BC25163283628(0);
						unk_0x79B550FADF7D3978(4);
						func_330();
						if (!unk_0xDE185266FE919B68())
						{
							unk_0x2D3BB3EF936C4B76(250);
						}
						iLocal_3183++;
					}
					break;
				
				case 1:
					if (iLocal_3467 == 0)
					{
						if (unk_0x9E77A197C8591F81())
						{
							if (iLocal_3506 == 0)
							{
								if (unk_0xD51CFE69539DB6D8(iLocal_3278))
								{
									if (unk_0xC45A34912542C4EB(iLocal_3278, 0))
									{
										if (unk_0xFFD2CE10E8C7E77F(unk_0x1B2DC87EFB36DF80(iLocal_3278)))
										{
											unk_0xD390C3A4EAD66C38(iLocal_3278, 2);
											unk_0x88A973CE47FBEF95(iLocal_3278, -1048.722f, -506.8387f, 35.0386f, 1, 0, 0, 1);
											unk_0x151F32CB40BE730C(iLocal_3278, 357.1288f);
											unk_0x32C67B8F6CBD9B6A(iLocal_3278, 1);
											unk_0xC9CEB5227A733CE6(iLocal_3278);
											func_320(-1048.722f, -506.8387f, 35.0386f, 357.1288f, 0, 145);
											iLocal_3506 = 1;
										}
										if (((unk_0x3937C84F74FAABA4(unk_0x1B2DC87EFB36DF80(iLocal_3278)) || unk_0x07C6F7E084F6A97E(unk_0x1B2DC87EFB36DF80(iLocal_3278))) || unk_0x48E903ADD98A5FDD(unk_0x1B2DC87EFB36DF80(iLocal_3278))) || unk_0x7BB0AC45FF0A3A28(unk_0x1B2DC87EFB36DF80(iLocal_3278)))
										{
											if ((((((((unk_0x1B2DC87EFB36DF80(iLocal_3278) != joaat("bus") && unk_0x1B2DC87EFB36DF80(iLocal_3278) != joaat("pounder")) && unk_0x1B2DC87EFB36DF80(iLocal_3278) != joaat("packer")) && unk_0x1B2DC87EFB36DF80(iLocal_3278) != joaat("airbus")) && unk_0x1B2DC87EFB36DF80(iLocal_3278) != joaat("ambulance")) && unk_0x1B2DC87EFB36DF80(iLocal_3278) != joaat("barracks")) && unk_0x1B2DC87EFB36DF80(iLocal_3278) != joaat("barracks2")) && unk_0x1B2DC87EFB36DF80(iLocal_3278) != joaat("benson")) && unk_0x1B2DC87EFB36DF80(iLocal_3278) != joaat("biff"))
											{
												unk_0x88A973CE47FBEF95(iLocal_3278, -1027.657f, -486.6945f, 35.9571f, 1, 0, 0, 1);
												unk_0x151F32CB40BE730C(iLocal_3278, 207.7515f);
												unk_0xC9CEB5227A733CE6(iLocal_3278);
												func_320(-1027.657f, -486.6945f, 35.9571f, 207.7515f, 0, 145);
												iLocal_3506 = 1;
											}
										}
										if ((((!unk_0xFFD2CE10E8C7E77F(unk_0x1B2DC87EFB36DF80(iLocal_3278)) && !unk_0x3937C84F74FAABA4(unk_0x1B2DC87EFB36DF80(iLocal_3278))) && !unk_0x07C6F7E084F6A97E(unk_0x1B2DC87EFB36DF80(iLocal_3278))) && !unk_0x48E903ADD98A5FDD(unk_0x1B2DC87EFB36DF80(iLocal_3278))) && !unk_0x7BB0AC45FF0A3A28(unk_0x1B2DC87EFB36DF80(iLocal_3278)))
										{
											unk_0x9E55BD45B84E7BDC(&iLocal_3278);
											iLocal_3506 = 1;
										}
									}
								}
							}
							func_318(&uLocal_3743, 0, 0, 2000, 1, 1, 0, 1);
							iLocal_3467 = 1;
						}
					}
					if (iLocal_3438 == 0)
					{
						unk_0x103FCC2BD24292A3("SecGuards", &iLocal_3576);
						unk_0xA9CA101B50B90993(5, joaat("player"), iLocal_3576);
						unk_0xA9CA101B50B90993(5, iLocal_3576, joaat("player"));
						unk_0x36A3D6FBED10EF81("TREV4", 0);
						iLocal_3438 = 1;
					}
					if (iLocal_3488 == 0)
					{
						if (unk_0x2DFE588AA3727FE3())
						{
							unk_0x1E08281A4D8EAD3C(unk_0xE7869D5D7816A9B6());
							unk_0x7F23A2D4447DE514(unk_0xE7869D5D7816A9B6());
							unk_0x3AD329DE11B91356(unk_0xE7869D5D7816A9B6());
							if (unk_0x68AF03D99AD6FE8E() > 120000)
							{
								unk_0xE72D045151F6CA70("TRV4_START");
								iLocal_3488 = 1;
							}
						}
					}
					if (unk_0x22400A8448EEFFA3("Michael", 0))
					{
						unk_0x88A973CE47FBEF95(unk_0xE7869D5D7816A9B6(), -1012.268f, -480.0742f, 38.9757f, 1, 0, 0, 1);
						unk_0x151F32CB40BE730C(unk_0xE7869D5D7816A9B6(), 121.4087f);
						unk_0xE441EC6EE6C2D7EB(unk_0x3F80C6638E3A1A90(), 2f, 3000, 0, 1, 0);
						unk_0xA573D5E64CDFAF83(unk_0xE7869D5D7816A9B6(), 0, 0);
						unk_0x29F3FAC40F745C80(unk_0xE7869D5D7816A9B6(), joaat("MotionState_Run"), 0, 0, 0);
					}
					if (unk_0xEBEC23E21F26CB82(0))
					{
						unk_0x7FB81B1DD14A3BE4(0f);
					}
					if (!unk_0x9E77A197C8591F81())
					{
						func_317(61);
						if (iLocal_3488 == 0)
						{
							unk_0xE72D045151F6CA70("TRV4_START_CS_SKIP");
							iLocal_3488 = 1;
						}
						unk_0xAA3EE135C1B3E902();
						func_191(0, 1, 1, 0);
						iLocal_3183++;
					}
					break;
				
				case 2:
					unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), true, 0);
					if (unk_0xD51CFE69539DB6D8(iLocal_3259))
					{
						if (unk_0xC45A34912542C4EB(iLocal_3259, 0))
						{
							if (unk_0x4C5CA989AEF3A14C(iLocal_3259, 1))
							{
								unk_0xC1F2137782A816E9(&iLocal_3259);
							}
						}
					}
					if (unk_0xD51CFE69539DB6D8(iLocal_3276))
					{
						if (unk_0xC45A34912542C4EB(iLocal_3276, 0))
						{
							if (unk_0x4C5CA989AEF3A14C(iLocal_3276, 1))
							{
								unk_0xC1F2137782A816E9(&iLocal_3276);
							}
						}
					}
					if (unk_0xD51CFE69539DB6D8(iLocal_3277))
					{
						if (unk_0xC45A34912542C4EB(iLocal_3277, 0))
						{
							if (unk_0x4C5CA989AEF3A14C(iLocal_3277, 1))
							{
								unk_0xC1F2137782A816E9(&iLocal_3277);
							}
						}
					}
					func_316();
					iLocal_3338 = 0;
					iLocal_3183 = 0;
					iLocal_3181 = 0;
					iLocal_3180 = 2;
					break;
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
}

void func_316()
{
	Global_55584 = 0;
}

void func_317(int iParam0)
{
	if (Global_88280 != -1)
	{
		if (iParam0 == Global_88280)
		{
			Global_88284 = 1;
			return;
		}
	}
}

void func_318(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	
	if (iParam4 == 1)
	{
		unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), unk_0x4844BC1882594FDB(unk_0x3F80C6638E3A1A90()), 64);
	}
	if (!unk_0x2DFE588AA3727FE3())
	{
		unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
		{
			unk_0x60F73C5C71B102FE(unk_0xE7869D5D7816A9B6(), 1);
		}
	}
	if (!bParam1 && iParam6)
	{
		unk_0x83AD6129F0CF8C94(0, 0, 3, 0);
	}
	else
	{
		unk_0x538689EF05955EF7(bParam1, iParam2, iParam3, 1, 0, 0);
	}
	if (bParam1)
	{
		unk_0x1D208E4A4E1D4FFE(1);
	}
	else
	{
		if (unk_0xCF686B56FD5328B5(uParam0->f_4))
		{
			if (unk_0x64DEF1DE79E83BEB(uParam0->f_4))
			{
				unk_0x63498CF6CF35C6A2(uParam0->f_4, 0);
			}
			unk_0x74FF6D08DE291367(uParam0->f_4, 1);
		}
		if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
		{
			unk_0x60365B5AF8BF1FFA(unk_0xE7869D5D7816A9B6(), 1, 0);
		}
		iVar0 = unk_0xA0B1717D806F4901();
		if (unk_0xD51CFE69539DB6D8(iVar0))
		{
			unk_0x60365B5AF8BF1FFA(iVar0, 1, 0);
		}
		unk_0x9694B1DF874054DF("TIME_LAPSE");
		if (unk_0x64C1636D480771D9("TOD_SHIFT_SCENE"))
		{
			unk_0x3948245C8BD5EDA0(uParam0->f_10);
			unk_0x9694B1DF874054DF("TIME_LAPSE");
			unk_0x61B624BA2305D0E5("TOD_SHIFT_SCENE");
		}
	}
	func_191(bParam1, 1, 0, 0);
	func_319();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			unk_0xC04B4A958D92C873(uParam0->f_7, 0, 0);
		}
		else
		{
			unk_0xC04B4A958D92C873(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (unk_0xAEF17BDE274A1247())
		{
			unk_0x2D3BB3EF936C4B76(250);
		}
	}
	if (!bParam1)
	{
		if (Global_99155.f_18731.f_4801 != -15)
		{
			Global_99155.f_18731.f_4801 = func_80();
		}
	}
}

void func_319()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		unk_0x2D0D8484B149761E(Global_99155.f_12755[iVar0 /*104*/].f_16);
		iVar0++;
	}
}

void func_320(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	var uVar3;
	
	if (unk_0xD51CFE69539DB6D8(Global_92815.f_4))
	{
		if (unk_0xC45A34912542C4EB(Global_92815.f_4, 0))
		{
			if (func_329(24) != Global_92815.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_326(unk_0x1141852D07400777(Global_92815.f_4, 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_321(Global_92815.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_321(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0xD51CFE69539DB6D8(iParam0) && unk_0xC45A34912542C4EB(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0xD51CFE69539DB6D8(Global_68105.f_484[25]) && unk_0xC45A34912542C4EB(Global_68105.f_484[25], 0))
			{
				if (Global_68105.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0xF54ECC20AEF6A194(iParam0) || unk_0x1B2DC87EFB36DF80(iParam0) == joaat("bus")) || unk_0x1B2DC87EFB36DF80(iParam0) == joaat("tourbus"))
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
			Param1 = { unk_0x1141852D07400777(iParam0, 1) };
			fParam4 = unk_0x2CAFFCD9F5E16D2F(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0xC7C6DDDE84A8E734(unk_0x959E7FA37C0D0892()) != joaat("vehicle_gen_controller"))
			{
				Global_69093 = unk_0xC7C6DDDE84A8E734(unk_0x959E7FA37C0D0892());
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
	if (!func_140(&(Global_68105.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xB519E5386FBF69E5(Global_68105.f_555[0 /*21*/].f_9, 12) && !unk_0xB519E5386FBF69E5(Global_68105.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_68105.f_555[0 /*21*/].f_4 != unk_0x1B2DC87EFB36DF80(iParam1))
		{
			return;
		}
	}
	if (Global_69012 != -1 && Global_69012 != iParam0)
	{
		return;
	}
	if (unk_0xD51CFE69539DB6D8(iParam1))
	{
		if (unk_0xC45A34912542C4EB(iParam1, 0))
		{
			if (!unk_0x28D33422BA6C479D(iParam1))
			{
				unk_0x20BB4B94CC6DDC9A(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_99155.f_18731.f_4801 = func_80();
			}
			if (iParam1 != Global_68105.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_329(iParam0);
					if ((unk_0xD51CFE69539DB6D8(iVar0) && unk_0xC45A34912542C4EB(iVar0, 0)) && iParam1 != iVar0)
					{
						func_126(iVar0, 145);
					}
				}
				Global_69011 = iParam1;
				Global_69012 = iParam0;
				Global_69013 = iParam2;
			}
		}
	}
}

void func_323(int iParam0, var uParam1, struct<3> Param2, float fParam5, int iParam6)
{
	if (func_140(&(Global_68105.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xB519E5386FBF69E5(Global_68105.f_555[0 /*21*/].f_9, 10))
		{
			func_324(iParam0);
			func_137(uParam1, &(Global_99155.f_18731.f_69[Global_68105.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0xB519E5386FBF69E5(Global_68105.f_555[0 /*21*/].f_9, 11))
			{
				Global_99155.f_18731.f_1864[Global_68105.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_99155.f_18731.f_1934[Global_68105.f_555[0 /*21*/].f_14] = fParam5;
			}
			else
			{
				Global_99155.f_18731.f_1864[Global_68105.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_99155.f_18731.f_1934[Global_68105.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_99155.f_18731.f_1958[Global_68105.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_133(iParam0, 1);
		}
	}
}

void func_324(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_140(&(Global_68105.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xD51CFE69539DB6D8(Global_68105.f_139[iParam0]))
		{
			unk_0x20BB4B94CC6DDC9A(Global_68105.f_139[iParam0], 1, 1);
			unk_0xC1F2137782A816E9(&(Global_68105.f_139[iParam0]));
			Global_68105.f_139[iParam0] = 0;
		}
		if (unk_0xB519E5386FBF69E5(Global_68105.f_555[0 /*21*/].f_9, 13))
		{
			func_133(iParam0, 0);
		}
	}
}

void func_325(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_324(iParam0);
	func_133(iParam0, 0);
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
		if (Global_86396[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_86396[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_328(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0xF18329472591CFE6(Param0, Global_86396[iVar0 /*10*/].f_3, 1);
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
	return unk_0xB519E5386FBF69E5(Global_99155.f_5843[iParam0], 0);
}

int func_329(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_68105.f_139[iParam0];
}

void func_330()
{
	Global_55584 = 1;
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
			unk_0xC04B4A958D92C873(uParam0->f_7, 0, 0);
		}
		else
		{
			unk_0xC04B4A958D92C873(uParam0->f_8, 0, 0);
		}
		return 1;
	}
	if (uParam0->f_2 == 0)
	{
		if (uParam0->f_7 != -1 && uParam0->f_8 != -1)
		{
			if (bParam2 || !func_355(uParam0->f_8, uParam0->f_7))
			{
				if (unk_0x777504DE5E3AB797("TIME_LAPSE", 0))
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
	unk_0x3BE81935DF4C438C();
	unk_0x1B7A773B18DF3DB0(7);
	unk_0xB5E760C0C1663A2F(0f);
	if (uParam0->f_2 == 1)
	{
		if (bParam2)
		{
			unk_0x74FF6D08DE291367(uParam0->f_4, 0);
			uParam0->f_4 = unk_0x01A00DEC76A48F14("DEFAULT_SPLINE_CAMERA", 0);
			unk_0x68FC1C504BE170CE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				unk_0x68FC1C504BE170CE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				unk_0x68FC1C504BE170CE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			unk_0xD2E0A9EDD55F008D(uParam0->f_4, uParam1->f_14);
			unk_0x63498CF6CF35C6A2(uParam0->f_4, 1);
			if (!bParam6)
			{
				if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
				{
					unk_0x60365B5AF8BF1FFA(unk_0xE7869D5D7816A9B6(), 0, 0);
				}
				iVar0 = unk_0xA0B1717D806F4901();
				if (unk_0xD51CFE69539DB6D8(iVar0))
				{
					if (!unk_0x28D33422BA6C479D(iVar0))
					{
						unk_0x20BB4B94CC6DDC9A(iVar0, 1, 0);
					}
					unk_0x60365B5AF8BF1FFA(iVar0, 0, 0);
				}
			}
			uVar1 = unk_0x91CEE181DFD98A83(uParam0->f_4);
			unk_0xE4549E869CEE8915();
			unk_0x9A48C517359EE773(uParam1->f_2, uVar1, 0);
			unk_0x7F75333E7D3B15DD(uParam1->f_2, uVar1);
			unk_0x1DA595C2C10DA7E3(uParam1->f_2, uVar1);
			if (bParam3)
			{
				unk_0xB86B1248EA9B87EA(uParam1->f_2, 5000f, 1, 1, 0, 0);
			}
			func_354(&(uParam0->f_1), 0, 0, 0, unk_0x2DA3502053F9E535(), unk_0xEB4EA596232DA76E(), unk_0xB99227ECC84A576C());
			func_318(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else if (!func_355(uParam0->f_7, uParam0->f_8))
		{
			if (uParam0->f_5)
			{
				unk_0x74FF6D08DE291367(uParam0->f_4, 0);
				uParam0->f_4 = unk_0x01A00DEC76A48F14("DEFAULT_SPLINE_CAMERA", 0);
				unk_0x68FC1C504BE170CE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				if (uParam1->f_17 < 0)
				{
					unk_0x68FC1C504BE170CE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				}
				else
				{
					unk_0x68FC1C504BE170CE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				}
				unk_0xD2E0A9EDD55F008D(uParam0->f_4, uParam1->f_14);
				unk_0x63498CF6CF35C6A2(uParam0->f_4, 1);
				if (!bParam6)
				{
					if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
					{
						unk_0x60365B5AF8BF1FFA(unk_0xE7869D5D7816A9B6(), 0, 0);
					}
					iVar2 = unk_0xA0B1717D806F4901();
					if (unk_0xD51CFE69539DB6D8(iVar2))
					{
						if (!unk_0x28D33422BA6C479D(iVar2))
						{
							unk_0x20BB4B94CC6DDC9A(iVar2, 1, 0);
						}
						unk_0x60365B5AF8BF1FFA(iVar2, 0, 0);
					}
				}
				uVar3 = unk_0x91CEE181DFD98A83(uParam0->f_4);
				unk_0xE4549E869CEE8915();
				unk_0x9A48C517359EE773(uParam1->f_2, uVar3, 0);
				unk_0x7F75333E7D3B15DD(uParam1->f_2, uVar3);
				unk_0x1DA595C2C10DA7E3(uParam1->f_2, uVar3);
				if (bParam3)
				{
					unk_0xB86B1248EA9B87EA(uParam1->f_2, 5000f, 1, 1, 0, 0);
				}
				func_354(&(uParam0->f_1), 0, 0, 8, unk_0x2DA3502053F9E535(), unk_0xEB4EA596232DA76E(), unk_0xB99227ECC84A576C());
				func_318(uParam0, 1, 0, 2000, 1, 1, 0, 1);
				uParam0->f_2 = 2;
			}
			else
			{
				unk_0x9694B1DF874054DF("TIME_LAPSE");
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else if (!uParam0->f_5)
		{
			unk_0x74FF6D08DE291367(uParam0->f_4, 0);
			uParam0->f_4 = unk_0x01A00DEC76A48F14("DEFAULT_SPLINE_CAMERA", 0);
			unk_0x68FC1C504BE170CE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				unk_0x68FC1C504BE170CE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				unk_0x68FC1C504BE170CE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			unk_0xD2E0A9EDD55F008D(uParam0->f_4, uParam1->f_14);
			unk_0x9ABAC5456B262ED9(uParam0->f_4, 3);
			unk_0x63498CF6CF35C6A2(uParam0->f_4, 1);
			if (!bParam6)
			{
				if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
				{
					unk_0x60365B5AF8BF1FFA(unk_0xE7869D5D7816A9B6(), 0, 0);
				}
				iVar4 = unk_0xA0B1717D806F4901();
				if (unk_0xD51CFE69539DB6D8(iVar4))
				{
					if (!unk_0x28D33422BA6C479D(iVar4))
					{
						unk_0x20BB4B94CC6DDC9A(iVar4, 1, 0);
					}
					unk_0x60365B5AF8BF1FFA(iVar4, 0, 0);
				}
			}
			uVar5 = unk_0x91CEE181DFD98A83(uParam0->f_4);
			unk_0xE4549E869CEE8915();
			unk_0x9A48C517359EE773(uParam1->f_2, uVar5, 0);
			unk_0x7F75333E7D3B15DD(uParam1->f_2, uVar5);
			unk_0x1DA595C2C10DA7E3(uParam1->f_2, uVar5);
			if (bParam3)
			{
				unk_0xB86B1248EA9B87EA(uParam1->f_2, 5000f, 0, 1, 0, 0);
			}
			func_354(&(uParam0->f_1), 0, 0, 0, unk_0x2DA3502053F9E535(), unk_0xEB4EA596232DA76E(), unk_0xB99227ECC84A576C());
			func_318(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else
		{
			unk_0x9694B1DF874054DF("TIME_LAPSE");
			uParam0->f_2 = -1;
			return 1;
		}
	}
	if (uParam0->f_2 == 2)
	{
		if (bParam3)
		{
			unk_0xB86B1248EA9B87EA(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (!uParam0->f_5)
		{
			if (func_335(uParam0->f_8, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
			{
				if (uParam1->f_17 < 0)
				{
					uParam0->f_9 = unk_0x9D40BBF80D8F5E8A();
					uParam0->f_2 = 3;
				}
				else
				{
					uParam0->f_4 = unk_0x01A00DEC76A48F14("DEFAULT_SPLINE_CAMERA", 0);
					unk_0x68FC1C504BE170CE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
					unk_0x68FC1C504BE170CE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
					unk_0xD2E0A9EDD55F008D(uParam0->f_4, uParam1->f_14);
					unk_0x9ABAC5456B262ED9(uParam0->f_4, 3);
					unk_0x63498CF6CF35C6A2(uParam0->f_4, 1);
					uParam0->f_9 = unk_0x9D40BBF80D8F5E8A();
					uParam0->f_2 = 22;
				}
			}
		}
		else if (func_335(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
		{
			if (uParam1->f_17 < 0)
			{
				uParam0->f_9 = unk_0x9D40BBF80D8F5E8A();
				uParam0->f_2 = 3;
			}
			else
			{
				uParam0->f_4 = unk_0x01A00DEC76A48F14("DEFAULT_SPLINE_CAMERA", 0);
				unk_0x68FC1C504BE170CE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				unk_0x68FC1C504BE170CE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				unk_0xD2E0A9EDD55F008D(uParam0->f_4, uParam1->f_14);
				unk_0x9ABAC5456B262ED9(uParam0->f_4, 3);
				unk_0x63498CF6CF35C6A2(uParam0->f_4, 1);
				uParam0->f_9 = unk_0x9D40BBF80D8F5E8A();
				uParam0->f_2 = 22;
			}
		}
		if (!bParam5)
		{
			if (func_333(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!unk_0xA864A37DA392324A())
				{
					unk_0x6A6E764D1DB633C7(250);
				}
				if (!unk_0xAEF17BDE274A1247())
				{
					unk_0x3BE81935DF4C438C();
					unk_0x1B7A773B18DF3DB0(7);
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
			unk_0xB86B1248EA9B87EA(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (unk_0xCF686B56FD5328B5(uParam0->f_4) && unk_0x10B8434FB64D5C3F(uParam0->f_4))
		{
		}
		else
		{
			uParam0->f_9 = unk_0x9D40BBF80D8F5E8A();
			uParam0->f_2 = 3;
		}
		if (!bParam5)
		{
			if (func_333(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!unk_0xA864A37DA392324A())
				{
					unk_0x6A6E764D1DB633C7(250);
				}
				if (!unk_0xAEF17BDE274A1247())
				{
					unk_0x3BE81935DF4C438C();
					unk_0x1B7A773B18DF3DB0(7);
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
			unk_0xB86B1248EA9B87EA(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (uParam0->f_9 + 1000 > unk_0x9D40BBF80D8F5E8A())
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
	if (unk_0xDE185266FE919B68())
	{
		if ((unk_0x9D40BBF80D8F5E8A() - Global_28) > iParam0)
		{
			Global_27 = unk_0x9D40BBF80D8F5E8A();
		}
		Global_28 = unk_0x9D40BBF80D8F5E8A();
		if ((unk_0x9D40BBF80D8F5E8A() - Global_27) > iParam0)
		{
			if (func_334())
			{
				Global_27 = unk_0x9D40BBF80D8F5E8A();
				return 1;
			}
		}
	}
	return 0;
}

int func_334()
{
	if (unk_0xA57007F9A665F322())
	{
		return 0;
	}
	if (unk_0x958B4351DD28B142(0, 18) || unk_0x958B4351DD28B142(2, 18))
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
				unk_0xD9291BE3ABABED46(0.6f);
				unk_0xC59D7D1E48AA8C6B(0);
				unk_0x077D2E5276BE9B88(0);
			}
			func_341();
			uParam4->f_10 = unk_0x2AD909D8CB732A41();
			unk_0xCC18B241D266EF14(uParam4->f_10, "TIME_LAPSE_MASTER", 0, 1);
			unk_0x91523366B2FDCD40("TOD_SHIFT_SCENE");
			func_319();
			uParam4->f_3++;
			break;
		
		case 1:
		case 2:
			if ((unk_0xCF686B56FD5328B5(uParam4->f_4) && unk_0x10B8434FB64D5C3F(uParam4->f_4)) || !(fParam5 >= 0.99f || fParam5 == -1f))
			{
				if (unk_0xCF686B56FD5328B5(uParam4->f_4) && unk_0x10B8434FB64D5C3F(uParam4->f_4))
				{
					fVar0 = unk_0x2724D958D0BF9E3F(uParam4->f_4);
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
						if (unk_0xC7C6DDDE84A8E734(sParam2) != 0)
						{
							unk_0xD20ADBE7BCFF20AB(sParam2, fParam8);
						}
						if (unk_0xC7C6DDDE84A8E734(sParam3) != 0)
						{
							unk_0xCABE4CA5584B9ED9();
							unk_0xCEDCF6C5D6C7558C(sParam3, 0);
						}
						uParam4->f_3 = 2;
					}
				}
			}
			if (fVar0 >= 0.99f || fVar0 == -1f)
			{
				iVar5 = *uParam4;
				func_351(&iVar5, uParam4->f_11, 0, 0, 0, 0, 0);
				unk_0xC04B4A958D92C873(func_340(iVar5), func_339(iVar5), func_338(iVar5));
				if (bParam7)
				{
					unk_0xDD8068D05776246D();
				}
				unk_0x3948245C8BD5EDA0(uParam4->f_10);
				unk_0x9694B1DF874054DF("TIME_LAPSE");
				if (bParam7)
				{
					unk_0x077D2E5276BE9B88(1);
					unk_0xC59D7D1E48AA8C6B(1);
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
			unk_0xC04B4A958D92C873(func_340(iVar5), func_339(iVar5), func_338(iVar5));
			if (func_336(iVar5) != unk_0x2DA3502053F9E535())
			{
				unk_0xB147EF43C3A41CF3(func_336(iVar5), func_87(iVar5), func_85(iVar5));
			}
			func_238();
			unk_0x509B921C09F2144A(6);
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
	
	if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		return 0;
	}
	if (!unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6()))
	{
		return 0;
	}
	iVar0 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
	if (!unk_0x76B2D234F1895632(iVar0))
	{
		return 0;
	}
	unk_0xE781FF2AB2406AE9(iVar0, "OFF");
	return 1;
}

void func_342(float fParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_348(&(Global_99155.f_16717.f_175[iVar0 /*19*/].f_5)))
		{
			func_343(&(Global_99155.f_16717.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_348(&(Global_99155.f_16717.f_362[iVar1 /*3*/])))
		{
			func_343(&(Global_99155.f_16717.f_362[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	unk_0x4B3CE85016CD060A();
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
	uParam0->f_1 = (func_345(unk_0xB519E5386FBF69E5(*uParam0, 4)) - fParam1);
	unk_0x9956FB0E4B50ECB8(uParam0, 1);
	unk_0x73817D396768E4C6(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_345(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x9D40BBF80D8F5E8A()) / 1000f);
	}
	if (unk_0x00AAD79B42B3E036())
	{
		iVar0 = unk_0xC7F926248AF8587B();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x9D40BBF80D8F5E8A()) / 1000f);
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
			return (func_345(unk_0xB519E5386FBF69E5(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_347(var uParam0)
{
	return unk_0xB519E5386FBF69E5(*uParam0, 2);
}

bool func_348(var uParam0)
{
	return unk_0xB519E5386FBF69E5(*uParam0, 1);
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
	return func_356(unk_0x7C833E3C6EEE41E0(), iParam0, iParam1);
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
			*uParam1 = Global_82146[iParam0 /*34*/].f_14;
			*uParam2 = Global_82146[iParam0 /*34*/].f_13;
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
	if (unk_0xC7C6DDDE84A8E734("RAIN") == unk_0xF514CE124BE55E04())
	{
		if (unk_0xF6917DE0E003509D(&(uParam1->f_18)))
		{
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
		}
		if (unk_0xF6917DE0E003509D(&(uParam1->f_22)))
		{
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
		}
	}
}

bool func_359()
{
	bool bVar0;
	
	bVar0 = unk_0x3CBB06ED9434F6B3();
	if (!Global_69235)
	{
		if (!bVar0)
		{
			Global_69235 = 1;
		}
	}
	return bVar0;
}

void func_360()
{
	unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), true, 0);
	if (!func_23())
	{
		if (func_390(0))
		{
			unk_0x1B1CE102A7E7999E(unk_0x3F80C6638E3A1A90(), 0, 0);
			unk_0x6FF6F40CA433340F(unk_0x3F80C6638E3A1A90(), 0);
			unk_0x801429C020C467BA(joaat("rapidgt"));
			unk_0x801429C020C467BA(joaat("surano"));
			unk_0x801429C020C467BA(joaat("carbonizzare"));
			while ((!unk_0x5053BF6D5604065B(joaat("rapidgt")) || !unk_0x5053BF6D5604065B(joaat("surano"))) || !unk_0x5053BF6D5604065B(joaat("carbonizzare")))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (!unk_0xD51CFE69539DB6D8(iLocal_3259))
			{
				unk_0xB86B1248EA9B87EA(Local_3294, 5f, 1, 0, 0, 0);
				iLocal_3259 = unk_0xD504D1FF5DD2FFD7(joaat("rapidgt"), Local_3294, fLocal_3321, 1, 1);
				unk_0x408AD7E5AD0BB545(iLocal_3259, 112, 112);
				unk_0x09714949CF524B00(iLocal_3259, 3000);
				unk_0x9DB0432DBE539D98(iLocal_3259, 1);
				unk_0x839E9476E54502A2(joaat("rapidgt"));
				unk_0x7E38E815EF844C74(joaat("rapidgt"), 1);
				unk_0xFD092FF761E54535(iLocal_3259, 1);
				unk_0x8100F8AA27EE924B(iLocal_3259, 1);
			}
			if (!unk_0xD51CFE69539DB6D8(iLocal_3276))
			{
				if (unk_0x5053BF6D5604065B(joaat("surano")))
				{
					unk_0xB86B1248EA9B87EA(-1037.398f, -491.6539f, 35.5545f, 5f, 1, 0, 0, 0);
					iLocal_3276 = unk_0xD504D1FF5DD2FFD7(joaat("surano"), -1037.398f, -491.6539f, 35.5545f, 208.889f, 1, 1);
					unk_0x408AD7E5AD0BB545(iLocal_3276, 0, 0);
					unk_0x09714949CF524B00(iLocal_3276, 3000);
					unk_0x9DB0432DBE539D98(iLocal_3276, 1);
					unk_0x839E9476E54502A2(joaat("surano"));
					unk_0x7E38E815EF844C74(joaat("surano"), 1);
					unk_0x8100F8AA27EE924B(iLocal_3276, 1);
				}
			}
			if (!unk_0xD51CFE69539DB6D8(iLocal_3277))
			{
				if (unk_0x5053BF6D5604065B(joaat("carbonizzare")))
				{
					unk_0xB86B1248EA9B87EA(Local_3294, 5f, 1, 0, 0, 0);
					iLocal_3277 = unk_0xD504D1FF5DD2FFD7(joaat("carbonizzare"), -1033.938f, -489.7475f, 35.8323f, 207.1758f, 1, 1);
					unk_0x408AD7E5AD0BB545(iLocal_3277, 89, 89);
					unk_0x09714949CF524B00(iLocal_3277, 3000);
					unk_0x9DB0432DBE539D98(iLocal_3277, 1);
					unk_0x839E9476E54502A2(joaat("carbonizzare"));
					unk_0x7E38E815EF844C74(joaat("carbonizzare"), 1);
					unk_0x8100F8AA27EE924B(iLocal_3277, 1);
				}
			}
		}
		iLocal_3181 = 0;
		iLocal_3183 = 0;
		iLocal_3345 = 0;
		iLocal_3180 = 1;
	}
	else
	{
		unk_0x103FCC2BD24292A3("SecGuards", &iLocal_3576);
		unk_0xA9CA101B50B90993(5, joaat("player"), iLocal_3576);
		unk_0xA9CA101B50B90993(5, iLocal_3576, joaat("player"));
		if (Global_85535 == 1)
		{
			if (func_363() == 0)
			{
				func_362(Local_3312, fLocal_3325, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				unk_0xE72D045151F6CA70("TRV4_START_RT");
				iLocal_3180 = 3;
			}
			if (func_363() == 1)
			{
				func_362(-935.4413f, -2928.061f, 12.9451f, 178.466f, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				unk_0xE72D045151F6CA70("TRV4_FOOT_CHASE_RT");
				iLocal_3180 = 5;
			}
			if (func_363() == 2)
			{
				func_362(-937.5466f, -2968.713f, 12.9451f, 111.5016f, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				unk_0xE72D045151F6CA70("TRV4_EVADE_RT");
				iLocal_3180 = 8;
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
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				unk_0xE72D045151F6CA70("TRV4_START_RT");
				iLocal_3180 = 2;
			}
			if (func_363() == 1)
			{
				func_362(Local_3312, fLocal_3325, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				unk_0xE72D045151F6CA70("TRV4_START_RT");
				iLocal_3180 = 3;
			}
			if (func_363() == 2)
			{
				func_362(-935.4413f, -2928.061f, 12.9451f, 178.466f, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				unk_0xE72D045151F6CA70("TRV4_FOOT_CHASE_RT");
				iLocal_3180 = 5;
			}
			if (func_363() == 3)
			{
				func_362(-937.5466f, -2968.713f, 12.9451f, 111.5016f, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				unk_0xE72D045151F6CA70("TRV4_EVADE_RT");
				iLocal_3180 = 8;
			}
		}
		unk_0x36A3D6FBED10EF81("TREV4", 0);
		while (!unk_0x4D15A085E079AB18(0))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
}

void func_361()
{
	if (iLocal_3181 == 0)
	{
		unk_0xB86B1248EA9B87EA(-920.0547f, -2744.662f, 12.8434f, 20f, 1, 0, 0, 0);
		unk_0x1B1CE102A7E7999E(unk_0x3F80C6638E3A1A90(), 0, 0);
		unk_0x6FF6F40CA433340F(unk_0x3F80C6638E3A1A90(), 0);
		iLocal_3181++;
	}
	if (iLocal_3181 == 1)
	{
		unk_0x899C0AB969919A6A(-920.0547f, -2744.662f, 12.8434f);
		if (!unk_0xDE185266FE919B68())
		{
			func_21(0, -1, 1);
			unk_0x2D3BB3EF936C4B76(800);
		}
		func_6();
	}
}

void func_362(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_23())
	{
		unk_0x8A10FCF639EC0104(0);
		unk_0x73817D396768E4C6(&(Global_91025.f_20), 2);
		unk_0x307133C47B1565B0(1);
		if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
		{
			unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), false, 0);
		}
		Global_91021 = { Param0 };
		Global_91024 = fParam3;
		Global_91020 = 1;
		if (iParam4 == 1)
		{
			unk_0x9956FB0E4B50ECB8(&(Global_91025.f_20), 14);
		}
		else
		{
			unk_0x73817D396768E4C6(&(Global_91025.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0x9956FB0E4B50ECB8(&(Global_91025.f_20), 24);
		}
		else
		{
			unk_0x73817D396768E4C6(&(Global_91025.f_20), 24);
		}
		func_22(1);
	}
}

int func_363()
{
	if (!Global_91025 == 10 && !Global_91025 == 9)
	{
		return 0;
	}
	return Global_91025.f_2;
}

void func_364()
{
	if (iLocal_3490[0] == 0)
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_3121[7]))
		{
			if (unk_0xC45A34912542C4EB(iLocal_3121[7], 0))
			{
				unk_0x28EB71E26B7A2DE2(iLocal_3121[7], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[0] = 1;
			}
		}
	}
	if (iLocal_3498[0] == 0)
	{
		if (iLocal_3490[0] == 1)
		{
			if (unk_0xD51CFE69539DB6D8(iLocal_3121[7]))
			{
				if (!unk_0xC45A34912542C4EB(iLocal_3121[7], 0))
				{
					unk_0xD1AE9D189CB65173(iLocal_3121[7], 0);
					iLocal_3498[0] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					unk_0xD1AE9D189CB65173(iLocal_3121[7], 0);
					iLocal_3498[0] = 1;
				}
			}
			else
			{
				iLocal_3498[0] = 1;
			}
		}
	}
	if (iLocal_3490[1] == 0)
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_3121[8]))
		{
			if (unk_0xC45A34912542C4EB(iLocal_3121[8], 0))
			{
				unk_0x28EB71E26B7A2DE2(iLocal_3121[8], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[1] = 1;
			}
		}
	}
	if (iLocal_3498[1] == 0)
	{
		if (iLocal_3490[1] == 1)
		{
			if (unk_0xD51CFE69539DB6D8(iLocal_3121[8]))
			{
				if (!unk_0xC45A34912542C4EB(iLocal_3121[8], 0))
				{
					unk_0xD1AE9D189CB65173(iLocal_3121[8], 0);
					iLocal_3498[1] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					unk_0xD1AE9D189CB65173(iLocal_3121[8], 0);
					iLocal_3498[1] = 1;
				}
			}
			else
			{
				iLocal_3498[1] = 1;
			}
		}
	}
	if (iLocal_3490[2] == 0)
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_3121[11]))
		{
			if (unk_0xC45A34912542C4EB(iLocal_3121[11], 0))
			{
				unk_0x28EB71E26B7A2DE2(iLocal_3121[11], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[2] = 1;
			}
		}
	}
	if (iLocal_3498[2] == 0)
	{
		if (iLocal_3490[2] == 1)
		{
			if (unk_0xD51CFE69539DB6D8(iLocal_3121[11]))
			{
				if (!unk_0xC45A34912542C4EB(iLocal_3121[11], 0))
				{
					unk_0xD1AE9D189CB65173(iLocal_3121[11], 0);
					iLocal_3498[2] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					unk_0xD1AE9D189CB65173(iLocal_3121[11], 0);
					iLocal_3498[2] = 1;
				}
			}
			else
			{
				iLocal_3498[2] = 1;
			}
		}
	}
	if (iLocal_3490[3] == 0)
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_3121[12]))
		{
			if (unk_0xC45A34912542C4EB(iLocal_3121[12], 0))
			{
				unk_0x28EB71E26B7A2DE2(iLocal_3121[12], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[3] = 1;
			}
		}
	}
	if (iLocal_3498[3] == 0)
	{
		if (iLocal_3490[3] == 1)
		{
			if (unk_0xD51CFE69539DB6D8(iLocal_3121[12]))
			{
				if (!unk_0xC45A34912542C4EB(iLocal_3121[12], 0))
				{
					unk_0xD1AE9D189CB65173(iLocal_3121[12], 0);
					iLocal_3498[3] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					unk_0xD1AE9D189CB65173(iLocal_3121[12], 0);
					iLocal_3498[3] = 1;
				}
			}
			else
			{
				iLocal_3498[3] = 1;
			}
		}
	}
	if (iLocal_3490[4] == 0)
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_3121[13]))
		{
			if (unk_0xC45A34912542C4EB(iLocal_3121[13], 0))
			{
				unk_0x28EB71E26B7A2DE2(iLocal_3121[13], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[4] = 1;
			}
		}
	}
	if (iLocal_3498[4] == 0)
	{
		if (iLocal_3490[4] == 1)
		{
			if (unk_0xD51CFE69539DB6D8(iLocal_3121[13]))
			{
				if (!unk_0xC45A34912542C4EB(iLocal_3121[13], 0))
				{
					unk_0xD1AE9D189CB65173(iLocal_3121[13], 0);
					iLocal_3498[4] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					unk_0xD1AE9D189CB65173(iLocal_3121[13], 0);
					iLocal_3498[4] = 1;
				}
			}
			else
			{
				iLocal_3498[4] = 1;
			}
		}
	}
	if (iLocal_3490[5] == 0)
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_3121[14]))
		{
			if (unk_0xC45A34912542C4EB(iLocal_3121[14], 0))
			{
				unk_0x28EB71E26B7A2DE2(iLocal_3121[14], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[5] = 1;
			}
		}
	}
	if (iLocal_3498[5] == 0)
	{
		if (iLocal_3490[5] == 1)
		{
			if (unk_0xD51CFE69539DB6D8(iLocal_3121[14]))
			{
				if (!unk_0xC45A34912542C4EB(iLocal_3121[14], 0))
				{
					unk_0xD1AE9D189CB65173(iLocal_3121[14], 0);
					iLocal_3498[5] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					unk_0xD1AE9D189CB65173(iLocal_3121[14], 0);
					iLocal_3498[5] = 1;
				}
			}
			else
			{
				iLocal_3498[5] = 1;
			}
		}
	}
	if (iLocal_3490[6] == 0)
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_3121[15]))
		{
			if (unk_0xC45A34912542C4EB(iLocal_3121[15], 0))
			{
				unk_0x28EB71E26B7A2DE2(iLocal_3121[15], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[6] = 1;
			}
		}
	}
	if (iLocal_3498[6] == 0)
	{
		if (iLocal_3490[6] == 1)
		{
			if (unk_0xD51CFE69539DB6D8(iLocal_3121[15]))
			{
				if (!unk_0xC45A34912542C4EB(iLocal_3121[15], 0))
				{
					unk_0xD1AE9D189CB65173(iLocal_3121[15], 0);
					iLocal_3498[6] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					unk_0xD1AE9D189CB65173(iLocal_3121[15], 0);
					iLocal_3498[6] = 1;
				}
			}
			else
			{
				iLocal_3498[6] = 1;
			}
		}
	}
}

void func_365()
{
	switch (iLocal_3180)
	{
		case 2:
			if (iLocal_3181 > 0)
			{
				if (iLocal_3185 == 0)
				{
					iLocal_3364 = 0;
					iLocal_3523 = 0;
					iLocal_3556 = 0;
					iLocal_3557 = 0;
					func_17(&uLocal_3578, 1, 0, "Devin", 0, 1);
					func_17(&uLocal_3578, 0, unk_0xE7869D5D7816A9B6(), "Michael", 0, 1);
					iLocal_3185 = 1;
				}
				if (iLocal_3185 == 1)
				{
					if (iLocal_3364 == 0)
					{
						if (unk_0xF18329472591CFE6(Local_3318, unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), 1) > 2f)
						{
							if (!unk_0x13ACC601BB29A690() || !unk_0xA7E452C0F82F7C56())
							{
								if (func_229(&uLocal_3578, "T1M4AUD", "T1M4_CHASE", 3, 0, 0, 0))
								{
									iLocal_3364 = 1;
								}
							}
						}
					}
					if (iLocal_3523 == 0)
					{
						if (unk_0xF18329472591CFE6(Local_3318, unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), 1) > 100f)
						{
							if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
							{
								if (func_368(&uLocal_3578, 29, "T1M4AUD", "SOL3_DEVCALL", 7, 0, 0, 1))
								{
									unk_0xD73158C5794398B4(4f, 10f, 4);
									iLocal_3523 = 1;
								}
							}
						}
					}
					if (iLocal_3556 == 0 && iLocal_3523 == 1)
					{
						if (func_367())
						{
							if (!unk_0x13ACC601BB29A690() || !unk_0xA7E452C0F82F7C56())
							{
								if (func_229(&uLocal_3578, "T1M4AUD", "T1M4_REACT", 3, 0, 0, 0))
								{
									iLocal_3556 = 1;
								}
							}
						}
					}
					if (iLocal_3557 == 0)
					{
						if (unk_0xD51CFE69539DB6D8(iLocal_3258))
						{
							if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
							{
								if (func_16(unk_0xE7869D5D7816A9B6(), iLocal_3258, 1) < 200f && unk_0xD525F9D50CBB6A5D(iLocal_3258))
								{
									if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
									{
										if (!unk_0x13ACC601BB29A690() || !unk_0xA7E452C0F82F7C56())
										{
											if (func_229(&uLocal_3578, "T1M4AUD", "T1M4_CHASE2", 3, 0, 0, 0))
											{
												unk_0xD73158C5794398B4(3f, 12f, 4);
												iLocal_3557 = 1;
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
			if (iLocal_3181 >= 0)
			{
				if (iLocal_3185 == 0)
				{
					iLocal_3524[0] = 0;
					iLocal_3524[1] = 0;
					iLocal_3524[2] = 0;
					iLocal_3524[3] = 0;
					iLocal_3553 = 0;
					iLocal_3554 = 0;
					iLocal_3555 = 0;
					iLocal_3558 = 0;
					iLocal_3559 = 0;
					iLocal_3560 = 0;
					iLocal_3561 = 0;
					iLocal_3562 = 0;
					iLocal_3199 = unk_0x9D40BBF80D8F5E8A();
					func_17(&uLocal_3578, 0, unk_0xE7869D5D7816A9B6(), "Michael", 0, 1);
					func_17(&uLocal_3578, 4, 0, "SOL3COP", 0, 1);
					iLocal_3185 = 1;
				}
				if (iLocal_3185 == 1)
				{
					if (iLocal_3557 == 0)
					{
						if (unk_0xD51CFE69539DB6D8(iLocal_3258))
						{
							if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
							{
								if (func_16(unk_0xE7869D5D7816A9B6(), iLocal_3258, 1) < 200f && unk_0xD525F9D50CBB6A5D(iLocal_3258))
								{
									if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
									{
										if (!unk_0x13ACC601BB29A690() || !unk_0xA7E452C0F82F7C56())
										{
											if (func_229(&uLocal_3578, "T1M4AUD", "T1M4_CHASE2", 3, 0, 0, 0))
											{
												iLocal_3557 = 1;
											}
										}
									}
								}
							}
						}
					}
					if (unk_0xD51CFE69539DB6D8(iLocal_3258))
					{
						if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
						{
							if (unk_0x05BA2AC20921A37E(iLocal_3258))
							{
								if (iLocal_3524[0] == 0)
								{
									if (unk_0xC45A34912542C4EB(iLocal_3121[7], 0) || unk_0xC45A34912542C4EB(iLocal_3121[8], 0))
									{
										if (unk_0x97DF87DF18B03512(iLocal_3258) > 7000f && unk_0x97DF87DF18B03512(iLocal_3258) < 28000f)
										{
											if (!func_228())
											{
												if (!unk_0x13ACC601BB29A690() || !unk_0xA7E452C0F82F7C56())
												{
													if (func_229(&uLocal_3578, "T1M4AUD", "T1M4_POLICE", 7, 0, 0, 0))
													{
														iLocal_3524[0] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3524[1] == 0)
								{
									if (unk_0xC45A34912542C4EB(iLocal_3121[7], 0) || unk_0xC45A34912542C4EB(iLocal_3121[8], 0))
									{
										if (unk_0x97DF87DF18B03512(iLocal_3258) > 28000f && unk_0x97DF87DF18B03512(iLocal_3258) < 34500f)
										{
											if (!func_228())
											{
												if (!unk_0x13ACC601BB29A690() || !unk_0xA7E452C0F82F7C56())
												{
													if (func_229(&uLocal_3578, "T1M4AUD", "T1M4_POLICE2", 7, 0, 0, 0))
													{
														unk_0xD73158C5794398B4(4f, 4f, 4);
														iLocal_3524[1] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3524[2] == 0)
								{
									if (unk_0xC45A34912542C4EB(iLocal_3121[7], 0) || unk_0xC45A34912542C4EB(iLocal_3121[8], 0))
									{
										if (unk_0x97DF87DF18B03512(iLocal_3258) > 36000f && unk_0x97DF87DF18B03512(iLocal_3258) < 41000f)
										{
											if (!func_228())
											{
												if (!unk_0x13ACC601BB29A690() || !unk_0xA7E452C0F82F7C56())
												{
													if (func_229(&uLocal_3578, "T1M4AUD", "T1M4_POLICE3", 7, 0, 0, 0))
													{
														unk_0xD73158C5794398B4(2f, 4f, 4);
														iLocal_3524[2] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3554 == 0)
								{
									if (unk_0x97DF87DF18B03512(iLocal_3258) > 41000f && unk_0x97DF87DF18B03512(iLocal_3258) < 43500f)
									{
										if (unk_0xD51CFE69539DB6D8(iLocal_3265) && unk_0xD525F9D50CBB6A5D(iLocal_3265))
										{
											if (!func_228())
											{
												if (!unk_0x13ACC601BB29A690() || !unk_0xA7E452C0F82F7C56())
												{
													if (func_229(&uLocal_3578, "T1M4AUD", "T1M4_BOOM", 7, 0, 0, 0))
													{
														unk_0xD73158C5794398B4(4f, 4f, 4);
														iLocal_3554 = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3555 == 0)
								{
									if (unk_0x97DF87DF18B03512(iLocal_3258) > 50509f && unk_0x97DF87DF18B03512(iLocal_3258) < 50872f)
									{
										if (unk_0xD51CFE69539DB6D8(iLocal_3265) && unk_0xD525F9D50CBB6A5D(iLocal_3265))
										{
											if (!func_228())
											{
												if (!unk_0x13ACC601BB29A690() || !unk_0xA7E452C0F82F7C56())
												{
													if (func_229(&uLocal_3578, "T1M4AUD", "T1M4_BLOW", 7, 0, 0, 0))
													{
														iLocal_3555 = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3524[3] == 0)
								{
									if (unk_0x97DF87DF18B03512(iLocal_3258) > 58000f && unk_0x97DF87DF18B03512(iLocal_3258) < 68000f)
									{
										if (!func_228())
										{
											if (!unk_0x13ACC601BB29A690() || !unk_0xA7E452C0F82F7C56())
											{
												if (func_229(&uLocal_3578, "T1M4AUD", "T1M4_POLICE4", 7, 0, 0, 0))
												{
													iLocal_3524[3] = 1;
												}
											}
										}
									}
								}
								if (iLocal_3558 == 0 && iLocal_3524[3] == 1)
								{
									if (unk_0x97DF87DF18B03512(iLocal_3258) < 76000f)
									{
										if (!func_228())
										{
											if (!unk_0x13ACC601BB29A690() || !unk_0xA7E452C0F82F7C56())
											{
												if (func_229(&uLocal_3578, "T1M4AUD", "T1M4_CHASE3", 7, 0, 0, 0))
												{
													iLocal_3558 = 1;
												}
											}
										}
									}
								}
								if (iLocal_3553 == 0)
								{
									if (unk_0x97DF87DF18B03512(iLocal_3258) > 80000f && unk_0x97DF87DF18B03512(iLocal_3258) < 82000f)
									{
										if (unk_0xD51CFE69539DB6D8(iLocal_3260[0]))
										{
											if (unk_0xC45A34912542C4EB(iLocal_3260[0], 0))
											{
												if (unk_0xD525F9D50CBB6A5D(iLocal_3260[0]))
												{
													if (!func_228())
													{
														if (!unk_0x13ACC601BB29A690() || !unk_0xA7E452C0F82F7C56())
														{
															if (func_229(&uLocal_3578, "T1M4AUD", "T1M4_CHASE4", 7, 0, 0, 0))
															{
																unk_0xD73158C5794398B4(3f, 10f, 4);
																iLocal_3553 = 1;
															}
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_3559 == 0)
								{
									if (unk_0x97DF87DF18B03512(iLocal_3258) > 82100f && unk_0x97DF87DF18B03512(iLocal_3258) < 83500f)
									{
										if (unk_0xD51CFE69539DB6D8(iLocal_3121[11]))
										{
											if (unk_0xD525F9D50CBB6A5D(iLocal_3121[11]))
											{
												if (!func_228())
												{
													if (!unk_0x13ACC601BB29A690() || !unk_0xA7E452C0F82F7C56())
													{
														if (func_229(&uLocal_3578, "T1M4AUD", "T1M4_CHASE5", 7, 0, 0, 0))
														{
															iLocal_3559 = 1;
														}
													}
												}
											}
										}
										else if (unk_0xD51CFE69539DB6D8(iLocal_3121[12]))
										{
											if (unk_0xD525F9D50CBB6A5D(iLocal_3121[12]))
											{
												if (!func_228())
												{
													if (!unk_0x13ACC601BB29A690() || !unk_0xA7E452C0F82F7C56())
													{
														if (func_229(&uLocal_3578, "T1M4AUD", "T1M4_CHASE5", 7, 0, 0, 0))
														{
															iLocal_3559 = 1;
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_3562 == 0)
								{
									if ((unk_0x97DF87DF18B03512(iLocal_3258) > 101891f && unk_0x97DF87DF18B03512(iLocal_3258) < 105000f) && unk_0xD525F9D50CBB6A5D(iLocal_3258))
									{
										if (!func_228())
										{
											if (!unk_0x13ACC601BB29A690() || !unk_0xA7E452C0F82F7C56())
											{
												if (func_229(&uLocal_3578, "T1M4AUD", "T1M4_CHASE7", 7, 0, 0, 0))
												{
													unk_0xD73158C5794398B4(3f, 10f, 4);
													iLocal_3562 = 1;
												}
											}
										}
									}
								}
								if (((unk_0x97DF87DF18B03512(iLocal_3258) > 105500f && unk_0x97DF87DF18B03512(iLocal_3258) < 119000f) && unk_0x9D40BBF80D8F5E8A() > iLocal_3199 + 7000) && iLocal_3561 == 0)
								{
									if (!func_228())
									{
										if (!unk_0x13ACC601BB29A690() || !unk_0xA7E452C0F82F7C56())
										{
											if (func_229(&uLocal_3578, "T1M4AUD", "T1M4_POLICE5", 7, 0, 0, 0))
											{
												iLocal_3199 = unk_0x9D40BBF80D8F5E8A();
												iLocal_3561 = 1;
											}
										}
									}
								}
								if (iLocal_3560 == 0 && iLocal_3561 == 1)
								{
									if (!func_228())
									{
										if (!unk_0x13ACC601BB29A690() || !unk_0xA7E452C0F82F7C56())
										{
											if (func_229(&uLocal_3578, "T1M4AUD", "T1M4_CHASE6", 7, 0, 0, 0))
											{
												iLocal_3560 = 1;
											}
										}
									}
								}
								if (((unk_0x97DF87DF18B03512(iLocal_3258) > 105500f && unk_0x97DF87DF18B03512(iLocal_3258) < 119000f) && unk_0x9D40BBF80D8F5E8A() > iLocal_3199 + 7000) && iLocal_3560 == 1)
								{
									if (!func_228())
									{
										if (!unk_0x13ACC601BB29A690() || !unk_0xA7E452C0F82F7C56())
										{
											if (func_229(&uLocal_3578, "T1M4AUD", "T1M4_POLICE5", 7, 0, 0, 0))
											{
												iLocal_3199 = unk_0x9D40BBF80D8F5E8A();
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
			if (iLocal_3181 > 0)
			{
				if (iLocal_3185 == 0)
				{
					iLocal_3530 = 0;
					iLocal_3563 = 0;
					iLocal_3569 = 0;
					iLocal_3564 = 1;
					iLocal_3204 = unk_0x9D40BBF80D8F5E8A();
					func_17(&uLocal_3578, 0, unk_0xE7869D5D7816A9B6(), "Michael", 0, 1);
					if (!unk_0xAF437D7C802AB246(iLocal_3222))
					{
						func_17(&uLocal_3578, 2, iLocal_3222, "MOLLY", 0, 1);
					}
					iLocal_3185 = 1;
				}
				if (iLocal_3185 == 1)
				{
					if (iLocal_3569 == 0)
					{
						unk_0x0AD5739973D70C62("T1M4_BBAA", "AIRPORTANNO", -939.5f, -2932.2f, 16f, "SPEECH_PARAMS_FORCE_FRONTEND");
						iLocal_3569 = 1;
					}
					if (iLocal_3564 == 1)
					{
						if (iLocal_3530 == 0)
						{
							if (!func_228())
							{
								if (!unk_0x13ACC601BB29A690() || !unk_0xA7E452C0F82F7C56())
								{
									if (func_229(&uLocal_3578, "T1M4AUD", "SOL3_RUNS", 7, 0, 0, 0))
									{
										unk_0xD73158C5794398B4(4f, 6f, 4);
										iLocal_3200 = unk_0x9D40BBF80D8F5E8A();
										iLocal_3530 = 1;
										iLocal_3563 = 1;
										iLocal_3564 = 0;
									}
								}
							}
						}
						if (unk_0x9D40BBF80D8F5E8A() > iLocal_3200 + 5000)
						{
							if (!func_228())
							{
								if (!unk_0x13ACC601BB29A690() || !unk_0xA7E452C0F82F7C56())
								{
									if (func_229(&uLocal_3578, "T1M4AUD", "SOL3_RUNS", 7, 0, 0, 0))
									{
										unk_0xD73158C5794398B4(4f, 6f, 4);
										iLocal_3200 = unk_0x9D40BBF80D8F5E8A();
									}
								}
							}
						}
					}
					if (iLocal_3563 == 1 && unk_0x9D40BBF80D8F5E8A() > iLocal_3204 + 4000)
					{
						if (!func_228())
						{
							if (!unk_0x13ACC601BB29A690() || !unk_0xA7E452C0F82F7C56())
							{
								if (func_229(&uLocal_3578, "T1M4AUD", "T1M4_SHOUT1", 7, 0, 0, 0))
								{
									unk_0xD73158C5794398B4(4f, 6f, 4);
									iLocal_3204 = unk_0x9D40BBF80D8F5E8A();
									iLocal_3564 = 1;
									iLocal_3563 = 0;
								}
							}
						}
					}
				}
			}
			break;
		
		case 6:
			if (iLocal_3181 > 0)
			{
				if (iLocal_3185 == 0)
				{
					iLocal_3531 = 0;
					iLocal_3532 = 0;
					iLocal_3533 = 0;
					iLocal_3565 = 0;
					iLocal_3566 = 0;
					func_17(&uLocal_3578, 0, unk_0xE7869D5D7816A9B6(), "Michael", 0, 1);
					if (!unk_0xAF437D7C802AB246(iLocal_3222))
					{
						func_17(&uLocal_3578, 2, iLocal_3222, "MOLLY", 0, 1);
					}
					iLocal_3185 = 1;
				}
				if (iLocal_3185 == 1)
				{
					if (iLocal_3531 == 0)
					{
						if (!func_228())
						{
							if (!unk_0x13ACC601BB29A690() || !unk_0xA7E452C0F82F7C56())
							{
								if (func_229(&uLocal_3578, "T1M4AUD", "SOL3_PAST", 7, 0, 0, 0))
								{
									iLocal_3531 = 1;
								}
							}
						}
					}
					if (iLocal_3531 == 1 && iLocal_3533 == 0)
					{
						if (!func_228())
						{
							if (!unk_0x13ACC601BB29A690() || !unk_0xA7E452C0F82F7C56())
							{
								if (func_229(&uLocal_3578, "T1M4AUD", "SOL3_WATCH", 7, 0, 0, 0))
								{
									iLocal_3533 = 1;
								}
							}
						}
					}
					if (iLocal_3532 == 0)
					{
						if (unk_0xD51CFE69539DB6D8(iLocal_3222))
						{
							if (!unk_0xAF437D7C802AB246(iLocal_3222))
							{
								if (unk_0x47B2F09FC779F5CD(uLocal_3209))
								{
									if (unk_0x4D221DFBB84DCF0B(uLocal_3209) > 0.65f && unk_0x4D221DFBB84DCF0B(uLocal_3209) < 0.835f)
									{
										if (!func_228())
										{
											if (!unk_0x13ACC601BB29A690() || !unk_0xA7E452C0F82F7C56())
											{
												if (func_229(&uLocal_3578, "T1M4AUD", "SOL3_SUCKS", 7, 0, 0, 0))
												{
													unk_0xD73158C5794398B4(8f, 8f, 4);
													iLocal_3532 = 1;
												}
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_3565 == 0)
					{
						if (!unk_0xD51CFE69539DB6D8(iLocal_3222))
						{
							if (!func_228())
							{
								if (!unk_0x13ACC601BB29A690() || !unk_0xA7E452C0F82F7C56())
								{
									if (func_229(&uLocal_3578, "T1M4AUD", "T1M4_SMUSH", 7, 0, 0, 0))
									{
										iLocal_3565 = 1;
									}
								}
							}
						}
					}
					if (iLocal_3565 == 1 && iLocal_3566 == 0)
					{
						if (!func_228())
						{
							if (!unk_0x13ACC601BB29A690() || !unk_0xA7E452C0F82F7C56())
							{
								if (func_229(&uLocal_3578, "T1M4AUD", "T1M4_SMUSH2", 7, 0, 0, 0))
								{
									iLocal_3566 = 1;
								}
							}
						}
					}
				}
			}
			break;
		
		case 8:
			if (iLocal_3181 > 0)
			{
				if (iLocal_3185 == 0)
				{
					iLocal_3567 = 0;
					iLocal_3205 = unk_0x9D40BBF80D8F5E8A();
					func_17(&uLocal_3578, 0, unk_0xE7869D5D7816A9B6(), "Michael", 0, 1);
					iLocal_3185 = 1;
				}
				if (iLocal_3185 == 1)
				{
					if (iLocal_3567 == 0)
					{
						if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
						{
							iLocal_3257 = func_366(unk_0xE7869D5D7816A9B6(), joaat("COP"), 0, 0, 28);
							if (unk_0xD51CFE69539DB6D8(iLocal_3257))
							{
								if (func_16(unk_0xE7869D5D7816A9B6(), iLocal_3257, 1) < 40f)
								{
									if (!func_228())
									{
										if (!unk_0x13ACC601BB29A690() || !unk_0xA7E452C0F82F7C56())
										{
											if (func_229(&uLocal_3578, "T1M4AUD", "T1M4_COPS", 7, 0, 0, 0))
											{
												iLocal_3567 = 1;
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_3567 == 1 && unk_0x9D40BBF80D8F5E8A() > iLocal_3205 + 5000)
					{
						if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
						{
							iLocal_3257 = func_366(unk_0xE7869D5D7816A9B6(), joaat("COP"), 0, 0, 28);
							if (unk_0xD51CFE69539DB6D8(iLocal_3257))
							{
								if (func_16(unk_0xE7869D5D7816A9B6(), iLocal_3257, 1) < 40f)
								{
									if (!func_228())
									{
										if (!unk_0x13ACC601BB29A690() || !unk_0xA7E452C0F82F7C56())
										{
											if (func_229(&uLocal_3578, "T1M4AUD", "T1M4_COPS", 7, 0, 0, 0))
											{
												iLocal_3205 = unk_0x9D40BBF80D8F5E8A();
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
	if (!unk_0xAF437D7C802AB246(iParam0))
	{
		unk_0x312FA2EB3948B47C(iParam0, &iVar0, iParam4);
		iVar17 = 0;
		while (iVar17 <= (iVar0 - 1))
		{
			if (unk_0xD51CFE69539DB6D8(iVar0[iVar17]))
			{
				if (!unk_0xAF437D7C802AB246(iVar0[iVar17]))
				{
					if (unk_0x1EB88099AAF24BDE(iVar0[iVar17]) == iParam1)
					{
						if (iParam2 <= 0)
						{
							if (iParam3 == 1)
							{
								if (unk_0xD525F9D50CBB6A5D(iVar0[iVar17]))
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
							if (unk_0xD51CFE69539DB6D8(iVar0[(iVar17 + iParam2)]))
							{
								if (!unk_0xAF437D7C802AB246(iVar0[(iVar17 + iParam2)]))
								{
									if (unk_0x1EB88099AAF24BDE(iVar0[(iVar17 + iParam2)]) == iParam1)
									{
										if (iParam3 == 1)
										{
											if (unk_0xD525F9D50CBB6A5D(iVar0[(iVar17 + iParam2)]))
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
	if (Global_15712 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_368(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_227(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15760 = 1;
	Global_15719 = 1;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_15717 = 0;
	Global_15764 = 0;
	Global_15766 = 0;
	Global_2621441 = 0;
	return func_220(sParam3, iParam4, bParam7);
}

void func_369()
{
	if (((iLocal_3180 == 4 || iLocal_3180 == 5) || iLocal_3180 == 8) || iLocal_3180 == 6)
	{
		if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
		{
			if (func_370(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), 2, 200, 0))
			{
				unk_0x6028EA1BF6115AEE(unk_0x3F80C6638E3A1A90());
				unk_0x92DFD59D631E4C0B(unk_0x3F80C6638E3A1A90());
			}
		}
	}
	if (iLocal_3510 == 0)
	{
		if (iLocal_3180 == 4)
		{
			if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
			{
				if (func_370(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), 2, 200, 0))
				{
					unk_0x1B1CE102A7E7999E(unk_0x3F80C6638E3A1A90(), 3, 0);
					unk_0x6FF6F40CA433340F(unk_0x3F80C6638E3A1A90(), 0);
					iLocal_3510 = 1;
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
		if (unk_0xB84E12C6EBFF63A4(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

void func_371()
{
	if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
		{
			iLocal_3259 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
		}
	}
}

void func_372()
{
	if (iLocal_3351 == 1)
	{
		if (iLocal_3180 == 4)
		{
			if (iLocal_3182 > 1 && iLocal_3475 == 0)
			{
				if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), -828.6987f, -2938.073f, 12.21745f, -807.6911f, -2905.148f, 16.35626f, 28f, 0, 1, 0))
				{
					func_206("TRV4_FAIL1");
				}
			}
		}
		if (iLocal_3180 == 6)
		{
			if (unk_0xD51CFE69539DB6D8(iLocal_3283))
			{
				if (unk_0xD11595488376CB53(uLocal_3288))
				{
					if (func_16(unk_0xE7869D5D7816A9B6(), iLocal_3283, 1) > 100f)
					{
						func_206("TRV4_FAIL6");
					}
				}
			}
		}
		if (iLocal_3180 == 4)
		{
			if (iLocal_3182 == 2)
			{
				if (unk_0x9D40BBF80D8F5E8A() > iLocal_3194 + 7000 && iLocal_3508 == 0)
				{
					func_206("TRV4_FAIL1");
				}
			}
		}
		if (iLocal_3180 == 4)
		{
			if (unk_0xD51CFE69539DB6D8(iLocal_3258))
			{
				if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
				{
					if (unk_0x05BA2AC20921A37E(iLocal_3258))
					{
						if (unk_0x97DF87DF18B03512(iLocal_3258) > 62000f && unk_0x97DF87DF18B03512(iLocal_3258) < 77000f)
						{
							if (unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), -1219f, -2570f, 13f, 1) < 210f)
							{
								if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
								{
									if (unk_0x2CAFFCD9F5E16D2F(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0)) < 200f && unk_0x2CAFFCD9F5E16D2F(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0)) > 125f)
									{
										if (iLocal_3507 == 0)
										{
											iLocal_3197 = unk_0x9D40BBF80D8F5E8A();
											iLocal_3507 = 1;
										}
										if (iLocal_3507 == 1 && unk_0x9D40BBF80D8F5E8A() > iLocal_3197 + 4000)
										{
											func_206("TRV4_FAIL1");
										}
									}
									else if (iLocal_3507 == 1)
									{
										iLocal_3507 = 0;
									}
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_3180 == 5 || iLocal_3180 == 6)
		{
			if (unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), -928.9f, -2935f, 13f, 1) < 5f && !unk_0x4844BC1882594FDB(unk_0x3F80C6638E3A1A90()))
			{
				func_206("TRV4_FAIL1");
			}
		}
		if (iLocal_3180 == 2 || iLocal_3180 == 4)
		{
			if (unk_0x523C6F050AF90E4F(unk_0xE7869D5D7816A9B6()) || unk_0x8BFF7CA791EED675(unk_0xE7869D5D7816A9B6()))
			{
				if (func_370(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), 2, 200, 0))
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
				unk_0x1D208E4A4E1D4FFE(1);
			}
		}
		if (unk_0xD51CFE69539DB6D8(iLocal_3258))
		{
			if (!unk_0xC45A34912542C4EB(iLocal_3258, 0))
			{
				if (unk_0xD51CFE69539DB6D8(iLocal_3222))
				{
					if (!unk_0xAF437D7C802AB246(iLocal_3222))
					{
						unk_0x2EF7A8CB89D363F6(iLocal_3222, 0);
						unk_0x09714949CF524B00(iLocal_3222, 0);
					}
				}
			}
		}
		if (iLocal_3360 == 1)
		{
			if (unk_0xD51CFE69539DB6D8(iLocal_3222))
			{
				if (unk_0xAF437D7C802AB246(iLocal_3222))
				{
					func_206("TRV4_FAIL3");
				}
			}
		}
		if (iLocal_3180 == 4)
		{
			if (iLocal_3352 == 1)
			{
				if (!unk_0xAF437D7C802AB246(iLocal_3222))
				{
					if (func_13(unk_0xE7869D5D7816A9B6(), iLocal_3222) > 300f)
					{
						if (iLocal_3436 == 1)
						{
							unk_0x00400F14096FE01D();
							func_20("TRV4_WARN1", 7500, 1);
							iLocal_3436 = 0;
						}
					}
					else if (iLocal_3436 == 0)
					{
						iLocal_3436 = 1;
					}
					if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
					{
						if (unk_0x05BA2AC20921A37E(iLocal_3258))
						{
							if (unk_0x97DF87DF18B03512(iLocal_3258) < 40000f)
							{
								if (func_13(unk_0xE7869D5D7816A9B6(), iLocal_3222) > 400f)
								{
									func_206("TRV4_FAIL1");
								}
							}
							else if (func_13(unk_0xE7869D5D7816A9B6(), iLocal_3222) > 350f)
							{
								func_206("TRV4_FAIL1");
							}
						}
					}
				}
			}
			if (iLocal_3182 == 3)
			{
				if (iLocal_3476 == 1)
				{
					if (unk_0xF18329472591CFE6(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), -934.4f, -2927.2f, 13.2f, 1) > 25f || unk_0x9D40BBF80D8F5E8A() > iLocal_3195 + 12000)
					{
						func_206("TRV4_FAIL1");
					}
				}
			}
		}
		if (iLocal_3180 == 2 || iLocal_3180 == 4)
		{
			if (unk_0xD7F7FE7C1017323D(unk_0xE7869D5D7816A9B6()))
			{
				func_206("TRV4_FAIL1");
			}
		}
		if (iLocal_3180 == 4)
		{
			if (unk_0xC45A34912542C4EB(iLocal_3258, 0))
			{
				if (unk_0x05BA2AC20921A37E(iLocal_3258))
				{
					if (unk_0x97DF87DF18B03512(iLocal_3258) > 111509f)
					{
						if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), -1070.838f, -2942.241f, 12.19534f, -1009.038f, -2977.609f, 17.44443f, 89.5f, 0, 1, 0))
						{
							func_206("TRV4_FAIL1");
						}
					}
					if (unk_0x97DF87DF18B03512(iLocal_3258) > 122000f)
					{
						if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
						{
							if (unk_0xD1ED65515DA55794(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0)))
							{
								if (iLocal_3509 == 0)
								{
									iLocal_3198 = unk_0x9D40BBF80D8F5E8A();
									iLocal_3509 = 1;
								}
								if (iLocal_3509 == 1)
								{
									if (unk_0x9D40BBF80D8F5E8A() > iLocal_3198 + 4000)
									{
										func_206("TRV4_FAIL1");
									}
								}
							}
							else
							{
								iLocal_3509 = 0;
							}
						}
					}
				}
			}
		}
		if (iLocal_3180 == 2)
		{
			if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), -803.4108f, -2173.417f, -1.911488f, -605.6846f, -2358.229f, 27.32842f, 250f, 0, 1, 0))
			{
				func_206("TRV4_FAIL1");
			}
		}
		if (iLocal_3437 == 1)
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
	func_381(unk_0xE7869D5D7816A9B6(), 0);
	func_377();
}

int func_374()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_91025 == 7 || Global_91025 == 8)
	{
		return 1;
	}
	return 0;
}

void func_375(char* sParam0)
{
	unk_0xCAFBB15049416379(sParam0);
	unk_0x7CBFB87C647743C3(0, 1, 1, -1);
}

void func_376(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_98211, unk_0x959E7FA37C0D0892(), 24);
		Global_98205 = 1;
	}
	else
	{
		StringCopy(&Global_98211, "NULL", 24);
		Global_98205 = 0;
	}
}

void func_377()
{
	func_383(24, 1);
	unk_0xD5181C7DAF762C60("PoliceScannerDisabled", 0);
	unk_0xBDF0A810DD6A47D3(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, 1, 1);
	func_378();
	func_181(&uLocal_28, 0, 0);
	unk_0x515F66600A2670E2(0);
	unk_0x7195FF09321CD5EC(0);
	unk_0x26512D4F43AB2347();
	if (unk_0xD51CFE69539DB6D8(iLocal_3271))
	{
		unk_0x9E55BD45B84E7BDC(&iLocal_3271);
	}
	func_376(0);
	if (unk_0x17FCDE390FBC3959(uLocal_3221))
	{
		unk_0x1FDB9F077F1FC25C(uLocal_3221);
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3222))
	{
		if (!unk_0xAF437D7C802AB246(iLocal_3222))
		{
			unk_0x8D6671D78D1F569B(iLocal_3222, 1);
		}
		unk_0x506D42CB68AE4EA5(&iLocal_3222);
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3228))
	{
		if (!unk_0xAF437D7C802AB246(iLocal_3228))
		{
			unk_0x8D6671D78D1F569B(iLocal_3228, 1);
		}
		unk_0x506D42CB68AE4EA5(&iLocal_3228);
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3245))
	{
		if (!unk_0xAF437D7C802AB246(iLocal_3245))
		{
			unk_0x8D6671D78D1F569B(iLocal_3245, 1);
		}
		unk_0x506D42CB68AE4EA5(&iLocal_3245);
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3246))
	{
		if (!unk_0xAF437D7C802AB246(iLocal_3246))
		{
			unk_0x8D6671D78D1F569B(iLocal_3246, 1);
		}
		unk_0x506D42CB68AE4EA5(&iLocal_3246);
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3247))
	{
		if (!unk_0xAF437D7C802AB246(iLocal_3247))
		{
			unk_0x8D6671D78D1F569B(iLocal_3247, 1);
		}
		unk_0x506D42CB68AE4EA5(&iLocal_3247);
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3248))
	{
		if (!unk_0xAF437D7C802AB246(iLocal_3248))
		{
			unk_0x8D6671D78D1F569B(iLocal_3248, 1);
		}
		unk_0x506D42CB68AE4EA5(&iLocal_3248);
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3249))
	{
		if (!unk_0xAF437D7C802AB246(iLocal_3249))
		{
			unk_0x8D6671D78D1F569B(iLocal_3249, 1);
		}
		unk_0x506D42CB68AE4EA5(&iLocal_3249);
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3250))
	{
		if (!unk_0xAF437D7C802AB246(iLocal_3250))
		{
			unk_0x8D6671D78D1F569B(iLocal_3250, 1);
		}
		unk_0x506D42CB68AE4EA5(&iLocal_3250);
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3223[0]))
	{
		if (!unk_0xAF437D7C802AB246(iLocal_3223[0]))
		{
			unk_0x8D6671D78D1F569B(iLocal_3223[0], 1);
		}
		unk_0x506D42CB68AE4EA5(&(iLocal_3223[0]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3223[1]))
	{
		if (!unk_0xAF437D7C802AB246(iLocal_3223[1]))
		{
			unk_0x8D6671D78D1F569B(iLocal_3223[1], 1);
		}
		unk_0x506D42CB68AE4EA5(&(iLocal_3223[1]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3223[2]))
	{
		if (!unk_0xAF437D7C802AB246(iLocal_3223[2]))
		{
			unk_0x8D6671D78D1F569B(iLocal_3223[2], 1);
		}
		unk_0x506D42CB68AE4EA5(&(iLocal_3223[2]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3223[3]))
	{
		if (!unk_0xAF437D7C802AB246(iLocal_3223[3]))
		{
			unk_0x8D6671D78D1F569B(iLocal_3223[3], 1);
		}
		unk_0x506D42CB68AE4EA5(&(iLocal_3223[3]));
	}
	if (unk_0xD51CFE69539DB6D8(uLocal_3229[0]))
	{
		if (!unk_0xAF437D7C802AB246(uLocal_3229[0]))
		{
			unk_0x8D6671D78D1F569B(uLocal_3229[0], 1);
		}
		unk_0x506D42CB68AE4EA5(&(uLocal_3229[0]));
	}
	if (unk_0xD51CFE69539DB6D8(uLocal_3229[1]))
	{
		if (!unk_0xAF437D7C802AB246(uLocal_3229[1]))
		{
			unk_0x8D6671D78D1F569B(uLocal_3229[1], 1);
		}
		unk_0x506D42CB68AE4EA5(&(uLocal_3229[1]));
	}
	if (unk_0xD51CFE69539DB6D8(uLocal_3229[2]))
	{
		if (!unk_0xAF437D7C802AB246(uLocal_3229[2]))
		{
			unk_0x8D6671D78D1F569B(uLocal_3229[2], 1);
		}
		unk_0x506D42CB68AE4EA5(&(uLocal_3229[2]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3233[0]))
	{
		if (!unk_0xAF437D7C802AB246(iLocal_3233[0]))
		{
			unk_0x8D6671D78D1F569B(iLocal_3233[0], 1);
		}
		unk_0x506D42CB68AE4EA5(&(iLocal_3233[0]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3233[1]))
	{
		if (!unk_0xAF437D7C802AB246(iLocal_3233[1]))
		{
			unk_0x8D6671D78D1F569B(iLocal_3233[1], 1);
		}
		unk_0x506D42CB68AE4EA5(&(iLocal_3233[1]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3233[2]))
	{
		if (!unk_0xAF437D7C802AB246(iLocal_3233[2]))
		{
			unk_0x8D6671D78D1F569B(iLocal_3233[2], 1);
		}
		unk_0x506D42CB68AE4EA5(&(iLocal_3233[2]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3233[3]))
	{
		if (!unk_0xAF437D7C802AB246(iLocal_3233[3]))
		{
			unk_0x8D6671D78D1F569B(iLocal_3233[3], 1);
		}
		unk_0x506D42CB68AE4EA5(&(iLocal_3233[3]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3233[4]))
	{
		if (!unk_0xAF437D7C802AB246(iLocal_3233[4]))
		{
			unk_0x8D6671D78D1F569B(iLocal_3233[4], 1);
		}
		unk_0x506D42CB68AE4EA5(&(iLocal_3233[4]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3233[5]))
	{
		if (!unk_0xAF437D7C802AB246(iLocal_3233[5]))
		{
			unk_0x8D6671D78D1F569B(iLocal_3233[5], 1);
		}
		unk_0x506D42CB68AE4EA5(&(iLocal_3233[5]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3233[6]))
	{
		if (!unk_0xAF437D7C802AB246(iLocal_3233[6]))
		{
			unk_0x8D6671D78D1F569B(iLocal_3233[6], 1);
		}
		unk_0x506D42CB68AE4EA5(&(iLocal_3233[6]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3233[7]))
	{
		if (!unk_0xAF437D7C802AB246(iLocal_3233[7]))
		{
			unk_0x8D6671D78D1F569B(iLocal_3233[7], 1);
		}
		unk_0x506D42CB68AE4EA5(&(iLocal_3233[7]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3233[8]))
	{
		if (!unk_0xAF437D7C802AB246(iLocal_3233[8]))
		{
			unk_0x8D6671D78D1F569B(iLocal_3233[8], 1);
		}
		unk_0x506D42CB68AE4EA5(&(iLocal_3233[8]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3233[9]))
	{
		if (!unk_0xAF437D7C802AB246(iLocal_3233[9]))
		{
			unk_0x8D6671D78D1F569B(iLocal_3233[9], 1);
		}
		unk_0x506D42CB68AE4EA5(&(iLocal_3233[9]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3233[10]))
	{
		if (!unk_0xAF437D7C802AB246(iLocal_3233[10]))
		{
			unk_0x8D6671D78D1F569B(iLocal_3233[10], 1);
		}
		unk_0x506D42CB68AE4EA5(&(iLocal_3233[10]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3251[0]))
	{
		if (!unk_0xAF437D7C802AB246(iLocal_3251[0]))
		{
			unk_0x8D6671D78D1F569B(iLocal_3251[0], 1);
		}
		unk_0x506D42CB68AE4EA5(&(iLocal_3251[0]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3254[0]))
	{
		if (!unk_0xAF437D7C802AB246(iLocal_3254[0]))
		{
			unk_0x8D6671D78D1F569B(iLocal_3254[0], 1);
		}
		unk_0x506D42CB68AE4EA5(&(iLocal_3254[0]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3254[1]))
	{
		if (!unk_0xAF437D7C802AB246(iLocal_3254[1]))
		{
			unk_0x8D6671D78D1F569B(iLocal_3254[1], 1);
		}
		unk_0x506D42CB68AE4EA5(&(iLocal_3254[1]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3258))
	{
		unk_0xC1F2137782A816E9(&iLocal_3258);
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3259))
	{
		if (unk_0x4C5CA989AEF3A14C(iLocal_3259, 0))
		{
			unk_0xC1F2137782A816E9(&iLocal_3259);
		}
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3264))
	{
		unk_0xC1F2137782A816E9(&iLocal_3264);
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3265))
	{
		unk_0xC1F2137782A816E9(&iLocal_3265);
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3266))
	{
		unk_0xC1F2137782A816E9(&iLocal_3266);
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3267))
	{
		unk_0xC1F2137782A816E9(&iLocal_3267);
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3271))
	{
		unk_0xC1F2137782A816E9(&iLocal_3271);
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3275))
	{
		if (unk_0x4C5CA989AEF3A14C(iLocal_3275, 0))
		{
			unk_0xC1F2137782A816E9(&iLocal_3275);
		}
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3279[0]))
	{
		unk_0xC1F2137782A816E9(&(iLocal_3279[0]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3279[1]))
	{
		unk_0xC1F2137782A816E9(&(iLocal_3279[1]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3260[0]))
	{
		unk_0xC1F2137782A816E9(&(iLocal_3260[0]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3260[1]))
	{
		unk_0xC1F2137782A816E9(&(iLocal_3260[1]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3279[0]))
	{
		unk_0xC1F2137782A816E9(&(iLocal_3279[0]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3279[1]))
	{
		unk_0xC1F2137782A816E9(&(iLocal_3279[1]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3268[0]))
	{
		unk_0xC1F2137782A816E9(&(iLocal_3268[0]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3268[1]))
	{
		unk_0xC1F2137782A816E9(&(iLocal_3268[1]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3272[0]))
	{
		unk_0xC1F2137782A816E9(&(iLocal_3272[0]));
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_3263))
	{
		unk_0xC1F2137782A816E9(&iLocal_3263);
	}
	unk_0x384203CA8728BC4D("TRV4_START");
	unk_0x384203CA8728BC4D("TRV4_GAMEPLAY_START");
	unk_0x384203CA8728BC4D("TRV4_START_CS_SKIP");
	unk_0x384203CA8728BC4D("TRV4_START_RT");
	unk_0x384203CA8728BC4D("TRV4_FOOT_CHASE_RT");
	unk_0x384203CA8728BC4D("TRV4_EVADE_RT");
	unk_0x384203CA8728BC4D("TRV4_CAR_ENTERED");
	unk_0x384203CA8728BC4D("TRV4_AIRPORT_ENTERED");
	unk_0x384203CA8728BC4D("TRV4_CHASE");
	unk_0x384203CA8728BC4D("TRV4_JET_ENTERED");
	if (unk_0x17C7D2D5A8AF4A62(iLocal_3220))
	{
		unk_0x0F0E3F0F32F8E90E(iLocal_3220);
	}
	if (unk_0xA288661B75BFC01B(uLocal_3763))
	{
		unk_0x056765A3DA7B4115(uLocal_3763, 0);
	}
	unk_0x5288DF8B264BDD67();
	unk_0x8A86A209B0F0AF7D(&uLocal_3293);
	unk_0xA857A54226CCD303("digitalOverlay");
	unk_0x39895086D78BEA60(-617f, -2274f, 0f, -406.01f, -2044f, 15f, 1, 1);
	unk_0x39895086D78BEA60(-482f, -2118f, 6f, -1072f, -2724f, 17f, 1, 1);
	if (unk_0x729A24E50365D07B("Trev4_5"))
	{
		unk_0xAD0C8ABDA1A371CA("Trev4_5", 0, 0.5f, 1f);
	}
	unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), true, 0);
	unk_0xC34D34ABA99A6872(1f);
	unk_0xA8010B7497A9230B(1);
	unk_0xE242D0D27B122FAC(1);
	unk_0x8B10CC9832827D27("missheist_agency3aig_lift_waitped_a");
	func_259(0);
	unk_0x1B8E0930AB96444B(1);
	if (func_19(2))
	{
		func_18(2, 0);
	}
	unk_0x52F20802944F8DCE();
}

void func_378()
{
	int iVar0;
	
	Global_55607 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_55608[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

void func_379()
{
	int iVar0;
	
	if (unk_0xD51489677E1B0844("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_99155.f_7699 || func_390(0))
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
				unk_0x9956FB0E4B50ECB8(&(Global_82110[iVar0 /*5*/].f_1), 5);
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
	if (((Global_91025 == 13 || Global_91025 == 10) || Global_91025 == 11) || Global_91025 == 12)
	{
		return 0;
	}
	return 1;
}

void func_381(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xD51CFE69539DB6D8(uParam0))
	{
		if (unk_0x5E99B63A819500A5(iParam0, &iVar0, 0))
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
	if (Global_91062 > 0)
	{
		Global_95220.f_21[iParam1] = iVar0;
	}
	else
	{
		Global_92815.f_21[iParam1] = iVar0;
	}
}

int func_382(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_91062 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_95220.f_812[iParam0 /*284*/][iVar0 /*3*/] == iParam1)
			{
				if (Global_95220.f_812[iParam0 /*284*/][iVar0 /*3*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (Global_95220.f_812[iParam0 /*284*/].f_133[iVar0 /*3*/] == iParam1)
			{
				if (Global_95220.f_812[iParam0 /*284*/].f_133[iVar0 /*3*/].f_1 > 0)
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
			if (Global_92815.f_812[iParam0 /*284*/][iVar0 /*3*/] == iParam1)
			{
				if (Global_92815.f_812[iParam0 /*284*/][iVar0 /*3*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (Global_92815.f_812[iParam0 /*284*/].f_133[iVar0 /*3*/] == iParam1)
			{
				if (Global_92815.f_812[iParam0 /*284*/].f_133[iVar0 /*3*/].f_1 > 0)
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
	if (!unk_0x04E7E853E31F41A3("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (unk_0xA64060F94483AC55(iVar1))
			{
				return;
			}
			if (unk_0xB034B5B185BD9C69(unk_0xE7869D5D7816A9B6()) == iVar1)
			{
				func_386(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!unk_0xA64060F94483AC55(iVar1))
			{
				return;
			}
			if (func_384(iParam0))
			{
				func_386(iParam0, 0);
			}
		}
		unk_0x908D2AD77DB8D584(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_384(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_385(iParam0) };
	if (unk_0xB519E5386FBF69E5(Global_31401[Var0.f_1], Var0.f_0))
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
	while (iVar1 < 3)
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
		unk_0x9956FB0E4B50ECB8(&(Global_31401[Var0.f_1]), Var0.f_0);
	}
	else
	{
		unk_0x73817D396768E4C6(&(Global_31401[Var0.f_1]), Var0.f_0);
	}
}

var func_387(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_388(iParam0) };
	*iParam1 = unk_0x41D9D981197E60A2(Var0, Var0.f_3);
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
			Var0 = { Global_1049108[34 /*1908*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
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
		
		case 49:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 59:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case joaat("mpsv_lp0_31"):
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_08";
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
		
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case joaat("mpsv_lp0_31"):
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 81:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
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
	if (!bParam0 && unk_0xFF6891E21E7FC193(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB519E5386FBF69E5(Global_69484, 0);
}

