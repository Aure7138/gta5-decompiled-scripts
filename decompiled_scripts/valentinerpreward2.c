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
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
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
	float fLocal_60 = 0f;
	var uLocal_61 = 0;
	var uLocal_62 = 10;
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
	var uLocal_73 = 2;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 8;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 8;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	char* sLocal_96 = NULL;
	bool bLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	var uLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119[4] = { 0, 0, 0, 0 };
	float fLocal_124 = 0f;
	struct<2> Local_125 = { 0, 0 } ;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	bool bLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	struct<6> Local_141 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156[4] = { 0, 0, 0, 0 };
	float fLocal_161 = 0f;
	float fLocal_162 = 0f;
	struct<2> Local_163 = { 0, 0 } ;
	struct<2> Local_165 = { 0, 0 } ;
	struct<2> Local_167 = { 0, 0 } ;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175[35] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = -1;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 2;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	int iLocal_229 = 0;
	bool bLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	int iLocal_238 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_60 = ((0.05f + 0.275f) - 0.01f);
	sLocal_96 = "1.43.28";
	iLocal_104 = -1;
	iLocal_113 = -1;
	iLocal_131 = -1;
	iLocal_132 = -1;
	iLocal_138 = -1;
	StringCopy(&Local_141, "", 24);
	unk_0x941BE77305BB5695(0);
	unk_0x252CDD3D0F299441();
	if (iScriptParam_0 == iScriptParam_0)
	{
	}
	Global_1315785 = unk_0x8B948C59217A295D(sLocal_96);
	iVar0 = unk_0x53C562FD2B9E3AB0() + 10000;
	while (unk_0x53C562FD2B9E3AB0() < iVar0)
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	while (true)
	{
		if (func_629())
		{
			func_628();
			if (bLocal_97)
			{
				unk_0x8D95497078BC0E3B(0f, 0.23f);
				unk_0xA54B8BFDEBB2AF89(255, 255, 255, 255);
				func_627(0.69f, 0.06f, "STRING", sLocal_96);
			}
		}
		func_488(&uLocal_211);
		if (unk_0x3A711520F83BAE98() && Global_2455152.f_3)
		{
			func_479();
			func_478();
			func_477();
			func_474();
			func_473();
			func_472();
			func_471();
			func_468();
			func_466();
			func_464();
			func_438();
			func_436();
			func_435();
			func_434();
			func_432();
			func_430();
			func_428();
			func_424();
			func_420();
			func_419();
			func_418();
			func_417();
			func_416();
			func_411();
			func_409();
			func_408();
			func_384();
			func_381();
			func_380();
			func_379();
			func_378();
			func_375();
			func_372();
			func_371();
			func_370();
			func_366();
			func_359();
			func_358();
			func_350();
			func_143();
			func_127();
			func_126();
			func_124();
			func_126();
			func_121();
			func_116();
			func_113();
			func_104();
			func_101();
			func_99();
			func_97();
			func_96();
			func_95();
			func_92();
			func_90();
			func_86();
			func_84();
			func_81();
			func_80();
			func_70();
			func_67();
			func_55();
			func_47();
			func_29();
			func_21();
			func_18();
			func_12();
		}
		else if (iLocal_174)
		{
			iLocal_174 = 0;
		}
		func_10();
		func_7();
		func_4();
		func_2();
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
	unk_0x96A3D9A8A4C7AFD4();
}

void func_1()
{
	if (unk_0x8F38E94BBF3404CD(joaat("fm_race_creator")) > 0)
	{
		if (unk_0x74C475EB8E73D398(&(Global_17301.f_1), "FMMC_MENU_CLT") && Global_4456448.f_51004 == 0)
		{
			if (Global_17301.f_5606 == 8)
			{
				unk_0x4FB260623DD93924(2, 188, 1);
			}
			else if (Global_17301.f_5606 == 13)
			{
				unk_0x4FB260623DD93924(2, 187, 1);
			}
		}
	}
	if (unk_0x8F38E94BBF3404CD(joaat("creator")) > 0)
	{
		if (Global_17301.f_7930)
		{
			unk_0x4FB260623DD93924(2, 199, 1);
		}
	}
}

void func_2()
{
	if (unk_0x8F38E94BBF3404CD(joaat("fm_race_creator")) > 0)
	{
		if ((((unk_0x74C475EB8E73D398(&(Global_17301.f_73[Global_17301.f_5606 /*6*/]), "FMMC_RDC_PSR") || unk_0x74C475EB8E73D398(&(Global_17301.f_73[Global_17301.f_5606 /*6*/]), "FMMC_RDC_TFR")) || unk_0x74C475EB8E73D398(&(Global_17301.f_73[Global_17301.f_5606 /*6*/]), "FMMC_RDC_SVR")) || unk_0x74C475EB8E73D398(&(Global_17301.f_73[Global_17301.f_5606 /*6*/]), "FMMC_RDC_TRG")) || unk_0x74C475EB8E73D398(&(Global_17301.f_73[Global_17301.f_5606 /*6*/]), "FMMC_RDC_LND"))
		{
			if (unk_0xE8C126B7ADBB9D63(2, 237) || unk_0xE8C126B7ADBB9D63(2, func_3()))
			{
				if (Global_4456448.f_50256 == 7)
				{
					Global_4456448.f_50256 = 6;
				}
				if (Global_4456448.f_50256 == 19)
				{
					Global_4456448.f_50256 = 18;
				}
				if (Global_4456448.f_50256 == 5)
				{
					Global_4456448.f_50256 = 4;
				}
				if (Global_4456448.f_50256 == 1)
				{
					Global_4456448.f_50256 = 0;
				}
				if (Global_4456448.f_50256 == 3)
				{
					Global_4456448.f_50256 = 2;
				}
				if (Global_4456448.f_50256 == 11)
				{
					Global_4456448.f_50256 = 10;
				}
				if (Global_4456448.f_50256 == 13)
				{
					Global_4456448.f_50256 = 12;
				}
				if (Global_4456448.f_50256 == 17)
				{
					Global_4456448.f_50256 = 16;
				}
				if (Global_4456448.f_50256 == 15)
				{
					Global_4456448.f_50256 = 14;
				}
				Global_4456448.f_51009 = 0;
			}
		}
	}
}

int func_3()
{
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (unk_0x622CEE94AF3A0B32(unk_0x82FF3DFBC3965CC0(unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502()))))
		{
			if (!unk_0x4C4813CAAD70E814(2))
			{
				return 204;
			}
		}
	}
	return 201;
}

void func_4()
{
	if ((func_6() && func_5()) && Global_4456448.f_122963 == 0)
	{
		Global_4456448.f_144486[0] = 50;
		Global_4456448.f_144486[1] = 30;
		Global_4456448.f_144486[2] = 20;
		Global_4456448.f_144482[0] = 3;
		Global_4456448.f_144482[1] = 2;
		Global_4456448.f_144482[2] = 1;
		Global_4456448.f_144497[0 /*4*/][0] = 7;
		Global_4456448.f_144497[0 /*4*/][1] = 8;
		Global_4456448.f_144497[0 /*4*/][2] = 9;
		Global_4456448.f_144497[1 /*4*/][0] = 5;
		Global_4456448.f_144497[1 /*4*/][1] = 6;
		Global_4456448.f_144497[1 /*4*/][2] = 7;
		Global_4456448.f_144497[2 /*4*/][0] = 3;
		Global_4456448.f_144497[2 /*4*/][1] = 4;
		Global_4456448.f_144497[2 /*4*/][2] = 5;
		Global_4456448.f_144497[3 /*4*/][0] = 1;
		Global_4456448.f_144497[3 /*4*/][1] = 2;
		Global_4456448.f_144497[3 /*4*/][2] = 3;
	}
}

int func_5()
{
	if ((unk_0xC80D31E4B587871C(Global_4456448.f_28, 18) || Global_4456448.f_50256 == 18) || Global_4456448.f_50256 == 19)
	{
		return 1;
	}
	return 0;
}

int func_6()
{
	if (unk_0x8F38E94BBF3404CD(joaat("fm_race_creator")) != 0 || unk_0x8F38E94BBF3404CD(joaat("fm_race_controler")) != 0)
	{
		return 1;
	}
	return 0;
}

void func_7()
{
	int iVar0;
	
	if (func_6())
	{
		iVar0 = 0;
		while (iVar0 <= (Global_4456448.f_50254 - 1))
		{
			if (func_5() && func_8(iVar0))
			{
				if (!unk_0xC80D31E4B587871C(Global_4456448.f_43478[iVar0], 4))
				{
					unk_0x872F1C1F8587CCC7(&(Global_4456448.f_43478[iVar0]), 4);
					unk_0x0EE72DB1CD8A3B86(&(Global_4456448.f_43478[iVar0]), 8);
				}
			}
			else if (unk_0xC80D31E4B587871C(Global_4456448.f_43478[iVar0], 4) || unk_0xC80D31E4B587871C(Global_4456448.f_43478[iVar0], 8))
			{
				unk_0x0EE72DB1CD8A3B86(&(Global_4456448.f_43478[iVar0]), 4);
				unk_0x0EE72DB1CD8A3B86(&(Global_4456448.f_43478[iVar0]), 8);
			}
			iVar0++;
		}
	}
}

bool func_8(int iParam0)
{
	return func_9(Global_4456448.f_42965[iParam0 /*3*/], Global_4456448.f_41940, 0);
}

bool func_9(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_10()
{
	int iVar0;
	
	if (func_11())
	{
		iVar0 = 0;
		while (iVar0 <= (Global_4456448.f_71947 - 1))
		{
			if (Global_4456448.f_71951[iVar0 /*213*/].f_31 < 25)
			{
				Global_4456448.f_71951[iVar0 /*213*/].f_31 = 100;
			}
			iVar0++;
		}
	}
}

int func_11()
{
	if ((((unk_0x8F38E94BBF3404CD(joaat("fm_deathmatch_creator")) != 0 || unk_0x8F38E94BBF3404CD(joaat("fm_deathmatch_controler")) != 0) || unk_0x8F38E94BBF3404CD(joaat("fm_lts_creator")) != 0) || unk_0x8F38E94BBF3404CD(joaat("fm_capture_creator")) != 0) || (unk_0x8F38E94BBF3404CD(joaat("fm_mission_controller")) != 0 && (Global_4456448.f_2 == 6 || Global_4456448.f_2 == 5)))
	{
		return 1;
	}
	return 0;
}

void func_12()
{
	if (func_17())
	{
		if (!iLocal_238)
		{
		}
		Global_1664858 = 1;
		iLocal_238 = 1;
		if ((!func_14(unk_0x9EB17624F44A8DA4()) && unk_0x9F7B586A14398C40()) && unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()))
		{
			func_13(0);
			Global_1664858 = 0;
			iLocal_238 = 0;
		}
	}
	else if (iLocal_238)
	{
		if (iLocal_238)
		{
		}
		Global_1664858 = 0;
		iLocal_238 = 0;
	}
}

void func_13(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xC80D31E4B587871C(Global_1669535, 12))
		{
			unk_0x872F1C1F8587CCC7(&Global_1669535, 12);
		}
	}
	else if (unk_0xC80D31E4B587871C(Global_1669535, 12))
	{
		unk_0x0EE72DB1CD8A3B86(&Global_1669535, 12);
	}
}

int func_14(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 1, 1))
		{
			return Global_2422736[iParam0 /*420*/].f_324.f_1 != -1;
		}
		else if ((Global_1312854 && iParam0 == unk_0x9EB17624F44A8DA4()) && func_15(iParam0, 1, 0))
		{
			return Global_2422736[iParam0 /*420*/].f_324.f_1 != -1;
		}
	}
	return 0;
}

int func_15(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x552F39AE86E07792(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x5BEF7A5AB8F17255(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436181.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_16()
{
	return -1;
}

bool func_17()
{
	return unk_0xC80D31E4B587871C(Global_1669535, 12);
}

void func_18()
{
	if ((Global_103501 && unk_0x8F38E94BBF3404CD(joaat("director_mode")) <= 0) && func_19())
	{
		unk_0x34CDC8440125D3B1();
	}
}

int func_19()
{
	if (func_20() == 0)
	{
		return 1;
	}
	return 0;
}

int func_20()
{
	return Global_1312466.f_18;
}

void func_21()
{
	if (func_17())
	{
		if (func_28(unk_0x9EB17624F44A8DA4()))
		{
			if (!iLocal_235)
			{
				iLocal_235 = 1;
				func_27(&uLocal_236);
			}
		}
	}
	if (iLocal_235)
	{
		if (unk_0x08D525BE62A22AE0())
		{
			func_26(0);
			Global_1669535.f_2093 = 0;
			func_13(0);
			func_25(0);
			func_24(0);
			unk_0x9D40987BB7758337(17, 0, 0);
			iLocal_235 = 0;
		}
	}
	if ((iLocal_235 && unk_0x9F7B586A14398C40()) && unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()))
	{
		if (func_22(&uLocal_236, 25000, 0))
		{
			func_27(&uLocal_236);
			iLocal_235 = 0;
		}
	}
}

int func_22(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_23(uParam0, bParam2, 0);
	if (unk_0x3A711520F83BAE98() && !bParam2)
	{
		if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0x53C562FD2B9E3AB0(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_23(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x3A711520F83BAE98() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xD1952A425B78FFC0();
			}
			else
			{
				*uParam0 = unk_0xEBD55014C579F626();
			}
		}
		else
		{
			*uParam0 = unk_0x53C562FD2B9E3AB0();
		}
		uParam0->f_1 = 1;
	}
}

void func_24(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xC80D31E4B587871C(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_324, 18))
		{
			unk_0x872F1C1F8587CCC7(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_324), 18);
		}
	}
	else if (unk_0xC80D31E4B587871C(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_324, 18))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_324), 18);
	}
}

void func_25(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xC80D31E4B587871C(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_324, 25))
		{
			unk_0x872F1C1F8587CCC7(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_324), 25);
		}
	}
	else if (unk_0xC80D31E4B587871C(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_324, 25))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_324), 25);
	}
}

void func_26(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xC80D31E4B587871C(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_324, 8))
		{
			unk_0x872F1C1F8587CCC7(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_324), 8);
		}
	}
	else if (unk_0xC80D31E4B587871C(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_324, 8))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_324), 8);
	}
}

void func_27(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_28(int iParam0)
{
	if (iParam0 != func_16())
	{
		return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_324, 8);
	}
	return 0;
}

void func_29()
{
	var uVar0;
	
	if (func_45(unk_0x9EB17624F44A8DA4()))
	{
		if (func_33(&uVar0) || (func_32(unk_0x9EB17624F44A8DA4()) && Global_1595538 == unk_0x9EB17624F44A8DA4()))
		{
			if (!iLocal_234)
			{
			}
			iLocal_234 = 1;
			func_31(1);
		}
	}
	else if (!func_30(unk_0x9EB17624F44A8DA4()))
	{
		if (iLocal_234)
		{
			func_31(0);
			iLocal_234 = 0;
		}
	}
}

int func_30(int iParam0)
{
	if (iParam0 != func_16() && func_15(iParam0, 1, 1))
	{
		return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_324, 3);
	}
	return 0;
}

void func_31(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xC80D31E4B587871C(Global_1669535.f_2916, 27))
		{
			unk_0x872F1C1F8587CCC7(&(Global_1669535.f_2916), 27);
		}
	}
	else if (unk_0xC80D31E4B587871C(Global_1669535.f_2916, 27))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_1669535.f_2916), 27);
	}
}

int func_32(int iParam0)
{
	if (Global_1627537[iParam0 /*532*/].f_11.f_26 != func_16())
	{
		return 1;
	}
	return 0;
}

int func_33(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (Global_1595538 != func_16())
	{
		if (unk_0xC80D31E4B587871C(Global_1669535.f_16, 0))
		{
			if ((func_43(unk_0x9EB17624F44A8DA4(), 0) || func_32(unk_0x9EB17624F44A8DA4())) && func_42(Global_1595538))
			{
				iVar1 = func_41();
				if (iVar1 != func_16())
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						unk_0x16416C5B54FDBCBB(unk_0xFC1458A37D98B502(), 0, 0);
					}
					else
					{
						func_40(1);
						return 1;
					}
				}
			}
		}
		if (func_38(Global_1595538) == 225 || func_38(Global_1595538) == 226)
		{
			if (func_42(Global_1595538))
			{
				bVar0 = true;
			}
		}
		if ((Global_1669535.f_2098 != func_37(Global_1595538) && func_42(Global_1595538)) && Global_1669535.f_2098 != -1)
		{
			if (Global_1595538 == unk_0x9EB17624F44A8DA4())
			{
				if (!unk_0xC80D31E4B587871C(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_324.f_9, 23))
				{
					unk_0x872F1C1F8587CCC7(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_324.f_9), 23);
				}
			}
			if (!unk_0xC80D31E4B587871C(Global_1669535.f_16, 9) && unk_0xC80D31E4B587871C(Global_2422736[Global_1595538 /*420*/].f_324.f_9, 23))
			{
				unk_0x872F1C1F8587CCC7(&(Global_1669535.f_16), 9);
				return 1;
			}
		}
		if (!func_19())
		{
			if (func_42(Global_1595538))
			{
				return 1;
			}
		}
		if (!unk_0xC80D31E4B587871C(Global_1669535.f_16, 0) && Global_1595538 != func_16())
		{
			if (!func_15(Global_1595538, 0, 1) && func_42(Global_1595538))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (!func_42(Global_1595538) || func_36(Global_1595538))
		{
			return 0;
		}
		if (Global_1595538 != unk_0x9EB17624F44A8DA4() && Global_1595538 != func_16())
		{
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && func_45(unk_0x9EB17624F44A8DA4()))
			{
				unk_0x16416C5B54FDBCBB(unk_0xFC1458A37D98B502(), 0, 0);
			}
			else
			{
				if (func_43(unk_0x9EB17624F44A8DA4(), 1) && func_34(unk_0x9EB17624F44A8DA4(), Global_1595538))
				{
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_34(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_16() && iParam1 != func_16())
	{
		iVar0 = func_35(iParam0);
		if (iVar0 != func_16())
		{
			return iVar0 == func_35(iParam1);
		}
	}
	return 0;
}

int func_35(int iParam0)
{
	if (iParam0 != func_16())
	{
		return Global_1627537[iParam0 /*532*/].f_11;
	}
	return func_16();
}

int func_36(int iParam0)
{
	if (iParam0 != func_16())
	{
		return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_324.f_9, 0);
	}
	return 0;
}

int func_37(int iParam0)
{
	if (iParam0 == func_16())
	{
		return 0;
	}
	return Global_1595693[iParam0 /*680*/].f_266.f_160[5 /*12*/];
}

int func_38(int iParam0)
{
	if (func_39(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_33;
	}
	return -1;
}

int func_39(int iParam0, int iParam1)
{
	if (Global_1627537[iParam0 /*532*/].f_11.f_33 != -1 || (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_40(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xC80D31E4B587871C(Global_1669535.f_2, 5))
		{
			unk_0x872F1C1F8587CCC7(&(Global_1669535.f_2), 5);
		}
	}
	else if (unk_0xC80D31E4B587871C(Global_1669535.f_2, 5))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_1669535.f_2), 5);
	}
}

int func_41()
{
	return Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11;
}

int func_42(int iParam0)
{
	if (iParam0 != func_16())
	{
		return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_324, 6);
	}
	return 0;
}

bool func_43(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_44(iParam0))
		{
			return 0;
		}
	}
	return Global_1627537[iParam0 /*532*/].f_11 != func_16();
}

int func_44(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_16())
		{
			return Global_1627537[iParam0 /*532*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_45(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1 && Global_2422736[iParam0 /*420*/].f_324.f_4 != func_16())
			{
				return func_46(Global_2422736[iParam0 /*420*/].f_324.f_1) == 5;
			}
		}
	}
	return 0;
}

int func_46(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
	}
	return -1;
}

void func_47()
{
	var uVar0;
	
	if (func_54(unk_0x9EB17624F44A8DA4()))
	{
		if (func_48(&uVar0))
		{
			if (!iLocal_233)
			{
			}
			iLocal_233 = 1;
			func_31(1);
		}
	}
	else if (!func_30(unk_0x9EB17624F44A8DA4()))
	{
		if (iLocal_233)
		{
			func_31(0);
			iLocal_233 = 0;
		}
	}
}

int func_48(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (func_53(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (Global_1595542 != func_16())
	{
		if (unk_0xC80D31E4B587871C(Global_1669535.f_16, 31))
		{
			if ((func_43(unk_0x9EB17624F44A8DA4(), 0) || func_32(unk_0x9EB17624F44A8DA4())) && func_52(Global_1595542))
			{
				iVar1 = func_41();
				if (iVar1 != func_16())
				{
					if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
					{
						unk_0x16416C5B54FDBCBB(unk_0xFC1458A37D98B502(), 0, 0);
					}
					else
					{
						func_40(1);
						return 1;
					}
				}
			}
		}
		if (func_38(Global_1595542) == 225 || func_38(Global_1595542) == 226)
		{
			if (func_52(Global_1595542))
			{
				bVar0 = true;
			}
		}
		if ((Global_1669535.f_2099 != func_49(func_51(Global_1595542)) && func_52(Global_1595542)) && Global_1669535.f_2099 != -1)
		{
			if (Global_1595542 == unk_0x9EB17624F44A8DA4())
			{
			}
			if (!unk_0xC80D31E4B587871C(Global_1669535.f_16, 11))
			{
				unk_0x872F1C1F8587CCC7(&(Global_1669535.f_16), 11);
				return 1;
			}
		}
		if (!unk_0xC80D31E4B587871C(Global_1669535.f_16, 31) && Global_1595542 != func_16())
		{
			if (!func_15(Global_1595542, 0, 1) && func_52(Global_1595542))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (!func_52(Global_1595542))
		{
			return 0;
		}
		if (Global_1595542 != unk_0x9EB17624F44A8DA4() && Global_1595542 != func_16())
		{
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && func_54(unk_0x9EB17624F44A8DA4()))
			{
				unk_0x16416C5B54FDBCBB(unk_0xFC1458A37D98B502(), 0, 0);
			}
			else if (unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), -828834893) != 1 && unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), -828834893) != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_49(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 102)
	{
		if (func_46(iVar0) == 9)
		{
			if (func_50(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_50(int iParam0)
{
	switch (iParam0)
	{
		case 89:
			return 1;
		
		case 90:
			return 2;
		
		case 91:
			return 3;
		
		case 92:
			return 4;
		
		case 93:
			return 5;
		
		case 94:
			return 6;
		
		case 95:
			return 7;
		
		case 96:
			return 8;
		
		case 97:
			return 9;
		
		default:
	}
	return 0;
}

int func_51(int iParam0)
{
	if (iParam0 == func_16())
	{
		return 0;
	}
	return Global_1595693[iParam0 /*680*/].f_266.f_248;
}

int func_52(int iParam0)
{
	if (iParam0 != func_16())
	{
		return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_324.f_10, 6);
	}
	return 0;
}

int func_53(int iParam0)
{
	if (iParam0 != func_16())
	{
		return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_324.f_10, 13);
	}
	return 0;
}

int func_54(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1 && Global_2422736[iParam0 /*420*/].f_324.f_4 != func_16())
			{
				return func_46(Global_2422736[iParam0 /*420*/].f_324.f_1) == 8;
			}
		}
	}
	return 0;
}

void func_55()
{
	bool bVar0;
	
	bVar0 = false;
	if ((unk_0xB8DE76287EDC4957(func_66(), 0) && func_65(func_66(), 1)) && func_64(func_66(), 1))
	{
		if (!func_30(unk_0x9EB17624F44A8DA4()))
		{
			if (unk_0xA6A13EE8139C2BD4(func_66(), -1215f, -3075f, -21.83f, -1315f, -2958.23f, -52f, 0, 1, 0))
			{
				bVar0 = true;
				if (!func_63(&uLocal_231))
				{
					func_23(&uLocal_231, 1, 0);
				}
				else if (func_22(&uLocal_231, 10000, 1))
				{
					func_56(1, 0, 1, 0, 0, 0, 0);
					func_27(&uLocal_231);
				}
			}
		}
	}
	if (!bVar0)
	{
		if (func_63(&uLocal_231))
		{
			func_27(&uLocal_231);
		}
	}
}

void func_56(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (func_61() < 0 && Global_1678582)
	{
		return;
	}
	if (func_60(35))
	{
		bParam0 = true;
	}
	if (bParam0)
	{
		func_59(2);
	}
	else
	{
		func_59(1);
	}
	if (bParam1)
	{
		func_59(11);
	}
	if (bParam2)
	{
		func_59(32);
		if (bParam3)
		{
			if (func_61() >= 0 && unk_0xC80D31E4B587871C(Global_1320310[func_61() /*141*/].f_102, 0))
			{
				func_59(33);
			}
		}
		else
		{
			func_58(33);
		}
		if (func_61() >= 0)
		{
			if (func_57(Global_1320310[func_61() /*141*/].f_66))
			{
				func_59(40);
			}
		}
	}
	else if (bParam5)
	{
		func_59(37);
	}
	if (bParam4)
	{
		func_59(36);
	}
	if (func_60(36))
	{
		if (func_60(2))
		{
			func_58(36);
		}
	}
	if (bParam6)
	{
		func_59(38);
	}
	if (unk_0x3A711520F83BAE98())
	{
		Global_2512808.f_372 = unk_0xD1952A425B78FFC0();
	}
}

int func_57(int iParam0)
{
	if (iParam0 == joaat("trailersmall2"))
	{
		return 1;
	}
	return 0;
}

void func_58(int iParam0)
{
	if (iParam0 < 32)
	{
		if (unk_0xC80D31E4B587871C(Global_2436181.f_502.f_1, iParam0))
		{
			unk_0x0EE72DB1CD8A3B86(&(Global_2436181.f_502.f_1), iParam0);
		}
	}
	else if (unk_0xC80D31E4B587871C(Global_2436181.f_502.f_2, (iParam0 - 32)))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2436181.f_502.f_2), (iParam0 - 32));
	}
}

void func_59(int iParam0)
{
	if (iParam0 < 32)
	{
		if (!unk_0xC80D31E4B587871C(Global_2436181.f_502.f_1, iParam0))
		{
			unk_0x872F1C1F8587CCC7(&(Global_2436181.f_502.f_1), iParam0);
		}
	}
	else if (!unk_0xC80D31E4B587871C(Global_2436181.f_502.f_2, (iParam0 - 32)))
	{
		unk_0x872F1C1F8587CCC7(&(Global_2436181.f_502.f_2), (iParam0 - 32));
	}
}

bool func_60(int iParam0)
{
	if (iParam0 < 32)
	{
		return unk_0xC80D31E4B587871C(Global_2436181.f_502.f_1, iParam0);
	}
	return unk_0xC80D31E4B587871C(Global_2436181.f_502.f_2, (iParam0 - 32));
}

int func_61()
{
	return Global_2097152[func_62() /*12130*/].f_7676.f_2;
}

int func_62()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

bool func_63(var uParam0)
{
	return uParam0->f_1;
}

int func_64(int iParam0, bool bParam1)
{
	if (Global_70856)
	{
		if (unk_0x6ADD12BF4D6D2587(iParam0) && (!bParam1 || unk_0xB8DE76287EDC4957(iParam0, 0)))
		{
			if (unk_0xB80A4DA4C06A76F1(iParam0, "Player_Vehicle"))
			{
				if (unk_0x2786E663D1846FFC(iParam0, "Player_Vehicle") == unk_0xDFD4F88AAFDE2371(unk_0x9EB17624F44A8DA4()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_65(int iParam0, bool bParam1)
{
	if (Global_70856)
	{
		if (unk_0x6ADD12BF4D6D2587(iParam0) && (!bParam1 || unk_0xB8DE76287EDC4957(iParam0, 0)))
		{
			if (unk_0xB80A4DA4C06A76F1(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_66()
{
	if (unk_0x8B948C59217A295D(unk_0x436287B7DB306165()) == joaat("freemode"))
	{
		if (unk_0x93C304998B457C45(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_49) && unk_0x918CA1BFFAA03556(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_49))
		{
			return unk_0xF32FBF2453AC1753(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_49);
		}
	}
	return Global_2512808.f_284;
}

void func_67()
{
	if (func_69() || func_68())
	{
		if (!Global_1664858)
		{
		}
		Global_1664858 = 1;
		bLocal_230 = true;
	}
	else if (bLocal_230)
	{
		Global_1664858 = 0;
	}
}

bool func_68()
{
	return unk_0xC80D31E4B587871C(Global_1669535.f_2916, 8);
}

bool func_69()
{
	return unk_0xC80D31E4B587871C(Global_1669535, 13);
}

void func_70()
{
	if ((func_19() && func_79() == 0) && !Global_1312854)
	{
		if ((((unk_0x9E0D1EED4A8BA9B1() && func_78()) && !func_76(unk_0x9EB17624F44A8DA4())) || func_74()) || func_72())
		{
			if (func_71())
			{
				unk_0x34CDC8440125D3B1();
			}
		}
	}
}

int func_71()
{
	int iVar0;
	
	iVar0 = joaat("player_zero");
	unk_0x6FF834D85E2DD4C6(iVar0);
	if (unk_0x9A0B2ED5055D3F0B(iVar0))
	{
		unk_0xDB01234233A0E282(unk_0x9EB17624F44A8DA4(), iVar0);
		unk_0xDDE92CE7A708C841(0);
		return 1;
	}
	return 0;
}

int func_72()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502());
	iVar1 = 0;
	while (iVar1 < 28)
	{
		if (iVar0 == func_73(iVar1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_73(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("player_one");
		
		case 1:
			return joaat("player_two");
		
		case 2:
			return joaat("player_zero");
		
		case 3:
			return joaat("ig_amandatownley");
		
		case 4:
			return joaat("ig_beverly");
		
		case 5:
			return joaat("ig_brad");
		
		case 6:
			return joaat("ig_chrisformage");
		
		case 7:
			return joaat("ig_davenorton");
		
		case 8:
			return joaat("ig_devin");
		
		case 9:
			return joaat("ig_drfriedlander");
		
		case 10:
			return joaat("ig_fabien");
		
		case 11:
			return joaat("ig_floyd");
		
		case 12:
			return joaat("ig_jimmydisanto");
		
		case 13:
			return joaat("ig_lamardavis");
		
		case 14:
			return joaat("ig_lazlow");
		
		case 15:
			return joaat("ig_lestercrest");
		
		case 16:
			return joaat("ig_maude");
		
		case 17:
			return joaat("ig_mrs_thornhill");
		
		case 18:
			return joaat("ig_nervousron");
		
		case 19:
			return joaat("ig_patricia");
		
		case 20:
			return joaat("ig_siemonyetarian");
		
		case 21:
			return joaat("ig_solomon");
		
		case 22:
			return joaat("ig_stevehains");
		
		case 23:
			return joaat("ig_stretch");
		
		case 24:
			return joaat("ig_tanisha");
		
		case 25:
			return joaat("ig_taocheng");
		
		case 26:
			return joaat("ig_tracydisanto");
		
		case 27:
			return joaat("ig_wade");
		
		default:
	}
	return 0;
	return 0;
}

int func_74()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502());
	iVar1 = 0;
	while (iVar1 < 13)
	{
		if (iVar0 == func_75(iVar1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_75(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("u_m_y_hippie_01");
		
		case 1:
			return joaat("u_m_y_baygor");
		
		case 2:
			return joaat("u_m_o_finguru_01");
		
		case 3:
			return joaat("u_m_y_militarybum");
		
		case 4:
			return joaat("u_m_m_griff_01");
		
		case 5:
			return joaat("u_f_y_comjane");
		
		case 6:
			return joaat("s_m_m_strpreach_01");
		
		case 7:
			return joaat("u_m_m_jesus_01");
		
		case 8:
			return joaat("u_m_y_mani");
		
		case 9:
			return joaat("s_m_y_mime");
		
		case 10:
			return joaat("u_f_o_moviestar");
		
		case 11:
			return joaat("u_m_y_imporage");
		
		case 12:
			return joaat("u_m_y_zombie_01");
		
		default:
	}
	return 0;
	return 0;
}

int func_76(int iParam0)
{
	if (func_77(iParam0) == 146)
	{
		if (iParam0 == Global_2512808.f_4781)
		{
			return 1;
		}
	}
	return 0;
}

int func_77(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1627537[iVar0 /*532*/];
	}
	return -1;
}

int func_78()
{
	int iVar0;
	
	iVar0 = unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502());
	switch (iVar0)
	{
		case joaat("a_c_boar"):
		case joaat("a_c_cat_01"):
		case joaat("a_c_cow"):
		case joaat("a_c_coyote"):
		case joaat("a_c_deer"):
		case joaat("a_c_husky"):
		case joaat("a_c_mtlion"):
		case joaat("a_c_pig"):
		case joaat("a_c_poodle"):
		case joaat("a_c_pug"):
		case joaat("a_c_rabbit_01"):
		case joaat("a_c_retriever"):
		case joaat("a_c_rottweiler"):
		case joaat("a_c_shepherd"):
		case joaat("a_c_westy"):
		case joaat("a_c_chickenhawk"):
		case joaat("a_c_cormorant"):
		case joaat("a_c_crow"):
		case joaat("a_c_hen"):
		case joaat("a_c_pigeon"):
		case joaat("a_c_seagull"):
		case joaat("ig_orleans"):
			return 1;
			break;
	}
	return 0;
}

int func_79()
{
	return Global_25233;
}

void func_80()
{
	if (((unk_0x3A711520F83BAE98() && func_15(unk_0x9EB17624F44A8DA4(), 1, 1)) && !Global_1574139) && Global_25233 == 0)
	{
		if (unk_0x8F38E94BBF3404CD(joaat("animal_controller")) != 0)
		{
			unk_0x9D40987BB7758337(-201, 0, 0);
		}
	}
}

void func_81()
{
	if ((func_17() && func_83(unk_0x9EB17624F44A8DA4(), -1)) && unk_0x9F7B586A14398C40())
	{
		if (Global_1669529 == 3)
		{
			if (func_82())
			{
				unk_0x9D40987BB7758337(41, 0, 0);
			}
		}
	}
}

bool func_82()
{
	return Global_1669535.f_15 != -1;
}

int func_83(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_15(iParam0, 1, 1))
	{
		if (unk_0x88DDBE9908752BF0(unk_0x25D049AAC4603E65(iParam0), 0))
		{
			iVar0 = unk_0xDFD115BB10FE46A9(unk_0x25D049AAC4603E65(iParam0), 0);
			if (unk_0xB8DE76287EDC4957(iVar0, 0))
			{
				if (unk_0xFC1458A37D98B502() == unk_0x317536BCEA8FA6B0(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_84()
{
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && func_85(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0xE8C126B7ADBB9D63(2, 51))
		{
			iLocal_229 = 1;
		}
	}
	if (iLocal_229)
	{
		if (func_14(unk_0x9EB17624F44A8DA4()) && Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_324.f_4 == unk_0x9EB17624F44A8DA4())
		{
			if ((Global_2097152[func_62() /*12130*/].f_7676.f_2 != -1 && unk_0xC80D31E4B587871C(Global_1320310[Global_2097152[func_62() /*12130*/].f_7676.f_2 /*141*/].f_102, 0)) && !unk_0xC80D31E4B587871C(Global_1320310[Global_2097152[func_62() /*12130*/].f_7676.f_2 /*141*/].f_102, 6))
			{
				func_56(1, 1, 1, 0, 0, 0, 0);
				iLocal_229 = 0;
			}
		}
		else
		{
			iLocal_229 = 0;
		}
	}
}

int func_85(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_46(Global_2422736[iParam0 /*420*/].f_324.f_1) == 7;
			}
		}
	}
	return 0;
}

void func_86()
{
	if (func_88(unk_0x9EB17624F44A8DA4()))
	{
		unk_0x4FB260623DD93924(0, 23, 1);
		if (!func_63(&uLocal_227))
		{
			func_23(&uLocal_227, 1, 0);
		}
		else
		{
			if (func_87(unk_0xFC1458A37D98B502()))
			{
				unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
				func_27(&uLocal_227);
			}
			if (func_22(&uLocal_227, 500, 1))
			{
				func_27(&uLocal_227);
			}
		}
	}
	else
	{
		func_27(&uLocal_227);
	}
}

int func_87(int iParam0)
{
	int iVar0;
	
	if (unk_0x88DDBE9908752BF0(iParam0, 1))
	{
		if (!unk_0x88DDBE9908752BF0(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = unk_0x0191A52225EFA665(iParam0);
		if (unk_0x6ADD12BF4D6D2587(iVar0))
		{
			return 1;
		}
	}
	if (unk_0x0F299BBD0DC14B18(iParam0))
	{
		return 1;
	}
	if (unk_0x78F50AA8F955BEFC(iParam0, -1794415470) == 1 || unk_0x78F50AA8F955BEFC(iParam0, -1794415470) == 0)
	{
		return 1;
	}
	return 0;
}

int func_88(int iParam0)
{
	if (iParam0 != func_16() && func_15(iParam0, 1, 1))
	{
		if (func_30(iParam0) && !func_89(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_89(int iParam0)
{
	if (iParam0 != func_16() && func_15(iParam0, 1, 1))
	{
		return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_324, 4);
	}
	return 0;
}

void func_90()
{
	if (func_91(unk_0x9EB17624F44A8DA4()))
	{
		unk_0x4FB260623DD93924(0, 75, 1);
	}
}

int func_91(int iParam0)
{
	if (iParam0 != func_16())
	{
		return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_255, 17);
	}
	return 0;
}

void func_92()
{
	if (func_54(unk_0x9EB17624F44A8DA4()) && unk_0x9F7B586A14398C40())
	{
		if (func_43(unk_0x9EB17624F44A8DA4(), 1))
		{
			iLocal_225 = 1;
		}
		else
		{
			iLocal_225 = 0;
		}
	}
	if ((iLocal_225 && func_94()) && unk_0x3E9CABD07B829173())
	{
		if (!func_43(unk_0x9EB17624F44A8DA4(), 1))
		{
			iLocal_226 = 1;
		}
	}
	if (func_93(unk_0x9EB17624F44A8DA4()))
	{
		if (iLocal_226 && unk_0x9F7B586A14398C40())
		{
			Global_1669535.f_16 = 0;
			iLocal_226 = 0;
			iLocal_225 = 0;
		}
	}
}

int func_93(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_46(Global_2422736[iParam0 /*420*/].f_324.f_1) == 9;
			}
		}
	}
	return 0;
}

bool func_94()
{
	return unk_0xC80D31E4B587871C(Global_1669535.f_2916, 7);
}

void func_95()
{
	if (func_15(unk_0x9EB17624F44A8DA4(), 1, 1))
	{
		if ((!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && unk_0x9F7B586A14398C40()) && !func_14(unk_0x9EB17624F44A8DA4()))
		{
			func_25(0);
		}
	}
	else
	{
		func_25(0);
	}
}

void func_96()
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (Global_4456448.f_122309 != 1367922159)
	{
		return;
	}
	Var0 = { -440.1f, 6037.3f, 35.9f };
	fVar3 = 21f;
	iVar4 = unk_0x87889570F3396ABD(Var0, fVar3, joaat("riot"), 65575);
	if (unk_0x6ADD12BF4D6D2587(iVar4))
	{
		if (unk_0xA0BF73C5030D3F60(iVar4))
		{
			unk_0x4BEFCD5DAE410A90(iVar4, 1);
			unk_0xC615A122CFA6DBA6(iVar4, 0);
			unk_0xC922F3465B0ABFC6(iVar4, 1);
		}
		if (!unk_0x8EE3A848975DDF21(iVar4, 2, 0))
		{
			iVar5 = unk_0x317536BCEA8FA6B0(iVar4, 2, 0);
			if (unk_0xA0BF73C5030D3F60(iVar5) && !unk_0x3AB6A1A9084FB0A4(iVar5))
			{
				if (unk_0x78F50AA8F955BEFC(iVar5, -828834893) != 1 && unk_0x78F50AA8F955BEFC(iVar5, -828834893) != 0)
				{
					unk_0x16416C5B54FDBCBB(iVar5, 0, 64);
				}
			}
		}
		if (!unk_0x8EE3A848975DDF21(iVar4, -1, 0))
		{
			iVar6 = unk_0x317536BCEA8FA6B0(iVar4, -1, 0);
			if (unk_0xA0BF73C5030D3F60(iVar6) && !unk_0x3AB6A1A9084FB0A4(iVar6))
			{
				if (unk_0x78F50AA8F955BEFC(iVar6, -828834893) != 1 && unk_0x78F50AA8F955BEFC(iVar6, -828834893) != 0)
				{
					unk_0x16416C5B54FDBCBB(iVar6, 0, 64);
				}
			}
		}
	}
}

void func_97()
{
	if (((Global_980494.f_8 == -1 && func_98(unk_0xFC1458A37D98B502())) && Global_980513.f_12[0] == 5) && unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), 2106541073) == 1)
	{
		unk_0x957CEE967C939968(unk_0xFC1458A37D98B502());
	}
}

int func_98(int iParam0)
{
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_99()
{
	if (Global_4456448.f_122309 == 1657186075)
	{
		if (unk_0xC80D31E4B587871C(Global_980460.f_11, 17) && func_98(unk_0xFC1458A37D98B502()))
		{
			if (Global_980494.f_8 > -1 && func_100(unk_0xFC1458A37D98B502(), 459.8f, -988.8f, 24.9f, 1) < 20f)
			{
				unk_0x957CEE967C939968(unk_0xFC1458A37D98B502());
			}
		}
	}
}

float func_100(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x191BE1BC8F26F3C1(iParam0, 0))
	{
		Var0 = { unk_0xB3328BA8976B416C(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xB3328BA8976B416C(iParam0, 0) };
	}
	return unk_0xBE3C4023003180FC(Var0, Param1, iParam4);
}

void func_101()
{
	if (((func_103() == -1 && Global_1574349.f_45 == 1) && iLocal_174) && Global_4456448.f_122309 != 0)
	{
		Global_4456448.f_122309 = 0;
	}
	iLocal_174 = 0;
	if (func_103() == 21 && func_102())
	{
		iLocal_174 = 1;
	}
}

bool func_102()
{
	return unk_0xC80D31E4B587871C(Global_2447174, 4);
}

int func_103()
{
	return Global_979886;
}

void func_104()
{
	int iVar0;
	
	if ((unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && func_112(unk_0xFC1458A37D98B502(), 1) == -1) && func_89(unk_0x9EB17624F44A8DA4()))
	{
		if (func_46(func_111(unk_0x9EB17624F44A8DA4())) == 5)
		{
			iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
			if (unk_0x6ADD12BF4D6D2587(iVar0) && !unk_0x191BE1BC8F26F3C1(iVar0, 0))
			{
				if (!unk_0xB0DA749C8A7CCBBF(iVar0, joaat("technical")) && !unk_0xB0DA749C8A7CCBBF(iVar0, joaat("insurgent")))
				{
					if (!func_64(iVar0, 1) && func_65(iVar0, 1))
					{
						unk_0x16416C5B54FDBCBB(unk_0xFC1458A37D98B502(), 0, 0);
						if (!unk_0xC80D31E4B587871C(Global_1669535.f_2, 0))
						{
							unk_0x872F1C1F8587CCC7(&(Global_1669535.f_2), 0);
							iLocal_173 = 1;
						}
					}
				}
			}
		}
	}
	else if (iLocal_173)
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_1669535.f_2), 0);
		iLocal_173 = 0;
	}
	if (func_109())
	{
		if (unk_0x9EB17624F44A8DA4() != func_16())
		{
			if (Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_324.f_11 != -1)
			{
				func_105(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_324.f_11);
			}
		}
	}
}

void func_105(int iParam0)
{
	if (!func_108(iParam0))
	{
		return;
	}
	func_106(0, iParam0);
	func_106(1, iParam0);
	func_106(2, iParam0);
	func_106(3, iParam0);
	func_106(4, iParam0);
	func_106(10, iParam0);
	Global_1669535.f_1389[iParam0 /*3*/] = { 0f, 0f, 0f };
	Global_1669535.f_1696[iParam0] = 0f;
	if (Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_324.f_11 == iParam0)
	{
		Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_324.f_11 = -1;
		unk_0x0EE72DB1CD8A3B86(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_324), 2);
		unk_0x0EE72DB1CD8A3B86(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_324), 1);
	}
	if (unk_0xC80D31E4B587871C(Global_1669535.f_2, 22))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_1669535.f_2), 22);
	}
}

void func_106(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	func_107(iParam1, &iVar0, &iVar1);
	switch (iParam0)
	{
		case 0:
			unk_0x0EE72DB1CD8A3B86(&(Global_1669535.f_1374[iVar0]), iVar1);
			return;
			break;
		
		case 1:
			unk_0x0EE72DB1CD8A3B86(&(Global_1669535.f_1379[iVar0]), iVar1);
			return;
			break;
		
		case 2:
			unk_0x0EE72DB1CD8A3B86(&(Global_1669535.f_1384[iVar0]), iVar1);
			return;
			break;
		
		case 3:
			unk_0x0EE72DB1CD8A3B86(&(Global_1669535.f_1799[iVar0]), iVar1);
			return;
			break;
		
		case 4:
			unk_0x0EE72DB1CD8A3B86(&(Global_1669535.f_1804[iVar0]), iVar1);
			return;
			break;
		
		case 5:
			unk_0x0EE72DB1CD8A3B86(&(Global_1669535.f_2020[iVar0]), iVar1);
			return;
			break;
		
		case 6:
			unk_0x0EE72DB1CD8A3B86(&(Global_1669535.f_2025[iVar0]), iVar1);
			return;
			break;
		
		case 7:
			unk_0x0EE72DB1CD8A3B86(&(Global_1669535.f_2030[iVar0]), iVar1);
			return;
			break;
		
		case 8:
			unk_0x0EE72DB1CD8A3B86(&(Global_1669535.f_2047[iVar0]), iVar1);
			return;
			break;
		
		case 9:
			unk_0x0EE72DB1CD8A3B86(&(Global_1669535.f_2052[iVar0]), iVar1);
			return;
			break;
		
		case 10:
			unk_0x0EE72DB1CD8A3B86(&(Global_1669535.f_1809[iVar0]), iVar1);
			return;
			break;
		
		case 11:
			unk_0x0EE72DB1CD8A3B86(&(Global_1669535.f_2035[iVar0]), iVar1);
			return;
			break;
		
		case 12:
			unk_0x0EE72DB1CD8A3B86(&(Global_1669535.f_2040[iVar0]), iVar1);
			return;
			break;
		
		case 13:
			unk_0x0EE72DB1CD8A3B86(&(Global_1669535.f_1817[iVar0]), iVar1);
			return;
			break;
	}
}

void func_107(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	*uParam2 = (iParam0 - *uParam1 * 32);
}

int func_108(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 102)
	{
		return 1;
	}
	return 0;
}

int func_109()
{
	if ((Global_979886 >= 32 && Global_979886 <= 54) && Global_979886 != 38)
	{
		return 1;
	}
	if (func_110() || !func_19())
	{
		return 1;
	}
	return 0;
}

bool func_110()
{
	return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_196 != 0;
}

int func_111(int iParam0)
{
	if (iParam0 != func_16() && func_15(iParam0, 1, 1))
	{
		return Global_2422736[iParam0 /*420*/].f_324.f_12;
	}
	return -1;
}

int func_112(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (unk_0x88DDBE9908752BF0(iParam0, iParam1))
		{
			uVar0 = unk_0xDFD115BB10FE46A9(iParam0, iParam1);
			if (unk_0x6ADD12BF4D6D2587(uVar0))
			{
				iVar1 = unk_0xF82225DEA5272C6B(unk_0x82FF3DFBC3965CC0(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x8EE3A848975DDF21(iVar0, iVar3, 0))
					{
						if (unk_0x317536BCEA8FA6B0(iVar0, iVar3, 0) == iParam0)
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

void func_113()
{
	if ((func_115(unk_0x9EB17624F44A8DA4()) || func_45(unk_0x9EB17624F44A8DA4())) || func_54(unk_0x9EB17624F44A8DA4()))
	{
		if (((func_114(0) || unk_0xE8C126B7ADBB9D63(0, 172)) || unk_0xF2B58F79D29425B4(0, 172)) || unk_0x58F436C557A0FD7A(0, 172))
		{
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				if ((unk_0xB0DA749C8A7CCBBF(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 1), joaat("hauler2")) || unk_0xB0DA749C8A7CCBBF(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 1), joaat("phantom3"))) || unk_0xB0DA749C8A7CCBBF(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 1), joaat("avenger")))
				{
					unk_0x16416C5B54FDBCBB(unk_0xFC1458A37D98B502(), 0, 16);
				}
				else
				{
					unk_0x16416C5B54FDBCBB(unk_0xFC1458A37D98B502(), 0, 0);
				}
			}
			unk_0x4FB260623DD93924(0, 23, 1);
		}
	}
}

int func_114(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (unk_0xC80D31E4B587871C(Global_2323, 14))
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
	if (unk_0x8F38E94BBF3404CD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_115(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_46(Global_2422736[iParam0 /*420*/].f_324.f_1) == 4;
			}
		}
	}
	return 0;
}

void func_116()
{
	if (unk_0xC80D31E4B587871C(Global_1669535, 12))
	{
		if (Global_1669535.f_2903.f_3 != 81)
		{
			Global_1669535.f_2903.f_3 = 81;
		}
	}
	if (Global_1669535.f_2903.f_3 == 81)
	{
		if (Global_1669535.f_2903.f_1 == 9)
		{
			if (unk_0x08D525BE62A22AE0())
			{
				func_119(1);
				func_118();
				unk_0x9D40987BB7758337(17, 0, 0);
				Global_1669535.f_2903.f_3 = -1;
			}
		}
		else if (Global_1669535.f_2903.f_1 == 10)
		{
			if (unk_0x08D525BE62A22AE0())
			{
				func_117(1);
				Global_1669535.f_2903.f_3 = -1;
			}
		}
	}
}

void func_117(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xC80D31E4B587871C(Global_1669535, 11))
		{
			unk_0x872F1C1F8587CCC7(&Global_1669535, 11);
		}
	}
	else if (unk_0xC80D31E4B587871C(Global_1669535, 11))
	{
		unk_0x0EE72DB1CD8A3B86(&Global_1669535, 11);
	}
}

void func_118()
{
	Global_1669535.f_32 = 1;
}

void func_119(bool bParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (!bParam0)
	{
		func_23(&Global_2520707, 1, 0);
	}
	else
	{
		func_27(&Global_2520707);
	}
	if (unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
	{
		uVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
		iVar2 = -1;
		while (iVar2 <= 8)
		{
			if (iVar2 < unk_0xF82225DEA5272C6B(unk_0x82FF3DFBC3965CC0(uVar0)))
			{
				if (!unk_0x8EE3A848975DDF21(iVar0, iVar2, 0))
				{
					iVar1 = unk_0x317536BCEA8FA6B0(iVar0, iVar2, 0);
					if ((unk_0x6ADD12BF4D6D2587(iVar1) && iVar1 != unk_0xFC1458A37D98B502()) && unk_0x1417A5CC924DE120(iVar1))
					{
						func_120(unk_0xDF35170AEEFB473B(iVar1), 0);
					}
				}
			}
			iVar2++;
		}
	}
}

void func_120(int iParam0, bool bParam1)
{
	if (iParam0 == func_16())
	{
		return;
	}
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		return;
	}
	if (!bParam1)
	{
		if (!unk_0xC80D31E4B587871C(Global_2520711, iParam0))
		{
			func_23(&(Global_2520712[iParam0 /*2*/]), 1, 0);
			unk_0x872F1C1F8587CCC7(&Global_2520711, iParam0);
		}
	}
	else if (unk_0xC80D31E4B587871C(Global_2520711, iParam0))
	{
		func_27(&(Global_2520712[iParam0 /*2*/]));
		unk_0x0EE72DB1CD8A3B86(&Global_2520711, iParam0);
	}
}

void func_121()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((func_15(unk_0x9EB17624F44A8DA4(), 1, 1) && func_93(unk_0x9EB17624F44A8DA4())) && Global_1595543 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = false;
		iVar3 = 0;
		while (iVar3 < 11)
		{
			iVar2 = iVar3 + 179;
			func_123(iVar2, &iVar1, 1);
			if (iVar1 >= 0 && !func_122(Global_1320310[iVar1 /*141*/].f_66))
			{
				bVar0 = true;
				iVar3 = 11;
			}
			iVar3++;
		}
		if (bVar0)
		{
			iLocal_135 = 1;
			Global_1678686 = 1;
			Global_1664856 = 1;
		}
		else if (iLocal_135)
		{
			iLocal_135 = 0;
			if (func_63(&uLocal_133))
			{
				if (func_22(&uLocal_133, 2000, 1))
				{
					Global_1678686 = 0;
				}
			}
			else
			{
				Global_1678686 = 0;
			}
			Global_1664856 = 0;
		}
	}
	else if (iLocal_135)
	{
		iLocal_135 = 0;
		if (func_63(&uLocal_133))
		{
			if (func_22(&uLocal_133, 2000, 1))
			{
				Global_1678686 = 0;
			}
		}
		else
		{
			Global_1678686 = 0;
		}
		Global_1664856 = 0;
	}
}

int func_122(int iParam0)
{
	if ((unk_0x849A8CFD71854E02(iParam0) && !iParam0 == joaat("avenger")) && !iParam0 == joaat("thruster"))
	{
		return 0;
	}
	if ((unk_0xF9DDB1C0875FD9E0(iParam0) && !iParam0 == joaat("avenger")) && !iParam0 == joaat("thruster"))
	{
		return 0;
	}
	return 1;
}

void func_123(int iParam0, var uParam1, bool bParam2)
{
	if (Global_262145.f_9507)
	{
		*uParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*uParam1 = (Global_1664862[iParam0] - 1);
		if (bParam2)
		{
			if ((unk_0x4B64A8D052027742() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*uParam1 = -1;
	}
}

void func_124()
{
	if ((unk_0x8F38E94BBF3404CD(joaat("appmpjoblistnew")) > 0 && unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4()) > 0) && func_125())
	{
		if (unk_0xE8C126B7ADBB9D63(2, 176))
		{
			iLocal_224++;
		}
		if (unk_0xE8C126B7ADBB9D63(2, 177))
		{
			iLocal_224 = (iLocal_224 - 1);
		}
		if (iLocal_224 < 0)
		{
			iLocal_224 = 0;
		}
		if (iLocal_224 >= 2)
		{
			unk_0xB926B9A87AB986E6(unk_0x9EB17624F44A8DA4(), 0, 0);
		}
	}
	else if (iLocal_224 != 0)
	{
		iLocal_224 = 0;
	}
}

int func_125()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2391097[iVar0 /*75*/].f_72 && !unk_0xC80D31E4B587871C(Global_2391097[iVar0 /*75*/].f_5, 4))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_126()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x4916190900E76373())
	{
		if (func_22(&uLocal_171, 1000, 0))
		{
			func_27(&uLocal_171);
			if (func_15(unk_0x9EB17624F44A8DA4(), 1, 1))
			{
				iVar0 = -1;
				iVar1 = unk_0x1ACD6691B9C9AA46(unk_0xFC1458A37D98B502());
				if (iVar1 != 0)
				{
					iVar0 = iVar1;
					if (iVar0 == 168961)
					{
						if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
						{
							if (unk_0xA0BF73C5030D3F60(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)))
							{
								unk_0xC598A9BBD8271F11(unk_0xFC1458A37D98B502(), -1396.177f, -588.7288f, 29.2962f);
							}
							else
							{
								unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), -1396.177f, -588.7288f, 29.2962f, 0, 0, 0, 1);
							}
						}
						else
						{
							unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), -1396.177f, -588.7288f, 29.2962f, 0, 0, 0, 1);
						}
						unk_0xE01CE1EBCD7EE551(unk_0xFC1458A37D98B502(), 0, 0);
					}
				}
			}
		}
	}
}

void func_127()
{
	if (!func_110() && !func_142())
	{
		if ((func_136() && Global_4456448.f_122309 != 0) && func_135(Global_4456448.f_122309))
		{
			Global_4456448.f_122309 = 0;
		}
	}
	if (func_136() && Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_98 == 8)
	{
		if ((func_93(unk_0x9EB17624F44A8DA4()) && !func_134()) && !func_129())
		{
			unk_0x9D40987BB7758337(41, 0, 0);
		}
	}
	if (!func_110() && !func_142())
	{
		if (((func_128() || Global_1669468) || unk_0x9A4EAADB45DA07DB()) || Global_1677782)
		{
			Global_4456448.f_122309 = 0;
		}
	}
}

var func_128()
{
	return Global_2447174.f_643;
}

int func_129()
{
	if (((func_133() || func_132()) || func_131()) || func_130())
	{
		return 1;
	}
	return 0;
}

bool func_130()
{
	return unk_0xC80D31E4B587871C(Global_2447174, 1);
}

bool func_131()
{
	return unk_0xC80D31E4B587871C(Global_2447174, 2);
}

bool func_132()
{
	return unk_0xC80D31E4B587871C(Global_2447174, 20);
}

var func_133()
{
	return Global_2447174.f_586;
}

bool func_134()
{
	return unk_0xC80D31E4B587871C(Global_2447174.f_3, 4);
}

int func_135(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_4997[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_136()
{
	if ((((((((((Global_1312756 == 22 || Global_1312756 == 27) || Global_1312756 == 21) || func_141()) || func_128()) || (Global_1669468 && !unk_0x4916190900E76373())) || (unk_0x9A4EAADB45DA07DB() && !unk_0x4916190900E76373())) || func_140()) || (func_139() && !unk_0x4916190900E76373())) || (func_138("SA_SHWR_OUT") && !unk_0x4916190900E76373())) || (func_137() && !Global_1678686))
	{
		return 1;
	}
	return 0;
}

bool func_137()
{
	return unk_0xC80D31E4B587871C(Global_2447174.f_2, 18);
}

var func_138(char* sParam0)
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	return unk_0x0683D2027E169355(0);
}

bool func_139()
{
	return unk_0x53C562FD2B9E3AB0() <= Global_17301.f_5745 + 100;
}

int func_140()
{
	if (((func_93(unk_0x9EB17624F44A8DA4()) && !Global_1678686) && Global_1677782) && !unk_0x4916190900E76373())
	{
		return 0;
	}
	if (Global_1677782 && !unk_0x4916190900E76373())
	{
		return 1;
	}
	return 0;
}

bool func_141()
{
	return unk_0xC80D31E4B587871C(Global_2447174.f_2, 12);
}

bool func_142()
{
	return Global_2447174.f_579;
}

void func_143()
{
	func_144();
}

void func_144()
{
	int iVar0;
	
	if (Global_1350936)
	{
		return;
	}
	func_348();
	if (!iLocal_169)
	{
		if (func_347(unk_0x9EB17624F44A8DA4(), 0))
		{
			iVar0 = 0;
			while (iVar0 < 5)
			{
				func_346(iVar0);
				iVar0++;
			}
			iLocal_169 = 1;
		}
	}
	else if (func_347(unk_0x9EB17624F44A8DA4(), 0))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			func_152(iVar0);
			iVar0++;
		}
		func_151();
	}
	else if (iLocal_169)
	{
		func_145();
		iLocal_169 = 0;
	}
}

void func_145()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_146(iVar0);
		iVar0++;
	}
	Global_1350920 = unk_0xE3CCAFB1555348DF();
}

void func_146(int iParam0)
{
	int iVar0;
	
	if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_160[iParam0 /*12*/] != 0 && Global_1350913[iParam0] != 0)
	{
		iVar0 = (unk_0xE3CCAFB1555348DF() - Global_1350913[iParam0]);
		if (iVar0 > 1000000)
		{
		}
		else
		{
			func_147(func_150(iParam0), iVar0, -1, 1, 0);
		}
	}
}

void func_147(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_148(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
	}
}

int func_148(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_149();
		if (iVar1 > -1)
		{
			Global_2522773 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2522773 = 1;
		}
	}
	return iVar0;
}

int func_149()
{
	return Global_1312736;
}

int func_150(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3939;
		
		case 1:
			return 3940;
		
		case 2:
			return 3941;
		
		case 3:
			return 3942;
		
		case 4:
			return 3943;
		
		case 5:
			return 5440;
		
		default:
	}
	return 3939;
}

void func_151()
{
	if (Global_1350920 == 0)
	{
		Global_1350920 = unk_0xE3CCAFB1555348DF();
	}
	else if ((unk_0xE3CCAFB1555348DF() - Global_1350920) >= 300)
	{
		func_145();
	}
}

void func_152(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_160[iParam0 /*12*/];
	iVar1 = func_345(iVar0);
	iVar2 = (unk_0xE3CCAFB1555348DF() - Global_1350913[iParam0]);
	if (((((iVar0 != 0 && Global_1350913[iParam0] != 0) && !func_344(iVar1)) && !func_336(iVar0)) && func_334(iVar0, unk_0x9EB17624F44A8DA4()) >= func_333(iVar1)) && iVar2 >= func_331(iVar0, iVar1))
	{
		if ((!func_39(unk_0x9EB17624F44A8DA4(), 1) && func_313()) && func_195(iVar0))
		{
			func_176(iVar0);
			func_175(iParam0);
			func_145();
			return;
		}
	}
	else if (func_334(iVar0, unk_0x9EB17624F44A8DA4()) < func_333(iVar1) || func_336(iVar0))
	{
		Global_1350913[iParam0] = 0;
	}
	else if (Global_1350913[iParam0] == 0 && !func_153(unk_0x9EB17624F44A8DA4(), iParam0, 1, 0))
	{
		func_346(iParam0);
	}
}

int func_153(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_174(iParam0, iParam1);
	if ((iParam0 != func_16() && func_173(iParam1)) && func_172(iParam0, iParam1))
	{
		bVar1 = true;
		if (bParam3)
		{
			if (func_169(iParam0, iVar0))
			{
				bVar1 = false;
			}
		}
		else if (func_165(iParam0, iVar0))
		{
			bVar1 = false;
		}
		if (func_164(iParam0, iVar0) <= 0 || Global_1350939[iParam1])
		{
			bVar1 = false;
		}
		if (bParam2)
		{
			if (!func_163(iParam0, iParam1))
			{
				bVar1 = false;
			}
		}
		else if (func_161(iParam0, iVar0) < 1)
		{
			bVar1 = false;
		}
		if (func_156(iVar0, iParam0))
		{
			bVar1 = false;
		}
		if (iParam1 == 5)
		{
			if (Global_262145.f_20373)
			{
				if (!func_44(iParam0))
				{
					return !bVar1;
				}
			}
		}
		else if (Global_262145.f_17800)
		{
			if (!func_154(iParam0))
			{
				bVar1 = false;
			}
		}
		return !bVar1;
	}
	return 0;
}

bool func_154(int iParam0)
{
	return func_155(iParam0, 1);
}

int func_155(int iParam0, int iParam1)
{
	if (iParam0 != func_16())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_16())
		{
			if (Global_1627537[iParam0 /*532*/].f_11 == iParam0 && Global_1627537[iParam0 /*532*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_156(int iParam0, int iParam1)
{
	struct<2> Var0;
	
	if (func_160(iParam0))
	{
		return func_38(iParam1) == 225;
	}
	if (func_158(iParam1))
	{
		Var0 = { func_157(iParam1) };
		if (Var0.f_0 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

struct<2> func_157(int iParam0)
{
	return Global_1627537[iParam0 /*532*/].f_11.f_188;
}

bool func_158(int iParam0)
{
	return func_159(func_38(iParam0));
}

int func_159(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

bool func_160(int iParam0)
{
	return func_345(iParam0) == 5;
}

int func_161(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_16())
	{
		return 0;
	}
	if (func_162(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/].f_4;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_162(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_163(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = func_174(iParam0, iParam1);
	iVar2 = func_345(iVar1);
	switch (iVar2)
	{
		case 1:
			if (func_161(iParam0, iVar1) > 8)
			{
				iVar0 = 1;
			}
			break;
		
		case 3:
			if (func_161(iParam0, iVar1) > 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 4:
			if (func_161(iParam0, iVar1) > 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 0:
			if (func_161(iParam0, iVar1) > 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (func_161(iParam0, iVar1) > 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 5:
			if (func_161(iParam0, iVar1) > 1)
			{
				iVar0 = 1;
			}
			break;
	}
	return iVar0;
}

int func_164(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_16())
	{
		return 0;
	}
	if (func_162(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_165(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_16() && func_168(iParam0, iParam1))
	{
		iVar0 = func_167(iParam0, iParam1);
		if (func_173(iVar0))
		{
			return Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/].f_1 >= func_166(iParam1);
		}
	}
	return 0;
}

int func_166(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_262145.f_17760;
		
		case 1:
			return Global_262145.f_17768;
		
		case 3:
			return Global_262145.f_17776;
		
		case 5:
			return Global_262145.f_17784;
		
		case 4:
			return Global_262145.f_17792;
		
		case 7:
			return Global_262145.f_17760;
		
		case 6:
			return Global_262145.f_17768;
		
		case 8:
			return Global_262145.f_17776;
		
		case 10:
			return Global_262145.f_17784;
		
		case 9:
			return Global_262145.f_17792;
		
		case 12:
			return Global_262145.f_17760;
		
		case 11:
			return Global_262145.f_17768;
		
		case 13:
			return Global_262145.f_17776;
		
		case 15:
			return Global_262145.f_17784;
		
		case 14:
			return Global_262145.f_17792;
		
		case 17:
			return Global_262145.f_17760;
		
		case 16:
			return Global_262145.f_17768;
		
		case 18:
			return Global_262145.f_17776;
		
		case 20:
			return Global_262145.f_17784;
		
		case 19:
			return Global_262145.f_17792;
		
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
			return Global_262145.f_20351;
		
		default:
	}
	return 0;
}

int func_167(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_162(iParam1) && iParam0 != func_16())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_168(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_162(iParam1) && iParam0 != func_16())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_169(int iParam0, int iParam1)
{
	return func_171(iParam0, iParam1) >= func_170(iParam1);
}

int func_170(int iParam0)
{
	switch (iParam0)
	{
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
			return Global_262145.f_20367;
		
		default:
	}
	return 0;
}

int func_171(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_16())
	{
		return 0;
	}
	if (func_162(iParam1) && func_160(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return Global_1595693[iParam0 /*680*/].f_266.f_233;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_172(int iParam0, int iParam1)
{
	if (iParam0 != func_16() && func_168(iParam0, func_174(iParam0, iParam1)))
	{
		return Global_1595693[iParam0 /*680*/].f_266.f_160[iParam1 /*12*/].f_6;
	}
	return 0;
}

bool func_173(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

int func_174(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_16())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_162(Global_1595693[iParam0 /*680*/].f_266.f_160[iParam1 /*12*/]))
	{
		uVar0 = Global_1595693[iParam0 /*680*/].f_266.f_160[iParam1 /*12*/];
	}
	return uVar0;
}

void func_175(int iParam0)
{
	Global_1350913[iParam0] = unk_0xE3CCAFB1555348DF();
	func_147(func_150(iParam0), 0, -1, 1, 0);
}

void func_176(int iParam0)
{
	int iVar0;
	
	iVar0 = func_194(iParam0);
	if (iVar0 == 5)
	{
		func_182(227, iParam0);
	}
	else
	{
		func_180(191, iParam0, -1);
	}
	func_177(iVar0, 0);
}

void func_177(int iParam0, int iParam1)
{
	if (!func_173(iParam0))
	{
		return;
	}
	func_178(func_179(iParam0), iParam1, -1, 1);
	Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_160[iParam0 /*12*/].f_6 = iParam1;
}

int func_178(int iParam0, var uParam1, int iParam2, int iParam3)
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
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	
	if (iParam2 == -1)
	{
		iParam2 = func_149();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0xA7C33AF584635A56((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xDBE4A47179904C7B((iParam0 - 0)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar2, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0xA7C33AF584635A56((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xDBE4A47179904C7B((iParam0 - 192)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar3, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0xA7C33AF584635A56((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xDBE4A47179904C7B((iParam0 - 513)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar4, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0xA7C33AF584635A56((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xDBE4A47179904C7B((iParam0 - 705)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar5, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0x88B5FB6273C3123E((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xDBE4A47179904C7B((iParam0 - 3111)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar6, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0x88B5FB6273C3123E((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xDBE4A47179904C7B((iParam0 - 2919)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar7, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x7CD64EB2C84F32FF((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xDBE4A47179904C7B((iParam0 - 4207)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar8, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x7CD64EB2C84F32FF((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xDBE4A47179904C7B((iParam0 - 4335)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar9, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x7CD64EB2C84F32FF((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xDBE4A47179904C7B((iParam0 - 6029)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar10, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x7CD64EB2C84F32FF((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xDBE4A47179904C7B((iParam0 - 7385)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar11, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x7CD64EB2C84F32FF((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xDBE4A47179904C7B((iParam0 - 7321)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar12, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x7CD64EB2C84F32FF((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xDBE4A47179904C7B((iParam0 - 9361)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar13, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x7CD64EB2C84F32FF((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xDBE4A47179904C7B((iParam0 - 15369)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar14, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x7CD64EB2C84F32FF((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xDBE4A47179904C7B((iParam0 - 15562)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar15, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x7CD64EB2C84F32FF((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xDBE4A47179904C7B((iParam0 - 15946)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar16, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0x7CD64EB2C84F32FF((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0xDBE4A47179904C7B((iParam0 - 18098)) * 64);
		iVar0 = unk_0x4D199AD9B07EBC21(uVar17, uParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_179(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		case 5:
			return 15373;
		
		default:
	}
	return 7628;
}

void func_180(int iParam0, int iParam1, int iParam2)
{
	func_181(iParam1, iParam2);
	func_182(iParam0, iParam1);
}

void func_181(var uParam0, var uParam1)
{
	Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_188 = uParam0;
	Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_188.f_1 = uParam1;
}

void func_182(int iParam0, int iParam1)
{
	if (func_193())
	{
		if (!func_191(unk_0x9EB17624F44A8DA4(), 0))
		{
			func_190(iParam0);
			func_183(iParam0, func_187(1, 1), func_186(), func_185(), func_184(), iParam1);
		}
	}
}

void func_183(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	struct<7> Var0;
	
	Var0.f_0 = 193462843;
	Var0.f_1 = unk_0x9EB17624F44A8DA4();
	Var0.f_2 = uParam0;
	Var0.f_3 = uParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = uParam4;
	Var0.f_6 = uParam5;
	if (!iParam1 == 0)
	{
		unk_0x5A26F0BDEE9F8260(1, &Var0, 7, iParam1);
	}
}

var func_184()
{
	return Global_2512808.f_4856.f_159;
}

var func_185()
{
	return Global_2512808.f_4856.f_158;
}

var func_186()
{
	return Global_2512808.f_4856.f_157;
}

int func_187(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xF6A72924028F588B(iVar1);
		if (func_15(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x9EB17624F44A8DA4() || iParam0)
			{
				if (bParam1)
				{
					unk_0x872F1C1F8587CCC7(&uVar0, iVar1);
				}
				else if (!func_188(iVar2, 0))
				{
					unk_0x872F1C1F8587CCC7(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_188(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_189(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1595693[iParam0 /*680*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x552F39AE86E07792(iParam0))
		{
			bVar0 = unk_0x917EE18109C5ACEA(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_189(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_149();
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

void func_190(var uParam0)
{
	Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_32 = uParam0;
}

int func_191(int iParam0, int iParam1)
{
	if (func_39(iParam0, 0))
	{
		return func_192(Global_1627537[iParam0 /*532*/].f_11.f_33) == iParam1;
	}
	return 0;
}

int func_192(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

bool func_193()
{
	return func_44(unk_0x9EB17624F44A8DA4());
}

int func_194(int iParam0)
{
	int iVar0;
	
	if (func_162(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_160[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_195(int iParam0)
{
	if (func_160(iParam0))
	{
		return func_196(unk_0x9EB17624F44A8DA4(), 227, 0);
	}
	return func_196(unk_0x9EB17624F44A8DA4(), 191, 0);
}

bool func_196(int iParam0, int iParam1, bool bParam2)
{
	return func_197(iParam0, iParam1, bParam2) == -1;
}

int func_197(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!func_226(func_296(iParam1, -1, -1, -1), func_272(iParam1, -1, 1, -1, -1, iParam0), func_235(iParam1, -1, -1, -1, -1, iParam0), 0, 1))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (func_154(iParam0))
	{
		if (iParam1 == 153)
		{
			iVar0 = 211;
		}
	}
	if (func_224(iParam1) >= func_223(iVar0))
	{
		return 5;
	}
	if (func_222(iParam0))
	{
		return 6;
	}
	if (func_218(iParam0))
	{
		return 7;
	}
	if (func_192(iParam1) == 1)
	{
		if ((func_217() || func_216()) || ((!bParam2 && func_215() != 0) && func_192(iParam1) == 1))
		{
			return 2;
		}
	}
	else if (func_192(iParam1) == 2)
	{
		if (!func_212(iParam1))
		{
			return 3;
		}
		if (!bParam2)
		{
			if (Global_1627537[iParam0 /*532*/].f_11.f_34 != func_16())
			{
				return 9;
			}
		}
		if (func_211(iParam0))
		{
			return 10;
		}
	}
	else if (func_209(iParam1))
	{
		if (func_208(iParam0) <= 0)
		{
			return 4;
		}
	}
	if (func_207(iParam1))
	{
		if (func_206())
		{
			return 13;
		}
		if (func_204())
		{
			return 12;
		}
	}
	if (func_208(iParam0) + 1 < func_203(iVar0))
	{
		return 4;
	}
	switch (iParam1)
	{
		case 157:
			break;
		
		case 152:
		case 164:
		case 173:
		case 170:
		case 201:
		case 200:
			if (!func_199(iParam0, 0))
			{
				return 1;
			}
			break;
		
		case 189:
			if (func_198(func_41(), 21))
			{
				return 0;
			}
			break;
	}
	return -1;
}

bool func_198(int iParam0, int iParam1)
{
	return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_223, iParam1);
}

int func_199(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0xF6A72924028F588B(iVar0);
		if (unk_0x552F39AE86E07792(iVar1))
		{
			if (!func_201(iVar1, iParam0, 1))
			{
				if (iParam1 || !func_200(iVar1, 31))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_200(int iParam0, int iParam1)
{
	return unk_0xC80D31E4B587871C(Global_1627537[iParam0 /*532*/].f_11.f_4, iParam1);
}

int func_201(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_16())
	{
		if (!bParam2)
		{
			if (func_202(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1627537[iParam0 /*532*/].f_11 != func_16())
		{
			return iParam1 == Global_1627537[iParam0 /*532*/].f_11;
		}
	}
	return 0;
}

int func_202(int iParam0, int iParam1)
{
	if (iParam1 != func_16())
	{
		if (iParam0 != func_16())
		{
			if (Global_1627537[iParam0 /*532*/].f_11 != func_16())
			{
				if (Global_1627537[iParam0 /*532*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_203(int iParam0)
{
	switch (iParam0)
	{
		case 180:
			return Global_262145.f_17485;
		
		case 183:
			return Global_262145.f_17493;
		
		case 185:
			return Global_262145.f_17502;
		
		case 182:
			return Global_262145.f_17513;
		
		case 186:
			return Global_262145.f_17522;
		
		case 195:
			return Global_262145.f_17540;
		
		case 198:
			return Global_262145.f_17550;
		
		case 197:
			return Global_262145.f_17562;
		
		case 207:
			return Global_262145.f_17570;
		
		case 209:
			return Global_262145.f_17582;
		
		case 208:
			return Global_262145.f_17590;
		
		case 201:
			return Global_262145.f_17623;
		
		case 211:
			return Global_262145.f_17691;
		
		case 193:
			return Global_262145.f_17714;
		
		case 205:
			return Global_262145.f_17732;
		
		case 189:
			return Global_262145.f_17697;
		
		case 216:
			return 2;
		
		case 220:
			return 2;
		
		default:
	}
	return 1;
}

int func_204()
{
	if (func_205())
	{
		return 1;
	}
	return Global_2447174.f_631;
}

bool func_205()
{
	return Global_1312814 == 10;
}

bool func_206()
{
	return Global_262145.f_14546;
}

int func_207(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_208(int iParam0)
{
	return Global_1627537[iParam0 /*532*/].f_11.f_19;
}

int func_209(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return func_210(iParam0, 0);
	return 0;
}

int func_210(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_211(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0xF6A72924028F588B(iVar0);
		if (unk_0x552F39AE86E07792(iVar1))
		{
			if ((Global_1627537[iParam0 /*532*/].f_11.f_34 != func_16() && Global_1627537[iParam0 /*532*/].f_11.f_34 == iVar1) && Global_1627537[iVar1 /*532*/].f_11.f_34 == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_212(int iParam0)
{
	switch (iParam0)
	{
		case 179:
			if (func_214() < 2)
			{
				return 0;
			}
			break;
		
		case 148:
			if (func_213() < 2)
			{
				return 0;
			}
			break;
		
		default:
			if (func_213() < 2)
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_213()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xF6A72924028F588B(iVar0);
		if (unk_0x552F39AE86E07792(iVar2))
		{
			if (func_44(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_214()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xF6A72924028F588B(iVar0);
		if (unk_0x552F39AE86E07792(iVar2))
		{
			if (func_154(iVar2))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_215()
{
	return Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_97;
}

bool func_216()
{
	return Global_1644563.f_11.f_144 != -1;
}

bool func_217()
{
	return Global_1644563.f_11.f_143 != -1;
}

int func_218(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_219())
	{
		iVar1 = Global_1627537[iParam0 /*532*/].f_11.f_11[iVar0];
		if (iVar1 != func_16())
		{
			if (unk_0x552F39AE86E07792(iVar1))
			{
				if (func_222(iVar1))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_219()
{
	return (func_220() - 1);
}

int func_220()
{
	return func_221(unk_0x9EB17624F44A8DA4());
}

int func_221(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1627537[iParam0 /*532*/].f_11;
	if (iVar0 != func_16() && Global_1627537[iVar0 /*532*/].f_11.f_409 == 1)
	{
		return 8;
	}
	return 4;
}

int func_222(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_1627537[iVar0 /*532*/].f_1, 0);
	}
	return 0;
}

int func_223(int iParam0)
{
	switch (iParam0)
	{
		case 162:
			return Global_262145.f_11906;
		
		case 155:
			return Global_262145.f_11931;
		
		case 153:
			return Global_262145.f_11895;
		
		case 163:
			return Global_262145.f_11871;
		
		case 160:
			return Global_262145.f_11884;
		
		case 154:
			return Global_262145.f_11941;
		
		case 169:
			return 1;
		
		case 171:
			return Global_262145.f_14373;
		
		case 172:
			return Global_262145.f_14392;
		
		case 148:
			return Global_262145.f_17598;
		
		case 179:
			return Global_262145.f_17606;
		
		case 201:
			return Global_262145.f_17620;
		
		case 200:
			return Global_262145.f_17660;
		
		case 211:
			return Global_262145.f_17689;
		
		case 194:
			return Global_262145.f_17701;
		
		case 193:
			return Global_262145.f_17712;
		
		case 210:
			return Global_262145.f_17724;
		
		case 205:
			return Global_262145.f_17730;
		
		case 199:
			return Global_262145.f_17743;
		
		default:
	}
	return 2147483647;
}

int func_224(int iParam0)
{
	return Global_1644563.f_11.f_147[func_225(iParam0)];
}

int func_225(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return 0;
		
		case 152:
			return 1;
		
		case 151:
			return 2;
		
		case 142:
			return 3;
		
		case 157:
			return 4;
		
		case 159:
			return 5;
		
		case 164:
			return 6;
		
		case 160:
			return 7;
		
		case 162:
			return 8;
		
		case 163:
			return 9;
		
		case 154:
			return 10;
		
		case 155:
			return 11;
		
		case 153:
			return 12;
		
		case 166:
			return 13;
		
		case 167:
			return 14;
		
		case 168:
			return 15;
		
		case 169:
			return 16;
		
		case 170:
			return 17;
		
		case 171:
			return 18;
		
		case 172:
			return 19;
		
		case 173:
			return 20;
		
		case 178:
			return 21;
		
		case 179:
			return 22;
		
		case 180:
			return 23;
		
		case 182:
			return 25;
		
		case 183:
			return 26;
		
		case 185:
			return 27;
		
		case 186:
			return 28;
		
		case 189:
			return 31;
		
		case 190:
			return 32;
		
		case 191:
			return 33;
		
		case 192:
			return 34;
		
		case 193:
			return 35;
		
		case 194:
			return 36;
		
		case 195:
			return 37;
		
		case 197:
			return 39;
		
		case 198:
			return 40;
		
		case 199:
			return 41;
		
		case 200:
			return 42;
		
		case 201:
			return 43;
		
		case 205:
			return 44;
		
		case 207:
			return 45;
		
		case 208:
			return 46;
		
		case 209:
			return 47;
		
		case 210:
			return 48;
		
		case 214:
			return 49;
		
		case 215:
			return 50;
		
		case 216:
			return 51;
		
		case 217:
			return 52;
		
		case 218:
			return 53;
		
		case 219:
			return 54;
		
		case 220:
			return 55;
		
		case 221:
			return 56;
		
		case 188:
			return 30;
		
		case 225:
			return 57;
		
		case 226:
			return 58;
		
		case 227:
			return 59;
		
		case 229:
			return 60;
		
		case 230:
			return 61;
		
		case 233:
			return 62;
		
		default:
	}
	return -1;
}

int func_226(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if ((func_234(iParam0, bParam3, bParam4) || func_233(iParam1, bParam3, bParam4)) || func_227(iParam2, bParam3, bParam4))
	{
		return 1;
	}
	return 0;
}

int func_227(int iParam0, bool bParam1, bool bParam2)
{
	return func_228(2, iParam0, 0, bParam1, bParam2);
}

int func_228(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xC80D31E4B587871C(Global_1369394, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_232(iParam0) - func_231(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_231(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_232(iParam0) - func_230(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_231(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_232(iParam0) - func_231(iParam0, 1));
		}
		if (!bParam4 && Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] != 3)
		{
			iVar1 = (iVar1 - func_229(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_229(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_230(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1369394.f_1;
			break;
		
		case 1:
			return Global_1369394.f_2;
			break;
		
		case 2:
			return Global_1369394.f_3;
			break;
	}
	return 0;
}

int func_231(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x9EB17624F44A8DA4();
	switch (iParam0)
	{
		case 0:
			if (!unk_0x8C504A60C2F379BD())
			{
				return Global_2422736[iVar0 /*420*/].f_224;
			}
			else
			{
				return unk_0x3930B0AA9F6A0C8C(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!unk_0x8C504A60C2F379BD())
			{
				return Global_2422736[iVar0 /*420*/].f_225;
			}
			else
			{
				return unk_0x9E883378D9B4735D(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!unk_0x8C504A60C2F379BD())
			{
				return Global_2422736[iVar0 /*420*/].f_226;
			}
			else
			{
				return unk_0x5A9A3A92F1F0B182(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_232(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1369402;
			break;
		
		case 1:
			return Global_1369403;
			break;
		
		case 2:
			return Global_1369404;
			break;
	}
	return 0;
}

int func_233(int iParam0, bool bParam1, bool bParam2)
{
	return func_228(1, iParam0, 0, bParam1, bParam2);
}

int func_234(int iParam0, bool bParam1, bool bParam2)
{
	return func_228(0, iParam0, 0, bParam1, bParam2);
}

int func_235(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 159:
		case 142:
			return 1;
		
		case 167:
			return func_271(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 9;
		
		case 173:
			return 0;
		
		case 168:
			return 5;
		
		case 178:
		case 188:
			return func_269(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_263(iParam1, iParam2, iParam3, iParam4);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_251(iParam1, iParam2, iParam3, unk_0xF6A72924028F588B(uParam5), iParam4);
		
		case 233:
			return func_244(iParam1, iParam2, iParam3, unk_0xF6A72924028F588B(iParam5), iParam4);
		
		case 179:
			return 0;
		
		case 182:
			return 7;
		
		case 185:
			return 6;
		
		case 186:
			return 2;
		
		case 180:
			return 9;
		
		case 190:
			return 8;
		
		case 191:
			return 0;
		
		case 192:
			return func_236(iParam1, iParam2);
		
		case 193:
			return 0;
		
		case 194:
			return 0;
		
		case 199:
			return 0;
		
		case 195:
			return 9;
		
		case 201:
			return 16;
		
		case 198:
			return 12;
		
		case 205:
			return 8;
		
		case 207:
			return 0;
		
		case 208:
			return 15;
		
		case 209:
			return 0;
		
		case 210:
			return 0;
		
		case 214:
			return 9;
		
		case 215:
			return 0;
		
		case 216:
			return 16;
		
		case 217:
			return 0;
		
		case 218:
			return 0;
		
		case 219:
			return 0;
		
		case 220:
			return 30;
		
		case 221:
			return 30;
		
		default:
	}
	return 0;
}

int func_236(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_243(iParam0, iParam1);
	if (!func_242(iParam0))
	{
		iVar0 = (iVar0 + func_237(iParam0, func_241() + 1));
	}
	if (iParam0 == 14 || ((((func_242(iParam0) && iParam0 != 9) && iParam0 != 16) && iParam0 != 7) && iParam0 != 17))
	{
		iVar0 = (iVar0 + func_237(iParam0, func_241() + 1));
	}
	if (iParam0 == 7)
	{
		iVar0 += 6;
	}
	if (iParam0 == 17)
	{
		iVar0 += 2;
	}
	return iVar0;
}

int func_237(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_240(iParam0))
	{
		iVar0 = 1;
	}
	else
	{
		if (iVar0 == 0)
		{
			iVar0 = iParam1;
			iVar1 = func_239(iParam0, iParam1);
			iVar2 = func_238(iParam0);
			if (iVar0 > iVar1)
			{
				iVar0 = iVar1;
			}
			else if (iVar0 < iVar2)
			{
				iVar0 = iVar2;
			}
		}
		if (func_242(iParam0))
		{
			if (iVar0 > Global_262145.f_17236)
			{
				iVar0 = Global_262145.f_17236;
			}
		}
		else
		{
			if (iVar0 < Global_262145.f_17235)
			{
				iVar0 = Global_262145.f_17235;
			}
			if (iVar0 > Global_262145.f_17234)
			{
				iVar0 = Global_262145.f_17234;
			}
		}
	}
	return iVar0;
}

int func_238(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_17273;
		
		case 10:
			return Global_262145.f_17298;
		
		default:
	}
	return 1;
}

int func_239(int iParam0, int iParam1)
{
	if (func_242(iParam0))
	{
		if (iParam1 >= Global_262145.f_17237)
		{
			return 2;
		}
		return 1;
	}
	switch (iParam0)
	{
		case 5:
			return Global_262145.f_17274;
		
		case 10:
			return Global_262145.f_17299;
		
		default:
	}
	return 8;
}

int func_240(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

int func_241()
{
	if (func_41() == func_16())
	{
		return 0;
	}
	return func_208(func_41());
}

int func_242(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 32:
		case 0:
		case 2:
		case 4:
		case 18:
		case 6:
		case 5:
		case 10:
		case 12:
		case 13:
			return 0;
		
		default:
	}
	return 1;
}

int func_243(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 32:
			switch (iParam1)
			{
				case 195:
					return 3;
				
				case 196:
					return 3;
				
				case 197:
					return 3;
				
				case 198:
					return 3;
				
				case 199:
					return 3;
				
				default:
			}
			break;
		
		case 37:
			switch (iParam1)
			{
				case 231:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					return 9;
				
				case 8:
					return 8;
				
				case 9:
					return 7;
				
				case 10:
					return 4;
				
				case 11:
					return 5;
				
				case 12:
					return 6;
				
				default:
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					return 10;
				
				case 2:
					return 10;
				
				case 3:
					return 8;
				
				case 4:
					return 10;
				
				case 5:
					return 10;
				
				case 6:
					return 10;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					return 10;
				
				case 14:
					return 8;
				
				case 15:
					return 8;
				
				case 16:
					return 8;
				
				case 17:
					return 10;
				
				case 18:
					return 9;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					return 5;
				
				case 20:
					return 8;
				
				case 21:
					return 4;
				
				case 22:
					return 0;
				
				case 23:
					return 10;
				
				case 24:
					return 1;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 25:
					return 20;
				
				case 26:
					return 15;
				
				case 27:
					return 13;
				
				case 28:
					return 16;
				
				case 29:
					return 14;
				
				case 30:
					return 14;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					return 7;
				
				case 75:
					return 5;
				
				case 76:
					return 5;
				
				case 77:
					return 4;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 64:
					return 1;
				
				case 67:
					return 1;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					return 6;
				
				case 39:
					return 6;
				
				case 40:
					return 7;
				
				case 41:
					return 6;
				
				default:
			}
			break;
	}
	return 0;
}

int func_244(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = func_250(iParam0, iParam1, iParam2, iParam4);
	if (!func_249(iParam0))
	{
		if (iParam3 != func_16())
		{
			iVar0 = (iVar0 + func_246(iParam0, func_208(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_245(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_245(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 5:
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

int func_246(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (iParam4 > 0)
	{
		return iParam4;
	}
	switch (iParam0)
	{
		case 5:
		case 7:
		case 6:
		case 4:
		case 10:
			iVar0 = 1;
			break;
		
		case 8:
			iVar0 = 2;
			break;
		
		case 3:
		case 2:
			iVar0 = 4;
			break;
		
		default:
			if (func_249(iParam0))
			{
				iVar0 = 2;
			}
			else
			{
				iVar0 = 1;
			}
			break;
	}
	if (iVar0 > func_248(iParam0))
	{
		iVar0 = func_248(iParam0);
	}
	else if (iVar0 < func_247(iParam0))
	{
		iVar0 = func_247(iParam0);
	}
	return iVar0;
}

int func_247(int iParam0)
{
	return 1;
}

int func_248(int iParam0)
{
	return 4;
}

int func_249(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_250(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 5;
		
		case 3:
			iVar0 = 1;
			switch (iParam1)
			{
				case 26:
					return iVar0 + 1;
				
				case 34:
					return iVar0 + 1;
				
				default:
			}
			return iVar0;
			break;
		
		case 4:
			return 1;
		
		case 5:
			return 1;
		
		case 8:
			return 7;
		
		case 12:
			switch (iParam1)
			{
				case 125:
					return 6;
				
				default:
			}
			return 2;
			break;
		
		case 9:
			return 0;
		
		case 13:
			return 1;
		
		case 10:
			return 12;
	}
	return 0;
}

int func_251(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = func_262(iParam0, iParam1, iParam2, iParam4);
	if (!func_261(iParam0))
	{
		if (iParam3 != func_16())
		{
			iVar0 = (iVar0 + func_253(iParam0, func_208(iParam3) + 1, iParam3, -1, iParam2));
		}
	}
	if (func_252(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_252(int iParam0)
{
	switch (iParam0)
	{
		case 23:
			return 1;
		
		default:
	}
	return 0;
}

int func_253(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam4 > 0)
	{
		return iParam4;
	}
	if (func_260(iParam0))
	{
		iVar1 = func_259(iParam3);
		switch (iParam0)
		{
			case 21:
				iVar0 = 1;
				break;
			
			case 23:
				switch (iVar1)
				{
					case 1:
						iVar0 = 1;
						break;
					
					case 2:
						iVar0 = 2;
						break;
					
					case 3:
						iVar0 = 2;
						break;
				}
				break;
			
			case 15:
				switch (iVar1)
				{
					case 1:
						iVar0 = 3;
						break;
					
					case 2:
						iVar0 = 6;
						break;
					
					case 3:
						iVar0 = 8;
						break;
				}
				break;
			
			case 20:
			case 24:
			case 22:
			case 16:
			case 17:
				switch (iVar1)
				{
					case 1:
						iVar0 = 1;
						break;
					
					case 2:
						iVar0 = 2;
						break;
					
					case 3:
						iVar0 = 3;
						break;
				}
				break;
			
			case 25:
				switch (iVar1)
				{
					case 1:
						iVar0 = 2;
						break;
					
					case 2:
						iVar0 = 3;
						break;
					
					case 3:
						iVar0 = 3;
						break;
				}
				break;
		}
		return iVar0;
	}
	else if (func_258(iParam0))
	{
		iVar0 = 1;
		return iVar0;
	}
	else
	{
		iVar0 = iParam1;
		if (iVar0 > func_257(iParam2))
		{
			iVar0 = func_257(iParam2);
		}
	}
	if (iVar0 > func_255(iParam0))
	{
		iVar0 = func_255(iParam0);
	}
	else if (iVar0 < func_254(iParam0))
	{
		iVar0 = func_254(iParam0);
	}
	return iVar0;
}

int func_254(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 3;
		
		default:
	}
	return 1;
}

int func_255(int iParam0)
{
	if (!func_260(iParam0))
	{
		if (func_261(iParam0))
		{
			if (func_256(iParam0))
			{
				return 2;
			}
			return 3;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 21:
				return 1;
			
			case 23:
				return 2;
			
			case 15:
				return 9;
			
			default:
		}
		return 3;
	}
	return 4;
}

int func_256(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_257(int iParam0)
{
	if (iParam0 == func_16() || Global_1595693[iParam0 /*680*/].f_266.f_241 == 0)
	{
		return 50;
	}
	return (50 - Global_1595693[iParam0 /*680*/].f_266.f_241.f_3);
}

int func_258(int iParam0)
{
	switch (iParam0)
	{
		case 26:
			return 1;
		
		default:
	}
	return 0;
}

int func_259(int iParam0)
{
	if (iParam0 > 25)
	{
		return 3;
	}
	else if (iParam0 > 10)
	{
		return 2;
	}
	return 1;
}

int func_260(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return 1;
		
		default:
	}
	return 0;
}

int func_261(int iParam0)
{
	if (func_260(iParam0) || func_258(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_262(int iParam0, int iParam1, int iParam2, var uParam3)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		case 2:
			return 12;
		
		case 11:
			return 1;
		
		case 5:
			return 10;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					return 3;
				
				case 1:
					return 3;
				
				case 2:
					return 10;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 34:
					return 17;
				
				case 35:
					return 20;
				
				case 36:
					return 22;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 6:
					return 9;
				
				case 7:
					return 0;
				
				case 8:
					return 5;
				
				default:
			}
			break;
		
		case 0:
			switch (iParam2)
			{
				case 1:
					return 7;
				
				case 2:
					return 14;
				
				case 3:
					return 14;
				
				case 4:
					return 14;
				
				default:
			}
			break;
		
		case 8:
			return 2;
		
		case 23:
			return (2 * iParam2);
		
		case 24:
			return (2 * iParam2);
		
		case 26:
			return 2;
	}
	return 0;
}

int func_263(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_268(iParam0, iParam1, iParam2, iParam3);
	if (!func_267(iParam0))
	{
		iVar0 = (iVar0 + func_265(iParam0, func_241() + 1, -1, iParam2));
	}
	if (func_264(iParam0))
	{
		iVar0 = (iVar0 + iParam2);
	}
	return iVar0;
}

int func_264(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 12:
		case 6:
		case 14:
		case 15:
		case 16:
		case 17:
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

int func_265(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam3 > 0)
	{
		return iParam3;
	}
	if (func_266(iParam0))
	{
		if (iParam2 <= Global_262145.f_20503)
		{
			iVar0 = 1;
			if (iParam0 == 15)
			{
				iVar0 = 2;
			}
		}
		else if (iParam2 <= Global_262145.f_20504)
		{
			iVar0 = 2;
			if (iParam0 == 18)
			{
				iVar0 = 1;
			}
		}
		else
		{
			iVar0 = 3;
			if (iParam0 == 18)
			{
				iVar0 = 2;
			}
			else if (iParam0 == 19 || iParam0 == 2)
			{
				iVar0 = 4;
			}
		}
	}
	else if (iParam0 == 8)
	{
		if (iParam1 < 4)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else if (iParam0 == 0 || iParam0 == 20)
	{
		iVar0 = 1;
	}
	else if (func_267(iParam0))
	{
		if (iParam1 < Global_262145.f_20463)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 2;
		}
	}
	else
	{
		iVar0 = iParam1;
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_266(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

int func_267(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 6:
		case 7:
		case 10:
		case 11:
		case 12:
		case 14:
		case 15:
		case 16:
		case 17:
		case 19:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

int func_268(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
				
				case 1:
					return 6;
				
				case 2:
					return 8;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					return 0;
				
				case 4:
					return 0;
				
				case 5:
					return 0;
				
				case 6:
					return 0;
				
				case 7:
					return 0;
				
				case 8:
					return 0;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					return 0;
				
				case 10:
					return 0;
				
				case 11:
					return 0;
				
				case 12:
					return 0;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 14:
					return 10;
				
				case 15:
					return 12;
				
				case 13:
					return 2;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 16:
					return 0;
				
				case 17:
					return 0;
				
				case 18:
					return 0;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					return 15;
				
				case 20:
					return 15;
				
				case 21:
					return 11;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					return 10;
				
				case 23:
					return 7;
				
				case 24:
					return 6;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					return (6 + iParam2 * 2);
				
				case 26:
					return (7 + iParam2 * 2);
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					return 9;
				
				case 28:
					return 10;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					return 6;
				
				case 30:
					return 6;
				
				case 31:
					return 6;
				
				default:
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					return 8;
				
				case 33:
					return 8;
				
				case 34:
					return 8;
				
				default:
			}
			break;
		
		case 12:
			return 0;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					return 18;
				
				case 36:
					return 9;
				
				case 37:
					return 0;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam3)
			{
				case 0:
					return 9;
				
				case 1:
					return 16;
				
				case 2:
					return 6;
				
				case 3:
					return 3;
				
				case 4:
					return 9;
				
				case 5:
					return 6;
				
				case 6:
					return 6;
				
				case 7:
					return 3;
				
				case 8:
					return 3;
				
				case 9:
					return 3;
				
				case 10:
					return 0;
				
				case 11:
					return 9;
				
				case 12:
					return 3;
				
				default:
			}
			break;
		
		case 15:
			return iParam2;
		
		case 16:
			return 0;
		
		case 17:
			return 0;
		
		case 18:
			return 0;
		
		case 19:
			return 0;
		
		case 20:
			return 13;
	}
	return 0;
}

int func_269(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = func_270(iParam0, iParam1);
	if (iParam0 == 15)
	{
		iVar0++;
	}
	return iVar0;
}

int func_270(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 6:
			switch (iParam1)
			{
				case 18:
					return 9;
				
				case 19:
					return 7;
				
				case 20:
					return 8;
				
				default:
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					return 1;
				
				case 28:
					return 1;
				
				case 29:
					return 1;
				
				default:
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					return 2;
				
				case 22:
					return 2;
				
				case 23:
					return 2;
				
				default:
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					return 8;
				
				case 37:
					return 7;
				
				case 38:
					return 8;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 39:
					return 8;
				
				case 40:
					return 6;
				
				case 41:
					return 2;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					return 5;
				
				case 2:
					return 5;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					return 1;
				
				case 43:
					return 1;
				
				case 44:
					return 1;
				
				default:
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					return 12;
				
				case 46:
					return 12;
				
				case 47:
					return 12;
				
				default:
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					return 7;
				
				case 49:
					return 7;
				
				case 50:
					return 7;
				
				default:
			}
			break;
		
		case 12:
			return 3;
	}
	return 0;
}

int func_271(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 0;
		
		case 6:
			return 0;
		
		case 7:
			return 0;
		
		case 8:
			return 0;
		
		case 9:
			return 0;
		
		case 10:
			return 0;
		
		case 11:
			return 0;
		
		case 12:
			return 3;
		
		case 13:
			return 0;
		
		case 14:
			return 0;
		
		case 15:
			return 0;
		
		case 16:
			return 1;
		
		case 17:
			return 3;
		
		case 19:
			return 0;
		
		case 18:
			return 0;
		
		default:
	}
	return 1;
}

int func_272(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 157:
			return 4;
		
		case 167:
			return func_295(iParam1);
		
		case 170:
			return 2;
		
		case 171:
			return 0;
		
		case 172:
			return 5;
		
		case 173:
			return 14;
		
		case 168:
			return 8;
		
		case 178:
		case 188:
			return func_291(iParam1, iParam3, iParam4);
		
		case 225:
		case 226:
			return func_287(iParam1, iParam3, iParam4, 0, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_281(iParam1, iParam3, iParam4, unk_0xF6A72924028F588B(uParam5), 0, 0, 0);
		
		case 233:
			return func_274(iParam1, iParam3, iParam4, unk_0xF6A72924028F588B(iParam5), 0, 0, 0);
			return 6;
		
		case 190:
			return 18;
		
		case 191:
			return 0;
		
		case 192:
			return func_273(iParam1, iParam3);
		
		case 179:
			return 0;
		
		case 183:
			return 5;
		
		case 182:
			return 14;
		
		case 185:
			return 24;
		
		case 186:
			return 13;
		
		case 180:
			return 6;
		
		case 193:
			return 6;
		
		case 194:
			return 0;
		
		case 197:
			return 4;
		
		case 199:
			return 0;
		
		case 195:
			return 20;
		
		case 201:
			return 0;
		
		case 198:
			return 8;
		
		case 205:
			return 1;
		
		case 207:
			return 8;
		
		case 208:
			return 2;
		
		case 209:
			return 6;
		
		case 210:
			return 0;
		
		case 214:
			return 5;
		
		case 215:
			return 11;
		
		case 216:
			return 8;
		
		case 217:
			return 24;
		
		case 218:
			return 23;
		
		case 219:
			return 1;
		
		case 220:
			return 4;
		
		case 221:
			return 4;
		
		default:
	}
	return 0;
}

int func_273(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 20:
			iVar0 = iVar0;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					iVar0 += 7;
					break;
				
				case 2:
					iVar0 += 6;
					break;
				
				case 3:
					iVar0 += 4;
					break;
				
				case 4:
					iVar0 += 2;
					break;
				
				case 5:
					iVar0 += 3;
					break;
				
				case 6:
					iVar0 += 2;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					iVar0 += 4;
					break;
				
				case 8:
					iVar0 += 4;
					break;
				
				case 9:
					iVar0 += 2;
					break;
				
				case 10:
					iVar0 += 2;
					break;
				
				case 11:
					iVar0 += 2;
					break;
				
				case 12:
					iVar0 += 4;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					iVar0 += 2;
					break;
				
				case 14:
					iVar0 += 4;
					break;
				
				case 15:
					iVar0 += 6;
					break;
				
				case 16:
					iVar0 += 3;
					break;
				
				case 17:
					iVar0 += 3;
					break;
				
				case 18:
					iVar0 += 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 4;
					break;
				
				case 21:
					iVar0 += 6;
					break;
				
				case 22:
					iVar0 += 2;
					break;
				
				case 23:
					iVar0 += 4;
					break;
				
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 4;
					break;
				
				case 21:
					iVar0 += 6;
					break;
				
				case 22:
					iVar0 += 2;
					break;
				
				case 23:
					iVar0 += 4;
					break;
				
				case 24:
					iVar0 += 5;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 31:
					iVar0 += 5;
					break;
				
				case 32:
					iVar0 += 2;
					break;
				
				case 33:
					iVar0 += 3;
					break;
				
				case 34:
					iVar0 += 5;
					break;
				
				case 35:
					iVar0 += 5;
					break;
				
				case 36:
					iVar0 += 5;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 68:
					iVar0 = iVar0;
					break;
				
				case 69:
					iVar0 = iVar0;
					break;
				
				case 70:
					iVar0 = iVar0;
					break;
				
				case 71:
					iVar0 = iVar0;
					break;
				
				case 72:
					iVar0 = iVar0;
					break;
				
				case 73:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					iVar0++;
					break;
				
				case 75:
					iVar0++;
					break;
				
				case 76:
					iVar0++;
					break;
				
				case 77:
					iVar0++;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 78:
					iVar0 = iVar0;
					break;
				
				case joaat("mpsv_lp0_31"):
					iVar0 = iVar0;
					break;
				
				case 80:
					iVar0 = iVar0;
					break;
				
				case 81:
					iVar0 = iVar0;
					break;
				
				case 82:
					iVar0 = iVar0;
					break;
				
				case 83:
					iVar0 = iVar0;
					break;
				
				case 84:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 7:
			iVar0 += 4;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 62:
					iVar0 += 6;
					break;
				
				case 63:
					iVar0 += 6;
					break;
				
				case 64:
					iVar0 += 6;
					break;
				
				case 65:
					iVar0 += 6;
					break;
				
				case 66:
					iVar0 += 6;
					break;
				
				case 67:
					iVar0 += 6;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 85:
					iVar0 = iVar0;
					break;
				
				case 86:
					iVar0 = iVar0;
					break;
				
				case 87:
					iVar0 = iVar0;
					break;
				
				case 88:
					iVar0 = iVar0;
					break;
				
				case 89:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 90:
					iVar0 += 2;
					break;
				
				case 91:
					iVar0 += 2;
					break;
				
				case 92:
					iVar0 += 2;
					break;
				
				case 93:
					iVar0 += 2;
					break;
				
				case 94:
					iVar0 += 2;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 37:
					iVar0 += 3;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					iVar0 += 4;
					break;
				
				case 39:
					iVar0 += 4;
					break;
				
				case 40:
					iVar0 += 4;
					break;
				
				case 41:
					iVar0 += 4;
					break;
			}
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		default:
			iVar0 = iVar0;
			break;
	}
	if ((func_242(iParam0) && iParam0 != 7) || iParam0 == 12)
	{
		iVar0 = (iVar0 + func_237(iParam0, func_241() + 1));
	}
	return iVar0;
}

int func_274(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 2:
			iVar0 += 2;
			break;
		
		case 3:
			iVar0++;
			break;
		
		case 4:
			iVar0 += 3;
			break;
		
		case 5:
			iVar0 += 2;
			break;
		
		case 8:
			iVar0 += 3;
			break;
		
		case 6:
			iVar0++;
			break;
		
		case 12:
			iVar0 += 2;
			break;
		
		case 7:
			iVar0 += 6;
			break;
		
		case 9:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 = iVar0;
			break;
		
		case 13:
			iVar0 += 2;
			break;
		
		case 10:
			iVar0 += 4;
			break;
	}
	if (!bParam5)
	{
		if (func_249(iParam0))
		{
			if (iParam3 != func_16())
			{
				iVar0 = (iVar0 + func_246(iParam0, func_208(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_16())
		{
			iVar0 = (iVar0 + func_279(iParam0, func_208(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_278(0, iParam1) != -1)
		{
			if (iParam3 != func_16())
			{
				iVar0 = (iVar0 + func_277(func_208(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_276(iParam0))
		{
			iVar0 = (iVar0 + func_275(iParam0));
		}
	}
	return iVar0;
}

int func_275(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 8:
		case 1:
		case 12:
		case 10:
		case 11:
		case 13:
			return 2;
		
		default:
	}
	return 0;
}

bool func_276(int iParam0)
{
	return func_275(iParam0) > 0;
}

int func_277(var uParam0, int iParam1)
{
	return 2;
}

int func_278(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 136:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
	}
	return -1;
}

int func_279(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 8:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 1:
			iVar0 = func_280(5309, -1, 0);
			if (unk_0xC80D31E4B587871C(iVar0, 7))
			{
				if (iParam1 > 4)
				{
					return 4;
				}
				return iParam1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_280(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2523060[iParam0 /*3*/][func_148(iParam1)];
	if (unk_0xFA3CE529DBB66C85(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_281(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 11:
			iVar0 += 9;
			break;
		
		case 1:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 4:
			iVar0 += 10;
			break;
		
		case 8:
			iVar0++;
			break;
		
		case 5:
			iVar0 += 2;
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					iVar0++;
					break;
				
				case 1:
					iVar0++;
					break;
				
				case 2:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 3:
					iVar0 += 4;
					break;
				
				case 4:
					iVar0 += 2;
					break;
				
				case 5:
					iVar0 += 5;
					break;
			}
			break;
		
		case 3:
			if (iParam2 >= 4)
			{
				iVar0 += 10;
			}
			else if (iParam2 == 3)
			{
				iVar0 += 8;
			}
			else if (iParam2 == 2)
			{
				iVar0 += 7;
			}
			else if (iParam2 == 1)
			{
				iVar0 += 6;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 34:
					iVar0++;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 6:
					iVar0++;
					break;
				
				case 7:
					iVar0 += 4;
					break;
				
				case 8:
					iVar0 += 2;
					break;
			}
			break;
		
		case 0:
			if (iParam2 >= 3)
			{
				iVar0 += 2;
			}
			else
			{
				iVar0++;
			}
			break;
		
		case 23:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 5;
			break;
		
		case 22:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 25:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 24:
			iVar0 = (iVar0 + (3 * iParam2));
			break;
		
		case 16:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 17:
			iVar0 += 5;
			break;
		
		case 26:
			iVar0++;
			break;
	}
	if (!bParam5)
	{
		if (func_261(iParam0))
		{
			if (iParam3 != func_16())
			{
				iVar0 = (iVar0 + func_253(iParam0, func_208(iParam3) + 1, iParam3, -1, iParam2));
			}
		}
		if (iParam3 != func_16())
		{
			iVar0 = (iVar0 + func_286(iParam0, func_208(iParam3) + 1));
		}
	}
	if (!bParam6)
	{
		if (func_285(0, iParam1) != -1)
		{
			if (iParam3 != func_16())
			{
				iVar0 = (iVar0 + func_284(func_208(iParam3) + 1, iParam0));
			}
		}
	}
	if (!bParam4)
	{
		if (func_283(iParam0))
		{
			iVar0 = (iVar0 + func_282(iParam0));
		}
	}
	return iVar0;
}

int func_282(int iParam0)
{
	switch (iParam0)
	{
		case 12:
		case 11:
		case 1:
		case 2:
		case 14:
		case 4:
		case 10:
		case 7:
		case 3:
		case 8:
		case 0:
		case 5:
			return 2;
		
		case 21:
		case 16:
		case 17:
			return 2;
		
		default:
	}
	return 0;
}

bool func_283(int iParam0)
{
	return func_282(iParam0) > 0;
}

int func_284(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (func_256(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_256(iParam1))
			{
				return 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_256(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 4:
			if (func_256(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 5:
			if (func_256(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 6:
			if (func_256(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 7:
			if (func_256(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
		
		case 8:
			if (func_256(iParam1))
			{
				return 2;
			}
			else
			{
				return 2;
			}
			break;
	}
	return 1;
}

int func_285(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 19:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 20:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 21:
			switch (iParam0)
			{
				case 0:
					return 12;
				
				case 1:
					return 12;
				
				case 2:
					return 13;
				
				case 3:
					return 13;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 0:
					return 1;
				
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 2;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 0:
					return 4;
				
				case 1:
					return 4;
				
				case 2:
					return 5;
				
				case 3:
					return 5;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 3;
				
				default:
			}
			break;
		
		case 48:
		case 49:
		case 50:
			switch (iParam0)
			{
				case 0:
					return 2;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 3:
					return 3;
				
				default:
			}
			break;
		
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 28:
		case 29:
		case 30:
			switch (iParam0)
			{
				case 0:
					return 6;
				
				case 1:
					return 7;
				
				case 2:
					return 8;
				
				case 3:
					return 9;
				
				default:
			}
			break;
		
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 1;
				
				default:
			}
			break;
		
		case 40:
		case 41:
		case 42:
			switch (iParam0)
			{
				case 0:
					return 0;
				
				case 1:
					return 0;
				
				case 2:
					return 0;
				
				case 3:
					return 0;
				
				default:
			}
			break;
	}
	return -1;
}

int func_286(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		
		case 14:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		
		case 7:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 2:
		case 4:
		case 3:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 10:
			if (iParam1 > 4)
			{
				return 2;
			}
			return 1;
		
		case 9:
			return 1;
		
		case 0:
			if (iParam1 > 1)
			{
				return 2;
			}
			return 1;
		
		case 8:
			if (iParam1 > 3)
			{
				return 2;
			}
			return 1;
		
		case 5:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		
		case 13:
			if (iParam1 > 4)
			{
				return 4;
			}
			return iParam1;
		
		case 11:
			if (iParam1 > 2)
			{
				return 2;
			}
			return 1;
		
		default:
	}
	return unk_0x11E019C8F43ACC8A((IntToFloat(iParam1) / 2f));
}

int func_287(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 += 3;
					break;
				
				case 1:
					iVar0 += 3;
					break;
				
				case 2:
					iVar0 += 3;
					break;
			}
			break;
		
		case 2:
			if (iParam2 >= 4)
			{
				iVar0 = (iVar0 + iParam2 + 2);
			}
			else
			{
				iVar0 += 5;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					iVar0 += 3;
					break;
				
				case 10:
					iVar0 += 3;
					break;
				
				case 11:
					iVar0 += 2;
					break;
				
				case 12:
					iVar0 += 2;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 14:
					iVar0 += 2;
					break;
				
				case 15:
					iVar0 += 4;
					break;
				
				case 13:
					iVar0 += 2;
					break;
			}
			break;
		
		case 5:
			iVar0 += 4;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 5;
					break;
				
				case 20:
					iVar0 += 5;
					break;
				
				case 21:
					iVar0 += 5;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					iVar0 += 4;
					break;
				
				case 23:
					iVar0 += 3;
					break;
				
				case 24:
					iVar0 += 3;
					break;
			}
			if (func_265(iParam0, func_241() + 1, -1, iParam2) == 1)
			{
				iVar0++;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					iVar0 += 5;
					break;
				
				case 26:
					iVar0 += 5;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 2;
					break;
				
				case 28:
					iVar0 += 2;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					iVar0 += 4;
					break;
				
				case 30:
					iVar0 += 4;
					break;
				
				case 31:
					iVar0 += 4;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					iVar0 += 2;
					break;
				
				case 33:
					iVar0 += 2;
					break;
				
				case 34:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 = iVar0;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					iVar0 += 3;
					break;
				
				case 36:
					iVar0 += 3;
					break;
				
				case 37:
					iVar0 += 2;
					break;
			}
			break;
		
		case 14:
			iVar0 += 8;
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 5;
			break;
	}
	if (!bParam4)
	{
		if (func_267(iParam0))
		{
			iVar0 = (iVar0 + func_265(iParam0, func_241() + 1, -1, iParam2));
		}
		iVar0 = (iVar0 + func_290(iParam0, func_241() + 1));
	}
	if (!bParam3)
	{
		if (func_289(iParam0))
		{
			iVar0 = (iVar0 + func_288(iParam0));
		}
	}
	return iVar0;
}

int func_288(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 15:
		case 16:
		case 17:
		case 19:
		case 8:
			return 2;
		
		default:
	}
	return 0;
}

bool func_289(int iParam0)
{
	return func_288(iParam0) > 0;
}

int func_290(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			if (iParam1 == 1)
			{
				return 1;
			}
			return unk_0xF34EE736CF047844((IntToFloat(iParam1) / 1.5f));
		
		case 5:
			if (iParam1 == 1)
			{
				return 1;
			}
			return unk_0xF34EE736CF047844((IntToFloat(iParam1) / 2f));
		
		default:
	}
	return 0;
}

int func_291(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 = iVar0;
			break;
		
		case 7:
			iVar0 = iVar0;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 5:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 3;
			break;
		
		case 13:
			iVar0 = iVar0;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					iVar0 += 2;
					break;
				
				case 2:
					iVar0 += 2;
					break;
				
				case 3:
					iVar0 += 2;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					iVar0 += 2;
					break;
				
				case 19:
					iVar0 += 2;
					break;
				
				case 20:
					iVar0 += 2;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					iVar0 += 7;
					break;
				
				case 22:
					iVar0 += 7;
					break;
				
				case 23:
					iVar0 += 7;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 = iVar0;
					break;
				
				case 28:
					iVar0 = iVar0;
					break;
				
				case 29:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 30:
					iVar0 += 2;
					break;
				
				case 31:
					iVar0 += 2;
					break;
				
				case 32:
					iVar0 += 2;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					iVar0 += 7;
					break;
				
				case 37:
					iVar0 += 7;
					break;
				
				case 38:
					iVar0 += 7;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 39:
					iVar0 += 4;
					break;
				
				case 40:
					iVar0 += 4;
					break;
				
				case 41:
					iVar0 += 6;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					iVar0 += 2;
					break;
				
				case 43:
					iVar0 += 2;
					break;
				
				case 44:
					iVar0 += 2;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					iVar0 += 6;
					break;
				
				case 46:
					iVar0 += 6;
					break;
				
				case 47:
					iVar0 += 6;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					iVar0 += 2;
					break;
				
				case 49:
					iVar0 += 2;
					break;
				
				case 50:
					iVar0 += 2;
					break;
			}
			break;
		
		case 12:
			iVar0 += 11;
			break;
	}
	iVar0 = (iVar0 + func_294(iParam0, func_241() + 1, iParam2));
	iVar0 = (iVar0 + func_292(iParam0));
	return iVar0;
}

int func_292(int iParam0)
{
	if (func_293(iParam0))
	{
		return 2;
	}
	return 0;
}

int func_293(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 2:
		case 9:
		case 4:
		case 17:
		case 15:
		case 16:
		case 8:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_294(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	if (iVar0 == 0)
	{
		if (iParam0 == 8)
		{
			iVar0 = iParam2;
		}
		else
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_295(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 0;
		
		case 3:
			return 3;
		
		case 4:
			return 8;
		
		case 5:
			return 3;
		
		case 6:
			return 1;
		
		case 7:
			return 1;
		
		case 8:
			return 6;
		
		case 9:
			return 6;
		
		case 10:
			return 3;
		
		case 11:
			return 3;
		
		case 12:
			return 2;
		
		case 13:
			return 1;
		
		case 14:
			return 3;
		
		case 15:
			return 5;
		
		case 16:
			return 6;
		
		case 17:
			return 2;
		
		case 19:
			return 4;
		
		case 18:
			return 5;
		
		default:
	}
	return 2;
}

int func_296(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 148:
		case 152:
		case 162:
		case 160:
		case 163:
			return 0;
		
		case 167:
			return func_312(iParam1);
		
		case 168:
			return 12;
		
		case 170:
			return 4;
		
		case 171:
			return 0;
		
		case 172:
			return 0;
		
		case 173:
			return 4;
		
		case 178:
		case 188:
			return func_309(iParam1, iParam2, iParam3);
		
		case 225:
		case 226:
			return func_306(iParam1, iParam2, iParam3, 0);
		
		case 227:
			return 0;
		
		case 229:
		case 230:
			return func_303(iParam1, iParam2, iParam3, 0);
		
		case 233:
			return func_300(iParam1, iParam2, iParam3, 0);
		
		case 190:
			return 20;
		
		case 191:
			return 4;
		
		case 192:
			return func_299(iParam1, iParam2);
		
		case 179:
			return 0;
		
		case 183:
			return 15;
		
		case 182:
			return 20;
		
		case 185:
			return 21;
		
		case 186:
			return 36;
		
		case 180:
			return 10;
		
		case 193:
			return 10;
		
		case 194:
			return 0;
		
		case 197:
			return 12;
		
		case 199:
			return 6;
		
		case 195:
			return 15;
		
		case 201:
			return 0;
		
		case 198:
			return 18;
		
		case 205:
			return 1;
		
		case 207:
			return 24;
		
		case 208:
			return 14;
		
		case 209:
			return 11;
		
		case 210:
			return 0;
		
		case 214:
			return 12;
		
		case 215:
			return 20;
		
		case 216:
			return 20;
		
		case 217:
			return func_298();
		
		case 218:
			return func_297();
		
		case 219:
			return 0;
		
		case 220:
			return 0;
		
		case 221:
			return 0;
		
		default:
	}
	return 0;
}

int func_297()
{
	int iVar0;
	
	iVar0 = 32;
	return iVar0;
}

int func_298()
{
	int iVar0;
	
	iVar0 = 8;
	return iVar0;
}

int func_299(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 20:
			iVar0 += 2;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 1:
					iVar0 += 16;
					break;
				
				case 2:
					iVar0 += 14;
					break;
				
				case 3:
					iVar0 += 13;
					break;
				
				case 4:
					iVar0 += 12;
					break;
				
				case 5:
					iVar0 += 12;
					break;
				
				case 6:
					iVar0 += 12;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 7:
					iVar0 += 12;
					break;
				
				case 8:
					iVar0 += 12;
					break;
				
				case 9:
					iVar0 += 12;
					break;
				
				case 10:
					iVar0 += 12;
					break;
				
				case 11:
					iVar0 += 12;
					break;
				
				case 12:
					iVar0 += 12;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 13:
					iVar0 += 17;
					break;
				
				case 14:
					iVar0 += 12;
					break;
				
				case 15:
					iVar0 += 13;
					break;
				
				case 16:
					iVar0 += 14;
					break;
				
				case 17:
					iVar0 += 12;
					break;
				
				case 18:
					iVar0 += 14;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 19:
					iVar0 += 14;
					break;
				
				case 20:
					iVar0 += 14;
					break;
				
				case 21:
					iVar0 += 14;
					break;
				
				case 22:
					iVar0 += 14;
					break;
				
				case 23:
					iVar0 += 14;
					break;
				
				case 24:
					iVar0 += 14;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 25:
					iVar0 += 4;
					break;
				
				case 26:
					iVar0 += 4;
					break;
				
				case 27:
					iVar0 += 4;
					break;
				
				case 28:
					iVar0 += 4;
					break;
				
				case 29:
					iVar0 += 4;
					break;
				
				case 30:
					iVar0 += 4;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 31:
					iVar0 += 13;
					break;
				
				case 32:
					iVar0 += 13;
					break;
				
				case 33:
					iVar0 += 13;
					break;
				
				case 34:
					iVar0 += 13;
					break;
				
				case 35:
					iVar0 += 13;
					break;
				
				case 36:
					iVar0 += 13;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 68:
					iVar0 = iVar0;
					break;
				
				case 69:
					iVar0 = iVar0;
					break;
				
				case 70:
					iVar0 = iVar0;
					break;
				
				case 71:
					iVar0 = iVar0;
					break;
				
				case 72:
					iVar0 = iVar0;
					break;
				
				case 73:
					iVar0 = iVar0;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 74:
					iVar0 += 10;
					break;
				
				case 75:
					iVar0 += 10;
					break;
				
				case 76:
					iVar0 += 10;
					break;
				
				case 77:
					iVar0 += 10;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 78:
					iVar0 += 3;
					break;
				
				case joaat("mpsv_lp0_31"):
					iVar0 += 3;
					break;
				
				case 80:
					iVar0 += 3;
					break;
				
				case 81:
					iVar0 += 3;
					break;
				
				case 82:
					iVar0 += 5;
					break;
				
				case 83:
					iVar0 += 3;
					break;
				
				case 84:
					iVar0 += 3;
					break;
			}
			break;
		
		case 7:
			iVar0 += 8;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 62:
					iVar0 += 8;
					break;
				
				case 63:
					iVar0 += 8;
					break;
				
				case 64:
					iVar0 += 8;
					break;
				
				case 65:
					iVar0 += 8;
					break;
				
				case 66:
					iVar0 += 8;
					break;
				
				case 67:
					iVar0 += 8;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 85:
					iVar0 += 3;
					break;
				
				case 86:
					iVar0 += 3;
					break;
				
				case 87:
					iVar0 += 3;
					break;
				
				case 88:
					iVar0 += 3;
					break;
				
				case 89:
					iVar0 += 3;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 90:
					iVar0 += 2;
					break;
				
				case 91:
					iVar0 += 2;
					break;
				
				case 92:
					iVar0 += 2;
					break;
				
				case 93:
					iVar0 += 2;
					break;
				
				case 94:
					iVar0 += 2;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 37:
					iVar0 += 18;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 38:
					iVar0 += 8;
					break;
				
				case 39:
					iVar0 += 8;
					break;
				
				case 40:
					iVar0 += 8;
					break;
				
				case 41:
					iVar0 += 8;
					break;
			}
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		default:
			iVar0 = iVar0;
			break;
	}
	if (iParam0 == 12 || iParam0 == 9)
	{
		iVar0 = (iVar0 + func_237(iParam0, func_241() + 1));
	}
	return iVar0;
}

int func_300(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 14;
			break;
		
		case 2:
			iVar0 += 12;
			break;
		
		case 3:
			iVar0 += 23;
			break;
		
		case 4:
			iVar0 += 20;
			break;
		
		case 5:
			iVar0 += 5;
			break;
		
		case 8:
			iVar0 += 11;
			break;
		
		case 6:
			iVar0 += 7;
			break;
		
		case 12:
			iVar0 += 8;
			break;
		
		case 7:
			iVar0 += 18;
			break;
		
		case 9:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 12;
			break;
		
		case 13:
			iVar0++;
			break;
		
		case 10:
			iVar0 += 16;
			break;
	}
	if (!bParam3)
	{
		if (func_276(iParam0))
		{
			iVar0 = (iVar0 + func_301(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_301(int iParam0, var uParam1)
{
	if (func_276(iParam0))
	{
		return (func_275(iParam0) + func_302(iParam0, uParam1));
	}
	return 0;
}

int func_302(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		
		case 2:
		case 12:
		case 1:
		case 11:
		case 10:
			return 2;
		
		case 8:
			return 4;
		
		default:
	}
	return 0;
}

int func_303(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 12:
			iVar0 += 16;
			break;
		
		case 11:
			iVar0 += 21;
			break;
		
		case 1:
			iVar0 += 4;
			break;
		
		case 14:
			iVar0 += 15;
			break;
		
		case 7:
			iVar0 += 10;
			break;
		
		case 2:
			iVar0 += 15;
			break;
		
		case 4:
			iVar0 += 9;
			break;
		
		case 10:
			iVar0 += 20;
			break;
		
		case 3:
			iVar0 += 7;
			break;
		
		case 8:
			iVar0 += 2;
			break;
		
		case 5:
			iVar0 += 10;
			break;
		
		case 9:
			switch (iParam1)
			{
				case 7:
					iVar0 += 17;
					break;
				
				default:
					iVar0 += 16;
					break;
			}
			break;
		
		case 0:
			if (iParam2 >= 3)
			{
				iVar0 += 2;
			}
			else
			{
				iVar0++;
			}
			break;
		
		case 23:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 20:
			iVar0 += 10;
			break;
		
		case 22:
			iVar0 = (iVar0 + (5 * iParam2));
			break;
		
		case 25:
			iVar0 = (iVar0 + iParam2);
			break;
		
		case 24:
			iVar0 = (iVar0 + (3 * iParam2));
			break;
		
		case 26:
			iVar0 += 2;
			break;
	}
	if (!bParam3)
	{
		if (func_283(iParam0))
		{
			iVar0 = (iVar0 + func_304(iParam0, iParam1));
		}
	}
	return iVar0;
}

int func_304(int iParam0, int iParam1)
{
	if (func_283(iParam0))
	{
		return (func_282(iParam0) + func_305(iParam0, iParam1));
	}
	return 0;
}

int func_305(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
		case 14:
		case 2:
		case 10:
		case 5:
			return 2;
		
		case 1:
		case 0:
			return 4;
		
		case 4:
			return 1;
		
		case 12:
			switch (iParam1)
			{
				case 2:
					return 2;
				
				default:
			}
			break;
		
		case 21:
			return 2;
		
		case 17:
			return 4;
	}
	return 0;
}

int func_306(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 += 18;
					break;
				
				case 1:
					iVar0 += 18;
					break;
				
				case 2:
					iVar0 += 18;
					break;
			}
			break;
		
		case 2:
			if (iParam2 >= 4)
			{
				iVar0 = (iVar0 + iParam2 + 2);
			}
			else
			{
				iVar0 += 5;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 9:
					iVar0 += 4;
					break;
				
				case 10:
					iVar0 += 4;
					break;
				
				case 11:
					iVar0 += 4;
					break;
				
				case 12:
					iVar0 += 4;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 13:
					iVar0 += 20;
					break;
				
				case 14:
					iVar0 += 20;
					break;
				
				case 15:
					iVar0 += 20;
					break;
			}
			break;
		
		case 5:
			iVar0 += 12;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 19:
					iVar0 += 24;
					break;
				
				case 20:
					iVar0 += 24;
					break;
				
				case 21:
					iVar0 += 24;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 22:
					iVar0 += 12;
					break;
				
				case 23:
					iVar0 += 12;
					break;
				
				case 24:
					iVar0 += 12;
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 25:
					iVar0 += 16;
					break;
				
				case 26:
					iVar0 += 15;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 25;
					break;
				
				case 28:
					iVar0 += 25;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 29:
					iVar0 += 15;
					break;
				
				case 30:
					iVar0 += 15;
					break;
				
				case 31:
					iVar0 += 15;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 32:
					iVar0 += 12;
					break;
				
				case 33:
					iVar0 += 12;
					break;
				
				case 34:
					iVar0 += 12;
					break;
			}
			break;
		
		case 12:
			iVar0 = iVar0;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 35:
					iVar0 += 22;
					break;
				
				case 36:
					iVar0 += 22;
					break;
				
				case 37:
					iVar0 += 22;
					break;
			}
			break;
		
		case 14:
			iVar0 += 16;
			break;
		
		case 15:
			iVar0 = iVar0;
			break;
		
		case 16:
			iVar0 = iVar0;
			break;
		
		case 17:
			iVar0 = iVar0;
			break;
		
		case 18:
			iVar0 = iVar0;
			break;
		
		case 19:
			iVar0 = iVar0;
			break;
		
		case 20:
			iVar0 += 22;
			break;
	}
	if (!bParam3)
	{
		if (func_289(iParam0))
		{
			iVar0 = (iVar0 + func_307(iParam0));
		}
	}
	return iVar0;
}

int func_307(int iParam0)
{
	if (func_289(iParam0))
	{
		return (func_288(iParam0) + func_308(iParam0));
	}
	return 0;
}

int func_308(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 12:
		case 13:
		case 17:
		case 11:
			return 2;
		
		case 15:
		case 16:
		case 19:
			return 3;
		
		case 10:
		case 8:
		case 5:
			return 4;
		
		default:
	}
	return 0;
}

int func_309(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = iVar0;
			break;
		
		case 1:
			iVar0 += 5;
			break;
		
		case 7:
			iVar0 += 6;
			break;
		
		case 8:
			iVar0 = iVar0;
			break;
		
		case 5:
			iVar0 = iVar0;
			break;
		
		case 11:
			iVar0 += 6;
			break;
		
		case 2:
			iVar0 += 10;
			break;
		
		case 12:
			iVar0 += 11;
			break;
		
		case 13:
			iVar0 += 10;
			break;
		
		case 4:
			switch (iParam1)
			{
				case 1:
					iVar0 += 12;
					break;
				
				case 2:
					iVar0 += 12;
					break;
				
				case 3:
					iVar0 += 12;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 18:
					iVar0 += 8;
					break;
				
				case 19:
					iVar0 += 8;
					break;
				
				case 20:
					iVar0 += 8;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 21:
					iVar0 += 14;
					break;
				
				case 22:
					iVar0 += 14;
					break;
				
				case 23:
					iVar0 += 14;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 27:
					iVar0 += 14;
					break;
				
				case 28:
					iVar0 += 14;
					break;
				
				case 29:
					iVar0 += 14;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 30:
					iVar0 += 3;
					break;
				
				case 31:
					iVar0 += 3;
					break;
				
				case 32:
					iVar0 += 3;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 36:
					iVar0 += 18;
					break;
				
				case 37:
					iVar0 += 18;
					break;
				
				case 38:
					iVar0 += 18;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 42:
					iVar0 += 10;
					break;
				
				case 43:
					iVar0 += 10;
					break;
				
				case 44:
					iVar0 += 10;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 45:
					iVar0 += 17;
					break;
				
				case 46:
					iVar0 += 17;
					break;
				
				case 47:
					iVar0 += 17;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 48:
					iVar0 += 11;
					break;
				
				case 49:
					iVar0 += 11;
					break;
				
				case 50:
					iVar0 += 11;
					break;
			}
			break;
	}
	iVar0 = (iVar0 + func_310(iParam0));
	return iVar0;
}

int func_310(int iParam0)
{
	if (func_293(iParam0))
	{
		if (func_311(iParam0))
		{
			return 4;
		}
		return 2;
	}
	return 0;
}

int func_311(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 2:
		case 9:
		case 4:
		case 17:
		case 15:
		case 16:
		case 8:
		case 10:
			return 1;
		
		default:
	}
	return 0;
}

int func_312(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 0;
		
		case 3:
			return 5;
		
		case 4:
			return 12;
		
		case 5:
			return 4;
		
		case 6:
			return 4;
		
		case 7:
			return 2;
		
		case 8:
			return 12;
		
		case 9:
			return 12;
		
		case 10:
			return 9;
		
		case 11:
			return 8;
		
		case 12:
			return 7;
		
		case 13:
			return 5;
		
		case 14:
			return 12;
		
		case 15:
			return 13;
		
		case 16:
			return 5;
		
		case 17:
			return 15;
		
		case 19:
			return 4;
		
		case 18:
			return 11;
		
		default:
	}
	return 8;
}

int func_313()
{
	if (!func_15(unk_0x9EB17624F44A8DA4(), 0, 1))
	{
		return 0;
	}
	if (unk_0xB01117EF93F91860())
	{
		return 0;
	}
	if (!func_330(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (func_328(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (func_327())
	{
		return 0;
	}
	if (func_326())
	{
		return 0;
	}
	if (func_325())
	{
		return 0;
	}
	if (func_110())
	{
		return 0;
	}
	if (func_323(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (unk_0x4916190900E76373())
	{
		return 0;
	}
	if (func_321(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (!func_19())
	{
		return 0;
	}
	if (func_198(unk_0x9EB17624F44A8DA4(), 0))
	{
		return 0;
	}
	if (func_198(unk_0x9EB17624F44A8DA4(), 21))
	{
		return 0;
	}
	if ((((((((func_319(unk_0x9EB17624F44A8DA4(), 0, 1, 0, 0, 0, 0, 0, 1) && !func_318(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17)) && !func_317(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17, -1)) && !func_316(unk_0x9EB17624F44A8DA4())) && !func_315(unk_0x9EB17624F44A8DA4())) && !func_115(unk_0x9EB17624F44A8DA4())) && !func_85(unk_0x9EB17624F44A8DA4())) && !func_93(unk_0x9EB17624F44A8DA4())) || func_314(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	return 1;
}

int func_314(int iParam0)
{
	if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 14))
	{
		return 1;
	}
	if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 11))
	{
		return 1;
	}
	return 0;
}

int func_315(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_46(Global_2422736[iParam0 /*420*/].f_324.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_316(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_46(Global_2422736[iParam0 /*420*/].f_324.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_317(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_318(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_319(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (Global_1595693[iParam0 /*680*/].f_266.f_17 > 0)
	{
		if (bParam1)
		{
			if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_320(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_316(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_315(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_115(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_85(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_93(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_54(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_320(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_46(Global_2422736[iParam0 /*420*/].f_324.f_1) == 0;
			}
		}
	}
	return 0;
}

bool func_321(int iParam0)
{
	return func_322(iParam0);
}

bool func_322(int iParam0)
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_13.f_1, 0);
}

int func_323(int iParam0)
{
	switch (func_324(iParam0))
	{
		case 20:
		case 21:
		case 24:
		case 25:
		case 26:
		case 28:
		case 27:
		case 29:
		case 30:
		case 31:
		case 32:
			return 1;
		
		default:
	}
	return 0;
}

int func_324(int iParam0)
{
	return Global_1595693[iParam0 /*680*/].f_196;
}

bool func_325()
{
	return Global_1312854;
}

bool func_326()
{
	return Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 5;
}

bool func_327()
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_39.f_18, 0);
}

int func_328(int iParam0)
{
	if (func_329(iParam0, 1))
	{
		if (Global_1595693[iParam0 /*680*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_329(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_321(iParam0))
		{
			return 1;
		}
	}
	if (Global_1595693[iParam0 /*680*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_330(int iParam0)
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_142, 22);
}

int func_331(int iParam0, int iParam1)
{
	if (func_332(unk_0x9EB17624F44A8DA4(), iParam0, 2))
	{
		switch (iParam1)
		{
			case 0:
				return Global_262145.f_17786;
			
			case 1:
				return Global_262145.f_17762;
			
			case 2:
				return Global_262145.f_17794;
			
			case 4:
				return Global_262145.f_17778;
			
			case 3:
				return Global_262145.f_17770;
			
			case 5:
				return Global_262145.f_20361;
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return Global_262145.f_17785;
			
			case 1:
				return Global_262145.f_17761;
			
			case 2:
				return Global_262145.f_17793;
			
			case 4:
				return Global_262145.f_17777;
			
			case 3:
				return Global_262145.f_17769;
			
			case 5:
				return Global_262145.f_20360;
			}
		
		default:
	}
	return 0;
}

int func_332(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_168(iParam0, iParam1))
	{
		iVar0 = func_167(iParam0, iParam1);
		return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_333(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_17455;
		
		case 1:
			return Global_262145.f_17453;
		
		case 2:
			return Global_262145.f_17457;
		
		case 4:
			return Global_262145.f_17461;
		
		case 3:
			return Global_262145.f_17459;
		
		case 5:
			return Global_262145.f_20525;
		
		default:
	}
	return 100;
}

int func_334(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 == func_16())
	{
		return 0;
	}
	iVar0 = func_166(iParam0);
	iVar1 = func_335(iParam1, iParam0);
	fVar2 = ((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(iVar0)) * 100f);
	return unk_0xF2DB717A73826179(fVar2);
}

int func_335(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_16())
	{
		return 0;
	}
	if (func_162(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_336(int iParam0)
{
	int iVar0;
	
	iVar0 = func_342(iParam0);
	if ((((((((iParam0 != 0 && !func_316(unk_0x9EB17624F44A8DA4())) && !func_115(unk_0x9EB17624F44A8DA4())) && !func_85(unk_0x9EB17624F44A8DA4())) && !func_93(unk_0x9EB17624F44A8DA4())) && func_98(unk_0xFC1458A37D98B502())) && (func_345(iParam0) != 5 || !func_341(iParam0))) && !func_339(unk_0x9EB17624F44A8DA4(), iVar0, iParam0)) && func_338(Global_1669535.f_42[iVar0 /*3*/], unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1)) > func_337(iParam0))
	{
		return 0;
	}
	return 1;
}

float func_337(int iParam0)
{
	if (func_160(iParam0))
	{
		return unk_0xBBDA792448DB5A89(Global_262145.f_20524);
	}
	return Global_262145.f_17897;
}

float func_338(struct<3> Param0, struct<3> Param3)
{
	Param0.f_2 = 0f;
	Param3.f_2 = 0f;
	return unk_0x2A488C176D52CCA5(Param0, Param3);
}

int func_339(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 != func_16() && func_43(iParam0, 1))
	{
		if (func_45(iParam0))
		{
			iVar0 = func_340(iParam0);
			if (func_42(iVar0))
			{
				if (func_160(iParam2))
				{
					return 1;
				}
			}
			else if (iVar0 != func_16())
			{
				if (func_338(Global_1669535.f_42[iParam1 /*3*/], Global_2422736[iVar0 /*420*/].f_324.f_5) < Global_262145.f_17897)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_340(int iParam0)
{
	if (iParam0 == func_16())
	{
		return iParam0;
	}
	return Global_2422736[iParam0 /*420*/].f_324.f_4;
}

int func_341(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x3A711520F83BAE98())
	{
		return 0;
	}
	iVar0 = func_342(iParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < unk_0xB72D370CB7ABC3EF())
	{
		if (unk_0x012BC3F18B8C7807(unk_0x2B957AC89DEBA5B6(iVar1)))
		{
			iVar2 = unk_0x43E1A43A1AA9E0BE(unk_0x2B957AC89DEBA5B6(iVar1));
			if ((((func_15(iVar2, 1, 1) && unk_0x9EB17624F44A8DA4() != iVar2) && func_201(iVar2, unk_0x9EB17624F44A8DA4(), 0)) && func_98(unk_0x25D049AAC4603E65(iVar2))) && ((func_115(iVar2) || func_338(Global_1669535.f_42[iVar0 /*3*/], unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iVar2), 1)) < IntToFloat(Global_262145.f_20523)) || func_339(iVar2, iVar0, iParam0)))
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_342(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 102)
	{
		if (func_343(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_343(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 1;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 3;
			break;
		
		case 25:
			return 4;
			break;
		
		case 26:
			return 5;
			break;
		
		case 27:
			return 6;
			break;
		
		case 28:
			return 7;
			break;
		
		case 29:
			return 8;
			break;
		
		case 30:
			return 9;
			break;
		
		case 31:
			return 10;
			break;
		
		case 32:
			return 11;
			break;
		
		case 33:
			return 12;
			break;
		
		case 34:
			return 13;
			break;
		
		case 35:
			return 14;
			break;
		
		case 36:
			return 15;
			break;
		
		case 37:
			return 16;
			break;
		
		case 38:
			return 17;
			break;
		
		case 39:
			return 18;
			break;
		
		case 40:
			return 19;
			break;
		
		case 41:
			return 20;
			break;
		
		case 70:
			return 21;
		
		case 71:
			return 22;
		
		case 72:
			return 23;
		
		case 73:
			return 24;
		
		case 74:
			return 25;
		
		case 75:
			return 26;
		
		case 76:
			return 27;
		
		case 77:
			return 28;
		
		case 78:
			return 29;
		
		case joaat("mpsv_lp0_31"):
			return 30;
		
		case 80:
			return 31;
	}
	return 0;
}

int func_344(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_17454;
		
		case 1:
			return Global_262145.f_17452;
		
		case 2:
			return Global_262145.f_17456;
		
		case 4:
			return Global_262145.f_17460;
		
		case 3:
			return Global_262145.f_17458;
		
		case 5:
			return 0;
		
		default:
	}
	return 0;
}

int func_345(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

void func_346(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_160[iParam0 /*12*/];
	iVar1 = func_345(iVar0);
	iVar2 = 1;
	iVar3 = func_280(func_150(iParam0), -1, 0);
	Global_1350913[iParam0] = 0;
	if (iParam0 < 5)
	{
		if (!func_154(unk_0x9EB17624F44A8DA4()))
		{
			iVar2 = 0;
		}
	}
	else if (!func_44(unk_0x9EB17624F44A8DA4()))
	{
		iVar2 = 0;
	}
	if (iVar0 != 0 && iVar2)
	{
		Global_1350913[iParam0] = (unk_0xE3CCAFB1555348DF() - iVar3);
		if (Global_1350913[iParam0] < 0 || (func_331(iVar0, iVar1) - iVar3) < 300)
		{
			if (iVar3 != 0)
			{
				Global_1350913[iParam0] += 600;
			}
		}
	}
	else
	{
		Global_1350913[iParam0] = 0;
	}
}

int func_347(int iParam0, bool bParam1)
{
	if (iParam0 == func_16() || Global_1595693[iParam0 /*680*/].f_266.f_17 != -1)
	{
		return 0;
	}
	if (!func_154(iParam0))
	{
		if (!bParam1 || !func_44(iParam0))
		{
			return 0;
		}
		return 0;
	}
	if (func_38(iParam0) != 191 && func_38(iParam0) != 227)
	{
		return 1;
	}
	return 0;
}

void func_348()
{
	if (!iLocal_170)
	{
		if (func_347(unk_0x9EB17624F44A8DA4(), 1))
		{
			func_346(5);
			iLocal_170 = 1;
		}
	}
	else if (func_347(unk_0x9EB17624F44A8DA4(), 1))
	{
		func_152(5);
		func_151();
	}
	else
	{
		func_349();
		iLocal_170 = 0;
	}
}

void func_349()
{
	func_146(5);
	Global_1350920 = unk_0xE3CCAFB1555348DF();
}

void func_350()
{
	bool bVar0;
	bool bVar1;
	var uVar2[4];
	int iVar7;
	
	if (((((!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) || unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502())) || Global_1312854) || Global_1312782) || !unk_0x4916190900E76373()) || Global_4456448.f_143970 != 61)
	{
		if ((!unk_0x4916190900E76373() || Global_1312854) || Global_1312782)
		{
			if (fLocal_161 > 0f || fLocal_162 > 0f)
			{
				func_357();
				fLocal_161 = 0f;
				fLocal_162 = 0f;
				func_27(&Local_163);
				func_27(&Local_165);
				func_27(&Local_167);
			}
		}
		return;
	}
	bVar0 = fLocal_162 > 60f;
	if (!Global_1312854 && !bVar0)
	{
		if (unk_0x3A711520F83BAE98() || func_142())
		{
			if (unk_0x4916190900E76373())
			{
				bVar1 = true;
				if (!unk_0x4C4813CAAD70E814(0))
				{
					func_356(&(uVar2[0]), &(uVar2[1]), &(uVar2[2]), &(uVar2[3]), 0);
					iVar7 = 0;
					while (iVar7 < 4)
					{
						if (func_355(uVar2[iVar7], &(iLocal_156[iVar7])))
						{
							bVar1 = false;
						}
						iVar7++;
					}
				}
				else
				{
					bVar1 = true;
					if (func_352())
					{
						bVar1 = false;
					}
				}
				if (bVar1)
				{
					if (!func_63(&Local_163))
					{
						func_23(&Local_163, 0, 0);
					}
					if (func_63(&Local_163) && func_351(Local_163, 2000, 0))
					{
						fLocal_161 = (fLocal_161 + unk_0x46C19C2753391FBF());
					}
				}
				else
				{
					if (func_63(&Local_163))
					{
						func_27(&Local_163);
						func_357();
					}
					fLocal_162 = (fLocal_162 + unk_0x46C19C2753391FBF());
					fLocal_161 = 0f;
				}
				if ((unk_0x4B64A8D052027742() % 60) == 0)
				{
				}
				if (fLocal_161 > 60f)
				{
					unk_0x9D40987BB7758337(55457, Global_1664859[0], Global_1664859[1]);
				}
			}
			else
			{
				func_357();
			}
		}
		else
		{
			func_357();
		}
	}
	else if (bVar0)
	{
	}
}

int func_351(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (iParam2 == -1)
	{
		return 1;
	}
	if (unk_0x3A711520F83BAE98() && !bParam3)
	{
		if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), uParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (unk_0xB89BB11E0945F6F0(unk_0x38F6270C9AE5FE40(unk_0x53C562FD2B9E3AB0(), uParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

int func_352()
{
	bool bVar0;
	var uVar1[4];
	
	bVar0 = true;
	if (func_63(&Local_165) && func_351(Local_165, 4000, 0))
	{
		func_27(&Local_165);
	}
	func_356(&(uVar1[0]), &(uVar1[1]), &(uVar1[2]), &(uVar1[3]), 0);
	if (func_354(uVar1[3], &(iLocal_156[3])))
	{
		bVar0 = false;
	}
	if ((((((((((((unk_0x4CD14B4B1E8BD8BA(0, 61) || unk_0x4CD14B4B1E8BD8BA(0, 62)) || unk_0x4CD14B4B1E8BD8BA(0, 63)) || unk_0x4CD14B4B1E8BD8BA(0, 64)) || unk_0x4CD14B4B1E8BD8BA(0, 76)) || unk_0x4CD14B4B1E8BD8BA(0, 74)) || unk_0x4CD14B4B1E8BD8BA(0, 36)) || unk_0x4CD14B4B1E8BD8BA(0, 25)) || unk_0x4CD14B4B1E8BD8BA(0, 24)) || unk_0x4CD14B4B1E8BD8BA(0, 22)) || unk_0x4CD14B4B1E8BD8BA(0, 23)) || unk_0x4CD14B4B1E8BD8BA(0, 21)) || !bVar0)
	{
		func_353(&Local_165, 0, 0);
	}
	if (func_63(&Local_165))
	{
		return 1;
	}
	return 0;
}

void func_353(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x3A711520F83BAE98() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0xD1952A425B78FFC0();
		}
		else
		{
			*uParam0 = unk_0xEBD55014C579F626();
		}
	}
	else
	{
		*uParam0 = unk_0x53C562FD2B9E3AB0();
	}
	uParam0->f_1 = 1;
}

int func_354(int iParam0, var uParam1)
{
	if ((iParam0 > 1 || iParam0 < -1) && *uParam1 != iParam0)
	{
		*uParam1 = iParam0;
		return 1;
	}
	return 0;
}

int func_355(int iParam0, var uParam1)
{
	if ((iParam0 > 10 || iParam0 < -10) && *uParam1 != iParam0)
	{
		*uParam1 = iParam0;
		func_353(&Local_167, 0, 0);
		return 1;
	}
	if (((((((unk_0x4CD14B4B1E8BD8BA(0, 76) || unk_0x4CD14B4B1E8BD8BA(0, 74)) || unk_0x4CD14B4B1E8BD8BA(0, 36)) || unk_0x4CD14B4B1E8BD8BA(0, 25)) || unk_0x4CD14B4B1E8BD8BA(0, 24)) || unk_0x4CD14B4B1E8BD8BA(0, 22)) || unk_0x4CD14B4B1E8BD8BA(0, 23)) || unk_0x4CD14B4B1E8BD8BA(0, 21))
	{
		func_353(&Local_167, 0, 0);
		return 1;
	}
	if (func_63(&Local_167))
	{
		if (func_351(Local_167, 2500, 0))
		{
			func_27(&Local_167);
		}
		return 1;
	}
	return 0;
}

void func_356(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x869308DF4F5FB0C3(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x869308DF4F5FB0C3(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x869308DF4F5FB0C3(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x869308DF4F5FB0C3(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x84326F8D8D6875EC(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0x84326F8D8D6875EC(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x84326F8D8D6875EC(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0x84326F8D8D6875EC(2, 221) * 127f));
		}
	}
}

void func_357()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_156[iVar0] = 0;
		iVar0++;
	}
}

void func_358()
{
	struct<3> Var0;
	float fVar3;
	
	if (func_45(unk_0x9EB17624F44A8DA4()) && !func_30(unk_0x9EB17624F44A8DA4()))
	{
		if (!func_19())
		{
			if (!iLocal_155)
			{
				iLocal_155 = 1;
			}
		}
		else if (!iLocal_154 && iLocal_155)
		{
			if (!unk_0x4AA5DF29899B96D6())
			{
				if (!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					switch (Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_324.f_1)
					{
						case 70:
							Var0 = { 494.7586f, 3016.981f, 40.0208f };
							fVar3 = 316.8702f;
							break;
						
						case 71:
							Var0 = { 849.4503f, 3026.068f, 40.2473f };
							fVar3 = 13.1649f;
							break;
						
						case 72:
							Var0 = { 41.6985f, 2927.255f, 54.6922f };
							fVar3 = 205.9901f;
							break;
						
						case 73:
							Var0 = { 1572.281f, 2222.314f, 77.4484f };
							fVar3 = 181.3646f;
							break;
						
						case 74:
							Var0 = { 2107.072f, 3324.286f, 44.3787f };
							fVar3 = 117.1457f;
							break;
						
						case 75:
							Var0 = { 2488.494f, 3165.126f, 48.1002f };
							fVar3 = 7.4364f;
							break;
						
						case 76:
							Var0 = { 1796.991f, 4705.193f, 39.035f };
							fVar3 = 96.3549f;
							break;
						
						case 77:
							Var0 = { -755.223f, 5943.756f, 18.8807f };
							fVar3 = 288.72f;
							break;
						
						case 78:
							Var0 = { -388.9298f, 4340.254f, 55.1797f };
							fVar3 = 189.36f;
							break;
						
						case joaat("mpsv_lp0_31"):
							Var0 = { -3030.867f, 3334.033f, 9.1468f };
							fVar3 = 281.0112f;
							break;
						
						case 80:
							Var0 = { -3153.95f, 1377.34f, 16.1494f };
							fVar3 = 272.5503f;
							break;
						
						default:
							Var0 = { -3153.95f, 1377.34f, 16.1494f };
							fVar3 = 272.5503f;
							break;
					}
					unk_0x957CEE967C939968(unk_0xFC1458A37D98B502());
					Global_1669535.f_33 = 1;
					unk_0xEDC33A771FAEB393(unk_0xFC1458A37D98B502(), true);
					unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
					unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), Var0, 1, 0, 0, 1);
					unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), fVar3);
					iLocal_154 = 1;
					iLocal_155 = 0;
				}
				else
				{
					unk_0x16416C5B54FDBCBB(unk_0xFC1458A37D98B502(), 0, 0);
				}
			}
		}
	}
	else
	{
		if (iLocal_154 && func_19())
		{
			if (unk_0x3E9CABD07B829173())
			{
				unk_0x59C3AC31C7544A28(500);
			}
			Global_1669535.f_33 = 0;
			unk_0xEDC33A771FAEB393(unk_0xFC1458A37D98B502(), false);
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
			iLocal_154 = 0;
			iLocal_155 = 0;
		}
		if (iLocal_155 && func_19())
		{
			iLocal_155 = 0;
		}
	}
}

void func_359()
{
	int iVar0;
	
	if (func_15(unk_0x9EB17624F44A8DA4(), 1, 1))
	{
		if ((unk_0x46647B38B387FDC3(unk_0xFC1458A37D98B502()) || unk_0xA57E3BD5C64527C7(unk_0xFC1458A37D98B502())) && !unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
		{
			if (!func_63(&uLocal_152))
			{
				func_23(&uLocal_152, 0, 0);
			}
			else if (func_22(&uLocal_152, 3000, 0))
			{
				if (func_365(unk_0x9EB17624F44A8DA4()) && func_46(func_364(unk_0x9EB17624F44A8DA4())) == 5)
				{
					func_362(0, -1);
					iLocal_151 = 1;
					func_27(&uLocal_152);
					Global_1669535.f_2921 = -1;
				}
			}
		}
		else
		{
			func_27(&uLocal_152);
		}
		if (iLocal_151)
		{
			iVar0 = unk_0x4E7809A068F46A31();
			if (func_98(iVar0))
			{
				if (func_361(iVar0))
				{
					if (unk_0xA0BF73C5030D3F60(iVar0))
					{
						unk_0x1A0806871323CD16(iVar0, 0);
						iLocal_151 = 0;
					}
					else
					{
						unk_0xC8DAB4CEBB9AB263(iVar0);
					}
				}
				else if (unk_0x9EB17624F44A8DA4() != func_16())
				{
					if (unk_0x6ADD12BF4D6D2587(Global_2436181.f_578[unk_0x9EB17624F44A8DA4()]))
					{
						if (unk_0xA0BF73C5030D3F60(Global_2436181.f_578[unk_0x9EB17624F44A8DA4()]))
						{
							unk_0x1A0806871323CD16(Global_2436181.f_578[unk_0x9EB17624F44A8DA4()], 0);
							iLocal_151 = 0;
						}
						else
						{
							unk_0xC8DAB4CEBB9AB263(iVar0);
						}
					}
				}
			}
			else
			{
				iLocal_151 = 0;
			}
		}
		if (unk_0xC80D31E4B587871C(Global_1669535, 6))
		{
			Global_1664858 = 1;
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				if (func_112(unk_0xFC1458A37D98B502(), 0) == -1)
				{
					if (func_65(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 1))
					{
						if (!func_64(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), 1))
						{
							unk_0x16416C5B54FDBCBB(unk_0xFC1458A37D98B502(), 0, 0);
							if (!func_115(unk_0x9EB17624F44A8DA4()))
							{
								func_360(1);
							}
						}
					}
				}
			}
			if (!iLocal_150)
			{
				iLocal_150 = 1;
			}
		}
		else if (iLocal_150)
		{
			Global_1664858 = 0;
			iLocal_150 = 0;
			func_360(0);
		}
	}
}

void func_360(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xC80D31E4B587871C(Global_1669535.f_2, 4))
		{
			unk_0x872F1C1F8587CCC7(&(Global_1669535.f_2), 4);
		}
	}
	else if (unk_0xC80D31E4B587871C(Global_1669535.f_2, 4))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_1669535.f_2), 4);
	}
}

int func_361(int iParam0)
{
	if (Global_2512808.f_284 == iParam0)
	{
		return 1;
	}
	return 0;
}

void func_362(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (!unk_0xC80D31E4B587871C(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_324, 5))
		{
			unk_0x872F1C1F8587CCC7(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_324), 5);
			if (iParam1 != -1)
			{
				func_363(1, iParam1);
			}
		}
	}
	else if (unk_0xC80D31E4B587871C(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_324, 5))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_324), 5);
		func_363(0, -1);
	}
}

void func_363(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_324.f_13 = iParam1;
	}
	else
	{
		Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_324.f_13 = -1;
	}
}

int func_364(int iParam0)
{
	if (iParam0 != func_16() && func_15(iParam0, 1, 1))
	{
		return Global_2422736[iParam0 /*420*/].f_324.f_13;
	}
	return -1;
}

int func_365(int iParam0)
{
	if (iParam0 != func_16())
	{
		return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_324, 5);
	}
	return 0;
}

void func_366()
{
	struct<3> Var0;
	float fVar3;
	
	if (func_15(unk_0x9EB17624F44A8DA4(), 1, 1) && unk_0x9EB17624F44A8DA4() != Global_1595543)
	{
		if (func_93(unk_0x9EB17624F44A8DA4()))
		{
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				if (unk_0xB0DA749C8A7CCBBF(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), joaat("avenger")))
				{
					if (Global_1669529 >= 8)
					{
						Global_1664858 = 1;
						iLocal_149 = 1;
					}
				}
			}
			if (((((func_369(unk_0x9EB17624F44A8DA4()) || iLocal_149) && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0)) && !unk_0x7760DB8F51041367(unk_0xFC1458A37D98B502(), 2)) && unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), 451360105) != 1) && unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), 451360105) != 0)
			{
				if (!func_15(Global_1595543, 1, 1) || func_368())
				{
					if (!iLocal_148)
					{
						if (unk_0x3E9CABD07B829173() || unk_0x08D525BE62A22AE0())
						{
							switch (Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_324.f_1)
							{
								case 89:
									Var0 = { 1271.16f, 2833.266f, 47.8505f };
									fVar3 = 129.1997f;
									break;
								
								case 90:
									Var0 = { 35.5437f, 2623.229f, 84.2188f };
									fVar3 = 313.3997f;
									break;
								
								case 91:
									Var0 = { 2751.097f, 3905.699f, 43.5366f };
									fVar3 = 127.6f;
									break;
								
								case 92:
									Var0 = { 3388.162f, 5504.382f, 24.719f };
									fVar3 = 81.3999f;
									break;
								
								case 93:
									Var0 = { 22.651f, 6818.573f, 14.131f };
									fVar3 = 249f;
									break;
								
								case 94:
									Var0 = { -2229.391f, 2397.57f, 11.2311f };
									fVar3 = 186.5998f;
									break;
								
								case 95:
									Var0 = { 2.9559f, 3344.297f, 39.5231f };
									fVar3 = 304.9976f;
									break;
								
								case 96:
									Var0 = { 2088.716f, 1761.805f, 102.7459f };
									fVar3 = 275.1998f;
									break;
								
								case 97:
									Var0 = { 1867.959f, 266.977f, 162.799f };
									fVar3 = 144.998f;
									break;
								
								default:
									Var0 = { 1867.959f, 266.977f, 162.799f };
									fVar3 = 144.998f;
									break;
							}
							unk_0x957CEE967C939968(unk_0xFC1458A37D98B502());
							unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
							unk_0xEDC33A771FAEB393(unk_0xFC1458A37D98B502(), true);
							unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), Var0, 1, 0, 0, 1);
							unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), fVar3);
							func_367(0);
							iLocal_148 = 1;
						}
						else if (!unk_0x3E9CABD07B829173())
						{
							unk_0xAE83ED4C9081AE6F(500);
						}
					}
				}
			}
		}
		else if (iLocal_149)
		{
			Global_1664858 = 0;
			iLocal_149 = 0;
		}
	}
	if (iLocal_148)
	{
		if (!func_369(unk_0x9EB17624F44A8DA4()))
		{
			if (unk_0x3E9CABD07B829173())
			{
				unk_0x59C3AC31C7544A28(500);
			}
			unk_0xEDC33A771FAEB393(unk_0xFC1458A37D98B502(), false);
			unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
			iLocal_148 = 0;
		}
		else if (func_93(unk_0x9EB17624F44A8DA4()))
		{
			iLocal_148 = 0;
		}
	}
}

void func_367(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xC80D31E4B587871C(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_324.f_10, 23))
		{
			unk_0x872F1C1F8587CCC7(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_324.f_10), 23);
		}
	}
	else if (unk_0xC80D31E4B587871C(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_324.f_10, 23))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_324.f_10), 23);
	}
}

int func_368()
{
	if ((Global_1595543 != func_16() && unk_0xA57E3BD5C64527C7(unk_0x25D049AAC4603E65(Global_1595543))) && !unk_0x88DDBE9908752BF0(unk_0x25D049AAC4603E65(Global_1595543), 0))
	{
		return 1;
	}
	return 0;
}

int func_369(int iParam0)
{
	if (iParam0 != func_16())
	{
		return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_324.f_10, 23);
	}
	return 0;
}

void func_370()
{
	if (((((unk_0x3A711520F83BAE98() && func_15(unk_0x9EB17624F44A8DA4(), 1, 1)) && !Global_1574139) && Global_25233 == 0) && Global_103501) && unk_0x8F38E94BBF3404CD(joaat("director_mode")) > 0)
	{
		unk_0x34CDC8440125D3B1();
	}
}

void func_371()
{
	if ((func_30(unk_0x9EB17624F44A8DA4()) && func_365(unk_0x9EB17624F44A8DA4())) && func_46(func_364(unk_0x9EB17624F44A8DA4())) == 5)
	{
		Global_1664858 = 1;
		iLocal_147 = 1;
	}
	else if (iLocal_147)
	{
		Global_1664858 = 0;
		iLocal_147 = 0;
	}
}

void func_372()
{
	if (!unk_0xB9D80B12FE4456A5())
	{
		return;
	}
	if (!unk_0x74C475EB8E73D398(&(Global_4456448.f_122596), &Local_141))
	{
		if (!unk_0xAB019B170BF1309C(&(Global_4456448.f_122596)))
		{
			Local_141 = { Global_4456448.f_122596 };
		}
	}
	switch (iLocal_139)
	{
		case 0:
			Global_4262404 = 2;
			iLocal_139 = 1;
			break;
		
		case 1:
			if (func_79() == 0 && !Global_1312854)
			{
				if (Global_4262404 != 2)
				{
					iLocal_139 = 3;
				}
				if (func_374(-1027218631))
				{
					iLocal_139 = 3;
				}
			}
			break;
		
		case 3:
			if (unk_0xE51E15AF85DFE75E(&iLocal_138, 1474183246, 1663028727, -50712147, 0, 1))
			{
				if (unk_0xC972A21EB39CE12F(iLocal_138))
				{
					iLocal_139 = 2;
				}
			}
			break;
		
		case 2:
			func_373();
			if (iLocal_140 && unk_0x45B51A422AE852A9(iLocal_138))
			{
				iLocal_138 = -1;
				iLocal_139 = 4;
			}
			break;
		
		case 4:
			break;
	}
}

void func_373()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_138 == -1 || iLocal_140)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < unk_0xAAEEFEC091D0E30B(1))
	{
		if (unk_0xA387B84DA2EB1BEE(1, iVar0) == 223)
		{
			if (unk_0x575EF325DA5E3F04(1, iVar0, &iVar1, 7))
			{
				if (iVar1 == iLocal_138 && iVar1 != -1)
				{
					iLocal_140 = 1;
				}
			}
		}
		iVar0++;
	}
}

int func_374(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == Global_4261865[iVar0 /*80*/].f_4)
		{
			switch (Global_4261865[iVar0 /*80*/].f_4)
			{
				case -1027218631:
					if (unk_0xAB019B170BF1309C(&(Global_4261865[iVar0 /*80*/].f_8.f_29)))
					{
						return 1;
					}
					if (!unk_0xAB019B170BF1309C(&Local_141))
					{
						if (!unk_0x74C475EB8E73D398(&(Global_4261865[iVar0 /*80*/].f_8.f_29), &Local_141) && !unk_0x74C475EB8E73D398(&(Global_4261865[iVar0 /*80*/].f_8.f_29), "BM_ONE_DM"))
						{
							return 1;
						}
					}
					break;
				}
		}
		iVar0++;
	}
	return 0;
}

void func_375()
{
	if (func_93(unk_0x9EB17624F44A8DA4()))
	{
		if (func_377(unk_0x9EB17624F44A8DA4()) || func_376(unk_0x9EB17624F44A8DA4()))
		{
			unk_0x6CE951479F1EADC6(0);
			unk_0x7D709D41AE28CA49();
			unk_0x357D13611B587898();
			if (!unk_0x08D525BE62A22AE0())
			{
				unk_0x01B48CB2F72AE113(0, 200);
				unk_0x01B48CB2F72AE113(2, 200);
			}
			unk_0x4FB260623DD93924(0, 200, 1);
			unk_0x4FB260623DD93924(2, 200, 1);
		}
	}
}

bool func_376(int iParam0)
{
	return unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_210, 11);
}

int func_377(int iParam0)
{
	if (iParam0 != func_16())
	{
		return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_255, 16);
	}
	return 0;
}

void func_378()
{
	if (!func_19())
	{
		if (unk_0xC80D31E4B587871C(Global_1669535, 6))
		{
			unk_0x0EE72DB1CD8A3B86(&Global_1669535, 6);
		}
	}
}

void func_379()
{
	if (Global_1595343.f_170 && !unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (!func_314(unk_0x9EB17624F44A8DA4()) && !func_30(unk_0x9EB17624F44A8DA4()))
		{
			Global_1595343.f_170 = 0;
		}
	}
}

void func_380()
{
	if (func_129())
	{
		if (Global_1679652.f_705 == 4)
		{
			if (unk_0xC80D31E4B587871C(Global_1679652.f_2810, 1) && !unk_0xC80D31E4B587871C(Global_1679652.f_2810, 2))
			{
				unk_0x872F1C1F8587CCC7(&(Global_1679652.f_2810), 2);
				Global_1679652.f_705.f_5 = 0;
				Global_1679652.f_712.f_34 = 0;
				iLocal_136 = 1;
			}
		}
		else if (Global_1682463.f_705 == 3)
		{
			if (unk_0xC80D31E4B587871C(Global_1682463.f_1232, 1) && !unk_0xC80D31E4B587871C(Global_1682463.f_1232, 2))
			{
				unk_0x872F1C1F8587CCC7(&(Global_1682463.f_1232), 2);
				bLocal_137 = true;
			}
		}
	}
	else if (iLocal_136)
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_1679652.f_2810), 1);
		unk_0x0EE72DB1CD8A3B86(&(Global_1679652.f_2810), 2);
		iLocal_136 = 0;
	}
	else if (bLocal_137)
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_1682463.f_1232), 1);
		unk_0x0EE72DB1CD8A3B86(&(Global_1682463.f_1232), 2);
		iLocal_136 = 0;
	}
}

void func_381()
{
	int iVar0;
	
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && func_383(unk_0x82FF3DFBC3965CC0(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0))))
	{
		iVar0 = 1;
		Global_1685010 = 1;
	}
	else
	{
		iVar0 = 0;
		Global_1685010 = 0;
	}
	if (((func_382() || unk_0x04D7390E1D7464B7()) || func_114(0)) || iVar0)
	{
		func_353(&uLocal_133, 1, 0);
		Global_1678686 = 1;
	}
	else if ((Global_1678686 && func_63(&uLocal_133)) && func_22(&uLocal_133, 2000, 1))
	{
		if (iLocal_135 == 0)
		{
			Global_1678686 = 0;
			func_27(&uLocal_133);
		}
	}
}

bool func_382()
{
	return unk_0x8B7838D25C063186() != 0;
}

int func_383(int iParam0)
{
	if (iParam0 == joaat("bmx"))
	{
		return 1;
	}
	if (iParam0 == joaat("cruiser"))
	{
		return 1;
	}
	if (iParam0 == joaat("scorcher"))
	{
		return 1;
	}
	if ((iParam0 == joaat("tribike") || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3"))
	{
		return 1;
	}
	if (iParam0 == joaat("fixter"))
	{
		return 1;
	}
	return 0;
}

void func_384()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((func_15(unk_0x9EB17624F44A8DA4(), 0, 1) && !unk_0x4916190900E76373()) && func_407(unk_0x9EB17624F44A8DA4()))
	{
		if (func_406())
		{
			if (iLocal_131 == -1)
			{
				if ((unk_0x4B64A8D052027742() % 60) == 0)
				{
					iVar0 = 0;
					while (iVar0 < 6)
					{
						iVar1 = func_405(iVar0);
						if (func_280(iVar1, -1, 0) >= 200)
						{
							iLocal_131 = iVar0;
							iLocal_132 = func_280(iVar1, -1, 0);
							return;
						}
						iVar0++;
					}
				}
			}
			else if (!func_404())
			{
				iVar2 = func_405(iLocal_131);
				func_147(iVar2, 100, -1, 1, 0);
				func_403(iLocal_131, 100);
				func_402(iLocal_131, 100);
				Global_1350923[iLocal_131] = 100;
				iLocal_131 = -1;
				iLocal_132 = -1;
			}
			else if (func_385(iLocal_131, 1, -iLocal_132, &iLocal_130, 0))
			{
				if (iLocal_130 == 2)
				{
					iVar3 = func_405(iLocal_131);
					func_147(iVar3, 100, -1, 1, 0);
					func_403(iLocal_131, 100);
					func_402(iLocal_131, 100);
					Global_1350923[iLocal_131] = 100;
				}
				else if (iLocal_130 == 3)
				{
				}
				if (iLocal_130 != 1)
				{
					iLocal_131 = -1;
					iLocal_132 = -1;
					iLocal_130 = 0;
				}
			}
		}
	}
}

bool func_385(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (*iParam3 != 0 && *iParam3 != 1)
	{
		*iParam3 = 0;
	}
	switch (*iParam3)
	{
		case 0:
			if (func_401() != -1 || unk_0x8F38E94BBF3404CD(unk_0x8B948C59217A295D("appInternet")) > 0)
			{
				return 0;
			}
			else
			{
				iVar0 = func_400(iParam0, bParam4);
				iVar1 = func_399(iParam0);
				if (func_395(78225582, 69656641, iVar1, -886368739, iParam2, 0, 1, 4, 0, 3))
				{
					if (func_395(78225582, 69656641, iVar0, -886368739, iParam1, 0, 1, 4, 0, 3))
					{
						*iParam3 = 1;
					}
					else
					{
						*iParam3 = 3;
					}
				}
				else
				{
					*iParam3 = 3;
				}
				if (*iParam3 == 1 && func_392())
				{
				}
				else
				{
					*iParam3 = 3;
					func_388(func_401());
				}
			}
			break;
		
		case 1:
			if (func_401() == -1)
			{
				*iParam3 = 3;
			}
			else if (func_387(func_401()))
			{
				if (func_386(func_401()) == 2)
				{
					*iParam3 = 2;
					func_388(func_401());
				}
				else
				{
					*iParam3 = 3;
					func_388(func_401());
				}
			}
			break;
	}
	return (*iParam3 != 1 && *iParam3 != 0);
}

int func_386(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/].f_2;
	}
	return 0;
}

int func_387(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/].f_2 != 1;
	}
	return 0;
}

void func_388(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_404())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_391(iParam0))
		{
			if (!bVar0)
			{
				unk_0x166C543410DE9A3F();
			}
		}
		else if (!bVar0)
		{
			unk_0x45B51A422AE852A9(Global_4261865[iParam0 /*80*/]);
		}
		func_389(&(Global_4261865[iParam0 /*80*/]));
	}
}

void func_389(var uParam0)
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1593119440;
	uParam0->f_4 = -2085313189;
	uParam0->f_5 = 0;
	uParam0->f_6 = 1227573907;
	uParam0->f_7 = -1161833819;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	func_390(&(uParam0->f_8.f_3));
	func_390(&(uParam0->f_8.f_16));
	StringCopy(&(uParam0->f_8.f_29), "", 32);
	StringCopy(&(uParam0->f_8.f_37), "", 24);
	StringCopy(&(uParam0->f_8.f_43), "", 16);
	StringCopy(&(uParam0->f_8.f_47), "", 16);
	uParam0->f_8.f_51 = 0;
	uParam0->f_8.f_52 = 0;
	uParam0->f_8.f_53 = 0;
	uParam0->f_8.f_54 = 0;
	uParam0->f_8.f_55 = 0;
	uParam0->f_8.f_56 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_74 = 0;
	uParam0->f_73 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	uParam0->f_77 = 0;
	uParam0->f_79 = 0;
}

void func_390(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_391(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

int func_392()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_404())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_401();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x02404400A68A3D5B(func_149()) || unk_0xD7D895B4B5395982())
		{
			if (func_394(Global_4261865[iVar2 /*80*/].f_6, Global_4261865[iVar2 /*80*/].f_4, Global_4261865[iVar2 /*80*/].f_1) == 1)
			{
				Global_4262415 = 1;
			}
			return 0;
		}
		if (Global_2457985)
		{
			if (Global_4261865[iVar2 /*80*/].f_6 == 1067618600 || Global_4261865[iVar2 /*80*/].f_6 == -1303831698)
			{
				Global_4262416 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_393(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || unk_0xC972A21EB39CE12F(iVar3))
		{
			Global_4261865[iVar2 /*80*/].f_74 = 1;
			Global_4261865[iVar2 /*80*/].f_73 = 0;
			Global_4261865[iVar2 /*80*/].f_75 = unk_0x4B64A8D052027742();
			if (bVar0)
			{
				Global_4261865[iVar2 /*80*/].f_69 = 1;
				Global_4261865[iVar2 /*80*/].f_73 = 1;
			}
			Global_4261865[iVar2 /*80*/].f_79 = 0;
			Global_4262402 = 1;
			return 1;
		}
	}
	return 0;
}

int func_393(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/];
	}
	return -1;
}

int func_394(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
			case -1027218631:
			case -1398318418:
			case 1652884147:
			case -57868256:
			case -1216489292:
			case -46622315:
			case -352356931:
			case -990286235:
			case 563463121:
			case 1734805203:
			case 941287179:
			case -1186079845:
			case -1985150258:
			case -1127021384:
			case -109201286:
			case 312105838:
			case -661030418:
			case 1301046174:
			case -1586170317:
			case 393059668:
			case 23796958:
			case -1077156170:
			case 1780666425:
			case -2043695058:
			case -1922554349:
			case 1287308202:
			case 691372038:
			case 1480707108:
			case 1512499951:
			case 562283735:
			case -154732333:
			case -1362660491:
			case 645708827:
			case 767907967:
			case -1970151306:
			case 718859568:
			case -1955564771:
			case 892388724:
			case -1426920838:
			case 1349151477:
			case 1620609399:
			case 1961641934:
			case 210955503:
			case -59668082:
			case 1736933716:
			case -1468524125:
			case 111573502:
			case 1525644423:
			case 968073639:
			case 1577781788:
			case -934465332:
			case -1194253122:
			case -212607085:
			case -815546555:
			case 1048226110:
			case 569170531:
			case -856006867:
			case 848090538:
			case -47546905:
			case -293060240:
			case 463142405:
			case 1550217370:
			case -664597565:
			case 599804707:
			case 1052472386:
			case -2130199671:
			case -1227654538:
			case 1864522104:
			case 215608230:
			case -876012764:
			case -722894325:
			case 1407278493:
			case -1579394494:
			case -27443911:
			case 1179783540:
			case 923419301:
			case -308826175:
			case 603298940:
			case -12619854:
			case -311112675:
			case 870439158:
			case -974288740:
			case -4138654:
			case -1180954122:
			case -1918051016:
			case 844330594:
			case 1934825517:
			case 1852024236:
			case 2099238988:
			case 1952643559:
			case -1172900789:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_395(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_404())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x02404400A68A3D5B(func_149()) || unk_0xD7D895B4B5395982())
		{
			Global_4262415 = 1;
			return 0;
		}
		if (Global_2457985)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4262416 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_401();
	if (iVar1 == -1)
	{
		if (!func_397(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_396(iParam1))
		{
			Var2.f_0 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2.f_0 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_4261865[iVar1 /*80*/].f_1 = Var2.f_2;
		Global_4261865[iVar1 /*80*/].f_76 = Var2.f_0;
		Global_4261865[iVar1 /*80*/].f_77 = Var2.f_1;
		if (bVar0 || unk_0x15A46872C5B66D6B(&Var2, uParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_396(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_397(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = false;
	if (!func_404())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x02404400A68A3D5B(func_149()) || unk_0xD7D895B4B5395982())
		{
			Global_4262415 = 1;
			return 0;
		}
		if (Global_2457985)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4262416 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_4261865[iVar1 /*80*/].f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4261865[iVar1 /*80*/].f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (unk_0x4A843C260B34973D())
		{
			unk_0x166C543410DE9A3F();
		}
	}
	if (bVar0 || unk_0x270730F2007CFC17(&uVar3, iParam2, uParam3, uParam4))
	{
		*iParam0 = func_398(uVar3, uParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5, 0);
		return 1;
	}
	return 0;
}

int func_398(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8, int iParam9)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4261865[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_404())
			{
				uParam0 = iVar0 + 900;
			}
			Global_4261865[iVar0 /*80*/].f_2 = 1;
			Global_4261865[iVar0 /*80*/].f_1 = iParam5;
			Global_4261865[iVar0 /*80*/].f_3 = uParam1;
			Global_4261865[iVar0 /*80*/].f_4 = iParam2;
			Global_4261865[iVar0 /*80*/].f_7 = uParam3;
			Global_4261865[iVar0 /*80*/].f_5 = 0;
			Global_4261865[iVar0 /*80*/] = uParam0;
			Global_4261865[iVar0 /*80*/].f_6 = iParam4;
			Global_4261865[iVar0 /*80*/].f_72 = uParam8;
			Global_4261865[iVar0 /*80*/].f_71 = uParam7;
			Global_4261865[iVar0 /*80*/].f_74 = iParam9;
			Global_4261865[iVar0 /*80*/].f_73 = 0;
			Global_4261865[iVar0 /*80*/].f_75 = unk_0x4B64A8D052027742();
			Global_4261865[iVar0 /*80*/].f_79 = 0;
			Global_4262402 = 0;
			if (bParam6)
			{
				Global_4261865[iVar0 /*80*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_399(int iParam0)
{
	char cVar0[64];
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_MATTOTALFORFACTORY0_v0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_MATTOTALFORFACTORY1_v0", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_MATTOTALFORFACTORY2_v0", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_MATTOTALFORFACTORY3_v0", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_MATTOTALFORFACTORY4_v0", 64);
			break;
		
		case 5:
			StringCopy(&cVar0, "MP_STAT_MATTOTALFORFACTORY5_v0", 64);
			break;
	}
	if (unk_0xAB019B170BF1309C(&cVar0))
	{
		return -1;
	}
	return unk_0x8B948C59217A295D(&cVar0);
}

int func_400(int iParam0, bool bParam1)
{
	char cVar0[64];
	
	if (bParam1)
	{
		if (iParam0 == 5)
		{
			StringCopy(&cVar0, "MP_STAT_RESTOTALFORFACTORY5_v0", 64);
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				StringCopy(&cVar0, "MP_STAT_PRODTOTALFORFACTORY0_v0", 64);
				break;
			
			case 1:
				StringCopy(&cVar0, "MP_STAT_PRODTOTALFORFACTORY1_v0", 64);
				break;
			
			case 2:
				StringCopy(&cVar0, "MP_STAT_PRODTOTALFORFACTORY2_v0", 64);
				break;
			
			case 3:
				StringCopy(&cVar0, "MP_STAT_PRODTOTALFORFACTORY3_v0", 64);
				break;
			
			case 4:
				StringCopy(&cVar0, "MP_STAT_PRODTOTALFORFACTORY4_v0", 64);
				break;
			
			case 5:
				StringCopy(&cVar0, "MP_STAT_PRODTOTALFORFACTORY5_v0", 64);
				break;
			}
	}
	if (unk_0xAB019B170BF1309C(&cVar0))
	{
		return -1;
	}
	return unk_0x8B948C59217A295D(&cVar0);
}

int func_401()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_393(iVar0) != 2147483647)
		{
			if (func_391(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_402(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1350923[iParam0])
	{
		Global_1350923[iParam0] = iParam1;
	}
}

void func_403(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_160[iParam0 /*12*/].f_2)
	{
		Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_160[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_404()
{
	if (unk_0xB9D80B12FE4456A5())
	{
		return unk_0xE0E46A90C7BC7510();
	}
	return 0;
}

int func_405(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3830;
		
		case 1:
			return 3831;
		
		case 2:
			return 3832;
		
		case 3:
			return 3833;
		
		case 4:
			return 3834;
		
		case 5:
			return 5426;
		
		default:
	}
	return 3830;
}

int func_406()
{
	if (!func_404())
	{
		return 1;
	}
	if ((Global_68215 || Global_2492361 != -1) || func_401() != -1)
	{
		return iLocal_130 != 0;
	}
	return 1;
}

int func_407(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_16())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_408()
{
	if (Global_1595343.f_170 && !func_15(unk_0x9EB17624F44A8DA4(), 1, 1))
	{
		if (!func_314(unk_0x9EB17624F44A8DA4()) && !func_30(unk_0x9EB17624F44A8DA4()))
		{
			Global_1595343.f_170 = 0;
		}
	}
}

void func_409()
{
	if (((func_15(unk_0x9EB17624F44A8DA4(), 1, 1) && func_315(unk_0x9EB17624F44A8DA4())) && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0)) && !func_410(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)))
	{
		iLocal_129 = 1;
		Global_1677773 = 1;
	}
	else if (iLocal_129)
	{
		iLocal_129 = 0;
		Global_1677773 = 0;
	}
}

int func_410(int iParam0)
{
	switch (unk_0x82FF3DFBC3965CC0(uParam0))
	{
		case joaat("technical2"):
		case joaat("boxville5"):
		case joaat("wastelander"):
		case joaat("phantom2"):
		case joaat("voltic2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("ruiner2"):
		case joaat("blazer5"):
			return 1;
			break;
	}
	return 0;
}

void func_411()
{
	bool bVar0;
	bool bVar1;
	
	if (unk_0xB9D80B12FE4456A5())
	{
		if (((!unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) || unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502())) || Global_1312854) || !Global_1574312)
		{
			if (!Global_1574312)
			{
				if (iLocal_128 > -1)
				{
					Global_262145.f_18117 = iLocal_128;
					iLocal_127 = 0;
					iLocal_128 = -1;
					fLocal_124 = 0f;
				}
			}
			return;
		}
		if (Global_262145.f_18115)
		{
			bVar0 = fLocal_124 > 20f;
			if (!bVar0)
			{
				if (unk_0x3A711520F83BAE98())
				{
					if (unk_0x4916190900E76373())
					{
						bVar1 = true;
						if (!unk_0x4C4813CAAD70E814(0))
						{
						}
						else
						{
							bVar1 = true;
							if (func_413())
							{
								bVar1 = false;
							}
						}
						if (bVar1)
						{
						}
						else
						{
							func_412();
							fLocal_124 = (fLocal_124 + unk_0x46C19C2753391FBF());
						}
					}
				}
			}
			if (bVar0 && !iLocal_127)
			{
				iLocal_128 = Global_262145.f_18117;
				Global_262145.f_18117 = -1;
				iLocal_127 = 1;
			}
		}
	}
}

void func_412()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_119[iVar0] = 0;
		iVar0++;
	}
}

int func_413()
{
	bool bVar0;
	struct<3> Var1;
	var uVar4[4];
	
	bVar0 = true;
	Var1 = { unk_0xED88B217A4B257BD(unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502())) };
	if (func_63(&Local_125) && func_351(Local_125, 4000, 0))
	{
		func_27(&Local_125);
	}
	func_415(&(uVar4[0]), &(uVar4[1]), &(uVar4[2]), &(uVar4[3]), 0);
	if (func_414(uVar4[3], &(iLocal_119[3])) || unk_0xE97272C977DEADD3(Var1.f_2) >= 0.45f)
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		func_353(&Local_125, 0, 0);
	}
	if (func_63(&Local_125) && (unk_0x5A632962B08A1872(0, 72) || unk_0x5A632962B08A1872(0, 71)))
	{
		return 1;
	}
	return 0;
}

int func_414(int iParam0, var uParam1)
{
	if ((iParam0 > 1 || iParam0 < -1) && *uParam1 != iParam0)
	{
		*uParam1 = iParam0;
		return 1;
	}
	return 0;
}

void func_415(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = unk_0xF34EE736CF047844((unk_0x869308DF4F5FB0C3(2, 218) * 127f));
	*uParam1 = unk_0xF34EE736CF047844((unk_0x869308DF4F5FB0C3(2, 219) * 127f));
	*uParam2 = unk_0xF34EE736CF047844((unk_0x869308DF4F5FB0C3(2, 220) * 127f));
	*uParam3 = unk_0xF34EE736CF047844((unk_0x869308DF4F5FB0C3(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = unk_0xF34EE736CF047844((unk_0x84326F8D8D6875EC(2, 218) * 127f));
			*uParam1 = unk_0xF34EE736CF047844((unk_0x84326F8D8D6875EC(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = unk_0xF34EE736CF047844((unk_0x84326F8D8D6875EC(2, 220) * 127f));
			*uParam3 = unk_0xF34EE736CF047844((unk_0x84326F8D8D6875EC(2, 221) * 127f));
		}
	}
}

void func_416()
{
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (func_112(unk_0xFC1458A37D98B502(), 0) == -1)
		{
			if (!iLocal_118)
			{
				if (unk_0x08D525BE62A22AE0() && !unk_0xC80D31E4B587871C(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_324.f_9, 31))
				{
					if (unk_0x6B4C37F2EEC636CC(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0)))
					{
						unk_0x872F1C1F8587CCC7(&(Global_1669535.f_2903), 20);
						iLocal_118 = 1;
						Global_1595343.f_170 = 0;
					}
				}
			}
		}
	}
	if (!unk_0x08D525BE62A22AE0() || !unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
	{
		if (iLocal_118)
		{
			iLocal_118 = 0;
			unk_0x0EE72DB1CD8A3B86(&(Global_1669535.f_2903), 20);
		}
	}
}

void func_417()
{
	if (func_89(unk_0x9EB17624F44A8DA4()))
	{
		if (func_46(func_111(unk_0x9EB17624F44A8DA4())) == 9)
		{
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				if (func_112(unk_0xFC1458A37D98B502(), 0) == -1)
				{
					if (!iLocal_117)
					{
						if (unk_0x08D525BE62A22AE0() && !unk_0xC80D31E4B587871C(Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_324.f_9, 31))
						{
							iLocal_117 = 1;
							Global_1664858 = 1;
						}
					}
				}
			}
		}
	}
	if (func_93(unk_0x9EB17624F44A8DA4()) && unk_0x9F7B586A14398C40())
	{
		if (iLocal_117)
		{
			iLocal_117 = 0;
			Global_1664858 = 0;
		}
	}
}

void func_418()
{
	if (!func_19())
	{
		if (Global_1595343.f_170)
		{
			Global_1595343.f_170 = 0;
		}
	}
}

void func_419()
{
	if ((!unk_0x4916190900E76373() && !unk_0xD12513AD6BF72ED4()) && func_93(unk_0x9EB17624F44A8DA4()))
	{
		if (Global_25501)
		{
			Global_2492487 = 2147483647;
			iLocal_116 = 1;
			Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_183 = func_16();
		}
	}
	if (iLocal_116 && (!Global_25501 || !func_93(unk_0x9EB17624F44A8DA4())))
	{
		iLocal_116 = 0;
		Global_2492487 = 0;
	}
}

void func_420()
{
	if (((unk_0x3A711520F83BAE98() && !unk_0x4916190900E76373()) && !unk_0xD12513AD6BF72ED4()) && func_93(unk_0x9EB17624F44A8DA4()))
	{
		if (func_98(unk_0xFC1458A37D98B502()))
		{
			if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 362.7268f, 4839.757f, -59.99935f, 358.749f, 4841.089f, -57.99935f, 3.5f, 0, 1, 0))
			{
				if ((((((func_19() && !func_114(0)) && !unk_0x8164A5C4CBC21707(unk_0x9EB17624F44A8DA4())) && !Global_68215) && !func_382()) && !Global_1685022) || iLocal_114)
				{
					if ((unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), 2106541073) == 0 || unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), 2106541073) == 1) || iLocal_115)
					{
						func_423();
						if (iLocal_115)
						{
							if ((unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), 2106541073) == 0 || unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), 2106541073) == 1) || unk_0xA5F6598E13F98E08(unk_0xFC1458A37D98B502(), "anim@mp_radio@garage@low", "idle_a", 3))
							{
								iLocal_115 = 0;
							}
						}
					}
					else if (func_421())
					{
						func_423();
						iLocal_115 = 1;
					}
					else if (iLocal_114)
					{
						iLocal_114 = 0;
						iLocal_115 = 0;
					}
				}
			}
			else if (iLocal_114)
			{
				if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 358.8868f, 4841.604f, -59.99935f, 360.265f, 4845.075f, -57.99935f, 2.5f, 0, 1, 0) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 363.2439f, 4841.12f, -59.99408f, 362.3869f, 4843.069f, -57.99935f, 2.5f, 0, 1, 0))
				{
					unk_0x4FB260623DD93924(2, 51, 1);
					Global_36764 = 1;
				}
			}
		}
		else
		{
			iLocal_114 = 0;
		}
	}
}

int func_421()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_113 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_36565[iVar0 /*32*/] && unk_0x74C475EB8E73D398(&(Global_36565[iVar0 /*32*/].f_8), "MPRD_CTXT"))
			{
				iLocal_113 = Global_36565[iVar0 /*32*/].f_1;
			}
			iVar0++;
		}
	}
	else
	{
		iVar1 = func_422(iLocal_113);
		if (iVar1 == -1)
		{
			iLocal_113 = -1;
		}
		else if (Global_36565[iVar1 /*32*/].f_7)
		{
			if (Global_36565[iVar1 /*32*/] && Global_36565[iVar1 /*32*/].f_4)
			{
				iLocal_113 = -1;
				return 1;
			}
			iLocal_113 = -1;
		}
		else if (unk_0xE8C126B7ADBB9D63(2, 51))
		{
			iLocal_113 = -1;
			return 1;
		}
	}
	return 0;
}

int func_422(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36565[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_423()
{
	if (!iLocal_114)
	{
		iLocal_114 = 1;
	}
	if (unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 358.8868f, 4841.604f, -59.99935f, 360.265f, 4845.075f, -57.99935f, 2.5f, 0, 1, 0) || unk_0x0F3033474C49912D(unk_0xFC1458A37D98B502(), 363.2439f, 4841.12f, -59.99408f, 362.3869f, 4843.069f, -57.99935f, 2.5f, 0, 1, 0))
	{
		unk_0x4FB260623DD93924(2, 51, 1);
		Global_36764 = 1;
	}
}

void func_424()
{
	if (func_15(unk_0x9EB17624F44A8DA4(), 1, 1))
	{
		if (func_427(unk_0x9EB17624F44A8DA4()))
		{
			if (!func_19() || func_426(unk_0x9EB17624F44A8DA4(), 1, 0))
			{
				func_425(0);
			}
		}
	}
}

void func_425(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_255, 14))
		{
			unk_0x872F1C1F8587CCC7(&(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_255), 14);
		}
	}
	else if (unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_255, 14))
	{
		unk_0x0EE72DB1CD8A3B86(&(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_255), 14);
	}
}

int func_426(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_16())
	{
		return 0;
	}
	if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_427(int iParam0)
{
	if (iParam0 != func_16())
	{
		return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_255, 14);
	}
	return 0;
}

void func_428()
{
	int iVar0;
	int iVar1;
	
	if ((func_115(unk_0x9EB17624F44A8DA4()) && unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0)) && !iLocal_112)
	{
		Global_1669535.f_2903.f_3 = 81;
		iLocal_112 = 1;
	}
	else if (iLocal_112)
	{
		if (Global_1669535.f_2903.f_1 == 16)
		{
			Global_1669535.f_2903.f_3 = -1;
			iLocal_112 = 0;
		}
	}
	if (Global_1669535.f_2903.f_3 == 81)
	{
		if (Global_1669535.f_2903.f_1 == 10)
		{
			if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
			{
				if (func_112(unk_0xFC1458A37D98B502(), 0) == -1)
				{
					if (!func_429())
					{
						if (!func_63(&uLocal_110))
						{
							func_23(&uLocal_110, 0, 0);
						}
						else
						{
							iVar0 = 0;
							iVar1 = unk_0x87889570F3396ABD(842.6024f, -3239.216f, -96.8692f, 5f, joaat("trailerlarge"), 131076);
							if ((unk_0x6ADD12BF4D6D2587(iVar1) && !unk_0x191BE1BC8F26F3C1(iVar1, 0)) && func_15(unk_0x9EB17624F44A8DA4(), 1, 1))
							{
								if (func_100(unk_0xFC1458A37D98B502(), unk_0x3F90543934DCD7E6(iVar1, 0f, -7.5f, 0f), 1) < 6.5f)
								{
									iVar0 = 1;
								}
							}
							if (func_22(&uLocal_110, 4500, 0) || iVar0)
							{
								if (unk_0x9F7B586A14398C40())
								{
									unk_0xAE83ED4C9081AE6F(500);
								}
								if (unk_0x3E9CABD07B829173() || unk_0x08D525BE62A22AE0())
								{
									func_27(&uLocal_110);
									func_117(1);
									Global_1669535.f_2903.f_3 = -1;
									iLocal_112 = 0;
								}
							}
						}
					}
				}
			}
		}
		else if (func_63(&uLocal_110))
		{
			func_27(&uLocal_110);
		}
	}
}

bool func_429()
{
	return unk_0xC80D31E4B587871C(Global_1669535, 11);
}

void func_430()
{
	if (func_431())
	{
		if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && unk_0x3E9CABD07B829173())
		{
			if (func_15(unk_0x9EB17624F44A8DA4(), 1, 1))
			{
				if (!iLocal_109)
				{
					unk_0x957CEE967C939968(unk_0xFC1458A37D98B502());
					iLocal_109 = 1;
				}
			}
		}
	}
	else if (iLocal_109)
	{
		iLocal_109 = 0;
	}
}

int func_431()
{
	if (unk_0x9EB17624F44A8DA4() != func_16())
	{
		return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_247, 2);
	}
	return 0;
}

void func_432()
{
	if (!Global_262145.f_18120 && !iLocal_108)
	{
		return;
	}
	iLocal_108 = 1;
	if (Global_25233 == 2 && func_433())
	{
		if (((((unk_0x74C475EB8E73D398(&(Global_17301.f_1), "FMMCC_TTITLE") || unk_0x74C475EB8E73D398(&(Global_17301.f_73[Global_17301.f_5090 /*6*/]), "FMMCC_TEST6")) || unk_0x74C475EB8E73D398(&(Global_17301.f_73[Global_17301.f_5090 /*6*/]), "MC_TEST2")) || unk_0x74C475EB8E73D398(&(Global_17301.f_73[Global_17301.f_5090 /*6*/]), "FMMC_MENU_REC")) || unk_0x74C475EB8E73D398(&(Global_17301.f_73[Global_17301.f_5090 /*6*/]), "FMMCC_TOPM6")) || Global_1312831)
		{
			Global_262145.f_18120 = 0;
		}
		else
		{
			Global_262145.f_18120 = 1;
		}
	}
}

bool func_433()
{
	return ((Global_4456448.f_50256 == 6 || Global_4456448.f_50256 == 7) && Global_4456448.f_2 == 20);
}

void func_434()
{
	if (unk_0x8F38E94BBF3404CD(joaat("fm_mission_controller")) > 0)
	{
		if ((Global_980494 == 10 || Global_980494 == 11) || Global_980494 == 12)
		{
			if (Global_1368344 != 0)
			{
				Global_1368344 = 0;
			}
		}
	}
}

void func_435()
{
	if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0) && unk_0xB0DA749C8A7CCBBF(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), joaat("annihilator")))
	{
		if (func_112(unk_0xFC1458A37D98B502(), 0) != -1)
		{
			if (!unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_677, 1))
			{
				unk_0x872F1C1F8587CCC7(&(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_677), 1);
			}
		}
	}
}

void func_436()
{
	if (Global_4456448 == 2)
	{
		if (!unk_0xC80D31E4B587871C(Global_4456448.f_18, 25))
		{
			if (func_437())
			{
				unk_0x872F1C1F8587CCC7(&(Global_4456448.f_18), 25);
			}
		}
	}
}

bool func_437()
{
	return (unk_0xC80D31E4B587871C(Global_4456448.f_50263, 15) && !func_433());
}

void func_438()
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if ((Global_262145.f_5850[iVar0] != -1 && ((Global_262145.f_5850[iVar0] == 202 || Global_262145.f_5850[iVar0] == 245) || Global_262145.f_5850[iVar0] == 246)) && unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()))
		{
			if (!func_463((23 + iVar0)))
			{
				bVar1 = true;
			}
			else
			{
				iVar0++;
			}
			if (bVar1)
			{
				if (func_462(joaat("mpply_curr_tran_series_hash")) != 0)
				{
					func_461(joaat("mpply_curr_tran_series_hash"), 0);
				}
			}
			if (!func_463(32))
			{
				func_460(32);
			}
			if (!iLocal_107)
			{
				if (func_442())
				{
					if (!unk_0xC80D31E4B587871C(Global_1574349.f_1, 1) && Global_262145.f_5850[9] != -1)
					{
						if ((unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()) && !unk_0xF491DD47B88AA84E()) && !unk_0xF491DD47B88AA84E())
						{
							uVar2 = func_280(6104, -1, 0);
							if ((!unk_0xC80D31E4B587871C(uVar2, 18) || !unk_0xC80D31E4B587871C(iVar2, 19)) || !unk_0xC80D31E4B587871C(iVar2, 20))
							{
								if (!unk_0xC80D31E4B587871C(iVar2, 18))
								{
									unk_0x872F1C1F8587CCC7(&iVar2, 18);
								}
								else if (!unk_0xC80D31E4B587871C(iVar2, 19))
								{
									unk_0x872F1C1F8587CCC7(&iVar2, 19);
								}
								else
								{
									unk_0x872F1C1F8587CCC7(&iVar2, 20);
								}
								func_147(6104, iVar2, -1, 1, 0);
								func_439("FMSTP_HLP_13", func_441(611), func_440(9), -1);
							}
							iLocal_107 = 1;
						}
					}
				}
			}
		}

void func_439(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	unk_0x67129637F30DEB3F(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xF92B835A141C6BDD(iParam2);
	}
	unk_0x854FACC4E5F40C82(uParam1);
	unk_0x376CFA11DE0FE521(0, 0, 0, iParam3);
}

int func_440(int iParam0)
{
	if (iParam0 != -1)
	{
		switch (Global_262145.f_5850[iParam0])
		{
			case 2:
				return 12;
			
			case 129:
				return 19;
			
			case 202:
				return 15;
			
			case 203:
				return 15;
			
			case 204:
				return 15;
			
			case 223:
				return 46;
			
			case 224:
				return 50;
			
			case 232:
				return 126;
			
			case 245:
				return 46;
			
			case 246:
				return 126;
			}
		
		default:
	}
	return 12;
}

char* func_441(int iParam0)
{
	switch (iParam0)
	{
		case 435:
			return "~BLIP_RACE_STUNT~";
		
		case 315:
			return "~BLIP_RACE_LAND~";
		
		case 379:
			return "~BLIP_RACE_FOOT~";
		
		case 376:
			return "~BLIP_RACE_BIKE~";
		
		case 316:
			return "~BLIP_RACE_SEA~";
		
		case 314:
			return "~BLIP_RACE_AIR~";
		
		case 310:
			return "~BLIP_DEATHMATCH~";
		
		case 378:
			return "~BLIP_TEAM_DEATHMATCH~";
		
		case 380:
			return "~BLIP_VEHICLE_DEATHMATCH~";
		
		case 409:
			return "~BLIP_LAST_TEAM_STANDING~";
		
		case 408:
			return "~BLIP_CAPTURE_THE_FLAG~";
		
		case 304:
			return "~BLIP_UGC_MISSION~";
		
		case 445:
			return "~BLIP_MP_LAMAR~";
		
		case 488:
			return "~BLIP_STUNT~";
		
		case 272:
			return "~BLIP_CASH_PICKUP~";
		
		case 490:
			return "~BLIP_STUNT_PREMIUM~";
		
		case 491:
			return "~BLIP_ADVERSARY~";
		
		case 516:
			return "~BLIP_ADVERSARY_4~";
		
		case 517:
			return "~BLIP_ADVERSARY_8~";
		
		case 518:
			return "~BLIP_ADVERSARY_10~";
		
		case 519:
			return "~BLIP_ADVERSARY_12~";
		
		case 520:
			return "~BLIP_ADVERSARY_16~";
		
		case 545:
			return "~BLIP_STEERINGWHEEL~";
		
		case 546:
			return "~BLIP_TROPHY~";
		
		case 565:
			return "~BLIP_ADVERSARY_BUNKER~";
		
		case 571:
			return "~BLIP_RACE_TF~";
		
		case 610:
			return "~BLIP_ACSR_RACE_TARGET~";
		
		case 611:
			return "~BLIP_ACSR_RACE_HOTRING~";
		
		default:
	}
	return "~BLIP_STUNT~";
}

int func_442()
{
	if (unk_0xB01117EF93F91860())
	{
		return 0;
	}
	if (unk_0x4916190900E76373())
	{
		return 0;
	}
	if (!func_15(unk_0x9EB17624F44A8DA4(), 1, 1))
	{
		return 0;
	}
	if (func_142())
	{
		return 0;
	}
	if (((((func_198(unk_0x9EB17624F44A8DA4(), 1) || func_198(unk_0x9EB17624F44A8DA4(), 2)) || func_198(unk_0x9EB17624F44A8DA4(), 21)) || Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 136) || Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 129) || Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/] == 148)
	{
		return 0;
	}
	if (func_459(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (func_458(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (func_329(unk_0x9EB17624F44A8DA4(), 1))
	{
		return 0;
	}
	if (func_319(unk_0x9EB17624F44A8DA4(), 0, 0, 0, 0, 0, 0, 0, 1))
	{
		return 0;
	}
	if (unk_0x0F30C1F1717A6437() && unk_0xCCB3104AC481BEE4() != -2060115030)
	{
		return 0;
	}
	if (!func_19())
	{
		return 0;
	}
	if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_98 != 3)
	{
		return 0;
	}
	if (func_451())
	{
		return 0;
	}
	if (func_110())
	{
		return 0;
	}
	if (func_449())
	{
		return 0;
	}
	if (func_448(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (func_447())
	{
		return 0;
	}
	if (!func_445(-1) && !func_330(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	if (!func_444())
	{
		return 0;
	}
	if (func_188(unk_0x9EB17624F44A8DA4(), 0))
	{
		return 0;
	}
	if (func_45(unk_0x9EB17624F44A8DA4()) || func_443(unk_0x9EB17624F44A8DA4()))
	{
		return 0;
	}
	return 1;
}

int func_443(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_46(Global_2422736[iParam0 /*420*/].f_324.f_1) == 6;
			}
		}
	}
	return 0;
}

bool func_444()
{
	return Global_2455152.f_6;
}

bool func_445(int iParam0)
{
	return func_446(123, iParam0);
}

int func_446(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2547365[iParam0 /*3*/][func_148(iParam1)];
	if (unk_0xACAF9DBDD76F24DF(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_447()
{
	return Global_2447174.f_627;
}

bool func_448(int iParam0)
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_266.f_15, 14);
}

bool func_449()
{
	func_450();
	return unk_0xC80D31E4B587871C(Global_1574349, 0);
}

void func_450()
{
	if (Global_1574349 == -1)
	{
		Global_1574349 = func_280(2470, -1, 0);
		Global_1574349.f_1 = func_280(6103, -1, 0);
	}
}

int func_451()
{
	if (func_198(unk_0x9EB17624F44A8DA4(), 8))
	{
		return 1;
	}
	if (func_198(unk_0x9EB17624F44A8DA4(), 10))
	{
		return 1;
	}
	if (func_198(unk_0x9EB17624F44A8DA4(), 12))
	{
		return 1;
	}
	if (func_198(unk_0x9EB17624F44A8DA4(), 14))
	{
		return 1;
	}
	if (func_198(unk_0x9EB17624F44A8DA4(), 13))
	{
		return 1;
	}
	if (func_457())
	{
		return 1;
	}
	if (func_456())
	{
		return 1;
	}
	if (!func_455() && !func_454())
	{
		if (!func_453())
		{
			if (!func_452())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_452()
{
	var uVar0;
	
	if (unk_0xC80D31E4B587871C(Global_2512808.f_1706, 7))
	{
		return 1;
	}
	uVar0 = Global_1368207[func_148(-1)];
	if (unk_0xC80D31E4B587871C(uVar0, 6))
	{
		unk_0x872F1C1F8587CCC7(&(Global_2512808.f_1706), 7);
		return 1;
	}
	if (func_455())
	{
		return 1;
	}
	if (func_454())
	{
		return 1;
	}
	return 0;
}

bool func_453()
{
	return unk_0xC80D31E4B587871C(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_142, 2);
}

bool func_454()
{
	return Global_1312842;
}

bool func_455()
{
	return Global_1312844;
}

int func_456()
{
	if (unk_0xC80D31E4B587871C(Global_2512808.f_1706, 28) && !unk_0xC80D31E4B587871C(Global_2512808.f_1706, 29))
	{
		return 1;
	}
	return 0;
}

bool func_457()
{
	return unk_0xC80D31E4B587871C(Global_2512808.f_1707, 3);
}

bool func_458(int iParam0)
{
	return func_200(iParam0, 20);
}

int func_459(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xC80D31E4B587871C(Global_1627537[iVar0 /*532*/].f_1, 7);
	}
	return 0;
}

void func_460(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x872F1C1F8587CCC7(&(Global_1574349.f_3[iVar0]), iVar1);
}

void func_461(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, 1);
	}
}

int func_462(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0xFA3CE529DBB66C85(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_463(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xC80D31E4B587871C(Global_1574349.f_3[iVar0], iVar1);
}

void func_464()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		if (Global_1574312)
		{
			if (iLocal_105 == 0)
			{
				if (unk_0x3E9CABD07B829173())
				{
					iVar0 = unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), -1794415470);
					if (iVar0 == 1)
					{
						iLocal_105++;
						uLocal_106 = unk_0xD1952A425B78FFC0();
					}
				}
			}
			if (iLocal_105 == 1)
			{
				iVar0 = unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), -1794415470);
				if (unk_0x88DDBE9908752BF0(unk_0xFC1458A37D98B502(), 0))
				{
					if (unk_0x841136DE070DD9F6(unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0), func_465(unk_0xFC1458A37D98B502(), 0)))
					{
						iLocal_105++;
					}
					else
					{
						iLocal_105 = 0;
					}
				}
				else if (iVar0 == 7)
				{
					iLocal_105 = 0;
				}
			}
			if (iLocal_105 == 2)
			{
				iVar0 = unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), -1794415470);
				if (unk_0x3E9CABD07B829173())
				{
					iVar1 = unk_0x38F6270C9AE5FE40(unk_0xD1952A425B78FFC0(), uLocal_106);
					if (iVar1 > 15000)
					{
						unk_0xE01CE1EBCD7EE551(unk_0xFC1458A37D98B502(), 0, 0);
						iLocal_105 = 0;
					}
				}
				else
				{
					iLocal_105 = 0;
				}
			}
		}
		else if (!iLocal_105 == 0)
		{
			iLocal_105 = 0;
		}
	}
}

int func_465(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x3AB6A1A9084FB0A4(iParam0))
	{
		if (unk_0x88DDBE9908752BF0(iParam0, iParam1))
		{
			uVar0 = unk_0xDFD115BB10FE46A9(iParam0, iParam1);
			if (unk_0x6ADD12BF4D6D2587(uVar0))
			{
				iVar1 = unk_0xF82225DEA5272C6B(unk_0x82FF3DFBC3965CC0(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x8EE3A848975DDF21(iVar0, iVar3, 0))
					{
						if (unk_0x317536BCEA8FA6B0(iVar0, iVar3, 0) == iParam0)
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

void func_466()
{
	int iVar0;
	
	iVar0 = func_467();
	if (unk_0x4916190900E76373())
	{
		if (!iLocal_104 == iVar0)
		{
			iLocal_104 = iVar0;
		}
		return;
	}
	if (!Global_4265007.f_1)
	{
		if (iVar0 == 1)
		{
			Global_4265007 = 0;
			iLocal_104 = iVar0;
		}
		else if (!iLocal_104 == iVar0)
		{
			iLocal_104 = iVar0;
		}
	}
	else if (!iLocal_104 == iVar0)
	{
		iLocal_104 = iVar0;
	}
}

var func_467()
{
	return Global_4265007;
}

void func_468()
{
	int iVar0;
	
	if (unk_0x4916190900E76373())
	{
		if (func_470(14))
		{
			if (!unk_0xAB019B170BF1309C(&(Global_4456448.f_122602[0 /*6*/])) && unk_0x74C475EB8E73D398(&(Global_4456448.f_122602[0 /*6*/]), "DUktNT1BcESgZn5_IQDcVQ"))
			{
				StringCopy(&(Global_4456448.f_122602[0 /*6*/]), "NgoyFjgEfEKpavBYi7CzPw", 24);
			}
			if (func_469(unk_0x9EB17624F44A8DA4()))
			{
				if (!func_188(unk_0x9EB17624F44A8DA4(), 0))
				{
					unk_0xA7F366A6BD097EF0(unk_0x9EB17624F44A8DA4(), 8);
					Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_211 = 8;
					iVar0 = func_149();
					if (iVar0 != -1)
					{
						if (Global_1312730[iVar0] != 8)
						{
							Global_1312730[iVar0] = 8;
						}
						if (!Global_1312834[iVar0])
						{
							Global_1312834[iVar0] = 1;
						}
					}
				}
			}
		}
	}
}

bool func_469(int iParam0)
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_39.f_18, 14);
}

bool func_470(int iParam0)
{
	return Global_262145.f_4997[iParam0] == Global_4456448.f_122309;
}

void func_471()
{
	if (!Global_262145.f_18179)
	{
		Global_262145.f_18179 = 1;
	}
}

void func_472()
{
	if (Global_1685005)
	{
		Global_1678695.f_689 = 0;
		Global_1679652.f_689 = 0;
		Global_1682463.f_689 = 0;
		iLocal_103 = 1;
	}
	else if (iLocal_103)
	{
		Global_1678695.f_689 = 1;
		Global_1679652.f_689 = 1;
		Global_1682463.f_689 = 1;
		iLocal_103 = 0;
	}
}

void func_473()
{
	int iVar0;
	
	if (!iLocal_102)
	{
		if (Global_1574147)
		{
			iVar0 = func_462(joaat("mpply_char_exploit_level"));
			if (iVar0 >= 4)
			{
				Global_262145.f_9470 = 1;
			}
			iLocal_102 = 1;
		}
	}
	else if (!Global_1574147)
	{
		iLocal_102 = 0;
	}
}

void func_474()
{
	if (!iLocal_101)
	{
		if (Global_1574147)
		{
			if (func_476() || func_475())
			{
				Global_262145.f_18994 = 1;
			}
			else
			{
				Global_262145.f_18994 = 0;
			}
			iLocal_101 = 1;
		}
	}
	else if (!Global_1574147)
	{
		iLocal_101 = 0;
	}
}

int func_475()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_462(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_9579)
	{
		return 0;
	}
	uVar1[0] = func_462(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_462(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_462(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_462(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_9575 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_9579)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

int func_476()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_462(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_9578)
	{
		return 0;
	}
	uVar1[0] = func_462(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_462(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_462(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_462(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_9574 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_9578)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

void func_477()
{
	int iVar0;
	
	if (unk_0xB9D80B12FE4456A5())
	{
		iVar0 = 0;
		while (iVar0 < Global_1595693)
		{
			unk_0x872F1C1F8587CCC7(&(Global_1595693[iVar0 /*680*/].f_564), 1);
			iVar0++;
		}
	}
}

void func_478()
{
	if (Global_262145.f_9554 != 120)
	{
		Global_262145.f_9554 = 120;
	}
}

void func_479()
{
	struct<3> Var0;
	bool bVar3;
	int iVar4;
	
	if (func_15(unk_0x9EB17624F44A8DA4(), 1, 1))
	{
		Var0 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
		bVar3 = true;
		iVar4 = 0;
		while (iVar4 < 13)
		{
			if (func_487(Var0, iVar4))
			{
				if (func_486(iVar4))
				{
					bVar3 = false;
					if (!func_9(Global_1595557, func_485(iVar4), 0))
					{
						Global_1595557 = { func_485(iVar4) };
						Global_1595557.f_6 = { func_484(iVar4) };
						Global_1595557.f_3 = { func_483(iVar4) };
					}
					Jump @150; //curOff = 130
				}
				else
				{
					func_481(0);
				}
			}
			iVar4++;
		}
		if (bVar3)
		{
			if (!func_480(Global_1595557))
			{
				Global_1595557 = { 0f, 0f, 0f };
				Global_1595557.f_6 = { 0f, 0f, 0f };
				Global_1595557.f_3 = { 0f, 0f, 0f };
			}
			func_481(1);
		}
	}
}

int func_480(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_481(bool bParam0)
{
	var uVar0;
	
	uVar0 = unk_0xC6757F745366DB47(unk_0xFC1458A37D98B502());
	if (unk_0x6ADD12BF4D6D2587(uVar0))
	{
		if (unk_0x317536BCEA8FA6B0(iVar0, -1, 0) == unk_0xFC1458A37D98B502())
		{
			if (unk_0x3B0047CED068C463(unk_0x82FF3DFBC3965CC0(iVar0)))
			{
				if (unk_0x82FF3DFBC3965CC0(iVar0) == joaat("deluxo"))
				{
					if (!bParam0)
					{
						if (!iLocal_99)
						{
							if (unk_0xA0BF73C5030D3F60(iVar0))
							{
								unk_0x907C1E9739C59273(iVar0, 0);
								unk_0x980275ACDD1F982D(iVar0, 1);
								unk_0x230B54DE912C8F49(iVar0, 0f);
								iLocal_99 = 1;
								iLocal_100 = iVar0;
							}
						}
					}
					else if (iLocal_99)
					{
						if (unk_0xA0BF73C5030D3F60(iVar0))
						{
							unk_0x907C1E9739C59273(iVar0, 1);
							unk_0x980275ACDD1F982D(iVar0, 0);
							iLocal_99 = 0;
						}
					}
				}
			}
		}
	}
	else if (iLocal_99)
	{
		if (unk_0x6ADD12BF4D6D2587(iLocal_100))
		{
			if (func_482(iLocal_100))
			{
				unk_0x907C1E9739C59273(iLocal_100, 1);
				unk_0x980275ACDD1F982D(iLocal_100, 0);
				iLocal_99 = 0;
				iLocal_100 = 0;
			}
		}
	}
}

int func_482(int iParam0)
{
	if (unk_0x6ADD12BF4D6D2587(uParam0))
	{
		if (unk_0x0D4BF24EE51A419A(iParam0))
		{
			unk_0xC8DAB4CEBB9AB263(iParam0);
			return unk_0xA0BF73C5030D3F60(iParam0);
		}
	}
	return 0;
}

Vector3 func_483(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2485.969f, -384.049f, 92.7355f;
		
		case 1:
			return -179.6299f, -584.0938f, 179.3362f;
		
		case 2:
			return -604.2457f, -595.2758f, 24.7538f;
		
		case 3:
			return 431.3916f, -269.8411f, 68.9958f;
		
		case 4:
			return -58.9558f, -403.6268f, 36.4628f;
		
		case 5:
			return -441.9041f, -406.2004f, 32.1633f;
		
		case 6:
			return 274.159f, -1124.412f, 28.2336f;
		
		case 7:
			return -725.6843f, -2227.119f, 4.8666f;
		
		case 8:
			return -1801.836f, -375.35f, 61.7153f;
		
		case 9:
			return -1853.494f, -333.7117f, 56.0778f;
		
		case 10:
			return -24.1538f, -282.991f, 45.5614f;
		
		case 11:
			return 1852.208f, 2238.885f, 54.0273f;
		
		case 12:
			return 1852.208f, 2238.885f, 54.0273f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_484(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2f, 10.25f, 2f;
		
		case 1:
			return 1.75f, 2.5f, 4.25f;
		
		case 2:
			return 6f, 8.75f, 1.75f;
		
		case 3:
			return 2f, 2.25f, 0.7f;
		
		case 4:
			return 5.25f, 6.5f, 2.5f;
		
		case 5:
			return 5.25f, 8.5f, 5.75f;
		
		case 6:
			return 3.75f, 7.25f, 4f;
		
		case 7:
			return 17f, 6.5f, 5f;
		
		case 8:
			return 2f, 2f, 16f;
		
		case 9:
			return 2f, 2f, 16f;
		
		case 10:
			return 4f, 4.25f, 6.5f;
		
		case 11:
			return 3.5f, 4f, 3f;
		
		case 12:
			return 5f, 3.25f, 3.25f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_485(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2474.346f, -380.0562f, 98.47422f;
		
		case 1:
			return -170.5702f, -584.4093f, 194.7069f;
		
		case 2:
			return -604.0977f, -583.6525f, 31.35151f;
		
		case 3:
			return 438.6248f, -270.4485f, 69.56553f;
		
		case 4:
			return -53.07461f, -392.1524f, 43.71928f;
		
		case 5:
			return -447.5276f, -418.0577f, 44.21907f;
		
		case 6:
			return 278.6066f, -1111.949f, 35.75998f;
		
		case 7:
			return -718.4734f, -2237.792f, 18.50737f;
		
		case 8:
			return -1812.522f, -363.0521f, 76.42702f;
		
		case 9:
			return -1864.364f, -327.3476f, 76.66357f;
		
		case 10:
			return -25.33898f, -293.0663f, 55.07753f;
		
		case 11:
			return 1854.82f, 2248.552f, 56.42865f;
		
		case 12:
			return 1853.604f, 2241.949f, 57.064f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_486(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 0;
		
		default:
	}
	return 1;
}

bool func_487(struct<3> Param0, int iParam3)
{
	return unk_0xBE3C4023003180FC(Param0, func_485(iParam3), 0) < 30f;
}

void func_488(var uParam0)
{
	if (*uParam0 == 5 || !Global_2455152.f_3)
	{
		return;
	}
	func_624(uParam0);
	if (((((((((((((!unk_0x3A711520F83BAE98() || unk_0x4916190900E76373()) || func_623(unk_0x9EB17624F44A8DA4())) || unk_0x8164A5C4CBC21707(unk_0x9EB17624F44A8DA4())) || !unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4())) || unk_0x02B38EC1719A4937(unk_0x9EB17624F44A8DA4())) || unk_0x0BA31FF7931F3DD3(unk_0xFC1458A37D98B502())) || func_622()) || Global_69671) || (func_39(unk_0x9EB17624F44A8DA4(), 0) && func_458(unk_0x9EB17624F44A8DA4()))) || func_43(unk_0x9EB17624F44A8DA4(), 0)) || func_110()) || func_620(unk_0x9EB17624F44A8DA4(), 32)) || func_326())
	{
		func_619(uParam0);
		return;
	}
	if (uParam0->f_4 == 0 && func_444())
	{
		uParam0->f_4 = func_618(600);
		uParam0->f_5 = func_617();
		uParam0->f_5 = func_616(uParam0->f_5);
		uParam0->f_5 = func_615(uParam0->f_5);
	}
	if (uParam0->f_5 == -1)
	{
		return;
	}
	func_611(uParam0);
	switch (*uParam0)
	{
		case 0:
			if (!func_330(unk_0x9EB17624F44A8DA4()))
			{
				return;
			}
			if (!func_19())
			{
				return;
			}
			func_23(&(uParam0->f_6), 0, 0);
			if (!unk_0xC80D31E4B587871C(uParam0->f_3, 6) && !func_610())
			{
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			func_609(uParam0, 0);
			if (func_22(&(uParam0->f_6), 30000, 0))
			{
				if (func_588(func_608(), func_607()))
				{
					func_584(func_587(), func_586(), func_585(), -1);
					unk_0x872F1C1F8587CCC7(&(uParam0->f_3), 6);
					*uParam0 = 2;
					func_27(&(uParam0->f_6));
				}
			}
			break;
		
		case 2:
			if (uParam0->f_5 != 0)
			{
				func_583(uParam0);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (!unk_0xC80D31E4B587871C(uParam0->f_3, 3))
			{
				if (func_22(&(uParam0->f_6), 60000, 0) && !unk_0xF491DD47B88AA84E())
				{
					func_584(func_582(), func_581(), func_580(), -1);
					unk_0x872F1C1F8587CCC7(&(uParam0->f_3), 3);
					unk_0x872F1C1F8587CCC7(&(uParam0->f_1), 2);
					func_27(&(uParam0->f_6));
					func_549(uParam0);
				}
			}
			else if (unk_0xC80D31E4B587871C(uParam0->f_1, 2))
			{
				if (func_22(&(uParam0->f_6), 1200000, 0))
				{
					unk_0x0EE72DB1CD8A3B86(&(uParam0->f_1), 2);
					unk_0x0EE72DB1CD8A3B86(&(uParam0->f_3), 5);
				}
			}
			else
			{
				func_543(uParam0);
			}
			func_609(uParam0, 1);
			func_489(uParam0);
			break;
		
		case 4:
			break;
	}
}

void func_489(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	struct<3> Var5;
	
	fVar4 = 1E+07f;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		fVar3 = unk_0xB7A628320EFF8E47(func_542(iVar1), unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 0));
		if (fVar3 < fVar4)
		{
			fVar4 = fVar3;
			iVar2 = iVar1;
		}
		if (!unk_0xC80D31E4B587871C(uParam0->f_1, 1))
		{
			if (!unk_0xF491DD47B88AA84E() && fVar3 < 2500f)
			{
				func_539(func_541(), func_540(), -1);
				unk_0x872F1C1F8587CCC7(&(uParam0->f_1), 1);
			}
		}
		Var5 = { func_542(iVar1) };
		if (fVar3 < 10000f)
		{
			func_538(Var5);
		}
		if (unk_0x0C88267282FD588F(unk_0xFC1458A37D98B502(), Var5, 2.75f, 2.75f, 2.75f, 0, 1, 0))
		{
			bVar0 = true;
			unk_0x4FB260623DD93924(0, 101, 1);
			unk_0x4FB260623DD93924(0, 81, 1);
			unk_0x4FB260623DD93924(0, 82, 1);
			unk_0x4FB260623DD93924(0, 85, 1);
			unk_0x4FB260623DD93924(0, 332, 1);
			unk_0x4FB260623DD93924(0, 333, 1);
			if (!func_536("STRING", func_537(), 0))
			{
				func_439("STRING", func_537(), 0, 30000);
				unk_0x872F1C1F8587CCC7(&(uParam0->f_1), 0);
			}
			if (unk_0xF2B58F79D29425B4(2, 51) && !func_114(0))
			{
				func_491(&(Global_794709.f_4[uParam0->f_5 /*88*/]), Global_794709.f_4[uParam0->f_5 /*88*/].f_65, Global_794709.f_4[uParam0->f_5 /*88*/].f_71);
				func_490(uParam0);
				*uParam0 = 4;
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
		func_490(uParam0);
	}
	if (uParam0->f_2 != iVar2)
	{
		uParam0->f_2 = iVar2;
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (unk_0xA6DECE14FC9A8C51(uParam0->f_10[iVar1]))
			{
				if (iVar1 == uParam0->f_2)
				{
					unk_0x66DAED36FB41050D(uParam0->f_10[iVar1], 0);
				}
				else
				{
					unk_0x66DAED36FB41050D(uParam0->f_10[iVar1], 1);
				}
			}
			iVar1++;
		}
	}
}

void func_490(var uParam0)
{
	if (unk_0xC80D31E4B587871C(uParam0->f_1, 0))
	{
		if (func_536("STRING", func_537(), 0))
		{
			unk_0x3E80C2F7BC665259(1);
		}
		unk_0x0EE72DB1CD8A3B86(&(uParam0->f_1), 0);
	}
}

void func_491(char* sParam0, int iParam1, var uParam2)
{
	func_515(func_516(unk_0x9EB17624F44A8DA4()));
	func_509(unk_0x9EB17624F44A8DA4(), 0, 376832);
	Global_2447954.f_3771 = 1;
	iParam1 = 0;
	func_508();
	func_507();
	func_506(32);
	if (func_505() || func_128())
	{
		func_504();
		Global_2447954.f_1.f_2802 = 0;
		func_503(uParam2);
		func_502(iParam1);
		func_501(sParam0);
		func_500();
	}
	else
	{
		func_499(iParam1);
		func_497(sParam0);
		func_496(uParam2);
		func_495();
		func_493();
		func_492();
		Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_98 = 8;
	}
}

void func_492()
{
	unk_0x872F1C1F8587CCC7(&Global_2447174, 7);
}

void func_493()
{
	unk_0x872F1C1F8587CCC7(&Global_2447174, 5);
	func_494();
}

void func_494()
{
	unk_0x872F1C1F8587CCC7(&Global_2447174, 8);
}

void func_495()
{
	unk_0x0EE72DB1CD8A3B86(&(Global_2447174.f_2), 14);
}

void func_496(var uParam0)
{
	Global_2447174.f_34 = uParam0;
}

void func_497(char* sParam0)
{
	StringCopy(&(Global_2447174.f_746), sParam0, 24);
	if (func_498())
	{
		StringCopy(&(Global_971064.f_42), sParam0, 24);
	}
}

bool func_498()
{
	return unk_0xC80D31E4B587871C(Global_2447954.f_1.f_2809, 5);
}

void func_499(int iParam0)
{
	Global_2447174.f_6 = iParam0;
}

void func_500()
{
	Global_2447174.f_31 = 0;
}

void func_501(char* sParam0)
{
	StringCopy(&(Global_2447174.f_19), sParam0, 24);
}

void func_502(int iParam0)
{
	Global_2447174.f_7 = iParam0;
}

void func_503(var uParam0)
{
	Global_2447174.f_8 = uParam0;
}

void func_504()
{
	Global_2447174.f_643 = 1;
}

bool func_505()
{
	return unk_0xC80D31E4B587871C(Global_2447174.f_2, 11);
}

void func_506(int iParam0)
{
	Global_979886 = iParam0;
}

void func_507()
{
	unk_0x872F1C1F8587CCC7(&(Global_2447174.f_3), 2);
}

void func_508()
{
	Global_2455152.f_1 = 0;
}

void func_509(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	var uVar25;
	int iVar26;
	
	if (bParam1)
	{
		if (unk_0xEBD8A0B96FCAF579())
		{
			unk_0x7635EA803CE40962(0);
		}
	}
	if (!unk_0x3A711520F83BAE98())
	{
		uVar0 = iParam2;
		unk_0x59F2A26BF856E30A(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		bVar23 = iParam2 & 8388608 != false;
		if (!func_19())
		{
			bVar24 = false;
			if (bParam1 == 1)
			{
				bVar24 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar24 = true;
			}
			if (bVar9 == 1)
			{
				bVar24 = true;
			}
			if (bVar24)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0x552F39AE86E07792(iParam0) && unk_0x5BEF7A5AB8F17255(iParam0))
		{
			uVar25 = unk_0x25D049AAC4603E65(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x3A711520F83BAE98())
				{
					unk_0xB68F1251512BDC18(1);
				}
				else if (bVar13 || (!func_188(unk_0x9EB17624F44A8DA4(), 0) && !func_514()))
				{
					unk_0xB3A8974D2C811672(uVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0x3A711520F83BAE98() && !bVar18)
					{
						unk_0xB68F1251512BDC18(0);
					}
					Global_2422736[iParam0 /*420*/].f_259 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_513(uVar25) && !unk_0xDDF5130488C0B76A(uVar25))
				{
					if (!bVar21)
					{
						unk_0xB18E1DBC397238E1(uVar25, true, 0);
					}
				}
				if (!unk_0xDFFD5F8C8ABCB7EF(uVar25))
				{
					if (!bVar20)
					{
						unk_0xEDC33A771FAEB393(uVar25, false);
					}
					unk_0xFBA991D3A851E195(iVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0xEDC33A771FAEB393(iVar25, false);
				}
				unk_0x5C5D33A1B2711D21(iVar25, true);
				unk_0x8FA21D9CF7681249(iParam0, 0);
				unk_0x8A92C5AE18686726(iVar25);
				unk_0x5718F894FDA63A9E(iVar25, 1);
				func_512();
				func_511();
				if (unk_0x56B73C6866440457())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0x40189ECE75CF9724())
				{
				}
				Global_2422736[iParam0 /*420*/].f_260 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_513(iVar25) && !unk_0xDDF5130488C0B76A(iVar25))
				{
					if (!bVar21)
					{
						unk_0xB18E1DBC397238E1(iVar25, !bVar14, 0);
					}
					if (!unk_0xDFFD5F8C8ABCB7EF(iVar25))
					{
						if (!bVar20)
						{
							unk_0xEDC33A771FAEB393(iVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0xFBA991D3A851E195(iVar25, 1);
						}
					}
					if (func_510(Global_4456448.f_143970))
					{
						unk_0xEDC33A771FAEB393(iVar25, true);
					}
				}
				if (Global_1312831)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					unk_0x8FA21D9CF7681249(iParam0, 0);
				}
				else
				{
					unk_0x8FA21D9CF7681249(iParam0, 1);
				}
				unk_0x5C5D33A1B2711D21(iVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0x6728497EE586D1FE(iVar25) && !unk_0x88DDBE9908752BF0(iVar25, 0))
					{
						unk_0x957CEE967C939968(iVar25);
					}
				}
			}
			iVar26 = 0;
			if (bVar1)
			{
				iVar26 |= 2;
			}
			if (bVar2)
			{
				iVar26 |= 4;
			}
			if (bVar3)
			{
				iVar26 |= 8;
			}
			if (bVar4)
			{
				iVar26 |= 16;
			}
			if (bVar5)
			{
				iVar26 |= 32;
			}
			if (bVar6)
			{
				iVar26 |= 64;
			}
			if (bVar7)
			{
				iVar26 |= 128;
			}
			if (bVar8)
			{
				iVar26 |= 256;
			}
			if (bVar9)
			{
				iVar26 |= 512;
			}
			if (bVar10)
			{
				iVar26 |= 1024;
			}
			if (bVar11)
			{
				iVar26 |= 2048;
			}
			if (bVar12)
			{
				iVar26 |= 4096;
			}
			unk_0x59F2A26BF856E30A(iParam0, bParam1, iVar26);
		}
	}
}

bool func_510(int iParam0)
{
	return iParam0 == 17;
}

void func_511()
{
	struct<3> Var0;
	
	Global_2436181.f_1117 = 0;
	Global_2436181.f_1118 = 0;
	Global_2436181.f_1119 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2436181.f_1124 = -1;
	Global_2436181.f_1125 = 0;
	Global_2405047.f_2650 = { Var0 };
}

void func_512()
{
	Global_2405047.f_675 = 0;
	Global_2405047.f_2693 = 0;
	Global_2405047.f_508 = 0;
	Global_2405047.f_587 = 0;
	Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_222 = 0;
	Global_2405047.f_2649 = 0;
}

int func_513(int iParam0)
{
	int iVar0;
	
	if (unk_0x88DDBE9908752BF0(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x78F50AA8F955BEFC(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_514()
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

void func_515(struct<3> Param0)
{
	Global_2456817 = { Param0 };
}

Vector3 func_516(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0xA6DECE14FC9A8C51(Global_2415606[iParam0]))
	{
		Var0 = { unk_0x67247AA13B7486A3(Global_2415606[iParam0]) };
	}
	else if (unk_0xA6DECE14FC9A8C51(Global_2415606.f_33[iParam0]) && !iParam0 == Global_2436181)
	{
		Var0 = { unk_0x67247AA13B7486A3(Global_2415606.f_33[iParam0]) };
	}
	if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
	{
		return Var0;
	}
	return func_517(iParam0);
}

Vector3 func_517(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	if (Global_1595693[iParam0 /*680*/].f_266.f_17 > 0)
	{
		Var1 = { func_534(func_535(Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17)) };
		if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
		{
			return Var1;
		}
	}
	else
	{
		func_531(func_533(iParam0), &iVar0);
		if (iVar0 > 0)
		{
			Var1 = { func_534(func_535(iVar0)) };
			if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
			{
				return Var1;
			}
		}
	}
	if (func_14(iParam0))
	{
		Var1 = { func_522(iParam0) };
		if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
		{
			return Var1;
		}
	}
	if (func_521(iParam0))
	{
		iVar4 = func_520(iParam0);
		if (iVar4 > -1)
		{
			Var1 = { Global_1669535.f_42[iVar4 /*3*/] };
			if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
			{
				return Var1;
			}
		}
	}
	if (func_519(iParam0))
	{
		Var1 = { func_518(iParam0) };
		if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
		{
			return Var1;
		}
	}
	return func_533(iParam0);
}

Vector3 func_518(int iParam0)
{
	return Global_2422736[iParam0 /*420*/].f_77.f_7;
}

int func_519(int iParam0)
{
	if (Global_2422736[iParam0 /*420*/].f_77.f_6 != -1)
	{
		return 1;
	}
	return 0;
}

int func_520(int iParam0)
{
	if (iParam0 != func_16())
	{
		return Global_2422736[iParam0 /*420*/].f_324.f_11;
	}
	return -1;
}

int func_521(int iParam0)
{
	bool bVar0;
	
	if (iParam0 != func_16() && (func_15(iParam0, 1, 1) || Global_2405047.f_2640))
	{
		bVar0 = unk_0xC80D31E4B587871C(Global_2422736[iParam0 /*420*/].f_324, 1);
		return bVar0;
	}
	return 0;
}

Vector3 func_522(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (iParam0 == func_16())
	{
	}
	if (func_45(iParam0))
	{
		iVar0 = func_340(iParam0);
		if (iVar0 != func_16())
		{
			if (!func_42(iVar0))
			{
				if (unk_0x6ADD12BF4D6D2587(Global_2436181.f_644[iVar0 /*3*/][1]))
				{
					return unk_0xB3328BA8976B416C(Global_2436181.f_644[iVar0 /*3*/][1], 0);
				}
				else
				{
					return Global_2422736[func_340(iParam0) /*420*/].f_324.f_5;
				}
			}
			else
			{
				iVar1 = func_530(iVar0);
				if (!iVar1 == -1)
				{
					return Global_1669535.f_42[iVar1 /*3*/];
				}
			}
		}
	}
	else if (func_443(iParam0))
	{
		if (unk_0x6ADD12BF4D6D2587(Global_2512808.f_293))
		{
			return unk_0xB3328BA8976B416C(Global_2512808.f_293, 0);
		}
	}
	else if (func_115(iParam0) && !func_529(iParam0))
	{
		iVar2 = Global_2422736[iParam0 /*420*/].f_324.f_4;
		if (iVar2 != func_16())
		{
			iVar3 = func_530(iVar2);
			if (!iVar3 == -1)
			{
				return Global_1669535.f_42[iVar3 /*3*/];
			}
		}
	}
	else if (func_93(iParam0) && !func_528(iParam0))
	{
		if (func_14(iParam0) && func_527())
		{
			return Global_1669535.f_42[Global_2422736[iParam0 /*420*/].f_324.f_1 /*3*/];
		}
		iVar4 = Global_2422736[iParam0 /*420*/].f_324.f_4;
		if (iVar4 != func_16())
		{
			if (func_526(iVar4))
			{
				iVar5 = func_525(iVar4);
				if (iVar5 != -1)
				{
					return Global_1669535.f_42[iVar5 /*3*/];
				}
			}
		}
	}
	else if (func_54(iParam0))
	{
		iVar6 = func_524(iParam0);
		if (iVar6 != func_16())
		{
			if (!func_52(iVar6))
			{
				if (unk_0x6ADD12BF4D6D2587(Global_2436181.f_741[iVar6]))
				{
					return unk_0xB3328BA8976B416C(Global_2436181.f_741[iVar6], 0);
				}
				else
				{
					return Global_2422736[func_524(iParam0) /*420*/].f_324.f_14;
				}
			}
			else
			{
				iVar7 = func_525(iVar6);
				if (!iVar7 == -1)
				{
					return Global_1669535.f_42[iVar7 /*3*/];
				}
			}
		}
	}
	else if (func_523(iParam0))
	{
		if (unk_0x6ADD12BF4D6D2587(Global_2512808.f_295))
		{
			return unk_0xB3328BA8976B416C(Global_2512808.f_295, 0);
		}
	}
	return Global_1669535.f_42[Global_2422736[iParam0 /*420*/].f_324.f_1 /*3*/];
}

int func_523(int iParam0)
{
	if (iParam0 != func_16())
	{
		if (func_15(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_46(Global_2422736[iParam0 /*420*/].f_324.f_1) == 10;
			}
		}
	}
	return 0;
}

int func_524(int iParam0)
{
	if (iParam0 == func_16())
	{
		return iParam0;
	}
	return Global_2422736[iParam0 /*420*/].f_324.f_4;
}

int func_525(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_16())
	{
		return -1;
	}
	iVar0 = func_51(iParam0);
	if (!iVar0 == 0)
	{
		return func_49(iVar0);
	}
	return -1;
}

int func_526(int iParam0)
{
	if (iParam0 != func_16())
	{
		return Global_1595693[iParam0 /*680*/].f_266.f_248 != 0;
	}
	return 0;
}

int func_527()
{
	if (unk_0xC80D31E4B587871C(Global_1669535.f_2916, 13) || Global_1669535.f_1815)
	{
		return 1;
	}
	return 0;
}

int func_528(int iParam0)
{
	if (iParam0 == func_16())
	{
		return 0;
	}
	if (func_93(iParam0) && Global_2422736[iParam0 /*420*/].f_324.f_4 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_529(int iParam0)
{
	if (iParam0 == func_16())
	{
		return 0;
	}
	if (func_115(iParam0) && Global_2422736[iParam0 /*420*/].f_324.f_4 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_530(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_16())
	{
		return -1;
	}
	iVar0 = func_37(iParam0);
	if (!iVar0 == 0)
	{
		return func_342(iVar0);
	}
	return -1;
}

void func_531(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 7;
	while (iVar0 <= iVar1)
	{
		if (func_532(Param0, iVar0, 0))
		{
			*uParam3 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 34;
	iVar1 = 43;
	while (iVar0 <= iVar1)
	{
		if (func_532(Param0, iVar0, 0))
		{
			*uParam3 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 61;
	iVar1 = 65;
	while (iVar0 <= iVar1)
	{
		if (func_532(Param0, iVar0, 0))
		{
			*uParam3 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 8;
	if (func_532(Param0, iVar0, 0))
	{
		if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17 > 0)
		{
			*uParam3 = Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17;
		}
		else if (Global_2404633.f_1 > 0)
		{
			*uParam3 = Global_2404633.f_1;
		}
		else
		{
			*uParam3 = iVar0;
		}
		return;
	}
	iVar0 = 17;
	if (func_532(Param0, iVar0, 0))
	{
		if (Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17 > 0)
		{
			*uParam3 = Global_1595693[unk_0x9EB17624F44A8DA4() /*680*/].f_266.f_17;
		}
		else if (Global_2404633.f_1 > 0)
		{
			*uParam3 = Global_2404633.f_1;
		}
		else
		{
			*uParam3 = iVar0;
		}
		return;
	}
}

int func_532(struct<3> Param0, int iParam3, float fParam4)
{
	int iVar0;
	struct<3> Var1[3];
	struct<3> Var11[3];
	int iVar21;
	
	if (iParam3 != 999)
	{
		iVar21 = 0;
		while (iVar21 < 3)
		{
			if (Global_1049531[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_2 > Global_1049531[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_3.f_2)
			{
				Var1[iVar21 /*3*/] = { Global_1049531[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/] };
				Var11[iVar21 /*3*/] = { Global_1049531[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_3 };
			}
			else
			{
				Var1[iVar21 /*3*/] = { Global_1049531[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_3 };
				Var11[iVar21 /*3*/] = { Global_1049531[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/] };
			}
			Var1[iVar21 /*3*/].f_2 = (Var1[iVar21 /*3*/].f_2 + fParam4);
			Var11[iVar21 /*3*/].f_2 = (Var11[iVar21 /*3*/].f_2 - fParam4);
			iVar21++;
		}
		if ((unk_0x8AE9E5E8F6DC40C9(Param0, Var11[0 /*3*/], Var1[0 /*3*/], Global_1049531[iParam3 /*1951*/].f_146.f_57[0 /*8*/].f_6, 0, 1) || (Global_1049531[iParam3 /*1951*/].f_146.f_57[1 /*8*/].f_6 != 0f && unk_0x8AE9E5E8F6DC40C9(Param0, Var11[1 /*3*/], Var1[1 /*3*/], Global_1049531[iParam3 /*1951*/].f_146.f_57[1 /*8*/].f_6, 0, 1))) || (Global_1049531[iParam3 /*1951*/].f_146.f_57[2 /*8*/].f_6 != 0f && unk_0x8AE9E5E8F6DC40C9(Param0, Var11[2 /*3*/], Var1[2 /*3*/], Global_1049531[iParam3 /*1951*/].f_146.f_57[2 /*8*/].f_6, 0, 1)))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 1;
		while (iVar0 <= 7)
		{
			if (func_532(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 34;
		while (iVar0 <= 43)
		{
			if (func_532(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 61;
		while (iVar0 <= 65)
		{
			if (func_532(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 73;
		while (iVar0 <= 76)
		{
			if (func_532(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 77;
		while (iVar0 <= 82)
		{
			if (func_532(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 83;
		while (iVar0 <= 85)
		{
			if (func_532(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 87;
		while (iVar0 <= 90)
		{
			if (func_532(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 91;
		while (iVar0 <= 102)
		{
			if (func_532(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 103;
		while (iVar0 <= 113)
		{
			if (func_532(Param0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		if (func_532(Param0, 8, fParam4))
		{
			return 1;
		}
		if (func_532(Param0, 17, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_533(int iParam0)
{
	return unk_0xB3328BA8976B416C(unk_0x25D049AAC4603E65(iParam0), 0);
}

Vector3 func_534(int iParam0)
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 1:
			Var0 = { -773.4775f, 310.6321f, 84.6981f };
			break;
		
		case 2:
			Var0 = { -252.5713f, -949.9199f, 30.221f };
			break;
		
		case 3:
			Var0 = { -1443.094f, -544.7684f, 33.7424f };
			break;
		
		case 4:
			Var0 = { -913.85f, -455.1392f, 38.5999f };
			break;
		
		case 5:
			Var0 = { -47.3145f, -585.9766f, 36.9593f };
			break;
		
		case 6:
			Var0 = { -932.7474f, -383.9246f, 37.9613f };
			break;
		
		case 7:
			Var0 = { -619.1315f, 37.8841f, 42.5883f };
			break;
		
		case 8:
			Var0 = { 284.9614f, -159.9891f, 63.6221f };
			break;
		
		case 9:
			Var0 = { 2.8889f, 35.7762f, 70.5349f };
			break;
		
		case 10:
			Var0 = { 9.74f, 84.6906f, 77.3975f };
			break;
		
		case 11:
			Var0 = { -512.1465f, 111.2223f, 62.351f };
			break;
		
		case 12:
			Var0 = { -197.3405f, 88.1053f, 68.7422f };
			break;
		
		case 13:
			Var0 = { -628.3212f, 165.8364f, 60.1651f };
			break;
		
		case 14:
			Var0 = { -973.3757f, -1429.425f, 6.6791f };
			break;
		
		case 15:
			Var0 = { -829.1362f, -855.0104f, 18.6297f };
			break;
		
		case 16:
			Var0 = { -757.5739f, -755.5591f, 25.5697f };
			break;
		
		case 17:
			Var0 = { -45.1289f, -57.0925f, 62.2531f };
			break;
		
		case 18:
			Var0 = { -206.7293f, 184.142f, 79.3279f };
			break;
		
		case 19:
			Var0 = { -811.7045f, -984.1961f, 13.1538f };
			break;
		
		case 20:
			Var0 = { -664.0032f, -853.6744f, 23.4325f };
			break;
		
		case 21:
			Var0 = { -1534.025f, -324.5247f, 46.5237f };
			break;
		
		case 22:
			Var0 = { -1561.381f, -412.1974f, 41.389f };
			break;
		
		case 23:
			Var0 = { -1608.851f, -429.184f, 39.439f };
			break;
		
		case 24:
			Var0 = { 964.3583f, -1034.199f, 39.8303f };
			break;
		
		case 25:
			Var0 = { 894.2868f, -885.5679f, 26.1212f };
			break;
		
		case 26:
			Var0 = { 821.1741f, -924.1658f, 25.1998f };
			break;
		
		case 27:
			Var0 = { 759.7933f, -759.8209f, 25.759f };
			break;
		
		case 28:
			Var0 = { 844.7289f, -1164.1f, 24.2681f };
			break;
		
		case 29:
			Var0 = { 526.2521f, -1604.613f, 28.2625f };
			break;
		
		case 30:
			Var0 = { 572.0462f, -1570.736f, 27.4904f };
			break;
		
		case 31:
			Var0 = { 722.2852f, -1190.617f, 23.282f };
			break;
		
		case 32:
			Var0 = { 497.6212f, -1494.084f, 28.2893f };
			break;
		
		case 33:
			Var0 = { 480.3127f, -1549.937f, 28.2828f };
			break;
		
		case 34:
			Var0 = { -68.702f, 6426.148f, 30.439f };
			break;
		
		case 35:
			Var0 = { -247.4374f, 6240.294f, 30.4892f };
			break;
		
		case 36:
			Var0 = { 2554.165f, 4668.059f, 33.0233f };
			break;
		
		case 37:
			Var0 = { 2461.22f, 1589.255f, 32.0443f };
			break;
		
		case 38:
			Var0 = { -2203.335f, 4244.427f, 47.3305f };
			break;
		
		case 39:
			Var0 = { 218.0665f, 2601.817f, 44.7668f };
			break;
		
		case 40:
			Var0 = { 186.1719f, 2786.343f, 45.0144f };
			break;
		
		case 41:
			Var0 = { 642.0746f, 2791.729f, 40.9795f };
			break;
		
		case 42:
			Var0 = { -1130.938f, 2701.133f, 17.8004f };
			break;
		
		case 43:
			Var0 = { -10.944f, -1646.76f, 28.3125f };
			break;
		
		case 44:
			Var0 = { 1024.263f, -2398.404f, 29.1261f };
			break;
		
		case 45:
			Var0 = { 870.8577f, -2232.323f, 29.5508f };
			break;
		
		case 46:
			Var0 = { -663.8541f, -2380.389f, 12.9446f };
			break;
		
		case 47:
			Var0 = { -1088.616f, -2235.098f, 12.2182f };
			break;
		
		case 48:
			Var0 = { -342.5126f, -1468.675f, 29.6107f };
			break;
		
		case 49:
			Var0 = { -1241.54f, -259.8841f, 37.9445f };
			break;
		
		case 50:
			Var0 = { 899.8448f, -147.528f, 75.5674f };
			break;
		
		case 51:
			Var0 = { -1405.411f, 526.8572f, 122.8361f };
			break;
		
		case 52:
			Var0 = { 1341.552f, -1578.037f, 53.4443f };
			break;
		
		case 53:
			Var0 = { -105.7029f, 6528.539f, 29.1719f };
			break;
		
		case 54:
			Var0 = { -302.3985f, 6327.434f, 31.8918f };
			break;
		
		case 55:
			Var0 = { -15.258f, 6557.378f, 32.2454f };
			break;
		
		case 56:
			Var0 = { 1899.673f, 3773.178f, 31.8829f };
			break;
		
		case 57:
			Var0 = { 1662.121f, 4776.317f, 41.0075f };
			break;
		
		case 58:
			Var0 = { -178.2278f, 490.886f, 134.0466f };
			break;
		
		case 59:
			Var0 = { 339.5743f, 439.7083f, 145.5896f };
			break;
		
		case 60:
			Var0 = { -764.6163f, 618.3144f, 137.5536f };
			break;
		
		case 61:
			Var0 = { -679.5461f, 592.5162f, 139.693f };
			break;
		
		case 62:
			Var0 = { 124.4571f, 551.8877f, 181.658f };
			break;
		
		case 63:
			Var0 = { -563.7349f, 689.099f, 151.6596f };
			break;
		
		case 64:
			Var0 = { -743.0927f, 590.0371f, 140.9221f };
			break;
		
		case 65:
			Var0 = { -861.252f, 684.8923f, 146.2643f };
			break;
		
		case 66:
			Var0 = { -1292.456f, 440.9454f, 93.7572f };
			break;
		
		case 67:
			Var0 = { 369.5891f, 417.4813f, 136.8344f };
			break;
		
		case 68:
			Var0 = { -1581.501f, -558.2578f, 33.9528f };
			break;
		
		case 69:
			Var0 = { -1379.546f, -499.1783f, 32.1574f };
			break;
		
		case 70:
			Var0 = { -117.5296f, -605.7157f, 35.2857f };
			break;
		
		case 71:
			Var0 = { -67.0943f, -802.4415f, 43.2273f };
			break;
		
		case 72:
			Var0 = { 254.1892f, -1809.183f, 26.1805f };
			break;
		
		case 73:
			Var0 = { -1472.278f, -920.0677f, 8.9683f };
			break;
		
		case 74:
			Var0 = { 38.9478f, -1026.629f, 28.6354f };
			break;
		
		case 75:
			Var0 = { 46.903f, 2789.825f, 57.1124f };
			break;
		
		case 76:
			Var0 = { -342.3246f, 6065.316f, 30.4895f };
			break;
		
		case 77:
			Var0 = { 1737.878f, 3709.088f, 33.1348f };
			break;
		
		case 78:
			Var0 = { 939.7161f, -1459.204f, 30.467f };
			break;
		
		case joaat("mpsv_lp0_31"):
			Var0 = { 189.7624f, 309.7488f, 104.4714f };
			break;
		
		case 80:
			Var0 = { -21.9593f, -191.3618f, 51.5599f };
			break;
		
		case 81:
			Var0 = { 2472.22f, 4110.493f, 36.9629f };
			break;
		
		case 82:
			Var0 = { -39.3286f, 6420.603f, 30.7017f };
			break;
		
		case 83:
			Var0 = { -1134.762f, -1568.848f, 3.4077f };
			break;
	}
	return Var0;
}

int func_535(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 61:
		case 83:
		case 84:
		case 85:
			return 1;
			break;
		
		case 5:
		case 6:
			return 2;
			break;
		
		case 7:
		case 34:
		case 62:
			return 3;
			break;
		
		case 35:
		case 36:
		case 37:
			return 4;
			break;
		
		case 38:
		case 39:
		case 65:
			return 5;
			break;
		
		case 40:
		case 41:
		case 63:
			return 6;
			break;
		
		case 42:
		case 43:
		case 64:
			return 7;
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
		
		case 11:
			return 11;
			break;
		
		case 12:
			return 12;
			break;
		
		case 13:
			return 13;
			break;
		
		case 14:
			return 14;
			break;
		
		case 15:
			return 15;
			break;
		
		case 16:
			return 16;
			break;
		
		case 17:
			return 17;
			break;
		
		case 18:
			return 18;
			break;
		
		case 19:
			return 19;
			break;
		
		case 20:
			return 20;
			break;
		
		case 21:
			return 21;
			break;
		
		case 22:
			return 22;
			break;
		
		case 23:
			return 23;
			break;
		
		case 24:
			return 24;
			break;
		
		case 25:
			return 25;
			break;
		
		case 26:
			return 26;
			break;
		
		case 27:
			return 27;
			break;
		
		case 28:
			return 28;
			break;
		
		case 29:
			return 29;
			break;
		
		case 30:
			return 30;
			break;
		
		case 31:
			return 31;
			break;
		
		case 32:
			return 32;
			break;
		
		case 33:
			return 33;
			break;
		
		case 44:
			return 34;
			break;
		
		case 45:
			return 35;
			break;
		
		case 46:
			return 36;
			break;
		
		case 47:
			return 37;
			break;
		
		case 48:
			return 38;
			break;
		
		case 49:
			return 39;
			break;
		
		case 50:
			return 40;
			break;
		
		case 51:
			return 41;
			break;
		
		case 52:
			return 42;
			break;
		
		case 53:
			return 43;
			break;
		
		case 54:
			return 44;
			break;
		
		case 55:
			return 45;
			break;
		
		case 56:
			return 46;
			break;
		
		case 57:
			return 47;
			break;
		
		case 58:
			return 48;
			break;
		
		case 59:
			return 49;
			break;
		
		case 60:
			return 50;
			break;
		
		case 66:
			return 51;
			break;
		
		case 67:
			return 52;
			break;
		
		case 68:
			return 53;
			break;
		
		case 69:
			return 54;
			break;
		
		case 70:
			return 55;
			break;
		
		case 71:
			return 56;
			break;
		
		case 72:
			return 57;
			break;
		
		case 73:
			return 58;
			break;
		
		case 74:
			return 59;
			break;
		
		case 75:
			return 60;
			break;
		
		case 76:
			return 61;
			break;
		
		case 77:
			return 62;
			break;
		
		case 78:
			return 63;
			break;
		
		case joaat("mpsv_lp0_31"):
			return 64;
			break;
		
		case 80:
			return 65;
			break;
		
		case 81:
			return 66;
			break;
		
		case 82:
			return 67;
			break;
		
		case 87:
		case 103:
		case 104:
		case 105:
			return 68;
			break;
		
		case 88:
		case 106:
		case 107:
		case 108:
			return 69;
			break;
		
		case 89:
		case 109:
		case 110:
		case 111:
			return 70;
			break;
		
		case 90:
		case 112:
		case 113:
		case 114:
			return 71;
			break;
		
		case 91:
			return 72;
			break;
		
		case 92:
			return 73;
			break;
		
		case 93:
			return 74;
			break;
		
		case 94:
			return 75;
			break;
		
		case 95:
			return 76;
			break;
		
		case 96:
			return 77;
			break;
		
		case 97:
			return 78;
			break;
		
		case 98:
			return 79;
			break;
		
		case 99:
			return 80;
			break;
		
		case 100:
			return 81;
			break;
		
		case 101:
			return 82;
			break;
		
		case 102:
			return 83;
			break;
	}
	return 0;
}

bool func_536(char* sParam0, var uParam1, int iParam2)
{
	unk_0x5BE7193BC62CE2CE(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xF92B835A141C6BDD(iParam2);
	}
	unk_0x854FACC4E5F40C82(uParam1);
	return unk_0x0683D2027E169355(0);
}

char* func_537()
{
	switch (unk_0xC45D692E0BD4797B())
	{
		case 0:
			return "~s~Press ~INPUT_CONTEXT~ ~s~to enter.~s~";
		
		case 1:
			return "~s~Appuyez sur ~INPUT_CONTEXT~ ~s~pour entrer~s~.";
		
		case 2:
			return "~s~Dr??cke ~INPUT_CONTEXT~, um einzutreten.~s~";
		
		case 3:
			return "~s~Premi ~INPUT_CONTEXT~ ~s~per entrare~s~.";
		
		case 4:
			return "~s~Pulsa ~INPUT_CONTEXT~~s~para entrar.~s~";
		
		case 5:
			return "~s~Pressione ~INPUT_CONTEXT~ ~s~para entrar.~s~";
		
		case 6:
			return "~s~Naci??nij ~INPUT_CONTEXT~~s~, aby wej????~s~.";
		
		case 7:
			return "~s~?????????????? ~INPUT_CONTEXT~ ~s~, ?????????? ??????????????????????.~s~";
		
		case 8:
			return "~s~??????????????? ~INPUT_CONTEXT~~s~??? ???????????????.~s~";
		
		case 9:
			return "~s~?????~INPUT_CONTEXT~??~s~?????????~s~";
		
		case 10:
			return "~s~~INPUT_CONTEXT~~s~????????????~s~";
		
		case 11:
			return "~s~Presiona ~INPUT_CONTEXT~ ~s~para entrar~s~.";
		
		case 12:
			return "~s~?????~INPUT_CONTEXT~??~s~?????????~s~";
		
		default:
	}
	return " ~s~Press ~INPUT_CONTEXT~ ~s~to enter.~s~.";
}

void func_538(struct<3> Param0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	float fVar4;
	struct<3> Var5;
	
	fVar4 = 1f;
	unk_0x31758B9A51671C43(12, &uVar0, &uVar1, &uVar2, &uVar3);
	Var5 = { Param0 };
	Var5.f_2 = (Var5.f_2 - 0.7f);
	unk_0xBDD6765E5846A7DE(1, Var5, 0f, 0f, 0f, 0f, 0f, 0f, (fVar4 * 1.8f), (fVar4 * 1.8f), 2.5f, uVar0, uVar1, uVar2, 150, 0, 0, 2, 0, 0, 0, 0);
}

void func_539(var uParam0, var uParam1, int iParam2)
{
	unk_0x67129637F30DEB3F("BRIEF_STRING2");
	unk_0x854FACC4E5F40C82(uParam0);
	unk_0x854FACC4E5F40C82(uParam1);
	unk_0x376CFA11DE0FE521(0, 0, 1, iParam2);
}

char* func_540()
{
	switch (unk_0xC45D692E0BD4797B())
	{
		case 0:
			return "y the currently active Dispatch Mission.";
		
		case 1:
			return "ur participer ?? la mission de liquidation en cours.";
		
		case 2:
			return "die aktuelle Attentatsmission zu starten.";
		
		case 3:
			return " giocare alla missione Omicidio attiva.";
		
		case 4:
			return "a jugar a la misi??n de asesinato activa.";
		
		case 5:
			return "a jogar a Miss??o de Despache atualmente ativa.";
		
		case 6:
			return " obecnie aktywn?? misj?? porz??dkow??.";
		
		case 7:
			return "?????????????? ?? ???????????????? ?????????????? \"????????????????????\".";
		
		case 8:
			return "MARTIN_MADRAZZO~~s~??? ??????????????????.";
		
		case 9:
			return "?????????????????????????????????";
		
		case 10:
			return "??????????????????????????????????????????????????????";
		
		case 11:
			return " jugar la misi??n de liquidaci??n activa.";
		
		case 12:
			return "????????????????????????";
		
		default:
	}
	return "";
}

char* func_541()
{
	switch (unk_0xC45D692E0BD4797B())
	{
		case 0:
			return "Enter ~BLIP_MARTIN_MADRAZZO~~s~ to pla";
		
		case 1:
			return "Rejoignez ~BLIP_MARTIN_MADRAZZO~~s~ po";
		
		case 2:
			return "Betritt??~BLIP_MARTIN_MADRAZZO~~s~, um ";
		
		case 3:
			return "Entra in ~BLIP_MARTIN_MADRAZZO~~s~ per";
		
		case 4:
			return "Entra en ~BLIP_MARTIN_MADRAZZO~~s~ par";
		
		case 5:
			return "Entre em ~BLIP_MARTIN_MADRAZZO~~s~ par";
		
		case 6:
			return "Wejd?? do ~BLIP_MARTIN_MADRAZZO~~s~, aby rozegra??";
		
		case 7:
			return "?????????????????????????? ?? ~BLIP_MARTIN_MADRAZZO~~s~, ?????????? ????????";
		
		case 8:
			return "?????? ???????????? ?????? ????????? ?????????????????? ~BLIP_";
		
		case 9:
			return "????????~BLIP_MARTIN_MADRAZZO~~s~??????????????";
		
		case 10:
			return "~BLIP_MARTIN_MADRAZZO~~s~??????????????????????????????";
		
		case 11:
			return "Entra en ~BLIP_MARTIN_MADRAZZO~~s~ para";
		
		case 12:
			return "????????~BLIP_MARTIN_MADRAZZO~~s~??????????????";
		
		default:
	}
	return "Enter ~BLIP_MARTIN_MADRAZZO~~s~ to play the currently active Dispatch Mission.";
}

Vector3 func_542(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1022.114f, 693.6086f, 160.2439f;
		
		case 1:
			return 1310.742f, 1188.65f, 105.9349f;
		
		default:
	}
	return -1022.114f, 693.6086f, 160.2439f;
}

void func_543(var uParam0)
{
	if (uParam0->f_5 != 0 && !unk_0xC80D31E4B587871C(uParam0->f_3, 2))
	{
		func_549(uParam0);
		if (unk_0xC80D31E4B587871C(uParam0->f_3, 5))
		{
			func_544("STRING", func_548(), 1);
			unk_0x0EE72DB1CD8A3B86(&(uParam0->f_3), 5);
		}
	}
}

int func_544(char* sParam0, char* sParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xE3C33644878DCCFD(sParam0);
	unk_0x854FACC4E5F40C82(sParam1);
	iVar0 = unk_0x65F0733C4A64907A(0, 1);
	func_545(45, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_545(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_629() || !unk_0x4916190900E76373()) || !func_188(unk_0x9EB17624F44A8DA4(), 0))
	{
		return;
	}
	iVar0 = func_546(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1664509.f_5[iVar0 /*53*/] = iParam0;
		Global_1664509.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1664509.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1664509.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1664509.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1664509.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1664509.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_546(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1664509 - 1))
	{
		if (iParam0 > Global_1664509.f_5[iVar0 /*53*/].f_1)
		{
			func_547(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1664509++;
	if (Global_1664509 > 5)
	{
		Global_1664509 = 5;
		return Global_1664509;
	}
	return (Global_1664509 - 1);
}

void func_547(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1664509.f_5[iVar0 /*53*/] = { Global_1664509.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

char* func_548()
{
	switch (unk_0xC45D692E0BD4797B())
	{
		case 0:
			return "The active Dispatch Mission has been updated.";
		
		case 1:
			return "La mission de liquidation en cours a ??t?? mise ?? jour.";
		
		case 2:
			return "Die aktive Attentatsmission wurde aktualisiert.";
		
		case 3:
			return "La missione Omicidio attiva ?? stata aggiornata";
		
		case 4:
			return "Se ha actualizado la misi??n de asesinato activa.";
		
		case 5:
			return "A Miss??o de Despache ativa foi atualizada.";
		
		case 6:
			return "Zaktualizowano aktywn?? misj?? porz??dkow??.";
		
		case 7:
			return "???????????????? ?????????????? \"????????????????????\" ??????????????????.";
		
		case 8:
			return "???????????? ?????? ????????? ???????????????????????????.";
		
		case 9:
			return "??????????????????????????????????????????";
		
		case 10:
			return "?????????????????????????????????????????????????????????";
		
		case 11:
			return "Se actualiz?? la misi??n de liquidaci??n activa.";
		
		case 12:
			return "????????????????????????????????????";
		
		default:
	}
	return "The active Dispatch Mission has been updated.";
}

void func_549(var uParam0)
{
	func_550(Global_794709.f_4[uParam0->f_5 /*88*/].f_65, Global_794709.f_4[uParam0->f_5 /*88*/].f_68, Global_794709.f_4[uParam0->f_5 /*88*/].f_56, 63, 31, &(Global_794709.f_4[uParam0->f_5 /*88*/].f_22), "", Global_794709.f_4[uParam0->f_5 /*88*/], 0, 16777215, 1);
	unk_0x872F1C1F8587CCC7(&(uParam0->f_3), 2);
}

void func_550(var uParam0, var uParam1, struct<3> Param2, int iParam5, int iParam6, char* sParam7, char* sParam8, struct<6> Param9, bool bParam15, int iParam16, int iParam17)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	struct<10> Var3;
	var uVar13;
	var uVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	if (iParam6 == 145)
	{
		return;
	}
	if (!bParam15)
	{
		if (!func_579())
		{
			return;
		}
	}
	if (!func_578(sParam7, sParam8))
	{
		return;
	}
	bVar0 = true;
	iVar1 = func_577(iParam6, sParam7, bVar0);
	if (iVar1 != -1)
	{
		bVar2 = false;
		func_574(iVar1, bVar2);
	}
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_9 = -1;
	func_573(&Var3);
	if (func_571(&Param9, &Var3, 0))
	{
		uVar13 = func_569(&Var3);
		uVar14 = func_565(&Var3);
	}
	iVar15 = iParam6;
	bVar16 = false;
	bVar17 = false;
	iVar18 = 0;
	iVar19 = 0;
	iVar20 = 0;
	iVar21 = 0;
	iVar22 = 0;
	iVar23 = 0;
	func_551(uParam0, uParam1, Param2, iParam5, iVar15, bVar16, sParam7, sParam8, Param9, uVar13, iParam16, bParam15, bVar17, iVar18, iVar19, iVar20, iVar21, iVar22, iVar23, uVar14, iParam17);
}

void func_551(var uParam0, var uParam1, struct<3> Param2, int iParam5, int iParam6, bool bParam7, char* sParam8, char* sParam9, char[24] cParam10, var uParam16, var uParam17, bool bParam18, bool bParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, var uParam26, var uParam27)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	struct<13> Var6;
	int iVar19;
	
	iVar0 = func_16();
	iVar1 = 145;
	if (bParam7)
	{
		iVar0 = unk_0xF6A72924028F588B(iParam6);
	}
	else
	{
		iVar1 = iParam6;
	}
	if (bParam7)
	{
		if (func_564())
		{
			func_561(iVar0, 1, 0, 0);
			return;
		}
	}
	iVar2 = Global_1367894;
	if (iVar2 >= 12)
	{
		iVar2 = (iVar2 - 1);
	}
	iVar3 = (iVar2 - 1);
	while (iVar3 >= 0)
	{
		Global_2392006[iVar2 /*82*/] = { Global_2392006[iVar3 /*82*/] };
		iVar2 = (iVar2 - 1);
		iVar3 = (iVar3 - 1);
	}
	Global_1367894++;
	if (Global_1367894 > 12)
	{
		Global_1367894 = 12;
	}
	iVar4 = 0;
	Global_2392006[iVar4 /*82*/] = 0;
	Global_2392006[iVar4 /*82*/].f_2 = 0;
	Global_2392006[iVar4 /*82*/].f_4 = 0;
	Global_2392006[iVar4 /*82*/].f_5 = bParam18;
	Global_2392006[iVar4 /*82*/].f_6 = { Param2 };
	Global_2392006[iVar4 /*82*/].f_9 = iVar0;
	Global_2392006[iVar4 /*82*/].f_10 = iVar1;
	Global_2392006[iVar4 /*82*/].f_11 = bParam7;
	Global_2392006[iVar4 /*82*/].f_12 = iParam5;
	Global_2392006[iVar4 /*82*/].f_13 = uParam0;
	Global_2392006[iVar4 /*82*/].f_14 = uParam1;
	Global_2392006[iVar4 /*82*/].f_62 = uParam16;
	Global_2392006[iVar4 /*82*/].f_63 = uParam26;
	Global_2392006[iVar4 /*82*/].f_75 = uParam27;
	Global_2392006[iVar4 /*82*/].f_15 = func_560(iParam5, &cParam10);
	Global_2392006[iVar4 /*82*/].f_16 = 0;
	Global_2392006[iVar4 /*82*/].f_16.f_1 = 0;
	Global_2392006[iVar4 /*82*/].f_16.f_2 = 0;
	Global_2392006[iVar4 /*82*/].f_19 = 1;
	Global_2392006[iVar4 /*82*/].f_20 = 0;
	StringCopy(&(Global_2392006[iVar4 /*82*/].f_21), sParam8, 64);
	StringCopy(&(Global_2392006[iVar4 /*82*/].f_37), sParam9, 64);
	Global_2392006[iVar4 /*82*/].f_53 = unk_0x1B4120BD20115C5C(unk_0xD1952A425B78FFC0(), 5000);
	Global_2392006[iVar4 /*82*/].f_54 = -1;
	Global_2392006[iVar4 /*82*/].f_55 = unk_0x1B4120BD20115C5C(unk_0xD1952A425B78FFC0(), 30000);
	Global_2392006[iVar4 /*82*/].f_56 = { cParam10 };
	Global_2392006[iVar4 /*82*/].f_64 = uParam17;
	Global_2392006[iVar4 /*82*/].f_68 = iParam20;
	Global_2392006[iVar4 /*82*/].f_69 = iParam21;
	Global_2392006[iVar4 /*82*/].f_71 = iParam22;
	Global_2392006[iVar4 /*82*/].f_74 = iParam24;
	Global_2392006[iVar4 /*82*/].f_81 = iParam25;
	Global_2392006[iVar4 /*82*/].f_3 = func_556(iVar4);
	Global_2392006[iVar4 /*82*/].f_72 = iParam23;
	Global_2392006[iVar4 /*82*/].f_76 = func_555(iVar0);
	Global_2392006[iVar4 /*82*/].f_77 = 0;
	if (Global_2392006[iVar4 /*82*/].f_5)
	{
		Global_2392006[iVar4 /*82*/].f_73 = 0;
	}
	else
	{
		Global_2392006[iVar4 /*82*/].f_73 = Global_2395344;
	}
	Global_2395344++;
	Global_2392006[iVar4 /*82*/].f_70 = -1;
	if (bParam7)
	{
		if (func_321(iVar0))
		{
			if (func_554(iVar0))
			{
				Global_2392006[iVar4 /*82*/].f_70 = Global_1595693[iVar0 /*680*/].f_99.f_36;
			}
		}
	}
	if (iParam5 == 40)
	{
		Global_2392006[iVar4 /*82*/].f_19 = 0;
	}
	if (!bParam7)
	{
		if (!unk_0xAB019B170BF1309C(&(Global_2392006[iVar4 /*82*/].f_37)))
		{
			Global_2392006[iVar4 /*82*/].f_19 = 0;
		}
	}
	if (bParam7)
	{
		if (Global_2392006[iVar4 /*82*/].f_13 == 0)
		{
			if (Global_2392006[iVar4 /*82*/].f_14 == 1)
			{
				if (!unk_0xAB019B170BF1309C(&(Global_2392006[iVar4 /*82*/].f_37)))
				{
					if (unk_0x74C475EB8E73D398(&(Global_2392006[iVar4 /*82*/].f_37), "[HEIST PREP CUTSCENE]"))
					{
						Global_2392006[iVar4 /*82*/].f_19 = 0;
						Global_2392006[iVar4 /*82*/].f_20 = 1;
					}
				}
			}
		}
	}
	func_553();
	if (bParam19)
	{
		Global_2392006[iVar4 /*82*/].f_65 = 1;
		Global_2392006[iVar4 /*82*/].f_66 = 0;
		Global_2392006[iVar4 /*82*/].f_67 = 0;
	}
	else
	{
		Global_2392006[iVar4 /*82*/].f_65 = 0;
		Global_2392006[iVar4 /*82*/].f_66 = 0;
		Global_2392006[iVar4 /*82*/].f_67 = 1;
	}
	Global_2392006[iVar4 /*82*/].f_78 = 0;
	Global_2392006[iVar4 /*82*/].f_79 = 0;
	Global_2392006[iVar4 /*82*/].f_80 = 0;
	if (unk_0x177281F5FA205A38())
	{
		if (bParam7)
		{
			bVar5 = true;
			if (bVar5)
			{
				Var6 = { func_552(iVar0) };
				iVar19 = unk_0x9408004E08BD1E91(&Var6);
				if (iVar19 != -1)
				{
					Global_2392006[iVar4 /*82*/].f_78 = iVar19;
					Global_2392006[iVar4 /*82*/].f_79 = 1;
					Global_2392006[iVar4 /*82*/].f_80 = 0;
				}
			}
		}
	}
}

struct<13> func_552(int iParam0)
{
	struct<13> Var0;
	
	unk_0x1D52B46CB20A5CF3(iParam0, &Var0, 13);
	return Var0;
}

void func_553()
{
	Global_1367897 = unk_0x1B4120BD20115C5C(unk_0xD1952A425B78FFC0(), 30000);
}

bool func_554(int iParam0)
{
	return unk_0xC80D31E4B587871C(Global_1595693[iParam0 /*680*/].f_13.f_1, 1);
}

int func_555(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 == func_16())
	{
		return 0;
	}
	if (!func_15(iParam0, 0, 1))
	{
		return 0;
	}
	Var0 = { func_552(iParam0) };
	if (!unk_0xFFE9B6D8F03AC353(&Var0))
	{
		return 0;
	}
	if (func_321(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_556(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (Global_1367894 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Global_1367894)
	{
		if (!func_559(iVar0))
		{
			if (iVar0 != iParam0)
			{
				if (((Global_2392006[iVar0 /*82*/].f_13 == Global_2392006[iParam0 /*82*/].f_13 && Global_2392006[iVar0 /*82*/].f_12 == Global_2392006[iParam0 /*82*/].f_12) && func_558(Global_2392006[iVar0 /*82*/].f_6, Global_2392006[iParam0 /*82*/].f_6, 1056964608, 0)) && unk_0x74C475EB8E73D398(&(Global_2392006[iVar0 /*82*/].f_56), &(Global_2392006[iParam0 /*82*/].f_56)))
				{
					bVar1 = false;
					if (!bVar1)
					{
						if (func_557(iParam0) && !func_557(iVar0))
						{
							bVar1 = true;
						}
					}
					if ((Global_2392006[iParam0 /*82*/].f_11 && Global_2392006[iVar0 /*82*/].f_11) || (!Global_2392006[iParam0 /*82*/].f_11 && !Global_2392006[iVar0 /*82*/].f_11))
					{
						if (bVar1)
						{
							Global_2392006[iVar0 /*82*/].f_3 = 1;
						}
						else
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_557(int iParam0)
{
	return Global_2392006[iParam0 /*82*/].f_2;
}

int func_558(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0xE97272C977DEADD3((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xE97272C977DEADD3((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xE97272C977DEADD3((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xE97272C977DEADD3((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xE97272C977DEADD3((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_559(int iParam0)
{
	return Global_2392006[iParam0 /*82*/].f_3;
}

int func_560(int iParam0, char* sParam1)
{
	int iVar0;
	
	if (unk_0xAB019B170BF1309C(sParam1))
	{
		return -1;
	}
	iVar0 = 0;
	switch (iParam0)
	{
		case 63:
			iVar0 = 0;
			while (iVar0 < 1118)
			{
				if (unk_0xC80D31E4B587871C(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0x74C475EB8E73D398(&(Global_794709.f_4[iVar0 /*88*/]), sParam1))
					{
						return Global_794709.f_4[iVar0 /*88*/].f_54;
					}
				}
				iVar0++;
			}
			break;
		
		case 62:
			iVar0 = 0;
			while (iVar0 < 200)
			{
				if (unk_0xC80D31E4B587871C(Global_907706.f_1204[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0x74C475EB8E73D398(&(Global_907706.f_1204[iVar0 /*88*/]), sParam1))
					{
						return Global_907706.f_1204[iVar0 /*88*/].f_54;
					}
				}
				iVar0++;
			}
			break;
		
		case 40:
			return 0;
		
		default:
			if (iParam0 == unk_0x9EB17624F44A8DA4())
			{
				iVar0 = 0;
				while (iVar0 < 62)
				{
					if (unk_0xC80D31E4B587871C(Global_950952.f_5[iVar0 /*88*/].f_76, 13))
					{
						if (unk_0x74C475EB8E73D398(&(Global_950952.f_5[iVar0 /*88*/]), sParam1))
						{
							return Global_950952.f_5[iVar0 /*88*/].f_54;
						}
					}
					iVar0++;
				}
			}
			break;
	}
	return 0;
}

void func_561(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<13> Var23;
	int iVar36;
	int iVar37;
	int iVar38;
	
	if (!func_15(iParam0, 0, 1))
	{
		return;
	}
	Var0.f_0 = 159765390;
	Var0.f_1 = unk_0x9EB17624F44A8DA4();
	unk_0xB3C5C4AE35A3EC8B(&Var23, 13);
	Var0.f_2 = { Var23 };
	if (bParam1)
	{
		iVar36 = 0;
		unk_0x872F1C1F8587CCC7(&iVar36, 6);
		Var0.f_2.f_13 = iVar36;
		Var0.f_2.f_19 = 0;
		Var0.f_2.f_20 = 0;
	}
	if (bParam2)
	{
		iVar37 = 0;
		unk_0x872F1C1F8587CCC7(&iVar37, 0);
		Var0.f_2.f_13 = iVar37;
		Var0.f_2.f_19 = 1;
		Var0.f_2.f_20 = 0;
	}
	if (bParam3)
	{
		iVar38 = 0;
		unk_0x872F1C1F8587CCC7(&iVar38, 0);
		Var0.f_2.f_13 = iVar38;
		Var0.f_2.f_19 = 1;
		Var0.f_2.f_20 = 1;
	}
	Var0.f_2.f_14 = func_563(unk_0x9EB17624F44A8DA4());
	StringCopy(&(Var0.f_2.f_15), "", 16);
	unk_0x5A26F0BDEE9F8260(1, &Var0, 23, func_562(iParam0));
}

var func_562(int iParam0)
{
	var uVar0;
	
	unk_0x872F1C1F8587CCC7(&uVar0, iParam0);
	return uVar0;
}

var func_563(int iParam0)
{
	return Global_1595693[iParam0 /*680*/].f_211.f_6;
}

bool func_564()
{
	return Global_1312814 == 10;
}

int func_565(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_566(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_4[iVar1 /*88*/].f_80;
		
		case 62:
			return iVar0;
		
		default:
	}
	return iVar0;
}

int func_566(var uParam0)
{
	int iVar0;
	
	if (unk_0xAB019B170BF1309C(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_568(uParam0->f_1))
	{
		if (func_567(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (unk_0xC80D31E4B587871C(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0x74C475EB8E73D398(&(Global_794709.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xC80D31E4B587871C(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1118)
			{
				if (unk_0xC80D31E4B587871C(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0x74C475EB8E73D398(&(Global_794709.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (unk_0xC80D31E4B587871C(Global_907706.f_1204[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0x74C475EB8E73D398(&(Global_907706.f_1204[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xC80D31E4B587871C(Global_907706.f_1204[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 200)
			{
				if (unk_0xC80D31E4B587871C(Global_907706.f_1204[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0x74C475EB8E73D398(&(Global_907706.f_1204[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == unk_0x9EB17624F44A8DA4())
	{
		if (unk_0xC80D31E4B587871C(Global_950952.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (unk_0x74C475EB8E73D398(&(Global_950952.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (unk_0xC80D31E4B587871C(Global_950952.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (unk_0xC80D31E4B587871C(Global_950952.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (unk_0x74C475EB8E73D398(&(Global_950952.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_567(var uParam0)
{
	if (Global_2398103)
	{
		if (unk_0x74C475EB8E73D398(&(Global_2398103.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_568(int iParam0)
{
	return iParam0 == 9999;
}

int func_569(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	int iVar14;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = 0;
	iVar14 = func_566(uParam0);
	if (iVar14 == -1)
	{
		return iVar13;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_570(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar13;
		
		default:
	}
	return iVar13;
}

struct<13> func_570(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = func_566(uParam0);
	if (iVar13 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_98389[iVar13 /*13*/];
		
		case 62:
			return Global_907706.f_18805[iVar13 /*13*/];
		
		default:
	}
	return Var0;
}

int func_571(char* sParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x3A711520F83BAE98())
	{
		return 0;
	}
	if (unk_0xAB019B170BF1309C(sParam0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = 1118;
	if (!bParam2)
	{
		iVar2 = 1100;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (unk_0xC80D31E4B587871C(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
		{
			if (unk_0x74C475EB8E73D398(&(Global_794709.f_4[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_794709.f_4[iVar0 /*88*/].f_65;
				*uParam1 = func_572(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 63;
				uParam1->f_3 = { Global_794709.f_4[iVar0 /*88*/] };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 200)
	{
		if (unk_0xC80D31E4B587871C(Global_907706.f_1204[iVar0 /*88*/].f_76, 13))
		{
			if (unk_0x74C475EB8E73D398(&(Global_907706.f_1204[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_907706.f_1204[iVar0 /*88*/].f_65;
				*uParam1 = func_572(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 62;
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 62)
	{
		if (unk_0xC80D31E4B587871C(Global_950952.f_5[iVar0 /*88*/].f_76, 13))
		{
			if (unk_0x74C475EB8E73D398(&(Global_950952.f_5[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_950952.f_5[iVar0 /*88*/].f_65;
				*uParam1 = func_572(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = unk_0x9EB17624F44A8DA4();
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_572(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 131;
		
		case 14:
			return 132;
		
		case 122:
			return 136;
		
		case 11:
			return 133;
		
		case 13:
			return 134;
		
		case 12:
			return 135;
		
		case 8:
			return 138;
		
		case 1:
			return 139;
		
		case 5:
			return 137;
		
		case 6:
			return 140;
		
		case 3:
			return 143;
		
		case 0:
			return 141;
		
		case 2:
			return 142;
		
		case 148:
			return 49;
		
		case 151:
			return 52;
		
		case 152:
			return 53;
		
		case 157:
			return 54;
		
		case 153:
			return 55;
		
		case 154:
			return 56;
		
		case 155:
			return 57;
		
		case 159:
			return 58;
		
		case 162:
			return 51;
		
		case 142:
			return 60;
		
		case 160:
			return 62;
		
		case 164:
			return 63;
		
		case 163:
			return 64;
		
		case 166:
			return 65;
		
		case 167:
			return 66;
		
		case 168:
			return 67;
		
		case 169:
			return 68;
		
		case 170:
			return 69;
		
		case 171:
			return 70;
		
		case 172:
			return 71;
		
		case 173:
			return 72;
		
		case 178:
			return 73;
		
		case 188:
			return 74;
		
		case 214:
			return 75;
		
		case 215:
			return 76;
		
		case 216:
			return 77;
		
		case 217:
			return 78;
		
		case 218:
			return 79;
		
		case 219:
			return 80;
		
		case 220:
			return 81;
		
		case 221:
			return 82;
		
		case 179:
			return 84;
		
		case 189:
			return 83;
		
		case 180:
			return 85;
		
		case 182:
			return 86;
		
		case 183:
			return 87;
		
		case 185:
			return 88;
		
		case 186:
			return 89;
		
		case 190:
			return 90;
		
		case 191:
			return 91;
		
		case 192:
			return 92;
		
		case 193:
			return 93;
		
		case 205:
			return 101;
		
		case 194:
			return 94;
		
		case 197:
			return 95;
		
		case 198:
			return 96;
		
		case 195:
			return 97;
		
		case 199:
			return 98;
		
		case 200:
			return 99;
		
		case 201:
			return 100;
		
		case 207:
			return 102;
		
		case 208:
			return 103;
		
		case 209:
			return 104;
		
		case 210:
			return 105;
		
		case 225:
			return 106;
		
		case 226:
			return 107;
		
		case 227:
			return 108;
		
		case 229:
			return 109;
		
		case 230:
			return 110;
		
		case 233:
			return 112;
		
		default:
	}
	return 0;
}

void func_573(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	StringCopy(&(uParam0->f_3), "", 24);
	uParam0->f_9 = -1;
}

void func_574(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 >= Global_1367894)
	{
		return;
	}
	if (bParam1)
	{
		if (func_557(iParam0))
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				if (Global_2392006[iParam0 /*82*/].f_11)
				{
					if (unk_0x53C562FD2B9E3AB0() > Global_2395292[iVar0 /*4*/].f_2 || Global_2395292[iVar0 /*4*/].f_2 == 0)
					{
						if (Global_2392006[iParam0 /*82*/].f_2)
						{
							Global_2395292[iVar0 /*4*/] = Global_2392006[iParam0 /*82*/].f_9;
							Global_2395292[iVar0 /*4*/].f_1 = unk_0x8B948C59217A295D(&(Global_2392006[iParam0 /*82*/].f_56));
							Global_2395292[iVar0 /*4*/].f_2 = unk_0x53C562FD2B9E3AB0() + 30000;
							iVar0 = 12;
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (Global_2392006[iParam0 /*82*/].f_54 != -1)
	{
		unk_0x4B1D93E1A14A667F(Global_2392006[iParam0 /*82*/].f_54);
	}
	if (!Global_2392006[iParam0 /*82*/].f_19)
	{
		if (Global_2392006[iParam0 /*82*/].f_15 != 0)
		{
			unk_0x1088BF7BD3B5ADB8(Global_2392006[iParam0 /*82*/].f_15);
		}
	}
	iVar1 = iParam0;
	iVar2 = iVar1 + 1;
	while (iVar2 < Global_1367894)
	{
		Global_2392006[iVar1 /*82*/] = { Global_2392006[iVar2 /*82*/] };
		iVar1++;
		iVar2++;
	}
	func_576(iVar1);
	Global_1367894 = (Global_1367894 - 1);
	if (Global_1367895)
	{
		if (Global_1367893 > 0)
		{
			func_575();
		}
	}
}

void func_575()
{
	Global_1367895 = 0;
}

void func_576(int iParam0)
{
	Global_2392006[iParam0 /*82*/] = 0;
	Global_2392006[iParam0 /*82*/].f_2 = 0;
	Global_2392006[iParam0 /*82*/].f_3 = 0;
	Global_2392006[iParam0 /*82*/].f_4 = 0;
	Global_2392006[iParam0 /*82*/].f_5 = 0;
	Global_2392006[iParam0 /*82*/].f_6 = { 0f, 0f, 0f };
	Global_2392006[iParam0 /*82*/].f_9 = func_16();
	Global_2392006[iParam0 /*82*/].f_10 = 145;
	Global_2392006[iParam0 /*82*/].f_11 = 1;
	Global_2392006[iParam0 /*82*/].f_12 = 0;
	Global_2392006[iParam0 /*82*/].f_13 = -1;
	Global_2392006[iParam0 /*82*/].f_14 = -1;
	Global_2392006[iParam0 /*82*/].f_15 = 0;
	Global_2392006[iParam0 /*82*/].f_16 = 0;
	Global_2392006[iParam0 /*82*/].f_16.f_1 = 0;
	Global_2392006[iParam0 /*82*/].f_16.f_2 = 0;
	Global_2392006[iParam0 /*82*/].f_19 = 0;
	Global_2392006[iParam0 /*82*/].f_20 = 0;
	StringCopy(&(Global_2392006[iParam0 /*82*/].f_21), "", 64);
	StringCopy(&(Global_2392006[iParam0 /*82*/].f_37), "", 64);
	Global_2392006[iParam0 /*82*/].f_54 = -1;
	Global_2392006[iParam0 /*82*/].f_64 = 16777215;
	Global_2392006[iParam0 /*82*/].f_65 = 0;
	Global_2392006[iParam0 /*82*/].f_66 = 0;
	Global_2392006[iParam0 /*82*/].f_67 = 0;
	Global_2392006[iParam0 /*82*/].f_68 = 0;
	Global_2392006[iParam0 /*82*/].f_69 = 0;
	Global_2392006[iParam0 /*82*/].f_70 = -1;
	Global_2392006[iParam0 /*82*/].f_71 = 0;
	Global_2392006[iParam0 /*82*/].f_72 = 0;
	Global_2392006[iParam0 /*82*/].f_73 = -1;
	Global_2392006[iParam0 /*82*/].f_74 = 0;
	Global_2392006[iParam0 /*82*/].f_76 = 0;
	Global_2392006[iParam0 /*82*/].f_77 = 0;
	Global_2392006[iParam0 /*82*/].f_78 = 0;
	Global_2392006[iParam0 /*82*/].f_79 = 0;
	Global_2392006[iParam0 /*82*/].f_80 = 0;
	Global_2392006[iParam0 /*82*/].f_81 = 0;
	if (unk_0x3A711520F83BAE98())
	{
		Global_2392006[iParam0 /*82*/].f_53 = unk_0xD1952A425B78FFC0();
		Global_2392006[iParam0 /*82*/].f_55 = unk_0xD1952A425B78FFC0();
	}
}

int func_577(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1367894)
	{
		if (!Global_2392006[iVar0 /*82*/].f_11)
		{
			if (Global_2392006[iVar0 /*82*/].f_10 == iParam0)
			{
				if (!bParam2)
				{
					return iVar0;
				}
				if (unk_0xAB019B170BF1309C(uParam1))
				{
					return iVar0;
				}
				if (unk_0x74C475EB8E73D398(sParam1, &(Global_2392006[iVar0 /*82*/].f_21)))
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_578(char* sParam0, char* sParam1)
{
	if (!unk_0xAB019B170BF1309C(uParam0))
	{
		if (unk_0xFDD8E897FECD2912(sParam0) > 63)
		{
			return 0;
		}
	}
	if (!unk_0xAB019B170BF1309C(uParam1))
	{
		if (unk_0xFDD8E897FECD2912(sParam1) > 63)
		{
			return 0;
		}
	}
	return 1;
}

bool func_579()
{
	return Global_1310987.f_4;
}

char* func_580()
{
	switch (unk_0xC45D692E0BD4797B())
	{
		case 0:
			return " ~BLIP_MARTIN_MADRAZZO~~s~ to play the new job now.";
		
		case 1:
			return "e liste d'activit??s ou rejoignez ~BLIP_MARTIN_MADRAZZO~~s~ pour lancer la nouvelle activit?? maintenant.";
		
		case 2:
			return "er gehe zu??~BLIP_MARTIN_MADRAZZO~~s~, um diesen neuen Job jetzt zu spielen.";
		
		case 3:
			return "~BLIP_MARTIN_MADRAZZO~~s~ per giocare subito la nuova missione.";
		
		case 4:
			return " actividades o ve hasta ~BLIP_MARTIN_MADRAZZO~~s~ para iniciarla.";
		
		case 5:
			return "vi??os ou v?? para ~BLIP_MARTIN_MADRAZZO~~s~ para jogar o novo servi??o agora.";
		
		case 6:
			return " udaj si?? do ~BLIP_MARTIN_MADRAZZO~~s~, aby zagra?? w now?? akcj??.";
		
		case 7:
			return "?? ?????? ?????????????????????????? ?? ~BLIP_MARTIN_MADRAZZO~~s~, ?????????? ?????????????????????? ?? ?????????? ????????.";
		
		case 8:
			return "????????? ~BLIP_MARTIN_MADRAZZO~~s~??? ????????????.";
		
		case 9:
			return "????????????";
		
		case 10:
			return "?????????????????????~BLIP_MARTIN_MADRAZZO~~s~???????????????????????????????????????????????????";
		
		case 11:
			return "de actividades o ve hasta ~BLIP_MARTIN_MADRAZZO~~s~ para iniciarla.";
		
		case 12:
			return "~s~?????????????????????????????";
		
		default:
	}
	return " ~BLIP_MARTIN_MADRAZZO~~s~ to play the new job now.";
}

char* func_581()
{
	switch (unk_0xC45D692E0BD4797B())
	{
		case 0:
			return " Madrazo's invite on your Job List or go to";
		
		case 1:
			return "ez l'invitation de Martin Madrazo dans votr";
		
		case 2:
			return "adrazos Einladung in deiner Job-Liste an od";
		
		case 3:
			return "di Martin Madrazo presente nell'elenco attivit?? o raggiungi ";
		
		case 4:
			return "invitaci??n de Martin Madrazo en tu lista de";
		
		case 5:
			return "nvite do Martin Madrazo na sua Lista de Ser";
		
		case 6:
			return "oszenie Martina Madrazo na li??cie akcji lub";
		
		case 7:
			return " ?????????????? ?????????????? ?? ?????????? ???????????? ????";
		
		case 8:
			return "????????? ?????? ???????????? ?????? ??????????????? ????????? ??????";
		
		case 9:
			return "???????????????????????~BLIP_MARTIN_MADRAZZO~~s~???????????";
		
		case 10:
			return "???????????????????????????????????????????????????????????????";
		
		case 11:
			return "a invitaci??n de Mart??n Madrazo en tu lista ";
		
		case 12:
			return "????????????????????????????????~BLIP_MARTIN_MADRAZZO~";
		
		default:
	}
	return " Madrazo's invite on your Job List or go to";
}

char* func_582()
{
	switch (unk_0xC45D692E0BD4797B())
	{
		case 0:
			return "DISPATCH MISSION: Accept Martin";
		
		case 1:
			return "MISSION DE LIQUIDATION??: accept";
		
		case 2:
			return "ATTENTATSMISSION: Nimm Martin M";
		
		case 3:
			return "MISSIONE OMICIDIO: Accetta l'invito ";
		
		case 4:
			return "MISI??N DE ASESINATO: acepta la ";
		
		case 5:
			return "MISS??O DE DESPACHE: Aceite o co";
		
		case 6:
			return "MISJA PORZ??DKOWA: Przyjmij zapr";
		
		case 7:
			return "????????????????????: ?????????????? ??????????????????????";
		
		case 8:
			return "?????? ??????: ?????? ????????? ????????? ?????????";
		
		case 9:
			return "?????????????????????????????????????????????????????????";
		
		case 10:
			return "????????????????????????????????????????????????????????????";
		
		case 11:
			return "Misi??n de liquidaci??n: acepta l";
		
		case 12:
			return "????????????????????????????????????????????????????????";
		
		default:
	}
	return "DISPATCH MISSION: Accept Martin";
}

void func_583(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!unk_0xA6DECE14FC9A8C51(uParam0->f_10[iVar0]))
		{
			uParam0->f_10[iVar0] = unk_0x6F4378873333A0C2(func_542(iVar0));
			unk_0x4B4040A0EC7DBA81(uParam0->f_10[iVar0], 352);
			unk_0x62BD54E491535B76(uParam0->f_10[iVar0], "BLIP_352");
			unk_0x3ED68ABD7299EAA3(uParam0->f_10[iVar0], 4);
			if (!unk_0xC80D31E4B587871C(uParam0->f_3, (0 + iVar0)))
			{
				unk_0x0A8FD2D5529E1737(uParam0->f_10[iVar0], 1);
				unk_0x6E89BBF3A7864ED8(uParam0->f_10[iVar0], 250);
				unk_0xAA75C45BC4449A40(uParam0->f_10[iVar0], 7000);
				unk_0x872F1C1F8587CCC7(&(uParam0->f_3), (0 + iVar0));
			}
		}
		iVar0++;
	}
}

void func_584(var uParam0, var uParam1, var uParam2, int iParam3)
{
	unk_0x67129637F30DEB3F("MIS_CUST_TXT3");
	unk_0x4ADDDBC65685A05E(uParam0);
	unk_0x4ADDDBC65685A05E(uParam1);
	unk_0x4ADDDBC65685A05E(uParam2);
	unk_0x376CFA11DE0FE521(0, 0, 1, iParam3);
}

char* func_585()
{
	switch (unk_0xC45D692E0BD4797B())
	{
		case 0:
			return "your Job List or go to ~BLIP_MARTIN_MADRAZZO~~s~ to play these new jobs now.";
		
		case 1:
			return "ne invitation dans votre liste d'activit??s ou rejoignez ~BLIP_MARTIN_MADRAZZO~~s~ pour lancer ces nouvelles activit??s maintenant.";
		
		case 2:
			return "ob-Liste oder gehe zu??~BLIP_MARTIN_MADRAZZO~~s~, um diese neuen Jobs jetzt zu spielen.";
		
		case 3:
			return "raggiungi ~BLIP_MARTIN_MADRAZZO~~s~ per avviare subito la nuova attivit??.";
		
		case 4:
			return "i??n en tu lista de actividades o ve hasta ~BLIP_MARTIN_MADRAZZO~~s~ para iniciarlas.";
		
		case 5:
			return " na sua Lista de Servi??os ou v?? para ~BLIP_MARTIN_MADRAZZO~~s~ para jogar esses novos servi??os agora.";
		
		case 6:
			return "ie akcji lub udaj si?? do ~BLIP_MARTIN_MADRAZZO~~s~, aby zagra?? w now?? akcj??.";
		
		case 7:
			return " ?????????????????????????? ?? ~BLIP_MARTIN_MADRAZZO~~s~, ?????????? ??????????????????????.";
		
		case 8:
			return "?????? ??????????????? ~BLIP_MARTIN_MADRAZZO~~s~??? ????????????.";
		
		case 9:
			return "???????????????????????";
		
		case 10:
			return "?????????~BLIP_MARTIN_MADRAZZO~~s~???????????????????????????????????????????????????";
		
		case 11:
			return "i??n a tu lista de actividades o ve hasta ~BLIP_MARTIN_MADRAZZO~~s~ para iniciarlas.";
		
		case 12:
			return "~BLIP_MARTIN_MADRAZZO~~s~???????????????????????????????????";
		
		default:
	}
	return "your Job List or go to ~BLIP_MARTIN_MADRAZZO~~s~ to play these new jobs now.";
}

char* func_586()
{
	switch (unk_0xC45D692E0BD4797B())
	{
		case 0:
			return "LABLE: Wait for Martin Madrazo to send you an invite on ";
		
		case 1:
			return " DISPONIBLES??: attendez que Martin Madrazo vous envoie u";
		
		case 2:
			return " Warte auf eine Einladung von Martin Madrazo in deiner J";
		
		case 3:
			return "E: Aspetta che Martin Madrazo ti mandi un invito oppure ";
		
		case 4:
			return "NIBLES: espera a que Martin Madrazo te env??e una invitac";
		
		case 5:
			return "EIS: Espere o Martin Madrazo enviar para voc?? um convite";
		
		case 6:
			return "MADRAZO: Zaczekaj na zaproszenie Martina Madrazo na li??c";
		
		case 7:
			return "???? ?????????????????????? ???? ?????????????? ??????????????, ??????";
		
		case 8:
			return "??? ????????? ?????????????????? ?????? ??????????????? ?????? ?????? ???";
		
		case 9:
			return "??????????????????????????????????????~BLIP_MARTIN_MADRAZZO~~s~";
		
		case 10:
			return "????????????????????????????????????????????????????????????????????????";
		
		case 11:
			return "onibles: espera a que Mart??n Madrazo te env??e una invitac";
		
		case 12:
			return "??????????????????????????????????????????????????";
		
		default:
	}
	return "LABLE: Wait for Martin Madrazo to send you an invite on ";
}

char* func_587()
{
	switch (unk_0xC45D692E0BD4797B())
	{
		case 0:
			return "NEW MADRAZO DISPATCH MISSIONS AVAI";
		
		case 1:
			return "NOUVELLES MISSIONS DE LIQUIDATION";
		
		case 2:
			return "NEUE ATTENTATSMISSIONEN VERF??GBAR:";
		
		case 3:
			return "NUOVA MISSIONE OMICIDIO DISPONIBIL";
		
		case 4:
			return "NUEVAS MISIONES DE ASESINATO DISPO";
		
		case 5:
			return "NOVAS MISS??ES DE DESPACHE DISPON??V";
		
		case 6:
			return "DOST??PNE NOWE MISJE PORZ??DKOWE OD ";
		
		case 7:
			return "?????????? ?????????????? ???? ????????????????????: ??????????????";
		
		case 8:
			return "?????? ???????????? ?????? ?????? ?????? ??????: ?????? ??????";
		
		case 9:
			return "?????????????????????????????????????????????????????????????????????";
		
		case 10:
			return "?????????????????????????????????????????????????????????????????????????????????";
		
		case 11:
			return "Nuevas misiones de liquidaci??n disp";
		
		case 12:
			return "?????????????????????????????????????????????????????????????????";
		
		default:
	}
	return "NEW MADRAZO DISPATCH MISSIONS AVAI";
}

int func_588(char* sParam0, char* sParam1)
{
	if (func_589(31, "BRIEF_STRING2", 1, sParam0, -1, "TEMP", 1, 0, 0, 1, 0, 1, 0, 1, 1, sParam1, 0))
	{
		return 1;
	}
	return 0;
}

int func_589(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	unk_0x0EE72DB1CD8A3B86(&Global_2323, 10);
	iVar0 = 3;
	if (func_590(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, iParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3030 = iParam10;
			Global_2933[3 /*6*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
			Global_3010 = iParam0;
			StringCopy(&Global_3011, sParam5, 64);
			unk_0x872F1C1F8587CCC7(&Global_2323, 1);
			unk_0x872F1C1F8587CCC7(&Global_2323, 7);
		}
		return 1;
	}
	return 0;
}

int func_590(var uParam0, char* sParam1, int iParam2, var uParam3, char* sParam4, char* sParam5, var uParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x74C475EB8E73D398(sParam14, sParam15))
	{
	}
	func_601();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14453 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14453 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14453 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			if (unk_0x40EC3CE69D3499EA(unk_0xFC1458A37D98B502()))
			{
				return 0;
			}
		}
		if (Global_104555.f_14021[Global_14453 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x8F38E94BBF3404CD(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x8F38E94BBF3404CD(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_600() == 0)
	{
		func_598();
		return 0;
	}
	func_597(Global_16823);
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/]), sParam1, 64);
	Global_104555.f_14111[Global_16823 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_104555.f_14111[Global_16823 /*104*/].f_24 = iParam2;
	}
	Global_104555.f_14111[Global_16823 /*104*/].f_25 = iParam7;
	Global_104555.f_14111[Global_16823 /*104*/].f_26 = uParam8;
	Global_104555.f_14111[Global_16823 /*104*/].f_29 = uParam9;
	Global_104555.f_14111[Global_16823 /*104*/].f_30 = uParam12;
	Global_104555.f_14111[Global_16823 /*104*/].f_31 = uParam11;
	Global_104555.f_14111[Global_16823 /*104*/].f_28 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_32 = uParam3;
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/].f_33), sParam4, 64);
	Global_104555.f_14111[Global_16823 /*104*/].f_49 = uParam6;
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/].f_50), sParam5, 64);
	Global_104555.f_14111[Global_16823 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_104555.f_14111[Global_16823 /*104*/].f_83), sParam15, 64);
	if (unk_0xC80D31E4B587871C(Global_2323, 10))
	{
		Global_104555.f_14111[Global_16823 /*104*/].f_99[0] = 1;
		Global_104555.f_14111[Global_16823 /*104*/].f_99[1] = 1;
		Global_104555.f_14111[Global_16823 /*104*/].f_99[2] = 1;
		Global_3029 = 4;
		func_596(0);
		func_596(2);
		func_596(1);
	}
	else
	{
		func_601();
		switch (iParam16)
		{
			case 3:
				Global_104555.f_14111[Global_16823 /*104*/].f_99[Global_14453] = 1;
				break;
			
			case 0:
				Global_104555.f_14111[Global_16823 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_104555.f_14111[Global_16823 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_104555.f_14111[Global_16823 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14453)
			{
				case 0:
					func_596(0);
					Global_3029 = 0;
					break;
				
				case 1:
					func_596(1);
					Global_3029 = 1;
					break;
				
				case 2:
					func_596(2);
					Global_3029 = 2;
					break;
				
				case 3:
					func_596(3);
					Global_3029 = 3;
					break;
				
				default:
					Global_3029 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xC80D31E4B587871C(Global_2323, 10))
		{
			Global_104555.f_14021[0 /*20*/].f_17 = 1;
			Global_104555.f_14021[1 /*20*/].f_17 = 1;
			Global_104555.f_14021[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_104555.f_14021[Global_14453 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_104555.f_14021[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_104555.f_14021[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_104555.f_14021[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16825[Global_16823] = 0;
	if (bParam10)
	{
		func_601();
		if (Global_14396)
		{
			StringCopy(&Global_14442, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14453)
			{
				case 0:
					StringCopy(&Global_14442, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14442, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14442, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14442, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_325())
			{
				unk_0x4AFBCBFDE748D4E0(-1, "Text_Arrive_Tone", &Global_14442, 1);
			}
		}
	}
	if (!Global_14616)
	{
		if (Global_14453.f_1 == 6)
		{
			func_595(Global_14434, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_591(1);
			func_595(Global_14434, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14433), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_591(int iParam0)
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
	
	Global_16824 = 0;
	Global_2928 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2892[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_594(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2330[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2330[iVar1 /*15*/].f_4)
					{
						if (Global_2892[iVar0] == 0)
						{
							Global_2856[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xC80D31E4B587871C(Global_2324, 3))
								{
									iVar2 = 42;
									Global_14619 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14619 = 0;
								}
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_593(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(iVar2);
								unk_0x271AA5469AF471B3();
							}
							if (Global_2456825)
							{
								if (iVar1 == 14)
								{
									func_592(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2892[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2330[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2330[iVar1 /*15*/].f_4)
					{
						if (Global_2892[iVar0] == 0)
						{
							Global_2856[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_104555.f_14111[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_104555.f_14111[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_104555.f_14111[iVar3 /*104*/].f_99[Global_14453] == 1)
											{
												Global_16824++;
											}
										}
									}
									iVar3++;
								}
								func_592(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16824), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_70856)
								{
									iVar4 = 0;
									iVar4 = Global_4265877;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4265878[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4265878[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4265878[iVar5 /*104*/].f_99[Global_14453] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_592(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14453)
									{
										case 0:
											iVar6 = Global_36998;
											break;
										
										case 1:
											iVar6 = Global_36999;
											break;
										
										case 2:
											iVar6 = Global_37000;
											break;
										
										default:
											break;
									}
									func_592(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_592(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_593(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(Global_2329);
								unk_0x271AA5469AF471B3();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xC80D31E4B587871C(Global_2324, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_593(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(iVar7);
								unk_0x271AA5469AF471B3();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xC80D31E4B587871C(Global_2324, 3))
								{
									iVar8 = 42;
									Global_14619 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14619 = 0;
								}
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_593(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(iVar8);
								unk_0x271AA5469AF471B3();
							}
							else if (iVar1 == 8)
							{
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_593(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(42);
								unk_0x271AA5469AF471B3();
							}
							else if ((iVar1 == 23 && unk_0x74C475EB8E73D398(&(Global_2330[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xC80D31E4B587871C(Global_2324, 6))
							{
								unk_0x008F3E3CC076EA0E(Global_14434, "SET_DATA_SLOT");
								unk_0xD07D5CD276368D36(1);
								unk_0xD07D5CD276368D36(iVar0);
								unk_0xD07D5CD276368D36(Global_2330[iVar1 /*15*/].f_10);
								unk_0xD07D5CD276368D36(0);
								func_593(&(Global_2330[iVar1 /*15*/]));
								unk_0xD07D5CD276368D36(42);
								unk_0x271AA5469AF471B3();
							}
							else if (Global_2330[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626277.f_1;
								func_592(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_592(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2892[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_592(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x008F3E3CC076EA0E(uParam0, sParam1);
	unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xAB019B170BF1309C(uParam7))
	{
		func_593(sParam7);
	}
	if (!unk_0xAB019B170BF1309C(iParam8))
	{
		func_593(iParam8);
	}
	if (!unk_0xAB019B170BF1309C(iParam9))
	{
		func_593(iParam9);
	}
	if (!unk_0xAB019B170BF1309C(iParam10))
	{
		func_593(iParam10);
	}
	if (!unk_0xAB019B170BF1309C(iParam11))
	{
		func_593(iParam11);
	}
	unk_0x271AA5469AF471B3();
}

void func_593(var uParam0)
{
	unk_0x7E099EB35339C80D(uParam0);
	unk_0x9748595E4799A2CF();
}

bool func_594(int iParam0)
{
	return Global_35861 == iParam0;
}

void func_595(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x008F3E3CC076EA0E(uParam0, sParam1);
	unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xD07D5CD276368D36(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0x271AA5469AF471B3();
}

void func_596(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_104555.f_14021[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_597(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x2F31FD7674CB6CD3();
	uVar1 = unk_0x95327550F0F2BE7C();
	uVar2 = unk_0x674C9438180770FE();
	uVar3 = unk_0xD3ECC7A5C90D3AA4();
	uVar4 = unk_0xEAF455949B108589() + 1;
	uVar5 = unk_0x93F322D6E98835CC();
	Global_104555.f_14111[iParam0 /*104*/].f_18 = uVar0;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_104555.f_14111[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_598()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70856)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16823 = 34;
	Global_104555.f_14111[Global_16823 /*104*/].f_18 = -1;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_1 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_2 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_3 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_599(Global_104555.f_14111[iVar2 /*104*/].f_18, Global_104555.f_14111[Global_16823 /*104*/].f_18))
		{
			Global_16823 = iVar2;
		}
		iVar2++;
	}
	Global_104555.f_14111[Global_16823 /*104*/].f_24 = 1;
}

int func_599(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_600()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70856)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_104555.f_14111[iVar2 /*104*/].f_24 == 0)
		{
			Global_16823 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16823 = 34;
	Global_104555.f_14111[Global_16823 /*104*/].f_18 = -1;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_1 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_2 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_3 = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_104555.f_14111[iVar2 /*104*/].f_24 == 0 || Global_104555.f_14111[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_599(Global_104555.f_14111[iVar2 /*104*/].f_18, Global_104555.f_14111[Global_16823 /*104*/].f_18))
			{
				Global_16823 = iVar2;
			}
		}
		if (Global_104555.f_14111[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_16823 == 34)
	{
		return 0;
	}
	Global_104555.f_14111[Global_16823 /*104*/].f_99[0] = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_99[1] = 0;
	Global_104555.f_14111[Global_16823 /*104*/].f_99[2] = 0;
	return 1;
}

void func_601()
{
	if (func_594(14))
	{
		if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[0 /*29*/])
			{
				Global_14453 = 0;
			}
			else if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[1 /*29*/])
			{
				Global_14453 = 1;
			}
			else if (unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()) == Global_104555.f_28020[2 /*29*/])
			{
				Global_14453 = 2;
			}
			else
			{
				Global_14453 = 0;
			}
		}
	}
	else
	{
		Global_14453 = func_602();
		if (Global_14453 == 145)
		{
			Global_14453 = 3;
		}
		if (Global_70856)
		{
			Global_14453 = 3;
		}
		if (Global_14453 > 3)
		{
			Global_14453 = 3;
		}
	}
}

var func_602()
{
	func_603();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_603()
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_606(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_605(unk_0xFC1458A37D98B502());
			if (func_604(iVar0) && (!func_594(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_604(Global_104555.f_2353.f_539.f_4301))
				{
					Global_104555.f_2353.f_539.f_4302 = Global_104555.f_2353.f_539.f_4301;
				}
				Global_104555.f_2353.f_539.f_4303 = iVar0;
				Global_104555.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104555.f_2353.f_539.f_4301 != 145)
			{
				Global_104555.f_2353.f_539.f_4303 = Global_104555.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104555.f_2353.f_539.f_4301 = 145;
}

bool func_604(int iParam0)
{
	return iParam0 < 3;
}

int func_605(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(uParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_606(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_606(int iParam0)
{
	if (func_604(iParam0))
	{
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

char* func_607()
{
	switch (unk_0xC45D692E0BD4797B())
	{
		case 0:
			return " meets. Just problems to take care of. I will text your phone.";
		
		case 1:
			return "el ou RDV. Juste des probl??mes ?? r??gler. Surveille tes SMS.";
		
		case 2:
			return "in Treffen, nur Probleme aus der Welt schaffen. Ich meld mich.";
		
		case 3:
			return "incontro. Solo problemi di cui sbarazzarsi. Ti mando un sms.";
		
		case 4:
			return "ros, solo problemas de los que ocuparse. Te enviar?? un mensaje";
		
		case 5:
			return "m encontro. S?? problemas pra despachar. Te envio um sms.";
		
		case 6:
			return "?? spotyka??, po prostu rozwi???? problem. B??d?? pisa??.";
		
		case 7:
			return "????????????, ?????????????? ????????????. ?????????? ??????.";
		
		case 8:
			return "????????? ???????????? ???. ????????? ??? ????????? ?????????.";
		
		case 9:
			return "?????????????????????????????????????????????????????????";
		
		case 10:
			return "???????????????????????????????????????????????????????????????";
		
		case 11:
			return "dres. Solo problemas con los que lidiar. Te enviar?? un texto.";
		
		case 12:
			return "????????????????????????????????????????????????????????????";
		
		default:
	}
	return " meets. Just problems to take care of. I will text your phone.";
}

char* func_608()
{
	switch (unk_0xC45D692E0BD4797B())
	{
		case 0:
			return "I have an opportunity for you: Dispatch Services. No calls, no";
		
		case 1:
			return "J'ai un truc pour toi??: des missions de liquidation. Aucun app";
		
		case 2:
			return "Ich hab ein Angebot f??r dich: Attentatsdienste. Kein Anruf, ke";
		
		case 3:
			return "Ho un'offerta per te: Servizi ad Omicidio. Nessuna chiamata o ";
		
		case 4:
			return "Tengo otro negocio para ti: asesinatos. Ni llamadas ni encuent";
		
		case 5:
			return "Tenho algo para voc??: servi??os de Despache. Sem liga????o, se";
		
		case 6:
			return "Mam dla ciebie propozycj??: us??ugi porz??dkowe. Nie musimy si";
		
		case 7:
			return "?????????????? ???? ????????????????????. ?????????????? ??";
		
		case 8:
			return "???????????? ??????. ?????? ?????????. ????????? ?????? ?????? ";
		
		case 9:
			return "???????????????????????????????????????????????????????????????";
		
		case 10:
			return "???????????????????????????????????????????????????????????????";
		
		case 11:
			return "Tengo algo nuevo: servicios de liquidaci??n. Sin llamadas ni ma";
		
		case 12:
			return "???????????????????????????????????????????????????????????????";
		
		default:
	}
	return "I have an opportunity for you: Dispatch Services. No calls, no";
}

void func_609(var uParam0, bool bParam1)
{
	if (unk_0xE3CCAFB1555348DF() > uParam0->f_4)
	{
		uParam0->f_4 = 0;
		uParam0->f_5 = 0;
		unk_0x0EE72DB1CD8A3B86(&(uParam0->f_3), 2);
		if (bParam1)
		{
			unk_0x872F1C1F8587CCC7(&(uParam0->f_3), 5);
		}
	}
}

bool func_610()
{
	var uVar0;
	
	uVar0 = func_280(3803, -1, 0);
	return ((unk_0xC80D31E4B587871C(uVar0, 0) || unk_0xC80D31E4B587871C(iVar0, 1)) || unk_0xC80D31E4B587871C(iVar0, 2));
}

void func_611(var uParam0)
{
	var uVar0;
	
	if (unk_0xC80D31E4B587871C(uParam0->f_3, 7) && !unk_0xF491DD47B88AA84E())
	{
		if (!func_19())
		{
			return;
		}
		if (!func_63(&(uParam0->f_8)))
		{
			func_23(&(uParam0->f_8), 0, 0);
		}
		else if (func_22(&(uParam0->f_8), 5000, 0))
		{
			uVar0 = func_280(3803, -1, 0);
			if (!unk_0xC80D31E4B587871C(uVar0, 0))
			{
				unk_0x872F1C1F8587CCC7(&iVar0, 0);
			}
			else if (!unk_0xC80D31E4B587871C(iVar0, 1))
			{
				unk_0x872F1C1F8587CCC7(&iVar0, 1);
			}
			else if (!unk_0xC80D31E4B587871C(iVar0, 2))
			{
				unk_0x872F1C1F8587CCC7(&iVar0, 2);
			}
			else
			{
				unk_0x0EE72DB1CD8A3B86(&(uParam0->f_3), 7);
			}
			if (unk_0xC80D31E4B587871C(uParam0->f_3, 7))
			{
				func_584(func_614(), func_613(), func_612(), -1);
				unk_0x0EE72DB1CD8A3B86(&(uParam0->f_3), 7);
				func_147(3803, iVar0, -1, 1, 0);
			}
		}
	}
}

char* func_612()
{
	switch (unk_0xC45D692E0BD4797B())
	{
		case 0:
			return ". Go to the Missions category of the Jobs menu to play.";
		
		case 1:
			return "u menu Pause. Rendez-vous dans la cat??gorie Missions du menu Activit??s pour jouer.";
		
		case 2:
			return "ar. Gehe zur Kategorie \"Missionen\" im Men?? \"Jobs\", um sie zu spielen.";
		
		case 3:
			return " pausa. Per giocare, accedi alla categoria Missioni del menu Attivit??.";
		
		case 4:
			return " men?? de pausa. Ve a la categor??a Misiones del men?? de actividades para iniciarlas.";
		
		case 5:
			return "ausa. Acesse a categoria Miss??es no Menu de Servi??os para jogar.";
		
		case 6:
			return "o kategorii misji w menu akcji, aby w nie zagra??.";
		
		case 7:
			return "??????, ???????????????? ?????????????????? \"??????????????\" ?? ???????? ??????.";
		
		case 8:
			return "?????? ?????? ??????????????? ????????????.";
		
		case 9:
			return "???????????????????????????";
		
		case 10:
			return "?????????????????????????????????";
		
		case 11:
			return "l men?? de pausa. Ve a la categor??a \"Misiones\" del men?? de actividades para iniciarlas.";
		
		case 12:
			return "?????????????????????";
		
		default:
	}
	return ". Go to the Missions category of the Jobs menu to play.";
}

char* func_613()
{
	switch (unk_0xC45D692E0BD4797B())
	{
		case 0:
			return "e in the Online section of the Pause Menu";
		
		case 1:
			return "ssi disponibles dans la section En ligne d";
		
		case 2:
			return "??punkt \"Online\" des Pause-Men??s verf??gb";
		
		case 3:
			return "li anche nella sezione Online del menu di";
		
		case 4:
			return "st??n disponibles en la secci??n Online del";
		
		case 5:
			return " dispon??veis na se????o Online do Menu de P";
		
		case 6:
			return "e w sekcji Online w menu pauzy. Przejd?? d";
		
		case 7:
			return " ?? ?????????????? \"????????\" ???????? ??????????. ?????????? ??????";
		
		case 8:
			return "????????? ????????? ??? ????????????. ?????????????????? ?????? ???";
		
		case 9:
			return "??????????????????????????????????????????";
		
		case 10:
			return "?????????????????????????????????????????????????????????????????????";
		
		case 11:
			return "est??n disponibles en la secci??n Online de";
		
		case 12:
			return "???????????????????????????????????????";
		
		default:
	}
	return "e in the Online section of the Pause Menu";
}

char* func_614()
{
	switch (unk_0xC45D692E0BD4797B())
	{
		case 0:
			return "Dispatch Missions are also availabl";
		
		case 1:
			return "Les missions de liquidation sont au";
		
		case 2:
			return "Attentatsmissionen sind auch im Men";
		
		case 3:
			return "Le missioni Omicidio sono disponibi";
		
		case 4:
			return "Las misiones de asesinato tambi??n e";
		
		case 5:
			return "As Miss??es de Despache tamb??m est??o";
		
		case 6:
			return "Misje porz??dkowe s?? r??wnie?? dost??pn";
		
		case 7:
			return "?????????????? ???? ???????????????????? ?????????? ????????????????";
		
		case 8:
			return "?????? ????????? ?????? ?????? ????????? ????????? ??????";
		
		case 9:
			return "??????????????????????????????????????????????????????????????????";
		
		case 10:
			return "???????????????????????????????????????????????????ONLINE????????????";
		
		case 11:
			return "Las misiones de liquidaci??n tambi??n ";
		
		case 12:
			return "????????????????????????????????????????????????????????????";
		
		default:
	}
	return "Dispatch Missions are also availabl";
}

int func_615(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1118)
	{
		if (iParam0 == Global_794709.f_98389[iVar0 /*13*/].f_1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_616(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1657186075;
		
		case 1:
			return -1789688675;
		
		case 2:
			return -1433171161;
		
		case 3:
			return -1635197776;
		
		case 4:
			return -1509298929;
		
		case 5:
			return 1367922159;
		
		default:
	}
	return 1657186075;
}

int func_617()
{
	return ((unk_0xE3CCAFB1555348DF() / 600) % 6);
}

int func_618(int iParam0)
{
	int iVar0;
	
	iVar0 = (unk_0xE3CCAFB1555348DF() / iParam0);
	iVar0++;
	iVar0 = (iVar0 * iParam0);
	return iVar0;
}

void func_619(var uParam0)
{
	int iVar0;
	
	if (*uParam0 != 0)
	{
		func_490(uParam0);
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (unk_0xA6DECE14FC9A8C51(uParam0->f_10[iVar0]))
			{
				unk_0xE30CF11C0EE14316(&(uParam0->f_10[iVar0]));
			}
			iVar0++;
		}
		*uParam0 = 0;
		uParam0->f_4 = 0;
		uParam0->f_5 = 0;
		uParam0->f_1 = 0;
		uParam0->f_2 = -1;
		func_27(&(uParam0->f_6));
		func_27(&(uParam0->f_8));
		if (!unk_0x3A711520F83BAE98())
		{
			unk_0x0EE72DB1CD8A3B86(&(uParam0->f_3), 4);
		}
	}
}

int func_620(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312447 != 0)
	{
		return 0;
	}
	if (!func_621(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1595693[iVar0 /*680*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

int func_621(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xC80D31E4B587871C(Global_2436181.f_1, iParam0);
	}
	return 1;
}

var func_622()
{
	return Global_68215;
}

int func_623(int iParam0)
{
	if (func_318(Global_1595693[iParam0 /*680*/].f_266.f_17))
	{
		return 1;
	}
	return 0;
}

void func_624(var uParam0)
{
	if (unk_0x3A711520F83BAE98() && unk_0x4916190900E76373())
	{
		if (((!unk_0xC80D31E4B587871C(uParam0->f_3, 8) && Global_4456448.f_122309 != 0) && !func_142()) && !func_110())
		{
			if (Global_4456448 == 0)
			{
				if (func_626(Global_4456448.f_122309))
				{
					unk_0x872F1C1F8587CCC7(&(uParam0->f_3), 7);
					Global_4456448.f_53 = Global_262145.f_10926;
					func_625(1);
				}
			}
			unk_0x872F1C1F8587CCC7(&(uParam0->f_3), 8);
		}
		if (unk_0xC80D31E4B587871C(uParam0->f_3, 7))
		{
			if (Global_262145.f_8374 != 1)
			{
				Global_262145.f_8374 = 1;
			}
			if (Global_4456448.f_53 != Global_262145.f_10926)
			{
				Global_4456448.f_53 = Global_262145.f_10926;
			}
		}
	}
	else if (unk_0xC80D31E4B587871C(uParam0->f_3, 8))
	{
		unk_0x0EE72DB1CD8A3B86(&(uParam0->f_3), 8);
		func_625(0);
	}
}

void func_625(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 1118)
		{
			if (Global_4456448 == 0)
			{
				if (Global_794709.f_4[iVar0 /*88*/].f_68 == 2 || unk_0xC80D31E4B587871C(Global_794709.f_4[iVar0 /*88*/].f_76, 1))
				{
					if (func_626(Global_794709.f_98389[iVar0 /*13*/].f_1))
					{
						if (!unk_0xC80D31E4B587871C(Global_794709.f_4[iVar0 /*88*/].f_76, 14) && Global_4456448.f_122309 != Global_794709.f_98389[iVar0 /*13*/].f_1)
						{
							unk_0x872F1C1F8587CCC7(&(Global_794709.f_4[iVar0 /*88*/].f_76), 14);
							unk_0x872F1C1F8587CCC7(&(iLocal_175[iVar2]), iVar1);
						}
					}
					else if (unk_0xC80D31E4B587871C(Global_794709.f_4[iVar0 /*88*/].f_76, 14))
					{
						unk_0x0EE72DB1CD8A3B86(&(Global_794709.f_4[iVar0 /*88*/].f_76), 14);
						unk_0x872F1C1F8587CCC7(&(iLocal_175[iVar2]), iVar1);
					}
				}
			}
			iVar1++;
			if (iVar1 >= 32)
			{
				iVar1 = 0;
				iVar2++;
			}
			iVar0++;
		}
		Global_262145.f_8374 = 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 1118)
		{
			if (unk_0xC80D31E4B587871C(iLocal_175[iVar2], iVar1))
			{
				if (func_626(Global_794709.f_98389[iVar0 /*13*/].f_1))
				{
					if (unk_0xC80D31E4B587871C(Global_794709.f_4[iVar0 /*88*/].f_76, 14))
					{
						unk_0x0EE72DB1CD8A3B86(&(Global_794709.f_4[iVar0 /*88*/].f_76), 14);
					}
				}
				else if (!unk_0xC80D31E4B587871C(Global_794709.f_4[iVar0 /*88*/].f_76, 14))
				{
					unk_0x872F1C1F8587CCC7(&(Global_794709.f_4[iVar0 /*88*/].f_76), 14);
				}
			}
			iVar1++;
			if (iVar1 >= 32)
			{
				iVar1 = 0;
				iVar2++;
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_175)
		{
			iLocal_175[iVar0] = 0;
			iVar0++;
		}
		Global_262145.f_8374 = 2;
	}
}

int func_626(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_616(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_627(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	unk_0x76CCD673085CBF57(sParam2);
	unk_0x4ADDDBC65685A05E(sParam3);
	unk_0xD3DA9EADE295C3C5(fParam0, fParam1, 0);
}

void func_628()
{
	if (!bLocal_97)
	{
		if (unk_0x0F30C1F1717A6437())
		{
			switch (iLocal_98)
			{
				case 0:
					if (unk_0xE8C126B7ADBB9D63(2, 189))
					{
						iLocal_98++;
						unk_0xC1B1E9A034A63A62(0);
					}
					break;
				
				case 1:
					if (unk_0xE8C126B7ADBB9D63(2, 190))
					{
						iLocal_98++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_98 = 0;
					}
					break;
				
				case 2:
					if (unk_0xE8C126B7ADBB9D63(2, 189))
					{
						iLocal_98++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_98 = 0;
					}
					break;
				
				case 3:
					if (unk_0xE8C126B7ADBB9D63(2, 190))
					{
						iLocal_98++;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_98 = 0;
					}
					break;
				
				case 4:
					if (unk_0xE8C126B7ADBB9D63(2, 188))
					{
						bLocal_97 = true;
						unk_0xC1B1E9A034A63A62(0);
					}
					else if (unk_0x83666F9FB8FEBD4B() > 2000)
					{
						iLocal_98 = 0;
					}
					break;
				}
		}
	}
	else if (unk_0x0F30C1F1717A6437())
	{
		switch (iLocal_98)
		{
			case 0:
				if (unk_0xE8C126B7ADBB9D63(2, 188))
				{
					iLocal_98++;
					unk_0xC1B1E9A034A63A62(0);
				}
				break;
			
			case 1:
				if (unk_0xE8C126B7ADBB9D63(2, 190))
				{
					iLocal_98++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_98 = 0;
				}
				break;
			
			case 2:
				if (unk_0xE8C126B7ADBB9D63(2, 189))
				{
					iLocal_98++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_98 = 0;
				}
				break;
			
			case 3:
				if (unk_0xE8C126B7ADBB9D63(2, 190))
				{
					iLocal_98++;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_98 = 0;
				}
				break;
			
			case 4:
				if (unk_0xE8C126B7ADBB9D63(2, 189))
				{
					bLocal_97 = false;
					unk_0xC1B1E9A034A63A62(0);
				}
				else if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					iLocal_98 = 0;
				}
				break;
			}
	}
}

bool func_629()
{
	return unk_0x21EA5D4DC72DE119(-1762644250);
}

