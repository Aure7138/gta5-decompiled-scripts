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
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	float fLocal_46 = 0f;
	float fLocal_47 = 0f;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	struct<3> Local_50 = { 0, 0, 0 } ;
	struct<3> Local_53 = { 0, 0, 0 } ;
	struct<3> Local_56 = { 0, 0, 0 } ;
	float fLocal_59 = 0f;
	struct<3> Local_60 = { 0, 0, 0 } ;
	float fLocal_63 = 0f;
	struct<3> Local_64 = { 0, 0, 0 } ;
	struct<3> Local_67 = { 0, 0, 0 } ;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	var uLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	char* sLocal_78 = NULL;
	char* sLocal_79 = NULL;
	int iLocal_80 = 0;
	struct<3> Local_81 = { 0, 0, 0 } ;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	char* sLocal_87 = NULL;
	char* sLocal_88 = NULL;
	char* sLocal_89 = NULL;
	char* sLocal_90 = NULL;
	var uLocal_91 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
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
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_46 = (175f * 175f);
	fLocal_47 = (5f * 5f);
	fLocal_48 = (5f * 5f);
	fLocal_49 = (2f * 2f);
	Local_50 = { -1011.737f, -480.254f, 39.0734f };
	Local_53 = { -1003.078f, -477.962f, 49.1374f };
	Local_56 = { -1018.376f, -483.9436f, 36.0964f };
	fLocal_59 = 114.7664f;
	Local_60 = { -1005.191f, -478.2104f, 49.0262f };
	fLocal_63 = 80.6659f;
	Local_64 = { 1f, 1f, 2f };
	Local_67 = { -596.05f, 2088.56f, 130.59f };
	sLocal_78 = "FOUND_CLUE";
	sLocal_79 = "NOIR_FILTER_SOUNDS";
	iLocal_84 = 7;
	sLocal_87 = "missmurder";
	sLocal_88 = "idle";
	sLocal_89 = "MM_LETREAD";
	sLocal_90 = "MM_LETCANC";
	if (unk_0x8D841F1DD3FA555F(83))
	{
		func_82();
	}
	func_75(ScriptParam_0.f_1[0 /*3*/]);
	while (true)
	{
		func_74();
		if (func_69())
		{
			func_1();
		}
		else
		{
			func_82();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	switch (iLocal_84)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			if (!func_68(iLocal_84))
			{
				if (((func_65() && !func_64()) && func_63()) && !func_62(0))
				{
					if (iLocal_86 != 0)
					{
						if (unk_0xC028572E10E0A535(iLocal_86))
						{
							func_60(iLocal_84, 1, 0);
						}
					}
				}
			}
			break;
		
		case 4:
			if (func_59(uLocal_77))
			{
				unk_0x650879C8A673A7D9(uLocal_77, 0.75f);
			}
			if (!func_68(4))
			{
				if ((func_65() && func_63()) && !func_62(0))
				{
					func_60(4, 1, 0);
				}
			}
			break;
		
		case 5:
			if (func_55())
			{
				func_29();
			}
			if (((!func_68(5) && iLocal_72 == 4) && func_63()) && !func_62(0))
			{
				func_60(5, 1, 0);
			}
			break;
		
		case 6:
			if (!func_28(3))
			{
				if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -580.8914f, 2033.12f, 130.5113f, -578.4783f, 2035.029f, 127.5615f, 0.75f, 0, 1, 0))
				{
					func_27(3, 1);
				}
			}
			if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -580.2305f, 2032.054f, 130.2928f, -577.6669f, 2033.917f, 127.5157f, 0.75f, 0, 1, 0))
			{
				if (func_28(3))
				{
					func_18(-595.1746f, 2085.768f, 136.8813f, -601.5754f, 2106.162f, 125.4619f, 20.5f, -602.8466f, 2115.511f, 126.4209f, 128.0735f, 13.5f, 22.2f, 5.7f, 1, 0, 1, 1, 0);
					func_27(3, 0);
				}
			}
			if (!func_28(2))
			{
				if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -580.2305f, 2032.054f, 130.2928f, -577.6669f, 2033.917f, 127.5157f, 0.75f, 0, 1, 0) || unk_0x29AFA2493D7C23D0())
				{
					unk_0x48ADCBD0499AD36B(Local_67, 200f, joaat("prop_mineshaft_door"), 0);
					func_27(2, 1);
				}
			}
			if (func_65() && !func_64())
			{
				unk_0xDE1125A413AF241C(0, 54, 1);
				if (func_16(6))
				{
					if ((!func_68(6) && func_63()) && !func_62(0))
					{
						func_7(134, 4, 1);
						func_60(6, 1, 0);
						func_27(1, 1);
					}
				}
				if (func_6())
				{
					if (!func_5(0))
					{
						if (unk_0x093DEAE9A023FAA0(0, 51))
						{
							func_3();
						}
						func_2("MM_TOGGLE", 10);
					}
				}
			}
			if (func_28(1))
			{
				if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), -594.9976f, 2089.005f, 130.3449f, -597.1125f, 2088.365f, 133.3035f, 1f, 0, 1, 0))
				{
					func_2("MM_HELP", 10000);
					func_27(1, 0);
				}
			}
			break;
	}
}

