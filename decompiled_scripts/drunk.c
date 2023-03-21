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
	if (unk_0x76BF814AB8D4CAB8(2))
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
		if ((unk_0x44243F2E2F58B8E3() && !unk_0x13C2BC1B63ABBCD5()) && !func_5())
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
	Global_2447128.f_643 = 1;
}

var func_3()
{
	return Global_2447128.f_622;
}

bool func_4()
{
	return unk_0xB03A1684359C50A1(Global_2447128.f_2, 11);
}

bool func_5()
{
	return unk_0xB03A1684359C50A1(Global_2447908.f_1.f_2810, 3);
}

void func_6()
{
	bool bVar0;
	
	if (unk_0x74C2FE037DFC8B4A(Local_43.f_1, 0))
	{
		func_148();
	}
	if (bLocal_50)
	{
		if (!unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
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
	
	unk_0x5D83BE67375A88E5(Local_43.f_1, 3000, 3500, 0, 1, 1, 0);
	Global_1803992 = 1;
	if (!unk_0xEC0ECEF2AF3FDA8D())
	{
		unk_0xFF91FEC6E57575E4(2500);
		while (unk_0xBC13F084F3B1B544())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		func_81(unk_0x8CFC7D6E1DA5D304(), 0, 57344);
		Global_2405047.f_2640 = 1;
		if (unk_0xAAC7941A7E0EE97A(unk_0x8CFC7D6E1DA5D304(), 0))
		{
			Global_2405047.f_2641 = 1;
		}
		else
		{
			Global_2405047.f_2641 = 0;
		}
		if (unk_0xC8C71EAB5D37D499())
		{
			unk_0xAF3C6787189C4D52(0);
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
	if (!unk_0x74C2FE037DFC8B4A(Local_43.f_1, 0))
	{
		unk_0x990FFD4FB6ADD630(Local_43.f_1, Var1.f_5, 1, 0, 0, 1);
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
	if (Global_51643[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		return;
	}
	if (Global_51643[iParam0 /*7*/])
	{
		unk_0xD194C635833AC189(Global_51643[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xD92C8D8AF3C67820(Global_51643[iParam0 /*7*/].f_1, iVar0, 1);
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
	unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), false, 0);
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		unk_0xF74B493CCF90C997(unk_0x18F7BE9ACB7D08F4(), 1);
	}
	unk_0x54C306A87B83151F(uParam1->f_5, 4500f);
	unk_0x8594DFCA271B6347(uParam1->f_5, 4500f);
	unk_0x7EE425AE3317BA69(uParam1->f_5, 5f, 1, 0, 0, 0);
	unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), uParam1->f_5, 1, 0, 0, 1);
	unk_0x73D7E57BF0ED7FEB(unk_0x18F7BE9ACB7D08F4(), true);
	unk_0x4EDE34FBADD967A6(0);
	unk_0xDF94C6DB72E69D64(1);
	unk_0x831CD0FBFB26EC7E(*uParam1);
	if (unk_0xFAFFA408239A026B(uParam1->f_16))
	{
	}
	else
	{
		unk_0x831CD0FBFB26EC7E(uParam1->f_16);
	}
	if (!unk_0xEC0ECEF2AF3FDA8D())
	{
		unk_0xFF91FEC6E57575E4(0);
	}
	func_47(uParam1->f_5, uParam1->f_8.f_2, 0, 1);
	if (!unk_0xEC0ECEF2AF3FDA8D())
	{
		unk_0xFF91FEC6E57575E4(0);
	}
	iVar1 = unk_0x5AFB8ED811F05E4D() + 20000;
	bVar2 = false;
	uParam1->f_33 = 0;
	while (!bVar2 && iVar1 > unk_0x5AFB8ED811F05E4D())
	{
		bVar2 = true;
		unk_0x831CD0FBFB26EC7E(*uParam1);
		if (!unk_0x028356968FDD2DF2(*uParam1))
		{
			bVar2 = false;
		}
		if (!unk_0xFAFFA408239A026B(uParam1->f_16))
		{
			unk_0x831CD0FBFB26EC7E(uParam1->f_16);
			if (!unk_0x028356968FDD2DF2(uParam1->f_16))
			{
				bVar2 = false;
			}
		}
		if (!unk_0xEC0ECEF2AF3FDA8D())
		{
			unk_0xFF91FEC6E57575E4(0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_44();
	if (!func_43(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		unk_0x9E1C273D1197BF71(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 0, 1);
		unk_0xE54597236B7D8C63(uParam1->f_5 + uParam1->f_19, (unk_0x652D2EEEF1D3E62C(uParam1->f_22) + 25f), 0, 0, 0, 0, 0, 0);
		unk_0x7EE425AE3317BA69(uParam1->f_5 + uParam1->f_19, (unk_0x652D2EEEF1D3E62C(uParam1->f_22) + 25f), 1, 0, 0, 0);
	}
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		unk_0x3987E3ADA8E87AD8(unk_0x8CFC7D6E1DA5D304());
		unk_0x5C7D86C4752CBC68(unk_0x18F7BE9ACB7D08F4(), joaat("weapon_unarmed"), 1);
		unk_0xD9FCA20C1C5553F7(unk_0x18F7BE9ACB7D08F4());
	}
	unk_0x73D7E57BF0ED7FEB(unk_0x18F7BE9ACB7D08F4(), false);
	unk_0xDF94C6DB72E69D64(0);
	unk_0x7EE425AE3317BA69(uParam1->f_5, 15f, 1, 0, 0, 0);
	unk_0x29B4AF654EB12AC3();
	unk_0xE2ADA3ED3EE75A24();
	func_41();
	while (func_40())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0xC8AB6A5E6C1E6613() && !unk_0x610450B2545892B5())
	{
		unk_0x8359CF51370FC969(250);
	}
	unk_0x3388DD13675FEE27(1);
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		iVar4 = unk_0x3C3438327FFEB224(uParam1->f_5, uParam1->f_8, 2);
		unk_0xAB888668498FCC04(iVar4, 0);
		unk_0x07BA5921A1FAAFFF(iVar4, 0);
		uVar5 = unk_0x5E35D8CCDF065701("DEFAULT_ANIMATED_CAMERA", 1);
		iVar6 = 4;
		if (uParam1->f_4 != joaat("MotionState_Idle"))
		{
			iVar6 |= 2;
		}
		func_38(unk_0x18F7BE9ACB7D08F4(), uParam1->f_18);
		unk_0x4DD2EB945B4192FD(unk_0x18F7BE9ACB7D08F4(), iVar4, *uParam1, uParam1->f_1, 1000f, -1.5f, iVar6, 0, 1148846080, 0);
		unk_0xB9ADE1AA812EB0FF(unk_0x18F7BE9ACB7D08F4(), 1);
		unk_0x8F75C95DEB02FFA1(unk_0x8CFC7D6E1DA5D304(), 1);
		iVar3 = unk_0xE0D2CEF7DC916792(unk_0x18F7BE9ACB7D08F4(), 77);
		unk_0xB05E48165A6F6058(unk_0x18F7BE9ACB7D08F4(), 77, 1);
		unk_0xFB34CCC40E7806C4(uVar5, iVar4, uParam1->f_2, *uParam1);
		unk_0xF5F744EF9F4DB21E(1, 0, 3000, 1, 0, 0);
		if (!unk_0xFAFFA408239A026B(uParam1->f_16) && !unk_0xFAFFA408239A026B(uParam1->f_17))
		{
			unk_0xB5746603774C4C9D(unk_0x18F7BE9ACB7D08F4(), uParam1->f_16, uParam1->f_17, 1000f, -1.5f, 10000, 33, 0, 0, 0, 0);
		}
	}
	else
	{
		iVar4 = -1;
	}
	if (!uParam1->f_25)
	{
		if (!unk_0xFAFFA408239A026B(sParam2))
		{
			func_37(sParam2, -1);
			uParam1->f_25 = 1;
		}
	}
	bVar7 = false;
	bVar8 = false;
	uVar9 = 16;
	if (!unk_0xFAFFA408239A026B(&(uParam1->f_11)))
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
		func_36(&uVar9, iVar175, unk_0x18F7BE9ACB7D08F4(), sVar176, 0, 1);
	}
	if (unk_0xCF0FA6AB02EA68F7(iVar4))
	{
		sVar177 = "WalkInterruptible";
		sVar178 = "ForceBlendout";
		while (unk_0xCF0FA6AB02EA68F7(iVar4) && !unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (!bVar8)
			{
				if (!unk_0xEC0ECEF2AF3FDA8D())
				{
					if (!unk_0xFAFFA408239A026B(uParam1->f_26))
					{
						unk_0x9575CEFF222148A6(uParam1->f_26, 0, 0);
						bVar8 = true;
					}
					if (!unk_0xFAFFA408239A026B(uParam1->f_27))
					{
						if (!unk_0xFAFFA408239A026B(uParam1->f_28))
						{
							unk_0x929C3CBA660376D5(-1, uParam1->f_28, uParam1->f_27, 0);
							bVar8 = true;
						}
						if (!unk_0xFAFFA408239A026B(uParam1->f_29))
						{
							unk_0x929C3CBA660376D5(-1, uParam1->f_29, uParam1->f_27, 0);
							bVar8 = true;
						}
					}
				}
			}
			unk_0x3F19B70555683951();
			unk_0xE05212008FE9A018(18);
			unk_0x277ED9175E64C580();
			func_32(0);
			iVar179 = unk_0x5AFB8ED811F05E4D();
			if (iVar179 >= (Global_36410 - 500))
			{
				func_31(4000);
			}
			fVar180 = -1f;
			fVar181 = -1f;
			fVar0 = unk_0x74CE979B042A1253(iVar4);
			if (!unk_0xFAFFA408239A026B(&(uParam1->f_11)))
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
			if (unk_0xD55D1B0CCDF27F0C(unk_0x18F7BE9ACB7D08F4(), unk_0x6E987D62C8535B6E(sVar177)))
			{
				iVar183 = (unk_0xFBA7BDC53CCB8FC2(2, 195) - 128);
				iVar184 = (unk_0xFBA7BDC53CCB8FC2(2, 196) - 128);
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
			if (unk_0xDBB3D0EFC8DECE3D() == 4 && uParam1->f_52 > 0f)
			{
				if (fVar0 >= uParam1->f_52)
				{
					if (!uParam1->f_32)
					{
						fVar185 = 1.5f;
						Var186 = { unk_0x786B7DB9D026772C() };
						Var189 = { unk_0x433176BD83D09D7E(unk_0x18F7BE9ACB7D08F4(), 31086, 0f, 0f, 0f) };
						fVar192 = unk_0x15EE504466B7BBD3(Var186, Var189, 1);
						fVar185 = func_18(fVar185, 0.001f, (fVar192 - 0.75f));
						if (fVar185 < 0f)
						{
							fVar185 = 0.001f;
						}
						func_17(&(uParam1->f_34), unk_0x18F7BE9ACB7D08F4(), func_57(), 1E-06f, 300, 300, 0, 0, 1045220557);
						func_16(&(uParam1->f_34), uParam1->f_53);
						if (!uParam1->f_33)
						{
							uParam1->f_34 = 1;
							uParam1->f_34.f_7 = unk_0x5AFB8ED811F05E4D();
							uParam1->f_34.f_8 = 0;
							uParam1->f_33 = 1;
						}
						if (uParam1->f_57 == 999f)
						{
							uParam1->f_56 = 0f;
						}
						if (uParam1->f_57 == 999f)
						{
							Var195 = { unk_0xE3BD68C65B887C11(2) };
							uVar198 = unk_0x93FDA3BF59E7B77F(unk_0x18F7BE9ACB7D08F4());
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
						unk_0x4CCECEB2EA5D6A82(fVar193, 1065353216);
						unk_0xA3F41A1968319181(fVar194);
						unk_0x1E3DE8C5C27AC536(fVar193);
						unk_0x4F8C9FCF64B75565(fVar194);
						Var201 = { unk_0x786B7DB9D026772C() };
						Var204 = { unk_0x1F977C2BDC83C388() };
						fVar207 = unk_0x15EE504466B7BBD3(Var201, Var204, 1);
						iVar208 = unk_0xF2DB717A73826179((fVar207 * 1000f));
						uParam1->f_32 = 1;
					}
					if (uParam1->f_32)
					{
						unk_0x7D2D9D2B612DF2E7();
						if (func_13(&(uParam1->f_34), 1, 1, 1, 0, 0, 0))
						{
						}
					}
				}
			}
			if (unk_0xD55D1B0CCDF27F0C(unk_0x18F7BE9ACB7D08F4(), unk_0x6E987D62C8535B6E(sVar178)) || iVar182)
			{
				if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
				{
					unk_0x267F7A2DFDFFB077(unk_0x18F7BE9ACB7D08F4());
					switch (uParam1->f_4)
					{
						case joaat("MotionState_Idle"):
							unk_0x1DCD07B7EA2DDAFE(unk_0x18F7BE9ACB7D08F4(), joaat("MotionState_Idle"), 1, 0, 0);
							unk_0x7602D16A5C4D379B(0, 0, 3, 0);
							break;
						
						case joaat("MotionState_Walk"):
							unk_0x1DCD07B7EA2DDAFE(unk_0x18F7BE9ACB7D08F4(), joaat("MotionState_Walk"), 1, 0, 0);
							unk_0xF9B5E47ECEAD483E(unk_0x8CFC7D6E1DA5D304(), 1f, 500, 0, 1, 0);
							if (unk_0xDBB3D0EFC8DECE3D() != 4)
							{
								if (uParam1->f_31 == 999f)
								{
									uParam1->f_30 = 0f;
								}
								if (uParam1->f_31 == 999f)
								{
									Var211 = { unk_0xE3BD68C65B887C11(2) };
									uVar214 = unk_0x93FDA3BF59E7B77F(unk_0x18F7BE9ACB7D08F4());
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
								unk_0x4CCECEB2EA5D6A82(fVar209, 1065353216);
								unk_0xA3F41A1968319181(fVar210);
								Var217 = { unk_0x786B7DB9D026772C() };
								Var220 = { unk_0x1F977C2BDC83C388() };
								fVar223 = unk_0x15EE504466B7BBD3(Var217, Var220, 1);
								iVar224 = unk_0xF2DB717A73826179((fVar223 * 1000f));
								unk_0xF5F744EF9F4DB21E(0, 1, iVar224, 0, 0, 0);
							}
							break;
						
						default:
							break;
					}
					if (unk_0xCF0FA6AB02EA68F7(iVar4))
					{
						unk_0xF2918DC5CF9EC327(iVar4);
						iVar4 = -1;
					}
				}
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (!func_43(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		unk_0x52756EBA46F4FA41(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 1);
	}
	unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), true, 0);
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		unk_0x267F7A2DFDFFB077(unk_0x18F7BE9ACB7D08F4());
	}
	bVar225 = unk_0x8C7DADAE0E79F2DF();
	bVar226 = false;
	if (uParam1->f_32)
	{
		unk_0x7D2D9D2B612DF2E7();
		if (!func_13(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
		{
			bVar226 = true;
		}
	}
	if (bVar225 || bVar226)
	{
		while ((bVar225 || bVar226) && !unk_0x51CFE20A158947F4())
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
			bVar225 = unk_0x8C7DADAE0E79F2DF();
			bVar226 = false;
			if (uParam1->f_32)
			{
				unk_0x7D2D9D2B612DF2E7();
				if (!func_13(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
				{
					bVar226 = true;
				}
			}
		}
	}
	if (!unk_0xFAFFA408239A026B(uParam1->f_16))
	{
		unk_0x334F1DD67B2EC86A(uParam1->f_16);
	}
	unk_0x334F1DD67B2EC86A(*uParam1);
	unk_0x13AD763DBD687842(uVar5, 0);
	func_10(&(uParam1->f_34));
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		unk_0xB05E48165A6F6058(unk_0x18F7BE9ACB7D08F4(), 77, iVar3);
		unk_0xF74B493CCF90C997(unk_0x18F7BE9ACB7D08F4(), 0);
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
	if (unk_0x5400DC5FAEBF30F0(uParam0->f_1))
	{
		unk_0x13AD763DBD687842(uParam0->f_1, 0);
	}
	if (unk_0x5400DC5FAEBF30F0(uParam0->f_2))
	{
		unk_0x13AD763DBD687842(uParam0->f_2, 0);
	}
	if (unk_0x5400DC5FAEBF30F0(uParam0->f_3))
	{
		unk_0x13AD763DBD687842(uParam0->f_3, 0);
	}
	if (unk_0x5400DC5FAEBF30F0(uParam0->f_4))
	{
		unk_0x13AD763DBD687842(uParam0->f_4, 0);
	}
}

void func_12(int iParam0, int iParam1, int iParam2)
{
	unk_0x9C7EE7DE7041A3F4(iParam0, iParam1, 1);
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
			if (!unk_0x74C2FE037DFC8B4A(uParam0->f_5, 0))
			{
				func_11(uParam0);
				Var0 = { unk_0x786B7DB9D026772C() };
				if (bParam1)
				{
					Var0 = { Var0 + unk_0xEF288D764F53C90C(uParam0->f_5) * FtoV(unk_0x64031EF2AE5F9603()) };
				}
				Var3 = { unk_0xCC9FF9C751023D2A(uParam0->f_5, Var0) };
				Var6 = { unk_0xE3BD68C65B887C11(2) };
				Var9 = { Var6 + uParam0->f_9 };
				Var12 = { Var9 - unk_0x26A3403C90A0B224(uParam0->f_5, 2) };
				Var15 = { (-unk_0x0BADBFA3B172435F(Var9.f_2) * unk_0xD0FFB162F40A139C(Var9.f_0)), (unk_0xD0FFB162F40A139C(Var9.f_2) * unk_0xD0FFB162F40A139C(Var9.f_0)), unk_0x0BADBFA3B172435F(Var9.f_0) };
				Var18 = { (-unk_0x0BADBFA3B172435F(Var12.f_2) * unk_0xD0FFB162F40A139C(Var12.f_0)), (unk_0xD0FFB162F40A139C(Var12.f_2) * unk_0xD0FFB162F40A139C(Var12.f_0)), unk_0x0BADBFA3B172435F(Var12.f_0) };
				uVar21 = unk_0x8A94CCA7919AACBC();
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = unk_0x08B25BECF55D0532(1775630800, 0);
				}
				uParam0->f_1 = unk_0x08B25BECF55D0532(26379945, 1);
				if (bParam1)
				{
					unk_0x505B5B32CED3A500(uParam0->f_1, uParam0->f_5, Var3, 1);
				}
				else
				{
					unk_0xF6910B463A17E809(uParam0->f_1, Var0);
				}
				unk_0xA5D79F87520FD826(uParam0->f_1, Var6, 2);
				unk_0x2A2BB8210FB20081(uParam0->f_1, uVar21);
				uParam0->f_2 = unk_0x08B25BECF55D0532(26379945, 1);
				if (bParam1 && !bParam4)
				{
					unk_0x505B5B32CED3A500(uParam0->f_2, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12), 1);
				}
				else
				{
					unk_0xF6910B463A17E809(uParam0->f_2, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12));
				}
				unk_0xA5D79F87520FD826(uParam0->f_2, Var6, 2);
				unk_0x2A2BB8210FB20081(uParam0->f_2, uVar21);
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = unk_0x08B25BECF55D0532(26379945, 1);
					if (bParam1 && !bParam4)
					{
						unk_0x505B5B32CED3A500(uParam0->f_4, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13), 1);
					}
					else
					{
						unk_0xF6910B463A17E809(uParam0->f_4, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13));
					}
					unk_0xA5D79F87520FD826(uParam0->f_4, Var6, 2);
					unk_0x2A2BB8210FB20081(uParam0->f_4, uVar21);
				}
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					unk_0x31AE3C8DF7FD76F3(uParam0->f_3, uParam0->f_1, 0, 2);
					if (iParam6 == 0)
					{
						unk_0x31AE3C8DF7FD76F3(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
					}
					unk_0x31AE3C8DF7FD76F3(uParam0->f_3, uParam0->f_2, (uParam0->f_14 - uParam0->f_17), 2);
					unk_0x9EB80767171DC6DE(uParam0->f_3, iParam6);
					unk_0x2C535610856B3F4D(uParam0->f_3, 1);
				}
				else
				{
					unk_0x544D4FC2BDA00B32(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
				unk_0xF5F744EF9F4DB21E(1, 0, 3000, 1, 0, 0);
				uParam0->f_7 = unk_0x5AFB8ED811F05E4D();
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
					if (unk_0x5AFB8ED811F05E4D() >= (uParam0->f_7 + uParam0->f_16))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									unk_0x9575CEFF222148A6("CamPushInFranklin", 0, 0);
									break;
								
								case 0:
									unk_0x9575CEFF222148A6("CamPushInMichael", 0, 0);
									break;
								
								case 2:
									unk_0x9575CEFF222148A6("CamPushInTrevor", 0, 0);
									break;
							}
						}
						else
						{
							unk_0x9575CEFF222148A6("CamPushInNeutral", 0, 0);
						}
						unk_0x929C3CBA660376D5(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						uParam0->f_8 = 1;
					}
				}
			}
			if (unk_0x5AFB8ED811F05E4D() >= (uParam0->f_7 + uParam0->f_15))
			{
				if (bParam2)
				{
					func_11(uParam0);
					unk_0xF5F744EF9F4DB21E(0, 0, 3000, 1, 0, 0);
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
	unk_0x0A4CB1D4A63A7528();
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
					unk_0xBE97F4E2B659331B(0);
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
		if (unk_0x85FDEF76CDBAD589())
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
			unk_0x62148293B793073B(&Global_2323, 20);
			unk_0x62148293B793073B(&Global_2324, 17);
			unk_0x62148293B793073B(&Global_2325, 0);
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
			if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
			{
				if (unk_0x38000067CDE001D0(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (func_24())
				{
					return 0;
				}
				if (unk_0xAE8B7AC0DA6122BC(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0xDDA45FDD097F5240(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0x34F40618CEEAB490(unk_0x18F7BE9ACB7D08F4(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70852)
				{
					if (unk_0xE1F715CDDC50FD7F(unk_0x18F7BE9ACB7D08F4()))
					{
						return 0;
					}
					if (unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304()))
					{
						return 0;
					}
					if (unk_0xEEDFFBA2DC1CCDB0(unk_0x18F7BE9ACB7D08F4()))
					{
						return 0;
					}
					if (unk_0xAC991FD3AAB0DC56(unk_0x8CFC7D6E1DA5D304()))
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
				if (unk_0xB03A1684359C50A1(Global_2323, 9))
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
	unk_0xBE97F4E2B659331B(0);
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
	unk_0x62148293B793073B(&Global_2324, 16);
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
	
	if (Global_70852)
	{
		iVar0 = 0;
		unk_0x75CE6F8BEC2654E3(unk_0x18F7BE9ACB7D08F4(), &iVar1, 1);
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x4D73A339AD1764B4() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0x637828192EF718F7(unk_0x18F7BE9ACB7D08F4(), 78, 1))
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
		if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[0 /*29*/])
			{
				Global_14453 = 0;
			}
			else if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[1 /*29*/])
			{
				Global_14453 = 1;
			}
			else if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[2 /*29*/])
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
		if (Global_70852)
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
	return Global_35859 == iParam0;
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
				return Global_1357213.f_203[iParam1];
			}
			break;
	}
	return unk_0xB03A1684359C50A1(Global_1357213.f_1048, iParam0);
}

void func_29()
{
	unk_0x815093B4702C59D8();
	Global_16767 = 0;
	if ((unk_0x36328FCBA2944E1F() || Global_14453.f_1 == 9) || Global_14452 == 1)
	{
		unk_0xBE97F4E2B659331B(0);
		Global_15756 = 6;
		Global_14453.f_1 = 3;
		return;
	}
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0xBE97F4E2B659331B(1);
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
	Global_36410 = (unk_0x5AFB8ED811F05E4D() + iParam0);
}

void func_32(int iParam0)
{
	if (!Global_14453.f_1 == 1)
	{
		if (func_35(0))
		{
			func_33(iParam0);
		}
		unk_0xD2A9C3F486236CC5(&Global_2324, 2);
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
		unk_0xD2A9C3F486236CC5(&Global_2324, 16);
	}
	if (unk_0x36328FCBA2944E1F())
	{
		unk_0xBE97F4E2B659331B(0);
	}
	Global_15756 = 5;
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2323, 30);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2323, 30);
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
				unk_0xE0F240E99D061E79(&Global_14390);
			}
			Global_14381 = { Global_14399[Global_14398 /*3*/] };
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
	else if (Global_14615 == 1)
	{
		Global_14615 = 0;
		Global_14381 = { Global_14406[Global_14398 /*3*/] };
		if (bParam1)
		{
			unk_0x1F7EA74AE820583A(Global_14390);
		}
		else
		{
			unk_0x1F7EA74AE820583A(Global_14381);
		}
	}
}

int func_35(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (unk_0xB03A1684359C50A1(Global_2323, 14))
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
	if (unk_0xE7FAF8E78F7D3A73(joaat("cellphone_flashhand")) > 0)
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
	if (!Global_70852)
	{
		if (!unk_0x0FAE113CE72ED842(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x38ADC0C5F4F08C6D(iParam2, 0);
			}
			else
			{
				unk_0x38ADC0C5F4F08C6D(iParam2, 1);
			}
		}
		if (!unk_0x0FAE113CE72ED842(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x971E3DC2097859E3(iParam2, 0);
			}
			else
			{
				unk_0x971E3DC2097859E3(iParam2, 1);
			}
		}
	}
}

void func_37(char* sParam0, int iParam1)
{
	unk_0x2202872EA73499C3(sParam0);
	unk_0xF764171B43EBA5E4(0, 0, 1, iParam1);
}

void func_38(int iParam0, var uParam1)
{
	if (func_39(uParam1, 1))
	{
		unk_0xD1EDD706093BDD90(iParam0, "HOSPITAL_0", 0f, 1f);
	}
	if (func_39(uParam1, 2))
	{
		unk_0xD1EDD706093BDD90(iParam0, "HOSPITAL_1", 0f, 1f);
	}
	if (func_39(uParam1, 4))
	{
		unk_0xD1EDD706093BDD90(iParam0, "HOSPITAL_2", 0f, 1f);
	}
	if (func_39(uParam1, 8))
	{
		unk_0xD1EDD706093BDD90(iParam0, "HOSPITAL_3", 0f, 1f);
	}
	if (func_39(uParam1, 16))
	{
		unk_0xD1EDD706093BDD90(iParam0, "HOSPITAL_4", 0f, 1f);
	}
	if (func_39(uParam1, 32))
	{
		unk_0xD1EDD706093BDD90(iParam0, "HOSPITAL_5", 0f, 1f);
	}
	if (func_39(uParam1, 64))
	{
		unk_0xD1EDD706093BDD90(iParam0, "HOSPITAL_6", 0f, 1f);
	}
	if (func_39(uParam1, 128))
	{
		unk_0xD1EDD706093BDD90(iParam0, "HOSPITAL_7", 0f, 1f);
	}
	if (func_39(uParam1, 256))
	{
		unk_0xD1EDD706093BDD90(iParam0, "HOSPITAL_8", 0f, 1f);
	}
	if (func_39(uParam1, 512))
	{
		unk_0xD1EDD706093BDD90(iParam0, "HOSPITAL_9", 0f, 1f);
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
	if (((Global_92829 == 13 || Global_92829 == 10) || Global_92829 == 11) || Global_92829 == 12)
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
		if (Global_89907[iVar0 /*17*/] && !Global_89907[iVar0 /*17*/].f_1)
		{
			if (Global_89907[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_89907[iVar0 /*17*/].f_5 != 88 && Global_89907[iVar0 /*17*/].f_5 != 89) && Global_89907[iVar0 /*17*/].f_5 != 92)
				{
					func_42(Global_89907[iVar0 /*17*/].f_5, 1);
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
			Global_86959[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_86959[iParam0 /*2*/] = 0;
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
		iVar1 = Global_36794[iVar0 /*5*/];
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
		if (Global_36768[iVar2 /*5*/] == 0)
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
	if (!Global_36768[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36768[iParam0 /*5*/].f_1 == unk_0x18F7BE9ACB7D08F4())
		{
			Global_36989 = 0;
		}
	}
	Global_36768[iParam0 /*5*/] = 13;
	Global_36768[iParam0 /*5*/].f_1 = 0;
	Global_36768[iParam0 /*5*/].f_2 = 0;
	Global_36768[iParam0 /*5*/].f_3 = 0;
	Global_36768[iParam0 /*5*/].f_4 = 0;
	Global_36767 = (Global_36767 - 1);
	if (Global_36767 < 0)
	{
		Global_36767 = 0;
	}
}

int func_47(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		func_51(0);
		unk_0x7EE425AE3317BA69(Param0, 5f, 1, 0, 0, 0);
		if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
		{
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), Param0, 1, 0, 0, 1);
				unk_0xB88121FF8A34A66F(unk_0x18F7BE9ACB7D08F4(), uParam3);
				unk_0x4CCECEB2EA5D6A82(0f, 1065353216);
				unk_0xA3F41A1968319181(0f);
			}
		}
		unk_0x2701380D2C44C561(Param0, 4500f, 0);
		unk_0x4EDE34FBADD967A6(0);
		unk_0x7EE425AE3317BA69(Param0, 5000f, 1, 0, 0, 0);
		unk_0x5E791DD328BCDC42(Param0, 5000f, 0);
		unk_0x54C306A87B83151F(Param0, 5000f);
		unk_0x8594DFCA271B6347(Param0, 5000f);
		func_50();
		func_49();
		unk_0xC1B1E9A034A63A62(0);
		func_51(1);
		if (!unk_0x8BDE5BE4E46BA35F())
		{
			while (!unk_0x2701380D2C44C561(Param0, 4500f, 0))
			{
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					unk_0xDF94C6DB72E69D64(0);
					return 0;
				}
			}
		}
		unk_0xC1B1E9A034A63A62(0);
		while (!unk_0x34CC31673AD34B53())
		{
			unk_0x4EDE34FBADD967A6(0);
			if (unk_0x83666F9FB8FEBD4B() > 20000)
			{
				unk_0xDF94C6DB72E69D64(0);
				if (unk_0x8BDE5BE4E46BA35F())
				{
					unk_0xC7BB901E267A910A();
				}
				return 0;
			}
		}
		if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
		{
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0x8BDE5BE4E46BA35F())
				{
					unk_0xC7BB901E267A910A();
				}
				unk_0xDF94C6DB72E69D64(0);
				unk_0xC1B1E9A034A63A62(0);
				unk_0x29B4AF654EB12AC3();
				if (iParam5 == 1)
				{
					unk_0xE2ADA3ED3EE75A24();
				}
				else
				{
					unk_0xC1B1E9A034A63A62(5000);
				}
				unk_0x3CA0B8470C1825ED();
			}
		}
		while ((!unk_0xA14472F2AF024815() && !func_48()) && unk_0x83666F9FB8FEBD4B() < 1500)
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
			unk_0xB5E0B10B5D88A8F5(Param0, &(Param0.f_2), 0, 0);
			unk_0x7EE425AE3317BA69(Param0, 5f, 1, 0, 0, 0);
			if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
			{
				if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
				{
					unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), Param0, 1, 0, 0, 1);
					unk_0xB88121FF8A34A66F(unk_0x18F7BE9ACB7D08F4(), uParam3);
				}
			}
		}
		unk_0x4CCECEB2EA5D6A82(0f, 1065353216);
		unk_0xA3F41A1968319181(0f);
		func_51(0);
		return 1;
	}
	func_51(0);
	return 0;
}

