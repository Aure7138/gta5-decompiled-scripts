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
	if (unk_0x2EC83C7ACA23E8A4(2))
	{
		func_144();
	}
	Local_43 = { ScriptParam_0 };
	func_143();
	func_142();
	func_137(iLocal_48, 0, 0);
	unk_0xC1B1E9A034A63A62(0);
	func_136();
	func_132();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_131(iLocal_48);
		func_130();
		func_128();
		func_121();
		func_137(iLocal_48, 0, 0);
		func_143();
		func_6();
		if ((unk_0xA86CA03D9749EEB3() && !unk_0x1504F110F2576375()) && !func_5())
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
	Global_2442442.f_633 = 1;
}

var func_3()
{
	return Global_2442442.f_612;
}

bool func_4()
{
	return unk_0x08BA6DD398CA197C(Global_2442442.f_2, 11);
}

bool func_5()
{
	return unk_0x08BA6DD398CA197C(Global_2443212.f_1.f_2809, 3);
}

void func_6()
{
	bool bVar0;
	
	if (unk_0x912AD5A10E7633F0(Local_43.f_1, 0))
	{
		func_144();
	}
	if (bLocal_50)
	{
		if (!unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			func_144();
		}
	}
	func_120();
	bVar0 = true;
	switch (Local_60.f_0)
	{
		case 4:
			func_119();
			return;
		
		case 5:
			func_116();
			return;
		
		case 6:
			func_114();
			return;
		
		case 7:
			func_113();
			return;
		
		case 8:
			func_112();
			return;
		
		case 9:
			func_110();
			return;
		
		case 10:
			func_109();
			func_106();
			func_105();
			return;
		
		case 11:
			func_104();
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
			if (!func_103())
			{
				func_102();
				func_106();
			}
			break;
		
		case 2:
			func_100();
			break;
		
		case 12:
			func_87();
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
	
	unk_0xB95715C17CF0AD61(Local_43.f_1, 3000, 3500, 0, 1, 1, 0);
	Global_1747717 = 1;
	if (!unk_0x2C22E7D1C80A53EF())
	{
		unk_0xF215E3B07B7990BC(2500);
		while (unk_0x44F90FBF2C1E8021())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (unk_0xA86CA03D9749EEB3())
	{
		func_81(unk_0x0C1D3C552325765B(), 0, 57344);
		Global_2404993.f_2205 = 1;
		if (unk_0xBD7EFE00EBB42D77(unk_0x0C1D3C552325765B(), 0))
		{
			Global_2404993.f_2206 = 1;
		}
		else
		{
			Global_2404993.f_2206 = 0;
		}
		if (unk_0xD7BD59EF8A498940())
		{
			unk_0x638B6A0DAE124D02(0);
		}
		if (func_77(1))
		{
			func_64(0);
		}
		func_62(1);
		func_144();
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
	if (!unk_0x912AD5A10E7633F0(Local_43.f_1, 0))
	{
		unk_0x27327EB62D93CDBA(Local_43.f_1, Var1.f_5, 1, 0, 0, 1);
	}
	unk_0x4EDE34FBADD967A6(500);
	StringCopy(&(Var1.f_11), "", 16);
	Var1.f_15 = -1f;
	func_9(sVar0, &Var1, "");
	func_8(126, 1);
	func_144();
}

void func_8(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51558[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0xA86CA03D9749EEB3())
	{
		return;
	}
	if (Global_51558[iParam0 /*7*/])
	{
		unk_0x8A3351ECF43DB941(Global_51558[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x10CE8769EE2626C7(Global_51558[iParam0 /*7*/].f_1, iVar0, 1);
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
	unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), false, 0);
	if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		unk_0x39800A40136ECF37(unk_0xA0081090911D13E5(), 1);
	}
	unk_0xEE1FF61B97C76DFD(uParam1->f_5, 4500f);
	unk_0xCB45A4A2C96B5917(uParam1->f_5, 4500f);
	unk_0x0B17BC5D018E224B(uParam1->f_5, 5f, 1, 0, 0, 0);
	unk_0x27327EB62D93CDBA(unk_0xA0081090911D13E5(), uParam1->f_5, 1, 0, 0, 1);
	unk_0xBB21B5C3111E5F85(unk_0xA0081090911D13E5(), true);
	unk_0x4EDE34FBADD967A6(0);
	unk_0x6B0F857FD4BCD4AB(1);
	unk_0xA9DC3948106CC3E4(*uParam1);
	if (unk_0x509383441597090D(uParam1->f_16))
	{
	}
	else
	{
		unk_0xA9DC3948106CC3E4(uParam1->f_16);
	}
	if (!unk_0x2C22E7D1C80A53EF())
	{
		unk_0xF215E3B07B7990BC(0);
	}
	func_47(uParam1->f_5, uParam1->f_8.f_2, 0, 1);
	if (!unk_0x2C22E7D1C80A53EF())
	{
		unk_0xF215E3B07B7990BC(0);
	}
	iVar1 = unk_0xDF658EB6CA91DFBC() + 20000;
	bVar2 = false;
	uParam1->f_33 = 0;
	while (!bVar2 && iVar1 > unk_0xDF658EB6CA91DFBC())
	{
		bVar2 = true;
		unk_0xA9DC3948106CC3E4(*uParam1);
		if (!unk_0xAD21C77209FD2024(*uParam1))
		{
			bVar2 = false;
		}
		if (!unk_0x509383441597090D(uParam1->f_16))
		{
			unk_0xA9DC3948106CC3E4(uParam1->f_16);
			if (!unk_0xAD21C77209FD2024(uParam1->f_16))
			{
				bVar2 = false;
			}
		}
		if (!unk_0x2C22E7D1C80A53EF())
		{
			unk_0xF215E3B07B7990BC(0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_44();
	if (!func_43(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		unk_0x965CFA6E4E433BDE(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 0, 1);
		unk_0xD74B8343DB9FEFD5(uParam1->f_5 + uParam1->f_19, (unk_0x652D2EEEF1D3E62C(uParam1->f_22) + 25f), 0, 0, 0, 0, 0);
		unk_0x0B17BC5D018E224B(uParam1->f_5 + uParam1->f_19, (unk_0x652D2EEEF1D3E62C(uParam1->f_22) + 25f), 1, 0, 0, 0);
	}
	if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		unk_0x1BD6EE6C1F72D17E(unk_0x0C1D3C552325765B());
		unk_0x2538B3290C0E12F3(unk_0xA0081090911D13E5(), joaat("weapon_unarmed"), 1);
		unk_0xB0993C95A7DBF879(unk_0xA0081090911D13E5());
	}
	unk_0xBB21B5C3111E5F85(unk_0xA0081090911D13E5(), false);
	unk_0x6B0F857FD4BCD4AB(0);
	unk_0x0B17BC5D018E224B(uParam1->f_5, 15f, 1, 0, 0, 0);
	unk_0x57DD47CF3EAFE720();
	unk_0x71454D4862BA7065();
	func_41();
	while (func_40())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0xB20CA7A3EE29687A() && !unk_0x9AB98132476504BC())
	{
		unk_0xA0303A6B8C99DD6A(250);
	}
	unk_0x856FE0EB5A347E56(1);
	if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		iVar4 = unk_0x6194C3993E6BB2A5(uParam1->f_5, uParam1->f_8, 2);
		unk_0x530044AE9D695B53(iVar4, 0);
		unk_0xEB14A75A6A936DCF(iVar4, 0);
		uVar5 = unk_0x669DFEC6C5E8A812("DEFAULT_ANIMATED_CAMERA", 1);
		iVar6 = 4;
		if (uParam1->f_4 != joaat("MotionState_Idle"))
		{
			iVar6 |= 2;
		}
		func_38(unk_0xA0081090911D13E5(), uParam1->f_18);
		unk_0xCAD643E9EAD85BD2(unk_0xA0081090911D13E5(), iVar4, *uParam1, uParam1->f_1, 1000f, -1.5f, iVar6, 0, 1148846080, 0);
		unk_0xF7F00525816A16B1(unk_0xA0081090911D13E5(), 1);
		unk_0x14B981DB70D9A5D9(unk_0x0C1D3C552325765B(), 1);
		iVar3 = unk_0x0566060B874845C0(unk_0xA0081090911D13E5(), 77);
		unk_0xF674E664795C8CB3(unk_0xA0081090911D13E5(), 77, 1);
		unk_0x7EB0D56EE8F8F8E8(uVar5, iVar4, uParam1->f_2, *uParam1);
		unk_0x2D5A415AD869CB5F(1, 0, 3000, 1, 0, 0);
		if (!unk_0x509383441597090D(uParam1->f_16) && !unk_0x509383441597090D(uParam1->f_17))
		{
			unk_0xC9567EA69F3CC4C2(unk_0xA0081090911D13E5(), uParam1->f_16, uParam1->f_17, 1000f, -1.5f, 10000, 33, 0, 0, 0, 0);
		}
	}
	else
	{
		iVar4 = -1;
	}
	if (!uParam1->f_25)
	{
		if (!unk_0x509383441597090D(sParam2))
		{
			func_37(sParam2, -1);
			uParam1->f_25 = 1;
		}
	}
	bVar7 = false;
	bVar8 = false;
	uVar9 = 16;
	if (!unk_0x509383441597090D(&(uParam1->f_11)))
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
		func_36(&uVar9, iVar175, unk_0xA0081090911D13E5(), sVar176, 0, 1);
	}
	if (unk_0x74CC94B98FBFE813(iVar4))
	{
		sVar177 = "WalkInterruptible";
		sVar178 = "ForceBlendout";
		while (unk_0x74CC94B98FBFE813(iVar4) && !unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
		{
			if (!bVar8)
			{
				if (!unk_0x2C22E7D1C80A53EF())
				{
					if (!unk_0x509383441597090D(uParam1->f_26))
					{
						unk_0xFF4920BAFCB15F65(uParam1->f_26, 0, 0);
						bVar8 = true;
					}
					if (!unk_0x509383441597090D(uParam1->f_27))
					{
						if (!unk_0x509383441597090D(uParam1->f_28))
						{
							unk_0xAB16AADE80707D47(-1, uParam1->f_28, uParam1->f_27, 0);
							bVar8 = true;
						}
						if (!unk_0x509383441597090D(uParam1->f_29))
						{
							unk_0xAB16AADE80707D47(-1, uParam1->f_29, uParam1->f_27, 0);
							bVar8 = true;
						}
					}
				}
			}
			unk_0xB477A2D8CA963C52();
			unk_0x7ABD1B29E6C2963D(18);
			unk_0xC099D1DEF6374B6A();
			func_32();
			iVar179 = unk_0xDF658EB6CA91DFBC();
			if (iVar179 >= (Global_36326 - 500))
			{
				func_31(4000);
			}
			fVar180 = -1f;
			fVar181 = -1f;
			fVar0 = unk_0xA84C8086E7377CD5(iVar4);
			if (!unk_0x509383441597090D(&(uParam1->f_11)))
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
			if (unk_0x22A1CDF0C8EA3D61(unk_0xA0081090911D13E5(), unk_0x3BB8D1C5FAAB25B3(sVar177)))
			{
				iVar183 = (unk_0xCEA3D75B69A1A87E(2, 195) - 128);
				iVar184 = (unk_0xCEA3D75B69A1A87E(2, 196) - 128);
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
			if (unk_0xFA461E82A81FEF04() == 4 && uParam1->f_52 > 0f)
			{
				if (fVar0 >= uParam1->f_52)
				{
					if (!uParam1->f_32)
					{
						fVar185 = 1.5f;
						Var186 = { unk_0xDBAACFEF5824A69B() };
						Var189 = { unk_0x7560B9B6FB83879C(unk_0xA0081090911D13E5(), 31086, 0f, 0f, 0f) };
						fVar192 = unk_0x999A157665D69393(Var186, Var189, 1);
						fVar185 = func_18(fVar185, 0.001f, (fVar192 - 0.75f));
						if (fVar185 < 0f)
						{
							fVar185 = 0.001f;
						}
						func_17(&(uParam1->f_34), unk_0xA0081090911D13E5(), func_57(), 1E-06f, 300, 300, 0, 0, 1045220557);
						func_16(&(uParam1->f_34), uParam1->f_53);
						if (!uParam1->f_33)
						{
							uParam1->f_34 = 1;
							uParam1->f_34.f_7 = unk_0xDF658EB6CA91DFBC();
							uParam1->f_34.f_8 = 0;
							uParam1->f_33 = 1;
						}
						if (uParam1->f_57 == 999f)
						{
							uParam1->f_56 = 0f;
						}
						if (uParam1->f_57 == 999f)
						{
							Var195 = { unk_0x7BF09DD72260FA1E(2) };
							uVar198 = unk_0x5E6FDC4F3A8C8EDE(unk_0xA0081090911D13E5());
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
						unk_0x2A7D387AD73F1D15(fVar193, 1065353216);
						unk_0x8BDD755F07063522(fVar194);
						unk_0x3520C88C443FE1BC(fVar193);
						unk_0x4F2266E0E67762B0(fVar194);
						Var201 = { unk_0xDBAACFEF5824A69B() };
						Var204 = { unk_0xACDF5DE746C18841() };
						fVar207 = unk_0x999A157665D69393(Var201, Var204, 1);
						iVar208 = unk_0xF2DB717A73826179((fVar207 * 1000f));
						uParam1->f_32 = 1;
					}
					if (uParam1->f_32)
					{
						unk_0xEE125916A74FC2A9();
						if (func_13(&(uParam1->f_34), 1, 1, 1, 0, 0, 0))
						{
						}
					}
				}
			}
			if (unk_0x22A1CDF0C8EA3D61(unk_0xA0081090911D13E5(), unk_0x3BB8D1C5FAAB25B3(sVar178)) || iVar182)
			{
				if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
				{
					unk_0xD3032BAC1ECE011F(unk_0xA0081090911D13E5());
					switch (uParam1->f_4)
					{
						case joaat("MotionState_Idle"):
							unk_0xE33751BF671E2013(unk_0xA0081090911D13E5(), joaat("MotionState_Idle"), 1, 0, 0);
							unk_0xD2C0F2FD77D871FA(0, 0, 3, 0);
							break;
						
						case joaat("MotionState_Walk"):
							unk_0xE33751BF671E2013(unk_0xA0081090911D13E5(), joaat("MotionState_Walk"), 1, 0, 0);
							unk_0x9B109E7410A2CB10(unk_0x0C1D3C552325765B(), 1f, 500, 0, 1, 0);
							if (unk_0xFA461E82A81FEF04() != 4)
							{
								if (uParam1->f_31 == 999f)
								{
									uParam1->f_30 = 0f;
								}
								if (uParam1->f_31 == 999f)
								{
									Var211 = { unk_0x7BF09DD72260FA1E(2) };
									uVar214 = unk_0x5E6FDC4F3A8C8EDE(unk_0xA0081090911D13E5());
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
								unk_0x2A7D387AD73F1D15(fVar209, 1065353216);
								unk_0x8BDD755F07063522(fVar210);
								Var217 = { unk_0xDBAACFEF5824A69B() };
								Var220 = { unk_0xACDF5DE746C18841() };
								fVar223 = unk_0x999A157665D69393(Var217, Var220, 1);
								iVar224 = unk_0xF2DB717A73826179((fVar223 * 1000f));
								unk_0x2D5A415AD869CB5F(0, 1, iVar224, 0, 0, 0);
							}
							break;
						
						default:
							break;
					}
					if (unk_0x74CC94B98FBFE813(iVar4))
					{
						unk_0x5FB710E6CD88134B(iVar4);
						iVar4 = -1;
					}
				}
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (!func_43(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		unk_0x5D4C739EF48A09AE(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 1);
	}
	unk_0xFDEC0B505BCB00C0(unk_0x0C1D3C552325765B(), true, 0);
	if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		unk_0xD3032BAC1ECE011F(unk_0xA0081090911D13E5());
	}
	bVar225 = unk_0x3923D30D178C15EF();
	bVar226 = false;
	if (uParam1->f_32)
	{
		unk_0xEE125916A74FC2A9();
		if (!func_13(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
		{
			bVar226 = true;
		}
	}
	if (bVar225 || bVar226)
	{
		while ((bVar225 || bVar226) && !unk_0xC740F8182E7E9681())
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
			bVar225 = unk_0x3923D30D178C15EF();
			bVar226 = false;
			if (uParam1->f_32)
			{
				unk_0xEE125916A74FC2A9();
				if (!func_13(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
				{
					bVar226 = true;
				}
			}
		}
	}
	if (!unk_0x509383441597090D(uParam1->f_16))
	{
		unk_0x04269E768DDAF940(uParam1->f_16);
	}
	unk_0x04269E768DDAF940(*uParam1);
	unk_0x50C86ABC13A071F8(uVar5, 0);
	func_10(&(uParam1->f_34));
	if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
	{
		unk_0xF674E664795C8CB3(unk_0xA0081090911D13E5(), 77, iVar3);
		unk_0x39800A40136ECF37(unk_0xA0081090911D13E5(), 0);
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
	if (unk_0x0D2E3F017CBCB8A8(uParam0->f_1))
	{
		unk_0x50C86ABC13A071F8(uParam0->f_1, 0);
	}
	if (unk_0x0D2E3F017CBCB8A8(uParam0->f_2))
	{
		unk_0x50C86ABC13A071F8(uParam0->f_2, 0);
	}
	if (unk_0x0D2E3F017CBCB8A8(uParam0->f_3))
	{
		unk_0x50C86ABC13A071F8(uParam0->f_3, 0);
	}
	if (unk_0x0D2E3F017CBCB8A8(uParam0->f_4))
	{
		unk_0x50C86ABC13A071F8(uParam0->f_4, 0);
	}
}

void func_12(int iParam0, int iParam1, int iParam2)
{
	unk_0xABC36CFE4F3421A0(iParam0, iParam1, 1);
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
			if (!unk_0x912AD5A10E7633F0(uParam0->f_5, 0))
			{
				func_11(uParam0);
				Var0 = { unk_0xDBAACFEF5824A69B() };
				if (bParam1)
				{
					Var0 = { Var0 + unk_0x24D47569A04F80A8(uParam0->f_5) * FtoV(unk_0x62E2FDDFDA7A731D()) };
				}
				Var3 = { unk_0xDDBED866B22F905C(uParam0->f_5, Var0) };
				Var6 = { unk_0x7BF09DD72260FA1E(2) };
				Var9 = { Var6 + uParam0->f_9 };
				Var12 = { Var9 - unk_0x3A02D44277FBA4BE(uParam0->f_5, 2) };
				Var15 = { (-unk_0x0BADBFA3B172435F(Var9.f_2) * unk_0xD0FFB162F40A139C(Var9.f_0)), (unk_0xD0FFB162F40A139C(Var9.f_2) * unk_0xD0FFB162F40A139C(Var9.f_0)), unk_0x0BADBFA3B172435F(Var9.f_0) };
				Var18 = { (-unk_0x0BADBFA3B172435F(Var12.f_2) * unk_0xD0FFB162F40A139C(Var12.f_0)), (unk_0xD0FFB162F40A139C(Var12.f_2) * unk_0xD0FFB162F40A139C(Var12.f_0)), unk_0x0BADBFA3B172435F(Var12.f_0) };
				uVar21 = unk_0x549DCD7FE43EFAD1();
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = unk_0xA93B9A3C4A092CB3(1775630800, 0);
				}
				uParam0->f_1 = unk_0xA93B9A3C4A092CB3(26379945, 1);
				if (bParam1)
				{
					unk_0xC65E66FE2F1B36F5(uParam0->f_1, uParam0->f_5, Var3, 1);
				}
				else
				{
					unk_0x8E4B7BCF3F153D3C(uParam0->f_1, Var0);
				}
				unk_0x00D89D1097963F54(uParam0->f_1, Var6, 2);
				unk_0x033BAA756AF85975(uParam0->f_1, uVar21);
				uParam0->f_2 = unk_0xA93B9A3C4A092CB3(26379945, 1);
				if (bParam1 && !bParam4)
				{
					unk_0xC65E66FE2F1B36F5(uParam0->f_2, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12), 1);
				}
				else
				{
					unk_0x8E4B7BCF3F153D3C(uParam0->f_2, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12));
				}
				unk_0x00D89D1097963F54(uParam0->f_2, Var6, 2);
				unk_0x033BAA756AF85975(uParam0->f_2, uVar21);
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = unk_0xA93B9A3C4A092CB3(26379945, 1);
					if (bParam1 && !bParam4)
					{
						unk_0xC65E66FE2F1B36F5(uParam0->f_4, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13), 1);
					}
					else
					{
						unk_0x8E4B7BCF3F153D3C(uParam0->f_4, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13));
					}
					unk_0x00D89D1097963F54(uParam0->f_4, Var6, 2);
					unk_0x033BAA756AF85975(uParam0->f_4, uVar21);
				}
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					unk_0x3AA1A35AC1F0562E(uParam0->f_3, uParam0->f_1, 0, 2);
					if (iParam6 == 0)
					{
						unk_0x3AA1A35AC1F0562E(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
					}
					unk_0x3AA1A35AC1F0562E(uParam0->f_3, uParam0->f_2, (uParam0->f_14 - uParam0->f_17), 2);
					unk_0x48F3280EF5355E65(uParam0->f_3, iParam6);
					unk_0x07553DAC96600443(uParam0->f_3, 1);
				}
				else
				{
					unk_0xF13B03E3D574D5F1(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
				unk_0x2D5A415AD869CB5F(1, 0, 3000, 1, 0, 0);
				uParam0->f_7 = unk_0xDF658EB6CA91DFBC();
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
					if (unk_0xDF658EB6CA91DFBC() >= (uParam0->f_7 + uParam0->f_16))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									unk_0xFF4920BAFCB15F65("CamPushInFranklin", 0, 0);
									break;
								
								case 0:
									unk_0xFF4920BAFCB15F65("CamPushInMichael", 0, 0);
									break;
								
								case 2:
									unk_0xFF4920BAFCB15F65("CamPushInTrevor", 0, 0);
									break;
							}
						}
						else
						{
							unk_0xFF4920BAFCB15F65("CamPushInNeutral", 0, 0);
						}
						unk_0xAB16AADE80707D47(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						uParam0->f_8 = 1;
					}
				}
			}
			if (unk_0xDF658EB6CA91DFBC() >= (uParam0->f_7 + uParam0->f_15))
			{
				if (bParam2)
				{
					func_11(uParam0);
					unk_0x2D5A415AD869CB5F(0, 0, 3000, 1, 0, 0);
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
	unk_0x527ED47EF44C8E1E();
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
					unk_0x588D9B1F6CF36C3C(0);
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
		if (unk_0xE80581DE0ACF1F8A())
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
			unk_0x09C86C0C5CA26B1E(&Global_2313, 20);
			unk_0x09C86C0C5CA26B1E(&Global_2314, 17);
			unk_0x09C86C0C5CA26B1E(&Global_2315, 0);
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
			if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
			{
				if (unk_0x7B5A014A9AC61FB3(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (func_24())
				{
					return 0;
				}
				if (unk_0x8E30A8C5F10F6DD2(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xAE4B87F710B7DE76(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xB057BAEE46DEDD89(unk_0xA0081090911D13E5(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69617)
				{
					if (unk_0xB46E03E529421E99(unk_0xA0081090911D13E5()))
					{
						return 0;
					}
					if (unk_0x2FFAB3D2307F1BA7(unk_0x0C1D3C552325765B()))
					{
						return 0;
					}
					if (unk_0x7DF282A008F6DC55(unk_0xA0081090911D13E5()))
					{
						return 0;
					}
					if (unk_0x7B09C8C1D3D1F427(unk_0x0C1D3C552325765B()))
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
				if (unk_0x08BA6DD398CA197C(Global_2313, 9))
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
	unk_0x588D9B1F6CF36C3C(0);
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
	unk_0x09C86C0C5CA26B1E(&Global_2314, 16);
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
	
	if (Global_69617)
	{
		iVar0 = 0;
		unk_0x79DEFA3570360EAF(unk_0xA0081090911D13E5(), &iVar1, 1);
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x62B4986EA88E929B() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
	{
		if (unk_0x8B99D63EA8B2E230(unk_0xA0081090911D13E5(), 78, 1))
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
		if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
		{
			if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[2 /*29*/])
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
		if (Global_69617)
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
	return Global_35775 == iParam0;
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
				return Global_1342783.f_203[iParam1];
			}
			break;
	}
	return unk_0x08BA6DD398CA197C(Global_1342783.f_982, iParam0);
}

void func_29()
{
	unk_0x8C620099CBB45602();
	Global_16756 = 0;
	if ((unk_0xC6CB0C1523C73C77() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x588D9B1F6CF36C3C(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0xE80581DE0ACF1F8A())
	{
		unk_0x588D9B1F6CF36C3C(1);
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
	Global_36326 = (unk_0xDF658EB6CA91DFBC() + iParam0);
}

void func_32()
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_35(0))
		{
			func_33(0);
		}
		unk_0x88B0F0DC270164B7(&Global_2314, 2);
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
		unk_0x88B0F0DC270164B7(&Global_2314, 16);
	}
	if (unk_0xC6CB0C1523C73C77())
	{
		unk_0x588D9B1F6CF36C3C(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2313, 30);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2313, 30);
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
				unk_0x4788913DF846A969(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x6D68EB69A9260608(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x6D68EB69A9260608(Global_14380);
		}
		else
		{
			unk_0x6D68EB69A9260608(Global_14371);
		}
	}
}

int func_35(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x08BA6DD398CA197C(Global_2313, 14))
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
	if (unk_0xA96867DD0A63C62C(joaat("cellphone_flashhand")) > 0)
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
	if (!Global_69617)
	{
		if (!unk_0xEB361B4BD195A4D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xD20DF430E654B489(iParam2, 0);
			}
			else
			{
				unk_0xD20DF430E654B489(iParam2, 1);
			}
		}
		if (!unk_0xEB361B4BD195A4D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xD69C027BC6C4334F(iParam2, 0);
			}
			else
			{
				unk_0xD69C027BC6C4334F(iParam2, 1);
			}
		}
	}
}

void func_37(char* sParam0, int iParam1)
{
	unk_0x55B5433015A91E85(sParam0);
	unk_0x85AE92859C5AADE3(0, 0, 1, iParam1);
}

void func_38(int iParam0, var uParam1)
{
	if (func_39(uParam1, 1))
	{
		unk_0x084B3BC6B3FB75E4(iParam0, "HOSPITAL_0", 0f, 1f);
	}
	if (func_39(uParam1, 2))
	{
		unk_0x084B3BC6B3FB75E4(iParam0, "HOSPITAL_1", 0f, 1f);
	}
	if (func_39(uParam1, 4))
	{
		unk_0x084B3BC6B3FB75E4(iParam0, "HOSPITAL_2", 0f, 1f);
	}
	if (func_39(uParam1, 8))
	{
		unk_0x084B3BC6B3FB75E4(iParam0, "HOSPITAL_3", 0f, 1f);
	}
	if (func_39(uParam1, 16))
	{
		unk_0x084B3BC6B3FB75E4(iParam0, "HOSPITAL_4", 0f, 1f);
	}
	if (func_39(uParam1, 32))
	{
		unk_0x084B3BC6B3FB75E4(iParam0, "HOSPITAL_5", 0f, 1f);
	}
	if (func_39(uParam1, 64))
	{
		unk_0x084B3BC6B3FB75E4(iParam0, "HOSPITAL_6", 0f, 1f);
	}
	if (func_39(uParam1, 128))
	{
		unk_0x084B3BC6B3FB75E4(iParam0, "HOSPITAL_7", 0f, 1f);
	}
	if (func_39(uParam1, 256))
	{
		unk_0x084B3BC6B3FB75E4(iParam0, "HOSPITAL_8", 0f, 1f);
	}
	if (func_39(uParam1, 512))
	{
		unk_0x084B3BC6B3FB75E4(iParam0, "HOSPITAL_9", 0f, 1f);
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
	if (((Global_91406 == 13 || Global_91406 == 10) || Global_91406 == 11) || Global_91406 == 12)
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
		if (Global_88672[iVar0 /*17*/] && !Global_88672[iVar0 /*17*/].f_1)
		{
			if (Global_88672[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_88672[iVar0 /*17*/].f_5 != 88 && Global_88672[iVar0 /*17*/].f_5 != 89) && Global_88672[iVar0 /*17*/].f_5 != 92)
				{
					func_42(Global_88672[iVar0 /*17*/].f_5, 1);
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
			Global_85724[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85724[iParam0 /*2*/] = 0;
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
		iVar1 = Global_36709[iVar0 /*5*/];
		if (!iVar1 == -1)
		{
			func_137(1, iVar1, 1);
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_36683[iVar2 /*5*/] == 0)
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
	if (!Global_36683[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36683[iParam0 /*5*/].f_1 == unk_0xA0081090911D13E5())
		{
			Global_36904 = 0;
		}
	}
	Global_36683[iParam0 /*5*/] = 13;
	Global_36683[iParam0 /*5*/].f_1 = 0;
	Global_36683[iParam0 /*5*/].f_2 = 0;
	Global_36683[iParam0 /*5*/].f_3 = 0;
	Global_36683[iParam0 /*5*/].f_4 = 0;
	Global_36682 = (Global_36682 - 1);
	if (Global_36682 < 0)
	{
		Global_36682 = 0;
	}
}

int func_47(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
	{
		func_51(0);
		unk_0x0B17BC5D018E224B(Param0, 5f, 1, 0, 0, 0);
		if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
		{
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
			{
				unk_0x27327EB62D93CDBA(unk_0xA0081090911D13E5(), Param0, 1, 0, 0, 1);
				unk_0x10BB9EA2ADBCF0F3(unk_0xA0081090911D13E5(), uParam3);
				unk_0x2A7D387AD73F1D15(0f, 1065353216);
				unk_0x8BDD755F07063522(0f);
			}
		}
		unk_0x639927C5DE78E8D7(Param0, 4500f, 0);
		unk_0x4EDE34FBADD967A6(0);
		unk_0x0B17BC5D018E224B(Param0, 5000f, 1, 0, 0, 0);
		unk_0xC6C0752EE78174C2(Param0, 5000f, 0);
		unk_0xEE1FF61B97C76DFD(Param0, 5000f);
		unk_0xCB45A4A2C96B5917(Param0, 5000f);
		func_50();
		func_49();
		unk_0xC1B1E9A034A63A62(0);
		func_51(1);
		if (!unk_0x9726BE1252F8F0B6())
		{
			while (!unk_0x639927C5DE78E8D7(Param0, 4500f, 0))
			{
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					unk_0x6B0F857FD4BCD4AB(0);
					return 0;
				}
			}
		}
		unk_0xC1B1E9A034A63A62(0);
		while (!unk_0x66491EA3F355967D())
		{
			unk_0x4EDE34FBADD967A6(0);
			if (unk_0x83666F9FB8FEBD4B() > 20000)
			{
				unk_0x6B0F857FD4BCD4AB(0);
				if (unk_0x9726BE1252F8F0B6())
				{
					unk_0x2E1E57681BD2050A();
				}
				return 0;
			}
		}
		if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
		{
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
			{
				if (unk_0x9726BE1252F8F0B6())
				{
					unk_0x2E1E57681BD2050A();
				}
				unk_0x6B0F857FD4BCD4AB(0);
				unk_0xC1B1E9A034A63A62(0);
				unk_0x57DD47CF3EAFE720();
				if (iParam5 == 1)
				{
					unk_0x71454D4862BA7065();
				}
				else
				{
					unk_0xC1B1E9A034A63A62(5000);
				}
				unk_0x7D1114B6F231ACE5();
			}
		}
		while ((!unk_0x01DA0FBF59746B55() && !func_48()) && unk_0x83666F9FB8FEBD4B() < 1500)
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
			unk_0x776447CD667051CD(Param0, &(Param0.f_2), 0);
			unk_0x0B17BC5D018E224B(Param0, 5f, 1, 0, 0, 0);
			if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
			{
				if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
				{
					unk_0x27327EB62D93CDBA(unk_0xA0081090911D13E5(), Param0, 1, 0, 0, 1);
					unk_0x10BB9EA2ADBCF0F3(unk_0xA0081090911D13E5(), uParam3);
				}
			}
		}
		unk_0x2A7D387AD73F1D15(0f, 1065353216);
		unk_0x8BDD755F07063522(0f);
		func_51(0);
		return 1;
	}
	func_51(0);
	return 0;
}

bool func_48()
{
	return !Global_68446.f_553;
}

void func_49()
{
	Global_68446.f_553 = 1;
	Global_68446.f_554 = 0;
}

void func_50()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		Global_68446[iVar0] = 0;
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
			if (!unk_0x08BA6DD398CA197C(Global_91406.f_20, 2))
			{
				unk_0x6B0F857FD4BCD4AB(1);
				unk_0x88B0F0DC270164B7(&(Global_91406.f_20), 2);
			}
		}
		else if (unk_0x08BA6DD398CA197C(Global_91406.f_20, 2))
		{
			unk_0x6B0F857FD4BCD4AB(0);
			unk_0x09C86C0C5CA26B1E(&(Global_91406.f_20), 2);
		}
	}
}

int func_52()
{
	if (unk_0x08BA6DD398CA197C(unk_0xB5BF1B58C833F7A9(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

bool func_53(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_101553.f_6084[iParam0], 0);
}

int func_54(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101553.f_7940.f_99.f_58[iParam0];
}

int func_55()
{
	if (Global_33141[11] == 1)
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
	return Global_101553.f_7940.f_330[iParam0 /*6*/];
}

int func_57()
{
	func_58();
	return Global_101553.f_1991.f_539.f_3549;
}

void func_58()
{
	int iVar0;
	
	if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
	{
		if (func_61(Global_101553.f_1991.f_539.f_3549) != unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()))
		{
			iVar0 = func_60(unk_0xA0081090911D13E5());
			if (func_59(iVar0) && (!func_26(14) || Global_100505))
			{
				if (Global_101553.f_1991.f_539.f_3549 != iVar0 && func_59(Global_101553.f_1991.f_539.f_3549))
				{
					Global_101553.f_1991.f_539.f_3550 = Global_101553.f_1991.f_539.f_3549;
				}
				Global_101553.f_1991.f_539.f_3551 = iVar0;
				Global_101553.f_1991.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101553.f_1991.f_539.f_3549 != 145)
			{
				Global_101553.f_1991.f_539.f_3551 = Global_101553.f_1991.f_539.f_3549;
			}
			return;
		}
	}
	Global_101553.f_1991.f_539.f_3549 = 145;
}

bool func_59(int iParam0)
{
	return iParam0 < 3;
}

int func_60(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		iVar1 = unk_0x705BC1BB91F530B5(iParam0);
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
		return Global_101553.f_32740[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_62(bool bParam0)
{
	unk_0x828E2FE4BF9B3DDF(0f);
	unk_0x5001EA127FDD8208(0f);
	unk_0xDD90E0980BB277E2(0f);
	unk_0x684D46085CBC939C(1);
	unk_0x5A1DDA7C7C1FAEA9(0f);
	unk_0x84BED6C7E8B0DD06(1);
	unk_0x88E94C2B463D2CE0(0);
	if (unk_0x6DEB8F88FFE09057("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0x7C1793252FA472B6("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0x509383441597090D(&Global_36884))
	{
		if (unk_0x6DEB8F88FFE09057(&Global_36884))
		{
			unk_0x7C1793252FA472B6(&Global_36884);
		}
	}
	if (unk_0x0D2E3F017CBCB8A8(Global_36873))
	{
		if (unk_0xB9A03175F1C0EC4E(Global_36873))
		{
			unk_0x95CDEE1B0E45B05E(Global_36873, 0f);
			unk_0x8A33BD71F3FB5A6A(Global_36873, 1);
		}
	}
	if (unk_0xD7BD59EF8A498940())
	{
		unk_0x638B6A0DAE124D02(0);
	}
	if (bParam0)
	{
		if (unk_0x8E565AC3E8559D14() != -1 || unk_0x5AFA3A506B8EFE7E() != -1)
		{
			unk_0x5A58126D345E3A13();
		}
		else if (unk_0xC740F8182E7E9681())
		{
			unk_0x5A58126D345E3A13();
		}
	}
	Global_36879 = 0f;
	StringCopy(&Global_36880, "", 16);
	StringCopy(&Global_36884, "", 64);
	StringCopy(&Global_36900, "", 16);
	func_63();
}

void func_63()
{
	Global_36872 = 0;
	Global_36873 = 0;
	Global_36874 = 0;
	Global_36875 = 30000;
	Global_36876 = 0f;
	Global_36878 = 0f;
	Global_36877 = 0f;
	Global_36879 = 0f;
	StringCopy(&Global_36880, "", 16);
}

void func_64(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_262145.f_15557;
			break;
		
		case 1:
			iVar0 = Global_262145.f_15547;
			break;
		
		case 2:
			iVar0 = Global_262145.f_15558;
			break;
		
		case 3:
			iVar0 = Global_262145.f_15550;
			break;
		
		case 4:
			iVar0 = Global_262145.f_15546;
			break;
		
		case 6:
			iVar0 = 3;
			break;
		
		case 7:
			iVar0 = Global_262145.f_15561;
			break;
		
		case 8:
			iVar0 = Global_262145.f_15562;
			break;
		
		case 9:
			iVar0 = Global_262145.f_15565;
			break;
		
		case 22:
			iVar0 = Global_262145.f_15566;
			break;
		
		case 23:
			iVar0 = Global_262145.f_15559;
			break;
		
		case 25:
			iVar0 = Global_262145.f_16447;
			break;
		
		case 26:
			iVar0 = Global_262145.f_16446;
			break;
	}
	if (iVar0 != 0)
	{
		unk_0x501478855A6074CE(func_75(func_76()), func_73(func_76()), func_72(), func_71(), iParam0, iVar0);
	}
	func_70(iVar0);
	func_65(iVar0);
}

void func_65(int iParam0)
{
	int iVar0;
	
	iVar0 = func_69(3936, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_274 = iVar0;
	func_66(3936, iVar0, -1, 1, 0);
}

void func_66(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2491469[iParam0 /*3*/][func_67(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, iParam3);
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
			Global_2491182 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2491182 = 1;
		}
	}
	return iVar0;
}

var func_68()
{
	return Global_1312731;
}

int func_69(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2491469[iParam0 /*3*/][func_67(iParam1)];
	if (unk_0x8A3351ECF43DB941(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_70(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x0C1D3C552325765B();
	Global_1614576[iVar0 /*324*/].f_10.f_273 = (Global_1614576[iVar0 /*324*/].f_10.f_273 + iParam0);
	if (Global_1614576[iVar0 /*324*/].f_10.f_273 < -9999)
	{
		Global_1614576[iVar0 /*324*/].f_10.f_273 = 9999;
	}
	else if (Global_1614576[iVar0 /*324*/].f_10.f_273 > 9999)
	{
		Global_1614576[iVar0 /*324*/].f_10.f_273 = 9999;
	}
}

int func_71()
{
	if (Global_1750569.f_3 != 0)
	{
		return Global_1750569.f_3;
	}
	return -1;
}

int func_72()
{
	if (Global_1750569.f_2 != 0)
	{
		return Global_1750569.f_2;
	}
	return -1;
}

int func_73(int iParam0)
{
	if (iParam0 == func_74())
	{
		return -1;
	}
	return Global_1614576[iParam0 /*324*/].f_10.f_7[1];
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
	return Global_1614576[iParam0 /*324*/].f_10.f_7[0];
}

int func_76()
{
	return Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10;
}

bool func_77(bool bParam0)
{
	return func_78(unk_0x0C1D3C552325765B(), bParam0);
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
	iVar0 = Global_1614576[iParam0 /*324*/].f_10;
	if (iVar0 != func_74() && Global_1614576[iVar0 /*324*/].f_10.f_234 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_80(int iParam0, int iParam1)
{
	if (iParam0 != func_74())
	{
		if (Global_1614576[iParam0 /*324*/].f_10 != func_74())
		{
			if (Global_1614576[iParam0 /*324*/].f_10 == iParam0 && Global_1614576[iParam0 /*324*/].f_10.f_234 == iParam1)
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
		if (unk_0x2C8EB7E5159312EE())
		{
			unk_0xACBEFB0A5F1CF619(0);
		}
	}
	if (!unk_0xA86CA03D9749EEB3())
	{
		uVar0 = iParam2;
		unk_0xFDEC0B505BCB00C0(iParam0, bParam1, uVar0);
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
		if (!func_85())
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
		if (unk_0xCB129F9A01D14082(iParam0) && unk_0xC0691D80D21C989D(iParam0))
		{
			iVar25 = unk_0x21F191D9AFF98B5E(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0xA86CA03D9749EEB3())
				{
					unk_0x0B82F22B8E9EE07C(1);
				}
				else
				{
					unk_0xEDBE0CD7C81FA37E(iVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0xA86CA03D9749EEB3() && !bVar18)
					{
						unk_0x0B82F22B8E9EE07C(0);
					}
					Global_2421327[iParam0 /*353*/].f_243 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_84(iVar25) && !unk_0x73C9408E8EF10BD3(iVar25))
				{
					if (!bVar21)
					{
						unk_0x591413670A1EF437(iVar25, true, 0);
					}
				}
				if (!unk_0x884626CDE60D6728(iVar25))
				{
					if (!bVar20)
					{
						unk_0xBB21B5C3111E5F85(iVar25, false);
					}
					unk_0xB16B53F6FE1ADDB6(iVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0xBB21B5C3111E5F85(iVar25, false);
				}
				unk_0xB43604F27F1EAE5F(iVar25, true);
				unk_0x8F2CF88C37D4A413(iParam0, 0);
				unk_0x61E5185648237702(iVar25);
				unk_0x9D36C5E0C178FB8D(iVar25, 1);
				func_83();
				func_82();
				if (unk_0x6273A79EFF10C4A9())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0x9726BE1252F8F0B6())
				{
				}
				Global_2421327[iParam0 /*353*/].f_244 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_84(iVar25) && !unk_0x73C9408E8EF10BD3(iVar25))
				{
					if (!bVar21)
					{
						unk_0x591413670A1EF437(iVar25, !bVar14, 0);
					}
					if (!unk_0x884626CDE60D6728(iVar25))
					{
						if (!bVar20)
						{
							unk_0xBB21B5C3111E5F85(iVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0xB16B53F6FE1ADDB6(iVar25, 1);
						}
					}
				}
				if (bVar9)
				{
					unk_0x8F2CF88C37D4A413(iParam0, 0);
				}
				else
				{
					unk_0x8F2CF88C37D4A413(iParam0, 1);
				}
				unk_0xB43604F27F1EAE5F(iVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0x0BFA50301B965423(iVar25) && !unk_0x39FEE545B315414E(iVar25, 0))
					{
						unk_0xB0993C95A7DBF879(iVar25);
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
			unk_0xFDEC0B505BCB00C0(iParam0, bParam1, iVar26);
		}
	}
}

void func_82()
{
	struct<2> Var0;
	
	Global_2432628.f_730 = 0;
	Global_2432628.f_731 = 0;
	Global_2432628.f_732 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2404993.f_2212 = { Var0 };
}

void func_83()
{
	Global_2404993.f_637 = 0;
	Global_2404993.f_2253 = 0;
	Global_2404993.f_494 = 0;
	Global_2404993.f_569 = 0;
	Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_207 = 0;
}

int func_84(int iParam0)
{
	int iVar0;
	
	if (unk_0x39FEE545B315414E(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x21178DF77817BF39(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_85()
{
	if (func_86() == 0)
	{
		return 1;
	}
	return 0;
}

int func_86()
{
	return Global_1312462.f_18;
}

void func_87()
{
	int iVar0;
	
	if (bLocal_50)
	{
		return;
	}
	Local_43.f_4 = 0;
	if (!func_88(Global_36709[iLocal_64 /*5*/].f_2))
	{
		return;
	}
	iVar0 = unk_0xB5BF1B58C833F7A9(500, 3000);
	Local_60.f_0 = 5;
	Local_55.f_2 = (unk_0x83666F9FB8FEBD4B() + iVar0);
}

int func_88(int iParam0)
{
	int iVar0;
	var uVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	
	iVar0 = func_99();
	if (iVar0 == -2)
	{
		return 0;
	}
	if (unk_0xEB361B4BD195A4D3(Local_43.f_1))
	{
		if (unk_0x39FEE545B315414E(Local_43.f_1, 0) || unk_0x69FEFE28E1352842(Local_43.f_1))
		{
			return 0;
		}
		if (unk_0x172EE816396D541D(Local_43.f_1))
		{
			return 0;
		}
		if (func_95(Local_43.f_1))
		{
			return 0;
		}
	}
	if (Global_36709[iLocal_64 /*5*/].f_3 < 3 && Global_36709[iLocal_64 /*5*/].f_3 != 0)
	{
		return 0;
	}
	if (Global_36709[iLocal_64 /*5*/].f_4 < 9 && Global_36709[iLocal_64 /*5*/].f_4 != 0)
	{
		return 0;
	}
	uVar1 = func_94(iParam0);
	if (unk_0x509383441597090D(uVar1))
	{
		return 0;
	}
	if (func_95(Local_43.f_1))
	{
		return 0;
	}
	unk_0x7E1EB8ACEBE481B1(sVar1);
	if (func_91(Local_43.f_1))
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
		if (!unk_0x509383441597090D(sVar2) && !unk_0x509383441597090D(sVar3))
		{
			unk_0xA9DC3948106CC3E4(sVar2);
			while (!unk_0xAD21C77209FD2024(sVar2))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (!unk_0xEB361B4BD195A4D3(Local_43.f_1))
			{
				unk_0xC9567EA69F3CC4C2(Local_43.f_1, sVar2, sVar3, 1.5f, -1.5f, -1, 48, 0, 0, 0, 0);
				sLocal_54 = sVar3;
			}
		}
	}
	if (!unk_0x322CE47298FFA4A7(sVar1))
	{
		return 0;
	}
	if (unk_0xEB361B4BD195A4D3(Local_43.f_1))
	{
		return 0;
	}
	unk_0x207947B723A8ADC7(Local_43.f_1, sVar1, 0.75f);
	if (unk_0xFA461E82A81FEF04() == 4)
	{
		unk_0x191B82291DF102D9(Local_43.f_1, "move_ped_strafing_firstperson@drunk");
	}
	unk_0xD367B3DF31E4807D(Local_43.f_1, 0, sVar1, "idle", 2f, 1);
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
			if (unk_0x54F0AEFB11EA090A(Local_43.f_1))
			{
				if (!func_89())
				{
					iVar4 = "FACIALS@GEN_MALE@BASE";
				}
				else
				{
					iVar4 = "FACIALS@GEN_FEMALE@BASE";
				}
			}
			else if (unk_0x1F1602FD864AA4C1(Local_43.f_1))
			{
				iVar4 = "FACIALS@GEN_MALE@BASE";
			}
			else
			{
				iVar4 = "FACIALS@GEN_FEMALE@BASE";
			}
			break;
	}
	unk_0x20236B414672EFAE(Local_43.f_1, "mood_drunk_1", iVar4);
	unk_0xF674E664795C8CB3(Local_43.f_1, 200, 1);
	unk_0xF674E664795C8CB3(Local_43.f_1, 46, 1);
	unk_0xD20DF430E654B489(Local_43.f_1, 0);
	unk_0x797AA7825A5A2D95(Local_43.f_1, 262144, 1);
	unk_0x3D0303642BF7B345(Local_43.f_1, 1);
	return 1;
}

bool func_89()
{
	return func_90(unk_0x0C1D3C552325765B());
}

int func_90(int iParam0)
{
	if (unk_0x705BC1BB91F530B5(unk_0x21F191D9AFF98B5E(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_91(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x39FEE545B315414E(iParam0, 1) || unk_0x69FEFE28E1352842(iParam0))
	{
		return 0;
	}
	if (unk_0x21178DF77817BF39(iParam0, -2017877118) != 7)
	{
		return 0;
	}
	if (unk_0x21178DF77817BF39(iParam0, 1785177548) != 7)
	{
		return 0;
	}
	if (unk_0x4B626BBA5EE1CFF0(iParam0))
	{
		return 0;
	}
	if (unk_0x630BD2AFB0686BBA(iParam0))
	{
		return 0;
	}
	if (unk_0xFFE4F37124DBE6D9(iParam0))
	{
		return 0;
	}
	if (unk_0x66ED05E88C842554(iParam0))
	{
		return 0;
	}
	if (Global_68125)
	{
		return 0;
	}
	if (func_93())
	{
		return 0;
	}
	if (iParam0 == unk_0xA0081090911D13E5())
	{
		if (!unk_0x0F37CAD8C9CFEA64(unk_0x0C1D3C552325765B()))
		{
			return 0;
		}
		if (!unk_0xDC48E9E2CC7437D3(unk_0x0C1D3C552325765B()))
		{
			return 0;
		}
		if (unk_0x033EB0D34BDA6698(unk_0x0C1D3C552325765B()) || unk_0x8EFED6AE8FE72A0D(unk_0x0C1D3C552325765B()))
		{
			return 0;
		}
		if (func_92())
		{
			return 0;
		}
	}
	Var0 = { unk_0x24D47569A04F80A8(iParam0) };
	if (unk_0xA8CEACB4F35AE058(Var0) >= (1f * 1f))
	{
		return 0;
	}
	return 1;
}

bool func_92()
{
	return Global_91458.f_304 > 0;
}

bool func_93()
{
	return unk_0xDF658EB6CA91DFBC() <= Global_17290.f_5745 + 100;
}

char* func_94(int iParam0)
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

int func_95(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_96(iParam0);
	uVar1 = func_94(iVar0);
	if (unk_0x509383441597090D(Local_60.f_2))
	{
		if (unk_0x509383441597090D(uVar1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return unk_0x28C1B9853548BD8E(Local_60.f_2, sVar1);
}

int func_96(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!unk_0xD3FACCDA4D66AEAD(iParam0))
	{
		return -1;
	}
	iVar0 = func_98(iParam0);
	iVar1 = func_97(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36709[iVar1 /*5*/].f_2;
}

int func_97(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36709[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_98(int iParam0)
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
		if (iParam0 == Global_36709[iVar0 /*5*/].f_1)
		{
			return Global_36709[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_99()
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

void func_100()
{
	if (bLocal_50)
	{
		return;
	}
	if (!func_101())
	{
		Local_60.f_0 = 5;
		Local_55.f_2 = unk_0x83666F9FB8FEBD4B() + 5000;
		return;
	}
	Local_60.f_0 = 6;
}

bool func_101()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (Local_43.f_4 == 0)
	{
		return 0;
	}
	if (unk_0x912AD5A10E7633F0(Local_43.f_4, 0))
	{
		return 0;
	}
	Var0 = { unk_0xC59DF10B4FC39DF8(Local_43.f_1, 1) };
	Var3 = { unk_0xC59DF10B4FC39DF8(Local_43.f_4, 1) };
	fVar6 = unk_0x999A157665D69393(Var0, Var3, 1);
	return fVar6 < 7f;
}

void func_102()
{
	int iVar0;
	char* sVar1;
	
	if (Local_43.f_1 == unk_0xA0081090911D13E5())
	{
		unk_0xABC36CFE4F3421A0(0, 36, 1);
		if (unk_0x0E993EC7F4BA9325(Local_43.f_1))
		{
			if (Global_36709[iLocal_64 /*5*/].f_2 == 0 || Global_36709[iLocal_64 /*5*/].f_2 == 2)
			{
				unk_0x645BA9420353EC0E(Local_43.f_1, 0, 0);
			}
		}
		if (unk_0xBB089326F4413ADC(Local_43.f_1))
		{
			unk_0x7FAA9FA519662485(Local_43.f_1, 0);
		}
	}
	if (Local_55.f_0 != -2)
	{
		if (Local_55.f_0 == -1)
		{
			if (Global_36709[iLocal_64 /*5*/].f_2 != 0)
			{
				Global_36709[iLocal_64 /*5*/].f_2 = 0;
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
			if (Global_36709[iLocal_64 /*5*/].f_2 == 0)
			{
				if (iVar0 < 30)
				{
					Global_36709[iLocal_64 /*5*/].f_2 = 2;
					if (!func_88(2))
					{
						Global_36709[iLocal_64 /*5*/].f_2 = 0;
						return;
					}
				}
			}
			if (Global_36709[iLocal_64 /*5*/].f_2 == 2)
			{
				if (iVar0 < 10)
				{
					Global_36709[iLocal_64 /*5*/].f_2 = 1;
					if (!func_88(2))
					{
						Global_36709[iLocal_64 /*5*/].f_2 = 2;
						return;
					}
				}
			}
			if (Global_36709[iLocal_64 /*5*/].f_2 == 1)
			{
			}
		}
	}
	else
	{
		return;
	}
	if (!unk_0x509383441597090D(sLocal_54))
	{
		if (!func_91(Local_43.f_1))
		{
			sVar1 = "MOVE_M@DRUNK@TRANSITIONS";
			if (unk_0x2FB5C9A04733E5EF(Local_43.f_1, sVar1, sLocal_54, 3))
			{
				unk_0xACD556E2EA6F25CF(Local_43.f_1, sVar1, sLocal_54, -4f);
			}
			sLocal_54 = "";
			return;
		}
	}
	if (Global_36709[iLocal_64 /*5*/].f_3 >= 10 || Global_36709[iLocal_64 /*5*/].f_4 >= 15)
	{
		if (unk_0x21178DF77817BF39(Local_43.f_1, 1785177548) == 1)
		{
			return;
		}
		if (unk_0x2C93AFAEAA97C570(Local_43.f_1))
		{
			return;
		}
		if (unk_0x39FEE545B315414E(Local_43.f_1, 1))
		{
			if (Global_36709[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_36709[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_36709[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_36709[iLocal_64 /*5*/].f_4 = 14;
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
	if (!func_95(Local_43.f_1))
	{
		return;
	}
}

int func_103()
{
	int iVar0;
	
	if (!unk_0x4745637EEB85132D(Local_43.f_1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = unk_0xF8DB47D339B8B953(Local_43.f_1, 0);
	if (!unk_0x1F1B2B6E500380C5(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0x8FD32443A080784B(iVar0, -1, 0) == Local_43.f_1)
	{
		return 0;
	}
	Local_43.f_4 = iVar0;
	Local_60.f_0 = 7;
	return 1;
}

void func_104()
{
	if (!unk_0x39FEE545B315414E(Local_43.f_1, 0))
	{
		Local_60.f_0 = 4;
		return;
	}
}

void func_105()
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
	if (!unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
	{
		return;
	}
	if (!unk_0x4745637EEB85132D(unk_0xA0081090911D13E5()))
	{
		return;
	}
	if (unk_0xBD7EFE00EBB42D77(unk_0x0C1D3C552325765B(), 0))
	{
		return;
	}
	iVar0 = unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0);
	fVar1 = unk_0x39053CCA2C4B5DA1(iVar0);
	if (fVar1 < 5f)
	{
		return;
	}
	Var2 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1) };
	Var5 = { Var2 - Vector(3f, 30f, 30f) };
	Var8 = { Var2 + Vector(3f, 30f, 30f) };
	if (!unk_0xC1E09F9E834BCD2A(Var5, Var8) && !unk_0x271D2AB5C2992076(Var5, Var8))
	{
		return;
	}
	unk_0x4855122D864556E5(unk_0x0C1D3C552325765B(), 1, 0);
	unk_0xA3ED6851314A3DDB(unk_0x0C1D3C552325765B(), 0);
	func_8(73, 1);
}

void func_106()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = Local_43.f_1;
	if (unk_0x39FEE545B315414E(Local_43.f_1, 0))
	{
		iVar1 = unk_0xF8DB47D339B8B953(Local_43.f_1, 0);
		iVar2 = unk_0x8FD32443A080784B(iVar1, -1, 0);
		if (!iVar2 == Local_43.f_1)
		{
			return;
		}
		if (unk_0xA86CA03D9749EEB3() && !unk_0x775F8FFC8E29F525(iVar1))
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!unk_0xA0081090911D13E5() == Local_43.f_1)
	{
		return;
	}
	else if (!unk_0xFA461E82A81FEF04() == 4)
	{
		fLocal_53 = 0f;
		func_108(iVar0, 0f);
		return;
	}
	if (unk_0x83666F9FB8FEBD4B() < Local_55.f_4)
	{
		func_108(iVar0, fLocal_53);
		return;
	}
	if (unk_0x60F161681C368C4E(iVar0))
	{
		Local_55.f_4 = unk_0x83666F9FB8FEBD4B() + 2000;
	}
	else
	{
		Local_55.f_4 = unk_0x83666F9FB8FEBD4B() + 1000;
	}
	fVar3 = unk_0x39053CCA2C4B5DA1(iVar0);
	if (fVar3 < 0.04f)
	{
		fLocal_53 = 0f;
		func_108(iVar0, 0f);
		return;
	}
	if (Local_55.f_1 == -1)
	{
		fLocal_53 = func_107(iVar0, 0.13f, 0.06f);
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
			fLocal_53 = func_107(iVar0, 0.05f, 0.02f);
		}
		else if (iVar4 < 30000)
		{
			fLocal_53 = func_107(iVar0, 0.07f, 0.03f);
		}
		else if (iVar4 < 45000)
		{
			fLocal_53 = func_107(iVar0, 0.09f, 0.04f);
		}
		else if (iVar4 < 600000)
		{
			fLocal_53 = func_107(iVar0, 0.1f, 0.05f);
		}
		else
		{
			fLocal_53 = func_107(iVar0, 0.13f, 0.06f);
		}
	}
	func_108(iVar0, fLocal_53);
}

float func_107(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = unk_0xF25F352E34274C58(-fParam1, fParam1);
	fVar1 = unk_0xF25F352E34274C58(0f, fParam2);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 - fVar1);
	}
	else
	{
		fVar0 = (fVar0 + fVar1);
	}
	if (unk_0x60F161681C368C4E(iParam0))
	{
		if (unk_0x8E30A8C5F10F6DD2(unk_0x90897FA118314142(iParam0)))
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
		iVar2 = unk_0x705BC1BB91F530B5(iParam0);
		if (unk_0xBFD32C1D4D54E09B(iVar2))
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

void func_108(int iParam0, float fParam1)
{
	if (unk_0xA86CA03D9749EEB3() && !unk_0x775F8FFC8E29F525(iParam0))
	{
		return;
	}
	if (unk_0x60F161681C368C4E(iParam0))
	{
		unk_0xA4B86C8FA557C8E4(unk_0x90897FA118314142(iParam0), fParam1);
	}
	else if (unk_0x264883409423C6C3(iParam0))
	{
		unk_0x8913E759DB41DFA6(unk_0x5293F3C38E4842B3(iParam0), fParam1);
	}
}

void func_109()
{
	int iVar0;
	
	if (!unk_0x39FEE545B315414E(Local_43.f_1, 0))
	{
		Local_60.f_0 = 4;
		return;
	}
	if (unk_0xA86CA03D9749EEB3())
	{
		if (Global_36709[iLocal_64 /*5*/].f_3 >= 10 || Global_36709[iLocal_64 /*5*/].f_4 >= 15)
		{
			if (Global_36709[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_36709[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_36709[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_36709[iLocal_64 /*5*/].f_4 = 14;
			}
		}
	}
	if (bLocal_50)
	{
		return;
	}
	iVar0 = unk_0xF8DB47D339B8B953(Local_43.f_1, 0);
	if (!unk_0x1F1B2B6E500380C5(iVar0, 0))
	{
		unk_0x8474D2383AC8AF53(Local_43.f_1, 0, 0);
		Local_60.f_0 = 11;
		return;
	}
}

void func_110()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x83666F9FB8FEBD4B() <= Local_55.f_3)
	{
		return;
	}
	iVar0 = unk_0x21178DF77817BF39(unk_0xA0081090911D13E5(), 355471868);
	if (!iVar0 == 7)
	{
		Local_55.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
		return;
	}
	if (!unk_0x39FEE545B315414E(Local_43.f_1, 0))
	{
		Local_60.f_0 = 4;
		Local_55.f_3 = -2;
		return;
	}
	iVar1 = unk_0xF8DB47D339B8B953(Local_43.f_1, 0);
	iVar2 = unk_0x8FD32443A080784B(iVar1, -1, 0);
	if (iVar2 == Local_43.f_1)
	{
		func_111();
		Local_55.f_3 = -2;
		return;
	}
	unk_0x1718D605180F4B5D(Local_43.f_1, iVar1);
	Local_60.f_0 = 9;
	Local_55.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
}

void func_111()
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
	func_137(iLocal_48, 2, 5);
	Local_55.f_4 = unk_0x83666F9FB8FEBD4B();
	fLocal_53 = 0f;
}

void func_112()
{
	if (unk_0x4745637EEB85132D(Local_43.f_1))
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

void func_113()
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
	if (bVar1 || unk_0x4745637EEB85132D(Local_43.f_1))
	{
		if (!bLocal_50)
		{
		}
		iVar0 = unk_0xF8DB47D339B8B953(Local_43.f_1, 0);
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
				unk_0x8474D2383AC8AF53(Local_43.f_1, 0, 0);
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
			func_111();
			return;
		}
		if (!bLocal_50)
		{
			if (!bLocal_50)
			{
			}
			func_111();
			return;
		}
		if (!bLocal_50)
		{
		}
		iVar2 = unk_0x8FD32443A080784B(Local_43.f_4, -1, 0);
		if (iVar2 == Local_43.f_1)
		{
			func_111();
			return;
		}
		unk_0x1718D605180F4B5D(Local_43.f_1, iVar0);
		Local_60.f_0 = 9;
		Local_55.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
		return;
	}
	if (!func_101())
	{
		unk_0xD3032BAC1ECE011F(Local_43.f_1);
		Local_60.f_0 = 4;
		return;
	}
	if (!bLocal_50)
	{
		iVar3 = unk_0x21178DF77817BF39(Local_43.f_1, -1794415470);
		if (iVar3 == 7)
		{
			if (!unk_0x39FEE545B315414E(Local_43.f_1, 0))
			{
				unk_0xD3032BAC1ECE011F(Local_43.f_1);
				Local_60.f_0 = 4;
				return;
			}
		}
	}
}

void func_114()
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
	if (!unk_0x1F1B2B6E500380C5(Local_43.f_4, 0))
	{
		Local_43.f_4 = 0;
		Local_60.f_0 = 4;
		return;
	}
	Var0 = { unk_0xC59DF10B4FC39DF8(Local_43.f_1, 1) };
	Var3 = { unk_0xC59DF10B4FC39DF8(Local_43.f_4, 1) };
	fVar6 = unk_0x999A157665D69393(Var0, Var3, 1);
	if (fVar6 > 3f)
	{
		if (!func_88(Global_36709[iLocal_64 /*5*/].f_2))
		{
			Local_60.f_0 = 12;
			return;
		}
		Local_60.f_0 = 5;
		Local_55.f_2 = unk_0x83666F9FB8FEBD4B() + 2000;
		return;
	}
	iVar7 = unk_0x8EF0E5E933BE561D(Local_43.f_4);
	iVar8 = 0;
	bVar9 = true;
	iVar8 = 1;
	while (bVar9)
	{
		if (iVar8 < iVar7)
		{
			if (unk_0x6315EBE95A97CADF(Local_43.f_4, iVar8, 0))
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
	func_115();
	unk_0xA4FE049E1F729261(Local_43.f_1, Local_43.f_4, -1, iVar8, 1073741824, 1, 0);
	Local_60.f_0 = 7;
}

void func_115()
{
	if (!unk_0xD3FACCDA4D66AEAD(Local_43.f_1))
	{
		return;
	}
	if (!unk_0xEB361B4BD195A4D3(Local_43.f_1))
	{
		unk_0x046314D7B672BA6D(Local_43.f_1, 1048576000);
		unk_0x878747E67E7C09C8(Local_43.f_1);
		unk_0x0C4A8435178E77F8(Local_43.f_1, 0, -1056964608);
		Local_60.f_2 = "";
		unk_0x42E3993926E1ADFF(Local_43.f_1);
		unk_0xF674E664795C8CB3(Local_43.f_1, 200, 0);
		unk_0xF674E664795C8CB3(Local_43.f_1, 46, 0);
		unk_0xD20DF430E654B489(Local_43.f_1, 1);
		unk_0x797AA7825A5A2D95(Local_43.f_1, 262144, 0);
		unk_0x3D0303642BF7B345(Local_43.f_1, 0);
	}
	if (!bLocal_51)
	{
		return;
	}
	bLocal_51 = false;
}

void func_116()
{
	if (unk_0x83666F9FB8FEBD4B() < Local_55.f_2)
	{
		func_102();
		return;
	}
	func_117();
	Local_55.f_2 = -2;
	Local_60.f_0 = 12;
}

int func_117()
{
	if (!func_95(Local_43.f_1))
	{
		return 0;
	}
	if (!bLocal_51)
	{
		return 0;
	}
	func_118(Local_43.f_1);
	Local_60.f_2 = "";
	return 1;
}

void func_118(int iParam0)
{
	unk_0x046314D7B672BA6D(uParam0, 1048576000);
	unk_0x0C4A8435178E77F8(uParam0, 0, -1056964608);
	unk_0xF674E664795C8CB3(uParam0, 200, 0);
	unk_0xD20DF430E654B489(iParam0, 1);
	unk_0x797AA7825A5A2D95(iParam0, 262144, 0);
	unk_0x3D0303642BF7B345(iParam0, 0);
}

void func_119()
{
	int iVar0;
	
	if (Local_55.f_0 == -1)
	{
		Global_36709[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36709[iLocal_64 /*5*/].f_3 < 3 && Global_36709[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_36709[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_36709[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_36709[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_36709[iLocal_64 /*5*/].f_2 = 1;
		}
	}
	if (unk_0x39FEE545B315414E(Local_43.f_1, 0))
	{
		Local_60.f_0 = 10;
		return;
	}
	if (func_95(Local_43.f_1))
	{
		Local_60.f_0 = 12;
		return;
	}
	if (Local_55.f_0 == -2)
	{
		return;
	}
	if (!func_88(Global_36709[iLocal_64 /*5*/].f_2))
	{
		return;
	}
	Local_60.f_0 = 12;
}

void func_120()
{
}

void func_121()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 6;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 16)
	{
		iVar0 = Global_36790[iVar1 /*5*/].f_2;
		if (!iVar0 == 6)
		{
			if (Global_36790[iVar1 /*5*/].f_1 == iLocal_48)
			{
				func_123(iVar1);
				func_122(iVar1);
			}
			else if (Global_36790[iVar1 /*5*/].f_1 == 2)
			{
				if (!iLocal_49 == -1)
				{
					if (iLocal_49 == Global_36790[iVar1 /*5*/])
					{
						func_123(iVar1);
					}
				}
			}
		}
		iVar1++;
	}
}

void func_122(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_36790[iParam0 /*5*/] = -1;
	Global_36790[iParam0 /*5*/].f_1 = -1;
	Global_36790[iParam0 /*5*/].f_2 = 6;
	Global_36790[iParam0 /*5*/].f_3 = 0;
	Global_36790[iParam0 /*5*/].f_4 = 0;
}

void func_123(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_36790[iParam0 /*5*/].f_2;
	switch (iVar0)
	{
		case 1:
			func_144();
			break;
		
		case 2:
			func_127(Global_36790[iParam0 /*5*/].f_4);
			break;
		
		case 3:
			func_126();
			break;
		
		case 4:
			func_125();
			break;
		
		case 5:
			func_124();
			break;
		
		case 0:
			break;
		
		case 6:
			break;
		
		default:
			break;
	}
}

void func_124()
{
	Local_60.f_1 = 2;
}

void func_125()
{
	int iVar0;
	
	Global_36709[iLocal_64 /*5*/].f_4++;
	if (Local_55.f_0 == -1)
	{
		Global_36709[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36709[iLocal_64 /*5*/].f_4 < 9 && Global_36709[iLocal_64 /*5*/].f_4 != 0)
	{
		Global_36709[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_36709[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_36709[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_36709[iLocal_64 /*5*/].f_2 = 1;
		}
		if (!func_95(Local_43.f_1))
		{
			func_88(Global_36709[iLocal_64 /*5*/].f_2);
		}
	}
}

void func_126()
{
	int iVar0;
	
	Global_36709[iLocal_64 /*5*/].f_3++;
	if (Local_55.f_0 == -1)
	{
		Global_36709[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36709[iLocal_64 /*5*/].f_3 < 3 && Global_36709[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_36709[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_36709[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_36709[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_36709[iLocal_64 /*5*/].f_2 = 1;
		}
		if (!func_95(Local_43.f_1))
		{
			func_88(Global_36709[iLocal_64 /*5*/].f_2);
		}
	}
}

void func_127(int iParam0)
{
	Local_43.f_3 = (Local_43.f_3 + iParam0);
	Local_43.f_2 = (Local_43.f_2 + iParam0);
	Local_55.f_1 = (Local_55.f_1 + iParam0);
	Local_55.f_0 = (Local_55.f_0 + iParam0);
}

void func_128()
{
	int iVar0;
	
	if (!bLocal_50)
	{
		iLocal_63 = -1;
		return;
	}
	if (iLocal_63 < 0)
	{
		iLocal_63 = unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B());
		return;
	}
	iVar0 = unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B());
	if (iVar0 != iLocal_63)
	{
		if (iVar0 > iLocal_63)
		{
			func_129();
		}
		iLocal_63 = iVar0;
		return;
	}
}

void func_129()
{
}

void func_130()
{
	if (!Local_55.f_0 == -1)
	{
		if (!Local_55.f_0 == -2)
		{
			if (unk_0x83666F9FB8FEBD4B() >= Local_55.f_0)
			{
				func_115();
				Local_55.f_0 = -2;
				Local_60.f_0 = 12;
			}
		}
		if (unk_0x83666F9FB8FEBD4B() > Local_55.f_1)
		{
			func_144();
		}
	}
}

void func_131(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36790[iVar0 /*5*/])
		{
			func_122(iVar0);
		}
		iVar0++;
	}
}

void func_132()
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
	if (!unk_0x912AD5A10E7633F0(Local_43.f_1, 0))
	{
		if (unk_0x4745637EEB85132D(Local_43.f_1))
		{
			Local_60.f_0 = 10;
		}
	}
	if (bLocal_50)
	{
		func_135();
		func_8(71, 1);
		if (unk_0xA86CA03D9749EEB3())
		{
			iVar0 = func_69(2049, -1, 0);
			iVar1 = (iVar0 / 10) + 1 * 10;
			if (iVar0 + 1 >= iVar1)
			{
				func_133(iVar1);
			}
			func_66(2049, iVar0 + 1, -1, 1, 0);
		}
		else
		{
			iVar2 = 0;
			iVar3 = 0;
			iVar4 = 0;
			unk_0x8A3351ECF43DB941(joaat("sp0_sp_num_times_drunk"), &iVar2, -1);
			unk_0x8A3351ECF43DB941(joaat("sp1_sp_num_times_drunk"), &iVar3, -1);
			unk_0x8A3351ECF43DB941(joaat("sp2_sp_num_times_drunk"), &iVar4, -1);
			iVar5 = ((iVar2 + iVar3) + iVar4);
			iVar6 = (iVar5 / 10) + 1 * 10;
			if (iVar5 + 1 >= iVar6)
			{
				func_133(iVar6);
			}
			switch (func_57())
			{
				case 0:
					unk_0x10CE8769EE2626C7(joaat("sp0_sp_num_times_drunk"), iVar2 + 1, 1);
					break;
				
				case 1:
					unk_0x10CE8769EE2626C7(joaat("sp1_sp_num_times_drunk"), iVar3 + 1, 1);
					break;
				
				case 2:
					unk_0x10CE8769EE2626C7(joaat("sp2_sp_num_times_drunk"), iVar4 + 1, 1);
					break;
				}
		}
		Local_60.f_1 = 1;
		return;
	}
	Local_60.f_1 = 12;
	if (Local_55.f_0 == -1)
	{
		Global_36709[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36709[iLocal_64 /*5*/].f_3 < 3 && Global_36709[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_36709[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar7 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar7 <= 0)
		{
			iVar7 = 0;
		}
		iVar7 = (iVar7 / 1000) + 1;
		Global_36709[iLocal_64 /*5*/].f_2 = 0;
		if (iVar7 < 30)
		{
			Global_36709[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar7 < 10)
		{
			Global_36709[iLocal_64 /*5*/].f_2 = 1;
		}
	}
}

void func_133(int iParam0)
{
	int iVar0;
	
	iVar0 = func_134(81);
	Global_2412996[iVar0 /*83*/] = 81;
	Global_2412996[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2412996[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_134(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2412996[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2412996[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_135()
{
}

void func_136()
{
	Local_55.f_0 = Local_43.f_2;
	Local_55.f_1 = Local_43.f_3;
	Local_55.f_2 = -2;
	Local_55.f_3 = -2;
}

void func_137(int iParam0, int iParam1, int iParam2)
{
	func_138(iParam0, iParam1, iParam2, 0, 0);
}

void func_138(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	if (func_140(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_139();
	if (iVar0 == -1)
	{
		return;
	}
	Global_36790[iVar0 /*5*/] = iParam0;
	Global_36790[iVar0 /*5*/].f_1 = iParam1;
	Global_36790[iVar0 /*5*/].f_2 = iParam2;
	Global_36790[iVar0 /*5*/].f_3 = iParam3;
	Global_36790[iVar0 /*5*/].f_4 = iParam4;
}

int func_139()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36790[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_140(int iParam0, int iParam1, int iParam2)
{
	if (func_141(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_141(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_36790[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36790[iVar0 /*5*/])
			{
				if (iParam1 == Global_36790[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

void func_142()
{
	int iVar0;
	
	bLocal_50 = false;
	if (Local_43.f_1 == unk_0xA0081090911D13E5())
	{
		bLocal_50 = true;
		Global_36905 = 1;
		Global_36907++;
	}
	if (!unk_0x912AD5A10E7633F0(Local_43.f_1, 0))
	{
		iVar0 = func_60(Local_43.f_1);
		switch (iVar0)
		{
			case 17:
				unk_0xD97F9F0D7231AC43(Local_43.f_1, "AMANDA_DRUNK");
				break;
			
			case 19:
				unk_0xD97F9F0D7231AC43(Local_43.f_1, "LAMAR_DRUNK");
				break;
			}
	}
}

void func_143()
{
	if (!iLocal_48 == -1)
	{
		return;
	}
	iLocal_48 = func_98(Local_43.f_1);
	if (iLocal_48 == -1)
	{
		return;
	}
	iLocal_64 = func_97(iLocal_48);
}

void func_144()
{
	int iVar0;
	
	if (!func_26(0) && !func_26(3))
	{
		if (!unk_0x912AD5A10E7633F0(Local_43.f_1, 0))
		{
			iVar0 = func_60(Local_43.f_1);
			if (Global_36709[iLocal_64 /*5*/].f_4 > 0)
			{
				switch (iVar0)
				{
					case 0:
						func_146(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 1:
						func_146(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 2:
						func_146(Local_43.f_1, "POST_STONED", 24);
						break;
					}
			}
			switch (iVar0)
			{
				case 17:
					unk_0xD97F9F0D7231AC43(Local_43.f_1, "AMANDA_NORMAL");
					break;
				
				case 19:
					unk_0xD97F9F0D7231AC43(Local_43.f_1, "LAMAR_NORMAL");
					break;
				}
			}
	}
	func_115();
	if (bLocal_50)
	{
		Global_36905 = 0;
	}
	func_145();
	unk_0x04269E768DDAF940(func_94(0));
	unk_0x04269E768DDAF940(func_94(2));
	unk_0x04269E768DDAF940(func_94(1));
	Global_1747717 = 0;
	if (unk_0xA96867DD0A63C62C(joaat("appemail")) > 0)
	{
		func_33(0);
	}
	unk_0x78C587487CD40B92();
}

void func_145()
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (unk_0x912AD5A10E7633F0(Local_43.f_1, 0))
	{
		return;
	}
	uVar0 = Local_43.f_1;
	if (unk_0x39FEE545B315414E(Local_43.f_1, 0))
	{
		uVar1 = unk_0xF8DB47D339B8B953(Local_43.f_1, 0);
		iVar2 = unk_0x8FD32443A080784B(uVar1, -1, 0);
		if (!Local_43.f_1 == iVar2)
		{
			return;
		}
		uVar0 = iVar1;
	}
	else if (!unk_0xFA461E82A81FEF04() == 4 || !unk_0xA0081090911D13E5() == Local_43.f_1)
	{
		return;
	}
	fLocal_53 = 0f;
	func_108(uVar0, 0f);
}

void func_146(var uParam0, char* sParam1, int iParam2)
{
	unk_0xD8A7A2C7456E47C9(uParam0, sParam1, func_147(iParam2), 1);
}

int func_147(int iParam0)
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

