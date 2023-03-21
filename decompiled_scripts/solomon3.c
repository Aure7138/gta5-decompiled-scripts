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
	uLocal_73 = unk_0xD736C0AC62BF73AD();
	uLocal_74 = unk_0x880E0FAC08C6FA65();
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
	if (func_423(0))
	{
		func_416(24, 0);
	}
	unk_0xCB8EEC006EBFC1E7(0);
	unk_0x34DAC25A04E24704("EXTRASUNNY", 20f);
	if (unk_0xE8A79675302ED812(3))
	{
		func_414(unk_0xBC25C936A095B5BA(), 0);
		unk_0x3857DADBD6EC8A54("TRV4_FAIL");
		func_412();
		func_410();
	}
	func_409(1);
	unk_0x25A523E067E06F54(1);
	iLocal_3181 = 0;
	iLocal_3180 = 0;
	while (true)
	{
		unk_0x2E94C9549322098D("M_LegalTrouble", 0);
		if (iLocal_3207 > unk_0x105601648511CC64())
		{
			unk_0xE9B1C9E275C24095();
		}
		func_405();
		func_404();
		func_402();
		func_398();
		func_397();
		switch (iLocal_3180)
		{
			case 0:
				func_393();
				break;
			
			case 1:
				func_348();
				break;
			
			case 2:
				func_342();
				break;
			
			case 3:
				func_339();
				break;
			
			case 4:
				func_244();
				break;
			
			case 5:
				func_232();
				break;
			
			case 6:
				func_226();
				break;
			
			case 7:
				func_216();
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
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			func_4(unk_0xBC25C936A095B5BA(), 476);
			iLocal_3443 = 1;
		}
	}
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (iLocal_3444 == 0)
			{
				iLocal_3275 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
				if (unk_0x724D816EA203A79E(iLocal_3275))
				{
					if (unk_0xE59B7F5A03335350(iLocal_3275, 0))
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
		if (unk_0x724D816EA203A79E(uLocal_3229[0]))
		{
			if (unk_0x36CEFBE9B745A58D(uLocal_3229[0]))
			{
				iLocal_3191++;
				iLocal_3445[0] = 1;
			}
		}
	}
	if (iLocal_3445[1] == 0)
	{
		if (unk_0x724D816EA203A79E(uLocal_3229[1]))
		{
			if (unk_0x36CEFBE9B745A58D(uLocal_3229[1]))
			{
				iLocal_3191++;
				iLocal_3445[1] = 1;
			}
		}
	}
	if (iLocal_3445[2] == 0)
	{
		if (unk_0x724D816EA203A79E(uLocal_3229[2]))
		{
			if (unk_0x36CEFBE9B745A58D(uLocal_3229[2]))
			{
				iLocal_3191++;
				iLocal_3445[2] = 1;
			}
		}
	}
	if (iLocal_3445[3] == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_3233[0]))
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_3233[0]))
			{
				iLocal_3191++;
				iLocal_3445[3] = 1;
			}
		}
	}
	if (iLocal_3445[4] == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_3233[1]))
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_3233[1]))
			{
				iLocal_3191++;
				iLocal_3445[4] = 1;
			}
		}
	}
	if (iLocal_3445[5] == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_3233[2]))
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_3233[2]))
			{
				iLocal_3191++;
				iLocal_3445[5] = 1;
			}
		}
	}
	if (iLocal_3445[6] == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_3233[3]))
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_3233[3]))
			{
				iLocal_3191++;
				iLocal_3445[6] = 1;
			}
		}
	}
	if (iLocal_3445[7] == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_3233[4]))
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_3233[4]))
			{
				iLocal_3191++;
				iLocal_3445[7] = 1;
			}
		}
	}
	if (iLocal_3445[8] == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_3233[5]))
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_3233[5]))
			{
				iLocal_3191++;
				iLocal_3445[8] = 1;
			}
		}
	}
	if (iLocal_3445[9] == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_3233[6]))
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_3233[6]))
			{
				iLocal_3191++;
				iLocal_3445[9] = 1;
			}
		}
	}
	if (iLocal_3445[10] == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_3233[7]))
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_3233[7]))
			{
				iLocal_3191++;
				iLocal_3445[10] = 1;
			}
		}
	}
	if (iLocal_3445[11] == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_3233[8]))
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_3233[8]))
			{
				iLocal_3191++;
				iLocal_3445[11] = 1;
			}
		}
	}
	if (iLocal_3445[12] == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_3233[9]))
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_3233[9]))
			{
				iLocal_3191++;
				iLocal_3445[12] = 1;
			}
		}
	}
	if (iLocal_3445[13] == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_3233[10]))
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_3233[10]))
			{
				iLocal_3191++;
				iLocal_3445[13] = 1;
			}
		}
	}
	if (iLocal_3445[14] == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_3248))
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_3248))
			{
				iLocal_3191++;
				iLocal_3445[14] = 1;
			}
		}
	}
	if (iLocal_3445[15] == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_3249))
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_3249))
			{
				iLocal_3191++;
				iLocal_3445[15] = 1;
			}
		}
	}
	if (iLocal_3445[16] == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_3250))
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_3250))
			{
				iLocal_3191++;
				iLocal_3445[16] = 1;
			}
		}
	}
	if (iLocal_3445[17] == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_3251[0]))
		{
			if (unk_0x36CEFBE9B745A58D(iLocal_3251[0]))
			{
				iLocal_3191++;
				iLocal_3445[17] = 1;
			}
		}
	}
	if (iLocal_3180 == 8)
	{
		if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) != 0)
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
	
	Global_55977 = iParam0;
	if (!Global_55975)
	{
		Global_55975 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_68062)
		{
			if (Global_68063[iVar0 /*9*/] == iParam0)
			{
				Global_68063[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_3(int iParam0, int iParam1)
{
	Global_55978 = iParam0;
	Global_55979 = iParam1;
}

void func_4(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_55980 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_68062)
	{
		if (iParam1 == -1 || Global_68063[iVar0 /*9*/] == iParam1)
		{
			if (Global_68063[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_68063[iVar0 /*9*/].f_6 = iParam0;
				Global_68063[iVar0 /*9*/].f_7 = 1;
				Global_68063[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_5()
{
	if (unk_0x17FAADF9916EF741())
	{
		if (unk_0x724D816EA203A79E(iLocal_3267))
		{
			unk_0x1C5BDB4E5D257D63(iLocal_3267, 0, 0, 1);
		}
	}
	if (iLocal_3181 > 0)
	{
		func_214();
	}
	if (iLocal_3181 == 0)
	{
		if (iLocal_3345 == 1)
		{
			func_117();
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
		unk_0x522053D86D6E1C7A("Misssolomon_3");
		unk_0xF243B7A14FCFD0F4(joaat("oracle2"));
		unk_0xF243B7A14FCFD0F4(joaat("baller2"));
		if (unk_0x2DA8CA50A72528FB(uLocal_3285))
		{
			unk_0x07B8ECB35A4ED3AC(&uLocal_3285);
		}
		if (unk_0x1E8349F219AC5AF9("Trev4_5"))
		{
			unk_0xC881DDFA077826BB("Trev4_5", 0, 1f, 1f);
			unk_0x4CE01E22F13D3913("Trev4_5");
		}
		if (unk_0x724D816EA203A79E(iLocal_3259))
		{
			unk_0x1E7A09C1710FB071(&iLocal_3259);
		}
		unk_0xC1B1E9A034A63A62(0);
		if (unk_0x17FAADF9916EF741())
		{
			if (!func_24())
			{
				unk_0x8B6B50EADA01F251(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1));
			}
			func_21(0, -1, 1);
		}
		if (!unk_0x726D9204B160D23E())
		{
			unk_0x829FA4611BD56B44(800);
		}
		if (unk_0x724D816EA203A79E(iLocal_3228))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_3228))
			{
				unk_0xB105531EDD3DE51B(iLocal_3228, 1);
				unk_0x2E35C4FA5F0ED22F(iLocal_3228, 0);
			}
		}
		unk_0x3857DADBD6EC8A54("TRV4_LOSE_COPS");
		if (!unk_0x144E80F5C46A6B75("SOL_3_LOSE_COPS"))
		{
			unk_0xD6423910AAD8A379("SOL_3_LOSE_COPS");
		}
		unk_0xEB233A3B7635D2AC();
		func_20("TRV4_END1", 7500, 1);
		if (unk_0x144E80F5C46A6B75("SOL_3_ENGINE_DEATH_SCENE"))
		{
			unk_0xC1300D0F3A74E20B("SOL_3_ENGINE_DEATH_SCENE");
		}
		if (func_19(2))
		{
			func_18(2, 0);
		}
		uLocal_3221 = unk_0x3F15B158E03C72E5(-948.4f, -2992.6f, 13.3f, 6f, 5f, 4f, 60f, 0, 7);
		if (unk_0x724D816EA203A79E(iLocal_3266))
		{
			if (unk_0xE59B7F5A03335350(iLocal_3266, 0))
			{
				unk_0x5EDBD463D700284F(iLocal_3266, 0);
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_3267))
		{
			if (unk_0xE59B7F5A03335350(iLocal_3267, 0))
			{
				unk_0x5EDBD463D700284F(iLocal_3267, 0);
			}
		}
		unk_0xAEC867D0DBB7AFEB(5);
		unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 3, 0);
		unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
		func_17(&uLocal_3578, 0, unk_0xBC25C936A095B5BA(), "MICHAEL", 0, 1);
		unk_0x9B90420B04C07704("PoliceScannerDisabled", 0);
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1)
	{
		if (iLocal_3469 == 0)
		{
			if (!unk_0x724D816EA203A79E(iLocal_3279[0]))
			{
				if (unk_0xD6513D668481290A(joaat("oracle2")))
				{
					iLocal_3279[0] = unk_0x61C05BF08A1E0EFE(joaat("oracle2"), -1025.596f, -2869.237f, 12.9585f, 241.0686f, 1, 1, 0);
					unk_0xB71D41C0310C93DE(iLocal_3279[0], 1, 1);
					unk_0xF0A40F19AAB79E88(iLocal_3279[0], 1084227584);
					unk_0x2CA123B0622F495C(joaat("oracle2"));
					iLocal_3469 = 1;
				}
			}
		}
		if (iLocal_3470 == 0)
		{
			if (!unk_0x724D816EA203A79E(iLocal_3279[1]))
			{
				if (unk_0xD6513D668481290A(joaat("baller2")))
				{
					iLocal_3279[1] = unk_0x61C05BF08A1E0EFE(joaat("baller2"), -971.4223f, -2903.354f, 12.9652f, 61.0213f, 1, 1, 0);
					unk_0xB71D41C0310C93DE(iLocal_3279[1], 1, 1);
					unk_0xF0A40F19AAB79E88(iLocal_3279[1], 1084227584);
					unk_0x2CA123B0622F495C(joaat("baller2"));
					iLocal_3470 = 1;
				}
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_3279[0]))
		{
			if (unk_0xE59B7F5A03335350(iLocal_3279[0], 0))
			{
				if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_3279[0], 0))
				{
					if (!unk_0x144E80F5C46A6B75("SOL_3_LOSE_COPS_VEHICLE"))
					{
						unk_0xD6423910AAD8A379("SOL_3_LOSE_COPS_VEHICLE");
					}
				}
			}
			if (func_16(unk_0xBC25C936A095B5BA(), iLocal_3279[0], 1) > 200f || unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_3279[0], 0))
			{
				unk_0x1E7A09C1710FB071(&(iLocal_3279[0]));
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_3279[1]))
		{
			if (unk_0xE59B7F5A03335350(iLocal_3279[1], 0))
			{
				if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_3279[1], 0))
				{
					if (!unk_0x144E80F5C46A6B75("SOL_3_LOSE_COPS_VEHICLE"))
					{
						unk_0xD6423910AAD8A379("SOL_3_LOSE_COPS_VEHICLE");
					}
				}
			}
			if (func_16(unk_0xBC25C936A095B5BA(), iLocal_3279[1], 1) > 200f || unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_3279[1], 0))
			{
				unk_0x1E7A09C1710FB071(&(iLocal_3279[1]));
			}
		}
		if (iLocal_3430 == 0)
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_3233[0]))
			{
				func_14(iLocal_3233[0], "SURROUNDED", 24);
				iLocal_3430 = 1;
			}
		}
		if (iLocal_3374 == 0)
		{
			if (unk_0x83666F9FB8FEBD4B() > 8000)
			{
				if (unk_0xE59B7F5A03335350(iLocal_3268[0], 0))
				{
					unk_0x9E6D037EC3389728(iLocal_3268[0], 68, "BB_Chase", 1);
					unk_0x2026EFFE4E1D8EDC(iLocal_3268[0], 0f, 0f, 0.15f);
				}
				if (unk_0xE59B7F5A03335350(iLocal_3268[1], 0))
				{
					unk_0x9E6D037EC3389728(iLocal_3268[1], 69, "BB_Chase", 1);
					unk_0x2026EFFE4E1D8EDC(iLocal_3268[1], 0f, 0f, 0.15f);
				}
				iLocal_3374 = 1;
			}
		}
		else
		{
			if (unk_0xE59B7F5A03335350(iLocal_3268[0], 0))
			{
				if (unk_0xB34E411B0A4BF096(iLocal_3268[0]))
				{
					if (unk_0x5B80643EF917B728(iLocal_3268[0]) > 5000f)
					{
						if (unk_0xB66CFDE6B830965A(iLocal_3268[0]))
						{
							unk_0xD87F0F9CDF39238A(iLocal_3268[0]);
						}
					}
				}
				else if (iLocal_3375 == 0)
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_3233[6]))
					{
						unk_0x2E35C4FA5F0ED22F(iLocal_3233[6], 0);
					}
					if (!unk_0x36CEFBE9B745A58D(iLocal_3233[7]))
					{
						unk_0x2E35C4FA5F0ED22F(iLocal_3233[7], 0);
					}
					iLocal_3375 = 1;
				}
			}
			if (unk_0xE59B7F5A03335350(iLocal_3268[1], 0))
			{
				if (unk_0xB34E411B0A4BF096(iLocal_3268[1]))
				{
					if (unk_0x5B80643EF917B728(iLocal_3268[1]) > 5000f)
					{
						if (unk_0xB66CFDE6B830965A(iLocal_3268[1]))
						{
							unk_0xD87F0F9CDF39238A(iLocal_3268[1]);
						}
					}
				}
				else if (iLocal_3376 == 0)
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_3233[8]))
					{
						unk_0x2E35C4FA5F0ED22F(iLocal_3233[8], 0);
					}
					if (!unk_0x36CEFBE9B745A58D(iLocal_3233[9]))
					{
						unk_0x2E35C4FA5F0ED22F(iLocal_3233[9], 0);
					}
					iLocal_3376 = 1;
				}
			}
		}
		func_12();
		if (iLocal_3474 == 0)
		{
			if (unk_0x724D816EA203A79E(iLocal_3267))
			{
				if (unk_0xE59B7F5A03335350(iLocal_3267, 0))
				{
					if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_3267, 0))
					{
						unk_0x3857DADBD6EC8A54("TRV4_JET_ENTERED");
						if (!unk_0x144E80F5C46A6B75("SOL_3_LOSE_COPS_PLANE"))
						{
							unk_0xD6423910AAD8A379("SOL_3_LOSE_COPS_PLANE");
						}
						unk_0x1D1C393C7689E5A6(4f, 15f, 4);
						unk_0x1E7A09C1710FB071(&iLocal_3267);
						iLocal_3474 = 1;
					}
					else if (func_16(unk_0xBC25C936A095B5BA(), iLocal_3267, 1) > 200f)
					{
						unk_0x1E7A09C1710FB071(&iLocal_3267);
					}
				}
			}
		}
		if (iLocal_3474 == 1)
		{
			if (unk_0x724D816EA203A79E(iLocal_3267))
			{
				if (unk_0xE59B7F5A03335350(iLocal_3267, 0))
				{
					if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_3267, 0))
					{
						if (unk_0x144E80F5C46A6B75("SOL_3_LOSE_COPS_PLANE"))
						{
							unk_0xC1300D0F3A74E20B("SOL_3_LOSE_COPS_PLANE");
						}
						unk_0x3857DADBD6EC8A54("TRV4_LOSE_COPS");
						iLocal_3474 = 0;
					}
				}
			}
		}
		if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
		{
			if (iLocal_3477 == 0)
			{
				iLocal_3193 = unk_0x105601648511CC64();
				iLocal_3477 = 1;
			}
		}
		if (iLocal_3477 == 1)
		{
			if (unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F()) == 0)
			{
				if (unk_0x105601648511CC64() > iLocal_3193 + 3500)
				{
					if (unk_0x144E80F5C46A6B75("SOL_3_LOSE_COPS_PLANE"))
					{
						unk_0xC1300D0F3A74E20B("SOL_3_LOSE_COPS_PLANE");
					}
					if (unk_0x144E80F5C46A6B75("SOL_3_LOSE_COPS"))
					{
						unk_0xC1300D0F3A74E20B("SOL_3_LOSE_COPS");
					}
					if (unk_0x144E80F5C46A6B75("SOL_3_LOSE_COPS_VEHICLE"))
					{
						unk_0xC1300D0F3A74E20B("SOL_3_LOSE_COPS_VEHICLE");
					}
					unk_0x3857DADBD6EC8A54("TRV4_COPS_LOST");
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
	func_410();
}

void func_7(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_55969)
	{
		Global_55969 = iParam1;
	}
	if (bParam0)
	{
		if ((func_423(0) && Global_71224.f_1 == 1) && func_9(Global_71224))
		{
		}
		else
		{
			Global_55967 = 1;
		}
	}
	if (Global_105220.f_9056 || func_423(0))
	{
		iVar0 = func_8();
		iVar1 = Global_83852[iVar0 /*5*/];
		uVar2 = Global_71247.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_105220.f_9056)
			{
			}
			return;
		}
		if (unk_0xFA30DFD0084E92FE(Global_83852[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0xFA30DFD0084E92FE(Global_83852[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0xF0059F27F7BB6680(&(Global_83852[iVar0 /*5*/].f_1), 4);
		unk_0xF0059F27F7BB6680(&Global_71226, 1);
		Global_71242 = uVar2;
		Global_71243 = unk_0x105601648511CC64();
	}
}

int func_8()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0xFA30DFD0084E92FE(Global_83852[iVar0 /*5*/].f_1, 2))
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
	while (iVar0 < Global_68062)
	{
		if (Global_68063[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_68063[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_68063[iVar0 /*9*/].f_1 = (Global_68063[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_68063[iVar0 /*9*/] != -1)
	{
		if (Global_56192[Global_68063[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_68063[iVar0 /*9*/].f_1 > 1)
			{
				Global_68063[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_68063[iVar0 /*9*/].f_1 < 0)
			{
				Global_68063[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_11(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_55975)
	{
	}
	Global_55975 = 0;
	if (bParam0)
	{
		Global_55976 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_68062)
		{
			if (Global_56192[Global_68063[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_68063[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_68062)
		{
			if (Global_68063[iVar0 /*9*/] > 0)
			{
				if (Global_68063[iVar0 /*9*/] == iParam1)
				{
					Global_68063[iVar0 /*9*/].f_5 = 0;
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
		if (unk_0x724D816EA203A79E(iLocal_3233[iLocal_3189]))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_3233[iLocal_3189]))
			{
				if (!unk_0x5237AF95232D78C5(iLocal_3233[iLocal_3189], 0))
				{
					if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						if (func_13(unk_0xBC25C936A095B5BA(), iLocal_3233[iLocal_3189]) > 200f)
						{
							unk_0xA4E856A8CD53B8DF(iLocal_3233[iLocal_3189]);
							unk_0x02537C8C1BEEB477(&(iLocal_3233[iLocal_3189]));
						}
						else if (func_13(unk_0xBC25C936A095B5BA(), iLocal_3233[iLocal_3189]) > 20f)
						{
							if (unk_0xF4FCC3C1048FF2AB(iLocal_3233[iLocal_3189], -1207174364) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_3233[iLocal_3189], -1207174364) != 0)
							{
								unk_0xD0231395241DBA85(iLocal_3233[iLocal_3189], unk_0xBC25C936A095B5BA(), unk_0xBC25C936A095B5BA(), 2f, 1, 15f, 20f, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"));
							}
						}
						else if (unk_0xF4FCC3C1048FF2AB(iLocal_3233[iLocal_3189], 780511057) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_3233[iLocal_3189], 780511057) != 0)
						{
							unk_0xB8CBD998685C0685(iLocal_3233[iLocal_3189], unk_0xBC25C936A095B5BA(), 0, 16);
							unk_0x91629AC1E1F78419(iLocal_3233[iLocal_3189], 50, 1);
						}
					}
					else if (func_13(unk_0xBC25C936A095B5BA(), iLocal_3233[iLocal_3189]) > 200f)
					{
						unk_0x02537C8C1BEEB477(&(iLocal_3233[iLocal_3189]));
					}
					else if (func_13(unk_0xBC25C936A095B5BA(), iLocal_3233[iLocal_3189]) > 5f)
					{
						if (unk_0xF4FCC3C1048FF2AB(iLocal_3233[iLocal_3189], -1207174364) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_3233[iLocal_3189], -1207174364) != 0)
						{
							unk_0xD0231395241DBA85(iLocal_3233[iLocal_3189], unk_0xBC25C936A095B5BA(), unk_0xBC25C936A095B5BA(), 2f, 1, 15f, 20f, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"));
						}
					}
					else if (unk_0xF4FCC3C1048FF2AB(iLocal_3233[iLocal_3189], 780511057) != 1 && unk_0xF4FCC3C1048FF2AB(iLocal_3233[iLocal_3189], 780511057) != 0)
					{
						unk_0xB8CBD998685C0685(iLocal_3233[iLocal_3189], unk_0xBC25C936A095B5BA(), 0, 16);
						unk_0x91629AC1E1F78419(iLocal_3233[iLocal_3189], 50, 1);
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
			if (unk_0x724D816EA203A79E(iLocal_3268[0]))
			{
				if (unk_0xE59B7F5A03335350(iLocal_3268[0], 0))
				{
					if (unk_0xB34E411B0A4BF096(iLocal_3268[0]))
					{
					}
					else
					{
						if (unk_0x724D816EA203A79E(iLocal_3233[6]))
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_3233[6]))
							{
								unk_0x2E35C4FA5F0ED22F(iLocal_3233[6], 0);
								unk_0xA4E856A8CD53B8DF(iLocal_3233[6]);
								unk_0xC5A6DFE2B8987B17(&uLocal_3292);
								unk_0x932E201A82D2EDB8(0, iLocal_3268[0], 256);
								unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
								unk_0x535008C596714F9E(uLocal_3292);
								unk_0xA8E6405305C0D7DF(iLocal_3233[6], uLocal_3292);
								unk_0x02DAF06EA4F08219(&uLocal_3292);
							}
						}
						if (unk_0x724D816EA203A79E(iLocal_3233[7]))
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_3233[7]))
							{
								unk_0x2E35C4FA5F0ED22F(iLocal_3233[7], 0);
								unk_0xA4E856A8CD53B8DF(iLocal_3233[7]);
								unk_0xC5A6DFE2B8987B17(&uLocal_3292);
								unk_0x932E201A82D2EDB8(0, iLocal_3268[0], 256);
								unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
								unk_0x535008C596714F9E(uLocal_3292);
								unk_0xA8E6405305C0D7DF(iLocal_3233[7], uLocal_3292);
								unk_0x02DAF06EA4F08219(&uLocal_3292);
							}
						}
						iLocal_3346 = 1;
					}
				}
			}
		}
		else if (iLocal_3431 == 0)
		{
			if (unk_0x724D816EA203A79E(iLocal_3268[0]))
			{
				if (unk_0xE59B7F5A03335350(iLocal_3268[0], 0))
				{
					if (unk_0x724D816EA203A79E(iLocal_3233[6]))
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_3233[6]))
						{
							if (!unk_0x62F3A07C43FFB568(iLocal_3233[6], iLocal_3268[0], 0))
							{
								if (func_13(unk_0xBC25C936A095B5BA(), iLocal_3233[6]) < 20f)
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
			if (unk_0x724D816EA203A79E(iLocal_3268[1]))
			{
				if (unk_0xE59B7F5A03335350(iLocal_3268[1], 0))
				{
					if (unk_0xB34E411B0A4BF096(iLocal_3268[1]))
					{
					}
					else
					{
						if (unk_0x724D816EA203A79E(iLocal_3233[8]))
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_3233[8]))
							{
								unk_0x2E35C4FA5F0ED22F(iLocal_3233[8], 0);
								unk_0xA4E856A8CD53B8DF(iLocal_3233[8]);
								unk_0xC5A6DFE2B8987B17(&uLocal_3292);
								unk_0x932E201A82D2EDB8(0, iLocal_3268[1], 256);
								unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
								unk_0x535008C596714F9E(uLocal_3292);
								unk_0xA8E6405305C0D7DF(iLocal_3233[8], uLocal_3292);
								unk_0x02DAF06EA4F08219(&uLocal_3292);
							}
						}
						if (unk_0x724D816EA203A79E(iLocal_3233[9]))
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_3233[9]))
							{
								unk_0x2E35C4FA5F0ED22F(iLocal_3233[9], 0);
								unk_0xA4E856A8CD53B8DF(iLocal_3233[9]);
								unk_0xC5A6DFE2B8987B17(&uLocal_3292);
								unk_0x932E201A82D2EDB8(0, iLocal_3268[1], 256);
								unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
								unk_0x535008C596714F9E(uLocal_3292);
								unk_0xA8E6405305C0D7DF(iLocal_3233[9], uLocal_3292);
								unk_0x02DAF06EA4F08219(&uLocal_3292);
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
		if (unk_0x724D816EA203A79E(iLocal_3233[10]))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_3233[10]))
			{
				if (func_13(unk_0xBC25C936A095B5BA(), iLocal_3233[10]) > 200f)
				{
					unk_0x02537C8C1BEEB477(&(iLocal_3233[iLocal_3189]));
					unk_0x4EA570997E107F35("misssolomon_3");
				}
				else if (unk_0xF9E082857622D91E("misssolomon_3"))
				{
					if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), -923.2303f, -2948.004f, 12.9451f, 2f, 2f, 2f, 0, 1, 0))
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_3233[10]))
						{
							unk_0xA4E856A8CD53B8DF(iLocal_3233[10]);
							unk_0xC5A6DFE2B8987B17(&uLocal_3292);
							unk_0xE896C0AD02364F2A(0, "misssolomon_3", "plyr_roll_left", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
							unk_0x535008C596714F9E(uLocal_3292);
							unk_0xA8E6405305C0D7DF(iLocal_3233[10], uLocal_3292);
							unk_0x02DAF06EA4F08219(&uLocal_3292);
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
	unk_0x53D8178763EDCE60(uParam0, sParam1, func_15(iParam2), 1);
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
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		Var0 = { unk_0x541C2AEF053615BC(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x541C2AEF053615BC(iParam0, 0) };
	}
	if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		Var3 = { unk_0x541C2AEF053615BC(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x541C2AEF053615BC(iParam1, 0) };
	}
	return unk_0xF0F2FC9DE291567F(Var0, Var3, iParam2);
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
	if (!Global_70978)
	{
		if (!unk_0x36CEFBE9B745A58D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x8941EA87BBF38C6F(iParam2, 0);
			}
			else
			{
				unk_0x8941EA87BBF38C6F(iParam2, 1);
			}
		}
		if (!unk_0x36CEFBE9B745A58D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7C7F4D01B6DB297B(iParam2, 0);
			}
			else
			{
				unk_0x7C7F4D01B6DB297B(iParam2, 1);
			}
		}
	}
}

void func_18(int iParam0, bool bParam1)
{
	if (unk_0xFA30DFD0084E92FE(Global_25435, iParam0))
	{
		if (!bParam1)
		{
			unk_0x7CB6FD92BE491AD9(&Global_25435, iParam0);
			StringCopy(&(Global_25436[iParam0 /*6*/]), "NULL", 24);
			Global_25491[iParam0] = bParam1;
		}
	}
}

int func_19(int iParam0)
{
	if (unk_0xFA30DFD0084E92FE(Global_25435, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_20(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x3714DE83381EADC2(sParam0);
	unk_0x41D8F63F629E76BE(iParam1, 1);
}

void func_21(int iParam0, int iParam1, int iParam2)
{
	if (func_23() && func_24())
	{
		while (Global_92950 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x121BBDEFA4F0C22B(0);
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				unk_0xF643D76BBEB27712(unk_0xBC25C936A095B5BA());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x724D816EA203A79E(iParam0))
				{
					if (unk_0xE59B7F5A03335350(iParam0, 0))
					{
						if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iParam0, 0))
						{
							unk_0xBD53A029D0155A42(unk_0xBC25C936A095B5BA(), iParam0, iParam1);
							unk_0x2B9AEC08E469E384(0f, 1065353216);
							unk_0xF3F01A78937DC905(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
			}
		}
		unk_0x174DF5072163DD21();
		func_22(0);
	}
}

void func_22(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&(Global_92955.f_20), 13);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_92955.f_20), 13);
	}
}

int func_23()
{
	if (Global_92955 == 10 || Global_92955 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_24()
{
	return unk_0xFA30DFD0084E92FE(Global_92955.f_20, 13);
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
		if (!unk_0x3362CDE8460ED38B("FinaleC2", unk_0x1377080E9B0BD993()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_92992)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_92992)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_116(1);
		if (iParam0 <= Global_92992)
		{
		}
		iVar1 = func_114(unk_0x1377080E9B0BD993(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_105220.f_9056.f_330[iVar1 /*6*/].f_1 = 0;
			uVar2 = func_112(iVar1);
			cVar3 = { Global_83888[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_105220.f_9056.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0x1B7435D54924A668(&cVar3, uVar2, Global_92992, iParam0);
		}
		else
		{
			iVar5 = func_107(unk_0x1377080E9B0BD993(), 1);
			if (iVar5 != -1)
			{
				Global_105220.f_18545[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_106(iVar5)}, 4);
				unk_0x1B7435D54924A668(&uVar6, 0, Global_92992, iParam0);
			}
			else
			{
				iVar10 = func_105(&(Global_92955.f_3));
				if (iVar10 > -1)
				{
					Global_105220.f_24957.f_4[iVar10] = 0;
				}
			}
		}
		Global_87278 = iParam2;
		Global_92992 = iParam0;
		func_26(iParam0, sParam1, iParam4, iParam5);
		if (unk_0x3362CDE8460ED38B(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_92992)
	{
	}
}

void func_26(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_27(&Global_98783, unk_0x1377080E9B0BD993(), iParam0, uParam1, iParam3, iParam2);
}

void func_27(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_104();
	uParam0->f_1 = func_93();
	unk_0x6E1ECC86C790262C(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		func_67(&(uParam0->f_2869), 0);
		func_66(unk_0xBC25C936A095B5BA());
		func_59(unk_0xBC25C936A095B5BA(), 0);
		unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_105220.f_2354.f_539.f_294[iVar1];
		if (iVar1 == func_56())
		{
			func_49(unk_0xBC25C936A095B5BA(), &(uParam0->f_616[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_92745[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_92745[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_92745[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_92745[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_92745[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_92745[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_92745[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_92745[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_92745[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_92745[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*472*/][iVar0 /*5*/] = { Global_105220.f_2354.f_539.f_298[iVar1 /*472*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_812[iVar1 /*472*/].f_221[iVar0 /*5*/] = { Global_105220.f_2354.f_539.f_298[iVar1 /*472*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0x6CB99B97664C3727(joaat("sp0_weap_purch_0"), &(uParam0->f_2229[iVar1 /*32*/][0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_purch_1"), &(uParam0->f_2229[iVar1 /*32*/][1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_5[0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_5[1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_5[2]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_5[3]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_5[4]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_16[0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_16[1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_16[2]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_16[3]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_16[4]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_2229[iVar1 /*32*/].f_16[5]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_2229[iVar1 /*32*/].f_16[6]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_2229[iVar1 /*32*/].f_16[7]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_2229[iVar1 /*32*/].f_16[8]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_2229[iVar1 /*32*/].f_16[9]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_2229[iVar1 /*32*/].f_16[10]), -1);
				unk_0x6CB99B97664C3727(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_2229[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0x6CB99B97664C3727(joaat("sp1_weap_purch_0"), &(uParam0->f_2229[iVar1 /*32*/][0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_purch_1"), &(uParam0->f_2229[iVar1 /*32*/][1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_5[0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_5[1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_5[2]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_5[3]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_5[4]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_16[0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_16[1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_16[2]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_16[3]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_16[4]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_2229[iVar1 /*32*/].f_16[5]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_2229[iVar1 /*32*/].f_16[6]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_2229[iVar1 /*32*/].f_16[7]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_2229[iVar1 /*32*/].f_16[8]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_2229[iVar1 /*32*/].f_16[9]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_2229[iVar1 /*32*/].f_16[10]), -1);
				unk_0x6CB99B97664C3727(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_2229[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0x6CB99B97664C3727(joaat("sp2_weap_purch_0"), &(uParam0->f_2229[iVar1 /*32*/][0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_purch_1"), &(uParam0->f_2229[iVar1 /*32*/][1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_5[0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_5[1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_5[2]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_5[3]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_5[4]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_2229[iVar1 /*32*/].f_16[0]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_2229[iVar1 /*32*/].f_16[1]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_2229[iVar1 /*32*/].f_16[2]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_2229[iVar1 /*32*/].f_16[3]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_2229[iVar1 /*32*/].f_16[4]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_2229[iVar1 /*32*/].f_16[5]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_2229[iVar1 /*32*/].f_16[6]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_2229[iVar1 /*32*/].f_16[7]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_2229[iVar1 /*32*/].f_16[8]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_2229[iVar1 /*32*/].f_16[9]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_2229[iVar1 /*32*/].f_16[10]), -1);
				unk_0x6CB99B97664C3727(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_2229[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_105220.f_20535.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_53141[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_105220.f_2354.f_539.f_2387[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_105220.f_2354.f_539.f_2387[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2823[iVar1 /*15*/][iVar0] = Global_105220.f_2354.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2823[iVar1 /*15*/].f_5[iVar0] = Global_105220.f_2354.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2823[iVar1 /*15*/].f_10[iVar0] = Global_105220.f_2354.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2330[iVar1 /*164*/][iVar0] = Global_105220.f_2354[iVar1 /*164*/][iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_4[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_8[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_12[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_16[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_20[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_24[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_28[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_32[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_36[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_40[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_44[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_48[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_52[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_56[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_60[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_64[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_68[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_72[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_76[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_80[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_84[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_88[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_92[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_96[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_100[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_104[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_108[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_112[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_116[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_120[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_124[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_128[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_132[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_136[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_140[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_144[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_148[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_152[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_156[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2330[iVar1 /*164*/].f_160[iVar0] = Global_105220.f_2354[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0x6CB99B97664C3727(joaat("sp0_special_ability"), &(uParam0->f_2326[0]), -1);
	unk_0x6CB99B97664C3727(joaat("sp1_special_ability"), &(uParam0->f_2326[1]), -1);
	unk_0x6CB99B97664C3727(joaat("sp2_special_ability"), &(uParam0->f_2326[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_29(&(uParam0->f_2875), uParam0, iParam5, 1, 1, 0);
	}
	func_28(&(uParam0->f_2965));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_28(var uParam0)
{
	*uParam0 = Global_88949;
	uParam0->f_1 = Global_88950;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_29(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0xBC25C936A095B5BA();
	}
	if (unk_0x724D816EA203A79E(iParam2))
	{
		uParam1->f_5 = func_47(iParam2);
	}
	if (func_44(iParam2, &iVar0, iParam3, iParam5))
	{
		func_30(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0x724D816EA203A79E(iVar0))
	{
		if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
		{
			if (unk_0x5E87CB0495C97732(iVar0, joaat("skylift")) && unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iVar0, 0))
			{
				func_30(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_30(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0xE59B7F5A03335350(iParam2, 0))
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
		if (Global_92955.f_22[iVar0] == iParam0)
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
		*uParam0 = { unk_0x541C2AEF053615BC(iParam1, 1) };
		uParam0->f_6 = unk_0x349C94FFF43E2979(iParam1);
		uParam0->f_3 = { unk_0xB5D9AE572C19509E(iParam1) };
		if (unk_0x0C265B3C448E6954(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_70705 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
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
		if (unk_0x724D816EA203A79E(Global_69800.f_484[iVar0]))
		{
			if (iParam0 == Global_69800.f_484[iVar0])
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
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 145;
	}
	if (!unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x724D816EA203A79E(Global_90431[iVar0]))
		{
			if (Global_90431[iVar0] == iParam0)
			{
				return Global_90441[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_35(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	if (!unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x724D816EA203A79E(Global_90431[iVar0]))
		{
			if (Global_90431[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_90441[iVar0])
				{
					if (iParam2 == 0 || unk_0x6F79ECA8C83E4357(iParam0) == func_36(iParam1, iParam2))
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
			if (Global_105220.f_9056.f_99.f_58[128] && !Global_105220.f_9056.f_99.f_58[131])
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
					if (Global_105220.f_9056.f_99.f_58[119])
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
			else if (Global_105220.f_9056.f_99.f_58[118])
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
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		func_43(uParam1);
		uParam1->f_66 = unk_0x6F79ECA8C83E4357(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x2232934AD664DD49(iParam0), 16);
		*uParam1 = unk_0x89FC8F09D6647DEC(iParam0);
		unk_0x87F182D2DA225F0D(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x375E42DA279E7FED(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x5F73107BDF663316(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x2629793241883F74(iParam0);
		uParam1->f_67 = unk_0x0FF608FD384AF8FA(iParam0);
		uParam1->f_69 = unk_0xC2587DF549B15BB6(iParam0);
		uParam1->f_70 = unk_0xA3E58143095D5828(iParam0);
		unk_0x715BE0BE8D01B21C(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x2774857472EBCE0F(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0xFF7612EE8C5F1E19(iParam0, 2))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 28);
		}
		if (unk_0xFF7612EE8C5F1E19(iParam0, 3))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 29);
		}
		if (unk_0xFF7612EE8C5F1E19(iParam0, 0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 30);
		}
		if (unk_0xFF7612EE8C5F1E19(iParam0, 1))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_42(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x6DB86B1ADD81CED4(iParam0, 0))
		{
			uParam1->f_68 = unk_0xAA1A0B747CDFC807(iParam0);
		}
		if (unk_0xA19D269B4B5A1532(uParam1->f_66))
		{
			if (unk_0x9741AF87EDFF311C(iParam0))
			{
				switch (unk_0xBCD69B76B3E60BF5(iParam0))
				{
					case 3:
					case 0:
						unk_0x7CB6FD92BE491AD9(&(uParam1->f_77), 23);
						unk_0xF0059F27F7BB6680(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0x7CB6FD92BE491AD9(&(uParam1->f_77), 23);
						unk_0x7CB6FD92BE491AD9(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0xF0059F27F7BB6680(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xB830044A99FABAAF(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 9);
		}
		if (unk_0xA37E9F4E2795A88A(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 10);
		}
		if (unk_0xFD22243DAFAFE349(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 13);
			unk_0x103992E73728DA90(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x1EE004ED283345A0(iParam0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 12);
		}
		func_41(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xFC8A228C62614C5C(iParam0, iVar0 + 1))
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_77), func_40(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x97413DC2A72A11B3(iParam0, 0))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_77), 11);
		}
		if (unk_0x3C03CFD5DD1E2D97(iParam0, "IgnoredByQuickSave") && unk_0x75236BEC3BDDE069(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xF0059F27F7BB6680(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(uParam1->f_77), 27);
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
	
	if (!unk_0xE59B7F5A03335350(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xA6BE0954FC6BAA16(*iParam0) == 0)
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
			if (unk_0x0ABA73B9B2E2F838(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x3EB14CBD49DA0017(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xC8B123E980199685(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xC8B123E980199685(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_42(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_43(var uParam0)
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

int func_44(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (!unk_0x36CEFBE9B745A58D(iParam0))
		{
			if (iParam0 == unk_0xBC25C936A095B5BA())
			{
				*uParam1 = unk_0x3E12B546F3F2597A();
			}
			else
			{
				*uParam1 = unk_0x9FE9D386222EEE47(iParam0, 1);
			}
			if (unk_0x724D816EA203A79E(*uParam1))
			{
				if (unk_0xE59B7F5A03335350(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(*uParam1, 1), unk_0x541C2AEF053615BC(iParam0, 1), 1) < 100f)
					{
						if (unk_0x5E87CB0495C97732(*uParam1, joaat("taxi")))
						{
							if (unk_0x3187EF5798B5D209(*uParam1, -1, 0) != iParam0 && unk_0x3187EF5798B5D209(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_45(*uParam1, func_104(), 1))
						{
							sVar0 = unk_0x1377080E9B0BD993();
							if (!unk_0x3362CDE8460ED38B(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x5237AF95232D78C5(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0x3C03CFD5DD1E2D97(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0x75236BEC3BDDE069(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x5E87CB0495C97732(*uParam1, joaat("blimp")))
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

int func_45(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_46(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xFA30DFD0084E92FE(Global_105220.f_7200[iVar9], 0))
		{
			if (unk_0x9945EE67AEC122F7(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_46(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_47(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_48(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_48(int iParam0)
{
	if (func_38(iParam0))
	{
		return Global_105220.f_28021[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_49(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		iVar0 = func_47(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_55(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_54(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_38(iVar0))
		{
			uParam1->f_59 = Global_105220.f_2354.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_105220.f_2354.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_105220.f_2354.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_105220.f_2354.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_105220.f_2354.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_105220.f_2354.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x7AF0088ABFA713B6() && unk_0x6F79ECA8C83E4357(iParam0) == unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			if (func_53(161, -1))
			{
				uParam1->f_59 = func_50(2051, Global_70790, 0);
			}
			else
			{
				uParam1->f_59 = func_50(752, Global_70790, 0);
			}
			uParam1->f_60 = func_50(753, Global_70790, 0);
			uParam1->f_61 = func_50(754, Global_70790, 0);
		}
		if (unk_0x7AF0088ABFA713B6() && iParam0 == unk_0xBC25C936A095B5BA())
		{
			if (func_53(161, -1))
			{
				uParam1->f_59 = func_50(2051, Global_70790, 0);
			}
			else
			{
				uParam1->f_59 = func_50(752, Global_70790, 0);
			}
		}
	}
}

int func_50(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2530245[iParam0 /*3*/][func_51(iParam1)];
	if (unk_0x6CB99B97664C3727(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_51(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_52();
		if (iVar1 > -1)
		{
			Global_2529958 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2529958 = 1;
		}
	}
	return iVar0;
}

int func_52()
{
	return Global_1312736;
}

int func_53(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2557346[iParam0 /*3*/][func_51(iParam1)];
	if (unk_0x9CADE88F210A0BAE(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_54(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_47(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x35C830BCF2BF70BE(iParam0, iParam1);
		*uParam3 = unk_0x98F83843E924A56E(iParam0, iParam1);
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
				if (unk_0x4B4D220E2BCD09B8(iParam0) && unk_0xB2B29814741DDD85(iParam0) != -1)
				{
					*uParam2 = unk_0xB2B29814741DDD85(iParam0);
					*uParam3 = unk_0xC226620531B0B29B(iParam0);
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

void func_55(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_47(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xA86A4D206EC8EB16(iParam0, iParam1);
		*uParam3 = unk_0x695D13ECF7DAEC22(iParam0, iParam1);
		*uParam4 = unk_0x41AF5D2DF638D88F(iParam0, iParam1);
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

int func_56()
{
	func_57();
	return Global_105220.f_2354.f_539.f_4301;
}

void func_57()
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_48(Global_105220.f_2354.f_539.f_4301) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_47(unk_0xBC25C936A095B5BA());
			if (func_38(iVar0) && (!func_58(14) || Global_104171))
			{
				if (Global_105220.f_2354.f_539.f_4301 != iVar0 && func_38(Global_105220.f_2354.f_539.f_4301))
				{
					Global_105220.f_2354.f_539.f_4302 = Global_105220.f_2354.f_539.f_4301;
				}
				Global_105220.f_2354.f_539.f_4303 = iVar0;
				Global_105220.f_2354.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_105220.f_2354.f_539.f_4301 != 145)
			{
				Global_105220.f_2354.f_539.f_4303 = Global_105220.f_2354.f_539.f_4301;
			}
			return;
		}
	}
	Global_105220.f_2354.f_539.f_4301 = 145;
}

bool func_58(int iParam0)
{
	return Global_35905 == iParam0;
}

void func_59(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_47(iParam0);
	if (func_38(iVar0) && !unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (iParam0 == unk_0xBC25C936A095B5BA())
		{
			func_60(iParam0, &(Global_105220.f_2354.f_539.f_298[iVar0 /*472*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_105220.f_2354.f_539.f_1715[iVar2 /*4*/][iVar0] = unk_0x45068B6398B7C15B(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0x2BCE278DDEEAB2EB();
					if (Global_105220.f_2354.f_539.f_1715[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_105220.f_2354.f_539.f_1748 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x98ACC000724833AC(unk_0xB5CEFD608600A09F(), &uVar3);
			if (iVar0 == 0)
			{
				unk_0x3A57956BCE003880(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				unk_0x3A57956BCE003880(joaat("sp1_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 2)
			{
				unk_0x3A57956BCE003880(joaat("sp2_parachute_current_tint"), uVar3, 1);
			}
		}
	}
}

void func_60(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar9;
	int iVar10;
	struct<2> Var11;
	struct<4> Var50;
	int iVar72;
	int iVar73;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_65(iVar0);
			if (iVar3 != 0)
			{
				Var4.f_0 = unk_0xFEBBB8B5E3A12A20(iParam0, func_65(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4.f_0 != 0 && Var4.f_0 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x46C0645571D5BB21(iParam0, Var4.f_0);
					if (Var4.f_0 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0x5BA4FE244D010B3B(iParam0, Var4.f_0);
					Var4.f_4 = unk_0x8C4F3A254E8EA3BD(iParam0, Var4.f_0);
					if (Var4.f_1 == -1)
					{
						if (!unk_0xDBF94F25838DCE55(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_63(Var4.f_0, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0x1D3364A4FCD401E3(iParam0, Var4.f_0, iVar2))
						{
							unk_0xF0059F27F7BB6680(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_63(Var4.f_0, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (50 - 1))
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar10 = unk_0x8E3F7DC568AC987B();
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			if ((unk_0x6740839132C4BD08(iVar9, &Var11) && !func_62(Var11.f_1)) && iVar72 < 50)
			{
				if (!unk_0xD90F58A58682ED2F(Var11.f_0))
				{
					Var4.f_0 = Var11.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0x46C0645571D5BB21(iParam0, Var4.f_0);
					if (unk_0x7B2E29350659BE8E(iParam0, Var4.f_0, 0))
					{
						Var4.f_3 = unk_0x5BA4FE244D010B3B(iParam0, Var4.f_0);
						Var4.f_4 = unk_0x8C4F3A254E8EA3BD(iParam0, Var4.f_0);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0xDBF94F25838DCE55(iParam0, Var4.f_0, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar72 /*5*/].f_1 = Var4.f_1;
					iVar73 = 0;
					iVar1 = 0;
					while (iVar1 < unk_0x24C19AF1AF00F6A0(iVar9))
					{
						if (unk_0x9278F82C9078D16B(iVar9, iVar1, &Var50))
						{
							if (!func_61(Var50.f_3))
							{
								if (unk_0x1D3364A4FCD401E3(iParam0, Var4.f_0, Var50.f_3))
								{
									unk_0xF0059F27F7BB6680(&(Var4.f_2), iVar73);
								}
								iVar73++;
							}
						}
						iVar1++;
					}
				}
				if (Var4.f_0 != 0)
				{
					if (!unk_0x7B2E29350659BE8E(iParam0, Var4.f_0, 0))
					{
						Var4.f_0 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar72 /*5*/] = { Var4 };
				iVar72++;
			}
			iVar9++;
		}
	}
}

int func_61(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
			return 1;
			break;
	}
	return 0;
}

int func_62(int iParam0)
{
	if (unk_0x7AF0088ABFA713B6())
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
			case joaat("weapon_autoshotgun"):
			case joaat("weapon_minismg"):
			case joaat("weapon_compactlauncher"):
			case joaat("weapon_battleaxe"):
			case joaat("weapon_pipebomb"):
			case joaat("weapon_poolcue"):
			case joaat("weapon_wrench"):
			case joaat("weapon_doubleaction"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_63(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var43;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
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
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
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
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
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
					iVar0 = joaat("component_gunrun_mk2_upgrade");
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
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
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
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
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
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
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
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
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
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
		
		case joaat("weapon_minismg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minismg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_minismg_clip_02");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_64(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x24C19AF1AF00F6A0(iVar1))
					{
						if (unk_0x9278F82C9078D16B(iVar1, iVar2, &Var43))
						{
							if (!func_61(Var43.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var43.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_64(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x8E3F7DC568AC987B();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x6740839132C4BD08(iVar0, uParam1))
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

int func_65(int iParam0)
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

void func_66(int iParam0)
{
	int iVar0;
	
	iVar0 = func_47(iParam0);
	if (func_38(iVar0) && !unk_0x36CEFBE9B745A58D(iParam0))
	{
		Global_105220.f_2354.f_539.f_294[iVar0] = unk_0x27C402B01C926499(iParam0);
	}
}

void func_67(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	*uParam0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
	uParam0->f_3 = unk_0x349C94FFF43E2979(unk_0xBC25C936A095B5BA());
	uParam0->f_5 = unk_0xADC5538B9DCA2177(unk_0xBC25C936A095B5BA());
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		uParam0->f_4 = unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F());
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
	else if (unk_0xB731B8C5BCE89836(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0xFA30DFD0084E92FE(Global_71226, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0xFA30DFD0084E92FE(Global_71226, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0xFA30DFD0084E92FE(Global_71226, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0xFA30DFD0084E92FE(Global_71226, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == unk_0x5E29F9399E0829A3(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
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
		if (func_71(&iVar0))
		{
			if (func_69(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			iVar5 = func_104();
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
		else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_68(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_68(struct<3> Param0, char* sParam3, struct<3> Param4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xB47B61546691E6E3(Param0))
	{
		iVar0 = unk_0x5E29F9399E0829A3(Param4, sParam3);
		if (!unk_0xBF697FA7422C0621(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x77E1B0C83C9CC9DD(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_69(int iParam0, var uParam1, var uParam2)
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
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_70(*uParam1, 0f, 0f, 0f, 0);
}

bool func_70(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_71(var uParam0)
{
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (func_92())
		{
			*uParam0 = func_77(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 0), 6, -1, 0, 1, -1);
			if (func_76(*uParam0) && !func_72(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_72(int iParam0)
{
	return func_73(iParam0, 0, 1);
}

int func_73(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xFA30DFD0084E92FE(Global_93007.f_1329[iParam0], iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_75() == 0)
		{
			return unk_0xFA30DFD0084E92FE(func_50(func_74(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xFA30DFD0084E92FE(Global_105220.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_74(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 7779;
			break;
		
		case 45:
			return 3804;
			break;
		
		case 46:
			return 5379;
			break;
		
		case 47:
			return 6151;
			break;
		
		case 48:
			return 7228;
			break;
		
		default:
			break;
	}
	return 8804;
}

int func_75()
{
	return Global_25277;
}

int func_76(int iParam0)
{
	return func_73(iParam0, 5, 1);
}

int func_77(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 48)
	{
		if (iParam3 == 6 || iParam3 == func_91(iVar0))
		{
			if (!bParam5 || func_90(iVar0))
			{
				fVar1 = unk_0xF0F2FC9DE291567F(Param0, func_78(iVar0, 0), 1);
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

Vector3 func_78(int iParam0, bool bParam1)
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
		
		case 45:
			return func_89(Global_95018);
			break;
		
		case 46:
			if (Global_1589135 != func_88())
			{
				if (func_87(Global_1589135))
				{
					return func_80(2, 2);
				}
				else if (func_79(Global_1589135))
				{
					return func_80(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_79(int iParam0)
{
	if (iParam0 != func_88())
	{
		if ((unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_273.f_244, 0) || unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_273.f_244, 1)) || unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_273.f_244, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_80(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var6;
	
	Var6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1589135 != func_88())
	{
		if (iParam1 == 3)
		{
			if (func_81(iParam0, 1, &Var0, 0, 0))
			{
				Var6 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0xFA30DFD0084E92FE(Global_1589291[Global_1589135 /*770*/].f_273.f_244, 4))
			{
				if (func_81(iParam0, 1, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
			else if (unk_0xFA30DFD0084E92FE(Global_1589291[Global_1589135 /*770*/].f_273.f_244, 5))
			{
				if (func_81(iParam0, 2, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
		}
	}
	return Var6;
}

int func_81(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	struct<3> Var6;
	struct<4> Var12;
	struct<3> Var18;
	
	if (!func_86(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_86(iParam1, &Var6))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var12 = { func_84(iParam0) };
	}
	else
	{
		Var12 = { func_83(iParam0) };
	}
	Var18 = { Var12 - Var0 };
	Var18 = { func_82(Var18, -Var0.f_3.f_2) };
	Var18 = { func_82(Var18, Var6.f_3.f_2) };
	*uParam2 = { unk_0x89D97EB4FAE4A574(Var6, 0f, Var18) };
	uParam2->f_3 = { Var12.f_3 };
	return 1;
}

Vector3 func_82(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	fVar3 = unk_0x0BADBFA3B172435F(fParam3);
	fVar4 = unk_0xD0FFB162F40A139C(fParam3);
	Var0.f_0 = ((Param0.f_0 * fVar4) - (Param0.f_1 * fVar3));
	Var0.f_1 = ((Param0.f_0 * fVar3) + (Param0.f_1 * fVar4));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<6> func_83(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_84(int iParam0)
{
	return func_85(iParam0);
}

struct<6> func_85(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_86(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_87(int iParam0)
{
	if (iParam0 != func_88())
	{
		if ((unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_273.f_244, 3) || unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_273.f_244, 4)) || unk_0xFA30DFD0084E92FE(Global_1589291[iParam0 /*770*/].f_273.f_244, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_88()
{
	return -1;
}

Vector3 func_89(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 16:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_90(int iParam0)
{
	return func_73(iParam0, 0, 0);
}

int func_91(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
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
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
	}
	return 6;
}

bool func_92()
{
	return Global_93007.f_321 > 0;
}

var func_93()
{
	var uVar0;
	
	func_103(&uVar0, unk_0xF40D00CD7B81C0A8());
	func_102(&uVar0, unk_0x7E09057438B9D216());
	func_101(&uVar0, unk_0x6E06C0DB9B43570D());
	func_96(&uVar0, unk_0xBE14F159908E4EE5());
	func_95(&uVar0, unk_0xDD6A91E47ED4D0CF());
	func_94(&uVar0, unk_0x4EEB3860BFC44B78());
	return uVar0;
}

void func_94(var uParam0, int iParam1)
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

void func_95(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_96(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_100(*uParam0);
	iVar1 = func_98(*uParam0);
	if (iParam1 < 1 || iParam1 > func_97(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_97(int iParam0, int iParam1)
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

int func_98(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_99(unk_0xFA30DFD0084E92FE(iParam0, 31), -1, 1)) + 2011;
}

int func_99(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_100(int iParam0)
{
	return iParam0 & 15;
}

void func_101(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_102(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_103(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_104()
{
	func_57();
	return Global_105220.f_2354.f_539.f_4301;
}

int func_105(char* sParam0)
{
	if (unk_0x3362CDE8460ED38B("BailBond1", sParam0))
	{
		return 0;
	}
	else if (unk_0x3362CDE8460ED38B("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0x3362CDE8460ED38B("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0x3362CDE8460ED38B("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_106(int iParam0)
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

int func_107(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = unk_0x56BEECB328B6D29D(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_108(iVar0, &sVar1);
		if (unk_0x56BEECB328B6D29D(sVar1) == iVar33)
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

void func_108(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_109(uParam1, "Abigail1", func_111(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 1:
			func_109(uParam1, "Abigail2", func_111(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 2:
			func_109(uParam1, "Barry1", func_111(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 3:
			func_109(uParam1, "Barry2", func_111(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 4:
			func_109(uParam1, "Barry3", func_111(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 5:
			func_109(uParam1, "Barry3A", func_111(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 6:
			func_109(uParam1, "Barry3C", func_111(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 7:
			func_109(uParam1, "Barry4", func_111(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_110(iParam0), 0, 0);
			break;
		
		case 8:
			func_109(uParam1, "Dreyfuss1", func_111(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 9:
			func_109(uParam1, "Epsilon1", func_111(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 10:
			func_109(uParam1, "Epsilon2", func_111(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 11:
			func_109(uParam1, "Epsilon3", func_111(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 12:
			func_109(uParam1, "Epsilon4", func_111(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 13:
			func_109(uParam1, "Epsilon5", func_111(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 14:
			func_109(uParam1, "Epsilon6", func_111(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 15:
			func_109(uParam1, "Epsilon7", func_111(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 16:
			func_109(uParam1, "Epsilon8", func_111(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 17:
			func_109(uParam1, "Extreme1", func_111(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 18:
			func_109(uParam1, "Extreme2", func_111(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 19:
			func_109(uParam1, "Extreme3", func_111(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 20:
			func_109(uParam1, "Extreme4", func_111(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 21:
			func_109(uParam1, "Fanatic1", func_111(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_110(iParam0), 1, 0);
			break;
		
		case 22:
			func_109(uParam1, "Fanatic2", func_111(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_110(iParam0), 1, 0);
			break;
		
		case 23:
			func_109(uParam1, "Fanatic3", func_111(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_110(iParam0), 0, 1);
			break;
		
		case 24:
			func_109(uParam1, "Hao1", func_111(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_110(iParam0), 0, 1);
			break;
		
		case 25:
			func_109(uParam1, "Hunting1", func_111(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 26:
			func_109(uParam1, "Hunting2", func_111(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 27:
			func_109(uParam1, "Josh1", func_111(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 28:
			func_109(uParam1, "Josh2", func_111(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 29:
			func_109(uParam1, "Josh3", func_111(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 30:
			func_109(uParam1, "Josh4", func_111(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 31:
			func_109(uParam1, "Maude1", func_111(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 32:
			func_109(uParam1, "Minute1", func_111(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 33:
			func_109(uParam1, "Minute2", func_111(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 34:
			func_109(uParam1, "Minute3", func_111(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 35:
			func_109(uParam1, "MrsPhilips1", func_111(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 36:
			func_109(uParam1, "MrsPhilips2", func_111(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 37:
			func_109(uParam1, "Nigel1", func_111(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 38:
			func_109(uParam1, "Nigel1A", func_111(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 39:
			func_109(uParam1, "Nigel1B", func_111(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_110(iParam0), 1, 1);
			break;
		
		case 40:
			func_109(uParam1, "Nigel1C", func_111(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_110(iParam0), 1, 1);
			break;
		
		case 41:
			func_109(uParam1, "Nigel1D", func_111(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_110(iParam0), 1, 1);
			break;
		
		case 42:
			func_109(uParam1, "Nigel2", func_111(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 43:
			func_109(uParam1, "Nigel3", func_111(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 1, 1);
			break;
		
		case 44:
			func_109(uParam1, "Omega1", func_111(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 45:
			func_109(uParam1, "Omega2", func_111(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 46:
			func_109(uParam1, "Paparazzo1", func_111(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 47:
			func_109(uParam1, "Paparazzo2", func_111(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 48:
			func_109(uParam1, "Paparazzo3", func_111(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 49:
			func_109(uParam1, "Paparazzo3A", func_111(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 50:
			func_109(uParam1, "Paparazzo3B", func_111(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 51:
			func_109(uParam1, "Paparazzo4", func_111(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 52:
			func_109(uParam1, "Rampage1", func_111(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 54:
			func_109(uParam1, "Rampage3", func_111(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 55:
			func_109(uParam1, "Rampage4", func_111(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 56:
			func_109(uParam1, "Rampage5", func_111(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_110(iParam0), 0, 0);
			break;
		
		case 53:
			func_109(uParam1, "Rampage2", func_111(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_110(iParam0), 1, 0);
			break;
		
		case 57:
			func_109(uParam1, "TheLastOne", func_111(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 58:
			func_109(uParam1, "Tonya1", func_111(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 59:
			func_109(uParam1, "Tonya2", func_111(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 60:
			func_109(uParam1, "Tonya3", func_111(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 61:
			func_109(uParam1, "Tonya4", func_111(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		case 62:
			func_109(uParam1, "Tonya5", func_111(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_110(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_109(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
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

int func_110(int iParam0)
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

struct<2> func_111(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_106(iParam0) };
	if (unk_0xF1734B55490E9045(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

int func_112(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_113(Global_105220.f_9056.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_113(Global_105220.f_9056.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_113(Global_105220.f_9056.f_99.f_205[11]);
			break;
		
		case 90:
			return func_113(Global_105220.f_9056.f_99.f_205[7]);
			break;
		
		case 93:
			return func_113(Global_105220.f_9056.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_113(int iParam0)
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

int func_114(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x56BEECB328B6D29D(sParam0);
	iVar1 = func_115(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_115(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_83888[iVar0 /*34*/].f_6 == iParam0)
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

void func_116(bool bParam0)
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
			Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_105220.f_20535.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53149[iVar0 /*3*/][0] = Global_105220.f_20535[iVar0];
		Global_53149.f_31[iVar0 /*3*/][0] = Global_105220.f_20535.f_11[iVar0];
		Global_53149.f_62[iVar0 /*3*/][0] = Global_105220.f_20535.f_22[iVar0];
		Global_53149.f_93[iVar0 /*3*/][0] = Global_105220.f_20535.f_33[iVar0];
		Global_53149.f_124[iVar0 /*3*/][0] = Global_105220.f_20535.f_44[iVar0];
		Global_53149.f_155[iVar0 /*3*/][0] = Global_105220.f_20535.f_55[iVar0];
		Global_53149.f_186[iVar0 /*3*/][0] = Global_105220.f_20535.f_66[iVar0];
		Global_53149.f_217[iVar0 /*3*/][0] = Global_105220.f_20535.f_77[iVar0];
		Global_53149.f_248[iVar0 /*3*/][0] = Global_105220.f_20535.f_88[iVar0];
		if (!bParam0)
		{
			Global_53149[iVar0 /*3*/][1] = Global_105220.f_20535[iVar0];
			Global_53149.f_31[iVar0 /*3*/][1] = Global_105220.f_20535.f_11[iVar0];
			Global_53149.f_62[iVar0 /*3*/][1] = Global_105220.f_20535.f_22[iVar0];
			Global_53149.f_93[iVar0 /*3*/][1] = Global_105220.f_20535.f_33[iVar0];
			Global_53149.f_124[iVar0 /*3*/][1] = Global_105220.f_20535.f_44[iVar0];
			Global_53149.f_155[iVar0 /*3*/][1] = Global_105220.f_20535.f_55[iVar0];
			Global_53149.f_186[iVar0 /*3*/][1] = Global_105220.f_20535.f_66[iVar0];
			Global_53149.f_217[iVar0 /*3*/][1] = Global_105220.f_20535.f_77[iVar0];
			Global_53149.f_248[iVar0 /*3*/][1] = Global_105220.f_20535.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_117()
{
	unk_0xB5975A608C626487("EXTRASUNNY");
	func_213();
	func_185();
	func_119();
	if (!func_24())
	{
		func_118();
	}
	iLocal_3351 = 1;
	unk_0xF3F01A78937DC905(0f);
}

void func_118()
{
	switch (iLocal_3180)
	{
		case 2:
			unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
			unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), -1019.579f, -484.872f, 36.0795f, 1, 0, 0, 1);
			unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), 93.7701f);
			break;
		
		case 3:
			if (unk_0xE59B7F5A03335350(iLocal_3259, 0))
			{
				if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), iLocal_3259, 0))
				{
					unk_0xBD53A029D0155A42(unk_0xBC25C936A095B5BA(), iLocal_3259, -1);
				}
				unk_0x65E471E4A2D56226(iLocal_3259, 3000, 0);
				unk_0x06D93FD5E4D394CF(iLocal_3259, 0, 1, 0, 0, 0, 0, 0, 0);
			}
			break;
		
		case 5:
			unk_0x49D46EE47C9CCB66(unk_0xBC25C936A095B5BA());
			unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), -935.4413f, -2928.061f, 12.9451f, 1, 0, 0, 1);
			unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), 178.466f);
			unk_0xB71D41C0310C93DE(unk_0xBC25C936A095B5BA(), 1, 1);
			break;
		
		case 8:
			unk_0x49D46EE47C9CCB66(unk_0xBC25C936A095B5BA());
			unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), -937.5466f, -2968.713f, 12.9451f, 1, 0, 0, 1);
			unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), 111.5016f);
			unk_0xB71D41C0310C93DE(unk_0xBC25C936A095B5BA(), 1, 1);
			break;
	}
}

void func_119()
{
	switch (iLocal_3180)
	{
		case 2:
			unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 0, 0);
			unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
			unk_0x6C5F5B5F6894CCE3(-1026.8f, -492.1f, 36f, 18f, 1, 0, 0, 0);
			unk_0x379ACE23D404525C(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, 0, 1);
			unk_0xDD56BACCCF835044(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, 0);
			unk_0xF243B7A14FCFD0F4(joaat("rapidgt"));
			unk_0xF243B7A14FCFD0F4(joaat("surano"));
			unk_0xF243B7A14FCFD0F4(joaat("carbonizzare"));
			while ((!unk_0xD6513D668481290A(joaat("rapidgt")) || !unk_0xD6513D668481290A(joaat("surano"))) || !unk_0xD6513D668481290A(joaat("carbonizzare")))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (!unk_0x724D816EA203A79E(iLocal_3259))
			{
				unk_0x6C5F5B5F6894CCE3(Local_3294, 5f, 1, 0, 0, 0);
				iLocal_3259 = unk_0x61C05BF08A1E0EFE(joaat("rapidgt"), Local_3294, fLocal_3321, 1, 1, 0);
				unk_0x914C5DE0B15B8B59(iLocal_3259, 112, 112);
				unk_0x65E471E4A2D56226(iLocal_3259, 3000, 0);
				unk_0xDB35A2F9333ABEC5(iLocal_3259, 1);
				unk_0x2CA123B0622F495C(joaat("rapidgt"));
				unk_0x8510BC031C24B862(joaat("rapidgt"), 1);
				unk_0x656194E145691D3E(iLocal_3259, 1);
				unk_0xA73D1278857991A2(iLocal_3259, 1);
			}
			if (!unk_0x724D816EA203A79E(iLocal_3276))
			{
				if (unk_0xD6513D668481290A(joaat("surano")))
				{
					unk_0x6C5F5B5F6894CCE3(-1037.398f, -491.6539f, 35.5545f, 5f, 1, 0, 0, 0);
					iLocal_3276 = unk_0x61C05BF08A1E0EFE(joaat("surano"), -1037.398f, -491.6539f, 35.5545f, 208.889f, 1, 1, 0);
					unk_0x914C5DE0B15B8B59(iLocal_3276, 0, 0);
					unk_0x65E471E4A2D56226(iLocal_3276, 3000, 0);
					unk_0xDB35A2F9333ABEC5(iLocal_3276, 1);
					unk_0x2CA123B0622F495C(joaat("surano"));
					unk_0x8510BC031C24B862(joaat("surano"), 1);
					unk_0xA73D1278857991A2(iLocal_3276, 1);
				}
			}
			if (!unk_0x724D816EA203A79E(iLocal_3277))
			{
				if (unk_0xD6513D668481290A(joaat("carbonizzare")))
				{
					unk_0x6C5F5B5F6894CCE3(Local_3294, 5f, 1, 0, 0, 0);
					iLocal_3277 = unk_0x61C05BF08A1E0EFE(joaat("carbonizzare"), -1033.938f, -489.7475f, 35.8323f, 207.1758f, 1, 1, 0);
					unk_0x914C5DE0B15B8B59(iLocal_3277, 89, 89);
					unk_0x65E471E4A2D56226(iLocal_3277, 3000, 0);
					unk_0xDB35A2F9333ABEC5(iLocal_3277, 1);
					unk_0x2CA123B0622F495C(joaat("carbonizzare"));
					unk_0x8510BC031C24B862(joaat("carbonizzare"), 1);
					unk_0xA73D1278857991A2(iLocal_3277, 1);
				}
			}
			break;
		
		case 3:
			unk_0x6FED2D1AA2EBF334("TRV4_CHASE");
			unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 0, 0);
			unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
			func_182();
			unk_0x6C5F5B5F6894CCE3(Local_3297, 200f, 1, 0, 0, 0);
			if (!unk_0x724D816EA203A79E(iLocal_3258))
			{
				iLocal_3258 = unk_0x61C05BF08A1E0EFE(joaat("cogcabrio"), Local_3297, fLocal_3322, 1, 1, 0);
				unk_0x06D93FD5E4D394CF(iLocal_3258, 1, 1, 1, 1, 1, 0, 0, 0);
				unk_0x914C5DE0B15B8B59(iLocal_3258, 27, 27);
				unk_0x2CA123B0622F495C(joaat("cogcabrio"));
				unk_0x55662F9F262C2F9B(iLocal_3258, "SOL_3_MOLLY_CAR_Group", 0);
			}
			if (!unk_0x724D816EA203A79E(iLocal_3222))
			{
				iLocal_3222 = unk_0xFD8987C090669BD5(iLocal_3258, 26, joaat("ig_molly"), -1, 1, 1);
				unk_0x06D93FD5E4D394CF(iLocal_3222, 1, 1, 1, 1, 1, 0, 0, 0);
				unk_0x1E5C2A1EAB944289(iLocal_3222, 1);
				unk_0xB105531EDD3DE51B(iLocal_3222, 0);
				unk_0x2CA123B0622F495C(joaat("ig_molly"));
				unk_0x4106FAF8AA1D69D5(iLocal_3222, joaat("player"));
			}
			if (func_23())
			{
				if (!unk_0x724D816EA203A79E(iLocal_3259))
				{
					if (func_181())
					{
						if (!unk_0x8C1A6E7D5F410F4A(func_180()) && !unk_0xA19D269B4B5A1532(func_180()))
						{
							iLocal_3259 = func_140(Local_3312, fLocal_3325);
							unk_0x2CA123B0622F495C(func_180());
							unk_0xA73D1278857991A2(iLocal_3259, 1);
						}
						else
						{
							iLocal_3259 = unk_0x61C05BF08A1E0EFE(joaat("rapidgt"), Local_3312, fLocal_3325, 1, 1, 0);
							unk_0x914C5DE0B15B8B59(iLocal_3259, 112, 112);
						}
					}
					else
					{
						iLocal_3259 = unk_0x61C05BF08A1E0EFE(joaat("rapidgt"), Local_3312, fLocal_3325, 1, 1, 0);
						unk_0x914C5DE0B15B8B59(iLocal_3259, 112, 112);
					}
					unk_0x65E471E4A2D56226(iLocal_3259, 3000, 0);
					unk_0xDB35A2F9333ABEC5(iLocal_3259, 1);
					unk_0x06D93FD5E4D394CF(iLocal_3259, 0, 1, 0, 0, 0, 0, 0, 0);
					unk_0x656194E145691D3E(iLocal_3259, 1);
					unk_0x2CA123B0622F495C(joaat("rapidgt"));
					unk_0xA73D1278857991A2(iLocal_3259, 1);
				}
			}
			else if (!unk_0x724D816EA203A79E(iLocal_3259))
			{
				iLocal_3259 = unk_0x61C05BF08A1E0EFE(joaat("rapidgt"), Local_3312, fLocal_3325, 1, 1, 0);
				unk_0x914C5DE0B15B8B59(iLocal_3259, 112, 112);
				unk_0x2CA123B0622F495C(joaat("rapidgt"));
				unk_0x65E471E4A2D56226(iLocal_3259, 3000, 0);
				unk_0xDB35A2F9333ABEC5(iLocal_3259, 1);
				unk_0x06D93FD5E4D394CF(iLocal_3259, 0, 1, 0, 0, 0, 0, 0, 0);
				unk_0x656194E145691D3E(iLocal_3259, 1);
				unk_0xA73D1278857991A2(iLocal_3259, 1);
			}
			break;
		
		case 5:
			iLocal_3352 = 0;
			unk_0x6C5F5B5F6894CCE3(-973.3f, -2967.7f, 13.5f, 100f, 1, 0, 0, 0);
			unk_0xC1B1E9A034A63A62(0);
			unk_0xF243B7A14FCFD0F4(joaat("jet"));
			unk_0xF243B7A14FCFD0F4(joaat("shamal"));
			unk_0x44840FD68E426678("BB_MOLLY_2");
			unk_0xF243B7A14FCFD0F4(joaat("s_m_y_airworker"));
			unk_0xF243B7A14FCFD0F4(joaat("s_m_y_cop_01"));
			unk_0xF243B7A14FCFD0F4(joaat("police3"));
			unk_0xF243B7A14FCFD0F4(joaat("ig_molly"));
			unk_0xF243B7A14FCFD0F4(joaat("cogcabrio"));
			unk_0xF243B7A14FCFD0F4(joaat("rapidgt"));
			unk_0xF243B7A14FCFD0F4(joaat("prop_cs_film_reel_01"));
			unk_0x1B2A7C8188ADBE04(68, "BB_Chase");
			unk_0x1B2A7C8188ADBE04(69, "BB_Chase");
			unk_0x44840FD68E426678("Trev4_5");
			unk_0xA8396BF0E2C53C39();
			unk_0x522053D86D6E1C7A("move_f@film_reel_arms");
			unk_0x522053D86D6E1C7A("misssolomon_3");
			while (((((((((((((((!unk_0xD6513D668481290A(joaat("jet")) || !unk_0xD6513D668481290A(joaat("shamal"))) || !unk_0x1E8349F219AC5AF9("BB_MOLLY_2")) || !unk_0xD6513D668481290A(joaat("s_m_y_airworker"))) || !unk_0xD6513D668481290A(joaat("s_m_y_cop_01"))) || !unk_0xD6513D668481290A(joaat("police3"))) || !unk_0xD6513D668481290A(joaat("ig_molly"))) || !unk_0xD6513D668481290A(joaat("cogcabrio"))) || !unk_0xD6513D668481290A(joaat("rapidgt"))) || !unk_0xD6513D668481290A(joaat("prop_cs_film_reel_01"))) || !unk_0x00D24B3F2A5CD22C(68, "BB_Chase")) || !unk_0x00D24B3F2A5CD22C(69, "BB_Chase")) || !unk_0x1E8349F219AC5AF9("Trev4_5")) || !unk_0x95654D7A61CD43DE()) || !unk_0xF9E082857622D91E("move_f@film_reel_arms")) || !unk_0xF9E082857622D91E("misssolomon_3"))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (!unk_0x724D816EA203A79E(iLocal_3222))
			{
				iLocal_3222 = unk_0x01B3635C3E8EDD81(26, joaat("ig_molly"), -920.5093f, -2943.93f, 12.9451f, 157.6203f, 1, 1);
				unk_0x1E5C2A1EAB944289(iLocal_3222, 1);
				unk_0xB105531EDD3DE51B(iLocal_3222, 0);
				unk_0x2E35C4FA5F0ED22F(iLocal_3222, 1);
				unk_0x2CA123B0622F495C(joaat("ig_molly"));
				unk_0xB71D41C0310C93DE(iLocal_3222, 1, 1);
				unk_0x4106FAF8AA1D69D5(iLocal_3222, joaat("player"));
			}
			iLocal_3283 = unk_0xB6896943DA475493(joaat("prop_cs_film_reel_01"), -929f, -2917f, 13f, 1, 1, 0);
			unk_0x5DBE04849460E608(iLocal_3283, iLocal_3222, unk_0xFA18E720A39243D0(iLocal_3222, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			if (!unk_0x724D816EA203A79E(iLocal_3266))
			{
				iLocal_3266 = unk_0x61C05BF08A1E0EFE(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 1, 1, 0);
				unk_0x7170EF3CEB4D0224(iLocal_3266, 2);
				unk_0x8300C56586249382(iLocal_3266, 0);
				unk_0x346478B12F69D4E3(iLocal_3266, 1);
				unk_0x06D93FD5E4D394CF(iLocal_3266, 1, 1, 1, 1, 1, 0, 0, 0);
				unk_0x2CA123B0622F495C(joaat("jet"));
				unk_0xAF9FC4463EA3090B(iLocal_3266, 500);
			}
			if (func_23())
			{
				if (func_181())
				{
					func_138();
					while (!func_125())
					{
						unk_0x4EDE34FBADD967A6(0);
					}
				}
				if (!unk_0x724D816EA203A79E(iLocal_3259))
				{
					if (func_181())
					{
						iLocal_3259 = func_140(-918.6263f, -2926.631f, 12.9666f, 43.1705f);
						unk_0x656194E145691D3E(iLocal_3259, 1);
						unk_0x2CA123B0622F495C(func_180());
						unk_0xA73D1278857991A2(iLocal_3259, 1);
					}
					else
					{
						iLocal_3259 = unk_0x61C05BF08A1E0EFE(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, 1, 0);
						unk_0x914C5DE0B15B8B59(iLocal_3259, 112, 112);
						unk_0x656194E145691D3E(iLocal_3259, 1);
						unk_0x2CA123B0622F495C(joaat("rapidgt"));
						unk_0xA73D1278857991A2(iLocal_3259, 1);
					}
				}
			}
			else if (!unk_0x724D816EA203A79E(iLocal_3259))
			{
				iLocal_3259 = unk_0x61C05BF08A1E0EFE(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, 1, 0);
				unk_0x914C5DE0B15B8B59(iLocal_3259, 112, 112);
				unk_0x2CA123B0622F495C(joaat("rapidgt"));
				unk_0x656194E145691D3E(iLocal_3259, 1);
				unk_0xA73D1278857991A2(iLocal_3259, 1);
			}
			if (!unk_0x724D816EA203A79E(iLocal_3258))
			{
				iLocal_3258 = unk_0x61C05BF08A1E0EFE(joaat("cogcabrio"), -928.3279f, -2916.16f, 12.945f, 61.7688f, 1, 1, 0);
				unk_0x914C5DE0B15B8B59(iLocal_3258, 27, 27);
				unk_0x2CA123B0622F495C(joaat("cogcabrio"));
			}
			if (!unk_0x724D816EA203A79E(iLocal_3263))
			{
				iLocal_3263 = unk_0x61C05BF08A1E0EFE(joaat("police3"), -924.2796f, -2914.371f, 12.945f, 86.6188f, 1, 1, 0);
			}
			if (!unk_0x724D816EA203A79E(iLocal_3248))
			{
				iLocal_3248 = unk_0x01B3635C3E8EDD81(6, joaat("s_m_y_cop_01"), -922.942f, -2912.509f, 12.945f, 156.2652f, 1, 1);
				unk_0x7A535CE1F001F3FE(iLocal_3248, joaat("weapon_pistol"), 1000, 1, 1);
				func_124(iLocal_3248, 0);
				unk_0x2CA123B0622F495C(joaat("s_m_y_cop_01"));
			}
			unk_0xC1B1E9A034A63A62(0);
			func_123(2, 1);
			iLocal_3360 = 1;
			break;
		
		case 8:
			unk_0x6C5F5B5F6894CCE3(-973.3f, -2967.7f, 13.5f, 100f, 1, 0, 0, 0);
			unk_0xC1B1E9A034A63A62(0);
			iLocal_3352 = 0;
			iLocal_3360 = 0;
			iLocal_3339 = 0;
			unk_0xF243B7A14FCFD0F4(joaat("jet"));
			unk_0xF243B7A14FCFD0F4(joaat("s_m_y_airworker"));
			unk_0xF243B7A14FCFD0F4(joaat("shamal"));
			unk_0xF243B7A14FCFD0F4(joaat("s_m_y_cop_01"));
			unk_0xF243B7A14FCFD0F4(joaat("police3"));
			unk_0xF243B7A14FCFD0F4(joaat("cogcabrio"));
			unk_0xF243B7A14FCFD0F4(joaat("rapidgt"));
			unk_0xF243B7A14FCFD0F4(joaat("prop_jet_bloodsplat_01"));
			unk_0x1B2A7C8188ADBE04(68, "BB_Chase");
			unk_0x1B2A7C8188ADBE04(69, "BB_Chase");
			unk_0xA8396BF0E2C53C39();
			while ((((((((((!unk_0xD6513D668481290A(joaat("jet")) || !unk_0xD6513D668481290A(joaat("s_m_y_airworker"))) || !unk_0xD6513D668481290A(joaat("shamal"))) || !unk_0xD6513D668481290A(joaat("s_m_y_cop_01"))) || !unk_0xD6513D668481290A(joaat("police3"))) || !unk_0xD6513D668481290A(joaat("cogcabrio"))) || !unk_0xD6513D668481290A(joaat("rapidgt"))) || !unk_0xD6513D668481290A(joaat("prop_jet_bloodsplat_01"))) || !unk_0x00D24B3F2A5CD22C(68, "BB_Chase")) || !unk_0x00D24B3F2A5CD22C(69, "BB_Chase")) || !unk_0x95654D7A61CD43DE())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			func_122();
			if (func_23())
			{
				if (func_181())
				{
					func_138();
					while (!func_125())
					{
						unk_0x4EDE34FBADD967A6(0);
					}
				}
				if (!unk_0x724D816EA203A79E(iLocal_3259))
				{
					if (func_181())
					{
						iLocal_3259 = func_140(-918.6263f, -2926.631f, 12.9666f, 43.1705f);
						unk_0x656194E145691D3E(iLocal_3259, 1);
						unk_0x2CA123B0622F495C(func_180());
						unk_0xA73D1278857991A2(iLocal_3259, 1);
					}
					else
					{
						iLocal_3259 = unk_0x61C05BF08A1E0EFE(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, 1, 0);
						unk_0x914C5DE0B15B8B59(iLocal_3259, 112, 112);
						unk_0x656194E145691D3E(iLocal_3259, 1);
						unk_0x2CA123B0622F495C(joaat("rapidgt"));
						unk_0xA73D1278857991A2(iLocal_3259, 1);
					}
				}
			}
			else if (!unk_0x724D816EA203A79E(iLocal_3259))
			{
				iLocal_3259 = unk_0x61C05BF08A1E0EFE(joaat("rapidgt"), -918.6263f, -2926.631f, 12.9666f, 43.1705f, 1, 1, 0);
				unk_0x914C5DE0B15B8B59(iLocal_3259, 112, 112);
				unk_0x2CA123B0622F495C(joaat("rapidgt"));
				unk_0x656194E145691D3E(iLocal_3259, 1);
				unk_0xA73D1278857991A2(iLocal_3259, 1);
			}
			if (!unk_0x724D816EA203A79E(iLocal_3258))
			{
				iLocal_3258 = unk_0x61C05BF08A1E0EFE(joaat("cogcabrio"), -928.3279f, -2916.16f, 12.945f, 61.7688f, 1, 1, 0);
				unk_0x914C5DE0B15B8B59(iLocal_3258, 27, 27);
				unk_0x2CA123B0622F495C(joaat("cogcabrio"));
			}
			if (!unk_0x724D816EA203A79E(iLocal_3263))
			{
				iLocal_3263 = unk_0x61C05BF08A1E0EFE(joaat("police3"), -924.2796f, -2914.371f, 12.945f, 86.6188f, 1, 1, 0);
			}
			if (!unk_0x724D816EA203A79E(iLocal_3248))
			{
				iLocal_3248 = unk_0x01B3635C3E8EDD81(6, joaat("s_m_y_cop_01"), -922.942f, -2912.509f, 12.945f, 156.2652f, 1, 1);
				unk_0x7A535CE1F001F3FE(iLocal_3248, joaat("weapon_pistol"), 1000, 1, 1);
				func_124(iLocal_3248, 0);
				unk_0x2CA123B0622F495C(joaat("s_m_y_cop_01"));
			}
			if (!unk_0x724D816EA203A79E(iLocal_3282))
			{
				iLocal_3282 = unk_0xB6896943DA475493(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, 1, 1, 0);
				unk_0x784C605D172817C8(iLocal_3282, 0f, 0f, -121.5948f, 2, 1);
				unk_0xC239B590ECA50DD0(iLocal_3282, 0f, 0f, 0.8729f, -0.4879f);
				unk_0x2CA123B0622F495C(joaat("prop_jet_bloodsplat_01"));
			}
			if (!unk_0x724D816EA203A79E(iLocal_3266))
			{
				iLocal_3266 = unk_0x61C05BF08A1E0EFE(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 1, 1, 0);
				unk_0x7170EF3CEB4D0224(iLocal_3266, 2);
				unk_0x8300C56586249382(iLocal_3266, 0);
				unk_0x346478B12F69D4E3(iLocal_3266, 1);
				unk_0x06D93FD5E4D394CF(iLocal_3266, 1, 1, 1, 1, 1, 0, 0, 0);
				unk_0x2CA123B0622F495C(joaat("jet"));
				uLocal_3763 = unk_0xD0F8470A5BFEECF7("scr_trev4_747_engine_damage", iLocal_3266, -11.956f, 10.528f, -7.657f, 0f, 2f, 0f, 1065353216, 0, 0, 0);
				unk_0xAF9FC4463EA3090B(iLocal_3266, 500);
			}
			if (!unk_0x724D816EA203A79E(iLocal_3228))
			{
				iLocal_3228 = unk_0x01B3635C3E8EDD81(26, joaat("s_m_y_airworker"), -933.8942f, -2965.785f, 12.9451f, 331.7339f, 1, 1);
				func_17(&uLocal_3578, 4, iLocal_3228, "HangerWorker", 0, 1);
				unk_0x2CA123B0622F495C(joaat("s_m_y_airworker"));
				unk_0xB105531EDD3DE51B(iLocal_3228, 1);
				unk_0x2E35C4FA5F0ED22F(iLocal_3228, 1);
				unk_0x5558ED6D4A2DEC93(iLocal_3228, unk_0xBC25C936A095B5BA(), 150f, -1, 0, 0);
				unk_0x22321800954A532E(iLocal_3228, 1);
				unk_0x06D93FD5E4D394CF(iLocal_3228, 0, 0, 0, 0, 0, 0, 0, 0);
				unk_0x02537C8C1BEEB477(&iLocal_3228);
			}
			if (func_121(0) == 0 || func_121(0) == joaat("weapon_unarmed"))
			{
				func_120(1);
			}
			break;
	}
}

void func_120(int iParam0)
{
	int iVar0;
	
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		iVar0 = unk_0xB954E92A91E95906(unk_0xBC25C936A095B5BA(), 0);
		if (iVar0 != joaat("weapon_unarmed"))
		{
			unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), iVar0, iParam0);
		}
	}
}

int func_121(int iParam0)
{
	if (Global_92992 > 0)
	{
		return Global_98783.f_21[iParam0];
	}
	return Global_95814.f_21[iParam0];
}

void func_122()
{
	if (iLocal_3339 == 0)
	{
		if (!unk_0x724D816EA203A79E(iLocal_3268[0]))
		{
			iLocal_3268[0] = unk_0x61C05BF08A1E0EFE(joaat("police3"), -994.5278f, -2903.285f, 12.9447f, 158.7951f, 1, 1, 0);
			unk_0x2487C8A04B65E2BD(iLocal_3268[0], 0);
		}
		if (!unk_0x724D816EA203A79E(iLocal_3233[0]))
		{
			iLocal_3233[0] = unk_0x01B3635C3E8EDD81(6, joaat("s_m_y_cop_01"), -969.06f, -2955.186f, 12.945f, 241.1703f, 1, 1);
			unk_0x7A535CE1F001F3FE(iLocal_3233[0], joaat("weapon_pistol"), 1000, 1, 1);
			unk_0xFC3C88E2313FA926(iLocal_3233[0], 20);
			unk_0xB71D41C0310C93DE(iLocal_3233[0], 1, 1);
			unk_0x57D65255D3D3B6A7(iLocal_3233[0], unk_0xBC25C936A095B5BA(), -1, 1);
			func_124(iLocal_3233[0], 0);
		}
		if (!unk_0x724D816EA203A79E(iLocal_3267))
		{
			iLocal_3267 = unk_0x61C05BF08A1E0EFE(joaat("shamal"), -968.3718f, -2952.298f, 12.9451f, 114.9439f, 1, 1, 0);
			unk_0xF0A40F19AAB79E88(iLocal_3267, 1084227584);
			unk_0x2CA123B0622F495C(joaat("shamal"));
			unk_0x65E471E4A2D56226(iLocal_3267, 2000, 0);
			unk_0x1C5BDB4E5D257D63(iLocal_3267, 0, 0, 1);
		}
		if (!unk_0x724D816EA203A79E(iLocal_3233[6]))
		{
			iLocal_3233[6] = unk_0xFD8987C090669BD5(iLocal_3268[0], 6, joaat("s_m_y_cop_01"), 0, 1, 1);
			unk_0x7A535CE1F001F3FE(iLocal_3233[6], joaat("weapon_pistol"), 1000, 1, 1);
			unk_0xFC3C88E2313FA926(iLocal_3233[6], 20);
			unk_0xB71D41C0310C93DE(iLocal_3233[6], 1, 1);
			unk_0x2E35C4FA5F0ED22F(iLocal_3233[6], 1);
			func_124(iLocal_3233[6], 0);
		}
		if (!unk_0x724D816EA203A79E(iLocal_3233[7]))
		{
			iLocal_3233[7] = unk_0xFD8987C090669BD5(iLocal_3268[0], 6, joaat("s_m_y_cop_01"), -1, 1, 1);
			unk_0x7A535CE1F001F3FE(iLocal_3233[7], joaat("weapon_pistol"), 1000, 1, 1);
			unk_0xFC3C88E2313FA926(iLocal_3233[7], 20);
			unk_0xB71D41C0310C93DE(iLocal_3233[7], 1, 1);
			unk_0x2E35C4FA5F0ED22F(iLocal_3233[7], 1);
			func_124(iLocal_3233[7], 0);
		}
		if (!unk_0x724D816EA203A79E(iLocal_3268[1]))
		{
			iLocal_3268[1] = unk_0x61C05BF08A1E0EFE(joaat("police3"), -962.2432f, -2864.16f, 12.9447f, 149.5586f, 1, 1, 0);
			unk_0x2487C8A04B65E2BD(iLocal_3268[1], 0);
		}
		if (!unk_0x724D816EA203A79E(iLocal_3233[8]))
		{
			iLocal_3233[8] = unk_0xFD8987C090669BD5(iLocal_3268[1], 6, joaat("s_m_y_cop_01"), 0, 1, 1);
			unk_0x7A535CE1F001F3FE(iLocal_3233[8], joaat("weapon_pistol"), 1000, 1, 1);
			unk_0xFC3C88E2313FA926(iLocal_3233[8], 20);
			unk_0xB71D41C0310C93DE(iLocal_3233[8], 1, 1);
			unk_0x2E35C4FA5F0ED22F(iLocal_3233[8], 1);
			func_124(iLocal_3233[8], 0);
		}
		if (!unk_0x724D816EA203A79E(iLocal_3233[9]))
		{
			iLocal_3233[9] = unk_0xFD8987C090669BD5(iLocal_3268[1], 6, joaat("s_m_y_cop_01"), -1, 1, 1);
			unk_0x7A535CE1F001F3FE(iLocal_3233[9], joaat("weapon_pistol"), 1000, 1, 1);
			unk_0xFC3C88E2313FA926(iLocal_3233[9], 20);
			unk_0xB71D41C0310C93DE(iLocal_3233[9], 1, 1);
			unk_0x2E35C4FA5F0ED22F(iLocal_3233[9], 1);
			func_124(iLocal_3233[9], 0);
		}
		if (!unk_0x724D816EA203A79E(iLocal_3233[10]))
		{
			iLocal_3233[10] = unk_0x01B3635C3E8EDD81(6, joaat("s_m_y_cop_01"), -922.1185f, -2939.595f, 12.9451f, 156.1408f, 1, 1);
			unk_0x7A535CE1F001F3FE(iLocal_3233[10], joaat("weapon_pistol"), 1000, 1, 1);
			unk_0xFC3C88E2313FA926(iLocal_3233[10], 20);
			unk_0xB71D41C0310C93DE(iLocal_3233[10], 1, 1);
			unk_0x2E35C4FA5F0ED22F(iLocal_3233[10], 1);
			func_124(iLocal_3233[10], 0);
			unk_0x5845955B5CBDB595(iLocal_3233[10], 1);
		}
		iLocal_3339 = 1;
	}
}

void func_123(int iParam0, int iParam1)
{
	unk_0xF0059F27F7BB6680(&Global_25435, iParam0);
	StringCopy(&(Global_25436[iParam0 /*6*/]), unk_0x1377080E9B0BD993(), 24);
	Global_25491[iParam0] = iParam1;
}

void func_124(int iParam0, bool bParam1)
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
			if (Global_55997[iVar0 /*2*/] != 0)
			{
				if (Global_55997[iVar0 /*2*/] == iParam0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
	if (64 == Global_55996)
	{
		return;
	}
	iVar1 = -1;
	iVar2 = 0;
	while (iVar1 == -1 && iVar2 != 64)
	{
		if (Global_55997[iVar2 /*2*/] == 0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	Global_55997[iVar1 /*2*/] = iParam0;
	Global_55997[iVar1 /*2*/].f_1 = 7;
	Global_55996++;
}

bool func_125()
{
	return func_126(&(Global_98783.f_2875));
}

int func_126(var uParam0)
{
	if (func_127(uParam0))
	{
		if (unk_0xD6513D668481290A(uParam0->f_12.f_66))
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

int func_127(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_129(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_128(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

int func_128(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x357058E632979E65((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x357058E632979E65((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x357058E632979E65((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x357058E632979E65((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x357058E632979E65((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

int func_129(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x6067F058A4B0729F(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x7AF0088ABFA713B6()) || (iParam0 == joaat("buffalo3") && !unk_0x7AF0088ABFA713B6())) || (iParam0 == joaat("gauntlet2") && !unk_0x7AF0088ABFA713B6())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x7AF0088ABFA713B6())) || iParam0 == joaat("blista3"))
	{
		if (!func_137())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xDF84CF7530FA6525())
		{
			if (unk_0x62A638D88F7B7D88(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xD90F58A58682ED2F(Var1.f_0))
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
		if ((((!func_136() && !func_135()) && !func_134()) && !func_133()) && !func_137())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xF49912B78E2591B6() || unk_0x8ACB0C3FACC09467()) || unk_0xF7E138CFA19B55E7())
		{
		}
		else if (!func_134())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_132(iParam0))
		{
			return 0;
		}
	}
	if (!func_130(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_130(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_131())
	{
		return 1;
	}
	unk_0xC4F4FCDFF2D3ABE9(&iVar0, &uVar1);
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
	if (!unk_0xD541643C038E7321(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_131()
{
	if (unk_0x8ACB0C3FACC09467())
	{
		return unk_0xC9D803F7D7E10861();
	}
	return 0;
}

int func_132(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2498869)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xB99C193A32DE341D();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5990 && !Global_262145.f_12299) && iVar1 < Global_262145.f_12300)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_13597 && iVar1 < Global_262145.f_13609)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_13593 && iVar1 < Global_262145.f_13605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_13594 && iVar1 < Global_262145.f_13606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_13595 && iVar1 < Global_262145.f_13607)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_13596 && iVar1 < Global_262145.f_13608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_13598 && iVar1 < Global_262145.f_13610)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_13599 && iVar1 < Global_262145.f_13602)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_13600 && iVar1 < Global_262145.f_13603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_13601 && iVar1 < Global_262145.f_13604)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16228 && iVar1 < Global_262145.f_16193)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16223 && iVar1 < Global_262145.f_16188)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16227 && iVar1 < Global_262145.f_16192)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16226 && iVar1 < Global_262145.f_16191)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16220 && iVar1 < Global_262145.f_16185)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16221 && iVar1 < Global_262145.f_16186)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16224 && iVar1 < Global_262145.f_16189)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16225 && iVar1 < Global_262145.f_16190)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16222 && iVar1 < Global_262145.f_16187)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16230 && iVar1 < Global_262145.f_16195)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16231 && iVar1 < Global_262145.f_16196)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16219 && iVar1 < Global_262145.f_16184)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16218 && iVar1 < Global_262145.f_16183)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16217 && iVar1 < Global_262145.f_16182)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16229 && iVar1 < Global_262145.f_16194)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16232 && iVar1 < Global_262145.f_16197)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16233 && iVar1 < Global_262145.f_16198)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16234 && iVar1 < Global_262145.f_16199)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16235 && iVar1 < Global_262145.f_16200)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16380 && iVar1 < Global_262145.f_16402)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16381 && iVar1 < Global_262145.f_16403)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16382 && iVar1 < Global_262145.f_16404)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16383 && iVar1 < Global_262145.f_16405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16384 && iVar1 < Global_262145.f_16406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16385 && iVar1 < Global_262145.f_16407)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16387 && iVar1 < Global_262145.f_16408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16388 && iVar1 < Global_262145.f_16409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16389 && iVar1 < Global_262145.f_16410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16390 && iVar1 < Global_262145.f_16411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16391 && iVar1 < Global_262145.f_16412)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16392 && iVar1 < Global_262145.f_16413)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16393 && iVar1 < Global_262145.f_16414)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16399 && iVar1 < Global_262145.f_16421)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16396 && iVar1 < Global_262145.f_16417)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16397 && iVar1 < Global_262145.f_16418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16398 && iVar1 < Global_262145.f_16419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16386 && iVar1 < Global_262145.f_16420)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16400 && iVar1 < Global_262145.f_16422)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16394 && iVar1 < Global_262145.f_16415)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16395 && iVar1 < Global_262145.f_16416)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16401 && iVar1 < Global_262145.f_16423)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18029 && iVar1 < Global_262145.f_18127)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18030 && iVar1 < Global_262145.f_18128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18031 && iVar1 < Global_262145.f_18129)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18032 && iVar1 < Global_262145.f_18130)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18033 && iVar1 < Global_262145.f_18131)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18034 && iVar1 < Global_262145.f_18132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18035 && iVar1 < Global_262145.f_18133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18036 && iVar1 < Global_262145.f_18134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18037 && iVar1 < Global_262145.f_18135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18038 && iVar1 < Global_262145.f_18136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18039 && iVar1 < Global_262145.f_18137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18040 && iVar1 < Global_262145.f_18138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18041 && iVar1 < Global_262145.f_18139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18042 && iVar1 < Global_262145.f_18140)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18043 && iVar1 < Global_262145.f_18141)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18044 && iVar1 < Global_262145.f_18142)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18045 && iVar1 < Global_262145.f_18143)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18046 && iVar1 < Global_262145.f_18144)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18047 && iVar1 < Global_262145.f_18145)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18048 && iVar1 < Global_262145.f_18146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18049 && iVar1 < Global_262145.f_18147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18050 && iVar1 < Global_262145.f_18148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18051 && iVar1 < Global_262145.f_18149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18052 && iVar1 < Global_262145.f_18150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18053 && iVar1 < Global_262145.f_18151)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_19110 && iVar1 < Global_262145.f_19106)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_19111 && iVar1 < Global_262145.f_19107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_19112 && iVar1 < Global_262145.f_19108)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_19113 && iVar1 < Global_262145.f_19109)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_19989 && iVar1 < Global_262145.f_19997)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_19990 && iVar1 < Global_262145.f_19998)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_19991 && iVar1 < Global_262145.f_19999)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_19992 && iVar1 < Global_262145.f_20000)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_19993 && iVar1 < Global_262145.f_20001)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_19994 && iVar1 < Global_262145.f_20002)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_20766 && iVar1 < Global_262145.f_20786)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_20778 && iVar1 < Global_262145.f_20798)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_20769 && iVar1 < Global_262145.f_20789)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_20779 && iVar1 < Global_262145.f_20799)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_20767 && iVar1 < Global_262145.f_20787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_20783 && iVar1 < Global_262145.f_20803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_20781 && iVar1 < Global_262145.f_20801)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_20782 && iVar1 < Global_262145.f_20802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_20777 && iVar1 < Global_262145.f_20797)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_20784 && iVar1 < Global_262145.f_20804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_20780 && iVar1 < Global_262145.f_20800)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_20776 && iVar1 < Global_262145.f_20796)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_20768 && iVar1 < Global_262145.f_20788)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_20770 && iVar1 < Global_262145.f_20790)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_20771 && iVar1 < Global_262145.f_20791)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_20772 && iVar1 < Global_262145.f_20792)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_20773 && iVar1 < Global_262145.f_20793)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_20774 && iVar1 < Global_262145.f_20794)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_20775 && iVar1 < Global_262145.f_20795)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_21727 && iVar1 < Global_262145.f_21755)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_21728 && iVar1 < Global_262145.f_21756)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_21729 && iVar1 < Global_262145.f_21757)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_21730 && iVar1 < Global_262145.f_21758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_21731 && iVar1 < Global_262145.f_21759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_21732 && iVar1 < Global_262145.f_21760)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_21733 && iVar1 < Global_262145.f_21761)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_21734 && iVar1 < Global_262145.f_21762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_21735 && iVar1 < Global_262145.f_21763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_21736 && iVar1 < Global_262145.f_21764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_21737 && iVar1 < Global_262145.f_21765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_21738 && iVar1 < Global_262145.f_21766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_21739 && iVar1 < Global_262145.f_21767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_21740 && iVar1 < Global_262145.f_21768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_21741 && iVar1 < Global_262145.f_21769)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_21742 && iVar1 < Global_262145.f_21770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_21743 && iVar1 < Global_262145.f_21771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_21744 && iVar1 < Global_262145.f_21772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_21745 && iVar1 < Global_262145.f_21773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_21746 && iVar1 < Global_262145.f_21774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_21747 && iVar1 < Global_262145.f_21775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_21748 && iVar1 < Global_262145.f_21776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_21749 && iVar1 < Global_262145.f_21777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_21750 && iVar1 < Global_262145.f_21778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_21751 && iVar1 < Global_262145.f_21779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_21752 && iVar1 < Global_262145.f_21780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_21753 && iVar1 < Global_262145.f_21781)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_21754 && iVar1 < Global_262145.f_21782)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_22907 && iVar1 < Global_262145.f_22923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_22908 && iVar1 < Global_262145.f_22924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_22912 && iVar1 < Global_262145.f_22928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_22915 && iVar1 < Global_262145.f_22931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_22920 && iVar1 < Global_262145.f_22936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_22914 && iVar1 < Global_262145.f_22930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_22906 && iVar1 < Global_262145.f_22922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_22913 && iVar1 < Global_262145.f_22929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_22919 && iVar1 < Global_262145.f_22935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_22918 && iVar1 < Global_262145.f_22934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_22909 && iVar1 < Global_262145.f_22925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_22911 && iVar1 < Global_262145.f_22927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_22921 && iVar1 < Global_262145.f_22937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_22917 && iVar1 < Global_262145.f_22933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_22910 && iVar1 < Global_262145.f_22926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_22916 && iVar1 < Global_262145.f_22932)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_22997 && iVar1 < Global_262145.f_22984)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_22998 && iVar1 < Global_262145.f_22985)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_23003 && iVar1 < Global_262145.f_22990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_23002 && iVar1 < Global_262145.f_22989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_23000 && iVar1 < Global_262145.f_22987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_23006 && iVar1 < Global_262145.f_22993)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_23008 && iVar1 < Global_262145.f_22995)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_23009 && iVar1 < Global_262145.f_22996)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_23007 && iVar1 < Global_262145.f_22994)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_22999 && iVar1 < Global_262145.f_22986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_23001 && iVar1 < Global_262145.f_22988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_23005 && iVar1 < Global_262145.f_22992)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_23004 && iVar1 < Global_262145.f_22991)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_133()
{
	return 0;
}

int func_134()
{
	return 1;
}

int func_135()
{
	return 1;
}

int func_136()
{
	if (unk_0x7B2F21BFE86AEB61(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_137()
{
	var uVar0;
	
	if (unk_0x7E3A4CFA5545546C())
	{
		if (unk_0x6EFCE916927099A8())
		{
			if (unk_0x0D618527B2B8660A())
			{
				unk_0x6CB99B97664C3727(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xF0059F27F7BB6680(&uVar0, 2);
				unk_0xF0059F27F7BB6680(&uVar0, 4);
				unk_0xF0059F27F7BB6680(&uVar0, 6);
				unk_0xF0059F27F7BB6680(&Global_25, 2);
				unk_0xF0059F27F7BB6680(&Global_25, 4);
				unk_0xF0059F27F7BB6680(&Global_25, 6);
				unk_0x3A57956BCE003880(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x7A4B76D06AAF8132())
				{
					uVar0 = unk_0x2DC92D46FC48E795(866);
					unk_0xF0059F27F7BB6680(&uVar0, 0);
					unk_0x973C4C95367920C1(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_143856 == 2)
	{
		return 1;
	}
	else if (Global_143856 == 3)
	{
		return 0;
	}
	if (unk_0x7A4B76D06AAF8132())
	{
		if (unk_0xFA30DFD0084E92FE(unk_0x2DC92D46FC48E795(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_138()
{
	func_139(&(Global_98783.f_2875));
}

void func_139(var uParam0)
{
	if (func_127(uParam0))
	{
		unk_0xF243B7A14FCFD0F4(uParam0->f_12.f_66);
	}
}

int func_140(struct<3> Param0, float fParam3)
{
	return func_141(&(Global_98783.f_2875), Param0, fParam3, 0);
}

int func_141(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (func_127(uParam0))
	{
		if (func_70(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (unk_0x7352105EC4D7541F(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
		if (func_126(uParam0))
		{
			unk_0x6C5F5B5F6894CCE3(Param1, 5f, 1, 0, 0, 0);
			func_179(Param1, 5f, 0);
			iVar0 = unk_0x61C05BF08A1E0EFE(uParam0->f_12.f_66, Param1, fParam4, 1, 1, 0);
			if (unk_0x724D816EA203A79E(iVar0))
			{
				Var1 = { unk_0x541C2AEF053615BC(iVar0, 1) };
				if (unk_0xB7A628320EFF8E47(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0xD5874E4A4BF782FC(iVar0, Param1, 0, 0, 1);
				}
				func_162(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (unk_0xE7B3A320107C1379(uParam0->f_12.f_66) || unk_0x7974165A9BC75283(uParam0->f_12.f_66))
				{
					if (!unk_0xD841AD3F7B98FC00(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					unk_0xF0A40F19AAB79E88(iVar0, 1084227584);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (unk_0x7C28D15641461C68(unk_0x6F79ECA8C83E4357(iVar0)))
						{
							func_161(uParam0->f_11, 1);
						}
						else if (unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(iVar0)))
						{
							func_161(uParam0->f_11, 2);
						}
					}
					unk_0x551DF575AE9A2969(iVar0, 0);
					unk_0x2487C8A04B65E2BD(iVar0, 0);
					unk_0xA73D1278857991A2(iVar0, 1);
					func_160(iVar0, uParam0->f_11);
				}
				else if ((!func_158(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0x3362CDE8460ED38B(unk_0x1377080E9B0BD993(), "startup_positioning"))
				{
					iVar8 = func_157(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_152(iVar8);
					}
				}
				if (((Global_92955 != 13 && Global_92955 != 10) && Global_92955 != 11) && Global_92955 != 12)
				{
					if (unk_0x56BEECB328B6D29D(&(Global_92955.f_3)) == Global_70788)
					{
						if (uParam0->f_12.f_66 == Global_105220.f_32546.f_69[21 /*78*/].f_66)
						{
							func_149(24, 0);
							func_152(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_142(iVar0, uParam0->f_11);
				}
				unk_0x2CA123B0622F495C(uParam0->f_12.f_66);
				Var1 = { unk_0x541C2AEF053615BC(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_142(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_143(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x3187EF5798B5D209(iParam0, -1, 0);
		if (!unk_0x724D816EA203A79E(iVar0))
		{
			iVar0 = unk_0xE293D7F16E1815E8(iParam0, -1);
		}
		if (unk_0x724D816EA203A79E(iVar0) && !unk_0x36CEFBE9B745A58D(iVar0))
		{
			if (unk_0x6F79ECA8C83E4357(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x6F79ECA8C83E4357(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x6F79ECA8C83E4357(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_105220.f_2354.f_539.f_4301;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x6F79ECA8C83E4357(iParam0) == Global_105220.f_32546.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xF1734B55490E9045(&(Global_105220.f_32546.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x3362CDE8460ED38B(unk_0x2232934AD664DD49(iParam0), &(Global_105220.f_32546.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_105220.f_32546.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_105220.f_32546.f_5592[iVar1] = iVar2;
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
		if (unk_0x6F79ECA8C83E4357(iParam0) == Global_105220.f_32546.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xF1734B55490E9045(&(Global_105220.f_32546.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x3362CDE8460ED38B(unk_0x2232934AD664DD49(iParam0), &(Global_105220.f_32546.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_105220.f_32546.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_105220.f_32546.f_5590 = iParam1;
	Global_70705 = iParam0;
	Global_105220.f_32546.f_5588 = 1;
	func_39(iParam0, &(Global_105220.f_32546.f_5510));
}

int func_143(int iParam0)
{
	if ((((((((((!unk_0x724D816EA203A79E(iParam0) || !unk_0xE59B7F5A03335350(iParam0, 0)) || func_45(iParam0, 0, 0)) || func_45(iParam0, 1, 0)) || func_45(iParam0, 2, 0)) || func_34(iParam0) != 145) || func_148(iParam0)) || func_147(iParam0)) || func_146(iParam0)) || func_145(iParam0)) || !func_144(unk_0x6F79ECA8C83E4357(iParam0)))
	{
		if (func_147(iParam0))
		{
		}
		if (func_147(iParam0))
		{
		}
		if (func_45(iParam0, 0, 0))
		{
		}
		if (func_45(iParam0, 1, 0))
		{
		}
		if (func_45(iParam0, 2, 0))
		{
		}
		if (func_34(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_144(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_129(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0xE7B3A320107C1379(iParam0) || unk_0xA19D269B4B5A1532(iParam0)) || unk_0x8C1A6E7D5F410F4A(iParam0)) || unk_0xFF2234981505F7F4(iParam0))
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

int func_145(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x6F79ECA8C83E4357(iParam0);
	sVar1 = unk_0x2232934AD664DD49(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x3362CDE8460ED38B(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_129(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_146(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x724D816EA203A79E(Global_90461[iVar0]))
		{
			if (Global_90461[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_147(int iParam0)
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x724D816EA203A79E(Global_90431[iVar0]) && unk_0xE59B7F5A03335350(Global_90431[iVar0], 0))
			{
				if (Global_90431[iVar0] == iParam0 && unk_0x6F79ECA8C83E4357(Global_90431[iVar0]) == unk_0x6F79ECA8C83E4357(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_148(int iParam0)
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(Global_69800.f_484[24]))
	{
		if (iParam0 == Global_69800.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x724D816EA203A79E(Global_69800.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_69800.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_149(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_151(iParam0, 0))
		{
			func_150(iParam0, 1, 0);
			func_150(iParam0, 2, 0);
			func_150(iParam0, 3, 0);
			func_150(iParam0, 4, 0);
			func_150(iParam0, 0, 1);
			Global_69800[iParam0] = 1;
		}
	}
	else
	{
		func_150(iParam0, 0, 0);
	}
}

void func_150(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xF0059F27F7BB6680(&(Global_105220.f_32546[iParam0]), iParam1);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_105220.f_32546[iParam0]), iParam1);
	}
}

bool func_151(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xFA30DFD0084E92FE(Global_105220.f_32546[iParam0], iParam1);
}

void func_152(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_156(&(Global_69800.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x724D816EA203A79E(Global_69800.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0xE59B7F5A03335350(Global_69800.f_139[iParam0], 0))
				{
					if (unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Global_69800.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x77815D3407C6700D(Global_69800.f_139[iParam0], 1, 1);
				unk_0xCF6040807CC0E4A5(&(Global_69800.f_139[iParam0]));
			}
		}
		Global_69800[iParam0] = 1;
		if (unk_0xFA30DFD0084E92FE(Global_69800.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_151(iParam0, 0)) && Global_70709.f_66 == 0) && Global_105220.f_32546.f_1958[Global_69800.f_555[0 /*21*/].f_14] != 0) && Global_105220.f_32546.f_1958[Global_69800.f_555[0 /*21*/].f_14] > 3) && (!func_154(0, Global_69800.f_555[0 /*21*/].f_12) || !func_154(1, Global_69800.f_555[0 /*21*/].f_12)))
			{
				func_153(&(Global_105220.f_32546.f_69[Global_69800.f_555[0 /*21*/].f_14 /*78*/]), &Global_70709);
				Global_70787 = Global_105220.f_32546.f_5591;
			}
			func_149(iParam0, 0);
		}
	}
}

void func_153(var uParam0, var uParam1)
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

int func_154(int iParam0, int iParam1)
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
	if (iParam0 < 0 || iParam0 >= func_155(&(Global_105220.f_32546.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_129(Global_105220.f_32546.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_155(var uParam0)
{
	return *uParam0;
}

int func_156(var uParam0, int iParam1)
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
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_36(0, 1);
			uParam0->f_12 = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_36(1, 1);
			uParam0->f_12 = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_36(1, 2);
			uParam0->f_12 = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 19);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_36(1, 1);
			uParam0->f_12 = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_36(1, 2);
			uParam0->f_12 = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 19);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_36(2, 1);
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_36(2, 1);
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_36(2, 1);
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 20);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 22);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 22);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 22);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 14);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 28);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
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
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 27);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
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
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 27);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
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
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 7);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 27);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 24);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 11);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 10);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 11);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 9);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 9);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 8);
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
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 2);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 30);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 2);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 22);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
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
			if (func_137())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 2);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 1);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_137())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 13);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 2);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 1);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 0);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 21);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 30);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 30);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 23);
			unk_0xF0059F27F7BB6680(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xFA30DFD0084E92FE(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_105220.f_32546.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_70(Global_105220.f_32546.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_105220.f_32546.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_105220.f_32546.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_105220.f_32546.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xFA30DFD0084E92FE(uParam0->f_9, 19))
	{
		if (!func_70(Global_105220.f_2354.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_105220.f_2354.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_105220.f_2354.f_539.f_3589[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xFA30DFD0084E92FE(uParam0->f_9, 20))
	{
		if (!func_70(Global_105220.f_2354.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_105220.f_2354.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_105220.f_2354.f_539.f_3589[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_157(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0x724D816EA203A79E(Global_69800.f_484[iVar0]) && !unk_0x1D403DFADBC2DE3C(Global_69800.f_484[iVar0], 0)) && unk_0xE59B7F5A03335350(Global_69800.f_484[iVar0], 0))
		{
			unk_0x87F182D2DA225F0D(iParam0, &iVar1, &iVar2);
			unk_0x87F182D2DA225F0D(Global_69800.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0x6F79ECA8C83E4357(iParam0) == unk_0x6F79ECA8C83E4357(Global_69800.f_484[iVar0]) && unk_0x0FF608FD384AF8FA(iParam0) == unk_0x0FF608FD384AF8FA(Global_69800.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_158(int iParam0, struct<3> Param1, bool bParam4)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0x6F79ECA8C83E4357(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_159(iParam0, Global_69800.f_139[38], 0))
			{
				func_152(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_159(iParam0, Global_69800.f_139[43], 1))
			{
				func_152(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = unk_0xD7F48BFEBC0E3FB2(unk_0xBC25C936A095B5BA(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_159(iParam0, uVar1[iVar6], 1) && func_128(unk_0x541C2AEF053615BC(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam4 || func_70(Param1, 0f, 0f, 0f, 0)) || unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(iParam0, 1), unk_0x541C2AEF053615BC(uVar1[iVar6], 1), 1) < 10f)
					{
						unk_0xCF6040807CC0E4A5(&iParam0);
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
			if ((unk_0x724D816EA203A79E(Global_69800.f_484[14]) && unk_0xE59B7F5A03335350(iParam0, 0)) && unk_0xE59B7F5A03335350(Global_69800.f_484[14], 0))
			{
				if (unk_0x6F79ECA8C83E4357(Global_69800.f_484[14]) == joaat("luxor2") && unk_0x0FF608FD384AF8FA(iParam0) == unk_0x0FF608FD384AF8FA(Global_69800.f_484[14]))
				{
					func_152(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0x724D816EA203A79E(Global_69800.f_484[20]) && unk_0xE59B7F5A03335350(iParam0, 0)) && unk_0xE59B7F5A03335350(Global_69800.f_484[20], 0))
			{
				if (unk_0x6F79ECA8C83E4357(Global_69800.f_484[20]) == joaat("swift2") && unk_0x0FF608FD384AF8FA(iParam0) == unk_0x0FF608FD384AF8FA(Global_69800.f_484[20]))
				{
					func_152(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_159(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0x724D816EA203A79E(iParam1) && !unk_0x1D403DFADBC2DE3C(iParam1, 0)) && unk_0xE59B7F5A03335350(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0x87F182D2DA225F0D(iParam0, &iVar0, &iVar1);
			unk_0x87F182D2DA225F0D(iParam1, &iVar2, &iVar3);
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

void func_160(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x724D816EA203A79E(Global_90431[iVar0]))
		{
			Global_90431[iVar0] = iParam0;
			Global_90441[iVar0] = iParam1;
			Global_90451[iVar0] = unk_0x6F79ECA8C83E4357(iParam0);
			if (unk_0x7C28D15641461C68(Global_90451[iVar0]))
			{
				Global_90479[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_90479[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_161(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x724D816EA203A79E(Global_90431[iVar0]))
		{
			if (iParam0 == 145 || Global_90441[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x6F79ECA8C83E4357(Global_90431[iVar0]) == func_36(iParam0, iParam1))
				{
					if (!unk_0x62F3A07C43FFB568(unk_0xBC25C936A095B5BA(), Global_90431[iVar0], 0))
					{
						unk_0x77815D3407C6700D(Global_90431[iVar0], 0, 1);
						unk_0xCF6040807CC0E4A5(&(Global_90431[iVar0]));
						Global_90441[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_162(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (!func_171(iParam0))
		{
			if (unk_0x56BEECB328B6D29D(&(uParam1->f_1)) != 0)
			{
				unk_0xEA0AB6C644C58C1D(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0xECE72A06BBAC88B0())
			{
				unk_0x5EDEB04A454C1C0C(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (unk_0xFA30DFD0084E92FE(uParam1->f_77, func_40(iVar0 + 1)))
			{
			}
			else
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_77), func_40(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xFA30DFD0084E92FE(uParam1->f_77, func_40(iVar1 + 1)))
			{
			}
			else
			{
				unk_0xF0059F27F7BB6680(&(uParam1->f_77), func_40(iVar1 + 1));
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			unk_0x3621427A534C7FA0(iParam0, 0);
			if (unk_0x3EB14CBD49DA0017(iParam0, 5) != -1)
			{
				unk_0x3621427A534C7FA0(iParam0, 1);
			}
		}
		if (unk_0xFA30DFD0084E92FE(uParam1->f_77, 13))
		{
			unk_0x1A45B6F1C5FA21FC(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xF07FAC3A3C7FE9ED(iParam0);
		}
		if (unk_0xFA30DFD0084E92FE(uParam1->f_77, 12))
		{
			unk_0x28CD156B832945DC(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xC90D824D356A7AF3(iParam0);
		}
		unk_0x914C5DE0B15B8B59(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0x4C59702AC1076A88(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xFA30DFD0084E92FE(uParam1->f_77, 15) || func_170(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_169())
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
		unk_0x05D05A0BAA6CA8B1(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_42(uParam1->f_66))
		{
			unk_0x84A3F4F29630A320(iParam0, 0);
		}
		else
		{
			unk_0x84A3F4F29630A320(iParam0, 0);
			unk_0x84A3F4F29630A320(iParam0, uParam1->f_65);
		}
		unk_0xE82050D41B744FF3(iParam0, !unk_0xFA30DFD0084E92FE(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0xD421BC740C5340C3(iParam0, uParam1->f_70);
		}
		unk_0x13CA55A989DEB72C(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0x200ACC5C718FF287(iParam0, 2, unk_0xFA30DFD0084E92FE(uParam1->f_77, 28));
		unk_0x200ACC5C718FF287(iParam0, 3, unk_0xFA30DFD0084E92FE(uParam1->f_77, 29));
		unk_0x200ACC5C718FF287(iParam0, 0, unk_0xFA30DFD0084E92FE(uParam1->f_77, 30));
		unk_0x200ACC5C718FF287(iParam0, 1, unk_0xFA30DFD0084E92FE(uParam1->f_77, 31));
		unk_0x8D8F52BBEE186D6D(iParam0, unk_0xFA30DFD0084E92FE(uParam1->f_77, 10));
		if (unk_0x294CD98C461C2594(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0x7170EF3CEB4D0224(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x2B4DE5C0D509B0F9(unk_0x6F79ECA8C83E4357(iParam0)))
			{
				if (unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_168(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_168(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x6DB86B1ADD81CED4(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x53A9885CA864BB82(iParam0, 1);
			}
			else
			{
				unk_0x7868CAB0703DB40F(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_163(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0x8C1A6E7D5F410F4A(uParam1->f_66) && !unk_0xE7B3A320107C1379(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0xFA30DFD0084E92FE(uParam1->f_77, func_40(iVar2 + 1)))
				{
					if (!unk_0xFC8A228C62614C5C(iParam0, iVar2 + 1))
					{
						unk_0xE54F7105CEA81918(iParam0, iVar2 + 1, 0);
					}
				}
				else if (unk_0xFC8A228C62614C5C(iParam0, iVar2 + 1))
				{
					unk_0xE54F7105CEA81918(iParam0, iVar2 + 1, 1);
				}
				iVar2++;
			}
		}
		if ((unk_0x6F79ECA8C83E4357(iParam0) == joaat("sheava") || unk_0x6F79ECA8C83E4357(iParam0) == joaat("omnis")) || unk_0x6F79ECA8C83E4357(iParam0) == joaat("le7b"))
		{
			if (unk_0x3EB14CBD49DA0017(iParam0, 0) == -1)
			{
				unk_0xE54F7105CEA81918(iParam0, 1, 0);
			}
		}
		if (((unk_0xA19D269B4B5A1532(uParam1->f_66) && unk_0x86AFA41F8E0E6D36(iParam0)) && !unk_0x5E87CB0495C97732(iParam0, joaat("avenger"))) && !((((Global_4456448.f_51118 == 6 || Global_4456448.f_51118 == 7) || Global_4456448.f_51118 == 18) || Global_4456448.f_51118 == 19) && Global_4456448.f_2 == 20))
		{
			if (!unk_0xFA30DFD0084E92FE(uParam1->f_77, 23))
			{
				if (unk_0xFA30DFD0084E92FE(uParam1->f_77, 22))
				{
					unk_0xA1EE8501940C1D3E(iParam0, 2);
				}
				else
				{
					unk_0xA1EE8501940C1D3E(iParam0, 3);
				}
			}
			else
			{
				unk_0xA1EE8501940C1D3E(iParam0, 4);
			}
		}
		if (unk_0xFA30DFD0084E92FE(uParam1->f_77, 27))
		{
			unk_0xE9A905ADFD5BC8A0(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0xE9A905ADFD5BC8A0(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_163(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xE59B7F5A03335350(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xA6BE0954FC6BAA16(*iParam0) == 0)
	{
		return 0;
	}
	unk_0x1345B3BF11EDB0CF(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0xB25E25030D61B529(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0x3EB14CBD49DA0017(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0xD2AB1F868ED95E27(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x5C9F67BE33A5A3EE(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x5C9F67BE33A5A3EE(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x5C9F67BE33A5A3EE(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_167(unk_0x6F79ECA8C83E4357(*iParam0), 1) && unk_0x3EB14CBD49DA0017(*iParam0, 24) != func_166(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x5C9F67BE33A5A3EE(*iParam0, 24, func_166(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_165(iParam0);
	if (func_164(*iParam0))
	{
		unk_0xDB35A2F9333ABEC5(*iParam0, 1);
		unk_0xA73D1278857991A2(*iParam0, 1);
	}
	return 1;
}

int func_164(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0)) && unk_0xA6BE0954FC6BAA16(iParam0) > 0)
	{
		unk_0x1345B3BF11EDB0CF(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x3EB14CBD49DA0017(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x0E4EDFA1D564AF9D(iParam0, iVar1, unk_0x3EB14CBD49DA0017(iParam0, iVar1)), 16);
				iVar2 = unk_0x56BEECB328B6D29D(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x56BEECB328B6D29D("MNU_CAGE") || iVar2 == unk_0x56BEECB328B6D29D("SABRE_CAG"))
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

void func_165(var uParam0)
{
	switch (unk_0x6F79ECA8C83E4357(*uParam0))
	{
		case joaat("starling"):
			if (unk_0x3EB14CBD49DA0017(*uParam0, 4) == 0)
			{
				unk_0x5C9F67BE33A5A3EE(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0xD2AB1F868ED95E27(*uParam0, 13);
			}
			break;
	}
}

int func_166(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0))
	{
		switch (unk_0x6F79ECA8C83E4357(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
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
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = unk_0x34374BDFA570F489(iParam0, 38);
		iVar1 = unk_0x34374BDFA570F489(iParam0, 24);
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

int func_167(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_13594)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_13595)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_13593)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_13596)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_13598)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_13597)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_18039)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_18041)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_18045)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_18042)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18049)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_18047)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18052)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_19995)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_19996)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
	}
	return 0;
}

void func_168(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xA6BE0954FC6BAA16(iParam0) > 0)
	{
		unk_0x1345B3BF11EDB0CF(iParam0, 0);
		iVar0 = unk_0x3EB14CBD49DA0017(iParam0, 24);
		iVar1 = unk_0xC8B123E980199685(iParam0, 24);
		unk_0xD2F70373DBF15801(iParam0, uParam1);
		if (unk_0x6F79ECA8C83E4357(iParam0) == joaat("tornado6"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0xD2AB1F868ED95E27(iParam0, 24);
		}
		else
		{
			unk_0x5C9F67BE33A5A3EE(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_169()
{
	return unk_0x7B2F21BFE86AEB61(joaat("mpindependence"));
}

int func_170(int iParam0)
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		if (unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (unk_0x46032D09AA009EC4("MPBitset", 3))
			{
				if (unk_0x3C03CFD5DD1E2D97(iParam0, "MPBitset"))
				{
					iVar0 = unk_0x67CFC62D543B19EF(iParam0, "MPBitset");
				}
				return unk_0xFA30DFD0084E92FE(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_171(int iParam0)
{
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!func_177(unk_0xB5CEFD608600A09F(), -1))
		{
			iParam0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		}
	}
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	if (unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0xE59B7F5A03335350(iParam0, 0))
	{
		return 0;
	}
	if (func_173(unk_0xB5CEFD608600A09F()) == 3)
	{
		if (unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (func_172(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_172(int iParam0)
{
	if (unk_0x46032D09AA009EC4("FMDeliverableID", 3))
	{
		if (unk_0x3C03CFD5DD1E2D97(iParam0, "FMDeliverableID"))
		{
			return unk_0x67CFC62D543B19EF(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_173(int iParam0)
{
	if (func_176(iParam0) == 233)
	{
		return func_174(iParam0);
	}
	return -1;
}

int func_174(int iParam0)
{
	if (func_175(iParam0, 0))
	{
		return Global_1624079[iParam0 /*558*/].f_11.f_176;
	}
	return -1;
}

int func_175(int iParam0, int iParam1)
{
	if (Global_1624079[iParam0 /*558*/].f_11.f_33 != -1 || (iParam1 && Global_1624079[iParam0 /*558*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_176(int iParam0)
{
	if (func_175(iParam0, 0))
	{
		return Global_1624079[iParam0 /*558*/].f_11.f_33;
	}
	return -1;
}

int func_177(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_178(iParam0, 1, 1))
	{
		if (unk_0x5237AF95232D78C5(unk_0xA95CF30C72EB526E(iParam0), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xA95CF30C72EB526E(iParam0), 0);
			if (unk_0xE59B7F5A03335350(iVar0, 0))
			{
				if (unk_0xBC25C936A095B5BA() == unk_0x3187EF5798B5D209(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_178(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x96B1061E8F3CBC9A(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x6A9CDB766DF7216F(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436641.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_179(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_156(&(Global_69800.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0xF0F2FC9DE291567F(Param0, Global_69800.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_152(iVar0);
			}
		}
		iVar0++;
	}
}

var func_180()
{
	return Global_98783.f_2875.f_12.f_66;
}

bool func_181()
{
	return func_127(&(Global_98783.f_2875));
}

void func_182()
{
	uLocal_3293 = unk_0x9934FEFB3B8C6DB8("BREAKING_NEWS");
	unk_0xF243B7A14FCFD0F4(joaat("jet"));
	unk_0xF243B7A14FCFD0F4(joaat("police3"));
	unk_0xF243B7A14FCFD0F4(joaat("maverick"));
	unk_0xF243B7A14FCFD0F4(joaat("bison"));
	unk_0xF243B7A14FCFD0F4(joaat("blista"));
	unk_0xF243B7A14FCFD0F4(joaat("ig_molly"));
	unk_0xF243B7A14FCFD0F4(joaat("cogcabrio"));
	unk_0xF243B7A14FCFD0F4(joaat("rapidgt"));
	unk_0x1B2A7C8188ADBE04(45, "BB_Chase");
	unk_0x1B2A7C8188ADBE04(35, "BB_Chase");
	unk_0x1B2A7C8188ADBE04(2, "BB_Chase");
	unk_0x1B2A7C8188ADBE04(54, "BB_Chase");
	unk_0x1B2A7C8188ADBE04(55, "BB_Chase");
	unk_0x1B2A7C8188ADBE04(67, "BB_Chase");
	func_184(1, "BB_Chase");
	if (func_23())
	{
		if (func_181())
		{
			if (!unk_0x8C1A6E7D5F410F4A(func_180()) && !unk_0xA19D269B4B5A1532(func_180()))
			{
				func_138();
				while (!func_125())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
			}
		}
	}
	while (((((((!unk_0xD6513D668481290A(joaat("jet")) || !unk_0xD6513D668481290A(joaat("police3"))) || !unk_0xD6513D668481290A(joaat("maverick"))) || !unk_0xD6513D668481290A(joaat("bison"))) || !unk_0xD6513D668481290A(joaat("blista"))) || !unk_0xD6513D668481290A(joaat("ig_molly"))) || !unk_0xD6513D668481290A(joaat("cogcabrio"))) || !unk_0xD6513D668481290A(joaat("rapidgt")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (!unk_0xA7F138B5B1AB2CF6(uLocal_3293) || !func_183(1, "BB_Chase"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (((((!unk_0x00D24B3F2A5CD22C(45, "BB_Chase") || !unk_0x00D24B3F2A5CD22C(35, "BB_Chase")) || !unk_0x00D24B3F2A5CD22C(2, "BB_Chase")) || !unk_0x00D24B3F2A5CD22C(54, "BB_Chase")) || !unk_0x00D24B3F2A5CD22C(55, "BB_Chase")) || !unk_0x00D24B3F2A5CD22C(67, "BB_Chase"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

bool func_183(int iParam0, char* sParam1)
{
	return unk_0x00D24B3F2A5CD22C(iParam0, sParam1);
}

void func_184(int iParam0, char* sParam1)
{
	unk_0x1B2A7C8188ADBE04(iParam0, sParam1);
}

void func_185()
{
	func_211();
	func_209();
	unk_0xEB233A3B7635D2AC();
	unk_0xAF0732277B825027(0);
	unk_0x78108840729CEAEE(0);
	unk_0x4AED68BFACFB14CB(1);
	if (unk_0x86BC948CAD7C61EF(iLocal_3220))
	{
		unk_0x906C49077ACDA06A(iLocal_3220);
	}
	if (unk_0x2A0D5F9585271A68(uLocal_3221))
	{
		unk_0x5BF83EEC9AFDCD0E(uLocal_3221);
	}
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), -1019.579f, -484.872f, 36.0795f, 1, 0, 0, 1);
		unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), 93.7701f);
	}
	if (unk_0x724D816EA203A79E(iLocal_3259))
	{
		if (unk_0xE59B7F5A03335350(iLocal_3259, 0))
		{
			if (unk_0xB34E411B0A4BF096(iLocal_3259))
			{
				unk_0xD87F0F9CDF39238A(iLocal_3259);
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_3258))
	{
		if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
		{
			unk_0x38E412DB4A45B900(iLocal_3258, 0);
			if (unk_0xB34E411B0A4BF096(iLocal_3258))
			{
				unk_0xD87F0F9CDF39238A(iLocal_3258);
			}
		}
	}
	if (unk_0x2F1B39E315395385(uLocal_3759))
	{
		unk_0x2CA8D9DC16C6AF09(uLocal_3759, 0);
	}
	if (unk_0x2F1B39E315395385(uLocal_3760))
	{
		unk_0x2CA8D9DC16C6AF09(uLocal_3760, 0);
	}
	if (unk_0x2F1B39E315395385(uLocal_3761))
	{
		unk_0x2CA8D9DC16C6AF09(uLocal_3761, 0);
	}
	if (unk_0x2F1B39E315395385(uLocal_3762))
	{
		unk_0x2CA8D9DC16C6AF09(uLocal_3762, 0);
	}
	if (unk_0x2F1B39E315395385(uLocal_3763))
	{
		unk_0x2CA8D9DC16C6AF09(uLocal_3763, 0);
	}
	if (unk_0x2F1B39E315395385(uLocal_3755[0]))
	{
		unk_0x2CA8D9DC16C6AF09(uLocal_3755[0], 0);
	}
	if (unk_0x2F1B39E315395385(uLocal_3755[1]))
	{
		unk_0x2CA8D9DC16C6AF09(uLocal_3755[1], 0);
	}
	if (unk_0x2F1B39E315395385(uLocal_3755[2]))
	{
		unk_0x2CA8D9DC16C6AF09(uLocal_3755[2], 0);
	}
	unk_0x8E5F062750135AD1();
	if (unk_0x724D816EA203A79E(iLocal_3222))
	{
		unk_0xF845620A03C7425B(&iLocal_3222);
	}
	if (unk_0x724D816EA203A79E(iLocal_3228))
	{
		unk_0xF845620A03C7425B(&iLocal_3228);
	}
	if (unk_0x724D816EA203A79E(iLocal_3245))
	{
		unk_0xF845620A03C7425B(&iLocal_3245);
	}
	if (unk_0x724D816EA203A79E(iLocal_3246))
	{
		unk_0xF845620A03C7425B(&iLocal_3246);
	}
	if (unk_0x724D816EA203A79E(iLocal_3247))
	{
		unk_0xF845620A03C7425B(&iLocal_3247);
	}
	if (unk_0x724D816EA203A79E(iLocal_3248))
	{
		unk_0xF845620A03C7425B(&iLocal_3248);
	}
	if (unk_0x724D816EA203A79E(iLocal_3249))
	{
		unk_0xF845620A03C7425B(&iLocal_3249);
	}
	if (unk_0x724D816EA203A79E(iLocal_3250))
	{
		unk_0xF845620A03C7425B(&iLocal_3250);
	}
	if (unk_0x724D816EA203A79E(iLocal_3223[0]))
	{
		unk_0xF845620A03C7425B(&(iLocal_3223[0]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3223[1]))
	{
		unk_0xF845620A03C7425B(&(iLocal_3223[1]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3223[2]))
	{
		unk_0xF845620A03C7425B(&(iLocal_3223[2]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3223[3]))
	{
		unk_0xF845620A03C7425B(&(iLocal_3223[3]));
	}
	if (unk_0x724D816EA203A79E(uLocal_3229[0]))
	{
		unk_0xF845620A03C7425B(&(uLocal_3229[0]));
	}
	if (unk_0x724D816EA203A79E(uLocal_3229[1]))
	{
		unk_0xF845620A03C7425B(&(uLocal_3229[1]));
	}
	if (unk_0x724D816EA203A79E(uLocal_3229[2]))
	{
		unk_0xF845620A03C7425B(&(uLocal_3229[2]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3233[0]))
	{
		unk_0xF845620A03C7425B(&(iLocal_3233[0]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3233[1]))
	{
		unk_0xF845620A03C7425B(&(iLocal_3233[1]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3233[2]))
	{
		unk_0xF845620A03C7425B(&(iLocal_3233[2]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3233[3]))
	{
		unk_0xF845620A03C7425B(&(iLocal_3233[3]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3233[4]))
	{
		unk_0xF845620A03C7425B(&(iLocal_3233[4]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3233[5]))
	{
		unk_0xF845620A03C7425B(&(iLocal_3233[5]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3233[6]))
	{
		unk_0xF845620A03C7425B(&(iLocal_3233[6]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3233[7]))
	{
		unk_0xF845620A03C7425B(&(iLocal_3233[7]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3233[8]))
	{
		unk_0xF845620A03C7425B(&(iLocal_3233[8]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3233[9]))
	{
		unk_0xF845620A03C7425B(&(iLocal_3233[9]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3233[10]))
	{
		unk_0xF845620A03C7425B(&(iLocal_3233[10]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3251[0]))
	{
		unk_0xF845620A03C7425B(&(iLocal_3251[0]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3254[0]))
	{
		unk_0xF845620A03C7425B(&(iLocal_3254[0]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3254[1]))
	{
		unk_0xF845620A03C7425B(&(iLocal_3254[1]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3258))
	{
		unk_0xCF6040807CC0E4A5(&iLocal_3258);
	}
	if (unk_0x724D816EA203A79E(iLocal_3259))
	{
		if (!unk_0x5CAE759AE8219D20(iLocal_3259))
		{
			unk_0x77815D3407C6700D(iLocal_3259, 1, 0);
		}
		unk_0xCF6040807CC0E4A5(&iLocal_3259);
	}
	if (unk_0x724D816EA203A79E(iLocal_3264))
	{
		unk_0xCF6040807CC0E4A5(&iLocal_3264);
	}
	if (unk_0x724D816EA203A79E(iLocal_3265))
	{
		unk_0xCF6040807CC0E4A5(&iLocal_3265);
	}
	if (unk_0x724D816EA203A79E(iLocal_3266))
	{
		unk_0xCF6040807CC0E4A5(&iLocal_3266);
	}
	if (unk_0x724D816EA203A79E(iLocal_3267))
	{
		unk_0xCF6040807CC0E4A5(&iLocal_3267);
	}
	if (unk_0x724D816EA203A79E(iLocal_3271))
	{
		unk_0xCF6040807CC0E4A5(&iLocal_3271);
	}
	if (unk_0x724D816EA203A79E(iLocal_3275))
	{
		unk_0xCF6040807CC0E4A5(&iLocal_3275);
	}
	if (unk_0x724D816EA203A79E(iLocal_3279[0]))
	{
		unk_0xCF6040807CC0E4A5(&(iLocal_3279[0]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3279[1]))
	{
		unk_0xCF6040807CC0E4A5(&(iLocal_3279[1]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3260[0]))
	{
		unk_0xCF6040807CC0E4A5(&(iLocal_3260[0]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3260[1]))
	{
		unk_0xCF6040807CC0E4A5(&(iLocal_3260[1]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3279[0]))
	{
		unk_0xCF6040807CC0E4A5(&(iLocal_3279[0]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3279[1]))
	{
		unk_0xCF6040807CC0E4A5(&(iLocal_3279[1]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3268[0]))
	{
		unk_0xCF6040807CC0E4A5(&(iLocal_3268[0]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3268[1]))
	{
		unk_0xCF6040807CC0E4A5(&(iLocal_3268[1]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3272[0]))
	{
		unk_0xCF6040807CC0E4A5(&(iLocal_3272[0]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3263))
	{
		unk_0xCF6040807CC0E4A5(&iLocal_3263);
	}
	if (unk_0x724D816EA203A79E(iLocal_3282))
	{
		unk_0xA35241BCE4C1A24B(&iLocal_3282);
	}
	if (unk_0x724D816EA203A79E(iLocal_3283))
	{
		unk_0xA35241BCE4C1A24B(&iLocal_3283);
	}
	if (unk_0x724D816EA203A79E(iLocal_3284))
	{
		unk_0xA35241BCE4C1A24B(&iLocal_3284);
	}
	unk_0xC32C243942383443();
	if (unk_0x144E80F5C46A6B75("SOL_3_DRIVE_TO_AIRPORT"))
	{
		unk_0xC1300D0F3A74E20B("SOL_3_DRIVE_TO_AIRPORT");
	}
	if (unk_0x144E80F5C46A6B75("SOL_3_MAIN_CHASE"))
	{
		unk_0xC1300D0F3A74E20B("SOL_3_MAIN_CHASE");
	}
	if (unk_0x144E80F5C46A6B75("SOL_3_CHOPPER_CAM"))
	{
		unk_0xC1300D0F3A74E20B("SOL_3_CHOPPER_CAM");
	}
	if (unk_0x144E80F5C46A6B75("SOL_3_HELI_TAKEOFF"))
	{
		unk_0xC1300D0F3A74E20B("SOL_3_HELI_TAKEOFF");
	}
	if (unk_0x144E80F5C46A6B75("SOL_3_EVENT_TANKER_CRASH"))
	{
		unk_0xC1300D0F3A74E20B("SOL_3_EVENT_TANKER_CRASH");
	}
	if (unk_0x144E80F5C46A6B75("SOL_3_CAR_JET_ENGINE"))
	{
		unk_0xC1300D0F3A74E20B("SOL_3_CAR_JET_ENGINE");
	}
	if (unk_0x144E80F5C46A6B75("SOL_3_PLANE_ON_FIRE"))
	{
		unk_0xC1300D0F3A74E20B("SOL_3_PLANE_ON_FIRE");
	}
	if (unk_0x144E80F5C46A6B75("SOL_3_EVENT_JET_LANDING"))
	{
		unk_0xC1300D0F3A74E20B("SOL_3_EVENT_JET_LANDING");
	}
	if (unk_0x144E80F5C46A6B75("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION"))
	{
		unk_0xC1300D0F3A74E20B("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
	}
	if (unk_0x144E80F5C46A6B75("SOL_3_ARRIVE_AT_HANGAR"))
	{
		unk_0xC1300D0F3A74E20B("SOL_3_ARRIVE_AT_HANGAR");
	}
	if (unk_0x144E80F5C46A6B75("SOL_3_ON_FOOT_CHASE"))
	{
		unk_0xC1300D0F3A74E20B("SOL_3_ON_FOOT_CHASE");
	}
	if (unk_0x144E80F5C46A6B75("SOL_3_LOSE_COPS"))
	{
		unk_0xC1300D0F3A74E20B("SOL_3_LOSE_COPS");
	}
	if (unk_0x144E80F5C46A6B75("SOL_3_LOSE_COPS_PLANE"))
	{
		unk_0xC1300D0F3A74E20B("SOL_3_LOSE_COPS_PLANE");
	}
	if (unk_0x144E80F5C46A6B75("SOL_3_LOSE_COPS_VEHICLE"))
	{
		unk_0xC1300D0F3A74E20B("SOL_3_LOSE_COPS_VEHICLE");
	}
	if (unk_0x144E80F5C46A6B75("SOL_3_ENGINE_DEATH_SCENE"))
	{
		unk_0xC1300D0F3A74E20B("SOL_3_ENGINE_DEATH_SCENE");
	}
	unk_0x38FF8CB6377D36F6(iLocal_3211);
	unk_0x38FF8CB6377D36F6(iLocal_3213);
	unk_0x38FF8CB6377D36F6(iLocal_3214);
	unk_0x38FF8CB6377D36F6(iLocal_3215);
	unk_0x38FF8CB6377D36F6(iLocal_3216);
	unk_0x38FF8CB6377D36F6(iLocal_3217);
	unk_0x38FF8CB6377D36F6(iLocal_3218);
	unk_0x38FF8CB6377D36F6(iLocal_3219);
	unk_0x38FF8CB6377D36F6(iLocal_3212);
	func_207(&uLocal_28, 0, 0);
	if (unk_0xEF0E25DA0CB6E8FF(uLocal_3289))
	{
		unk_0x4EC087603E1DEF9C(uLocal_3289, 0);
	}
	if (unk_0xEF0E25DA0CB6E8FF(uLocal_3290))
	{
		unk_0x4EC087603E1DEF9C(uLocal_3290, 0);
	}
	if (unk_0xEF0E25DA0CB6E8FF(uLocal_3291))
	{
		unk_0x4EC087603E1DEF9C(uLocal_3291, 0);
	}
	func_186(1, 1);
	unk_0x4EA570997E107F35("misssolomon_3");
	unk_0x4EA570997E107F35("amb@world_human_clipboard@male@base");
	unk_0x4EA570997E107F35("missheist_agency3aig_lift_waitped_a");
	unk_0x4F5DAC981AF98536(1, "BB_CHASE");
	unk_0x4F5DAC981AF98536(2, "BB_Chase");
	unk_0x4F5DAC981AF98536(9, "BB_CHASE");
	unk_0x4F5DAC981AF98536(35, "BB_Chase");
	unk_0x4F5DAC981AF98536(45, "BB_Chase");
	unk_0x4F5DAC981AF98536(54, "BB_Chase");
	unk_0x4F5DAC981AF98536(55, "BB_Chase");
	unk_0x4F5DAC981AF98536(61, "BB_CHASE");
	unk_0x4F5DAC981AF98536(63, "BB_CHASE");
	unk_0x4F5DAC981AF98536(64, "BB_CHASE");
	unk_0x4F5DAC981AF98536(67, "BB_Chase");
	unk_0x4F5DAC981AF98536(68, "BB_CHASE");
	unk_0x4F5DAC981AF98536(69, "BB_Chase");
	unk_0xB0B0FE33F4F22679(&uLocal_3293);
	unk_0x786556581D95BCB2("digitalOverlay");
}

void func_186(bool bParam0, bool bParam1)
{
	if (!unk_0xF1734B55490E9045(&cLocal_2668))
	{
		iLocal_91 = 0;
		func_206();
		unk_0x926FDA90094AA5FA(iLocal_2684);
		unk_0x832ADB79A274D4E9(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			unk_0xC26F3DBF9AB3C8CB(unk_0xB5CEFD608600A09F(), 1f);
			unk_0x635083B90B1A9C63(unk_0xB5CEFD608600A09F(), 1);
			unk_0x6E52C7765A0F4382(1);
		}
		if (bLocal_107)
		{
			unk_0x2CA123B0622F495C(func_205());
		}
		unk_0x2CA123B0622F495C(func_204());
		unk_0x2CA123B0622F495C(func_203());
		unk_0x2CA123B0622F495C(func_202());
		if (!unk_0x17FAADF9916EF741() && !bParam0)
		{
			func_201();
			func_200();
			func_197();
		}
		else
		{
			func_193();
			func_192();
		}
		if (bParam1)
		{
			func_187(0);
		}
	}
}

void func_187(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 49)
	{
		func_188(iVar0, bParam0);
		iVar0++;
	}
}

void func_188(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_73(iParam0, 2, 1))
		{
			func_191(iParam0, 2, 1);
		}
	}
	else if (func_73(iParam0, 2, 1))
	{
		func_189(iParam0, 2, 1);
	}
}

void func_189(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x7CB6FD92BE491AD9(&(Global_93007.f_1329[iParam0]), iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_75() == 0)
		{
			uVar0 = func_50(func_74(iParam0), -1, 0);
			unk_0x7CB6FD92BE491AD9(&uVar0, iParam1);
			func_190(func_74(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_105220.f_668[iParam0]), iParam1);
	}
}

void func_190(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2530245[iParam0 /*3*/][func_51(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, uParam1, iParam3);
	}
}

void func_191(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xF0059F27F7BB6680(&(Global_93007.f_1329[iParam0]), iParam1);
	}
	else if (unk_0x7AF0088ABFA713B6())
	{
		if (func_75() == 0)
		{
			uVar0 = func_50(func_74(iParam0), -1, 0);
			unk_0xF0059F27F7BB6680(&uVar0, iParam1);
			func_190(func_74(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xF0059F27F7BB6680(&(Global_105220.f_668[iParam0]), iParam1);
	}
}

void func_192()
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

void func_193()
{
	func_196();
	func_195();
	func_194();
}

void func_194()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (unk_0x724D816EA203A79E(iLocal_3121[iVar0]))
		{
			if (unk_0xE59B7F5A03335350(iLocal_3121[iVar0], 0))
			{
				if (unk_0xB34E411B0A4BF096(iLocal_3121[iVar0]))
				{
					unk_0xD87F0F9CDF39238A(iLocal_3121[iVar0]);
				}
				iVar1 = unk_0x3187EF5798B5D209(iLocal_3121[iVar0], -1, 0);
				if (unk_0x724D816EA203A79E(iVar1) && iVar1 != unk_0xBC25C936A095B5BA())
				{
					if (unk_0x5CAE759AE8219D20(iVar1))
					{
						unk_0xF845620A03C7425B(&iVar1);
					}
				}
			}
			if (unk_0x5CAE759AE8219D20(iLocal_3121[iVar0]))
			{
				unk_0xCF6040807CC0E4A5(&(iLocal_3121[iVar0]));
			}
		}
		iLocal_1858[iVar0] = 0;
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_1822[iVar0] > 0)
			{
				unk_0x4F5DAC981AF98536(iLocal_1822[iVar0], &cLocal_2668);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!iLocal_2877[iVar0] == 0)
		{
			unk_0x2CA123B0622F495C(iLocal_2877[iVar0]);
		}
		iVar0++;
	}
}

void func_195()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x724D816EA203A79E(iLocal_3105[iVar0]))
		{
			if (unk_0x5CAE759AE8219D20(iLocal_3105[iVar0]))
			{
				unk_0xCF6040807CC0E4A5(&(iLocal_3105[iVar0]));
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
			unk_0x2CA123B0622F495C(iLocal_2861[iVar0]);
		}
		iVar0++;
	}
	iLocal_1951 = 0;
	iLocal_1948 = 0;
}

void func_196()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (unk_0x724D816EA203A79E(iLocal_2916[iVar0]))
		{
			if (unk_0xE59B7F5A03335350(iLocal_2916[iVar0], 0))
			{
				if (unk_0xB34E411B0A4BF096(iLocal_2916[iVar0]))
				{
					unk_0xD87F0F9CDF39238A(iLocal_2916[iVar0]);
				}
				iVar1 = unk_0x3187EF5798B5D209(iLocal_2916[iVar0], -1, 0);
				if (unk_0x724D816EA203A79E(iVar1) && iVar1 != unk_0xBC25C936A095B5BA())
				{
					if (unk_0x5CAE759AE8219D20(iVar1))
					{
						unk_0xF845620A03C7425B(&iVar1);
					}
				}
			}
			if (unk_0x5CAE759AE8219D20(iLocal_2916[iVar0]))
			{
				unk_0xCF6040807CC0E4A5(&(iLocal_2916[iVar0]));
			}
		}
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_1294[iVar0] > 0)
			{
				unk_0x4F5DAC981AF98536(iLocal_1294[iVar0], &cLocal_2668);
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
			unk_0x2CA123B0622F495C(iLocal_2685[iVar0]);
		}
		iVar0++;
	}
	iLocal_1950 = 0;
	iLocal_1946 = 0;
}

void func_197()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (unk_0x724D816EA203A79E(iLocal_3121[iVar0]))
		{
			if (unk_0xE59B7F5A03335350(iLocal_3121[iVar0], 0))
			{
				if (unk_0xB34E411B0A4BF096(iLocal_3121[iVar0]))
				{
					unk_0xD87F0F9CDF39238A(iLocal_3121[iVar0]);
				}
			}
			func_199(iLocal_3121[iVar0]);
			func_198(iLocal_3121[iVar0]);
		}
		iLocal_1858[iVar0] = 0;
		iLocal_1894[iVar0] = 0;
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_1822[iVar0] > 0)
			{
				unk_0x4F5DAC981AF98536(iLocal_1822[iVar0], &cLocal_2668);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!iLocal_2877[iVar0] == 0)
		{
			unk_0x2CA123B0622F495C(iLocal_2877[iVar0]);
		}
		iVar0++;
	}
	iLocal_1952 = 0;
}

void func_198(int iParam0)
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		unk_0x1E7A09C1710FB071(&iParam0);
	}
}

void func_199(int iParam0)
{
	float fVar0;
	int iVar1;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		iVar1 = unk_0x3187EF5798B5D209(iParam0, -1, 0);
		if (!unk_0x36CEFBE9B745A58D(iVar1))
		{
			if (!iVar1 == unk_0xBC25C936A095B5BA())
			{
				fVar0 = unk_0x8910237449BB6F79(iParam0);
				if (fVar0 < 8f)
				{
					fVar0 = 8f;
				}
				if (fVar0 > 62.9f)
				{
					fVar0 = 62.9f;
				}
				unk_0x488EB206498BC561(iVar1, iParam0, 0, 1, fVar0, 786603, 5f, 5f, 1);
				unk_0xABA7AE40608505F2(iVar1, 8192, 1);
				if (bLocal_108)
				{
					unk_0xABA7AE40608505F2(iVar1, 65536, 1);
					unk_0xABA7AE40608505F2(iVar1, 2, 0);
				}
				unk_0x91629AC1E1F78419(iVar1, 6, 0);
			}
		}
	}
}

void func_200()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (unk_0x724D816EA203A79E(iLocal_3105[iVar0]))
		{
			if (!unk_0x1D403DFADBC2DE3C(iLocal_3105[iVar0], 0))
			{
				unk_0xD434A01DEA38A939(iLocal_3105[iVar0], 1, 0);
			}
			func_198(iLocal_3105[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_2861[iVar0] == 0)
		{
			unk_0x2CA123B0622F495C(iLocal_2861[iVar0]);
		}
		iVar0++;
	}
	iLocal_1951 = 0;
	iLocal_1948 = 0;
}

void func_201()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (unk_0x724D816EA203A79E(iLocal_2916[iVar0]))
		{
			if (!unk_0x1D403DFADBC2DE3C(iLocal_2916[iVar0], 0))
			{
				unk_0xD434A01DEA38A939(iLocal_2916[iVar0], 1, 0);
			}
			if (unk_0xE59B7F5A03335350(iLocal_2916[iVar0], 0))
			{
				if (unk_0xB34E411B0A4BF096(iLocal_2916[iVar0]))
				{
					unk_0xD87F0F9CDF39238A(iLocal_2916[iVar0]);
				}
			}
			func_199(iLocal_2916[iVar0]);
			func_198(iLocal_2916[iVar0]);
		}
		iLocal_1470[iVar0] = 0;
		iLocal_1646[iVar0] = 0;
		if (!bLocal_87 && !bLocal_100)
		{
			if (iLocal_1294[iVar0] > 0)
			{
				unk_0x4F5DAC981AF98536(iLocal_1294[iVar0], &cLocal_2668);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 175)
	{
		if (!iLocal_2685[iVar0] == 0)
		{
			unk_0x2CA123B0622F495C(iLocal_2685[iVar0]);
		}
		iVar0++;
	}
	iLocal_1950 = 0;
	iLocal_1946 = 0;
}

int func_202()
{
	return joaat("s_m_y_cop_01");
}

int func_203()
{
	return joaat("police");
}

int func_204()
{
	return joaat("sultan");
}

int func_205()
{
	if (iLocal_2913 == 0)
	{
		return joaat("a_m_y_business_01");
	}
	return iLocal_2913;
}

void func_206()
{
	unk_0xF7D229BABED096C4();
	unk_0x2525D113E78EFBAA(-1);
	unk_0x35FE2210421A8E6E(1);
	unk_0x0631F3E6D895E7E5(1);
	unk_0x598D851D7D0D2BA3(1f);
	unk_0xA7F63A62AD048372(3);
	unk_0x1A8FF13FA68ECF72(3);
}

void func_207(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x7AF0088ABFA713B6())
	{
		if (unk_0xFA30DFD0084E92FE(Global_2519572.f_4576, 26))
		{
			return;
		}
	}
	if (unk_0xBFFAD293E2DA992B())
	{
		unk_0xF04F2EB4128A4367(iParam2);
		unk_0x1A058EB0D1ACEC78("FocusIn");
		unk_0xC1300D0F3A74E20B("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x9216004FAC08D1DC("FocusOut", 0, 0);
			unk_0xC4BA30B532FE260F(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x4AED68BFACFB14CB(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xEAEFBBEC1AEA464B(sVar0))
	{
		if (!unk_0x7AF0088ABFA713B6())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xEAEFBBEC1AEA464B(uParam0->f_3))
	{
		if (func_208(uParam0->f_3))
		{
			unk_0x7456702622C62EA0(1);
		}
	}
	if (!unk_0xEAEFBBEC1AEA464B(sVar0))
	{
		if (func_208(sVar0))
		{
			unk_0x7456702622C62EA0(1);
		}
	}
}

bool func_208(char* sParam0)
{
	unk_0xF07D20149ECBC61E(sParam0);
	return unk_0xA66DBDA0A072514A(0);
}

void func_209()
{
	Global_14666 = 0;
	func_210();
}

void func_210()
{
	unk_0x5C7DC611411E2CF9();
	Global_16811 = 0;
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(0);
		Global_15800 = 6;
	}
}

void func_211()
{
	Global_14666 = 0;
	func_212();
}

void func_212()
{
	unk_0x5C7DC611411E2CF9();
	Global_16811 = 0;
	if ((unk_0x58E7DDFF8D17A82A() || Global_14493.f_1 == 9) || Global_14492 == 1)
	{
		unk_0x1E08809A5041F85B(0);
		Global_15800 = 6;
		Global_14493.f_1 = 3;
		return;
	}
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(1);
		Global_15800 = 6;
		return;
	}
}

void func_213()
{
	if (unk_0x2DA8CA50A72528FB(uLocal_3285))
	{
		unk_0x07B8ECB35A4ED3AC(&uLocal_3285);
	}
	if (unk_0x2DA8CA50A72528FB(uLocal_3286))
	{
		unk_0x07B8ECB35A4ED3AC(&uLocal_3286);
	}
	if (unk_0x2DA8CA50A72528FB(uLocal_3287))
	{
		unk_0x07B8ECB35A4ED3AC(&uLocal_3287);
	}
	if (unk_0x2DA8CA50A72528FB(uLocal_3288))
	{
		unk_0x07B8ECB35A4ED3AC(&uLocal_3288);
	}
}

void func_214()
{
	if (iLocal_3570 == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_3228))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_3228))
			{
				if (unk_0xD9C1758D86688CEA(iLocal_3228, unk_0xBC25C936A095B5BA(), 0))
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
			if (unk_0x724D816EA203A79E(iLocal_3228))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_3228))
				{
					if (unk_0x724D816EA203A79E(iLocal_3222))
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_3222))
						{
							if (unk_0x4FB6F74D29923289(iLocal_3222))
							{
								if (unk_0x1B2D2A4BABD674C5(iLocal_3222) > 18)
								{
									if (unk_0x724D816EA203A79E(iLocal_3284))
									{
										if (unk_0xE7E55F7532DEE345(iLocal_3284))
										{
											unk_0x17175087F2DB6AC8(iLocal_3284, 1, 1);
										}
									}
									uLocal_3210 = unk_0xD0D858E538FD01C3(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
									unk_0xB62398E536F695FC(iLocal_3228, uLocal_3210, "misssolomon_3", "_action", 1000f, -1000f, 4, 0, 1148846080, 0);
									unk_0x56F2E1B5599188FA(iLocal_3228, unk_0xBC25C936A095B5BA(), 9000, 1024, 3);
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
			if (unk_0x724D816EA203A79E(iLocal_3228))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_3228))
				{
					if (unk_0x77FC50899603581D(uLocal_3210))
					{
						if (!iLocal_3535)
						{
							if (unk_0x8FD30584EB38411B(uLocal_3210) > 0.25f)
							{
								func_17(&uLocal_3578, 4, iLocal_3228, "HangerWorker", 0, 1);
								func_215(iLocal_3228, "T1M4_BCAA", "HangerWorker", 11);
								iLocal_3535 = 1;
							}
						}
						if (unk_0x8FD30584EB38411B(uLocal_3210) > 0.99f)
						{
							uLocal_3210 = unk_0xD0D858E538FD01C3(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
							unk_0xB62398E536F695FC(iLocal_3228, uLocal_3210, "misssolomon_3", "_react_to_death", 1000f, -1.5f, 3, 16, 1148846080, 0);
							iLocal_3536 = 1;
						}
					}
				}
			}
		}
		if (iLocal_3536 == 1 && iLocal_3539 == 0)
		{
			if (unk_0x724D816EA203A79E(iLocal_3228))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_3228))
				{
					if (unk_0x77FC50899603581D(uLocal_3210))
					{
						if (unk_0x619CCA1A6FD0BC87(iLocal_3228, unk_0x56BEECB328B6D29D("ENDS_IN_RUN")))
						{
							unk_0xC5A6DFE2B8987B17(&uLocal_3292);
							unk_0x03A13CB10449EA1B(0, joaat("MotionState_Sprint"), 0);
							unk_0xDF14F570C0180463(0, -1001.9f, -2954.3f, 13.1f, 3f, -1, 40000f, 3f);
							unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 200f, -1, 0, 0);
							unk_0x535008C596714F9E(uLocal_3292);
							unk_0xA8E6405305C0D7DF(iLocal_3228, uLocal_3292);
							unk_0x02DAF06EA4F08219(&uLocal_3292);
							unk_0x3E2B7D349B5735D3(iLocal_3228, joaat("MotionState_Sprint"), 0, 0, 0);
							iLocal_3539 = 1;
						}
					}
				}
			}
		}
	}
	else if (iLocal_3539 == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_3228))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_3228))
			{
				unk_0xC5A6DFE2B8987B17(&uLocal_3292);
				unk_0xDF14F570C0180463(0, -1001.9f, -2954.3f, 13.1f, 3f, -1, 40000f, 3f);
				unk_0x5558ED6D4A2DEC93(0, unk_0xBC25C936A095B5BA(), 200f, -1, 0, 0);
				unk_0x535008C596714F9E(uLocal_3292);
				unk_0xA8E6405305C0D7DF(iLocal_3228, uLocal_3292);
				unk_0x02DAF06EA4F08219(&uLocal_3292);
				iLocal_3539 = 1;
			}
		}
	}
}

void func_215(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x7E80A36CD8BDF4D1(iParam0, sParam1, sParam2, func_15(iParam3), 0);
}

void func_216()
{
	if (iLocal_3181 == 0)
	{
		iLocal_3183 = 0;
		iLocal_3211 = unk_0x2F079D1FC5F6CB99();
		unk_0x04DD7A558FCF2C34("TRV_4_MCS_2", 8);
		unk_0xF243B7A14FCFD0F4(joaat("prop_jet_bloodsplat_01"));
		if (unk_0x1E8349F219AC5AF9("Trev4_5"))
		{
			unk_0xC881DDFA077826BB("Trev4_5", 0, 0.5f, 1f);
		}
		if (!unk_0x726D9204B160D23E())
		{
			unk_0x829FA4611BD56B44(800);
		}
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1)
	{
		switch (iLocal_3183)
		{
			case 0:
				while (!unk_0xDC9E16E99286F31D())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
				if (!unk_0x36CEFBE9B745A58D(iLocal_3222))
				{
					unk_0x538BB037E00A3AD9(iLocal_3222, "Molly", 1, joaat("ig_molly"), 0);
				}
				if (!unk_0x36CEFBE9B745A58D(iLocal_3228))
				{
					unk_0x538BB037E00A3AD9(iLocal_3228, "Airworker_Tackle_trevor", 0, joaat("s_m_y_airworker"), 0);
				}
				if (unk_0xE59B7F5A03335350(iLocal_3266, 0))
				{
					unk_0x538BB037E00A3AD9(iLocal_3266, "JET_TRV4", 0, joaat("jet"), 0);
				}
				func_217(1, 1, 1, 0, 0);
				unk_0x3857DADBD6EC8A54("TRV4_SUCK_CS");
				unk_0x93B1CB6BD50812C7(0);
				iLocal_3183++;
				break;
			
			case 1:
				func_122();
				if (unk_0x3F3252765FE36DA8("JET_TRV4", joaat("jet")))
				{
					if (unk_0xE59B7F5A03335350(iLocal_3266, 0))
					{
						if (!unk_0x1D403DFADBC2DE3C(iLocal_3266, 0))
						{
							unk_0x346478B12F69D4E3(iLocal_3266, 1);
						}
					}
				}
				if (unk_0x3F3252765FE36DA8("Airworker_Tackle_trevor", joaat("s_m_y_airworker")))
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_3228))
					{
						unk_0x2E35C4FA5F0ED22F(iLocal_3228, 1);
						unk_0x5558ED6D4A2DEC93(iLocal_3228, unk_0xBC25C936A095B5BA(), 150f, -1, 0, 0);
						unk_0x1E5C2A1EAB944289(iLocal_3228, 0);
						unk_0xB105531EDD3DE51B(iLocal_3228, 1);
						unk_0x06D93FD5E4D394CF(iLocal_3228, 0, 0, 0, 0, 0, 0, 0, 0);
					}
				}
				if (unk_0x3F3252765FE36DA8("Michael", 0))
				{
					func_122();
					func_120(1);
				}
				if (!unk_0x102F1A3BD4B68933())
				{
					iLocal_3338 = 1;
					if (!unk_0x724D816EA203A79E(iLocal_3282))
					{
						if (unk_0xD6513D668481290A(joaat("prop_jet_bloodsplat_01")))
						{
							iLocal_3282 = unk_0xB6896943DA475493(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, 1, 1, 0);
							unk_0x784C605D172817C8(iLocal_3282, 0f, 0f, -121.5948f, 2, 1);
							unk_0xC239B590ECA50DD0(iLocal_3282, 0f, 0f, 0.8729f, -0.4879f);
							unk_0x2CA123B0622F495C(joaat("prop_jet_bloodsplat_01"));
						}
					}
					unk_0xD5E53AA0828339DA(0);
					func_217(0, 1, 1, 0, 0);
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
					if (!unk_0x7B2E29350659BE8E(unk_0xBC25C936A095B5BA(), 0, 2))
					{
						unk_0x7A535CE1F001F3FE(unk_0xBC25C936A095B5BA(), joaat("weapon_smg"), 150, 1, 1);
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

void func_217(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam0)
	{
		unk_0x0D2E9062E966BE4F(unk_0xB5CEFD608600A09F());
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 1);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 1);
		func_225(1);
		unk_0x32FF237D69EB5489();
		unk_0x3169E2C5E6A096BC();
		if (Global_14493.f_1 > 3)
		{
			if (unk_0x58E7DDFF8D17A82A())
			{
				unk_0x1E08809A5041F85B(0);
			}
			if (!func_224())
			{
				Global_14493.f_1 = 3;
			}
			Global_15800 = 5;
		}
		func_223(1, iParam3, iParam2, 0);
		Global_55973 = 1;
		Global_68283 = 1;
		Global_70976 = 1;
	}
	else
	{
		func_225(0);
		unk_0xCB50D125C355ED9C();
		Global_55973 = 0;
		if (bParam1)
		{
			unk_0x7FF4F08CAB3344B1();
		}
		unk_0x8D554ED10E00EEE3(unk_0xB5CEFD608600A09F(), 0);
		unk_0xDE255B32C6B37E90(unk_0xB5CEFD608600A09F(), 0);
		func_223(0, iParam3, iParam2, 0);
		if (unk_0x7AF0088ABFA713B6())
		{
			if ((((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_221(unk_0xB5CEFD608600A09F())) && !func_219(unk_0xB5CEFD608600A09F(), 0)) && !func_218()) && !bParam4)
			{
				unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), 0);
			}
		}
		else if ((!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()) && !func_221(unk_0xB5CEFD608600A09F())) && !bParam4)
		{
			unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), 0);
		}
		Global_70976 = 0;
	}
}

bool func_218()
{
	return unk_0xFA30DFD0084E92FE(Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_39.f_18, 14);
}

bool func_219(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_220(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589291[iParam0 /*770*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x96B1061E8F3CBC9A(iParam0))
		{
			bVar0 = unk_0x343CB262BF0CDF5A(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_220(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_52();
	}
	if (Global_1312834[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_221(int iParam0)
{
	if (func_219(iParam0, 0))
	{
		return 1;
	}
	if (func_222())
	{
		if (iParam0 == unk_0xB5CEFD608600A09F())
		{
			return 1;
		}
	}
	if (unk_0xFA30DFD0084E92FE(Global_2423644[iParam0 /*406*/].f_191, 2))
	{
		return 1;
	}
	return 0;
}

bool func_222()
{
	return unk_0xFA30DFD0084E92FE(Global_2359302, 3);
}

int func_223(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x8ACB0C3FACC09467())
	{
		if (unk_0xB34A6828EBD4A1D8() != iParam0 && iParam2)
		{
			unk_0x22506029183A78EC(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_224()
{
	if (Global_14493.f_1 == 1 || Global_14493.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_225(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&Global_2363, 13);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_2363, 13);
	}
}

void func_226()
{
	if (iLocal_3511 == 0)
	{
		if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -926.0258f, -2958.615f, 12.46467f, -930.6525f, -2956.061f, 16.45945f, 2.75f, 0, 1, 0))
		{
			iLocal_3511 = 1;
		}
	}
	else if (iLocal_3515 == 0)
	{
		unk_0xBBC4195AD74D153D(0, 22, 1);
		unk_0xBBC4195AD74D153D(0, 25, 1);
		if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -938.5178f, -2972.022f, 12.46715f, -934.1034f, -2974.613f, 15.96715f, 5.25f, 0, 1, 0))
		{
			unk_0xDBA0F5674ACCE43C(unk_0xBC25C936A095B5BA(), 0f);
		}
		else
		{
			if (fLocal_3326 < 1f)
			{
				fLocal_3326 = 1f;
			}
			fLocal_3326 = (fLocal_3326 * 0.975f);
			unk_0xDBA0F5674ACCE43C(unk_0xBC25C936A095B5BA(), fLocal_3326);
		}
	}
	if (iLocal_3181 > 0)
	{
		func_214();
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
		unk_0xF243B7A14FCFD0F4(joaat("prop_jet_bloodsplat_01"));
		unk_0x394EE83EEDDF9A95("V_60_HangerRm");
		unk_0xAEC867D0DBB7AFEB(5);
		unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 3, 0);
		unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
		if (unk_0x724D816EA203A79E(iLocal_3222))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_3222))
			{
				if (unk_0x4FB6F74D29923289(iLocal_3222))
				{
					unk_0x1E13970C5D4719E3(iLocal_3222, 3f, 1);
				}
			}
		}
		if (!unk_0x726D9204B160D23E())
		{
			unk_0x829FA4611BD56B44(800);
		}
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1)
	{
		if (iLocal_3479 == 0)
		{
			if (unk_0x284F2ACE6839D3C0("Trv_4_747", 0, -1))
			{
				iLocal_3479 = 1;
			}
		}
		if (iLocal_3471 == 0)
		{
			if (unk_0x724D816EA203A79E(iLocal_3222))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_3222))
				{
					if (unk_0x4FB6F74D29923289(iLocal_3222))
					{
						if (unk_0x1B2D2A4BABD674C5(iLocal_3222) > 20)
						{
							if (unk_0x724D816EA203A79E(iLocal_3266))
							{
								if (unk_0xE59B7F5A03335350(iLocal_3266, 0))
								{
									func_231(&iLocal_3266);
									unk_0x10B5C0C7337B8420(iLocal_3211, "Trevor_4_747_Jet_Engine", -937.77f, -2981.36f, 15.44f, 0, 0, 0, 0);
									unk_0x2D655AA68FA1736B(iLocal_3266, 1, 0, 0);
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
			if (unk_0x724D816EA203A79E(iLocal_3222))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_3222))
				{
					if (unk_0x4FB6F74D29923289(iLocal_3222))
					{
						if (unk_0x1B2D2A4BABD674C5(iLocal_3222) > 23)
						{
							unk_0xA4E856A8CD53B8DF(iLocal_3222);
							if (unk_0x724D816EA203A79E(iLocal_3266))
							{
								if (unk_0xE59B7F5A03335350(iLocal_3266, 0))
								{
									if (!unk_0x144E80F5C46A6B75("SOL_3_ENGINE_DEATH_SCENE"))
									{
										unk_0xD6423910AAD8A379("SOL_3_ENGINE_DEATH_SCENE");
									}
									uLocal_3209 = unk_0xD0D858E538FD01C3(0f, 0f, 0f, 0f, 0f, 0f, 2);
									unk_0x510CBEAEC917268A(uLocal_3209, iLocal_3266, unk_0xB5B60A04E1654409(iLocal_3266, "chassis_Control"));
									unk_0xB62398E536F695FC(iLocal_3222, uLocal_3209, "MISSSOLOMON_3", "molly_death", 1.5f, -8f, 4, 0, 1148846080, 0);
									unk_0x69D4A898629B0BDA(uLocal_3209, 1);
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
			if (unk_0x724D816EA203A79E(iLocal_3222))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_3222))
				{
					if (iLocal_3512 == 1)
					{
						Local_3318 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
						if (Local_3318.f_1 < -2965f)
						{
							unk_0x1DE00CFB4CAEB978(iLocal_3222, 0f, 0f, 0f, 1, 6000, 1000, 2000, 0);
							unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
							unk_0x85DB484A637CEAB9(unk_0xBC25C936A095B5BA(), iLocal_3222, 0);
							unk_0x56F2E1B5599188FA(unk_0xBC25C936A095B5BA(), iLocal_3222, 4000, 48, 4);
							iLocal_3513 = 1;
						}
					}
				}
			}
		}
		else if (iLocal_3514 == 0)
		{
			if (!unk_0x724D816EA203A79E(iLocal_3222))
			{
				unk_0xF04F2EB4128A4367(0);
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
				if (unk_0x724D816EA203A79E(iLocal_3233[0]))
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_3233[0]))
					{
						unk_0xA4E856A8CD53B8DF(iLocal_3233[0]);
						unk_0x2E35C4FA5F0ED22F(iLocal_3233[0], 0);
					}
				}
				iLocal_3514 = 1;
			}
		}
		if (iLocal_3473 == 0)
		{
			if (unk_0x724D816EA203A79E(iLocal_3222))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_3222))
				{
					if (unk_0x724D816EA203A79E(iLocal_3283))
					{
						if (unk_0xB6A16B5E7EB81F9B(iLocal_3283, iLocal_3222))
						{
							if (unk_0x96044E39418AAF17(iLocal_3222, "MISSSOLOMON_3", "molly_death", 3))
							{
								if (unk_0x8FD30584EB38411B(uLocal_3209) > 0.59f)
								{
									unk_0x17175087F2DB6AC8(iLocal_3283, 1, 1);
									if (unk_0x2DA8CA50A72528FB(uLocal_3285))
									{
										unk_0x07B8ECB35A4ED3AC(&uLocal_3285);
									}
									if (!unk_0x2DA8CA50A72528FB(uLocal_3288))
									{
										func_215(iLocal_3222, "HIGH_FALL", "WAVELOAD_PAIN_FEMALE", 11);
										if (unk_0x144E80F5C46A6B75("SOL_3_ON_FOOT_CHASE"))
										{
											unk_0xC1300D0F3A74E20B("SOL_3_ON_FOOT_CHASE");
										}
										if (!unk_0x144E80F5C46A6B75("SOL_3_LOSE_COPS"))
										{
											unk_0xD6423910AAD8A379("SOL_3_LOSE_COPS");
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
				uLocal_3288 = func_228(iLocal_3283);
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
					unk_0x1D1C393C7689E5A6(10f, 2f, 3);
					iLocal_3571[3] = 1;
				}
			}
		}
		if (iLocal_3472 == 0)
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_3222))
			{
				if (unk_0x96044E39418AAF17(iLocal_3222, "MISSSOLOMON_3", "molly_death", 3))
				{
					if (unk_0x8FD30584EB38411B(uLocal_3209) > 0.89f)
					{
						if (unk_0x724D816EA203A79E(iLocal_3266))
						{
							if (unk_0xE59B7F5A03335350(iLocal_3266, 0))
							{
								unk_0xF845620A03C7425B(&iLocal_3222);
								unk_0xF3E9344C2BE59F6E("scr_trev4_747_blood_impact", iLocal_3266, -12.5793f, 12.2f, -7.09421f, 0f, 0f, 0f, 1f, 0, 0, 0);
								uLocal_3764 = unk_0xD0F8470A5BFEECF7("scr_trev4_747_exhaust_plane_misfire", iLocal_3266, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, 0, 0, 0);
								unk_0x10B5C0C7337B8420(iLocal_3212, "Trevor_4_747_Man_Sucked_In", -938.6f, -2984.13f, 15.47f, 0, 0, 0, 0);
								iLocal_3192 = unk_0x105601648511CC64();
								iLocal_3472 = 1;
							}
						}
					}
				}
			}
		}
		else
		{
			if (unk_0x105601648511CC64() > iLocal_3192 + 574)
			{
				if (!unk_0x724D816EA203A79E(iLocal_3282))
				{
					if (unk_0xD6513D668481290A(joaat("prop_jet_bloodsplat_01")))
					{
						iLocal_3282 = unk_0xB6896943DA475493(joaat("prop_jet_bloodsplat_01"), -946.4231f, -2979.826f, 12.9264f, 1, 1, 0);
						unk_0x784C605D172817C8(iLocal_3282, 0f, 0f, -121.5948f, 2, 1);
						unk_0xC239B590ECA50DD0(iLocal_3282, 0f, 0f, 0.8729f, -0.4879f);
						unk_0x2CA123B0622F495C(joaat("prop_jet_bloodsplat_01"));
					}
				}
				if (iLocal_3568 == 0)
				{
					if (unk_0x724D816EA203A79E(iLocal_3266))
					{
						if (unk_0xE59B7F5A03335350(iLocal_3266, 0))
						{
							unk_0xF3E9344C2BE59F6E("scr_trev4_747_engine_debris", iLocal_3266, -12.6286f, 6.85353f, -7.13622f, 180f, 0f, 0f, 1f, 0, 0, 0);
							unk_0x2D655AA68FA1736B(iLocal_3266, 0, 0, 0);
							func_227();
							unk_0x38FF8CB6377D36F6(iLocal_3211);
							iLocal_3568 = 1;
						}
					}
				}
			}
			if (iLocal_3516[0] == 0)
			{
				if (unk_0x105601648511CC64() > iLocal_3192 + 300)
				{
					if (unk_0x2F1B39E315395385(uLocal_3764))
					{
						unk_0x2CA8D9DC16C6AF09(uLocal_3764, 0);
					}
					iLocal_3516[0] = 1;
				}
			}
			else if (iLocal_3520[0] == 0)
			{
				if (unk_0x105601648511CC64() > iLocal_3192 + 700)
				{
					if (unk_0x724D816EA203A79E(iLocal_3266))
					{
						if (unk_0xE59B7F5A03335350(iLocal_3266, 0))
						{
							uLocal_3764 = unk_0xD0F8470A5BFEECF7("scr_trev4_747_exhaust_plane_misfire", iLocal_3266, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, 0, 0, 0);
							iLocal_3520[0] = 1;
						}
					}
				}
			}
			else if (iLocal_3516[1] == 0)
			{
				if (unk_0x105601648511CC64() > iLocal_3192 + 1000)
				{
					if (unk_0x2F1B39E315395385(uLocal_3764))
					{
						unk_0x2CA8D9DC16C6AF09(uLocal_3764, 0);
					}
					iLocal_3516[1] = 1;
				}
			}
			else if (iLocal_3520[1] == 0)
			{
				if (unk_0x105601648511CC64() > iLocal_3192 + 1400)
				{
					if (unk_0x724D816EA203A79E(iLocal_3266))
					{
						if (unk_0xE59B7F5A03335350(iLocal_3266, 0))
						{
							uLocal_3764 = unk_0xD0F8470A5BFEECF7("scr_trev4_747_exhaust_plane_misfire", iLocal_3266, -12.6323f, 8.1153f, -7.0876f, 0f, 0f, 0f, 1f, 0, 0, 0);
							uLocal_3763 = unk_0xD0F8470A5BFEECF7("scr_trev4_747_engine_damage", iLocal_3266, -11.956f, 10.528f, -7.657f, 0f, 2f, 0f, 1065353216, 0, 0, 0);
							iLocal_3520[1] = 1;
						}
					}
				}
			}
			else if (iLocal_3516[2] == 0)
			{
				if (unk_0x105601648511CC64() > iLocal_3192 + 3500)
				{
					if (unk_0x2F1B39E315395385(uLocal_3764))
					{
						unk_0x2CA8D9DC16C6AF09(uLocal_3764, 0);
					}
					if (unk_0x724D816EA203A79E(iLocal_3266))
					{
						if (unk_0xE59B7F5A03335350(iLocal_3266, 0))
						{
							unk_0x06D93FD5E4D394CF(iLocal_3266, 0, 0, 0, 0, 0, 0, 0, 0);
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
					if (!unk_0x2A348A3A98B80B13(iLocal_3283))
					{
						iLocal_3202 = unk_0x105601648511CC64();
						iLocal_3538 = 1;
					}
				}
				else if (unk_0x105601648511CC64() > iLocal_3202 + 2000)
				{
					unk_0x346478B12F69D4E3(iLocal_3283, 1);
					iLocal_3537 = 1;
				}
			}
		}
		if (iLocal_3542 == 0)
		{
			if (!unk_0x724D816EA203A79E(iLocal_3222))
			{
				if (unk_0x724D816EA203A79E(iLocal_3266))
				{
					unk_0x346478B12F69D4E3(iLocal_3266, 0);
					iLocal_3542 = 1;
				}
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_3283))
		{
			if (unk_0x2DA8CA50A72528FB(uLocal_3288))
			{
				if (func_16(unk_0xBC25C936A095B5BA(), iLocal_3283, 1) < 1.5f && !unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					unk_0xC4BA30B532FE260F(-1, "PICK_UP", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					unk_0x07B8ECB35A4ED3AC(&uLocal_3288);
					unk_0xA35241BCE4C1A24B(&iLocal_3283);
					func_122();
					iLocal_3181 = 0;
					iLocal_3180 = 8;
				}
			}
		}
	}
}

void func_227()
{
	if (unk_0x2F1B39E315395385(uLocal_3759))
	{
		unk_0x2CA8D9DC16C6AF09(uLocal_3759, 0);
	}
	if (unk_0x2F1B39E315395385(uLocal_3760))
	{
		unk_0x2CA8D9DC16C6AF09(uLocal_3760, 0);
	}
	if (unk_0x2F1B39E315395385(uLocal_3761))
	{
		unk_0x2CA8D9DC16C6AF09(uLocal_3761, 0);
	}
	if (unk_0x2F1B39E315395385(uLocal_3762))
	{
		unk_0x2CA8D9DC16C6AF09(uLocal_3762, 0);
	}
}

int func_228(int iParam0)
{
	return func_229(iParam0, 1, 0);
}

int func_229(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x511FE22BCF5353CD(iParam0);
	if (unk_0xD27AC0E9B78CFDD7(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(uVar0, func_230(unk_0x7AF0088ABFA713B6(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xF9C2945DB5BAB4BF(uVar0, iParam1);
		}
		else
		{
			unk_0x0D5352939CC40C16(uVar0, 2);
		}
	}
	else if (unk_0x386592AF38881675(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(uVar0, func_230(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
		unk_0xF9C2945DB5BAB4BF(uVar0, iParam1);
	}
	else if (unk_0xB12D030810E8447D(iParam0))
	{
		unk_0x3F5F1772D71D5EC4(uVar0, func_230(unk_0x7AF0088ABFA713B6(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_230(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_231(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	if (!unk_0x1D403DFADBC2DE3C(*iParam0, 0))
	{
		Var0 = { 22.6057f, -2.10018f, -6.22841f };
		Var3 = { 12.6349f, 7.89711f, -7.09742f };
		Var6 = { -22.5879f, -2.2931f, -6.22542f };
		Var9 = { -12.6675f, 8.15519f, -6.98833f };
		Var12 = { 180f, 0f, 0f };
		uLocal_3759 = unk_0xD0F8470A5BFEECF7("scr_trev4_747_engine_heathaze", *iParam0, Var0, Var12, 1065353216, 0, 0, 0);
		uLocal_3760 = unk_0xD0F8470A5BFEECF7("scr_trev4_747_engine_heathaze", *iParam0, Var3, Var12, 1065353216, 0, 0, 0);
		uLocal_3761 = unk_0xD0F8470A5BFEECF7("scr_trev4_747_engine_heathaze", *iParam0, Var6, Var12, 1065353216, 0, 0, 0);
		uLocal_3762 = unk_0xD0F8470A5BFEECF7("scr_trev4_747_engine_heathaze", *iParam0, Var9, Var12, 1065353216, 0, 0, 0);
	}
}

void func_232()
{
	if (unk_0x724D816EA203A79E(iLocal_3222))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_3222))
		{
			if (unk_0x4FB6F74D29923289(iLocal_3222))
			{
				if (func_16(unk_0xBC25C936A095B5BA(), iLocal_3222, 1) < 17f)
				{
					unk_0x1E13970C5D4719E3(iLocal_3222, 3f, 1);
				}
				if (func_16(unk_0xBC25C936A095B5BA(), iLocal_3222, 1) < 22f && func_16(unk_0xBC25C936A095B5BA(), iLocal_3222, 1) > 17f)
				{
					unk_0x1E13970C5D4719E3(iLocal_3222, 2f, 1);
				}
				if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), -921.7f, -2946.4f, 13.4f, 1) > 8f && !unk_0xD1DC4B08247A4317(iLocal_3222))
				{
					if (func_16(unk_0xBC25C936A095B5BA(), iLocal_3222, 1) > 22f)
					{
						unk_0x1E13970C5D4719E3(iLocal_3222, 1f, 1);
					}
				}
				else if (func_16(unk_0xBC25C936A095B5BA(), iLocal_3222, 1) > 22f)
				{
					unk_0x1E13970C5D4719E3(iLocal_3222, 2f, 1);
				}
			}
		}
	}
	if (iLocal_3181 > 0)
	{
		if (iLocal_3511 == 0)
		{
			if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -926.0258f, -2958.615f, 12.46467f, -930.6525f, -2956.061f, 16.45945f, 2.75f, 0, 1, 0))
			{
				iLocal_3511 = 1;
			}
		}
		else
		{
			unk_0xBBC4195AD74D153D(0, 22, 1);
			unk_0xBBC4195AD74D153D(0, 25, 1);
			if (fLocal_3326 < 1f)
			{
				fLocal_3326 = 1f;
			}
			fLocal_3326 = (fLocal_3326 * 0.98f);
			unk_0xDBA0F5674ACCE43C(unk_0xBC25C936A095B5BA(), fLocal_3326);
		}
		if (!unk_0x724D816EA203A79E(iLocal_3266))
		{
			unk_0xF243B7A14FCFD0F4(joaat("jet"));
			if (unk_0xD6513D668481290A(joaat("jet")))
			{
				iLocal_3266 = unk_0x61C05BF08A1E0EFE(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 1, 1, 0);
				unk_0x7170EF3CEB4D0224(iLocal_3266, 2);
				unk_0x8300C56586249382(iLocal_3266, 0);
				unk_0x346478B12F69D4E3(iLocal_3266, 1);
				unk_0x06D93FD5E4D394CF(iLocal_3266, 1, 1, 1, 1, 1, 0, 0, 0);
				unk_0x2CA123B0622F495C(joaat("jet"));
				unk_0xAF9FC4463EA3090B(iLocal_3266, 500);
			}
		}
		if (!unk_0x724D816EA203A79E(iLocal_3228))
		{
			unk_0xF243B7A14FCFD0F4(joaat("s_m_y_airworker"));
			unk_0x522053D86D6E1C7A("misssolomon_3");
			unk_0xF243B7A14FCFD0F4(joaat("p_amb_clipboard_01"));
			if ((unk_0xD6513D668481290A(joaat("s_m_y_airworker")) && unk_0xF9E082857622D91E("misssolomon_3")) && unk_0xD6513D668481290A(joaat("p_amb_clipboard_01")))
			{
				iLocal_3228 = unk_0x01B3635C3E8EDD81(26, joaat("s_m_y_airworker"), -932.1812f, -2967.947f, 12.9451f, 170.7182f, 1, 1);
				unk_0x06D93FD5E4D394CF(iLocal_3228, 0, 0, 0, 0, 0, 0, 0, 0);
				unk_0xB105531EDD3DE51B(iLocal_3228, 0);
				unk_0x2E35C4FA5F0ED22F(iLocal_3228, 1);
				func_17(&uLocal_3578, 4, iLocal_3228, "HangerWorker", 0, 1);
				iLocal_3284 = unk_0xB6896943DA475493(joaat("p_amb_clipboard_01"), -932.1812f, -2967.947f, 12.9451f, 1, 1, 0);
				unk_0x5DBE04849460E608(iLocal_3284, iLocal_3228, unk_0xFA18E720A39243D0(iLocal_3222, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				uLocal_3210 = unk_0xD0D858E538FD01C3(-932.847f, -2978.498f, 13.946f, 0f, 0f, 16.56f, 2);
				unk_0xB62398E536F695FC(iLocal_3228, uLocal_3210, "misssolomon_3", "_start_loop", 1000f, -8f, 68, 0, 1148846080, 0);
				unk_0x2CA123B0622F495C(joaat("s_m_y_airworker"));
				unk_0x2CA123B0622F495C(joaat("p_amb_clipboard_01"));
			}
		}
		if (!unk_0x724D816EA203A79E(iLocal_3233[0]))
		{
			unk_0xF243B7A14FCFD0F4(joaat("s_m_y_cop_01"));
			if (unk_0xD6513D668481290A(joaat("s_m_y_cop_01")))
			{
				iLocal_3233[0] = unk_0x01B3635C3E8EDD81(6, joaat("s_m_y_cop_01"), -969.06f, -2955.186f, 12.945f, 241.1703f, 1, 1);
				unk_0x7A535CE1F001F3FE(iLocal_3233[0], joaat("weapon_pistol"), 1000, 1, 1);
				unk_0xFC3C88E2313FA926(iLocal_3233[0], 20);
				unk_0xB71D41C0310C93DE(iLocal_3233[0], 1, 1);
				unk_0x2E35C4FA5F0ED22F(iLocal_3233[0], 1);
				unk_0x57D65255D3D3B6A7(iLocal_3233[0], unk_0xBC25C936A095B5BA(), -1, 1);
				func_124(iLocal_3233[0], 0);
			}
		}
		if (!unk_0x724D816EA203A79E(iLocal_3267))
		{
			unk_0xF243B7A14FCFD0F4(joaat("shamal"));
			if (unk_0xD6513D668481290A(joaat("shamal")))
			{
				iLocal_3267 = unk_0x61C05BF08A1E0EFE(joaat("shamal"), -968.3718f, -2952.298f, 12.9451f, 114.9439f, 1, 1, 0);
				unk_0x1C5BDB4E5D257D63(iLocal_3267, 0, 0, 1);
				unk_0xF0A40F19AAB79E88(iLocal_3267, 1084227584);
				unk_0x2CA123B0622F495C(joaat("shamal"));
				unk_0x65E471E4A2D56226(iLocal_3267, 2000, 0);
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_3267))
		{
			if (unk_0xE59B7F5A03335350(iLocal_3267, 0))
			{
				if (func_16(unk_0xBC25C936A095B5BA(), iLocal_3267, 1) > 5f)
				{
					unk_0x1C5BDB4E5D257D63(iLocal_3267, 0, 0, 0);
				}
			}
		}
	}
	if (iLocal_3181 == 0)
	{
		func_25(2, "STAGE_ON_FOOT_CHASE", 0, 0, 0, 1);
		if (iLocal_3345 == 1)
		{
			if (!unk_0x17FAADF9916EF741())
			{
				unk_0x7A41D32A383895D8(0);
			}
			func_117();
			func_17(&uLocal_3578, 0, unk_0xBC25C936A095B5BA(), "MICHAEL", 0, 1);
			iLocal_3345 = 0;
		}
		iLocal_3432 = 0;
		iLocal_3433 = 0;
		iLocal_3511 = 0;
		fLocal_3326 = 3f;
		iLocal_3185 = 0;
		func_186(0, 1);
		unk_0x4F5DAC981AF98536(45, "BB_CHASE");
		unk_0x4F5DAC981AF98536(35, "BB_CHASE");
		unk_0x4F5DAC981AF98536(2, "BB_CHASE");
		unk_0x4F5DAC981AF98536(54, "BB_CHASE");
		unk_0x4F5DAC981AF98536(1, "BB_CHASE");
		unk_0x4F5DAC981AF98536(9, "BB_CHASE");
		unk_0x4F5DAC981AF98536(61, "BB_CHASE");
		unk_0x4F5DAC981AF98536(63, "BB_CHASE");
		unk_0x4F5DAC981AF98536(64, "BB_CHASE");
		unk_0xB0B0FE33F4F22679(&uLocal_3293);
		unk_0x786556581D95BCB2("digitalOverlay");
		if (unk_0x724D816EA203A79E(iLocal_3258))
		{
			unk_0x38E412DB4A45B900(iLocal_3258, 0);
			unk_0x1E7A09C1710FB071(&iLocal_3258);
		}
		if (unk_0x724D816EA203A79E(iLocal_3271))
		{
			unk_0xCF6040807CC0E4A5(&iLocal_3271);
		}
		if (unk_0x724D816EA203A79E(iLocal_3254[0]))
		{
			unk_0xF845620A03C7425B(&(iLocal_3254[0]));
		}
		if (unk_0x724D816EA203A79E(iLocal_3260[0]))
		{
			unk_0xCF6040807CC0E4A5(&(iLocal_3260[0]));
		}
		unk_0x439BFE94B7ECD8C0(0);
		unk_0x6C23D8FD3FB29BAA(1);
		if (!unk_0x36CEFBE9B745A58D(iLocal_3222))
		{
			if (!unk_0x2DA8CA50A72528FB(uLocal_3285))
			{
				uLocal_3285 = unk_0x511FE22BCF5353CD(iLocal_3222);
				unk_0xF9C2945DB5BAB4BF(uLocal_3285, 1);
			}
		}
		unk_0x9B90420B04C07704("PoliceScannerDisabled", 1);
		if (iLocal_3365[2] == 1)
		{
			if (!unk_0x1BD5EE88F32433CD(iLocal_3219))
			{
				unk_0x38FF8CB6377D36F6(iLocal_3219);
			}
			unk_0x26D344275839A25E(iLocal_3219);
			iLocal_3397 = 0;
			iLocal_3365[2] = 0;
		}
		unk_0xAEC867D0DBB7AFEB(5);
		unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 3, 0);
		unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
		unk_0x3857DADBD6EC8A54("TRV4_RUN");
		if (!unk_0x724D816EA203A79E(iLocal_3266))
		{
			unk_0xF243B7A14FCFD0F4(joaat("jet"));
		}
		if (!unk_0x724D816EA203A79E(iLocal_3228))
		{
			unk_0xF243B7A14FCFD0F4(joaat("s_m_y_airworker"));
		}
		unk_0xF243B7A14FCFD0F4(joaat("shamal"));
		unk_0xF243B7A14FCFD0F4(joaat("s_m_y_cop_01"));
		unk_0xF243B7A14FCFD0F4(joaat("police3"));
		unk_0xF243B7A14FCFD0F4(joaat("p_amb_clipboard_01"));
		unk_0x1B2A7C8188ADBE04(68, "BB_Chase");
		unk_0x1B2A7C8188ADBE04(69, "BB_Chase");
		unk_0x522053D86D6E1C7A("misssolomon_3");
		unk_0xC1B1E9A034A63A62(0);
		if (unk_0x1E8349F219AC5AF9("Trev4_5"))
		{
			unk_0xC881DDFA077826BB("Trev4_5", 1, 1f, 1f);
		}
		if (unk_0x17FAADF9916EF741())
		{
			if (!func_24())
			{
				unk_0x8B6B50EADA01F251(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1));
			}
			func_21(0, -1, 1);
			func_20("TRV4_CHASE1", 7500, 1);
		}
		if (!unk_0x726D9204B160D23E())
		{
			unk_0x829FA4611BD56B44(800);
		}
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1)
	{
		iLocal_3181 = 2;
	}
	if (iLocal_3181 == 2)
	{
		if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), -880.365f, -2942.26f, 14f, 9.55f, 15.69f, 5f, 0, 1, 0))
		{
			func_233("TRV4_FAIL1");
		}
		if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), -945.725f, -2893.15f, 14f, 4.5f, 9.56f, 5f, 0, 1, 0))
		{
			func_233("TRV4_FAIL1");
		}
		if (unk_0x83666F9FB8FEBD4B() > 15000)
		{
			func_233("TRV4_FAIL1");
		}
		if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), -932.1196f, -2934.317f, 12.9448f, 2f, 2f, 2f, 0, 1, 0))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_3222))
			{
				if (!unk_0x4FB6F74D29923289(iLocal_3222))
				{
					unk_0xB0C1A00D86375366(iLocal_3222, "BB_MOLLY_2", 10, 4, -1);
					unk_0xE896C0AD02364F2A(iLocal_3222, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
				}
			}
			unk_0xC1B1E9A034A63A62(0);
			iLocal_3181 = 3;
		}
	}
	if (iLocal_3181 == 3)
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_3222))
		{
			if (unk_0x4FB6F74D29923289(iLocal_3222))
			{
				if (unk_0x1B2D2A4BABD674C5(iLocal_3222) > 18 && iLocal_3437 == 0)
				{
					iLocal_3352 = 0;
					unk_0x1E13970C5D4719E3(iLocal_3222, 3f, 1);
					iLocal_3181 = 0;
					iLocal_3180 = 6;
				}
			}
		}
		if (unk_0x83666F9FB8FEBD4B() > 50000)
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_3222))
			{
				unk_0x49D46EE47C9CCB66(iLocal_3222);
				unk_0x641B19E156645A92(iLocal_3222, -932.5f, -2964.1f, 13.4f, 1, 0, 0, 1);
				unk_0xB0C1A00D86375366(iLocal_3222, "BB_MOLLY_2", 18, 4, -1);
				unk_0xE896C0AD02364F2A(iLocal_3222, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
				iLocal_3352 = 0;
				iLocal_3181 = 0;
				iLocal_3180 = 6;
			}
		}
	}
}

void func_233(char* sParam0)
{
	if (iLocal_3437 == 0)
	{
		if (iLocal_3336)
		{
			func_223(0, 1, 1, 0);
			unk_0x348665177DBFB93B(uLocal_3289, 0);
			unk_0x062C9995BFD27B2A(false, 0, 3000, 1, 0, 0);
			unk_0x43F06392C4EF25E0(1);
			if (unk_0x144E80F5C46A6B75("SOL_3_CHOPPER_CAM"))
			{
				unk_0xC1300D0F3A74E20B("SOL_3_CHOPPER_CAM");
			}
			unk_0x38FF8CB6377D36F6(iLocal_3219);
			func_243();
			unk_0x6C23D8FD3FB29BAA(1);
			iLocal_3365[2] = 0;
			iLocal_3336 = 0;
		}
		unk_0x3857DADBD6EC8A54("TRV4_FAIL");
		sLocal_3577 = sParam0;
		unk_0xEB233A3B7635D2AC();
		func_211();
		func_209();
		func_234(sLocal_3577);
		iLocal_3437 = 1;
	}
}

void func_234(char* sParam0)
{
	func_242(sParam0);
	func_235(0);
}

void func_235(int iParam0)
{
	int iVar0;
	
	if (Global_105220.f_9056 || func_423(0))
	{
		iVar0 = func_8();
		if (!func_236(iVar0))
		{
			return;
		}
		unk_0xF0059F27F7BB6680(&(Global_83852[iVar0 /*5*/].f_1), 5);
		Global_92991 = iParam0;
	}
}

int func_236(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_241();
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		unk_0x31E433A1F2A666D9(5000);
	}
	iVar0 = Global_83852[iParam0 /*5*/];
	iVar1 = Global_71247.f_109[iVar0 /*4*/];
	func_240(iVar1, 1);
	unk_0xD0D466F17C0F30DB(unk_0xB5CEFD608600A09F());
	unk_0xD50A43D7C495F078(unk_0xB5CEFD608600A09F());
	func_237(&(Global_105220.f_2354.f_539), iVar1);
	if (Global_87275 == Global_92992)
	{
		Global_105220.f_9056.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xFA30DFD0084E92FE(Global_83888[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			unk_0xC63520BF0B3FB162(0);
		}
	}
	Global_105220.f_9056.f_330[iVar1 /*6*/].f_2++;
	Global_87275 = Global_92992;
	if (iParam0 == -1)
	{
		if (Global_105220.f_9056)
		{
		}
		return 0;
	}
	if (unk_0xFA30DFD0084E92FE(Global_83852[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0xFA30DFD0084E92FE(Global_83852[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_237(var uParam0, int iParam1)
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
		iVar1 = Global_105220.f_18504[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xFA30DFD0084E92FE(Global_105220.f_9056.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_239(Global_105220.f_18504[iVar0], &Var2, &fVar5))
			{
				Global_105220.f_18504[iVar0] = 318;
				func_238(&(uParam0->f_2276[iVar0]));
				uParam0->f_2280[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2290[iVar0] = 0f;
				uParam0->f_2294[iVar0] = 0;
				uParam0->f_2298[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2308[iVar0] = 0;
				Global_90490[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_90490[iVar0 /*29*/].f_9 = 0f;
				Global_90490[iVar0 /*29*/].f_12 = 0f;
				Global_90490[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_90490[iVar0 /*29*/].f_10 = 0f;
				Global_90490[iVar0 /*29*/].f_13 = 0f;
				Global_90490[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_90490[iVar0 /*29*/].f_11 = 0f;
				Global_90490[iVar0 /*29*/].f_14 = 0f;
				Global_90490[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_90490[iVar0 /*29*/].f_26 = 0f;
				Global_90490[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_90490[iVar0 /*29*/].f_27 = 0f;
				Global_90490[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_90490[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_238(var uParam0)
{
	*uParam0 = -15;
}

int func_239(int iParam0, var uParam1, float fParam2)
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
			return func_239(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_239(8, uParam1, fParam2);
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

void func_240(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_87085[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_87085[iParam0 /*2*/] = 0;
	}
}

void func_241()
{
	Global_92990 = 1;
	if (unk_0xAC82A41596D67472(unk_0xB5CEFD608600A09F(), 1))
	{
		if (unk_0xF1734B55490E9045(&Global_71210))
		{
			switch (func_104())
			{
				case 0:
					StringCopy(&Global_71210, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_71210, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_71210, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_71214, "", 16);
		}
		Global_92990 = 0;
	}
	else if (!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0xF1734B55490E9045(&Global_71210))
		{
			switch (func_104())
			{
				case 0:
					StringCopy(&Global_71210, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_71210, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_71210, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_71214, "", 16);
		}
		Global_92990 = 0;
		unk_0xF0059F27F7BB6680(&(Global_92955.f_20), 25);
	}
}

void func_242(char* sParam0)
{
	if (!unk_0xF1734B55490E9045(sParam0))
	{
		if (unk_0x5D29F91E567588E2(sParam0) <= 16)
		{
			StringCopy(&Global_71210, sParam0, 16);
			StringCopy(&Global_71214, "", 16);
			if (unk_0xD31A96FC53460BE2())
			{
				unk_0x632B3D2D98BE2D44();
			}
		}
	}
}

void func_243()
{
	Global_55974 = 0;
}

void func_244()
{
	if (!unk_0x724D816EA203A79E(iLocal_3266))
	{
		if (unk_0x724D816EA203A79E(iLocal_3258))
		{
			if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
			{
				if (unk_0xB34E411B0A4BF096(iLocal_3258))
				{
					if (unk_0x5B80643EF917B728(iLocal_3258) > 30000f)
					{
						unk_0xF243B7A14FCFD0F4(joaat("jet"));
						if (unk_0xD6513D668481290A(joaat("jet")))
						{
							iLocal_3266 = unk_0x61C05BF08A1E0EFE(joaat("jet"), -952.1345f, -2990.269f, 12.9451f, 240.7726f, 1, 1, 0);
							unk_0x7170EF3CEB4D0224(iLocal_3266, 2);
							unk_0x8300C56586249382(iLocal_3266, 0);
							unk_0x346478B12F69D4E3(iLocal_3266, 1);
							unk_0x06D93FD5E4D394CF(iLocal_3266, 1, 1, 1, 1, 1, 0, 0, 0);
							unk_0x2CA123B0622F495C(joaat("jet"));
							unk_0xAF9FC4463EA3090B(iLocal_3266, 500);
						}
					}
				}
			}
		}
	}
	func_338();
	if (unk_0x2DA8CA50A72528FB(uLocal_3285))
	{
		func_337(uLocal_3285, iLocal_3222, 300f, 0.9f, 0);
	}
	if (iLocal_3181 == 0)
	{
		if (iLocal_3182 < 2)
		{
			unk_0xF4A30F1D854C959D(unk_0xBC25C936A095B5BA(), 0);
		}
		func_336();
		func_304();
		if (iLocal_3402 == 0)
		{
			if (unk_0x724D816EA203A79E(iLocal_3121[20]))
			{
				if (unk_0xE59B7F5A03335350(iLocal_3121[20], 0))
				{
					unk_0x2D655AA68FA1736B(iLocal_3121[20], 1, 1, 0);
					unk_0x251A179731E0D207(iLocal_3121[20]);
					iLocal_3402 = 1;
				}
			}
		}
		func_303();
		func_302();
		if (iLocal_3349 == 0)
		{
			if (unk_0x724D816EA203A79E(iLocal_3258))
			{
				if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
				{
					if (unk_0xB34E411B0A4BF096(iLocal_3258))
					{
						func_301(uLocal_3289, iLocal_3271, "BB_Chase", 1);
						iLocal_3349 = 1;
					}
				}
			}
		}
		else if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
		{
			if (unk_0xB34E411B0A4BF096(iLocal_3258))
			{
				func_300(uLocal_3289, iLocal_3271, fLocal_3323);
				unk_0x9DF315A9EFFF87AC(uLocal_3289, 45f);
			}
		}
		if (iLocal_3337 == 0)
		{
			if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
			{
				if (unk_0xB34E411B0A4BF096(iLocal_3258))
				{
					if ((unk_0x5B80643EF917B728(iLocal_3258) > 15000f && unk_0x5B80643EF917B728(iLocal_3258) < 125464f) && func_292(1, 0, 0))
					{
						iLocal_3352 = 1;
						if (iLocal_3437 == 0)
						{
							unk_0x7456702622C62EA0(1);
							func_291("TRV4_HELP1", -1);
							func_286(1);
							func_207(&uLocal_28, 0, 0);
							unk_0x4AED68BFACFB14CB(0);
							iLocal_3337 = 1;
						}
					}
				}
			}
		}
		else if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
		{
			if (unk_0xB34E411B0A4BF096(iLocal_3258))
			{
				if (unk_0xA7F138B5B1AB2CF6(uLocal_3293) && func_183(1, "BB_Chase"))
				{
					if (((unk_0x5B80643EF917B728(iLocal_3258) > 15000f && unk_0x5B80643EF917B728(iLocal_3258) < 125464f) && iLocal_3437 == 0) && unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						func_264();
					}
					if (unk_0x5B80643EF917B728(iLocal_3258) > 125464f || !unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
					{
						if (iLocal_3336)
						{
							unk_0x7456702622C62EA0(1);
							func_223(0, 1, 1, 0);
							unk_0x348665177DBFB93B(uLocal_3289, 0);
							unk_0x062C9995BFD27B2A(false, 0, 3000, 1, 0, 0);
							unk_0x43F06392C4EF25E0(1);
							if (unk_0x144E80F5C46A6B75("SOL_3_CHOPPER_CAM"))
							{
								unk_0xC1300D0F3A74E20B("SOL_3_CHOPPER_CAM");
							}
							unk_0x38FF8CB6377D36F6(iLocal_3219);
							func_243();
							unk_0x6C23D8FD3FB29BAA(1);
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
					if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_3258))
						{
							if (unk_0x5B80643EF917B728(iLocal_3258) > 44255f && unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), -1187.3f, -2847.8f, 13.6f, 1) < 100f)
							{
								unk_0x1D1C393C7689E5A6(10f, 2f, 3);
								iLocal_3571[0] = 1;
							}
						}
					}
				}
				if (iLocal_3571[1] == 0)
				{
					if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_3258))
						{
							if (unk_0x5B80643EF917B728(iLocal_3258) > 52875f && unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), -1349f, -2720f, 14f, 1) < 50f)
							{
								unk_0x1D1C393C7689E5A6(6f, 2f, 3);
								iLocal_3571[1] = 1;
							}
						}
					}
				}
				if (iLocal_3571[2] == 0)
				{
					if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_3258))
						{
							if (unk_0x5B80643EF917B728(iLocal_3258) > 87085f && unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), -1507f, -2520f, 14f, 1) < 70f)
							{
								unk_0x1D1C393C7689E5A6(10f, 2f, 3);
								iLocal_3571[2] = 1;
							}
						}
					}
				}
				func_263();
				func_262();
				if (!unk_0x144E80F5C46A6B75("SOL_3_PLANE_ON_FIRE"))
				{
					if (unk_0x724D816EA203A79E(iLocal_3258))
					{
						if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
						{
							if (unk_0xB34E411B0A4BF096(iLocal_3258))
							{
								if (unk_0x5B80643EF917B728(iLocal_3258) > 64280f && unk_0x5B80643EF917B728(iLocal_3258) < 72000f)
								{
									if (unk_0xF0F2FC9DE291567F(-1149.6f, -2323.7f, 22.5f, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 1) < 130f)
									{
										unk_0xD6423910AAD8A379("SOL_3_PLANE_ON_FIRE");
									}
								}
							}
						}
					}
				}
				else if (unk_0x724D816EA203A79E(iLocal_3258))
				{
					if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_3258))
						{
							if (unk_0x5B80643EF917B728(iLocal_3258) > 72500f)
							{
								unk_0xC1300D0F3A74E20B("SOL_3_PLANE_ON_FIRE");
							}
						}
					}
				}
				if (!unk_0x144E80F5C46A6B75("SOL_3_EVENT_JET_LANDING"))
				{
					if (unk_0x724D816EA203A79E(iLocal_3258))
					{
						if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
						{
							if (unk_0xB34E411B0A4BF096(iLocal_3258))
							{
								if (unk_0x5B80643EF917B728(iLocal_3258) > 78000f && unk_0x5B80643EF917B728(iLocal_3258) < 85000f)
								{
									unk_0xD6423910AAD8A379("SOL_3_EVENT_JET_LANDING");
								}
							}
						}
					}
				}
				else if (unk_0x724D816EA203A79E(iLocal_3258))
				{
					if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_3258))
						{
							if (unk_0x5B80643EF917B728(iLocal_3258) > 85500f)
							{
								unk_0xC1300D0F3A74E20B("SOL_3_EVENT_JET_LANDING");
							}
						}
					}
				}
				if (!unk_0x144E80F5C46A6B75("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION"))
				{
					if (unk_0x724D816EA203A79E(iLocal_3258))
					{
						if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
						{
							if (unk_0xB34E411B0A4BF096(iLocal_3258))
							{
								if (unk_0x5B80643EF917B728(iLocal_3258) > 100000f && unk_0x5B80643EF917B728(iLocal_3258) < 107000f)
								{
									unk_0xD6423910AAD8A379("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
								}
							}
						}
					}
				}
				else if (unk_0x724D816EA203A79E(iLocal_3258))
				{
					if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_3258))
						{
							if (unk_0x5B80643EF917B728(iLocal_3258) > 107500f)
							{
								unk_0xC1300D0F3A74E20B("SOL_3_EVENT_PLANE_TAXIING_EXPLOSION");
							}
						}
					}
				}
				if (unk_0x724D816EA203A79E(iLocal_3258))
				{
					if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_3258))
						{
							if (unk_0x5B80643EF917B728(iLocal_3258) < 10000f)
							{
								func_261();
							}
						}
					}
				}
				if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
				{
					if (unk_0xB34E411B0A4BF096(iLocal_3258))
					{
						if (unk_0x5B80643EF917B728(iLocal_3258) < 30000f)
						{
							func_260(iLocal_3258, unk_0x5B80643EF917B728(iLocal_3258));
						}
					}
				}
				if (iLocal_3440 == 0)
				{
					if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_3258))
						{
							if (unk_0x5B80643EF917B728(iLocal_3258) > 22000f)
							{
								unk_0x6FED2D1AA2EBF334("TRV4_AIRPORT_ENTERED");
								iLocal_3440 = 1;
							}
						}
					}
				}
				else if (iLocal_3441 == 0)
				{
					if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -940.8253f, -2858.602f, 11.94482f, -1001.272f, -2823.764f, 21.00674f, 5.75f, 0, 1, 0))
					{
						unk_0x3857DADBD6EC8A54("TRV4_AIRPORT_ENTERED");
						iLocal_3441 = 1;
					}
				}
				if (iLocal_3343 == 0)
				{
					if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
					{
						if (func_16(iLocal_3258, unk_0xBC25C936A095B5BA(), 1) < 170f && unk_0xD1DC4B08247A4317(iLocal_3258))
						{
							if (unk_0x2DA8CA50A72528FB(uLocal_3287))
							{
								unk_0x07B8ECB35A4ED3AC(&uLocal_3287);
							}
							if (unk_0x144E80F5C46A6B75("SOL_3_DRIVE_TO_AIRPORT"))
							{
								unk_0xC1300D0F3A74E20B("SOL_3_DRIVE_TO_AIRPORT");
							}
							if (!unk_0x144E80F5C46A6B75("SOL_3_MAIN_CHASE"))
							{
								unk_0xD6423910AAD8A379("SOL_3_MAIN_CHASE");
							}
							if (!unk_0x2DA8CA50A72528FB(uLocal_3285))
							{
								if (!unk_0x36CEFBE9B745A58D(iLocal_3222))
								{
									uLocal_3285 = unk_0x511FE22BCF5353CD(iLocal_3222);
									unk_0xF9C2945DB5BAB4BF(uLocal_3285, 1);
								}
							}
							unk_0x5499DFC49A11E05F();
							if (!unk_0x4B8E3E5901E59EB8())
							{
								func_20("TRV4_CHASE2", 7500, 1);
								func_25(1, "STAGE_CHASE_START", 0, 0, 0, 1);
								unk_0x3857DADBD6EC8A54("TRV4_CHASE");
								iLocal_3343 = 1;
							}
						}
					}
					if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -536.0366f, -2102.793f, 5.672412f, -464.5755f, -2165.133f, 14.75182f, 65.25f, 0, 1, 0))
					{
						if (unk_0x2DA8CA50A72528FB(uLocal_3287))
						{
							unk_0x07B8ECB35A4ED3AC(&uLocal_3287);
						}
						if (!unk_0x2DA8CA50A72528FB(uLocal_3285))
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_3222))
							{
								uLocal_3285 = unk_0x511FE22BCF5353CD(iLocal_3222);
								unk_0xF9C2945DB5BAB4BF(uLocal_3285, 1);
							}
						}
						unk_0x5499DFC49A11E05F();
						if (!unk_0x4B8E3E5901E59EB8())
						{
							func_20("TRV4_CHASE2", 7500, 1);
							func_25(1, "STAGE_CHASE_START", 0, 0, 0, 1);
							unk_0x3857DADBD6EC8A54("TRV4_CHASE");
							iLocal_3343 = 1;
						}
					}
				}
				else if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
				{
					if (unk_0xB34E411B0A4BF096(iLocal_3258))
					{
						if (unk_0x5B80643EF917B728(iLocal_3258) < 15000f)
						{
						}
					}
				}
				if (iLocal_3328 == 0)
				{
					unk_0xF243B7A14FCFD0F4(joaat("jet"));
					if (unk_0xD6513D668481290A(joaat("jet")))
					{
						if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
						{
							if (unk_0xB34E411B0A4BF096(iLocal_3258))
							{
								if (unk_0x5B80643EF917B728(iLocal_3258) > 18490f)
								{
									iLocal_3260[1] = unk_0x61C05BF08A1E0EFE(joaat("jet"), -441.3117f, -3435.736f, 409.9454f, 148.3975f, 1, 1, 0);
									unk_0x9E6D037EC3389728(iLocal_3260[1], 2, "BB_Chase", 1);
									unk_0x2CA123B0622F495C(joaat("jet"));
									iLocal_3328 = 1;
								}
							}
						}
					}
				}
				else if (unk_0x724D816EA203A79E(iLocal_3260[1]))
				{
					if (unk_0xE59B7F5A03335350(iLocal_3260[1], 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_3260[1]))
						{
							unk_0x821B5D8CB4B20F84(iLocal_3260[1], fLocal_3323);
							if (unk_0x5B80643EF917B728(iLocal_3260[1]) > 20000f)
							{
								if (func_16(unk_0xBC25C936A095B5BA(), iLocal_3260[1], 1) > 200f && !unk_0xD1DC4B08247A4317(iLocal_3260[1]))
								{
									unk_0xD87F0F9CDF39238A(iLocal_3260[1]);
									if (unk_0x724D816EA203A79E(iLocal_3254[1]))
									{
										unk_0xF845620A03C7425B(&(iLocal_3254[1]));
									}
									unk_0xCF6040807CC0E4A5(&(iLocal_3260[1]));
									iLocal_3207 = unk_0x105601648511CC64() + 1000;
								}
							}
							if (unk_0x724D816EA203A79E(iLocal_3260[1]))
							{
								if (unk_0x5B80643EF917B728(iLocal_3260[1]) > 31543f)
								{
									unk_0xD87F0F9CDF39238A(iLocal_3260[1]);
									unk_0x346478B12F69D4E3(iLocal_3260[1], 1);
								}
							}
						}
						else if (func_16(unk_0xBC25C936A095B5BA(), iLocal_3260[1], 1) > 200f && !unk_0xD1DC4B08247A4317(iLocal_3260[1]))
						{
							if (unk_0x724D816EA203A79E(iLocal_3254[1]))
							{
								unk_0xF845620A03C7425B(&(iLocal_3254[1]));
							}
							unk_0xCF6040807CC0E4A5(&(iLocal_3260[1]));
							iLocal_3207 = unk_0x105601648511CC64() + 1000;
						}
					}
				}
				if (iLocal_3487 == 0)
				{
					if (!unk_0x724D816EA203A79E(iLocal_3265))
					{
						if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
						{
							if (unk_0xB34E411B0A4BF096(iLocal_3258))
							{
								if (unk_0x5B80643EF917B728(iLocal_3258) > 23000f)
								{
									unk_0xF243B7A14FCFD0F4(joaat("tanker"));
									if (unk_0xD6513D668481290A(joaat("tanker")))
									{
										iLocal_3265 = unk_0x61C05BF08A1E0EFE(joaat("tanker"), -1325f, -2779f, 14f, 233.9563f, 1, 1, 0);
										unk_0x2CA123B0622F495C(joaat("tanker"));
										unk_0x914C5DE0B15B8B59(iLocal_3265, 57, 57);
										iLocal_3487 = 1;
									}
								}
							}
						}
					}
				}
				if (unk_0x724D816EA203A79E(iLocal_3121[1]))
				{
					if (unk_0xE59B7F5A03335350(iLocal_3121[1], 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_3121[1]))
						{
							if (unk_0x5B80643EF917B728(iLocal_3121[1]) > 13000f)
							{
								if (iLocal_3377 == 0)
								{
									fLocal_1173[1] = 0.5f;
									iLocal_3245 = unk_0x3187EF5798B5D209(iLocal_3121[1], -1, 0);
									iLocal_3377 = 1;
								}
							}
						}
					}
				}
				if (iLocal_3334 == 0)
				{
					unk_0x30FE708AC8604C55(-1325f, -2779f, 14f);
					if (unk_0x724D816EA203A79E(iLocal_3121[1]))
					{
						if (iLocal_3363 == 0)
						{
							unk_0x914C5DE0B15B8B59(iLocal_3121[1], 57, 57);
							iLocal_3363 = 1;
						}
						if (unk_0x724D816EA203A79E(iLocal_3265))
						{
							if (!unk_0x1D403DFADBC2DE3C(iLocal_3121[1], 0))
							{
								if (!unk_0x1D403DFADBC2DE3C(iLocal_3265, 0))
								{
									if (unk_0xB34E411B0A4BF096(iLocal_3121[1]))
									{
										unk_0x0A0AE625CFB21683(iLocal_3121[1], iLocal_3265, 1065353216);
									}
								}
							}
						}
					}
					if (unk_0x724D816EA203A79E(iLocal_3265))
					{
						if (unk_0x724D816EA203A79E(iLocal_3258))
						{
							if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
							{
								if (unk_0xB34E411B0A4BF096(iLocal_3258))
								{
									if (unk_0x5B80643EF917B728(iLocal_3258) > 41430f)
									{
										unk_0x17175087F2DB6AC8(iLocal_3265, 1, 1);
										iLocal_3334 = 1;
									}
								}
							}
						}
					}
				}
				else if (iLocal_3380 == 0)
				{
					if (unk_0xE59B7F5A03335350(iLocal_3121[1], 0))
					{
						if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
						{
							if (unk_0xB34E411B0A4BF096(iLocal_3258))
							{
								if (unk_0x5B80643EF917B728(iLocal_3258) > 42700f)
								{
									if (unk_0x724D816EA203A79E(iLocal_3245))
									{
										if (!unk_0x36CEFBE9B745A58D(iLocal_3245))
										{
											unk_0x65E471E4A2D56226(iLocal_3245, 0, 0);
										}
									}
									if (unk_0xB34E411B0A4BF096(iLocal_3121[1]))
									{
										unk_0xD87F0F9CDF39238A(iLocal_3121[1]);
										iLocal_3380 = 1;
									}
								}
							}
						}
					}
				}
				if (unk_0x724D816EA203A79E(iLocal_3258))
				{
					if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_3258))
						{
							if (iLocal_3551 == 0)
							{
								if (unk_0x5B80643EF917B728(iLocal_3258) > 38000f)
								{
									if (unk_0x724D816EA203A79E(iLocal_3121[1]) && unk_0xE59B7F5A03335350(iLocal_3121[1], 0))
									{
										unk_0xF2C27FE5A8B98CB5(-1, "Trevor_4_747_Tanker_Horn", iLocal_3121[1], 0, 0, 0);
										iLocal_3551 = 1;
									}
								}
							}
							if (iLocal_3365[1] == 0)
							{
								if (unk_0x5B80643EF917B728(iLocal_3258) > 39000f)
								{
									if (!unk_0x144E80F5C46A6B75("SOL_3_EVENT_TANKER_CRASH"))
									{
										unk_0xD6423910AAD8A379("SOL_3_EVENT_TANKER_CRASH");
									}
									if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
									{
										unk_0x06D93FD5E4D394CF(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0, 1, 1, 0, 0, 0, 0, 0);
									}
									iLocal_3365[1] = 1;
								}
							}
							if (iLocal_3435 == 0)
							{
								if (unk_0x5B80643EF917B728(iLocal_3258) > 41611f)
								{
									if (unk_0x724D816EA203A79E(iLocal_3265))
									{
										if (!unk_0x1D403DFADBC2DE3C(iLocal_3265, 0))
										{
											if (unk_0x724D816EA203A79E(iLocal_3121[7]))
											{
												if (!unk_0x1D403DFADBC2DE3C(iLocal_3121[7], 0))
												{
													unk_0xF2C27FE5A8B98CB5(-1, "Trevor_4_747_Tanker_Explosion", iLocal_3265, 0, 0, 0);
													unk_0xD87F0F9CDF39238A(iLocal_3121[7]);
													unk_0x59DBD01514218697(iLocal_3121[7], 1, 0);
													unk_0x59DBD01514218697(iLocal_3265, 1, 0);
													unk_0xFB3EF14E3F131640(-1221f, -2852f, 17f, 14, 1f, 1, 0, 1065353216, 0);
													unk_0xFB3EF14E3F131640(-1212f, -2855f, 14.34f, 14, 1f, 1, 0, 1065353216, 0);
													unk_0x1E7A09C1710FB071(&iLocal_3265);
													unk_0x1E7A09C1710FB071(&(iLocal_3121[1]));
													iLocal_3435 = 1;
												}
											}
										}
									}
								}
							}
							if (iLocal_3369[1] == 0)
							{
								if (unk_0x5B80643EF917B728(iLocal_3258) > 43204f)
								{
									if (unk_0x144E80F5C46A6B75("SOL_3_EVENT_TANKER_CRASH"))
									{
										unk_0xC1300D0F3A74E20B("SOL_3_EVENT_TANKER_CRASH");
									}
									unk_0xDA70546257A3ED8B("SCRIPT\Trv_4_747_Tanker_Explosion");
									if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
									{
										unk_0x06D93FD5E4D394CF(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0, 0, 0, 0, 0, 0, 0, 0);
									}
									iLocal_3369[1] = 1;
								}
							}
						}
					}
				}
				if (!unk_0x144E80F5C46A6B75("SOL_3_HELI_TAKEOFF"))
				{
					if (unk_0x724D816EA203A79E(iLocal_3121[0]))
					{
						if (unk_0xE59B7F5A03335350(iLocal_3121[0], 0))
						{
							if (unk_0x724D816EA203A79E(iLocal_3258))
							{
								if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
								{
									if (unk_0xB34E411B0A4BF096(iLocal_3258))
									{
										if (unk_0x5B80643EF917B728(iLocal_3258) > 36000f && unk_0x5B80643EF917B728(iLocal_3258) < 40000f)
										{
											unk_0xD6423910AAD8A379("SOL_3_HELI_TAKEOFF");
										}
									}
								}
							}
						}
					}
				}
				else if (unk_0x724D816EA203A79E(iLocal_3121[0]))
				{
					if (unk_0xE59B7F5A03335350(iLocal_3121[0], 0))
					{
						if (unk_0x724D816EA203A79E(iLocal_3258))
						{
							if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
							{
								if (unk_0xB34E411B0A4BF096(iLocal_3258))
								{
									if (unk_0x5B80643EF917B728(iLocal_3258) > 43204f)
									{
										unk_0xC1300D0F3A74E20B("SOL_3_HELI_TAKEOFF");
									}
								}
							}
						}
					}
				}
				if (iLocal_3327 == 0)
				{
					if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_3258))
						{
							if (unk_0x5B80643EF917B728(iLocal_3258) > 60500f)
							{
								unk_0xF243B7A14FCFD0F4(joaat("jet"));
							}
							if (unk_0x5B80643EF917B728(iLocal_3258) > 66500f)
							{
								if (unk_0xD6513D668481290A(joaat("jet")))
								{
									iLocal_3260[0] = unk_0x61C05BF08A1E0EFE(joaat("jet"), -1119.072f, -1864.548f, -8.2205f, 148.3975f, 1, 1, 0);
									unk_0x1E5C2A1EAB944289(iLocal_3260[0], 1);
									unk_0x7170EF3CEB4D0224(iLocal_3260[0], 2);
									unk_0x9E6D037EC3389728(iLocal_3260[0], 35, "BB_Chase", 1);
									unk_0x57C1D06186DCC318(iLocal_3260[0], 3491f);
									unk_0x2CA123B0622F495C(joaat("jet"));
									iLocal_3327 = 1;
								}
							}
						}
					}
				}
				else if (unk_0x724D816EA203A79E(iLocal_3260[0]))
				{
					if (unk_0xE59B7F5A03335350(iLocal_3260[0], 0))
					{
						if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
						{
							if (unk_0xB34E411B0A4BF096(iLocal_3258))
							{
								if (unk_0xB34E411B0A4BF096(iLocal_3260[0]))
								{
									unk_0x821B5D8CB4B20F84(iLocal_3260[0], fLocal_3323);
									if (unk_0x5B80643EF917B728(iLocal_3258) > 80000f)
									{
										if (func_16(iLocal_3260[0], unk_0xBC25C936A095B5BA(), 1) > 200f)
										{
											unk_0xD87F0F9CDF39238A(iLocal_3260[0]);
										}
									}
								}
								else if (unk_0x5B80643EF917B728(iLocal_3258) > 80000f)
								{
									if (func_16(iLocal_3260[0], unk_0xBC25C936A095B5BA(), 1) > 200f && !unk_0xD1DC4B08247A4317(iLocal_3260[0]))
									{
										if (unk_0x724D816EA203A79E(iLocal_3254[0]))
										{
											unk_0xF845620A03C7425B(&(iLocal_3254[0]));
										}
										unk_0xCF6040807CC0E4A5(&(iLocal_3260[0]));
										iLocal_3207 = unk_0x105601648511CC64() + 1000;
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
						if (unk_0x724D816EA203A79E(iLocal_3258))
						{
							if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
							{
								if (unk_0xB34E411B0A4BF096(iLocal_3258))
								{
									if (unk_0x5B80643EF917B728(iLocal_3258) > 50000f)
									{
										unk_0xF243B7A14FCFD0F4(joaat("s_m_y_airworker"));
										unk_0x522053D86D6E1C7A("misstrevor4");
										if (unk_0xD6513D668481290A(joaat("s_m_y_airworker")))
										{
											iLocal_3246 = unk_0x01B3635C3E8EDD81(26, joaat("s_m_y_airworker"), -1170.541f, -2507.111f, 12.9455f, 218.3035f, 1, 1);
											iLocal_3247 = unk_0x01B3635C3E8EDD81(26, joaat("s_m_y_airworker"), -1168.264f, -2508.715f, 12.9455f, 70.7735f, 1, 1);
											unk_0x2E35C4FA5F0ED22F(iLocal_3246, 1);
											unk_0x2E35C4FA5F0ED22F(iLocal_3247, 1);
											unk_0x2CA123B0622F495C(joaat("s_m_y_airworker"));
											iLocal_3398 = 1;
										}
									}
								}
							}
						}
					}
					else if (unk_0x724D816EA203A79E(iLocal_3258))
					{
						if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
						{
							if (unk_0xB34E411B0A4BF096(iLocal_3258))
							{
								if (unk_0x5B80643EF917B728(iLocal_3258) > 58000f)
								{
									if (!unk_0x36CEFBE9B745A58D(iLocal_3246))
									{
										if (unk_0xF9E082857622D91E("misstrevor4"))
										{
											if (!unk_0x96044E39418AAF17(iLocal_3246, "misstrevor4", "dive_clear_goon1", 3))
											{
												unk_0xE896C0AD02364F2A(iLocal_3246, "misstrevor4", "dive_clear_goon1", 8f, -8f, -1, 0, 0, 0, 0, 0);
											}
										}
									}
									if (!unk_0x36CEFBE9B745A58D(iLocal_3247))
									{
										if (unk_0xF9E082857622D91E("misstrevor4"))
										{
											if (!unk_0x96044E39418AAF17(iLocal_3247, "misstrevor4", "dive_clear_goon2", 3))
											{
												unk_0xE896C0AD02364F2A(iLocal_3247, "misstrevor4", "dive_clear_goon2", 8f, -8f, -1, 0, 0, 0, 0, 0);
											}
										}
									}
									iLocal_3399 = 1;
								}
							}
						}
					}
				}
				else if (unk_0x724D816EA203A79E(iLocal_3246))
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_3246))
					{
						if (!unk_0x96044E39418AAF17(iLocal_3246, "misstrevor4", "dive_clear_goon1", 3))
						{
							if (unk_0x724D816EA203A79E(iLocal_3247))
							{
								if (!unk_0x36CEFBE9B745A58D(iLocal_3247))
								{
									if (!unk_0x96044E39418AAF17(iLocal_3247, "misstrevor4", "dive_clear_goon2", 3))
									{
										unk_0x4EA570997E107F35("misstrevor4");
										unk_0x02537C8C1BEEB477(&iLocal_3246);
										unk_0x02537C8C1BEEB477(&iLocal_3247);
									}
								}
							}
						}
					}
				}
				if (unk_0x724D816EA203A79E(iLocal_3121[8]))
				{
					if (unk_0xE59B7F5A03335350(iLocal_3121[8], 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_3121[8]))
						{
							if (unk_0x724D816EA203A79E(iLocal_3258))
							{
								if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
								{
									if (unk_0xB34E411B0A4BF096(iLocal_3258))
									{
										if (unk_0x5B80643EF917B728(iLocal_3258) > 50200f)
										{
											if (iLocal_3330 == 0)
											{
												unk_0x821B5D8CB4B20F84(iLocal_3121[8], 1f);
												if (func_16(unk_0xBC25C936A095B5BA(), iLocal_3121[8], 1) < 100f)
												{
													unk_0x2991B7F8ABC4BB0C(0.3f);
													iLocal_3373 = 0;
													if (!unk_0x144E80F5C46A6B75("SOL_3_CAR_JET_ENGINE"))
													{
														unk_0xD6423910AAD8A379("SOL_3_CAR_JET_ENGINE");
													}
													unk_0xD2ABD8B4F99E3AEC(iLocal_3121[8], 0f, 0f, 0f, 1, 1500, 500, 100);
												}
												unk_0xB71D41C0310C93DE(iLocal_3121[8], 1, 1);
												unk_0xF162EEE556542AB7(iLocal_3121[8], 1, 0);
												unk_0xF2C27FE5A8B98CB5(iLocal_3213, "Trevor_4_747_Flying_Car", iLocal_3121[8], 0, 0, 0);
												unk_0x5AE11BC36633DE4E(0);
												iLocal_3330 = 1;
											}
										}
										if (iLocal_3330 == 1)
										{
											if (unk_0xC9D9444186B5A374() > 662)
											{
												if (unk_0x144E80F5C46A6B75("SOL_3_CAR_JET_ENGINE"))
												{
													unk_0xC1300D0F3A74E20B("SOL_3_CAR_JET_ENGINE");
												}
												unk_0x2991B7F8ABC4BB0C(1f);
												iLocal_3373 = 1;
											}
											if (unk_0xC9D9444186B5A374() > 1872)
											{
												unk_0xD87F0F9CDF39238A(iLocal_3121[8]);
											}
										}
									}
								}
							}
						}
						else if (unk_0x724D816EA203A79E(iLocal_3258))
						{
							if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
							{
								if (unk_0xB34E411B0A4BF096(iLocal_3258))
								{
									if (unk_0x5B80643EF917B728(iLocal_3258) > 50200f)
									{
										if (!unk_0x2A348A3A98B80B13(iLocal_3121[8]))
										{
											if (iLocal_3385 == 0)
											{
												unk_0xF2C27FE5A8B98CB5(iLocal_3213, "Trevor_4_747_Carsplosion", iLocal_3121[8], 0, 0, 0);
												unk_0x59DBD01514218697(iLocal_3121[8], 1, 0);
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
								if (unk_0x144E80F5C46A6B75("SOL_3_CAR_JET_ENGINE"))
								{
									unk_0xC1300D0F3A74E20B("SOL_3_CAR_JET_ENGINE");
								}
								unk_0x2991B7F8ABC4BB0C(1f);
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
							if (unk_0x144E80F5C46A6B75("SOL_3_CAR_JET_ENGINE"))
							{
								unk_0xC1300D0F3A74E20B("SOL_3_CAR_JET_ENGINE");
							}
							unk_0x2991B7F8ABC4BB0C(1f);
							iLocal_3373 = 1;
						}
					}
				}
				if (unk_0x724D816EA203A79E(iLocal_3121[11]))
				{
					if (unk_0xE59B7F5A03335350(iLocal_3121[11], 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_3121[11]))
						{
							if (unk_0x724D816EA203A79E(iLocal_3258))
							{
								if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
								{
									if (unk_0xB34E411B0A4BF096(iLocal_3258))
									{
										if (unk_0x5B80643EF917B728(iLocal_3258) > 82683f)
										{
											if (iLocal_3331 == 0)
											{
												unk_0xF2C27FE5A8B98CB5(iLocal_3215, "Trevor_4_747_Flying_Car", iLocal_3121[11], 0, 0, 0);
												iLocal_3331 = 1;
												unk_0x5AE11BC36633DE4E(0);
											}
											if (iLocal_3331 == 1)
											{
												if (unk_0xC9D9444186B5A374() > 1872)
												{
													if (!unk_0x2A348A3A98B80B13(iLocal_3121[11]))
													{
														unk_0xD87F0F9CDF39238A(iLocal_3121[11]);
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
								if (!unk_0x2A348A3A98B80B13(iLocal_3121[11]))
								{
									unk_0xF2C27FE5A8B98CB5(iLocal_3215, "Trevor_4_747_Carsplosion", iLocal_3121[11], 0, 0, 0);
									unk_0x59DBD01514218697(iLocal_3121[11], 1, 0);
									iLocal_3386 = 1;
								}
							}
						}
					}
				}
				if (unk_0x724D816EA203A79E(iLocal_3121[12]))
				{
					if (unk_0xE59B7F5A03335350(iLocal_3121[12], 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_3121[12]))
						{
							if (unk_0x724D816EA203A79E(iLocal_3258))
							{
								if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
								{
									if (unk_0xB34E411B0A4BF096(iLocal_3258))
									{
										if (unk_0x5B80643EF917B728(iLocal_3258) > 82463f)
										{
											if (iLocal_3332 == 0)
											{
												unk_0xF2C27FE5A8B98CB5(iLocal_3216, "Trevor_4_747_Flying_Car", iLocal_3121[12], 0, 0, 0);
												iLocal_3332 = 1;
												unk_0x5AE11BC36633DE4E(0);
											}
											if (iLocal_3332 == 1)
											{
												if (unk_0xC9D9444186B5A374() > 1000)
												{
													if (!unk_0x2A348A3A98B80B13(iLocal_3121[12]))
													{
														unk_0xD87F0F9CDF39238A(iLocal_3121[12]);
													}
												}
											}
										}
									}
								}
							}
							if (iLocal_3541 == 0)
							{
								if (unk_0xB34E411B0A4BF096(iLocal_3121[12]))
								{
									if (unk_0x5B80643EF917B728(iLocal_3121[12]) > 22216f && func_16(iLocal_3259, iLocal_3121[12], 1) < 90f)
									{
										unk_0x2991B7F8ABC4BB0C(0.3f);
										unk_0xD2ABD8B4F99E3AEC(iLocal_3121[12], 0f, 0f, 0f, 1, 2000, 1000, 500);
										iLocal_3203 = unk_0x105601648511CC64();
										iLocal_3541 = 1;
									}
								}
							}
						}
						else if (iLocal_3332 == 1)
						{
							if (iLocal_3387 == 0)
							{
								if (!unk_0x2A348A3A98B80B13(iLocal_3121[12]))
								{
									unk_0xF2C27FE5A8B98CB5(iLocal_3216, "Trevor_4_747_Carsplosion", iLocal_3121[12], 0, 0, 0);
									unk_0x59DBD01514218697(iLocal_3121[12], 1, 0);
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
					if (unk_0x724D816EA203A79E(iLocal_3121[12]))
					{
						if (unk_0xE59B7F5A03335350(iLocal_3121[12], 0))
						{
							Local_3315 = { unk_0x541C2AEF053615BC(iLocal_3121[12], 1) };
						}
					}
					Local_3318 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
					if (unk_0x105601648511CC64() > iLocal_3203 + 1579 || Local_3318.f_1 < Local_3315.f_1)
					{
						unk_0x2991B7F8ABC4BB0C(1f);
						unk_0xF04F2EB4128A4367(0);
						iLocal_3540 = 1;
					}
				}
				if (unk_0x724D816EA203A79E(iLocal_3258))
				{
					if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_3258))
						{
							if (unk_0x5B80643EF917B728(iLocal_3258) > 105000f && unk_0x5B80643EF917B728(iLocal_3258) < 113000f)
							{
								unk_0x30FE708AC8604C55(-1172.3f, -3027.5f, 13.3f);
							}
						}
					}
				}
				if (unk_0x724D816EA203A79E(iLocal_3121[13]))
				{
					if (unk_0xE59B7F5A03335350(iLocal_3121[13], 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_3121[13]))
						{
							if (unk_0x724D816EA203A79E(iLocal_3258))
							{
								if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
								{
									if (unk_0xB34E411B0A4BF096(iLocal_3258))
									{
										if (unk_0x5B80643EF917B728(iLocal_3258) > 108830f)
										{
											unk_0x156B8835BE8B6B6C(iLocal_3121[13], 0);
											unk_0xB71D41C0310C93DE(iLocal_3121[13], 1, 1);
											unk_0x656194E145691D3E(iLocal_3121[13], 0);
											unk_0xC1B1E9A034A63A62(0);
											iLocal_3486 = 1;
										}
									}
								}
							}
						}
						else if (iLocal_3486 == 1)
						{
							unk_0x65E471E4A2D56226(iLocal_3121[13], 0, 0);
							unk_0x0BD7089C3E314AEA(iLocal_3121[13], 1);
							unk_0x65E471E4A2D56226(unk_0x3187EF5798B5D209(iLocal_3121[13], -1, 0), 0, 0);
						}
					}
				}
				if (iLocal_3478 == 0)
				{
					if (unk_0x724D816EA203A79E(iLocal_3121[5]))
					{
						if (unk_0xE59B7F5A03335350(iLocal_3121[5], 0))
						{
							unk_0x7170EF3CEB4D0224(iLocal_3121[5], 0);
							unk_0x1E5C2A1EAB944289(iLocal_3121[5], 1);
							iLocal_3478 = 1;
						}
					}
				}
				if (unk_0x724D816EA203A79E(iLocal_3121[15]))
				{
					if (unk_0xE59B7F5A03335350(iLocal_3121[15], 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_3121[15]))
						{
							if (unk_0x724D816EA203A79E(iLocal_3258))
							{
								if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
								{
									if (unk_0xB34E411B0A4BF096(iLocal_3258))
									{
										if (unk_0x5B80643EF917B728(iLocal_3258) > 104989f)
										{
											unk_0xD87F0F9CDF39238A(iLocal_3121[15]);
											func_258(iLocal_3121[15], -0.04f, -2.21f, 0.887f, 0f, -1f, 0f, 5f, 1);
											func_258(iLocal_3121[15], 0.44f, -0.802f, 15.303f, 0f, 0f, 0f, 12f, 1);
											unk_0x59DBD01514218697(iLocal_3121[15], 1, 0);
											unk_0x1D1C393C7689E5A6(4f, 4f, 4);
											unk_0xF2C27FE5A8B98CB5(-1, "Trevor_4_747_Carsplosion", iLocal_3121[15], 0, 0, 0);
											unk_0xDA70546257A3ED8B("SCRIPT\Trv_4_747_Cop_Cars");
										}
									}
								}
							}
						}
					}
				}
				if (unk_0x724D816EA203A79E(iLocal_3258))
				{
					if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_3258))
						{
							if (unk_0x5B80643EF917B728(iLocal_3258) > 112000f)
							{
								unk_0x44840FD68E426678("BB_MOLLY_2");
								unk_0x522053D86D6E1C7A("misssolomon_3");
								unk_0x522053D86D6E1C7A("move_f@film_reel_arms");
								iLocal_3182 = 1;
							}
						}
					}
				}
				break;
			
			case 1:
				if (iLocal_3508 == 0)
				{
					if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -887.1561f, -2957.106f, 12.46766f, -848.108f, -2997.588f, 18.23435f, 5f, 0, 1, 0))
					{
						iLocal_3508 = 1;
					}
				}
				if (unk_0x724D816EA203A79E(iLocal_3272[0]))
				{
					if (unk_0xE59B7F5A03335350(iLocal_3272[0], 0))
					{
						unk_0x38E412DB4A45B900(iLocal_3272[0], 0);
						unk_0x1E7A09C1710FB071(&(iLocal_3272[0]));
					}
				}
				if (unk_0x724D816EA203A79E(iLocal_3251[0]))
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_3251[0]))
					{
						unk_0xA4E856A8CD53B8DF(iLocal_3251[0]);
						unk_0x02537C8C1BEEB477(&(iLocal_3251[0]));
					}
				}
				if (iLocal_3401 == 0)
				{
					if (unk_0x724D816EA203A79E(iLocal_3258))
					{
						if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
						{
							if (unk_0xB34E411B0A4BF096(iLocal_3258))
							{
								if (unk_0x5B80643EF917B728(iLocal_3258) > 115000f)
								{
									unk_0x44840FD68E426678("Trev4_5");
									unk_0xF243B7A14FCFD0F4(joaat("prop_cs_film_reel_01"));
									if (!unk_0x719413B40BB63D86())
									{
										unk_0x1732A8A5D2D39430(-930.7f, -2916.9f, 13.4f, 10f, 0);
									}
									iLocal_3401 = 1;
								}
							}
						}
					}
				}
				if (iLocal_3437 == 0)
				{
					if (unk_0x724D816EA203A79E(iLocal_3258))
					{
						if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
						{
							if (unk_0xB34E411B0A4BF096(iLocal_3258))
							{
								if (unk_0x5B80643EF917B728(iLocal_3258) > 120000f)
								{
									if (!unk_0x144E80F5C46A6B75("SOL_3_ARRIVE_AT_HANGAR"))
									{
										unk_0xD6423910AAD8A379("SOL_3_ARRIVE_AT_HANGAR");
									}
									unk_0x14137149076C8055(iLocal_3258);
								}
								if (unk_0x5B80643EF917B728(iLocal_3258) > 125513f)
								{
									unk_0xD87F0F9CDF39238A(iLocal_3258);
									unk_0x346478B12F69D4E3(iLocal_3258, 1);
									func_257();
									unk_0x02DD9F29D9655E48();
									unk_0x4BDC021CD4295F17(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f, 1, 0);
									unk_0xC1300D0F3A74E20B("TREVOR_4_MAIN_CHASE");
									if (!unk_0xEF0E25DA0CB6E8FF(uLocal_3291))
									{
										uLocal_3291 = unk_0x578D5D08EC980893("DEFAULT_SCRIPTED_CAMERA", 0);
									}
									if (!unk_0xEF0E25DA0CB6E8FF(uLocal_3290))
									{
										uLocal_3290 = unk_0x578D5D08EC980893("DEFAULT_SCRIPTED_CAMERA", 0);
									}
									iLocal_3194 = unk_0x105601648511CC64();
									unk_0x4AED68BFACFB14CB(1);
									unk_0xAF0732277B825027(0);
									iLocal_3182 = 2;
								}
							}
						}
					}
				}
				break;
			
			case 2:
				Local_3318 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
				unk_0x14137149076C8055(iLocal_3258);
				if (iLocal_3508 == 0)
				{
					if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -887.1561f, -2957.106f, 12.46766f, -848.108f, -2997.588f, 18.23435f, 5f, 0, 1, 0))
					{
						iLocal_3508 = 1;
					}
				}
				if (iLocal_3437 == 0)
				{
					if (unk_0xF0F2FC9DE291567F(Local_3318, -930.7f, -2916.9f, 13.4f, 1) < 45f)
					{
						iLocal_3182 = 3;
					}
					if (unk_0x724D816EA203A79E(iLocal_3258))
					{
						if (unk_0xD1DC4B08247A4317(iLocal_3258))
						{
							if (iLocal_3508 == 1)
							{
								iLocal_3182 = 3;
							}
						}
					}
					if (unk_0x105601648511CC64() > iLocal_3194 + 5000 && iLocal_3508 == 1)
					{
						iLocal_3182 = 3;
					}
				}
				break;
			
			case 3:
				if (unk_0x719413B40BB63D86())
				{
					unk_0x13D5880CBA449AA9();
				}
				unk_0x14137149076C8055(iLocal_3258);
				if (!unk_0x36CEFBE9B745A58D(iLocal_3222))
				{
					if (unk_0x96044E39418AAF17(iLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
					{
					}
				}
				if (iLocal_3466 == 0)
				{
					if (unk_0x724D816EA203A79E(iLocal_3258))
					{
						if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
						{
							if (!unk_0xB34E411B0A4BF096(iLocal_3258))
							{
								if (unk_0xF9E082857622D91E("misssolomon_3"))
								{
									if (!unk_0x36CEFBE9B745A58D(iLocal_3222))
									{
										if (!unk_0x724D816EA203A79E(iLocal_3283))
										{
											if (unk_0xD6513D668481290A(joaat("prop_cs_film_reel_01")))
											{
												iLocal_3283 = unk_0xB6896943DA475493(joaat("prop_cs_film_reel_01"), -929f, -2917f, 13f, 1, 1, 0);
												unk_0x5DBE04849460E608(iLocal_3283, iLocal_3222, unk_0xFA18E720A39243D0(iLocal_3222, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
											}
										}
										if (!unk_0x96044E39418AAF17(iLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											unk_0x346478B12F69D4E3(iLocal_3258, 0);
											uLocal_3208 = unk_0xD0D858E538FD01C3(-929.492f, -2913.472f, 14.16f, 0f, 0f, -28.96f, 2);
											unk_0xBEBE356CCD6268A1(iLocal_3258, uLocal_3208, "molly_escapes_car_car", "misssolomon_3", 8f, -8f, 0, 1000f);
											unk_0xB62398E536F695FC(iLocal_3222, uLocal_3208, "misssolomon_3", "molly_escapes_car_mol", 1000f, -1000f, 5, 0, 1148846080, 0);
											unk_0x69D4A898629B0BDA(uLocal_3208, 0);
											unk_0x3857DADBD6EC8A54("TRV4_EXIT_CARS");
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
						if (!unk_0x36CEFBE9B745A58D(iLocal_3222))
						{
							if (unk_0x0C265B3C448E6954(iLocal_3222, -937.6656f, -2927.864f, 12.77007f, -934.8479f, -2929.484f, 14.46523f, 1.5f, 0, 1, 0))
							{
								if (unk_0x96044E39418AAF17(iLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
								{
									unk_0x6C3BE67B02D72CDC(iLocal_3222, -1000f, 1);
								}
								unk_0x49D46EE47C9CCB66(iLocal_3222);
								unk_0x2E35C4FA5F0ED22F(iLocal_3222, 1);
								unk_0x641B19E156645A92(iLocal_3222, -934.8388f, -2932.831f, 12.9649f, 1, 0, 0, 1);
								unk_0x019CE76D5286C95C(iLocal_3222, 236.5739f);
								unk_0xB0C1A00D86375366(iLocal_3222, "BB_MOLLY_2", 1, 4, -1);
								if (unk_0xF9E082857622D91E("move_f@film_reel_arms"))
								{
									unk_0xE896C0AD02364F2A(iLocal_3222, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
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
							if (!unk_0x36CEFBE9B745A58D(iLocal_3222))
							{
								if (unk_0x96044E39418AAF17(iLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
								{
									if (unk_0x8FD30584EB38411B(uLocal_3208) > 0.18f || unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), -930.7f, -2916.9f, 13.4f, 1) < 10f)
									{
										iLocal_3183 = 0;
										iLocal_3475 = 1;
									}
								}
							}
						}
						while (iLocal_3475 == 1)
						{
							unk_0x2E94C9549322098D("M_LegalTrouble", 0);
							switch (iLocal_3183)
							{
								case 0:
									unk_0x9961B404F89D0597(uLocal_3291, -927.0851f, -2921.173f, 13.66304f, 1.738541f, 1.294743f, 28.05799f, 34.66404f, 0, 1, 1, 2);
									unk_0x9961B404F89D0597(uLocal_3290, -927.0851f, -2921.173f, 13.66304f, 1.738541f, 1.294742f, 32.59915f, 34.66404f, 0, 1, 1, 2);
									unk_0xAE099C1ADC89C331(uLocal_3290, uLocal_3291, 4000, 1, 1);
									unk_0x43F06392C4EF25E0(0);
									unk_0x59B038076F830627(0);
									unk_0x062C9995BFD27B2A(true, 0, 3000, 1, 0, 0);
									if (unk_0x724D816EA203A79E(iLocal_3271))
									{
										unk_0xCF6040807CC0E4A5(&iLocal_3271);
									}
									if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
									{
										unk_0x641B19E156645A92(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), -918.6157f, -2926.646f, 12.9667f, 1, 0, 0, 1);
										unk_0x019CE76D5286C95C(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 47.9465f);
									}
									else
									{
										unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), -918.6157f, -2926.646f, 12.9667f, 1, 0, 0, 1);
										unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), 47.9465f);
									}
									if (!unk_0x36CEFBE9B745A58D(iLocal_3222))
									{
										func_17(&uLocal_3578, 2, iLocal_3222, "MOLLY", 0, 1);
										unk_0xCF27C3A90021C5A5(iLocal_3222, 1);
									}
									unk_0x1D1C393C7689E5A6(4f, 0f, 3);
									unk_0xF3C7BD26F94560D9(4);
									unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
									iLocal_3529 = 0;
									iLocal_3183++;
									break;
								
								case 1:
									if (!unk_0x36CEFBE9B745A58D(iLocal_3222))
									{
										if (unk_0x96044E39418AAF17(iLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											if (iLocal_3529 == 0)
											{
												if (unk_0x8FD30584EB38411B(uLocal_3208) > 0.3f)
												{
													if (func_256(&uLocal_3578, "T1M4AUD", "SOL3_GETOUT", 7, 0, 0, 0))
													{
														unk_0x1D1C393C7689E5A6(6f, 7f, 4);
														iLocal_3529 = 1;
													}
												}
											}
											if (unk_0x8FD30584EB38411B(uLocal_3208) > 0.5f)
											{
												unk_0x9961B404F89D0597(uLocal_3291, -926.0932f, -2916.891f, 14.47074f, -3.471637f, 1.294743f, 125.8315f, 34.66404f, 0, 1, 1, 2);
												unk_0x9961B404F89D0597(uLocal_3290, -926.0932f, -2916.891f, 14.47074f, -3.471636f, 1.294743f, 135.4584f, 34.66404f, 0, 1, 1, 2);
												unk_0xAE099C1ADC89C331(uLocal_3290, uLocal_3291, 4000, 1, 1);
												iLocal_3206 = unk_0x105601648511CC64();
												iLocal_3183++;
											}
										}
									}
									break;
								
								case 2:
									if (!unk_0x36CEFBE9B745A58D(iLocal_3222))
									{
										if (unk_0x96044E39418AAF17(iLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
										{
											if ((iLocal_3206 != -1 && unk_0x3D875C2512206692(0) == 4) && (unk_0x105601648511CC64() - iLocal_3206) >= 2230)
											{
												unk_0x9216004FAC08D1DC("CamPushInNeutral", 0, 0);
												unk_0xC4BA30B532FE260F(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
												iLocal_3206 = -1;
											}
											if (unk_0x8FD30584EB38411B(uLocal_3208) > 0.85f)
											{
												unk_0x59B038076F830627(1);
												unk_0x43F06392C4EF25E0(1);
												unk_0x062C9995BFD27B2A(false, 0, 3000, 1, 0, 0);
												unk_0xF3F01A78937DC905(0f);
												iLocal_3220 = 346732587;
												unk_0x0DE091F0061B5F19(iLocal_3220, joaat("v_ilev_ss_door5_r"), -935.641f, -2927.185f, 14.0945f, 1, 1, 0);
												unk_0xC0D8311F0A9723A0(iLocal_3220, 1f, 0, 1);
												unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
												if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
												{
													unk_0x932E201A82D2EDB8(unk_0xBC25C936A095B5BA(), unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0), 0);
													if (unk_0x3D875C2512206692(1) != 4 && unk_0x3D875C2512206692(0) == 4)
													{
														unk_0x2EB4D46478766D87(unk_0xBC25C936A095B5BA(), 1, 0);
													}
												}
												unk_0xCF27C3A90021C5A5(iLocal_3222, 0);
												unk_0x1E463345CF429A99();
												unk_0x1D1C393C7689E5A6(0f, 4f, 3);
												iLocal_3195 = unk_0x105601648511CC64();
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
					unk_0xF72F6BB050622804(iLocal_3220, 5, 0, 1);
					if (iLocal_3552 == 0)
					{
						if (unk_0x724D816EA203A79E(iLocal_3222))
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_3222))
							{
								if (unk_0x4DBCE270B354E123(iLocal_3222, -935.3f, -2927.3f, 13f, 1.5f, 1.5f, 2f, 0, 1, 0))
								{
									unk_0x10B5C0C7337B8420(-1, "Trevor_4_747_Molly_Open_Doors", -935.1f, -2927.6f, 13.2f, 0, 0, 0, 0);
									iLocal_3552 = 1;
								}
							}
						}
					}
				}
				if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					if (unk_0x144E80F5C46A6B75("SOL_3_MAIN_CHASE"))
					{
						unk_0xC1300D0F3A74E20B("SOL_3_MAIN_CHASE");
					}
					if (unk_0x144E80F5C46A6B75("SOL_3_ARRIVE_AT_HANGAR"))
					{
						unk_0xC1300D0F3A74E20B("SOL_3_ARRIVE_AT_HANGAR");
					}
					if (!unk_0x144E80F5C46A6B75("SOL_3_ON_FOOT_CHASE"))
					{
						unk_0xD6423910AAD8A379("SOL_3_ON_FOOT_CHASE");
					}
				}
				if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					func_245();
				}
				if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -929.7908f, -2928.213f, 12.19499f, -935.7283f, -2924.685f, 15.44832f, 4.75f, 0, 1, 1))
				{
					if (iLocal_3468 == 0)
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_3222))
						{
							if (unk_0x96044E39418AAF17(iLocal_3222, "misssolomon_3", "molly_escapes_car_mol", 3))
							{
								unk_0x6C3BE67B02D72CDC(iLocal_3222, -1000f, 1);
							}
							unk_0x49D46EE47C9CCB66(iLocal_3222);
							unk_0x2E35C4FA5F0ED22F(iLocal_3222, 1);
							unk_0x641B19E156645A92(iLocal_3222, -934.8388f, -2932.831f, 12.9649f, 1, 0, 0, 1);
							unk_0x019CE76D5286C95C(iLocal_3222, 236.5739f);
							unk_0xB0C1A00D86375366(iLocal_3222, "BB_MOLLY_2", 1, 4, -1);
							if (unk_0xF9E082857622D91E("move_f@film_reel_arms"))
							{
								unk_0xE896C0AD02364F2A(iLocal_3222, "move_f@film_reel_arms", "run", 8f, -8f, -1, 49, 0, 0, 0, 0);
							}
							iLocal_3468 = 1;
						}
					}
					if (unk_0x724D816EA203A79E(iLocal_3266))
					{
						unk_0xCF6040807CC0E4A5(&iLocal_3266);
					}
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 5;
				}
				break;
			}
	}
}

void func_245()
{
	if (iLocal_3433 == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_3121[14]))
		{
			if (unk_0xE59B7F5A03335350(iLocal_3121[14], 0))
			{
				iLocal_3248 = unk_0x3187EF5798B5D209(iLocal_3121[14], -1, 0);
				unk_0x7A535CE1F001F3FE(iLocal_3248, joaat("weapon_pistol"), 1000, 1, 1);
				unk_0x77815D3407C6700D(iLocal_3248, 1, 0);
				unk_0x2E35C4FA5F0ED22F(iLocal_3248, 1);
				unk_0xFC3C88E2313FA926(iLocal_3248, 5);
				unk_0x65E471E4A2D56226(iLocal_3248, 150, 0);
				func_17(&uLocal_3578, 3, iLocal_3248, "TREV4POLICE3", 0, 1);
			}
		}
		iLocal_3433 = 1;
	}
	else if (iLocal_3432 == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_3248))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_3248))
			{
				unk_0xA4E856A8CD53B8DF(iLocal_3248);
				unk_0xE95574194EEDAEF7(iLocal_3248, unk_0x541C2AEF053615BC(iLocal_3248, 1), 5f, 0, 0);
				unk_0xC5A6DFE2B8987B17(&uLocal_3292);
				unk_0xA3981DED4FC2E56E(0, 0, 0);
				unk_0x40DD085221F706D0(0, unk_0xBC25C936A095B5BA(), 5000, 1);
				unk_0xB8CBD998685C0685(0, unk_0xBC25C936A095B5BA(), 0, 16);
				unk_0x535008C596714F9E(uLocal_3292);
				unk_0xA8E6405305C0D7DF(iLocal_3248, uLocal_3292);
				unk_0x02DAF06EA4F08219(&uLocal_3292);
				iLocal_3432 = 1;
			}
		}
	}
	else if (iLocal_3489 == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_3248))
		{
			if (!unk_0x36CEFBE9B745A58D(iLocal_3248))
			{
				if (!unk_0x5237AF95232D78C5(iLocal_3248, 0) && func_13(unk_0xBC25C936A095B5BA(), iLocal_3248) < 20f)
				{
					if (!func_255())
					{
						if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
						{
							func_17(&uLocal_3578, 4, iLocal_3248, "SOL3COP", 0, 1);
							if (func_246(&uLocal_3578, "T1M4AUD", "SOL3_MOLPOL", "SOL3_MOLPOL_2", 7, 0, 0))
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

bool func_246(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_254(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15807 = 0;
	Global_15814 = 0;
	Global_15809 = 0;
	Global_16791 = 1;
	Global_16793 = 0;
	Global_16797 = 0;
	StringCopy(&Global_16804, sParam3, 24);
	Global_2621441 = 0;
	return func_247(sParam2, iParam4, 0);
}

int func_247(char* sParam0, int iParam1, bool bParam2)
{
	Global_15801 = 0;
	if (Global_15800 == 0 || Global_15802 == 2)
	{
		if (Global_15800 != 0)
		{
			if (iParam1 > Global_15802)
			{
				if (Global_15807 == 0)
				{
					unk_0x1E08809A5041F85B(0);
					Global_14493.f_1 = 3;
					Global_15800 = 0;
					Global_15801 = 1;
					Global_15853 = 0;
					Global_15796 = 0;
					Global_15797 = 0;
					Global_15811 = 0;
					Global_15810 = 0;
					Global_14492 = 0;
				}
				else
				{
					func_212();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE6711F601F11B66B())
		{
			return 0;
		}
		if (func_253(8, -1))
		{
			return 0;
		}
		Global_15876 = { Global_15870 };
		func_252();
		Global_15089 = { Global_15254 };
		Global_15806 = Global_15807;
		Global_15813 = Global_15814;
		Global_2621442 = Global_2621441;
		Global_15815 = { Global_15831 };
		Global_15808 = Global_15809;
		Global_16790 = Global_16791;
		Global_16798 = { Global_16804 };
		Global_16792 = Global_16793;
		Global_16794 = Global_16795;
		Global_16796 = Global_16797;
		Global_15419.f_370 = Global_16789;
		Global_15419.f_368 = Global_16787;
		Global_15419.f_369 = Global_16788;
		Global_15796 = Global_15797;
		if (Global_15806)
		{
			unk_0x7CB6FD92BE491AD9(&Global_2363, 20);
			unk_0x7CB6FD92BE491AD9(&Global_2364, 17);
			unk_0x7CB6FD92BE491AD9(&Global_2365, 0);
			if (bParam2)
			{
				func_251();
				if (Global_3168[Global_14493 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14493.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14459 == 1)
			{
				return 0;
			}
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				if (unk_0xABB2AFD7539464EA(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (func_250())
				{
					return 0;
				}
				if (unk_0x7199482D96955B9E(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0x01666D754C368931(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0xE959459C9FB1C42E(unk_0xBC25C936A095B5BA(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70978)
				{
					if (unk_0x149E9368A11035DE(unk_0xBC25C936A095B5BA()))
					{
						return 0;
					}
					if (unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F()))
					{
						return 0;
					}
					if (unk_0x042228744678C7D4(unk_0xBC25C936A095B5BA()))
					{
						return 0;
					}
					if (unk_0x36210078ECC9DC40(unk_0xB5CEFD608600A09F()))
					{
						return 0;
					}
				}
			}
			if (func_224())
			{
				return 0;
			}
			else
			{
				switch (Global_14493.f_1)
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
				if (unk_0xFA30DFD0084E92FE(Global_2363, 9))
				{
					return 0;
				}
			}
			func_249();
			Global_15810 = bParam2;
		}
		Global_15802 = iParam1;
		StringCopy(&Global_15419, sParam0, 24);
		Global_14666 = 0;
		func_248();
		return 1;
	}
	if (Global_15800 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15802 || iParam1 == Global_15802)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_212();
	}
	return 0;
}

void func_248()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14668[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x1E08809A5041F85B(0);
	Global_15800 = 1;
}

void func_249()
{
	Global_15853 = Global_15852;
	Global_15847 = Global_15848;
	Global_15894 = { Global_15882 };
	Global_15900 = { Global_15888 };
	Global_15855 = Global_15854;
	Global_15924 = { Global_15906 };
	Global_15930 = { Global_15912 };
	Global_15936 = { Global_15918 };
	Global_15942 = { Global_15948 };
	Global_1678 = Global_1679;
	Global_1680 = Global_1681;
	Global_15811 = Global_15812;
	Global_15813 = Global_15814;
	Global_15815 = { Global_15831 };
	Global_15804 = Global_15805;
	Global_16816 = 0;
	Global_15849 = 0;
	Global_15850 = 0;
	unk_0x7CB6FD92BE491AD9(&Global_2364, 16);
}

int func_250()
{
	int iVar0;
	int iVar1;
	
	if (Global_70978)
	{
		iVar0 = 0;
		unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar1, 1);
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xCDE05E3688DE990D() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0xA0747FCBCF1D1424(unk_0xBC25C936A095B5BA(), 78, 1))
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

void func_251()
{
	if (func_58(14))
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[0 /*29*/])
			{
				Global_14493 = 0;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[1 /*29*/])
			{
				Global_14493 = 1;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[2 /*29*/])
			{
				Global_14493 = 2;
			}
			else
			{
				Global_14493 = 0;
			}
		}
	}
	else
	{
		Global_14493 = func_104();
		if (Global_14493 == 145)
		{
			Global_14493 = 3;
		}
		if (Global_70978)
		{
			Global_14493 = 3;
		}
		if (Global_14493 > 3)
		{
			Global_14493 = 3;
		}
	}
}

void func_252()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15089[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15089[iVar0 /*10*/].f_1), "", 24);
		Global_15089[iVar0 /*10*/].f_7 = 0;
		Global_15089[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15089.f_161 = -99;
	Global_15089.f_162 = { 0f, 0f, 0f };
}

bool func_253(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1363073.f_203[iParam1];
			}
			break;
	}
	return unk_0xFA30DFD0084E92FE(Global_1363073.f_1048, iParam0);
}

void func_254(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15254 = { *uParam0 };
	Global_1679 = iParam1;
	StringCopy(&Global_15870, sParam2, 24);
	Global_16789 = iParam5;
	if (iParam3 == 0)
	{
		Global_16787 = 1;
		Global_16785 = 0;
	}
	else
	{
		Global_16787 = 0;
		Global_16785 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16788 = 1;
		Global_16786 = 0;
	}
	else
	{
		Global_16788 = 0;
		Global_16786 = 1;
	}
}

int func_255()
{
	if (Global_15800 != 0 || unk_0xE6711F601F11B66B())
	{
		return 1;
	}
	return 0;
}

bool func_256(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_254(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15807 = 0;
	Global_15809 = 0;
	Global_15814 = 0;
	Global_16791 = 0;
	Global_16793 = 0;
	Global_16797 = 0;
	Global_2621441 = 0;
	return func_247(sParam2, iParam3, 0);
}

void func_257()
{
	if (unk_0x2F1B39E315395385(uLocal_3755[0]))
	{
		unk_0x2CA8D9DC16C6AF09(uLocal_3755[0], 0);
	}
	if (unk_0x2F1B39E315395385(uLocal_3755[1]))
	{
		unk_0x2CA8D9DC16C6AF09(uLocal_3755[1], 0);
	}
	if (unk_0x2F1B39E315395385(uLocal_3755[2]))
	{
		unk_0x2CA8D9DC16C6AF09(uLocal_3755[2], 0);
	}
	if (iLocal_3388 == 1)
	{
		unk_0x26D344275839A25E(iLocal_3217);
		iLocal_3396 = 0;
	}
}

void func_258(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7, bool bParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		if (unk_0xB34E411B0A4BF096(iParam0))
		{
			unk_0xD87F0F9CDF39238A(iParam0);
		}
		Var3 = { unk_0x541C2AEF053615BC(iParam0, 1) };
		if (bParam8)
		{
			Var0 = { unk_0xA4455714F3DCE207(iParam0, Param1) };
		}
		else
		{
			Var0 = { Param1 };
		}
		Var6 = { func_259(Var0 - Var3) };
		Var6 = { Var6 * Vector(fParam7, fParam7, fParam7) };
		unk_0x5EBD7EB63AD5FB1D(iParam0, 3, Var6, Param4, 0, 0, 1, 1, 0, 1);
	}
}

Vector3 func_259(struct<3> Param0)
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

void func_260(int iParam0, float fParam1)
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
		if (unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (unk_0xB34E411B0A4BF096(iParam0))
			{
				iVar0 = unk_0x47296952F125937B(iParam0);
				Var1 = { unk_0xE69565EA6CC00034(iVar0, (fParam1 + (unk_0xBBDA792448DB5A89((iLocal_1956 - 1)) * 2000f))) };
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
		unk_0x832ADB79A274D4E9(-9999.9f, -9999.9f, -9999.9f, 9999.9f, 9999.9f, 9999.9f, 1);
		Local_2656 = { Local_2656 + Vector((fLocal_1293 * -1f), (fLocal_1293 * -1f), (fLocal_1293 * -1f)) };
		Local_2659 = { Local_2659 + Vector(fLocal_1293, fLocal_1293, fLocal_1293) };
		Local_2650 = { Local_2656 };
		Local_2653 = { Local_2659 };
		unk_0x6935EBF9868982DC(Local_2650, Local_2653, 0, 0);
		iLocal_1956 = 0;
	}
}

void func_261()
{
	iLocal_89 = 1;
}

void func_262()
{
	if (iLocal_3333 == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_3258))
		{
			if (unk_0xB34E411B0A4BF096(iLocal_3258))
			{
				if (unk_0x5B80643EF917B728(iLocal_3258) > 55000f)
				{
					unk_0xF243B7A14FCFD0F4(joaat("firetruk"));
					unk_0xF243B7A14FCFD0F4(joaat("s_m_y_fireman_01"));
					unk_0x522053D86D6E1C7A("missheist_agency3aig_lift_waitped_a");
					if ((unk_0xD6513D668481290A(joaat("firetruk")) && unk_0xD6513D668481290A(joaat("s_m_y_fireman_01"))) && unk_0xF9E082857622D91E("missheist_agency3aig_lift_waitped_a"))
					{
						if (!unk_0x724D816EA203A79E(iLocal_3264))
						{
							unk_0x6C5F5B5F6894CCE3(-1129.566f, -2319.888f, 12.9445f, 10f, 0, 0, 0, 0);
							iLocal_3264 = unk_0x61C05BF08A1E0EFE(joaat("firetruk"), -1129.566f, -2319.888f, 12.9445f, 16.5423f, 1, 1, 0);
						}
						uLocal_3755[0] = unk_0xED4F33DE9A6C0964("scr_trev4_trailer_fire", -1151f, -2311f, 15f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
						if (iLocal_3388 == 0)
						{
							unk_0x10B5C0C7337B8420(iLocal_3217, "Trevor_4_747_Loud_Fire", -1151f, -2311f, 15f, 0, 0, 0, 0);
							iLocal_3388 = 1;
						}
						uLocal_3755[1] = unk_0xED4F33DE9A6C0964("scr_trev4_trailer_fire", -1140f, -2328f, 18f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
						uLocal_3755[2] = unk_0xED4F33DE9A6C0964("scr_trev4_trailer_fire", -1150f, -2327f, 19f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
						if (!unk_0x724D816EA203A79E(iLocal_3223[0]))
						{
							iLocal_3223[0] = unk_0xFD8987C090669BD5(iLocal_3264, 21, joaat("s_m_y_fireman_01"), -1, 1, 1);
							unk_0x2E35C4FA5F0ED22F(iLocal_3223[0], 1);
							unk_0x22321800954A532E(iLocal_3223[0], 1);
							unk_0x0F5785C647DA0152(iLocal_3223[0], -1147.07f, -2320.65f, 18.93f, 1101004800);
						}
						if (!unk_0x724D816EA203A79E(iLocal_3223[1]))
						{
							iLocal_3223[1] = unk_0x01B3635C3E8EDD81(21, joaat("s_m_y_fireman_01"), -1138.313f, -2313.277f, 12.9445f, 155.4271f, 1, 1);
							unk_0xE896C0AD02364F2A(iLocal_3223[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 8f, -8f, -1, 9, 0, 0, 0, 0);
							unk_0x2E35C4FA5F0ED22F(iLocal_3223[1], 1);
							unk_0x22321800954A532E(iLocal_3223[1], 1);
						}
						if (!unk_0x724D816EA203A79E(iLocal_3223[2]))
						{
							iLocal_3223[2] = unk_0x01B3635C3E8EDD81(21, joaat("s_m_y_fireman_01"), -1145.362f, -2309.387f, 12.9445f, 96.0786f, 1, 1);
							unk_0xE896C0AD02364F2A(iLocal_3223[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 8f, -8f, -1, 9, 0, 0, 0, 0);
							unk_0x2E35C4FA5F0ED22F(iLocal_3223[2], 1);
							unk_0x22321800954A532E(iLocal_3223[2], 1);
						}
						if (!unk_0x724D816EA203A79E(iLocal_3223[3]))
						{
							iLocal_3223[3] = unk_0x01B3635C3E8EDD81(21, joaat("s_m_y_fireman_01"), -1147.461f, -2314.511f, 13.1518f, 57.8707f, 1, 1);
							unk_0xE896C0AD02364F2A(iLocal_3223[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 8f, -8f, -1, 9, 0, 0, 0, 0);
							unk_0x2E35C4FA5F0ED22F(iLocal_3223[3], 1);
							unk_0x22321800954A532E(iLocal_3223[3], 1);
						}
						unk_0x2CA123B0622F495C(joaat("s_m_y_fireman_01"));
						unk_0x2CA123B0622F495C(joaat("firetruk"));
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
			if (unk_0x724D816EA203A79E(iLocal_3223[1]))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_3223[1]))
				{
					if (iLocal_3547[0] == 0)
					{
						if (unk_0x96044E39418AAF17(iLocal_3223[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 3))
						{
							iLocal_3547[0] = 1;
						}
					}
					if (iLocal_3547[0] == 1)
					{
						if (!unk_0x96044E39418AAF17(iLocal_3223[1], "missheist_agency3aig_lift_waitped_a", "idle_b", 3))
						{
							unk_0xEE7131C3C73E7282(iLocal_3223[1], -1);
							unk_0x22321800954A532E(iLocal_3223[1], 1);
							unk_0x2E35C4FA5F0ED22F(iLocal_3223[1], 0);
							iLocal_3543[0] = 1;
						}
					}
				}
			}
		}
		if (iLocal_3543[1] == 0)
		{
			if (unk_0x724D816EA203A79E(iLocal_3223[2]))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_3223[2]))
				{
					if (iLocal_3547[1] == 0)
					{
						if (unk_0x96044E39418AAF17(iLocal_3223[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 3))
						{
							iLocal_3547[1] = 1;
						}
					}
					if (iLocal_3547[1] == 1)
					{
						if (!unk_0x96044E39418AAF17(iLocal_3223[2], "missheist_agency3aig_lift_waitped_a", "idle_a", 3))
						{
							unk_0xEE7131C3C73E7282(iLocal_3223[2], -1);
							unk_0x22321800954A532E(iLocal_3223[2], 1);
							unk_0x2E35C4FA5F0ED22F(iLocal_3223[2], 0);
							iLocal_3543[1] = 1;
						}
					}
				}
			}
		}
		if (iLocal_3543[2] == 0)
		{
			if (unk_0x724D816EA203A79E(iLocal_3223[3]))
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_3223[3]))
				{
					if (iLocal_3547[2] == 0)
					{
						if (unk_0x96044E39418AAF17(iLocal_3223[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 3))
						{
							iLocal_3547[2] = 1;
						}
					}
					if (iLocal_3547[2] == 1)
					{
						if (!unk_0x96044E39418AAF17(iLocal_3223[3], "missheist_agency3aig_lift_waitped_a", "idle_c", 3))
						{
							unk_0xEE7131C3C73E7282(iLocal_3223[3], -1);
							unk_0x22321800954A532E(iLocal_3223[3], 1);
							unk_0x2E35C4FA5F0ED22F(iLocal_3223[3], 0);
							iLocal_3543[2] = 1;
						}
					}
				}
			}
		}
	}
}

void func_263()
{
	if (iLocal_3434 == 0)
	{
		unk_0xF243B7A14FCFD0F4(joaat("police3"));
		unk_0xF243B7A14FCFD0F4(joaat("s_m_y_cop_01"));
		unk_0x1B2A7C8188ADBE04(1, "BB_AIChase");
		if (unk_0xD6513D668481290A(joaat("police3")) && unk_0xD6513D668481290A(joaat("s_m_y_cop_01")))
		{
			if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
			{
				if (unk_0xB34E411B0A4BF096(iLocal_3258))
				{
					if (unk_0x5B80643EF917B728(iLocal_3258) > 15500f)
					{
						unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 2, 0);
						unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
						iLocal_3272[0] = unk_0x61C05BF08A1E0EFE(joaat("police3"), -847.2593f, -2379.987f, 15.9304f, 196.4921f, 1, 1, 0);
						iLocal_3251[0] = unk_0xFD8987C090669BD5(iLocal_3272[0], 6, joaat("s_m_y_cop_01"), -1, 1, 1);
						unk_0x2E35C4FA5F0ED22F(iLocal_3251[0], 1);
						unk_0x55662F9F262C2F9B(iLocal_3272[0], "SOL_3_POLICE_CARS_Group", 0);
						func_124(iLocal_3251[0], 0);
						unk_0x2D655AA68FA1736B(iLocal_3272[0], 1, 1, 0);
						unk_0x9E6D037EC3389728(iLocal_3272[0], 1, "BB_AIChase", 1);
						unk_0x7A535CE1F001F3FE(iLocal_3251[0], joaat("weapon_pistol"), 1000, 1, 1);
						unk_0x0FB6723EA68C0881(iLocal_3272[0], 1);
						unk_0x2CA123B0622F495C(joaat("police3"));
						unk_0x2CA123B0622F495C(joaat("s_m_y_cop_01"));
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
			if (unk_0x724D816EA203A79E(iLocal_3272[0]))
			{
				if (unk_0xE59B7F5A03335350(iLocal_3272[0], 0))
				{
					if (unk_0xB34E411B0A4BF096(iLocal_3272[0]))
					{
						unk_0x821B5D8CB4B20F84(iLocal_3272[0], fLocal_3323);
						if (unk_0x5B80643EF917B728(iLocal_3272[0]) > 13000f)
						{
							unk_0xD87F0F9CDF39238A(iLocal_3272[0]);
						}
					}
					else if (unk_0x724D816EA203A79E(iLocal_3251[0]))
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_3251[0]))
						{
							unk_0x2E35C4FA5F0ED22F(iLocal_3251[0], 1);
							if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
							{
								unk_0x8EF644F0EDA55FB7(iLocal_3251[0], unk_0xBC25C936A095B5BA());
								unk_0x22321800954A532E(iLocal_3251[0], 1);
							}
							else
							{
								unk_0xB8CBD998685C0685(iLocal_3251[0], unk_0xBC25C936A095B5BA(), 0, 16);
								unk_0x22321800954A532E(iLocal_3251[0], 1);
							}
							unk_0x4F5DAC981AF98536(1, "BB_AIChase");
							iLocal_3196 = unk_0x105601648511CC64();
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
				if (unk_0x105601648511CC64() > iLocal_3196 + 500)
				{
					if (unk_0x724D816EA203A79E(iLocal_3251[0]))
					{
						if (!unk_0x36CEFBE9B745A58D(iLocal_3251[0]))
						{
							if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
							{
								unk_0x1ADDCB77FC10E656(iLocal_3251[0], 16, 1);
								unk_0x1ADDCB77FC10E656(iLocal_3251[0], 1, 1);
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

void func_264()
{
	if (!iLocal_3335)
	{
		if (unk_0xE59B7F5A03335350(iLocal_3121[20], 0))
		{
			uLocal_3289 = unk_0x578D5D08EC980893("DEFAULT_SCRIPTED_CAMERA", 0);
			unk_0x348665177DBFB93B(uLocal_3289, 1);
			iLocal_3336 = 0;
			iLocal_3335 = 1;
		}
	}
	else if (func_279(&uLocal_28, 1, 0, 0) && iLocal_3437 == 0)
	{
		if (unk_0xF16DAFF595E80F7C())
		{
			unk_0x7456702622C62EA0(1);
		}
		if (func_255())
		{
			unk_0xEB233A3B7635D2AC();
			func_209();
		}
		if (iLocal_3365[2] == 0)
		{
			if (!unk_0x144E80F5C46A6B75("SOL_3_CHOPPER_CAM"))
			{
				unk_0xD6423910AAD8A379("SOL_3_CHOPPER_CAM");
			}
			unk_0xC4BA30B532FE260F(iLocal_3219, "Trevor_4_747_TV", 0, 1);
			iLocal_3365[2] = 1;
		}
		func_270(1, 1, 30, 5, 0);
		if (iLocal_3354 == 0)
		{
			unk_0x29CD142125FE177B(uLocal_3293, "SET_TEXT");
			func_269("TRV4_NEWS1");
			func_269("");
			unk_0xF9FBC2F3F73D94C9();
			iLocal_3354 = 1;
		}
		if (iLocal_3355 == 0)
		{
			unk_0x29CD142125FE177B(uLocal_3293, "SET_SCROLL_TEXT");
			unk_0xD44E04EBBDC4CE88(1f);
			unk_0xD44E04EBBDC4CE88(0f);
			func_269("TRV4_NEWS2");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(uLocal_3293, "SET_SCROLL_TEXT");
			unk_0xD44E04EBBDC4CE88(0f);
			unk_0xD44E04EBBDC4CE88(0f);
			func_269("TRV4_NEWS6");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(uLocal_3293, "SET_SCROLL_TEXT");
			unk_0xD44E04EBBDC4CE88(0f);
			unk_0xD44E04EBBDC4CE88(1f);
			func_269("TRV4_NEWS7");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(uLocal_3293, "SET_SCROLL_TEXT");
			unk_0xD44E04EBBDC4CE88(0f);
			unk_0xD44E04EBBDC4CE88(2f);
			func_269("TRV4_NEWS8");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(uLocal_3293, "SET_SCROLL_TEXT");
			unk_0xD44E04EBBDC4CE88(0f);
			unk_0xD44E04EBBDC4CE88(3f);
			func_269("TRV4_NEWS9");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(uLocal_3293, "SET_SCROLL_TEXT");
			unk_0xD44E04EBBDC4CE88(0f);
			unk_0xD44E04EBBDC4CE88(4f);
			func_269("TRV4_NEWS10");
			unk_0xF9FBC2F3F73D94C9();
			unk_0x29CD142125FE177B(uLocal_3293, "DISPLAY_SCROLL_TEXT");
			unk_0xD44E04EBBDC4CE88(1f);
			unk_0xD44E04EBBDC4CE88(0f);
			unk_0xF9FBC2F3F73D94C9();
			iLocal_3201 = (unk_0x105601648511CC64() - 5000);
			iLocal_3355 = 1;
		}
		if (unk_0x105601648511CC64() > iLocal_3201 + 5000)
		{
			func_268();
			iLocal_3201 = unk_0x105601648511CC64();
		}
		if (iLocal_3356 == 0)
		{
			if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
			{
				if (unk_0xB34E411B0A4BF096(iLocal_3258))
				{
					if (unk_0x5B80643EF917B728(iLocal_3258) > 25000f && unk_0x5B80643EF917B728(iLocal_3258) < 50000f)
					{
						unk_0x29CD142125FE177B(uLocal_3293, "SET_SCROLL_TEXT");
						unk_0xD44E04EBBDC4CE88(1f);
						unk_0xD44E04EBBDC4CE88(1f);
						func_269("TRV4_NEWS5");
						unk_0xF9FBC2F3F73D94C9();
						unk_0x29CD142125FE177B(uLocal_3293, "DISPLAY_SCROLL_TEXT");
						unk_0xD44E04EBBDC4CE88(1f);
						unk_0xD44E04EBBDC4CE88(1f);
						unk_0xF9FBC2F3F73D94C9();
						iLocal_3356 = 1;
					}
				}
			}
		}
		if (iLocal_3357 == 0)
		{
			if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
			{
				if (unk_0xB34E411B0A4BF096(iLocal_3258))
				{
					if (unk_0x5B80643EF917B728(iLocal_3258) > 77600f && unk_0x5B80643EF917B728(iLocal_3258) < 115000f)
					{
						unk_0x29CD142125FE177B(uLocal_3293, "SET_SCROLL_TEXT");
						unk_0xD44E04EBBDC4CE88(1f);
						unk_0xD44E04EBBDC4CE88(2f);
						func_269("TRV4_NEWS3");
						unk_0xF9FBC2F3F73D94C9();
						unk_0x29CD142125FE177B(uLocal_3293, "DISPLAY_SCROLL_TEXT");
						unk_0xD44E04EBBDC4CE88(1f);
						unk_0xD44E04EBBDC4CE88(2f);
						unk_0xF9FBC2F3F73D94C9();
						iLocal_3357 = 1;
					}
				}
			}
		}
		if (iLocal_3358 == 0)
		{
			if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
			{
				if (unk_0xB34E411B0A4BF096(iLocal_3258))
				{
					if (unk_0x5B80643EF917B728(iLocal_3258) > 115000f)
					{
						unk_0x29CD142125FE177B(uLocal_3293, "SET_SCROLL_TEXT");
						unk_0xD44E04EBBDC4CE88(1f);
						unk_0xD44E04EBBDC4CE88(3f);
						func_269("TRV4_NEWS4");
						unk_0xF9FBC2F3F73D94C9();
						unk_0x29CD142125FE177B(uLocal_3293, "DISPLAY_SCROLL_TEXT");
						unk_0xD44E04EBBDC4CE88(1f);
						unk_0xD44E04EBBDC4CE88(3f);
						unk_0xF9FBC2F3F73D94C9();
						iLocal_3358 = 1;
					}
				}
			}
		}
		unk_0xF14A31FD690DC3B0(uLocal_3184);
		unk_0x4B6031094354FED6(uLocal_3293, 255, 255, 255, 0, 0);
		if (iLocal_3336 == 0)
		{
			func_223(1, 1, 1, 0);
			unk_0x2FB83B8BD6C05FD2(uLocal_3289, "ROAD_VIBRATION_SHAKE", 1f);
			unk_0x348665177DBFB93B(uLocal_3289, 1);
			unk_0x062C9995BFD27B2A(true, 0, 3000, 1, 0, 0);
			unk_0x43F06392C4EF25E0(0);
			unk_0xD50A43D7C495F078(unk_0xB5CEFD608600A09F());
			func_267();
			iLocal_3336 = 1;
		}
		func_265();
		unk_0x4E0EC60D119222B1(6);
		unk_0x4E0EC60D119222B1(7);
		unk_0x4E0EC60D119222B1(8);
		unk_0x4E0EC60D119222B1(9);
		unk_0x4E0EC60D119222B1(1);
		unk_0x4E0EC60D119222B1(2);
		unk_0x4E0EC60D119222B1(15);
		unk_0x4E0EC60D119222B1(3);
		unk_0xBBC4195AD74D153D(0, 85, 1);
		unk_0x6C23D8FD3FB29BAA(0);
	}
	else if (iLocal_3336)
	{
		func_223(0, 1, 1, 0);
		unk_0x348665177DBFB93B(uLocal_3289, 0);
		unk_0x062C9995BFD27B2A(false, 0, 3000, 1, 0, 0);
		unk_0x43F06392C4EF25E0(1);
		if (unk_0x144E80F5C46A6B75("SOL_3_CHOPPER_CAM"))
		{
			unk_0xC1300D0F3A74E20B("SOL_3_CHOPPER_CAM");
		}
		unk_0x38FF8CB6377D36F6(iLocal_3219);
		func_243();
		unk_0x6C23D8FD3FB29BAA(1);
		iLocal_3365[2] = 0;
		iLocal_3336 = 0;
	}
}

void func_265()
{
	unk_0x2423B13D9CFAD1DD();
	func_266();
}

void func_266()
{
	Global_17206.f_134 = 1;
}

void func_267()
{
	Global_55974 = 1;
}

void func_268()
{
	if (iLocal_3186 > 4)
	{
		iLocal_3186 = 0;
	}
	unk_0x29CD142125FE177B(uLocal_3293, "DISPLAY_SCROLL_TEXT");
	unk_0x1E1FB49121565EB6(0);
	unk_0x1E1FB49121565EB6(iLocal_3186);
	unk_0xF9FBC2F3F73D94C9();
	iLocal_3186++;
}

void func_269(char* sParam0)
{
	unk_0x57016C44F10111F0(sParam0);
	unk_0x64989E60CF560CA1();
}

void func_270(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_278())
	{
		func_278();
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
		func_277(1, 200);
		if (iLocal_48 <= iParam2 && iLocal_43 == 0)
		{
			iLocal_48++;
			func_274(1, iLocal_48);
			if (iLocal_48 == iParam2)
			{
				iLocal_43 = 1;
				iLocal_49 = unk_0x491B2241281A03B7(iParam3, iParam2);
			}
		}
		else if (iLocal_48 > 0)
		{
			if (iLocal_48 > iLocal_49)
			{
				iLocal_48 = (iLocal_48 - 1);
				func_274(1, iLocal_48);
				if (iLocal_48 == iLocal_49)
				{
					iLocal_43 = 0;
				}
			}
		}
		if (bParam1)
		{
			func_271(1, 40, 1, 1, 1);
		}
	}
}

void func_271(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_278())
	{
		func_278();
	}
	else if (bParam0)
	{
		if (bParam2)
		{
			if (!func_273(0))
			{
				func_272(0);
			}
			else
			{
				unk_0x51DA985AC0B70E2E("digitalOverlay", "nscuzz1", 0.5f, fLocal_51, 1f, 0.2f, 0f, 255, 255, 255, iParam1, 0);
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
			if (!func_273(1))
			{
				func_272(1);
			}
			else
			{
				unk_0x51DA985AC0B70E2E("digitalOverlay", "nscuzz2", 0.5f, fLocal_52, 1f, 0.2f, 0f, 255, 255, 255, iParam1, 0);
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
			if (!func_273(2))
			{
				func_272(2);
			}
			else
			{
				unk_0x51DA985AC0B70E2E("digitalOverlay", "nscuzz3", 0.5f, fLocal_53, 1f, 0.2f, 0f, 255, 255, 255, iParam1, 0);
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

void func_272(int iParam0)
{
	if (iParam0 < 32)
	{
		unk_0xF0059F27F7BB6680(&iLocal_54, iParam0);
	}
}

int func_273(int iParam0)
{
	if (unk_0xFA30DFD0084E92FE(iLocal_54, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_274(bool bParam0, int iParam1)
{
	if (!func_278())
	{
		func_278();
	}
	else if (bParam0)
	{
		iLocal_46 = func_276(5);
		iLocal_45 = unk_0x491B2241281A03B7(0, 4);
		while (iLocal_47 == iLocal_46)
		{
			iLocal_46 = func_276(5);
		}
		if (iLocal_46 == 0)
		{
			if (!func_273(3))
			{
				func_272(3);
			}
			else
			{
				unk_0x51DA985AC0B70E2E("digitalOverlay", "Static1", 0.5f, 0.5f, (1f * func_275(bLocal_40)), (1f * func_275(bLocal_41)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_46 == 1)
		{
			if (!func_273(4))
			{
				func_272(4);
			}
			else
			{
				unk_0x51DA985AC0B70E2E("digitalOverlay", "Static2", 0.5f, 0.5f, (1f * func_275(bLocal_40)), (1f * func_275(bLocal_41)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_46 == 2)
		{
			if (!func_273(5))
			{
				func_272(5);
			}
			else
			{
				unk_0x51DA985AC0B70E2E("digitalOverlay", "Static3", 0.5f, 0.5f, (1f * func_275(bLocal_40)), (1f * func_275(bLocal_41)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_46 == 3)
		{
			if (!func_273(6))
			{
				func_272(6);
			}
			else
			{
				unk_0x51DA985AC0B70E2E("digitalOverlay", "Static4", 0.5f, 0.5f, (1f * func_275(bLocal_40)), (1f * func_275(bLocal_41)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
		if (iLocal_46 == 4)
		{
			if (!func_273(7))
			{
				func_272(7);
			}
			else
			{
				unk_0x51DA985AC0B70E2E("digitalOverlay", "Static5", 0.5f, 0.5f, (1f * func_275(bLocal_40)), (1f * func_275(bLocal_41)), 0f, 255, 255, 255, iParam1, 0);
			}
		}
	}
}

float func_275(bool bParam0)
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

int func_276(int iParam0)
{
	if (unk_0x491B2241281A03B7(0, 50) > 25)
	{
		bLocal_40 = true;
	}
	else
	{
		bLocal_40 = false;
	}
	if (unk_0x491B2241281A03B7(0, 50) > 25)
	{
		bLocal_41 = true;
	}
	else
	{
		bLocal_41 = false;
	}
	return unk_0x491B2241281A03B7(0, iParam0);
}

void func_277(bool bParam0, int iParam1)
{
	if (!func_278())
	{
		func_278();
	}
	else if (bParam0)
	{
		if (iLocal_42)
		{
			if (!func_273(8))
			{
				func_272(8);
			}
			else
			{
				unk_0x51DA985AC0B70E2E("digitalOverlay", "nscanline1", 0.5f, 0.5f, 1f, 1f, 0f, 255, 255, 255, iParam1, 0);
			}
			iLocal_42 = 0;
		}
		else
		{
			if (!func_273(8))
			{
				func_272(8);
			}
			else
			{
				unk_0x51DA985AC0B70E2E("digitalOverlay", "nscanline1", 0.5f, 0.5f, -1f, -1f, 0f, 255, 255, 255, iParam1, 0);
			}
			iLocal_42 = 1;
		}
	}
}

int func_278()
{
	unk_0x8AA3F48A15444B98("digitalOverlay", 0);
	if (unk_0x499783D01578C2D2("digitalOverlay"))
	{
		return 1;
	}
	return 0;
}

int func_279(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x105601648511CC64() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
				{
					if (func_285(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_284(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_284(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_285(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x105601648511CC64();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_283(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x105601648511CC64() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
					{
						if (!func_285(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x105601648511CC64();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_284(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_284(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_285(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x105601648511CC64();
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
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
				{
					if (!func_285(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_284(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_284(bParam1, bParam2, bParam3) || unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) || unk_0x74BCB6EDB1FFBFBA(unk_0xBC25C936A095B5BA(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_285(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x105601648511CC64() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
					{
						if (func_282(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_281(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) || func_281(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1) || unk_0x74BCB6EDB1FFBFBA(unk_0xBC25C936A095B5BA(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_282(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_283(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_292(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_280();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_280()
{
	unk_0xF0059F27F7BB6680(&Global_2364, 4);
}

int func_281(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_292(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!unk_0xE1C3A331B6951C3D(unk_0xB5CEFD608600A09F()))
		{
			unk_0xBBC4195AD74D153D(0, 140, 1);
			unk_0xBBC4195AD74D153D(0, 80, 1);
			if (unk_0xCB3E71B7B7FACCAF(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_282(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_292(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xBBC4195AD74D153D(0, 80, 1);
		if (unk_0xE92D56CE0416C875())
		{
			if (unk_0xCB3E71B7B7FACCAF(0, 80))
			{
				unk_0x4AED68BFACFB14CB(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_283(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x105601648511CC64()
		{
			return 1;
		}
	}
	return 0;
}

int func_284(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_292(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (!unk_0xE1C3A331B6951C3D(unk_0xB5CEFD608600A09F()))
		{
			unk_0xBBC4195AD74D153D(0, 140, 1);
			unk_0xBBC4195AD74D153D(0, 80, 1);
			if (unk_0xD3C4A010282C31F2(0, 80) && unk_0x105601648511CC64() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_285(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_292(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xBBC4195AD74D153D(0, 80, 1);
		if (unk_0xE92D56CE0416C875())
		{
			if (unk_0xD3C4A010282C31F2(0, 80) && unk_0x105601648511CC64() > Global_116)
			{
				unk_0x4AED68BFACFB14CB(0);
				return 1;
			}
		}
	}
	return 0;
}

void func_286(bool bParam0)
{
	if (bParam0)
	{
		func_290();
		if (Global_14493.f_1 == 10 || Global_14493.f_1 == 9)
		{
			unk_0xF0059F27F7BB6680(&Global_2364, 16);
		}
		Global_14493.f_1 = 1;
		if (func_289(0))
		{
			func_287(0);
		}
	}
	else if (Global_14493.f_1 == 1)
	{
		if (!Global_14493.f_1 == 0)
		{
			Global_14493.f_1 = 3;
		}
	}
}

void func_287(int iParam0)
{
	if (Global_14659)
	{
		func_288(0, 0);
	}
	if (Global_14493.f_1 == 10 || Global_14493.f_1 == 9)
	{
		unk_0xF0059F27F7BB6680(&Global_2364, 16);
	}
	if (unk_0x58E7DDFF8D17A82A())
	{
		unk_0x1E08809A5041F85B(0);
	}
	Global_15800 = 5;
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&Global_2363, 30);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_2363, 30);
	}
	if (!func_224())
	{
		Global_14493.f_1 = 3;
	}
}

void func_288(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_289(0))
		{
			Global_14659 = 1;
			if (bParam1)
			{
				unk_0x652515566BB40BA9(&Global_14430);
			}
			Global_14421 = { Global_14439[Global_14438 /*3*/] };
			unk_0x3D7D94BDD4D22C14(Global_14421);
		}
	}
	else if (Global_14659 == 1)
	{
		Global_14659 = 0;
		Global_14421 = { Global_14446[Global_14438 /*3*/] };
		if (bParam1)
		{
			unk_0x3D7D94BDD4D22C14(Global_14430);
		}
		else
		{
			unk_0x3D7D94BDD4D22C14(Global_14421);
		}
	}
}

int func_289(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14493.f_1 > 3)
		{
			if (unk_0xFA30DFD0084E92FE(Global_2363, 14))
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
	if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14493.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_290()
{
	if (Global_14493.f_1 == 9 || Global_14493.f_1 == 10)
	{
		Global_15853 = 0;
		Global_15849 = 1;
	}
}

void func_291(char* sParam0, int iParam1)
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, 1, iParam1);
}

int func_292(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x7930B3E9C919E90F())
	{
		return 0;
	}
	if (func_289(0))
	{
		return 0;
	}
	if (func_299())
	{
		return 0;
	}
	if (unk_0xF32BA80A2DED1FC6())
	{
		return 0;
	}
	if (Global_68280)
	{
		return 0;
	}
	if (unk_0xB731B8C5BCE89836(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53148)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 1))
		{
			if (unk_0x11030C52A0DDFF8C(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(3) == 3 || unk_0x3D875C2512206692(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(6) == 3 || unk_0x3D875C2512206692(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(4) == 3 || unk_0x3D875C2512206692(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xD3A0CD3AD9C3D22A(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(5) == 3 || unk_0x3D875C2512206692(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x5CFC8E6CC224744A(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x3D875C2512206692(2) == 3 || unk_0x3D875C2512206692(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x621126C4FACA4770() == 3 || unk_0x621126C4FACA4770() == 4)
			{
				return 0;
			}
			if (unk_0x4FD86C3E23A67AB9())
			{
				return 0;
			}
		}
	}
	if ((func_298() || func_297(Global_4456448.f_148478)) || func_296())
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
			iVar1 = func_295(unk_0xBC25C936A095B5BA(), 0);
			if (((unk_0xE8E192A5EFE0253F(iVar0, iVar1) || (unk_0x6F79ECA8C83E4357(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x6F79ECA8C83E4357(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x6F79ECA8C83E4357(iVar0) == joaat("riot2") && iVar1 == 0) && func_294(iVar0, 10)) && unk_0x3EB14CBD49DA0017(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (func_293(unk_0xB5CEFD608600A09F()))
	{
		return 0;
	}
	return 1;
}

int func_293(int iParam0)
{
	if (iParam0 != func_88())
	{
		if (func_178(iParam0, 1, 1))
		{
			return Global_2423644[iParam0 /*406*/].f_305.f_1 != -1;
		}
		else if ((Global_1312854 && iParam0 == unk_0xB5CEFD608600A09F()) && func_178(iParam0, 1, 0))
		{
			return Global_2423644[iParam0 /*406*/].f_305.f_1 != -1;
		}
	}
	return 0;
}

int func_294(int iParam0, int iParam1)
{
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (unk_0xA6BE0954FC6BAA16(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0x34374BDFA570F489(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_295(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (unk_0x5237AF95232D78C5(iParam0, iParam1))
		{
			iVar0 = unk_0x9FE9D386222EEE47(iParam0, iParam1);
			if (unk_0x724D816EA203A79E(iVar0))
			{
				iVar1 = unk_0x7C02672B11D4F65B(unk_0x6F79ECA8C83E4357(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x1AAF0C23233C57AF(iVar0, iVar3, 0))
					{
						if (unk_0x3187EF5798B5D209(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_296()
{
	return Global_2447942.f_16;
}

bool func_297(int iParam0)
{
	return iParam0 == 51;
}

var func_298()
{
	return Global_2447942.f_15;
}

bool func_299()
{
	return unk_0x105601648511CC64() <= Global_17345.f_5745 + 100;
}

void func_300(var uParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		if (unk_0xB34E411B0A4BF096(iParam1))
		{
			unk_0x821B5D8CB4B20F84(iParam1, fParam2);
			Var0 = { unk_0x541C2AEF053615BC(iParam1, 1) };
			Var3 = { unk_0xD7490CDEF40F3DA2(iParam1, 2) };
			unk_0x6125108F6208C1F6(uParam0, Var0);
			unk_0x3553F2A72957724E(uParam0, Var3, 2);
		}
	}
}

void func_301(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		unk_0xDC078F87049ECECE(iParam1, 0, 0);
		unk_0xD434A01DEA38A939(iParam1, 0, 0);
		unk_0x1E5C2A1EAB944289(iParam1, 1);
		unk_0x06D93FD5E4D394CF(iParam1, 1, 1, 1, 1, 1, 0, 0, 0);
		unk_0x9E6D037EC3389728(iParam1, iParam3, sParam2, 1);
		Var0 = { unk_0x541C2AEF053615BC(iParam1, 1) };
		unk_0x6125108F6208C1F6(uParam0, Var0);
		unk_0x3553F2A72957724E(uParam0, unk_0xD7490CDEF40F3DA2(iParam1, 2), 2);
	}
}

void func_302()
{
	if (iLocal_3218 != -1)
	{
		if (iLocal_3389 == 1)
		{
			if (iLocal_3381 == 0)
			{
				unk_0x26D344275839A25E(iLocal_3218);
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
				unk_0x26D344275839A25E(iLocal_3213);
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
				unk_0x26D344275839A25E(iLocal_3214);
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
				unk_0x26D344275839A25E(iLocal_3215);
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
				unk_0x26D344275839A25E(iLocal_3216);
				iLocal_3395 = 0;
				iLocal_3384 = 1;
			}
		}
	}
}

void func_303()
{
	if (unk_0x724D816EA203A79E(iLocal_3121[19]))
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_3121[19], 0))
		{
			if (!unk_0xAAED47028764A78D(iLocal_3121[19]))
			{
				unk_0x0FB6723EA68C0881(iLocal_3121[19], 1);
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_3121[7]))
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_3121[7], 0))
		{
			if (!unk_0xAAED47028764A78D(iLocal_3121[7]))
			{
				unk_0x0FB6723EA68C0881(iLocal_3121[7], 1);
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_3121[8]))
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_3121[8], 0))
		{
			if (!unk_0xAAED47028764A78D(iLocal_3121[8]))
			{
				unk_0x0FB6723EA68C0881(iLocal_3121[8], 1);
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_3121[9]))
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_3121[9], 0))
		{
			if (!unk_0xAAED47028764A78D(iLocal_3121[9]))
			{
				unk_0x0FB6723EA68C0881(iLocal_3121[9], 1);
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_3121[10]))
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_3121[10], 0))
		{
			if (!unk_0xAAED47028764A78D(iLocal_3121[10]))
			{
				unk_0x0FB6723EA68C0881(iLocal_3121[10], 1);
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_3121[11]))
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_3121[11], 0))
		{
			if (!unk_0xAAED47028764A78D(iLocal_3121[11]))
			{
				unk_0x0FB6723EA68C0881(iLocal_3121[11], 1);
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_3121[13]))
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_3121[13], 0))
		{
			if (!unk_0xAAED47028764A78D(iLocal_3121[13]))
			{
				unk_0x0FB6723EA68C0881(iLocal_3121[13], 1);
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_3121[14]))
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_3121[14], 0))
		{
			if (!unk_0xAAED47028764A78D(iLocal_3121[14]))
			{
				unk_0x0FB6723EA68C0881(iLocal_3121[14], 1);
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_3121[15]))
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_3121[15], 0))
		{
			if (!unk_0xAAED47028764A78D(iLocal_3121[15]))
			{
				unk_0x0FB6723EA68C0881(iLocal_3121[15], 1);
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_3121[16]))
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_3121[16], 0))
		{
			if (!unk_0xAAED47028764A78D(iLocal_3121[16]))
			{
				unk_0x0FB6723EA68C0881(iLocal_3121[16], 1);
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_3121[17]))
	{
		if (!unk_0x1D403DFADBC2DE3C(iLocal_3121[17], 0))
		{
			if (!unk_0xAAED47028764A78D(iLocal_3121[17]))
			{
				unk_0x0FB6723EA68C0881(iLocal_3121[17], 1);
			}
		}
	}
}

void func_304()
{
	if (func_335())
	{
		fLocal_3324 = 0.5f;
	}
	else if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
	{
		if (unk_0x2D175DF90F6F05C3(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)) > 40f)
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
	if (!unk_0x1D403DFADBC2DE3C(iLocal_3258, 0))
	{
		if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
		{
			if (unk_0xB34E411B0A4BF096(iLocal_3258))
			{
				if (iLocal_3359 == 0)
				{
					if (unk_0x5B80643EF917B728(iLocal_3258) < 10000f)
					{
						if (func_16(unk_0xBC25C936A095B5BA(), iLocal_3258, 1) < 100f || unk_0xD1DC4B08247A4317(iLocal_3258))
						{
							func_331(iLocal_3258, unk_0xBC25C936A095B5BA(), &fLocal_3323, 1f, 40f, 55f, 100f, 1.7f, 1f, fLocal_3324, 0);
							unk_0x821B5D8CB4B20F84(iLocal_3258, fLocal_3323);
							func_305(iLocal_3258, fLocal_3323);
						}
						else
						{
							func_331(iLocal_3258, unk_0xBC25C936A095B5BA(), &fLocal_3323, 0.6f, 40f, 50f, 60f, 1.7f, 1f, fLocal_3324, 0);
							unk_0x821B5D8CB4B20F84(iLocal_3258, fLocal_3323);
							func_305(iLocal_3258, fLocal_3323);
						}
					}
				}
				else if (func_16(unk_0xBC25C936A095B5BA(), iLocal_3258, 1) > 175f)
				{
					fLocal_3323 = 0.6f;
					unk_0x821B5D8CB4B20F84(iLocal_3258, fLocal_3323);
					func_305(iLocal_3258, fLocal_3323);
				}
				else if (unk_0x5B80643EF917B728(iLocal_3258) < 10000f)
				{
					func_331(iLocal_3258, unk_0xBC25C936A095B5BA(), &fLocal_3323, 1f, 25f, 40f, 180f, 1.7f, 1f, fLocal_3324, 0);
					unk_0x821B5D8CB4B20F84(iLocal_3258, fLocal_3323);
					func_305(iLocal_3258, fLocal_3323);
				}
				if (unk_0x5B80643EF917B728(iLocal_3258) > 10000f && unk_0x5B80643EF917B728(iLocal_3258) < 23000f)
				{
					if (unk_0xE59B7F5A03335350(iLocal_3121[8], 0))
					{
						func_331(iLocal_3121[8], unk_0xBC25C936A095B5BA(), &fLocal_3323, 1f, 25f, 30f, 50f, 1.7f, 0.5f, fLocal_3324, 1);
						unk_0x821B5D8CB4B20F84(iLocal_3258, fLocal_3323);
						func_305(iLocal_3258, fLocal_3323);
					}
					else
					{
						func_331(iLocal_3258, unk_0xBC25C936A095B5BA(), &fLocal_3323, 1f, 25f, 35f, 180f, 1.7f, 0.5f, fLocal_3324, 1);
						unk_0x821B5D8CB4B20F84(iLocal_3258, fLocal_3323);
						func_305(iLocal_3258, fLocal_3323);
					}
				}
				if (unk_0x5B80643EF917B728(iLocal_3258) > 23000f && unk_0x5B80643EF917B728(iLocal_3258) < 32000f)
				{
					if (unk_0x724D816EA203A79E(iLocal_3121[7]))
					{
						if (unk_0xE59B7F5A03335350(iLocal_3121[7], 0))
						{
							func_331(iLocal_3121[7], unk_0xBC25C936A095B5BA(), &fLocal_3323, 1f, 20f, 30f, 100f, 1.8f, 1f, fLocal_3324, 0);
							unk_0x821B5D8CB4B20F84(iLocal_3258, fLocal_3323);
							func_305(iLocal_3258, fLocal_3323);
						}
						else if (unk_0x724D816EA203A79E(iLocal_3121[8]))
						{
							if (unk_0xE59B7F5A03335350(iLocal_3121[8], 0))
							{
								func_331(iLocal_3121[8], unk_0xBC25C936A095B5BA(), &fLocal_3323, 1f, 10f, 20f, 40f, 1.8f, 1f, fLocal_3324, 0);
								unk_0x821B5D8CB4B20F84(iLocal_3258, fLocal_3323);
								func_305(iLocal_3258, fLocal_3323);
							}
							else
							{
								func_331(iLocal_3258, unk_0xBC25C936A095B5BA(), &fLocal_3323, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3324, 0);
								unk_0x821B5D8CB4B20F84(iLocal_3258, fLocal_3323);
								func_305(iLocal_3258, fLocal_3323);
							}
						}
						else
						{
							func_331(iLocal_3258, unk_0xBC25C936A095B5BA(), &fLocal_3323, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3324, 0);
							unk_0x821B5D8CB4B20F84(iLocal_3258, fLocal_3323);
							func_305(iLocal_3258, fLocal_3323);
						}
					}
					else if (unk_0x724D816EA203A79E(iLocal_3121[8]))
					{
						if (unk_0xE59B7F5A03335350(iLocal_3121[8], 0))
						{
							func_331(iLocal_3121[8], unk_0xBC25C936A095B5BA(), &fLocal_3323, 1f, 10f, 20f, 40f, 1.8f, 1f, fLocal_3324, 0);
							unk_0x821B5D8CB4B20F84(iLocal_3258, fLocal_3323);
							func_305(iLocal_3258, fLocal_3323);
						}
						else
						{
							func_331(iLocal_3258, unk_0xBC25C936A095B5BA(), &fLocal_3323, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3324, 0);
							unk_0x821B5D8CB4B20F84(iLocal_3258, fLocal_3323);
							func_305(iLocal_3258, fLocal_3323);
						}
					}
					else
					{
						func_331(iLocal_3258, unk_0xBC25C936A095B5BA(), &fLocal_3323, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3324, 0);
						unk_0x821B5D8CB4B20F84(iLocal_3258, fLocal_3323);
						func_305(iLocal_3258, fLocal_3323);
					}
				}
				if (unk_0x5B80643EF917B728(iLocal_3258) > 32000f && unk_0x5B80643EF917B728(iLocal_3258) < 39000f)
				{
					if (unk_0x724D816EA203A79E(iLocal_3121[7]))
					{
						if (unk_0xE59B7F5A03335350(iLocal_3121[7], 0))
						{
							func_331(iLocal_3121[7], unk_0xBC25C936A095B5BA(), &fLocal_3323, 1f, 22f, 25f, 100f, 1.8f, 0.5f, fLocal_3324, 1);
							unk_0x821B5D8CB4B20F84(iLocal_3258, fLocal_3323);
							func_305(iLocal_3258, fLocal_3323);
						}
						else
						{
							func_331(iLocal_3258, unk_0xBC25C936A095B5BA(), &fLocal_3323, 1f, 25f, 35f, 150f, 1.8f, 0.5f, fLocal_3324, 1);
							unk_0x821B5D8CB4B20F84(iLocal_3258, fLocal_3323);
							func_305(iLocal_3258, fLocal_3323);
						}
					}
					else
					{
						func_331(iLocal_3258, unk_0xBC25C936A095B5BA(), &fLocal_3323, 1f, 25f, 35f, 150f, 1.8f, 0.5f, fLocal_3324, 1);
						unk_0x821B5D8CB4B20F84(iLocal_3258, fLocal_3323);
						func_305(iLocal_3258, fLocal_3323);
					}
				}
				if (unk_0x5B80643EF917B728(iLocal_3258) > 39000f && unk_0x5B80643EF917B728(iLocal_3258) < 56000f)
				{
					if (unk_0xE59B7F5A03335350(iLocal_3121[8], 0))
					{
						func_331(iLocal_3121[8], unk_0xBC25C936A095B5BA(), &fLocal_3323, 1f, 25f, 40f, 100f, 1.8f, 1f, fLocal_3324, 0);
						unk_0x821B5D8CB4B20F84(iLocal_3258, fLocal_3323);
						func_305(iLocal_3258, fLocal_3323);
					}
					else
					{
						func_331(iLocal_3258, unk_0xBC25C936A095B5BA(), &fLocal_3323, 1f, 25f, 35f, 150f, 1.8f, 1f, fLocal_3324, 0);
						unk_0x821B5D8CB4B20F84(iLocal_3258, fLocal_3323);
						func_305(iLocal_3258, fLocal_3323);
					}
				}
				if (unk_0x5B80643EF917B728(iLocal_3258) > 56000f && unk_0x5B80643EF917B728(iLocal_3258) < 65000f)
				{
					if (unk_0xE59B7F5A03335350(iLocal_3121[11], 0))
					{
						func_331(iLocal_3121[11], unk_0xBC25C936A095B5BA(), &fLocal_3323, 1f, 25f, 30f, 100f, 1.8f, 1f, fLocal_3324, 0);
						unk_0x821B5D8CB4B20F84(iLocal_3258, fLocal_3323);
						func_305(iLocal_3258, fLocal_3323);
					}
					else
					{
						func_331(iLocal_3258, unk_0xBC25C936A095B5BA(), &fLocal_3323, 1f, 25f, 35f, 100f, 1.8f, 1f, fLocal_3324, 0);
						unk_0x821B5D8CB4B20F84(iLocal_3258, fLocal_3323);
						func_305(iLocal_3258, fLocal_3323);
					}
				}
				if (unk_0x5B80643EF917B728(iLocal_3258) > 65000f && unk_0x5B80643EF917B728(iLocal_3258) < 90000f)
				{
					if (unk_0x724D816EA203A79E(iLocal_3121[13]))
					{
						if (unk_0xE59B7F5A03335350(iLocal_3121[13], 0))
						{
							func_331(iLocal_3121[13], unk_0xBC25C936A095B5BA(), &fLocal_3323, 1f, 30f, 35f, 50f, 1.8f, 1f, fLocal_3324, 0);
							unk_0x821B5D8CB4B20F84(iLocal_3258, fLocal_3323);
							func_305(iLocal_3258, fLocal_3323);
						}
						else
						{
							func_331(iLocal_3258, unk_0xBC25C936A095B5BA(), &fLocal_3323, 1f, 45f, 55f, 150f, 1.8f, 1f, fLocal_3324, 0);
							unk_0x821B5D8CB4B20F84(iLocal_3258, fLocal_3323);
							func_305(iLocal_3258, fLocal_3323);
						}
					}
					else
					{
						func_331(iLocal_3258, unk_0xBC25C936A095B5BA(), &fLocal_3323, 1f, 45f, 55f, 150f, 1.8f, 1f, fLocal_3324, 0);
						unk_0x821B5D8CB4B20F84(iLocal_3258, fLocal_3323);
						func_305(iLocal_3258, fLocal_3323);
					}
				}
				if (unk_0x5B80643EF917B728(iLocal_3258) > 90000f && unk_0x5B80643EF917B728(iLocal_3258) < 110000f)
				{
					func_331(iLocal_3258, unk_0xBC25C936A095B5BA(), &fLocal_3323, 1f, 60f, 70f, 150f, 1.5f, 0.5f, fLocal_3324, 1);
					unk_0x821B5D8CB4B20F84(iLocal_3258, fLocal_3323);
					func_305(iLocal_3258, fLocal_3323);
				}
				if (unk_0x5B80643EF917B728(iLocal_3258) > 110000f)
				{
					func_331(iLocal_3258, unk_0xBC25C936A095B5BA(), &fLocal_3323, 1f, 100f, 120f, 150f, 1.6f, 1f, fLocal_3324, 0);
					unk_0x821B5D8CB4B20F84(iLocal_3258, fLocal_3323);
					func_305(iLocal_3258, fLocal_3323);
				}
			}
		}
	}
}

void func_305(int iParam0, float fParam1)
{
	float fVar0;
	struct<3> Var1;
	int iVar4;
	
	fVar0 = unk_0x11F9F9006143871A();
	fVar0 = (fVar0 * 1000f);
	bLocal_106 = false;
	if (!bLocal_88)
	{
		if (bLocal_87)
		{
			func_330();
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				Var1 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
				unk_0x6C5F5B5F6894CCE3(Var1, 1000f, 1, 0, 0, 0);
			}
			bLocal_88 = true;
		}
	}
	else if (!bLocal_87)
	{
		func_206();
		bLocal_88 = false;
	}
	if (bLocal_87)
	{
		fParam1 = 1f;
		unk_0x598D851D7D0D2BA3(0f);
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
		if (unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (unk_0xB34E411B0A4BF096(iParam0))
			{
				if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
				{
					if (func_329(unk_0xBC25C936A095B5BA(), iParam0))
					{
						iLocal_86 = 1;
					}
					else
					{
						iLocal_86 = 0;
					}
				}
				fLocal_1275 = unk_0x5B80643EF917B728(iParam0);
				unk_0x821B5D8CB4B20F84(iParam0, ((fParam1 * fLocal_1276) * fLocal_1278));
				if (bLocal_85)
				{
					func_328(iParam0, fLocal_1275);
					func_327(iParam0, fLocal_1285);
					if (fLocal_1280 > 1000f)
					{
						if (iLocal_1962 == 0)
						{
							func_326(iParam0, fLocal_1285);
						}
						fVar0 = ((fLocal_1275 + 4000f) + (unk_0xBBDA792448DB5A89(iLocal_1962) * 2000f));
						func_325(iParam0, fVar0, fLocal_1279);
						iLocal_1962++;
						if (iLocal_1962 > 2)
						{
							fLocal_1280 = 0f;
						}
					}
					else
					{
						iLocal_1962 = 0;
						fLocal_1280 = (fLocal_1280 + (unk_0x11F9F9006143871A() * 1000f));
					}
				}
			}
		}
		iVar4 = 0;
		if (unk_0xE59B7F5A03335350(iParam0, 0))
		{
			if (unk_0xB34E411B0A4BF096(iParam0))
			{
				iVar4 = 1;
			}
		}
		if (fLocal_1275 == 0f || unk_0x17FAADF9916EF741())
		{
			iVar4 = 1;
		}
		if (iVar4 && !bLocal_93)
		{
			if (!iLocal_75)
			{
				func_322(iParam0, ((fParam1 * fLocal_1276) * fLocal_1278), 0);
				if (!iLocal_96)
				{
				}
				iLocal_96 = 0;
			}
			if (bLocal_78)
			{
				func_321(iParam0);
			}
			if (!iLocal_75)
			{
				func_308(iParam0, ((fParam1 * fLocal_1276) * fLocal_1278), 0);
			}
		}
		if (iLocal_83)
		{
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
				{
					iLocal_3164 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
					Local_2641 = { unk_0x541C2AEF053615BC(iLocal_3164, 1) };
					unk_0x4A162BFE80EDA54D(iLocal_3164, &fLocal_989, &fLocal_990, &fLocal_991, &fLocal_992);
				}
			}
			iLocal_83 = 0;
		}
		if (iLocal_82)
		{
			if (unk_0x724D816EA203A79E(iLocal_3164))
			{
				func_198(iLocal_3165);
				iLocal_3165 = iLocal_3164;
			}
			if (unk_0xE59B7F5A03335350(iLocal_3165, 0))
			{
				unk_0x641B19E156645A92(iLocal_3165, Local_2641, 1, 0, 0, 1);
				unk_0xC239B590ECA50DD0(iLocal_3165, fLocal_989, fLocal_990, fLocal_991, fLocal_992);
			}
			fLocal_1274 = fLocal_1277;
			iLocal_75 = 1;
			iLocal_82 = 0;
		}
		if (iLocal_75)
		{
			while (!func_306(&iParam0, fLocal_1274))
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

int func_306(int iParam0, float fParam1)
{
	if (!iLocal_90)
	{
		iLocal_75 = 1;
		func_193();
		if (unk_0xE59B7F5A03335350(*iParam0, 0))
		{
			if (unk_0xB34E411B0A4BF096(*iParam0))
			{
				unk_0xD87F0F9CDF39238A(*iParam0);
				unk_0x3F91283C7E2D2183(*iParam0);
			}
			if (!iLocal_1949 == -1)
			{
				while (!func_307(iParam0, iLocal_1949, fParam1, 1, 0, 0, 0, 0))
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
		if (unk_0xE59B7F5A03335350(*iParam0, 0))
		{
			if (unk_0xB34E411B0A4BF096(*iParam0))
			{
				unk_0x821B5D8CB4B20F84(*iParam0, ((1f * fLocal_1276) * fLocal_1278));
				func_307(iParam0, iLocal_1949, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_1275 = fParam1;
		iLocal_1956 = 0;
		iLocal_1959 = 0;
		fLocal_1290 = 0f;
		fLocal_1289 = 0f;
		func_308(*iParam0, ((1f * fLocal_1276) * fLocal_1278), 1);
		func_322(*iParam0, ((1f * fLocal_1276) * fLocal_1278), 1);
		func_321(*iParam0);
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

int func_307(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	float fVar0;
	
	if (iParam1 > 0)
	{
		unk_0x1B2A7C8188ADBE04(iParam1, &cLocal_2668);
		if (unk_0x00D24B3F2A5CD22C(iParam1, &cLocal_2668))
		{
			if (unk_0xE59B7F5A03335350(*uParam0, 0))
			{
				if (!unk_0xB34E411B0A4BF096(*uParam0))
				{
					unk_0x346478B12F69D4E3(*uParam0, 0);
					if (bParam4)
					{
						unk_0xE37240B7B5886F43(*uParam0, iParam1, &cLocal_2668, 1092616192, 786603);
					}
					else
					{
						if (iParam1 != iLocal_1957 && iParam1 != iLocal_1958)
						{
							if (bParam7)
							{
								unk_0x9CBD4853E502D342(*uParam0, iParam1, &cLocal_2668, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								unk_0x9CBD4853E502D342(*uParam0, iParam1, &cLocal_2668, 1 | 4, 0, 786603);
							}
							else
							{
								unk_0x9E6D037EC3389728(*uParam0, iParam1, &cLocal_2668, 1);
							}
						}
						else
						{
							unk_0x9E6D037EC3389728(*uParam0, iParam1, &cLocal_2668, 1);
						}
						unk_0x57C1D06186DCC318(*uParam0, fParam2);
						if (bParam5)
						{
							unk_0xC1C651D8C6AF61E6(*uParam0, 1);
						}
						return 1;
					}
				}
				else if (unk_0x47296952F125937B(*uParam0) == unk_0xE42C8D4CE70B2D35(iParam1, &cLocal_2668))
				{
					fVar0 = unk_0x5B80643EF917B728(*uParam0);
					unk_0x57C1D06186DCC318(*uParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						unk_0xD87F0F9CDF39238A(*uParam0);
						unk_0x1B2A7C8188ADBE04(iParam1, &cLocal_2668);
					}
					if (bParam5)
					{
						unk_0xC1C651D8C6AF61E6(*uParam0, 1);
					}
					return 1;
				}
				else
				{
					unk_0xD87F0F9CDF39238A(*uParam0);
					unk_0x346478B12F69D4E3(*uParam0, 0);
					if (bParam4)
					{
						unk_0xE37240B7B5886F43(*uParam0, iParam1, &cLocal_2668, 1092616192, 786603);
					}
					else if (iParam1 != iLocal_1957 && iParam1 != iLocal_1958)
					{
						if (bParam7)
						{
							unk_0x9CBD4853E502D342(*uParam0, iParam1, &cLocal_2668, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							unk_0x9CBD4853E502D342(*uParam0, iParam1, &cLocal_2668, 1 | 4, 0, 786603);
						}
						else
						{
							unk_0x9E6D037EC3389728(*uParam0, iParam1, &cLocal_2668, 1);
						}
					}
					else
					{
						unk_0x9E6D037EC3389728(*uParam0, iParam1, &cLocal_2668, 1);
					}
					unk_0x57C1D06186DCC318(*uParam0, fParam2);
					if (bParam5)
					{
						unk_0xC1C651D8C6AF61E6(*uParam0, 1);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_308(int iParam0, float fParam1, bool bParam2)
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
	
	bVar15 = unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F());
	uVar16 = unk_0x451E6C7D03F23009();
	uVar17 = unk_0x5C9E0DAF2A1EEF29();
	bVar18 = false;
	if (bVar15)
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar2 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		}
		Var9 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
	}
	if (unk_0xE59B7F5A03335350(iParam0, 0))
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
								if (func_320(iLocal_2877[iVar0]))
								{
									unk_0xF0059F27F7BB6680(&(iLocal_1894[iVar0]), 0);
								}
								else if (unk_0x7512ED01F3F46714(iLocal_2877[iVar0]))
								{
									unk_0xF0059F27F7BB6680(&(iLocal_1894[iVar0]), 2);
								}
								unk_0x7CB6FD92BE491AD9(&(iLocal_1894[iVar0]), 1);
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
								if (fVar12 < func_319(iLocal_1822[iVar0]))
								{
									if (func_320(iLocal_2877[iVar0]))
									{
										unk_0xF0059F27F7BB6680(&(iLocal_1894[iVar0]), 0);
									}
									else if (unk_0x7512ED01F3F46714(iLocal_2877[iVar0]))
									{
										unk_0xF0059F27F7BB6680(&(iLocal_1894[iVar0]), 2);
									}
									unk_0x7CB6FD92BE491AD9(&(iLocal_1894[iVar0]), 1);
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
					unk_0x1B2A7C8188ADBE04(iLocal_1822[iVar0], &cLocal_2668);
					if (unk_0xFA30DFD0084E92FE(iLocal_1894[iVar0], 0))
					{
						unk_0xF243B7A14FCFD0F4(func_202());
						bVar14 = unk_0xD6513D668481290A(func_202());
					}
					else if (!bLocal_102 && ((!unk_0xFA30DFD0084E92FE(iLocal_1894[iVar0], 2) && uVar16) || (unk_0xFA30DFD0084E92FE(iLocal_1894[iVar0], 2) && uVar17)))
					{
						bVar14 = true;
					}
					else
					{
						unk_0xF243B7A14FCFD0F4(func_205());
						bVar14 = unk_0xD6513D668481290A(func_205());
					}
					if (bVar14)
					{
						if (!unk_0x724D816EA203A79E(iLocal_3121[iVar0]))
						{
							unk_0xF243B7A14FCFD0F4(iLocal_2877[iVar0]);
							if (unk_0xD6513D668481290A(iLocal_2877[iVar0]) && unk_0x00D24B3F2A5CD22C(iLocal_1822[iVar0], &cLocal_2668))
							{
								if (fLocal_1275 >= (fLocal_1137[iVar0] - (fLocal_1288 * fParam1)))
								{
									if ((iLocal_89 || bParam2) || (!bLocal_106 && !func_318(Local_2535[iVar0 /*3*/], Var9, 5f, fLocal_1286)))
									{
										if (bLocal_85)
										{
											func_317(Local_2535[iVar0 /*3*/], Var9, fLocal_1279);
										}
										iLocal_3121[iVar0] = unk_0x61C05BF08A1E0EFE(iLocal_2877[iVar0], Local_2535[iVar0 /*3*/], 0f, 0, 0, 0);
										if (iLocal_2877[iVar0] == joaat("polmav"))
										{
											unk_0x7170EF3CEB4D0224(iLocal_3121[iVar0], 0);
										}
										if (uLocal_98 && !unk_0xFA30DFD0084E92FE(iLocal_1894[iVar0], 0))
										{
											func_316(iLocal_3121[iVar0]);
										}
										if (unk_0xFA30DFD0084E92FE(iLocal_1894[iVar0], 3))
										{
											unk_0x656194E145691D3E(iLocal_3121[iVar0], 1);
										}
										unk_0xD5874E4A4BF782FC(iLocal_3121[iVar0], Local_2535[iVar0 /*3*/], 0, 0, 1);
										unk_0xC239B590ECA50DD0(iLocal_3121[iVar0], fLocal_993[iVar0], fLocal_1029[iVar0], fLocal_1065[iVar0], fLocal_1101[iVar0]);
										if (unk_0x7C28D15641461C68(iLocal_2877[iVar0]) || unk_0x7512ED01F3F46714(iLocal_2877[iVar0]))
										{
											unk_0xF0A40F19AAB79E88(iLocal_3121[iVar0], 1084227584);
										}
										if (!unk_0xFA30DFD0084E92FE(iLocal_1894[iVar0], 0))
										{
											unk_0x2D655AA68FA1736B(iLocal_3121[iVar0], 1, 1, 0);
											if (unk_0x6E06C0DB9B43570D() > 19 || unk_0x6E06C0DB9B43570D() < 7)
											{
												unk_0x93D3868AE0D83B7C(iLocal_3121[iVar0], 3);
											}
										}
										unk_0x346478B12F69D4E3(iLocal_3121[iVar0], 1);
										unk_0x2CA123B0622F495C(iLocal_2877[iVar0]);
										iLocal_1954 = (iLocal_1954 - 1);
										iLocal_1858[iVar0]++;
										bLocal_106 = true;
									}
								}
							}
						}
						else if (!unk_0x1D403DFADBC2DE3C(iLocal_3121[iVar0], 0) && unk_0xE59B7F5A03335350(iLocal_3121[iVar0], 0))
						{
							unk_0xD5874E4A4BF782FC(iLocal_3121[iVar0], Local_2535[iVar0 /*3*/], 0, 0, 1);
							unk_0xC239B590ECA50DD0(iLocal_3121[iVar0], fLocal_993[iVar0], fLocal_1029[iVar0], fLocal_1065[iVar0], fLocal_1101[iVar0]);
							if (unk_0x7C28D15641461C68(iLocal_2877[iVar0]) || unk_0x7512ED01F3F46714(iLocal_2877[iVar0]))
							{
								unk_0xF0A40F19AAB79E88(iLocal_3121[iVar0], 1084227584);
							}
							unk_0x346478B12F69D4E3(iLocal_3121[iVar0], 1);
							unk_0x2CA123B0622F495C(iLocal_2877[iVar0]);
							iLocal_1954 = (iLocal_1954 - 1);
							iLocal_1858[iVar0]++;
						}
					}
				}
				else if (iLocal_1858[iVar0] == 2)
				{
					unk_0x1B2A7C8188ADBE04(iLocal_1822[iVar0], &cLocal_2668);
					if (!unk_0xFA30DFD0084E92FE(iLocal_1894[iVar0], 1))
					{
						bVar14 = false;
						if (unk_0xFA30DFD0084E92FE(iLocal_1894[iVar0], 0))
						{
							unk_0xF243B7A14FCFD0F4(func_202());
							bVar14 = unk_0xD6513D668481290A(func_202());
							iVar19 = 2;
						}
						else if (!bLocal_102 && ((!unk_0xFA30DFD0084E92FE(iLocal_1894[iVar0], 2) && uVar16) || (unk_0xFA30DFD0084E92FE(iLocal_1894[iVar0], 2) && uVar17)))
						{
							bVar14 = true;
							iVar19 = 1;
						}
						else
						{
							unk_0xF243B7A14FCFD0F4(func_205());
							bVar14 = unk_0xD6513D668481290A(func_205());
							iVar19 = 0;
						}
						if (!unk_0x1D403DFADBC2DE3C(iLocal_3121[iVar0], 0))
						{
							if (!bLocal_106 && unk_0x1AAF0C23233C57AF(iLocal_3121[iVar0], -1, 0))
							{
								if (bVar14)
								{
									if ((unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(iLocal_3121[iVar0], 1), Var9) < 10000f || bParam2) || iLocal_89)
									{
										func_314(&(iLocal_3121[iVar0]), iVar19, 1);
										unk_0xF0059F27F7BB6680(&(iLocal_1894[iVar0]), 1);
									}
								}
							}
						}
					}
					if (unk_0xE59B7F5A03335350(iLocal_3121[iVar0], 0))
					{
						if (fLocal_1275 >= fLocal_1137[iVar0])
						{
							if (14 > iLocal_1947)
							{
								fVar12 = (fLocal_1275 - fLocal_1137[iVar0]);
								fVar12 = (fVar12 * fLocal_1173[iVar0]);
								if (unk_0x00D24B3F2A5CD22C(iLocal_1822[iVar0], &cLocal_2668))
								{
									if (fVar12 < unk_0x2FB219F9AD4BD760(iLocal_1822[iVar0], &cLocal_2668))
									{
										Var3 = { unk_0x541C2AEF053615BC(iLocal_3121[iVar0], 1) };
										Var6 = { unk_0x87DF5F0B1BCDA381(iLocal_1822[iVar0], fVar12, &cLocal_2668) };
										if (((!func_318(Var3, Var9, 5f, fLocal_1286) && func_318(Var6, Var9, 5f, fLocal_1286)) && !iLocal_89) && !bParam2)
										{
											if (!unk_0xFA30DFD0084E92FE(iLocal_1894[iVar0], 1))
											{
												func_314(&(iLocal_3121[iVar0]), iVar19, 1);
											}
											iLocal_1947++;
											iLocal_1858[iVar0]++;
										}
										else if (((!bLocal_106 || unk_0xFA30DFD0084E92FE(iLocal_1894[iVar0], 1)) || iLocal_89) || bParam2)
										{
											if (func_307(&(iLocal_3121[iVar0]), iLocal_1822[iVar0], fVar12, 1, 0, 0, bLocal_104, bLocal_103))
											{
												unk_0x821B5D8CB4B20F84(iLocal_3121[iVar0], (fParam1 * fLocal_1173[iVar0]));
												if (unk_0xE59B7F5A03335350(iLocal_3121[iVar0], 0))
												{
													if (unk_0xFA30DFD0084E92FE(iLocal_1894[iVar0], 0))
													{
														unk_0x2D655AA68FA1736B(iLocal_3121[iVar0], 1, 1, 0);
														unk_0x0FB6723EA68C0881(iLocal_3121[iVar0], 1);
														unk_0x93D3868AE0D83B7C(iLocal_3121[iVar0], 2);
														if (!unk_0x7512ED01F3F46714(iLocal_2877[iVar0]))
														{
															unk_0x1A40AA7E9E62F2DD(iLocal_3121[iVar0], 1);
														}
													}
												}
												if (!unk_0xFA30DFD0084E92FE(iLocal_1894[iVar0], 1))
												{
													func_314(&(iLocal_3121[iVar0]), iVar19, 1);
												}
												iLocal_1947++;
												iLocal_1858[iVar0]++;
											}
										}
									}
									else
									{
										if (!unk_0xFA30DFD0084E92FE(iLocal_1894[iVar0], 1))
										{
											func_314(&(iLocal_3121[iVar0]), iVar19, 1);
										}
										iLocal_1947++;
										iLocal_1858[iVar0]++;
									}
								}
							}
							else
							{
								if (!unk_0xFA30DFD0084E92FE(iLocal_1894[iVar0], 1))
								{
									func_314(&(iLocal_3121[iVar0]), iVar19, 1);
								}
								iLocal_1947++;
								iLocal_1858[iVar0]++;
							}
						}
					}
					else
					{
						if (!unk_0xFA30DFD0084E92FE(iLocal_1894[iVar0], 1))
						{
							func_314(&(iLocal_3121[iVar0]), iVar19, 1);
						}
						iLocal_1947++;
						iLocal_1858[iVar0]++;
					}
				}
				else if (iLocal_1858[iVar0] == 3)
				{
					if (unk_0xE59B7F5A03335350(iLocal_3121[iVar0], 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_3121[iVar0]))
						{
							iVar1 = unk_0x3187EF5798B5D209(iLocal_3121[iVar0], -1, 0);
							if (!unk_0x36CEFBE9B745A58D(iVar1))
							{
								if (bVar15)
								{
									if (((!bLocal_79 && !iLocal_76) && !bLocal_95) && (((!bLocal_104 && !bLocal_103) && unk_0xE921F8171F0733B3(unk_0xBC25C936A095B5BA(), iLocal_3121[iVar0])) || func_313(iLocal_3121[iVar0])))
									{
										if (unk_0x724D816EA203A79E(iVar2))
										{
											bVar14 = false;
											if (bLocal_97)
											{
												bVar14 = true;
											}
											else
											{
												fVar13 = unk_0x8910237449BB6F79(iVar2);
												if (fVar13 < 1f)
												{
													bVar14 = true;
												}
												else if (unk_0x357058E632979E65((fVar13 - unk_0x8910237449BB6F79(iLocal_3121[iVar0]))) > 15f)
												{
													bVar14 = true;
												}
												else if (!func_312(iLocal_3121[iVar0], iVar2, 45f))
												{
													bVar14 = true;
												}
												else if (func_310(iVar2, iLocal_3121[iVar0], 0))
												{
													bVar14 = true;
												}
											}
											if (bVar14)
											{
												func_309(iLocal_3121[iVar0]);
												iLocal_1858[iVar0]++;
											}
										}
									}
									else
									{
										unk_0x821B5D8CB4B20F84(iLocal_3121[iVar0], (fParam1 * fLocal_1173[iVar0]));
									}
								}
							}
							else
							{
								unk_0xD87F0F9CDF39238A(iLocal_3121[iVar0]);
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
					if (unk_0xE59B7F5A03335350(iLocal_3121[iVar0], 0))
					{
						if (!unk_0xB34E411B0A4BF096(iLocal_3121[iVar0]))
						{
							iLocal_1858[iVar0]++;
						}
						else
						{
							iVar1 = unk_0x3187EF5798B5D209(iLocal_3121[iVar0], -1, 0);
							if (!unk_0x36CEFBE9B745A58D(iVar1))
							{
								unk_0x821B5D8CB4B20F84(iLocal_3121[iVar0], (fParam1 * fLocal_1173[iVar0]));
							}
							else
							{
								unk_0xD87F0F9CDF39238A(iLocal_3121[iVar0]);
							}
							if (unk_0x00D24B3F2A5CD22C(iLocal_1822[iVar0], &cLocal_2668))
							{
								if (fLocal_1275 > (fLocal_1137[iVar0] + unk_0x2FB219F9AD4BD760(iLocal_1822[iVar0], &cLocal_2668)))
								{
									unk_0xD87F0F9CDF39238A(iLocal_3121[iVar0]);
								}
							}
							else
							{
								unk_0xD87F0F9CDF39238A(iLocal_3121[iVar0]);
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
						if (unk_0xE59B7F5A03335350(iLocal_3121[iVar0], 0))
						{
							iVar1 = unk_0x3187EF5798B5D209(iLocal_3121[iVar0], -1, 0);
							if (!unk_0x36CEFBE9B745A58D(iVar1))
							{
								iVar20 = unk_0xF4FCC3C1048FF2AB(iVar1, 242628503);
								if (iVar20 == 7)
								{
									fVar13 = unk_0x8910237449BB6F79(iLocal_3121[iVar0]);
									if (fVar13 < 8f)
									{
										fVar13 = 8f;
									}
									if (fVar13 > 62.9f)
									{
										fVar13 = 62.9f;
									}
									unk_0xE36D78F8D1781255(iVar1, fVar13);
								}
							}
						}
						if (!bLocal_87 && !bLocal_100)
						{
							if (iLocal_1822[iVar0] > 0)
							{
								unk_0x4F5DAC981AF98536(iLocal_1822[iVar0], &cLocal_2668);
							}
						}
						if (!bLocal_77)
						{
							if (!bLocal_105)
							{
								func_198(iLocal_3121[iVar0]);
							}
						}
						else if (unk_0x724D816EA203A79E(iLocal_3121[iVar0]))
						{
							unk_0xCF6040807CC0E4A5(&(iLocal_3121[iVar0]));
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
		func_197();
	}
}

void func_309(int iParam0)
{
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		func_199(iParam0);
		unk_0x6D7523100DA5D907(iParam0, 786603);
	}
}

int func_310(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		Var0 = { unk_0x541C2AEF053615BC(iParam0, 1) };
	}
	if (unk_0xE59B7F5A03335350(iParam1, 0))
	{
		Var3 = { unk_0x541C2AEF053615BC(iParam1, 1) };
		if (bParam2)
		{
			Var15 = { unk_0xB5D9AE572C19509E(iParam1) };
			Var12 = { Var15 / FtoV(unk_0x652D2EEEF1D3E62C(Var15)) };
		}
		else
		{
			Var6 = { unk_0xA4455714F3DCE207(iParam1, 0f, 5f, 0f) };
			Var12 = { Var6 - Var3 };
		}
	}
	Var9 = { Var3 - Var0 };
	Var9.f_2 = 0f;
	Var12.f_2 = 0f;
	if (func_311(Var9, Var12) < 0f)
	{
		return 1;
	}
	return 0;
}

float func_311(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_312(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		Var0 = { unk_0xA43418B5859810A6(iParam0, 0) };
	}
	else
	{
		return 0;
	}
	if (unk_0xE59B7F5A03335350(iParam1, 0))
	{
		Var3 = { unk_0xA43418B5859810A6(iParam1, 0) };
	}
	else
	{
		return 0;
	}
	Var0.f_2 = 0f;
	Var3.f_2 = 0f;
	fVar6 = func_311(Var0, Var3);
	if (fVar6 < 0f)
	{
		return 0;
	}
	fVar6 = unk_0x77211CE25DED4FDB(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1);
	if (!fVar6 < fParam2)
	{
		return 0;
	}
	return 1;
}

int func_313(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bLocal_101)
	{
		iVar1 = unk_0x3E12B546F3F2597A();
		if (!unk_0x1D403DFADBC2DE3C(iVar1, 0))
		{
			iVar2 = unk_0x6F79ECA8C83E4357(iVar1);
			if (iVar2 == joaat("phantom"))
			{
				if (unk_0x6E80E5225F67328D(iVar1))
				{
					if (unk_0xA6705B5DA0B723DE(iVar1, &iVar0))
					{
						if (unk_0xE59B7F5A03335350(iVar0, 0))
						{
							if (unk_0xE921F8171F0733B3(iVar0, uParam0))
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

int func_314(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(*uParam0, 0))
	{
		if (unk_0x1AAF0C23233C57AF(*uParam0, -1, 0))
		{
			if (iParam1 == 2)
			{
				iVar0 = unk_0xFD8987C090669BD5(*uParam0, 6, func_202(), -1, 0, 0);
				unk_0x4106FAF8AA1D69D5(iVar0, iLocal_2684);
				unk_0x2CA123B0622F495C(func_202());
			}
			else if (iParam1 == 1)
			{
				iVar0 = unk_0xD11996326E5BD97E(*uParam0, 1);
				if (unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(*uParam0)))
				{
					unk_0x92C13E9A4A1DA028(iVar0, 1, 4096, -1);
				}
			}
			else
			{
				iVar0 = unk_0xFD8987C090669BD5(*uParam0, 4, func_205(), -1, 0, 0);
				if (bLocal_107)
				{
					unk_0x2CA123B0622F495C(func_205());
				}
			}
			if (bParam2)
			{
				unk_0xF82197F205B9D8FD(iVar0, 1);
				unk_0x751846449040F7EC(iVar0, 0);
				unk_0xC8FD3EBBB90E8D7F(iVar0, 32, 0);
			}
			if (bLocal_108)
			{
				unk_0xABA7AE40608505F2(iVar0, 8192, 1);
				unk_0xABA7AE40608505F2(iVar0, 65536, 1);
				unk_0xABA7AE40608505F2(iVar0, 2, 0);
				unk_0xD7E19B03E0EB54E5(*uParam0, 1);
			}
			unk_0x2E35C4FA5F0ED22F(iVar0, 1);
			func_315(iVar0);
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

void func_315(int iParam0)
{
	if (unk_0x724D816EA203A79E(iParam0))
	{
		unk_0x02537C8C1BEEB477(&iParam0);
	}
}

void func_316(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x491B2241281A03B7(0, 12);
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
			unk_0x914C5DE0B15B8B59(iParam0, 0, 0);
			break;
		
		case 1:
			unk_0x914C5DE0B15B8B59(iParam0, 2, 2);
			break;
		
		case 2:
			unk_0x914C5DE0B15B8B59(iParam0, 4, 4);
			break;
		
		case 3:
			unk_0x914C5DE0B15B8B59(iParam0, 27, 27);
			break;
		
		case 4:
			unk_0x914C5DE0B15B8B59(iParam0, 7, 7);
			break;
		
		case 5:
			unk_0x914C5DE0B15B8B59(iParam0, 73, 73);
			break;
		
		case 6:
			unk_0x914C5DE0B15B8B59(iParam0, 68, 68);
			break;
		
		case 7:
			unk_0x914C5DE0B15B8B59(iParam0, 62, 62);
			break;
		
		case 8:
			unk_0x914C5DE0B15B8B59(iParam0, 132, 132);
			break;
		
		case 9:
			unk_0x914C5DE0B15B8B59(iParam0, 117, 0);
			break;
		
		case 10:
			unk_0x914C5DE0B15B8B59(iParam0, 52, 52);
			break;
		
		case 11:
			unk_0x914C5DE0B15B8B59(iParam0, 88, 88);
			break;
		
		case 12:
			unk_0x914C5DE0B15B8B59(iParam0, 1, 1);
			break;
		
		case 13:
			unk_0x914C5DE0B15B8B59(iParam0, 36, 36);
			break;
		
		case 14:
			unk_0x914C5DE0B15B8B59(iParam0, 95, 95);
			break;
		
		default:
			unk_0x914C5DE0B15B8B59(iParam0, 73, 73);
			break;
	}
}

void func_317(struct<3> Param0, struct<3> Param3, float fParam6)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if (!bLocal_88)
	{
		if (!func_318(Param0, Param3, fParam6, 200f))
		{
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				iVar1 = unk_0x3E12B546F3F2597A();
				if (!unk_0x1D403DFADBC2DE3C(iVar1, 0))
				{
					if (unk_0x4DBCE270B354E123(iVar1, Param0, fParam6, fParam6, fParam6, 0, 1, 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0xEDAD35A0D81ED3FB(Param0, fParam6, 0, 0, 0, 0, 0, 0);
			}
		}
	}
}

int func_318(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7)
{
	if (!unk_0x17FAADF9916EF741())
	{
		if (!bLocal_88)
		{
			if (!iLocal_75)
			{
				if (unk_0xA8CEACB4F35AE058(Param3 - Param0) - fParam6) < (fParam7 * fParam7)
				{
					if (unk_0x33CC9445B2DF9387(Param0, fParam6))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

float func_319(int iParam0)
{
	var uVar0;
	
	unk_0x1B2A7C8188ADBE04(iParam0, &cLocal_2668);
	while (!unk_0x00D24B3F2A5CD22C(iParam0, &cLocal_2668))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	uVar0 = unk_0x2FB219F9AD4BD760(iParam0, &cLocal_2668);
	unk_0x4F5DAC981AF98536(iParam0, &cLocal_2668);
	return uVar0;
}

int func_320(int iParam0)
{
	if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("polmav")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff"))
	{
		return 1;
	}
	return 0;
}

void func_321(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	bool bVar7;
	bool bVar8;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		Var1 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
	}
	if (unk_0xE59B7F5A03335350(iParam0, 0))
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
						if (unk_0x4DBCE270B354E123(iParam0, Local_2489[iVar0 /*3*/], fLocal_1273, fLocal_1273, fLocal_1273, 0, 1, 0))
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
						if (!unk_0x724D816EA203A79E(iLocal_3105[iVar0]))
						{
							unk_0xF243B7A14FCFD0F4(iLocal_2861[iVar0]);
							if (unk_0xD6513D668481290A(iLocal_2861[iVar0]))
							{
								if ((iLocal_75 || iLocal_89) || (!bLocal_106 && !func_318(Local_2489[iVar0 /*3*/], Var1, 5f, fLocal_1286)))
								{
									if (bLocal_85)
									{
										func_317(Local_2489[iVar0 /*3*/], Var1, fLocal_1279);
									}
									iLocal_3105[iVar0] = unk_0x61C05BF08A1E0EFE(iLocal_2861[iVar0], Local_2489[iVar0 /*3*/], 0f, 0, 0, 0);
									if (iLocal_2861[iVar0] == joaat("polmav"))
									{
										unk_0x7170EF3CEB4D0224(iLocal_3105[iVar0], 0);
									}
									unk_0xC239B590ECA50DD0(iLocal_3105[iVar0], fLocal_1209[iVar0], fLocal_1225[iVar0], fLocal_1241[iVar0], fLocal_1257[iVar0]);
									unk_0x2CA123B0622F495C(iLocal_2861[iVar0]);
									if (unk_0x5E87CB0495C97732(iLocal_3105[iVar0], func_203()))
									{
										unk_0x0FB6723EA68C0881(iLocal_3105[iVar0], 1);
										if (!unk_0x7512ED01F3F46714(iLocal_2861[iVar0]))
										{
											unk_0x1A40AA7E9E62F2DD(iLocal_3105[iVar0], 1);
										}
									}
									if (unk_0x5E87CB0495C97732(iLocal_3105[iVar0], func_204()))
									{
										unk_0x914C5DE0B15B8B59(iLocal_3105[iVar0], 0, 0);
									}
									unk_0x656194E145691D3E(iLocal_3105[iVar0], 1);
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
						if (unk_0xE59B7F5A03335350(iLocal_3105[iVar0], 0))
						{
							Var4 = { unk_0x541C2AEF053615BC(iLocal_3105[iVar0], 1) };
						}
						if (fLocal_1287 == 0f || unk_0xB7A628320EFF8E47(Var1, Var4) < (fLocal_1287 * fLocal_1287))
						{
							if (!func_310(iLocal_3105[iVar0], iParam0, 0))
							{
								if (!bLocal_77)
								{
									func_198(iLocal_3105[iVar0]);
								}
								else
								{
									unk_0xCF6040807CC0E4A5(&(iLocal_3105[iVar0]));
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
		func_200();
	}
}

void func_322(int iParam0, float fParam1, int iParam2)
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
	bVar18 = unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F());
	uVar19 = unk_0x451E6C7D03F23009();
	uVar20 = unk_0x5C9E0DAF2A1EEF29();
	if (bVar18)
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iVar5 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		}
		Var12 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
	}
	iVar1 = 0;
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (unk_0xB34E411B0A4BF096(iParam0))
		{
			fLocal_1275 = unk_0x5B80643EF917B728(iParam0);
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
									if (func_320(iLocal_2685[iVar0]))
									{
										unk_0xF0059F27F7BB6680(&(iLocal_1646[iVar0]), 0);
									}
									else if (unk_0x7512ED01F3F46714(iLocal_2685[iVar0]))
									{
										unk_0xF0059F27F7BB6680(&(iLocal_1646[iVar0]), 2);
									}
									unk_0x7CB6FD92BE491AD9(&(iLocal_1646[iVar0]), 1);
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
								func_324(iVar0, 1090519040);
							}
						}
						else
						{
							fVar15 = (fLocal_1275 - fLocal_813[iVar0]);
							if (fVar15 >= 0f)
							{
								if (fVar15 < func_319(iLocal_1294[iVar0]))
								{
									if (func_320(iLocal_2685[iVar0]))
									{
										unk_0xF0059F27F7BB6680(&(iLocal_1646[iVar0]), 0);
									}
									else if (unk_0x7512ED01F3F46714(iLocal_2685[iVar0]))
									{
										unk_0xF0059F27F7BB6680(&(iLocal_1646[iVar0]), 2);
									}
									unk_0x7CB6FD92BE491AD9(&(iLocal_1646[iVar0]), 1);
									iLocal_1955++;
									iLocal_1470[iVar0]++;
								}
								else
								{
									func_324(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_324(iVar0, 1090519040);
					}
				}
				else if (iLocal_1470[iVar0] == 1)
				{
					unk_0x1B2A7C8188ADBE04(iLocal_1294[iVar0], &cLocal_2668);
					bVar17 = false;
					if (unk_0xFA30DFD0084E92FE(iLocal_1646[iVar0], 0))
					{
						unk_0xF243B7A14FCFD0F4(func_202());
						if (unk_0xD6513D668481290A(func_202()))
						{
							bVar17 = true;
						}
					}
					else if (!bLocal_102 && ((!unk_0xFA30DFD0084E92FE(iLocal_1646[iVar0], 2) && uVar19) || (unk_0xFA30DFD0084E92FE(iLocal_1646[iVar0], 2) && uVar20)))
					{
						bVar17 = true;
					}
					else
					{
						unk_0xF243B7A14FCFD0F4(func_205());
						bVar17 = unk_0xD6513D668481290A(func_205());
					}
					if (!unk_0x724D816EA203A79E(iLocal_2916[iVar0]))
					{
						unk_0xF243B7A14FCFD0F4(iLocal_2685[iVar0]);
						if ((unk_0xD6513D668481290A(iLocal_2685[iVar0]) && unk_0x00D24B3F2A5CD22C(iLocal_1294[iVar0], &cLocal_2668)) && bVar17)
						{
							if (fLocal_1275 >= (fLocal_813[iVar0] - (fLocal_1288 * fParam1)))
							{
								if ((iLocal_89 || iParam2) || (!bLocal_106 && !func_318(Local_1963[iVar0 /*3*/], Var12, 5f, fLocal_1286)))
								{
									if (bLocal_85)
									{
										func_317(Local_1963[iVar0 /*3*/], Var12, fLocal_1279);
									}
									iLocal_2916[iVar0] = unk_0x61C05BF08A1E0EFE(iLocal_2685[iVar0], Local_1963[iVar0 /*3*/], 0f, 0, 0, 0);
									if (iLocal_2685[iVar0] == joaat("polmav"))
									{
										unk_0x7170EF3CEB4D0224(iLocal_2916[iVar0], 0);
									}
									if (uLocal_98 && !unk_0xFA30DFD0084E92FE(iLocal_1646[iVar0], 0))
									{
										func_316(iLocal_2916[iVar0]);
									}
									unk_0xD5874E4A4BF782FC(iLocal_2916[iVar0], Local_1963[iVar0 /*3*/], 0, 0, 1);
									unk_0xC239B590ECA50DD0(iLocal_2916[iVar0], fLocal_109[iVar0], fLocal_285[iVar0], fLocal_461[iVar0], fLocal_637[iVar0]);
									if (unk_0x7C28D15641461C68(iLocal_2685[iVar0]) || unk_0x7512ED01F3F46714(iLocal_2685[iVar0]))
									{
										unk_0xF0A40F19AAB79E88(iLocal_2916[iVar0], 1084227584);
									}
									if (unk_0xFA30DFD0084E92FE(iLocal_1646[iVar0], 3))
									{
										unk_0x656194E145691D3E(iLocal_2916[iVar0], 1);
									}
									if (!unk_0xFA30DFD0084E92FE(iLocal_1646[iVar0], 0))
									{
										unk_0x2D655AA68FA1736B(iLocal_2916[iVar0], 1, 1, 0);
										if (unk_0x6E06C0DB9B43570D() > 19 || unk_0x6E06C0DB9B43570D() < 7)
										{
											unk_0x93D3868AE0D83B7C(iLocal_2916[iVar0], 3);
										}
									}
									unk_0x346478B12F69D4E3(iLocal_2916[iVar0], 1);
									unk_0xF82197F205B9D8FD(iLocal_2916[iVar0], 1);
									unk_0x2CA123B0622F495C(iLocal_2685[iVar0]);
									iLocal_1955 = (iLocal_1955 - 1);
									iLocal_1470[iVar0]++;
									bLocal_106 = true;
								}
								else if (fLocal_1275 > fLocal_813[iVar0])
								{
									iLocal_1955 = (iLocal_1955 - 1);
									func_324(iVar0, 1090519040);
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
						if (!unk_0xFA30DFD0084E92FE(iLocal_1646[iVar0], 1))
						{
							if (unk_0xFA30DFD0084E92FE(iLocal_1646[iVar0], 0))
							{
								unk_0xF243B7A14FCFD0F4(func_202());
								bVar17 = unk_0xD6513D668481290A(func_202());
								iVar21 = 2;
							}
							else if (!bLocal_102 && ((!unk_0xFA30DFD0084E92FE(iLocal_1646[iVar0], 2) && uVar19) || (unk_0xFA30DFD0084E92FE(iLocal_1646[iVar0], 2) && uVar20)))
							{
								bVar17 = true;
								iVar21 = 1;
							}
							else
							{
								unk_0xF243B7A14FCFD0F4(func_205());
								bVar17 = unk_0xD6513D668481290A(func_205());
								iVar21 = 0;
							}
							if (!unk_0x1D403DFADBC2DE3C(iLocal_2916[iVar0], 0))
							{
								if (!bLocal_106 && unk_0x1AAF0C23233C57AF(iLocal_2916[iVar0], -1, 0))
								{
									if (bVar17)
									{
										if ((unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(iLocal_2916[iVar0], 1), Var12) < 10000f || iParam2) || iLocal_89)
										{
											func_314(&(iLocal_2916[iVar0]), iVar21, 0);
											unk_0xF0059F27F7BB6680(&(iLocal_1646[iVar0]), 1);
										}
									}
								}
							}
						}
						if (unk_0xE59B7F5A03335350(iLocal_2916[iVar0], 0))
						{
							unk_0x1B2A7C8188ADBE04(iLocal_1294[iVar0], &cLocal_2668);
							if (fLocal_1275 >= fLocal_813[iVar0])
							{
								if (12 > iLocal_1946)
								{
									fVar15 = (fLocal_1275 - fLocal_813[iVar0]);
									if (unk_0x00D24B3F2A5CD22C(iLocal_1294[iVar0], &cLocal_2668))
									{
										if (fVar15 < unk_0x2FB219F9AD4BD760(iLocal_1294[iVar0], &cLocal_2668))
										{
											Var6 = { unk_0x541C2AEF053615BC(iLocal_2916[iVar0], 1) };
											Var9 = { unk_0x87DF5F0B1BCDA381(iLocal_1294[iVar0], fVar15, &cLocal_2668) };
											if (!func_318(Var6, Var12, 5f, fLocal_1286) && func_318(Var9, Var12, 5f, fLocal_1286))
											{
												if (!unk_0xFA30DFD0084E92FE(iLocal_1646[iVar0], 1))
												{
													func_314(&(iLocal_2916[iVar0]), iVar21, 0);
												}
												func_324(iVar0, 1090519040);
											}
											else if (((!bLocal_106 || unk_0xFA30DFD0084E92FE(iLocal_1646[iVar0], 1)) || iLocal_89) || iParam2)
											{
												if (func_307(&(iLocal_2916[iVar0]), iLocal_1294[iVar0], fVar15, 1, 0, 0, 1, bLocal_103))
												{
													if (!unk_0xFA30DFD0084E92FE(iLocal_1646[iVar0], 1))
													{
														func_314(&(iLocal_2916[iVar0]), iVar21, 0);
													}
													unk_0xD434A01DEA38A939(iLocal_2916[iVar0], 1, 0);
													unk_0x821B5D8CB4B20F84(iLocal_2916[iVar0], fParam1);
													iLocal_1946++;
													iLocal_1470[iVar0]++;
												}
											}
										}
										else
										{
											if (!unk_0xFA30DFD0084E92FE(iLocal_1646[iVar0], 1))
											{
												func_314(&(iLocal_2916[iVar0]), iVar21, 0);
											}
											func_324(iVar0, 1090519040);
										}
									}
									else if (fVar15 > unk_0x2FB219F9AD4BD760(iLocal_1294[iVar0], &cLocal_2668))
									{
										if (!unk_0xFA30DFD0084E92FE(iLocal_1646[iVar0], 1))
										{
											func_314(&(iLocal_2916[iVar0]), iVar21, 0);
										}
										func_324(iVar0, 1090519040);
									}
								}
								else
								{
									if (!unk_0xFA30DFD0084E92FE(iLocal_1646[iVar0], 1))
									{
										func_314(&(iLocal_2916[iVar0]), iVar21, 0);
									}
									func_324(iVar0, 1090519040);
								}
							}
							else if (iLocal_86 && !bLocal_94)
							{
								if (!unk_0xFA30DFD0084E92FE(iLocal_1646[iVar0], 1))
								{
									func_314(&(iLocal_2916[iVar0]), iVar21, 0);
								}
								func_324(iVar0, 1090519040);
							}
						}
						else
						{
							if (!unk_0xFA30DFD0084E92FE(iLocal_1646[iVar0], 1))
							{
								func_314(&(iLocal_2916[iVar0]), iVar21, 0);
							}
							func_324(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_1961 = iVar0;
					}
				}
				else if (iLocal_1470[iVar0] == 3)
				{
					if (unk_0xE59B7F5A03335350(iLocal_2916[iVar0], 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_2916[iVar0]))
						{
							iVar4 = unk_0x3187EF5798B5D209(iLocal_2916[iVar0], -1, 0);
							if (!unk_0x36CEFBE9B745A58D(iVar4))
							{
								if (bVar18)
								{
									bVar24 = false;
									if (!bLocal_84)
									{
										if ((!bLocal_79 && !iLocal_76) && func_313(iLocal_2916[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_1960 || iLocal_1960 == 0))
											{
												if (!unk_0x1D403DFADBC2DE3C(iVar5, 0))
												{
													bVar17 = false;
													if (!func_323(iLocal_2916[iVar0], iVar5) || func_310(iVar5, iLocal_2916[iVar0], 0))
													{
														bVar24 = true;
													}
												}
												iLocal_1960 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_99 && !unk_0xFA30DFD0084E92FE(iLocal_1646[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_1960 || iLocal_1960 == 0))
										{
											Var25 = { unk_0x1483995DFFF0DEEA(iParam0, unk_0x541C2AEF053615BC(iLocal_2916[iVar0], 1)) };
											if (Var25.f_1 < 0f)
											{
												if (unk_0x357058E632979E65(Var25.f_1) > unk_0x357058E632979E65(Var25.f_0))
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
										func_309(iLocal_2916[iVar0]);
										iLocal_1470[iVar0]++;
									}
									else
									{
										unk_0x821B5D8CB4B20F84(iLocal_2916[iVar0], fParam1);
									}
								}
							}
							else
							{
								unk_0xD87F0F9CDF39238A(iLocal_2916[iVar0]);
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
					if (unk_0xE59B7F5A03335350(iLocal_2916[iVar0], 0))
					{
						if (!unk_0xB34E411B0A4BF096(iLocal_2916[iVar0]))
						{
							iLocal_1470[iVar0]++;
						}
						else
						{
							iVar4 = unk_0x3187EF5798B5D209(iLocal_2916[iVar0], -1, 0);
							if (!unk_0x36CEFBE9B745A58D(iVar4))
							{
								unk_0x821B5D8CB4B20F84(iLocal_2916[iVar0], fParam1);
							}
							else
							{
								unk_0xD87F0F9CDF39238A(iLocal_2916[iVar0]);
							}
							if (unk_0x00D24B3F2A5CD22C(iLocal_1294[iVar0], &cLocal_2668))
							{
								if (fLocal_1275 > (fLocal_813[iVar0] + unk_0x2FB219F9AD4BD760(iLocal_1294[iVar0], &cLocal_2668)))
								{
									unk_0xD87F0F9CDF39238A(iLocal_2916[iVar0]);
								}
							}
							else
							{
								unk_0xD87F0F9CDF39238A(iLocal_2916[iVar0]);
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
					if (!unk_0x1D403DFADBC2DE3C(iLocal_2916[iVar0], 0))
					{
						fVar16 = unk_0x8910237449BB6F79(iLocal_2916[iVar0]);
					}
					iLocal_1946 = (iLocal_1946 - 1);
					func_324(iVar0, fVar16);
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
		func_201();
	}
}

int func_323(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		Var0 = { unk_0xA43418B5859810A6(iParam0, 0) };
	}
	else
	{
		return 0;
	}
	if (unk_0xE59B7F5A03335350(iParam1, 0))
	{
		Var3 = { unk_0xA43418B5859810A6(iParam1, 0) };
	}
	else
	{
		return 0;
	}
	Var0.f_2 = 0f;
	Var3.f_2 = 0f;
	fVar6 = func_311(Var0, Var3);
	if (fVar6 < 0f)
	{
		return 0;
	}
	return 1;
}

void func_324(int iParam0, float fParam1)
{
	int iVar0;
	
	if (!iLocal_2685[iParam0] == 0)
	{
		unk_0x2CA123B0622F495C(iLocal_2685[iParam0]);
	}
	if (!unk_0x1D403DFADBC2DE3C(iLocal_2916[iParam0], 0))
	{
		unk_0xD434A01DEA38A939(iLocal_2916[iParam0], 1, 0);
		unk_0x346478B12F69D4E3(iLocal_2916[iParam0], 0);
		iVar0 = unk_0x3187EF5798B5D209(iLocal_2916[iParam0], -1, 0);
		if (!unk_0x36CEFBE9B745A58D(iVar0) && iVar0 != unk_0xBC25C936A095B5BA())
		{
			unk_0x2E35C4FA5F0ED22F(iVar0, 0);
			if (fParam1 < 8f)
			{
				fParam1 = 8f;
			}
			if (fParam1 > 62.9f)
			{
				fParam1 = 62.9f;
			}
			unk_0x488EB206498BC561(iVar0, iLocal_2916[iParam0], 0, 1, fParam1, 786603, 5f, 5f, 1);
			unk_0xABA7AE40608505F2(iVar0, 8192, 1);
			if (bLocal_108)
			{
				unk_0xABA7AE40608505F2(iVar0, 65536, 1);
				unk_0xABA7AE40608505F2(iVar0, 2, 0);
			}
			unk_0x91629AC1E1F78419(iVar0, 6, 0);
			unk_0xE36D78F8D1781255(iVar0, fParam1);
		}
	}
	if (!bLocal_77)
	{
		if (!bLocal_105)
		{
			func_315(iVar0);
			func_198(iLocal_2916[iParam0]);
		}
	}
	else
	{
		if (unk_0x724D816EA203A79E(iVar0))
		{
			unk_0xF845620A03C7425B(&iVar0);
		}
		if (unk_0x724D816EA203A79E(iLocal_2916[iParam0]))
		{
			unk_0xCF6040807CC0E4A5(&(iLocal_2916[iParam0]));
		}
	}
	if (!bLocal_87 && !bLocal_100)
	{
		if (iLocal_1294[iParam0] > 0)
		{
			unk_0x4F5DAC981AF98536(iLocal_1294[iParam0], &cLocal_2668);
		}
	}
	iLocal_1470[iParam0] = 99;
}

void func_325(int iParam0, float fParam1, float fParam2)
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		Var10 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
	}
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (unk_0xB34E411B0A4BF096(iParam0))
		{
			uVar0 = unk_0x47296952F125937B(iParam0);
			Var1 = { unk_0xE69565EA6CC00034(uVar0, fParam1) };
			Var4 = { unk_0x541C2AEF053615BC(iParam0, 1) };
			Var7 = { Var4 - Var1 };
			fVar13 = unk_0x652D2EEEF1D3E62C(Var7);
			if (fVar13 > fParam2)
			{
				fVar13 = fParam2;
			}
			func_317(Var1, Var10, fVar13);
		}
	}
}

void func_326(int iParam0, float fParam1)
{
	if (!bLocal_88)
	{
		if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
		{
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(iParam0, 1), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1)) > (fParam1 * fParam1))
				{
					unk_0xA7F63A62AD048372(1);
				}
				else
				{
					unk_0xA7F63A62AD048372(0);
				}
			}
		}
	}
}

void func_327(int iParam0, float fParam1)
{
	if (!bLocal_88)
	{
		if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
		{
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				if (unk_0xB7A628320EFF8E47(unk_0x541C2AEF053615BC(iParam0, 1), unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1)) > (fParam1 * fParam1))
				{
					unk_0x598D851D7D0D2BA3(1f);
				}
				else
				{
					unk_0x598D851D7D0D2BA3(0f);
				}
			}
		}
	}
}

void func_328(int iParam0, float fParam1)
{
	var uVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0) && unk_0xB34E411B0A4BF096(iParam0))
	{
		fVar1 = (fLocal_1289 + 2000f);
		fVar2 = (fLocal_1290 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			uVar0 = unk_0x47296952F125937B(iParam0);
			if (fVar1 <= unk_0x6FFB46A34B481360(uVar0))
			{
				if (iLocal_1956 == 0)
				{
					Local_2656 = { unk_0xE69565EA6CC00034(uVar0, fLocal_1289) };
					iLocal_1956++;
				}
				else if (iLocal_1956 == 1)
				{
					Local_2659 = { unk_0xE69565EA6CC00034(iVar0, fVar1) };
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
					unk_0x6935EBF9868982DC(Local_2656, Local_2659, 0, 0);
					fLocal_1289 = fVar1;
					iLocal_1956 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			iVar0 = unk_0x47296952F125937B(iParam0);
			if (iLocal_1959 == 0)
			{
				Local_2662 = { unk_0xE69565EA6CC00034(iVar0, fLocal_1290) };
				iLocal_1959++;
			}
			else if (iLocal_1959 == 1)
			{
				Local_2665 = { unk_0xE69565EA6CC00034(iVar0, fVar2) };
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
				unk_0x832ADB79A274D4E9(Local_2662, Local_2665, 1);
				fLocal_1290 = fVar2;
				iLocal_1959 = 0;
			}
		}
	}
}

int func_329(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
		{
			if (unk_0x62F3A07C43FFB568(iParam0, iParam1, 0))
			{
				return 0;
			}
		}
	}
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		Var0 = { unk_0x541C2AEF053615BC(iParam0, 1) };
	}
	if (unk_0xE59B7F5A03335350(iParam1, 0))
	{
		Var3 = { unk_0x541C2AEF053615BC(iParam1, 1) };
		Var6 = { unk_0xA4455714F3DCE207(iParam1, 0f, 5f, 0f) };
		Var12 = { Var6 - Var3 };
	}
	Var9 = { Var3 - Var0 };
	Var9.f_2 = 0f;
	Var12.f_2 = 0f;
	fVar15 = func_311(Var9, Var12);
	if (fVar15 < 0f)
	{
		return 1;
	}
	return 0;
}

void func_330()
{
	unk_0x379ACE23D404525C(-9000f, -9000f, -1000f, 9000f, 9000f, 1500f, 0, 1);
	unk_0x2525D113E78EFBAA(0);
	unk_0x35FE2210421A8E6E(0);
	unk_0x0631F3E6D895E7E5(0);
	unk_0x598D851D7D0D2BA3(0f);
	unk_0xA7F63A62AD048372(0);
	unk_0x1A8FF13FA68ECF72(3);
}

void func_331(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, bool bParam10)
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
	fVar2 = func_334(iParam0, iParam1);
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
	if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		if (func_329(iParam1, iParam0))
		{
			if (unk_0x5237AF95232D78C5(iParam1, 0))
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
			if (func_333(iParam0, iParam1) < fParam5)
			{
				fVar1 = func_332(iParam0, iParam1);
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
		fVar1 = unk_0x11F9F9006143871A();
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
		fVar1 = unk_0x11F9F9006143871A();
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
		if (!unk_0x36CEFBE9B745A58D(iParam1))
		{
			if (unk_0x5237AF95232D78C5(iParam1, 0))
			{
				iVar9 = unk_0x9FE9D386222EEE47(iParam1, 0);
				if (!unk_0x1D403DFADBC2DE3C(iVar9, 0))
				{
					iVar10 = unk_0x6F79ECA8C83E4357(iVar9);
					if (unk_0x7C28D15641461C68(iVar10) || unk_0x7512ED01F3F46714(iVar10))
					{
						if (unk_0xE59B7F5A03335350(iVar9, 0))
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
							unk_0xC26F3DBF9AB3C8CB(unk_0xB5CEFD608600A09F(), fLocal_1281);
						}
					}
				}
			}
		}
	}
}

var func_332(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	var uVar12;
	int iVar13;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		Var0.f_0 = unk_0xB56E720468F8EB8D(iParam0);
		Var0.f_1 = unk_0x080E685AA7E5D1F1(iParam0);
	}
	if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		Var3 = { unk_0x541C2AEF053615BC(iParam1, 1) };
		if (unk_0x5237AF95232D78C5(iParam1, 0))
		{
			iVar13 = unk_0x9FE9D386222EEE47(iParam1, 0);
			Var9.f_0 = unk_0xB56E720468F8EB8D(iVar13);
			Var9.f_1 = unk_0x080E685AA7E5D1F1(iVar13);
		}
		else
		{
			Var6 = { unk_0xA4455714F3DCE207(iParam1, 0f, 5f, 0f) };
			Var9 = { Var6 - Var3 };
		}
	}
	uVar12 = unk_0x77211CE25DED4FDB(Var0.f_0, Var0.f_1, Var9.f_0, Var9.f_1);
	return uVar12;
}

float func_333(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (!unk_0x1D403DFADBC2DE3C(iParam0, 0))
	{
		Var0 = { unk_0x541C2AEF053615BC(iParam0, 1) };
	}
	if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		Var3 = { unk_0x541C2AEF053615BC(iParam1, 1) };
	}
	Var6 = { Var3 - Var0 };
	Var6.f_2 = 0f;
	fVar9 = unk_0x652D2EEEF1D3E62C(Var6);
	return fVar9;
}

float func_334(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	float fVar12;
	
	if (unk_0xE59B7F5A03335350(iParam0, 0))
	{
		Var0.f_0 = unk_0xB56E720468F8EB8D(iParam0);
		Var0.f_1 = unk_0x080E685AA7E5D1F1(iParam0);
		Var6 = { unk_0x541C2AEF053615BC(iParam0, 1) };
	}
	if (!unk_0x1D403DFADBC2DE3C(iParam1, 0))
	{
		Var9 = { unk_0x541C2AEF053615BC(iParam1, 1) };
	}
	Var3 = { Var9 - Var6 };
	fVar12 = unk_0x77211CE25DED4FDB(Var3.f_0, Var3.f_1, Var0.f_0, Var0.f_1);
	fVar12 = (fVar12 + -90f);
	if (fVar12 < 0f)
	{
		fVar12 = (fVar12 * -1f);
	}
	Var3.f_2 = 0f;
	return (unk_0x652D2EEEF1D3E62C(Var3) * unk_0x0BADBFA3B172435F(fVar12));
}

int func_335()
{
	if (unk_0x724D816EA203A79E(iLocal_3258))
	{
		if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
		{
			if (!unk_0xD1DC4B08247A4317(iLocal_3258))
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
		if (unk_0x724D816EA203A79E(iLocal_3121[iLocal_3190]))
		{
			if (unk_0xE59B7F5A03335350(iLocal_3121[iLocal_3190], 0))
			{
				if (!unk_0xD1DC4B08247A4317(iLocal_3121[iLocal_3190]))
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

void func_336()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if (unk_0x724D816EA203A79E(iLocal_3121[4]))
	{
		if (unk_0xE59B7F5A03335350(iLocal_3121[4], 0))
		{
			if (unk_0xB34E411B0A4BF096(iLocal_3121[4]))
			{
				Local_3303 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
				Var3 = { unk_0x541C2AEF053615BC(iLocal_3121[4], 1) };
				if (Local_3303.f_0 < (Var3.f_0 - 10f) && !unk_0xD1DC4B08247A4317(iLocal_3121[4]))
				{
					unk_0xD87F0F9CDF39238A(iLocal_3121[4]);
					unk_0x1E7A09C1710FB071(&(iLocal_3121[4]));
				}
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_3121[3]))
	{
		if (unk_0xE59B7F5A03335350(iLocal_3121[3], 0))
		{
			if (unk_0xB34E411B0A4BF096(iLocal_3121[3]))
			{
				Local_3303 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
				Var0 = { unk_0x541C2AEF053615BC(iLocal_3121[3], 1) };
				if (Local_3303.f_0 < (Var0.f_0 - 10f) && !unk_0xD1DC4B08247A4317(iLocal_3121[3]))
				{
					unk_0xD87F0F9CDF39238A(iLocal_3121[3]);
					unk_0x1E7A09C1710FB071(&(iLocal_3121[3]));
				}
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_3121[21]))
	{
		if (unk_0xE59B7F5A03335350(iLocal_3121[21], 0))
		{
			if (unk_0xB34E411B0A4BF096(iLocal_3121[21]))
			{
				Local_3303 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
				Var6 = { unk_0x541C2AEF053615BC(iLocal_3121[21], 1) };
				if (Local_3303.f_0 < (Var6.f_0 - 10f) && !unk_0xD1DC4B08247A4317(iLocal_3121[21]))
				{
					unk_0xD87F0F9CDF39238A(iLocal_3121[21]);
					unk_0x1E7A09C1710FB071(&(iLocal_3121[21]));
				}
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_3121[0]))
	{
		if (unk_0xE59B7F5A03335350(iLocal_3121[0], 0))
		{
			if (unk_0x724D816EA203A79E(iLocal_3258))
			{
				if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
				{
					if (unk_0xB34E411B0A4BF096(iLocal_3258))
					{
						if (unk_0x5B80643EF917B728(iLocal_3258) > 50000f && !unk_0xD1DC4B08247A4317(iLocal_3121[0]))
						{
							if (unk_0xB34E411B0A4BF096(iLocal_3121[0]))
							{
								unk_0xD87F0F9CDF39238A(iLocal_3121[0]);
							}
							unk_0x1E7A09C1710FB071(&(iLocal_3121[0]));
						}
					}
				}
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_3264))
	{
		if (unk_0xE59B7F5A03335350(iLocal_3264, 0))
		{
			if (unk_0x724D816EA203A79E(iLocal_3258))
			{
				if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
				{
					if (unk_0xB34E411B0A4BF096(iLocal_3258))
					{
						if (unk_0x5B80643EF917B728(iLocal_3258) > 90000f && !unk_0xD1DC4B08247A4317(iLocal_3264))
						{
							unk_0x2CA8D9DC16C6AF09(uLocal_3755[0], 0);
							unk_0x2CA8D9DC16C6AF09(uLocal_3755[1], 0);
							unk_0x2CA8D9DC16C6AF09(uLocal_3755[2], 0);
							if (unk_0x724D816EA203A79E(iLocal_3223[0]))
							{
								unk_0x02537C8C1BEEB477(&(iLocal_3223[0]));
							}
							if (unk_0x724D816EA203A79E(iLocal_3223[1]))
							{
								unk_0x02537C8C1BEEB477(&(iLocal_3223[1]));
							}
							if (unk_0x724D816EA203A79E(iLocal_3223[2]))
							{
								unk_0x02537C8C1BEEB477(&(iLocal_3223[2]));
							}
							if (unk_0x724D816EA203A79E(iLocal_3223[3]))
							{
								unk_0x02537C8C1BEEB477(&(iLocal_3223[3]));
							}
							unk_0x1E7A09C1710FB071(&iLocal_3264);
							unk_0x4EA570997E107F35("missheist_agency3aig_lift_waitped_a");
						}
					}
				}
			}
		}
	}
}

void func_337(var uParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (unk_0x2DA8CA50A72528FB(uParam0))
	{
		if ((unk_0x724D816EA203A79E(iParam1) && unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA())) && !unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (unk_0xD27AC0E9B78CFDD7(iParam1))
			{
				if (unk_0xE59B7F5A03335350(unk_0x233ED4CD1F1A42C1(iParam1), 0))
				{
					fVar1 = unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iParam1, 1), 1);
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
						unk_0x7A6BBF86FCBBCF7E(uParam0, 1);
						unk_0x7781946F1FC054FA(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x7A6BBF86FCBBCF7E(uParam0, 0);
						unk_0x7781946F1FC054FA(uParam0, 255);
					}
				}
			}
			else if (unk_0x386592AF38881675(iParam1))
			{
				if (!unk_0x36CEFBE9B745A58D(unk_0x399F7937FFE4DEBF(iParam1)))
				{
					fVar1 = unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), unk_0x541C2AEF053615BC(iParam1, 1), 1);
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
						unk_0x7A6BBF86FCBBCF7E(uParam0, 1);
						unk_0x7781946F1FC054FA(uParam0, (255 - iVar0));
					}
					else
					{
						unk_0x7A6BBF86FCBBCF7E(uParam0, 0);
						unk_0x7781946F1FC054FA(uParam0, 255);
					}
				}
			}
		}
	}
}

void func_338()
{
	if (unk_0x724D816EA203A79E(iLocal_3121[2]))
	{
		if (unk_0xE59B7F5A03335350(iLocal_3121[2], 0))
		{
			if (unk_0x724D816EA203A79E(iLocal_3258))
			{
				if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
				{
					if (unk_0xB34E411B0A4BF096(iLocal_3258))
					{
						if (unk_0x5B80643EF917B728(iLocal_3258) < 50530f)
						{
							if (!unk_0x8ADE344330B6F916(iLocal_3121[2]))
							{
								unk_0x2D655AA68FA1736B(iLocal_3121[2], 1, 1, 0);
							}
						}
						else if (unk_0x8ADE344330B6F916(iLocal_3121[2]))
						{
							unk_0x2D655AA68FA1736B(iLocal_3121[2], 0, 0, 0);
						}
					}
				}
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_3121[5]))
	{
		if (unk_0xE59B7F5A03335350(iLocal_3121[5], 0))
		{
			if (!unk_0x8ADE344330B6F916(iLocal_3121[5]))
			{
				unk_0x2D655AA68FA1736B(iLocal_3121[5], 1, 1, 0);
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_3260[0]))
	{
		if (unk_0xE59B7F5A03335350(iLocal_3260[0], 0))
		{
			if (!unk_0x8ADE344330B6F916(iLocal_3260[0]))
			{
				unk_0x2D655AA68FA1736B(iLocal_3260[0], 1, 1, 0);
			}
			if (unk_0x1AAF0C23233C57AF(iLocal_3260[0], -1, 0))
			{
				if (!unk_0x724D816EA203A79E(iLocal_3254[0]))
				{
					unk_0xF243B7A14FCFD0F4(joaat("s_m_m_gentransport"));
					if (unk_0xD6513D668481290A(joaat("s_m_m_gentransport")))
					{
						iLocal_3254[0] = unk_0xFD8987C090669BD5(iLocal_3260[0], 26, joaat("s_m_m_gentransport"), -1, 1, 1);
						unk_0x2CA123B0622F495C(joaat("s_m_m_gentransport"));
					}
				}
			}
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_3260[1]))
	{
		if (unk_0xE59B7F5A03335350(iLocal_3260[1], 0))
		{
			if (!unk_0x8ADE344330B6F916(iLocal_3260[1]))
			{
				unk_0x2D655AA68FA1736B(iLocal_3260[1], 1, 1, 0);
			}
			if (unk_0x1AAF0C23233C57AF(iLocal_3260[1], -1, 0))
			{
				if (!unk_0x724D816EA203A79E(iLocal_3254[1]))
				{
					unk_0xF243B7A14FCFD0F4(joaat("s_m_m_gentransport"));
					if (unk_0xD6513D668481290A(joaat("s_m_m_gentransport")))
					{
						iLocal_3254[1] = unk_0xFD8987C090669BD5(iLocal_3260[1], 26, joaat("s_m_m_gentransport"), -1, 1, 1);
						unk_0x2CA123B0622F495C(joaat("s_m_m_gentransport"));
					}
				}
			}
		}
	}
}

void func_339()
{
	if (iLocal_3181 == 0)
	{
		unk_0x284F2ACE6839D3C0("SCRIPT\Trv_4_747_Cop_Cars", 0, -1);
		unk_0x284F2ACE6839D3C0("SCRIPT\Trv_4_747_Plane_Explosion", 0, -1);
		unk_0x284F2ACE6839D3C0("SCRIPT\Trv_4_747_Tanker_Explosion", 0, -1);
		unk_0x284F2ACE6839D3C0("SCRIPT\TV_Monitors", 0, -1);
		if (iLocal_3392 == 0)
		{
			iLocal_3213 = unk_0x2F079D1FC5F6CB99();
			iLocal_3392 = 1;
		}
		if (iLocal_3393 == 0)
		{
			iLocal_3214 = unk_0x2F079D1FC5F6CB99();
			iLocal_3393 = 1;
		}
		if (iLocal_3394 == 0)
		{
			iLocal_3215 = unk_0x2F079D1FC5F6CB99();
			iLocal_3394 = 1;
		}
		if (iLocal_3395 == 0)
		{
			iLocal_3216 = unk_0x2F079D1FC5F6CB99();
			iLocal_3395 = 1;
		}
		if (iLocal_3396 == 0)
		{
			iLocal_3217 = unk_0x2F079D1FC5F6CB99();
			iLocal_3396 = 1;
		}
		if (iLocal_3391 == 0)
		{
			iLocal_3218 = unk_0x2F079D1FC5F6CB99();
			iLocal_3391 = 1;
		}
		if (iLocal_3397 == 0)
		{
			iLocal_3219 = unk_0x2F079D1FC5F6CB99();
			iLocal_3397 = 1;
		}
		if (iLocal_3345 == 1)
		{
			func_117();
			iLocal_3345 = 0;
		}
		if (!unk_0xEF0E25DA0CB6E8FF(uLocal_3289))
		{
			uLocal_3289 = unk_0x578D5D08EC980893("DEFAULT_SCRIPTED_CAMERA", 1);
			unk_0x9DF315A9EFFF87AC(uLocal_3289, 40f);
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
		unk_0xA8396BF0E2C53C39();
		iLocal_89 = 1;
		bLocal_95 = true;
		func_278();
		uLocal_3184 = unk_0xECF3C87B07EE1C98();
		unk_0x6C5F5B5F6894CCE3(-823.71f, -2548.2f, 13.75f, 20f, 1, 0, 0, 0);
		unk_0xF16F7C45E0B1B52B(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f);
		unk_0x4BDC021CD4295F17(-833.86f, -2564.17f, 13.43f, -814.37f, -2521.04f, 12.94f, 0, 0);
		unk_0x6935EBF9868982DC(-482f, -2118f, 6f, -1072f, -2724f, 17f, 0, 1);
		func_123(2, 1);
		func_341("BB_Chase", 45, 0, 1);
		unk_0xAEC867D0DBB7AFEB(3);
		func_17(&uLocal_3578, 0, unk_0xBC25C936A095B5BA(), "MICHAEL", 0, 1);
		if (unk_0x17FAADF9916EF741())
		{
			if (!func_24())
			{
				unk_0x8B6B50EADA01F251(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1));
			}
			func_21(iLocal_3259, -1, 1);
		}
		iLocal_3182 = 0;
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1)
	{
		unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
		func_340();
		iLocal_3181 = 2;
	}
	if (iLocal_3181 == 2)
	{
		if (!unk_0x724D816EA203A79E(iLocal_3271))
		{
			iLocal_3271 = unk_0x61C05BF08A1E0EFE(joaat("blista"), 0f, 0f, 1f, 0f, 1, 1, 0);
		}
		while (!unk_0x00D24B3F2A5CD22C(45, "BB_Chase"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		if (unk_0x17FAADF9916EF741())
		{
			if (unk_0xE59B7F5A03335350(iLocal_3259, 0))
			{
				unk_0x2D655AA68FA1736B(iLocal_3259, 1, 1, 0);
				unk_0xA4DFFFD5B234240D(iLocal_3259, 30f);
				unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_3258))
		{
			if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
			{
				unk_0x9E6D037EC3389728(iLocal_3258, 45, "BB_Chase", 1);
				unk_0x5AE11BC36633DE4E(0);
				func_261();
				unk_0xAF0732277B825027(2);
				if (unk_0x724D816EA203A79E(iLocal_3259))
				{
					if (unk_0xE59B7F5A03335350(iLocal_3259, 0))
					{
						unk_0x1E7A09C1710FB071(&iLocal_3259);
					}
				}
				if (!unk_0x726D9204B160D23E())
				{
					unk_0x829FA4611BD56B44(800);
				}
				iLocal_3181 = 0;
				iLocal_3180 = 4;
			}
		}
	}
}

void func_340()
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

void func_341(char* sParam0, int iParam1, bool bParam2, bool bParam3)
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
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		Var0 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
		Local_2644.f_0 = (Var0.f_0 - 100f);
		Local_2644.f_1 = (Var0.f_1 - 100f);
		Local_2644.f_2 = (Var0.f_2 - 100f);
		Local_2647.f_0 = (Var0.f_0 + 100f);
		Local_2647.f_1 = (Var0.f_1 + 100f);
		Local_2647.f_2 = (Var0.f_2 + 100f);
		unk_0x6935EBF9868982DC(Local_2644, Local_2647, 0, 0);
		if (bParam2)
		{
			unk_0xEDAD35A0D81ED3FB(Var0, 500f, 0, 0, 0, 0, 0, 0);
		}
	}
	unk_0xB2CB6EAA6B280A84("rgh_traffic", &iLocal_2684);
	func_330();
	if (bParam3)
	{
		func_187(1);
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		unk_0x635083B90B1A9C63(unk_0xB5CEFD608600A09F(), 0);
		unk_0x6E52C7765A0F4382(0);
	}
	func_192();
}

void func_342()
{
	if (iLocal_3181 == 0)
	{
		unk_0x1D1C393C7689E5A6(0f, 14f, 4);
		if (iLocal_3345 == 1)
		{
			func_117();
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
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iLocal_3361 = 1;
		}
		else
		{
			iLocal_3361 = 0;
		}
		func_17(&uLocal_3578, 0, unk_0xBC25C936A095B5BA(), "MICHAEL", 0, 1);
		unk_0x78108840729CEAEE(1);
		unk_0x6935EBF9868982DC(-617f, -2274f, 0f, -406.01f, -2044f, 15f, 0, 1);
		iLocal_3188 = unk_0x105601648511CC64();
		if (unk_0x17FAADF9916EF741())
		{
			if (!func_24())
			{
				unk_0x8B6B50EADA01F251(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1));
			}
			func_21(0, -1, 1);
			unk_0x1E7A09C1710FB071(&iLocal_3259);
			unk_0x1E7A09C1710FB071(&iLocal_3276);
			unk_0x1E7A09C1710FB071(&iLocal_3277);
		}
		if (!unk_0x726D9204B160D23E())
		{
			unk_0x829FA4611BD56B44(800);
		}
		if (!unk_0x2DA8CA50A72528FB(uLocal_3287))
		{
			uLocal_3287 = func_347(Local_3300, 0);
		}
		unk_0x3857DADBD6EC8A54("TRV4_GAMEPLAY_START");
		Local_3318 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
		iLocal_3181 = 1;
	}
	if (iLocal_3181 == 1)
	{
		if (iLocal_3350 == 0 && iLocal_3364 == 1)
		{
			if (!func_255() || !unk_0x11D38424F1DD3B8F())
			{
				func_20("TRV4_GO1", 7500, 1);
				iLocal_3350 = 1;
			}
		}
		if (iLocal_3378 == 0 && !func_346())
		{
			if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), Local_3300, 1) < 800f)
			{
				iLocal_3187 = unk_0x491B2241281A03B7(0, 2);
				if (iLocal_3187 == 0)
				{
					unk_0xB4513103F3EB41DB("SCRIPTED_SCANNER_REPORT_Sol_3_01", 0f);
					unk_0x1D1C393C7689E5A6(0f, 6f, 3);
					iLocal_3378 = 1;
				}
				if (iLocal_3187 == 1)
				{
					unk_0xB4513103F3EB41DB("SCRIPTED_SCANNER_REPORT_Sol_3_02", 0f);
					unk_0x1D1C393C7689E5A6(0f, 6f, 3);
					iLocal_3378 = 1;
				}
			}
		}
		if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), Local_3300, 1) < 600f)
		{
			if (!unk_0x724D816EA203A79E(iLocal_3258))
			{
				unk_0xF243B7A14FCFD0F4(joaat("cogcabrio"));
				if (unk_0xD6513D668481290A(joaat("cogcabrio")))
				{
					iLocal_3258 = unk_0x61C05BF08A1E0EFE(joaat("cogcabrio"), -428.0226f, -2153.558f, 9.2992f, 90.9098f, 1, 1, 0);
					unk_0x06D93FD5E4D394CF(iLocal_3258, 0, 1, 1, 1, 0, 0, 0, 0);
					unk_0x914C5DE0B15B8B59(iLocal_3258, 27, 27);
					unk_0x2CA123B0622F495C(joaat("cogcabrio"));
					unk_0x55662F9F262C2F9B(iLocal_3258, "SOL_3_MOLLY_CAR_Group", 0);
				}
			}
			if (!unk_0x724D816EA203A79E(iLocal_3222))
			{
				unk_0xF243B7A14FCFD0F4(joaat("ig_molly"));
				if (unk_0xD6513D668481290A(joaat("ig_molly")))
				{
					if (unk_0x724D816EA203A79E(iLocal_3258))
					{
						if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
						{
							iLocal_3222 = unk_0xFD8987C090669BD5(iLocal_3258, 26, joaat("ig_molly"), -1, 1, 1);
							unk_0x1E5C2A1EAB944289(iLocal_3222, 1);
							unk_0xB105531EDD3DE51B(iLocal_3222, 0);
							unk_0x2CA123B0622F495C(joaat("cogcabrio"));
							unk_0x2CA123B0622F495C(joaat("ig_molly"));
							unk_0x4106FAF8AA1D69D5(iLocal_3222, joaat("player"));
							iLocal_3360 = 1;
						}
					}
				}
			}
		}
		else
		{
			if (unk_0x724D816EA203A79E(iLocal_3222))
			{
				unk_0xF845620A03C7425B(&iLocal_3222);
			}
			if (unk_0x724D816EA203A79E(iLocal_3258))
			{
				unk_0xCF6040807CC0E4A5(&iLocal_3258);
			}
		}
		if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), Local_3300, 1) < 500f)
		{
			if (iLocal_3362 == 0)
			{
				uLocal_3293 = unk_0x9934FEFB3B8C6DB8("BREAKING_NEWS");
				unk_0xF243B7A14FCFD0F4(joaat("police3"));
				unk_0xF243B7A14FCFD0F4(joaat("maverick"));
				unk_0xF243B7A14FCFD0F4(joaat("bison"));
				unk_0xF243B7A14FCFD0F4(joaat("blista"));
				unk_0x1B2A7C8188ADBE04(45, "BB_Chase");
				unk_0x1B2A7C8188ADBE04(35, "BB_Chase");
				unk_0x1B2A7C8188ADBE04(2, "BB_Chase");
				unk_0x1B2A7C8188ADBE04(54, "BB_Chase");
				unk_0x1B2A7C8188ADBE04(55, "BB_Chase");
				unk_0x1B2A7C8188ADBE04(67, "BB_Chase");
				func_184(1, "BB_Chase");
				unk_0x6FED2D1AA2EBF334("TRV4_CHASE");
				iLocal_3362 = 1;
			}
		}
		else if (iLocal_3362 == 1)
		{
			unk_0x2CA123B0622F495C(joaat("police3"));
			unk_0x2CA123B0622F495C(joaat("maverick"));
			unk_0x2CA123B0622F495C(joaat("bison"));
			unk_0x2CA123B0622F495C(joaat("blista"));
			unk_0x4F5DAC981AF98536(45, "BB_Chase");
			unk_0x4F5DAC981AF98536(35, "BB_Chase");
			unk_0x4F5DAC981AF98536(2, "BB_Chase");
			unk_0x4F5DAC981AF98536(54, "BB_Chase");
			unk_0x4F5DAC981AF98536(55, "BB_Chase");
			unk_0x4F5DAC981AF98536(67, "BB_Chase");
			func_345(1, "BB_Chase");
			unk_0x748798F6C2AB96B7("TRV4_CHASE");
			iLocal_3362 = 0;
		}
		if (iLocal_3379 == 0)
		{
			if (unk_0x105601648511CC64() > (iLocal_3188 + 135000))
			{
				unk_0xEB233A3B7635D2AC();
				func_20("TRV4_WARN1", 7500, 1);
				iLocal_3188 = unk_0x105601648511CC64();
				iLocal_3379 = 1;
			}
		}
		if (iLocal_3379 == 1)
		{
			if (unk_0x105601648511CC64() > (iLocal_3188 + 135000))
			{
				func_233("TRV4_FAIL1");
			}
		}
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (!unk_0x144E80F5C46A6B75("SOL_3_DRIVE_TO_AIRPORT"))
			{
				unk_0xD6423910AAD8A379("SOL_3_DRIVE_TO_AIRPORT");
			}
			if (iLocal_3439 == 0)
			{
				unk_0x3857DADBD6EC8A54("TRV4_CAR_ENTERED");
				iLocal_3439 = 1;
			}
			if (!unk_0x724D816EA203A79E(iLocal_3259))
			{
				iLocal_3259 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
				unk_0x06D93FD5E4D394CF(iLocal_3259, 0, 1, 0, 0, 0, 0, 0, 0);
				unk_0x0E622862E5E566BB(iLocal_3259);
				unk_0xA73D1278857991A2(iLocal_3259, 1);
			}
		}
		else if (unk_0x724D816EA203A79E(iLocal_3259))
		{
			if (unk_0xE59B7F5A03335350(iLocal_3259, 0))
			{
				if (iLocal_3361 == 0)
				{
					unk_0x06D93FD5E4D394CF(iLocal_3259, 0, 0, 0, 0, 0, 0, 0, 0);
					iLocal_3361 = 1;
				}
				if (iLocal_3353 == 1)
				{
					unk_0xBF86DE1BFE3AA5CF(iLocal_3259);
					iLocal_3353 = 0;
				}
				if (unk_0xB248FAA35ED47DB9(iLocal_3259, 1))
				{
					unk_0x1E7A09C1710FB071(&iLocal_3259);
				}
			}
		}
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			if (iLocal_3442 == 0)
			{
				unk_0x4EA6E0B87A131736(156, 1, 0);
				unk_0xF4CB4FB11E3A61E4(-244f, -1842.74f, 28.48f);
				unk_0xF4CB4FB11E3A61E4(-1.5f, -2014.4f, 11.5f);
				unk_0xF4CB4FB11E3A61E4(-498.7f, -2136.5f, 8.4f);
				unk_0xA2F21B9C95E0F635(1);
				iLocal_3442 = 1;
			}
		}
		else if (iLocal_3442 == 1)
		{
			unk_0xA2F21B9C95E0F635(0);
			iLocal_3442 = 0;
		}
		if ((iLocal_3362 == 1 && unk_0x724D816EA203A79E(iLocal_3258)) && unk_0x724D816EA203A79E(iLocal_3222))
		{
			if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
			{
				if (unk_0x3D3F3014B0F74446(iLocal_3258, func_344(unk_0xBC25C936A095B5BA()), 0))
				{
					func_343();
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 3;
				}
			}
			if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
			{
				if (unk_0xDF25D3BB3759E7D1(unk_0xB5CEFD608600A09F(), iLocal_3258))
				{
					func_343();
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 3;
				}
			}
			if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
			{
				if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), unk_0x541C2AEF053615BC(iLocal_3258, 1), 200f, 132f, 100f, 0, 1, 0))
				{
					iLocal_3359 = 0;
					func_343();
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 3;
				}
			}
			if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
			{
				if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), -577f, -2051.5f, 7f, 84f, 87.5f, 15f, 0, 1, 0))
				{
					iLocal_3359 = 1;
					func_343();
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 3;
				}
			}
			if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
			{
				if (unk_0x4DBCE270B354E123(unk_0xBC25C936A095B5BA(), -703.5f, -1969.5f, 10f, 53.5f, 62.5f, 10f, 0, 1, 0))
				{
					unk_0x5499DFC49A11E05F();
					unk_0x78108840729CEAEE(0);
					iLocal_3359 = 1;
					func_343();
					iLocal_3181 = 0;
					iLocal_3183 = 0;
					iLocal_3180 = 3;
				}
			}
		}
	}
}

void func_343()
{
	while (((!unk_0xD6513D668481290A(joaat("police3")) || !unk_0xD6513D668481290A(joaat("maverick"))) || !unk_0xD6513D668481290A(joaat("bison"))) || !unk_0xD6513D668481290A(joaat("blista")))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (((((!unk_0x00D24B3F2A5CD22C(45, "BB_Chase") || !unk_0x00D24B3F2A5CD22C(35, "BB_Chase")) || !unk_0x00D24B3F2A5CD22C(2, "BB_Chase")) || !unk_0x00D24B3F2A5CD22C(54, "BB_Chase")) || !unk_0x00D24B3F2A5CD22C(55, "BB_Chase")) || !unk_0x00D24B3F2A5CD22C(67, "BB_Chase"))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

var func_344(int iParam0)
{
	var uVar0;
	
	unk_0x9CDD10270A1ACF6F(iParam0, &uVar0, 1);
	return uVar0;
}

void func_345(int iParam0, char* sParam1)
{
	unk_0x4F5DAC981AF98536(iParam0, sParam1);
}

int func_346()
{
	if (Global_15800 == 4)
	{
		if (unk_0x58E7DDFF8D17A82A())
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

var func_347(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x390CF6C8AD6903B7(Param0);
	unk_0x3F5F1772D71D5EC4(uVar0, func_230(unk_0x7AF0088ABFA713B6(), 1f, 1f));
	unk_0x0BBAABB52887CF8C(uVar0, iParam3);
	return uVar0;
}

void func_348()
{
	if (iLocal_3181 == 0)
	{
		iLocal_3338 = 1;
		iLocal_3467 = 0;
		iLocal_3488 = 0;
		iLocal_3506 = 0;
		while (iLocal_3338 == 1)
		{
			unk_0x2E94C9549322098D("M_LegalTrouble", 0);
			switch (iLocal_3183)
			{
				case 0:
					unk_0x04DD7A558FCF2C34("sol_3_int", 8);
					if (func_392())
					{
						while (!func_364(61, &uLocal_3743, 0, 1, 0, 0, 0))
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						iLocal_3438 = 0;
						unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
						func_217(1, 1, 1, 0, 0);
						unk_0x538BB037E00A3AD9(unk_0xBC25C936A095B5BA(), "Michael", 0, 0, 0);
						if (unk_0x724D816EA203A79E(Global_89597[0]))
						{
							if (unk_0xE59B7F5A03335350(Global_89597[0], 0))
							{
								unk_0x77815D3407C6700D(Global_89597[0], 1, 1);
								iLocal_3259 = Global_89597[0];
							}
						}
						if (unk_0x724D816EA203A79E(Global_89597[1]))
						{
							if (unk_0xE59B7F5A03335350(Global_89597[1], 0))
							{
								unk_0x77815D3407C6700D(Global_89597[1], 1, 1);
								iLocal_3276 = Global_89597[1];
							}
						}
						if (unk_0x724D816EA203A79E(Global_89597[2]))
						{
							if (unk_0xE59B7F5A03335350(Global_89597[2], 0))
							{
								unk_0x77815D3407C6700D(Global_89597[2], 1, 1);
								iLocal_3277 = Global_89597[2];
							}
						}
						if (unk_0x724D816EA203A79E(Global_89597[3]))
						{
							if (unk_0xE59B7F5A03335350(Global_89597[3], 0))
							{
								unk_0x77815D3407C6700D(Global_89597[3], 1, 1);
								iLocal_3278 = Global_89597[3];
							}
						}
						unk_0x93B1CB6BD50812C7(0);
						unk_0xF3C7BD26F94560D9(4);
						func_363();
						if (!unk_0x726D9204B160D23E())
						{
							unk_0x829FA4611BD56B44(250);
						}
						iLocal_3183++;
					}
					break;
				
				case 1:
					if (iLocal_3467 == 0)
					{
						if (unk_0x102F1A3BD4B68933())
						{
							if (iLocal_3506 == 0)
							{
								if (unk_0x724D816EA203A79E(iLocal_3278))
								{
									if (unk_0xE59B7F5A03335350(iLocal_3278, 0))
									{
										if (unk_0x8C1A6E7D5F410F4A(unk_0x6F79ECA8C83E4357(iLocal_3278)))
										{
											unk_0xA1EE8501940C1D3E(iLocal_3278, 2);
											unk_0x641B19E156645A92(iLocal_3278, -1048.722f, -506.8387f, 35.0386f, 1, 0, 0, 1);
											unk_0x019CE76D5286C95C(iLocal_3278, 357.1288f);
											unk_0x127F627F30266DD9(iLocal_3278, 1);
											unk_0xF0A40F19AAB79E88(iLocal_3278, 1084227584);
											func_353(-1048.722f, -506.8387f, 35.0386f, 357.1288f, 0, 145);
											iLocal_3506 = 1;
										}
										if (((unk_0x7C28D15641461C68(unk_0x6F79ECA8C83E4357(iLocal_3278)) || unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(iLocal_3278))) || unk_0x2B4DE5C0D509B0F9(unk_0x6F79ECA8C83E4357(iLocal_3278))) || unk_0x89B9572166100905(unk_0x6F79ECA8C83E4357(iLocal_3278)))
										{
											if ((((((((unk_0x6F79ECA8C83E4357(iLocal_3278) != joaat("bus") && unk_0x6F79ECA8C83E4357(iLocal_3278) != joaat("pounder")) && unk_0x6F79ECA8C83E4357(iLocal_3278) != joaat("packer")) && unk_0x6F79ECA8C83E4357(iLocal_3278) != joaat("airbus")) && unk_0x6F79ECA8C83E4357(iLocal_3278) != joaat("ambulance")) && unk_0x6F79ECA8C83E4357(iLocal_3278) != joaat("barracks")) && unk_0x6F79ECA8C83E4357(iLocal_3278) != joaat("barracks2")) && unk_0x6F79ECA8C83E4357(iLocal_3278) != joaat("benson")) && unk_0x6F79ECA8C83E4357(iLocal_3278) != joaat("biff"))
											{
												unk_0x641B19E156645A92(iLocal_3278, -1027.657f, -486.6945f, 35.9571f, 1, 0, 0, 1);
												unk_0x019CE76D5286C95C(iLocal_3278, 207.7515f);
												unk_0xF0A40F19AAB79E88(iLocal_3278, 1084227584);
												func_353(-1027.657f, -486.6945f, 35.9571f, 207.7515f, 0, 145);
												iLocal_3506 = 1;
											}
										}
										if ((((!unk_0x8C1A6E7D5F410F4A(unk_0x6F79ECA8C83E4357(iLocal_3278)) && !unk_0x7C28D15641461C68(unk_0x6F79ECA8C83E4357(iLocal_3278))) && !unk_0x7512ED01F3F46714(unk_0x6F79ECA8C83E4357(iLocal_3278))) && !unk_0x2B4DE5C0D509B0F9(unk_0x6F79ECA8C83E4357(iLocal_3278))) && !unk_0x89B9572166100905(unk_0x6F79ECA8C83E4357(iLocal_3278)))
										{
											unk_0xCF6040807CC0E4A5(&iLocal_3278);
											iLocal_3506 = 1;
										}
									}
								}
							}
							func_351(&uLocal_3743, 0, 0, 2000, 1, 1, 0, 1);
							iLocal_3467 = 1;
						}
					}
					if (iLocal_3438 == 0)
					{
						unk_0xB2CB6EAA6B280A84("SecGuards", &iLocal_3576);
						unk_0xA902E18EDF6FA0C8(5, joaat("player"), iLocal_3576);
						unk_0xA902E18EDF6FA0C8(5, iLocal_3576, joaat("player"));
						unk_0x900CF084251DED26("TREV4", 0);
						iLocal_3438 = 1;
					}
					if (iLocal_3488 == 0)
					{
						if (unk_0x866EAD7E27D8D0F8())
						{
							unk_0xF643D76BBEB27712(unk_0xBC25C936A095B5BA());
							unk_0xAC9B0ED8D915D62B(unk_0xBC25C936A095B5BA());
							unk_0xC70E4601A4F9E28B(unk_0xBC25C936A095B5BA());
							if (unk_0xADE6C4641AFD481C() > 120000)
							{
								unk_0x3857DADBD6EC8A54("TRV4_START");
								iLocal_3488 = 1;
							}
						}
					}
					if (unk_0x3F3252765FE36DA8("Michael", 0))
					{
						unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), -1012.268f, -480.0742f, 38.9757f, 1, 0, 0, 1);
						unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), 121.4087f);
						unk_0x56EDA6006F1B166D(unk_0xB5CEFD608600A09F(), 2f, 3000, 0, 1, 0);
						unk_0x2EB4D46478766D87(unk_0xBC25C936A095B5BA(), 0, 0);
						unk_0x3E2B7D349B5735D3(unk_0xBC25C936A095B5BA(), joaat("MotionState_Run"), 0, 0, 0);
					}
					if (unk_0x4B088956DA856645(0))
					{
						unk_0xF3F01A78937DC905(0f);
					}
					if (!unk_0x102F1A3BD4B68933())
					{
						func_350(61);
						if (iLocal_3488 == 0)
						{
							unk_0x3857DADBD6EC8A54("TRV4_START_CS_SKIP");
							iLocal_3488 = 1;
						}
						unk_0x1E463345CF429A99();
						func_217(0, 1, 1, 0, 0);
						iLocal_3183++;
					}
					break;
				
				case 2:
					unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
					if (unk_0x724D816EA203A79E(iLocal_3259))
					{
						if (unk_0xE59B7F5A03335350(iLocal_3259, 0))
						{
							if (unk_0xB248FAA35ED47DB9(iLocal_3259, 1))
							{
								unk_0x1E7A09C1710FB071(&iLocal_3259);
							}
						}
					}
					if (unk_0x724D816EA203A79E(iLocal_3276))
					{
						if (unk_0xE59B7F5A03335350(iLocal_3276, 0))
						{
							if (unk_0xB248FAA35ED47DB9(iLocal_3276, 1))
							{
								unk_0x1E7A09C1710FB071(&iLocal_3276);
							}
						}
					}
					if (unk_0x724D816EA203A79E(iLocal_3277))
					{
						if (unk_0xE59B7F5A03335350(iLocal_3277, 0))
						{
							if (unk_0xB248FAA35ED47DB9(iLocal_3277, 1))
							{
								unk_0x1E7A09C1710FB071(&iLocal_3277);
							}
						}
					}
					func_349();
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

void func_349()
{
	Global_55973 = 0;
}

void func_350(int iParam0)
{
	if (Global_90022 != -1)
	{
		if (iParam0 == Global_90022)
		{
			Global_90026 = 1;
			return;
		}
	}
}

void func_351(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	
	if (iParam4 == 1)
	{
		unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()), 64);
	}
	if (!unk_0x866EAD7E27D8D0F8())
	{
		unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			unk_0x9965F1612928953B(unk_0xBC25C936A095B5BA(), 1);
		}
	}
	if (!bParam1 && iParam6)
	{
		unk_0x9CB4DD3D88846081(0, 0, 3, 0);
	}
	else
	{
		unk_0x062C9995BFD27B2A(bParam1, iParam2, iParam3, 1, 0, 0);
	}
	if (bParam1)
	{
		unk_0x7456702622C62EA0(1);
	}
	else
	{
		if (unk_0xEF0E25DA0CB6E8FF(uParam0->f_4))
		{
			if (unk_0xEDEA6C8F42EE05F6(uParam0->f_4))
			{
				unk_0x348665177DBFB93B(uParam0->f_4, 0);
			}
			unk_0x4EC087603E1DEF9C(uParam0->f_4, 1);
		}
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			unk_0xDC078F87049ECECE(unk_0xBC25C936A095B5BA(), 1, 0);
		}
		iVar0 = unk_0x3E12B546F3F2597A();
		if (unk_0x724D816EA203A79E(iVar0))
		{
			unk_0xDC078F87049ECECE(iVar0, 1, 0);
		}
		unk_0xDA70546257A3ED8B("TIME_LAPSE");
		if (unk_0x144E80F5C46A6B75("TOD_SHIFT_SCENE"))
		{
			unk_0x38FF8CB6377D36F6(uParam0->f_10);
			unk_0xDA70546257A3ED8B("TIME_LAPSE");
			unk_0xC1300D0F3A74E20B("TOD_SHIFT_SCENE");
		}
	}
	func_217(bParam1, 1, 0, 0, 0);
	func_352();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			unk_0xC2BB4D344E887586(uParam0->f_7, 0, 0);
		}
		else
		{
			unk_0xC2BB4D344E887586(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (unk_0x17FAADF9916EF741())
		{
			unk_0x829FA4611BD56B44(250);
		}
	}
	if (!bParam1)
	{
		if (Global_105220.f_32546.f_4801 != -15)
		{
			Global_105220.f_32546.f_4801 = func_93();
		}
	}
}

void func_352()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		unk_0x8C563C8EA840EA02(Global_105220.f_14112[iVar0 /*104*/].f_16);
		iVar0++;
	}
}

void func_353(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	var uVar3;
	
	if (unk_0x724D816EA203A79E(Global_95814.f_4))
	{
		if (unk_0xE59B7F5A03335350(Global_95814.f_4, 0))
		{
			if (func_362(24) != Global_95814.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_359(unk_0x541C2AEF053615BC(Global_95814.f_4, 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_354(Global_95814.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_354(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0x724D816EA203A79E(iParam0) && unk_0xE59B7F5A03335350(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0x724D816EA203A79E(Global_69800.f_484[25]) && unk_0xE59B7F5A03335350(Global_69800.f_484[25], 0))
			{
				if (Global_69800.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0x10A01B0B02B273EF(iParam0) || unk_0x6F79ECA8C83E4357(iParam0) == joaat("bus")) || unk_0x6F79ECA8C83E4357(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_358(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_39(iParam0, &Var0);
		if (func_70(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0x541C2AEF053615BC(iParam0, 1) };
			fParam4 = unk_0x349C94FFF43E2979(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993()) != joaat("vehicle_gen_controller"))
			{
				Global_70788 = unk_0x56BEECB328B6D29D(unk_0x1377080E9B0BD993());
			}
		}
		func_356(iParam5, &Var0, Param1, fParam4, func_34(iParam0));
		func_355(iParam5, iParam0, 0);
	}
}

void func_355(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_156(&(Global_69800.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xFA30DFD0084E92FE(Global_69800.f_555[0 /*21*/].f_9, 12) && !unk_0xFA30DFD0084E92FE(Global_69800.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_69800.f_555[0 /*21*/].f_4 != unk_0x6F79ECA8C83E4357(iParam1))
		{
			return;
		}
	}
	if (Global_70707 != -1 && Global_70707 != iParam0)
	{
		return;
	}
	if (unk_0x724D816EA203A79E(iParam1))
	{
		if (unk_0xE59B7F5A03335350(iParam1, 0))
		{
			if (!unk_0x5CAE759AE8219D20(iParam1))
			{
				unk_0x77815D3407C6700D(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_105220.f_32546.f_4801 = func_93();
			}
			if (iParam1 != Global_69800.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_362(iParam0);
					if ((unk_0x724D816EA203A79E(iVar0) && unk_0xE59B7F5A03335350(iVar0, 0)) && iParam1 != iVar0)
					{
						func_142(iVar0, 145);
					}
				}
				Global_70706 = iParam1;
				Global_70707 = iParam0;
				Global_70708 = iParam2;
			}
		}
	}
}

void func_356(int iParam0, var uParam1, struct<3> Param2, float fParam5, int iParam6)
{
	if (func_156(&(Global_69800.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xFA30DFD0084E92FE(Global_69800.f_555[0 /*21*/].f_9, 10))
		{
			func_357(iParam0);
			func_153(uParam1, &(Global_105220.f_32546.f_69[Global_69800.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0xFA30DFD0084E92FE(Global_69800.f_555[0 /*21*/].f_9, 11))
			{
				Global_105220.f_32546.f_1864[Global_69800.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_105220.f_32546.f_1934[Global_69800.f_555[0 /*21*/].f_14] = fParam5;
			}
			else
			{
				Global_105220.f_32546.f_1864[Global_69800.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_105220.f_32546.f_1934[Global_69800.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_105220.f_32546.f_1958[Global_69800.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_149(iParam0, 1);
		}
	}
}

void func_357(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_156(&(Global_69800.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x724D816EA203A79E(Global_69800.f_139[iParam0]))
		{
			unk_0x77815D3407C6700D(Global_69800.f_139[iParam0], 1, 1);
			unk_0x1E7A09C1710FB071(&(Global_69800.f_139[iParam0]));
			Global_69800.f_139[iParam0] = 0;
		}
		if (unk_0xFA30DFD0084E92FE(Global_69800.f_555[0 /*21*/].f_9, 13))
		{
			func_149(iParam0, 0);
		}
	}
}

void func_358(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_357(iParam0);
	func_149(iParam0, 0);
}

int func_359(struct<3> Param0, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	iVar0 = func_360(Param0, iParam3, 1);
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

int func_360(struct<3> Param0, int iParam3, int iParam4)
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
		if (Global_88138[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_88138[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_361(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0xF0F2FC9DE291567F(Param0, Global_88138[iVar0 /*10*/].f_3, 1);
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

bool func_361(int iParam0)
{
	return unk_0xFA30DFD0084E92FE(Global_105220.f_7200[iParam0], 0);
}

int func_362(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_69800.f_139[iParam0];
}

void func_363()
{
	Global_55973 = 1;
}

bool func_364(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<2> Var0;
	
	func_391(iParam0, &Var0);
	func_390(iParam0, &Var0, &(Var0.f_1));
	return func_365(uParam1, &Var0, bParam2, bParam3, bParam4, bParam5, bParam6);
}

int func_365(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	
	uParam0->f_7 = *uParam1;
	uParam0->f_8 = uParam1->f_1;
	if ((func_423(0) && !bParam2) && !bParam4)
	{
		if (uParam0->f_5)
		{
			unk_0xC2BB4D344E887586(uParam0->f_7, 0, 0);
		}
		else
		{
			unk_0xC2BB4D344E887586(uParam0->f_8, 0, 0);
		}
		return 1;
	}
	if (uParam0->f_2 == 0)
	{
		if (uParam0->f_7 != -1 && uParam0->f_8 != -1)
		{
			if (bParam2 || !func_388(uParam0->f_8, uParam0->f_7))
			{
				if (unk_0xF25512B8A510B0E1("TIME_LAPSE", 0, -1))
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
	unk_0xDE7B9CB38D019BF0();
	unk_0x4E0EC60D119222B1(7);
	unk_0xF8F756483107049E(0f);
	if (uParam0->f_2 == 1)
	{
		if (bParam2)
		{
			unk_0x4EC087603E1DEF9C(uParam0->f_4, 0);
			uParam0->f_4 = unk_0x578D5D08EC980893("DEFAULT_SPLINE_CAMERA", 0);
			unk_0xAAD57F72AF23F964(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				unk_0xAAD57F72AF23F964(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				unk_0xAAD57F72AF23F964(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			unk_0x9DF315A9EFFF87AC(uParam0->f_4, uParam1->f_14);
			unk_0x348665177DBFB93B(uParam0->f_4, 1);
			if (!bParam6)
			{
				if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
				{
					unk_0xDC078F87049ECECE(unk_0xBC25C936A095B5BA(), 0, 0);
				}
				iVar0 = unk_0x3E12B546F3F2597A();
				if (unk_0x724D816EA203A79E(iVar0))
				{
					if (!unk_0x5CAE759AE8219D20(iVar0))
					{
						unk_0x77815D3407C6700D(iVar0, 1, 0);
					}
					unk_0xDC078F87049ECECE(iVar0, 0, 0);
				}
			}
			uVar1 = unk_0x99200FD48DC740AA(uParam0->f_4);
			unk_0x31F042DC27C8DECE();
			unk_0xD2A8FC9FE0044C83(uParam1->f_2, uVar1, 0);
			unk_0x5DEC86EE2E34A59D(uParam1->f_2, uVar1);
			unk_0x6A54FD861D871600(uParam1->f_2, uVar1);
			if (bParam3)
			{
				unk_0x6C5F5B5F6894CCE3(uParam1->f_2, 5000f, 1, 1, 0, 0);
			}
			func_387(&(uParam0->f_1), 0, 0, 0, unk_0xBE14F159908E4EE5(), unk_0xDD6A91E47ED4D0CF(), unk_0x4EEB3860BFC44B78());
			func_351(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else if (!func_388(uParam0->f_7, uParam0->f_8))
		{
			if (uParam0->f_5)
			{
				unk_0x4EC087603E1DEF9C(uParam0->f_4, 0);
				uParam0->f_4 = unk_0x578D5D08EC980893("DEFAULT_SPLINE_CAMERA", 0);
				unk_0xAAD57F72AF23F964(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				if (uParam1->f_17 < 0)
				{
					unk_0xAAD57F72AF23F964(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				}
				else
				{
					unk_0xAAD57F72AF23F964(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				}
				unk_0x9DF315A9EFFF87AC(uParam0->f_4, uParam1->f_14);
				unk_0x348665177DBFB93B(uParam0->f_4, 1);
				if (!bParam6)
				{
					if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
					{
						unk_0xDC078F87049ECECE(unk_0xBC25C936A095B5BA(), 0, 0);
					}
					iVar2 = unk_0x3E12B546F3F2597A();
					if (unk_0x724D816EA203A79E(iVar2))
					{
						if (!unk_0x5CAE759AE8219D20(iVar2))
						{
							unk_0x77815D3407C6700D(iVar2, 1, 0);
						}
						unk_0xDC078F87049ECECE(iVar2, 0, 0);
					}
				}
				uVar3 = unk_0x99200FD48DC740AA(uParam0->f_4);
				unk_0x31F042DC27C8DECE();
				unk_0xD2A8FC9FE0044C83(uParam1->f_2, uVar3, 0);
				unk_0x5DEC86EE2E34A59D(uParam1->f_2, uVar3);
				unk_0x6A54FD861D871600(uParam1->f_2, uVar3);
				if (bParam3)
				{
					unk_0x6C5F5B5F6894CCE3(uParam1->f_2, 5000f, 1, 1, 0, 0);
				}
				func_387(&(uParam0->f_1), 0, 0, 8, unk_0xBE14F159908E4EE5(), unk_0xDD6A91E47ED4D0CF(), unk_0x4EEB3860BFC44B78());
				func_351(uParam0, 1, 0, 2000, 1, 1, 0, 1);
				uParam0->f_2 = 2;
			}
			else
			{
				unk_0xDA70546257A3ED8B("TIME_LAPSE");
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else if (!uParam0->f_5)
		{
			unk_0x4EC087603E1DEF9C(uParam0->f_4, 0);
			uParam0->f_4 = unk_0x578D5D08EC980893("DEFAULT_SPLINE_CAMERA", 0);
			unk_0xAAD57F72AF23F964(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				unk_0xAAD57F72AF23F964(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				unk_0xAAD57F72AF23F964(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			unk_0x9DF315A9EFFF87AC(uParam0->f_4, uParam1->f_14);
			unk_0x0EE3BD85F728F360(uParam0->f_4, 3);
			unk_0x348665177DBFB93B(uParam0->f_4, 1);
			if (!bParam6)
			{
				if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
				{
					unk_0xDC078F87049ECECE(unk_0xBC25C936A095B5BA(), 0, 0);
				}
				iVar4 = unk_0x3E12B546F3F2597A();
				if (unk_0x724D816EA203A79E(iVar4))
				{
					if (!unk_0x5CAE759AE8219D20(iVar4))
					{
						unk_0x77815D3407C6700D(iVar4, 1, 0);
					}
					unk_0xDC078F87049ECECE(iVar4, 0, 0);
				}
			}
			uVar5 = unk_0x99200FD48DC740AA(uParam0->f_4);
			unk_0x31F042DC27C8DECE();
			unk_0xD2A8FC9FE0044C83(uParam1->f_2, uVar5, 0);
			unk_0x5DEC86EE2E34A59D(uParam1->f_2, uVar5);
			unk_0x6A54FD861D871600(uParam1->f_2, uVar5);
			if (bParam3)
			{
				unk_0x6C5F5B5F6894CCE3(uParam1->f_2, 5000f, 0, 1, 0, 0);
			}
			func_387(&(uParam0->f_1), 0, 0, 0, unk_0xBE14F159908E4EE5(), unk_0xDD6A91E47ED4D0CF(), unk_0x4EEB3860BFC44B78());
			func_351(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else
		{
			unk_0xDA70546257A3ED8B("TIME_LAPSE");
			uParam0->f_2 = -1;
			return 1;
		}
	}
	if (uParam0->f_2 == 2)
	{
		if (bParam3)
		{
			unk_0x6C5F5B5F6894CCE3(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (!uParam0->f_5)
		{
			if (func_368(uParam0->f_8, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
			{
				if (uParam1->f_17 < 0)
				{
					uParam0->f_9 = unk_0x105601648511CC64();
					uParam0->f_2 = 3;
				}
				else
				{
					uParam0->f_4 = unk_0x578D5D08EC980893("DEFAULT_SPLINE_CAMERA", 0);
					unk_0xAAD57F72AF23F964(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
					unk_0xAAD57F72AF23F964(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
					unk_0x9DF315A9EFFF87AC(uParam0->f_4, uParam1->f_14);
					unk_0x0EE3BD85F728F360(uParam0->f_4, 3);
					unk_0x348665177DBFB93B(uParam0->f_4, 1);
					uParam0->f_9 = unk_0x105601648511CC64();
					uParam0->f_2 = 22;
				}
			}
		}
		else if (func_368(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
		{
			if (uParam1->f_17 < 0)
			{
				uParam0->f_9 = unk_0x105601648511CC64();
				uParam0->f_2 = 3;
			}
			else
			{
				uParam0->f_4 = unk_0x578D5D08EC980893("DEFAULT_SPLINE_CAMERA", 0);
				unk_0xAAD57F72AF23F964(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				unk_0xAAD57F72AF23F964(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				unk_0x9DF315A9EFFF87AC(uParam0->f_4, uParam1->f_14);
				unk_0x0EE3BD85F728F360(uParam0->f_4, 3);
				unk_0x348665177DBFB93B(uParam0->f_4, 1);
				uParam0->f_9 = unk_0x105601648511CC64();
				uParam0->f_2 = 22;
			}
		}
		if (!bParam5)
		{
			if (func_366(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!unk_0x422F9EDE839E6ABB())
				{
					unk_0x7A41D32A383895D8(250);
				}
				if (!unk_0x17FAADF9916EF741())
				{
					unk_0xDE7B9CB38D019BF0();
					unk_0x4E0EC60D119222B1(7);
					return 0;
				}
				if (uParam0->f_3 != 0)
				{
					func_368(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, 1f, 0, 1, 1065353216);
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 22)
	{
		if (bParam3)
		{
			unk_0x6C5F5B5F6894CCE3(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (unk_0xEF0E25DA0CB6E8FF(uParam0->f_4) && unk_0x16BE1286447174A9(uParam0->f_4))
		{
		}
		else
		{
			uParam0->f_9 = unk_0x105601648511CC64();
			uParam0->f_2 = 3;
		}
		if (!bParam5)
		{
			if (func_366(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!unk_0x422F9EDE839E6ABB())
				{
					unk_0x7A41D32A383895D8(250);
				}
				if (!unk_0x17FAADF9916EF741())
				{
					unk_0xDE7B9CB38D019BF0();
					unk_0x4E0EC60D119222B1(7);
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
			unk_0x6C5F5B5F6894CCE3(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (uParam0->f_9 + 1000 > unk_0x105601648511CC64())
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

int func_366(int iParam0)
{
	if (unk_0x726D9204B160D23E())
	{
		if ((unk_0x105601648511CC64() - Global_28) > iParam0)
		{
			Global_27 = unk_0x105601648511CC64();
		}
		Global_28 = unk_0x105601648511CC64();
		if ((unk_0x105601648511CC64() - Global_27) > iParam0)
		{
			if (func_367())
			{
				Global_27 = unk_0x105601648511CC64();
				return 1;
			}
		}
	}
	return 0;
}

int func_367()
{
	if (unk_0xE186ACC7BE9B244E())
	{
		return 0;
	}
	if (unk_0x694514BD37EC4E94(0, 18) || unk_0x694514BD37EC4E94(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_368(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6, bool bParam7, float fParam8)
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
			*uParam4 = func_93();
			iVar5 = func_93();
			func_101(&iVar5, iParam0);
			func_102(&iVar5, iParam1);
			func_103(&iVar5, 0);
			if (func_385(*uParam4, iVar5))
			{
				func_384(&iVar5, 0, 0, 0, 1, 0, 0);
			}
			func_382(*uParam4, iVar5, &iVar1, &iVar2, &iVar3, &uVar6, &uVar7, &uVar8);
			uParam4->f_11 = ((iVar1 + iVar2 * 60) + (iVar3 + iParam6) * 3600);
			func_375((unk_0xBBDA792448DB5A89(uParam4->f_11) / 3600f));
			if (bParam7)
			{
				unk_0x6181F5E08459A9AA(0.6f);
				unk_0x66F05C65F48B55AF(0);
				unk_0xC325E1B6F956BE1A(0);
			}
			func_374();
			uParam4->f_10 = unk_0x2F079D1FC5F6CB99();
			unk_0xC4BA30B532FE260F(uParam4->f_10, "TIME_LAPSE_MASTER", 0, 1);
			unk_0xD6423910AAD8A379("TOD_SHIFT_SCENE");
			func_352();
			uParam4->f_3++;
			break;
		
		case 1:
		case 2:
			if ((unk_0xEF0E25DA0CB6E8FF(uParam4->f_4) && unk_0x16BE1286447174A9(uParam4->f_4)) || !(fParam5 >= 0.99f || fParam5 == -1f))
			{
				if (unk_0xEF0E25DA0CB6E8FF(uParam4->f_4) && unk_0x16BE1286447174A9(uParam4->f_4))
				{
					fVar0 = unk_0x11173DE1BDC2E73C(uParam4->f_4);
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
						if (unk_0x56BEECB328B6D29D(sParam2) != 0)
						{
							unk_0x34DAC25A04E24704(sParam2, fParam8);
						}
						if (unk_0x56BEECB328B6D29D(sParam3) != 0)
						{
							unk_0x5D4CFAB81AB232CA();
							unk_0xCF6DC60B0555118D(sParam3, 0);
						}
						uParam4->f_3 = 2;
					}
				}
			}
			if (fVar0 >= 0.99f || fVar0 == -1f)
			{
				iVar5 = *uParam4;
				func_384(&iVar5, uParam4->f_11, 0, 0, 0, 0, 0);
				unk_0xC2BB4D344E887586(func_373(iVar5), func_372(iVar5), func_371(iVar5));
				if (bParam7)
				{
					unk_0x7FF4F08CAB3344B1();
				}
				unk_0x38FF8CB6377D36F6(uParam4->f_10);
				unk_0xDA70546257A3ED8B("TIME_LAPSE");
				if (bParam7)
				{
					unk_0xC325E1B6F956BE1A(1);
					unk_0x66F05C65F48B55AF(1);
				}
				return 1;
			}
			fVar11 = fVar0;
			fVar9 = 0.1f;
			fVar10 = 0.9f;
			fVar12 = func_370(((fVar11 - fVar9) / (fVar10 - fVar9)), 0f, 1f);
			iVar4 = unk_0xF2DB717A73826179((IntToFloat(uParam4->f_11) * fVar12));
			iVar5 = *uParam4;
			func_384(&iVar5, iVar4, 0, 0, 0, 0, 0);
			unk_0xC2BB4D344E887586(func_373(iVar5), func_372(iVar5), func_371(iVar5));
			if (func_369(iVar5) != unk_0xBE14F159908E4EE5())
			{
				unk_0x9AB7C330ACFB4394(func_369(iVar5), func_100(iVar5), func_98(iVar5));
			}
			func_265();
			unk_0x4C6F2776AE2C21F9(6);
			break;
	}
	return 0;
}

int func_369(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

float func_370(float fParam0, float fParam1, float fParam2)
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

int func_371(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_372(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_373(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_374()
{
	int iVar0;
	
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		return 0;
	}
	if (!unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
	{
		return 0;
	}
	iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
	if (!unk_0x1D403DFADBC2DE3C(iVar0, 0))
	{
		return 0;
	}
	unk_0x004811915F93A42D(iVar0, "OFF");
	return 1;
}

void func_375(float fParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_381(&(Global_105220.f_18074.f_175[iVar0 /*19*/].f_5)))
		{
			func_376(&(Global_105220.f_18074.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_381(&(Global_105220.f_18074.f_362[iVar1 /*3*/])))
		{
			func_376(&(Global_105220.f_18074.f_362[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	unk_0x8FC2F3CD3A70C300();
}

void func_376(var uParam0, float fParam1)
{
	if (func_381(uParam0))
	{
		func_377(uParam0, (func_379(uParam0) + fParam1));
	}
}

void func_377(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_378(unk_0xFA30DFD0084E92FE(*uParam0, 4)) - fParam1);
	unk_0xF0059F27F7BB6680(uParam0, 1);
	unk_0x7CB6FD92BE491AD9(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_378(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = unk_0xBBDA792448DB5A89(unk_0x105601648511CC64());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		iVar2 = unk_0xED678C85A82F0AB9();
		fVar3 = unk_0xBBDA792448DB5A89(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (unk_0xBBDA792448DB5A89(unk_0x105601648511CC64()) / 1000f);
}

float func_379(var uParam0)
{
	if (func_381(uParam0))
	{
		if (func_380(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_378(unk_0xFA30DFD0084E92FE(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_380(var uParam0)
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 2);
}

bool func_381(var uParam0)
{
	return unk_0xFA30DFD0084E92FE(*uParam0, 1);
}

void func_382(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_385(iParam0, iParam1))
	{
		iVar0 = func_100(iParam1);
		iVar1 = func_98(iParam0);
		iVar2 = (func_98(iParam0) - func_98(iParam1));
		iVar3 = (func_100(iParam0) - func_100(iParam1));
		iVar4 = (func_369(iParam0) - func_369(iParam1));
		iVar5 = (func_373(iParam0) - func_373(iParam1));
		iVar6 = (func_372(iParam0) - func_372(iParam1));
		iVar7 = (func_371(iParam0) - func_371(iParam1));
	}
	else
	{
		iVar0 = func_100(iParam0);
		iVar1 = func_98(iParam1);
		iVar2 = (func_98(iParam1) - func_98(iParam0));
		iVar3 = (func_100(iParam1) - func_100(iParam0));
		iVar4 = (func_369(iParam1) - func_369(iParam0));
		iVar5 = (func_373(iParam1) - func_373(iParam0));
		iVar6 = (func_372(iParam1) - func_372(iParam0));
		iVar7 = (func_371(iParam1) - func_371(iParam0));
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
		iVar4 = (iVar4 + func_97(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = unk_0xF2DB717A73826179(func_383(unk_0xBBDA792448DB5A89(iVar0 + 1), 0f, 12f));
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

float func_383(float fParam0, float fParam1, float fParam2)
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

void func_384(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_98(*iParam0);
	iVar1 = func_100(*iParam0);
	iVar2 = func_369(*iParam0);
	iVar3 = func_373(*iParam0);
	iVar4 = func_372(*iParam0);
	iVar5 = func_371(*iParam0);
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
	iVar6 = func_97(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_97(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_387(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_385(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_386(iParam1) || !func_386(iParam0))
	{
		return 1;
	}
	iVar0 = func_98(iParam0);
	iVar1 = func_98(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_100(iParam0);
	iVar1 = func_100(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_369(iParam0);
	iVar1 = func_369(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_373(iParam0);
	iVar1 = func_373(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_372(iParam0);
	iVar1 = func_372(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_371(iParam0);
	iVar1 = func_371(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_386(int iParam0)
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
	iVar0 = func_371(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_372(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_373(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_98(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_100(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_369(iParam0);
	if (iVar5 < 1 || iVar5 > func_97(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_387(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_103(uParam0, iParam1);
	func_102(uParam0, iParam2);
	func_101(uParam0, iParam3);
	func_95(uParam0, iParam5);
	func_96(uParam0, iParam4);
	func_94(uParam0, iParam6);
}

bool func_388(int iParam0, int iParam1)
{
	return func_389(unk_0x6E06C0DB9B43570D(), iParam0, iParam1);
}

int func_389(int iParam0, int iParam1, int iParam2)
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

void func_390(int iParam0, var uParam1, var uParam2)
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
			*uParam1 = Global_83888[iParam0 /*34*/].f_14;
			*uParam2 = Global_83888[iParam0 /*34*/].f_13;
			break;
	}
}

void func_391(int iParam0, var uParam1)
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
			switch (func_104())
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
			switch (func_104())
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
				if (func_104() != 2)
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
	if (unk_0x56BEECB328B6D29D("RAIN") == unk_0x8E0A76DAE8D6BBA5())
	{
		if (unk_0xF1734B55490E9045(&(uParam1->f_18)))
		{
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
		}
		if (unk_0xF1734B55490E9045(&(uParam1->f_22)))
		{
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
		}
	}
}

bool func_392()
{
	bool bVar0;
	
	bVar0 = unk_0xDC9E16E99286F31D();
	if (!Global_70977)
	{
		if (!bVar0)
		{
			Global_70977 = 1;
		}
	}
	return bVar0;
}

void func_393()
{
	unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
	if (!func_23())
	{
		if (func_423(0))
		{
			unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 0, 0);
			unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
			unk_0xF243B7A14FCFD0F4(joaat("rapidgt"));
			unk_0xF243B7A14FCFD0F4(joaat("surano"));
			unk_0xF243B7A14FCFD0F4(joaat("carbonizzare"));
			while ((!unk_0xD6513D668481290A(joaat("rapidgt")) || !unk_0xD6513D668481290A(joaat("surano"))) || !unk_0xD6513D668481290A(joaat("carbonizzare")))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (!unk_0x724D816EA203A79E(iLocal_3259))
			{
				unk_0x6C5F5B5F6894CCE3(Local_3294, 5f, 1, 0, 0, 0);
				iLocal_3259 = unk_0x61C05BF08A1E0EFE(joaat("rapidgt"), Local_3294, fLocal_3321, 1, 1, 0);
				unk_0x914C5DE0B15B8B59(iLocal_3259, 112, 112);
				unk_0x65E471E4A2D56226(iLocal_3259, 3000, 0);
				unk_0xDB35A2F9333ABEC5(iLocal_3259, 1);
				unk_0x2CA123B0622F495C(joaat("rapidgt"));
				unk_0x8510BC031C24B862(joaat("rapidgt"), 1);
				unk_0x656194E145691D3E(iLocal_3259, 1);
				unk_0xA73D1278857991A2(iLocal_3259, 1);
			}
			if (!unk_0x724D816EA203A79E(iLocal_3276))
			{
				if (unk_0xD6513D668481290A(joaat("surano")))
				{
					unk_0x6C5F5B5F6894CCE3(-1037.398f, -491.6539f, 35.5545f, 5f, 1, 0, 0, 0);
					iLocal_3276 = unk_0x61C05BF08A1E0EFE(joaat("surano"), -1037.398f, -491.6539f, 35.5545f, 208.889f, 1, 1, 0);
					unk_0x914C5DE0B15B8B59(iLocal_3276, 0, 0);
					unk_0x65E471E4A2D56226(iLocal_3276, 3000, 0);
					unk_0xDB35A2F9333ABEC5(iLocal_3276, 1);
					unk_0x2CA123B0622F495C(joaat("surano"));
					unk_0x8510BC031C24B862(joaat("surano"), 1);
					unk_0xA73D1278857991A2(iLocal_3276, 1);
				}
			}
			if (!unk_0x724D816EA203A79E(iLocal_3277))
			{
				if (unk_0xD6513D668481290A(joaat("carbonizzare")))
				{
					unk_0x6C5F5B5F6894CCE3(Local_3294, 5f, 1, 0, 0, 0);
					iLocal_3277 = unk_0x61C05BF08A1E0EFE(joaat("carbonizzare"), -1033.938f, -489.7475f, 35.8323f, 207.1758f, 1, 1, 0);
					unk_0x914C5DE0B15B8B59(iLocal_3277, 89, 89);
					unk_0x65E471E4A2D56226(iLocal_3277, 3000, 0);
					unk_0xDB35A2F9333ABEC5(iLocal_3277, 1);
					unk_0x2CA123B0622F495C(joaat("carbonizzare"));
					unk_0x8510BC031C24B862(joaat("carbonizzare"), 1);
					unk_0xA73D1278857991A2(iLocal_3277, 1);
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
		unk_0xB2CB6EAA6B280A84("SecGuards", &iLocal_3576);
		unk_0xA902E18EDF6FA0C8(5, joaat("player"), iLocal_3576);
		unk_0xA902E18EDF6FA0C8(5, iLocal_3576, joaat("player"));
		if (Global_87277 == 1)
		{
			if (func_396() == 0)
			{
				func_395(Local_3312, fLocal_3325, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				unk_0x3857DADBD6EC8A54("TRV4_START_RT");
				iLocal_3180 = 3;
			}
			if (func_396() == 1)
			{
				func_395(-935.4413f, -2928.061f, 12.9451f, 178.466f, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				unk_0x3857DADBD6EC8A54("TRV4_FOOT_CHASE_RT");
				iLocal_3180 = 5;
			}
			if (func_396() == 2)
			{
				func_395(-937.5466f, -2968.713f, 12.9451f, 111.5016f, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				unk_0x3857DADBD6EC8A54("TRV4_EVADE_RT");
				iLocal_3180 = 8;
			}
			if (func_396() == 3)
			{
				func_395(-920.0547f, -2744.661f, 12.9322f, 357.1374f, 1, 0);
				func_394();
			}
		}
		else
		{
			if (func_396() == 0)
			{
				func_395(-1019.579f, -484.872f, 36.0795f, 93.7701f, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				unk_0x3857DADBD6EC8A54("TRV4_START_RT");
				iLocal_3180 = 2;
			}
			if (func_396() == 1)
			{
				func_395(Local_3312, fLocal_3325, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				unk_0x3857DADBD6EC8A54("TRV4_START_RT");
				iLocal_3180 = 3;
			}
			if (func_396() == 2)
			{
				func_395(-935.4413f, -2928.061f, 12.9451f, 178.466f, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				unk_0x3857DADBD6EC8A54("TRV4_FOOT_CHASE_RT");
				iLocal_3180 = 5;
			}
			if (func_396() == 3)
			{
				func_395(-937.5466f, -2968.713f, 12.9451f, 111.5016f, 1, 0);
				iLocal_3181 = 0;
				iLocal_3345 = 1;
				unk_0x3857DADBD6EC8A54("TRV4_EVADE_RT");
				iLocal_3180 = 8;
			}
		}
		unk_0x900CF084251DED26("TREV4", 0);
		while (!unk_0xFA9040D29FE330BD(0))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
}

void func_394()
{
	if (iLocal_3181 == 0)
	{
		unk_0x6C5F5B5F6894CCE3(-920.0547f, -2744.662f, 12.8434f, 20f, 1, 0, 0, 0);
		unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 0, 0);
		unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
		iLocal_3181++;
	}
	if (iLocal_3181 == 1)
	{
		unk_0x8B6B50EADA01F251(-920.0547f, -2744.662f, 12.8434f);
		if (!unk_0x726D9204B160D23E())
		{
			func_21(0, -1, 1);
			unk_0x829FA4611BD56B44(800);
		}
		func_6();
	}
}

void func_395(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_23())
	{
		unk_0x6C87EFD58B261C6F(0);
		unk_0x7CB6FD92BE491AD9(&(Global_92955.f_20), 2);
		unk_0x121BBDEFA4F0C22B(1);
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
		}
		Global_92951 = { Param0 };
		Global_92954 = fParam3;
		Global_92950 = 1;
		if (iParam4 == 1)
		{
			unk_0xF0059F27F7BB6680(&(Global_92955.f_20), 14);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(Global_92955.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0xF0059F27F7BB6680(&(Global_92955.f_20), 24);
		}
		else
		{
			unk_0x7CB6FD92BE491AD9(&(Global_92955.f_20), 24);
		}
		func_22(1);
	}
}

int func_396()
{
	if (!Global_92955 == 10 && !Global_92955 == 9)
	{
		return 0;
	}
	return Global_92955.f_2;
}

void func_397()
{
	if (iLocal_3490[0] == 0)
	{
		if (unk_0x724D816EA203A79E(iLocal_3121[7]))
		{
			if (unk_0xE59B7F5A03335350(iLocal_3121[7], 0))
			{
				unk_0x55662F9F262C2F9B(iLocal_3121[7], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[0] = 1;
			}
		}
	}
	if (iLocal_3498[0] == 0)
	{
		if (iLocal_3490[0] == 1)
		{
			if (unk_0x724D816EA203A79E(iLocal_3121[7]))
			{
				if (!unk_0xE59B7F5A03335350(iLocal_3121[7], 0))
				{
					unk_0x38E412DB4A45B900(iLocal_3121[7], 0);
					iLocal_3498[0] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					unk_0x38E412DB4A45B900(iLocal_3121[7], 0);
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
		if (unk_0x724D816EA203A79E(iLocal_3121[8]))
		{
			if (unk_0xE59B7F5A03335350(iLocal_3121[8], 0))
			{
				unk_0x55662F9F262C2F9B(iLocal_3121[8], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[1] = 1;
			}
		}
	}
	if (iLocal_3498[1] == 0)
	{
		if (iLocal_3490[1] == 1)
		{
			if (unk_0x724D816EA203A79E(iLocal_3121[8]))
			{
				if (!unk_0xE59B7F5A03335350(iLocal_3121[8], 0))
				{
					unk_0x38E412DB4A45B900(iLocal_3121[8], 0);
					iLocal_3498[1] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					unk_0x38E412DB4A45B900(iLocal_3121[8], 0);
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
		if (unk_0x724D816EA203A79E(iLocal_3121[11]))
		{
			if (unk_0xE59B7F5A03335350(iLocal_3121[11], 0))
			{
				unk_0x55662F9F262C2F9B(iLocal_3121[11], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[2] = 1;
			}
		}
	}
	if (iLocal_3498[2] == 0)
	{
		if (iLocal_3490[2] == 1)
		{
			if (unk_0x724D816EA203A79E(iLocal_3121[11]))
			{
				if (!unk_0xE59B7F5A03335350(iLocal_3121[11], 0))
				{
					unk_0x38E412DB4A45B900(iLocal_3121[11], 0);
					iLocal_3498[2] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					unk_0x38E412DB4A45B900(iLocal_3121[11], 0);
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
		if (unk_0x724D816EA203A79E(iLocal_3121[12]))
		{
			if (unk_0xE59B7F5A03335350(iLocal_3121[12], 0))
			{
				unk_0x55662F9F262C2F9B(iLocal_3121[12], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[3] = 1;
			}
		}
	}
	if (iLocal_3498[3] == 0)
	{
		if (iLocal_3490[3] == 1)
		{
			if (unk_0x724D816EA203A79E(iLocal_3121[12]))
			{
				if (!unk_0xE59B7F5A03335350(iLocal_3121[12], 0))
				{
					unk_0x38E412DB4A45B900(iLocal_3121[12], 0);
					iLocal_3498[3] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					unk_0x38E412DB4A45B900(iLocal_3121[12], 0);
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
		if (unk_0x724D816EA203A79E(iLocal_3121[13]))
		{
			if (unk_0xE59B7F5A03335350(iLocal_3121[13], 0))
			{
				unk_0x55662F9F262C2F9B(iLocal_3121[13], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[4] = 1;
			}
		}
	}
	if (iLocal_3498[4] == 0)
	{
		if (iLocal_3490[4] == 1)
		{
			if (unk_0x724D816EA203A79E(iLocal_3121[13]))
			{
				if (!unk_0xE59B7F5A03335350(iLocal_3121[13], 0))
				{
					unk_0x38E412DB4A45B900(iLocal_3121[13], 0);
					iLocal_3498[4] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					unk_0x38E412DB4A45B900(iLocal_3121[13], 0);
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
		if (unk_0x724D816EA203A79E(iLocal_3121[14]))
		{
			if (unk_0xE59B7F5A03335350(iLocal_3121[14], 0))
			{
				unk_0x55662F9F262C2F9B(iLocal_3121[14], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[5] = 1;
			}
		}
	}
	if (iLocal_3498[5] == 0)
	{
		if (iLocal_3490[5] == 1)
		{
			if (unk_0x724D816EA203A79E(iLocal_3121[14]))
			{
				if (!unk_0xE59B7F5A03335350(iLocal_3121[14], 0))
				{
					unk_0x38E412DB4A45B900(iLocal_3121[14], 0);
					iLocal_3498[5] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					unk_0x38E412DB4A45B900(iLocal_3121[14], 0);
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
		if (unk_0x724D816EA203A79E(iLocal_3121[15]))
		{
			if (unk_0xE59B7F5A03335350(iLocal_3121[15], 0))
			{
				unk_0x55662F9F262C2F9B(iLocal_3121[15], "SOL_3_POLICE_CARS_Group", 0);
				iLocal_3490[6] = 1;
			}
		}
	}
	if (iLocal_3498[6] == 0)
	{
		if (iLocal_3490[6] == 1)
		{
			if (unk_0x724D816EA203A79E(iLocal_3121[15]))
			{
				if (!unk_0xE59B7F5A03335350(iLocal_3121[15], 0))
				{
					unk_0x38E412DB4A45B900(iLocal_3121[15], 0);
					iLocal_3498[6] = 1;
				}
				else if (iLocal_3180 == 5)
				{
					unk_0x38E412DB4A45B900(iLocal_3121[15], 0);
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

void func_398()
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
					func_17(&uLocal_3578, 0, unk_0xBC25C936A095B5BA(), "Michael", 0, 1);
					iLocal_3185 = 1;
				}
				if (iLocal_3185 == 1)
				{
					if (iLocal_3364 == 0)
					{
						if (unk_0xF0F2FC9DE291567F(Local_3318, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 1) > 2f)
						{
							if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
							{
								if (func_256(&uLocal_3578, "T1M4AUD", "T1M4_CHASE", 3, 0, 0, 0))
								{
									iLocal_3364 = 1;
								}
							}
						}
					}
					if (iLocal_3523 == 0)
					{
						if (unk_0xF0F2FC9DE291567F(Local_3318, unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 1) > 100f)
						{
							if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
							{
								if (func_401(&uLocal_3578, 29, "T1M4AUD", "SOL3_DEVCALL", 7, 0, 0, 1))
								{
									unk_0x1D1C393C7689E5A6(4f, 10f, 4);
									iLocal_3523 = 1;
								}
							}
						}
					}
					if (iLocal_3556 == 0 && iLocal_3523 == 1)
					{
						if (func_400())
						{
							if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
							{
								if (func_256(&uLocal_3578, "T1M4AUD", "T1M4_REACT", 3, 0, 0, 0))
								{
									iLocal_3556 = 1;
								}
							}
						}
					}
					if (iLocal_3557 == 0)
					{
						if (unk_0x724D816EA203A79E(iLocal_3258))
						{
							if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
							{
								if (func_16(unk_0xBC25C936A095B5BA(), iLocal_3258, 1) < 200f && unk_0xD1DC4B08247A4317(iLocal_3258))
								{
									if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
									{
										if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
										{
											if (func_256(&uLocal_3578, "T1M4AUD", "T1M4_CHASE2", 3, 0, 0, 0))
											{
												unk_0x1D1C393C7689E5A6(3f, 12f, 4);
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
					iLocal_3199 = unk_0x105601648511CC64();
					func_17(&uLocal_3578, 0, unk_0xBC25C936A095B5BA(), "Michael", 0, 1);
					func_17(&uLocal_3578, 4, 0, "SOL3COP", 0, 1);
					iLocal_3185 = 1;
				}
				if (iLocal_3185 == 1)
				{
					if (iLocal_3557 == 0)
					{
						if (unk_0x724D816EA203A79E(iLocal_3258))
						{
							if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
							{
								if (func_16(unk_0xBC25C936A095B5BA(), iLocal_3258, 1) < 200f && unk_0xD1DC4B08247A4317(iLocal_3258))
								{
									if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
									{
										if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
										{
											if (func_256(&uLocal_3578, "T1M4AUD", "T1M4_CHASE2", 3, 0, 0, 0))
											{
												iLocal_3557 = 1;
											}
										}
									}
								}
							}
						}
					}
					if (unk_0x724D816EA203A79E(iLocal_3258))
					{
						if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
						{
							if (unk_0xB34E411B0A4BF096(iLocal_3258))
							{
								if (iLocal_3524[0] == 0)
								{
									if (unk_0xE59B7F5A03335350(iLocal_3121[7], 0) || unk_0xE59B7F5A03335350(iLocal_3121[8], 0))
									{
										if (unk_0x5B80643EF917B728(iLocal_3258) > 7000f && unk_0x5B80643EF917B728(iLocal_3258) < 28000f)
										{
											if (!func_255())
											{
												if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
												{
													if (func_256(&uLocal_3578, "T1M4AUD", "T1M4_POLICE", 7, 0, 0, 0))
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
									if (unk_0xE59B7F5A03335350(iLocal_3121[7], 0) || unk_0xE59B7F5A03335350(iLocal_3121[8], 0))
									{
										if (unk_0x5B80643EF917B728(iLocal_3258) > 28000f && unk_0x5B80643EF917B728(iLocal_3258) < 34500f)
										{
											if (!func_255())
											{
												if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
												{
													if (func_256(&uLocal_3578, "T1M4AUD", "T1M4_POLICE2", 7, 0, 0, 0))
													{
														unk_0x1D1C393C7689E5A6(4f, 4f, 4);
														iLocal_3524[1] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3524[2] == 0)
								{
									if (unk_0xE59B7F5A03335350(iLocal_3121[7], 0) || unk_0xE59B7F5A03335350(iLocal_3121[8], 0))
									{
										if (unk_0x5B80643EF917B728(iLocal_3258) > 36000f && unk_0x5B80643EF917B728(iLocal_3258) < 41000f)
										{
											if (!func_255())
											{
												if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
												{
													if (func_256(&uLocal_3578, "T1M4AUD", "T1M4_POLICE3", 7, 0, 0, 0))
													{
														unk_0x1D1C393C7689E5A6(2f, 4f, 4);
														iLocal_3524[2] = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3554 == 0)
								{
									if (unk_0x5B80643EF917B728(iLocal_3258) > 41000f && unk_0x5B80643EF917B728(iLocal_3258) < 43500f)
									{
										if (unk_0x724D816EA203A79E(iLocal_3265) && unk_0xD1DC4B08247A4317(iLocal_3265))
										{
											if (!func_255())
											{
												if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
												{
													if (func_256(&uLocal_3578, "T1M4AUD", "T1M4_BOOM", 7, 0, 0, 0))
													{
														unk_0x1D1C393C7689E5A6(4f, 4f, 4);
														iLocal_3554 = 1;
													}
												}
											}
										}
									}
								}
								if (iLocal_3555 == 0)
								{
									if (unk_0x5B80643EF917B728(iLocal_3258) > 50509f && unk_0x5B80643EF917B728(iLocal_3258) < 50872f)
									{
										if (unk_0x724D816EA203A79E(iLocal_3265) && unk_0xD1DC4B08247A4317(iLocal_3265))
										{
											if (!func_255())
											{
												if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
												{
													if (func_256(&uLocal_3578, "T1M4AUD", "T1M4_BLOW", 7, 0, 0, 0))
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
									if (unk_0x5B80643EF917B728(iLocal_3258) > 58000f && unk_0x5B80643EF917B728(iLocal_3258) < 68000f)
									{
										if (!func_255())
										{
											if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
											{
												if (func_256(&uLocal_3578, "T1M4AUD", "T1M4_POLICE4", 7, 0, 0, 0))
												{
													iLocal_3524[3] = 1;
												}
											}
										}
									}
								}
								if (iLocal_3558 == 0 && iLocal_3524[3] == 1)
								{
									if (unk_0x5B80643EF917B728(iLocal_3258) < 76000f)
									{
										if (!func_255())
										{
											if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
											{
												if (func_256(&uLocal_3578, "T1M4AUD", "T1M4_CHASE3", 7, 0, 0, 0))
												{
													iLocal_3558 = 1;
												}
											}
										}
									}
								}
								if (iLocal_3553 == 0)
								{
									if (unk_0x5B80643EF917B728(iLocal_3258) > 80000f && unk_0x5B80643EF917B728(iLocal_3258) < 82000f)
									{
										if (unk_0x724D816EA203A79E(iLocal_3260[0]))
										{
											if (unk_0xE59B7F5A03335350(iLocal_3260[0], 0))
											{
												if (unk_0xD1DC4B08247A4317(iLocal_3260[0]))
												{
													if (!func_255())
													{
														if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
														{
															if (func_256(&uLocal_3578, "T1M4AUD", "T1M4_CHASE4", 7, 0, 0, 0))
															{
																unk_0x1D1C393C7689E5A6(3f, 10f, 4);
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
									if (unk_0x5B80643EF917B728(iLocal_3258) > 82100f && unk_0x5B80643EF917B728(iLocal_3258) < 83500f)
									{
										if (unk_0x724D816EA203A79E(iLocal_3121[11]))
										{
											if (unk_0xD1DC4B08247A4317(iLocal_3121[11]))
											{
												if (!func_255())
												{
													if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
													{
														if (func_256(&uLocal_3578, "T1M4AUD", "T1M4_CHASE5", 7, 0, 0, 0))
														{
															iLocal_3559 = 1;
														}
													}
												}
											}
										}
										else if (unk_0x724D816EA203A79E(iLocal_3121[12]))
										{
											if (unk_0xD1DC4B08247A4317(iLocal_3121[12]))
											{
												if (!func_255())
												{
													if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
													{
														if (func_256(&uLocal_3578, "T1M4AUD", "T1M4_CHASE5", 7, 0, 0, 0))
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
									if ((unk_0x5B80643EF917B728(iLocal_3258) > 101891f && unk_0x5B80643EF917B728(iLocal_3258) < 105000f) && unk_0xD1DC4B08247A4317(iLocal_3258))
									{
										if (!func_255())
										{
											if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
											{
												if (func_256(&uLocal_3578, "T1M4AUD", "T1M4_CHASE7", 7, 0, 0, 0))
												{
													unk_0x1D1C393C7689E5A6(3f, 10f, 4);
													iLocal_3562 = 1;
												}
											}
										}
									}
								}
								if (((unk_0x5B80643EF917B728(iLocal_3258) > 105500f && unk_0x5B80643EF917B728(iLocal_3258) < 119000f) && unk_0x105601648511CC64() > iLocal_3199 + 7000) && iLocal_3561 == 0)
								{
									if (!func_255())
									{
										if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
										{
											if (func_256(&uLocal_3578, "T1M4AUD", "T1M4_POLICE5", 7, 0, 0, 0))
											{
												iLocal_3199 = unk_0x105601648511CC64();
												iLocal_3561 = 1;
											}
										}
									}
								}
								if (iLocal_3560 == 0 && iLocal_3561 == 1)
								{
									if (!func_255())
									{
										if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
										{
											if (func_256(&uLocal_3578, "T1M4AUD", "T1M4_CHASE6", 7, 0, 0, 0))
											{
												iLocal_3560 = 1;
											}
										}
									}
								}
								if (((unk_0x5B80643EF917B728(iLocal_3258) > 105500f && unk_0x5B80643EF917B728(iLocal_3258) < 119000f) && unk_0x105601648511CC64() > iLocal_3199 + 7000) && iLocal_3560 == 1)
								{
									if (!func_255())
									{
										if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
										{
											if (func_256(&uLocal_3578, "T1M4AUD", "T1M4_POLICE5", 7, 0, 0, 0))
											{
												iLocal_3199 = unk_0x105601648511CC64();
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
					iLocal_3204 = unk_0x105601648511CC64();
					func_17(&uLocal_3578, 0, unk_0xBC25C936A095B5BA(), "Michael", 0, 1);
					if (!unk_0x36CEFBE9B745A58D(iLocal_3222))
					{
						func_17(&uLocal_3578, 2, iLocal_3222, "MOLLY", 0, 1);
					}
					iLocal_3185 = 1;
				}
				if (iLocal_3185 == 1)
				{
					if (iLocal_3569 == 0)
					{
						unk_0xCF4F61BDF848F1C9("T1M4_BBAA", "AIRPORTANNO", -939.5f, -2932.2f, 16f, "SPEECH_PARAMS_FORCE_FRONTEND");
						iLocal_3569 = 1;
					}
					if (iLocal_3564 == 1)
					{
						if (iLocal_3530 == 0)
						{
							if (!func_255())
							{
								if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
								{
									if (func_256(&uLocal_3578, "T1M4AUD", "SOL3_RUNS", 7, 0, 0, 0))
									{
										unk_0x1D1C393C7689E5A6(4f, 6f, 4);
										iLocal_3200 = unk_0x105601648511CC64();
										iLocal_3530 = 1;
										iLocal_3563 = 1;
										iLocal_3564 = 0;
									}
								}
							}
						}
						if (unk_0x105601648511CC64() > iLocal_3200 + 5000)
						{
							if (!func_255())
							{
								if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
								{
									if (func_256(&uLocal_3578, "T1M4AUD", "SOL3_RUNS", 7, 0, 0, 0))
									{
										unk_0x1D1C393C7689E5A6(4f, 6f, 4);
										iLocal_3200 = unk_0x105601648511CC64();
									}
								}
							}
						}
					}
					if (iLocal_3563 == 1 && unk_0x105601648511CC64() > iLocal_3204 + 4000)
					{
						if (!func_255())
						{
							if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
							{
								if (func_256(&uLocal_3578, "T1M4AUD", "T1M4_SHOUT1", 7, 0, 0, 0))
								{
									unk_0x1D1C393C7689E5A6(4f, 6f, 4);
									iLocal_3204 = unk_0x105601648511CC64();
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
					func_17(&uLocal_3578, 0, unk_0xBC25C936A095B5BA(), "Michael", 0, 1);
					if (!unk_0x36CEFBE9B745A58D(iLocal_3222))
					{
						func_17(&uLocal_3578, 2, iLocal_3222, "MOLLY", 0, 1);
					}
					iLocal_3185 = 1;
				}
				if (iLocal_3185 == 1)
				{
					if (iLocal_3531 == 0)
					{
						if (!func_255())
						{
							if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
							{
								if (func_256(&uLocal_3578, "T1M4AUD", "SOL3_PAST", 7, 0, 0, 0))
								{
									iLocal_3531 = 1;
								}
							}
						}
					}
					if (iLocal_3531 == 1 && iLocal_3533 == 0)
					{
						if (!func_255())
						{
							if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
							{
								if (func_256(&uLocal_3578, "T1M4AUD", "SOL3_WATCH", 7, 0, 0, 0))
								{
									iLocal_3533 = 1;
								}
							}
						}
					}
					if (iLocal_3532 == 0)
					{
						if (unk_0x724D816EA203A79E(iLocal_3222))
						{
							if (!unk_0x36CEFBE9B745A58D(iLocal_3222))
							{
								if (unk_0x77FC50899603581D(uLocal_3209))
								{
									if (unk_0x8FD30584EB38411B(uLocal_3209) > 0.65f && unk_0x8FD30584EB38411B(uLocal_3209) < 0.835f)
									{
										if (!func_255())
										{
											if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
											{
												if (func_256(&uLocal_3578, "T1M4AUD", "SOL3_SUCKS", 7, 0, 0, 0))
												{
													unk_0x1D1C393C7689E5A6(8f, 8f, 4);
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
						if (!unk_0x724D816EA203A79E(iLocal_3222))
						{
							if (!func_255())
							{
								if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
								{
									if (func_256(&uLocal_3578, "T1M4AUD", "T1M4_SMUSH", 7, 0, 0, 0))
									{
										iLocal_3565 = 1;
									}
								}
							}
						}
					}
					if (iLocal_3565 == 1 && iLocal_3566 == 0)
					{
						if (!func_255())
						{
							if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
							{
								if (func_256(&uLocal_3578, "T1M4AUD", "T1M4_SMUSH2", 7, 0, 0, 0))
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
					iLocal_3205 = unk_0x105601648511CC64();
					func_17(&uLocal_3578, 0, unk_0xBC25C936A095B5BA(), "Michael", 0, 1);
					iLocal_3185 = 1;
				}
				if (iLocal_3185 == 1)
				{
					if (iLocal_3567 == 0)
					{
						if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
						{
							iLocal_3257 = func_399(unk_0xBC25C936A095B5BA(), joaat("COP"), 0, 0, 28);
							if (unk_0x724D816EA203A79E(iLocal_3257))
							{
								if (func_16(unk_0xBC25C936A095B5BA(), iLocal_3257, 1) < 40f)
								{
									if (!func_255())
									{
										if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
										{
											if (func_256(&uLocal_3578, "T1M4AUD", "T1M4_COPS", 7, 0, 0, 0))
											{
												iLocal_3567 = 1;
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_3567 == 1 && unk_0x105601648511CC64() > iLocal_3205 + 5000)
					{
						if (!unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
						{
							iLocal_3257 = func_399(unk_0xBC25C936A095B5BA(), joaat("COP"), 0, 0, 28);
							if (unk_0x724D816EA203A79E(iLocal_3257))
							{
								if (func_16(unk_0xBC25C936A095B5BA(), iLocal_3257, 1) < 40f)
								{
									if (!func_255())
									{
										if (!unk_0x4B8E3E5901E59EB8() || !unk_0x11D38424F1DD3B8F())
										{
											if (func_256(&uLocal_3578, "T1M4AUD", "T1M4_COPS", 7, 0, 0, 0))
											{
												iLocal_3205 = unk_0x105601648511CC64();
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

int func_399(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0[16];
	int iVar17;
	
	iVar17 = 0;
	if (!unk_0x36CEFBE9B745A58D(iParam0))
	{
		unk_0x252B0CBDBF5803ED(iParam0, &iVar0, iParam4);
		iVar17 = 0;
		while (iVar17 <= (iVar0 - 1))
		{
			if (unk_0x724D816EA203A79E(iVar0[iVar17]))
			{
				if (!unk_0x36CEFBE9B745A58D(iVar0[iVar17]))
				{
					if (unk_0x84788C4CA5E15BDC(iVar0[iVar17]) == iParam1)
					{
						if (iParam2 <= 0)
						{
							if (iParam3 == 1)
							{
								if (unk_0xD1DC4B08247A4317(iVar0[iVar17]))
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
							if (unk_0x724D816EA203A79E(iVar0[(iVar17 + iParam2)]))
							{
								if (!unk_0x36CEFBE9B745A58D(iVar0[(iVar17 + iParam2)]))
								{
									if (unk_0x84788C4CA5E15BDC(iVar0[(iVar17 + iParam2)]) == iParam1)
									{
										if (iParam3 == 1)
										{
											if (unk_0xD1DC4B08247A4317(iVar0[(iVar17 + iParam2)]))
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

int func_400()
{
	if (Global_15800 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_401(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_254(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15848 = 1;
	Global_15807 = 1;
	Global_15814 = 0;
	Global_15809 = 0;
	Global_16791 = 0;
	Global_16793 = 0;
	Global_16797 = 0;
	Global_15805 = 0;
	Global_15852 = 0;
	Global_15854 = 0;
	Global_2621441 = 0;
	return func_247(sParam3, iParam4, bParam7);
}

void func_402()
{
	if (((iLocal_3180 == 4 || iLocal_3180 == 5) || iLocal_3180 == 8) || iLocal_3180 == 6)
	{
		if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
		{
			if (func_403(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 2, 200, 0))
			{
				unk_0xC87F56DCAF19EC70(unk_0xB5CEFD608600A09F());
				unk_0xAEEA080912A0AB35(unk_0xB5CEFD608600A09F());
			}
		}
	}
	if (iLocal_3510 == 0)
	{
		if (iLocal_3180 == 4)
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (func_403(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 2, 200, 0))
				{
					unk_0x7024F5748BAC99FC(unk_0xB5CEFD608600A09F(), 3, 0);
					unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
					iLocal_3510 = 1;
				}
			}
		}
	}
}

int func_403(struct<3> Param0, int iParam3, int iParam4, bool bParam5)
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
			fVar92[0] = 255f;
			Var0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			Var46[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			Var0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			Var46[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 205f;
			Var0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			Var46[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			Var46[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 150.5f;
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
		if (unk_0x7352105EC4D7541F(Param0, Var0[iVar109 /*3*/], Var46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

void func_404()
{
	if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
	{
		if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
		{
			iLocal_3259 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
		}
	}
}

void func_405()
{
	if (iLocal_3351 == 1)
	{
		if (iLocal_3180 == 4)
		{
			if (iLocal_3182 > 1 && iLocal_3475 == 0)
			{
				if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -828.6987f, -2938.073f, 12.21745f, -807.6911f, -2905.148f, 16.35626f, 28f, 0, 1, 0))
				{
					func_233("TRV4_FAIL1");
				}
			}
		}
		if (iLocal_3180 == 6)
		{
			if (unk_0x724D816EA203A79E(iLocal_3283))
			{
				if (unk_0x2DA8CA50A72528FB(uLocal_3288))
				{
					if (func_16(unk_0xBC25C936A095B5BA(), iLocal_3283, 1) > 100f)
					{
						func_233("TRV4_FAIL6");
					}
				}
			}
		}
		if (iLocal_3180 == 4)
		{
			if (iLocal_3182 == 2)
			{
				if (unk_0x105601648511CC64() > iLocal_3194 + 7000 && iLocal_3508 == 0)
				{
					func_233("TRV4_FAIL1");
				}
			}
		}
		if (iLocal_3180 == 4)
		{
			if (unk_0x724D816EA203A79E(iLocal_3258))
			{
				if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
				{
					if (unk_0xB34E411B0A4BF096(iLocal_3258))
					{
						if (unk_0x5B80643EF917B728(iLocal_3258) > 62000f && unk_0x5B80643EF917B728(iLocal_3258) < 77000f)
						{
							if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), -1219f, -2570f, 13f, 1) < 210f)
							{
								if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
								{
									if (unk_0x349C94FFF43E2979(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)) < 200f && unk_0x349C94FFF43E2979(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)) > 125f)
									{
										if (iLocal_3507 == 0)
										{
											iLocal_3197 = unk_0x105601648511CC64();
											iLocal_3507 = 1;
										}
										if (iLocal_3507 == 1 && unk_0x105601648511CC64() > iLocal_3197 + 4000)
										{
											func_233("TRV4_FAIL1");
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
			if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), -928.9f, -2935f, 13f, 1) < 5f && !unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
			{
				func_233("TRV4_FAIL1");
			}
		}
		if (iLocal_3180 == 2 || iLocal_3180 == 4)
		{
			if (unk_0xE3CA72BD77D43B09(unk_0xBC25C936A095B5BA()) || unk_0x57379381A330B2FF(unk_0xBC25C936A095B5BA()))
			{
				if (func_403(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), 2, 200, 0))
				{
					func_233("TRV4_FAIL2");
				}
				else if (!func_208("TRV4_HELP3"))
				{
					func_408("TRV4_HELP3");
				}
			}
			else if (func_208("TRV4_HELP3"))
			{
				unk_0x7456702622C62EA0(1);
			}
		}
		if (unk_0x724D816EA203A79E(iLocal_3258))
		{
			if (!unk_0xE59B7F5A03335350(iLocal_3258, 0))
			{
				if (unk_0x724D816EA203A79E(iLocal_3222))
				{
					if (!unk_0x36CEFBE9B745A58D(iLocal_3222))
					{
						unk_0x1E5C2A1EAB944289(iLocal_3222, 0);
						unk_0x65E471E4A2D56226(iLocal_3222, 0, 0);
					}
				}
			}
		}
		if (iLocal_3360 == 1)
		{
			if (unk_0x724D816EA203A79E(iLocal_3222))
			{
				if (unk_0x36CEFBE9B745A58D(iLocal_3222))
				{
					func_233("TRV4_FAIL3");
				}
			}
		}
		if (iLocal_3180 == 4)
		{
			if (iLocal_3352 == 1)
			{
				if (!unk_0x36CEFBE9B745A58D(iLocal_3222))
				{
					if (func_13(unk_0xBC25C936A095B5BA(), iLocal_3222) > 300f)
					{
						if (iLocal_3436 == 1)
						{
							unk_0xEB233A3B7635D2AC();
							func_20("TRV4_WARN1", 7500, 1);
							iLocal_3436 = 0;
						}
					}
					else if (iLocal_3436 == 0)
					{
						iLocal_3436 = 1;
					}
					if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
					{
						if (unk_0xB34E411B0A4BF096(iLocal_3258))
						{
							if (unk_0x5B80643EF917B728(iLocal_3258) < 40000f)
							{
								if (func_13(unk_0xBC25C936A095B5BA(), iLocal_3222) > 400f)
								{
									func_233("TRV4_FAIL1");
								}
							}
							else if (func_13(unk_0xBC25C936A095B5BA(), iLocal_3222) > 350f)
							{
								func_233("TRV4_FAIL1");
							}
						}
					}
				}
			}
			if (iLocal_3182 == 3)
			{
				if (iLocal_3476 == 1)
				{
					if (unk_0xF0F2FC9DE291567F(unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1), -934.4f, -2927.2f, 13.2f, 1) > 25f || unk_0x105601648511CC64() > iLocal_3195 + 12000)
					{
						func_233("TRV4_FAIL1");
					}
				}
			}
		}
		if (iLocal_3180 == 2 || iLocal_3180 == 4)
		{
			if (unk_0xEBE910FA7CB6EAF0(unk_0xBC25C936A095B5BA()))
			{
				func_233("TRV4_FAIL1");
			}
		}
		if (iLocal_3180 == 4)
		{
			if (unk_0xE59B7F5A03335350(iLocal_3258, 0))
			{
				if (unk_0xB34E411B0A4BF096(iLocal_3258))
				{
					if (unk_0x5B80643EF917B728(iLocal_3258) > 111509f)
					{
						if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -1070.838f, -2942.241f, 12.19534f, -1009.038f, -2977.609f, 17.44443f, 89.5f, 0, 1, 0))
						{
							func_233("TRV4_FAIL1");
						}
					}
					if (unk_0x5B80643EF917B728(iLocal_3258) > 122000f)
					{
						if (unk_0x5237AF95232D78C5(unk_0xBC25C936A095B5BA(), 0))
						{
							if (unk_0x8730A01B72F31307(unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0)))
							{
								if (iLocal_3509 == 0)
								{
									iLocal_3198 = unk_0x105601648511CC64();
									iLocal_3509 = 1;
								}
								if (iLocal_3509 == 1)
								{
									if (unk_0x105601648511CC64() > iLocal_3198 + 4000)
									{
										func_233("TRV4_FAIL1");
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
			if (unk_0x0C265B3C448E6954(unk_0xBC25C936A095B5BA(), -803.4108f, -2173.417f, -1.911488f, -605.6846f, -2358.229f, 27.32842f, 250f, 0, 1, 0))
			{
				func_233("TRV4_FAIL1");
			}
		}
		if (iLocal_3437 == 1)
		{
			if (func_407())
			{
				func_406();
			}
		}
	}
}

void func_406()
{
	func_414(unk_0xBC25C936A095B5BA(), 0);
	func_410();
}

int func_407()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_92955 == 7 || Global_92955 == 8)
	{
		return 1;
	}
	return 0;
}

void func_408(char* sParam0)
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 1, 1, -1);
}

void func_409(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_104276, unk_0x1377080E9B0BD993(), 24);
		Global_104270 = 1;
	}
	else
	{
		StringCopy(&Global_104276, "NULL", 24);
		Global_104270 = 0;
	}
}

void func_410()
{
	func_416(24, 1);
	unk_0x9B90420B04C07704("PoliceScannerDisabled", 0);
	unk_0x379ACE23D404525C(-1042.5f, -500f, 41f, -1019.5f, -475f, 34f, 1, 1);
	func_411();
	func_207(&uLocal_28, 0, 0);
	unk_0xAF0732277B825027(0);
	unk_0x78108840729CEAEE(0);
	unk_0xC32C243942383443();
	if (unk_0x724D816EA203A79E(iLocal_3271))
	{
		unk_0xCF6040807CC0E4A5(&iLocal_3271);
	}
	func_409(0);
	if (unk_0x2A0D5F9585271A68(uLocal_3221))
	{
		unk_0x5BF83EEC9AFDCD0E(uLocal_3221);
	}
	if (unk_0x724D816EA203A79E(iLocal_3222))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_3222))
		{
			unk_0x22321800954A532E(iLocal_3222, 1);
		}
		unk_0x02537C8C1BEEB477(&iLocal_3222);
	}
	if (unk_0x724D816EA203A79E(iLocal_3228))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_3228))
		{
			unk_0x22321800954A532E(iLocal_3228, 1);
		}
		unk_0x02537C8C1BEEB477(&iLocal_3228);
	}
	if (unk_0x724D816EA203A79E(iLocal_3245))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_3245))
		{
			unk_0x22321800954A532E(iLocal_3245, 1);
		}
		unk_0x02537C8C1BEEB477(&iLocal_3245);
	}
	if (unk_0x724D816EA203A79E(iLocal_3246))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_3246))
		{
			unk_0x22321800954A532E(iLocal_3246, 1);
		}
		unk_0x02537C8C1BEEB477(&iLocal_3246);
	}
	if (unk_0x724D816EA203A79E(iLocal_3247))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_3247))
		{
			unk_0x22321800954A532E(iLocal_3247, 1);
		}
		unk_0x02537C8C1BEEB477(&iLocal_3247);
	}
	if (unk_0x724D816EA203A79E(iLocal_3248))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_3248))
		{
			unk_0x22321800954A532E(iLocal_3248, 1);
		}
		unk_0x02537C8C1BEEB477(&iLocal_3248);
	}
	if (unk_0x724D816EA203A79E(iLocal_3249))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_3249))
		{
			unk_0x22321800954A532E(iLocal_3249, 1);
		}
		unk_0x02537C8C1BEEB477(&iLocal_3249);
	}
	if (unk_0x724D816EA203A79E(iLocal_3250))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_3250))
		{
			unk_0x22321800954A532E(iLocal_3250, 1);
		}
		unk_0x02537C8C1BEEB477(&iLocal_3250);
	}
	if (unk_0x724D816EA203A79E(iLocal_3223[0]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_3223[0]))
		{
			unk_0x22321800954A532E(iLocal_3223[0], 1);
		}
		unk_0x02537C8C1BEEB477(&(iLocal_3223[0]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3223[1]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_3223[1]))
		{
			unk_0x22321800954A532E(iLocal_3223[1], 1);
		}
		unk_0x02537C8C1BEEB477(&(iLocal_3223[1]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3223[2]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_3223[2]))
		{
			unk_0x22321800954A532E(iLocal_3223[2], 1);
		}
		unk_0x02537C8C1BEEB477(&(iLocal_3223[2]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3223[3]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_3223[3]))
		{
			unk_0x22321800954A532E(iLocal_3223[3], 1);
		}
		unk_0x02537C8C1BEEB477(&(iLocal_3223[3]));
	}
	if (unk_0x724D816EA203A79E(uLocal_3229[0]))
	{
		if (!unk_0x36CEFBE9B745A58D(uLocal_3229[0]))
		{
			unk_0x22321800954A532E(uLocal_3229[0], 1);
		}
		unk_0x02537C8C1BEEB477(&(uLocal_3229[0]));
	}
	if (unk_0x724D816EA203A79E(uLocal_3229[1]))
	{
		if (!unk_0x36CEFBE9B745A58D(uLocal_3229[1]))
		{
			unk_0x22321800954A532E(uLocal_3229[1], 1);
		}
		unk_0x02537C8C1BEEB477(&(uLocal_3229[1]));
	}
	if (unk_0x724D816EA203A79E(uLocal_3229[2]))
	{
		if (!unk_0x36CEFBE9B745A58D(uLocal_3229[2]))
		{
			unk_0x22321800954A532E(uLocal_3229[2], 1);
		}
		unk_0x02537C8C1BEEB477(&(uLocal_3229[2]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3233[0]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_3233[0]))
		{
			unk_0x22321800954A532E(iLocal_3233[0], 1);
		}
		unk_0x02537C8C1BEEB477(&(iLocal_3233[0]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3233[1]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_3233[1]))
		{
			unk_0x22321800954A532E(iLocal_3233[1], 1);
		}
		unk_0x02537C8C1BEEB477(&(iLocal_3233[1]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3233[2]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_3233[2]))
		{
			unk_0x22321800954A532E(iLocal_3233[2], 1);
		}
		unk_0x02537C8C1BEEB477(&(iLocal_3233[2]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3233[3]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_3233[3]))
		{
			unk_0x22321800954A532E(iLocal_3233[3], 1);
		}
		unk_0x02537C8C1BEEB477(&(iLocal_3233[3]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3233[4]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_3233[4]))
		{
			unk_0x22321800954A532E(iLocal_3233[4], 1);
		}
		unk_0x02537C8C1BEEB477(&(iLocal_3233[4]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3233[5]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_3233[5]))
		{
			unk_0x22321800954A532E(iLocal_3233[5], 1);
		}
		unk_0x02537C8C1BEEB477(&(iLocal_3233[5]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3233[6]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_3233[6]))
		{
			unk_0x22321800954A532E(iLocal_3233[6], 1);
		}
		unk_0x02537C8C1BEEB477(&(iLocal_3233[6]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3233[7]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_3233[7]))
		{
			unk_0x22321800954A532E(iLocal_3233[7], 1);
		}
		unk_0x02537C8C1BEEB477(&(iLocal_3233[7]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3233[8]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_3233[8]))
		{
			unk_0x22321800954A532E(iLocal_3233[8], 1);
		}
		unk_0x02537C8C1BEEB477(&(iLocal_3233[8]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3233[9]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_3233[9]))
		{
			unk_0x22321800954A532E(iLocal_3233[9], 1);
		}
		unk_0x02537C8C1BEEB477(&(iLocal_3233[9]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3233[10]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_3233[10]))
		{
			unk_0x22321800954A532E(iLocal_3233[10], 1);
		}
		unk_0x02537C8C1BEEB477(&(iLocal_3233[10]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3251[0]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_3251[0]))
		{
			unk_0x22321800954A532E(iLocal_3251[0], 1);
		}
		unk_0x02537C8C1BEEB477(&(iLocal_3251[0]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3254[0]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_3254[0]))
		{
			unk_0x22321800954A532E(iLocal_3254[0], 1);
		}
		unk_0x02537C8C1BEEB477(&(iLocal_3254[0]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3254[1]))
	{
		if (!unk_0x36CEFBE9B745A58D(iLocal_3254[1]))
		{
			unk_0x22321800954A532E(iLocal_3254[1], 1);
		}
		unk_0x02537C8C1BEEB477(&(iLocal_3254[1]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3258))
	{
		unk_0x1E7A09C1710FB071(&iLocal_3258);
	}
	if (unk_0x724D816EA203A79E(iLocal_3259))
	{
		if (unk_0xB248FAA35ED47DB9(iLocal_3259, 0))
		{
			unk_0x1E7A09C1710FB071(&iLocal_3259);
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_3264))
	{
		unk_0x1E7A09C1710FB071(&iLocal_3264);
	}
	if (unk_0x724D816EA203A79E(iLocal_3265))
	{
		unk_0x1E7A09C1710FB071(&iLocal_3265);
	}
	if (unk_0x724D816EA203A79E(iLocal_3266))
	{
		unk_0x1E7A09C1710FB071(&iLocal_3266);
	}
	if (unk_0x724D816EA203A79E(iLocal_3267))
	{
		unk_0x1E7A09C1710FB071(&iLocal_3267);
	}
	if (unk_0x724D816EA203A79E(iLocal_3271))
	{
		unk_0x1E7A09C1710FB071(&iLocal_3271);
	}
	if (unk_0x724D816EA203A79E(iLocal_3275))
	{
		if (unk_0xB248FAA35ED47DB9(iLocal_3275, 0))
		{
			unk_0x1E7A09C1710FB071(&iLocal_3275);
		}
	}
	if (unk_0x724D816EA203A79E(iLocal_3279[0]))
	{
		unk_0x1E7A09C1710FB071(&(iLocal_3279[0]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3279[1]))
	{
		unk_0x1E7A09C1710FB071(&(iLocal_3279[1]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3260[0]))
	{
		unk_0x1E7A09C1710FB071(&(iLocal_3260[0]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3260[1]))
	{
		unk_0x1E7A09C1710FB071(&(iLocal_3260[1]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3279[0]))
	{
		unk_0x1E7A09C1710FB071(&(iLocal_3279[0]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3279[1]))
	{
		unk_0x1E7A09C1710FB071(&(iLocal_3279[1]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3268[0]))
	{
		unk_0x1E7A09C1710FB071(&(iLocal_3268[0]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3268[1]))
	{
		unk_0x1E7A09C1710FB071(&(iLocal_3268[1]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3272[0]))
	{
		unk_0x1E7A09C1710FB071(&(iLocal_3272[0]));
	}
	if (unk_0x724D816EA203A79E(iLocal_3263))
	{
		unk_0x1E7A09C1710FB071(&iLocal_3263);
	}
	unk_0x748798F6C2AB96B7("TRV4_START");
	unk_0x748798F6C2AB96B7("TRV4_GAMEPLAY_START");
	unk_0x748798F6C2AB96B7("TRV4_START_CS_SKIP");
	unk_0x748798F6C2AB96B7("TRV4_START_RT");
	unk_0x748798F6C2AB96B7("TRV4_FOOT_CHASE_RT");
	unk_0x748798F6C2AB96B7("TRV4_EVADE_RT");
	unk_0x748798F6C2AB96B7("TRV4_CAR_ENTERED");
	unk_0x748798F6C2AB96B7("TRV4_AIRPORT_ENTERED");
	unk_0x748798F6C2AB96B7("TRV4_CHASE");
	unk_0x748798F6C2AB96B7("TRV4_JET_ENTERED");
	if (unk_0x86BC948CAD7C61EF(iLocal_3220))
	{
		unk_0x906C49077ACDA06A(iLocal_3220);
	}
	if (unk_0x2F1B39E315395385(uLocal_3763))
	{
		unk_0x0DDA5155C0628144(uLocal_3763, 0);
	}
	unk_0x5499DFC49A11E05F();
	unk_0xB0B0FE33F4F22679(&uLocal_3293);
	unk_0x786556581D95BCB2("digitalOverlay");
	unk_0x6935EBF9868982DC(-617f, -2274f, 0f, -406.01f, -2044f, 15f, 1, 1);
	unk_0x6935EBF9868982DC(-482f, -2118f, 6f, -1072f, -2724f, 17f, 1, 1);
	if (unk_0x1E8349F219AC5AF9("Trev4_5"))
	{
		unk_0xC881DDFA077826BB("Trev4_5", 0, 0.5f, 1f);
	}
	unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
	unk_0x2991B7F8ABC4BB0C(1f);
	unk_0x43F06392C4EF25E0(1);
	unk_0x59B038076F830627(1);
	unk_0x4EA570997E107F35("missheist_agency3aig_lift_waitped_a");
	func_286(0);
	unk_0x4AED68BFACFB14CB(1);
	if (func_19(2))
	{
		func_18(2, 0);
	}
	unk_0x95E4B6F3ED223F5A();
}

void func_411()
{
	int iVar0;
	
	Global_55996 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_55997[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

void func_412()
{
	int iVar0;
	
	if (unk_0xACE95AD318CE412B("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_105220.f_9056 || func_423(0))
	{
		if (!func_413())
		{
			iVar0 = func_8();
			if (iVar0 != -1)
			{
				if (!func_236(iVar0))
				{
					return;
				}
				unk_0xF0059F27F7BB6680(&(Global_83852[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_241();
		}
	}
}

int func_413()
{
	if (((Global_92955 == 13 || Global_92955 == 10) || Global_92955 == 11) || Global_92955 == 12)
	{
		return 0;
	}
	return 1;
}

void func_414(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x724D816EA203A79E(uParam0))
	{
		if (unk_0x9CDD10270A1ACF6F(iParam0, &iVar0, 0))
		{
			if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
			{
				if (!func_415(iParam1, iVar0))
				{
					iVar0 = 0;
				}
			}
		}
	}
	if (Global_92992 > 0)
	{
		Global_98783.f_21[iParam1] = iVar0;
	}
	else
	{
		Global_95814.f_21[iParam1] = iVar0;
	}
}

int func_415(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_92992 > 0)
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_98783.f_812[iParam0 /*472*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_98783.f_812[iParam0 /*472*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (Global_98783.f_812[iParam0 /*472*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_98783.f_812[iParam0 /*472*/].f_221[iVar0 /*5*/].f_1 > 0)
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
			if (Global_95814.f_812[iParam0 /*472*/][iVar0 /*5*/] == iParam1)
			{
				if (Global_95814.f_812[iParam0 /*472*/][iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (Global_95814.f_812[iParam0 /*472*/].f_221[iVar0 /*5*/] == iParam1)
			{
				if (Global_95814.f_812[iParam0 /*472*/].f_221[iVar0 /*5*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_416(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_420(iParam0, &iVar1);
	if (!unk_0x3362CDE8460ED38B("NONE", sVar0) && iVar1 != 0)
	{
		if (bParam1)
		{
			if (unk_0x00BCFC51EF781989(iVar1))
			{
				return;
			}
			if (unk_0x645938DA8ED5E0BA(unk_0xBC25C936A095B5BA()) == iVar1)
			{
				func_419(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!unk_0x00BCFC51EF781989(iVar1))
			{
				return;
			}
			if (func_417(iParam0))
			{
				func_419(iParam0, 0);
			}
		}
		unk_0xAA5EF3021E488A5D(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_417(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_418(iParam0) };
	if (Var0.f_1 != -1 && unk_0xFA30DFD0084E92FE(Global_31683[Var0.f_1], Var0.f_0))
	{
		return 1;
	}
	return 0;
}

struct<2> func_418(var uParam0)
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
	while (iVar1 < 6)
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

void func_419(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_418(iParam0) };
	if (Var0.f_1 == -1)
	{
		return;
	}
	if (bParam1)
	{
		unk_0xF0059F27F7BB6680(&(Global_31683[Var0.f_1]), Var0.f_0);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&(Global_31683[Var0.f_1]), Var0.f_0);
	}
}

var func_420(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_421(iParam0) };
	*iParam1 = unk_0x5E29F9399E0829A3(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_421(int iParam0)
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
			Var5 = { func_422(1, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var5 = { func_422(2, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var5 = { func_422(3, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var5 = { func_422(4, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var5 = { func_422(5, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var5 = { func_422(6, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var5 = { func_422(7, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1049673[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			Var5 = { func_422(35, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var5 = { func_422(36, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var5 = { func_422(37, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var5 = { func_422(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var5 = { func_422(39, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var5 = { func_422(40, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var5 = { func_422(41, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var5 = { func_422(42, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var5 = { func_422(43, 0) };
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
	}
	switch (iParam0)
	{
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
		
		case 83:
			Var5 = { func_422(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			Var5 = { func_422(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			Var5 = { func_422(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			Var5 = { func_422(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			Var5 = { func_422(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			Var5 = { func_422(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			Var5 = { func_422(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			Var5 = { func_422(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			Var5 = { func_422(87, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			Var5 = { func_422(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			Var5 = { func_422(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			Var5 = { func_422(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			Var5 = { func_422(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			Var5 = { func_422(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			Var5 = { func_422(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			Var5 = { func_422(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			Var5 = { func_422(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			Var5 = { func_422(88, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			Var5 = { func_422(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			Var5 = { func_422(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			Var5 = { func_422(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			Var5 = { func_422(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			Var5 = { func_422(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			Var5 = { func_422(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			Var5 = { func_422(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			Var5 = { func_422(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			Var5 = { func_422(89, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			Var5 = { func_422(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			Var5 = { func_422(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			Var5 = { func_422(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			Var5 = { func_422(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			Var5 = { func_422(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			Var5 = { func_422(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			Var5 = { func_422(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			Var5 = { func_422(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			Var5 = { func_422(90, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			Var5 = { func_422(91, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			Var5 = { func_422(97, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			Var5 = { func_422(103, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			Var5 = { func_422(104, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			Var5 = { func_422(105, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			Var5 = { func_422(106, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			Var5 = { func_422(107, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			Var5 = { func_422(108, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			Var5 = { func_422(109, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			Var5 = { func_422(110, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			Var5 = { func_422(111, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			Var5 = { func_422(112, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			Var5 = { func_422(113, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			Var5 = { func_422(114, 0) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			Var5 = { func_422(103, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			Var5 = { func_422(106, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			Var5 = { func_422(109, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			Var5 = { func_422(112, 1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938.3077f, -3196.112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 138:
			Var0 = { 512.5f, 4852f, -62.6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 139:
			Var0 = { 2047f, 2942f, -61.9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 140:
			Var0 = { -1047.6f, -232.3503f, 38.0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 149:
			Var0 = { 520.0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 150:
			Var0 = { -1266.802f, -3014.849f, -49.4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 151:
			Var0 = { 974.9203f, -3000.065f, -40.647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 152:
			Var0 = { 969.5376f, -3000.411f, -48.647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 153:
			Var0 = { 1094.997f, -3100.012f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 154:
			Var0 = { 1059.995f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 155:
			Var0 = { 1010.008f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 156:
			Var0 = { 372.6707f, 405.5235f, 144.5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 157:
			Var0 = { -282.0588f, -955.17f, 85.3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 158:
			Var0 = { 342.7946f, -997.4225f, -99.7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 159:
			Var0 = { 260.3268f, -997.4298f, -100.0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 160:
			Var0 = { 108.2369f, -753.5364f, 233.1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 161:
			Var0 = { 135.3226f, -746.3677f, 253.1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 162:
			Var0 = { 108.2572f, -753.5342f, 44.7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 163:
			Var0 = { 228.6161f, -992.053f, -99.9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 164:
			Var0 = { 199.9716f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 165:
			Var0 = { 173.1165f, -1003.28f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 166:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 167:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 168:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 169:
			Var0 = { 1257f, 4796.7f, -39.1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 170:
			Var0 = { 694.4f, 5898.9f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 171:
			Var0 = { 1121.8f, 5516.3f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 172:
			Var0 = { 1279.6f, 5233.2f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 173:
			Var0 = { 1158.6f, 5467.1f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 174:
			Var0 = { 705.9f, 5838.5f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 175:
			Var0 = { 1316.5f, 5184f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 176:
			Var0 = { 1248f, 5276.1f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 177:
			Var0 = { 1090.2f, 5559.2f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 178:
			Var0 = { 1261f, 4808.6f, -39.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 179:
			Var0 = { 721.8f, 5781.4f, -146.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 180:
			Var0 = { 780.8f, 5703.4f, -136.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 181:
			Var0 = { 868.1f, 5659.2f, -126.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 182:
			Var0 = { 1218.2f, 5321.2f, -85.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 183:
			Var0 = { 1278.5f, 4859.7f, -44.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 184:
			Var0 = { 1187.2f, 5419.8f, -96.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 185:
			Var0 = { 1344.7f, 5136.4f, -75.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 186:
			Var0 = { 1363.4f, 5039.5f, -65.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 187:
			Var0 = { 1049.3f, 5602.1f, -107.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 188:
			Var0 = { 1337.8f, 4944.3f, -55.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 189:
			Var0 = { 961.5f, 5646.9f, -117.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 190:
			Var0 = { 345.0041f, 4842.001f, -59.9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 191:
			Var0 = { 279.9322f, -1337.49f, 23.7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 192:
			Var0 = { -1604.664f, -3012.583f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 193:
			Var0 = { -1505.783f, -3012.587f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 194:
			Var0 = { -630.4205f, -236.7843f, 37.057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<6> func_422(int iParam0, bool bParam1)
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
		
		case 87:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

bool func_423(bool bParam0)
{
	if (!bParam0 && unk_0xB731B8C5BCE89836(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xFA30DFD0084E92FE(Global_71226, 0);
}

