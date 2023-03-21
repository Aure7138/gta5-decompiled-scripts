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
	if (unk_0x78BF2001491914AC(2))
	{
		func_145();
	}
	Local_43 = { ScriptParam_0 };
	func_144();
	func_143();
	func_138(iLocal_48, 0, 0);
	unk_0xC1B1E9A034A63A62(0);
	func_137();
	func_133();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_132(iLocal_48);
		func_131();
		func_129();
		func_122();
		func_138(iLocal_48, 0, 0);
		func_144();
		func_6();
		if ((unk_0x591AF4C50B46E014() && !unk_0x1B154DE2D4606530()) && !func_5())
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
	Global_2445217.f_635 = 1;
}

var func_3()
{
	return Global_2445217.f_614;
}

bool func_4()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445217.f_2, 11);
}

bool func_5()
{
	return unk_0xAA4F14DA15DB0B51(Global_2445989.f_1.f_2810, 3);
}

void func_6()
{
	bool bVar0;
	
	if (unk_0xA9A04898798AE9E6(Local_43.f_1, 0))
	{
		func_145();
	}
	if (bLocal_50)
	{
		if (!unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			func_145();
		}
	}
	func_121();
	bVar0 = true;
	switch (Local_60.f_0)
	{
		case 4:
			func_120();
			return;
		
		case 5:
			func_117();
			return;
		
		case 6:
			func_115();
			return;
		
		case 7:
			func_114();
			return;
		
		case 8:
			func_113();
			return;
		
		case 9:
			func_111();
			return;
		
		case 10:
			func_110();
			func_107();
			func_106();
			return;
		
		case 11:
			func_105();
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
			if (!func_104())
			{
				func_103();
				func_107();
			}
			break;
		
		case 2:
			func_101();
			break;
		
		case 12:
			func_88();
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
	
	unk_0x75B422932674CA38(Local_43.f_1, 3000, 3500, 0, 1, 1, 0);
	Global_1770274 = 1;
	if (!unk_0xF4EE9D6C8E60AE22())
	{
		unk_0x5BFE0E837BA0AF60(2500);
		while (unk_0xEF08C8E0C4679477())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (unk_0x591AF4C50B46E014())
	{
		func_81(unk_0x0FFED3E94261A832(), 0, 57344);
		Global_2404996.f_2464 = 1;
		if (unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0))
		{
			Global_2404996.f_2465 = 1;
		}
		else
		{
			Global_2404996.f_2465 = 0;
		}
		if (unk_0x4055CAB247B1B43C())
		{
			unk_0xA701CFE8692AB746(0);
		}
		if (func_77(1))
		{
			func_64(0);
		}
		func_62(1);
		func_145();
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
	if (!unk_0xA9A04898798AE9E6(Local_43.f_1, 0))
	{
		unk_0x8E979F037EACE55A(Local_43.f_1, Var1.f_5, 1, 0, 0, 1);
	}
	unk_0x4EDE34FBADD967A6(500);
	StringCopy(&(Var1.f_11), "", 16);
	Var1.f_15 = -1f;
	func_9(sVar0, &Var1, "");
	func_8(126, 1);
	func_145();
}

void func_8(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51596[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x591AF4C50B46E014())
	{
		return;
	}
	if (Global_51596[iParam0 /*7*/])
	{
		unk_0xC225A90A8DE0D96B(Global_51596[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xC94674712BED1A82(Global_51596[iParam0 /*7*/].f_1, iVar0, 1);
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
	unk_0x73EC54DB6766EF37(unk_0x0FFED3E94261A832(), false, 0);
	if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		unk_0xF65C7766FB8D4B2C(unk_0x2A5EB8B0FE590B91(), 1);
	}
	unk_0x99A1B2A6A88FE2E6(uParam1->f_5, 4500f);
	unk_0x210F5AFEA3FCB52E(uParam1->f_5, 4500f);
	unk_0x333EF04F1A5ADEB5(uParam1->f_5, 5f, 1, 0, 0, 0);
	unk_0x8E979F037EACE55A(unk_0x2A5EB8B0FE590B91(), uParam1->f_5, 1, 0, 0, 1);
	unk_0xA32D9C84C1A93920(unk_0x2A5EB8B0FE590B91(), true);
	unk_0x4EDE34FBADD967A6(0);
	unk_0x8850034223654421(1);
	unk_0xA7C81DED990D3418(*uParam1);
	if (unk_0x58478145CAF8429C(uParam1->f_16))
	{
	}
	else
	{
		unk_0xA7C81DED990D3418(uParam1->f_16);
	}
	if (!unk_0xF4EE9D6C8E60AE22())
	{
		unk_0x5BFE0E837BA0AF60(0);
	}
	func_47(uParam1->f_5, uParam1->f_8.f_2, 0, 1);
	if (!unk_0xF4EE9D6C8E60AE22())
	{
		unk_0x5BFE0E837BA0AF60(0);
	}
	iVar1 = unk_0x3732B96D7A1859B4() + 20000;
	bVar2 = false;
	uParam1->f_33 = 0;
	while (!bVar2 && iVar1 > unk_0x3732B96D7A1859B4())
	{
		bVar2 = true;
		unk_0xA7C81DED990D3418(*uParam1);
		if (!unk_0x45834D6C20FFF689(*uParam1))
		{
			bVar2 = false;
		}
		if (!unk_0x58478145CAF8429C(uParam1->f_16))
		{
			unk_0xA7C81DED990D3418(uParam1->f_16);
			if (!unk_0x45834D6C20FFF689(uParam1->f_16))
			{
				bVar2 = false;
			}
		}
		if (!unk_0xF4EE9D6C8E60AE22())
		{
			unk_0x5BFE0E837BA0AF60(0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_44();
	if (!func_43(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		unk_0xC6F725F28C08FC0B(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 0, 1);
		unk_0x17F1CA1754EDB8DB(uParam1->f_5 + uParam1->f_19, (unk_0x652D2EEEF1D3E62C(uParam1->f_22) + 25f), 0, 0, 0, 0, 0);
		unk_0x333EF04F1A5ADEB5(uParam1->f_5 + uParam1->f_19, (unk_0x652D2EEEF1D3E62C(uParam1->f_22) + 25f), 1, 0, 0, 0);
	}
	if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		unk_0x03D9764FF0074A2E(unk_0x0FFED3E94261A832());
		unk_0x1776A639860985BF(unk_0x2A5EB8B0FE590B91(), joaat("weapon_unarmed"), 1);
		unk_0x5DE3EC94E90BB96F(unk_0x2A5EB8B0FE590B91());
	}
	unk_0xA32D9C84C1A93920(unk_0x2A5EB8B0FE590B91(), false);
	unk_0x8850034223654421(0);
	unk_0x333EF04F1A5ADEB5(uParam1->f_5, 15f, 1, 0, 0, 0);
	unk_0xE3087EC14D6AE1FC();
	unk_0xF3B025C389AA4CDE();
	func_41();
	while (func_40())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x0B21CC5276C2CE1B() && !unk_0x9AF3AC4F52023B45())
	{
		unk_0x9B0467159FAB9F56(250);
	}
	unk_0x4B41BFF3249EA7CC(1);
	if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		iVar4 = unk_0x6D46C949A32B8D73(uParam1->f_5, uParam1->f_8, 2);
		unk_0xA2218E1CAB0028A5(iVar4, 0);
		unk_0xEE68E88B8F41075D(iVar4, 0);
		uVar5 = unk_0x1FF428E592B6F928("DEFAULT_ANIMATED_CAMERA", 1);
		iVar6 = 4;
		if (uParam1->f_4 != joaat("MotionState_Idle"))
		{
			iVar6 |= 2;
		}
		func_38(unk_0x2A5EB8B0FE590B91(), uParam1->f_18);
		unk_0x5F778B8D6D7DF47B(unk_0x2A5EB8B0FE590B91(), iVar4, *uParam1, uParam1->f_1, 1000f, -1.5f, iVar6, 0, 1148846080, 0);
		unk_0xFFAD2D0349B662FC(unk_0x2A5EB8B0FE590B91(), 1);
		unk_0xF95BA28F306E110E(unk_0x0FFED3E94261A832(), 1);
		iVar3 = unk_0xDFB0689E65E50D74(unk_0x2A5EB8B0FE590B91(), 77);
		unk_0x3EFE40733EFB6649(unk_0x2A5EB8B0FE590B91(), 77, 1);
		unk_0x70D9DCACEFF60406(uVar5, iVar4, uParam1->f_2, *uParam1);
		unk_0xB9658EBA374EC2AD(1, 0, 3000, 1, 0, 0);
		if (!unk_0x58478145CAF8429C(uParam1->f_16) && !unk_0x58478145CAF8429C(uParam1->f_17))
		{
			unk_0xF1C3427BFED79E6B(unk_0x2A5EB8B0FE590B91(), uParam1->f_16, uParam1->f_17, 1000f, -1.5f, 10000, 33, 0, 0, 0, 0);
		}
	}
	else
	{
		iVar4 = -1;
	}
	if (!uParam1->f_25)
	{
		if (!unk_0x58478145CAF8429C(sParam2))
		{
			func_37(sParam2, -1);
			uParam1->f_25 = 1;
		}
	}
	bVar7 = false;
	bVar8 = false;
	uVar9 = 16;
	if (!unk_0x58478145CAF8429C(&(uParam1->f_11)))
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
		func_36(&uVar9, iVar175, unk_0x2A5EB8B0FE590B91(), sVar176, 0, 1);
	}
	if (unk_0x354ACA1BAED67927(iVar4))
	{
		sVar177 = "WalkInterruptible";
		sVar178 = "ForceBlendout";
		while (unk_0x354ACA1BAED67927(iVar4) && !unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (!bVar8)
			{
				if (!unk_0xF4EE9D6C8E60AE22())
				{
					if (!unk_0x58478145CAF8429C(uParam1->f_26))
					{
						unk_0x18A0B296F4932A7B(uParam1->f_26, 0, 0);
						bVar8 = true;
					}
					if (!unk_0x58478145CAF8429C(uParam1->f_27))
					{
						if (!unk_0x58478145CAF8429C(uParam1->f_28))
						{
							unk_0x08BE237DBCD9CBD9(-1, uParam1->f_28, uParam1->f_27, 0);
							bVar8 = true;
						}
						if (!unk_0x58478145CAF8429C(uParam1->f_29))
						{
							unk_0x08BE237DBCD9CBD9(-1, uParam1->f_29, uParam1->f_27, 0);
							bVar8 = true;
						}
					}
				}
			}
			unk_0x9BF32B79391A5A8E();
			unk_0x47BFFB0507046AE3(18);
			unk_0x462C68609AD0288A();
			func_32(0);
			iVar179 = unk_0x3732B96D7A1859B4();
			if (iVar179 >= (Global_36364 - 500))
			{
				func_31(4000);
			}
			fVar180 = -1f;
			fVar181 = -1f;
			fVar0 = unk_0x58DF249E321EAB8E(iVar4);
			if (!unk_0x58478145CAF8429C(&(uParam1->f_11)))
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
			if (unk_0xBACC7F03AA5D0762(unk_0x2A5EB8B0FE590B91(), unk_0xCAEDBF30E3EA14FC(sVar177)))
			{
				iVar183 = (unk_0x86926C56FD96A3D6(2, 195) - 128);
				iVar184 = (unk_0x86926C56FD96A3D6(2, 196) - 128);
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
			if (unk_0xAD69426B73C6E186() == 4 && uParam1->f_52 > 0f)
			{
				if (fVar0 >= uParam1->f_52)
				{
					if (!uParam1->f_32)
					{
						fVar185 = 1.5f;
						Var186 = { unk_0xB07517AFB94E5297() };
						Var189 = { unk_0x585F703DF3E83B6E(unk_0x2A5EB8B0FE590B91(), 31086, 0f, 0f, 0f) };
						fVar192 = unk_0x4A2E6F541CD8C36E(Var186, Var189, 1);
						fVar185 = func_18(fVar185, 0.001f, (fVar192 - 0.75f));
						if (fVar185 < 0f)
						{
							fVar185 = 0.001f;
						}
						func_17(&(uParam1->f_34), unk_0x2A5EB8B0FE590B91(), func_57(), 1E-06f, 300, 300, 0, 0, 1045220557);
						func_16(&(uParam1->f_34), uParam1->f_53);
						if (!uParam1->f_33)
						{
							uParam1->f_34 = 1;
							uParam1->f_34.f_7 = unk_0x3732B96D7A1859B4();
							uParam1->f_34.f_8 = 0;
							uParam1->f_33 = 1;
						}
						if (uParam1->f_57 == 999f)
						{
							uParam1->f_56 = 0f;
						}
						if (uParam1->f_57 == 999f)
						{
							Var195 = { unk_0xC46DA33A0FD218EA(2) };
							uVar198 = unk_0x6DAB28241B34DEED(unk_0x2A5EB8B0FE590B91());
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
						unk_0x61C3B2A4FEFA1D6D(fVar193, 1065353216);
						unk_0x164CA344DBD7B6F3(fVar194);
						unk_0xEDB98833CC644795(fVar193);
						unk_0x11D7C4527BF19595(fVar194);
						Var201 = { unk_0xB07517AFB94E5297() };
						Var204 = { unk_0x616AF251C179EE09() };
						fVar207 = unk_0x4A2E6F541CD8C36E(Var201, Var204, 1);
						iVar208 = unk_0xF2DB717A73826179((fVar207 * 1000f));
						uParam1->f_32 = 1;
					}
					if (uParam1->f_32)
					{
						unk_0xA77362B9F98B83CE();
						if (func_13(&(uParam1->f_34), 1, 1, 1, 0, 0, 0))
						{
						}
					}
				}
			}
			if (unk_0xBACC7F03AA5D0762(unk_0x2A5EB8B0FE590B91(), unk_0xCAEDBF30E3EA14FC(sVar178)) || iVar182)
			{
				if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
				{
					unk_0x654FFF4D16298AC5(unk_0x2A5EB8B0FE590B91());
					switch (uParam1->f_4)
					{
						case joaat("MotionState_Idle"):
							unk_0xAEE1122D64BCDB87(unk_0x2A5EB8B0FE590B91(), joaat("MotionState_Idle"), 1, 0, 0);
							unk_0x33AD80BA65BCEED6(0, 0, 3, 0);
							break;
						
						case joaat("MotionState_Walk"):
							unk_0xAEE1122D64BCDB87(unk_0x2A5EB8B0FE590B91(), joaat("MotionState_Walk"), 1, 0, 0);
							unk_0xBA338CFC66A5608A(unk_0x0FFED3E94261A832(), 1f, 500, 0, 1, 0);
							if (unk_0xAD69426B73C6E186() != 4)
							{
								if (uParam1->f_31 == 999f)
								{
									uParam1->f_30 = 0f;
								}
								if (uParam1->f_31 == 999f)
								{
									Var211 = { unk_0xC46DA33A0FD218EA(2) };
									uVar214 = unk_0x6DAB28241B34DEED(unk_0x2A5EB8B0FE590B91());
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
								unk_0x61C3B2A4FEFA1D6D(fVar209, 1065353216);
								unk_0x164CA344DBD7B6F3(fVar210);
								Var217 = { unk_0xB07517AFB94E5297() };
								Var220 = { unk_0x616AF251C179EE09() };
								fVar223 = unk_0x4A2E6F541CD8C36E(Var217, Var220, 1);
								iVar224 = unk_0xF2DB717A73826179((fVar223 * 1000f));
								unk_0xB9658EBA374EC2AD(0, 1, iVar224, 0, 0, 0);
							}
							break;
						
						default:
							break;
					}
					if (unk_0x354ACA1BAED67927(iVar4))
					{
						unk_0xD7F06E2E754C9345(iVar4);
						iVar4 = -1;
					}
				}
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (!func_43(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		unk_0xE5D346CBE75AD979(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 1);
	}
	unk_0x73EC54DB6766EF37(unk_0x0FFED3E94261A832(), true, 0);
	if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		unk_0x654FFF4D16298AC5(unk_0x2A5EB8B0FE590B91());
	}
	bVar225 = unk_0x957D4A8D305FE55A();
	bVar226 = false;
	if (uParam1->f_32)
	{
		unk_0xA77362B9F98B83CE();
		if (!func_13(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
		{
			bVar226 = true;
		}
	}
	if (bVar225 || bVar226)
	{
		while ((bVar225 || bVar226) && !unk_0x0AFBA1AD6DC1C540())
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
			bVar225 = unk_0x957D4A8D305FE55A();
			bVar226 = false;
			if (uParam1->f_32)
			{
				unk_0xA77362B9F98B83CE();
				if (!func_13(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
				{
					bVar226 = true;
				}
			}
		}
	}
	if (!unk_0x58478145CAF8429C(uParam1->f_16))
	{
		unk_0x15167ADA0B7D44AE(uParam1->f_16);
	}
	unk_0x15167ADA0B7D44AE(*uParam1);
	unk_0x1E2E6AAAD9AE1286(uVar5, 0);
	func_10(&(uParam1->f_34));
	if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
	{
		unk_0x3EFE40733EFB6649(unk_0x2A5EB8B0FE590B91(), 77, iVar3);
		unk_0xF65C7766FB8D4B2C(unk_0x2A5EB8B0FE590B91(), 0);
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
	if (unk_0x9FA769EB6C3BCCE4(uParam0->f_1))
	{
		unk_0x1E2E6AAAD9AE1286(uParam0->f_1, 0);
	}
	if (unk_0x9FA769EB6C3BCCE4(uParam0->f_2))
	{
		unk_0x1E2E6AAAD9AE1286(uParam0->f_2, 0);
	}
	if (unk_0x9FA769EB6C3BCCE4(uParam0->f_3))
	{
		unk_0x1E2E6AAAD9AE1286(uParam0->f_3, 0);
	}
	if (unk_0x9FA769EB6C3BCCE4(uParam0->f_4))
	{
		unk_0x1E2E6AAAD9AE1286(uParam0->f_4, 0);
	}
}

void func_12(int iParam0, int iParam1, int iParam2)
{
	unk_0x4E6996123FABDB93(iParam0, iParam1, 1);
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
			if (!unk_0xA9A04898798AE9E6(uParam0->f_5, 0))
			{
				func_11(uParam0);
				Var0 = { unk_0xB07517AFB94E5297() };
				if (bParam1)
				{
					Var0 = { Var0 + unk_0x759F285D4B31C388(uParam0->f_5) * FtoV(unk_0xBCA469D44FBFAC80()) };
				}
				Var3 = { unk_0xABF3BF12B0129BAF(uParam0->f_5, Var0) };
				Var6 = { unk_0xC46DA33A0FD218EA(2) };
				Var9 = { Var6 + uParam0->f_9 };
				Var12 = { Var9 - unk_0x37C8136AF6C0BC9B(uParam0->f_5, 2) };
				Var15 = { (-unk_0x0BADBFA3B172435F(Var9.f_2) * unk_0xD0FFB162F40A139C(Var9.f_0)), (unk_0xD0FFB162F40A139C(Var9.f_2) * unk_0xD0FFB162F40A139C(Var9.f_0)), unk_0x0BADBFA3B172435F(Var9.f_0) };
				Var18 = { (-unk_0x0BADBFA3B172435F(Var12.f_2) * unk_0xD0FFB162F40A139C(Var12.f_0)), (unk_0xD0FFB162F40A139C(Var12.f_2) * unk_0xD0FFB162F40A139C(Var12.f_0)), unk_0x0BADBFA3B172435F(Var12.f_0) };
				uVar21 = unk_0x7500E7F1D6328310();
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = unk_0xCF3DF64B225054FA(1775630800, 0);
				}
				uParam0->f_1 = unk_0xCF3DF64B225054FA(26379945, 1);
				if (bParam1)
				{
					unk_0xFF739A843B6BF64D(uParam0->f_1, uParam0->f_5, Var3, 1);
				}
				else
				{
					unk_0xADF936AD56C4C4C0(uParam0->f_1, Var0);
				}
				unk_0x28BE4B7676B6AD67(uParam0->f_1, Var6, 2);
				unk_0x4DD38134E80D1D6A(uParam0->f_1, uVar21);
				uParam0->f_2 = unk_0xCF3DF64B225054FA(26379945, 1);
				if (bParam1 && !bParam4)
				{
					unk_0xFF739A843B6BF64D(uParam0->f_2, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12), 1);
				}
				else
				{
					unk_0xADF936AD56C4C4C0(uParam0->f_2, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12));
				}
				unk_0x28BE4B7676B6AD67(uParam0->f_2, Var6, 2);
				unk_0x4DD38134E80D1D6A(uParam0->f_2, uVar21);
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = unk_0xCF3DF64B225054FA(26379945, 1);
					if (bParam1 && !bParam4)
					{
						unk_0xFF739A843B6BF64D(uParam0->f_4, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13), 1);
					}
					else
					{
						unk_0xADF936AD56C4C4C0(uParam0->f_4, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13));
					}
					unk_0x28BE4B7676B6AD67(uParam0->f_4, Var6, 2);
					unk_0x4DD38134E80D1D6A(uParam0->f_4, uVar21);
				}
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					unk_0xFFCF0D977BB1BD72(uParam0->f_3, uParam0->f_1, 0, 2);
					if (iParam6 == 0)
					{
						unk_0xFFCF0D977BB1BD72(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
					}
					unk_0xFFCF0D977BB1BD72(uParam0->f_3, uParam0->f_2, (uParam0->f_14 - uParam0->f_17), 2);
					unk_0x19B877D574021B27(uParam0->f_3, iParam6);
					unk_0xD429163073BD3A47(uParam0->f_3, 1);
				}
				else
				{
					unk_0x8D1BBCBB0981EC8D(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
				unk_0xB9658EBA374EC2AD(1, 0, 3000, 1, 0, 0);
				uParam0->f_7 = unk_0x3732B96D7A1859B4();
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
					if (unk_0x3732B96D7A1859B4() >= (uParam0->f_7 + uParam0->f_16))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									unk_0x18A0B296F4932A7B("CamPushInFranklin", 0, 0);
									break;
								
								case 0:
									unk_0x18A0B296F4932A7B("CamPushInMichael", 0, 0);
									break;
								
								case 2:
									unk_0x18A0B296F4932A7B("CamPushInTrevor", 0, 0);
									break;
							}
						}
						else
						{
							unk_0x18A0B296F4932A7B("CamPushInNeutral", 0, 0);
						}
						unk_0x08BE237DBCD9CBD9(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						uParam0->f_8 = 1;
					}
				}
			}
			if (unk_0x3732B96D7A1859B4() >= (uParam0->f_7 + uParam0->f_15))
			{
				if (bParam2)
				{
					func_11(uParam0);
					unk_0xB9658EBA374EC2AD(0, 0, 3000, 1, 0, 0);
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
	unk_0x117BBA4FCB43C905();
	func_15();
}

void func_15()
{
	Global_17151.f_134 = 1;
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
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
	return func_20(sParam2, iParam3, 0);
}

int func_20(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xE40123A348A5FEDA(0);
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
					func_29();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x4FF1AD2B1A443280())
		{
			return 0;
		}
		if (func_28(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_27();
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
			unk_0x507FE690B1271947(&Global_2313, 20);
			unk_0x507FE690B1271947(&Global_2314, 17);
			unk_0x507FE690B1271947(&Global_2315, 0);
			if (bParam2)
			{
				func_25();
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
			if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
			{
				if (unk_0x42B388A818F85EF4(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (func_24())
				{
					return 0;
				}
				if (unk_0xAD69F971BA14B65A(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x62F5757271CA0B05(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x7D8FA69AD9D01A2B(unk_0x2A5EB8B0FE590B91()))
				{
					return 0;
				}
				if (unk_0x508B126813F83326(unk_0x2A5EB8B0FE590B91(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69800)
				{
					if (unk_0xABCF7EB00A727656(unk_0x2A5EB8B0FE590B91()))
					{
						return 0;
					}
					if (unk_0x63949B600E6C0045(unk_0x0FFED3E94261A832()))
					{
						return 0;
					}
					if (unk_0x523BFA385406F50B(unk_0x2A5EB8B0FE590B91()))
					{
						return 0;
					}
					if (unk_0xE5F2CA90CEBD5F63(unk_0x0FFED3E94261A832()))
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
				if (unk_0xAA4F14DA15DB0B51(Global_2313, 9))
				{
					return 0;
				}
			}
			func_22();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_21();
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
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xE40123A348A5FEDA(0);
	Global_15745 = 1;
}

void func_22()
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
	unk_0x507FE690B1271947(&Global_2314, 16);
}

int func_23()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_24()
{
	int iVar0;
	int iVar1;
	
	if (Global_69800)
	{
		iVar0 = 0;
		unk_0xE3B6C923999B844E(unk_0x2A5EB8B0FE590B91(), &iVar1, 1);
		if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x522AAFC27F0E320D() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		if (unk_0xEFB4328133A837C8(unk_0x2A5EB8B0FE590B91(), 78, 1))
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
		if (!unk_0xA9A04898798AE9E6(unk_0x2A5EB8B0FE590B91(), 0))
		{
			if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()) == Global_103236.f_27831[2 /*29*/])
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
		Global_14443 = func_57();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69800)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

bool func_26(int iParam0)
{
	return Global_35813 == iParam0;
}

void func_27()
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

bool func_28(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1351508.f_203[iParam1];
			}
			break;
	}
	return unk_0xAA4F14DA15DB0B51(Global_1351508.f_1048, iParam0);
}

void func_29()
{
	unk_0xA37D20A4B77452D4();
	Global_16756 = 0;
	if ((unk_0x3813EBE69CF8CAD2() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0xE40123A348A5FEDA(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x4FF1AD2B1A443280())
	{
		unk_0xE40123A348A5FEDA(1);
		Global_15745 = 6;
		return;
	}
}

void func_30(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15199 = { *uParam0 };
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = uParam5;
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

void func_31(int iParam0)
{
	Global_36364 = (unk_0x3732B96D7A1859B4() + iParam0);
}

void func_32(int iParam0)
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_35(0))
		{
			func_33(iParam0);
		}
		unk_0xF6082E2ADA1C795B(&Global_2314, 2);
	}
}

void func_33(int iParam0)
{
	if (Global_14604)
	{
		func_34(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xF6082E2ADA1C795B(&Global_2314, 16);
	}
	if (unk_0x3813EBE69CF8CAD2())
	{
		unk_0xE40123A348A5FEDA(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xF6082E2ADA1C795B(&Global_2313, 30);
	}
	else
	{
		unk_0x507FE690B1271947(&Global_2313, 30);
	}
	if (!func_23())
	{
		Global_14443.f_1 = 3;
	}
}

void func_34(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_35(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0xE3812E52897ABBA5(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x24E41EE5A159D7A3(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x24E41EE5A159D7A3(Global_14380);
		}
		else
		{
			unk_0x24E41EE5A159D7A3(Global_14371);
		}
	}
}

int func_35(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xAA4F14DA15DB0B51(Global_2313, 14))
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
	if (unk_0x09952BA662A7629B(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
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
	if (!Global_69800)
	{
		if (!unk_0x769F0F6444C1ABE0(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x76DB40064D4A807D(iParam2, 0);
			}
			else
			{
				unk_0x76DB40064D4A807D(iParam2, 1);
			}
		}
		if (!unk_0x769F0F6444C1ABE0(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xD79CFA0051CBF471(iParam2, 0);
			}
			else
			{
				unk_0xD79CFA0051CBF471(iParam2, 1);
			}
		}
	}
}

void func_37(char* sParam0, int iParam1)
{
	unk_0x2D1CC533F8B39221(sParam0);
	unk_0xED95966D04271FDA(0, 0, 1, iParam1);
}

void func_38(int iParam0, var uParam1)
{
	if (func_39(uParam1, 1))
	{
		unk_0x73D448CD92654D6E(iParam0, "HOSPITAL_0", 0f, 1f);
	}
	if (func_39(uParam1, 2))
	{
		unk_0x73D448CD92654D6E(iParam0, "HOSPITAL_1", 0f, 1f);
	}
	if (func_39(uParam1, 4))
	{
		unk_0x73D448CD92654D6E(iParam0, "HOSPITAL_2", 0f, 1f);
	}
	if (func_39(uParam1, 8))
	{
		unk_0x73D448CD92654D6E(iParam0, "HOSPITAL_3", 0f, 1f);
	}
	if (func_39(uParam1, 16))
	{
		unk_0x73D448CD92654D6E(iParam0, "HOSPITAL_4", 0f, 1f);
	}
	if (func_39(uParam1, 32))
	{
		unk_0x73D448CD92654D6E(iParam0, "HOSPITAL_5", 0f, 1f);
	}
	if (func_39(uParam1, 64))
	{
		unk_0x73D448CD92654D6E(iParam0, "HOSPITAL_6", 0f, 1f);
	}
	if (func_39(uParam1, 128))
	{
		unk_0x73D448CD92654D6E(iParam0, "HOSPITAL_7", 0f, 1f);
	}
	if (func_39(uParam1, 256))
	{
		unk_0x73D448CD92654D6E(iParam0, "HOSPITAL_8", 0f, 1f);
	}
	if (func_39(uParam1, 512))
	{
		unk_0x73D448CD92654D6E(iParam0, "HOSPITAL_9", 0f, 1f);
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
	if (((Global_91777 == 13 || Global_91777 == 10) || Global_91777 == 11) || Global_91777 == 12)
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
		if (Global_88855[iVar0 /*17*/] && !Global_88855[iVar0 /*17*/].f_1)
		{
			if (Global_88855[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_88855[iVar0 /*17*/].f_5 != 88 && Global_88855[iVar0 /*17*/].f_5 != 89) && Global_88855[iVar0 /*17*/].f_5 != 92)
				{
					func_42(Global_88855[iVar0 /*17*/].f_5, 1);
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
			Global_85907[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85907[iParam0 /*2*/] = 0;
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
		iVar1 = Global_36747[iVar0 /*5*/];
		if (!iVar1 == -1)
		{
			func_138(1, iVar1, 1);
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_36721[iVar2 /*5*/] == 0)
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
	if (!Global_36721[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36721[iParam0 /*5*/].f_1 == unk_0x2A5EB8B0FE590B91())
		{
			Global_36942 = 0;
		}
	}
	Global_36721[iParam0 /*5*/] = 13;
	Global_36721[iParam0 /*5*/].f_1 = 0;
	Global_36721[iParam0 /*5*/].f_2 = 0;
	Global_36721[iParam0 /*5*/].f_3 = 0;
	Global_36721[iParam0 /*5*/].f_4 = 0;
	Global_36720 = (Global_36720 - 1);
	if (Global_36720 < 0)
	{
		Global_36720 = 0;
	}
}

int func_47(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	if (unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		func_51(0);
		unk_0x333EF04F1A5ADEB5(Param0, 5f, 1, 0, 0, 0);
		if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
		{
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				unk_0x8E979F037EACE55A(unk_0x2A5EB8B0FE590B91(), Param0, 1, 0, 0, 1);
				unk_0x2681BA3707AF6DA7(unk_0x2A5EB8B0FE590B91(), uParam3);
				unk_0x61C3B2A4FEFA1D6D(0f, 1065353216);
				unk_0x164CA344DBD7B6F3(0f);
			}
		}
		unk_0x137CC7FF3E681664(Param0, 4500f, 0);
		unk_0x4EDE34FBADD967A6(0);
		unk_0x333EF04F1A5ADEB5(Param0, 5000f, 1, 0, 0, 0);
		unk_0x4FF1902E8A10F154(Param0, 5000f, 0);
		unk_0x99A1B2A6A88FE2E6(Param0, 5000f);
		unk_0x210F5AFEA3FCB52E(Param0, 5000f);
		func_50();
		func_49();
		unk_0xC1B1E9A034A63A62(0);
		func_51(1);
		if (!unk_0xFD918707B1B07874())
		{
			while (!unk_0x137CC7FF3E681664(Param0, 4500f, 0))
			{
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					unk_0x8850034223654421(0);
					return 0;
				}
			}
		}
		unk_0xC1B1E9A034A63A62(0);
		while (!unk_0xAFCB22D9B08750BD())
		{
			unk_0x4EDE34FBADD967A6(0);
			if (unk_0x83666F9FB8FEBD4B() > 20000)
			{
				unk_0x8850034223654421(0);
				if (unk_0xFD918707B1B07874())
				{
					unk_0x39E6BFF51A22111E();
				}
				return 0;
			}
		}
		if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
		{
			if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
			{
				if (unk_0xFD918707B1B07874())
				{
					unk_0x39E6BFF51A22111E();
				}
				unk_0x8850034223654421(0);
				unk_0xC1B1E9A034A63A62(0);
				unk_0xE3087EC14D6AE1FC();
				if (iParam5 == 1)
				{
					unk_0xF3B025C389AA4CDE();
				}
				else
				{
					unk_0xC1B1E9A034A63A62(5000);
				}
				unk_0x7098DF060C4A975B();
			}
		}
		while ((!unk_0xDE99727431E49AF0() && !func_48()) && unk_0x83666F9FB8FEBD4B() < 1500)
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
			unk_0xE423CA97BB7EA540(Param0, &(Param0.f_2), 0);
			unk_0x333EF04F1A5ADEB5(Param0, 5f, 1, 0, 0, 0);
			if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
			{
				if (!unk_0x769F0F6444C1ABE0(unk_0x2A5EB8B0FE590B91()))
				{
					unk_0x8E979F037EACE55A(unk_0x2A5EB8B0FE590B91(), Param0, 1, 0, 0, 1);
					unk_0x2681BA3707AF6DA7(unk_0x2A5EB8B0FE590B91(), uParam3);
				}
			}
		}
		unk_0x61C3B2A4FEFA1D6D(0f, 1065353216);
		unk_0x164CA344DBD7B6F3(0f);
		func_51(0);
		return 1;
	}
	func_51(0);
	return 0;
}

bool func_48()
{
	return !Global_68628.f_553;
}

void func_49()
{
	Global_68628.f_553 = 1;
	Global_68628.f_554 = 0;
}

void func_50()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		Global_68628[iVar0] = 0;
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
			if (!unk_0xAA4F14DA15DB0B51(Global_91777.f_20, 2))
			{
				unk_0x8850034223654421(1);
				unk_0xF6082E2ADA1C795B(&(Global_91777.f_20), 2);
			}
		}
		else if (unk_0xAA4F14DA15DB0B51(Global_91777.f_20, 2))
		{
			unk_0x8850034223654421(0);
			unk_0x507FE690B1271947(&(Global_91777.f_20), 2);
		}
	}
}

int func_52()
{
	if (unk_0xAA4F14DA15DB0B51(unk_0x895FB9FE885E36ED(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

bool func_53(int iParam0)
{
	return unk_0xAA4F14DA15DB0B51(Global_103236.f_7010[iParam0], 0);
}

int func_54(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_103236.f_8866.f_99.f_58[iParam0];
}

int func_55()
{
	if (Global_33179[11] == 1)
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
	return Global_103236.f_8866.f_330[iParam0 /*6*/];
}

int func_57()
{
	func_58();
	return Global_103236.f_2164.f_539.f_4301;
}

void func_58()
{
	int iVar0;
	
	if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
	{
		if (func_61(Global_103236.f_2164.f_539.f_4301) != unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()))
		{
			iVar0 = func_60(unk_0x2A5EB8B0FE590B91());
			if (func_59(iVar0) && (!func_26(14) || Global_102188))
			{
				if (Global_103236.f_2164.f_539.f_4301 != iVar0 && func_59(Global_103236.f_2164.f_539.f_4301))
				{
					Global_103236.f_2164.f_539.f_4302 = Global_103236.f_2164.f_539.f_4301;
				}
				Global_103236.f_2164.f_539.f_4303 = iVar0;
				Global_103236.f_2164.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_103236.f_2164.f_539.f_4301 != 145)
			{
				Global_103236.f_2164.f_539.f_4303 = Global_103236.f_2164.f_539.f_4301;
			}
			return;
		}
	}
	Global_103236.f_2164.f_539.f_4301 = 145;
}

bool func_59(int iParam0)
{
	return iParam0 < 3;
}

int func_60(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x2137828D03306CAF(iParam0))
	{
		iVar1 = unk_0xD3B21CE53AA7BE51(iParam0);
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
		return Global_103236.f_27831[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_62(bool bParam0)
{
	unk_0x9BCFE282549F0ABE(0f);
	unk_0xCA4458A7A267D61B(0f);
	unk_0xFAF41D405DD88AC2(0f);
	unk_0x7FAF8FA8166834A7(1);
	unk_0x22E814CEA7509B2E(0f);
	unk_0x32F2CFA05392F66B(1);
	unk_0xA007078AA477CB5C(0);
	if (unk_0x8BEECCAAE312A5BA("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0x40F160C3038ECAF5("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0x58478145CAF8429C(&Global_36922))
	{
		if (unk_0x8BEECCAAE312A5BA(&Global_36922))
		{
			unk_0x40F160C3038ECAF5(&Global_36922);
		}
	}
	if (unk_0x9FA769EB6C3BCCE4(Global_36911))
	{
		if (unk_0x1CD1490177850A31(Global_36911))
		{
			unk_0x16EC2DD3A07898B9(Global_36911, 0f);
			unk_0xBE51678DF2A99288(Global_36911, 1);
		}
	}
	if (unk_0x4055CAB247B1B43C())
	{
		unk_0xA701CFE8692AB746(0);
	}
	if (bParam0)
	{
		if (unk_0x134E720A17978737() != -1 || unk_0xE5A09C695A824354() != -1)
		{
			unk_0x64418B7144C47685();
		}
		else if (unk_0x0AFBA1AD6DC1C540())
		{
			unk_0x64418B7144C47685();
		}
	}
	Global_36917 = 0f;
	StringCopy(&Global_36918, "", 16);
	StringCopy(&Global_36922, "", 64);
	StringCopy(&Global_36938, "", 16);
	func_63();
}

void func_63()
{
	Global_36910 = 0;
	Global_36911 = 0;
	Global_36912 = 0;
	Global_36913 = 30000;
	Global_36914 = 0f;
	Global_36916 = 0f;
	Global_36915 = 0f;
	Global_36917 = 0f;
	StringCopy(&Global_36918, "", 16);
}

void func_64(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_262145.f_16240;
			break;
		
		case 1:
			iVar0 = Global_262145.f_16230;
			break;
		
		case 2:
			iVar0 = Global_262145.f_16241;
			break;
		
		case 3:
			iVar0 = Global_262145.f_16233;
			break;
		
		case 4:
			iVar0 = Global_262145.f_16229;
			break;
		
		case 6:
			iVar0 = 3;
			break;
		
		case 7:
			iVar0 = Global_262145.f_16244;
			break;
		
		case 8:
			iVar0 = Global_262145.f_16245;
			break;
		
		case 9:
			iVar0 = Global_262145.f_16248;
			break;
		
		case 22:
			iVar0 = Global_262145.f_16249;
			break;
		
		case 23:
			iVar0 = Global_262145.f_16242;
			break;
		
		case 25:
			iVar0 = Global_262145.f_17130;
			break;
		
		case 26:
			iVar0 = Global_262145.f_17129;
			break;
	}
	if (iVar0 != 0)
	{
		unk_0xEE4C451D799A4C78(func_75(func_76()), func_73(func_76()), func_72(), func_71(), iParam0, iVar0);
	}
	func_70(iVar0);
	func_65(iVar0);
}

void func_65(int iParam0)
{
	int iVar0;
	
	iVar0 = func_69(3943, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11.f_357 = iVar0;
	func_66(3943, iVar0, -1, 1, 0);
}

void func_66(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2507378[iParam0 /*3*/][func_67(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xC94674712BED1A82(iVar0, iParam1, iParam3);
	}
}

int func_67(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_68();
		if (iVar1 > -1)
		{
			Global_2507091 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2507091 = 1;
		}
	}
	return iVar0;
}

var func_68()
{
	return Global_1312735;
}

int func_69(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2507378[iParam0 /*3*/][func_67(iParam1)];
	if (unk_0xC225A90A8DE0D96B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_70(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x0FFED3E94261A832();
	Global_1622795[iVar0 /*431*/].f_11.f_356 = (Global_1622795[iVar0 /*431*/].f_11.f_356 + iParam0);
	if (Global_1622795[iVar0 /*431*/].f_11.f_356 < -9999)
	{
		Global_1622795[iVar0 /*431*/].f_11.f_356 = 9999;
	}
	else if (Global_1622795[iVar0 /*431*/].f_11.f_356 > 9999)
	{
		Global_1622795[iVar0 /*431*/].f_11.f_356 = 9999;
	}
}

int func_71()
{
	if (Global_1773254.f_3 != 0)
	{
		return Global_1773254.f_3;
	}
	return -1;
}

int func_72()
{
	if (Global_1773254.f_2 != 0)
	{
		return Global_1773254.f_2;
	}
	return -1;
}

int func_73(int iParam0)
{
	if (iParam0 == func_74())
	{
		return -1;
	}
	return Global_1622795[iParam0 /*431*/].f_11.f_7[1];
}

int func_74()
{
	return -1;
}

int func_75(int iParam0)
{
	if (iParam0 == func_74())
	{
		return -1;
	}
	return Global_1622795[iParam0 /*431*/].f_11.f_7[0];
}

int func_76()
{
	return Global_1622795[unk_0x0FFED3E94261A832() /*431*/].f_11;
}

bool func_77(bool bParam0)
{
	return func_78(unk_0x0FFED3E94261A832(), bParam0);
}

int func_78(int iParam0, bool bParam1)
{
	return func_79(iParam0, bParam1, 1);
}

int func_79(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_74())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_80(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1622795[iParam0 /*431*/].f_11;
	if (iVar0 != func_74() && Global_1622795[iVar0 /*431*/].f_11.f_317 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_80(int iParam0, int iParam1)
{
	if (iParam0 != func_74())
	{
		if (Global_1622795[iParam0 /*431*/].f_11 != func_74())
		{
			if (Global_1622795[iParam0 /*431*/].f_11 == iParam0 && Global_1622795[iParam0 /*431*/].f_11.f_317 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_81(int iParam0, bool bParam1, int iParam2)
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
		if (unk_0x7B399FFF3AC5B678())
		{
			unk_0x6F0F1C5EEC77F84A(0);
		}
	}
	if (!unk_0x591AF4C50B46E014())
	{
		uVar0 = iParam2;
		unk_0x73EC54DB6766EF37(iParam0, bParam1, uVar0);
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
		if (!func_86())
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
		if (unk_0x885F483F34E47503(iParam0) && unk_0xB8B285A272E7A79E(iParam0))
		{
			iVar25 = unk_0x1E199569E0295838(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x591AF4C50B46E014())
				{
					unk_0xA64CA7CB069DDFFA(1);
				}
				else
				{
					unk_0x4C1FCB3943DAF647(iVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0x591AF4C50B46E014() && !bVar18)
					{
						unk_0xA64CA7CB069DDFFA(0);
					}
					Global_2422215[iParam0 /*387*/].f_253 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_85(iVar25) && !unk_0x1CF549F1B0277DA6(iVar25))
				{
					if (!bVar21)
					{
						unk_0x81642E3BC0111BF2(iVar25, true, 0);
					}
				}
				if (!unk_0xED01C551E3A161C0(iVar25))
				{
					if (!bVar20)
					{
						unk_0xA32D9C84C1A93920(iVar25, false);
					}
					unk_0xE77EEA92586CF2E8(iVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0xA32D9C84C1A93920(iVar25, false);
				}
				unk_0x2725C3746060DA66(iVar25, true);
				unk_0x1EF72C87138AD63D(iParam0, 0);
				unk_0x81CEA1F6278C00AA(iVar25);
				unk_0xDC7A31134115BFF0(iVar25, 1);
				func_84();
				func_83();
				if (unk_0x57A397BDF5F38342())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0xFD918707B1B07874())
				{
				}
				Global_2422215[iParam0 /*387*/].f_254 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_85(iVar25) && !unk_0x1CF549F1B0277DA6(iVar25))
				{
					if (!bVar21)
					{
						unk_0x81642E3BC0111BF2(iVar25, !bVar14, 0);
					}
					if (!unk_0xED01C551E3A161C0(iVar25))
					{
						if (!bVar20)
						{
							unk_0xA32D9C84C1A93920(iVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0xE77EEA92586CF2E8(iVar25, 1);
						}
					}
					if (func_82(Global_1638223.f_112772))
					{
						unk_0xA32D9C84C1A93920(iVar25, true);
					}
				}
				if (bVar9)
				{
					unk_0x1EF72C87138AD63D(iParam0, 0);
				}
				else
				{
					unk_0x1EF72C87138AD63D(iParam0, 1);
				}
				unk_0x2725C3746060DA66(iVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0xE1F938E1A529D851(iVar25) && !unk_0xC4A39E4229BD3ABE(iVar25, 0))
					{
						unk_0x5DE3EC94E90BB96F(iVar25);
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
			unk_0x73EC54DB6766EF37(iParam0, bParam1, iVar26);
		}
	}
}

bool func_82(int iParam0)
{
	return iParam0 == 17;
}

void func_83()
{
	struct<2> Var0;
	
	Global_2434604.f_1010 = 0;
	Global_2434604.f_1011 = 0;
	Global_2434604.f_1012 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2434604.f_1017 = -1;
	Global_2404996.f_2472 = { Var0 };
}

void func_84()
{
	Global_2404996.f_664 = 0;
	Global_2404996.f_2513 = 0;
	Global_2404996.f_502 = 0;
	Global_2404996.f_578 = 0;
	Global_2422215[unk_0x0FFED3E94261A832() /*387*/].f_216 = 0;
}

int func_85(int iParam0)
{
	int iVar0;
	
	if (unk_0xC4A39E4229BD3ABE(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xE897E371352225D5(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_86()
{
	if (func_87() == 0)
	{
		return 1;
	}
	return 0;
}

int func_87()
{
	return Global_1312466.f_18;
}

void func_88()
{
	int iVar0;
	
	if (bLocal_50)
	{
		return;
	}
	Local_43.f_4 = 0;
	if (!func_89(Global_36747[iLocal_64 /*5*/].f_2))
	{
		return;
	}
	iVar0 = unk_0x895FB9FE885E36ED(500, 3000);
	Local_60.f_0 = 5;
	Local_55.f_2 = (unk_0x83666F9FB8FEBD4B() + iVar0);
}

int func_89(int iParam0)
{
	int iVar0;
	var uVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	
	iVar0 = func_100();
	if (iVar0 == -2)
	{
		return 0;
	}
	if (unk_0x769F0F6444C1ABE0(Local_43.f_1))
	{
		if (unk_0xC4A39E4229BD3ABE(Local_43.f_1, 0) || unk_0xF5A478192BF88D01(Local_43.f_1))
		{
			return 0;
		}
		if (unk_0xD4E92012A9DA1FBC(Local_43.f_1))
		{
			return 0;
		}
		if (func_96(Local_43.f_1))
		{
			return 0;
		}
	}
	if (Global_36747[iLocal_64 /*5*/].f_3 < 3 && Global_36747[iLocal_64 /*5*/].f_3 != 0)
	{
		return 0;
	}
	if (Global_36747[iLocal_64 /*5*/].f_4 < 9 && Global_36747[iLocal_64 /*5*/].f_4 != 0)
	{
		return 0;
	}
	uVar1 = func_95(iParam0);
	if (unk_0x58478145CAF8429C(uVar1))
	{
		return 0;
	}
	if (func_96(Local_43.f_1))
	{
		return 0;
	}
	unk_0x7F37C67732B5EECD(sVar1);
	if (func_92(Local_43.f_1))
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
		if (!unk_0x58478145CAF8429C(sVar2) && !unk_0x58478145CAF8429C(sVar3))
		{
			unk_0xA7C81DED990D3418(sVar2);
			while (!unk_0x45834D6C20FFF689(sVar2))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (!unk_0x769F0F6444C1ABE0(Local_43.f_1))
			{
				unk_0xF1C3427BFED79E6B(Local_43.f_1, sVar2, sVar3, 1.5f, -1.5f, -1, 48, 0, 0, 0, 0);
				sLocal_54 = sVar3;
			}
		}
	}
	if (!unk_0x0C709135471077E2(sVar1))
	{
		return 0;
	}
	if (unk_0x769F0F6444C1ABE0(Local_43.f_1))
	{
		return 0;
	}
	unk_0x1241657DD24F3387(Local_43.f_1, sVar1, 0.75f);
	if (unk_0xAD69426B73C6E186() == 4)
	{
		unk_0x22CE82DAD1B3D08B(Local_43.f_1, "move_ped_strafing_firstperson@drunk");
	}
	unk_0x74F4D06625A95FE9(Local_43.f_1, 0, sVar1, "idle", 2f, 1);
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
			if (unk_0xDB61DD81432BD145(Local_43.f_1))
			{
				if (!func_90())
				{
					iVar4 = "FACIALS@GEN_MALE@BASE";
				}
				else
				{
					iVar4 = "FACIALS@GEN_FEMALE@BASE";
				}
			}
			else if (unk_0x8F40CB4DCBB7C8AB(Local_43.f_1))
			{
				iVar4 = "FACIALS@GEN_MALE@BASE";
			}
			else
			{
				iVar4 = "FACIALS@GEN_FEMALE@BASE";
			}
			break;
	}
	unk_0xBBC80F08DA023D82(Local_43.f_1, "mood_drunk_1", iVar4);
	unk_0x3EFE40733EFB6649(Local_43.f_1, 200, 1);
	unk_0x3EFE40733EFB6649(Local_43.f_1, 46, 1);
	unk_0x76DB40064D4A807D(Local_43.f_1, 0);
	unk_0xAE833788DEAB23CA(Local_43.f_1, 262144, 1);
	unk_0xCAC80F6B6D57371F(Local_43.f_1, 1);
	return 1;
}

bool func_90()
{
	return func_91(unk_0x0FFED3E94261A832());
}

int func_91(int iParam0)
{
	if (unk_0xD3B21CE53AA7BE51(unk_0x1E199569E0295838(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_92(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0xC4A39E4229BD3ABE(iParam0, 1) || unk_0xF5A478192BF88D01(iParam0))
	{
		return 0;
	}
	if (unk_0xE897E371352225D5(iParam0, -2017877118) != 7)
	{
		return 0;
	}
	if (unk_0xE897E371352225D5(iParam0, 1785177548) != 7)
	{
		return 0;
	}
	if (unk_0xAB211D8B129F26CB(iParam0))
	{
		return 0;
	}
	if (unk_0xB54451B05F280358(iParam0))
	{
		return 0;
	}
	if (unk_0x62F5757271CA0B05(iParam0))
	{
		return 0;
	}
	if (unk_0x4059C05F29584890(iParam0))
	{
		return 0;
	}
	if (Global_68165)
	{
		return 0;
	}
	if (func_94())
	{
		return 0;
	}
	if (iParam0 == unk_0x2A5EB8B0FE590B91())
	{
		if (!unk_0x08EACE9908090123(unk_0x0FFED3E94261A832()))
		{
			return 0;
		}
		if (!unk_0x7B0D0EA42CF4A6CC(unk_0x0FFED3E94261A832()))
		{
			return 0;
		}
		if (unk_0xC32BACC88ED0B681(unk_0x0FFED3E94261A832()) || unk_0x59EB917897868D15(unk_0x0FFED3E94261A832()))
		{
			return 0;
		}
		if (func_93())
		{
			return 0;
		}
	}
	Var0 = { unk_0x759F285D4B31C388(iParam0) };
	if (unk_0xA8CEACB4F35AE058(Var0) >= (1f * 1f))
	{
		return 0;
	}
	return 1;
}

bool func_93()
{
	return Global_91829.f_310 > 0;
}

bool func_94()
{
	return unk_0x3732B96D7A1859B4() <= Global_17290.f_5745 + 100;
}

char* func_95(int iParam0)
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

int func_96(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_97(iParam0);
	uVar1 = func_95(iVar0);
	if (unk_0x58478145CAF8429C(Local_60.f_2))
	{
		if (unk_0x58478145CAF8429C(uVar1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return unk_0x35302CD5A5D37EED(Local_60.f_2, sVar1);
}

int func_97(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!unk_0x2137828D03306CAF(iParam0))
	{
		return -1;
	}
	iVar0 = func_99(iParam0);
	iVar1 = func_98(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36747[iVar1 /*5*/].f_2;
}

int func_98(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36747[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_99(int iParam0)
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
		if (iParam0 == Global_36747[iVar0 /*5*/].f_1)
		{
			return Global_36747[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_100()
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

void func_101()
{
	if (bLocal_50)
	{
		return;
	}
	if (!func_102())
	{
		Local_60.f_0 = 5;
		Local_55.f_2 = unk_0x83666F9FB8FEBD4B() + 5000;
		return;
	}
	Local_60.f_0 = 6;
}

bool func_102()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (Local_43.f_4 == 0)
	{
		return 0;
	}
	if (unk_0xA9A04898798AE9E6(Local_43.f_4, 0))
	{
		return 0;
	}
	Var0 = { unk_0xD1EE0E9FCD74A37B(Local_43.f_1, 1) };
	Var3 = { unk_0xD1EE0E9FCD74A37B(Local_43.f_4, 1) };
	fVar6 = unk_0x4A2E6F541CD8C36E(Var0, Var3, 1);
	return fVar6 < 7f;
}

void func_103()
{
	int iVar0;
	char* sVar1;
	
	if (Local_43.f_1 == unk_0x2A5EB8B0FE590B91())
	{
		unk_0x4E6996123FABDB93(0, 36, 1);
		if (unk_0xE54DA6A5B710C410(Local_43.f_1))
		{
			if (Global_36747[iLocal_64 /*5*/].f_2 == 0 || Global_36747[iLocal_64 /*5*/].f_2 == 2)
			{
				unk_0x40C35C94A0106576(Local_43.f_1, 0, 0);
			}
		}
		if (unk_0x79AB623AEFBB0906(Local_43.f_1))
		{
			unk_0xF09DCA8124694AF7(Local_43.f_1, 0);
		}
	}
	if (Local_55.f_0 != -2)
	{
		if (Local_55.f_0 == -1)
		{
			if (Global_36747[iLocal_64 /*5*/].f_2 != 0)
			{
				Global_36747[iLocal_64 /*5*/].f_2 = 0;
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
			if (Global_36747[iLocal_64 /*5*/].f_2 == 0)
			{
				if (iVar0 < 30)
				{
					Global_36747[iLocal_64 /*5*/].f_2 = 2;
					if (!func_89(2))
					{
						Global_36747[iLocal_64 /*5*/].f_2 = 0;
						return;
					}
				}
			}
			if (Global_36747[iLocal_64 /*5*/].f_2 == 2)
			{
				if (iVar0 < 10)
				{
					Global_36747[iLocal_64 /*5*/].f_2 = 1;
					if (!func_89(2))
					{
						Global_36747[iLocal_64 /*5*/].f_2 = 2;
						return;
					}
				}
			}
			if (Global_36747[iLocal_64 /*5*/].f_2 == 1)
			{
			}
		}
	}
	else
	{
		return;
	}
	if (!unk_0x58478145CAF8429C(sLocal_54))
	{
		if (!func_92(Local_43.f_1))
		{
			sVar1 = "MOVE_M@DRUNK@TRANSITIONS";
			if (unk_0x453DB1DBE5D81637(Local_43.f_1, sVar1, sLocal_54, 3))
			{
				unk_0x305E05EA04908AD9(Local_43.f_1, sVar1, sLocal_54, -4f);
			}
			sLocal_54 = "";
			return;
		}
	}
	if (Global_36747[iLocal_64 /*5*/].f_3 >= 10 || Global_36747[iLocal_64 /*5*/].f_4 >= 15)
	{
		if (unk_0xE897E371352225D5(Local_43.f_1, 1785177548) == 1)
		{
			return;
		}
		if (unk_0xEA1FD1B84CBA9902(Local_43.f_1))
		{
			return;
		}
		if (unk_0xC4A39E4229BD3ABE(Local_43.f_1, 1))
		{
			if (Global_36747[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_36747[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_36747[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_36747[iLocal_64 /*5*/].f_4 = 14;
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
	if (!func_96(Local_43.f_1))
	{
		return;
	}
}

int func_104()
{
	int iVar0;
	
	if (!unk_0xB1C4356ECEE878FE(Local_43.f_1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = unk_0x0C20E539D876C5B3(Local_43.f_1, 0);
	if (!unk_0x7FAC45D56235AB39(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0x8F8E5C33266ED978(iVar0, -1, 0) == Local_43.f_1)
	{
		return 0;
	}
	Local_43.f_4 = iVar0;
	Local_60.f_0 = 7;
	return 1;
}

void func_105()
{
	if (!unk_0xC4A39E4229BD3ABE(Local_43.f_1, 0))
	{
		Local_60.f_0 = 4;
		return;
	}
}

void func_106()
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
	if (!unk_0xB8B285A272E7A79E(unk_0x0FFED3E94261A832()))
	{
		return;
	}
	if (!unk_0xB1C4356ECEE878FE(unk_0x2A5EB8B0FE590B91()))
	{
		return;
	}
	if (unk_0x849E054ACB3607BE(unk_0x0FFED3E94261A832(), 0))
	{
		return;
	}
	iVar0 = unk_0x0C20E539D876C5B3(unk_0x2A5EB8B0FE590B91(), 0);
	fVar1 = unk_0xD2660BAC03EB7433(iVar0);
	if (fVar1 < 5f)
	{
		return;
	}
	Var2 = { unk_0xD1EE0E9FCD74A37B(unk_0x2A5EB8B0FE590B91(), 1) };
	Var5 = { Var2 - Vector(3f, 30f, 30f) };
	Var8 = { Var2 + Vector(3f, 30f, 30f) };
	if (!unk_0xAB808887BA51FF69(Var5, Var8) && !unk_0xFA2E229A03371E02(Var5, Var8))
	{
		return;
	}
	unk_0x3406B7CA9E05661E(unk_0x0FFED3E94261A832(), 1, 0);
	unk_0x89CE8936E61ED35B(unk_0x0FFED3E94261A832(), 0);
	func_8(73, 1);
}

void func_107()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = Local_43.f_1;
	if (unk_0xC4A39E4229BD3ABE(Local_43.f_1, 0))
	{
		iVar1 = unk_0x0C20E539D876C5B3(Local_43.f_1, 0);
		iVar2 = unk_0x8F8E5C33266ED978(iVar1, -1, 0);
		if (!iVar2 == Local_43.f_1)
		{
			return;
		}
		if (unk_0x591AF4C50B46E014() && !unk_0x1979A7D1D0538188(iVar1))
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!unk_0x2A5EB8B0FE590B91() == Local_43.f_1)
	{
		return;
	}
	else if (!unk_0xAD69426B73C6E186() == 4)
	{
		fLocal_53 = 0f;
		func_109(iVar0, 0f);
		return;
	}
	if (unk_0x83666F9FB8FEBD4B() < Local_55.f_4)
	{
		func_109(iVar0, fLocal_53);
		return;
	}
	if (unk_0xEE46DE31F43DCAF1(iVar0))
	{
		Local_55.f_4 = unk_0x83666F9FB8FEBD4B() + 2000;
	}
	else
	{
		Local_55.f_4 = unk_0x83666F9FB8FEBD4B() + 1000;
	}
	fVar3 = unk_0xD2660BAC03EB7433(iVar0);
	if (fVar3 < 0.04f)
	{
		fLocal_53 = 0f;
		func_109(iVar0, 0f);
		return;
	}
	if (Local_55.f_1 == -1)
	{
		fLocal_53 = func_108(iVar0, 0.13f, 0.06f);
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
			fLocal_53 = func_108(iVar0, 0.05f, 0.02f);
		}
		else if (iVar4 < 30000)
		{
			fLocal_53 = func_108(iVar0, 0.07f, 0.03f);
		}
		else if (iVar4 < 45000)
		{
			fLocal_53 = func_108(iVar0, 0.09f, 0.04f);
		}
		else if (iVar4 < 600000)
		{
			fLocal_53 = func_108(iVar0, 0.1f, 0.05f);
		}
		else
		{
			fLocal_53 = func_108(iVar0, 0.13f, 0.06f);
		}
	}
	func_109(iVar0, fLocal_53);
}

float func_108(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = unk_0x399F81B56505EE6F(-fParam1, fParam1);
	fVar1 = unk_0x399F81B56505EE6F(0f, fParam2);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 - fVar1);
	}
	else
	{
		fVar0 = (fVar0 + fVar1);
	}
	if (unk_0xEE46DE31F43DCAF1(iParam0))
	{
		if (unk_0xAD69F971BA14B65A(unk_0xC3A7AD90290CA72E(iParam0)))
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
		iVar2 = unk_0xD3B21CE53AA7BE51(iParam0);
		if (unk_0x4BD9974FDDE2D1EC(iVar2))
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

void func_109(int iParam0, float fParam1)
{
	if (unk_0x591AF4C50B46E014() && !unk_0x1979A7D1D0538188(iParam0))
	{
		return;
	}
	if (unk_0xEE46DE31F43DCAF1(iParam0))
	{
		unk_0xD541F9AE600A073F(unk_0xC3A7AD90290CA72E(iParam0), fParam1);
	}
	else if (unk_0x82DF3B947FC3E281(iParam0))
	{
		unk_0x243386B6BFEC85CF(unk_0x761AC59E782D169D(iParam0), fParam1);
	}
}

void func_110()
{
	int iVar0;
	
	if (!unk_0xC4A39E4229BD3ABE(Local_43.f_1, 0))
	{
		Local_60.f_0 = 4;
		return;
	}
	if (unk_0x591AF4C50B46E014())
	{
		if (Global_36747[iLocal_64 /*5*/].f_3 >= 10 || Global_36747[iLocal_64 /*5*/].f_4 >= 15)
		{
			if (Global_36747[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_36747[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_36747[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_36747[iLocal_64 /*5*/].f_4 = 14;
			}
		}
	}
	if (bLocal_50)
	{
		return;
	}
	iVar0 = unk_0x0C20E539D876C5B3(Local_43.f_1, 0);
	if (!unk_0x7FAC45D56235AB39(iVar0, 0))
	{
		unk_0x8F2751B831A7B303(Local_43.f_1, 0, 0);
		Local_60.f_0 = 11;
		return;
	}
}

void func_111()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x83666F9FB8FEBD4B() <= Local_55.f_3)
	{
		return;
	}
	iVar0 = unk_0xE897E371352225D5(unk_0x2A5EB8B0FE590B91(), 355471868);
	if (!iVar0 == 7)
	{
		Local_55.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
		return;
	}
	if (!unk_0xC4A39E4229BD3ABE(Local_43.f_1, 0))
	{
		Local_60.f_0 = 4;
		Local_55.f_3 = -2;
		return;
	}
	iVar1 = unk_0x0C20E539D876C5B3(Local_43.f_1, 0);
	iVar2 = unk_0x8F8E5C33266ED978(iVar1, -1, 0);
	if (iVar2 == Local_43.f_1)
	{
		func_112();
		Local_55.f_3 = -2;
		return;
	}
	unk_0x91233DD2A90FD0C8(Local_43.f_1, iVar1);
	Local_60.f_0 = 9;
	Local_55.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
}

void func_112()
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
	func_138(iLocal_48, 2, 5);
	Local_55.f_4 = unk_0x83666F9FB8FEBD4B();
	fLocal_53 = 0f;
}

void func_113()
{
	if (unk_0xB1C4356ECEE878FE(Local_43.f_1))
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

void func_114()
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
	if (bVar1 || unk_0xB1C4356ECEE878FE(Local_43.f_1))
	{
		if (!bLocal_50)
		{
		}
		iVar0 = unk_0x0C20E539D876C5B3(Local_43.f_1, 0);
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
				unk_0x8F2751B831A7B303(Local_43.f_1, 0, 0);
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
			func_112();
			return;
		}
		if (!bLocal_50)
		{
			if (!bLocal_50)
			{
			}
			func_112();
			return;
		}
		if (!bLocal_50)
		{
		}
		iVar2 = unk_0x8F8E5C33266ED978(Local_43.f_4, -1, 0);
		if (iVar2 == Local_43.f_1)
		{
			func_112();
			return;
		}
		unk_0x91233DD2A90FD0C8(Local_43.f_1, iVar0);
		Local_60.f_0 = 9;
		Local_55.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
		return;
	}
	if (!func_102())
	{
		unk_0x654FFF4D16298AC5(Local_43.f_1);
		Local_60.f_0 = 4;
		return;
	}
	if (!bLocal_50)
	{
		iVar3 = unk_0xE897E371352225D5(Local_43.f_1, -1794415470);
		if (iVar3 == 7)
		{
			if (!unk_0xC4A39E4229BD3ABE(Local_43.f_1, 0))
			{
				unk_0x654FFF4D16298AC5(Local_43.f_1);
				Local_60.f_0 = 4;
				return;
			}
		}
	}
}

void func_115()
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
	if (!unk_0x7FAC45D56235AB39(Local_43.f_4, 0))
	{
		Local_43.f_4 = 0;
		Local_60.f_0 = 4;
		return;
	}
	Var0 = { unk_0xD1EE0E9FCD74A37B(Local_43.f_1, 1) };
	Var3 = { unk_0xD1EE0E9FCD74A37B(Local_43.f_4, 1) };
	fVar6 = unk_0x4A2E6F541CD8C36E(Var0, Var3, 1);
	if (fVar6 > 3f)
	{
		if (!func_89(Global_36747[iLocal_64 /*5*/].f_2))
		{
			Local_60.f_0 = 12;
			return;
		}
		Local_60.f_0 = 5;
		Local_55.f_2 = unk_0x83666F9FB8FEBD4B() + 2000;
		return;
	}
	iVar7 = unk_0xCBA4F77BB9D2F115(Local_43.f_4);
	iVar8 = 0;
	bVar9 = true;
	iVar8 = 1;
	while (bVar9)
	{
		if (iVar8 < iVar7)
		{
			if (unk_0x457D9E478E06E354(Local_43.f_4, iVar8, 0))
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
	func_116();
	unk_0xA6AC097BEBB7B1F0(Local_43.f_1, Local_43.f_4, -1, iVar8, 1073741824, 1, 0);
	Local_60.f_0 = 7;
}

void func_116()
{
	if (!unk_0x2137828D03306CAF(Local_43.f_1))
	{
		return;
	}
	if (!unk_0x769F0F6444C1ABE0(Local_43.f_1))
	{
		unk_0x3851B6B87498EDBF(Local_43.f_1, 1048576000);
		unk_0x931F3E5527DC2B7C(Local_43.f_1);
		unk_0xEFFFE2443E196C45(Local_43.f_1, 0, -1056964608);
		Local_60.f_2 = "";
		unk_0x252EC060FAC0EDEF(Local_43.f_1);
		unk_0x3EFE40733EFB6649(Local_43.f_1, 200, 0);
		unk_0x3EFE40733EFB6649(Local_43.f_1, 46, 0);
		unk_0x76DB40064D4A807D(Local_43.f_1, 1);
		unk_0xAE833788DEAB23CA(Local_43.f_1, 262144, 0);
		unk_0xCAC80F6B6D57371F(Local_43.f_1, 0);
	}
	if (!bLocal_51)
	{
		return;
	}
	bLocal_51 = false;
}

void func_117()
{
	if (unk_0x83666F9FB8FEBD4B() < Local_55.f_2)
	{
		func_103();
		return;
	}
	func_118();
	Local_55.f_2 = -2;
	Local_60.f_0 = 12;
}

int func_118()
{
	if (!func_96(Local_43.f_1))
	{
		return 0;
	}
	if (!bLocal_51)
	{
		return 0;
	}
	func_119(Local_43.f_1);
	Local_60.f_2 = "";
	return 1;
}

void func_119(int iParam0)
{
	unk_0x3851B6B87498EDBF(uParam0, 1048576000);
	unk_0xEFFFE2443E196C45(uParam0, 0, -1056964608);
	unk_0x3EFE40733EFB6649(uParam0, 200, 0);
	unk_0x76DB40064D4A807D(iParam0, 1);
	unk_0xAE833788DEAB23CA(iParam0, 262144, 0);
	unk_0xCAC80F6B6D57371F(iParam0, 0);
}

void func_120()
{
	int iVar0;
	
	if (Local_55.f_0 == -1)
	{
		Global_36747[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36747[iLocal_64 /*5*/].f_3 < 3 && Global_36747[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_36747[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_36747[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_36747[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_36747[iLocal_64 /*5*/].f_2 = 1;
		}
	}
	if (unk_0xC4A39E4229BD3ABE(Local_43.f_1, 0))
	{
		Local_60.f_0 = 10;
		return;
	}
	if (func_96(Local_43.f_1))
	{
		Local_60.f_0 = 12;
		return;
	}
	if (Local_55.f_0 == -2)
	{
		return;
	}
	if (!func_89(Global_36747[iLocal_64 /*5*/].f_2))
	{
		return;
	}
	Local_60.f_0 = 12;
}

void func_121()
{
}

void func_122()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 6;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 16)
	{
		iVar0 = Global_36828[iVar1 /*5*/].f_2;
		if (!iVar0 == 6)
		{
			if (Global_36828[iVar1 /*5*/].f_1 == iLocal_48)
			{
				func_124(iVar1);
				func_123(iVar1);
			}
			else if (Global_36828[iVar1 /*5*/].f_1 == 2)
			{
				if (!iLocal_49 == -1)
				{
					if (iLocal_49 == Global_36828[iVar1 /*5*/])
					{
						func_124(iVar1);
					}
				}
			}
		}
		iVar1++;
	}
}

void func_123(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_36828[iParam0 /*5*/] = -1;
	Global_36828[iParam0 /*5*/].f_1 = -1;
	Global_36828[iParam0 /*5*/].f_2 = 6;
	Global_36828[iParam0 /*5*/].f_3 = 0;
	Global_36828[iParam0 /*5*/].f_4 = 0;
}

void func_124(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_36828[iParam0 /*5*/].f_2;
	switch (iVar0)
	{
		case 1:
			func_145();
			break;
		
		case 2:
			func_128(Global_36828[iParam0 /*5*/].f_4);
			break;
		
		case 3:
			func_127();
			break;
		
		case 4:
			func_126();
			break;
		
		case 5:
			func_125();
			break;
		
		case 0:
			break;
		
		case 6:
			break;
		
		default:
			break;
	}
}

void func_125()
{
	Local_60.f_1 = 2;
}

void func_126()
{
	int iVar0;
	
	Global_36747[iLocal_64 /*5*/].f_4++;
	if (Local_55.f_0 == -1)
	{
		Global_36747[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36747[iLocal_64 /*5*/].f_4 < 9 && Global_36747[iLocal_64 /*5*/].f_4 != 0)
	{
		Global_36747[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_36747[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_36747[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_36747[iLocal_64 /*5*/].f_2 = 1;
		}
		if (!func_96(Local_43.f_1))
		{
			func_89(Global_36747[iLocal_64 /*5*/].f_2);
		}
	}
}

void func_127()
{
	int iVar0;
	
	Global_36747[iLocal_64 /*5*/].f_3++;
	if (Local_55.f_0 == -1)
	{
		Global_36747[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36747[iLocal_64 /*5*/].f_3 < 3 && Global_36747[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_36747[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_36747[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_36747[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_36747[iLocal_64 /*5*/].f_2 = 1;
		}
		if (!func_96(Local_43.f_1))
		{
			func_89(Global_36747[iLocal_64 /*5*/].f_2);
		}
	}
}

void func_128(int iParam0)
{
	Local_43.f_3 = (Local_43.f_3 + iParam0);
	Local_43.f_2 = (Local_43.f_2 + iParam0);
	Local_55.f_1 = (Local_55.f_1 + iParam0);
	Local_55.f_0 = (Local_55.f_0 + iParam0);
}

void func_129()
{
	int iVar0;
	
	if (!bLocal_50)
	{
		iLocal_63 = -1;
		return;
	}
	if (iLocal_63 < 0)
	{
		iLocal_63 = unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832());
		return;
	}
	iVar0 = unk_0xEA49C7D4FDCF922C(unk_0x0FFED3E94261A832());
	if (iVar0 != iLocal_63)
	{
		if (iVar0 > iLocal_63)
		{
			func_130();
		}
		iLocal_63 = iVar0;
		return;
	}
}

void func_130()
{
}

void func_131()
{
	if (!Local_55.f_0 == -1)
	{
		if (!Local_55.f_0 == -2)
		{
			if (unk_0x83666F9FB8FEBD4B() >= Local_55.f_0)
			{
				func_116();
				Local_55.f_0 = -2;
				Local_60.f_0 = 12;
			}
		}
		if (unk_0x83666F9FB8FEBD4B() > Local_55.f_1)
		{
			func_145();
		}
	}
}

void func_132(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36828[iVar0 /*5*/])
		{
			func_123(iVar0);
		}
		iVar0++;
	}
}

void func_133()
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
	if (!unk_0xA9A04898798AE9E6(Local_43.f_1, 0))
	{
		if (unk_0xB1C4356ECEE878FE(Local_43.f_1))
		{
			Local_60.f_0 = 10;
		}
	}
	if (bLocal_50)
	{
		func_136();
		func_8(71, 1);
		if (unk_0x591AF4C50B46E014())
		{
			iVar0 = func_69(2052, -1, 0);
			iVar1 = (iVar0 / 10) + 1 * 10;
			if (iVar0 + 1 >= iVar1)
			{
				func_134(iVar1);
			}
			func_66(2052, iVar0 + 1, -1, 1, 0);
		}
		else
		{
			iVar2 = 0;
			iVar3 = 0;
			iVar4 = 0;
			unk_0xC225A90A8DE0D96B(joaat("sp0_sp_num_times_drunk"), &iVar2, -1);
			unk_0xC225A90A8DE0D96B(joaat("sp1_sp_num_times_drunk"), &iVar3, -1);
			unk_0xC225A90A8DE0D96B(joaat("sp2_sp_num_times_drunk"), &iVar4, -1);
			iVar5 = ((iVar2 + iVar3) + iVar4);
			iVar6 = (iVar5 / 10) + 1 * 10;
			if (iVar5 + 1 >= iVar6)
			{
				func_134(iVar6);
			}
			switch (func_57())
			{
				case 0:
					unk_0xC94674712BED1A82(joaat("sp0_sp_num_times_drunk"), iVar2 + 1, 1);
					break;
				
				case 1:
					unk_0xC94674712BED1A82(joaat("sp1_sp_num_times_drunk"), iVar3 + 1, 1);
					break;
				
				case 2:
					unk_0xC94674712BED1A82(joaat("sp2_sp_num_times_drunk"), iVar4 + 1, 1);
					break;
				}
		}
		Local_60.f_1 = 1;
		return;
	}
	Local_60.f_1 = 12;
	if (Local_55.f_0 == -1)
	{
		Global_36747[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36747[iLocal_64 /*5*/].f_3 < 3 && Global_36747[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_36747[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar7 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar7 <= 0)
		{
			iVar7 = 0;
		}
		iVar7 = (iVar7 / 1000) + 1;
		Global_36747[iLocal_64 /*5*/].f_2 = 0;
		if (iVar7 < 30)
		{
			Global_36747[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar7 < 10)
		{
			Global_36747[iLocal_64 /*5*/].f_2 = 1;
		}
	}
}

void func_134(int iParam0)
{
	int iVar0;
	
	iVar0 = func_135(81);
	Global_2413368[iVar0 /*83*/] = 81;
	Global_2413368[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2413368[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_135(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2413368[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2413368[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_136()
{
}

void func_137()
{
	Local_55.f_0 = Local_43.f_2;
	Local_55.f_1 = Local_43.f_3;
	Local_55.f_2 = -2;
	Local_55.f_3 = -2;
}

void func_138(int iParam0, int iParam1, int iParam2)
{
	func_139(iParam0, iParam1, iParam2, 0, 0);
}

void func_139(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	if (func_141(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_140();
	if (iVar0 == -1)
	{
		return;
	}
	Global_36828[iVar0 /*5*/] = iParam0;
	Global_36828[iVar0 /*5*/].f_1 = iParam1;
	Global_36828[iVar0 /*5*/].f_2 = iParam2;
	Global_36828[iVar0 /*5*/].f_3 = iParam3;
	Global_36828[iVar0 /*5*/].f_4 = iParam4;
}

int func_140()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36828[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_141(int iParam0, int iParam1, int iParam2)
{
	if (func_142(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_142(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_36828[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36828[iVar0 /*5*/])
			{
				if (iParam1 == Global_36828[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

void func_143()
{
	int iVar0;
	
	bLocal_50 = false;
	if (Local_43.f_1 == unk_0x2A5EB8B0FE590B91())
	{
		bLocal_50 = true;
		Global_36943 = 1;
		Global_36945++;
	}
	if (!unk_0xA9A04898798AE9E6(Local_43.f_1, 0))
	{
		iVar0 = func_60(Local_43.f_1);
		switch (iVar0)
		{
			case 17:
				unk_0x28AB07F44A348EFC(Local_43.f_1, "AMANDA_DRUNK");
				break;
			
			case 19:
				unk_0x28AB07F44A348EFC(Local_43.f_1, "LAMAR_DRUNK");
				break;
			}
	}
}

void func_144()
{
	if (!iLocal_48 == -1)
	{
		return;
	}
	iLocal_48 = func_99(Local_43.f_1);
	if (iLocal_48 == -1)
	{
		return;
	}
	iLocal_64 = func_98(iLocal_48);
}

void func_145()
{
	int iVar0;
	
	if (!func_26(0) && !func_26(3))
	{
		if (!unk_0xA9A04898798AE9E6(Local_43.f_1, 0))
		{
			iVar0 = func_60(Local_43.f_1);
			if (Global_36747[iLocal_64 /*5*/].f_4 > 0)
			{
				switch (iVar0)
				{
					case 0:
						func_147(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 1:
						func_147(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 2:
						func_147(Local_43.f_1, "POST_STONED", 24);
						break;
					}
			}
			switch (iVar0)
			{
				case 17:
					unk_0x28AB07F44A348EFC(Local_43.f_1, "AMANDA_NORMAL");
					break;
				
				case 19:
					unk_0x28AB07F44A348EFC(Local_43.f_1, "LAMAR_NORMAL");
					break;
				}
			}
	}
	func_116();
	if (bLocal_50)
	{
		Global_36943 = 0;
	}
	func_146();
	unk_0x15167ADA0B7D44AE(func_95(0));
	unk_0x15167ADA0B7D44AE(func_95(2));
	unk_0x15167ADA0B7D44AE(func_95(1));
	Global_1770274 = 0;
	if (unk_0x09952BA662A7629B(joaat("appemail")) > 0)
	{
		func_33(0);
	}
	unk_0xA232817B0B36F2E5();
}

void func_146()
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (unk_0xA9A04898798AE9E6(Local_43.f_1, 0))
	{
		return;
	}
	uVar0 = Local_43.f_1;
	if (unk_0xC4A39E4229BD3ABE(Local_43.f_1, 0))
	{
		uVar1 = unk_0x0C20E539D876C5B3(Local_43.f_1, 0);
		iVar2 = unk_0x8F8E5C33266ED978(uVar1, -1, 0);
		if (!Local_43.f_1 == iVar2)
		{
			return;
		}
		uVar0 = iVar1;
	}
	else if (!unk_0xAD69426B73C6E186() == 4 || !unk_0x2A5EB8B0FE590B91() == Local_43.f_1)
	{
		return;
	}
	fLocal_53 = 0f;
	func_109(uVar0, 0f);
}

void func_147(var uParam0, char* sParam1, int iParam2)
{
	unk_0x430053236FA97FB8(uParam0, sParam1, func_148(iParam2), 1);
}

int func_148(int iParam0)
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

