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
	if (unk_0x7D9C4B359376D38A(2))
	{
		func_148();
	}
	Local_43 = { ScriptParam_0 };
	func_147();
	func_146();
	func_141(iLocal_48, 0, 0);
	unk_0xC1B1E9A034A63A62(0);
	func_140();
	func_136();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_135(iLocal_48);
		func_134();
		func_132();
		func_125();
		func_141(iLocal_48, 0, 0);
		func_147();
		func_6();
		if ((unk_0x3A711520F83BAE98() && !unk_0x4916190900E76373()) && !func_5())
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
	Global_2447174.f_643 = 1;
}

var func_3()
{
	return Global_2447174.f_622;
}

bool func_4()
{
	return unk_0xC80D31E4B587871C(Global_2447174.f_2, 11);
}

bool func_5()
{
	return unk_0xC80D31E4B587871C(Global_2447954.f_1.f_2810, 3);
}

void func_6()
{
	bool bVar0;
	
	if (unk_0x191BE1BC8F26F3C1(Local_43.f_1, 0))
	{
		func_148();
	}
	if (bLocal_50)
	{
		if (!unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			func_148();
		}
	}
	func_124();
	bVar0 = true;
	switch (Local_60.f_0)
	{
		case 4:
			func_123();
			return;
		
		case 5:
			func_120();
			return;
		
		case 6:
			func_118();
			return;
		
		case 7:
			func_117();
			return;
		
		case 8:
			func_116();
			return;
		
		case 9:
			func_114();
			return;
		
		case 10:
			func_113();
			func_110();
			func_109();
			return;
		
		case 11:
			func_108();
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
			if (!func_107())
			{
				func_106();
				func_110();
			}
			break;
		
		case 2:
			func_104();
			break;
		
		case 12:
			func_91();
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
	
	unk_0x0FC9D6DF5B59B0AB(Local_43.f_1, 3000, 3500, 0, 1, 1, 0);
	Global_1664851 = 1;
	if (!unk_0x3E9CABD07B829173())
	{
		unk_0xAE83ED4C9081AE6F(2500);
		while (unk_0x2D0EF1D268F33F25())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (unk_0x3A711520F83BAE98())
	{
		func_81(unk_0x9EB17624F44A8DA4(), 0, 57344);
		Global_2405047.f_2641 = 1;
		if (unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
		{
			Global_2405047.f_2642 = 1;
		}
		else
		{
			Global_2405047.f_2642 = 0;
		}
		if (unk_0xACF167683DFA8C87())
		{
			unk_0x713DAB30E8D8DE8F(0);
		}
		if (func_77(1))
		{
			func_64(0);
		}
		func_62(1);
		func_148();
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
	if (!unk_0x191BE1BC8F26F3C1(Local_43.f_1, 0))
	{
		unk_0xBD8D47FDC6902B2D(Local_43.f_1, Var1.f_5, 1, 0, 0, 1);
	}
	unk_0x4EDE34FBADD967A6(500);
	StringCopy(&(Var1.f_11), "", 16);
	Var1.f_15 = -1f;
	func_9(sVar0, &Var1, "");
	func_8(126, 1);
	func_148();
}

void func_8(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51645[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x3A711520F83BAE98())
	{
		return;
	}
	if (Global_51645[iParam0 /*7*/])
	{
		unk_0xFA3CE529DBB66C85(Global_51645[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xBFFF62F75445099D(Global_51645[iParam0 /*7*/].f_1, iVar0, 1);
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
	unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), false, 0);
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), 1);
	}
	unk_0x2A3035DE2B139D39(uParam1->f_5, 4500f);
	unk_0xF4A2B3ABAFAEF9EE(uParam1->f_5, 4500f);
	unk_0x247EAA2E93D4A021(uParam1->f_5, 5f, 1, 0, 0, 0);
	unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), uParam1->f_5, 1, 0, 0, 1);
	unk_0xEDC33A771FAEB393(unk_0xFC1458A37D98B502(), true);
	unk_0x4EDE34FBADD967A6(0);
	unk_0x6ACDC20166AA3FAC(1);
	unk_0x6450931B826B49D9(*uParam1);
	if (unk_0xAB019B170BF1309C(uParam1->f_16))
	{
	}
	else
	{
		unk_0x6450931B826B49D9(uParam1->f_16);
	}
	if (!unk_0x3E9CABD07B829173())
	{
		unk_0xAE83ED4C9081AE6F(0);
	}
	func_47(uParam1->f_5, uParam1->f_8.f_2, 0, 1);
	if (!unk_0x3E9CABD07B829173())
	{
		unk_0xAE83ED4C9081AE6F(0);
	}
	iVar1 = unk_0x53C562FD2B9E3AB0() + 20000;
	bVar2 = false;
	uParam1->f_33 = 0;
	while (!bVar2 && iVar1 > unk_0x53C562FD2B9E3AB0())
	{
		bVar2 = true;
		unk_0x6450931B826B49D9(*uParam1);
		if (!unk_0x3A801AA34DD821BE(*uParam1))
		{
			bVar2 = false;
		}
		if (!unk_0xAB019B170BF1309C(uParam1->f_16))
		{
			unk_0x6450931B826B49D9(uParam1->f_16);
			if (!unk_0x3A801AA34DD821BE(uParam1->f_16))
			{
				bVar2 = false;
			}
		}
		if (!unk_0x3E9CABD07B829173())
		{
			unk_0xAE83ED4C9081AE6F(0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_44();
	if (!func_43(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		unk_0xBF98CCF1EA4B13E9(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 0, 1);
		unk_0x9B8406983378711E(uParam1->f_5 + uParam1->f_19, (unk_0x652D2EEEF1D3E62C(uParam1->f_22) + 25f), 0, 0, 0, 0, 0, 0);
		unk_0x247EAA2E93D4A021(uParam1->f_5 + uParam1->f_19, (unk_0x652D2EEEF1D3E62C(uParam1->f_22) + 25f), 1, 0, 0, 0);
	}
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x00012827489F2A9A(unk_0x9EB17624F44A8DA4());
		unk_0x385A213BEB355C2B(unk_0xFC1458A37D98B502(), joaat("weapon_unarmed"), 1);
		unk_0x957CEE967C939968(unk_0xFC1458A37D98B502());
	}
	unk_0xEDC33A771FAEB393(unk_0xFC1458A37D98B502(), false);
	unk_0x6ACDC20166AA3FAC(0);
	unk_0x247EAA2E93D4A021(uParam1->f_5, 15f, 1, 0, 0, 0);
	unk_0x2D5FA11FBA944EDE();
	unk_0xD918F5D731B2F6DF();
	func_41();
	while (func_40())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x9F7B586A14398C40() && !unk_0x9BB64DDCD9C7B076())
	{
		unk_0x59C3AC31C7544A28(250);
	}
	unk_0xC623E2691C004001(1);
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		iVar4 = unk_0x8383F9C605E523B7(uParam1->f_5, uParam1->f_8, 2);
		unk_0xD0E12C501EE26329(iVar4, 0);
		unk_0x7122D672EBE0EA6E(iVar4, 0);
		uVar5 = unk_0x4562AC7F06CD71B3("DEFAULT_ANIMATED_CAMERA", 1);
		iVar6 = 4;
		if (uParam1->f_4 != joaat("MotionState_Idle"))
		{
			iVar6 |= 2;
		}
		func_38(unk_0xFC1458A37D98B502(), uParam1->f_18);
		unk_0x8E628F774C748D93(unk_0xFC1458A37D98B502(), iVar4, *uParam1, uParam1->f_1, 1000f, -1.5f, iVar6, 0, 1148846080, 0);
		unk_0x59E44AF726705D19(unk_0xFC1458A37D98B502(), 1);
		unk_0x649C1109114942A7(unk_0x9EB17624F44A8DA4(), 1);
		iVar3 = unk_0x178083375FEC92C3(unk_0xFC1458A37D98B502(), 77);
		unk_0x2217C45231E6A537(unk_0xFC1458A37D98B502(), 77, 1);
		unk_0xEFF56C7BDABBF39B(uVar5, iVar4, uParam1->f_2, *uParam1);
		unk_0x3458550DF8E9B453(1, 0, 3000, 1, 0, 0);
		if (!unk_0xAB019B170BF1309C(uParam1->f_16) && !unk_0xAB019B170BF1309C(uParam1->f_17))
		{
			unk_0x12C9D41D52A560D6(unk_0xFC1458A37D98B502(), uParam1->f_16, uParam1->f_17, 1000f, -1.5f, 10000, 33, 0, 0, 0, 0);
		}
	}
	else
	{
		iVar4 = -1;
	}
	if (!uParam1->f_25)
	{
		if (!unk_0xAB019B170BF1309C(sParam2))
		{
			func_37(sParam2, -1);
			uParam1->f_25 = 1;
		}
	}
	bVar7 = false;
	bVar8 = false;
	uVar9 = 16;
	if (!unk_0xAB019B170BF1309C(&(uParam1->f_11)))
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
		func_36(&uVar9, iVar175, unk_0xFC1458A37D98B502(), sVar176, 0, 1);
	}
	if (unk_0xD56F740235B1E8F0(iVar4))
	{
		sVar177 = "WalkInterruptible";
		sVar178 = "ForceBlendout";
		while (unk_0xD56F740235B1E8F0(iVar4) && !unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
		{
			if (!bVar8)
			{
				if (!unk_0x3E9CABD07B829173())
				{
					if (!unk_0xAB019B170BF1309C(uParam1->f_26))
					{
						unk_0xA91E83FF512776B6(uParam1->f_26, 0, 0);
						bVar8 = true;
					}
					if (!unk_0xAB019B170BF1309C(uParam1->f_27))
					{
						if (!unk_0xAB019B170BF1309C(uParam1->f_28))
						{
							unk_0x4AFBCBFDE748D4E0(-1, uParam1->f_28, uParam1->f_27, 0);
							bVar8 = true;
						}
						if (!unk_0xAB019B170BF1309C(uParam1->f_29))
						{
							unk_0x4AFBCBFDE748D4E0(-1, uParam1->f_29, uParam1->f_27, 0);
							bVar8 = true;
						}
					}
				}
			}
			unk_0x36853D5037847BF3();
			unk_0x553231E7FC3C570D(18);
			unk_0xBA0F87DDD5522AF1();
			func_32(0);
			iVar179 = unk_0x53C562FD2B9E3AB0();
			if (iVar179 >= (Global_36412 - 500))
			{
				func_31(4000);
			}
			fVar180 = -1f;
			fVar181 = -1f;
			fVar0 = unk_0x463C4747B41E35A3(iVar4);
			if (!unk_0xAB019B170BF1309C(&(uParam1->f_11)))
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
			if (unk_0x7B82209ED5D8E168(unk_0xFC1458A37D98B502(), unk_0x8B948C59217A295D(sVar177)))
			{
				iVar183 = (unk_0x9473DAD46D61B987(2, 195) - 128);
				iVar184 = (unk_0x9473DAD46D61B987(2, 196) - 128);
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
			if (unk_0x1FB367C588A91451() == 4 && uParam1->f_52 > 0f)
			{
				if (fVar0 >= uParam1->f_52)
				{
					if (!uParam1->f_32)
					{
						fVar185 = 1.5f;
						Var186 = { unk_0x9D1DE9B1332BAA49() };
						Var189 = { unk_0xD0E00576168D19BB(unk_0xFC1458A37D98B502(), 31086, 0f, 0f, 0f) };
						fVar192 = unk_0xBE3C4023003180FC(Var186, Var189, 1);
						fVar185 = func_18(fVar185, 0.001f, (fVar192 - 0.75f));
						if (fVar185 < 0f)
						{
							fVar185 = 0.001f;
						}
						func_17(&(uParam1->f_34), unk_0xFC1458A37D98B502(), func_57(), 1E-06f, 300, 300, 0, 0, 1045220557);
						func_16(&(uParam1->f_34), uParam1->f_53);
						if (!uParam1->f_33)
						{
							uParam1->f_34 = 1;
							uParam1->f_34.f_7 = unk_0x53C562FD2B9E3AB0();
							uParam1->f_34.f_8 = 0;
							uParam1->f_33 = 1;
						}
						if (uParam1->f_57 == 999f)
						{
							uParam1->f_56 = 0f;
						}
						if (uParam1->f_57 == 999f)
						{
							Var195 = { unk_0x605382E133586F48(2) };
							uVar198 = unk_0xF0371FE6E2BF9599(unk_0xFC1458A37D98B502());
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
						unk_0x7C9705890EF6612E(fVar193, 1065353216);
						unk_0xBB9A3C553EECB180(fVar194);
						unk_0xAB59CC8911D24D1B(fVar193);
						unk_0xA446FED5C83E6384(fVar194);
						Var201 = { unk_0x9D1DE9B1332BAA49() };
						Var204 = { unk_0x90CC871EBA5B70FA() };
						fVar207 = unk_0xBE3C4023003180FC(Var201, Var204, 1);
						iVar208 = unk_0xF2DB717A73826179((fVar207 * 1000f));
						uParam1->f_32 = 1;
					}
					if (uParam1->f_32)
					{
						unk_0xA00A044CA11268E5();
						if (func_13(&(uParam1->f_34), 1, 1, 1, 0, 0, 0))
						{
						}
					}
				}
			}
			if (unk_0x7B82209ED5D8E168(unk_0xFC1458A37D98B502(), unk_0x8B948C59217A295D(sVar178)) || iVar182)
			{
				if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
				{
					unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
					switch (uParam1->f_4)
					{
						case joaat("MotionState_Idle"):
							unk_0x31BBD48AA2503617(unk_0xFC1458A37D98B502(), joaat("MotionState_Idle"), 1, 0, 0);
							unk_0x90CE99E954B80CFF(0, 0, 3, 0);
							break;
						
						case joaat("MotionState_Walk"):
							unk_0x31BBD48AA2503617(unk_0xFC1458A37D98B502(), joaat("MotionState_Walk"), 1, 0, 0);
							unk_0xB519FC2F5D213F01(unk_0x9EB17624F44A8DA4(), 1f, 500, 0, 1, 0);
							if (unk_0x1FB367C588A91451() != 4)
							{
								if (uParam1->f_31 == 999f)
								{
									uParam1->f_30 = 0f;
								}
								if (uParam1->f_31 == 999f)
								{
									Var211 = { unk_0x605382E133586F48(2) };
									uVar214 = unk_0xF0371FE6E2BF9599(unk_0xFC1458A37D98B502());
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
								unk_0x7C9705890EF6612E(fVar209, 1065353216);
								unk_0xBB9A3C553EECB180(fVar210);
								Var217 = { unk_0x9D1DE9B1332BAA49() };
								Var220 = { unk_0x90CC871EBA5B70FA() };
								fVar223 = unk_0xBE3C4023003180FC(Var217, Var220, 1);
								iVar224 = unk_0xF2DB717A73826179((fVar223 * 1000f));
								unk_0x3458550DF8E9B453(0, 1, iVar224, 0, 0, 0);
							}
							break;
						
						default:
							break;
					}
					if (unk_0xD56F740235B1E8F0(iVar4))
					{
						unk_0x0DE51FACDA4C8C80(iVar4);
						iVar4 = -1;
					}
				}
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (!func_43(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		unk_0xD855BC7E9D7EC87F(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 1);
	}
	unk_0x59F2A26BF856E30A(unk_0x9EB17624F44A8DA4(), true, 0);
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0xB8E08BD5B184DF4E(unk_0xFC1458A37D98B502());
	}
	bVar225 = unk_0x152F67E110EC8505();
	bVar226 = false;
	if (uParam1->f_32)
	{
		unk_0xA00A044CA11268E5();
		if (!func_13(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
		{
			bVar226 = true;
		}
	}
	if (bVar225 || bVar226)
	{
		while ((bVar225 || bVar226) && !unk_0x1E06D00B67177A18())
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
			bVar225 = unk_0x152F67E110EC8505();
			bVar226 = false;
			if (uParam1->f_32)
			{
				unk_0xA00A044CA11268E5();
				if (!func_13(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
				{
					bVar226 = true;
				}
			}
		}
	}
	if (!unk_0xAB019B170BF1309C(uParam1->f_16))
	{
		unk_0xFCCDDE0E48CF9588(uParam1->f_16);
	}
	unk_0xFCCDDE0E48CF9588(*uParam1);
	unk_0x02934BABFD4CD384(uVar5, 0);
	func_10(&(uParam1->f_34));
	if (!unk_0x191BE1BC8F26F3C1(unk_0xFC1458A37D98B502(), 0))
	{
		unk_0x2217C45231E6A537(unk_0xFC1458A37D98B502(), 77, iVar3);
		unk_0x1A0806871323CD16(unk_0xFC1458A37D98B502(), 0);
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
	if (unk_0x8EA3C8E091EA5BA4(uParam0->f_1))
	{
		unk_0x02934BABFD4CD384(uParam0->f_1, 0);
	}
	if (unk_0x8EA3C8E091EA5BA4(uParam0->f_2))
	{
		unk_0x02934BABFD4CD384(uParam0->f_2, 0);
	}
	if (unk_0x8EA3C8E091EA5BA4(uParam0->f_3))
	{
		unk_0x02934BABFD4CD384(uParam0->f_3, 0);
	}
	if (unk_0x8EA3C8E091EA5BA4(uParam0->f_4))
	{
		unk_0x02934BABFD4CD384(uParam0->f_4, 0);
	}
}

void func_12(int iParam0, int iParam1, int iParam2)
{
	unk_0x4FB260623DD93924(iParam0, iParam1, 1);
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
			if (!unk_0x191BE1BC8F26F3C1(uParam0->f_5, 0))
			{
				func_11(uParam0);
				Var0 = { unk_0x9D1DE9B1332BAA49() };
				if (bParam1)
				{
					Var0 = { Var0 + unk_0x8FD9FCCB6E4BD999(uParam0->f_5) * FtoV(unk_0x46C19C2753391FBF()) };
				}
				Var3 = { unk_0xA05DDB968587006B(uParam0->f_5, Var0) };
				Var6 = { unk_0x605382E133586F48(2) };
				Var9 = { Var6 + uParam0->f_9 };
				Var12 = { Var9 - unk_0xDB824D597B53CC40(uParam0->f_5, 2) };
				Var15 = { (-unk_0x0BADBFA3B172435F(Var9.f_2) * unk_0xD0FFB162F40A139C(Var9.f_0)), (unk_0xD0FFB162F40A139C(Var9.f_2) * unk_0xD0FFB162F40A139C(Var9.f_0)), unk_0x0BADBFA3B172435F(Var9.f_0) };
				Var18 = { (-unk_0x0BADBFA3B172435F(Var12.f_2) * unk_0xD0FFB162F40A139C(Var12.f_0)), (unk_0xD0FFB162F40A139C(Var12.f_2) * unk_0xD0FFB162F40A139C(Var12.f_0)), unk_0x0BADBFA3B172435F(Var12.f_0) };
				uVar21 = unk_0xEA5D4E8111902D6B();
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = unk_0x03F9D5EC835EE606(1775630800, 0);
				}
				uParam0->f_1 = unk_0x03F9D5EC835EE606(26379945, 1);
				if (bParam1)
				{
					unk_0x1F2D9CBE337F9DB2(uParam0->f_1, uParam0->f_5, Var3, 1);
				}
				else
				{
					unk_0xA215B2F25E63FA31(uParam0->f_1, Var0);
				}
				unk_0xBEBD5CAE3510CD2A(uParam0->f_1, Var6, 2);
				unk_0xE43C573FE3C5D758(uParam0->f_1, uVar21);
				uParam0->f_2 = unk_0x03F9D5EC835EE606(26379945, 1);
				if (bParam1 && !bParam4)
				{
					unk_0x1F2D9CBE337F9DB2(uParam0->f_2, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12), 1);
				}
				else
				{
					unk_0xA215B2F25E63FA31(uParam0->f_2, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12));
				}
				unk_0xBEBD5CAE3510CD2A(uParam0->f_2, Var6, 2);
				unk_0xE43C573FE3C5D758(uParam0->f_2, uVar21);
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = unk_0x03F9D5EC835EE606(26379945, 1);
					if (bParam1 && !bParam4)
					{
						unk_0x1F2D9CBE337F9DB2(uParam0->f_4, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13), 1);
					}
					else
					{
						unk_0xA215B2F25E63FA31(uParam0->f_4, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13));
					}
					unk_0xBEBD5CAE3510CD2A(uParam0->f_4, Var6, 2);
					unk_0xE43C573FE3C5D758(uParam0->f_4, uVar21);
				}
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					unk_0x6732DB0053C5E803(uParam0->f_3, uParam0->f_1, 0, 2);
					if (iParam6 == 0)
					{
						unk_0x6732DB0053C5E803(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
					}
					unk_0x6732DB0053C5E803(uParam0->f_3, uParam0->f_2, (uParam0->f_14 - uParam0->f_17), 2);
					unk_0x6ED5DDE95A2ACDCB(uParam0->f_3, iParam6);
					unk_0x7849794435F39D49(uParam0->f_3, 1);
				}
				else
				{
					unk_0xF10DA1539629CC3F(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
				unk_0x3458550DF8E9B453(1, 0, 3000, 1, 0, 0);
				uParam0->f_7 = unk_0x53C562FD2B9E3AB0();
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
					if (unk_0x53C562FD2B9E3AB0() >= (uParam0->f_7 + uParam0->f_16))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									unk_0xA91E83FF512776B6("CamPushInFranklin", 0, 0);
									break;
								
								case 0:
									unk_0xA91E83FF512776B6("CamPushInMichael", 0, 0);
									break;
								
								case 2:
									unk_0xA91E83FF512776B6("CamPushInTrevor", 0, 0);
									break;
							}
						}
						else
						{
							unk_0xA91E83FF512776B6("CamPushInNeutral", 0, 0);
						}
						unk_0x4AFBCBFDE748D4E0(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						uParam0->f_8 = 1;
					}
				}
			}
			if (unk_0x53C562FD2B9E3AB0() >= (uParam0->f_7 + uParam0->f_15))
			{
				if (bParam2)
				{
					func_11(uParam0);
					unk_0x3458550DF8E9B453(0, 0, 3000, 1, 0, 0);
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
	unk_0x9B16F08390FCC31C();
	func_15();
}

void func_15()
{
	Global_17162.f_134 = 1;
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
	Global_15763 = 0;
	Global_15765 = 0;
	Global_15770 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_2621441 = 0;
	return func_20(sParam2, iParam3, 0);
}

int func_20(char* sParam0, int iParam1, bool bParam2)
{
	Global_15757 = 0;
	if (Global_15756 == 0 || Global_15758 == 2)
	{
		if (Global_15756 != 0)
		{
			if (iParam1 > Global_15758)
			{
				if (Global_15763 == 0)
				{
					unk_0xB31CEFB00C146C91(0);
					Global_14453.f_1 = 3;
					Global_15756 = 0;
					Global_15757 = 1;
					Global_15809 = 0;
					Global_15752 = 0;
					Global_15753 = 0;
					Global_15767 = 0;
					Global_15766 = 0;
					Global_14452 = 0;
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
		if (unk_0x42111BD51D233AAB())
		{
			return 0;
		}
		if (func_28(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_27();
		Global_15045 = { Global_15210 };
		Global_15762 = Global_15763;
		Global_15769 = Global_15770;
		Global_2621442 = Global_2621441;
		Global_15771 = { Global_15787 };
		Global_15764 = Global_15765;
		Global_16746 = Global_16747;
		Global_16754 = { Global_16760 };
		Global_16748 = Global_16749;
		Global_16750 = Global_16751;
		Global_16752 = Global_16753;
		Global_15375.f_370 = Global_16745;
		Global_15375.f_368 = Global_16743;
		Global_15375.f_369 = Global_16744;
		Global_15752 = Global_15753;
		if (Global_15762)
		{
			unk_0x0EE72DB1CD8A3B86(&Global_2323, 20);
			unk_0x0EE72DB1CD8A3B86(&Global_2324, 17);
			unk_0x0EE72DB1CD8A3B86(&Global_2325, 0);
			if (bParam2)
			{
				func_25();
				if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14453.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14419 == 1)
			{
				return 0;
			}
			if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
			{
				if (unk_0x596A22C5FEBABAC1(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (func_24())
				{
					return 0;
				}
				if (unk_0xCA87B182A4F3C252(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0x9F887157983E8EFC(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0xA9287933382DAD33(unk_0xFC1458A37D98B502()))
				{
					return 0;
				}
				if (unk_0x63D4520BD966ECD5(unk_0xFC1458A37D98B502(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70856)
				{
					if (unk_0x0BA31FF7931F3DD3(unk_0xFC1458A37D98B502()))
					{
						return 0;
					}
					if (unk_0x5EDC8E26D8E9BD2A(unk_0x9EB17624F44A8DA4()))
					{
						return 0;
					}
					if (unk_0x0A1D4A2F0A088C25(unk_0xFC1458A37D98B502()))
					{
						return 0;
					}
					if (unk_0x8E1DC2E7000CD6A1(unk_0x9EB17624F44A8DA4()))
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
				switch (Global_14453.f_1)
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
				if (unk_0xC80D31E4B587871C(Global_2323, 9))
				{
					return 0;
				}
			}
			func_22();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_21();
		return 1;
	}
	if (Global_15756 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15758 || iParam1 == Global_15758)
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
		StringCopy(&(Global_14624[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xB31CEFB00C146C91(0);
	Global_15756 = 1;
}

void func_22()
{
	Global_15809 = Global_15808;
	Global_15803 = Global_15804;
	Global_15850 = { Global_15838 };
	Global_15856 = { Global_15844 };
	Global_15811 = Global_15810;
	Global_15880 = { Global_15862 };
	Global_15886 = { Global_15868 };
	Global_15892 = { Global_15874 };
	Global_15898 = { Global_15904 };
	Global_1638 = Global_1639;
	Global_1640 = Global_1641;
	Global_15767 = Global_15768;
	Global_15769 = Global_15770;
	Global_15771 = { Global_15787 };
	Global_15760 = Global_15761;
	Global_16772 = 0;
	Global_15805 = 0;
	Global_15806 = 0;
	unk_0x0EE72DB1CD8A3B86(&Global_2324, 16);
}

int func_23()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_24()
{
	int iVar0;
	int iVar1;
	
	if (Global_70856)
	{
		iVar0 = 0;
		unk_0x5AD8564EFD5BEC2E(unk_0xFC1458A37D98B502(), &iVar1, 1);
		if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x689303135DD1F2F5() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		if (unk_0xBAEC0BAAC7E135C7(unk_0xFC1458A37D98B502(), 78, 1))
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
		Global_14453 = func_57();
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

bool func_26(int iParam0)
{
	return Global_35861 == iParam0;
}

void func_27()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15045[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15045[iVar0 /*10*/].f_1), "", 24);
		Global_15045[iVar0 /*10*/].f_7 = 0;
		Global_15045[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15045.f_161 = -99;
	Global_15045.f_162 = { 0f, 0f, 0f };
}

bool func_28(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1357530.f_203[iParam1];
			}
			break;
	}
	return unk_0xC80D31E4B587871C(Global_1357530.f_1048, iParam0);
}

void func_29()
{
	unk_0x495EB1DD7306493A();
	Global_16767 = 0;
	if ((unk_0x0DBDCC9C5537E157() || Global_14453.f_1 == 9) || Global_14452 == 1)
	{
		unk_0xB31CEFB00C146C91(0);
		Global_15756 = 6;
		Global_14453.f_1 = 3;
		return;
	}
	if (unk_0x42111BD51D233AAB())
	{
		unk_0xB31CEFB00C146C91(1);
		Global_15756 = 6;
		return;
	}
}

void func_30(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15210 = { *uParam0 };
	Global_1639 = iParam1;
	StringCopy(&Global_15826, sParam2, 24);
	Global_16745 = uParam5;
	if (iParam3 == 0)
	{
		Global_16743 = 1;
		Global_16741 = 0;
	}
	else
	{
		Global_16743 = 0;
		Global_16741 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16744 = 1;
		Global_16742 = 0;
	}
	else
	{
		Global_16744 = 0;
		Global_16742 = 1;
	}
}

void func_31(int iParam0)
{
	Global_36412 = (unk_0x53C562FD2B9E3AB0() + iParam0);
}

void func_32(int iParam0)
{
	if (!Global_14453.f_1 == 1)
	{
		if (func_35(0))
		{
			func_33(iParam0);
		}
		unk_0x872F1C1F8587CCC7(&Global_2324, 2);
	}
}

void func_33(int iParam0)
{
	if (Global_14615)
	{
		func_34(0, 0);
	}
	if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
	{
		unk_0x872F1C1F8587CCC7(&Global_2324, 16);
	}
	if (unk_0x0DBDCC9C5537E157())
	{
		unk_0xB31CEFB00C146C91(0);
	}
	Global_15756 = 5;
	if (iParam0 == 1)
	{
		unk_0x872F1C1F8587CCC7(&Global_2323, 30);
	}
	else
	{
		unk_0x0EE72DB1CD8A3B86(&Global_2323, 30);
	}
	if (!func_23())
	{
		Global_14453.f_1 = 3;
	}
}

void func_34(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_35(0))
		{
			Global_14615 = 1;
			if (bParam1)
			{
				unk_0x494F5FA1BF017D58(&Global_14390);
			}
			Global_14381 = { Global_14399[Global_14398 /*3*/] };
			unk_0x0D75BB9393CE608D(Global_14381);
		}
	}
	else if (Global_14615 == 1)
	{
		Global_14615 = 0;
		Global_14381 = { Global_14406[Global_14398 /*3*/] };
		if (bParam1)
		{
			unk_0x0D75BB9393CE608D(Global_14390);
		}
		else
		{
			unk_0x0D75BB9393CE608D(Global_14381);
		}
	}
}

int func_35(int iParam0)
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
	if (!Global_70856)
	{
		if (!unk_0x3AB6A1A9084FB0A4(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x4ACB9D202CFF8727(iParam2, 0);
			}
			else
			{
				unk_0x4ACB9D202CFF8727(iParam2, 1);
			}
		}
		if (!unk_0x3AB6A1A9084FB0A4(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xC672DBF4ABE19DFB(iParam2, 0);
			}
			else
			{
				unk_0xC672DBF4ABE19DFB(iParam2, 1);
			}
		}
	}
}

void func_37(char* sParam0, int iParam1)
{
	unk_0x67129637F30DEB3F(sParam0);
	unk_0x376CFA11DE0FE521(0, 0, 1, iParam1);
}

void func_38(int iParam0, var uParam1)
{
	if (func_39(uParam1, 1))
	{
		unk_0xBF0CB3963FD36905(iParam0, "HOSPITAL_0", 0f, 1f);
	}
	if (func_39(uParam1, 2))
	{
		unk_0xBF0CB3963FD36905(iParam0, "HOSPITAL_1", 0f, 1f);
	}
	if (func_39(uParam1, 4))
	{
		unk_0xBF0CB3963FD36905(iParam0, "HOSPITAL_2", 0f, 1f);
	}
	if (func_39(uParam1, 8))
	{
		unk_0xBF0CB3963FD36905(iParam0, "HOSPITAL_3", 0f, 1f);
	}
	if (func_39(uParam1, 16))
	{
		unk_0xBF0CB3963FD36905(iParam0, "HOSPITAL_4", 0f, 1f);
	}
	if (func_39(uParam1, 32))
	{
		unk_0xBF0CB3963FD36905(iParam0, "HOSPITAL_5", 0f, 1f);
	}
	if (func_39(uParam1, 64))
	{
		unk_0xBF0CB3963FD36905(iParam0, "HOSPITAL_6", 0f, 1f);
	}
	if (func_39(uParam1, 128))
	{
		unk_0xBF0CB3963FD36905(iParam0, "HOSPITAL_7", 0f, 1f);
	}
	if (func_39(uParam1, 256))
	{
		unk_0xBF0CB3963FD36905(iParam0, "HOSPITAL_8", 0f, 1f);
	}
	if (func_39(uParam1, 512))
	{
		unk_0xBF0CB3963FD36905(iParam0, "HOSPITAL_9", 0f, 1f);
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
	if (((Global_92833 == 13 || Global_92833 == 10) || Global_92833 == 11) || Global_92833 == 12)
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
		if (Global_89911[iVar0 /*17*/] && !Global_89911[iVar0 /*17*/].f_1)
		{
			if (Global_89911[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_89911[iVar0 /*17*/].f_5 != 88 && Global_89911[iVar0 /*17*/].f_5 != 89) && Global_89911[iVar0 /*17*/].f_5 != 92)
				{
					func_42(Global_89911[iVar0 /*17*/].f_5, 1);
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
			Global_86963[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_86963[iParam0 /*2*/] = 0;
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
		iVar1 = Global_36796[iVar0 /*5*/];
		if (!iVar1 == -1)
		{
			func_141(1, iVar1, 1);
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_36770[iVar2 /*5*/] == 0)
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
	if (!Global_36770[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36770[iParam0 /*5*/].f_1 == unk_0xFC1458A37D98B502())
		{
			Global_36991 = 0;
		}
	}
	Global_36770[iParam0 /*5*/] = 13;
	Global_36770[iParam0 /*5*/].f_1 = 0;
	Global_36770[iParam0 /*5*/].f_2 = 0;
	Global_36770[iParam0 /*5*/].f_3 = 0;
	Global_36770[iParam0 /*5*/].f_4 = 0;
	Global_36769 = (Global_36769 - 1);
	if (Global_36769 < 0)
	{
		Global_36769 = 0;
	}
}

int func_47(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	if (unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		func_51(0);
		unk_0x247EAA2E93D4A021(Param0, 5f, 1, 0, 0, 0);
		if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), Param0, 1, 0, 0, 1);
				unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), uParam3);
				unk_0x7C9705890EF6612E(0f, 1065353216);
				unk_0xBB9A3C553EECB180(0f);
			}
		}
		unk_0x32C900DD9B686F75(Param0, 4500f, 0);
		unk_0x4EDE34FBADD967A6(0);
		unk_0x247EAA2E93D4A021(Param0, 5000f, 1, 0, 0, 0);
		unk_0xBBF9037650162761(Param0, 5000f, 0);
		unk_0x2A3035DE2B139D39(Param0, 5000f);
		unk_0xF4A2B3ABAFAEF9EE(Param0, 5000f);
		func_50();
		func_49();
		unk_0xC1B1E9A034A63A62(0);
		func_51(1);
		if (!unk_0x40189ECE75CF9724())
		{
			while (!unk_0x32C900DD9B686F75(Param0, 4500f, 0))
			{
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					unk_0x6ACDC20166AA3FAC(0);
					return 0;
				}
			}
		}
		unk_0xC1B1E9A034A63A62(0);
		while (!unk_0x64D098EABB2F6F13())
		{
			unk_0x4EDE34FBADD967A6(0);
			if (unk_0x83666F9FB8FEBD4B() > 20000)
			{
				unk_0x6ACDC20166AA3FAC(0);
				if (unk_0x40189ECE75CF9724())
				{
					unk_0x81BCCFFE3F019672();
				}
				return 0;
			}
		}
		if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
		{
			if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
			{
				if (unk_0x40189ECE75CF9724())
				{
					unk_0x81BCCFFE3F019672();
				}
				unk_0x6ACDC20166AA3FAC(0);
				unk_0xC1B1E9A034A63A62(0);
				unk_0x2D5FA11FBA944EDE();
				if (iParam5 == 1)
				{
					unk_0xD918F5D731B2F6DF();
				}
				else
				{
					unk_0xC1B1E9A034A63A62(5000);
				}
				unk_0x08D2DA91BFDB8C64();
			}
		}
		while ((!unk_0xD5560CEDB3CEB2CF() && !func_48()) && unk_0x83666F9FB8FEBD4B() < 1500)
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
			unk_0x7367FB97975F1E29(Param0, &(Param0.f_2), 0, 0);
			unk_0x247EAA2E93D4A021(Param0, 5f, 1, 0, 0, 0);
			if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
			{
				if (!unk_0x3AB6A1A9084FB0A4(unk_0xFC1458A37D98B502()))
				{
					unk_0xBD8D47FDC6902B2D(unk_0xFC1458A37D98B502(), Param0, 1, 0, 0, 1);
					unk_0x48ED7B2293A96722(unk_0xFC1458A37D98B502(), uParam3);
				}
			}
		}
		unk_0x7C9705890EF6612E(0f, 1065353216);
		unk_0xBB9A3C553EECB180(0f);
		func_51(0);
		return 1;
	}
	func_51(0);
	return 0;
}

bool func_48()
{
	return !Global_69678.f_553;
}

void func_49()
{
	Global_69678.f_553 = 1;
	Global_69678.f_554 = 0;
}

void func_50()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		Global_69678[iVar0] = 0;
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
			if (!unk_0xC80D31E4B587871C(Global_92833.f_20, 2))
			{
				unk_0x6ACDC20166AA3FAC(1);
				unk_0x872F1C1F8587CCC7(&(Global_92833.f_20), 2);
			}
		}
		else if (unk_0xC80D31E4B587871C(Global_92833.f_20, 2))
		{
			unk_0x6ACDC20166AA3FAC(0);
			unk_0x0EE72DB1CD8A3B86(&(Global_92833.f_20), 2);
		}
	}
}

int func_52()
{
	if (unk_0xC80D31E4B587871C(unk_0x63A6486593EC7EC3(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

bool func_53(int iParam0)
{
	return unk_0xC80D31E4B587871C(Global_104555.f_7199[iParam0], 0);
}

int func_54(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104555.f_9055.f_99.f_58[iParam0];
}

int func_55()
{
	if (Global_33226[11] == 1)
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
	return Global_104555.f_9055.f_330[iParam0 /*6*/];
}

int func_57()
{
	func_58();
	return Global_104555.f_2353.f_539.f_4301;
}

void func_58()
{
	int iVar0;
	
	if (unk_0x6ADD12BF4D6D2587(unk_0xFC1458A37D98B502()))
	{
		if (func_61(Global_104555.f_2353.f_539.f_4301) != unk_0x82FF3DFBC3965CC0(unk_0xFC1458A37D98B502()))
		{
			iVar0 = func_60(unk_0xFC1458A37D98B502());
			if (func_59(iVar0) && (!func_26(14) || Global_103506))
			{
				if (Global_104555.f_2353.f_539.f_4301 != iVar0 && func_59(Global_104555.f_2353.f_539.f_4301))
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

bool func_59(int iParam0)
{
	return iParam0 < 3;
}

int func_60(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6ADD12BF4D6D2587(iParam0))
	{
		iVar1 = unk_0x82FF3DFBC3965CC0(iParam0);
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
		return Global_104555.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_62(bool bParam0)
{
	unk_0xC2C53B09E215C30E(0f);
	unk_0xCA95F6B458E05D16(0f);
	unk_0xFBF9D5E16F28DD3E(0f);
	unk_0xB0F1C81988F1DD0D(1);
	unk_0x8C236B20FA7F87E5(0f);
	unk_0xFB9C126263C6C9C2(1);
	unk_0xE38BD72F7068FCD3(0);
	if (unk_0x771D0F8F56A5FE6C("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0xE02E32C69260FBB7("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0xAB019B170BF1309C(&Global_36971))
	{
		if (unk_0x771D0F8F56A5FE6C(&Global_36971))
		{
			unk_0xE02E32C69260FBB7(&Global_36971);
		}
	}
	if (unk_0x8EA3C8E091EA5BA4(Global_36960))
	{
		if (unk_0xEB6CE9F449EBE42F(Global_36960))
		{
			unk_0x2D506790E8BD950D(Global_36960, 0f);
			unk_0x3C6F9A723015D90F(Global_36960, 1);
		}
	}
	if (unk_0xACF167683DFA8C87())
	{
		unk_0x713DAB30E8D8DE8F(0);
	}
	if (bParam0)
	{
		if (unk_0x4102DE1B9F707D57() != -1 || unk_0x174776B22B5B9EEE() != -1)
		{
			unk_0xBAD7096AD4E946DE();
		}
		else if (unk_0x1E06D00B67177A18())
		{
			unk_0xBAD7096AD4E946DE();
		}
	}
	Global_36966 = 0f;
	StringCopy(&Global_36967, "", 16);
	StringCopy(&Global_36971, "", 64);
	StringCopy(&Global_36987, "", 16);
	func_63();
}

void func_63()
{
	Global_36959 = 0;
	Global_36960 = 0;
	Global_36961 = 0;
	Global_36962 = 30000;
	Global_36963 = 0f;
	Global_36965 = 0f;
	Global_36964 = 0f;
	Global_36966 = 0f;
	StringCopy(&Global_36967, "", 16);
}

void func_64(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_262145.f_17014;
			break;
		
		case 1:
			iVar0 = Global_262145.f_17004;
			break;
		
		case 2:
			iVar0 = Global_262145.f_17015;
			break;
		
		case 3:
			iVar0 = Global_262145.f_17007;
			break;
		
		case 4:
			iVar0 = Global_262145.f_17003;
			break;
		
		case 6:
			iVar0 = 3;
			break;
		
		case 7:
			iVar0 = Global_262145.f_17018;
			break;
		
		case 8:
			iVar0 = Global_262145.f_17019;
			break;
		
		case 9:
			iVar0 = Global_262145.f_17022;
			break;
		
		case 22:
			iVar0 = Global_262145.f_17023;
			break;
		
		case 23:
			iVar0 = Global_262145.f_17016;
			break;
		
		case 25:
			iVar0 = Global_262145.f_17904;
			break;
		
		case 26:
			iVar0 = Global_262145.f_17903;
			break;
	}
	if (iVar0 != 0)
	{
		unk_0xF2CDA5A7C6ED93BE(func_75(func_76()), func_73(func_76()), func_72(), func_71(), iParam0, iVar0);
	}
	func_70(iVar0);
	func_65(iVar0);
}

void func_65(int iParam0)
{
	int iVar0;
	
	iVar0 = func_69(3951, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11.f_449 = iVar0;
	func_66(3951, iVar0, -1, 1, 0);
}

void func_66(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_67(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xBFFF62F75445099D(iVar0, iParam1, iParam3);
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

int func_68()
{
	return Global_1312736;
}

int func_69(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2523060[iParam0 /*3*/][func_67(iParam1)];
	if (unk_0xFA3CE529DBB66C85(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_70(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x9EB17624F44A8DA4();
	Global_1627537[iVar0 /*532*/].f_11.f_448 = (Global_1627537[iVar0 /*532*/].f_11.f_448 + iParam0);
	if (Global_1627537[iVar0 /*532*/].f_11.f_448 < -9999)
	{
		Global_1627537[iVar0 /*532*/].f_11.f_448 = 9999;
	}
	else if (Global_1627537[iVar0 /*532*/].f_11.f_448 > 9999)
	{
		Global_1627537[iVar0 /*532*/].f_11.f_448 = 9999;
	}
}

int func_71()
{
	if (Global_1667867.f_3 != 0)
	{
		return Global_1667867.f_3;
	}
	return -1;
}

int func_72()
{
	if (Global_1667867.f_2 != 0)
	{
		return Global_1667867.f_2;
	}
	return -1;
}

int func_73(int iParam0)
{
	if (iParam0 == func_74())
	{
		return -1;
	}
	return Global_1627537[iParam0 /*532*/].f_11.f_8[1];
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
	return Global_1627537[iParam0 /*532*/].f_11.f_8[0];
}

int func_76()
{
	return Global_1627537[unk_0x9EB17624F44A8DA4() /*532*/].f_11;
}

bool func_77(bool bParam0)
{
	return func_78(unk_0x9EB17624F44A8DA4(), bParam0);
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
	iVar0 = Global_1627537[iParam0 /*532*/].f_11;
	if (iVar0 != func_74() && Global_1627537[iVar0 /*532*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_80(int iParam0, int iParam1)
{
	if (iParam0 != func_74())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_74())
		{
			if (Global_1627537[iParam0 /*532*/].f_11 == iParam0 && Global_1627537[iParam0 /*532*/].f_11.f_409 == iParam1)
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
		if (!func_89())
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
			iVar25 = unk_0x25D049AAC4603E65(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x3A711520F83BAE98())
				{
					unk_0xB68F1251512BDC18(1);
				}
				else if (bVar13 || (!func_87(unk_0x9EB17624F44A8DA4(), 0) && !func_86()))
				{
					unk_0xB3A8974D2C811672(iVar25, !bVar13, 0);
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
				if (!func_85(iVar25) && !unk_0xDDF5130488C0B76A(iVar25))
				{
					if (!bVar21)
					{
						unk_0xB18E1DBC397238E1(iVar25, true, 0);
					}
				}
				if (!unk_0xDFFD5F8C8ABCB7EF(iVar25))
				{
					if (!bVar20)
					{
						unk_0xEDC33A771FAEB393(iVar25, false);
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
				func_84();
				func_83();
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
				if (!func_85(iVar25) && !unk_0xDDF5130488C0B76A(iVar25))
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
					if (func_82(Global_4456448.f_143970))
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

bool func_82(int iParam0)
{
	return iParam0 == 17;
}

void func_83()
{
	struct<3> Var0;
	
	Global_2436181.f_1117 = 0;
	Global_2436181.f_1118 = 0;
	Global_2436181.f_1119 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2436181.f_1124 = -1;
	Global_2436181.f_1125 = 0;
	Global_2405047.f_2650 = { Var0 };
}

void func_84()
{
	Global_2405047.f_675 = 0;
	Global_2405047.f_2693 = 0;
	Global_2405047.f_508 = 0;
	Global_2405047.f_587 = 0;
	Global_2422736[unk_0x9EB17624F44A8DA4() /*420*/].f_222 = 0;
	Global_2405047.f_2649 = 0;
}

int func_85(int iParam0)
{
	int iVar0;
	
	if (unk_0x88DDBE9908752BF0(iParam0, 1))
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

bool func_86()
{
	return unk_0xC80D31E4B587871C(Global_2359302, 3);
}

bool func_87(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x9EB17624F44A8DA4())
	{
		bVar0 = func_88(-1, 0) == 8;
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

int func_88(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_68();
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

int func_89()
{
	if (func_90() == 0)
	{
		return 1;
	}
	return 0;
}

int func_90()
{
	return Global_1312466.f_18;
}

void func_91()
{
	int iVar0;
	
	if (bLocal_50)
	{
		return;
	}
	Local_43.f_4 = 0;
	if (!func_92(Global_36796[iLocal_64 /*5*/].f_2))
	{
		return;
	}
	iVar0 = unk_0x63A6486593EC7EC3(500, 3000);
	Local_60.f_0 = 5;
	Local_55.f_2 = (unk_0x83666F9FB8FEBD4B() + iVar0);
}

int func_92(int iParam0)
{
	int iVar0;
	var uVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	
	iVar0 = func_103();
	if (iVar0 == -2)
	{
		return 0;
	}
	if (unk_0x3AB6A1A9084FB0A4(Local_43.f_1))
	{
		if (unk_0x88DDBE9908752BF0(Local_43.f_1, 0) || unk_0x0F299BBD0DC14B18(Local_43.f_1))
		{
			return 0;
		}
		if (unk_0xFC27C6A251089B18(Local_43.f_1))
		{
			return 0;
		}
		if (func_99(Local_43.f_1))
		{
			return 0;
		}
	}
	if (Global_36796[iLocal_64 /*5*/].f_3 < 3 && Global_36796[iLocal_64 /*5*/].f_3 != 0)
	{
		return 0;
	}
	if (Global_36796[iLocal_64 /*5*/].f_4 < 9 && Global_36796[iLocal_64 /*5*/].f_4 != 0)
	{
		return 0;
	}
	uVar1 = func_98(iParam0);
	if (unk_0xAB019B170BF1309C(uVar1))
	{
		return 0;
	}
	if (func_99(Local_43.f_1))
	{
		return 0;
	}
	unk_0x7C0C9D9129095E19(sVar1);
	if (func_95(Local_43.f_1))
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
		if (!unk_0xAB019B170BF1309C(sVar2) && !unk_0xAB019B170BF1309C(sVar3))
		{
			unk_0x6450931B826B49D9(sVar2);
			while (!unk_0x3A801AA34DD821BE(sVar2))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (!unk_0x3AB6A1A9084FB0A4(Local_43.f_1))
			{
				unk_0x12C9D41D52A560D6(Local_43.f_1, sVar2, sVar3, 1.5f, -1.5f, -1, 48, 0, 0, 0, 0);
				sLocal_54 = sVar3;
			}
		}
	}
	if (!unk_0xD9C499EAA1D3F82A(sVar1))
	{
		return 0;
	}
	if (unk_0x3AB6A1A9084FB0A4(Local_43.f_1))
	{
		return 0;
	}
	unk_0x60C54803C97FDAAB(Local_43.f_1, sVar1, 0.75f);
	if (unk_0x1FB367C588A91451() == 4)
	{
		unk_0xBA6C08BE38AB5B87(Local_43.f_1, "move_ped_strafing_firstperson@drunk");
	}
	unk_0x8C99D3DA85352032(Local_43.f_1, 0, sVar1, "idle", 2f, 1);
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
			if (unk_0x1417A5CC924DE120(Local_43.f_1))
			{
				if (!func_93())
				{
					iVar4 = "FACIALS@GEN_MALE@BASE";
				}
				else
				{
					iVar4 = "FACIALS@GEN_FEMALE@BASE";
				}
			}
			else if (unk_0x6668BA66B78B4E7C(Local_43.f_1))
			{
				iVar4 = "FACIALS@GEN_MALE@BASE";
			}
			else
			{
				iVar4 = "FACIALS@GEN_FEMALE@BASE";
			}
			break;
	}
	unk_0xFC5E55B45BF47418(Local_43.f_1, "mood_drunk_1", iVar4);
	unk_0x2217C45231E6A537(Local_43.f_1, 200, 1);
	unk_0x2217C45231E6A537(Local_43.f_1, 46, 1);
	unk_0x4ACB9D202CFF8727(Local_43.f_1, 0);
	unk_0xE17958D3FD0F9EE9(Local_43.f_1, 262144, 1);
	unk_0x983908DFF59B03A8(Local_43.f_1, 1);
	return 1;
}

bool func_93()
{
	return func_94(unk_0x9EB17624F44A8DA4());
}

int func_94(int iParam0)
{
	if (unk_0x82FF3DFBC3965CC0(unk_0x25D049AAC4603E65(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_95(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x88DDBE9908752BF0(iParam0, 1) || unk_0x0F299BBD0DC14B18(iParam0))
	{
		return 0;
	}
	if (unk_0x78F50AA8F955BEFC(iParam0, -2017877118) != 7)
	{
		return 0;
	}
	if (unk_0x78F50AA8F955BEFC(iParam0, 1785177548) != 7)
	{
		return 0;
	}
	if (unk_0x08765A6321A42CA1(iParam0))
	{
		return 0;
	}
	if (unk_0x0ACC2116170FA204(iParam0))
	{
		return 0;
	}
	if (unk_0x9F887157983E8EFC(iParam0))
	{
		return 0;
	}
	if (unk_0x1E5BEC57385A771D(iParam0))
	{
		return 0;
	}
	if (Global_68215)
	{
		return 0;
	}
	if (func_97())
	{
		return 0;
	}
	if (iParam0 == unk_0xFC1458A37D98B502())
	{
		if (!unk_0x470635BE5DD23831(unk_0x9EB17624F44A8DA4()))
		{
			return 0;
		}
		if (!unk_0x036D7C18EE783AB5(unk_0x9EB17624F44A8DA4()))
		{
			return 0;
		}
		if (unk_0xFE2BE49C250EFD09(unk_0x9EB17624F44A8DA4()) || unk_0x19A6176969EAC49E(unk_0x9EB17624F44A8DA4()))
		{
			return 0;
		}
		if (func_96())
		{
			return 0;
		}
	}
	Var0 = { unk_0x8FD9FCCB6E4BD999(iParam0) };
	if (unk_0xA8CEACB4F35AE058(Var0) >= (1f * 1f))
	{
		return 0;
	}
	return 1;
}

bool func_96()
{
	return Global_92885.f_316 > 0;
}

bool func_97()
{
	return unk_0x53C562FD2B9E3AB0() <= Global_17301.f_5745 + 100;
}

char* func_98(int iParam0)
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

int func_99(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_100(iParam0);
	uVar1 = func_98(iVar0);
	if (unk_0xAB019B170BF1309C(Local_60.f_2))
	{
		if (unk_0xAB019B170BF1309C(uVar1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return unk_0x74C475EB8E73D398(Local_60.f_2, sVar1);
}

int func_100(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!unk_0x6ADD12BF4D6D2587(iParam0))
	{
		return -1;
	}
	iVar0 = func_102(iParam0);
	iVar1 = func_101(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36796[iVar1 /*5*/].f_2;
}

int func_101(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36796[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_102(int iParam0)
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
		if (iParam0 == Global_36796[iVar0 /*5*/].f_1)
		{
			return Global_36796[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_103()
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

void func_104()
{
	if (bLocal_50)
	{
		return;
	}
	if (!func_105())
	{
		Local_60.f_0 = 5;
		Local_55.f_2 = unk_0x83666F9FB8FEBD4B() + 5000;
		return;
	}
	Local_60.f_0 = 6;
}

bool func_105()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (Local_43.f_4 == 0)
	{
		return 0;
	}
	if (unk_0x191BE1BC8F26F3C1(Local_43.f_4, 0))
	{
		return 0;
	}
	Var0 = { unk_0xB3328BA8976B416C(Local_43.f_1, 1) };
	Var3 = { unk_0xB3328BA8976B416C(Local_43.f_4, 1) };
	fVar6 = unk_0xBE3C4023003180FC(Var0, Var3, 1);
	return fVar6 < 7f;
}

void func_106()
{
	int iVar0;
	char* sVar1;
	
	if (Local_43.f_1 == unk_0xFC1458A37D98B502())
	{
		unk_0x4FB260623DD93924(0, 36, 1);
		if (unk_0x16700A5CF29C1FC1(Local_43.f_1))
		{
			if (Global_36796[iLocal_64 /*5*/].f_2 == 0 || Global_36796[iLocal_64 /*5*/].f_2 == 2)
			{
				unk_0x995BFC92D2115309(Local_43.f_1, 0, 0);
			}
		}
		if (unk_0x6609DF209E7283C5(Local_43.f_1))
		{
			unk_0xB8755FBF960E8752(Local_43.f_1, 0);
		}
	}
	if (Local_55.f_0 != -2)
	{
		if (Local_55.f_0 == -1)
		{
			if (Global_36796[iLocal_64 /*5*/].f_2 != 0)
			{
				Global_36796[iLocal_64 /*5*/].f_2 = 0;
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
			if (Global_36796[iLocal_64 /*5*/].f_2 == 0)
			{
				if (iVar0 < 30)
				{
					Global_36796[iLocal_64 /*5*/].f_2 = 2;
					if (!func_92(2))
					{
						Global_36796[iLocal_64 /*5*/].f_2 = 0;
						return;
					}
				}
			}
			if (Global_36796[iLocal_64 /*5*/].f_2 == 2)
			{
				if (iVar0 < 10)
				{
					Global_36796[iLocal_64 /*5*/].f_2 = 1;
					if (!func_92(2))
					{
						Global_36796[iLocal_64 /*5*/].f_2 = 2;
						return;
					}
				}
			}
			if (Global_36796[iLocal_64 /*5*/].f_2 == 1)
			{
			}
		}
	}
	else
	{
		return;
	}
	if (!unk_0xAB019B170BF1309C(sLocal_54))
	{
		if (!func_95(Local_43.f_1))
		{
			sVar1 = "MOVE_M@DRUNK@TRANSITIONS";
			if (unk_0xA5F6598E13F98E08(Local_43.f_1, sVar1, sLocal_54, 3))
			{
				unk_0x7976C9958C60E354(Local_43.f_1, sVar1, sLocal_54, -4f);
			}
			sLocal_54 = "";
			return;
		}
	}
	if (Global_36796[iLocal_64 /*5*/].f_3 >= 10 || Global_36796[iLocal_64 /*5*/].f_4 >= 15)
	{
		if (unk_0x78F50AA8F955BEFC(Local_43.f_1, 1785177548) == 1)
		{
			return;
		}
		if (unk_0xAFFA17B5D5E2F248(Local_43.f_1))
		{
			return;
		}
		if (unk_0x88DDBE9908752BF0(Local_43.f_1, 1))
		{
			if (Global_36796[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_36796[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_36796[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_36796[iLocal_64 /*5*/].f_4 = 14;
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
	if (!func_99(Local_43.f_1))
	{
		return;
	}
}

int func_107()
{
	int iVar0;
	
	if (!unk_0x1ED974E122CB5C47(Local_43.f_1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = unk_0xDFD115BB10FE46A9(Local_43.f_1, 0);
	if (!unk_0xB8DE76287EDC4957(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0x317536BCEA8FA6B0(iVar0, -1, 0) == Local_43.f_1)
	{
		return 0;
	}
	Local_43.f_4 = iVar0;
	Local_60.f_0 = 7;
	return 1;
}

void func_108()
{
	if (!unk_0x88DDBE9908752BF0(Local_43.f_1, 0))
	{
		Local_60.f_0 = 4;
		return;
	}
}

void func_109()
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
	if (!unk_0x5BEF7A5AB8F17255(unk_0x9EB17624F44A8DA4()))
	{
		return;
	}
	if (!unk_0x1ED974E122CB5C47(unk_0xFC1458A37D98B502()))
	{
		return;
	}
	if (unk_0xC308146F18B10A6F(unk_0x9EB17624F44A8DA4(), 0))
	{
		return;
	}
	iVar0 = unk_0xDFD115BB10FE46A9(unk_0xFC1458A37D98B502(), 0);
	fVar1 = unk_0x90D5DFB054818BA7(iVar0);
	if (fVar1 < 5f)
	{
		return;
	}
	Var2 = { unk_0xB3328BA8976B416C(unk_0xFC1458A37D98B502(), 1) };
	Var5 = { Var2 - Vector(3f, 30f, 30f) };
	Var8 = { Var2 + Vector(3f, 30f, 30f) };
	if (!unk_0x8D44FCFF87C54F50(Var5, Var8) && !unk_0x25D10EDC93C33B77(Var5, Var8))
	{
		return;
	}
	unk_0x1563F8C21480594F(unk_0x9EB17624F44A8DA4(), 1, 0);
	unk_0xCFB8D84F848CAA39(unk_0x9EB17624F44A8DA4(), 0);
	func_8(73, 1);
}

void func_110()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = Local_43.f_1;
	if (unk_0x88DDBE9908752BF0(Local_43.f_1, 0))
	{
		iVar1 = unk_0xDFD115BB10FE46A9(Local_43.f_1, 0);
		iVar2 = unk_0x317536BCEA8FA6B0(iVar1, -1, 0);
		if (!iVar2 == Local_43.f_1)
		{
			return;
		}
		if (unk_0x3A711520F83BAE98() && !unk_0xA0BF73C5030D3F60(iVar1))
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!unk_0xFC1458A37D98B502() == Local_43.f_1)
	{
		return;
	}
	else if (!unk_0x1FB367C588A91451() == 4)
	{
		fLocal_53 = 0f;
		func_112(iVar0, 0f);
		return;
	}
	if (unk_0x83666F9FB8FEBD4B() < Local_55.f_4)
	{
		func_112(iVar0, fLocal_53);
		return;
	}
	if (unk_0x52C56492660097C7(iVar0))
	{
		Local_55.f_4 = unk_0x83666F9FB8FEBD4B() + 2000;
	}
	else
	{
		Local_55.f_4 = unk_0x83666F9FB8FEBD4B() + 1000;
	}
	fVar3 = unk_0x90D5DFB054818BA7(iVar0);
	if (fVar3 < 0.04f)
	{
		fLocal_53 = 0f;
		func_112(iVar0, 0f);
		return;
	}
	if (Local_55.f_1 == -1)
	{
		fLocal_53 = func_111(iVar0, 0.13f, 0.06f);
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
			fLocal_53 = func_111(iVar0, 0.05f, 0.02f);
		}
		else if (iVar4 < 30000)
		{
			fLocal_53 = func_111(iVar0, 0.07f, 0.03f);
		}
		else if (iVar4 < 45000)
		{
			fLocal_53 = func_111(iVar0, 0.09f, 0.04f);
		}
		else if (iVar4 < 600000)
		{
			fLocal_53 = func_111(iVar0, 0.1f, 0.05f);
		}
		else
		{
			fLocal_53 = func_111(iVar0, 0.13f, 0.06f);
		}
	}
	func_112(iVar0, fLocal_53);
}

float func_111(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = unk_0x5B811202FCBE9E9D(-fParam1, fParam1);
	fVar1 = unk_0x5B811202FCBE9E9D(0f, fParam2);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 - fVar1);
	}
	else
	{
		fVar0 = (fVar0 + fVar1);
	}
	if (unk_0x52C56492660097C7(iParam0))
	{
		if (unk_0xCA87B182A4F3C252(unk_0x07F64790D10D1DB5(iParam0)))
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
		iVar2 = unk_0x82FF3DFBC3965CC0(iParam0);
		if (unk_0x125CDF69FA6EF560(iVar2))
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

void func_112(int iParam0, float fParam1)
{
	if (unk_0x3A711520F83BAE98() && !unk_0xA0BF73C5030D3F60(iParam0))
	{
		return;
	}
	if (unk_0x52C56492660097C7(iParam0))
	{
		unk_0xA9C855E50F16E445(unk_0x07F64790D10D1DB5(iParam0), fParam1);
	}
	else if (unk_0x8A3FF8E81B40BB75(iParam0))
	{
		unk_0xEFCAE4626B561D6E(unk_0x79A6CD762DCCABE4(iParam0), fParam1);
	}
}

void func_113()
{
	int iVar0;
	
	if (!unk_0x88DDBE9908752BF0(Local_43.f_1, 0))
	{
		Local_60.f_0 = 4;
		return;
	}
	if (unk_0x3A711520F83BAE98())
	{
		if (Global_36796[iLocal_64 /*5*/].f_3 >= 10 || Global_36796[iLocal_64 /*5*/].f_4 >= 15)
		{
			if (Global_36796[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_36796[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_36796[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_36796[iLocal_64 /*5*/].f_4 = 14;
			}
		}
	}
	if (bLocal_50)
	{
		return;
	}
	iVar0 = unk_0xDFD115BB10FE46A9(Local_43.f_1, 0);
	if (!unk_0xB8DE76287EDC4957(iVar0, 0))
	{
		unk_0x16416C5B54FDBCBB(Local_43.f_1, 0, 0);
		Local_60.f_0 = 11;
		return;
	}
}

void func_114()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x83666F9FB8FEBD4B() <= Local_55.f_3)
	{
		return;
	}
	iVar0 = unk_0x78F50AA8F955BEFC(unk_0xFC1458A37D98B502(), 355471868);
	if (!iVar0 == 7)
	{
		Local_55.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
		return;
	}
	if (!unk_0x88DDBE9908752BF0(Local_43.f_1, 0))
	{
		Local_60.f_0 = 4;
		Local_55.f_3 = -2;
		return;
	}
	iVar1 = unk_0xDFD115BB10FE46A9(Local_43.f_1, 0);
	iVar2 = unk_0x317536BCEA8FA6B0(iVar1, -1, 0);
	if (iVar2 == Local_43.f_1)
	{
		func_115();
		Local_55.f_3 = -2;
		return;
	}
	unk_0x09DC36247844A9E1(Local_43.f_1, iVar1, 0);
	Local_60.f_0 = 9;
	Local_55.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
}

void func_115()
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
	func_141(iLocal_48, 2, 5);
	Local_55.f_4 = unk_0x83666F9FB8FEBD4B();
	fLocal_53 = 0f;
}

void func_116()
{
	if (unk_0x1ED974E122CB5C47(Local_43.f_1))
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

void func_117()
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
	if (bVar1 || unk_0x1ED974E122CB5C47(Local_43.f_1))
	{
		if (!bLocal_50)
		{
		}
		iVar0 = unk_0xDFD115BB10FE46A9(Local_43.f_1, 0);
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
				unk_0x16416C5B54FDBCBB(Local_43.f_1, 0, 0);
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
			func_115();
			return;
		}
		if (!bLocal_50)
		{
			if (!bLocal_50)
			{
			}
			func_115();
			return;
		}
		if (!bLocal_50)
		{
		}
		iVar2 = unk_0x317536BCEA8FA6B0(Local_43.f_4, -1, 0);
		if (iVar2 == Local_43.f_1)
		{
			func_115();
			return;
		}
		unk_0x09DC36247844A9E1(Local_43.f_1, iVar0, 0);
		Local_60.f_0 = 9;
		Local_55.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
		return;
	}
	if (!func_105())
	{
		unk_0xB8E08BD5B184DF4E(Local_43.f_1);
		Local_60.f_0 = 4;
		return;
	}
	if (!bLocal_50)
	{
		iVar3 = unk_0x78F50AA8F955BEFC(Local_43.f_1, -1794415470);
		if (iVar3 == 7)
		{
			if (!unk_0x88DDBE9908752BF0(Local_43.f_1, 0))
			{
				unk_0xB8E08BD5B184DF4E(Local_43.f_1);
				Local_60.f_0 = 4;
				return;
			}
		}
	}
}

void func_118()
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
	if (!unk_0xB8DE76287EDC4957(Local_43.f_4, 0))
	{
		Local_43.f_4 = 0;
		Local_60.f_0 = 4;
		return;
	}
	Var0 = { unk_0xB3328BA8976B416C(Local_43.f_1, 1) };
	Var3 = { unk_0xB3328BA8976B416C(Local_43.f_4, 1) };
	fVar6 = unk_0xBE3C4023003180FC(Var0, Var3, 1);
	if (fVar6 > 3f)
	{
		if (!func_92(Global_36796[iLocal_64 /*5*/].f_2))
		{
			Local_60.f_0 = 12;
			return;
		}
		Local_60.f_0 = 5;
		Local_55.f_2 = unk_0x83666F9FB8FEBD4B() + 2000;
		return;
	}
	iVar7 = unk_0x95EC8AE7E4F33F6E(Local_43.f_4);
	iVar8 = 0;
	bVar9 = true;
	iVar8 = 1;
	while (bVar9)
	{
		if (iVar8 < iVar7)
		{
			if (unk_0x8EE3A848975DDF21(Local_43.f_4, iVar8, 0))
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
	func_119();
	unk_0x6F8C8278B7C06889(Local_43.f_1, Local_43.f_4, -1, iVar8, 1073741824, 1, 0);
	Local_60.f_0 = 7;
}

void func_119()
{
	if (!unk_0x6ADD12BF4D6D2587(Local_43.f_1))
	{
		return;
	}
	if (!unk_0x3AB6A1A9084FB0A4(Local_43.f_1))
	{
		unk_0x75B1352F83860B74(Local_43.f_1, 1048576000);
		unk_0xC23424E21515FB7B(Local_43.f_1);
		unk_0x704EA8DED5AC0753(Local_43.f_1, 0, -1056964608);
		Local_60.f_2 = "";
		unk_0x7473BE00BC5FB4E3(Local_43.f_1);
		unk_0x2217C45231E6A537(Local_43.f_1, 200, 0);
		unk_0x2217C45231E6A537(Local_43.f_1, 46, 0);
		unk_0x4ACB9D202CFF8727(Local_43.f_1, 1);
		unk_0xE17958D3FD0F9EE9(Local_43.f_1, 262144, 0);
		unk_0x983908DFF59B03A8(Local_43.f_1, 0);
	}
	if (!bLocal_51)
	{
		return;
	}
	bLocal_51 = false;
}

void func_120()
{
	if (unk_0x83666F9FB8FEBD4B() < Local_55.f_2)
	{
		func_106();
		return;
	}
	func_121();
	Local_55.f_2 = -2;
	Local_60.f_0 = 12;
}

int func_121()
{
	if (!func_99(Local_43.f_1))
	{
		return 0;
	}
	if (!bLocal_51)
	{
		return 0;
	}
	func_122(Local_43.f_1);
	Local_60.f_2 = "";
	return 1;
}

void func_122(int iParam0)
{
	unk_0x75B1352F83860B74(uParam0, 1048576000);
	unk_0x704EA8DED5AC0753(uParam0, 0, -1056964608);
	unk_0x2217C45231E6A537(uParam0, 200, 0);
	unk_0x4ACB9D202CFF8727(iParam0, 1);
	unk_0xE17958D3FD0F9EE9(iParam0, 262144, 0);
	unk_0x983908DFF59B03A8(iParam0, 0);
}

void func_123()
{
	int iVar0;
	
	if (Local_55.f_0 == -1)
	{
		Global_36796[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36796[iLocal_64 /*5*/].f_3 < 3 && Global_36796[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_36796[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_36796[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_36796[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_36796[iLocal_64 /*5*/].f_2 = 1;
		}
	}
	if (unk_0x88DDBE9908752BF0(Local_43.f_1, 0))
	{
		Local_60.f_0 = 10;
		return;
	}
	if (func_99(Local_43.f_1))
	{
		Local_60.f_0 = 12;
		return;
	}
	if (Local_55.f_0 == -2)
	{
		return;
	}
	if (!func_92(Global_36796[iLocal_64 /*5*/].f_2))
	{
		return;
	}
	Local_60.f_0 = 12;
}

void func_124()
{
}

void func_125()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 6;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 16)
	{
		iVar0 = Global_36877[iVar1 /*5*/].f_2;
		if (!iVar0 == 6)
		{
			if (Global_36877[iVar1 /*5*/].f_1 == iLocal_48)
			{
				func_127(iVar1);
				func_126(iVar1);
			}
			else if (Global_36877[iVar1 /*5*/].f_1 == 2)
			{
				if (!iLocal_49 == -1)
				{
					if (iLocal_49 == Global_36877[iVar1 /*5*/])
					{
						func_127(iVar1);
					}
				}
			}
		}
		iVar1++;
	}
}

void func_126(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_36877[iParam0 /*5*/] = -1;
	Global_36877[iParam0 /*5*/].f_1 = -1;
	Global_36877[iParam0 /*5*/].f_2 = 6;
	Global_36877[iParam0 /*5*/].f_3 = 0;
	Global_36877[iParam0 /*5*/].f_4 = 0;
}

void func_127(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_36877[iParam0 /*5*/].f_2;
	switch (iVar0)
	{
		case 1:
			func_148();
			break;
		
		case 2:
			func_131(Global_36877[iParam0 /*5*/].f_4);
			break;
		
		case 3:
			func_130();
			break;
		
		case 4:
			func_129();
			break;
		
		case 5:
			func_128();
			break;
		
		case 0:
			break;
		
		case 6:
			break;
		
		default:
			break;
	}
}

void func_128()
{
	Local_60.f_1 = 2;
}

void func_129()
{
	int iVar0;
	
	Global_36796[iLocal_64 /*5*/].f_4++;
	if (Local_55.f_0 == -1)
	{
		Global_36796[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36796[iLocal_64 /*5*/].f_4 < 9 && Global_36796[iLocal_64 /*5*/].f_4 != 0)
	{
		Global_36796[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_36796[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_36796[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_36796[iLocal_64 /*5*/].f_2 = 1;
		}
		if (!func_99(Local_43.f_1))
		{
			func_92(Global_36796[iLocal_64 /*5*/].f_2);
		}
	}
}

void func_130()
{
	int iVar0;
	
	Global_36796[iLocal_64 /*5*/].f_3++;
	if (Local_55.f_0 == -1)
	{
		Global_36796[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36796[iLocal_64 /*5*/].f_3 < 3 && Global_36796[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_36796[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_36796[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_36796[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_36796[iLocal_64 /*5*/].f_2 = 1;
		}
		if (!func_99(Local_43.f_1))
		{
			func_92(Global_36796[iLocal_64 /*5*/].f_2);
		}
	}
}

void func_131(int iParam0)
{
	Local_43.f_3 = (Local_43.f_3 + iParam0);
	Local_43.f_2 = (Local_43.f_2 + iParam0);
	Local_55.f_1 = (Local_55.f_1 + iParam0);
	Local_55.f_0 = (Local_55.f_0 + iParam0);
}

void func_132()
{
	int iVar0;
	
	if (!bLocal_50)
	{
		iLocal_63 = -1;
		return;
	}
	if (iLocal_63 < 0)
	{
		iLocal_63 = unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4());
		return;
	}
	iVar0 = unk_0xF5D0CBECCA41314A(unk_0x9EB17624F44A8DA4());
	if (iVar0 != iLocal_63)
	{
		if (iVar0 > iLocal_63)
		{
			func_133();
		}
		iLocal_63 = iVar0;
		return;
	}
}

void func_133()
{
}

void func_134()
{
	if (!Local_55.f_0 == -1)
	{
		if (!Local_55.f_0 == -2)
		{
			if (unk_0x83666F9FB8FEBD4B() >= Local_55.f_0)
			{
				func_119();
				Local_55.f_0 = -2;
				Local_60.f_0 = 12;
			}
		}
		if (unk_0x83666F9FB8FEBD4B() > Local_55.f_1)
		{
			func_148();
		}
	}
}

void func_135(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36877[iVar0 /*5*/])
		{
			func_126(iVar0);
		}
		iVar0++;
	}
}

void func_136()
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
	if (!unk_0x191BE1BC8F26F3C1(Local_43.f_1, 0))
	{
		if (unk_0x1ED974E122CB5C47(Local_43.f_1))
		{
			Local_60.f_0 = 10;
		}
	}
	if (bLocal_50)
	{
		func_139();
		func_8(71, 1);
		if (unk_0x3A711520F83BAE98())
		{
			iVar0 = func_69(2054, -1, 0);
			iVar1 = (iVar0 / 10) + 1 * 10;
			if (iVar0 + 1 >= iVar1)
			{
				func_137(iVar1);
			}
			func_66(2054, iVar0 + 1, -1, 1, 0);
		}
		else
		{
			iVar2 = 0;
			iVar3 = 0;
			iVar4 = 0;
			unk_0xFA3CE529DBB66C85(joaat("sp0_sp_num_times_drunk"), &iVar2, -1);
			unk_0xFA3CE529DBB66C85(joaat("sp1_sp_num_times_drunk"), &iVar3, -1);
			unk_0xFA3CE529DBB66C85(joaat("sp2_sp_num_times_drunk"), &iVar4, -1);
			iVar5 = ((iVar2 + iVar3) + iVar4);
			iVar6 = (iVar5 / 10) + 1 * 10;
			if (iVar5 + 1 >= iVar6)
			{
				func_137(iVar6);
			}
			switch (func_57())
			{
				case 0:
					unk_0xBFFF62F75445099D(joaat("sp0_sp_num_times_drunk"), iVar2 + 1, 1);
					break;
				
				case 1:
					unk_0xBFFF62F75445099D(joaat("sp1_sp_num_times_drunk"), iVar3 + 1, 1);
					break;
				
				case 2:
					unk_0xBFFF62F75445099D(joaat("sp2_sp_num_times_drunk"), iVar4 + 1, 1);
					break;
				}
		}
		Local_60.f_1 = 1;
		return;
	}
	Local_60.f_1 = 12;
	if (Local_55.f_0 == -1)
	{
		Global_36796[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36796[iLocal_64 /*5*/].f_3 < 3 && Global_36796[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_36796[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar7 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar7 <= 0)
		{
			iVar7 = 0;
		}
		iVar7 = (iVar7 / 1000) + 1;
		Global_36796[iLocal_64 /*5*/].f_2 = 0;
		if (iVar7 < 30)
		{
			Global_36796[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar7 < 10)
		{
			Global_36796[iLocal_64 /*5*/].f_2 = 1;
		}
	}
}

void func_137(int iParam0)
{
	int iVar0;
	
	iVar0 = func_138(81);
	Global_2413945[iVar0 /*83*/] = 81;
	Global_2413945[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2413945[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_138(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2413945[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2413945[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_139()
{
}

void func_140()
{
	Local_55.f_0 = Local_43.f_2;
	Local_55.f_1 = Local_43.f_3;
	Local_55.f_2 = -2;
	Local_55.f_3 = -2;
}

void func_141(int iParam0, int iParam1, int iParam2)
{
	func_142(iParam0, iParam1, iParam2, 0, 0);
}

void func_142(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	if (func_144(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_143();
	if (iVar0 == -1)
	{
		return;
	}
	Global_36877[iVar0 /*5*/] = iParam0;
	Global_36877[iVar0 /*5*/].f_1 = iParam1;
	Global_36877[iVar0 /*5*/].f_2 = iParam2;
	Global_36877[iVar0 /*5*/].f_3 = iParam3;
	Global_36877[iVar0 /*5*/].f_4 = iParam4;
}

int func_143()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36877[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_144(int iParam0, int iParam1, int iParam2)
{
	if (func_145(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_145(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_36877[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36877[iVar0 /*5*/])
			{
				if (iParam1 == Global_36877[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

void func_146()
{
	int iVar0;
	
	bLocal_50 = false;
	if (Local_43.f_1 == unk_0xFC1458A37D98B502())
	{
		bLocal_50 = true;
		Global_36992 = 1;
		Global_36994++;
	}
	if (!unk_0x191BE1BC8F26F3C1(Local_43.f_1, 0))
	{
		iVar0 = func_60(Local_43.f_1);
		switch (iVar0)
		{
			case 17:
				unk_0x350CEE66BDF90273(Local_43.f_1, "AMANDA_DRUNK");
				break;
			
			case 19:
				unk_0x350CEE66BDF90273(Local_43.f_1, "LAMAR_DRUNK");
				break;
			}
	}
}

void func_147()
{
	if (!iLocal_48 == -1)
	{
		return;
	}
	iLocal_48 = func_102(Local_43.f_1);
	if (iLocal_48 == -1)
	{
		return;
	}
	iLocal_64 = func_101(iLocal_48);
}

void func_148()
{
	int iVar0;
	
	if (!func_26(0) && !func_26(3))
	{
		if (!unk_0x191BE1BC8F26F3C1(Local_43.f_1, 0))
		{
			iVar0 = func_60(Local_43.f_1);
			if (Global_36796[iLocal_64 /*5*/].f_4 > 0)
			{
				switch (iVar0)
				{
					case 0:
						func_150(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 1:
						func_150(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 2:
						func_150(Local_43.f_1, "POST_STONED", 24);
						break;
					}
			}
			switch (iVar0)
			{
				case 17:
					unk_0x350CEE66BDF90273(Local_43.f_1, "AMANDA_NORMAL");
					break;
				
				case 19:
					unk_0x350CEE66BDF90273(Local_43.f_1, "LAMAR_NORMAL");
					break;
				}
			}
	}
	func_119();
	if (bLocal_50)
	{
		Global_36992 = 0;
	}
	func_149();
	unk_0xFCCDDE0E48CF9588(func_98(0));
	unk_0xFCCDDE0E48CF9588(func_98(2));
	unk_0xFCCDDE0E48CF9588(func_98(1));
	Global_1664851 = 0;
	if (unk_0x8F38E94BBF3404CD(joaat("appemail")) > 0)
	{
		func_33(0);
	}
	unk_0x96A3D9A8A4C7AFD4();
}

void func_149()
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (unk_0x191BE1BC8F26F3C1(Local_43.f_1, 0))
	{
		return;
	}
	uVar0 = Local_43.f_1;
	if (unk_0x88DDBE9908752BF0(Local_43.f_1, 0))
	{
		uVar1 = unk_0xDFD115BB10FE46A9(Local_43.f_1, 0);
		iVar2 = unk_0x317536BCEA8FA6B0(uVar1, -1, 0);
		if (!Local_43.f_1 == iVar2)
		{
			return;
		}
		uVar0 = iVar1;
	}
	else if (!unk_0x1FB367C588A91451() == 4 || !unk_0xFC1458A37D98B502() == Local_43.f_1)
	{
		return;
	}
	fLocal_53 = 0f;
	func_112(uVar0, 0f);
}

void func_150(var uParam0, char* sParam1, int iParam2)
{
	unk_0x74D45BB07BD51F8B(uParam0, sParam1, func_151(iParam2), 1);
}

int func_151(int iParam0)
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

