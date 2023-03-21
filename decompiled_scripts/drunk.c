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
	if (unk_0xD4BE58A7E3E102AC(2))
	{
		func_173();
	}
	Local_43 = { ScriptParam_0 };
	func_172();
	func_171();
	func_166(iLocal_48, 0, 0);
	unk_0xC1B1E9A034A63A62(0);
	func_165();
	func_161();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_160(iLocal_48);
		func_159();
		func_157();
		func_150();
		func_166(iLocal_48, 0, 0);
		func_172();
		func_9();
		if ((unk_0x393E9918BC37548A() && !unk_0xA51CBC95AC3A4B14()) && !func_8())
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
	if ((!func_4() && !func_3()) && Global_2449754)
	{
		Global_4456448.f_154360 = 0;
	}
}

bool func_3()
{
	return Global_2448961.f_591;
}

bool func_4()
{
	return Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_196 != 0;
}

void func_5()
{
	Global_2448961.f_656 = 1;
}

var func_6()
{
	return Global_2448961.f_635;
}

bool func_7()
{
	return unk_0xA2BC31158C8CEFD2(Global_2448961.f_2, 11);
}

bool func_8()
{
	return unk_0xA2BC31158C8CEFD2(Global_2449755.f_1.f_2810, 3);
}

void func_9()
{
	bool bVar0;
	
	if (unk_0xF4B969E0807E76C7(Local_43.f_1, 0))
	{
		func_173();
	}
	if (bLocal_50)
	{
		if (!unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
		{
			func_173();
		}
	}
	func_149();
	bVar0 = true;
	switch (Local_60.f_0)
	{
		case 4:
			func_148();
			return;
		
		case 5:
			func_145();
			return;
		
		case 6:
			func_143();
			return;
		
		case 7:
			func_142();
			return;
		
		case 8:
			func_141();
			return;
		
		case 9:
			func_139();
			return;
		
		case 10:
			func_138();
			func_135();
			func_134();
			return;
		
		case 11:
			func_133();
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
			if (!func_132())
			{
				func_121();
				func_135();
			}
			break;
		
		case 2:
			func_119();
			break;
		
		case 12:
			func_106();
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
	
	if (!unk_0xA2BC31158C8CEFD2(Global_1676879.f_3, 27))
	{
		unk_0xE8CF1EE4C8858654(Local_43.f_1, 3000, 3500, 0, 1, 1, 0);
	}
	Global_1671734 = 1;
	if (!unk_0x260395BA7F0C83CB())
	{
		unk_0x5800A2599806C837(2500);
		while (unk_0xA710300CD13D2877())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (unk_0x393E9918BC37548A())
	{
		func_105(&uVar0, 0, 0);
		if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()) && !unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
		{
			unk_0x8876CB6BC167181F(unk_0x0FA8183DAD2B3203(), 0, 1);
		}
		while ((unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()) && !unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0)) && unk_0x39EB729ABCDDAFAE(unk_0x0FA8183DAD2B3203()))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x3B76114EC84D5812(&(Global_1676879.f_3), 27);
		func_91(unk_0x7C7787D2D7139A85(), 0, 57344, 0);
		Global_2405071.f_2670 = 1;
		if (unk_0xA2BC31158C8CEFD2(Global_1676879, 15))
		{
			unk_0x3B76114EC84D5812(&Global_1676879, 15);
		}
		if (unk_0xA2BC31158C8CEFD2(Global_1676879.f_2, 6))
		{
			unk_0x3B76114EC84D5812(&(Global_1676879.f_2), 6);
		}
		if (unk_0x586E95A1CE46FC21(unk_0x7C7787D2D7139A85(), 0))
		{
			Global_2405071.f_2671 = 1;
		}
		else
		{
			Global_2405071.f_2671 = 0;
		}
		if (unk_0x0D02B1D7D3E821AE())
		{
			unk_0x92F3CFBD517CD462(0);
		}
		if (func_87(1))
		{
			func_75(0);
		}
		func_73(1);
		func_173();
	}
	sVar2 = "";
	Var3.f_3 = 1064514355;
	Var3.f_30 = 1148829696;
	Var3.f_31 = 1148829696;
	Var3.f_52 = 1148829696;
	iVar61 = 7;
	switch (func_67())
	{
		case 0:
			if (func_65() != 2)
			{
				iVar61 = 0;
			}
			else
			{
				iVar61 = 1;
			}
			break;
		
		case 1:
			if (!func_64(126))
			{
				iVar61 = 2;
			}
			else
			{
				iVar61 = 3;
			}
			break;
		
		case 2:
			if (!func_63(4))
			{
				if (func_64(58))
				{
					iVar61 = 4;
				}
				if (func_64(59))
				{
					iVar61 = 5;
				}
				if (iVar61 == 7)
				{
					if (!func_62())
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
	if (!unk_0xF4B969E0807E76C7(Local_43.f_1, 0))
	{
		unk_0xCB3446C6A91D1A78(Local_43.f_1, Var3.f_5, 1, 0, 0, 1);
	}
	unk_0x4EDE34FBADD967A6(500);
	StringCopy(&(Var3.f_11), "", 16);
	Var3.f_15 = -1f;
	func_12(sVar2, &Var3, "");
	func_11(126, 1);
	func_173();
}

void func_11(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57213[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x393E9918BC37548A())
	{
		return;
	}
	if (Global_57213[iParam0 /*7*/])
	{
		unk_0x367DA79FE620711B(Global_57213[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x41410A69AD49AFCD(Global_57213[iParam0 /*7*/].f_1, iVar0, 1);
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
	unk_0x3D0DE925C0536CA0(unk_0x7C7787D2D7139A85(), false, 0);
	if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
	{
		unk_0x04F5A8AA60EC662B(unk_0x0FA8183DAD2B3203(), 1);
	}
	unk_0xA61B7DD77FE81428(uParam1->f_5, 4500f);
	unk_0x9BD00CB18115A35C(uParam1->f_5, 4500f);
	unk_0xB82DC93528F8603C(uParam1->f_5, 5f, 1, 0, 0, 0);
	unk_0xCB3446C6A91D1A78(unk_0x0FA8183DAD2B3203(), uParam1->f_5, 1, 0, 0, 1);
	unk_0x860A5CC30A0EF207(unk_0x0FA8183DAD2B3203(), true);
	unk_0x4EDE34FBADD967A6(0);
	unk_0x269298D09D57BFCF(1);
	unk_0x36B659209EBDD366(*uParam1);
	if (unk_0x9591DE0F00127F2A(uParam1->f_16))
	{
	}
	else
	{
		unk_0x36B659209EBDD366(uParam1->f_16);
	}
	if (!unk_0x260395BA7F0C83CB())
	{
		unk_0x5800A2599806C837(0);
	}
	func_57(uParam1->f_5, uParam1->f_8.f_2, 0, 1);
	if (!unk_0x260395BA7F0C83CB())
	{
		unk_0x5800A2599806C837(0);
	}
	iVar1 = unk_0x9B35D07DCD0F0B43() + 20000;
	bVar2 = false;
	uParam1->f_33 = 0;
	while (!bVar2 && iVar1 > unk_0x9B35D07DCD0F0B43())
	{
		bVar2 = true;
		unk_0x36B659209EBDD366(*uParam1);
		if (!unk_0xB25A0D192C6A0A5B(*uParam1))
		{
			bVar2 = false;
		}
		if (!unk_0x9591DE0F00127F2A(uParam1->f_16))
		{
			unk_0x36B659209EBDD366(uParam1->f_16);
			if (!unk_0xB25A0D192C6A0A5B(uParam1->f_16))
			{
				bVar2 = false;
			}
		}
		if (!unk_0x260395BA7F0C83CB())
		{
			unk_0x5800A2599806C837(0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_54();
	if (!func_53(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		unk_0x2D2E01EF7EFB0DB2(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 0, 1);
		unk_0x7FB505C34A14BAAA(uParam1->f_5 + uParam1->f_19, (unk_0x652D2EEEF1D3E62C(uParam1->f_22) + 25f), 0, 0, 0, 0, 0, 0);
		unk_0xB82DC93528F8603C(uParam1->f_5 + uParam1->f_19, (unk_0x652D2EEEF1D3E62C(uParam1->f_22) + 25f), 1, 0, 0, 0);
	}
	if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
	{
		unk_0xE643698D7D91CE86(unk_0x7C7787D2D7139A85());
		unk_0xE5DAA5553A176799(unk_0x0FA8183DAD2B3203(), joaat("weapon_unarmed"), 1);
		unk_0x5BBDAD06F405ED2C(unk_0x0FA8183DAD2B3203());
	}
	unk_0x860A5CC30A0EF207(unk_0x0FA8183DAD2B3203(), false);
	unk_0x269298D09D57BFCF(0);
	unk_0xB82DC93528F8603C(uParam1->f_5, 15f, 1, 0, 0, 0);
	unk_0x031DBFB526070D9E();
	unk_0x6B303686A3D6275A();
	func_51();
	while (func_50())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0xBF28CCACDDFF5346() && !unk_0xC862E94A8ABC89B8())
	{
		unk_0xCF33E56642B34516(250);
	}
	unk_0xECBD7388D13DBB07(1);
	if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
	{
		iVar4 = unk_0xF2A54C51C03CADAA(uParam1->f_5, uParam1->f_8, 2);
		unk_0x3F8774A014F77C2D(iVar4, 0);
		unk_0xC8210337A7389E13(iVar4, 0);
		uVar5 = unk_0x87B0FFB353287F00("DEFAULT_ANIMATED_CAMERA", 1);
		iVar6 = 4;
		if (uParam1->f_4 != joaat("MotionState_Idle"))
		{
			iVar6 |= 2;
		}
		func_48(unk_0x0FA8183DAD2B3203(), uParam1->f_18);
		unk_0x8582CCEB95B1F1BE(unk_0x0FA8183DAD2B3203(), iVar4, *uParam1, uParam1->f_1, 1000f, -1.5f, iVar6, 0, 1148846080, 0);
		unk_0x4678205B870E2B30(unk_0x0FA8183DAD2B3203(), 1);
		unk_0x72BF9E3F886A85A5(unk_0x7C7787D2D7139A85(), 1);
		iVar3 = unk_0xCC2DDF5BC900ABA0(unk_0x0FA8183DAD2B3203(), 77);
		unk_0x70CBCB37A00F34A2(unk_0x0FA8183DAD2B3203(), 77, 1);
		unk_0x0116AC515A8787A5(uVar5, iVar4, uParam1->f_2, *uParam1);
		unk_0x0298C8010FD5A69E(1, 0, 3000, 1, 0, 0);
		if (!unk_0x9591DE0F00127F2A(uParam1->f_16) && !unk_0x9591DE0F00127F2A(uParam1->f_17))
		{
			unk_0x5D672CB011E20B28(unk_0x0FA8183DAD2B3203(), uParam1->f_16, uParam1->f_17, 1000f, -1.5f, 10000, 33, 0, 0, 0, 0);
		}
	}
	else
	{
		iVar4 = -1;
	}
	if (!uParam1->f_25)
	{
		if (!unk_0x9591DE0F00127F2A(sParam2))
		{
			func_47(sParam2, -1);
			uParam1->f_25 = 1;
		}
	}
	bVar7 = false;
	bVar8 = false;
	uVar9 = 16;
	if (!unk_0x9591DE0F00127F2A(&(uParam1->f_11)))
	{
		iVar174 = func_67();
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
		func_46(&uVar9, iVar175, unk_0x0FA8183DAD2B3203(), sVar176, 0, 1);
	}
	if (unk_0xB50E39CA0A3E6020(iVar4))
	{
		sVar177 = "WalkInterruptible";
		sVar178 = "ForceBlendout";
		while (unk_0xB50E39CA0A3E6020(iVar4) && !unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
		{
			if (!bVar8)
			{
				if (!unk_0x260395BA7F0C83CB())
				{
					if (!unk_0x9591DE0F00127F2A(uParam1->f_26))
					{
						unk_0x3E5A3FD805488EB9(uParam1->f_26, 0, 0);
						bVar8 = true;
					}
					if (!unk_0x9591DE0F00127F2A(uParam1->f_27))
					{
						if (!unk_0x9591DE0F00127F2A(uParam1->f_28))
						{
							unk_0x9964F5BBD9415AB7(-1, uParam1->f_28, uParam1->f_27, 0);
							bVar8 = true;
						}
						if (!unk_0x9591DE0F00127F2A(uParam1->f_29))
						{
							unk_0x9964F5BBD9415AB7(-1, uParam1->f_29, uParam1->f_27, 0);
							bVar8 = true;
						}
					}
				}
			}
			unk_0x40984840FC30EC06();
			unk_0x0AF55029F939BA65(18);
			unk_0xB3171D6D98D1FE2A();
			func_40(0);
			iVar179 = unk_0x9B35D07DCD0F0B43();
			if (iVar179 >= (Global_41947 - 500))
			{
				func_39(4000);
			}
			fVar180 = -1f;
			fVar181 = -1f;
			fVar0 = unk_0x91F0628278985DB8(iVar4);
			if (!unk_0x9591DE0F00127F2A(&(uParam1->f_11)))
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
			if (unk_0x5149CDB3FF43EDD1(unk_0x0FA8183DAD2B3203(), unk_0xA8C462EF7D9DC564(sVar177)))
			{
				iVar183 = (unk_0xDA4EDC173CB56A18(2, 195) - 128);
				iVar184 = (unk_0xDA4EDC173CB56A18(2, 196) - 128);
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
			if (unk_0x03DB22289AD822D2() == 4 && uParam1->f_52 > 0f)
			{
				if (fVar0 >= uParam1->f_52)
				{
					if (!uParam1->f_32)
					{
						fVar185 = 1.5f;
						Var186 = { unk_0x72DDC427E84EEBD1() };
						Var189 = { unk_0x0E516C24C87F5D0C(unk_0x0FA8183DAD2B3203(), 31086, 0f, 0f, 0f) };
						fVar192 = unk_0xD34AF93E9BCF12F0(Var186, Var189, 1);
						fVar185 = func_21(fVar185, 0.001f, (fVar192 - 0.75f));
						if (fVar185 < 0f)
						{
							fVar185 = 0.001f;
						}
						func_20(&(uParam1->f_34), unk_0x0FA8183DAD2B3203(), func_67(), 1E-06f, 300, 300, 0, 0, 1045220557);
						func_19(&(uParam1->f_34), uParam1->f_53);
						if (!uParam1->f_33)
						{
							uParam1->f_34 = 1;
							uParam1->f_34.f_7 = unk_0x9B35D07DCD0F0B43();
							uParam1->f_34.f_8 = 0;
							uParam1->f_33 = 1;
						}
						if (uParam1->f_57 == 999f)
						{
							uParam1->f_56 = 0f;
						}
						if (uParam1->f_57 == 999f)
						{
							Var195 = { unk_0x765F48D6E8886201(2) };
							uVar198 = unk_0xD2809C7F7FD79247(unk_0x0FA8183DAD2B3203());
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
						unk_0xA291E27354439AE9(fVar193, 1065353216);
						unk_0xB489E71A45CDC02F(fVar194);
						unk_0x501AF9BB037474B1(fVar193);
						unk_0xA6C3BF658F2086F9(fVar194);
						Var201 = { unk_0x72DDC427E84EEBD1() };
						Var204 = { unk_0xEB9451CD6AC51B04() };
						fVar207 = unk_0xD34AF93E9BCF12F0(Var201, Var204, 1);
						iVar208 = unk_0xF2DB717A73826179((fVar207 * 1000f));
						uParam1->f_32 = 1;
					}
					if (uParam1->f_32)
					{
						unk_0xE850423ACB0C6157();
						if (func_16(&(uParam1->f_34), 1, 1, 1, 0, 0, 0))
						{
						}
					}
				}
			}
			if (unk_0x5149CDB3FF43EDD1(unk_0x0FA8183DAD2B3203(), unk_0xA8C462EF7D9DC564(sVar178)) || iVar182)
			{
				if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
				{
					unk_0xC6612209077465DD(unk_0x0FA8183DAD2B3203());
					switch (uParam1->f_4)
					{
						case joaat("MotionState_Idle"):
							unk_0xB300618E39F089F8(unk_0x0FA8183DAD2B3203(), joaat("MotionState_Idle"), 1, 0, 0);
							unk_0x45F85138C99B8999(0, 0, 3, 0);
							break;
						
						case joaat("MotionState_Walk"):
							unk_0xB300618E39F089F8(unk_0x0FA8183DAD2B3203(), joaat("MotionState_Walk"), 1, 0, 0);
							unk_0xAE337AF59DE9ECA2(unk_0x7C7787D2D7139A85(), 1f, 500, 0, 1, 0);
							if (unk_0x03DB22289AD822D2() != 4)
							{
								if (uParam1->f_31 == 999f)
								{
									uParam1->f_30 = 0f;
								}
								if (uParam1->f_31 == 999f)
								{
									Var211 = { unk_0x765F48D6E8886201(2) };
									uVar214 = unk_0xD2809C7F7FD79247(unk_0x0FA8183DAD2B3203());
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
								unk_0xA291E27354439AE9(fVar209, 1065353216);
								unk_0xB489E71A45CDC02F(fVar210);
								Var217 = { unk_0x72DDC427E84EEBD1() };
								Var220 = { unk_0xEB9451CD6AC51B04() };
								fVar223 = unk_0xD34AF93E9BCF12F0(Var217, Var220, 1);
								iVar224 = unk_0xF2DB717A73826179((fVar223 * 1000f));
								unk_0x0298C8010FD5A69E(0, 1, iVar224, 0, 0, 0);
							}
							break;
						
						default:
							break;
					}
					if (unk_0xB50E39CA0A3E6020(iVar4))
					{
						unk_0x751BBD3BC1960CFB(iVar4);
						iVar4 = -1;
					}
				}
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (!func_53(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		unk_0x8E4F6615F45C8C6B(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 1);
	}
	unk_0x3D0DE925C0536CA0(unk_0x7C7787D2D7139A85(), true, 0);
	if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
	{
		unk_0xC6612209077465DD(unk_0x0FA8183DAD2B3203());
	}
	bVar225 = unk_0x3B26417C7511C1B0();
	bVar226 = false;
	if (uParam1->f_32)
	{
		unk_0xE850423ACB0C6157();
		if (!func_16(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
		{
			bVar226 = true;
		}
	}
	if (bVar225 || bVar226)
	{
		while ((bVar225 || bVar226) && !unk_0x16587C6F71675106())
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
			bVar225 = unk_0x3B26417C7511C1B0();
			bVar226 = false;
			if (uParam1->f_32)
			{
				unk_0xE850423ACB0C6157();
				if (!func_16(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
				{
					bVar226 = true;
				}
			}
		}
	}
	if (!unk_0x9591DE0F00127F2A(uParam1->f_16))
	{
		unk_0x7D74D6A091150B86(uParam1->f_16);
	}
	unk_0x7D74D6A091150B86(*uParam1);
	unk_0xDC5BA18043353983(uVar5, 0);
	func_13(&(uParam1->f_34));
	if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
	{
		unk_0x70CBCB37A00F34A2(unk_0x0FA8183DAD2B3203(), 77, iVar3);
		unk_0x04F5A8AA60EC662B(unk_0x0FA8183DAD2B3203(), 0);
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
	if (unk_0xD2652A8A890B29BA(uParam0->f_1))
	{
		unk_0xDC5BA18043353983(uParam0->f_1, 0);
	}
	if (unk_0xD2652A8A890B29BA(uParam0->f_2))
	{
		unk_0xDC5BA18043353983(uParam0->f_2, 0);
	}
	if (unk_0xD2652A8A890B29BA(uParam0->f_3))
	{
		unk_0xDC5BA18043353983(uParam0->f_3, 0);
	}
	if (unk_0xD2652A8A890B29BA(uParam0->f_4))
	{
		unk_0xDC5BA18043353983(uParam0->f_4, 0);
	}
}

void func_15(int iParam0, int iParam1, int iParam2)
{
	unk_0x572062A62138FBA2(iParam0, iParam1, 1);
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
			if (!unk_0xF4B969E0807E76C7(uParam0->f_5, 0))
			{
				func_14(uParam0);
				Var0 = { unk_0x72DDC427E84EEBD1() };
				if (bParam1)
				{
					Var0 = { Var0 + unk_0x93DC424F261951D6(uParam0->f_5) * FtoV(unk_0x9927BD5F023FA79D()) };
				}
				Var3 = { unk_0x28B05FCF3D725FED(uParam0->f_5, Var0) };
				Var6 = { unk_0x765F48D6E8886201(2) };
				Var9 = { Var6 + uParam0->f_9 };
				Var12 = { Var9 - unk_0x762900E9B9F74FD4(uParam0->f_5, 2) };
				Var15 = { (-unk_0x0BADBFA3B172435F(Var9.f_2) * unk_0xD0FFB162F40A139C(Var9.f_0)), (unk_0xD0FFB162F40A139C(Var9.f_2) * unk_0xD0FFB162F40A139C(Var9.f_0)), unk_0x0BADBFA3B172435F(Var9.f_0) };
				Var18 = { (-unk_0x0BADBFA3B172435F(Var12.f_2) * unk_0xD0FFB162F40A139C(Var12.f_0)), (unk_0xD0FFB162F40A139C(Var12.f_2) * unk_0xD0FFB162F40A139C(Var12.f_0)), unk_0x0BADBFA3B172435F(Var12.f_0) };
				uVar21 = unk_0xCA2D5895F07C20A1();
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = unk_0xBCB04DDDF3778A10(1775630800, 0);
				}
				uParam0->f_1 = unk_0xBCB04DDDF3778A10(26379945, 1);
				if (bParam1)
				{
					unk_0x9F2F93BD843587E2(uParam0->f_1, uParam0->f_5, Var3, 1);
				}
				else
				{
					unk_0xF44C160C97CC41EB(uParam0->f_1, Var0);
				}
				unk_0x92B8564A1A66EF0A(uParam0->f_1, Var6, 2);
				unk_0x494374BCB9580EA5(uParam0->f_1, uVar21);
				uParam0->f_2 = unk_0xBCB04DDDF3778A10(26379945, 1);
				if (bParam1 && !bParam4)
				{
					unk_0x9F2F93BD843587E2(uParam0->f_2, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12), 1);
				}
				else
				{
					unk_0xF44C160C97CC41EB(uParam0->f_2, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12));
				}
				unk_0x92B8564A1A66EF0A(uParam0->f_2, Var6, 2);
				unk_0x494374BCB9580EA5(uParam0->f_2, uVar21);
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = unk_0xBCB04DDDF3778A10(26379945, 1);
					if (bParam1 && !bParam4)
					{
						unk_0x9F2F93BD843587E2(uParam0->f_4, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13), 1);
					}
					else
					{
						unk_0xF44C160C97CC41EB(uParam0->f_4, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13));
					}
					unk_0x92B8564A1A66EF0A(uParam0->f_4, Var6, 2);
					unk_0x494374BCB9580EA5(uParam0->f_4, uVar21);
				}
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					unk_0x5ADFC1D5C62DA151(uParam0->f_3, uParam0->f_1, 0, 2);
					if (iParam6 == 0)
					{
						unk_0x5ADFC1D5C62DA151(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
					}
					unk_0x5ADFC1D5C62DA151(uParam0->f_3, uParam0->f_2, (uParam0->f_14 - uParam0->f_17), 2);
					unk_0xAD5CA80C38F18E1A(uParam0->f_3, iParam6);
					unk_0x0472F75F711AABCE(uParam0->f_3, 1);
				}
				else
				{
					unk_0x479DACF5AA4C6D03(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
				unk_0x0298C8010FD5A69E(1, 0, 3000, 1, 0, 0);
				uParam0->f_7 = unk_0x9B35D07DCD0F0B43();
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
					if (unk_0x9B35D07DCD0F0B43() >= (uParam0->f_7 + uParam0->f_16))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									unk_0x3E5A3FD805488EB9("CamPushInFranklin", 0, 0);
									break;
								
								case 0:
									unk_0x3E5A3FD805488EB9("CamPushInMichael", 0, 0);
									break;
								
								case 2:
									unk_0x3E5A3FD805488EB9("CamPushInTrevor", 0, 0);
									break;
							}
						}
						else
						{
							unk_0x3E5A3FD805488EB9("CamPushInNeutral", 0, 0);
						}
						unk_0x9964F5BBD9415AB7(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						uParam0->f_8 = 1;
					}
				}
			}
			if (unk_0x9B35D07DCD0F0B43() >= (uParam0->f_7 + uParam0->f_15))
			{
				if (bParam2)
				{
					func_14(uParam0);
					unk_0x0298C8010FD5A69E(0, 0, 3000, 1, 0, 0);
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
	unk_0xA42289DB8250C2C0();
	func_18();
}

void func_18()
{
	Global_22211.f_134 = 1;
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
	func_38(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
	return func_23(sParam2, iParam3, 0);
}

int func_23(char* sParam0, int iParam1, bool bParam2)
{
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam1 > Global_20807)
			{
				if (Global_20812 == 0)
				{
					unk_0x623942A4F366F9BB(0);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
					Global_20816 = 0;
					Global_20815 = 0;
					Global_19485 = 0;
				}
				else
				{
					func_37();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x04C7A9862FF737E9())
		{
			return 0;
		}
		if (func_36(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_35();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_21801 = Global_21802;
		Global_20424.f_370 = Global_21794;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20801 = Global_20802;
		if (Global_20811)
		{
			unk_0x3B76114EC84D5812(&Global_7356, 20);
			unk_0x3B76114EC84D5812(&Global_7357, 17);
			unk_0x3B76114EC84D5812(&Global_7358, 0);
			if (bParam2)
			{
				func_33();
				if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
			{
				if (unk_0x132DF66D50A7DE4E(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (func_32())
				{
					return 0;
				}
				if (unk_0x6B6CB57338FA0319(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (unk_0x604F402D213D3BE5(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (unk_0xA6DAB995F3A28615(unk_0x0FA8183DAD2B3203(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_76577)
				{
					if (unk_0xE294A1321110B3E9(unk_0x0FA8183DAD2B3203()))
					{
						return 0;
					}
					if (unk_0x10200426BBC4B4F1(unk_0x7C7787D2D7139A85()))
					{
						return 0;
					}
					if (unk_0x7E1657C6CCABF258(unk_0x0FA8183DAD2B3203()))
					{
						return 0;
					}
					if (unk_0xD2E3AF497D091872(unk_0x7C7787D2D7139A85()))
					{
						return 0;
					}
				}
			}
			if (func_31())
			{
				return 0;
			}
			else
			{
				switch (Global_19486.f_1)
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
				if (unk_0xA2BC31158C8CEFD2(Global_7356, 9))
				{
					return 0;
				}
			}
			func_30();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_29();
		func_24();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_20807 || iParam1 == Global_20807)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_37();
	}
	return 0;
}

void func_24()
{
	if (!func_25())
	{
		return;
	}
	if (Global_20811)
	{
		MemCopy(&(Global_1703200.f_1), {Global_20424}, 4);
		Global_1703200 = Global_6671;
		Global_1703200.f_6 = Global_20815;
	}
}

int func_25()
{
	if (!Global_262145.f_28013)
	{
		return 0;
	}
	if (!Global_76577)
	{
		return 0;
	}
	if (unk_0x7C7787D2D7139A85() == func_28())
	{
		return 0;
	}
	if (func_26(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if (unk_0xA2BC31158C8CEFD2(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0xA51CBC95AC3A4B14())
	{
		return 0;
	}
	return 1;
}

bool func_26(int iParam0)
{
	return func_27(iParam0, 20);
}

bool func_27(int iParam0, int iParam1)
{
	return unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

int func_28()
{
	return -1;
}

void func_29()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x623942A4F366F9BB(0);
	Global_20805 = 1;
}

void func_30()
{
	Global_20858 = Global_20857;
	Global_20852 = Global_20853;
	Global_20899 = { Global_20887 };
	Global_20905 = { Global_20893 };
	Global_20860 = Global_20859;
	Global_20929 = { Global_20911 };
	Global_20935 = { Global_20917 };
	Global_20941 = { Global_20923 };
	Global_20947 = { Global_20953 };
	Global_6671 = Global_6672;
	Global_6673 = Global_6674;
	Global_20816 = Global_20817;
	Global_20818 = Global_20819;
	Global_20820 = { Global_20836 };
	Global_20809 = Global_20810;
	Global_21821 = 0;
	Global_20854 = 0;
	Global_20855 = 0;
	unk_0x3B76114EC84D5812(&Global_7357, 16);
}

int func_31()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_32()
{
	int iVar0;
	int iVar1;
	
	if (Global_76577)
	{
		iVar0 = 0;
		unk_0x63EA4FAF7CDEFEC7(unk_0x0FA8183DAD2B3203(), &iVar1, 1);
		if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x9044F3A001B2AC43() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		if (unk_0xB99AB40226A0C08E(unk_0x0FA8183DAD2B3203(), 78, 1))
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

void func_33()
{
	if (func_34(14))
	{
		if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
		{
			if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[0 /*29*/])
			{
				Global_19486 = 0;
			}
			else if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[1 /*29*/])
			{
				Global_19486 = 1;
			}
			else if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[2 /*29*/])
			{
				Global_19486 = 2;
			}
			else
			{
				Global_19486 = 0;
			}
		}
	}
	else
	{
		Global_19486 = func_67();
		if (Global_19486 == 145)
		{
			Global_19486 = 3;
		}
		if (Global_76577)
		{
			Global_19486 = 3;
		}
		if (Global_19486 > 3)
		{
			Global_19486 = 3;
		}
	}
}

bool func_34(int iParam0)
{
	return Global_41396 == iParam0;
}

void func_35()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20094[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20094[iVar0 /*10*/].f_1), "", 24);
		Global_20094[iVar0 /*10*/].f_7 = 0;
		Global_20094[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
}

bool func_36(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1373500.f_203[iParam1];
			}
			break;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1373500.f_1048, iParam0);
}

void func_37()
{
	unk_0xE4F88BFF8FB3D84C();
	Global_21816 = 0;
	if ((unk_0x31634D65216B86B6() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		unk_0x623942A4F366F9BB(0);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (unk_0x04C7A9862FF737E9())
	{
		unk_0x623942A4F366F9BB(1);
		Global_20805 = 6;
		return;
	}
}

void func_38(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = uParam5;
	if (iParam3 == 0)
	{
		Global_21792 = 1;
		Global_21790 = 0;
	}
	else
	{
		Global_21792 = 0;
		Global_21790 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21793 = 1;
		Global_21791 = 0;
	}
	else
	{
		Global_21793 = 0;
		Global_21791 = 1;
	}
}

void func_39(int iParam0)
{
	Global_41947 = (unk_0x9B35D07DCD0F0B43() + iParam0);
}

void func_40(int iParam0)
{
	if (func_45())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_44(0))
		{
			func_41(iParam0);
		}
		unk_0xA1E7A40E1F56E511(&Global_7357, 2);
	}
}

void func_41(int iParam0)
{
	if (func_45())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_43())
		{
			func_42(1, 1);
		}
		else
		{
			func_42(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		unk_0xA1E7A40E1F56E511(&Global_7357, 16);
	}
	if (unk_0x31634D65216B86B6())
	{
		unk_0x623942A4F366F9BB(0);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		unk_0xA1E7A40E1F56E511(&Global_7356, 30);
	}
	else
	{
		unk_0x3B76114EC84D5812(&Global_7356, 30);
	}
	if (!func_31())
	{
		Global_19486.f_1 = 3;
	}
}

void func_42(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_44(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				unk_0xB1B52CCC3333E09F(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431 /*3*/] };
			unk_0x4577629BF7B43F7F(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431 /*3*/] };
		if (bParam1)
		{
			unk_0x4577629BF7B43F7F(Global_19423);
		}
		else
		{
			unk_0x4577629BF7B43F7F(Global_19414);
		}
	}
}

bool func_43()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 5);
}

int func_44(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (unk_0xA2BC31158C8CEFD2(Global_7356, 14))
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
	if (unk_0x222F76006659B0EB(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_45()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 19);
}

void func_46(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76577)
	{
		if (!unk_0x2BF5E63466422C38(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x773434A2783CA924(iParam2, 0);
			}
			else
			{
				unk_0x773434A2783CA924(iParam2, 1);
			}
		}
		if (!unk_0x2BF5E63466422C38(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xB35478A1AA54EA1A(iParam2, 0);
			}
			else
			{
				unk_0xB35478A1AA54EA1A(iParam2, 1);
			}
		}
	}
}

void func_47(char* sParam0, int iParam1)
{
	unk_0xD95C12E1062B7D5E(sParam0);
	unk_0x40DC0B0D5BD91E06(0, 0, 1, iParam1);
}

void func_48(int iParam0, var uParam1)
{
	if (func_49(uParam1, 1))
	{
		unk_0xC15227CAD044E22F(iParam0, "HOSPITAL_0", 0f, 1f);
	}
	if (func_49(uParam1, 2))
	{
		unk_0xC15227CAD044E22F(iParam0, "HOSPITAL_1", 0f, 1f);
	}
	if (func_49(uParam1, 4))
	{
		unk_0xC15227CAD044E22F(iParam0, "HOSPITAL_2", 0f, 1f);
	}
	if (func_49(uParam1, 8))
	{
		unk_0xC15227CAD044E22F(iParam0, "HOSPITAL_3", 0f, 1f);
	}
	if (func_49(uParam1, 16))
	{
		unk_0xC15227CAD044E22F(iParam0, "HOSPITAL_4", 0f, 1f);
	}
	if (func_49(uParam1, 32))
	{
		unk_0xC15227CAD044E22F(iParam0, "HOSPITAL_5", 0f, 1f);
	}
	if (func_49(uParam1, 64))
	{
		unk_0xC15227CAD044E22F(iParam0, "HOSPITAL_6", 0f, 1f);
	}
	if (func_49(uParam1, 128))
	{
		unk_0xC15227CAD044E22F(iParam0, "HOSPITAL_7", 0f, 1f);
	}
	if (func_49(uParam1, 256))
	{
		unk_0xC15227CAD044E22F(iParam0, "HOSPITAL_8", 0f, 1f);
	}
	if (func_49(uParam1, 512))
	{
		unk_0xC15227CAD044E22F(iParam0, "HOSPITAL_9", 0f, 1f);
	}
	if (func_49(uParam1, 0))
	{
	}
}

bool func_49(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_50()
{
	if (((Global_98669 == 13 || Global_98669 == 10) || Global_98669 == 11) || Global_98669 == 12)
	{
		return 0;
	}
	return 1;
}

void func_51()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_95632[iVar0 /*17*/] && !Global_95632[iVar0 /*17*/].f_1)
		{
			if (Global_95632[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_95632[iVar0 /*17*/].f_5 != 88 && Global_95632[iVar0 /*17*/].f_5 != 89) && Global_95632[iVar0 /*17*/].f_5 != 92)
				{
					func_52(Global_95632[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_52(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_92684[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_92684[iParam0 /*2*/] = 0;
	}
}

bool func_53(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_54()
{
	func_55();
	func_73(1);
}

void func_55()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		iVar1 = Global_42348[iVar0 /*5*/];
		if (!iVar1 == -1)
		{
			func_166(1, iVar1, 1);
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_42322[iVar2 /*5*/] == 0)
		{
			func_56(iVar2);
		}
		iVar2++;
	}
}

void func_56(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_42322[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_42322[iParam0 /*5*/].f_1 == unk_0x0FA8183DAD2B3203())
		{
			Global_42559 = 0;
		}
	}
	Global_42322[iParam0 /*5*/] = 13;
	Global_42322[iParam0 /*5*/].f_1 = 0;
	Global_42322[iParam0 /*5*/].f_2 = 0;
	Global_42322[iParam0 /*5*/].f_3 = 0;
	Global_42322[iParam0 /*5*/].f_4 = 0;
	Global_42320 = (Global_42320 - 1);
	if (Global_42320 < 0)
	{
		Global_42320 = 0;
	}
}

int func_57(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		func_61(0);
		unk_0xB82DC93528F8603C(Param0, 5f, 1, 0, 0, 0);
		if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
		{
			if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
			{
				unk_0xCB3446C6A91D1A78(unk_0x0FA8183DAD2B3203(), Param0, 1, 0, 0, 1);
				unk_0x5A2B7C446C0CF087(unk_0x0FA8183DAD2B3203(), uParam3);
				unk_0xA291E27354439AE9(0f, 1065353216);
				unk_0xB489E71A45CDC02F(0f);
			}
		}
		unk_0x155C3BED27FDCC1D(Param0, 4500f, 0);
		unk_0x4EDE34FBADD967A6(0);
		unk_0xB82DC93528F8603C(Param0, 5000f, 1, 0, 0, 0);
		unk_0x5EB47C7F004ABFCA(Param0, 5000f, 0);
		unk_0xA61B7DD77FE81428(Param0, 5000f);
		unk_0x9BD00CB18115A35C(Param0, 5000f);
		func_60();
		func_59();
		unk_0xC1B1E9A034A63A62(0);
		func_61(1);
		if (!unk_0xC53766CB7176C7C8())
		{
			while (!unk_0x155C3BED27FDCC1D(Param0, 4500f, 0))
			{
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					unk_0x269298D09D57BFCF(0);
					return 0;
				}
			}
		}
		unk_0xC1B1E9A034A63A62(0);
		while (!unk_0x235F15F5EE0D236B())
		{
			unk_0x4EDE34FBADD967A6(0);
			if (unk_0x83666F9FB8FEBD4B() > 20000)
			{
				unk_0x269298D09D57BFCF(0);
				if (unk_0xC53766CB7176C7C8())
				{
					unk_0x7D4946564F5947D1();
				}
				return 0;
			}
		}
		if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
		{
			if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0xC53766CB7176C7C8())
				{
					unk_0x7D4946564F5947D1();
				}
				unk_0x269298D09D57BFCF(0);
				unk_0xC1B1E9A034A63A62(0);
				unk_0x031DBFB526070D9E();
				if (iParam5 == 1)
				{
					unk_0x6B303686A3D6275A();
				}
				else
				{
					unk_0xC1B1E9A034A63A62(5000);
				}
				unk_0x1554C8760264C69E();
			}
		}
		while ((!unk_0xD80A36E0C7E87369() && !func_58()) && unk_0x83666F9FB8FEBD4B() < 1500)
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
			unk_0xDF956C4106F1E9C5(Param0, &(Param0.f_2), 0, 0);
			unk_0xB82DC93528F8603C(Param0, 5f, 1, 0, 0, 0);
			if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
			{
				if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
				{
					unk_0xCB3446C6A91D1A78(unk_0x0FA8183DAD2B3203(), Param0, 1, 0, 0, 1);
					unk_0x5A2B7C446C0CF087(unk_0x0FA8183DAD2B3203(), uParam3);
				}
			}
		}
		unk_0xA291E27354439AE9(0f, 1065353216);
		unk_0xB489E71A45CDC02F(0f);
		func_61(0);
		return 1;
	}
	func_61(0);
	return 0;
}

bool func_58()
{
	return !Global_75396.f_553;
}

void func_59()
{
	Global_75396.f_553 = 1;
	Global_75396.f_554 = 0;
}

void func_60()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		Global_75396[iVar0] = 0;
		iVar0++;
	}
}

void func_61(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!unk_0xA2BC31158C8CEFD2(Global_98669.f_20, 2))
			{
				unk_0x269298D09D57BFCF(1);
				unk_0xA1E7A40E1F56E511(&(Global_98669.f_20), 2);
			}
		}
		else if (unk_0xA2BC31158C8CEFD2(Global_98669.f_20, 2))
		{
			unk_0x269298D09D57BFCF(0);
			unk_0x3B76114EC84D5812(&(Global_98669.f_20), 2);
		}
	}
}

int func_62()
{
	if (unk_0xA2BC31158C8CEFD2(unk_0xBAC643F143880136(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

bool func_63(int iParam0)
{
	return unk_0xA2BC31158C8CEFD2(Global_111560.f_7224[iParam0], 0);
}

int func_64(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111560.f_9080.f_99.f_58[iParam0];
}

int func_65()
{
	if (Global_38761[11] == 1)
	{
		return 4;
	}
	if (!func_66(21))
	{
		return 0;
	}
	if (!func_64(130))
	{
		return 1;
	}
	if (!func_64(131))
	{
		return 2;
	}
	if (!func_66(22))
	{
		return 1;
	}
	if (!func_66(49))
	{
		return 3;
	}
	if (!func_66(28))
	{
		return 1;
	}
	return 3;
}

int func_66(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111560.f_9080.f_330[iParam0 /*6*/];
}

int func_67()
{
	func_68();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_68()
{
	int iVar0;
	
	if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
	{
		if (func_71(Global_111560.f_2358.f_539.f_4321) != unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()))
		{
			iVar0 = func_70(unk_0x0FA8183DAD2B3203());
			if (func_69(iVar0) && (!func_34(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_69(Global_111560.f_2358.f_539.f_4321))
				{
					Global_111560.f_2358.f_539.f_4322 = Global_111560.f_2358.f_539.f_4321;
				}
				Global_111560.f_2358.f_539.f_4323 = iVar0;
				Global_111560.f_2358.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111560.f_2358.f_539.f_4321 != 145)
			{
				Global_111560.f_2358.f_539.f_4323 = Global_111560.f_2358.f_539.f_4321;
			}
			return;
		}
	}
	Global_111560.f_2358.f_539.f_4321 = 145;
}

bool func_69(int iParam0)
{
	return iParam0 < 3;
}

int func_70(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD4B321D9096B01FC(iParam0))
	{
		iVar1 = unk_0x7F375072508F738F(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_71(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_71(int iParam0)
{
	if (func_69(iParam0))
	{
		return func_72(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_72(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

void func_73(bool bParam0)
{
	unk_0x20BFC1E1350B8732(0f);
	unk_0xC3FE9FADA2E85678(0f);
	unk_0xF10F748E1A2B5693(0f);
	unk_0x46E35A3D0C15DA6C(1);
	unk_0x1179B09B9A833182(0f);
	unk_0x020FD88F4306A195(1);
	unk_0xF43558A81654D1D4(0);
	if (unk_0x6FE3A7E505FEC20C("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0x8E3496DF5BF7F24D("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0x9591DE0F00127F2A(&Global_42539))
	{
		if (unk_0x6FE3A7E505FEC20C(&Global_42539))
		{
			unk_0x8E3496DF5BF7F24D(&Global_42539);
		}
	}
	if (unk_0xD2652A8A890B29BA(Global_42528))
	{
		if (unk_0xF19B1386145597A1(Global_42528))
		{
			unk_0xBE6444D037FD0987(Global_42528, 0f);
			unk_0x0E548D25BBAC1AA4(Global_42528, 1);
		}
	}
	if (unk_0x0D02B1D7D3E821AE())
	{
		unk_0x92F3CFBD517CD462(0);
	}
	if (bParam0)
	{
		if (unk_0x5D0309FA10886971() != -1 || unk_0x906B5271359D05EF() != -1)
		{
			unk_0xBAA4E225DE364743();
		}
		else if (unk_0x16587C6F71675106())
		{
			unk_0xBAA4E225DE364743();
		}
	}
	Global_42534 = 0f;
	StringCopy(&Global_42535, "", 16);
	StringCopy(&Global_42539, "", 64);
	StringCopy(&Global_42555, "", 16);
	func_74();
}

void func_74()
{
	Global_42527 = 0;
	Global_42528 = 0;
	Global_42529 = 0;
	Global_42530 = 30000;
	Global_42531 = 0f;
	Global_42533 = 0f;
	Global_42532 = 0f;
	Global_42534 = 0f;
	StringCopy(&Global_42535, "", 16);
}

void func_75(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_262145.f_17680;
			break;
		
		case 1:
			iVar0 = Global_262145.f_17670;
			break;
		
		case 2:
			iVar0 = Global_262145.f_17681;
			break;
		
		case 3:
			iVar0 = Global_262145.f_17673;
			break;
		
		case 4:
			iVar0 = Global_262145.f_17669;
			break;
		
		case 6:
			iVar0 = 3;
			break;
		
		case 7:
			iVar0 = Global_262145.f_17684;
			break;
		
		case 8:
			iVar0 = Global_262145.f_17685;
			break;
		
		case 9:
			iVar0 = Global_262145.f_17688;
			break;
		
		case 22:
			iVar0 = Global_262145.f_17689;
			break;
		
		case 23:
			iVar0 = Global_262145.f_17682;
			break;
		
		case 25:
			iVar0 = Global_262145.f_18571;
			break;
		
		case 26:
			iVar0 = Global_262145.f_18570;
			break;
	}
	if (iVar0 != 0)
	{
		unk_0xDB1AFF9A917064AA(func_85(func_86()), func_84(func_86()), func_83(), func_82(), iParam0, iVar0);
	}
	func_81(iVar0);
	func_76(iVar0);
}

void func_76(int iParam0)
{
	int iVar0;
	
	iVar0 = func_80(3968, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11.f_490 = iVar0;
	func_77(3968, iVar0, -1, 1, 0);
}

void func_77(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_78(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x41410A69AD49AFCD(iVar0, iParam1, iParam3);
	}
}

int func_78(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_79();
		if (iVar1 > -1)
		{
			Global_2542240 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2542240 = 1;
		}
	}
	return iVar0;
}

int func_79()
{
	return Global_1312745;
}

int func_80(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2542527[iParam0 /*3*/][func_78(iParam1)];
	if (unk_0x367DA79FE620711B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_81(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x7C7787D2D7139A85();
	Global_1628955[iVar0 /*614*/].f_11.f_489 = (Global_1628955[iVar0 /*614*/].f_11.f_489 + iParam0);
	if (Global_1628955[iVar0 /*614*/].f_11.f_489 < -9999)
	{
		Global_1628955[iVar0 /*614*/].f_11.f_489 = 9999;
	}
	else if (Global_1628955[iVar0 /*614*/].f_11.f_489 > 9999)
	{
		Global_1628955[iVar0 /*614*/].f_11.f_489 = 9999;
	}
}

int func_82()
{
	if (Global_1674861.f_3 != 0)
	{
		return Global_1674861.f_3;
	}
	return -1;
}

int func_83()
{
	if (Global_1674861.f_2 != 0)
	{
		return Global_1674861.f_2;
	}
	return -1;
}

int func_84(int iParam0)
{
	if (iParam0 == func_28())
	{
		return -1;
	}
	return Global_1628955[iParam0 /*614*/].f_11.f_8[1];
}

int func_85(int iParam0)
{
	if (iParam0 == func_28())
	{
		return -1;
	}
	return Global_1628955[iParam0 /*614*/].f_11.f_8[0];
}

int func_86()
{
	return Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_11;
}

bool func_87(bool bParam0)
{
	return func_88(unk_0x7C7787D2D7139A85(), bParam0);
}

int func_88(int iParam0, bool bParam1)
{
	return func_89(iParam0, bParam1, 1);
}

int func_89(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_28())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_90(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1628955[iParam0 /*614*/].f_11;
	if (iVar0 != func_28() && Global_1628955[iVar0 /*614*/].f_11.f_450 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_90(int iParam0, int iParam1)
{
	if (iParam0 != func_28())
	{
		if (Global_1628955[iParam0 /*614*/].f_11 != func_28())
		{
			if (Global_1628955[iParam0 /*614*/].f_11 == iParam0 && Global_1628955[iParam0 /*614*/].f_11.f_450 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_91(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	bool bVar25;
	int iVar26;
	int iVar27;
	
	if (bParam1)
	{
		if (unk_0x2841E8CEB102C657())
		{
			unk_0x81394B4515AF31C3(0);
		}
	}
	if (func_104())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0x393E9918BC37548A())
	{
		uVar0 = iParam2;
		unk_0x3D0DE925C0536CA0(iParam0, bParam1, uVar0);
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
		bVar24 = iParam2 & 16777216 != false;
		if (!func_102())
		{
			bVar25 = false;
			if (bParam1 == 1)
			{
				bVar25 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar25 = true;
			}
			if (bVar9 == 1)
			{
				bVar25 = true;
			}
			if (bVar25)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0xD56C8C2B75BF9665(iParam0) && (unk_0xD699DB8EAB756F25(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0xF4B969E0807E76C7(unk_0x23625FE58BACEBFD(iParam0), 0))
			{
				return;
			}
			iVar26 = unk_0x23625FE58BACEBFD(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x393E9918BC37548A())
				{
					unk_0xFBC7760B97C94CEE(1);
				}
				else if (bVar13 || (!func_100(unk_0x7C7787D2D7139A85(), 0) && !func_99()))
				{
					unk_0x2BBEC4B37B923F4B(iVar26, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0x393E9918BC37548A() && !bVar18)
					{
						unk_0xFBC7760B97C94CEE(0);
					}
					Global_2424073[iParam0 /*421*/].f_244 = 0;
				}
			}
			if (bParam1)
			{
				func_96(0, 0, 0);
				if (bVar24)
				{
					unk_0x177A62AB5B680108();
				}
				if (!func_95(iVar26) && !unk_0xFAA29571D9280AC0(iVar26))
				{
					if (!bVar21)
					{
						unk_0x8C85E8C71AD74415(iVar26, true, 0);
					}
				}
				if (!unk_0xCA7317DE7E0F89E9(iVar26))
				{
					if (!bVar20)
					{
						unk_0x860A5CC30A0EF207(iVar26, false);
					}
					unk_0x9D3FE4786B8925D2(iVar26, 1);
				}
				else if (!bVar20)
				{
					unk_0x860A5CC30A0EF207(iVar26, false);
				}
				unk_0x6E712A176E3EEFA8(iVar26, true);
				unk_0x80DD2AE2084AED15(iParam0, 0);
				unk_0x39EC8D05FEE60520(iParam0, 0);
				if (unk_0x088441D41D80C5C5(iVar26) && unk_0xB9F75075D0B810BF(iVar26))
				{
					unk_0xF77E0D8A93ED5E86(iVar26);
				}
				unk_0x18CD1B73D89ABE21(iVar26, 1);
				if (unk_0xB3E4EBF4EFCF92BD(unk_0x7C7787D2D7139A85()) == 0)
				{
					func_94();
					func_93();
				}
				if (unk_0x88284A9044C97C3A())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0xC53766CB7176C7C8())
				{
				}
				Global_2424073[iParam0 /*421*/].f_245 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
				if (Global_2405071.f_2670)
				{
					Global_2405071.f_2670 = 0;
				}
			}
			else
			{
				if (!func_95(iVar26) && !unk_0xFAA29571D9280AC0(iVar26))
				{
					if (!bVar21)
					{
						unk_0x8C85E8C71AD74415(iVar26, !bVar14, 0);
					}
					if (!unk_0xCA7317DE7E0F89E9(iVar26))
					{
						if (!bVar20)
						{
							unk_0x860A5CC30A0EF207(iVar26, bVar15);
						}
						if (!bVar15)
						{
							unk_0x9D3FE4786B8925D2(iVar26, 1);
						}
					}
					if (func_92(Global_4456448.f_190930))
					{
						unk_0x860A5CC30A0EF207(iVar26, true);
					}
				}
				if (Global_1312850)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					unk_0x80DD2AE2084AED15(iParam0, 0);
				}
				else
				{
					unk_0x80DD2AE2084AED15(iParam0, 1);
				}
				unk_0x6E712A176E3EEFA8(iVar26, bVar16);
				if (bVar2)
				{
					if (!unk_0x8597FB96A64B777C(iVar26) && !unk_0x5294582CE404D3F4(iVar26, 0))
					{
						unk_0x5BBDAD06F405ED2C(iVar26);
					}
				}
			}
			iVar27 = 0;
			if (bVar1)
			{
				iVar27 |= 2;
			}
			if (bVar2)
			{
				iVar27 |= 4;
			}
			if (bVar3)
			{
				iVar27 |= 8;
			}
			if (bVar4)
			{
				iVar27 |= 16;
			}
			if (bVar5)
			{
				iVar27 |= 32;
			}
			if (bVar6)
			{
				iVar27 |= 64;
			}
			if (bVar7)
			{
				iVar27 |= 128;
			}
			if (bVar8)
			{
				iVar27 |= 256;
			}
			if (bVar9)
			{
				iVar27 |= 512;
			}
			if (bVar10)
			{
				iVar27 |= 1024;
			}
			if (bVar11)
			{
				iVar27 |= 2048;
			}
			if (bVar12)
			{
				iVar27 |= 4096;
			}
			unk_0x3D0DE925C0536CA0(iParam0, bParam1, iVar27);
		}
	}
}

bool func_92(int iParam0)
{
	return iParam0 == 17;
}

void func_93()
{
	struct<3> Var0;
	
	Global_2437549.f_1232 = 0;
	Global_2437549.f_1233 = 0;
	Global_2437549.f_1234 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2437549.f_1239 = -1;
	Global_2437549.f_1240 = 0;
	Global_2405071.f_2681 = { Var0 };
}

void func_94()
{
	Global_2405071.f_692 = 0;
	Global_2405071.f_2724 = 0;
	Global_2405071.f_510 = 0;
	Global_2405071.f_598 = 0;
	Global_2424073[unk_0x7C7787D2D7139A85() /*421*/].f_207 = 0;
	Global_2405071.f_2679 = 0;
}

int func_95(int iParam0)
{
	int iVar0;
	
	if (unk_0x5294582CE404D3F4(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x411C065ADB822CD9(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_96(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xF4B969E0807E76C7(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0xD4B321D9096B01FC(iParam1))
		{
			if (unk_0x7FA2061748BA645E(iParam1))
			{
				if (!unk_0x645A04F62406C561(unk_0x7C7787D2D7139A85(), unk_0x74D4E16E179B8F53(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_98();
			}
			else if (!unk_0xA2BC31158C8CEFD2(Global_2359302.f_67, 1))
			{
				if (unk_0xA2BC31158C8CEFD2(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x58AF82C8FFCE212D(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0xA1E7A40E1F56E511(&(Global_2359302.f_67), 1);
			}
		}
		if (func_100(unk_0x7C7787D2D7139A85(), 0))
		{
			unk_0x1244983AF90581A1(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x82383378B7F391D7(iParam0, iParam1);
		}
		unk_0x62F681DBBF12DD7F(iParam0, iParam1);
		func_97(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_97(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x0EC7EA43028EE330(iVar0, iParam1, 1);
	}
}

void func_98()
{
	int iVar0;
	
	if (!unk_0xC2C832CF965AA6C1())
	{
		if (!unk_0xA2BC31158C8CEFD2(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = unk_0x328DC5757076B0D5(iVar0);
				iVar0++;
			}
			unk_0xA1E7A40E1F56E511(&(Global_2359302.f_67), 2);
			unk_0xA1E7A40E1F56E511(&(Global_2359302.f_67), 0);
		}
	}
}

bool func_99()
{
	return unk_0xA2BC31158C8CEFD2(Global_2359302, 3);
}

bool func_100(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x7C7787D2D7139A85())
	{
		bVar0 = func_101(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590446[iParam0 /*871*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xD56C8C2B75BF9665(iParam0))
		{
			bVar0 = unk_0xC69A85EEB9CA3B95(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_101(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_79();
	}
	if (Global_1312853[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_102()
{
	if (func_103() == 0)
	{
		return 1;
	}
	return 0;
}

int func_103()
{
	return Global_1312467.f_18;
}

int func_104()
{
	if (Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_35 && !Global_2449755.f_2846.f_214 == -1)
	{
		return 1;
	}
	return 0;
}

void func_105(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x393E9918BC37548A() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x169A8AC9F93C2727();
			}
			else
			{
				*uParam0 = unk_0x50D85685589EFCBD();
			}
		}
		else
		{
			*uParam0 = unk_0x9B35D07DCD0F0B43();
		}
		uParam0->f_1 = 1;
	}
}

void func_106()
{
	int iVar0;
	
	if (bLocal_50)
	{
		return;
	}
	Local_43.f_4 = 0;
	if (!func_107(Global_42348[iLocal_64 /*5*/].f_2))
	{
		return;
	}
	iVar0 = unk_0xBAC643F143880136(500, 3000);
	Local_60.f_0 = 5;
	Local_55.f_2 = (unk_0x83666F9FB8FEBD4B() + iVar0);
}

int func_107(int iParam0)
{
	int iVar0;
	var uVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	
	iVar0 = func_118();
	if (iVar0 == -2)
	{
		return 0;
	}
	if (unk_0x2BF5E63466422C38(Local_43.f_1))
	{
		if (unk_0x5294582CE404D3F4(Local_43.f_1, 0) || unk_0xEC9DA7D08BCA2C06(Local_43.f_1))
		{
			return 0;
		}
		if (unk_0x8BF9C2CB34E804C4(Local_43.f_1))
		{
			return 0;
		}
		if (func_114(Local_43.f_1))
		{
			return 0;
		}
	}
	if ((Global_42348[iLocal_64 /*5*/].f_3 < 3 && Global_42348[iLocal_64 /*5*/].f_3 != 0) && Global_42348[iLocal_64 /*5*/].f_3 > Global_42348[iLocal_64 /*5*/].f_4)
	{
		return 0;
	}
	if ((Global_42348[iLocal_64 /*5*/].f_4 < 9 && Global_42348[iLocal_64 /*5*/].f_4 != 0) && Global_42348[iLocal_64 /*5*/].f_4 > Global_42348[iLocal_64 /*5*/].f_3)
	{
		return 0;
	}
	uVar1 = func_113(iParam0);
	if (unk_0x9591DE0F00127F2A(uVar1))
	{
		return 0;
	}
	if (func_114(Local_43.f_1))
	{
		return 0;
	}
	unk_0x46CFD6B05735CD7E(sVar1);
	if (func_110(Local_43.f_1))
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
		if (!unk_0x9591DE0F00127F2A(sVar2) && !unk_0x9591DE0F00127F2A(sVar3))
		{
			unk_0x36B659209EBDD366(sVar2);
			while (!unk_0xB25A0D192C6A0A5B(sVar2))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (!unk_0x2BF5E63466422C38(Local_43.f_1))
			{
				unk_0x5D672CB011E20B28(Local_43.f_1, sVar2, sVar3, 1.5f, -1.5f, -1, 48, 0, 0, 0, 0);
				sLocal_54 = sVar3;
			}
		}
	}
	if (!unk_0xD922B64C0E3926F2(sVar1))
	{
		return 0;
	}
	if (unk_0x2BF5E63466422C38(Local_43.f_1))
	{
		return 0;
	}
	unk_0x9C3314BBA5EDB2F9(Local_43.f_1, sVar1, 0.75f);
	if (unk_0x03DB22289AD822D2() == 4)
	{
		unk_0x2BB3ED0E4AC50291(Local_43.f_1, "move_ped_strafing_firstperson@drunk");
	}
	unk_0x98D1BFC5D51BFA4A(Local_43.f_1, 0, sVar1, "idle", 2f, 1);
	Local_60.f_2 = sVar1;
	bLocal_51 = true;
	iVar4 = 0;
	switch (func_70(Local_43.f_1))
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
			if (unk_0x7FA2061748BA645E(Local_43.f_1))
			{
				if (!func_108())
				{
					iVar4 = "FACIALS@GEN_MALE@BASE";
				}
				else
				{
					iVar4 = "FACIALS@GEN_FEMALE@BASE";
				}
			}
			else if (unk_0x0F81A86FA23D44FA(Local_43.f_1))
			{
				iVar4 = "FACIALS@GEN_MALE@BASE";
			}
			else
			{
				iVar4 = "FACIALS@GEN_FEMALE@BASE";
			}
			break;
	}
	unk_0xCB2226D6817DFC2E(Local_43.f_1, "mood_drunk_1", iVar4);
	unk_0x70CBCB37A00F34A2(Local_43.f_1, 200, 1);
	unk_0x70CBCB37A00F34A2(Local_43.f_1, 46, 1);
	unk_0x773434A2783CA924(Local_43.f_1, 0);
	unk_0x3A6FD57A8EC62253(Local_43.f_1, 262144, 1);
	unk_0xA0E633257D32F9B4(Local_43.f_1, 1);
	return 1;
}

bool func_108()
{
	return func_109(unk_0x7C7787D2D7139A85());
}

int func_109(int iParam0)
{
	if (unk_0x7F375072508F738F(unk_0x23625FE58BACEBFD(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_110(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x5294582CE404D3F4(iParam0, 1) || unk_0xEC9DA7D08BCA2C06(iParam0))
	{
		return 0;
	}
	if (unk_0x411C065ADB822CD9(iParam0, -2017877118) != 7)
	{
		return 0;
	}
	if (unk_0x411C065ADB822CD9(iParam0, 1785177548) != 7)
	{
		return 0;
	}
	if (unk_0x90D8021D13215A35(iParam0))
	{
		return 0;
	}
	if (unk_0x916AF183F71F17C1(iParam0))
	{
		return 0;
	}
	if (unk_0x3DAA08BFD9A801FD(iParam0))
	{
		return 0;
	}
	if (unk_0xF329B53400EB96D9(iParam0))
	{
		return 0;
	}
	if (Global_73784)
	{
		return 0;
	}
	if (func_112())
	{
		return 0;
	}
	if (iParam0 == unk_0x0FA8183DAD2B3203())
	{
		if (!unk_0x652B547A9C9A4613(unk_0x7C7787D2D7139A85()))
		{
			return 0;
		}
		if (!unk_0xB3E4EBF4EFCF92BD(unk_0x7C7787D2D7139A85()))
		{
			return 0;
		}
		if (unk_0x32656A651394EBE9(unk_0x7C7787D2D7139A85()) || unk_0x5F5EDE61626C58B9(unk_0x7C7787D2D7139A85()))
		{
			return 0;
		}
		if (func_111())
		{
			return 0;
		}
	}
	Var0 = { unk_0x93DC424F261951D6(iParam0) };
	if (unk_0xA8CEACB4F35AE058(Var0) >= (1f * 1f))
	{
		return 0;
	}
	return 1;
}

bool func_111()
{
	return Global_98721.f_346 > 0;
}

bool func_112()
{
	return unk_0x9B35D07DCD0F0B43() <= Global_22350.f_5878 + 100;
}

char* func_113(int iParam0)
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

int func_114(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_115(iParam0);
	uVar1 = func_113(iVar0);
	if (unk_0x9591DE0F00127F2A(Local_60.f_2))
	{
		if (unk_0x9591DE0F00127F2A(uVar1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return unk_0x2553916E420E8EF0(Local_60.f_2, sVar1);
}

int func_115(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!unk_0xD4B321D9096B01FC(iParam0))
	{
		return -1;
	}
	iVar0 = func_117(iParam0);
	iVar1 = func_116(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_42348[iVar1 /*5*/].f_2;
}

int func_116(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42348[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_117(int iParam0)
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
		if (iParam0 == Global_42348[iVar0 /*5*/].f_1)
		{
			return Global_42348[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_118()
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

void func_119()
{
	if (bLocal_50)
	{
		return;
	}
	if (!func_120())
	{
		Local_60.f_0 = 5;
		Local_55.f_2 = unk_0x83666F9FB8FEBD4B() + 5000;
		return;
	}
	Local_60.f_0 = 6;
}

bool func_120()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (Local_43.f_4 == 0)
	{
		return 0;
	}
	if (unk_0xF4B969E0807E76C7(Local_43.f_4, 0))
	{
		return 0;
	}
	Var0 = { unk_0xACE5E491FC1B0D37(Local_43.f_1, 1) };
	Var3 = { unk_0xACE5E491FC1B0D37(Local_43.f_4, 1) };
	fVar6 = unk_0xD34AF93E9BCF12F0(Var0, Var3, 1);
	return fVar6 < 7f;
}

void func_121()
{
	int iVar0;
	char* sVar1;
	
	if (Local_43.f_1 == unk_0x0FA8183DAD2B3203())
	{
		unk_0x572062A62138FBA2(0, 36, 1);
		if (unk_0x4DFA158E3F06774B(Local_43.f_1))
		{
			if (Global_42348[iLocal_64 /*5*/].f_2 == 0 || Global_42348[iLocal_64 /*5*/].f_2 == 2)
			{
				unk_0x1C2AC11A8D8E19DD(Local_43.f_1, 0, 0);
			}
		}
		if (unk_0x449B8E561BCB881E(Local_43.f_1))
		{
			unk_0x93FD8072B6717CC3(Local_43.f_1, 0);
		}
	}
	if (Local_55.f_0 != -2)
	{
		if (Local_55.f_0 == -1)
		{
			if (Global_42348[iLocal_64 /*5*/].f_2 != 0)
			{
				Global_42348[iLocal_64 /*5*/].f_2 = 0;
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
			if (Global_42348[iLocal_64 /*5*/].f_2 == 0)
			{
				if (iVar0 < 30)
				{
					Global_42348[iLocal_64 /*5*/].f_2 = 2;
					if (!func_107(2))
					{
						Global_42348[iLocal_64 /*5*/].f_2 = 0;
						return;
					}
				}
			}
			if (Global_42348[iLocal_64 /*5*/].f_2 == 2)
			{
				if (iVar0 < 10)
				{
					Global_42348[iLocal_64 /*5*/].f_2 = 1;
					if (!func_107(2))
					{
						Global_42348[iLocal_64 /*5*/].f_2 = 2;
						return;
					}
				}
			}
			if (Global_42348[iLocal_64 /*5*/].f_2 == 1)
			{
			}
		}
	}
	else
	{
		return;
	}
	if (!unk_0x9591DE0F00127F2A(sLocal_54))
	{
		if (!func_110(Local_43.f_1))
		{
			sVar1 = "MOVE_M@DRUNK@TRANSITIONS";
			if (unk_0xF6FD8019402CF03B(Local_43.f_1, sVar1, sLocal_54, 3))
			{
				unk_0x92A1D522E8613359(Local_43.f_1, sVar1, sLocal_54, -4f);
			}
			sLocal_54 = "";
			return;
		}
	}
	if (Global_42348[iLocal_64 /*5*/].f_3 >= 10 || Global_42348[iLocal_64 /*5*/].f_4 >= 15)
	{
		if (unk_0x411C065ADB822CD9(Local_43.f_1, 1785177548) == 1 && !unk_0xA2BC31158C8CEFD2(Global_1676879.f_3, 27))
		{
			return;
		}
		if (unk_0x87D4B453D88A15C7(Local_43.f_1))
		{
			return;
		}
		if (unk_0x5294582CE404D3F4(Local_43.f_1, 1))
		{
			if (Global_42348[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_42348[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_42348[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_42348[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((unk_0x393E9918BC37548A() && Local_43.f_1 == unk_0x0FA8183DAD2B3203()) && func_131(unk_0x7C7787D2D7139A85())) && Global_262145.f_23831)
		{
			if (Global_42348[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_42348[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_42348[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_42348[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((unk_0x393E9918BC37548A() && Local_43.f_1 == unk_0x0FA8183DAD2B3203()) && func_130())
		{
			if (Global_42348[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_42348[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_42348[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_42348[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((unk_0x393E9918BC37548A() && Local_43.f_1 == unk_0x0FA8183DAD2B3203()) && func_129(unk_0x7C7787D2D7139A85())) && Global_262145.f_26179)
		{
			if (Global_42348[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_42348[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_42348[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_42348[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((unk_0x393E9918BC37548A() && Local_43.f_1 == unk_0x0FA8183DAD2B3203()) && func_126(unk_0x7C7787D2D7139A85())) && Global_262145.f_26212)
		{
			if (Global_42348[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_42348[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_42348[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_42348[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((unk_0x393E9918BC37548A() && Local_43.f_1 == unk_0x0FA8183DAD2B3203()) && func_122(unk_0x7C7787D2D7139A85()) == 15)
		{
			if (Global_42348[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_42348[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_42348[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_42348[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((unk_0x393E9918BC37548A() && Local_43.f_1 == unk_0x0FA8183DAD2B3203()) && Global_73784) && !Global_42321)
		{
			if (Global_42348[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_42348[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_42348[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_42348[iLocal_64 /*5*/].f_4 = 14;
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
	if (!func_114(Local_43.f_1))
	{
		return;
	}
}

int func_122(int iParam0)
{
	if (func_125(iParam0) == 243)
	{
		return func_123(iParam0);
	}
	return -1;
}

int func_123(int iParam0)
{
	if (func_124(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_181;
	}
	return -1;
}

int func_124(int iParam0, int iParam1)
{
	if (Global_1628955[iParam0 /*614*/].f_11.f_33 != -1 || (iParam1 && Global_1628955[iParam0 /*614*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_125(int iParam0)
{
	if (func_124(iParam0, 0))
	{
		return Global_1628955[iParam0 /*614*/].f_11.f_33;
	}
	return -1;
}

int func_126(int iParam0)
{
	if (iParam0 != func_28())
	{
		if (func_128(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_127(Global_2424073[iParam0 /*421*/].f_309.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_127(int iParam0)
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
		case 126:
		case 127:
		case 134:
		case 135:
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
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
	}
	return -1;
}

int func_128(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xD56C8C2B75BF9665(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xD699DB8EAB756F25(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437549.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_129(int iParam0)
{
	if (iParam0 != func_28())
	{
		if (func_128(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_127(Global_2424073[iParam0 /*421*/].f_309.f_5) == 14;
			}
		}
	}
	return 0;
}

var func_130()
{
	return Global_2508063;
}

int func_131(int iParam0)
{
	if (iParam0 != func_28())
	{
		if (func_128(iParam0, 1, 1))
		{
			if (Global_2424073[iParam0 /*421*/].f_309.f_5 != -1)
			{
				return func_127(Global_2424073[iParam0 /*421*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_132()
{
	int iVar0;
	
	if (!unk_0xA2DB82364F08360E(Local_43.f_1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = unk_0x4D57D3E5ECE15A41(Local_43.f_1, 0);
	if (!unk_0xD960230552BC4165(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0x300C62F79A4441EB(iVar0, -1, 0) == Local_43.f_1)
	{
		return 0;
	}
	Local_43.f_4 = iVar0;
	Local_60.f_0 = 7;
	return 1;
}

void func_133()
{
	if (!unk_0x5294582CE404D3F4(Local_43.f_1, 0))
	{
		Local_60.f_0 = 4;
		return;
	}
}

void func_134()
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
	if (!unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		return;
	}
	if (!unk_0xA2DB82364F08360E(unk_0x0FA8183DAD2B3203()))
	{
		return;
	}
	if (unk_0x586E95A1CE46FC21(unk_0x7C7787D2D7139A85(), 0))
	{
		return;
	}
	iVar0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
	fVar1 = unk_0xB8D4A2BAA78AB950(iVar0);
	if (fVar1 < 5f)
	{
		return;
	}
	Var2 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1) };
	Var5 = { Var2 - Vector(3f, 30f, 30f) };
	Var8 = { Var2 + Vector(3f, 30f, 30f) };
	if (!unk_0x1177C846A11BD979(Var5, Var8) && !unk_0x93C8A1C0AB43700A(Var5, Var8))
	{
		return;
	}
	unk_0xBA0ADF29DCCA9258(unk_0x7C7787D2D7139A85(), 1, 0);
	unk_0xF1E958D9BB4D1EF6(unk_0x7C7787D2D7139A85(), 0);
	func_11(73, 1);
}

void func_135()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = Local_43.f_1;
	if (unk_0x5294582CE404D3F4(Local_43.f_1, 0))
	{
		iVar1 = unk_0x4D57D3E5ECE15A41(Local_43.f_1, 0);
		iVar2 = unk_0x300C62F79A4441EB(iVar1, -1, 0);
		if (!iVar2 == Local_43.f_1)
		{
			return;
		}
		if (unk_0x393E9918BC37548A() && !unk_0x77FF1FAF6F41CA71(iVar1))
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!unk_0x0FA8183DAD2B3203() == Local_43.f_1)
	{
		return;
	}
	else if (!unk_0x03DB22289AD822D2() == 4)
	{
		fLocal_53 = 0f;
		func_137(iVar0, 0f);
		return;
	}
	if (unk_0x83666F9FB8FEBD4B() < Local_55.f_4)
	{
		func_137(iVar0, fLocal_53);
		return;
	}
	if (unk_0x4625051E51BA911B(iVar0))
	{
		Local_55.f_4 = unk_0x83666F9FB8FEBD4B() + 2000;
	}
	else
	{
		Local_55.f_4 = unk_0x83666F9FB8FEBD4B() + 1000;
	}
	fVar3 = unk_0xB8D4A2BAA78AB950(iVar0);
	if (fVar3 < 0.04f)
	{
		fLocal_53 = 0f;
		func_137(iVar0, 0f);
		return;
	}
	if (Local_55.f_1 == -1)
	{
		fLocal_53 = func_136(iVar0, 0.13f, 0.06f);
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
			fLocal_53 = func_136(iVar0, 0.05f, 0.02f);
		}
		else if (iVar4 < 30000)
		{
			fLocal_53 = func_136(iVar0, 0.07f, 0.03f);
		}
		else if (iVar4 < 45000)
		{
			fLocal_53 = func_136(iVar0, 0.09f, 0.04f);
		}
		else if (iVar4 < 600000)
		{
			fLocal_53 = func_136(iVar0, 0.1f, 0.05f);
		}
		else
		{
			fLocal_53 = func_136(iVar0, 0.13f, 0.06f);
		}
	}
	func_137(iVar0, fLocal_53);
}

float func_136(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = unk_0x64A3FFD9D62755C5(-fParam1, fParam1);
	fVar1 = unk_0x64A3FFD9D62755C5(0f, fParam2);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 - fVar1);
	}
	else
	{
		fVar0 = (fVar0 + fVar1);
	}
	if (unk_0x4625051E51BA911B(iParam0))
	{
		if (unk_0x6B6CB57338FA0319(unk_0x3D464779B732760F(iParam0)))
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
		iVar2 = unk_0x7F375072508F738F(iParam0);
		if (unk_0xF39FF829579D1A21(iVar2))
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

void func_137(int iParam0, float fParam1)
{
	if (unk_0x393E9918BC37548A() && !unk_0x77FF1FAF6F41CA71(iParam0))
	{
		return;
	}
	if (unk_0x4625051E51BA911B(iParam0))
	{
		unk_0xB16C7428C527B431(unk_0x3D464779B732760F(iParam0), fParam1);
	}
	else if (unk_0x905FBA24E7FA8D23(iParam0))
	{
		unk_0xB8514BB7A76FBD3F(unk_0xD05B0DA3866791D0(iParam0), fParam1);
	}
}

void func_138()
{
	int iVar0;
	
	if (!unk_0x5294582CE404D3F4(Local_43.f_1, 0))
	{
		Local_60.f_0 = 4;
		return;
	}
	if (unk_0x393E9918BC37548A())
	{
		if (Global_42348[iLocal_64 /*5*/].f_3 >= 10 || Global_42348[iLocal_64 /*5*/].f_4 >= 15)
		{
			if (Global_42348[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_42348[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_42348[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_42348[iLocal_64 /*5*/].f_4 = 14;
			}
		}
	}
	if (bLocal_50)
	{
		return;
	}
	iVar0 = unk_0x4D57D3E5ECE15A41(Local_43.f_1, 0);
	if (!unk_0xD960230552BC4165(iVar0, 0))
	{
		unk_0x2DCF88AC859255F3(Local_43.f_1, 0, 0);
		Local_60.f_0 = 11;
		return;
	}
}

void func_139()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x83666F9FB8FEBD4B() <= Local_55.f_3)
	{
		return;
	}
	iVar0 = unk_0x411C065ADB822CD9(unk_0x0FA8183DAD2B3203(), 355471868);
	if (!iVar0 == 7)
	{
		Local_55.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
		return;
	}
	if (!unk_0x5294582CE404D3F4(Local_43.f_1, 0))
	{
		Local_60.f_0 = 4;
		Local_55.f_3 = -2;
		return;
	}
	iVar1 = unk_0x4D57D3E5ECE15A41(Local_43.f_1, 0);
	iVar2 = unk_0x300C62F79A4441EB(iVar1, -1, 0);
	if (iVar2 == Local_43.f_1)
	{
		func_140();
		Local_55.f_3 = -2;
		return;
	}
	unk_0xF4A509710AB34EEF(Local_43.f_1, iVar1, 0);
	Local_60.f_0 = 9;
	Local_55.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
}

void func_140()
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
	func_166(iLocal_48, 2, 5);
	Local_55.f_4 = unk_0x83666F9FB8FEBD4B();
	fLocal_53 = 0f;
}

void func_141()
{
	if (unk_0xA2DB82364F08360E(Local_43.f_1))
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

void func_142()
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
	if (bVar1 || unk_0xA2DB82364F08360E(Local_43.f_1))
	{
		if (!bLocal_50)
		{
		}
		iVar0 = unk_0x4D57D3E5ECE15A41(Local_43.f_1, 0);
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
				unk_0x2DCF88AC859255F3(Local_43.f_1, 0, 0);
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
			func_140();
			return;
		}
		if (!bLocal_50)
		{
			if (!bLocal_50)
			{
			}
			func_140();
			return;
		}
		if (!bLocal_50)
		{
		}
		iVar2 = unk_0x300C62F79A4441EB(Local_43.f_4, -1, 0);
		if (iVar2 == Local_43.f_1)
		{
			func_140();
			return;
		}
		unk_0xF4A509710AB34EEF(Local_43.f_1, iVar0, 0);
		Local_60.f_0 = 9;
		Local_55.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
		return;
	}
	if (!func_120())
	{
		unk_0xC6612209077465DD(Local_43.f_1);
		Local_60.f_0 = 4;
		return;
	}
	if (!bLocal_50)
	{
		iVar3 = unk_0x411C065ADB822CD9(Local_43.f_1, -1794415470);
		if (iVar3 == 7)
		{
			if (!unk_0x5294582CE404D3F4(Local_43.f_1, 0))
			{
				unk_0xC6612209077465DD(Local_43.f_1);
				Local_60.f_0 = 4;
				return;
			}
		}
	}
}

void func_143()
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
	if (!unk_0xD960230552BC4165(Local_43.f_4, 0))
	{
		Local_43.f_4 = 0;
		Local_60.f_0 = 4;
		return;
	}
	Var0 = { unk_0xACE5E491FC1B0D37(Local_43.f_1, 1) };
	Var3 = { unk_0xACE5E491FC1B0D37(Local_43.f_4, 1) };
	fVar6 = unk_0xD34AF93E9BCF12F0(Var0, Var3, 1);
	if (fVar6 > 3f)
	{
		if (!func_107(Global_42348[iLocal_64 /*5*/].f_2))
		{
			Local_60.f_0 = 12;
			return;
		}
		Local_60.f_0 = 5;
		Local_55.f_2 = unk_0x83666F9FB8FEBD4B() + 2000;
		return;
	}
	iVar7 = unk_0x78B310CB286001B8(Local_43.f_4);
	iVar8 = 0;
	bVar9 = true;
	iVar8 = 1;
	while (bVar9)
	{
		if (iVar8 < iVar7)
		{
			if (unk_0xBAA38708D7439CA7(Local_43.f_4, iVar8, 0))
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
	func_144();
	unk_0x31A7662B885C7549(Local_43.f_1, Local_43.f_4, -1, iVar8, 1073741824, 1, 0);
	Local_60.f_0 = 7;
}

void func_144()
{
	if (!unk_0xD4B321D9096B01FC(Local_43.f_1))
	{
		return;
	}
	if (!unk_0x2BF5E63466422C38(Local_43.f_1))
	{
		unk_0x2AF3CF45011CC65F(Local_43.f_1, 1048576000);
		unk_0x5B6E9E22CE811A50(Local_43.f_1);
		unk_0x95AEC3D4ABEA49EF(Local_43.f_1, 0, -1056964608);
		Local_60.f_2 = "";
		unk_0x2065A160187E5910(Local_43.f_1);
		unk_0x70CBCB37A00F34A2(Local_43.f_1, 200, 0);
		unk_0x70CBCB37A00F34A2(Local_43.f_1, 46, 0);
		unk_0x773434A2783CA924(Local_43.f_1, 1);
		unk_0x3A6FD57A8EC62253(Local_43.f_1, 262144, 0);
		unk_0xA0E633257D32F9B4(Local_43.f_1, 0);
	}
	if (!bLocal_51)
	{
		return;
	}
	bLocal_51 = false;
}

void func_145()
{
	if (unk_0x83666F9FB8FEBD4B() < Local_55.f_2)
	{
		func_121();
		return;
	}
	func_146();
	Local_55.f_2 = -2;
	Local_60.f_0 = 12;
}

int func_146()
{
	if (!func_114(Local_43.f_1))
	{
		return 0;
	}
	if (!bLocal_51)
	{
		return 0;
	}
	func_147(Local_43.f_1);
	Local_60.f_2 = "";
	Global_2531497.f_4540 = 1;
	return 1;
}

void func_147(int iParam0)
{
	unk_0x2AF3CF45011CC65F(uParam0, 1048576000);
	unk_0x95AEC3D4ABEA49EF(uParam0, 0, -1056964608);
	unk_0x70CBCB37A00F34A2(uParam0, 200, 0);
	unk_0x773434A2783CA924(iParam0, 1);
	unk_0x3A6FD57A8EC62253(iParam0, 262144, 0);
	unk_0xA0E633257D32F9B4(iParam0, 0);
}

void func_148()
{
	int iVar0;
	
	if (Local_55.f_0 == -1)
	{
		Global_42348[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_42348[iLocal_64 /*5*/].f_3 < 3 && Global_42348[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_42348[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_42348[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_42348[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_42348[iLocal_64 /*5*/].f_2 = 1;
		}
	}
	if (unk_0x5294582CE404D3F4(Local_43.f_1, 0))
	{
		Local_60.f_0 = 10;
		return;
	}
	if (func_114(Local_43.f_1))
	{
		Local_60.f_0 = 12;
		return;
	}
	if (Local_55.f_0 == -2)
	{
		return;
	}
	if (!func_107(Global_42348[iLocal_64 /*5*/].f_2))
	{
		return;
	}
	Local_60.f_0 = 12;
}

void func_149()
{
}

void func_150()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 6;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 16)
	{
		iVar0 = Global_42429[iVar1 /*6*/].f_2;
		if (!iVar0 == 6)
		{
			if (Global_42429[iVar1 /*6*/].f_1 == iLocal_48)
			{
				func_152(iVar1);
				func_151(iVar1);
			}
			else if (Global_42429[iVar1 /*6*/].f_1 == 2)
			{
				if (!iLocal_49 == -1)
				{
					if (iLocal_49 == Global_42429[iVar1 /*6*/])
					{
						func_152(iVar1);
					}
				}
			}
		}
		iVar1++;
	}
}

void func_151(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_42429[iParam0 /*6*/] = -1;
	Global_42429[iParam0 /*6*/].f_1 = -1;
	Global_42429[iParam0 /*6*/].f_2 = 6;
	Global_42429[iParam0 /*6*/].f_3 = 0;
	Global_42429[iParam0 /*6*/].f_4 = 0;
}

void func_152(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_42429[iParam0 /*6*/].f_2;
	switch (iVar0)
	{
		case 1:
			func_173();
			break;
		
		case 2:
			func_156(Global_42429[iParam0 /*6*/].f_4);
			break;
		
		case 3:
			func_155(Global_42429[iParam0 /*6*/].f_5);
			break;
		
		case 4:
			func_154();
			break;
		
		case 5:
			func_153();
			break;
		
		case 0:
			break;
		
		case 6:
			break;
		
		default:
			break;
	}
}

void func_153()
{
	Local_60.f_1 = 2;
}

void func_154()
{
	int iVar0;
	
	Global_42348[iLocal_64 /*5*/].f_4++;
	if (Local_55.f_0 == -1)
	{
		Global_42348[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_42348[iLocal_64 /*5*/].f_4 < 9 && Global_42348[iLocal_64 /*5*/].f_4 != 0)
	{
		Global_42348[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_42348[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_42348[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_42348[iLocal_64 /*5*/].f_2 = 1;
		}
		if (!func_114(Local_43.f_1))
		{
			func_107(Global_42348[iLocal_64 /*5*/].f_2);
		}
	}
}

void func_155(int iParam0)
{
	int iVar0;
	
	Global_42348[iLocal_64 /*5*/].f_3 = (Global_42348[iLocal_64 /*5*/].f_3 + iParam0);
	if (Local_55.f_0 == -1)
	{
		Global_42348[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_42348[iLocal_64 /*5*/].f_3 < 3 && Global_42348[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_42348[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_42348[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_42348[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_42348[iLocal_64 /*5*/].f_2 = 1;
		}
		if (!func_114(Local_43.f_1))
		{
			func_107(Global_42348[iLocal_64 /*5*/].f_2);
		}
	}
}

void func_156(int iParam0)
{
	Local_43.f_3 = (Local_43.f_3 + iParam0);
	Local_43.f_2 = (Local_43.f_2 + iParam0);
	Local_55.f_1 = (Local_55.f_1 + iParam0);
	Local_55.f_0 = (Local_55.f_0 + iParam0);
}

void func_157()
{
	int iVar0;
	
	if (!bLocal_50)
	{
		iLocal_63 = -1;
		return;
	}
	if (iLocal_63 < 0)
	{
		iLocal_63 = unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85());
		return;
	}
	iVar0 = unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85());
	if (iVar0 != iLocal_63)
	{
		if (iVar0 > iLocal_63)
		{
			func_158();
		}
		iLocal_63 = iVar0;
		return;
	}
}

void func_158()
{
}

void func_159()
{
	if (!Local_55.f_0 == -1)
	{
		if (!Local_55.f_0 == -2)
		{
			if (unk_0x83666F9FB8FEBD4B() >= Local_55.f_0)
			{
				func_144();
				Local_55.f_0 = -2;
				Local_60.f_0 = 12;
			}
		}
		if (unk_0x83666F9FB8FEBD4B() > Local_55.f_1)
		{
			func_173();
		}
	}
}

void func_160(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_42429[iVar0 /*6*/])
		{
			func_151(iVar0);
		}
		iVar0++;
	}
}

void func_161()
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
	if (!unk_0xF4B969E0807E76C7(Local_43.f_1, 0))
	{
		if (unk_0xA2DB82364F08360E(Local_43.f_1))
		{
			Local_60.f_0 = 10;
		}
	}
	if (bLocal_50)
	{
		func_164();
		func_11(71, 1);
		if (unk_0x393E9918BC37548A())
		{
			iVar0 = func_80(2057, -1, 0);
			iVar1 = (iVar0 / 10) + 1 * 10;
			if (iVar0 + 1 >= iVar1)
			{
				func_162(iVar1);
			}
			func_77(2057, iVar0 + 1, -1, 1, 0);
		}
		else
		{
			iVar2 = 0;
			iVar3 = 0;
			iVar4 = 0;
			unk_0x367DA79FE620711B(joaat("sp0_sp_num_times_drunk"), &iVar2, -1);
			unk_0x367DA79FE620711B(joaat("sp1_sp_num_times_drunk"), &iVar3, -1);
			unk_0x367DA79FE620711B(joaat("sp2_sp_num_times_drunk"), &iVar4, -1);
			iVar5 = ((iVar2 + iVar3) + iVar4);
			iVar6 = (iVar5 / 10) + 1 * 10;
			if (iVar5 + 1 >= iVar6)
			{
				func_162(iVar6);
			}
			switch (func_67())
			{
				case 0:
					unk_0x41410A69AD49AFCD(joaat("sp0_sp_num_times_drunk"), iVar2 + 1, 1);
					break;
				
				case 1:
					unk_0x41410A69AD49AFCD(joaat("sp1_sp_num_times_drunk"), iVar3 + 1, 1);
					break;
				
				case 2:
					unk_0x41410A69AD49AFCD(joaat("sp2_sp_num_times_drunk"), iVar4 + 1, 1);
					break;
				}
		}
		Local_60.f_1 = 1;
		return;
	}
	Local_60.f_1 = 12;
	if (Local_55.f_0 == -1)
	{
		Global_42348[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_42348[iLocal_64 /*5*/].f_3 < 3 && Global_42348[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_42348[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar7 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar7 <= 0)
		{
			iVar7 = 0;
		}
		iVar7 = (iVar7 / 1000) + 1;
		Global_42348[iLocal_64 /*5*/].f_2 = 0;
		if (iVar7 < 30)
		{
			Global_42348[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar7 < 10)
		{
			Global_42348[iLocal_64 /*5*/].f_2 = 1;
		}
	}
}

void func_162(int iParam0)
{
	int iVar0;
	
	iVar0 = func_163(81);
	Global_2414413[iVar0 /*83*/] = 81;
	Global_2414413[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2414413[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_163(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2414413[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2414413[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_164()
{
}

void func_165()
{
	Local_55.f_0 = Local_43.f_2;
	Local_55.f_1 = Local_43.f_3;
	Local_55.f_2 = -2;
	Local_55.f_3 = -2;
}

void func_166(int iParam0, int iParam1, int iParam2)
{
	func_167(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_167(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_169(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_168();
	if (iVar0 == -1)
	{
		return;
	}
	Global_42429[iVar0 /*6*/] = iParam0;
	Global_42429[iVar0 /*6*/].f_1 = iParam1;
	Global_42429[iVar0 /*6*/].f_2 = iParam2;
	Global_42429[iVar0 /*6*/].f_3 = iParam3;
	Global_42429[iVar0 /*6*/].f_4 = iParam4;
	Global_42429[iVar0 /*6*/].f_5 = iParam5;
}

int func_168()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42429[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_169(int iParam0, int iParam1, int iParam2)
{
	if (func_170(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_170(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_42429[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_42429[iVar0 /*6*/])
			{
				if (iParam1 == Global_42429[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

void func_171()
{
	int iVar0;
	
	bLocal_50 = false;
	if (Local_43.f_1 == unk_0x0FA8183DAD2B3203())
	{
		bLocal_50 = true;
		Global_42560 = 1;
		Global_42562++;
	}
	if (!unk_0xF4B969E0807E76C7(Local_43.f_1, 0))
	{
		iVar0 = func_70(Local_43.f_1);
		switch (iVar0)
		{
			case 17:
				unk_0x5A36DB8F38E65BE2(Local_43.f_1, "AMANDA_DRUNK");
				break;
			
			case 19:
				unk_0x5A36DB8F38E65BE2(Local_43.f_1, "LAMAR_DRUNK");
				break;
			}
	}
}

void func_172()
{
	if (!iLocal_48 == -1)
	{
		return;
	}
	iLocal_48 = func_117(Local_43.f_1);
	if (iLocal_48 == -1)
	{
		return;
	}
	iLocal_64 = func_116(iLocal_48);
}

void func_173()
{
	int iVar0;
	
	if (!func_34(0) && !func_34(3))
	{
		if (!unk_0xF4B969E0807E76C7(Local_43.f_1, 0))
		{
			iVar0 = func_70(Local_43.f_1);
			if (Global_42348[iLocal_64 /*5*/].f_4 > 0)
			{
				switch (iVar0)
				{
					case 0:
						func_175(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 1:
						func_175(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 2:
						func_175(Local_43.f_1, "POST_STONED", 24);
						break;
					}
			}
			switch (iVar0)
			{
				case 17:
					unk_0x5A36DB8F38E65BE2(Local_43.f_1, "AMANDA_NORMAL");
					break;
				
				case 19:
					unk_0x5A36DB8F38E65BE2(Local_43.f_1, "LAMAR_NORMAL");
					break;
				}
			}
	}
	func_144();
	if (bLocal_50)
	{
		Global_42560 = 0;
	}
	func_174();
	unk_0x7D74D6A091150B86(func_113(0));
	unk_0x7D74D6A091150B86(func_113(2));
	unk_0x7D74D6A091150B86(func_113(1));
	Global_1671734 = 0;
	if (unk_0x222F76006659B0EB(joaat("appemail")) > 0)
	{
		func_41(0);
	}
	unk_0x9C9E32388A7886A2();
}

void func_174()
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (unk_0xF4B969E0807E76C7(Local_43.f_1, 0))
	{
		return;
	}
	uVar0 = Local_43.f_1;
	if (unk_0x5294582CE404D3F4(Local_43.f_1, 0))
	{
		uVar1 = unk_0x4D57D3E5ECE15A41(Local_43.f_1, 0);
		iVar2 = unk_0x300C62F79A4441EB(uVar1, -1, 0);
		if (!Local_43.f_1 == iVar2)
		{
			return;
		}
		uVar0 = iVar1;
	}
	else if (!unk_0x03DB22289AD822D2() == 4 || !unk_0x0FA8183DAD2B3203() == Local_43.f_1)
	{
		return;
	}
	fLocal_53 = 0f;
	func_137(uVar0, 0f);
}

void func_175(var uParam0, char* sParam1, int iParam2)
{
	unk_0x39F932B751C1253B(uParam0, sParam1, func_176(iParam2), 1);
}

int func_176(int iParam0)
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

