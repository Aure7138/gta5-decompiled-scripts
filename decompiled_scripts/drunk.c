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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	struct<5> Local_43 = { 0, 0, 0, 0, 0 } ;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = 0;
	bool bLocal_51 = 0;
	float fLocal_52 = 0f;
	float fLocal_53 = 0f;
	char* sLocal_54 = NULL;
	struct<5> Local_55 = { 0, 0, 0, 0, 0 } ;
	struct<3> Local_60 = { 0, 0, 0 } ;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
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
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_48 = -1;
	iLocal_49 = -1;
	fLocal_52 = 1.7f;
	fLocal_53 = 0f;
	sLocal_54 = "";
	iLocal_63 = -1;
	if (unk_0x89522B8E487D4EF9(2))
	{
		func_131();
	}
	Local_43 = { ScriptParam_0 };
	func_130();
	func_129();
	func_124(iLocal_48, 0, 0);
	unk_0xC1B1E9A034A63A62(0);
	func_123();
	func_115();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_114(iLocal_48);
		func_113();
		func_111();
		func_104();
		func_124(iLocal_48, 0, 0);
		func_130();
		func_6();
		if ((unk_0x00AAD79B42B3E036() && !unk_0x6B042133C9334B77()) && !func_5())
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
	Global_2432717.f_630 = 1;
}

var func_3()
{
	return Global_2432717.f_609;
}

bool func_4()
{
	return unk_0xB519E5386FBF69E5(Global_2432717.f_2, 11);
}

bool func_5()
{
	return unk_0xB519E5386FBF69E5(Global_2433481.f_1.f_2809, 3);
}