bool func_48()
{
	return !Global_69674.f_553;
}

void func_49()
{
	Global_69674.f_553 = 1;
	Global_69674.f_554 = 0;
}

void func_50()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		Global_69674[iVar0] = 0;
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
			if (!unk_0xB03A1684359C50A1(Global_92829.f_20, 2))
			{
				unk_0xDF94C6DB72E69D64(1);
				unk_0xD2A9C3F486236CC5(&(Global_92829.f_20), 2);
			}
		}
		else if (unk_0xB03A1684359C50A1(Global_92829.f_20, 2))
		{
			unk_0xDF94C6DB72E69D64(0);
			unk_0x62148293B793073B(&(Global_92829.f_20), 2);
		}
	}
}

int func_52()
{
	if (unk_0xB03A1684359C50A1(unk_0x61E9B3BFA06B017B(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

bool func_53(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_104551.f_7199[iParam0], 0);
}

int func_54(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104551.f_9055.f_99.f_58[iParam0];
}

int func_55()
{
	if (Global_33224[11] == 1)
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
	return Global_104551.f_9055.f_330[iParam0 /*6*/];
}

int func_57()
{
	func_58();
	return Global_104551.f_2353.f_539.f_4301;
}

void func_58()
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_61(Global_104551.f_2353.f_539.f_4301) != unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()))
		{
			iVar0 = func_60(unk_0x18F7BE9ACB7D08F4());
			if (func_59(iVar0) && (!func_26(14) || Global_103502))
			{
				if (Global_104551.f_2353.f_539.f_4301 != iVar0 && func_59(Global_104551.f_2353.f_539.f_4301))
				{
					Global_104551.f_2353.f_539.f_4302 = Global_104551.f_2353.f_539.f_4301;
				}
				Global_104551.f_2353.f_539.f_4303 = iVar0;
				Global_104551.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104551.f_2353.f_539.f_4301 != 145)
			{
				Global_104551.f_2353.f_539.f_4303 = Global_104551.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104551.f_2353.f_539.f_4301 = 145;
}

bool func_59(int iParam0)
{
	return iParam0 < 3;
}

int func_60(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		iVar1 = unk_0x4F69FBD64CDF125B(iParam0);
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
		return Global_104551.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_62(bool bParam0)
{
	unk_0xA1FB3417C3449864(0f);
	unk_0xDD4424863F033940(0f);
	unk_0xB3EC3EC462B2CB79(0f);
	unk_0x116F780D5A758BE3(1);
	unk_0xDF53E98A4157D5D6(0f);
	unk_0x9D8275FB70AE1DBD(1);
	unk_0x8C8FFDC0DAC02F17(0);
	if (unk_0x36CC410474001FBC("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0xA11D9B06B99FE786("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0xFAFFA408239A026B(&Global_36969))
	{
		if (unk_0x36CC410474001FBC(&Global_36969))
		{
			unk_0xA11D9B06B99FE786(&Global_36969);
		}
	}
	if (unk_0x5400DC5FAEBF30F0(Global_36958))
	{
		if (unk_0x76DD0F1D9A93AB6C(Global_36958))
		{
			unk_0x0DF6CD63C0404942(Global_36958, 0f);
			unk_0xA41F88BA20F1376F(Global_36958, 1);
		}
	}
	if (unk_0xC8C71EAB5D37D499())
	{
		unk_0xAF3C6787189C4D52(0);
	}
	if (bParam0)
	{
		if (unk_0xEBB1B7EB9C7EA9B9() != -1 || unk_0x1CC829D6263C76A6() != -1)
		{
			unk_0x8D15A5FB83757D1A();
		}
		else if (unk_0x51CFE20A158947F4())
		{
			unk_0x8D15A5FB83757D1A();
		}
	}
	Global_36964 = 0f;
	StringCopy(&Global_36965, "", 16);
	StringCopy(&Global_36969, "", 64);
	StringCopy(&Global_36985, "", 16);
	func_63();
}

void func_63()
{
	Global_36957 = 0;
	Global_36958 = 0;
	Global_36959 = 0;
	Global_36960 = 30000;
	Global_36961 = 0f;
	Global_36963 = 0f;
	Global_36962 = 0f;
	Global_36964 = 0f;
	StringCopy(&Global_36965, "", 16);
}

void func_64(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_262145.f_16833;
			break;
		
		case 1:
			iVar0 = Global_262145.f_16823;
			break;
		
		case 2:
			iVar0 = Global_262145.f_16834;
			break;
		
		case 3:
			iVar0 = Global_262145.f_16826;
			break;
		
		case 4:
			iVar0 = Global_262145.f_16822;
			break;
		
		case 6:
			iVar0 = 3;
			break;
		
		case 7:
			iVar0 = Global_262145.f_16837;
			break;
		
		case 8:
			iVar0 = Global_262145.f_16838;
			break;
		
		case 9:
			iVar0 = Global_262145.f_16841;
			break;
		
		case 22:
			iVar0 = Global_262145.f_16842;
			break;
		
		case 23:
			iVar0 = Global_262145.f_16835;
			break;
		
		case 25:
			iVar0 = Global_262145.f_17723;
			break;
		
		case 26:
			iVar0 = Global_262145.f_17722;
			break;
	}
	if (iVar0 != 0)
	{
		unk_0xE567E8F7F9EA6A8C(func_75(func_76()), func_73(func_76()), func_72(), func_71(), iParam0, iVar0);
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
	Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_449 = iVar0;
	func_66(3951, iVar0, -1, 1, 0);
}

void func_66(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2522855[iParam0 /*3*/][func_67(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xD92C8D8AF3C67820(iVar0, iParam1, iParam3);
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
			Global_2522568 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2522568 = 1;
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
	uVar0 = Global_2522855[iParam0 /*3*/][func_67(iParam1)];
	if (unk_0xD194C635833AC189(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_70(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x8CFC7D6E1DA5D304();
	Global_1627460[iVar0 /*530*/].f_11.f_448 = (Global_1627460[iVar0 /*530*/].f_11.f_448 + iParam0);
	if (Global_1627460[iVar0 /*530*/].f_11.f_448 < -9999)
	{
		Global_1627460[iVar0 /*530*/].f_11.f_448 = 9999;
	}
	else if (Global_1627460[iVar0 /*530*/].f_11.f_448 > 9999)
	{
		Global_1627460[iVar0 /*530*/].f_11.f_448 = 9999;
	}
}

int func_71()
{
	if (Global_1807007.f_3 != 0)
	{
		return Global_1807007.f_3;
	}
	return -1;
}

int func_72()
{
	if (Global_1807007.f_2 != 0)
	{
		return Global_1807007.f_2;
	}
	return -1;
}

int func_73(int iParam0)
{
	if (iParam0 == func_74())
	{
		return -1;
	}
	return Global_1627460[iParam0 /*530*/].f_11.f_8[1];
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
	return Global_1627460[iParam0 /*530*/].f_11.f_8[0];
}

int func_76()
{
	return Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11;
}

bool func_77(bool bParam0)
{
	return func_78(unk_0x8CFC7D6E1DA5D304(), bParam0);
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
	iVar0 = Global_1627460[iParam0 /*530*/].f_11;
	if (iVar0 != func_74() && Global_1627460[iVar0 /*530*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_80(int iParam0, int iParam1)
{
	if (iParam0 != func_74())
	{
		if (Global_1627460[iParam0 /*530*/].f_11 != func_74())
		{
			if (Global_1627460[iParam0 /*530*/].f_11 == iParam0 && Global_1627460[iParam0 /*530*/].f_11.f_409 == iParam1)
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
		if (unk_0x52F4DD18485E81C7())
		{
			unk_0x3B82047F26E2CEDB(0);
		}
	}
	if (!unk_0x44243F2E2F58B8E3())
	{
		uVar0 = iParam2;
		unk_0xF70DE7344EBF0825(iParam0, bParam1, uVar0);
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
		if (unk_0x4AF13BCD120BCDBC(iParam0) && unk_0x557001354138B7FB(iParam0))
		{
			iVar25 = unk_0x6604E096142B4B55(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x44243F2E2F58B8E3())
				{
					unk_0x710A8C8CDF18A4F9(1);
				}
				else if (bVar13 || (!func_87(unk_0x8CFC7D6E1DA5D304(), 0) && !func_86()))
				{
					unk_0xA12407EB7D7CF146(iVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0x44243F2E2F58B8E3() && !bVar18)
					{
						unk_0x710A8C8CDF18A4F9(0);
					}
					Global_2422724[iParam0 /*420*/].f_259 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_85(iVar25) && !unk_0x4AA6B5B9E27A254A(iVar25))
				{
					if (!bVar21)
					{
						unk_0xF342BF6A7A4C7A8F(iVar25, true, 0);
					}
				}
				if (!unk_0x4A296E47F281D02F(iVar25))
				{
					if (!bVar20)
					{
						unk_0x73D7E57BF0ED7FEB(iVar25, false);
					}
					unk_0xB05881241072FEE6(iVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0x73D7E57BF0ED7FEB(iVar25, false);
				}
				unk_0x44EB7E24C5D75087(iVar25, true);
				unk_0x36643EAE6212D16F(iParam0, 0);
				unk_0x0ACEE7BC79EA804E(iVar25);
				unk_0xBDFA8A71B1A23D86(iVar25, 1);
				func_84();
				func_83();
				if (unk_0x1E550B6CDBC1308F())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0x8BDE5BE4E46BA35F())
				{
				}
				Global_2422724[iParam0 /*420*/].f_260 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_85(iVar25) && !unk_0x4AA6B5B9E27A254A(iVar25))
				{
					if (!bVar21)
					{
						unk_0xF342BF6A7A4C7A8F(iVar25, !bVar14, 0);
					}
					if (!unk_0x4A296E47F281D02F(iVar25))
					{
						if (!bVar20)
						{
							unk_0x73D7E57BF0ED7FEB(iVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0xB05881241072FEE6(iVar25, 1);
						}
					}
					if (func_82(Global_1646129.f_138609))
					{
						unk_0x73D7E57BF0ED7FEB(iVar25, true);
					}
				}
				if (Global_1312831)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					unk_0x36643EAE6212D16F(iParam0, 0);
				}
				else
				{
					unk_0x36643EAE6212D16F(iParam0, 1);
				}
				unk_0x44EB7E24C5D75087(iVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0x570C394C1E0D8834(iVar25) && !unk_0x657B649BA2AD3582(iVar25, 0))
					{
						unk_0xD9FCA20C1C5553F7(iVar25);
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
			unk_0xF70DE7344EBF0825(iParam0, bParam1, iVar26);
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
	
	Global_2436169.f_1117 = 0;
	Global_2436169.f_1118 = 0;
	Global_2436169.f_1119 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2436169.f_1124 = -1;
	Global_2436169.f_1125 = 0;
	Global_2405047.f_2648 = { Var0 };
}

void func_84()
{
	Global_2405047.f_674 = 0;
	Global_2405047.f_2691 = 0;
	Global_2405047.f_507 = 0;
	Global_2405047.f_586 = 0;
	Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_222 = 0;
}

int func_85(int iParam0)
{
	int iVar0;
	
	if (unk_0x657B649BA2AD3582(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x2BBAA45ECDE3DAE2(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_86()
{
	return unk_0xB03A1684359C50A1(Global_2359302, 3);
}

bool func_87(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x8CFC7D6E1DA5D304())
	{
		bVar0 = func_88(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1595681[iParam0 /*678*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x4AF13BCD120BCDBC(iParam0))
		{
			bVar0 = unk_0x1BE7B010C9B9841E(iParam0) == 8;
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
	if (!func_92(Global_36794[iLocal_64 /*5*/].f_2))
	{
		return;
	}
	iVar0 = unk_0x61E9B3BFA06B017B(500, 3000);
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
	if (unk_0x0FAE113CE72ED842(Local_43.f_1))
	{
		if (unk_0x657B649BA2AD3582(Local_43.f_1, 0) || unk_0xDB5E52F2078862CA(Local_43.f_1))
		{
			return 0;
		}
		if (unk_0xBF9824979379E98D(Local_43.f_1))
		{
			return 0;
		}
		if (func_99(Local_43.f_1))
		{
			return 0;
		}
	}
	if (Global_36794[iLocal_64 /*5*/].f_3 < 3 && Global_36794[iLocal_64 /*5*/].f_3 != 0)
	{
		return 0;
	}
	if (Global_36794[iLocal_64 /*5*/].f_4 < 9 && Global_36794[iLocal_64 /*5*/].f_4 != 0)
	{
		return 0;
	}
	uVar1 = func_98(iParam0);
	if (unk_0xFAFFA408239A026B(uVar1))
	{
		return 0;
	}
	if (func_99(Local_43.f_1))
	{
		return 0;
	}
	unk_0x385AB5B1656B03B3(sVar1);
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
		if (!unk_0xFAFFA408239A026B(sVar2) && !unk_0xFAFFA408239A026B(sVar3))
		{
			unk_0x831CD0FBFB26EC7E(sVar2);
			while (!unk_0x028356968FDD2DF2(sVar2))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (!unk_0x0FAE113CE72ED842(Local_43.f_1))
			{
				unk_0xB5746603774C4C9D(Local_43.f_1, sVar2, sVar3, 1.5f, -1.5f, -1, 48, 0, 0, 0, 0);
				sLocal_54 = sVar3;
			}
		}
	}
	if (!unk_0x302010EE1D40EBC3(sVar1))
	{
		return 0;
	}
	if (unk_0x0FAE113CE72ED842(Local_43.f_1))
	{
		return 0;
	}
	unk_0x7DCD69F135A25F0E(Local_43.f_1, sVar1, 0.75f);
	if (unk_0xDBB3D0EFC8DECE3D() == 4)
	{
		unk_0x35BC95DF6955B51B(Local_43.f_1, "move_ped_strafing_firstperson@drunk");
	}
	unk_0x2CE89754501B1383(Local_43.f_1, 0, sVar1, "idle", 2f, 1);
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
			if (unk_0xEE1E09882FA264CA(Local_43.f_1))
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
			else if (unk_0xC1A23BED641FA58E(Local_43.f_1))
			{
				iVar4 = "FACIALS@GEN_MALE@BASE";
			}
			else
			{
				iVar4 = "FACIALS@GEN_FEMALE@BASE";
			}
			break;
	}
	unk_0x34361AF8000A26ED(Local_43.f_1, "mood_drunk_1", iVar4);
	unk_0xB05E48165A6F6058(Local_43.f_1, 200, 1);
	unk_0xB05E48165A6F6058(Local_43.f_1, 46, 1);
	unk_0x38ADC0C5F4F08C6D(Local_43.f_1, 0);
	unk_0x470C9634914699C0(Local_43.f_1, 262144, 1);
	unk_0x09F3609C5CB3B9BA(Local_43.f_1, 1);
	return 1;
}

bool func_93()
{
	return func_94(unk_0x8CFC7D6E1DA5D304());
}

int func_94(int iParam0)
{
	if (unk_0x4F69FBD64CDF125B(unk_0x6604E096142B4B55(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_95(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x657B649BA2AD3582(iParam0, 1) || unk_0xDB5E52F2078862CA(iParam0))
	{
		return 0;
	}
	if (unk_0x2BBAA45ECDE3DAE2(iParam0, -2017877118) != 7)
	{
		return 0;
	}
	if (unk_0x2BBAA45ECDE3DAE2(iParam0, 1785177548) != 7)
	{
		return 0;
	}
	if (unk_0xAADA5865C8BFAE94(iParam0))
	{
		return 0;
	}
	if (unk_0x2409C4B1759B2661(iParam0))
	{
		return 0;
	}
	if (unk_0x0B90D19A63676F41(iParam0))
	{
		return 0;
	}
	if (unk_0xDCAE40DC83E036DE(iParam0))
	{
		return 0;
	}
	if (Global_68213)
	{
		return 0;
	}
	if (func_97())
	{
		return 0;
	}
	if (iParam0 == unk_0x18F7BE9ACB7D08F4())
	{
		if (!unk_0xA165685D1FD363E1(unk_0x8CFC7D6E1DA5D304()))
		{
			return 0;
		}
		if (!unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304()))
		{
			return 0;
		}
		if (unk_0xE655C0A22E4886E8(unk_0x8CFC7D6E1DA5D304()) || unk_0x536B0B7C52D20BC8(unk_0x8CFC7D6E1DA5D304()))
		{
			return 0;
		}
		if (func_96())
		{
			return 0;
		}
	}
	Var0 = { unk_0xEF288D764F53C90C(iParam0) };
	if (unk_0xA8CEACB4F35AE058(Var0) >= (1f * 1f))
	{
		return 0;
	}
	return 1;
}

bool func_96()
{
	return Global_92881.f_316 > 0;
}

bool func_97()
{
	return unk_0x5AFB8ED811F05E4D() <= Global_17301.f_5745 + 100;
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
	if (unk_0xFAFFA408239A026B(Local_60.f_2))
	{
		if (unk_0xFAFFA408239A026B(uVar1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return unk_0x9D39145AD645E383(Local_60.f_2, sVar1);
}

int func_100(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!unk_0x31F12808DC47A9E5(iParam0))
	{
		return -1;
	}
	iVar0 = func_102(iParam0);
	iVar1 = func_101(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36794[iVar1 /*5*/].f_2;
}

int func_101(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36794[iVar0 /*5*/] == iParam0)
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
		if (iParam0 == Global_36794[iVar0 /*5*/].f_1)
		{
			return Global_36794[iVar0 /*5*/];
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
	if (unk_0x74C2FE037DFC8B4A(Local_43.f_4, 0))
	{
		return 0;
	}
	Var0 = { unk_0x761660F5CE986DC4(Local_43.f_1, 1) };
	Var3 = { unk_0x761660F5CE986DC4(Local_43.f_4, 1) };
	fVar6 = unk_0x15EE504466B7BBD3(Var0, Var3, 1);
	return fVar6 < 7f;
}

void func_106()
{
	int iVar0;
	char* sVar1;
	
	if (Local_43.f_1 == unk_0x18F7BE9ACB7D08F4())
	{
		unk_0x9C7EE7DE7041A3F4(0, 36, 1);
		if (unk_0x5F097B85CE09760A(Local_43.f_1))
		{
			if (Global_36794[iLocal_64 /*5*/].f_2 == 0 || Global_36794[iLocal_64 /*5*/].f_2 == 2)
			{
				unk_0xE560AD9B53AA9A85(Local_43.f_1, 0, 0);
			}
		}
		if (unk_0xEE46D335A57B8D7C(Local_43.f_1))
		{
			unk_0xB0F75D2CA4A879D1(Local_43.f_1, 0);
		}
	}
	if (Local_55.f_0 != -2)
	{
		if (Local_55.f_0 == -1)
		{
			if (Global_36794[iLocal_64 /*5*/].f_2 != 0)
			{
				Global_36794[iLocal_64 /*5*/].f_2 = 0;
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
			if (Global_36794[iLocal_64 /*5*/].f_2 == 0)
			{
				if (iVar0 < 30)
				{
					Global_36794[iLocal_64 /*5*/].f_2 = 2;
					if (!func_92(2))
					{
						Global_36794[iLocal_64 /*5*/].f_2 = 0;
						return;
					}
				}
			}
			if (Global_36794[iLocal_64 /*5*/].f_2 == 2)
			{
				if (iVar0 < 10)
				{
					Global_36794[iLocal_64 /*5*/].f_2 = 1;
					if (!func_92(2))
					{
						Global_36794[iLocal_64 /*5*/].f_2 = 2;
						return;
					}
				}
			}
			if (Global_36794[iLocal_64 /*5*/].f_2 == 1)
			{
			}
		}
	}
	else
	{
		return;
	}
	if (!unk_0xFAFFA408239A026B(sLocal_54))
	{
		if (!func_95(Local_43.f_1))
		{
			sVar1 = "MOVE_M@DRUNK@TRANSITIONS";
			if (unk_0xDFEB6D8BCE2B43F6(Local_43.f_1, sVar1, sLocal_54, 3))
			{
				unk_0xD68991AB42CA7042(Local_43.f_1, sVar1, sLocal_54, -4f);
			}
			sLocal_54 = "";
			return;
		}
	}
	if (Global_36794[iLocal_64 /*5*/].f_3 >= 10 || Global_36794[iLocal_64 /*5*/].f_4 >= 15)
	{
		if (unk_0x2BBAA45ECDE3DAE2(Local_43.f_1, 1785177548) == 1)
		{
			return;
		}
		if (unk_0x536C7C563A70D9F4(Local_43.f_1))
		{
			return;
		}
		if (unk_0x657B649BA2AD3582(Local_43.f_1, 1))
		{
			if (Global_36794[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_36794[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_36794[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_36794[iLocal_64 /*5*/].f_4 = 14;
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
	
	if (!unk_0x1A7B277A2CBA7ADF(Local_43.f_1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = unk_0x5AD687C3474F04B4(Local_43.f_1, 0);
	if (!unk_0xC4B84EB67F78C1F0(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0x4983F8C51A0C0AF3(iVar0, -1, 0) == Local_43.f_1)
	{
		return 0;
	}
	Local_43.f_4 = iVar0;
	Local_60.f_0 = 7;
	return 1;
}

void func_108()
{
	if (!unk_0x657B649BA2AD3582(Local_43.f_1, 0))
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
	if (!unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		return;
	}
	if (!unk_0x1A7B277A2CBA7ADF(unk_0x18F7BE9ACB7D08F4()))
	{
		return;
	}
	if (unk_0xAAC7941A7E0EE97A(unk_0x8CFC7D6E1DA5D304(), 0))
	{
		return;
	}
	iVar0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
	fVar1 = unk_0x2A72627520A107B5(iVar0);
	if (fVar1 < 5f)
	{
		return;
	}
	Var2 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
	Var5 = { Var2 - Vector(3f, 30f, 30f) };
	Var8 = { Var2 + Vector(3f, 30f, 30f) };
	if (!unk_0x11926157C97C483E(Var5, Var8) && !unk_0xE475B18FD1B87E1E(Var5, Var8))
	{
		return;
	}
	unk_0x77E9D78B235BDEFB(unk_0x8CFC7D6E1DA5D304(), 1, 0);
	unk_0xE223A1A4864F355C(unk_0x8CFC7D6E1DA5D304(), 0);
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
	if (unk_0x657B649BA2AD3582(Local_43.f_1, 0))
	{
		iVar1 = unk_0x5AD687C3474F04B4(Local_43.f_1, 0);
		iVar2 = unk_0x4983F8C51A0C0AF3(iVar1, -1, 0);
		if (!iVar2 == Local_43.f_1)
		{
			return;
		}
		if (unk_0x44243F2E2F58B8E3() && !unk_0x1800B99666D25740(iVar1))
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!unk_0x18F7BE9ACB7D08F4() == Local_43.f_1)
	{
		return;
	}
	else if (!unk_0xDBB3D0EFC8DECE3D() == 4)
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
	if (unk_0xB6C2454233C8F532(iVar0))
	{
		Local_55.f_4 = unk_0x83666F9FB8FEBD4B() + 2000;
	}
	else
	{
		Local_55.f_4 = unk_0x83666F9FB8FEBD4B() + 1000;
	}
	fVar3 = unk_0x2A72627520A107B5(iVar0);
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
	
	fVar0 = unk_0x3D81861E1A1652A9(-fParam1, fParam1);
	fVar1 = unk_0x3D81861E1A1652A9(0f, fParam2);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 - fVar1);
	}
	else
	{
		fVar0 = (fVar0 + fVar1);
	}
	if (unk_0xB6C2454233C8F532(iParam0))
	{
		if (unk_0xAE8B7AC0DA6122BC(unk_0x6DE4035D8BAB73B4(iParam0)))
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
		iVar2 = unk_0x4F69FBD64CDF125B(iParam0);
		if (unk_0x422717A3330EA45D(iVar2))
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
	if (unk_0x44243F2E2F58B8E3() && !unk_0x1800B99666D25740(iParam0))
	{
		return;
	}
	if (unk_0xB6C2454233C8F532(iParam0))
	{
		unk_0x3636A645606A8A59(unk_0x6DE4035D8BAB73B4(iParam0), fParam1);
	}
	else if (unk_0x978B4E1292EBBE41(iParam0))
	{
		unk_0x0A505456726E0EB0(unk_0x00ABCA0241A97143(iParam0), fParam1);
	}
}

void func_113()
{
	int iVar0;
	
	if (!unk_0x657B649BA2AD3582(Local_43.f_1, 0))
	{
		Local_60.f_0 = 4;
		return;
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		if (Global_36794[iLocal_64 /*5*/].f_3 >= 10 || Global_36794[iLocal_64 /*5*/].f_4 >= 15)
		{
			if (Global_36794[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_36794[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_36794[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_36794[iLocal_64 /*5*/].f_4 = 14;
			}
		}
	}
	if (bLocal_50)
	{
		return;
	}
	iVar0 = unk_0x5AD687C3474F04B4(Local_43.f_1, 0);
	if (!unk_0xC4B84EB67F78C1F0(iVar0, 0))
	{
		unk_0x5941F8B2A813BBA8(Local_43.f_1, 0, 0);
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
	iVar0 = unk_0x2BBAA45ECDE3DAE2(unk_0x18F7BE9ACB7D08F4(), 355471868);
	if (!iVar0 == 7)
	{
		Local_55.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
		return;
	}
	if (!unk_0x657B649BA2AD3582(Local_43.f_1, 0))
	{
		Local_60.f_0 = 4;
		Local_55.f_3 = -2;
		return;
	}
	iVar1 = unk_0x5AD687C3474F04B4(Local_43.f_1, 0);
	iVar2 = unk_0x4983F8C51A0C0AF3(iVar1, -1, 0);
	if (iVar2 == Local_43.f_1)
	{
		func_115();
		Local_55.f_3 = -2;
		return;
	}
	unk_0x5C5C969498EE7548(Local_43.f_1, iVar1, 0);
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
	if (unk_0x1A7B277A2CBA7ADF(Local_43.f_1))
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
	if (bVar1 || unk_0x1A7B277A2CBA7ADF(Local_43.f_1))
	{
		if (!bLocal_50)
		{
		}
		iVar0 = unk_0x5AD687C3474F04B4(Local_43.f_1, 0);
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
				unk_0x5941F8B2A813BBA8(Local_43.f_1, 0, 0);
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
		iVar2 = unk_0x4983F8C51A0C0AF3(Local_43.f_4, -1, 0);
		if (iVar2 == Local_43.f_1)
		{
			func_115();
			return;
		}
		unk_0x5C5C969498EE7548(Local_43.f_1, iVar0, 0);
		Local_60.f_0 = 9;
		Local_55.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
		return;
	}
	if (!func_105())
	{
		unk_0x267F7A2DFDFFB077(Local_43.f_1);
		Local_60.f_0 = 4;
		return;
	}
	if (!bLocal_50)
	{
		iVar3 = unk_0x2BBAA45ECDE3DAE2(Local_43.f_1, -1794415470);
		if (iVar3 == 7)
		{
			if (!unk_0x657B649BA2AD3582(Local_43.f_1, 0))
			{
				unk_0x267F7A2DFDFFB077(Local_43.f_1);
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
	if (!unk_0xC4B84EB67F78C1F0(Local_43.f_4, 0))
	{
		Local_43.f_4 = 0;
		Local_60.f_0 = 4;
		return;
	}
	Var0 = { unk_0x761660F5CE986DC4(Local_43.f_1, 1) };
	Var3 = { unk_0x761660F5CE986DC4(Local_43.f_4, 1) };
	fVar6 = unk_0x15EE504466B7BBD3(Var0, Var3, 1);
	if (fVar6 > 3f)
	{
		if (!func_92(Global_36794[iLocal_64 /*5*/].f_2))
		{
			Local_60.f_0 = 12;
			return;
		}
		Local_60.f_0 = 5;
		Local_55.f_2 = unk_0x83666F9FB8FEBD4B() + 2000;
		return;
	}
	iVar7 = unk_0xE4752B503DF3FEC0(Local_43.f_4);
	iVar8 = 0;
	bVar9 = true;
	iVar8 = 1;
	while (bVar9)
	{
		if (iVar8 < iVar7)
		{
			if (unk_0x74B8CA477787A438(Local_43.f_4, iVar8, 0))
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
	unk_0xFDBDFC454E44A5BF(Local_43.f_1, Local_43.f_4, -1, iVar8, 1073741824, 1, 0);
	Local_60.f_0 = 7;
}

void func_119()
{
	if (!unk_0x31F12808DC47A9E5(Local_43.f_1))
	{
		return;
	}
	if (!unk_0x0FAE113CE72ED842(Local_43.f_1))
	{
		unk_0xE32626D0E44BC8F1(Local_43.f_1, 1048576000);
		unk_0x1C93BE92DFE822A0(Local_43.f_1);
		unk_0x0DC92B9260EBB221(Local_43.f_1, 0, -1056964608);
		Local_60.f_2 = "";
		unk_0x22DBDF4F57796736(Local_43.f_1);
		unk_0xB05E48165A6F6058(Local_43.f_1, 200, 0);
		unk_0xB05E48165A6F6058(Local_43.f_1, 46, 0);
		unk_0x38ADC0C5F4F08C6D(Local_43.f_1, 1);
		unk_0x470C9634914699C0(Local_43.f_1, 262144, 0);
		unk_0x09F3609C5CB3B9BA(Local_43.f_1, 0);
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
	unk_0xE32626D0E44BC8F1(uParam0, 1048576000);
	unk_0x0DC92B9260EBB221(uParam0, 0, -1056964608);
	unk_0xB05E48165A6F6058(uParam0, 200, 0);
	unk_0x38ADC0C5F4F08C6D(iParam0, 1);
	unk_0x470C9634914699C0(iParam0, 262144, 0);
	unk_0x09F3609C5CB3B9BA(iParam0, 0);
}

void func_123()
{
	int iVar0;
	
	if (Local_55.f_0 == -1)
	{
		Global_36794[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36794[iLocal_64 /*5*/].f_3 < 3 && Global_36794[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_36794[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_36794[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_36794[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_36794[iLocal_64 /*5*/].f_2 = 1;
		}
	}
	if (unk_0x657B649BA2AD3582(Local_43.f_1, 0))
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
	if (!func_92(Global_36794[iLocal_64 /*5*/].f_2))
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
		iVar0 = Global_36875[iVar1 /*5*/].f_2;
		if (!iVar0 == 6)
		{
			if (Global_36875[iVar1 /*5*/].f_1 == iLocal_48)
			{
				func_127(iVar1);
				func_126(iVar1);
			}
			else if (Global_36875[iVar1 /*5*/].f_1 == 2)
			{
				if (!iLocal_49 == -1)
				{
					if (iLocal_49 == Global_36875[iVar1 /*5*/])
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
	Global_36875[iParam0 /*5*/] = -1;
	Global_36875[iParam0 /*5*/].f_1 = -1;
	Global_36875[iParam0 /*5*/].f_2 = 6;
	Global_36875[iParam0 /*5*/].f_3 = 0;
	Global_36875[iParam0 /*5*/].f_4 = 0;
}

void func_127(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_36875[iParam0 /*5*/].f_2;
	switch (iVar0)
	{
		case 1:
			func_148();
			break;
		
		case 2:
			func_131(Global_36875[iParam0 /*5*/].f_4);
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
	
	Global_36794[iLocal_64 /*5*/].f_4++;
	if (Local_55.f_0 == -1)
	{
		Global_36794[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36794[iLocal_64 /*5*/].f_4 < 9 && Global_36794[iLocal_64 /*5*/].f_4 != 0)
	{
		Global_36794[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_36794[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_36794[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_36794[iLocal_64 /*5*/].f_2 = 1;
		}
		if (!func_99(Local_43.f_1))
		{
			func_92(Global_36794[iLocal_64 /*5*/].f_2);
		}
	}
}

void func_130()
{
	int iVar0;
	
	Global_36794[iLocal_64 /*5*/].f_3++;
	if (Local_55.f_0 == -1)
	{
		Global_36794[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36794[iLocal_64 /*5*/].f_3 < 3 && Global_36794[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_36794[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_36794[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_36794[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_36794[iLocal_64 /*5*/].f_2 = 1;
		}
		if (!func_99(Local_43.f_1))
		{
			func_92(Global_36794[iLocal_64 /*5*/].f_2);
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
		iLocal_63 = unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304());
		return;
	}
	iVar0 = unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304());
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
		if (iParam0 == Global_36875[iVar0 /*5*/])
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
	if (!unk_0x74C2FE037DFC8B4A(Local_43.f_1, 0))
	{
		if (unk_0x1A7B277A2CBA7ADF(Local_43.f_1))
		{
			Local_60.f_0 = 10;
		}
	}
	if (bLocal_50)
	{
		func_139();
		func_8(71, 1);
		if (unk_0x44243F2E2F58B8E3())
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
			unk_0xD194C635833AC189(joaat("sp0_sp_num_times_drunk"), &iVar2, -1);
			unk_0xD194C635833AC189(joaat("sp1_sp_num_times_drunk"), &iVar3, -1);
			unk_0xD194C635833AC189(joaat("sp2_sp_num_times_drunk"), &iVar4, -1);
			iVar5 = ((iVar2 + iVar3) + iVar4);
			iVar6 = (iVar5 / 10) + 1 * 10;
			if (iVar5 + 1 >= iVar6)
			{
				func_137(iVar6);
			}
			switch (func_57())
			{
				case 0:
					unk_0xD92C8D8AF3C67820(joaat("sp0_sp_num_times_drunk"), iVar2 + 1, 1);
					break;
				
				case 1:
					unk_0xD92C8D8AF3C67820(joaat("sp1_sp_num_times_drunk"), iVar3 + 1, 1);
					break;
				
				case 2:
					unk_0xD92C8D8AF3C67820(joaat("sp2_sp_num_times_drunk"), iVar4 + 1, 1);
					break;
				}
		}
		Local_60.f_1 = 1;
		return;
	}
	Local_60.f_1 = 12;
	if (Local_55.f_0 == -1)
	{
		Global_36794[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36794[iLocal_64 /*5*/].f_3 < 3 && Global_36794[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_36794[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar7 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar7 <= 0)
		{
			iVar7 = 0;
		}
		iVar7 = (iVar7 / 1000) + 1;
		Global_36794[iLocal_64 /*5*/].f_2 = 0;
		if (iVar7 < 30)
		{
			Global_36794[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar7 < 10)
		{
			Global_36794[iLocal_64 /*5*/].f_2 = 1;
		}
	}
}

void func_137(int iParam0)
{
	int iVar0;
	
	iVar0 = func_138(81);
	Global_2413933[iVar0 /*83*/] = 81;
	Global_2413933[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2413933[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_138(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2413933[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2413933[iVar1 /*83*/] == 0)
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
	Global_36875[iVar0 /*5*/] = iParam0;
	Global_36875[iVar0 /*5*/].f_1 = iParam1;
	Global_36875[iVar0 /*5*/].f_2 = iParam2;
	Global_36875[iVar0 /*5*/].f_3 = iParam3;
	Global_36875[iVar0 /*5*/].f_4 = iParam4;
}

int func_143()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36875[iVar0 /*5*/].f_2 == 6)
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
		if (iParam2 == Global_36875[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36875[iVar0 /*5*/])
			{
				if (iParam1 == Global_36875[iVar0 /*5*/].f_1)
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
	if (Local_43.f_1 == unk_0x18F7BE9ACB7D08F4())
	{
		bLocal_50 = true;
		Global_36990 = 1;
		Global_36992++;
	}
	if (!unk_0x74C2FE037DFC8B4A(Local_43.f_1, 0))
	{
		iVar0 = func_60(Local_43.f_1);
		switch (iVar0)
		{
			case 17:
				unk_0x2F51E4FCC3B20959(Local_43.f_1, "AMANDA_DRUNK");
				break;
			
			case 19:
				unk_0x2F51E4FCC3B20959(Local_43.f_1, "LAMAR_DRUNK");
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
		if (!unk_0x74C2FE037DFC8B4A(Local_43.f_1, 0))
		{
			iVar0 = func_60(Local_43.f_1);
			if (Global_36794[iLocal_64 /*5*/].f_4 > 0)
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
					unk_0x2F51E4FCC3B20959(Local_43.f_1, "AMANDA_NORMAL");
					break;
				
				case 19:
					unk_0x2F51E4FCC3B20959(Local_43.f_1, "LAMAR_NORMAL");
					break;
				}
			}
	}
	func_119();
	if (bLocal_50)
	{
		Global_36990 = 0;
	}
	func_149();
	unk_0x334F1DD67B2EC86A(func_98(0));
	unk_0x334F1DD67B2EC86A(func_98(2));
	unk_0x334F1DD67B2EC86A(func_98(1));
	Global_1803992 = 0;
	if (unk_0xE7FAF8E78F7D3A73(joaat("appemail")) > 0)
	{
		func_33(0);
	}
	unk_0x810C5D6462DD69E6();
}

void func_149()
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (unk_0x74C2FE037DFC8B4A(Local_43.f_1, 0))
	{
		return;
	}
	uVar0 = Local_43.f_1;
	if (unk_0x657B649BA2AD3582(Local_43.f_1, 0))
	{
		uVar1 = unk_0x5AD687C3474F04B4(Local_43.f_1, 0);
		iVar2 = unk_0x4983F8C51A0C0AF3(uVar1, -1, 0);
		if (!Local_43.f_1 == iVar2)
		{
			return;
		}
		uVar0 = iVar1;
	}
	else if (!unk_0xDBB3D0EFC8DECE3D() == 4 || !unk_0x18F7BE9ACB7D08F4() == Local_43.f_1)
	{
		return;
	}
	fLocal_53 = 0f;
	func_112(uVar0, 0f);
}

void func_150(var uParam0, char* sParam1, int iParam2)
{
	unk_0x729C5B8455454944(uParam0, sParam1, func_151(iParam2), 1);
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