void func_2(char* sParam0, int iParam1)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0xC592EBAF1D879BDC(0, 0, 1, iParam1);
}

void func_3()
{
	switch (Global_98931.f_8663.f_134)
	{
		case 0:
			Global_98931.f_8663.f_134 = 1;
			break;
		
		case 1:
			Global_98931.f_8663.f_134 = 2;
			unk_0x23289AF941C53AAB(func_4());
			unk_0x35D7948F61AA3FEC(-1, "ON", "NOIR_FILTER_SOUNDS", 1);
			break;
		
		case 2:
			Global_98931.f_8663.f_134 = 0;
			break;
	}
}

char* func_4()
{
	switch (Global_98931.f_8663.f_134)
	{
		case 1:
			return "NG_filmnoir_BW02";
		
		case 2:
			return "NG_filmnoir_BW01";
		
		default:
	}
	return "";
}

int func_5(int iParam0)
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

bool func_6()
{
	return Global_98931.f_8663.f_133 == 127;
}

void func_7(int iParam0, int iParam1, bool bParam2)
{
	Global_2950 = iParam0;
	if (Global_98[iParam0 /*10*/].f_8 != 138)
	{
		func_9();
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
						func_8();
					}
				}
				else
				{
					Global_2874[1 /*6*/] = { Global_98931.f_32499[iParam0 /*29*/].f_3 };
					Global_2874[1 /*6*/].f_5 = iParam1;
					func_8();
				}
			}
			else
			{
				Global_2874[1 /*6*/] = { Global_98931.f_32499[iParam0 /*29*/].f_3 };
				Global_2874[1 /*6*/].f_5 = iParam1;
				func_8();
			}
		}
	}
}

void func_8()
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

