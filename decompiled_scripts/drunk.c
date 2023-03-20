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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
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
	struct<5> Local_42 = { 0, 0, 0, 0, 0 } ;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	bool bLocal_49 = 0;
	bool bLocal_50 = 0;
	float fLocal_51 = 0f;
	float fLocal_52 = 0f;
	char* sLocal_53 = NULL;
	struct<5> Local_54 = { 0, 0, 0, 0, 0 } ;
	struct<3> Local_59 = { 0, 0, 0 } ;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
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
	sLocal_17 = "NULL";
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
	iLocal_47 = -1;
	iLocal_48 = -1;
	fLocal_51 = 1.7f;
	fLocal_52 = 0f;
	sLocal_53 = "";
	iLocal_62 = -1;
	if (unk_0x8D841F1DD3FA555F(2))
	{
		func_131();
	}
	Local_42 = { ScriptParam_0 };
	func_130();
	func_129();
	func_124(iLocal_47, 0, 0);
	unk_0xC1B1E9A034A63A62(0);
	func_123();
	func_115();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_114(iLocal_47);
		func_113();
		func_111();
		func_104();
		func_124(iLocal_47, 0, 0);
		func_130();
		func_6();
		if ((unk_0x1C6DF6AD69BE853E() && !unk_0x726DA50057167075()) && !func_5())
		{
			func_1();
		}
	}
}

void func_1()
{
	if (func_4() || func_3())
	{
		func_2();
	}
}

void func_2()
{
	Global_2428865.f_630 = 1;
}

var func_3()
{
	return Global_2428865.f_609;
}

bool func_4()
{
	return unk_0x236D8AD7EE179F46(Global_2428865.f_2, 11);
}

bool func_5()
{
	return unk_0x236D8AD7EE179F46(Global_2429626.f_1.f_2809, 3);
}

void func_6()
{
	bool bVar0;
	
	if (unk_0x930F8FBB8E9537CC(Local_42.f_1))
	{
		func_131();
	}
	if (bLocal_49)
	{
		if (!unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			func_131();
		}
	}
	func_103();
	bVar0 = true;
	switch (Local_59.f_0)
	{
		case 4:
			func_102();
			return;
		
		case 5:
			func_99();
			return;
		
		case 6:
			func_97();
			return;
		
		case 7:
			func_96();
			return;
		
		case 8:
			func_95();
			return;
		
		case 9:
			func_93();
			return;
		
		case 10:
			func_92();
			func_89();
			func_88();
			return;
		
		case 11:
			func_87();
			return;
		
		case 12:
			break;
		
		default:
			bVar0 = false;
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (!Local_59.f_0 == 12)
	{
		return;
	}
	switch (Local_59.f_1)
	{
		case 1:
			if (!func_86())
			{
				func_85();
				func_89();
			}
			break;
		
		case 2:
			func_83();
			break;
		
		case 12:
			func_70();
			break;
		
		case 3:
			func_7();
			break;
		
		default:
			break;
	}
}

void func_7()
{
	char* sVar0;
	struct<53> Var1;
	int iVar59;
	
	unk_0xEB392534E2AF5CA4(Local_42.f_1, 3000, 3500, 0, 1, 1, 0);
	Global_1707911 = 1;
	if (!unk_0x29AFA2493D7C23D0())
	{
		unk_0x3B283FEBA87FFBEB(2500);
		while (unk_0xC584A413BCB2AA39())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		func_64(unk_0x1329891157A54C63(), 0, 57344);
		Global_2404607.f_1444 = 1;
		if (unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0))
		{
			Global_2404607.f_1445 = 1;
		}
		else
		{
			Global_2404607.f_1445 = 0;
		}
		func_62(1);
		func_131();
	}
	sVar0 = "";
	Var1.f_3 = 1064514355;
	Var1.f_30 = 1148829696;
	Var1.f_31 = 1148829696;
	Var1.f_52 = 1148829696;
	iVar59 = 7;
	switch (func_57())
	{
		case 0:
			if (func_55() != 2)
			{
				iVar59 = 0;
			}
			else
			{
				iVar59 = 1;
			}
			break;
		
		case 1:
			if (!func_54(126))
			{
				iVar59 = 2;
			}
			else
			{
				iVar59 = 3;
			}
			break;
		
		case 2:
			if (!func_53(4))
			{
				if (func_54(58))
				{
					iVar59 = 4;
				}
				if (func_54(59))
				{
					iVar59 = 5;
				}
				if (iVar59 == 7)
				{
					if (!func_52())
					{
						iVar59 = 4;
					}
					else
					{
						iVar59 = 5;
					}
				}
			}
			else
			{
				iVar59 = 6;
			}
			break;
	}
	switch (iVar59)
	{
		case 0:
			sVar0 = "DWC_MICHAEL_mansion";
			Var1.f_0 = "SAVEM_Default@";
			Var1.f_1 = "M_GetOut_R";
			Var1.f_2 = "M_GetOut_R_CAM";
			Var1.f_5 = { -814.181f, 181.1f, 75.74f };
			Var1.f_8 = { 0f, 0f, 21.1994f };
			Var1.f_4 = joaat("MotionState_Idle");
			break;
		
		case 1:
			sVar0 = "DWC_MICHAEL_trailer";
			Var1.f_0 = "SAVECountryside@";
			Var1.f_1 = "M_GetOut_countryside";
			Var1.f_2 = "M_GetOut_countryside_CAM";
			Var1.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var1.f_8 = { 0f, 0f, 29.7938f };
			Var1.f_4 = joaat("MotionState_Idle");
			break;
		
		case 2:
			sVar0 = "DWC_FRANKLIN_city";
			Var1.f_0 = "SWITCH@FRANKLIN@BED";
			Var1.f_1 = "Sleep_GetUp_RubEyes";
			Var1.f_2 = "Sleep_GetUp_RubEyes_CAM";
			Var1.f_5 = { -17.2168f, -1441.224f, 30.1015f };
			Var1.f_8 = { 0f, 0f, -179.653f };
			Var1.f_4 = joaat("MotionState_Idle");
			break;
		
		case 3:
			sVar0 = "DWC_FRANKLIN_hills";
			Var1.f_0 = "SAVEBighouse@";
			Var1.f_1 = "F_GetOut_r_bighouse";
			Var1.f_2 = "F_GetOut_r_bighouse_CAM";
			Var1.f_5 = { -1.049f, 524.283f, 170.064f };
			Var1.f_8 = { 0f, 0f, 24f };
			Var1.f_4 = joaat("MotionState_Idle");
			break;
		
		case 4:
			sVar0 = "DWC_TREVOR_trailer";
			Var1.f_0 = "SAVECountryside@";
			Var1.f_1 = "T_GetOut_countryside";
			Var1.f_2 = "T_GetOut_countryside_CAM";
			Var1.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var1.f_8 = { 0f, 0f, 29.7938f };
			Var1.f_4 = joaat("MotionState_Idle");
			break;
		
		case 5:
			sVar0 = "DWC_TREVOR_beach";
			Var1.f_0 = "SAVEVeniceB@";
			Var1.f_1 = "T_GetOut_r_veniceB";
			Var1.f_2 = "T_GetOut_r_veniceB_CAM";
			Var1.f_5 = { -1148.438f, -1512.246f, 9.689f };
			Var1.f_8 = { 0f, 0f, 36.25f };
			Var1.f_4 = joaat("MotionState_Idle");
			break;
		
		case 6:
			sVar0 = "DWC_TREVOR_stripclub";
			Var1.f_0 = "SAVECouch@";
			Var1.f_1 = "T_GetOut_couch";
			Var1.f_2 = "T_GetOut_couch_CAM";
			Var1.f_5 = { 94.53f, -1289.86f, 28.27f };
			Var1.f_8 = { 0f, 0f, 29.7938f };
			Var1.f_4 = joaat("MotionState_Idle");
			break;
	}
	if (!unk_0x930F8FBB8E9537CC(Local_42.f_1))
	{
		unk_0xB067093BBAF0A747(Local_42.f_1, Var1.f_5, 1, 0, 0, 1);
	}
	unk_0x4EDE34FBADD967A6(500);
	StringCopy(&(Var1.f_11), "", 16);
	Var1.f_15 = -1f;
	func_9(sVar0, &Var1, "");
	func_8(126, 1);
	func_131();
}

