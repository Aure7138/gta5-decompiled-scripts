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
	if (unk_0x5EBD03AF78E7B4DB(2))
	{
		func_157();
	}
	Local_43 = { ScriptParam_0 };
	func_156();
	func_155();
	func_150(iLocal_48, 0, 0);
	unk_0xC1B1E9A034A63A62(0);
	func_149();
	func_145();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_144(iLocal_48);
		func_143();
		func_141();
		func_134();
		func_150(iLocal_48, 0, 0);
		func_156();
		func_9();
		if ((unk_0x4C9BACA8D249CB13() && !unk_0xD8B89B387D170E27()) && !func_8())
		{
			func_1();
		}
	}
}

void func_1()
{
	if (func_7() || func_6())
	{
		func_5();
		func_2();
	}
}

void func_2()
{
	if ((!func_4() && !func_3()) && Global_2449168)
	{
		Global_4456448.f_130782 = 0;
	}
}

bool func_3()
{
	return Global_2448386.f_580;
}

bool func_4()
{
	return Global_1589747[unk_0xD4E735F4B6A956AC() /*790*/].f_196 != 0;
}

void func_5()
{
	Global_2448386.f_645 = 1;
}

var func_6()
{
	return Global_2448386.f_624;
}

bool func_7()
{
	return unk_0x05EFB6A616B6FADE(Global_2448386.f_2, 11);
}

bool func_8()
{
	return unk_0x05EFB6A616B6FADE(Global_2449169.f_1.f_2810, 3);
}

void func_9()
{
	bool bVar0;
	
	if (unk_0x7112137033807390(Local_43.f_1, 0))
	{
		func_157();
	}
	if (bLocal_50)
	{
		if (!unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			func_157();
		}
	}
	func_133();
	bVar0 = true;
	switch (Local_60.f_0)
	{
		case 4:
			func_132();
			return;
		
		case 5:
			func_129();
			return;
		
		case 6:
			func_127();
			return;
		
		case 7:
			func_126();
			return;
		
		case 8:
			func_125();
			return;
		
		case 9:
			func_123();
			return;
		
		case 10:
			func_122();
			func_119();
			func_118();
			return;
		
		case 11:
			func_117();
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
			if (!func_116())
			{
				func_111();
				func_119();
			}
			break;
		
		case 2:
			func_109();
			break;
		
		case 12:
			func_96();
			break;
		
		case 3:
			func_10();
			break;
		
		default:
			break;
	}
}

void func_10()
{
	var uVar0;
	char* sVar2;
	struct<53> Var3;
	int iVar61;
	
	if (!unk_0x05EFB6A616B6FADE(Global_1668658.f_3314, 27))
	{
		unk_0x26B833B644E45223(Local_43.f_1, 3000, 3500, 0, 1, 1, 0);
	}
	Global_1663723 = 1;
	if (!unk_0x71364F510A1CB69F())
	{
		unk_0x9662BE461F9FDF9E(2500);
		while (unk_0x607776744A243309())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (unk_0x4C9BACA8D249CB13())
	{
		func_95(&uVar0, 0, 0);
		if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()) && !unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
		{
			unk_0xB25815CCA009D152(unk_0xA19140A5C42D8715(), 0, 1);
		}
		while ((unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()) && !unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0)) && unk_0x07D6F930B3A088B4(unk_0xA19140A5C42D8715()))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xFA57C719261AA55D(&(Global_1668658.f_3314), 27);
		func_85(unk_0xD4E735F4B6A956AC(), 0, 57344);
		Global_2405070.f_2663 = 1;
		if (unk_0x122A8778D4027A82(unk_0xD4E735F4B6A956AC(), 0))
		{
			Global_2405070.f_2664 = 1;
		}
		else
		{
			Global_2405070.f_2664 = 0;
		}
		if (unk_0x5B1F43E517A1588D())
		{
			unk_0xF3D41ED309762C0D(0);
		}
		if (func_81(1))
		{
			func_68(0);
		}
		func_66(1);
		func_157();
	}
	sVar2 = "";
	Var3.f_3 = 1064514355;
	Var3.f_30 = 1148829696;
	Var3.f_31 = 1148829696;
	Var3.f_52 = 1148829696;
	iVar61 = 7;
	switch (func_61())
	{
		case 0:
			if (func_59() != 2)
			{
				iVar61 = 0;
			}
			else
			{
				iVar61 = 1;
			}
			break;
		
		case 1:
			if (!func_58(126))
			{
				iVar61 = 2;
			}
			else
			{
				iVar61 = 3;
			}
			break;
		
		case 2:
			if (!func_57(4))
			{
				if (func_58(58))
				{
					iVar61 = 4;
				}
				if (func_58(59))
				{
					iVar61 = 5;
				}
				if (iVar61 == 7)
				{
					if (!func_56())
					{
						iVar61 = 4;
					}
					else
					{
						iVar61 = 5;
					}
				}
			}
			else
			{
				iVar61 = 6;
			}
			break;
	}
	switch (iVar61)
	{
		case 0:
			sVar2 = "DWC_MICHAEL_mansion";
			Var3.f_0 = "SAVEM_Default@";
			Var3.f_1 = "M_GetOut_R";
			Var3.f_2 = "M_GetOut_R_CAM";
			Var3.f_5 = { -814.181f, 181.1f, 75.74f };
			Var3.f_8 = { 0f, 0f, 21.1994f };
			Var3.f_4 = joaat("MotionState_Idle");
			break;
		
		case 1:
			sVar2 = "DWC_MICHAEL_trailer";
			Var3.f_0 = "SAVECountryside@";
			Var3.f_1 = "M_GetOut_countryside";
			Var3.f_2 = "M_GetOut_countryside_CAM";
			Var3.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var3.f_8 = { 0f, 0f, 29.7938f };
			Var3.f_4 = joaat("MotionState_Idle");
			break;
		
		case 2:
			sVar2 = "DWC_FRANKLIN_city";
			Var3.f_0 = "SWITCH@FRANKLIN@BED";
			Var3.f_1 = "Sleep_GetUp_RubEyes";
			Var3.f_2 = "Sleep_GetUp_RubEyes_CAM";
			Var3.f_5 = { -17.2168f, -1441.224f, 30.1015f };
			Var3.f_8 = { 0f, 0f, -179.653f };
			Var3.f_4 = joaat("MotionState_Idle");
			break;
		
		case 3:
			sVar2 = "DWC_FRANKLIN_hills";
			Var3.f_0 = "SAVEBighouse@";
			Var3.f_1 = "F_GetOut_r_bighouse";
			Var3.f_2 = "F_GetOut_r_bighouse_CAM";
			Var3.f_5 = { -1.049f, 524.283f, 170.064f };
			Var3.f_8 = { 0f, 0f, 24f };
			Var3.f_4 = joaat("MotionState_Idle");
			break;
		
		case 4:
			sVar2 = "DWC_TREVOR_trailer";
			Var3.f_0 = "SAVECountryside@";
			Var3.f_1 = "T_GetOut_countryside";
			Var3.f_2 = "T_GetOut_countryside_CAM";
			Var3.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var3.f_8 = { 0f, 0f, 29.7938f };
			Var3.f_4 = joaat("MotionState_Idle");
			break;
		
		case 5:
			sVar2 = "DWC_TREVOR_beach";
			Var3.f_0 = "SAVEVeniceB@";
			Var3.f_1 = "T_GetOut_r_veniceB";
			Var3.f_2 = "T_GetOut_r_veniceB_CAM";
			Var3.f_5 = { -1148.438f, -1512.246f, 9.689f };
			Var3.f_8 = { 0f, 0f, 36.25f };
			Var3.f_4 = joaat("MotionState_Idle");
			break;
		
		case 6:
			sVar2 = "DWC_TREVOR_stripclub";
			Var3.f_0 = "SAVECouch@";
			Var3.f_1 = "T_GetOut_couch";
			Var3.f_2 = "T_GetOut_couch_CAM";
			Var3.f_5 = { 94.53f, -1289.86f, 28.27f };
			Var3.f_8 = { 0f, 0f, 29.7938f };
			Var3.f_4 = joaat("MotionState_Idle");
			break;
	}
	if (!unk_0x7112137033807390(Local_43.f_1, 0))
	{
		unk_0x4299736016AECE26(Local_43.f_1, Var3.f_5, 1, 0, 0, 1);
	}
	unk_0x4EDE34FBADD967A6(500);
	StringCopy(&(Var3.f_11), "", 16);
	Var3.f_15 = -1f;
	func_12(sVar2, &Var3, "");
	func_11(126, 1);
	func_157();
}