void func_9()
{
	if (func_15(14))
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
		Global_14394 = func_10();
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

int func_10()
{
	func_11();
	return Global_98931.f_1750.f_539.f_3549;
}

void func_11()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_14(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_13(unk_0x81873881071CD9FE());
			if (func_12(iVar0) && (!func_15(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_12(Global_98931.f_1750.f_539.f_3549))
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

bool func_12(int iParam0)
{
	return iParam0 < 3;
}

int func_13(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_14(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_14(int iParam0)
{
	if (func_12(iParam0))
	{
		return Global_98931.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_15(int iParam0)
{
	return Global_35443 == iParam0;
}

bool func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == 0)
	{
		return 1;
	}
	iVar1 = unk_0x2FBB59A88186C52F(Global_98931.f_8663.f_133, 0, (iVar0 - 1));
	return iVar1 == (func_17(2, iVar0) - 1);
}

int func_17(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 1;
	}
	return (iParam0 * func_17(iParam0, (iParam1 - 1)));
}

void func_18(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	func_19(Param0, Param3, fParam6, Param7, fParam10, Param11, bParam14, bParam15, bParam16, bParam17, bParam18);
}

void func_19(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, var uParam10, struct<3> Param11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	var uVar0;
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
	uVar0 = unk_0x2ADE2CEED2637E95();
	if (unk_0x86CCCD2FAE9D5E65(uVar0))
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
				func_26(iVar0);
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
					if (func_23(iVar0, Param0, Param3, fParam6))
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
				if (func_21(iVar0, func_10(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_20(Param11))
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

int func_20(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_21(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x86CCCD2FAE9D5E65(uParam0) || !unk_0x7404950238A154C2(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_22(iParam1, iVar0, &sVar1, &iVar9))
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

int func_22(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_23(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7)
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
	
	if (unk_0x7404950238A154C2(uParam0, 0))
	{
		Param1.f_2 = Param4.f_2;
		Var0 = { func_25(Param1 - Param4) };
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
		if (((((((((((((((func_24(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var9) || func_24(Var18[0 /*3*/], Var18[1 /*3*/], Var9, Var15)) || func_24(Var18[0 /*3*/], Var18[1 /*3*/], Var12, Var15)) || func_24(Var18[0 /*3*/], Var18[1 /*3*/], Var6, Var12)) || func_24(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var9)) || func_24(Var18[1 /*3*/], Var18[3 /*3*/], Var9, Var15)) || func_24(Var18[1 /*3*/], Var18[3 /*3*/], Var12, Var15)) || func_24(Var18[1 /*3*/], Var18[3 /*3*/], Var6, Var12)) || func_24(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var9)) || func_24(Var18[3 /*3*/], Var18[2 /*3*/], Var9, Var15)) || func_24(Var18[3 /*3*/], Var18[2 /*3*/], Var12, Var15)) || func_24(Var18[3 /*3*/], Var18[2 /*3*/], Var6, Var12)) || func_24(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var9)) || func_24(Var18[2 /*3*/], Var18[0 /*3*/], Var9, Var15)) || func_24(Var18[2 /*3*/], Var18[0 /*3*/], Var12, Var15)) || func_24(Var18[2 /*3*/], Var18[0 /*3*/], Var6, Var12))
		{
			return 1;
		}
	}
	return 0;
}

int func_24(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11)
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

Vector3 func_25(struct<3> Param0)
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

void func_26(int iParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
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

void func_27(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xF3148AAF69AF9CBC(&uLocal_91, iParam0);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&uLocal_91, iParam0);
	}
}

bool func_28(int iParam0)
{
	return unk_0x236D8AD7EE179F46(uLocal_91, iParam0);
}

void func_29()
{
	int iVar0;
	
	switch (iLocal_71)
	{
		case 0:
			if (!unk_0x0C59B91B32EEDDEE())
			{
				if (unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_50, Local_64, 1, 1, 0))
				{
					if (func_54())
					{
						iLocal_71 = 2;
						func_53(0, 800);
					}
				}
			}
			break;
		
		case 1:
			func_52();
			if (!unk_0x521385D8214D27C4())
			{
				if (unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Local_53, Local_64, 1, 1, 0))
				{
					func_48();
					iLocal_71 = 3;
					func_53(0, 800);
				}
				func_43();
				if (func_59(unk_0x81873881071CD9FE()))
				{
					if (unk_0x5F446E70DA9B8122(unk_0x81873881071CD9FE(), &iVar0, 1))
					{
						if (iVar0 != joaat("weapon_unarmed"))
						{
							unk_0x649CF94A4282A7FD(unk_0x81873881071CD9FE(), joaat("weapon_unarmed"), 0);
						}
					}
					unk_0x99E525B7A12DCDBE(unk_0x81873881071CD9FE(), 1f);
					unk_0xDE1125A413AF241C(0, 37, 1);
					unk_0xDE1125A413AF241C(0, 24, 1);
					unk_0xDE1125A413AF241C(0, 22, 1);
					unk_0xDE1125A413AF241C(0, 141, 1);
					unk_0xDE1125A413AF241C(0, 140, 1);
					unk_0xDE1125A413AF241C(0, 142, 1);
					unk_0xDE1125A413AF241C(0, 257, 1);
					unk_0xDE1125A413AF241C(0, 25, 1);
					unk_0xDE1125A413AF241C(0, 37, 1);
					unk_0xDE1125A413AF241C(0, 44, 1);
				}
			}
			break;
		
		case 2:
			func_52();
			if (unk_0x29AFA2493D7C23D0())
			{
				func_39(24, 0);
				func_38(unk_0x81873881071CD9FE(), Local_60, fLocal_63);
				unk_0x270066FDBAF3A458(0);
				unk_0xEAB527164AD92BF3(0, 1065353216);
				unk_0x649CF94A4282A7FD(unk_0x81873881071CD9FE(), joaat("weapon_unarmed"), 1);
				unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 0, 0);
				unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 0);
				func_37(1);
				func_18(-1023.439f, -479.5592f, 35.81806f, -1014.383f, -495.1239f, 40.10796f, 18.5f, -1024.096f, -485.1923f, 35.9779f, 209.0203f, func_36(), 1, 0, 1, 1, 0);
				unk_0x3DEBEEC5B1D7D4C5(Local_60, 20f, 0);
				func_33(24, &iLocal_70);
				unk_0xC9C56731782E64CD(iLocal_70);
				iLocal_85 = (unk_0x48E480685981C7D4() + 40000);
				while ((!unk_0xA5C3CFD413D647EA() || !unk_0x9B710BA2688DD221(iLocal_70)) && iLocal_85 > unk_0x48E480685981C7D4())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				unk_0x5AD73EF670D05F7D();
				if (iLocal_85 <= unk_0x48E480685981C7D4())
				{
					unk_0x2912C2F5F69CF538(iLocal_70);
					func_38(unk_0x81873881071CD9FE(), Local_56, fLocal_59);
					func_53(1, 800);
					iLocal_71 = 0;
				}
				else
				{
					func_53(1, 800);
					iLocal_71 = 1;
					func_32();
				}
			}
			break;
		
		case 3:
			func_52();
			func_48();
			if (unk_0x29AFA2493D7C23D0())
			{
				func_38(unk_0x81873881071CD9FE(), Local_56, fLocal_59);
				func_39(24, 1);
				unk_0x2912C2F5F69CF538(iLocal_70);
				unk_0x270066FDBAF3A458(0);
				unk_0xEAB527164AD92BF3(0, 1065353216);
				func_37(0);
				func_31();
				func_30(Local_56, 30f, 12, 5000, 0, 0);
				func_53(1, 800);
				iLocal_71 = 0;
			}
			break;
	}
}

void func_30(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
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
				func_48();
			}
			if (bParam6)
			{
				func_52();
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		if (unk_0x48E480685981C7D4() < iVar1)
		{
		}
		unk_0xE112003C3132147E(uVar0);
	}
}

void func_31()
{
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (func_28(0))
		{
			unk_0x3680E6E22308220C();
			func_27(0, 0);
		}
	}
}

void func_32()
{
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (!func_28(0))
		{
			unk_0xE2B360519566682D("MYSTERY LETTER CAM");
			func_27(0, 1);
		}
	}
}

var func_33(int iParam0, int iParam1)
{
	struct<5> Var0;
	
	Var0 = { func_34(iParam0) };
	*iParam1 = unk_0xA17AB437A96481B6(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_34(int iParam0)
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
			Var5 = { func_35(1) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			Var5 = { func_35(2) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			Var5 = { func_35(3) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			Var5 = { func_35(4) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			Var5 = { func_35(5) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			Var5 = { func_35(6) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			Var5 = { func_35(7) };
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
			Var5 = { func_35(35) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			Var5 = { func_35(36) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			Var5 = { func_35(37) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			Var5 = { func_35(38) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			Var5 = { func_35(39) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			Var5 = { func_35(40) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			Var5 = { func_35(41) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			Var5 = { func_35(42) };
			Var0 = { Var5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			Var5 = { func_35(43) };
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

struct<6> func_35(int iParam0)
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

Vector3 func_36()
{
	return 2.55f, 5.665f, 2.55f;
}

void func_37(bool bParam0)
{
	func_27(5, bParam0);
	unk_0x54F463308F545A46(bParam0);
}

void func_38(int iParam0, struct<3> Param1, float fParam4)
{
	unk_0xB067093BBAF0A747(iParam0, Param1, 1, 0, 0, 1);
	unk_0xC24172029826A66F(iParam0, fParam4);
}

void func_39(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "NULL";
	iVar1 = 0;
	sVar0 = func_33(iParam0, &iVar1);
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
				func_42(iParam0, 1);
				return;
			}
		}
		else
		{
			if (!unk_0x722B1277ED8601B6(iVar1))
			{
				return;
			}
			if (func_40(iParam0))
			{
				func_42(iParam0, 0);
			}
		}
		unk_0x1409374EEBBAEF54(iVar1, bParam1);
		if (bParam1)
		{
		}
	}
}

int func_40(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_41(iParam0) };
	if (unk_0x236D8AD7EE179F46(Global_31307[Var0.f_1], Var0.f_0))
	{
		return 1;
	}
	return 0;
}

struct<2> func_41(var uParam0)
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

void func_42(int iParam0, bool bParam1)
{
	struct<2> Var0;
	
	Var0 = { func_41(iParam0) };
	if (bParam1)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_31307[Var0.f_1]), Var0.f_0);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_31307[Var0.f_1]), Var0.f_0);
	}
}

void func_43()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { -1007.013f, -478.3662f, 49.02818f };
	Var3 = { -1007.85f, -476.9573f, 51.02807f };
	fVar6 = 1.75f;
	switch (iLocal_72)
	{
		case 0:
			if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Var0, Var3, fVar6, 0, 1, 0) && !func_5(0))
			{
				func_47(sLocal_89);
				iLocal_72++;
			}
			break;
		
		case 1:
			if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), Var0, Var3, fVar6, 0, 1, 0) && !func_5(0))
			{
				if (!func_46(unk_0x81873881071CD9FE(), -880529684))
				{
					unk_0x71D4A7422520E90F(unk_0x81873881071CD9FE(), -1007.995f, -476.8016f, 49.9117f, -1, 0, 2);
				}
				if (unk_0x093DEAE9A023FAA0(2, 51))
				{
					func_45(0);
					unk_0xD91194CE3D1E1D77(unk_0x81873881071CD9FE(), -1007.351f, -477.5197f, 49.0282f, 1f, -1, 0.5f, 0, 30.4025f);
					func_47(sLocal_90);
					unk_0x3BF4F473786B0150(0);
					unk_0xDD0B0D77CB8995B1(uLocal_73, 1);
					unk_0xFEBF3DDE5E4DC5C5(1, 0, 3000, 1, 0, 0);
					iLocal_72++;
				}
			}
			else
			{
				unk_0xB8BB626315D394F5(1);
				unk_0x27CC98B7C879C320(unk_0x81873881071CD9FE());
				iLocal_72 = (iLocal_72 - 1);
			}
			break;
		
		case 2:
			func_48();
			func_45(0);
			unk_0x3BF4F473786B0150(0);
			if (!func_44(sLocal_90))
			{
				func_47(sLocal_90);
			}
			if (unk_0x093DEAE9A023FAA0(2, 51))
			{
				if (unk_0x7FCE6803A3D23268(0) == 4)
				{
					iLocal_85 = unk_0x48E480685981C7D4() + 300;
					unk_0x45D2AAD93E9AC4B3("CamPushInNeutral", 0, 0);
					unk_0x35D7948F61AA3FEC(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 0);
				}
				else
				{
					iLocal_85 = 0;
				}
				iLocal_72++;
			}
			break;
		
		case 3:
			func_48();
			if (iLocal_85 < unk_0x48E480685981C7D4())
			{
				unk_0x270066FDBAF3A458(0);
				unk_0xEAB527164AD92BF3(0, 1065353216);
				unk_0x3BF4F473786B0150(1);
				func_45(1);
				unk_0x27CC98B7C879C320(unk_0x81873881071CD9FE());
				unk_0xFEBF3DDE5E4DC5C5(0, 0, 3000, 1, 0, 0);
				unk_0xDD0B0D77CB8995B1(uLocal_73, 0);
				iLocal_72++;
			}
			break;
		
		case 4:
			iLocal_72 = 0;
			break;
	}
}

bool func_44(char* sParam0)
{
	unk_0xF7F787102FC9BCAC(sParam0);
	return unk_0xEF468B98099969A5(0);
}

void func_45(bool bParam0)
{
	func_27(6, !bParam0);
	unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), bParam0, 0);
}

bool func_46(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0xFA1212DE7C455679(uParam0, iParam1);
	return (iVar0 == 1 || iVar0 == 0);
}

void func_47(char* sParam0)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0xC592EBAF1D879BDC(0, 1, 1, -1);
}