void func_6()
{
	bool bVar0;
	
	if (unk_0x76B2D234F1895632(Local_43.f_1))
	{
		func_131();
	}
	if (bLocal_50)
	{
		if (!unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
		{
			func_131();
		}
	}
	func_103();
	bVar0 = true;
	switch (Local_60.f_0)
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
	if (!Local_60.f_0 == 12)
	{
		return;
	}
	switch (Local_60.f_1)
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
	
	unk_0x5F0FEFB9EF0F238E(Local_43.f_1, 3000, 3500, 0, 1, 1, 0);
	Global_1713788 = 1;
	if (!unk_0xAEF17BDE274A1247())
	{
		unk_0x6A6E764D1DB633C7(2500);
		while (unk_0xA864A37DA392324A())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (unk_0x00AAD79B42B3E036())
	{
		func_64(unk_0x3F80C6638E3A1A90(), 0, 57344);
		Global_2404919.f_1460 = 1;
		if (unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0))
		{
			Global_2404919.f_1461 = 1;
		}
		else
		{
			Global_2404919.f_1461 = 0;
		}
		if (unk_0xB083DC83FC4E35AA())
		{
			unk_0x1F89FD93C9C24721(0);
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
	if (!unk_0x76B2D234F1895632(Local_43.f_1))
	{
		unk_0x88A973CE47FBEF95(Local_43.f_1, Var1.f_5, 1, 0, 0, 1);
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
	if (Global_51321[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x00AAD79B42B3E036())
	{
		return;
	}
	if (Global_51321[iParam0 /*7*/])
	{
		unk_0x56DCF5665F92F9BD(Global_51321[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x39DEDCCD70293F58(Global_51321[iParam0 /*7*/].f_1, iVar0, 1);
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
	unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), false, 0);
	if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		unk_0x2EF7A8CB89D363F6(unk_0xE7869D5D7816A9B6(), 1);
	}
	unk_0x7F75333E7D3B15DD(uParam1->f_5, 4500f);
	unk_0x1DA595C2C10DA7E3(uParam1->f_5, 4500f);
	unk_0xB86B1248EA9B87EA(uParam1->f_5, 5f, 1, 0, 0, 0);
	unk_0x88A973CE47FBEF95(unk_0xE7869D5D7816A9B6(), uParam1->f_5, 1, 0, 0, 1);
	unk_0x2878EC06B3F897A0(unk_0xE7869D5D7816A9B6(), true);
	unk_0x4EDE34FBADD967A6(0);
	unk_0x307133C47B1565B0(1);
	unk_0x2B0BB514F9140141(*uParam1);
	if (unk_0xF6917DE0E003509D(uParam1->f_16))
	{
	}
	else
	{
		unk_0x2B0BB514F9140141(uParam1->f_16);
	}
	if (!unk_0xAEF17BDE274A1247())
	{
		unk_0x6A6E764D1DB633C7(0);
	}
	func_47(uParam1->f_5, uParam1->f_8.f_2, 0, 1);
	if (!unk_0xAEF17BDE274A1247())
	{
		unk_0x6A6E764D1DB633C7(0);
	}
	iVar1 = unk_0x9D40BBF80D8F5E8A() + 20000;
	bVar2 = false;
	uParam1->f_33 = 0;
	while (!bVar2 && iVar1 > unk_0x9D40BBF80D8F5E8A())
	{
		bVar2 = true;
		unk_0x2B0BB514F9140141(*uParam1);
		if (!unk_0x2917D5E1CB5CE43A(*uParam1))
		{
			bVar2 = false;
		}
		if (!unk_0xF6917DE0E003509D(uParam1->f_16))
		{
			unk_0x2B0BB514F9140141(uParam1->f_16);
			if (!unk_0x2917D5E1CB5CE43A(uParam1->f_16))
			{
				bVar2 = false;
			}
		}
		if (!unk_0xAEF17BDE274A1247())
		{
			unk_0x6A6E764D1DB633C7(0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_44();
	if (!func_43(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		unk_0x39895086D78BEA60(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 0, 1);
		unk_0xC797AB6C3A6482E1(uParam1->f_5 + uParam1->f_19, (unk_0x652D2EEEF1D3E62C(uParam1->f_22) + 25f), 0, 0, 0, 0, 0);
		unk_0xB86B1248EA9B87EA(uParam1->f_5 + uParam1->f_19, (unk_0x652D2EEEF1D3E62C(uParam1->f_22) + 25f), 1, 0, 0, 0);
	}
	if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		unk_0x297E769770D04E42(unk_0x3F80C6638E3A1A90());
		unk_0x36EE5CBF45EC4826(unk_0xE7869D5D7816A9B6(), joaat("weapon_unarmed"), 1);
		unk_0xDE31B2587775EDAD(unk_0xE7869D5D7816A9B6());
	}
	unk_0x2878EC06B3F897A0(unk_0xE7869D5D7816A9B6(), false);
	unk_0x307133C47B1565B0(0);
	unk_0xB86B1248EA9B87EA(uParam1->f_5, 15f, 1, 0, 0, 0);
	unk_0xA71C4E5DA851EB0F();
	unk_0xE9F9327E769DB14E();
	func_41();
	while (func_40())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0xDE185266FE919B68() && !unk_0x845A95C48FA19489())
	{
		unk_0x2D3BB3EF936C4B76(250);
	}
	unk_0xBE3A91305A4366F2(1);
	if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		iVar4 = unk_0xB839A1C489B63ACC(uParam1->f_5, uParam1->f_8, 2);
		unk_0x3A7DEF86891D2891(iVar4, 0);
		unk_0xDB14F40E3E8CB36F(iVar4, 0);
		uVar5 = unk_0x01A00DEC76A48F14("DEFAULT_ANIMATED_CAMERA", 1);
		iVar6 = 4;
		if (uParam1->f_4 != joaat("MotionState_Idle"))
		{
			iVar6 |= 2;
		}
		func_38(unk_0xE7869D5D7816A9B6(), uParam1->f_18);
		unk_0x360F0D01112F8AD0(unk_0xE7869D5D7816A9B6(), iVar4, *uParam1, uParam1->f_1, 1000f, -1.5f, iVar6, 0, 1148846080, 0);
		unk_0x187F7608BA81D7D9(unk_0xE7869D5D7816A9B6(), 1);
		unk_0xA469C5AD8C24F418(unk_0x3F80C6638E3A1A90(), 1);
		iVar3 = unk_0xEE5BA9B7FD30DE31(unk_0xE7869D5D7816A9B6(), 77);
		unk_0xC31A3F1982C7B12B(unk_0xE7869D5D7816A9B6(), 77, 1);
		unk_0x102A9C1517158BFA(uVar5, iVar4, uParam1->f_2, *uParam1);
		unk_0x538689EF05955EF7(1, 0, 3000, 1, 0, 0);
		if (!unk_0xF6917DE0E003509D(uParam1->f_16) && !unk_0xF6917DE0E003509D(uParam1->f_17))
		{
			unk_0xDCF460AE46C9489C(unk_0xE7869D5D7816A9B6(), uParam1->f_16, uParam1->f_17, 1000f, -1.5f, 10000, 33, 0, 0, 0, 0);
		}
	}
	else
	{
		iVar4 = -1;
	}
	if (!uParam1->f_25)
	{
		if (!unk_0xF6917DE0E003509D(sParam2))
		{
			func_37(sParam2, -1);
			uParam1->f_25 = 1;
		}
	}
	bVar7 = false;
	bVar8 = false;
	uVar9 = 16;
	if (!unk_0xF6917DE0E003509D(&(uParam1->f_11)))
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
		func_36(&uVar9, iVar175, unk_0xE7869D5D7816A9B6(), sVar176, 0, 1);
	}
	if (unk_0x47B2F09FC779F5CD(iVar4))
	{
		sVar177 = "WalkInterruptible";
		sVar178 = "ForceBlendout";
		while (unk_0x47B2F09FC779F5CD(iVar4) && !unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
		{
			if (!bVar8)
			{
				if (!unk_0xAEF17BDE274A1247())
				{
					if (!unk_0xF6917DE0E003509D(uParam1->f_26))
					{
						unk_0xCD0E4FEA8B60FCA3(uParam1->f_26, 0, 0);
						bVar8 = true;
					}
					if (!unk_0xF6917DE0E003509D(uParam1->f_27))
					{
						if (!unk_0xF6917DE0E003509D(uParam1->f_28))
						{
							unk_0xCC18B241D266EF14(-1, uParam1->f_28, uParam1->f_27, 0);
							bVar8 = true;
						}
						if (!unk_0xF6917DE0E003509D(uParam1->f_29))
						{
							unk_0xCC18B241D266EF14(-1, uParam1->f_29, uParam1->f_27, 0);
							bVar8 = true;
						}
					}
				}
			}
			unk_0x3BE81935DF4C438C();
			unk_0x1B7A773B18DF3DB0(18);
			unk_0xE878A15FE485B708();
			func_32();
			iVar179 = unk_0x9D40BBF80D8F5E8A();
			if (iVar179 >= (Global_36170 - 500))
			{
				func_31(4000);
			}
			fVar180 = -1f;
			fVar181 = -1f;
			fVar0 = unk_0x4D221DFBB84DCF0B(iVar4);
			if (!unk_0xF6917DE0E003509D(&(uParam1->f_11)))
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
			if (unk_0x8442AE3B8EA7046F(unk_0xE7869D5D7816A9B6(), unk_0xC7C6DDDE84A8E734(sVar177)))
			{
				iVar183 = (unk_0x35C548C4B4C28DDF(2, 195) - 128);
				iVar184 = (unk_0x35C548C4B4C28DDF(2, 196) - 128);
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
			if (unk_0xF19E031C976C0F00() == 4 && uParam1->f_52 > 0f)
			{
				if (fVar0 >= uParam1->f_52)
				{
					if (!uParam1->f_32)
					{
						fVar185 = 1.5f;
						Var186 = { unk_0xB2A25AE6DD89C70D() };
						Var189 = { unk_0x5D551231E967CD2B(unk_0xE7869D5D7816A9B6(), 31086, 0f, 0f, 0f) };
						fVar192 = unk_0xF18329472591CFE6(Var186, Var189, 1);
						fVar185 = func_18(fVar185, 0.001f, (fVar192 - 0.75f));
						if (fVar185 < 0f)
						{
							fVar185 = 0.001f;
						}
						func_17(&(uParam1->f_34), unk_0xE7869D5D7816A9B6(), func_57(), 1E-06f, 300, 300, 0, 0, 1045220557);
						func_16(&(uParam1->f_34), uParam1->f_53);
						if (!uParam1->f_33)
						{
							uParam1->f_34 = 1;
							uParam1->f_34.f_7 = unk_0x9D40BBF80D8F5E8A();
							uParam1->f_34.f_8 = 0;
							uParam1->f_33 = 1;
						}
						if (uParam1->f_57 == 999f)
						{
							uParam1->f_56 = 0f;
						}
						if (uParam1->f_57 == 999f)
						{
							Var195 = { unk_0xD68773038DE40260(2) };
							uVar198 = unk_0x2CAFFCD9F5E16D2F(unk_0xE7869D5D7816A9B6());
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
						unk_0x6EF372C057320AD4(fVar193, 1065353216);
						unk_0x7FB81B1DD14A3BE4(fVar194);
						unk_0xD38802E41A770E17(fVar193);
						unk_0x0EB7F34945FCC178(fVar194);
						Var201 = { unk_0xB2A25AE6DD89C70D() };
						Var204 = { unk_0x7D6DB785AFC32F33() };
						fVar207 = unk_0xF18329472591CFE6(Var201, Var204, 1);
						iVar208 = unk_0xF2DB717A73826179((fVar207 * 1000f));
						uParam1->f_32 = 1;
					}
					if (uParam1->f_32)
					{
						unk_0xA28FCDF3FB3367BC();
						if (func_13(&(uParam1->f_34), 1, 1, 1, 0, 0, 0))
						{
						}
					}
				}
			}
			if (unk_0x8442AE3B8EA7046F(unk_0xE7869D5D7816A9B6(), unk_0xC7C6DDDE84A8E734(sVar178)) || iVar182)
			{
				if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
				{
					unk_0xFA2C5C2D054C888E(unk_0xE7869D5D7816A9B6());
					switch (uParam1->f_4)
					{
						case joaat("MotionState_Idle"):
							unk_0x29F3FAC40F745C80(unk_0xE7869D5D7816A9B6(), joaat("MotionState_Idle"), 1, 0, 0);
							unk_0x83AD6129F0CF8C94(0, 0, 3, 0);
							break;
						
						case joaat("MotionState_Walk"):
							unk_0x29F3FAC40F745C80(unk_0xE7869D5D7816A9B6(), joaat("MotionState_Walk"), 1, 0, 0);
							unk_0xE441EC6EE6C2D7EB(unk_0x3F80C6638E3A1A90(), 1f, 500, 0, 1, 0);
							if (unk_0xF19E031C976C0F00() != 4)
							{
								if (uParam1->f_31 == 999f)
								{
									uParam1->f_30 = 0f;
								}
								if (uParam1->f_31 == 999f)
								{
									Var211 = { unk_0xD68773038DE40260(2) };
									uVar214 = unk_0x2CAFFCD9F5E16D2F(unk_0xE7869D5D7816A9B6());
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
								unk_0x6EF372C057320AD4(fVar209, 1065353216);
								unk_0x7FB81B1DD14A3BE4(fVar210);
								Var217 = { unk_0xB2A25AE6DD89C70D() };
								Var220 = { unk_0x7D6DB785AFC32F33() };
								fVar223 = unk_0xF18329472591CFE6(Var217, Var220, 1);
								iVar224 = unk_0xF2DB717A73826179((fVar223 * 1000f));
								unk_0x538689EF05955EF7(0, 1, iVar224, 0, 0, 0);
							}
							break;
						
						default:
							break;
					}
					if (unk_0x47B2F09FC779F5CD(iVar4))
					{
						unk_0x57F365E25D632211(iVar4);
						iVar4 = -1;
					}
				}
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (!func_43(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		unk_0x3EB6E5FC1FA6912C(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 1);
	}
	unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), true, 0);
	if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		unk_0xFA2C5C2D054C888E(unk_0xE7869D5D7816A9B6());
	}
	bVar225 = unk_0x8BC2527B17BCB215();
	bVar226 = false;
	if (uParam1->f_32)
	{
		unk_0xA28FCDF3FB3367BC();
		if (!func_13(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
		{
			bVar226 = true;
		}
	}
	if (bVar225 || bVar226)
	{
		while ((bVar225 || bVar226) && !unk_0xF478777FFCC96862())
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
			bVar225 = unk_0x8BC2527B17BCB215();
			bVar226 = false;
			if (uParam1->f_32)
			{
				unk_0xA28FCDF3FB3367BC();
				if (!func_13(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
				{
					bVar226 = true;
				}
			}
		}
	}
	if (!unk_0xF6917DE0E003509D(uParam1->f_16))
	{
		unk_0x8B10CC9832827D27(uParam1->f_16);
	}
	unk_0x8B10CC9832827D27(*uParam1);
	unk_0x74FF6D08DE291367(uVar5, 0);
	func_10(&(uParam1->f_34));
	if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		unk_0xC31A3F1982C7B12B(unk_0xE7869D5D7816A9B6(), 77, iVar3);
		unk_0x2EF7A8CB89D363F6(unk_0xE7869D5D7816A9B6(), 0);
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
	if (unk_0xCF686B56FD5328B5(uParam0->f_1))
	{
		unk_0x74FF6D08DE291367(uParam0->f_1, 0);
	}
	if (unk_0xCF686B56FD5328B5(uParam0->f_2))
	{
		unk_0x74FF6D08DE291367(uParam0->f_2, 0);
	}
	if (unk_0xCF686B56FD5328B5(uParam0->f_3))
	{
		unk_0x74FF6D08DE291367(uParam0->f_3, 0);
	}
	if (unk_0xCF686B56FD5328B5(uParam0->f_4))
	{
		unk_0x74FF6D08DE291367(uParam0->f_4, 0);
	}
}

void func_12(int iParam0, int iParam1, int iParam2)
{
	unk_0x8CCCC48313B0F20F(iParam0, iParam1, 1);
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
			if (!unk_0x76B2D234F1895632(uParam0->f_5))
			{
				func_11(uParam0);
				Var0 = { unk_0xB2A25AE6DD89C70D() };
				if (bParam1)
				{
					Var0 = { Var0 + unk_0x834FF019A048DE2C(uParam0->f_5) * FtoV(unk_0x3B75450B0AEE5786()) };
				}
				Var3 = { unk_0x61CBEF33034AF6B9(uParam0->f_5, Var0) };
				Var6 = { unk_0xD68773038DE40260(2) };
				Var9 = { Var6 + uParam0->f_9 };
				Var12 = { Var9 - unk_0x18AD8448B5C85E6D(uParam0->f_5, 2) };
				Var15 = { (-unk_0x0BADBFA3B172435F(Var9.f_2) * unk_0xD0FFB162F40A139C(Var9.f_0)), (unk_0xD0FFB162F40A139C(Var9.f_2) * unk_0xD0FFB162F40A139C(Var9.f_0)), unk_0x0BADBFA3B172435F(Var9.f_0) };
				Var18 = { (-unk_0x0BADBFA3B172435F(Var12.f_2) * unk_0xD0FFB162F40A139C(Var12.f_0)), (unk_0xD0FFB162F40A139C(Var12.f_2) * unk_0xD0FFB162F40A139C(Var12.f_0)), unk_0x0BADBFA3B172435F(Var12.f_0) };
				uVar21 = unk_0x5E48E4AFD7B03C90();
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = unk_0x95D076F607630E2B(1775630800, 0);
				}
				uParam0->f_1 = unk_0x95D076F607630E2B(26379945, 1);
				if (bParam1)
				{
					unk_0x8E0CB5A43A2CA4CB(uParam0->f_1, uParam0->f_5, Var3, 1);
				}
				else
				{
					unk_0x34F8B34A8E9D3B57(uParam0->f_1, Var0);
				}
				unk_0x3B330DB318EF2761(uParam0->f_1, Var6, 2);
				unk_0xD2E0A9EDD55F008D(uParam0->f_1, uVar21);
				uParam0->f_2 = unk_0x95D076F607630E2B(26379945, 1);
				if (bParam1 && !bParam4)
				{
					unk_0x8E0CB5A43A2CA4CB(uParam0->f_2, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12), 1);
				}
				else
				{
					unk_0x34F8B34A8E9D3B57(uParam0->f_2, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12));
				}
				unk_0x3B330DB318EF2761(uParam0->f_2, Var6, 2);
				unk_0xD2E0A9EDD55F008D(uParam0->f_2, uVar21);
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = unk_0x95D076F607630E2B(26379945, 1);
					if (bParam1 && !bParam4)
					{
						unk_0x8E0CB5A43A2CA4CB(uParam0->f_4, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13), 1);
					}
					else
					{
						unk_0x34F8B34A8E9D3B57(uParam0->f_4, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13));
					}
					unk_0x3B330DB318EF2761(uParam0->f_4, Var6, 2);
					unk_0xD2E0A9EDD55F008D(uParam0->f_4, uVar21);
				}
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					unk_0xE57A152CF05FBFC4(uParam0->f_3, uParam0->f_1, 0, 2);
					if (iParam6 == 0)
					{
						unk_0xE57A152CF05FBFC4(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
					}
					unk_0xE57A152CF05FBFC4(uParam0->f_3, uParam0->f_2, (uParam0->f_14 - uParam0->f_17), 2);
					unk_0x9ABAC5456B262ED9(uParam0->f_3, iParam6);
					unk_0x63498CF6CF35C6A2(uParam0->f_3, 1);
				}
				else
				{
					unk_0x7D333E815920766B(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
				unk_0x538689EF05955EF7(1, 0, 3000, 1, 0, 0);
				uParam0->f_7 = unk_0x9D40BBF80D8F5E8A();
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
					if (unk_0x9D40BBF80D8F5E8A() >= (uParam0->f_7 + uParam0->f_16))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									unk_0xCD0E4FEA8B60FCA3("CamPushInFranklin", 0, 0);
									break;
								
								case 0:
									unk_0xCD0E4FEA8B60FCA3("CamPushInMichael", 0, 0);
									break;
								
								case 2:
									unk_0xCD0E4FEA8B60FCA3("CamPushInTrevor", 0, 0);
									break;
							}
						}
						else
						{
							unk_0xCD0E4FEA8B60FCA3("CamPushInNeutral", 0, 0);
						}
						unk_0xCC18B241D266EF14(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						uParam0->f_8 = 1;
					}
				}
			}
			if (unk_0x9D40BBF80D8F5E8A() >= (uParam0->f_7 + uParam0->f_15))
			{
				if (bParam2)
				{
					func_11(uParam0);
					unk_0x538689EF05955EF7(0, 0, 3000, 1, 0, 0);
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
	unk_0x02FBF8551A36D88F();
	func_15();
}

void func_15()
{
	Global_17118.f_134 = 1;
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
	Global_15719 = 0;
	Global_15721 = 0;
	Global_15726 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_2621441 = 0;
	return func_20(sParam2, iParam3, 0);
}

int func_20(char* sParam0, int iParam1, bool bParam2)
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
					func_29();
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
		if (func_28(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_27();
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
				func_25();
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
				if (func_24())
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
			if (func_23())
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
			func_22();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_21();
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
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xDA09A6E60FE9645E(0);
	Global_15712 = 1;
}

void func_22()
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

int func_23()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_24()
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

void func_25()
{
	if (func_26(14))
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
		Global_14413 = func_57();
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

bool func_26(int iParam0)
{
	return Global_35619 == iParam0;
}

void func_27()
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

bool func_28(int iParam0, int iParam1)
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

void func_29()
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

void func_30(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15166 = { *uParam0 };
	Global_1599 = iParam1;
	StringCopy(&Global_15782, sParam2, 24);
	Global_16701 = uParam5;
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

void func_31(int iParam0)
{
	Global_36170 = (unk_0x9D40BBF80D8F5E8A() + iParam0);
}

void func_32()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_35(0))
		{
			func_33(0);
		}
		unk_0x9956FB0E4B50ECB8(&Global_2284, 2);
	}
}

void func_33(int iParam0)
{
	if (Global_14571)
	{
		func_34(0, 0);
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
	if (!func_23())
	{
		Global_14413.f_1 = 3;
	}
}

void func_34(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_35(0))
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

int func_35(int iParam0)
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

void func_37(char* sParam0, int iParam1)
{
	unk_0xCAFBB15049416379(sParam0);
	unk_0x7CBFB87C647743C3(0, 0, 1, iParam1);
}

void func_38(int iParam0, var uParam1)
{
	if (func_39(uParam1, 1))
	{
		unk_0xF4FC0F4341A0A5C4(iParam0, "HOSPITAL_0", 0f, 1f);
	}
	if (func_39(uParam1, 2))
	{
		unk_0xF4FC0F4341A0A5C4(iParam0, "HOSPITAL_1", 0f, 1f);
	}
	if (func_39(uParam1, 4))
	{
		unk_0xF4FC0F4341A0A5C4(iParam0, "HOSPITAL_2", 0f, 1f);
	}
	if (func_39(uParam1, 8))
	{
		unk_0xF4FC0F4341A0A5C4(iParam0, "HOSPITAL_3", 0f, 1f);
	}
	if (func_39(uParam1, 16))
	{
		unk_0xF4FC0F4341A0A5C4(iParam0, "HOSPITAL_4", 0f, 1f);
	}
	if (func_39(uParam1, 32))
	{
		unk_0xF4FC0F4341A0A5C4(iParam0, "HOSPITAL_5", 0f, 1f);
	}
	if (func_39(uParam1, 64))
	{
		unk_0xF4FC0F4341A0A5C4(iParam0, "HOSPITAL_6", 0f, 1f);
	}
	if (func_39(uParam1, 128))
	{
		unk_0xF4FC0F4341A0A5C4(iParam0, "HOSPITAL_7", 0f, 1f);
	}
	if (func_39(uParam1, 256))
	{
		unk_0xF4FC0F4341A0A5C4(iParam0, "HOSPITAL_8", 0f, 1f);
	}
	if (func_39(uParam1, 512))
	{
		unk_0xF4FC0F4341A0A5C4(iParam0, "HOSPITAL_9", 0f, 1f);
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
	if (((Global_91025 == 13 || Global_91025 == 10) || Global_91025 == 11) || Global_91025 == 12)
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
		if (Global_88291[iVar0 /*17*/] && !Global_88291[iVar0 /*17*/].f_1)
		{
			if (Global_88291[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_88291[iVar0 /*17*/].f_5 != 88 && Global_88291[iVar0 /*17*/].f_5 != 89) && Global_88291[iVar0 /*17*/].f_5 != 92)
				{
					func_42(Global_88291[iVar0 /*17*/].f_5, 1);
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
			Global_85343[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85343[iParam0 /*2*/] = 0;
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
		iVar1 = Global_36472[iVar0 /*5*/];
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
		if (Global_36446[iVar2 /*5*/] == 0)
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
	if (!Global_36446[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36446[iParam0 /*5*/].f_1 == unk_0xE7869D5D7816A9B6())
		{
			Global_36667 = 0;
		}
	}
	Global_36446[iParam0 /*5*/] = 13;
	Global_36446[iParam0 /*5*/].f_1 = 0;
	Global_36446[iParam0 /*5*/].f_2 = 0;
	Global_36446[iParam0 /*5*/].f_3 = 0;
	Global_36446[iParam0 /*5*/].f_4 = 0;
	Global_36445 = (Global_36445 - 1);
	if (Global_36445 < 0)
	{
		Global_36445 = 0;
	}
}

int func_47(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		func_51(0);
		unk_0xB86B1248EA9B87EA(Param0, 5f, 1, 0, 0, 0);
		if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
		{
			if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
			{
				unk_0x88A973CE47FBEF95(unk_0xE7869D5D7816A9B6(), Param0, 1, 0, 0, 1);
				unk_0x151F32CB40BE730C(unk_0xE7869D5D7816A9B6(), uParam3);
				unk_0x6EF372C057320AD4(0f, 1065353216);
				unk_0x7FB81B1DD14A3BE4(0f);
			}
		}
		unk_0x3D81DBD4F6A29824(Param0, 4500f, 0);
		unk_0x4EDE34FBADD967A6(0);
		unk_0xB86B1248EA9B87EA(Param0, 5000f, 1, 0, 0, 0);
		unk_0xFF08C54E7EC23A77(Param0, 5000f, 0);
		unk_0x7F75333E7D3B15DD(Param0, 5000f);
		unk_0x1DA595C2C10DA7E3(Param0, 5000f);
		func_50();
		func_49();
		unk_0xC1B1E9A034A63A62(0);
		func_51(1);
		if (!unk_0xC5E5B5BBBE4693F6())
		{
			while (!unk_0x3D81DBD4F6A29824(Param0, 4500f, 0))
			{
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					unk_0x307133C47B1565B0(0);
					return 0;
				}
			}
		}
		unk_0xC1B1E9A034A63A62(0);
		while (!unk_0xB1959BA5ECC2010F())
		{
			unk_0x4EDE34FBADD967A6(0);
			if (unk_0x83666F9FB8FEBD4B() > 20000)
			{
				unk_0x307133C47B1565B0(0);
				if (unk_0xC5E5B5BBBE4693F6())
				{
					unk_0xEF1C0568E9BDCF78();
				}
				return 0;
			}
		}
		if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
		{
			if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
			{
				if (unk_0xC5E5B5BBBE4693F6())
				{
					unk_0xEF1C0568E9BDCF78();
				}
				unk_0x307133C47B1565B0(0);
				unk_0xC1B1E9A034A63A62(0);
				unk_0xA71C4E5DA851EB0F();
				if (iParam5 == 1)
				{
					unk_0xE9F9327E769DB14E();
				}
				else
				{
					unk_0xC1B1E9A034A63A62(5000);
				}
				unk_0x0A2787ABCADFF64B();
			}
		}
		while ((!unk_0xE270C3BE3AA1A862() && !func_48()) && unk_0x83666F9FB8FEBD4B() < 1500)
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
			unk_0xC4A43A7E257E1FD9(Param0, &(Param0.f_2), 0);
			unk_0xB86B1248EA9B87EA(Param0, 5f, 1, 0, 0, 0);
			if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
			{
				if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
				{
					unk_0x88A973CE47FBEF95(unk_0xE7869D5D7816A9B6(), Param0, 1, 0, 0, 1);
					unk_0x151F32CB40BE730C(unk_0xE7869D5D7816A9B6(), uParam3);
				}
			}
		}
		unk_0x6EF372C057320AD4(0f, 1065353216);
		unk_0x7FB81B1DD14A3BE4(0f);
		func_51(0);
		return 1;
	}
	func_51(0);
	return 0;
}

bool func_48()
{
	return !Global_68105.f_553;
}

void func_49()
{
	Global_68105.f_553 = 1;
	Global_68105.f_554 = 0;
}

void func_50()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		Global_68105[iVar0] = 0;
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
			if (!unk_0xB519E5386FBF69E5(Global_91025.f_20, 2))
			{
				unk_0x307133C47B1565B0(1);
				unk_0x9956FB0E4B50ECB8(&(Global_91025.f_20), 2);
			}
		}
		else if (unk_0xB519E5386FBF69E5(Global_91025.f_20, 2))
		{
			unk_0x307133C47B1565B0(0);
			unk_0x73817D396768E4C6(&(Global_91025.f_20), 2);
		}
	}
}

int func_52()
{
	if (unk_0xB519E5386FBF69E5(unk_0x0ADD324BC46177EF(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

bool func_53(int iParam0)
{
	return unk_0xB519E5386FBF69E5(Global_99155.f_5843[iParam0], 0);
}

int func_54(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_99155.f_7699.f_99.f_58[iParam0];
}

int func_55()
{
	if (Global_32985[11] == 1)
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
	return Global_99155.f_7699.f_330[iParam0 /*6*/];
}

int func_57()
{
	func_58();
	return Global_99155.f_1750.f_539.f_3549;
}

void func_58()
{
	int iVar0;
	
	if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
	{
		if (func_61(Global_99155.f_1750.f_539.f_3549) != unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()))
		{
			iVar0 = func_60(unk_0xE7869D5D7816A9B6());
			if (func_59(iVar0) && (!func_26(14) || Global_98107))
			{
				if (Global_99155.f_1750.f_539.f_3549 != iVar0 && func_59(Global_99155.f_1750.f_539.f_3549))
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

bool func_59(int iParam0)
{
	return iParam0 < 3;
}

int func_60(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD51CFE69539DB6D8(iParam0))
	{
		iVar1 = unk_0x1B2DC87EFB36DF80(iParam0);
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
		return Global_99155.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_62(bool bParam0)
{
	unk_0x1BADF2B18B4C5E4A(0f);
	unk_0xD1A6881848B5EB56(0f);
	unk_0x0DB753949F029097(0f);
	unk_0xC16BAED43F667110(1);
	unk_0x9A63D23361B95CA5(0f);
	unk_0x9514920D319952BB(1);
	unk_0xF27C77AEEAC4C150(0);
	if (unk_0x64C1636D480771D9("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0x61B624BA2305D0E5("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0xF6917DE0E003509D(&Global_36647))
	{
		if (unk_0x64C1636D480771D9(&Global_36647))
		{
			unk_0x61B624BA2305D0E5(&Global_36647);
		}
	}
	if (unk_0xCF686B56FD5328B5(Global_36636))
	{
		if (unk_0xC09006CD9DC3C663(Global_36636))
		{
			unk_0xC104F830EF46B165(Global_36636, 0f);
			unk_0xC49F6B0E7D5229A8(Global_36636, 1);
		}
	}
	if (unk_0xB083DC83FC4E35AA())
	{
		unk_0x1F89FD93C9C24721(0);
	}
	if (bParam0)
	{
		if (unk_0x09D05B27722EC27D() != -1 || unk_0xCF701AC812654AD1() != -1)
		{
			unk_0xF719D6C33930E46D();
		}
		else if (unk_0xF478777FFCC96862())
		{
			unk_0xF719D6C33930E46D();
		}
	}
	Global_36642 = 0f;
	StringCopy(&Global_36643, "", 16);
	StringCopy(&Global_36647, "", 64);
	StringCopy(&Global_36663, "", 16);
	func_63();
}

void func_63()
{
	Global_36635 = 0;
	Global_36636 = 0;
	Global_36637 = 0;
	Global_36638 = 30000;
	Global_36639 = 0f;
	Global_36641 = 0f;
	Global_36640 = 0f;
	Global_36642 = 0f;
	StringCopy(&Global_36643, "", 16);
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
		if (unk_0x19AC385C7CB5ACFE())
		{
			unk_0xBEE128CF06FE2A96(0);
		}
	}
	if (!unk_0x00AAD79B42B3E036())
	{
		uVar0 = iParam2;
		unk_0x8FE59DE2329CBE64(iParam0, bParam1, uVar0);
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
		if (unk_0xD18C3CF631455087(iParam0) && unk_0x2E6D4A0CE8AD9494(iParam0))
		{
			iVar25 = unk_0x91B73D905EA38F6B(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x00AAD79B42B3E036())
				{
					unk_0xE0D8D7721870E98E(1);
				}
				else
				{
					unk_0x60365B5AF8BF1FFA(iVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0x00AAD79B42B3E036() && !bVar18)
					{
						unk_0xE0D8D7721870E98E(0);
					}
					Global_2416794[iParam0 /*303*/].f_239 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_67(iVar25) && !unk_0x4ADBDB3ACDEB4D8C(iVar25))
				{
					if (!bVar21)
					{
						unk_0x70EE8EFEE355AD29(iVar25, true, 0);
					}
				}
				if (!unk_0xD55D878601C46BA9(iVar25))
				{
					if (!bVar20)
					{
						unk_0x2878EC06B3F897A0(iVar25, false);
					}
					unk_0xFD092FF761E54535(iVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0x2878EC06B3F897A0(iVar25, false);
				}
				unk_0x321C1AA209172C00(iVar25, true);
				unk_0xD30CBD7E69615F8C(iParam0, 0);
				unk_0x3884CEFF6ADEBA7D(iVar25);
				unk_0xC16A68A8424A0340(iVar25, 1);
				func_66();
				func_65();
				if (unk_0xE1CF0FCC3409EBB7())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0xC5E5B5BBBE4693F6())
				{
				}
				Global_2416794[iParam0 /*303*/].f_240 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_67(iVar25) && !unk_0x4ADBDB3ACDEB4D8C(iVar25))
				{
					if (!bVar21)
					{
						unk_0x70EE8EFEE355AD29(iVar25, !bVar14, 0);
					}
					if (!unk_0xD55D878601C46BA9(iVar25))
					{
						if (!bVar20)
						{
							unk_0x2878EC06B3F897A0(iVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0xFD092FF761E54535(iVar25, 1);
						}
					}
				}
				if (bVar9)
				{
					unk_0xD30CBD7E69615F8C(iParam0, 0);
				}
				else
				{
					unk_0xD30CBD7E69615F8C(iParam0, 1);
				}
				unk_0x321C1AA209172C00(iVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0xF81B6A0547AE4030(iVar25) && !unk_0x51374A0BB2871E6E(iVar25, 0))
					{
						unk_0xDE31B2587775EDAD(iVar25);
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
			unk_0x8FE59DE2329CBE64(iParam0, bParam1, iVar26);
		}
	}
}

void func_65()
{
	struct<2> Var0;
	
	Global_2426494.f_691 = 0;
	Global_2426494.f_692 = 0;
	Global_2426494.f_693 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2404919.f_1464 = { Var0 };
}

void func_66()
{
	Global_2404919.f_622 = 0;
	Global_2404919.f_1505 = 0;
	Global_2404919.f_484 = 0;
	Global_2416794[unk_0x3F80C6638E3A1A90() /*303*/].f_205 = 0;
}

int func_67(int iParam0)
{
	int iVar0;
	
	if (unk_0x51374A0BB2871E6E(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xC47857E5E74EA5AF(iParam0, -1794415470);
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
	
	if (bLocal_50)
	{
		return;
	}
	Local_43.f_4 = 0;
	if (!func_71(Global_36472[iLocal_64 /*5*/].f_2))
	{
		return;
	}
	iVar0 = unk_0x0ADD324BC46177EF(500, 3000);
	Local_60.f_0 = 5;
	Local_55.f_2 = (unk_0x83666F9FB8FEBD4B() + iVar0);
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
	if (unk_0xAF437D7C802AB246(Local_43.f_1))
	{
		if (unk_0x51374A0BB2871E6E(Local_43.f_1, 0) || unk_0xF3140D055686CF79(Local_43.f_1))
		{
			return 0;
		}
		if (unk_0xED5DA6DD52F21DA6(Local_43.f_1))
		{
			return 0;
		}
		if (func_78(Local_43.f_1))
		{
			return 0;
		}
	}
	if (Global_36472[iLocal_64 /*5*/].f_3 < 3 && Global_36472[iLocal_64 /*5*/].f_3 != 0)
	{
		return 0;
	}
	if (Global_36472[iLocal_64 /*5*/].f_4 < 9 && Global_36472[iLocal_64 /*5*/].f_4 != 0)
	{
		return 0;
	}
	uVar1 = func_77(iParam0);
	if (unk_0xF6917DE0E003509D(uVar1))
	{
		return 0;
	}
	if (func_78(Local_43.f_1))
	{
		return 0;
	}
	unk_0x5FC34204E17B27E0(sVar1);
	if (func_74(Local_43.f_1))
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
		if (!unk_0xF6917DE0E003509D(sVar2) && !unk_0xF6917DE0E003509D(sVar3))
		{
			unk_0x2B0BB514F9140141(sVar2);
			while (!unk_0x2917D5E1CB5CE43A(sVar2))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (!unk_0xAF437D7C802AB246(Local_43.f_1))
			{
				unk_0xDCF460AE46C9489C(Local_43.f_1, sVar2, sVar3, 1.5f, -1.5f, -1, 48, 0, 0, 0, 0);
				sLocal_54 = sVar3;
			}
		}
	}
	if (!unk_0x05416FE34E390CB7(sVar1))
	{
		return 0;
	}
	if (unk_0xAF437D7C802AB246(Local_43.f_1))
	{
		return 0;
	}
	unk_0xA8BB37BC9C4A95D4(Local_43.f_1, sVar1, 0.75f);
	if (unk_0xF19E031C976C0F00() == 4)
	{
		unk_0xFB6719329FB71C7D(Local_43.f_1, "move_ped_strafing_firstperson@drunk");
	}
	unk_0x398E777BCA3D5CD6(Local_43.f_1, 0, sVar1, "idle", 2f, 1);
	Local_60.f_2 = sVar1;
	bLocal_51 = true;
	iVar4 = 0;
	switch (func_60(Local_43.f_1))
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
			if (unk_0x1415CDB1128C3FBC(Local_43.f_1))
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
			else if (unk_0x0C2FCAD5220719B8(Local_43.f_1))
			{
				iVar4 = "FACIALS@GEN_MALE@BASE";
			}
			else
			{
				iVar4 = "FACIALS@GEN_FEMALE@BASE";
			}
			break;
	}
	unk_0xCE6642454B80EBC8(Local_43.f_1, "mood_drunk_1", iVar4);
	unk_0xC31A3F1982C7B12B(Local_43.f_1, 200, 1);
	unk_0xC31A3F1982C7B12B(Local_43.f_1, 46, 1);
	unk_0xA6ED3077A967AC63(Local_43.f_1, 0);
	unk_0x7346544C767CFCBF(Local_43.f_1, 262144, 1);
	unk_0x5C7985EC72ABE63D(Local_43.f_1, 1);
	return 1;
}

bool func_72()
{
	return func_73(unk_0x3F80C6638E3A1A90());
}

int func_73(int iParam0)
{
	if (unk_0x1B2DC87EFB36DF80(unk_0x91B73D905EA38F6B(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_74(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x51374A0BB2871E6E(iParam0, 1) || unk_0xF3140D055686CF79(iParam0))
	{
		return 0;
	}
	if (unk_0xC47857E5E74EA5AF(iParam0, -2017877118) != 7)
	{
		return 0;
	}
	if (unk_0xC47857E5E74EA5AF(iParam0, 1785177548) != 7)
	{
		return 0;
	}
	if (unk_0xD0C9DCB982CB2D78(iParam0))
	{
		return 0;
	}
	if (unk_0x47EF9ED961F4F559(iParam0))
	{
		return 0;
	}
	if (unk_0x8E2CF6ACCED3BD0F(iParam0))
	{
		return 0;
	}
	if (unk_0x2198CC96FD98B484(iParam0))
	{
		return 0;
	}
	if (Global_67887)
	{
		return 0;
	}
	if (func_76())
	{
		return 0;
	}
	if (iParam0 == unk_0xE7869D5D7816A9B6())
	{
		if (!unk_0xC6A8D789051EFC78(unk_0x3F80C6638E3A1A90()))
		{
			return 0;
		}
		if (!unk_0x4844BC1882594FDB(unk_0x3F80C6638E3A1A90()))
		{
			return 0;
		}
		if (unk_0x3EB3CC572EB40155(unk_0x3F80C6638E3A1A90()) || unk_0x21E4A126B001732E(unk_0x3F80C6638E3A1A90()))
		{
			return 0;
		}
		if (func_75())
		{
			return 0;
		}
	}
	Var0 = { unk_0x834FF019A048DE2C(iParam0) };
	if (unk_0xA8CEACB4F35AE058(Var0) >= (1f * 1f))
	{
		return 0;
	}
	return 1;
}

bool func_75()
{
	return Global_91077.f_297 > 0;
}

bool func_76()
{
	return unk_0x9D40BBF80D8F5E8A() <= Global_17257.f_5666 + 100;
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
	if (unk_0xF6917DE0E003509D(Local_60.f_2))
	{
		if (unk_0xF6917DE0E003509D(uVar1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return unk_0x04E7E853E31F41A3(Local_60.f_2, sVar1);
}

int func_79(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!unk_0xD51CFE69539DB6D8(iParam0))
	{
		return -1;
	}
	iVar0 = func_81(iParam0);
	iVar1 = func_80(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36472[iVar1 /*5*/].f_2;
}

int func_80(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36472[iVar0 /*5*/] == iParam0)
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
		if (iParam0 == Global_36472[iVar0 /*5*/].f_1)
		{
			return Global_36472[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_82()
{
	int iVar0;
	
	if (Local_55.f_0 == -2)
	{
		return -2;
	}
	if (Local_55.f_0 == -1)
	{
		return -1;
	}
	iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
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
	if (bLocal_50)
	{
		return;
	}
	if (!func_84())
	{
		Local_60.f_0 = 5;
		Local_55.f_2 = unk_0x83666F9FB8FEBD4B() + 5000;
		return;
	}
	Local_60.f_0 = 6;
}

bool func_84()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (Local_43.f_4 == 0)
	{
		return 0;
	}
	if (unk_0x76B2D234F1895632(Local_43.f_4))
	{
		return 0;
	}
	Var0 = { unk_0x1141852D07400777(Local_43.f_1, 1) };
	Var3 = { unk_0x1141852D07400777(Local_43.f_4, 1) };
	fVar6 = unk_0xF18329472591CFE6(Var0, Var3, 1);
	return fVar6 < 7f;
}

void func_85()
{
	int iVar0;
	char* sVar1;
	
	if (Local_43.f_1 == unk_0xE7869D5D7816A9B6())
	{
		unk_0x8CCCC48313B0F20F(0, 36, 1);
		if (unk_0x9FB2F45912EB7218(Local_43.f_1))
		{
			if (Global_36472[iLocal_64 /*5*/].f_2 == 0 || Global_36472[iLocal_64 /*5*/].f_2 == 2)
			{
				unk_0xA3A83FA0784C86DE(Local_43.f_1, 0, 0);
			}
		}
		if (unk_0xE9A68AC6DAD8AF48(Local_43.f_1))
		{
			unk_0x34DCA6051298B2F6(Local_43.f_1, 0);
		}
	}
	if (Local_55.f_0 != -2)
	{
		if (Local_55.f_0 == -1)
		{
			if (Global_36472[iLocal_64 /*5*/].f_2 != 0)
			{
				Global_36472[iLocal_64 /*5*/].f_2 = 0;
			}
		}
		else
		{
			iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
			if (iVar0 <= 0)
			{
				iVar0 = 0;
			}
			iVar0 = (iVar0 / 1000) + 1;
			if (Global_36472[iLocal_64 /*5*/].f_2 == 0)
			{
				if (iVar0 < 30)
				{
					Global_36472[iLocal_64 /*5*/].f_2 = 2;
					if (!func_71(2))
					{
						Global_36472[iLocal_64 /*5*/].f_2 = 0;
						return;
					}
				}
			}
			if (Global_36472[iLocal_64 /*5*/].f_2 == 2)
			{
				if (iVar0 < 10)
				{
					Global_36472[iLocal_64 /*5*/].f_2 = 1;
					if (!func_71(2))
					{
						Global_36472[iLocal_64 /*5*/].f_2 = 2;
						return;
					}
				}
			}
			if (Global_36472[iLocal_64 /*5*/].f_2 == 1)
			{
			}
		}
	}
	else
	{
		return;
	}
	if (!unk_0xF6917DE0E003509D(sLocal_54))
	{
		if (!func_74(Local_43.f_1))
		{
			sVar1 = "MOVE_M@DRUNK@TRANSITIONS";
			if (unk_0x23417CDB252083F9(Local_43.f_1, sVar1, sLocal_54, 3))
			{
				unk_0x91BC1C1D86377CB9(Local_43.f_1, sVar1, sLocal_54, -4f);
			}
			sLocal_54 = "";
			return;
		}
	}
	if (Global_36472[iLocal_64 /*5*/].f_3 >= 10 || Global_36472[iLocal_64 /*5*/].f_4 >= 15)
	{
		if (unk_0xC47857E5E74EA5AF(Local_43.f_1, 1785177548) == 1)
		{
			return;
		}
		if (unk_0xB43400C480010FCA(Local_43.f_1))
		{
			return;
		}
		if (unk_0x51374A0BB2871E6E(Local_43.f_1, 1))
		{
			if (Global_36472[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_36472[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_36472[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_36472[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		Local_60.f_1 = 3;
		return;
	}
	if (!bLocal_51)
	{
		return;
	}
	if (!func_78(Local_43.f_1))
	{
		return;
	}
}

int func_86()
{
	int iVar0;
	
	if (!unk_0x471E33531AEA977D(Local_43.f_1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = unk_0xF0295FF51F2D7803(Local_43.f_1, 0);
	if (!unk_0xC45A34912542C4EB(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0xBD6B21D725712BDE(iVar0, -1) == Local_43.f_1)
	{
		return 0;
	}
	Local_43.f_4 = iVar0;
	Local_60.f_0 = 7;
	return 1;
}

void func_87()
{
	if (!unk_0x51374A0BB2871E6E(Local_43.f_1, 0))
	{
		Local_60.f_0 = 4;
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
	
	if (!bLocal_50)
	{
		return;
	}
	if (!unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		return;
	}
	if (!unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6()))
	{
		return;
	}
	if (unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0))
	{
		return;
	}
	iVar0 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
	fVar1 = unk_0xD4F0FC8FFEDE152B(iVar0);
	if (fVar1 < 5f)
	{
		return;
	}
	Var2 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) };
	Var5 = { Var2 - Vector(3f, 30f, 30f) };
	Var8 = { Var2 + Vector(3f, 30f, 30f) };
	if (!unk_0x9C591E519D409699(Var5, Var8) && !unk_0x3498640250A18717(Var5, Var8))
	{
		return;
	}
	unk_0xFBDF63459A604D13(unk_0x3F80C6638E3A1A90(), 1, 0);
	unk_0x6FF6F40CA433340F(unk_0x3F80C6638E3A1A90(), 0);
	func_8(73, 1);
}

void func_89()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = Local_43.f_1;
	if (unk_0x51374A0BB2871E6E(Local_43.f_1, 0))
	{
		iVar1 = unk_0xF0295FF51F2D7803(Local_43.f_1, 0);
		iVar2 = unk_0xBD6B21D725712BDE(iVar1, -1);
		if (!iVar2 == Local_43.f_1)
		{
			return;
		}
		if (unk_0x00AAD79B42B3E036() && !unk_0x9B5F286CC8377932(iVar1))
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!unk_0xE7869D5D7816A9B6() == Local_43.f_1)
	{
		return;
	}
	else if (!unk_0xF19E031C976C0F00() == 4)
	{
		fLocal_53 = 0f;
		func_91(iVar0, 0f);
		return;
	}
	if (unk_0x83666F9FB8FEBD4B() < Local_55.f_4)
	{
		func_91(iVar0, fLocal_53);
		return;
	}
	if (unk_0x41B17741CACC905E(iVar0))
	{
		Local_55.f_4 = unk_0x83666F9FB8FEBD4B() + 2000;
	}
	else
	{
		Local_55.f_4 = unk_0x83666F9FB8FEBD4B() + 1000;
	}
	fVar3 = unk_0xD4F0FC8FFEDE152B(iVar0);
	if (fVar3 < 0.04f)
	{
		fLocal_53 = 0f;
		func_91(iVar0, 0f);
		return;
	}
	if (Local_55.f_1 == -1)
	{
		fLocal_53 = func_90(iVar0, 0.13f, 0.06f);
	}
	else
	{
		iVar4 = (Local_55.f_1 - unk_0x83666F9FB8FEBD4B());
		if (iVar4 < 5000)
		{
			fLocal_53 = 0f;
		}
		else if (iVar4 < 15000)
		{
			fLocal_53 = func_90(iVar0, 0.05f, 0.02f);
		}
		else if (iVar4 < 30000)
		{
			fLocal_53 = func_90(iVar0, 0.07f, 0.03f);
		}
		else if (iVar4 < 45000)
		{
			fLocal_53 = func_90(iVar0, 0.09f, 0.04f);
		}
		else if (iVar4 < 600000)
		{
			fLocal_53 = func_90(iVar0, 0.1f, 0.05f);
		}
		else
		{
			fLocal_53 = func_90(iVar0, 0.13f, 0.06f);
		}
	}
	func_91(iVar0, fLocal_53);
}

float func_90(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = unk_0x8AF26D6D6BBE6931(-fParam1, fParam1);
	fVar1 = unk_0x8AF26D6D6BBE6931(0f, fParam2);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 - fVar1);
	}
	else
	{
		fVar0 = (fVar0 + fVar1);
	}
	if (unk_0x41B17741CACC905E(iParam0))
	{
		if (unk_0x25AE83AAAFB359D8(unk_0x10E754B2E0DF2A70(iParam0)))
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
		iVar2 = unk_0x1B2DC87EFB36DF80(iParam0);
		if (unk_0x07C6F7E084F6A97E(iVar2))
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
	if (unk_0x00AAD79B42B3E036() && !unk_0x9B5F286CC8377932(iParam0))
	{
		return;
	}
	if (unk_0x41B17741CACC905E(iParam0))
	{
		unk_0x891E5B6EFE1D2B7B(unk_0x10E754B2E0DF2A70(iParam0), fParam1);
	}
	else if (unk_0x8C1ED5BB2888BA25(iParam0))
	{
		unk_0x8B0B2B109668AA4F(unk_0xE59FAD6B5E1AA42D(iParam0), fParam1);
	}
}

void func_92()
{
	int iVar0;
	
	if (!unk_0x51374A0BB2871E6E(Local_43.f_1, 0))
	{
		Local_60.f_0 = 4;
		return;
	}
	if (unk_0x00AAD79B42B3E036())
	{
		if (Global_36472[iLocal_64 /*5*/].f_3 >= 10 || Global_36472[iLocal_64 /*5*/].f_4 >= 15)
		{
			if (Global_36472[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_36472[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_36472[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_36472[iLocal_64 /*5*/].f_4 = 14;
			}
		}
	}
	if (bLocal_50)
	{
		return;
	}
	iVar0 = unk_0xF0295FF51F2D7803(Local_43.f_1, 0);
	if (!unk_0xC45A34912542C4EB(iVar0, 0))
	{
		unk_0xCD7A5BCC47D00FB2(Local_43.f_1, 0, 0);
		Local_60.f_0 = 11;
		return;
	}
}

void func_93()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x83666F9FB8FEBD4B() <= Local_55.f_3)
	{
		return;
	}
	iVar0 = unk_0xC47857E5E74EA5AF(unk_0xE7869D5D7816A9B6(), 355471868);
	if (!iVar0 == 7)
	{
		Local_55.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
		return;
	}
	if (!unk_0x51374A0BB2871E6E(Local_43.f_1, 0))
	{
		Local_60.f_0 = 4;
		Local_55.f_3 = -2;
		return;
	}
	iVar1 = unk_0xF0295FF51F2D7803(Local_43.f_1, 0);
	iVar2 = unk_0xBD6B21D725712BDE(iVar1, -1);
	if (iVar2 == Local_43.f_1)
	{
		func_94();
		Local_55.f_3 = -2;
		return;
	}
	unk_0xC2A2954BCE7E747B(Local_43.f_1, iVar1);
	Local_60.f_0 = 9;
	Local_55.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
}

void func_94()
{
	if (Local_60.f_0 == 10)
	{
		return;
	}
	Local_60.f_0 = 10;
	if (iLocal_48 == -1)
	{
		return;
	}
	func_124(iLocal_48, 2, 5);
	Local_55.f_4 = unk_0x83666F9FB8FEBD4B();
	fLocal_53 = 0f;
}

void func_95()
{
	if (unk_0x471E33531AEA977D(Local_43.f_1))
	{
		Local_60.f_0 = 10;
		return;
	}
	if (unk_0x83666F9FB8FEBD4B() < Local_55.f_3)
	{
		return;
	}
	Local_60.f_0 = 4;
	Local_55.f_3 = -2;
}

void func_96()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (!bLocal_50)
	{
	}
	iVar0 = 0;
	bVar1 = false;
	if (bVar1 || unk_0x471E33531AEA977D(Local_43.f_1))
	{
		if (!bLocal_50)
		{
		}
		iVar0 = unk_0xF0295FF51F2D7803(Local_43.f_1, 0);
		if (!iVar0 == Local_43.f_4)
		{
			if (!bLocal_50)
			{
			}
			if (!bLocal_50)
			{
				if (!bLocal_50)
				{
				}
				unk_0xCD7A5BCC47D00FB2(Local_43.f_1, 0, 0);
				Local_60.f_0 = 11;
				return;
			}
			Local_43.f_4 = iVar0;
		}
		if (bVar1)
		{
			if (!bLocal_50)
			{
			}
			func_94();
			return;
		}
		if (!bLocal_50)
		{
			if (!bLocal_50)
			{
			}
			func_94();
			return;
		}
		if (!bLocal_50)
		{
		}
		iVar2 = unk_0xBD6B21D725712BDE(Local_43.f_4, -1);
		if (iVar2 == Local_43.f_1)
		{
			func_94();
			return;
		}
		unk_0xC2A2954BCE7E747B(Local_43.f_1, iVar0);
		Local_60.f_0 = 9;
		Local_55.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
		return;
	}
	if (!func_84())
	{
		unk_0xFA2C5C2D054C888E(Local_43.f_1);
		Local_60.f_0 = 4;
		return;
	}
	if (!bLocal_50)
	{
		iVar3 = unk_0xC47857E5E74EA5AF(Local_43.f_1, -1794415470);
		if (iVar3 == 7)
		{
			if (!unk_0x51374A0BB2871E6E(Local_43.f_1, 0))
			{
				unk_0xFA2C5C2D054C888E(Local_43.f_1);
				Local_60.f_0 = 4;
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
	
	if (bLocal_50)
	{
		return;
	}
	if (Local_43.f_4 == 0)
	{
		Local_60.f_0 = 4;
		return;
	}
	if (!unk_0xC45A34912542C4EB(Local_43.f_4, 0))
	{
		Local_43.f_4 = 0;
		Local_60.f_0 = 4;
		return;
	}
	Var0 = { unk_0x1141852D07400777(Local_43.f_1, 1) };
	Var3 = { unk_0x1141852D07400777(Local_43.f_4, 1) };
	fVar6 = unk_0xF18329472591CFE6(Var0, Var3, 1);
	if (fVar6 > 3f)
	{
		if (!func_71(Global_36472[iLocal_64 /*5*/].f_2))
		{
			Local_60.f_0 = 12;
			return;
		}
		Local_60.f_0 = 5;
		Local_55.f_2 = unk_0x83666F9FB8FEBD4B() + 2000;
		return;
	}
	iVar7 = unk_0x25ECA1DD55F6CB7F(Local_43.f_4);
	iVar8 = 0;
	bVar9 = true;
	iVar8 = 1;
	while (bVar9)
	{
		if (iVar8 < iVar7)
		{
			if (unk_0xD12071DBE8393EC8(Local_43.f_4, iVar8))
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
			Local_60.f_0 = 4;
			return;
		}
	}
	func_98();
	unk_0x65682335D54DEA1C(Local_43.f_1, Local_43.f_4, -1, iVar8, 1073741824, 1, 0);
	Local_60.f_0 = 7;
}

void func_98()
{
	if (!unk_0xD51CFE69539DB6D8(Local_43.f_1))
	{
		return;
	}
	if (!unk_0xAF437D7C802AB246(Local_43.f_1))
	{
		unk_0xC456353A87F0538B(Local_43.f_1, 1048576000);
		unk_0x31571B9851A59054(Local_43.f_1);
		unk_0xB1FD413192DFB74F(Local_43.f_1, 0, -1056964608);
		Local_60.f_2 = "";
		unk_0xB0A8FA9FE09B26AE(Local_43.f_1);
		unk_0xC31A3F1982C7B12B(Local_43.f_1, 200, 0);
		unk_0xC31A3F1982C7B12B(Local_43.f_1, 46, 0);
		unk_0xA6ED3077A967AC63(Local_43.f_1, 1);
		unk_0x7346544C767CFCBF(Local_43.f_1, 262144, 0);
		unk_0x5C7985EC72ABE63D(Local_43.f_1, 0);
	}
	if (!bLocal_51)
	{
		return;
	}
	bLocal_51 = false;
}

void func_99()
{
	if (unk_0x83666F9FB8FEBD4B() < Local_55.f_2)
	{
		func_85();
		return;
	}
	func_100();
	Local_55.f_2 = -2;
	Local_60.f_0 = 12;
}

int func_100()
{
	if (!func_78(Local_43.f_1))
	{
		return 0;
	}
	if (!bLocal_51)
	{
		return 0;
	}
	func_101(Local_43.f_1);
	Local_60.f_2 = "";
	return 1;
}

void func_101(int iParam0)
{
	unk_0xC456353A87F0538B(uParam0, 1048576000);
	unk_0xB1FD413192DFB74F(uParam0, 0, -1056964608);
	unk_0xC31A3F1982C7B12B(uParam0, 200, 0);
	unk_0xA6ED3077A967AC63(iParam0, 1);
	unk_0x7346544C767CFCBF(iParam0, 262144, 0);
	unk_0x5C7985EC72ABE63D(iParam0, 0);
}

void func_102()
{
	int iVar0;
	
	if (Local_55.f_0 == -1)
	{
		Global_36472[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36472[iLocal_64 /*5*/].f_3 < 3 && Global_36472[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_36472[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_36472[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_36472[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_36472[iLocal_64 /*5*/].f_2 = 1;
		}
	}
	if (unk_0x51374A0BB2871E6E(Local_43.f_1, 0))
	{
		Local_60.f_0 = 10;
		return;
	}
	if (func_78(Local_43.f_1))
	{
		Local_60.f_0 = 12;
		return;
	}
	if (Local_55.f_0 == -2)
	{
		return;
	}
	if (!func_71(Global_36472[iLocal_64 /*5*/].f_2))
	{
		return;
	}
	Local_60.f_0 = 12;
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
		iVar0 = Global_36553[iVar1 /*5*/].f_2;
		if (!iVar0 == 6)
		{
			if (Global_36553[iVar1 /*5*/].f_1 == iLocal_48)
			{
				func_106(iVar1);
				func_105(iVar1);
			}
			else if (Global_36553[iVar1 /*5*/].f_1 == 2)
			{
				if (!iLocal_49 == -1)
				{
					if (iLocal_49 == Global_36553[iVar1 /*5*/])
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
	Global_36553[iParam0 /*5*/] = -1;
	Global_36553[iParam0 /*5*/].f_1 = -1;
	Global_36553[iParam0 /*5*/].f_2 = 6;
	Global_36553[iParam0 /*5*/].f_3 = 0;
	Global_36553[iParam0 /*5*/].f_4 = 0;
}

void func_106(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_36553[iParam0 /*5*/].f_2;
	switch (iVar0)
	{
		case 1:
			func_131();
			break;
		
		case 2:
			func_110(Global_36553[iParam0 /*5*/].f_4);
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
	Local_60.f_1 = 2;
}

void func_108()
{
	int iVar0;
	
	Global_36472[iLocal_64 /*5*/].f_4++;
	if (Local_55.f_0 == -1)
	{
		Global_36472[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36472[iLocal_64 /*5*/].f_4 < 9 && Global_36472[iLocal_64 /*5*/].f_4 != 0)
	{
		Global_36472[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_36472[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_36472[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_36472[iLocal_64 /*5*/].f_2 = 1;
		}
		if (!func_78(Local_43.f_1))
		{
			func_71(Global_36472[iLocal_64 /*5*/].f_2);
		}
	}
}

void func_109()
{
	int iVar0;
	
	Global_36472[iLocal_64 /*5*/].f_3++;
	if (Local_55.f_0 == -1)
	{
		Global_36472[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36472[iLocal_64 /*5*/].f_3 < 3 && Global_36472[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_36472[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_36472[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_36472[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_36472[iLocal_64 /*5*/].f_2 = 1;
		}
		if (!func_78(Local_43.f_1))
		{
			func_71(Global_36472[iLocal_64 /*5*/].f_2);
		}
	}
}

void func_110(int iParam0)
{
	Local_43.f_3 = (Local_43.f_3 + iParam0);
	Local_43.f_2 = (Local_43.f_2 + iParam0);
	Local_55.f_1 = (Local_55.f_1 + iParam0);
	Local_55.f_0 = (Local_55.f_0 + iParam0);
}

void func_111()
{
	int iVar0;
	
	if (!bLocal_50)
	{
		iLocal_63 = -1;
		return;
	}
	if (iLocal_63 < 0)
	{
		iLocal_63 = unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90());
		return;
	}
	iVar0 = unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90());
	if (iVar0 != iLocal_63)
	{
		if (iVar0 > iLocal_63)
		{
			func_112();
		}
		iLocal_63 = iVar0;
		return;
	}
}

void func_112()
{
}

void func_113()
{
	if (!Local_55.f_0 == -1)
	{
		if (!Local_55.f_0 == -2)
		{
			if (unk_0x83666F9FB8FEBD4B() >= Local_55.f_0)
			{
				func_98();
				Local_55.f_0 = -2;
				Local_60.f_0 = 12;
			}
		}
		if (unk_0x83666F9FB8FEBD4B() > Local_55.f_1)
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
		if (iParam0 == Global_36553[iVar0 /*5*/])
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
	
	Local_60.f_0 = 4;
	if (!unk_0x76B2D234F1895632(Local_43.f_1))
	{
		if (unk_0x471E33531AEA977D(Local_43.f_1))
		{
			Local_60.f_0 = 10;
		}
	}
	if (bLocal_50)
	{
		func_122();
		func_8(71, 1);
		if (unk_0x00AAD79B42B3E036())
		{
			iVar0 = func_121(2046, -1, 0);
			iVar1 = (iVar0 / 10) + 1 * 10;
			if (iVar0 + 1 >= iVar1)
			{
				func_119(iVar1);
			}
			func_116(2046, iVar0 + 1, -1, 1);
		}
		else
		{
			iVar2 = 0;
			iVar3 = 0;
			iVar4 = 0;
			unk_0x56DCF5665F92F9BD(joaat("sp0_sp_num_times_drunk"), &iVar2, -1);
			unk_0x56DCF5665F92F9BD(joaat("sp1_sp_num_times_drunk"), &iVar3, -1);
			unk_0x56DCF5665F92F9BD(joaat("sp2_sp_num_times_drunk"), &iVar4, -1);
			iVar5 = ((iVar2 + iVar3) + iVar4);
			iVar6 = (iVar5 / 10) + 1 * 10;
			if (iVar5 + 1 >= iVar6)
			{
				func_119(iVar6);
			}
			switch (func_57())
			{
				case 0:
					unk_0x39DEDCCD70293F58(joaat("sp0_sp_num_times_drunk"), iVar2 + 1, 1);
					break;
				
				case 1:
					unk_0x39DEDCCD70293F58(joaat("sp1_sp_num_times_drunk"), iVar3 + 1, 1);
					break;
				
				case 2:
					unk_0x39DEDCCD70293F58(joaat("sp2_sp_num_times_drunk"), iVar4 + 1, 1);
					break;
				}
		}
		Local_60.f_1 = 1;
		return;
	}
	Local_60.f_1 = 12;
	if (Local_55.f_0 == -1)
	{
		Global_36472[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36472[iLocal_64 /*5*/].f_3 < 3 && Global_36472[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_36472[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar7 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar7 <= 0)
		{
			iVar7 = 0;
		}
		iVar7 = (iVar7 / 1000) + 1;
		Global_36472[iLocal_64 /*5*/].f_2 = 0;
		if (iVar7 < 30)
		{
			Global_36472[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar7 < 10)
		{
			Global_36472[iLocal_64 /*5*/].f_2 = 1;
		}
	}
}

void func_116(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466310[iParam0 /*5*/][func_117(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x39DEDCCD70293F58(iVar0, iParam1, iParam3);
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

var func_118()
{
	return Global_1312746;
}

void func_119(int iParam0)
{
	int iVar0;
	
	iVar0 = func_120(81);
	Global_2409757[iVar0 /*83*/] = 81;
	Global_2409757[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2409757[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_120(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2409757[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2409757[iVar1 /*83*/] == 0)
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
	uVar0 = Global_2466310[iParam0 /*5*/][func_117(iParam1)];
	if (unk_0x56DCF5665F92F9BD(uVar0, &uVar1, -1))
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
	Local_55.f_0 = Local_43.f_2;
	Local_55.f_1 = Local_43.f_3;
	Local_55.f_2 = -2;
	Local_55.f_3 = -2;
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
	Global_36553[iVar0 /*5*/] = iParam0;
	Global_36553[iVar0 /*5*/].f_1 = iParam1;
	Global_36553[iVar0 /*5*/].f_2 = iParam2;
	Global_36553[iVar0 /*5*/].f_3 = iParam3;
	Global_36553[iVar0 /*5*/].f_4 = iParam4;
}

int func_126()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36553[iVar0 /*5*/].f_2 == 6)
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
		if (iParam2 == Global_36553[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36553[iVar0 /*5*/])
			{
				if (iParam1 == Global_36553[iVar0 /*5*/].f_1)
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
	
	bLocal_50 = false;
	if (Local_43.f_1 == unk_0xE7869D5D7816A9B6())
	{
		bLocal_50 = true;
		Global_36668 = 1;
		Global_36670++;
	}
	if (!unk_0x76B2D234F1895632(Local_43.f_1))
	{
		iVar0 = func_60(Local_43.f_1);
		switch (iVar0)
		{
			case 17:
				unk_0x0814FB03E16A03C1(Local_43.f_1, "AMANDA_DRUNK");
				break;
			
			case 19:
				unk_0x0814FB03E16A03C1(Local_43.f_1, "LAMAR_DRUNK");
				break;
			}
	}
}

void func_130()
{
	if (!iLocal_48 == -1)
	{
		return;
	}
	iLocal_48 = func_81(Local_43.f_1);
	if (iLocal_48 == -1)
	{
		return;
	}
	iLocal_64 = func_80(iLocal_48);
}

void func_131()
{
	int iVar0;
	
	if (!func_26(0) && !func_26(3))
	{
		if (!unk_0x76B2D234F1895632(Local_43.f_1))
		{
			iVar0 = func_60(Local_43.f_1);
			if (Global_36472[iLocal_64 /*5*/].f_4 > 0)
			{
				switch (iVar0)
				{
					case 0:
						func_133(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 1:
						func_133(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 2:
						func_133(Local_43.f_1, "POST_STONED", 24);
						break;
					}
			}
			switch (iVar0)
			{
				case 17:
					unk_0x0814FB03E16A03C1(Local_43.f_1, "AMANDA_NORMAL");
					break;
				
				case 19:
					unk_0x0814FB03E16A03C1(Local_43.f_1, "LAMAR_NORMAL");
					break;
				}
			}
	}
	func_98();
	if (bLocal_50)
	{
		Global_36668 = 0;
	}
	func_132();
	unk_0x8B10CC9832827D27(func_77(0));
	unk_0x8B10CC9832827D27(func_77(2));
	unk_0x8B10CC9832827D27(func_77(1));
	Global_1713788 = 0;
	if (unk_0xFF6891E21E7FC193(joaat("appemail")) > 0)
	{
		func_33(0);
	}
	unk_0x52F20802944F8DCE();
}

void func_132()
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (unk_0x76B2D234F1895632(Local_43.f_1))
	{
		return;
	}
	uVar0 = Local_43.f_1;
	if (unk_0x51374A0BB2871E6E(Local_43.f_1, 0))
	{
		uVar1 = unk_0xF0295FF51F2D7803(Local_43.f_1, 0);
		iVar2 = unk_0xBD6B21D725712BDE(uVar1, -1);
		if (!Local_43.f_1 == iVar2)
		{
			return;
		}
		uVar0 = iVar1;
	}
	else if (!unk_0xF19E031C976C0F00() == 4 || !unk_0xE7869D5D7816A9B6() == Local_43.f_1)
	{
		return;
	}
	fLocal_53 = 0f;
	func_91(uVar0, 0f);
}

void func_133(var uParam0, char* sParam1, int iParam2)
{
	unk_0x489E3B00AFB0758C(uParam0, sParam1, func_134(iParam2), 1);
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