void func_8(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51145[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		return;
	}
	if (Global_51145[iParam0 /*7*/])
	{
		unk_0x85C45034BA638694(Global_51145[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x123B783056E76C4E(Global_51145[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_9(char* sParam0, var uParam1, char* sParam2)
{
	float fVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	var uVar9;
	int iVar174;
	int iVar175;
	char* sVar176;
	char* sVar177;
	char* sVar178;
	int iVar179;
	float fVar180;
	float fVar181;
	int iVar182;
	int iVar183;
	int iVar184;
	float fVar185;
	struct<3> Var186;
	struct<3> Var189;
	float fVar192;
	float fVar193;
	float fVar194;
	struct<3> Var195;
	var uVar198;
	float fVar199;
	float fVar200;
	struct<3> Var201;
	struct<3> Var204;
	float fVar207;
	int iVar208;
	float fVar209;
	float fVar210;
	struct<3> Var211;
	var uVar214;
	float fVar215;
	float fVar216;
	struct<3> Var217;
	struct<3> Var220;
	float fVar223;
	int iVar224;
	bool bVar225;
	bool bVar226;
	int iVar227;
	
	fVar0 = 0f;
	unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), false, 0);
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		unk_0x210A4A0B257F8433(unk_0x81873881071CD9FE(), 1);
	}
	unk_0x9FDA5C65BF0EE91F(uParam1->f_5, 4500f);
	unk_0xE7AEBD5A9C95E5E0(uParam1->f_5, 4500f);
	unk_0x7C6BF0CD5D7454C9(uParam1->f_5, 5f, 1, 0, 0, 0);
	unk_0xB067093BBAF0A747(unk_0x81873881071CD9FE(), uParam1->f_5, 1, 0, 0, 1);
	unk_0xA8F22633ACC22189(unk_0x81873881071CD9FE(), true);
	unk_0x4EDE34FBADD967A6(0);
	unk_0xD338B0444EFB8C65(1);
	unk_0x295DC04FC13E025B(*uParam1);
	if (unk_0xB318FDA0D1ABDB20(uParam1->f_16))
	{
	}
	else
	{
		unk_0x295DC04FC13E025B(uParam1->f_16);
	}
	if (!unk_0x29AFA2493D7C23D0())
	{
		unk_0x3B283FEBA87FFBEB(0);
	}
	func_47(uParam1->f_5, uParam1->f_8.f_2, 0, 1);
	if (!unk_0x29AFA2493D7C23D0())
	{
		unk_0x3B283FEBA87FFBEB(0);
	}
	iVar1 = unk_0x48E480685981C7D4() + 20000;
	bVar2 = false;
	uParam1->f_33 = 0;
	while (!bVar2 && iVar1 > unk_0x48E480685981C7D4())
	{
		bVar2 = true;
		unk_0x295DC04FC13E025B(*uParam1);
		if (!unk_0x8E8B546E1A81D27F(*uParam1))
		{
			bVar2 = false;
		}
		if (!unk_0xB318FDA0D1ABDB20(uParam1->f_16))
		{
			unk_0x295DC04FC13E025B(uParam1->f_16);
			if (!unk_0x8E8B546E1A81D27F(uParam1->f_16))
			{
				bVar2 = false;
			}
		}
		if (!unk_0x29AFA2493D7C23D0())
		{
			unk_0x3B283FEBA87FFBEB(0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_44();
	if (!func_43(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		unk_0xEB1F3AEB071C6A9E(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 0, 1);
		unk_0xA450601E968044DB(uParam1->f_5 + uParam1->f_19, (unk_0x652D2EEEF1D3E62C(uParam1->f_22) + 25f), 0, 0, 0, 0, 0);
		unk_0x7C6BF0CD5D7454C9(uParam1->f_5 + uParam1->f_19, (unk_0x652D2EEEF1D3E62C(uParam1->f_22) + 25f), 1, 0, 0, 0);
	}
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		unk_0x49F00D2F32CBC5B5(unk_0x1329891157A54C63());
		unk_0x649CF94A4282A7FD(unk_0x81873881071CD9FE(), joaat("weapon_unarmed"), 1);
		unk_0x1E2B48EE3EC55DCF(unk_0x81873881071CD9FE());
	}
	unk_0xA8F22633ACC22189(unk_0x81873881071CD9FE(), false);
	unk_0xD338B0444EFB8C65(0);
	unk_0x7C6BF0CD5D7454C9(uParam1->f_5, 15f, 1, 0, 0, 0);
	unk_0xE709AE833716FB9C();
	unk_0x182E0D0F564CFBD7();
	func_41();
	while (func_40())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0xECDEA377354CBDA4() && !unk_0xC11AD1609CFCCCE1())
	{
		unk_0xAE2B1C30F8A0B67C(250);
	}
	unk_0x3937B60F47657E06(1);
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		iVar4 = unk_0x59C061A719024602(uParam1->f_5, uParam1->f_8, 2);
		unk_0xFD9AE4CEB0ED9DDF(iVar4, 0);
		unk_0xC64A07C5C44EA267(iVar4, 0);
		uVar5 = unk_0xAAC4D4F273757469("DEFAULT_ANIMATED_CAMERA", 1);
		iVar6 = 4;
		if (uParam1->f_4 != joaat("MotionState_Idle"))
		{
			iVar6 |= 2;
		}
		func_38(unk_0x81873881071CD9FE(), uParam1->f_18);
		unk_0x58BEA8B2364F8C48(unk_0x81873881071CD9FE(), iVar4, *uParam1, uParam1->f_1, 1000f, -1.5f, iVar6, 0, 1148846080, 0);
		unk_0x10B0C4BE8F4890AA(unk_0x81873881071CD9FE(), 1);
		unk_0x664DD86F0C0BC03D(unk_0x1329891157A54C63(), 1);
		iVar3 = unk_0x1309245CE22583D6(unk_0x81873881071CD9FE(), 77);
		unk_0x0B895A812F665A52(unk_0x81873881071CD9FE(), 77, 1);
		unk_0xC813152833B59518(uVar5, iVar4, uParam1->f_2, *uParam1);
		unk_0xFEBF3DDE5E4DC5C5(1, 0, 3000, 1, 0, 0);
		if (!unk_0xB318FDA0D1ABDB20(uParam1->f_16) && !unk_0xB318FDA0D1ABDB20(uParam1->f_17))
		{
			unk_0x31C1393E4ACFD794(unk_0x81873881071CD9FE(), uParam1->f_16, uParam1->f_17, 1000f, -1.5f, 10000, 33, 0, 0, 0, 0);
		}
	}
	else
	{
		iVar4 = -1;
	}
	if (!uParam1->f_25)
	{
		if (!unk_0xB318FDA0D1ABDB20(sParam2))
		{
			func_37(sParam2, -1);
			uParam1->f_25 = 1;
		}
	}
	bVar7 = false;
	bVar8 = false;
	uVar9 = 16;
	if (!unk_0xB318FDA0D1ABDB20(&(uParam1->f_11)))
	{
		iVar174 = func_57();
		iVar175 = -1;
		sVar176 = "";
		switch (iVar174)
		{
			case 0:
				iVar175 = 0;
				sVar176 = "MICHAEL";
				break;
			
			case 1:
				iVar175 = 1;
				sVar176 = "FRANKLIN";
				break;
			
			case 2:
				iVar175 = 2;
				sVar176 = "TREVOR";
				break;
			
			default:
				break;
		}
		func_36(&uVar9, iVar175, unk_0x81873881071CD9FE(), sVar176, 0, 1);
	}
	if (unk_0xDD7720E17AF5FE17(iVar4))
	{
		sVar177 = "WalkInterruptible";
		sVar178 = "ForceBlendout";
		while (unk_0xDD7720E17AF5FE17(iVar4) && !unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (!bVar8)
			{
				if (!unk_0x29AFA2493D7C23D0())
				{
					if (!unk_0xB318FDA0D1ABDB20(uParam1->f_26))
					{
						unk_0x45D2AAD93E9AC4B3(uParam1->f_26, 0, 0);
						bVar8 = true;
					}
					if (!unk_0xB318FDA0D1ABDB20(uParam1->f_27))
					{
						if (!unk_0xB318FDA0D1ABDB20(uParam1->f_28))
						{
							unk_0x35D7948F61AA3FEC(-1, uParam1->f_28, uParam1->f_27, 0);
							bVar8 = true;
						}
						if (!unk_0xB318FDA0D1ABDB20(uParam1->f_29))
						{
							unk_0x35D7948F61AA3FEC(-1, uParam1->f_29, uParam1->f_27, 0);
							bVar8 = true;
						}
					}
				}
			}
			unk_0xD61D5795530D0627();
			unk_0xC9A352663D97EFC3(18);
			unk_0x97E68080A265D587();
			func_32();
			iVar179 = unk_0x48E480685981C7D4();
			if (iVar179 >= (Global_35994 - 500))
			{
				func_31(4000);
			}
			fVar180 = -1f;
			fVar181 = -1f;
			fVar0 = unk_0xF855C83E3A17514B(iVar4);
			if (!unk_0xB318FDA0D1ABDB20(&(uParam1->f_11)))
			{
				if (!bVar7)
				{
					if (fVar0 >= uParam1->f_15)
					{
						if (func_19(&uVar9, "PRSAUD", &(uParam1->f_11), 3, 0, 0, 0))
						{
							bVar7 = true;
						}
					}
				}
			}
			iVar182 = 0;
			if (unk_0x61BAE3B4A4A2B2BB(unk_0x81873881071CD9FE(), unk_0x8DAF7A748E41AD46(sVar177)))
			{
				iVar183 = (unk_0x0D349187279381B8(2, 195) - 128);
				iVar184 = (unk_0x0D349187279381B8(2, 196) - 128);
				if (((iVar183 < 64 && iVar183 > -64) && iVar184 < 64) && iVar184 > -64)
				{
				}
				else
				{
					iVar182 = 1;
				}
			}
			else
			{
				fVar180 = -1f;
				fVar181 = -1f;
				iVar182 = 0;
				uParam1->f_3 = uParam1->f_3;
				fVar180 = fVar180;
				fVar181 = fVar181;
			}
			if (unk_0x4D872223E3957144() == 4 && uParam1->f_52 > 0f)
			{
				if (fVar0 >= uParam1->f_52)
				{
					if (!uParam1->f_32)
					{
						fVar185 = 1.5f;
						Var186 = { unk_0x0D5D4469F8B27273() };
						Var189 = { unk_0xC91EFAB304EB7DE6(unk_0x81873881071CD9FE(), 31086, 0f, 0f, 0f) };
						fVar192 = unk_0x0D6E79537424BACE(Var186, Var189, 1);
						fVar185 = func_18(fVar185, 0.001f, (fVar192 - 0.75f));
						if (fVar185 < 0f)
						{
							fVar185 = 0.001f;
						}
						func_17(&(uParam1->f_34), unk_0x81873881071CD9FE(), func_57(), 1E-06f, 300, 300, 0, 0, 1045220557);
						func_16(&(uParam1->f_34), uParam1->f_53);
						if (!uParam1->f_33)
						{
							uParam1->f_34 = 1;
							uParam1->f_34.f_7 = unk_0x48E480685981C7D4();
							uParam1->f_34.f_8 = 0;
							uParam1->f_33 = 1;
						}
						if (uParam1->f_57 == 999f)
						{
							uParam1->f_56 = 0f;
						}
						if (uParam1->f_57 == 999f)
						{
							Var195 = { unk_0x7538ABF4608A78EB(2) };
							uVar198 = unk_0x3306AAAFE3B25098(unk_0x81873881071CD9FE());
							fVar199 = Var195.f_2;
							fVar200 = uVar198;
							uParam1->f_57 = (fVar199 - fVar200);
							if (uParam1->f_57 < 360f)
							{
								uParam1->f_57 = (uParam1->f_57 + 360f);
							}
							if (uParam1->f_57 > 360f)
							{
								uParam1->f_57 = (uParam1->f_57 - 360f);
							}
						}
						fVar193 = uParam1->f_56;
						fVar194 = uParam1->f_57;
						unk_0xEAB527164AD92BF3(fVar193, 1065353216);
						unk_0x270066FDBAF3A458(fVar194);
						unk_0x55C7F9A8D2A160EE(fVar193);
						unk_0x9507E01626B0D27B(fVar194);
						Var201 = { unk_0x0D5D4469F8B27273() };
						Var204 = { unk_0xF37444D33840484C() };
						fVar207 = unk_0x0D6E79537424BACE(Var201, Var204, 1);
						iVar208 = unk_0xF2DB717A73826179((fVar207 * 1000f));
						uParam1->f_32 = 1;
					}
					if (uParam1->f_32)
					{
						unk_0x19979C52714F0489();
						if (func_13(&(uParam1->f_34), 1, 1, 1, 0, 0, 0))
						{
						}
					}
				}
			}
			if (unk_0x61BAE3B4A4A2B2BB(unk_0x81873881071CD9FE(), unk_0x8DAF7A748E41AD46(sVar178)) || iVar182)
			{
				if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
				{
					unk_0x27CC98B7C879C320(unk_0x81873881071CD9FE());
					switch (uParam1->f_4)
					{
						case joaat("MotionState_Idle"):
							unk_0x03EB8112BA30917C(unk_0x81873881071CD9FE(), joaat("MotionState_Idle"), 1, 0, 0);
							unk_0x4D7278EDFCDA8389(0, 0, 3, 0);
							break;
						
						case joaat("MotionState_Walk"):
							unk_0x03EB8112BA30917C(unk_0x81873881071CD9FE(), joaat("MotionState_Walk"), 1, 0, 0);
							unk_0x4C6646EAFB3AD914(unk_0x1329891157A54C63(), 1f, 500, 0, 1, 0);
							if (unk_0x4D872223E3957144() != 4)
							{
								if (uParam1->f_31 == 999f)
								{
									uParam1->f_30 = 0f;
								}
								if (uParam1->f_31 == 999f)
								{
									Var211 = { unk_0x7538ABF4608A78EB(2) };
									uVar214 = unk_0x3306AAAFE3B25098(unk_0x81873881071CD9FE());
									fVar215 = Var211.f_2;
									fVar216 = uVar214;
									uParam1->f_31 = (fVar215 - fVar216);
									if (uParam1->f_31 < 360f)
									{
										uParam1->f_31 = (uParam1->f_31 + 360f);
									}
									if (uParam1->f_31 > 360f)
									{
										uParam1->f_31 = (uParam1->f_31 - 360f);
									}
								}
								fVar209 = uParam1->f_30;
								fVar210 = uParam1->f_31;
								unk_0xEAB527164AD92BF3(fVar209, 1065353216);
								unk_0x270066FDBAF3A458(fVar210);
								Var217 = { unk_0x0D5D4469F8B27273() };
								Var220 = { unk_0xF37444D33840484C() };
								fVar223 = unk_0x0D6E79537424BACE(Var217, Var220, 1);
								iVar224 = unk_0xF2DB717A73826179((fVar223 * 1000f));
								unk_0xFEBF3DDE5E4DC5C5(0, 1, iVar224, 0, 0, 0);
							}
							break;
						
						default:
							break;
					}
					if (unk_0xDD7720E17AF5FE17(iVar4))
					{
						unk_0x9F87D6789156F966(iVar4);
						iVar4 = -1;
					}
				}
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (!func_43(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		unk_0xFEA6E2B6E5CAFC2E(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 1);
	}
	unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), true, 0);
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		unk_0x27CC98B7C879C320(unk_0x81873881071CD9FE());
	}
	bVar225 = unk_0x69EDFF600FFB4353();
	bVar226 = false;
	if (uParam1->f_32)
	{
		unk_0x19979C52714F0489();
		if (!func_13(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
		{
			bVar226 = true;
		}
	}
	if (bVar225 || bVar226)
	{
		while ((bVar225 || bVar226) && !unk_0xF33755A765033580())
		{
			if (bVar225)
			{
			}
			if (bVar226)
			{
			}
			iVar227 = 2;
			func_12(1, 26, &iVar227);
			func_12(1, 79, &iVar227);
			func_12(1, 1, &iVar227);
			func_12(1, 2, &iVar227);
			func_12(0, 22, &iVar227);
			func_12(0, 36, &iVar227);
			func_12(0, 142, &iVar227);
			func_12(0, 141, &iVar227);
			func_12(0, 140, &iVar227);
			func_12(0, 263, &iVar227);
			func_12(0, 264, &iVar227);
			unk_0x4EDE34FBADD967A6(0);
			bVar225 = unk_0x69EDFF600FFB4353();
			bVar226 = false;
			if (uParam1->f_32)
			{
				unk_0x19979C52714F0489();
				if (!func_13(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
				{
					bVar226 = true;
				}
			}
		}
	}
	if (!unk_0xB318FDA0D1ABDB20(uParam1->f_16))
	{
		unk_0xD8323B49BAE93D80(uParam1->f_16);
	}
	unk_0xD8323B49BAE93D80(*uParam1);
	unk_0x35B958B469415A23(uVar5, 0);
	func_10(&(uParam1->f_34));
	if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
	{
		unk_0x0B895A812F665A52(unk_0x81873881071CD9FE(), 77, iVar3);
		unk_0x210A4A0B257F8433(unk_0x81873881071CD9FE(), 0);
	}
	sParam0 = sParam0;
}

void func_10(var uParam0)
{
	func_11(uParam0);
	*uParam0 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
}

void func_11(var uParam0)
{
	if (unk_0x42E36F2D658EB2FF(uParam0->f_1))
	{
		unk_0x35B958B469415A23(uParam0->f_1, 0);
	}
	if (unk_0x42E36F2D658EB2FF(uParam0->f_2))
	{
		unk_0x35B958B469415A23(uParam0->f_2, 0);
	}
	if (unk_0x42E36F2D658EB2FF(uParam0->f_3))
	{
		unk_0x35B958B469415A23(uParam0->f_3, 0);
	}
	if (unk_0x42E36F2D658EB2FF(uParam0->f_4))
	{
		unk_0x35B958B469415A23(uParam0->f_4, 0);
	}
}

void func_12(int iParam0, int iParam1, int iParam2)
{
	unk_0xDE1125A413AF241C(iParam0, iParam1, 1);
	*iParam2++;
}

int func_13(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18;
	var uVar21;
	
	switch (*uParam0)
	{
		case 0:
			func_14();
			if (!unk_0x930F8FBB8E9537CC(uParam0->f_5))
			{
				func_11(uParam0);
				Var0 = { unk_0x0D5D4469F8B27273() };
				if (bParam1)
				{
					Var0 = { Var0 + unk_0xC684AF573327E1AB(uParam0->f_5) * FtoV(unk_0x8D51D24D214E2FF2()) };
				}
				Var3 = { unk_0xFF603DE3EBE2C5F9(uParam0->f_5, Var0) };
				Var6 = { unk_0x7538ABF4608A78EB(2) };
				Var9 = { Var6 + uParam0->f_9 };
				Var12 = { Var9 - unk_0x1FC13B3C61DF24B9(uParam0->f_5, 2) };
				Var15 = { (-unk_0x0BADBFA3B172435F(Var9.f_2) * unk_0xD0FFB162F40A139C(Var9.f_0)), (unk_0xD0FFB162F40A139C(Var9.f_2) * unk_0xD0FFB162F40A139C(Var9.f_0)), unk_0x0BADBFA3B172435F(Var9.f_0) };
				Var18 = { (-unk_0x0BADBFA3B172435F(Var12.f_2) * unk_0xD0FFB162F40A139C(Var12.f_0)), (unk_0xD0FFB162F40A139C(Var12.f_2) * unk_0xD0FFB162F40A139C(Var12.f_0)), unk_0x0BADBFA3B172435F(Var12.f_0) };
				uVar21 = unk_0x3E83C1AB2EAB15BE();
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = unk_0xA7F66705D65696D6(1775630800, 0);
				}
				uParam0->f_1 = unk_0xA7F66705D65696D6(26379945, 1);
				if (bParam1)
				{
					unk_0xCE9B10B35E094A1B(uParam0->f_1, uParam0->f_5, Var3, 1);
				}
				else
				{
					unk_0xD68C8B031E2BDFA7(uParam0->f_1, Var0);
				}
				unk_0x19F9FD4DDAD99CB2(uParam0->f_1, Var6, 2);
				unk_0xBF1C17EB7F681E53(uParam0->f_1, uVar21);
				uParam0->f_2 = unk_0xA7F66705D65696D6(26379945, 1);
				if (bParam1 && !bParam4)
				{
					unk_0xCE9B10B35E094A1B(uParam0->f_2, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12), 1);
				}
				else
				{
					unk_0xD68C8B031E2BDFA7(uParam0->f_2, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12));
				}
				unk_0x19F9FD4DDAD99CB2(uParam0->f_2, Var6, 2);
				unk_0xBF1C17EB7F681E53(uParam0->f_2, uVar21);
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = unk_0xA7F66705D65696D6(26379945, 1);
					if (bParam1 && !bParam4)
					{
						unk_0xCE9B10B35E094A1B(uParam0->f_4, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13), 1);
					}
					else
					{
						unk_0xD68C8B031E2BDFA7(uParam0->f_4, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13));
					}
					unk_0x19F9FD4DDAD99CB2(uParam0->f_4, Var6, 2);
					unk_0xBF1C17EB7F681E53(uParam0->f_4, uVar21);
				}
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					unk_0x8190619174CD5484(uParam0->f_3, uParam0->f_1, 0, 2);
					if (iParam6 == 0)
					{
						unk_0x8190619174CD5484(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
					}
					unk_0x8190619174CD5484(uParam0->f_3, uParam0->f_2, (uParam0->f_14 - uParam0->f_17), 2);
					unk_0x64A4D13EFF43DC21(uParam0->f_3, iParam6);
					unk_0xDD0B0D77CB8995B1(uParam0->f_3, 1);
				}
				else
				{
					unk_0x2CD388BEA8B3C5E8(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
				unk_0xFEBF3DDE5E4DC5C5(1, 0, 3000, 1, 0, 0);
				uParam0->f_7 = unk_0x48E480685981C7D4();
				uParam0->f_8 = 0;
				*uParam0 = 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			func_14();
			if (bParam3)
			{
				if (!uParam0->f_8)
				{
					if (unk_0x48E480685981C7D4() >= (uParam0->f_7 + uParam0->f_16))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									unk_0x45D2AAD93E9AC4B3("CamPushInFranklin", 0, 0);
									break;
								
								case 0:
									unk_0x45D2AAD93E9AC4B3("CamPushInMichael", 0, 0);
									break;
								
								case 2:
									unk_0x45D2AAD93E9AC4B3("CamPushInTrevor", 0, 0);
									break;
							}
						}
						else
						{
							unk_0x45D2AAD93E9AC4B3("CamPushInNeutral", 0, 0);
						}
						unk_0x35D7948F61AA3FEC(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						uParam0->f_8 = 1;
					}
				}
			}
			if (unk_0x48E480685981C7D4() >= (uParam0->f_7 + uParam0->f_15))
			{
				if (bParam2)
				{
					func_11(uParam0);
					unk_0xFEBF3DDE5E4DC5C5(0, 0, 3000, 1, 0, 0);
				}
				return 1;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

void func_14()
{
	unk_0xF4753D4FA13FFE6E();
	func_15();
}

void func_15()
{
	Global_17099.f_134 = 1;
}

void func_16(var uParam0, struct<3> Param1)
{
	uParam0->f_9 = { Param1 };
}

void func_17(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	uParam0->f_5 = iParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_12 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_17 = iParam7;
	uParam0->f_13 = iParam8;
}

float func_18(float fParam0, float fParam1, float fParam2)
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

bool func_19(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_30(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_20(sParam2, iParam3, 0);
}

int func_20(char* sParam0, int iParam1, bool bParam2)
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
					func_29();
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
		if (func_28(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_27();
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
				func_25();
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
				if (func_24())
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
			if (func_23())
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
			func_22();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_21();
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
		func_29();
	}
	return 0;
}

void func_21()
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

void func_22()
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

int func_23()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_24()
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

void func_25()
{
	if (func_26(14))
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
		Global_14394 = func_57();
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

bool func_26(int iParam0)
{
	return Global_35443 == iParam0;
}

void func_27()
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

bool func_28(int iParam0, int iParam1)
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

void func_29()
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

void func_30(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15147 = { *uParam0 };
	Global_1580 = iParam1;
	StringCopy(&Global_15763, sParam2, 24);
	Global_16682 = uParam5;
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

void func_31(int iParam0)
{
	Global_35994 = (unk_0x48E480685981C7D4() + iParam0);
}

void func_32()
{
	if (!Global_14394.f_1 == 1)
	{
		if (func_35(0))
		{
			func_33(0);
		}
		unk_0xF3148AAF69AF9CBC(&Global_2265, 2);
	}
}

void func_33(int iParam0)
{
	if (Global_14552)
	{
		func_34(0, 0);
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
	if (!func_23())
	{
		Global_14394.f_1 = 3;
	}
}

void func_34(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_35(0))
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

int func_35(int iParam0)
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

void func_36(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_37(char* sParam0, int iParam1)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0xC592EBAF1D879BDC(0, 0, 1, iParam1);
}

void func_38(int iParam0, var uParam1)
{
	if (func_39(uParam1, 1))
	{
		unk_0xE16730A411C3D78F(iParam0, "HOSPITAL_0", 0f, 1f);
	}
	if (func_39(uParam1, 2))
	{
		unk_0xE16730A411C3D78F(iParam0, "HOSPITAL_1", 0f, 1f);
	}
	if (func_39(uParam1, 4))
	{
		unk_0xE16730A411C3D78F(iParam0, "HOSPITAL_2", 0f, 1f);
	}
	if (func_39(uParam1, 8))
	{
		unk_0xE16730A411C3D78F(iParam0, "HOSPITAL_3", 0f, 1f);
	}
	if (func_39(uParam1, 16))
	{
		unk_0xE16730A411C3D78F(iParam0, "HOSPITAL_4", 0f, 1f);
	}
	if (func_39(uParam1, 32))
	{
		unk_0xE16730A411C3D78F(iParam0, "HOSPITAL_5", 0f, 1f);
	}
	if (func_39(uParam1, 64))
	{
		unk_0xE16730A411C3D78F(iParam0, "HOSPITAL_6", 0f, 1f);
	}
	if (func_39(uParam1, 128))
	{
		unk_0xE16730A411C3D78F(iParam0, "HOSPITAL_7", 0f, 1f);
	}
	if (func_39(uParam1, 256))
	{
		unk_0xE16730A411C3D78F(iParam0, "HOSPITAL_8", 0f, 1f);
	}
	if (func_39(uParam1, 512))
	{
		unk_0xE16730A411C3D78F(iParam0, "HOSPITAL_9", 0f, 1f);
	}
	if (func_39(uParam1, 0))
	{
	}
}

bool func_39(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_40()
{
	if (((Global_90809 == 13 || Global_90809 == 10) || Global_90809 == 11) || Global_90809 == 12)
	{
		return 0;
	}
	return 1;
}

void func_41()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_88075[iVar0 /*17*/] && !Global_88075[iVar0 /*17*/].f_1)
		{
			if (Global_88075[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_88075[iVar0 /*17*/].f_5 != 88 && Global_88075[iVar0 /*17*/].f_5 != 89) && Global_88075[iVar0 /*17*/].f_5 != 92)
				{
					func_42(Global_88075[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_42(int iParam0, bool bParam1)
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

bool func_43(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_44()
{
	func_45();
	func_62(1);
}

void func_45()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		iVar1 = Global_36296[iVar0 /*5*/];
		if (!iVar1 == -1)
		{
			func_124(1, iVar1, 1);
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_36270[iVar2 /*5*/] == 0)
		{
			func_46(iVar2);
		}
		iVar2++;
	}
}

void func_46(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_36270[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36270[iParam0 /*5*/].f_1 == unk_0x81873881071CD9FE())
		{
			Global_36491 = 0;
		}
	}
	Global_36270[iParam0 /*5*/] = 13;
	Global_36270[iParam0 /*5*/].f_1 = 0;
	Global_36270[iParam0 /*5*/].f_2 = 0;
	Global_36270[iParam0 /*5*/].f_3 = 0;
	Global_36270[iParam0 /*5*/].f_4 = 0;
	Global_36269 = (Global_36269 - 1);
	if (Global_36269 < 0)
	{
		Global_36269 = 0;
	}
}

int func_47(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		func_51(0);
		unk_0x7C6BF0CD5D7454C9(Param0, 5f, 1, 0, 0, 0);
		if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
		{
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				unk_0xB067093BBAF0A747(unk_0x81873881071CD9FE(), Param0, 1, 0, 0, 1);
				unk_0xC24172029826A66F(unk_0x81873881071CD9FE(), uParam3);
				unk_0xEAB527164AD92BF3(0f, 1065353216);
				unk_0x270066FDBAF3A458(0f);
			}
		}
		unk_0x3DEBEEC5B1D7D4C5(Param0, 4500f, 0);
		unk_0x4EDE34FBADD967A6(0);
		unk_0x7C6BF0CD5D7454C9(Param0, 5000f, 1, 0, 0, 0);
		unk_0x82119F022C669D9E(Param0, 5000f, 0);
		unk_0x9FDA5C65BF0EE91F(Param0, 5000f);
		unk_0xE7AEBD5A9C95E5E0(Param0, 5000f);
		func_50();
		func_49();
		unk_0xC1B1E9A034A63A62(0);
		func_51(1);
		if (!unk_0x2CB3B76C90F08111())
		{
			while (!unk_0x3DEBEEC5B1D7D4C5(Param0, 4500f, 0))
			{
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					unk_0xD338B0444EFB8C65(0);
					return 0;
				}
			}
		}
		unk_0xC1B1E9A034A63A62(0);
		while (!unk_0xA5C3CFD413D647EA())
		{
			unk_0x4EDE34FBADD967A6(0);
			if (unk_0x83666F9FB8FEBD4B() > 20000)
			{
				unk_0xD338B0444EFB8C65(0);
				if (unk_0x2CB3B76C90F08111())
				{
					unk_0x5AD73EF670D05F7D();
				}
				return 0;
			}
		}
		if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
		{
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				if (unk_0x2CB3B76C90F08111())
				{
					unk_0x5AD73EF670D05F7D();
				}
				unk_0xD338B0444EFB8C65(0);
				unk_0xC1B1E9A034A63A62(0);
				unk_0xE709AE833716FB9C();
				if (iParam5 == 1)
				{
					unk_0x182E0D0F564CFBD7();
				}
				else
				{
					unk_0xC1B1E9A034A63A62(5000);
				}
				unk_0xD8642828210867B9();
			}
		}
		while ((!unk_0x790344BB724E28D1() && !func_48()) && unk_0x83666F9FB8FEBD4B() < 1500)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		if (unk_0x83666F9FB8FEBD4B() > 1500)
		{
			if (iParam5 == 1)
			{
			}
		}
		if (iParam4 == 1)
		{
			unk_0x84426D0C9AE7A434(Param0, &(Param0.f_2), 0);
			unk_0x7C6BF0CD5D7454C9(Param0, 5f, 1, 0, 0, 0);
			if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
			{
				if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
				{
					unk_0xB067093BBAF0A747(unk_0x81873881071CD9FE(), Param0, 1, 0, 0, 1);
					unk_0xC24172029826A66F(unk_0x81873881071CD9FE(), uParam3);
				}
			}
		}
		unk_0xEAB527164AD92BF3(0f, 1065353216);
		unk_0x270066FDBAF3A458(0f);
		func_51(0);
		return 1;
	}
	func_51(0);
	return 0;
}

bool func_48()
{
	return !Global_67889.f_553;
}

void func_49()
{
	Global_67889.f_553 = 1;
	Global_67889.f_554 = 0;
}

void func_50()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		Global_67889[iVar0] = 0;
		iVar0++;
	}
}

void func_51(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!unk_0x236D8AD7EE179F46(Global_90809.f_20, 2))
			{
				unk_0xD338B0444EFB8C65(1);
				unk_0xF3148AAF69AF9CBC(&(Global_90809.f_20), 2);
			}
		}
		else if (unk_0x236D8AD7EE179F46(Global_90809.f_20, 2))
		{
			unk_0xD338B0444EFB8C65(0);
			unk_0xC69E84EBBD7166E6(&(Global_90809.f_20), 2);
		}
	}
}

int func_52()
{
	if (unk_0x236D8AD7EE179F46(unk_0x2E0A9E3291F398E3(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

bool func_53(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_98931.f_5843[iParam0], 0);
}

int func_54(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_98931.f_7699.f_99.f_58[iParam0];
}

int func_55()
{
	if (Global_32890[11] == 1)
	{
		return 4;
	}
	if (!func_56(21))
	{
		return 0;
	}
	if (!func_54(130))
	{
		return 1;
	}
	if (!func_54(131))
	{
		return 2;
	}
	if (!func_56(22))
	{
		return 1;
	}
	if (!func_56(49))
	{
		return 3;
	}
	if (!func_56(28))
	{
		return 1;
	}
	return 3;
}

int func_56(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_98931.f_7699.f_330[iParam0 /*6*/];
}

int func_57()
{
	func_58();
	return Global_98931.f_1750.f_539.f_3549;
}

void func_58()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_61(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_60(unk_0x81873881071CD9FE());
			if (func_59(iVar0) && (!func_26(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_59(Global_98931.f_1750.f_539.f_3549))
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

bool func_59(int iParam0)
{
	return iParam0 < 3;
}

int func_60(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_61(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_61(int iParam0)
{
	if (func_59(iParam0))
	{
		return Global_98931.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_62(bool bParam0)
{
	unk_0x418F5717704BF717(0f);
	unk_0x7FACAFB713BC76BB(0f);
	unk_0xB6C88FA2212D78E0(0f);
	unk_0x55FFFE9031CD8ABF(1);
	unk_0x451B5C1EDF933E94(0f);
	unk_0x221C24DE301307B2(1);
	unk_0xF6F43530C380A7DA(0);
	if (unk_0x12F24A1A22BF90A7("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0x0C22E352114F699C("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0xB318FDA0D1ABDB20(&Global_36471))
	{
		if (unk_0x12F24A1A22BF90A7(&Global_36471))
		{
			unk_0x0C22E352114F699C(&Global_36471);
		}
	}
	if (unk_0x42E36F2D658EB2FF(Global_36460))
	{
		if (unk_0x3A5D57B5EBCB4FEF(Global_36460))
		{
			unk_0xB183977AFC75D047(Global_36460, 0f);
			unk_0x19E32192B402B7F9(Global_36460, 1);
		}
	}
	if (bParam0)
	{
		if (unk_0xADEB81F3682A29A2() != -1 || unk_0xEAB68DA0F3844031() != -1)
		{
			unk_0x89D15E63F65D1047();
		}
		else if (unk_0xF33755A765033580())
		{
			unk_0x89D15E63F65D1047();
		}
	}
	Global_36466 = 0f;
	StringCopy(&Global_36467, "", 16);
	StringCopy(&Global_36471, "", 64);
	StringCopy(&Global_36487, "", 16);
	func_63();
}

void func_63()
{
	Global_36459 = 0;
	Global_36460 = 0;
	Global_36461 = 0;
	Global_36462 = 30000;
	Global_36463 = 0f;
	Global_36465 = 0f;
	Global_36464 = 0f;
	Global_36466 = 0f;
	StringCopy(&Global_36467, "", 16);
}

void func_64(int iParam0, bool bParam1, int iParam2)
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
	int iVar25;
	int iVar26;
	
	if (bParam1)
	{
		if (unk_0xC04B59103F71021C())
		{
			unk_0xCFB703A5F752D1C3(0);
		}
	}
	if (!unk_0x1C6DF6AD69BE853E())
	{
		uVar0 = iParam2;
		unk_0x034205BA180B4E43(iParam0, bParam1, uVar0);
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
		if (!func_68())
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
		if (unk_0xA89AE5060232966A(iParam0) && unk_0x7DF7DE8C76D7F346(iParam0))
		{
			iVar25 = unk_0xE495E987CB2BE7EF(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x1C6DF6AD69BE853E())
				{
					unk_0xA62A443049FCB56D(1);
				}
				else
				{
					unk_0xABA9860C0161F3CD(iVar25, !bVar13);
				}
				if (!bVar13)
				{
					if (unk_0x1C6DF6AD69BE853E() && !bVar18)
					{
						unk_0xA62A443049FCB56D(0);
					}
					Global_2414506[iParam0 /*255*/].f_238 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_67(iVar25) && !unk_0x9274B3297D0AC71D(iVar25))
				{
					if (!bVar21)
					{
						unk_0x5CEA5F12775261F2(iVar25, true, 0);
					}
				}
				if (!unk_0xCB8B9E751036ECB2(iVar25))
				{
					if (!bVar20)
					{
						unk_0xA8F22633ACC22189(iVar25, false);
					}
					unk_0xEA89E72C99125D9C(iVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0xA8F22633ACC22189(iVar25, false);
				}
				unk_0x33B1E568CEF14B0D(iVar25, true);
				unk_0xE5BBA710593FB752(iParam0, 0);
				unk_0xDC96513B84DA05AA(iVar25);
				unk_0x1BFA331FECEC4F68(iVar25, 1);
				func_66();
				func_65();
				if (unk_0x91A2643FAECEA14A())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0x2CB3B76C90F08111())
				{
				}
				Global_2414506[iParam0 /*255*/].f_239 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_67(iVar25) && !unk_0x9274B3297D0AC71D(iVar25))
				{
					if (!bVar21)
					{
						unk_0x5CEA5F12775261F2(iVar25, !bVar14, 0);
					}
					if (!unk_0xCB8B9E751036ECB2(iVar25))
					{
						if (!bVar20)
						{
							unk_0xA8F22633ACC22189(iVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0xEA89E72C99125D9C(iVar25, 1);
						}
					}
				}
				if (bVar9)
				{
					unk_0xE5BBA710593FB752(iParam0, 0);
				}
				else
				{
					unk_0xE5BBA710593FB752(iParam0, 1);
				}
				unk_0x33B1E568CEF14B0D(iVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0x0B392DF1B3286590(iVar25) && !unk_0xE5AB05962FA1FF3F(iVar25, 0))
					{
						unk_0x1E2B48EE3EC55DCF(iVar25);
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
			unk_0x034205BA180B4E43(iParam0, bParam1, iVar26);
		}
	}
}

void func_65()
{
	struct<2> Var0;
	
	Global_2422670.f_690 = 0;
	Global_2422670.f_691 = 0;
	Global_2422670.f_692 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2404607.f_1447 = { Var0 };
}

void func_66()
{
	Global_2404607.f_608 = 0;
	Global_2404607.f_1488 = 0;
	Global_2404607.f_481 = 0;
	Global_2414506[unk_0x1329891157A54C63() /*255*/].f_204 = 0;
}

int func_67(int iParam0)
{
	int iVar0;
	
	if (unk_0xE5AB05962FA1FF3F(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xFA1212DE7C455679(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_68()
{
	if (func_69() == 0)
	{
		return 1;
	}
	return 0;
}

int func_69()
{
	return Global_1312466.f_18;
}

void func_70()
{
	int iVar0;
	
	if (bLocal_49)
	{
		return;
	}
	Local_42.f_4 = 0;
	if (!func_71(Global_36296[iLocal_63 /*5*/].f_2))
	{
		return;
	}
	iVar0 = unk_0x2E0A9E3291F398E3(500, 3000);
	Local_59.f_0 = 5;
	Local_54.f_2 = (unk_0x83666F9FB8FEBD4B() + iVar0);
}

int func_71(int iParam0)
{
	int iVar0;
	var uVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	
	iVar0 = func_82();
	if (iVar0 == -2)
	{
		return 0;
	}
	if (unk_0x5FEB513A4402FD59(Local_42.f_1))
	{
		if (unk_0xE5AB05962FA1FF3F(Local_42.f_1, 0) || unk_0x463E18F5BBDEA9C4(Local_42.f_1))
		{
			return 0;
		}
		if (unk_0x512FF5F2299D6D12(Local_42.f_1))
		{
			return 0;
		}
		if (func_78(Local_42.f_1))
		{
			return 0;
		}
	}
	if (Global_36296[iLocal_63 /*5*/].f_3 < 3 && Global_36296[iLocal_63 /*5*/].f_3 != 0)
	{
		return 0;
	}
	if (Global_36296[iLocal_63 /*5*/].f_4 < 9 && Global_36296[iLocal_63 /*5*/].f_4 != 0)
	{
		return 0;
	}
	uVar1 = func_77(iParam0);
	if (unk_0xB318FDA0D1ABDB20(uVar1))
	{
		return 0;
	}
	if (func_78(Local_42.f_1))
	{
		return 0;
	}
	unk_0xF147E5A343BAF150(sVar1);
	if (func_74(Local_42.f_1))
	{
		sVar2 = "MOVE_M@DRUNK@TRANSITIONS";
		sVar3 = "";
		switch (iParam0)
		{
			case 0:
				sVar3 = "";
				break;
			
			case 2:
				sVar3 = "VERY_TO_MODERATE";
				break;
			
			case 1:
				sVar3 = "MODERATE_TO_SLIGHTLY";
				break;
			
			default:
				break;
		}
		if (!unk_0xB318FDA0D1ABDB20(sVar2) && !unk_0xB318FDA0D1ABDB20(sVar3))
		{
			unk_0x295DC04FC13E025B(sVar2);
			while (!unk_0x8E8B546E1A81D27F(sVar2))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (!unk_0x5FEB513A4402FD59(Local_42.f_1))
			{
				unk_0x31C1393E4ACFD794(Local_42.f_1, sVar2, sVar3, 1.5f, -1.5f, -1, 48, 0, 0, 0, 0);
				sLocal_53 = sVar3;
			}
		}
	}
	if (!unk_0xDBB20E5B224C075C(sVar1))
	{
		return 0;
	}
	if (unk_0x5FEB513A4402FD59(Local_42.f_1))
	{
		return 0;
	}
	unk_0x350B20EBD616FAD8(Local_42.f_1, sVar1, 0.75f);
	if (unk_0x4D872223E3957144() == 4)
	{
		unk_0x3CA5C31D88D42171(Local_42.f_1, "move_ped_strafing_firstperson@drunk");
	}
	unk_0x9B70A01749E63C1C(Local_42.f_1, 0, sVar1, "idle", 2f, 1);
	Local_59.f_2 = sVar1;
	bLocal_50 = true;
	iVar4 = 0;
	switch (func_60(Local_42.f_1))
	{
		case 0:
			iVar4 = "FACIALS@P_M_ZERO@BASE";
			break;
		
		case 1:
			iVar4 = "FACIALS@P_M_ONE@BASE";
			break;
		
		case 2:
			iVar4 = "FACIALS@P_M_TWO@BASE";
			break;
		
		default:
			if (unk_0x0452D5BF20AD945A(Local_42.f_1))
			{
				if (!func_72())
				{
					iVar4 = "FACIALS@GEN_MALE@BASE";
				}
				else
				{
					iVar4 = "FACIALS@GEN_FEMALE@BASE";
				}
			}
			else if (unk_0xBFC4295E811860E5(Local_42.f_1))
			{
				iVar4 = "FACIALS@GEN_MALE@BASE";
			}
			else
			{
				iVar4 = "FACIALS@GEN_FEMALE@BASE";
			}
			break;
	}
	unk_0xEB9703C490E987A4(Local_42.f_1, "mood_drunk_1", iVar4);
	unk_0x0B895A812F665A52(Local_42.f_1, 200, 1);
	unk_0x0B895A812F665A52(Local_42.f_1, 46, 1);
	unk_0xE814EBF9E6A3FB47(Local_42.f_1, 0);
	unk_0x7F5F0D37173E518C(Local_42.f_1, 262144, 1);
	unk_0x41BA1D8F8CBFCDC6(Local_42.f_1, 1);
	return 1;
}

bool func_72()
{
	return func_73(unk_0x1329891157A54C63());
}

int func_73(int iParam0)
{
	if (unk_0x14B7103DBD149FFE(unk_0xE495E987CB2BE7EF(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_74(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0xE5AB05962FA1FF3F(iParam0, 1) || unk_0x463E18F5BBDEA9C4(iParam0))
	{
		return 0;
	}
	if (unk_0xFA1212DE7C455679(iParam0, -2017877118) != 7)
	{
		return 0;
	}
	if (unk_0xFA1212DE7C455679(iParam0, 1785177548) != 7)
	{
		return 0;
	}
	if (unk_0xADBE95599A01932F(iParam0))
	{
		return 0;
	}
	if (unk_0x0752B24E8A13FF0E(iParam0))
	{
		return 0;
	}
	if (unk_0xD81BC0FD4D47CC04(iParam0))
	{
		return 0;
	}
	if (unk_0x9CE1E63C565B0EFC(iParam0))
	{
		return 0;
	}
	if (Global_67710)
	{
		return 0;
	}
	if (func_76())
	{
		return 0;
	}
	if (iParam0 == unk_0x81873881071CD9FE())
	{
		if (!unk_0x951FEB81893C90F4(unk_0x1329891157A54C63()))
		{
			return 0;
		}
		if (!unk_0xF26CA0663D2E037E(unk_0x1329891157A54C63()))
		{
			return 0;
		}
		if (unk_0xC4F63EDDAFD0C636(unk_0x1329891157A54C63()) || unk_0x4E8E6ABD17B372AE(unk_0x1329891157A54C63()))
		{
			return 0;
		}
		if (func_75())
		{
			return 0;
		}
	}
	Var0 = { unk_0xC684AF573327E1AB(iParam0) };
	if (unk_0xA8CEACB4F35AE058(Var0) >= (1f * 1f))
	{
		return 0;
	}
	return 1;
}

bool func_75()
{
	return Global_90861.f_297 > 0;
}

bool func_76()
{
	return unk_0x48E480685981C7D4() <= Global_17238.f_5630 + 100;
}

char* func_77(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "move_m@drunk@verydrunk";
			break;
		
		case 1:
			return "move_m@drunk@slightlydrunk";
			break;
		
		case 2:
			return "move_m@drunk@moderatedrunk";
			break;
	}
	return "";
}

int func_78(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_79(iParam0);
	uVar1 = func_77(iVar0);
	if (unk_0xB318FDA0D1ABDB20(Local_59.f_2))
	{
		if (unk_0xB318FDA0D1ABDB20(uVar1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return unk_0xD994929E13CC1ED5(Local_59.f_2, sVar1);
}

int func_79(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		return -1;
	}
	iVar0 = func_81(iParam0);
	iVar1 = func_80(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36296[iVar1 /*5*/].f_2;
}

int func_80(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36296[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_81(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36296[iVar0 /*5*/].f_1)
		{
			return Global_36296[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_82()
{
	int iVar0;
	
	if (Local_54.f_0 == -2)
	{
		return -2;
	}
	if (Local_54.f_0 == -1)
	{
		return -1;
	}
	iVar0 = (Local_54.f_0 - unk_0x83666F9FB8FEBD4B());
	if (iVar0 < 0)
	{
		return -2;
	}
	if (iVar0 > 65534)
	{
		iVar0 = 65534;
	}
	return iVar0;
}

void func_83()
{
	if (bLocal_49)
	{
		return;
	}
	if (!func_84())
	{
		Local_59.f_0 = 5;
		Local_54.f_2 = unk_0x83666F9FB8FEBD4B() + 5000;
		return;
	}
	Local_59.f_0 = 6;
}

bool func_84()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (Local_42.f_4 == 0)
	{
		return 0;
	}
	if (unk_0x930F8FBB8E9537CC(Local_42.f_4))
	{
		return 0;
	}
	Var0 = { unk_0xB6AE0DAE06D56288(Local_42.f_1, 1) };
	Var3 = { unk_0xB6AE0DAE06D56288(Local_42.f_4, 1) };
	fVar6 = unk_0x0D6E79537424BACE(Var0, Var3, 1);
	return fVar6 < 7f;
}

void func_85()
{
	int iVar0;
	char* sVar1;
	
	if (Local_42.f_1 == unk_0x81873881071CD9FE())
	{
		unk_0xDE1125A413AF241C(0, 36, 1);
		if (unk_0x603F76C0CB05572F(Local_42.f_1))
		{
			if (Global_36296[iLocal_63 /*5*/].f_2 == 0 || Global_36296[iLocal_63 /*5*/].f_2 == 2)
			{
				unk_0x90F3625CF1678F30(Local_42.f_1, 0, 0);
			}
		}
		if (unk_0xF00D568103F6320B(Local_42.f_1))
		{
			unk_0x0312925C32B20A0E(Local_42.f_1, 0);
		}
	}
	if (Local_54.f_0 != -2)
	{
		if (Local_54.f_0 == -1)
		{
			if (Global_36296[iLocal_63 /*5*/].f_2 != 0)
			{
				Global_36296[iLocal_63 /*5*/].f_2 = 0;
			}
		}
		else
		{
			iVar0 = (Local_54.f_0 - unk_0x83666F9FB8FEBD4B());
			if (iVar0 <= 0)
			{
				iVar0 = 0;
			}
			iVar0 = (iVar0 / 1000) + 1;
			if (Global_36296[iLocal_63 /*5*/].f_2 == 0)
			{
				if (iVar0 < 30)
				{
					Global_36296[iLocal_63 /*5*/].f_2 = 2;
					if (!func_71(2))
					{
						Global_36296[iLocal_63 /*5*/].f_2 = 0;
						return;
					}
				}
			}
			if (Global_36296[iLocal_63 /*5*/].f_2 == 2)
			{
				if (iVar0 < 10)
				{
					Global_36296[iLocal_63 /*5*/].f_2 = 1;
					if (!func_71(2))
					{
						Global_36296[iLocal_63 /*5*/].f_2 = 2;
						return;
					}
				}
			}
			if (Global_36296[iLocal_63 /*5*/].f_2 == 1)
			{
			}
		}
	}
	else
	{
		return;
	}
	if (!unk_0xB318FDA0D1ABDB20(sLocal_53))
	{
		if (!func_74(Local_42.f_1))
		{
			sVar1 = "MOVE_M@DRUNK@TRANSITIONS";
			if (unk_0x0BAE7BE122182FA8(Local_42.f_1, sVar1, sLocal_53, 3))
			{
				unk_0x3DD65E8B59E9E9CA(Local_42.f_1, sVar1, sLocal_53, -4f);
			}
			sLocal_53 = "";
			return;
		}
	}
	if (Global_36296[iLocal_63 /*5*/].f_3 >= 10 || Global_36296[iLocal_63 /*5*/].f_4 >= 15)
	{
		if (unk_0xFA1212DE7C455679(Local_42.f_1, 1785177548) == 1)
		{
			return;
		}
		if (unk_0x93FFC2B4860C54A3(Local_42.f_1))
		{
			return;
		}
		if (unk_0xE5AB05962FA1FF3F(Local_42.f_1, 1))
		{
			if (Global_36296[iLocal_63 /*5*/].f_3 >= 10)
			{
				Global_36296[iLocal_63 /*5*/].f_3 = 9;
			}
			if (Global_36296[iLocal_63 /*5*/].f_4 >= 15)
			{
				Global_36296[iLocal_63 /*5*/].f_4 = 14;
			}
			return;
		}
		Local_59.f_1 = 3;
		return;
	}
	if (!bLocal_50)
	{
		return;
	}
	if (!func_78(Local_42.f_1))
	{
		return;
	}
}

int func_86()
{
	int iVar0;
	
	if (!unk_0x86F7E6A693F6370F(Local_42.f_1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = unk_0xE68E6B44DABA9C05(Local_42.f_1, 0);
	if (!unk_0x7404950238A154C2(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0xB0B9E53CEFDB16AA(iVar0, -1) == Local_42.f_1)
	{
		return 0;
	}
	Local_42.f_4 = iVar0;
	Local_59.f_0 = 7;
	return 1;
}

void func_87()
{
	if (!unk_0xE5AB05962FA1FF3F(Local_42.f_1, 0))
	{
		Local_59.f_0 = 4;
		return;
	}
}

void func_88()
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	struct<3> Var8;
	
	if (!bLocal_49)
	{
		return;
	}
	if (!unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		return;
	}
	if (!unk_0x86F7E6A693F6370F(unk_0x81873881071CD9FE()))
	{
		return;
	}
	if (unk_0x9C85ECF581158409(unk_0x1329891157A54C63(), 0))
	{
		return;
	}
	iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
	fVar1 = unk_0xA04824262F150982(iVar0);
	if (fVar1 < 5f)
	{
		return;
	}
	Var2 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
	Var5 = { Var2 - Vector(3f, 30f, 30f) };
	Var8 = { Var2 + Vector(3f, 30f, 30f) };
	if (!unk_0x57E9C5666B081646(Var5, Var8) && !unk_0x8F0DA78DFE28D60F(Var5, Var8))
	{
		return;
	}
	unk_0x9979AC3F15FA9FCF(unk_0x1329891157A54C63(), 1, 0);
	unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 0);
	func_8(73, 1);
}

void func_89()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = Local_42.f_1;
	if (unk_0xE5AB05962FA1FF3F(Local_42.f_1, 0))
	{
		iVar1 = unk_0xE68E6B44DABA9C05(Local_42.f_1, 0);
		iVar2 = unk_0xB0B9E53CEFDB16AA(iVar1, -1);
		if (!iVar2 == Local_42.f_1)
		{
			return;
		}
		if (unk_0x1C6DF6AD69BE853E() && !unk_0x4D2386673BCED434(iVar1))
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!unk_0x81873881071CD9FE() == Local_42.f_1)
	{
		return;
	}
	else if (!unk_0x4D872223E3957144() == 4)
	{
		fLocal_52 = 0f;
		func_91(iVar0, 0f);
		return;
	}
	if (unk_0x83666F9FB8FEBD4B() < Local_54.f_4)
	{
		func_91(iVar0, fLocal_52);
		return;
	}
	if (unk_0xCF0C46D719D5302C(iVar0))
	{
		Local_54.f_4 = unk_0x83666F9FB8FEBD4B() + 2000;
	}
	else
	{
		Local_54.f_4 = unk_0x83666F9FB8FEBD4B() + 1000;
	}
	fVar3 = unk_0xA04824262F150982(iVar0);
	if (fVar3 < 0.04f)
	{
		fLocal_52 = 0f;
		func_91(iVar0, 0f);
		return;
	}
	if (Local_54.f_1 == -1)
	{
		fLocal_52 = func_90(iVar0, 0.13f, 0.06f);
	}
	else
	{
		iVar4 = (Local_54.f_1 - unk_0x83666F9FB8FEBD4B());
		if (iVar4 < 5000)
		{
			fLocal_52 = 0f;
		}
		else if (iVar4 < 15000)
		{
			fLocal_52 = func_90(iVar0, 0.05f, 0.02f);
		}
		else if (iVar4 < 30000)
		{
			fLocal_52 = func_90(iVar0, 0.07f, 0.03f);
		}
		else if (iVar4 < 45000)
		{
			fLocal_52 = func_90(iVar0, 0.09f, 0.04f);
		}
		else if (iVar4 < 600000)
		{
			fLocal_52 = func_90(iVar0, 0.1f, 0.05f);
		}
		else
		{
			fLocal_52 = func_90(iVar0, 0.13f, 0.06f);
		}
	}
	func_91(iVar0, fLocal_52);
}

float func_90(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = unk_0x3ECD26BA4F631EE2(-fParam1, fParam1);
	fVar1 = unk_0x3ECD26BA4F631EE2(0f, fParam2);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 - fVar1);
	}
	else
	{
		fVar0 = (fVar0 + fVar1);
	}
	if (unk_0xCF0C46D719D5302C(iParam0))
	{
		if (unk_0xE8CA5AAF4928DD46(unk_0x8F1CCE5AF629C4D3(iParam0)))
		{
			fVar0 = (fVar0 * 4.5f);
		}
		else
		{
			fVar0 = (fVar0 * 3f);
		}
	}
	else
	{
		iVar2 = unk_0x14B7103DBD149FFE(iParam0);
		if (unk_0xC5ABD699DDC9D5A0(iVar2))
		{
			fVar0 = (fVar0 * 1.5f);
		}
		else
		{
			fVar0 = (fVar0 * 0.5f);
		}
	}
	fVar0 = func_18(fVar0, -1f, 1f);
	return fVar0;
}

void func_91(int iParam0, float fParam1)
{
	if (unk_0x1C6DF6AD69BE853E() && !unk_0x4D2386673BCED434(iParam0))
	{
		return;
	}
	if (unk_0xCF0C46D719D5302C(iParam0))
	{
		unk_0x0CC1576ACC0F7567(unk_0x8F1CCE5AF629C4D3(iParam0), fParam1);
	}
	else if (unk_0xCF8AA94BAD0F766A(iParam0))
	{
		unk_0x7ACDA095AF07A89E(unk_0x522C7043B2B961F9(iParam0), fParam1);
	}
}

void func_92()
{
	int iVar0;
	
	if (!unk_0xE5AB05962FA1FF3F(Local_42.f_1, 0))
	{
		Local_59.f_0 = 4;
		return;
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		if (Global_36296[iLocal_63 /*5*/].f_3 >= 10 || Global_36296[iLocal_63 /*5*/].f_4 >= 15)
		{
			if (Global_36296[iLocal_63 /*5*/].f_3 >= 10)
			{
				Global_36296[iLocal_63 /*5*/].f_3 = 9;
			}
			if (Global_36296[iLocal_63 /*5*/].f_4 >= 15)
			{
				Global_36296[iLocal_63 /*5*/].f_4 = 14;
			}
		}
	}
	if (bLocal_49)
	{
		return;
	}
	iVar0 = unk_0xE68E6B44DABA9C05(Local_42.f_1, 0);
	if (!unk_0x7404950238A154C2(iVar0, 0))
	{
		unk_0x98046F3D16B9CF76(Local_42.f_1, 0, 0);
		Local_59.f_0 = 11;
		return;
	}
}

void func_93()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x83666F9FB8FEBD4B() <= Local_54.f_3)
	{
		return;
	}
	iVar0 = unk_0xFA1212DE7C455679(unk_0x81873881071CD9FE(), 355471868);
	if (!iVar0 == 7)
	{
		Local_54.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
		return;
	}
	if (!unk_0xE5AB05962FA1FF3F(Local_42.f_1, 0))
	{
		Local_59.f_0 = 4;
		Local_54.f_3 = -2;
		return;
	}
	iVar1 = unk_0xE68E6B44DABA9C05(Local_42.f_1, 0);
	iVar2 = unk_0xB0B9E53CEFDB16AA(iVar1, -1);
	if (iVar2 == Local_42.f_1)
	{
		func_94();
		Local_54.f_3 = -2;
		return;
	}
	unk_0xD74093F7638FAFA8(Local_42.f_1, iVar1);
	Local_59.f_0 = 9;
	Local_54.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
}

void func_94()
{
	if (Local_59.f_0 == 10)
	{
		return;
	}
	Local_59.f_0 = 10;
	if (iLocal_47 == -1)
	{
		return;
	}
	func_124(iLocal_47, 2, 5);
	Local_54.f_4 = unk_0x83666F9FB8FEBD4B();
	fLocal_52 = 0f;
}

void func_95()
{
	if (unk_0x86F7E6A693F6370F(Local_42.f_1))
	{
		Local_59.f_0 = 10;
		return;
	}
	if (unk_0x83666F9FB8FEBD4B() < Local_54.f_3)
	{
		return;
	}
	Local_59.f_0 = 4;
	Local_54.f_3 = -2;
}

void func_96()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (!bLocal_49)
	{
	}
	iVar0 = 0;
	bVar1 = false;
	if (bVar1 || unk_0x86F7E6A693F6370F(Local_42.f_1))
	{
		if (!bLocal_49)
		{
		}
		iVar0 = unk_0xE68E6B44DABA9C05(Local_42.f_1, 0);
		if (!iVar0 == Local_42.f_4)
		{
			if (!bLocal_49)
			{
			}
			if (!bLocal_49)
			{
				if (!bLocal_49)
				{
				}
				unk_0x98046F3D16B9CF76(Local_42.f_1, 0, 0);
				Local_59.f_0 = 11;
				return;
			}
			Local_42.f_4 = iVar0;
		}
		if (bVar1)
		{
			if (!bLocal_49)
			{
			}
			func_94();
			return;
		}
		if (!bLocal_49)
		{
			if (!bLocal_49)
			{
			}
			func_94();
			return;
		}
		if (!bLocal_49)
		{
		}
		iVar2 = unk_0xB0B9E53CEFDB16AA(Local_42.f_4, -1);
		if (iVar2 == Local_42.f_1)
		{
			func_94();
			return;
		}
		unk_0xD74093F7638FAFA8(Local_42.f_1, iVar0);
		Local_59.f_0 = 9;
		Local_54.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
		return;
	}
	if (!func_84())
	{
		unk_0x27CC98B7C879C320(Local_42.f_1);
		Local_59.f_0 = 4;
		return;
	}
	if (!bLocal_49)
	{
		iVar3 = unk_0xFA1212DE7C455679(Local_42.f_1, -1794415470);
		if (iVar3 == 7)
		{
			if (!unk_0xE5AB05962FA1FF3F(Local_42.f_1, 0))
			{
				unk_0x27CC98B7C879C320(Local_42.f_1);
				Local_59.f_0 = 4;
				return;
			}
		}
	}
}

void func_97()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	
	if (bLocal_49)
	{
		return;
	}
	if (Local_42.f_4 == 0)
	{
		Local_59.f_0 = 4;
		return;
	}
	if (!unk_0x7404950238A154C2(Local_42.f_4, 0))
	{
		Local_42.f_4 = 0;
		Local_59.f_0 = 4;
		return;
	}
	Var0 = { unk_0xB6AE0DAE06D56288(Local_42.f_1, 1) };
	Var3 = { unk_0xB6AE0DAE06D56288(Local_42.f_4, 1) };
	fVar6 = unk_0x0D6E79537424BACE(Var0, Var3, 1);
	if (fVar6 > 3f)
	{
		if (!func_71(Global_36296[iLocal_63 /*5*/].f_2))
		{
			Local_59.f_0 = 12;
			return;
		}
		Local_59.f_0 = 5;
		Local_54.f_2 = unk_0x83666F9FB8FEBD4B() + 2000;
		return;
	}
	iVar7 = unk_0x59D35AC211D17FAB(Local_42.f_4);
	iVar8 = 0;
	bVar9 = true;
	iVar8 = 1;
	while (bVar9)
	{
		if (iVar8 < iVar7)
		{
			if (unk_0xBEB00EB4ADDC2A33(Local_42.f_4, iVar8))
			{
				bVar9 = false;
			}
			else
			{
				iVar8++;
			}
		}
		else
		{
			bVar9 = false;
			iVar8 = -1;
		}
	}
	if (iVar8 == -1)
	{
		if (iVar8 == -1)
		{
			Local_59.f_0 = 4;
			return;
		}
	}
	func_98();
	unk_0x3C3A95141D01773E(Local_42.f_1, Local_42.f_4, -1, iVar8, 1073741824, 1, 0);
	Local_59.f_0 = 7;
}

void func_98()
{
	if (!unk_0x86CCCD2FAE9D5E65(Local_42.f_1))
	{
		return;
	}
	if (!unk_0x5FEB513A4402FD59(Local_42.f_1))
	{
		unk_0x2288F0F0680B6992(Local_42.f_1, 1048576000);
		unk_0xA343B4403C64F676(Local_42.f_1);
		unk_0xB70B1ED326335521(Local_42.f_1, 0, -1056964608);
		Local_59.f_2 = "";
		unk_0xCAEF57FEF56247F2(Local_42.f_1);
		unk_0x0B895A812F665A52(Local_42.f_1, 200, 0);
		unk_0x0B895A812F665A52(Local_42.f_1, 46, 0);
		unk_0xE814EBF9E6A3FB47(Local_42.f_1, 1);
		unk_0x7F5F0D37173E518C(Local_42.f_1, 262144, 0);
		unk_0x41BA1D8F8CBFCDC6(Local_42.f_1, 0);
	}
	if (!bLocal_50)
	{
		return;
	}
	bLocal_50 = false;
}

void func_99()
{
	if (unk_0x83666F9FB8FEBD4B() < Local_54.f_2)
	{
		func_85();
		return;
	}
	func_100();
	Local_54.f_2 = -2;
	Local_59.f_0 = 12;
}

int func_100()
{
	if (!func_78(Local_42.f_1))
	{
		return 0;
	}
	if (!bLocal_50)
	{
		return 0;
	}
	func_101(Local_42.f_1);
	Local_59.f_2 = "";
	return 1;
}

void func_101(int iParam0)
{
	unk_0x2288F0F0680B6992(uParam0, 1048576000);
	unk_0xB70B1ED326335521(uParam0, 0, -1056964608);
	unk_0x0B895A812F665A52(uParam0, 200, 0);
	unk_0xE814EBF9E6A3FB47(iParam0, 1);
	unk_0x7F5F0D37173E518C(iParam0, 262144, 0);
	unk_0x41BA1D8F8CBFCDC6(iParam0, 0);
}

void func_102()
{
	int iVar0;
	
	if (Local_54.f_0 == -1)
	{
		Global_36296[iLocal_63 /*5*/].f_2 = 0;
	}
	else if (Global_36296[iLocal_63 /*5*/].f_3 < 3 && Global_36296[iLocal_63 /*5*/].f_3 != 0)
	{
		Global_36296[iLocal_63 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_54.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_36296[iLocal_63 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_36296[iLocal_63 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_36296[iLocal_63 /*5*/].f_2 = 1;
		}
	}
	if (unk_0xE5AB05962FA1FF3F(Local_42.f_1, 0))
	{
		Local_59.f_0 = 10;
		return;
	}
	if (func_78(Local_42.f_1))
	{
		Local_59.f_0 = 12;
		return;
	}
	if (Local_54.f_0 == -2)
	{
		return;
	}
	if (!func_71(Global_36296[iLocal_63 /*5*/].f_2))
	{
		return;
	}
	Local_59.f_0 = 12;
}

void func_103()
{
}

void func_104()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 6;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 16)
	{
		iVar0 = Global_36377[iVar1 /*5*/].f_2;
		if (!iVar0 == 6)
		{
			if (Global_36377[iVar1 /*5*/].f_1 == iLocal_47)
			{
				func_106(iVar1);
				func_105(iVar1);
			}
			else if (Global_36377[iVar1 /*5*/].f_1 == 2)
			{
				if (!iLocal_48 == -1)
				{
					if (iLocal_48 == Global_36377[iVar1 /*5*/])
					{
						func_106(iVar1);
					}
				}
			}
		}
		iVar1++;
	}
}

void func_105(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_36377[iParam0 /*5*/] = -1;
	Global_36377[iParam0 /*5*/].f_1 = -1;
	Global_36377[iParam0 /*5*/].f_2 = 6;
	Global_36377[iParam0 /*5*/].f_3 = 0;
	Global_36377[iParam0 /*5*/].f_4 = 0;
}

void func_106(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_36377[iParam0 /*5*/].f_2;
	switch (iVar0)
	{
		case 1:
			func_131();
			break;
		
		case 2:
			func_110(Global_36377[iParam0 /*5*/].f_4);
			break;
		
		case 3:
			func_109();
			break;
		
		case 4:
			func_108();
			break;
		
		case 5:
			func_107();
			break;
		
		case 0:
			break;
		
		case 6:
			break;
		
		default:
			break;
	}
}

void func_107()
{
	Local_59.f_1 = 2;
}

void func_108()
{
	int iVar0;
	
	Global_36296[iLocal_63 /*5*/].f_4++;
	if (Local_54.f_0 == -1)
	{
		Global_36296[iLocal_63 /*5*/].f_2 = 0;
	}
	else if (Global_36296[iLocal_63 /*5*/].f_4 < 9 && Global_36296[iLocal_63 /*5*/].f_4 != 0)
	{
		Global_36296[iLocal_63 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_54.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_36296[iLocal_63 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_36296[iLocal_63 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_36296[iLocal_63 /*5*/].f_2 = 1;
		}
		if (!func_78(Local_42.f_1))
		{
			func_71(Global_36296[iLocal_63 /*5*/].f_2);
		}
	}
}

void func_109()
{
	int iVar0;
	
	Global_36296[iLocal_63 /*5*/].f_3++;
	if (Local_54.f_0 == -1)
	{
		Global_36296[iLocal_63 /*5*/].f_2 = 0;
	}
	else if (Global_36296[iLocal_63 /*5*/].f_3 < 3 && Global_36296[iLocal_63 /*5*/].f_3 != 0)
	{
		Global_36296[iLocal_63 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_54.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_36296[iLocal_63 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_36296[iLocal_63 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_36296[iLocal_63 /*5*/].f_2 = 1;
		}
		if (!func_78(Local_42.f_1))
		{
			func_71(Global_36296[iLocal_63 /*5*/].f_2);
		}
	}
}

void func_110(int iParam0)
{
	Local_42.f_3 = (Local_42.f_3 + iParam0);
	Local_42.f_2 = (Local_42.f_2 + iParam0);
	Local_54.f_1 = (Local_54.f_1 + iParam0);
	Local_54.f_0 = (Local_54.f_0 + iParam0);
}

void func_111()
{
	int iVar0;
	
	if (!bLocal_49)
	{
		iLocal_62 = -1;
		return;
	}
	if (iLocal_62 < 0)
	{
		iLocal_62 = unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63());
		return;
	}
	iVar0 = unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63());
	if (iVar0 != iLocal_62)
	{
		if (iVar0 > iLocal_62)
		{
			func_112();
		}
		iLocal_62 = iVar0;
		return;
	}
}

void func_112()
{
}

void func_113()
{
	if (!Local_54.f_0 == -1)
	{
		if (!Local_54.f_0 == -2)
		{
			if (unk_0x83666F9FB8FEBD4B() >= Local_54.f_0)
			{
				func_98();
				Local_54.f_0 = -2;
				Local_59.f_0 = 12;
			}
		}
		if (unk_0x83666F9FB8FEBD4B() > Local_54.f_1)
		{
			func_131();
		}
	}
}

void func_114(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36377[iVar0 /*5*/])
		{
			func_105(iVar0);
		}
		iVar0++;
	}
}

void func_115()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	Local_59.f_0 = 4;
	if (!unk_0x930F8FBB8E9537CC(Local_42.f_1))
	{
		if (unk_0x86F7E6A693F6370F(Local_42.f_1))
		{
			Local_59.f_0 = 10;
		}
	}
	if (bLocal_49)
	{
		func_122();
		func_8(71, 1);
		if (unk_0x1C6DF6AD69BE853E())
		{
			iVar0 = func_121(2045, -1, 0);
			iVar1 = (iVar0 / 10) + 1 * 10;
			if (iVar0 + 1 >= iVar1)
			{
				func_119(iVar1);
			}
			func_116(2045, iVar0 + 1, -1, 1);
		}
		else
		{
			iVar2 = 0;
			iVar3 = 0;
			iVar4 = 0;
			unk_0x85C45034BA638694(joaat("sp0_sp_num_times_drunk"), &iVar2, -1);
			unk_0x85C45034BA638694(joaat("sp1_sp_num_times_drunk"), &iVar3, -1);
			unk_0x85C45034BA638694(joaat("sp2_sp_num_times_drunk"), &iVar4, -1);
			iVar5 = ((iVar2 + iVar3) + iVar4);
			iVar6 = (iVar5 / 10) + 1 * 10;
			if (iVar5 + 1 >= iVar6)
			{
				func_119(iVar6);
			}
			switch (func_57())
			{
				case 0:
					unk_0x123B783056E76C4E(joaat("sp0_sp_num_times_drunk"), iVar2 + 1, 1);
					break;
				
				case 1:
					unk_0x123B783056E76C4E(joaat("sp1_sp_num_times_drunk"), iVar3 + 1, 1);
					break;
				
				case 2:
					unk_0x123B783056E76C4E(joaat("sp2_sp_num_times_drunk"), iVar4 + 1, 1);
					break;
				}
		}
		Local_59.f_1 = 1;
		return;
	}
	Local_59.f_1 = 12;
	if (Local_54.f_0 == -1)
	{
		Global_36296[iLocal_63 /*5*/].f_2 = 0;
	}
	else if (Global_36296[iLocal_63 /*5*/].f_3 < 3 && Global_36296[iLocal_63 /*5*/].f_3 != 0)
	{
		Global_36296[iLocal_63 /*5*/].f_2 = -1;
	}
	else
	{
		iVar7 = (Local_54.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar7 <= 0)
		{
			iVar7 = 0;
		}
		iVar7 = (iVar7 / 1000) + 1;
		Global_36296[iLocal_63 /*5*/].f_2 = 0;
		if (iVar7 < 30)
		{
			Global_36296[iLocal_63 /*5*/].f_2 = 2;
		}
		if (iVar7 < 10)
		{
			Global_36296[iLocal_63 /*5*/].f_2 = 1;
		}
	}
}

void func_116(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2459767[iParam0 /*5*/][func_117(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, iParam1, iParam3);
	}
}

int func_117(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_118();
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

var func_118()
{
	return Global_1312729;
}

void func_119(int iParam0)
{
	int iVar0;
	
	iVar0 = func_120(81);
	Global_2409095[iVar0 /*83*/] = 81;
	Global_2409095[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2409095[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_120(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2409095[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2409095[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

int func_121(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2459767[iParam0 /*5*/][func_117(iParam1)];
	if (unk_0x85C45034BA638694(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_122()
{
}

void func_123()
{
	Local_54.f_0 = Local_42.f_2;
	Local_54.f_1 = Local_42.f_3;
	Local_54.f_2 = -2;
	Local_54.f_3 = -2;
}

void func_124(int iParam0, int iParam1, int iParam2)
{
	func_125(iParam0, iParam1, iParam2, 0, 0);
}

void func_125(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_127(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_126();
	if (iVar0 == -1)
	{
		return;
	}
	Global_36377[iVar0 /*5*/] = iParam0;
	Global_36377[iVar0 /*5*/].f_1 = iParam1;
	Global_36377[iVar0 /*5*/].f_2 = iParam2;
	Global_36377[iVar0 /*5*/].f_3 = iParam3;
	Global_36377[iVar0 /*5*/].f_4 = iParam4;
}

int func_126()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36377[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_127(int iParam0, int iParam1, int iParam2)
{
	if (func_128(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_128(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_36377[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36377[iVar0 /*5*/])
			{
				if (iParam1 == Global_36377[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

void func_129()
{
	int iVar0;
	
	bLocal_49 = false;
	if (Local_42.f_1 == unk_0x81873881071CD9FE())
	{
		bLocal_49 = true;
		Global_36492 = 1;
		Global_36494++;
	}
	if (!unk_0x930F8FBB8E9537CC(Local_42.f_1))
	{
		iVar0 = func_60(Local_42.f_1);
		switch (iVar0)
		{
			case 17:
				unk_0xEF1A2C5B3EE83E3E(Local_42.f_1, "AMANDA_DRUNK");
				break;
			
			case 19:
				unk_0xEF1A2C5B3EE83E3E(Local_42.f_1, "LAMAR_DRUNK");
				break;
			}
	}
}

void func_130()
{
	if (!iLocal_47 == -1)
	{
		return;
	}
	iLocal_47 = func_81(Local_42.f_1);
	if (iLocal_47 == -1)
	{
		return;
	}
	iLocal_63 = func_80(iLocal_47);
}

void func_131()
{
	int iVar0;
	
	if (!func_26(0) && !func_26(3))
	{
		if (!unk_0x930F8FBB8E9537CC(Local_42.f_1))
		{
			iVar0 = func_60(Local_42.f_1);
			if (Global_36296[iLocal_63 /*5*/].f_4 > 0)
			{
				switch (iVar0)
				{
					case 0:
						func_133(Local_42.f_1, "POST_STONED", 24);
						break;
					
					case 1:
						func_133(Local_42.f_1, "POST_STONED", 24);
						break;
					
					case 2:
						func_133(Local_42.f_1, "POST_STONED", 24);
						break;
					}
			}
			switch (iVar0)
			{
				case 17:
					unk_0xEF1A2C5B3EE83E3E(Local_42.f_1, "AMANDA_NORMAL");
					break;
				
				case 19:
					unk_0xEF1A2C5B3EE83E3E(Local_42.f_1, "LAMAR_NORMAL");
					break;
				}
			}
	}
	func_98();
	if (bLocal_49)
	{
		Global_36492 = 0;
	}
	func_132();
	unk_0xD8323B49BAE93D80(func_77(0));
	unk_0xD8323B49BAE93D80(func_77(2));
	unk_0xD8323B49BAE93D80(func_77(1));
	Global_1707911 = 0;
	if (unk_0x968BF1C2C695B61A(joaat("appemail")) > 0)
	{
		func_33(0);
	}
	unk_0xC23A229F78DAD92A();
}

void func_132()
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (unk_0x930F8FBB8E9537CC(Local_42.f_1))
	{
		return;
	}
	uVar0 = Local_42.f_1;
	if (unk_0xE5AB05962FA1FF3F(Local_42.f_1, 0))
	{
		uVar1 = unk_0xE68E6B44DABA9C05(Local_42.f_1, 0);
		iVar2 = unk_0xB0B9E53CEFDB16AA(uVar1, -1);
		if (!Local_42.f_1 == iVar2)
		{
			return;
		}
		uVar0 = iVar1;
	}
	else if (!unk_0x4D872223E3957144() == 4 || !unk_0x81873881071CD9FE() == Local_42.f_1)
	{
		return;
	}
	fLocal_52 = 0f;
	func_91(uVar0, 0f);
}

void func_133(var uParam0, char* sParam1, int iParam2)
{
	unk_0xE66E1668957ECE7B(uParam0, sParam1, func_134(iParam2), 1);
}

int func_134(int iParam0)
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