void func_48()
{
	if (!Global_14394.f_1 == 1)
	{
		if (func_5(0))
		{
			func_49(0);
		}
		unk_0xF3148AAF69AF9CBC(&Global_2265, 2);
	}
}

void func_49(int iParam0)
{
	if (Global_14552)
	{
		func_51(0, 0);
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
	if (!func_50())
	{
		Global_14394.f_1 = 3;
	}
}

int func_50()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_51(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_5(0))
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

void func_52()
{
	Global_17099.f_6 = 1;
}

void func_53(bool bParam0, int iParam1)
{
	func_27(4, !bParam0);
	if (bParam0)
	{
		unk_0xAE2B1C30F8A0B67C(iParam1);
	}
	else
	{
		unk_0x3B283FEBA87FFBEB(iParam1);
	}
}

int func_54()
{
	int iVar0;
	
	iVar0 = unk_0x0C937048CF6952B5();
	if (iVar0 >= 21 || iVar0 < 6)
	{
		return 1;
	}
	func_2("MM_SOLBUSY", 5000);
	return 0;
}

int func_55()
{
	if (iLocal_71 == 1)
	{
		return 1;
	}
	if (!func_63())
	{
		return 0;
	}
	if (!func_58(61))
	{
		return 0;
	}
	if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0 && iLocal_71 == 0)
	{
		return 0;
	}
	if (func_62(0))
	{
		return 0;
	}
	if (func_57())
	{
		return 0;
	}
	if (func_12(func_10()))
	{
		if (func_56(func_10()) == 4 || func_56(func_10()) == 5)
		{
			return 0;
		}
	}
	if (unk_0x9284F36E422CA571())
	{
		return 0;
	}
	if (Global_25092)
	{
		return 0;
	}
	return 1;
}