void func_11(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51923[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x4C9BACA8D249CB13())
	{
		return;
	}
	if (Global_51923[iParam0 /*7*/])
	{
		unk_0x2AD48F3CEBA882E9(Global_51923[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x93180BE33E7149EF(Global_51923[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_12(char* sParam0, var uParam1, char* sParam2)
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
	unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), false, 0);
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), 1);
	}
	unk_0xC8F6C7A08A4B067D(uParam1->f_5, 4500f);
	unk_0x8566A4AC1CA77939(uParam1->f_5, 4500f);
	unk_0xFDD15D670AD33E10(uParam1->f_5, 5f, 1, 0, 0, 0);
	unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), uParam1->f_5, 1, 0, 0, 1);
	unk_0xB29E08C7AB729BAD(unk_0xA19140A5C42D8715(), true);
	unk_0x4EDE34FBADD967A6(0);
	unk_0x62BAB49318F4FE6E(1);
	unk_0x6D68030C791111E0(*uParam1);
	if (unk_0x429D45A6C6520026(uParam1->f_16))
	{
	}
	else
	{
		unk_0x6D68030C791111E0(uParam1->f_16);
	}
	if (!unk_0x71364F510A1CB69F())
	{
		unk_0x9662BE461F9FDF9E(0);
	}
	func_51(uParam1->f_5, uParam1->f_8.f_2, 0, 1);
	if (!unk_0x71364F510A1CB69F())
	{
		unk_0x9662BE461F9FDF9E(0);
	}
	iVar1 = unk_0xFD34717937104F1C() + 20000;
	bVar2 = false;
	uParam1->f_33 = 0;
	while (!bVar2 && iVar1 > unk_0xFD34717937104F1C())
	{
		bVar2 = true;
		unk_0x6D68030C791111E0(*uParam1);
		if (!unk_0x39C2D9AB77873F84(*uParam1))
		{
			bVar2 = false;
		}
		if (!unk_0x429D45A6C6520026(uParam1->f_16))
		{
			unk_0x6D68030C791111E0(uParam1->f_16);
			if (!unk_0x39C2D9AB77873F84(uParam1->f_16))
			{
				bVar2 = false;
			}
		}
		if (!unk_0x71364F510A1CB69F())
		{
			unk_0x9662BE461F9FDF9E(0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_48();
	if (!func_47(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		unk_0x68184E06469338F4(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 0, 1);
		unk_0x01AF8CB960828C2B(uParam1->f_5 + uParam1->f_19, (unk_0x652D2EEEF1D3E62C(uParam1->f_22) + 25f), 0, 0, 0, 0, 0, 0);
		unk_0xFDD15D670AD33E10(uParam1->f_5 + uParam1->f_19, (unk_0x652D2EEEF1D3E62C(uParam1->f_22) + 25f), 1, 0, 0, 0);
	}
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		unk_0xDEE4574BA71257AB(unk_0xD4E735F4B6A956AC());
		unk_0xB20B772FD9DE1847(unk_0xA19140A5C42D8715(), joaat("weapon_unarmed"), 1);
		unk_0x836A6A722DEA63F1(unk_0xA19140A5C42D8715());
	}
	unk_0xB29E08C7AB729BAD(unk_0xA19140A5C42D8715(), false);
	unk_0x62BAB49318F4FE6E(0);
	unk_0xFDD15D670AD33E10(uParam1->f_5, 15f, 1, 0, 0, 0);
	unk_0xE678AB2AEE807BC7();
	unk_0x59CC479D3D26F6B7();
	func_45();
	while (func_44())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x3A83743561B4F70C() && !unk_0x3BE8B7AEED1A3971())
	{
		unk_0x70C1F5AA59767FE6(250);
	}
	unk_0xC1D3387D1E48090E(1);
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		iVar4 = unk_0x70788DC3D80C9DEB(uParam1->f_5, uParam1->f_8, 2);
		unk_0xDA16255FBFC16B28(iVar4, 0);
		unk_0x52CEAE2B7DAC257E(iVar4, 0);
		uVar5 = unk_0x57FC10C74CC15F22("DEFAULT_ANIMATED_CAMERA", 1);
		iVar6 = 4;
		if (uParam1->f_4 != joaat("MotionState_Idle"))
		{
			iVar6 |= 2;
		}
		func_42(unk_0xA19140A5C42D8715(), uParam1->f_18);
		unk_0xE5565DEAABF9D588(unk_0xA19140A5C42D8715(), iVar4, *uParam1, uParam1->f_1, 1000f, -1.5f, iVar6, 0, 1148846080, 0);
		unk_0x95B68E9E16396953(unk_0xA19140A5C42D8715(), 1);
		unk_0xB31D66D2C6B08F39(unk_0xD4E735F4B6A956AC(), 1);
		iVar3 = unk_0x1F30A95E273DC3ED(unk_0xA19140A5C42D8715(), 77);
		unk_0xB0D7019224A3A443(unk_0xA19140A5C42D8715(), 77, 1);
		unk_0xF84EE501E63C86CF(uVar5, iVar4, uParam1->f_2, *uParam1);
		unk_0x8E88E73F74A9FF79(1, 0, 3000, 1, 0, 0);
		if (!unk_0x429D45A6C6520026(uParam1->f_16) && !unk_0x429D45A6C6520026(uParam1->f_17))
		{
			unk_0x3F01127ECD227890(unk_0xA19140A5C42D8715(), uParam1->f_16, uParam1->f_17, 1000f, -1.5f, 10000, 33, 0, 0, 0, 0);
		}
	}
	else
	{
		iVar4 = -1;
	}
	if (!uParam1->f_25)
	{
		if (!unk_0x429D45A6C6520026(sParam2))
		{
			func_41(sParam2, -1);
			uParam1->f_25 = 1;
		}
	}
	bVar7 = false;
	bVar8 = false;
	uVar9 = 16;
	if (!unk_0x429D45A6C6520026(&(uParam1->f_11)))
	{
		iVar174 = func_61();
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
		func_40(&uVar9, iVar175, unk_0xA19140A5C42D8715(), sVar176, 0, 1);
	}
	if (unk_0xFE5DE0C3200E00F2(iVar4))
	{
		sVar177 = "WalkInterruptible";
		sVar178 = "ForceBlendout";
		while (unk_0xFE5DE0C3200E00F2(iVar4) && !unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
		{
			if (!bVar8)
			{
				if (!unk_0x71364F510A1CB69F())
				{
					if (!unk_0x429D45A6C6520026(uParam1->f_26))
					{
						unk_0xE60B9F9B48D4783F(uParam1->f_26, 0, 0);
						bVar8 = true;
					}
					if (!unk_0x429D45A6C6520026(uParam1->f_27))
					{
						if (!unk_0x429D45A6C6520026(uParam1->f_28))
						{
							unk_0xE11F00B4AC919F45(-1, uParam1->f_28, uParam1->f_27, 0);
							bVar8 = true;
						}
						if (!unk_0x429D45A6C6520026(uParam1->f_29))
						{
							unk_0xE11F00B4AC919F45(-1, uParam1->f_29, uParam1->f_27, 0);
							bVar8 = true;
						}
					}
				}
			}
			unk_0x74BF5F6EEF62D5A9();
			unk_0xD8C147DA332E7F06(18);
			unk_0x4C24AD5797FDA636();
			func_35(0);
			iVar179 = unk_0xFD34717937104F1C();
			if (iVar179 >= (Global_36668 - 500))
			{
				func_34(4000);
			}
			fVar180 = -1f;
			fVar181 = -1f;
			fVar0 = unk_0x33CECDD9E141E18E(iVar4);
			if (!unk_0x429D45A6C6520026(&(uParam1->f_11)))
			{
				if (!bVar7)
				{
					if (fVar0 >= uParam1->f_15)
					{
						if (func_22(&uVar9, "PRSAUD", &(uParam1->f_11), 3, 0, 0, 0))
						{
							bVar7 = true;
						}
					}
				}
			}
			iVar182 = 0;
			if (unk_0xC621379C202E086C(unk_0xA19140A5C42D8715(), unk_0xFEB6EEC0545AF7AA(sVar177)))
			{
				iVar183 = (unk_0x55D3DD553C0E44E6(2, 195) - 128);
				iVar184 = (unk_0x55D3DD553C0E44E6(2, 196) - 128);
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
			if (unk_0x06EBD57CD6085DD1() == 4 && uParam1->f_52 > 0f)
			{
				if (fVar0 >= uParam1->f_52)
				{
					if (!uParam1->f_32)
					{
						fVar185 = 1.5f;
						Var186 = { unk_0x13C6B72A19970EAD() };
						Var189 = { unk_0x505186370955851F(unk_0xA19140A5C42D8715(), 31086, 0f, 0f, 0f) };
						fVar192 = unk_0x499324B3EF19C288(Var186, Var189, 1);
						fVar185 = func_21(fVar185, 0.001f, (fVar192 - 0.75f));
						if (fVar185 < 0f)
						{
							fVar185 = 0.001f;
						}
						func_20(&(uParam1->f_34), unk_0xA19140A5C42D8715(), func_61(), 1E-06f, 300, 300, 0, 0, 1045220557);
						func_19(&(uParam1->f_34), uParam1->f_53);
						if (!uParam1->f_33)
						{
							uParam1->f_34 = 1;
							uParam1->f_34.f_7 = unk_0xFD34717937104F1C();
							uParam1->f_34.f_8 = 0;
							uParam1->f_33 = 1;
						}
						if (uParam1->f_57 == 999f)
						{
							uParam1->f_56 = 0f;
						}
						if (uParam1->f_57 == 999f)
						{
							Var195 = { unk_0xB89F0BB02739BD58(2) };
							uVar198 = unk_0x552C823E1D2A019C(unk_0xA19140A5C42D8715());
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
						unk_0xAA32DD4848CF93E0(fVar193, 1065353216);
						unk_0xD87B76260C547F31(fVar194);
						unk_0xC84F46526D63779C(fVar193);
						unk_0x63F3FA4784A30B24(fVar194);
						Var201 = { unk_0x13C6B72A19970EAD() };
						Var204 = { unk_0x1E8E507A99E298E6() };
						fVar207 = unk_0x499324B3EF19C288(Var201, Var204, 1);
						iVar208 = unk_0xF2DB717A73826179((fVar207 * 1000f));
						uParam1->f_32 = 1;
					}
					if (uParam1->f_32)
					{
						unk_0x94772888431ECA28();
						if (func_16(&(uParam1->f_34), 1, 1, 1, 0, 0, 0))
						{
						}
					}
				}
			}
			if (unk_0xC621379C202E086C(unk_0xA19140A5C42D8715(), unk_0xFEB6EEC0545AF7AA(sVar178)) || iVar182)
			{
				if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
				{
					unk_0x9568B1B58F78FF36(unk_0xA19140A5C42D8715());
					switch (uParam1->f_4)
					{
						case joaat("MotionState_Idle"):
							unk_0xF757C0D3A087F145(unk_0xA19140A5C42D8715(), joaat("MotionState_Idle"), 1, 0, 0);
							unk_0xCE2F428A0EEBBE18(0, 0, 3, 0);
							break;
						
						case joaat("MotionState_Walk"):
							unk_0xF757C0D3A087F145(unk_0xA19140A5C42D8715(), joaat("MotionState_Walk"), 1, 0, 0);
							unk_0x0D73DFAB4EC83FF4(unk_0xD4E735F4B6A956AC(), 1f, 500, 0, 1, 0);
							if (unk_0x06EBD57CD6085DD1() != 4)
							{
								if (uParam1->f_31 == 999f)
								{
									uParam1->f_30 = 0f;
								}
								if (uParam1->f_31 == 999f)
								{
									Var211 = { unk_0xB89F0BB02739BD58(2) };
									uVar214 = unk_0x552C823E1D2A019C(unk_0xA19140A5C42D8715());
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
								unk_0xAA32DD4848CF93E0(fVar209, 1065353216);
								unk_0xD87B76260C547F31(fVar210);
								Var217 = { unk_0x13C6B72A19970EAD() };
								Var220 = { unk_0x1E8E507A99E298E6() };
								fVar223 = unk_0x499324B3EF19C288(Var217, Var220, 1);
								iVar224 = unk_0xF2DB717A73826179((fVar223 * 1000f));
								unk_0x8E88E73F74A9FF79(0, 1, iVar224, 0, 0, 0);
							}
							break;
						
						default:
							break;
					}
					if (unk_0xFE5DE0C3200E00F2(iVar4))
					{
						unk_0x35CE627A76E3DDF4(iVar4);
						iVar4 = -1;
					}
				}
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (!func_47(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		unk_0x387E83E60256EA18(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 1);
	}
	unk_0x962CF6A9EA6FDCAC(unk_0xD4E735F4B6A956AC(), true, 0);
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		unk_0x9568B1B58F78FF36(unk_0xA19140A5C42D8715());
	}
	bVar225 = unk_0x329BB61A853C50AA();
	bVar226 = false;
	if (uParam1->f_32)
	{
		unk_0x94772888431ECA28();
		if (!func_16(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
		{
			bVar226 = true;
		}
	}
	if (bVar225 || bVar226)
	{
		while ((bVar225 || bVar226) && !unk_0x47C3DC461C758C29())
		{
			if (bVar225)
			{
			}
			if (bVar226)
			{
			}
			iVar227 = 2;
			func_15(1, 26, &iVar227);
			func_15(1, 79, &iVar227);
			func_15(1, 1, &iVar227);
			func_15(1, 2, &iVar227);
			func_15(0, 22, &iVar227);
			func_15(0, 36, &iVar227);
			func_15(0, 142, &iVar227);
			func_15(0, 141, &iVar227);
			func_15(0, 140, &iVar227);
			func_15(0, 263, &iVar227);
			func_15(0, 264, &iVar227);
			unk_0x4EDE34FBADD967A6(0);
			bVar225 = unk_0x329BB61A853C50AA();
			bVar226 = false;
			if (uParam1->f_32)
			{
				unk_0x94772888431ECA28();
				if (!func_16(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
				{
					bVar226 = true;
				}
			}
		}
	}
	if (!unk_0x429D45A6C6520026(uParam1->f_16))
	{
		unk_0x4DC885EA8D6AF7FC(uParam1->f_16);
	}
	unk_0x4DC885EA8D6AF7FC(*uParam1);
	unk_0x77F0486CE0E598D5(uVar5, 0);
	func_13(&(uParam1->f_34));
	if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
	{
		unk_0xB0D7019224A3A443(unk_0xA19140A5C42D8715(), 77, iVar3);
		unk_0x33CF95E95A476FB9(unk_0xA19140A5C42D8715(), 0);
	}
	sParam0 = sParam0;
}

void func_13(var uParam0)
{
	func_14(uParam0);
	*uParam0 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
}

void func_14(var uParam0)
{
	if (unk_0x37B568B777BC65F9(uParam0->f_1))
	{
		unk_0x77F0486CE0E598D5(uParam0->f_1, 0);
	}
	if (unk_0x37B568B777BC65F9(uParam0->f_2))
	{
		unk_0x77F0486CE0E598D5(uParam0->f_2, 0);
	}
	if (unk_0x37B568B777BC65F9(uParam0->f_3))
	{
		unk_0x77F0486CE0E598D5(uParam0->f_3, 0);
	}
	if (unk_0x37B568B777BC65F9(uParam0->f_4))
	{
		unk_0x77F0486CE0E598D5(uParam0->f_4, 0);
	}
}

void func_15(int iParam0, int iParam1, int iParam2)
{
	unk_0xD481A812073CCF02(iParam0, iParam1, 1);
	*iParam2++;
}

int func_16(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
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
			func_17();
			if (!unk_0x7112137033807390(uParam0->f_5, 0))
			{
				func_14(uParam0);
				Var0 = { unk_0x13C6B72A19970EAD() };
				if (bParam1)
				{
					Var0 = { Var0 + unk_0x57323E573695B13F(uParam0->f_5) * FtoV(unk_0xDE089748C4C76C96()) };
				}
				Var3 = { unk_0x61141C81AF57CBDC(uParam0->f_5, Var0) };
				Var6 = { unk_0xB89F0BB02739BD58(2) };
				Var9 = { Var6 + uParam0->f_9 };
				Var12 = { Var9 - unk_0x288B716F47E9BBBC(uParam0->f_5, 2) };
				Var15 = { (-unk_0x0BADBFA3B172435F(Var9.f_2) * unk_0xD0FFB162F40A139C(Var9.f_0)), (unk_0xD0FFB162F40A139C(Var9.f_2) * unk_0xD0FFB162F40A139C(Var9.f_0)), unk_0x0BADBFA3B172435F(Var9.f_0) };
				Var18 = { (-unk_0x0BADBFA3B172435F(Var12.f_2) * unk_0xD0FFB162F40A139C(Var12.f_0)), (unk_0xD0FFB162F40A139C(Var12.f_2) * unk_0xD0FFB162F40A139C(Var12.f_0)), unk_0x0BADBFA3B172435F(Var12.f_0) };
				uVar21 = unk_0xFE38FABCB947043C();
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = unk_0x36F0F6FD9C57CAA2(1775630800, 0);
				}
				uParam0->f_1 = unk_0x36F0F6FD9C57CAA2(26379945, 1);
				if (bParam1)
				{
					unk_0xABE3EC0FA16227B5(uParam0->f_1, uParam0->f_5, Var3, 1);
				}
				else
				{
					unk_0x057123F3A835FE47(uParam0->f_1, Var0);
				}
				unk_0xC831502E35848BE4(uParam0->f_1, Var6, 2);
				unk_0xF62A5A3CB8DB2402(uParam0->f_1, uVar21);
				uParam0->f_2 = unk_0x36F0F6FD9C57CAA2(26379945, 1);
				if (bParam1 && !bParam4)
				{
					unk_0xABE3EC0FA16227B5(uParam0->f_2, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12), 1);
				}
				else
				{
					unk_0x057123F3A835FE47(uParam0->f_2, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12));
				}
				unk_0xC831502E35848BE4(uParam0->f_2, Var6, 2);
				unk_0xF62A5A3CB8DB2402(uParam0->f_2, uVar21);
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = unk_0x36F0F6FD9C57CAA2(26379945, 1);
					if (bParam1 && !bParam4)
					{
						unk_0xABE3EC0FA16227B5(uParam0->f_4, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13), 1);
					}
					else
					{
						unk_0x057123F3A835FE47(uParam0->f_4, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13));
					}
					unk_0xC831502E35848BE4(uParam0->f_4, Var6, 2);
					unk_0xF62A5A3CB8DB2402(uParam0->f_4, uVar21);
				}
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					unk_0x1B4C160CA2A30BF9(uParam0->f_3, uParam0->f_1, 0, 2);
					if (iParam6 == 0)
					{
						unk_0x1B4C160CA2A30BF9(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
					}
					unk_0x1B4C160CA2A30BF9(uParam0->f_3, uParam0->f_2, (uParam0->f_14 - uParam0->f_17), 2);
					unk_0xAD7559838BDE6F72(uParam0->f_3, iParam6);
					unk_0x930701157A4B9374(uParam0->f_3, 1);
				}
				else
				{
					unk_0xD21CD2A6F93F44A6(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
				unk_0x8E88E73F74A9FF79(1, 0, 3000, 1, 0, 0);
				uParam0->f_7 = unk_0xFD34717937104F1C();
				uParam0->f_8 = 0;
				*uParam0 = 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			func_17();
			if (bParam3)
			{
				if (!uParam0->f_8)
				{
					if (unk_0xFD34717937104F1C() >= (uParam0->f_7 + uParam0->f_16))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									unk_0xE60B9F9B48D4783F("CamPushInFranklin", 0, 0);
									break;
								
								case 0:
									unk_0xE60B9F9B48D4783F("CamPushInMichael", 0, 0);
									break;
								
								case 2:
									unk_0xE60B9F9B48D4783F("CamPushInTrevor", 0, 0);
									break;
							}
						}
						else
						{
							unk_0xE60B9F9B48D4783F("CamPushInNeutral", 0, 0);
						}
						unk_0xE11F00B4AC919F45(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						uParam0->f_8 = 1;
					}
				}
			}
			if (unk_0xFD34717937104F1C() >= (uParam0->f_7 + uParam0->f_15))
			{
				if (bParam2)
				{
					func_14(uParam0);
					unk_0x8E88E73F74A9FF79(0, 0, 3000, 1, 0, 0);
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

void func_17()
{
	unk_0x906EA681A50D5E9C();
	func_18();
}

void func_18()
{
	Global_17228.f_134 = 1;
}

void func_19(var uParam0, struct<3> Param1)
{
	uParam0->f_9 = { Param1 };
}

void func_20(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

float func_21(float fParam0, float fParam1, float fParam2)
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

bool func_22(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_33(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15829 = 0;
	Global_15831 = 0;
	Global_15836 = 0;
	Global_16813 = 0;
	Global_16815 = 0;
	Global_16819 = 0;
	Global_2621441 = 0;
	return func_23(sParam2, iParam3, 0);
}

int func_23(char* sParam0, int iParam1, bool bParam2)
{
	Global_15823 = 0;
	if (Global_15822 == 0 || Global_15824 == 2)
	{
		if (Global_15822 != 0)
		{
			if (iParam1 > Global_15824)
			{
				if (Global_15829 == 0)
				{
					unk_0xA8B97F91CBDE376C(0);
					Global_14513.f_1 = 3;
					Global_15822 = 0;
					Global_15823 = 1;
					Global_15875 = 0;
					Global_15818 = 0;
					Global_15819 = 0;
					Global_15833 = 0;
					Global_15832 = 0;
					Global_14512 = 0;
				}
				else
				{
					func_32();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x904275961B875DEB())
		{
			return 0;
		}
		if (func_31(8, -1))
		{
			return 0;
		}
		Global_15898 = { Global_15892 };
		func_30();
		Global_15111 = { Global_15276 };
		Global_15828 = Global_15829;
		Global_15835 = Global_15836;
		Global_2621442 = Global_2621441;
		Global_15837 = { Global_15853 };
		Global_15830 = Global_15831;
		Global_16812 = Global_16813;
		Global_16820 = { Global_16826 };
		Global_16814 = Global_16815;
		Global_16816 = Global_16817;
		Global_16818 = Global_16819;
		Global_15441.f_370 = Global_16811;
		Global_15441.f_368 = Global_16809;
		Global_15441.f_369 = Global_16810;
		Global_15818 = Global_15819;
		if (Global_15828)
		{
			unk_0xFA57C719261AA55D(&Global_2383, 20);
			unk_0xFA57C719261AA55D(&Global_2384, 17);
			unk_0xFA57C719261AA55D(&Global_2385, 0);
			if (bParam2)
			{
				func_28();
				if (Global_3188[Global_14513 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14513.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14479 == 1)
			{
				return 0;
			}
			if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
			{
				if (unk_0x6625F609B391348E(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
				if (func_27())
				{
					return 0;
				}
				if (unk_0x331BE13D31DFA36A(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
				if (unk_0x685AE6AF34B35D3B(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
				if (unk_0x3977B7555441B490(unk_0xA19140A5C42D8715()))
				{
					return 0;
				}
				if (unk_0x45F0F396A506B7CD(unk_0xA19140A5C42D8715(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_71205)
				{
					if (unk_0x4374EED90C523366(unk_0xA19140A5C42D8715()))
					{
						return 0;
					}
					if (unk_0x426122A77B3391B0(unk_0xD4E735F4B6A956AC()))
					{
						return 0;
					}
					if (unk_0x1CD6AC2CF787DFCB(unk_0xA19140A5C42D8715()))
					{
						return 0;
					}
					if (unk_0x53B0513B47405A70(unk_0xD4E735F4B6A956AC()))
					{
						return 0;
					}
				}
			}
			if (func_26())
			{
				return 0;
			}
			else
			{
				switch (Global_14513.f_1)
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
				if (unk_0x05EFB6A616B6FADE(Global_2383, 9))
				{
					return 0;
				}
			}
			func_25();
			Global_15832 = bParam2;
		}
		Global_15824 = iParam1;
		StringCopy(&Global_15441, sParam0, 24);
		Global_14688 = 0;
		func_24();
		return 1;
	}
	if (Global_15822 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15824 || iParam1 == Global_15824)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_32();
	}
	return 0;
}

void func_24()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14690[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xA8B97F91CBDE376C(0);
	Global_15822 = 1;
}

void func_25()
{
	Global_15875 = Global_15874;
	Global_15869 = Global_15870;
	Global_15916 = { Global_15904 };
	Global_15922 = { Global_15910 };
	Global_15877 = Global_15876;
	Global_15946 = { Global_15928 };
	Global_15952 = { Global_15934 };
	Global_15958 = { Global_15940 };
	Global_15964 = { Global_15970 };
	Global_1698 = Global_1699;
	Global_1700 = Global_1701;
	Global_15833 = Global_15834;
	Global_15835 = Global_15836;
	Global_15837 = { Global_15853 };
	Global_15826 = Global_15827;
	Global_16838 = 0;
	Global_15871 = 0;
	Global_15872 = 0;
	unk_0xFA57C719261AA55D(&Global_2384, 16);
}

int func_26()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_27()
{
	int iVar0;
	int iVar1;
	
	if (Global_71205)
	{
		iVar0 = 0;
		unk_0xF990CFC0F1D94A39(unk_0xA19140A5C42D8715(), &iVar1, 1);
		if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xEA8B3B18A25152B5() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		if (unk_0x70F79B0BFBB1E7AC(unk_0xA19140A5C42D8715(), 78, 1))
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

void func_28()
{
	if (func_29(14))
	{
		if (!unk_0x7112137033807390(unk_0xA19140A5C42D8715(), 0))
		{
			if (unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()) == Global_106070.f_28022[0 /*29*/])
			{
				Global_14513 = 0;
			}
			else if (unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()) == Global_106070.f_28022[1 /*29*/])
			{
				Global_14513 = 1;
			}
			else if (unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()) == Global_106070.f_28022[2 /*29*/])
			{
				Global_14513 = 2;
			}
			else
			{
				Global_14513 = 0;
			}
		}
	}
	else
	{
		Global_14513 = func_61();
		if (Global_14513 == 145)
		{
			Global_14513 = 3;
		}
		if (Global_71205)
		{
			Global_14513 = 3;
		}
		if (Global_14513 > 3)
		{
			Global_14513 = 3;
		}
	}
}

bool func_29(int iParam0)
{
	return Global_36117 == iParam0;
}

void func_30()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15111[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15111[iVar0 /*10*/].f_1), "", 24);
		Global_15111[iVar0 /*10*/].f_7 = 0;
		Global_15111[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15111.f_161 = -99;
	Global_15111.f_162 = { 0f, 0f, 0f };
}

bool func_31(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1368245.f_203[iParam1];
			}
			break;
	}
	return unk_0x05EFB6A616B6FADE(Global_1368245.f_1048, iParam0);
}

void func_32()
{
	unk_0xB4E5B1A6FE923ECB();
	Global_16833 = 0;
	if ((unk_0xB39808C1DCE0DCFA() || Global_14513.f_1 == 9) || Global_14512 == 1)
	{
		unk_0xA8B97F91CBDE376C(0);
		Global_15822 = 6;
		Global_14513.f_1 = 3;
		return;
	}
	if (unk_0x904275961B875DEB())
	{
		unk_0xA8B97F91CBDE376C(1);
		Global_15822 = 6;
		return;
	}
}

void func_33(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15276 = { *uParam0 };
	Global_1699 = iParam1;
	StringCopy(&Global_15892, sParam2, 24);
	Global_16811 = uParam5;
	if (iParam3 == 0)
	{
		Global_16809 = 1;
		Global_16807 = 0;
	}
	else
	{
		Global_16809 = 0;
		Global_16807 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16810 = 1;
		Global_16808 = 0;
	}
	else
	{
		Global_16810 = 0;
		Global_16808 = 1;
	}
}

void func_34(int iParam0)
{
	Global_36668 = (unk_0xFD34717937104F1C() + iParam0);
}

void func_35(int iParam0)
{
	if (func_39())
	{
		return;
	}
	if (!Global_14513.f_1 == 1)
	{
		if (func_38(0))
		{
			func_36(iParam0);
		}
		unk_0x2BCFB39E86340DAA(&Global_2384, 2);
	}
}

void func_36(int iParam0)
{
	if (func_39())
	{
		return;
	}
	if (Global_14681)
	{
		func_37(0, 0);
	}
	if (Global_14513.f_1 == 10 || Global_14513.f_1 == 9)
	{
		unk_0x2BCFB39E86340DAA(&Global_2384, 16);
	}
	if (unk_0xB39808C1DCE0DCFA())
	{
		unk_0xA8B97F91CBDE376C(0);
	}
	Global_15822 = 5;
	if (iParam0 == 1)
	{
		unk_0x2BCFB39E86340DAA(&Global_2383, 30);
	}
	else
	{
		unk_0xFA57C719261AA55D(&Global_2383, 30);
	}
	if (!func_26())
	{
		Global_14513.f_1 = 3;
	}
}

void func_37(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_38(0))
		{
			Global_14681 = 1;
			if (bParam1)
			{
				unk_0x75B4B390EE495A3B(&Global_14450);
			}
			Global_14441 = { Global_14459[Global_14458 /*3*/] };
			unk_0xB8927E9A664047D4(Global_14441);
		}
	}
	else if (Global_14681 == 1)
	{
		Global_14681 = 0;
		Global_14441 = { Global_14466[Global_14458 /*3*/] };
		if (bParam1)
		{
			unk_0xB8927E9A664047D4(Global_14450);
		}
		else
		{
			unk_0xB8927E9A664047D4(Global_14441);
		}
	}
}

int func_38(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14513.f_1 > 3)
		{
			if (unk_0x05EFB6A616B6FADE(Global_2383, 14))
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
	if (unk_0x8B1574454E8C2421(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14513.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_39()
{
	return unk_0x05EFB6A616B6FADE(Global_1678593, 19);
}

void func_40(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_71205)
	{
		if (!unk_0x4915F4759304D5CF(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xB583A7C3FEE69710(iParam2, 0);
			}
			else
			{
				unk_0xB583A7C3FEE69710(iParam2, 1);
			}
		}
		if (!unk_0x4915F4759304D5CF(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x9D01B1015AD5A3C8(iParam2, 0);
			}
			else
			{
				unk_0x9D01B1015AD5A3C8(iParam2, 1);
			}
		}
	}
}

void func_41(char* sParam0, int iParam1)
{
	unk_0x143A55A4EA118F24(sParam0);
	unk_0x9E55AC8543FF8836(0, 0, 1, iParam1);
}

void func_42(int iParam0, var uParam1)
{
	if (func_43(uParam1, 1))
	{
		unk_0x974130F0C9F6891D(iParam0, "HOSPITAL_0", 0f, 1f);
	}
	if (func_43(uParam1, 2))
	{
		unk_0x974130F0C9F6891D(iParam0, "HOSPITAL_1", 0f, 1f);
	}
	if (func_43(uParam1, 4))
	{
		unk_0x974130F0C9F6891D(iParam0, "HOSPITAL_2", 0f, 1f);
	}
	if (func_43(uParam1, 8))
	{
		unk_0x974130F0C9F6891D(iParam0, "HOSPITAL_3", 0f, 1f);
	}
	if (func_43(uParam1, 16))
	{
		unk_0x974130F0C9F6891D(iParam0, "HOSPITAL_4", 0f, 1f);
	}
	if (func_43(uParam1, 32))
	{
		unk_0x974130F0C9F6891D(iParam0, "HOSPITAL_5", 0f, 1f);
	}
	if (func_43(uParam1, 64))
	{
		unk_0x974130F0C9F6891D(iParam0, "HOSPITAL_6", 0f, 1f);
	}
	if (func_43(uParam1, 128))
	{
		unk_0x974130F0C9F6891D(iParam0, "HOSPITAL_7", 0f, 1f);
	}
	if (func_43(uParam1, 256))
	{
		unk_0x974130F0C9F6891D(iParam0, "HOSPITAL_8", 0f, 1f);
	}
	if (func_43(uParam1, 512))
	{
		unk_0x974130F0C9F6891D(iParam0, "HOSPITAL_9", 0f, 1f);
	}
	if (func_43(uParam1, 0))
	{
	}
}

bool func_43(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_44()
{
	if (((Global_93232 == 13 || Global_93232 == 10) || Global_93232 == 11) || Global_93232 == 12)
	{
		return 0;
	}
	return 1;
}

void func_45()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_90260[iVar0 /*17*/] && !Global_90260[iVar0 /*17*/].f_1)
		{
			if (Global_90260[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_90260[iVar0 /*17*/].f_5 != 88 && Global_90260[iVar0 /*17*/].f_5 != 89) && Global_90260[iVar0 /*17*/].f_5 != 92)
				{
					func_46(Global_90260[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_46(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_87312[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_87312[iParam0 /*2*/] = 0;
	}
}

bool func_47(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_48()
{
	func_49();
	func_66(1);
}

void func_49()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		iVar1 = Global_37058[iVar0 /*5*/];
		if (!iVar1 == -1)
		{
			func_150(1, iVar1, 1);
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_37032[iVar2 /*5*/] == 0)
		{
			func_50(iVar2);
		}
		iVar2++;
	}
}

void func_50(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_37032[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_37032[iParam0 /*5*/].f_1 == unk_0xA19140A5C42D8715())
		{
			Global_37269 = 0;
		}
	}
	Global_37032[iParam0 /*5*/] = 13;
	Global_37032[iParam0 /*5*/].f_1 = 0;
	Global_37032[iParam0 /*5*/].f_2 = 0;
	Global_37032[iParam0 /*5*/].f_3 = 0;
	Global_37032[iParam0 /*5*/].f_4 = 0;
	Global_37031 = (Global_37031 - 1);
	if (Global_37031 < 0)
	{
		Global_37031 = 0;
	}
}

int func_51(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	if (unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		func_55(0);
		unk_0xFDD15D670AD33E10(Param0, 5f, 1, 0, 0, 0);
		if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
		{
			if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
			{
				unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), Param0, 1, 0, 0, 1);
				unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), uParam3);
				unk_0xAA32DD4848CF93E0(0f, 1065353216);
				unk_0xD87B76260C547F31(0f);
			}
		}
		unk_0x543A213BF1AB6832(Param0, 4500f, 0);
		unk_0x4EDE34FBADD967A6(0);
		unk_0xFDD15D670AD33E10(Param0, 5000f, 1, 0, 0, 0);
		unk_0x39F8A3E01BC1A69B(Param0, 5000f, 0);
		unk_0xC8F6C7A08A4B067D(Param0, 5000f);
		unk_0x8566A4AC1CA77939(Param0, 5000f);
		func_54();
		func_53();
		unk_0xC1B1E9A034A63A62(0);
		func_55(1);
		if (!unk_0xE6F861B0A4D50CE0())
		{
			while (!unk_0x543A213BF1AB6832(Param0, 4500f, 0))
			{
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					unk_0x62BAB49318F4FE6E(0);
					return 0;
				}
			}
		}
		unk_0xC1B1E9A034A63A62(0);
		while (!unk_0xD3512CB88BB3513F())
		{
			unk_0x4EDE34FBADD967A6(0);
			if (unk_0x83666F9FB8FEBD4B() > 20000)
			{
				unk_0x62BAB49318F4FE6E(0);
				if (unk_0xE6F861B0A4D50CE0())
				{
					unk_0x99D88BBC8B927586();
				}
				return 0;
			}
		}
		if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
		{
			if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
			{
				if (unk_0xE6F861B0A4D50CE0())
				{
					unk_0x99D88BBC8B927586();
				}
				unk_0x62BAB49318F4FE6E(0);
				unk_0xC1B1E9A034A63A62(0);
				unk_0xE678AB2AEE807BC7();
				if (iParam5 == 1)
				{
					unk_0x59CC479D3D26F6B7();
				}
				else
				{
					unk_0xC1B1E9A034A63A62(5000);
				}
				unk_0x7329D9D6A88DE5F3();
			}
		}
		while ((!unk_0xF01711E193A8A023() && !func_52()) && unk_0x83666F9FB8FEBD4B() < 1500)
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
			unk_0x8F7BA8E028ADF980(Param0, &(Param0.f_2), 0, 0);
			unk_0xFDD15D670AD33E10(Param0, 5f, 1, 0, 0, 0);
			if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
			{
				if (!unk_0x4915F4759304D5CF(unk_0xA19140A5C42D8715()))
				{
					unk_0x4299736016AECE26(unk_0xA19140A5C42D8715(), Param0, 1, 0, 0, 1);
					unk_0x92DDCF53AA47A63D(unk_0xA19140A5C42D8715(), uParam3);
				}
			}
		}
		unk_0xAA32DD4848CF93E0(0f, 1065353216);
		unk_0xD87B76260C547F31(0f);
		func_55(0);
		return 1;
	}
	func_55(0);
	return 0;
}

bool func_52()
{
	return !Global_70024.f_553;
}

void func_53()
{
	Global_70024.f_553 = 1;
	Global_70024.f_554 = 0;
}

void func_54()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		Global_70024[iVar0] = 0;
		iVar0++;
	}
}

void func_55(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!unk_0x05EFB6A616B6FADE(Global_93232.f_20, 2))
			{
				unk_0x62BAB49318F4FE6E(1);
				unk_0x2BCFB39E86340DAA(&(Global_93232.f_20), 2);
			}
		}
		else if (unk_0x05EFB6A616B6FADE(Global_93232.f_20, 2))
		{
			unk_0x62BAB49318F4FE6E(0);
			unk_0xFA57C719261AA55D(&(Global_93232.f_20), 2);
		}
	}
}

int func_56()
{
	if (unk_0x05EFB6A616B6FADE(unk_0x22C775856F4633CA(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

bool func_57(int iParam0)
{
	return unk_0x05EFB6A616B6FADE(Global_106070.f_7201[iParam0], 0);
}

int func_58(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106070.f_9057.f_99.f_58[iParam0];
}

int func_59()
{
	if (Global_33482[11] == 1)
	{
		return 4;
	}
	if (!func_60(21))
	{
		return 0;
	}
	if (!func_58(130))
	{
		return 1;
	}
	if (!func_58(131))
	{
		return 2;
	}
	if (!func_60(22))
	{
		return 1;
	}
	if (!func_60(49))
	{
		return 3;
	}
	if (!func_60(28))
	{
		return 1;
	}
	return 3;
}

int func_60(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106070.f_9057.f_330[iParam0 /*6*/];
}

int func_61()
{
	func_62();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_62()
{
	int iVar0;
	
	if (unk_0xDC5D81351D6A4DDB(unk_0xA19140A5C42D8715()))
	{
		if (func_65(Global_106070.f_2355.f_539.f_4301) != unk_0x8F474E419F56E48D(unk_0xA19140A5C42D8715()))
		{
			iVar0 = func_64(unk_0xA19140A5C42D8715());
			if (func_63(iVar0) && (!func_29(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_63(Global_106070.f_2355.f_539.f_4301))
				{
					Global_106070.f_2355.f_539.f_4302 = Global_106070.f_2355.f_539.f_4301;
				}
				Global_106070.f_2355.f_539.f_4303 = iVar0;
				Global_106070.f_2355.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_106070.f_2355.f_539.f_4301 != 145)
			{
				Global_106070.f_2355.f_539.f_4303 = Global_106070.f_2355.f_539.f_4301;
			}
			return;
		}
	}
	Global_106070.f_2355.f_539.f_4301 = 145;
}

bool func_63(int iParam0)
{
	return iParam0 < 3;
}

int func_64(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xDC5D81351D6A4DDB(iParam0))
	{
		iVar1 = unk_0x8F474E419F56E48D(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_65(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_65(int iParam0)
{
	if (func_63(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_66(bool bParam0)
{
	unk_0xBDA379F3B77CF80F(0f);
	unk_0xC4B76E16F851F655(0f);
	unk_0x7FBDB532BD6CB0B7(0f);
	unk_0xC06F936994838086(1);
	unk_0xE2F975E1D0159C25(0f);
	unk_0x1B5E87701C10854A(1);
	unk_0x29F5EC2C1FC86D0C(0);
	if (unk_0x2F8EAF18929E1E59("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0x5AD7D03C214BDA88("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0x429D45A6C6520026(&Global_37249))
	{
		if (unk_0x2F8EAF18929E1E59(&Global_37249))
		{
			unk_0x5AD7D03C214BDA88(&Global_37249);
		}
	}
	if (unk_0x37B568B777BC65F9(Global_37238))
	{
		if (unk_0x3D3828E711B990EF(Global_37238))
		{
			unk_0x5B4C55F5FAE423BE(Global_37238, 0f);
			unk_0x0F5AD734321B3CBC(Global_37238, 1);
		}
	}
	if (unk_0x5B1F43E517A1588D())
	{
		unk_0xF3D41ED309762C0D(0);
	}
	if (bParam0)
	{
		if (unk_0xDB92474F03E22534() != -1 || unk_0xAB9D24665E5A0F61() != -1)
		{
			unk_0x11E3FD49051E434D();
		}
		else if (unk_0x47C3DC461C758C29())
		{
			unk_0x11E3FD49051E434D();
		}
	}
	Global_37244 = 0f;
	StringCopy(&Global_37245, "", 16);
	StringCopy(&Global_37249, "", 64);
	StringCopy(&Global_37265, "", 16);
	func_67();
}

void func_67()
{
	Global_37237 = 0;
	Global_37238 = 0;
	Global_37239 = 0;
	Global_37240 = 30000;
	Global_37241 = 0f;
	Global_37243 = 0f;
	Global_37242 = 0f;
	Global_37244 = 0f;
	StringCopy(&Global_37245, "", 16);
}

void func_68(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_262145.f_17562;
			break;
		
		case 1:
			iVar0 = Global_262145.f_17552;
			break;
		
		case 2:
			iVar0 = Global_262145.f_17563;
			break;
		
		case 3:
			iVar0 = Global_262145.f_17555;
			break;
		
		case 4:
			iVar0 = Global_262145.f_17551;
			break;
		
		case 6:
			iVar0 = 3;
			break;
		
		case 7:
			iVar0 = Global_262145.f_17566;
			break;
		
		case 8:
			iVar0 = Global_262145.f_17567;
			break;
		
		case 9:
			iVar0 = Global_262145.f_17570;
			break;
		
		case 22:
			iVar0 = Global_262145.f_17571;
			break;
		
		case 23:
			iVar0 = Global_262145.f_17564;
			break;
		
		case 25:
			iVar0 = Global_262145.f_18452;
			break;
		
		case 26:
			iVar0 = Global_262145.f_18451;
			break;
	}
	if (iVar0 != 0)
	{
		unk_0x96A237505F2C30D0(func_79(func_80()), func_77(func_80()), func_76(), func_75(), iParam0, iVar0);
	}
	func_74(iVar0);
	func_69(iVar0);
}

void func_69(int iParam0)
{
	int iVar0;
	
	iVar0 = func_73(3968, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11.f_449 = iVar0;
	func_70(3968, iVar0, -1, 1, 0);
}

void func_70(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_71(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x93180BE33E7149EF(iVar0, iParam1, iParam3);
	}
}

int func_71(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_72();
		if (iVar1 > -1)
		{
			Global_2535232 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2535232 = 1;
		}
	}
	return iVar0;
}

int func_72()
{
	return Global_1312736;
}

int func_73(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2535519[iParam0 /*3*/][func_71(iParam1)];
	if (unk_0x2AD48F3CEBA882E9(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_74(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xD4E735F4B6A956AC();
	Global_1625435[iVar0 /*560*/].f_11.f_448 = (Global_1625435[iVar0 /*560*/].f_11.f_448 + iParam0);
	if (Global_1625435[iVar0 /*560*/].f_11.f_448 < -9999)
	{
		Global_1625435[iVar0 /*560*/].f_11.f_448 = 9999;
	}
	else if (Global_1625435[iVar0 /*560*/].f_11.f_448 > 9999)
	{
		Global_1625435[iVar0 /*560*/].f_11.f_448 = 9999;
	}
}

int func_75()
{
	if (Global_1666806.f_3 != 0)
	{
		return Global_1666806.f_3;
	}
	return -1;
}

int func_76()
{
	if (Global_1666806.f_2 != 0)
	{
		return Global_1666806.f_2;
	}
	return -1;
}

int func_77(int iParam0)
{
	if (iParam0 == func_78())
	{
		return -1;
	}
	return Global_1625435[iParam0 /*560*/].f_11.f_8[1];
}

int func_78()
{
	return -1;
}

int func_79(int iParam0)
{
	if (iParam0 == func_78())
	{
		return -1;
	}
	return Global_1625435[iParam0 /*560*/].f_11.f_8[0];
}

int func_80()
{
	return Global_1625435[unk_0xD4E735F4B6A956AC() /*560*/].f_11;
}

bool func_81(bool bParam0)
{
	return func_82(unk_0xD4E735F4B6A956AC(), bParam0);
}

int func_82(int iParam0, bool bParam1)
{
	return func_83(iParam0, bParam1, 1);
}

int func_83(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_78())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_84(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1625435[iParam0 /*560*/].f_11;
	if (iVar0 != func_78() && Global_1625435[iVar0 /*560*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_84(int iParam0, int iParam1)
{
	if (iParam0 != func_78())
	{
		if (Global_1625435[iParam0 /*560*/].f_11 != func_78())
		{
			if (Global_1625435[iParam0 /*560*/].f_11 == iParam0 && Global_1625435[iParam0 /*560*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_85(int iParam0, bool bParam1, int iParam2)
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
		if (unk_0x7627C34551D75293())
		{
			unk_0x65227735B3827631(0);
		}
	}
	if (!unk_0x4C9BACA8D249CB13())
	{
		uVar0 = iParam2;
		unk_0x962CF6A9EA6FDCAC(iParam0, bParam1, uVar0);
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
		if (!func_93())
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
		if (unk_0xC77FA683E9BB485B(iParam0) && unk_0x58E3CCF930D23BD5(iParam0))
		{
			iVar25 = unk_0xEE978C39384D834F(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x4C9BACA8D249CB13())
				{
					unk_0xB4F8FDD2A8432441(1);
				}
				else if (bVar13 || (!func_91(unk_0xD4E735F4B6A956AC(), 0) && !func_90()))
				{
					unk_0x7C73A424F1117528(iVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0x4C9BACA8D249CB13() && !bVar18)
					{
						unk_0xB4F8FDD2A8432441(0);
					}
					Global_2423801[iParam0 /*413*/].f_244 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_89(iVar25) && !unk_0xA118174015ACCF05(iVar25))
				{
					if (!bVar21)
					{
						unk_0xDCFB67537602326F(iVar25, true, 0);
					}
				}
				if (!unk_0xF797E4DD45066C88(iVar25))
				{
					if (!bVar20)
					{
						unk_0xB29E08C7AB729BAD(iVar25, false);
					}
					unk_0xEAF1F3E17588C851(iVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0xB29E08C7AB729BAD(iVar25, false);
				}
				unk_0x96BFF0680C7B6FD5(iVar25, true);
				unk_0xEF06BE39D11763FC(iParam0, 0);
				unk_0x052E058A2C50C7D6(iParam0, 0);
				if (unk_0x07E3832452A79D33(iVar25) && unk_0x7434BD0C92483685(iVar25))
				{
					unk_0xE7BD42D7C76057DE(iVar25);
				}
				unk_0x2D2E827C6C3D6D26(iVar25, 1);
				if (unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()) == 0)
				{
					func_88();
					func_87();
				}
				if (unk_0x17A40E4EAE8629CE())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0xE6F861B0A4D50CE0())
				{
				}
				Global_2423801[iParam0 /*413*/].f_245 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
				if (Global_2405070.f_2663)
				{
					Global_2405070.f_2663 = 0;
				}
			}
			else
			{
				if (!func_89(iVar25) && !unk_0xA118174015ACCF05(iVar25))
				{
					if (!bVar21)
					{
						unk_0xDCFB67537602326F(iVar25, !bVar14, 0);
					}
					if (!unk_0xF797E4DD45066C88(iVar25))
					{
						if (!bVar20)
						{
							unk_0xB29E08C7AB729BAD(iVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0xEAF1F3E17588C851(iVar25, 1);
						}
					}
					if (func_86(Global_4456448.f_152990))
					{
						unk_0xB29E08C7AB729BAD(iVar25, true);
					}
				}
				if (Global_1312834)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					unk_0xEF06BE39D11763FC(iParam0, 0);
				}
				else
				{
					unk_0xEF06BE39D11763FC(iParam0, 1);
				}
				unk_0x96BFF0680C7B6FD5(iVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0x8C432EAAB21379FE(iVar25) && !unk_0x5D7DFE2058701942(iVar25, 0))
					{
						unk_0x836A6A722DEA63F1(iVar25);
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
			unk_0x962CF6A9EA6FDCAC(iParam0, bParam1, iVar26);
		}
	}
}

bool func_86(int iParam0)
{
	return iParam0 == 17;
}

void func_87()
{
	struct<3> Var0;
	
	Global_2437022.f_1228 = 0;
	Global_2437022.f_1229 = 0;
	Global_2437022.f_1230 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2437022.f_1235 = -1;
	Global_2437022.f_1236 = 0;
	Global_2405070.f_2674 = { Var0 };
}

void func_88()
{
	Global_2405070.f_691 = 0;
	Global_2405070.f_2717 = 0;
	Global_2405070.f_509 = 0;
	Global_2405070.f_597 = 0;
	Global_2423801[unk_0xD4E735F4B6A956AC() /*413*/].f_207 = 0;
	Global_2405070.f_2672 = 0;
}

int func_89(int iParam0)
{
	int iVar0;
	
	if (unk_0x5D7DFE2058701942(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xF9D4EF1338E38AFB(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_90()
{
	return unk_0x05EFB6A616B6FADE(Global_2359302, 3);
}

bool func_91(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xD4E735F4B6A956AC())
	{
		bVar0 = func_92(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589747[iParam0 /*790*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xC77FA683E9BB485B(iParam0))
		{
			bVar0 = unk_0xE46ECB9FD23D3264(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_92(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_72();
	}
	if (Global_1312837[iVar1] == 1)
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

int func_93()
{
	if (func_94() == 0)
	{
		return 1;
	}
	return 0;
}

int func_94()
{
	return Global_1312466.f_18;
}

void func_95(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x4C9BACA8D249CB13() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xFFCC7EBF88BDEE54();
			}
			else
			{
				*uParam0 = unk_0x7546CD2A62C6DBB6();
			}
		}
		else
		{
			*uParam0 = unk_0xFD34717937104F1C();
		}
		uParam0->f_1 = 1;
	}
}

void func_96()
{
	int iVar0;
	
	if (bLocal_50)
	{
		return;
	}
	Local_43.f_4 = 0;
	if (!func_97(Global_37058[iLocal_64 /*5*/].f_2))
	{
		return;
	}
	iVar0 = unk_0x22C775856F4633CA(500, 3000);
	Local_60.f_0 = 5;
	Local_55.f_2 = (unk_0x83666F9FB8FEBD4B() + iVar0);
}

int func_97(int iParam0)
{
	int iVar0;
	var uVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	
	iVar0 = func_108();
	if (iVar0 == -2)
	{
		return 0;
	}
	if (unk_0x4915F4759304D5CF(Local_43.f_1))
	{
		if (unk_0x5D7DFE2058701942(Local_43.f_1, 0) || unk_0x3D77D31E25961596(Local_43.f_1))
		{
			return 0;
		}
		if (unk_0x5A64D21C202C9E32(Local_43.f_1))
		{
			return 0;
		}
		if (func_104(Local_43.f_1))
		{
			return 0;
		}
	}
	if ((Global_37058[iLocal_64 /*5*/].f_3 < 3 && Global_37058[iLocal_64 /*5*/].f_3 != 0) && Global_37058[iLocal_64 /*5*/].f_3 > Global_37058[iLocal_64 /*5*/].f_4)
	{
		return 0;
	}
	if ((Global_37058[iLocal_64 /*5*/].f_4 < 9 && Global_37058[iLocal_64 /*5*/].f_4 != 0) && Global_37058[iLocal_64 /*5*/].f_4 > Global_37058[iLocal_64 /*5*/].f_3)
	{
		return 0;
	}
	uVar1 = func_103(iParam0);
	if (unk_0x429D45A6C6520026(uVar1))
	{
		return 0;
	}
	if (func_104(Local_43.f_1))
	{
		return 0;
	}
	unk_0x4069FC25AC4F1CFB(sVar1);
	if (func_100(Local_43.f_1))
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
		if (!unk_0x429D45A6C6520026(sVar2) && !unk_0x429D45A6C6520026(sVar3))
		{
			unk_0x6D68030C791111E0(sVar2);
			while (!unk_0x39C2D9AB77873F84(sVar2))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (!unk_0x4915F4759304D5CF(Local_43.f_1))
			{
				unk_0x3F01127ECD227890(Local_43.f_1, sVar2, sVar3, 1.5f, -1.5f, -1, 48, 0, 0, 0, 0);
				sLocal_54 = sVar3;
			}
		}
	}
	if (!unk_0xD7AFBCBD45CE1D9D(sVar1))
	{
		return 0;
	}
	if (unk_0x4915F4759304D5CF(Local_43.f_1))
	{
		return 0;
	}
	unk_0x6D9BE0B9D5BA1106(Local_43.f_1, sVar1, 0.75f);
	if (unk_0x06EBD57CD6085DD1() == 4)
	{
		unk_0xC57C89EAC1DD82D7(Local_43.f_1, "move_ped_strafing_firstperson@drunk");
	}
	unk_0x9E339DB043314C12(Local_43.f_1, 0, sVar1, "idle", 2f, 1);
	Local_60.f_2 = sVar1;
	bLocal_51 = true;
	iVar4 = 0;
	switch (func_64(Local_43.f_1))
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
			if (unk_0xC085874FDE5FE33A(Local_43.f_1))
			{
				if (!func_98())
				{
					iVar4 = "FACIALS@GEN_MALE@BASE";
				}
				else
				{
					iVar4 = "FACIALS@GEN_FEMALE@BASE";
				}
			}
			else if (unk_0x18F3A53F9DAFB8C9(Local_43.f_1))
			{
				iVar4 = "FACIALS@GEN_MALE@BASE";
			}
			else
			{
				iVar4 = "FACIALS@GEN_FEMALE@BASE";
			}
			break;
	}
	unk_0xDFE3D9A662CDD63B(Local_43.f_1, "mood_drunk_1", iVar4);
	unk_0xB0D7019224A3A443(Local_43.f_1, 200, 1);
	unk_0xB0D7019224A3A443(Local_43.f_1, 46, 1);
	unk_0xB583A7C3FEE69710(Local_43.f_1, 0);
	unk_0xC2C4AE9DB4A0BEF3(Local_43.f_1, 262144, 1);
	unk_0x3EF17AB0CB711DA0(Local_43.f_1, 1);
	return 1;
}

bool func_98()
{
	return func_99(unk_0xD4E735F4B6A956AC());
}

int func_99(int iParam0)
{
	if (unk_0x8F474E419F56E48D(unk_0xEE978C39384D834F(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_100(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x5D7DFE2058701942(iParam0, 1) || unk_0x3D77D31E25961596(iParam0))
	{
		return 0;
	}
	if (unk_0xF9D4EF1338E38AFB(iParam0, -2017877118) != 7)
	{
		return 0;
	}
	if (unk_0xF9D4EF1338E38AFB(iParam0, 1785177548) != 7)
	{
		return 0;
	}
	if (unk_0x41CA0CDBE31A440F(iParam0))
	{
		return 0;
	}
	if (unk_0x26D28D230F871E8D(iParam0))
	{
		return 0;
	}
	if (unk_0x685AE6AF34B35D3B(iParam0))
	{
		return 0;
	}
	if (unk_0x00819D7272FAC59E(iParam0))
	{
		return 0;
	}
	if (Global_68494)
	{
		return 0;
	}
	if (func_102())
	{
		return 0;
	}
	if (iParam0 == unk_0xA19140A5C42D8715())
	{
		if (!unk_0x8B2DEF9ABFD7A210(unk_0xD4E735F4B6A956AC()))
		{
			return 0;
		}
		if (!unk_0x02B9944258987761(unk_0xD4E735F4B6A956AC()))
		{
			return 0;
		}
		if (unk_0x45F41CA95744406F(unk_0xD4E735F4B6A956AC()) || unk_0xFBBCA633CD1A088B(unk_0xD4E735F4B6A956AC()))
		{
			return 0;
		}
		if (func_101())
		{
			return 0;
		}
	}
	Var0 = { unk_0x57323E573695B13F(iParam0) };
	if (unk_0xA8CEACB4F35AE058(Var0) >= (1f * 1f))
	{
		return 0;
	}
	return 1;
}

bool func_101()
{
	return Global_93284.f_328 > 0;
}

bool func_102()
{
	return unk_0xFD34717937104F1C() <= Global_17367.f_5873 + 100;
}

char* func_103(int iParam0)
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

int func_104(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_105(iParam0);
	uVar1 = func_103(iVar0);
	if (unk_0x429D45A6C6520026(Local_60.f_2))
	{
		if (unk_0x429D45A6C6520026(uVar1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return unk_0x3CAC2741CC1A631F(Local_60.f_2, sVar1);
}

int func_105(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!unk_0xDC5D81351D6A4DDB(iParam0))
	{
		return -1;
	}
	iVar0 = func_107(iParam0);
	iVar1 = func_106(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_37058[iVar1 /*5*/].f_2;
}

int func_106(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_37058[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_107(int iParam0)
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
		if (iParam0 == Global_37058[iVar0 /*5*/].f_1)
		{
			return Global_37058[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_108()
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

void func_109()
{
	if (bLocal_50)
	{
		return;
	}
	if (!func_110())
	{
		Local_60.f_0 = 5;
		Local_55.f_2 = unk_0x83666F9FB8FEBD4B() + 5000;
		return;
	}
	Local_60.f_0 = 6;
}

bool func_110()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (Local_43.f_4 == 0)
	{
		return 0;
	}
	if (unk_0x7112137033807390(Local_43.f_4, 0))
	{
		return 0;
	}
	Var0 = { unk_0xE2BBD32891C18569(Local_43.f_1, 1) };
	Var3 = { unk_0xE2BBD32891C18569(Local_43.f_4, 1) };
	fVar6 = unk_0x499324B3EF19C288(Var0, Var3, 1);
	return fVar6 < 7f;
}

void func_111()
{
	int iVar0;
	char* sVar1;
	
	if (Local_43.f_1 == unk_0xA19140A5C42D8715())
	{
		unk_0xD481A812073CCF02(0, 36, 1);
		if (unk_0x703A9347832E1FFA(Local_43.f_1))
		{
			if (Global_37058[iLocal_64 /*5*/].f_2 == 0 || Global_37058[iLocal_64 /*5*/].f_2 == 2)
			{
				unk_0x1BE107CEA70974D0(Local_43.f_1, 0, 0);
			}
		}
		if (unk_0x2170AAD0EEFAA195(Local_43.f_1))
		{
			unk_0x765FD122F4BFBD74(Local_43.f_1, 0);
		}
	}
	if (Local_55.f_0 != -2)
	{
		if (Local_55.f_0 == -1)
		{
			if (Global_37058[iLocal_64 /*5*/].f_2 != 0)
			{
				Global_37058[iLocal_64 /*5*/].f_2 = 0;
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
			if (Global_37058[iLocal_64 /*5*/].f_2 == 0)
			{
				if (iVar0 < 30)
				{
					Global_37058[iLocal_64 /*5*/].f_2 = 2;
					if (!func_97(2))
					{
						Global_37058[iLocal_64 /*5*/].f_2 = 0;
						return;
					}
				}
			}
			if (Global_37058[iLocal_64 /*5*/].f_2 == 2)
			{
				if (iVar0 < 10)
				{
					Global_37058[iLocal_64 /*5*/].f_2 = 1;
					if (!func_97(2))
					{
						Global_37058[iLocal_64 /*5*/].f_2 = 2;
						return;
					}
				}
			}
			if (Global_37058[iLocal_64 /*5*/].f_2 == 1)
			{
			}
		}
	}
	else
	{
		return;
	}
	if (!unk_0x429D45A6C6520026(sLocal_54))
	{
		if (!func_100(Local_43.f_1))
		{
			sVar1 = "MOVE_M@DRUNK@TRANSITIONS";
			if (unk_0x411C28019DEA5CEF(Local_43.f_1, sVar1, sLocal_54, 3))
			{
				unk_0xED3CB2E0519060F1(Local_43.f_1, sVar1, sLocal_54, -4f);
			}
			sLocal_54 = "";
			return;
		}
	}
	if (Global_37058[iLocal_64 /*5*/].f_3 >= 10 || Global_37058[iLocal_64 /*5*/].f_4 >= 15)
	{
		if (unk_0xF9D4EF1338E38AFB(Local_43.f_1, 1785177548) == 1 && !unk_0x05EFB6A616B6FADE(Global_1668658.f_3314, 27))
		{
			return;
		}
		if (unk_0x958D2327555FAEA5(Local_43.f_1))
		{
			return;
		}
		if (unk_0x5D7DFE2058701942(Local_43.f_1, 1))
		{
			if (Global_37058[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_37058[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_37058[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_37058[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((unk_0x4C9BACA8D249CB13() && Local_43.f_1 == unk_0xA19140A5C42D8715()) && func_113(unk_0xD4E735F4B6A956AC())) && Global_262145.f_23702)
		{
			if (Global_37058[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_37058[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_37058[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_37058[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((unk_0x4C9BACA8D249CB13() && Local_43.f_1 == unk_0xA19140A5C42D8715()) && func_112())
		{
			if (Global_37058[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_37058[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_37058[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_37058[iLocal_64 /*5*/].f_4 = 14;
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
	if (!func_104(Local_43.f_1))
	{
		return;
	}
}

var func_112()
{
	return Global_2504035;
}

int func_113(int iParam0)
{
	if (iParam0 != func_78())
	{
		if (func_115(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_114(Global_2423801[iParam0 /*413*/].f_309.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_114(int iParam0)
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
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
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
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
	}
	return -1;
}

int func_115(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xC77FA683E9BB485B(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x58E3CCF930D23BD5(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437022.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_116()
{
	int iVar0;
	
	if (!unk_0x8A29BBDF4603E52B(Local_43.f_1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = unk_0xCAEB6CE71A2C7212(Local_43.f_1, 0);
	if (!unk_0x1095F403F52B42E1(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0xB0D49A1F9F054602(iVar0, -1, 0) == Local_43.f_1)
	{
		return 0;
	}
	Local_43.f_4 = iVar0;
	Local_60.f_0 = 7;
	return 1;
}

void func_117()
{
	if (!unk_0x5D7DFE2058701942(Local_43.f_1, 0))
	{
		Local_60.f_0 = 4;
		return;
	}
}

void func_118()
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
	if (!unk_0x58E3CCF930D23BD5(unk_0xD4E735F4B6A956AC()))
	{
		return;
	}
	if (!unk_0x8A29BBDF4603E52B(unk_0xA19140A5C42D8715()))
	{
		return;
	}
	if (unk_0x122A8778D4027A82(unk_0xD4E735F4B6A956AC(), 0))
	{
		return;
	}
	iVar0 = unk_0xCAEB6CE71A2C7212(unk_0xA19140A5C42D8715(), 0);
	fVar1 = unk_0xEAA5CEF8875FEEED(iVar0);
	if (fVar1 < 5f)
	{
		return;
	}
	Var2 = { unk_0xE2BBD32891C18569(unk_0xA19140A5C42D8715(), 1) };
	Var5 = { Var2 - Vector(3f, 30f, 30f) };
	Var8 = { Var2 + Vector(3f, 30f, 30f) };
	if (!unk_0xF0AB7FB93B889653(Var5, Var8) && !unk_0x7394AC2F67EAA91C(Var5, Var8))
	{
		return;
	}
	unk_0xF76C51516DC2C3A2(unk_0xD4E735F4B6A956AC(), 1, 0);
	unk_0xDF341226C0B8BAC3(unk_0xD4E735F4B6A956AC(), 0);
	func_11(73, 1);
}

void func_119()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = Local_43.f_1;
	if (unk_0x5D7DFE2058701942(Local_43.f_1, 0))
	{
		iVar1 = unk_0xCAEB6CE71A2C7212(Local_43.f_1, 0);
		iVar2 = unk_0xB0D49A1F9F054602(iVar1, -1, 0);
		if (!iVar2 == Local_43.f_1)
		{
			return;
		}
		if (unk_0x4C9BACA8D249CB13() && !unk_0xB540EEBB14C48518(iVar1))
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!unk_0xA19140A5C42D8715() == Local_43.f_1)
	{
		return;
	}
	else if (!unk_0x06EBD57CD6085DD1() == 4)
	{
		fLocal_53 = 0f;
		func_121(iVar0, 0f);
		return;
	}
	if (unk_0x83666F9FB8FEBD4B() < Local_55.f_4)
	{
		func_121(iVar0, fLocal_53);
		return;
	}
	if (unk_0x281590680327CDEA(iVar0))
	{
		Local_55.f_4 = unk_0x83666F9FB8FEBD4B() + 2000;
	}
	else
	{
		Local_55.f_4 = unk_0x83666F9FB8FEBD4B() + 1000;
	}
	fVar3 = unk_0xEAA5CEF8875FEEED(iVar0);
	if (fVar3 < 0.04f)
	{
		fLocal_53 = 0f;
		func_121(iVar0, 0f);
		return;
	}
	if (Local_55.f_1 == -1)
	{
		fLocal_53 = func_120(iVar0, 0.13f, 0.06f);
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
			fLocal_53 = func_120(iVar0, 0.05f, 0.02f);
		}
		else if (iVar4 < 30000)
		{
			fLocal_53 = func_120(iVar0, 0.07f, 0.03f);
		}
		else if (iVar4 < 45000)
		{
			fLocal_53 = func_120(iVar0, 0.09f, 0.04f);
		}
		else if (iVar4 < 600000)
		{
			fLocal_53 = func_120(iVar0, 0.1f, 0.05f);
		}
		else
		{
			fLocal_53 = func_120(iVar0, 0.13f, 0.06f);
		}
	}
	func_121(iVar0, fLocal_53);
}

float func_120(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = unk_0xF59B9063EDAC7451(-fParam1, fParam1);
	fVar1 = unk_0xF59B9063EDAC7451(0f, fParam2);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 - fVar1);
	}
	else
	{
		fVar0 = (fVar0 + fVar1);
	}
	if (unk_0x281590680327CDEA(iParam0))
	{
		if (unk_0x331BE13D31DFA36A(unk_0xA2EA4BA455370F3C(iParam0)))
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
		iVar2 = unk_0x8F474E419F56E48D(iParam0);
		if (unk_0x8CE5E4632E631B03(iVar2))
		{
			fVar0 = (fVar0 * 1.5f);
		}
		else
		{
			fVar0 = (fVar0 * 0.5f);
		}
	}
	fVar0 = func_21(fVar0, -1f, 1f);
	return fVar0;
}

void func_121(int iParam0, float fParam1)
{
	if (unk_0x4C9BACA8D249CB13() && !unk_0xB540EEBB14C48518(iParam0))
	{
		return;
	}
	if (unk_0x281590680327CDEA(iParam0))
	{
		unk_0xD9BD254A24C94BA3(unk_0xA2EA4BA455370F3C(iParam0), fParam1);
	}
	else if (unk_0xFAC06EE780B57279(iParam0))
	{
		unk_0xE6EA0AED486E34B7(unk_0xB86D86A5DBBC79F0(iParam0), fParam1);
	}
}

void func_122()
{
	int iVar0;
	
	if (!unk_0x5D7DFE2058701942(Local_43.f_1, 0))
	{
		Local_60.f_0 = 4;
		return;
	}
	if (unk_0x4C9BACA8D249CB13())
	{
		if (Global_37058[iLocal_64 /*5*/].f_3 >= 10 || Global_37058[iLocal_64 /*5*/].f_4 >= 15)
		{
			if (Global_37058[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_37058[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_37058[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_37058[iLocal_64 /*5*/].f_4 = 14;
			}
		}
	}
	if (bLocal_50)
	{
		return;
	}
	iVar0 = unk_0xCAEB6CE71A2C7212(Local_43.f_1, 0);
	if (!unk_0x1095F403F52B42E1(iVar0, 0))
	{
		unk_0xCB482EF95FAE4D73(Local_43.f_1, 0, 0);
		Local_60.f_0 = 11;
		return;
	}
}

void func_123()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x83666F9FB8FEBD4B() <= Local_55.f_3)
	{
		return;
	}
	iVar0 = unk_0xF9D4EF1338E38AFB(unk_0xA19140A5C42D8715(), 355471868);
	if (!iVar0 == 7)
	{
		Local_55.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
		return;
	}
	if (!unk_0x5D7DFE2058701942(Local_43.f_1, 0))
	{
		Local_60.f_0 = 4;
		Local_55.f_3 = -2;
		return;
	}
	iVar1 = unk_0xCAEB6CE71A2C7212(Local_43.f_1, 0);
	iVar2 = unk_0xB0D49A1F9F054602(iVar1, -1, 0);
	if (iVar2 == Local_43.f_1)
	{
		func_124();
		Local_55.f_3 = -2;
		return;
	}
	unk_0x9F76F280DA42821D(Local_43.f_1, iVar1, 0);
	Local_60.f_0 = 9;
	Local_55.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
}

void func_124()
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
	func_150(iLocal_48, 2, 5);
	Local_55.f_4 = unk_0x83666F9FB8FEBD4B();
	fLocal_53 = 0f;
}

void func_125()
{
	if (unk_0x8A29BBDF4603E52B(Local_43.f_1))
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

void func_126()
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
	if (bVar1 || unk_0x8A29BBDF4603E52B(Local_43.f_1))
	{
		if (!bLocal_50)
		{
		}
		iVar0 = unk_0xCAEB6CE71A2C7212(Local_43.f_1, 0);
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
				unk_0xCB482EF95FAE4D73(Local_43.f_1, 0, 0);
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
			func_124();
			return;
		}
		if (!bLocal_50)
		{
			if (!bLocal_50)
			{
			}
			func_124();
			return;
		}
		if (!bLocal_50)
		{
		}
		iVar2 = unk_0xB0D49A1F9F054602(Local_43.f_4, -1, 0);
		if (iVar2 == Local_43.f_1)
		{
			func_124();
			return;
		}
		unk_0x9F76F280DA42821D(Local_43.f_1, iVar0, 0);
		Local_60.f_0 = 9;
		Local_55.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
		return;
	}
	if (!func_110())
	{
		unk_0x9568B1B58F78FF36(Local_43.f_1);
		Local_60.f_0 = 4;
		return;
	}
	if (!bLocal_50)
	{
		iVar3 = unk_0xF9D4EF1338E38AFB(Local_43.f_1, -1794415470);
		if (iVar3 == 7)
		{
			if (!unk_0x5D7DFE2058701942(Local_43.f_1, 0))
			{
				unk_0x9568B1B58F78FF36(Local_43.f_1);
				Local_60.f_0 = 4;
				return;
			}
		}
	}
}

void func_127()
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
	if (!unk_0x1095F403F52B42E1(Local_43.f_4, 0))
	{
		Local_43.f_4 = 0;
		Local_60.f_0 = 4;
		return;
	}
	Var0 = { unk_0xE2BBD32891C18569(Local_43.f_1, 1) };
	Var3 = { unk_0xE2BBD32891C18569(Local_43.f_4, 1) };
	fVar6 = unk_0x499324B3EF19C288(Var0, Var3, 1);
	if (fVar6 > 3f)
	{
		if (!func_97(Global_37058[iLocal_64 /*5*/].f_2))
		{
			Local_60.f_0 = 12;
			return;
		}
		Local_60.f_0 = 5;
		Local_55.f_2 = unk_0x83666F9FB8FEBD4B() + 2000;
		return;
	}
	iVar7 = unk_0xD63FAD81FAF5E0CB(Local_43.f_4);
	iVar8 = 0;
	bVar9 = true;
	iVar8 = 1;
	while (bVar9)
	{
		if (iVar8 < iVar7)
		{
			if (unk_0x588F5E48C78F1C73(Local_43.f_4, iVar8, 0))
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
	func_128();
	unk_0xA2EBCD9385E56019(Local_43.f_1, Local_43.f_4, -1, iVar8, 1073741824, 1, 0);
	Local_60.f_0 = 7;
}

void func_128()
{
	if (!unk_0xDC5D81351D6A4DDB(Local_43.f_1))
	{
		return;
	}
	if (!unk_0x4915F4759304D5CF(Local_43.f_1))
	{
		unk_0xE469AA5F14AFD92F(Local_43.f_1, 1048576000);
		unk_0x263125EBC4512C4D(Local_43.f_1);
		unk_0xE37BC9A74D66FE2D(Local_43.f_1, 0, -1056964608);
		Local_60.f_2 = "";
		unk_0x5DC4C018E76213CE(Local_43.f_1);
		unk_0xB0D7019224A3A443(Local_43.f_1, 200, 0);
		unk_0xB0D7019224A3A443(Local_43.f_1, 46, 0);
		unk_0xB583A7C3FEE69710(Local_43.f_1, 1);
		unk_0xC2C4AE9DB4A0BEF3(Local_43.f_1, 262144, 0);
		unk_0x3EF17AB0CB711DA0(Local_43.f_1, 0);
	}
	if (!bLocal_51)
	{
		return;
	}
	bLocal_51 = false;
}

void func_129()
{
	if (unk_0x83666F9FB8FEBD4B() < Local_55.f_2)
	{
		func_111();
		return;
	}
	func_130();
	Local_55.f_2 = -2;
	Local_60.f_0 = 12;
}

int func_130()
{
	if (!func_104(Local_43.f_1))
	{
		return 0;
	}
	if (!bLocal_51)
	{
		return 0;
	}
	func_131(Local_43.f_1);
	Local_60.f_2 = "";
	Global_2524719.f_4527 = 1;
	return 1;
}

void func_131(int iParam0)
{
	unk_0xE469AA5F14AFD92F(uParam0, 1048576000);
	unk_0xE37BC9A74D66FE2D(uParam0, 0, -1056964608);
	unk_0xB0D7019224A3A443(uParam0, 200, 0);
	unk_0xB583A7C3FEE69710(iParam0, 1);
	unk_0xC2C4AE9DB4A0BEF3(iParam0, 262144, 0);
	unk_0x3EF17AB0CB711DA0(iParam0, 0);
}

void func_132()
{
	int iVar0;
	
	if (Local_55.f_0 == -1)
	{
		Global_37058[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_37058[iLocal_64 /*5*/].f_3 < 3 && Global_37058[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_37058[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_37058[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_37058[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_37058[iLocal_64 /*5*/].f_2 = 1;
		}
	}
	if (unk_0x5D7DFE2058701942(Local_43.f_1, 0))
	{
		Local_60.f_0 = 10;
		return;
	}
	if (func_104(Local_43.f_1))
	{
		Local_60.f_0 = 12;
		return;
	}
	if (Local_55.f_0 == -2)
	{
		return;
	}
	if (!func_97(Global_37058[iLocal_64 /*5*/].f_2))
	{
		return;
	}
	Local_60.f_0 = 12;
}

void func_133()
{
}

void func_134()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 6;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 16)
	{
		iVar0 = Global_37139[iVar1 /*6*/].f_2;
		if (!iVar0 == 6)
		{
			if (Global_37139[iVar1 /*6*/].f_1 == iLocal_48)
			{
				func_136(iVar1);
				func_135(iVar1);
			}
			else if (Global_37139[iVar1 /*6*/].f_1 == 2)
			{
				if (!iLocal_49 == -1)
				{
					if (iLocal_49 == Global_37139[iVar1 /*6*/])
					{
						func_136(iVar1);
					}
				}
			}
		}
		iVar1++;
	}
}

void func_135(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_37139[iParam0 /*6*/] = -1;
	Global_37139[iParam0 /*6*/].f_1 = -1;
	Global_37139[iParam0 /*6*/].f_2 = 6;
	Global_37139[iParam0 /*6*/].f_3 = 0;
	Global_37139[iParam0 /*6*/].f_4 = 0;
}

void func_136(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_37139[iParam0 /*6*/].f_2;
	switch (iVar0)
	{
		case 1:
			func_157();
			break;
		
		case 2:
			func_140(Global_37139[iParam0 /*6*/].f_4);
			break;
		
		case 3:
			func_139(Global_37139[iParam0 /*6*/].f_5);
			break;
		
		case 4:
			func_138();
			break;
		
		case 5:
			func_137();
			break;
		
		case 0:
			break;
		
		case 6:
			break;
		
		default:
			break;
	}
}

void func_137()
{
	Local_60.f_1 = 2;
}

void func_138()
{
	int iVar0;
	
	Global_37058[iLocal_64 /*5*/].f_4++;
	if (Local_55.f_0 == -1)
	{
		Global_37058[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_37058[iLocal_64 /*5*/].f_4 < 9 && Global_37058[iLocal_64 /*5*/].f_4 != 0)
	{
		Global_37058[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_37058[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_37058[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_37058[iLocal_64 /*5*/].f_2 = 1;
		}
		if (!func_104(Local_43.f_1))
		{
			func_97(Global_37058[iLocal_64 /*5*/].f_2);
		}
	}
}

void func_139(int iParam0)
{
	int iVar0;
	
	Global_37058[iLocal_64 /*5*/].f_3 = (Global_37058[iLocal_64 /*5*/].f_3 + iParam0);
	if (Local_55.f_0 == -1)
	{
		Global_37058[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_37058[iLocal_64 /*5*/].f_3 < 3 && Global_37058[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_37058[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_37058[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_37058[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_37058[iLocal_64 /*5*/].f_2 = 1;
		}
		if (!func_104(Local_43.f_1))
		{
			func_97(Global_37058[iLocal_64 /*5*/].f_2);
		}
	}
}

void func_140(int iParam0)
{
	Local_43.f_3 = (Local_43.f_3 + iParam0);
	Local_43.f_2 = (Local_43.f_2 + iParam0);
	Local_55.f_1 = (Local_55.f_1 + iParam0);
	Local_55.f_0 = (Local_55.f_0 + iParam0);
}

void func_141()
{
	int iVar0;
	
	if (!bLocal_50)
	{
		iLocal_63 = -1;
		return;
	}
	if (iLocal_63 < 0)
	{
		iLocal_63 = unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC());
		return;
	}
	iVar0 = unk_0x91347D2A80F38492(unk_0xD4E735F4B6A956AC());
	if (iVar0 != iLocal_63)
	{
		if (iVar0 > iLocal_63)
		{
			func_142();
		}
		iLocal_63 = iVar0;
		return;
	}
}

void func_142()
{
}

void func_143()
{
	if (!Local_55.f_0 == -1)
	{
		if (!Local_55.f_0 == -2)
		{
			if (unk_0x83666F9FB8FEBD4B() >= Local_55.f_0)
			{
				func_128();
				Local_55.f_0 = -2;
				Local_60.f_0 = 12;
			}
		}
		if (unk_0x83666F9FB8FEBD4B() > Local_55.f_1)
		{
			func_157();
		}
	}
}

void func_144(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_37139[iVar0 /*6*/])
		{
			func_135(iVar0);
		}
		iVar0++;
	}
}

void func_145()
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
	if (!unk_0x7112137033807390(Local_43.f_1, 0))
	{
		if (unk_0x8A29BBDF4603E52B(Local_43.f_1))
		{
			Local_60.f_0 = 10;
		}
	}
	if (bLocal_50)
	{
		func_148();
		func_11(71, 1);
		if (unk_0x4C9BACA8D249CB13())
		{
			iVar0 = func_73(2057, -1, 0);
			iVar1 = (iVar0 / 10) + 1 * 10;
			if (iVar0 + 1 >= iVar1)
			{
				func_146(iVar1);
			}
			func_70(2057, iVar0 + 1, -1, 1, 0);
		}
		else
		{
			iVar2 = 0;
			iVar3 = 0;
			iVar4 = 0;
			unk_0x2AD48F3CEBA882E9(joaat("sp0_sp_num_times_drunk"), &iVar2, -1);
			unk_0x2AD48F3CEBA882E9(joaat("sp1_sp_num_times_drunk"), &iVar3, -1);
			unk_0x2AD48F3CEBA882E9(joaat("sp2_sp_num_times_drunk"), &iVar4, -1);
			iVar5 = ((iVar2 + iVar3) + iVar4);
			iVar6 = (iVar5 / 10) + 1 * 10;
			if (iVar5 + 1 >= iVar6)
			{
				func_146(iVar6);
			}
			switch (func_61())
			{
				case 0:
					unk_0x93180BE33E7149EF(joaat("sp0_sp_num_times_drunk"), iVar2 + 1, 1);
					break;
				
				case 1:
					unk_0x93180BE33E7149EF(joaat("sp1_sp_num_times_drunk"), iVar3 + 1, 1);
					break;
				
				case 2:
					unk_0x93180BE33E7149EF(joaat("sp2_sp_num_times_drunk"), iVar4 + 1, 1);
					break;
				}
		}
		Local_60.f_1 = 1;
		return;
	}
	Local_60.f_1 = 12;
	if (Local_55.f_0 == -1)
	{
		Global_37058[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_37058[iLocal_64 /*5*/].f_3 < 3 && Global_37058[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_37058[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar7 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar7 <= 0)
		{
			iVar7 = 0;
		}
		iVar7 = (iVar7 / 1000) + 1;
		Global_37058[iLocal_64 /*5*/].f_2 = 0;
		if (iVar7 < 30)
		{
			Global_37058[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar7 < 10)
		{
			Global_37058[iLocal_64 /*5*/].f_2 = 1;
		}
	}
}

void func_146(int iParam0)
{
	int iVar0;
	
	iVar0 = func_147(81);
	Global_2414200[iVar0 /*83*/] = 81;
	Global_2414200[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2414200[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_147(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2414200[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2414200[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_148()
{
}

void func_149()
{
	Local_55.f_0 = Local_43.f_2;
	Local_55.f_1 = Local_43.f_3;
	Local_55.f_2 = -2;
	Local_55.f_3 = -2;
}

void func_150(int iParam0, int iParam1, int iParam2)
{
	func_151(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_151(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_153(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_152();
	if (iVar0 == -1)
	{
		return;
	}
	Global_37139[iVar0 /*6*/] = iParam0;
	Global_37139[iVar0 /*6*/].f_1 = iParam1;
	Global_37139[iVar0 /*6*/].f_2 = iParam2;
	Global_37139[iVar0 /*6*/].f_3 = iParam3;
	Global_37139[iVar0 /*6*/].f_4 = iParam4;
	Global_37139[iVar0 /*6*/].f_5 = iParam5;
}

int func_152()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_37139[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_153(int iParam0, int iParam1, int iParam2)
{
	if (func_154(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_154(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_37139[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_37139[iVar0 /*6*/])
			{
				if (iParam1 == Global_37139[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

void func_155()
{
	int iVar0;
	
	bLocal_50 = false;
	if (Local_43.f_1 == unk_0xA19140A5C42D8715())
	{
		bLocal_50 = true;
		Global_37270 = 1;
		Global_37272++;
	}
	if (!unk_0x7112137033807390(Local_43.f_1, 0))
	{
		iVar0 = func_64(Local_43.f_1);
		switch (iVar0)
		{
			case 17:
				unk_0x4FE3554969185993(Local_43.f_1, "AMANDA_DRUNK");
				break;
			
			case 19:
				unk_0x4FE3554969185993(Local_43.f_1, "LAMAR_DRUNK");
				break;
			}
	}
}

void func_156()
{
	if (!iLocal_48 == -1)
	{
		return;
	}
	iLocal_48 = func_107(Local_43.f_1);
	if (iLocal_48 == -1)
	{
		return;
	}
	iLocal_64 = func_106(iLocal_48);
}

void func_157()
{
	int iVar0;
	
	if (!func_29(0) && !func_29(3))
	{
		if (!unk_0x7112137033807390(Local_43.f_1, 0))
		{
			iVar0 = func_64(Local_43.f_1);
			if (Global_37058[iLocal_64 /*5*/].f_4 > 0)
			{
				switch (iVar0)
				{
					case 0:
						func_159(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 1:
						func_159(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 2:
						func_159(Local_43.f_1, "POST_STONED", 24);
						break;
					}
			}
			switch (iVar0)
			{
				case 17:
					unk_0x4FE3554969185993(Local_43.f_1, "AMANDA_NORMAL");
					break;
				
				case 19:
					unk_0x4FE3554969185993(Local_43.f_1, "LAMAR_NORMAL");
					break;
				}
			}
	}
	func_128();
	if (bLocal_50)
	{
		Global_37270 = 0;
	}
	func_158();
	unk_0x4DC885EA8D6AF7FC(func_103(0));
	unk_0x4DC885EA8D6AF7FC(func_103(2));
	unk_0x4DC885EA8D6AF7FC(func_103(1));
	Global_1663723 = 0;
	if (unk_0x8B1574454E8C2421(joaat("appemail")) > 0)
	{
		func_36(0);
	}
	unk_0x8F1A9FE6D91AAFEB();
}

void func_158()
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (unk_0x7112137033807390(Local_43.f_1, 0))
	{
		return;
	}
	uVar0 = Local_43.f_1;
	if (unk_0x5D7DFE2058701942(Local_43.f_1, 0))
	{
		uVar1 = unk_0xCAEB6CE71A2C7212(Local_43.f_1, 0);
		iVar2 = unk_0xB0D49A1F9F054602(uVar1, -1, 0);
		if (!Local_43.f_1 == iVar2)
		{
			return;
		}
		uVar0 = iVar1;
	}
	else if (!unk_0x06EBD57CD6085DD1() == 4 || !unk_0xA19140A5C42D8715() == Local_43.f_1)
	{
		return;
	}
	fLocal_53 = 0f;
	func_121(uVar0, 0f);
}

void func_159(var uParam0, char* sParam1, int iParam2)
{
	unk_0xE85BD4A26C0DFACA(uParam0, sParam1, func_160(iParam2), 1);
}

int func_160(int iParam0)
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