int func_56(int iParam0)
{
	if (!func_12(iParam0))
	{
		return 7;
	}
	return Global_98931.f_6302.f_919[iParam0];
}

int func_57()
{
	var uVar0;
	
	if (Global_25096)
	{
		uVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
		if (unk_0x7404950238A154C2(uVar0, 0))
		{
			if (!unk_0x5FEB513A4402FD59(unk_0xB0B9E53CEFDB16AA(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_58(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_98931.f_7699.f_330[iParam0 /*6*/];
}

int func_59(int iParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		if (!unk_0x930F8FBB8E9537CC(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_60(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_98931.f_8663.f_133), iParam0);
		if (!bParam2)
		{
			unk_0x35D7948F61AA3FEC(uLocal_80, sLocal_78, sLocal_79, 0);
		}
		func_61();
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_98931.f_8663.f_133), iParam0);
	}
}

int func_61()
{
	if (func_62(0))
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

bool func_62(bool bParam0)
{
	if (!bParam0 && unk_0x968BF1C2C695B61A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x236D8AD7EE179F46(Global_69268, 0);
}

bool func_63()
{
	return unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == joaat("player_zero");
}

int func_64()
{
	if (func_59(unk_0x81873881071CD9FE()))
	{
		return unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0);
	}
	return 0;
}

bool func_65()
{
	return unk_0xB7A628320EFF8E47(func_67(iLocal_84), Local_81) < func_66(iLocal_84);
}

float func_66(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return fLocal_47;
		
		case 1:
			return fLocal_47;
		
		case 2:
			return fLocal_47;
		
		case 3:
			return fLocal_47;
		
		case 4:
			return fLocal_48;
		
		case 5:
			return fLocal_49;
		
		case 6:
			return 4f;
		
		default:
	}
	return 0f;
}

Vector3 func_67(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1.8941f, 309.6565f, 111.0097f;
		
		case 1:
			return 190.1696f, -431.7692f, 42.1372f;
		
		case 2:
			return 283.3024f, 212.6587f, 104.5986f;
		
		case 3:
			return -425.1273f, 1064.801f, 323.8097f;
		
		case 4:
			return -3160.96f, 3005.628f, -39.9701f;
		
		case 5:
			return -1008.142f, -476.2818f, 49.9633f;
		
		case 6:
			return -544.11f, 1986.58f, 127.03f;
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_68(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_98931.f_8663.f_133, iParam0);
}

int func_69()
{
	switch (iLocal_84)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return (!func_68(iLocal_84) && func_71());
		
		case 4:
			return func_71();
		
		case 5:
			return ((((func_16(iLocal_84) && func_71()) || iLocal_71 == 1) || iLocal_71 == 3) || iLocal_71 == 2);
		
		case 6:
			return (func_71() || (func_28(2) && func_70(Local_67)));
		
		default:
	}
	return 0;
}

var func_70(struct<3> Param0)
{
	var uVar0;
	var uVar1;
	
	return unk_0x7381DBE8057F55BE(Param0, &uVar0, &uVar1);
}

bool func_71()
{
	return unk_0xB7A628320EFF8E47(func_73(iLocal_84), Local_81) < func_72(iLocal_84);
}

float func_72(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return fLocal_46;
		
		case 1:
			return fLocal_46;
		
		case 2:
			return fLocal_46;
		
		case 3:
			return fLocal_46;
		
		case 4:
			return fLocal_46;
		
		case 5:
			return fLocal_46;
		
		case 6:
			return fLocal_46;
		
		default:
	}
	return 0f;
}

Vector3 func_73(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1.8941f, 309.6565f, 111.0097f;
		
		case 1:
			return 190.1696f, -431.7692f, 42.1372f;
		
		case 2:
			return 283.3024f, 212.6587f, 104.5986f;
		
		case 3:
			return -425.1273f, 1064.801f, 323.8097f;
		
		case 4:
			return -3174.901f, 3034.061f, -35.645f;
		
		case 5:
			return -1008.69f, -476.4341f, 49.9544f;
		
		case 6:
			return -544.11f, 1986.58f, 127.03f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_74()
{
	if (func_59(unk_0x81873881071CD9FE()))
	{
		Local_81 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 0) };
	}
}

void func_75(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	if (!func_81())
	{
		unk_0xC23A229F78DAD92A();
	}
	if (unk_0x968BF1C2C695B61A(joaat("murdermystery")) > 1)
	{
		unk_0xC23A229F78DAD92A();
	}
	iVar0 = 0;
	while (iVar0 < 7 && iLocal_84 == 7)
	{
		iVar1 = iVar0;
		if (func_80(Param0, func_73(iVar1), 1056964608))
		{
			iLocal_84 = iVar1;
		}
		iVar0++;
	}
	func_76();
}

void func_76()
{
	switch (iLocal_84)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_79(&iLocal_86, func_67(iLocal_84), 0.2f);
			break;
		
		case 4:
			func_78(joaat("u_f_m_drowned_01"));
			func_77(sLocal_87);
			uLocal_77 = unk_0x206897C6DBC12488(26, joaat("u_f_m_drowned_01"), func_67(4), 184.5548f, 1, 1);
			unk_0x887F4488DA99FD21(joaat("u_f_m_drowned_01"));
			unk_0x31C1393E4ACFD794(uLocal_77, sLocal_87, sLocal_88, 1000f, -1000f, -1, 9, 0, 0, 0, 0);
			unk_0x1D15D99A10A15334(uLocal_77, 1);
			unk_0x6CB332CB31E9FA96(uLocal_77, 1);
			unk_0xA8F22633ACC22189(uLocal_77, 1);
			unk_0xC9E1121219C75417(uLocal_77, 1);
			unk_0x7FF6BAAA4631F943(uLocal_77, 1);
			unk_0xCE566DBDCACD245E(uLocal_77, 118, 0);
			unk_0xCE566DBDCACD245E(uLocal_77, 208, 1);
			unk_0x210A4A0B257F8433(uLocal_77, 1);
			unk_0x506A601663C5417C(uLocal_77, joaat("player"));
			break;
		
		case 5:
			iLocal_74 = 731806707;
			unk_0x5DFB58C2BA8EB905(iLocal_74, joaat("v_ilev_sol_off_door01"), -1002.147f, -478.064f, 50.117f, 1, 1, 0);
			unk_0xFF3E86C4D581F64B(iLocal_74, 1, 1, 0);
			uLocal_73 = unk_0x6112CFE839591737(26379945, -1008.056f, -476.7573f, 50.2493f, -89.5003f, 0f, 38.7952f, 50f, 0, 2);
			break;
		
		case 6:
			func_78(joaat("u_m_o_filmnoir"));
			uLocal_75 = unk_0x206897C6DBC12488(26, joaat("u_m_o_filmnoir"), func_67(6), 22.9631f, 1, 1);
			unk_0x8F6F76DC62AD09F1(uLocal_75, 0, 0, 0, 0);
			unk_0x887F4488DA99FD21(joaat("u_m_o_filmnoir"));
			unk_0xC9E1121219C75417(uLocal_75, 1);
			unk_0x7FF6BAAA4631F943(uLocal_75, 1);
			unk_0x285AE1B776D148B5(uLocal_75, joaat("weapon_sniperrifle"));
			unk_0x506A601663C5417C(uLocal_75, joaat("player"));
			uLocal_76 = unk_0x530605DB2F32365F(joaat("prop_vintage_filmcan"), -543.71f, 1986.2f, 126.05f, 1, 1, 0);
			break;
	}
}

void func_77(char* sParam0)
{
	unk_0x295DC04FC13E025B(sParam0);
	while (!unk_0x8E8B546E1A81D27F(sParam0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_78(int iParam0)
{
	unk_0x32A12757CBF48A33(iParam0);
	while (!unk_0x33ACB874CECA2D4B(iParam0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_79(int iParam0, struct<3> Param1, float fParam4)
{
	*iParam0 = unk_0xF6B0EABC1383A6A0();
	if (*iParam0 == 0)
	{
	}
	else
	{
		unk_0xD980A1884151FA68(*iParam0, Param1, fParam4);
	}
}

bool func_80(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return unk_0x2A488C176D52CCA5(Param0, Param3) <= fParam6;
}

int func_81()
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

void func_82()
{
	func_83();
	func_31();
	unk_0xC23A229F78DAD92A();
}

void func_83()
{
	switch (iLocal_84)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			unk_0xB259FEFD2BF54CFE(iLocal_86);
			iLocal_86 = 0;
			break;
		
		case 4:
			if (unk_0x86CCCD2FAE9D5E65(uLocal_77))
			{
				unk_0x71A8BCA218722FA1(&iLocal_77);
			}
			unk_0xD8323B49BAE93D80(sLocal_87);
			break;
		
		case 5:
			if (unk_0x0017826B6757A11F(iLocal_74))
			{
				unk_0xFD441218304BE040(iLocal_74);
			}
			if (unk_0x42E36F2D658EB2FF(uLocal_73))
			{
				unk_0x35B958B469415A23(uLocal_73, 0);
			}
			if (func_28(4))
			{
				unk_0xAE2B1C30F8A0B67C(0);
			}
			if (func_28(5))
			{
				unk_0x54F463308F545A46(false);
			}
			if (func_28(6))
			{
				unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), true, 0);
			}
			if (func_44(sLocal_89) || func_44(sLocal_90))
			{
				unk_0xB8BB626315D394F5(1);
			}
			break;
		
		case 6:
			if (unk_0x86CCCD2FAE9D5E65(uLocal_75))
			{
				unk_0x71A8BCA218722FA1(&iLocal_75);
			}
			if (unk_0x86CCCD2FAE9D5E65(uLocal_76))
			{
				unk_0xB5713813CBD9E79F(&iLocal_76);
			}
			if (func_28(2))
			{
				unk_0x66EED1B743852445(Local_67, 200f, joaat("prop_mineshaft_door"), 0);
			}
			break;
	}
}

