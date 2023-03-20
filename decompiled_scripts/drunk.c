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
	if (unk_0x524AF15206846700(2))
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
		if ((unk_0x0E063DDE8855EC52() && !unk_0x9404B1BCD022816B()) && !func_5())
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
	Global_2434762.f_631 = 1;
}

var func_3()
{
	return Global_2434762.f_610;
}

bool func_4()
{
	return unk_0xF426A5DE932B3BEE(Global_2434762.f_2, 11);
}

bool func_5()
{
	return unk_0xF426A5DE932B3BEE(Global_2435528.f_1.f_2809, 3);
}

void func_6()
{
	bool bVar0;
	
	if (unk_0x2006A8C1BA2AFE80(Local_43.f_1, 0))
	{
		func_131();
	}
	if (bLocal_50)
	{
		if (!unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
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
	
	unk_0x38F6653421072183(Local_43.f_1, 3000, 3500, 0, 1, 1, 0);
	Global_1724571 = 1;
	if (!unk_0x3934E959DB2478D3())
	{
		unk_0x4E63F662FDE672C3(2500);
		while (unk_0xA07829C3F763B9B6())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (unk_0x0E063DDE8855EC52())
	{
		func_64(unk_0x4D29100D094E5511(), 0, 57344);
		Global_2404956.f_1669 = 1;
		if (unk_0x14B5449970A1C2DA(unk_0x4D29100D094E5511(), 0))
		{
			Global_2404956.f_1670 = 1;
		}
		else
		{
			Global_2404956.f_1670 = 0;
		}
		if (unk_0xD47A0DE770BBA7A6())
		{
			unk_0x8DC163BE005C64EB(0);
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
	if (!unk_0x2006A8C1BA2AFE80(Local_43.f_1, 0))
	{
		unk_0x4EEE9D9427E70F4E(Local_43.f_1, Var1.f_5, 1, 0, 0, 1);
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
	if (Global_51491[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x0E063DDE8855EC52())
	{
		return;
	}
	if (Global_51491[iParam0 /*7*/])
	{
		unk_0xD0D748C6C14C0E92(Global_51491[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0xE2A8B026FA4DDFFF(Global_51491[iParam0 /*7*/].f_1, iVar0, 1);
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
	unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), false, 0);
	if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
	{
		unk_0xDC994C828DF12354(unk_0x27D769C59BC9D030(), 1);
	}
	unk_0x19FAF10EF91E58C1(uParam1->f_5, 4500f);
	unk_0x14EA3066FD050C45(uParam1->f_5, 4500f);
	unk_0xEFA71310CAEBAE1F(uParam1->f_5, 5f, 1, 0, 0, 0);
	unk_0x4EEE9D9427E70F4E(unk_0x27D769C59BC9D030(), uParam1->f_5, 1, 0, 0, 1);
	unk_0xA8CA82EB31D1626F(unk_0x27D769C59BC9D030(), true);
	unk_0x4EDE34FBADD967A6(0);
	unk_0x42B9806B3EED4C70(1);
	unk_0x88172B3983EC5071(*uParam1);
	if (unk_0x75CB9E30BA492FF0(uParam1->f_16))
	{
	}
	else
	{
		unk_0x88172B3983EC5071(uParam1->f_16);
	}
	if (!unk_0x3934E959DB2478D3())
	{
		unk_0x4E63F662FDE672C3(0);
	}
	func_47(uParam1->f_5, uParam1->f_8.f_2, 0, 1);
	if (!unk_0x3934E959DB2478D3())
	{
		unk_0x4E63F662FDE672C3(0);
	}
	iVar1 = unk_0xA0F74982C6AAA9D4() + 20000;
	bVar2 = false;
	uParam1->f_33 = 0;
	while (!bVar2 && iVar1 > unk_0xA0F74982C6AAA9D4())
	{
		bVar2 = true;
		unk_0x88172B3983EC5071(*uParam1);
		if (!unk_0x482101C9B3483958(*uParam1))
		{
			bVar2 = false;
		}
		if (!unk_0x75CB9E30BA492FF0(uParam1->f_16))
		{
			unk_0x88172B3983EC5071(uParam1->f_16);
			if (!unk_0x482101C9B3483958(uParam1->f_16))
			{
				bVar2 = false;
			}
		}
		if (!unk_0x3934E959DB2478D3())
		{
			unk_0x4E63F662FDE672C3(0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_44();
	if (!func_43(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		unk_0x696F8E0D51625508(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 0, 1);
		unk_0xC972AA2C9F94741D(uParam1->f_5 + uParam1->f_19, (unk_0x652D2EEEF1D3E62C(uParam1->f_22) + 25f), 0, 0, 0, 0, 0);
		unk_0xEFA71310CAEBAE1F(uParam1->f_5 + uParam1->f_19, (unk_0x652D2EEEF1D3E62C(uParam1->f_22) + 25f), 1, 0, 0, 0);
	}
	if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
	{
		unk_0x99542B3CBA8A014E(unk_0x4D29100D094E5511());
		unk_0xCA26676919C42B5B(unk_0x27D769C59BC9D030(), joaat("weapon_unarmed"), 1);
		unk_0x09D2BE36C9D2B76F(unk_0x27D769C59BC9D030());
	}
	unk_0xA8CA82EB31D1626F(unk_0x27D769C59BC9D030(), false);
	unk_0x42B9806B3EED4C70(0);
	unk_0xEFA71310CAEBAE1F(uParam1->f_5, 15f, 1, 0, 0, 0);
	unk_0xD6217559B8657592();
	unk_0x1706FDF91A29B76C();
	func_41();
	while (func_40())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0xCBB243DDC0D132D1() && !unk_0xF1384D7CDC020749())
	{
		unk_0x4AD174B0D4656163(250);
	}
	unk_0xFB56942BE14F95CB(1);
	if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
	{
		iVar4 = unk_0x239E9E07DB537DC9(uParam1->f_5, uParam1->f_8, 2);
		unk_0x83F6408A7221E25B(iVar4, 0);
		unk_0xEFED6B9FF91F059D(iVar4, 0);
		uVar5 = unk_0x3A5E675E99CE82DC("DEFAULT_ANIMATED_CAMERA", 1);
		iVar6 = 4;
		if (uParam1->f_4 != joaat("MotionState_Idle"))
		{
			iVar6 |= 2;
		}
		func_38(unk_0x27D769C59BC9D030(), uParam1->f_18);
		unk_0x98E2FD5DA7CF97D3(unk_0x27D769C59BC9D030(), iVar4, *uParam1, uParam1->f_1, 1000f, -1.5f, iVar6, 0, 1148846080, 0);
		unk_0x97A8B61730D37E1E(unk_0x27D769C59BC9D030(), 1);
		unk_0xC6627CD8969F3282(unk_0x4D29100D094E5511(), 1);
		iVar3 = unk_0xFDDCAD4A466C9A0B(unk_0x27D769C59BC9D030(), 77);
		unk_0xC908FA7A5EBB2825(unk_0x27D769C59BC9D030(), 77, 1);
		unk_0x5FEC4EB24E8C1ADE(uVar5, iVar4, uParam1->f_2, *uParam1);
		unk_0x04E786541E35ECB1(1, 0, 3000, 1, 0, 0);
		if (!unk_0x75CB9E30BA492FF0(uParam1->f_16) && !unk_0x75CB9E30BA492FF0(uParam1->f_17))
		{
			unk_0x878D12AEFBF5BAF0(unk_0x27D769C59BC9D030(), uParam1->f_16, uParam1->f_17, 1000f, -1.5f, 10000, 33, 0, 0, 0, 0);
		}
	}
	else
	{
		iVar4 = -1;
	}
	if (!uParam1->f_25)
	{
		if (!unk_0x75CB9E30BA492FF0(sParam2))
		{
			func_37(sParam2, -1);
			uParam1->f_25 = 1;
		}
	}
	bVar7 = false;
	bVar8 = false;
	uVar9 = 16;
	if (!unk_0x75CB9E30BA492FF0(&(uParam1->f_11)))
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
		func_36(&uVar9, iVar175, unk_0x27D769C59BC9D030(), sVar176, 0, 1);
	}
	if (unk_0xC2AE0A979757C34A(iVar4))
	{
		sVar177 = "WalkInterruptible";
		sVar178 = "ForceBlendout";
		while (unk_0xC2AE0A979757C34A(iVar4) && !unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
		{
			if (!bVar8)
			{
				if (!unk_0x3934E959DB2478D3())
				{
					if (!unk_0x75CB9E30BA492FF0(uParam1->f_26))
					{
						unk_0xEC04D6F4A1ED71ED(uParam1->f_26, 0, 0);
						bVar8 = true;
					}
					if (!unk_0x75CB9E30BA492FF0(uParam1->f_27))
					{
						if (!unk_0x75CB9E30BA492FF0(uParam1->f_28))
						{
							unk_0x954BCDB8FDB0AC0F(-1, uParam1->f_28, uParam1->f_27, 0);
							bVar8 = true;
						}
						if (!unk_0x75CB9E30BA492FF0(uParam1->f_29))
						{
							unk_0x954BCDB8FDB0AC0F(-1, uParam1->f_29, uParam1->f_27, 0);
							bVar8 = true;
						}
					}
				}
			}
			unk_0xC5EB6DE147B611C7();
			unk_0x28981D48C12CB95E(18);
			unk_0x7DAA24C67DFE502F();
			func_32();
			iVar179 = unk_0xA0F74982C6AAA9D4();
			if (iVar179 >= (Global_36262 - 500))
			{
				func_31(4000);
			}
			fVar180 = -1f;
			fVar181 = -1f;
			fVar0 = unk_0xB3BBF60126795AAD(iVar4);
			if (!unk_0x75CB9E30BA492FF0(&(uParam1->f_11)))
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
			if (unk_0x8C819425CC4D7DD4(unk_0x27D769C59BC9D030(), unk_0x70ABFF261710305D(sVar177)))
			{
				iVar183 = (unk_0x32BCD40DD9A8C4D3(2, 195) - 128);
				iVar184 = (unk_0x32BCD40DD9A8C4D3(2, 196) - 128);
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
			if (unk_0x6A60A80D676F74A7() == 4 && uParam1->f_52 > 0f)
			{
				if (fVar0 >= uParam1->f_52)
				{
					if (!uParam1->f_32)
					{
						fVar185 = 1.5f;
						Var186 = { unk_0xBA52BEE23FDD4B7C() };
						Var189 = { unk_0x52AB056B2AF7BB53(unk_0x27D769C59BC9D030(), 31086, 0f, 0f, 0f) };
						fVar192 = unk_0x676D4CD42E0837CA(Var186, Var189, 1);
						fVar185 = func_18(fVar185, 0.001f, (fVar192 - 0.75f));
						if (fVar185 < 0f)
						{
							fVar185 = 0.001f;
						}
						func_17(&(uParam1->f_34), unk_0x27D769C59BC9D030(), func_57(), 1E-06f, 300, 300, 0, 0, 1045220557);
						func_16(&(uParam1->f_34), uParam1->f_53);
						if (!uParam1->f_33)
						{
							uParam1->f_34 = 1;
							uParam1->f_34.f_7 = unk_0xA0F74982C6AAA9D4();
							uParam1->f_34.f_8 = 0;
							uParam1->f_33 = 1;
						}
						if (uParam1->f_57 == 999f)
						{
							uParam1->f_56 = 0f;
						}
						if (uParam1->f_57 == 999f)
						{
							Var195 = { unk_0x9D0B637AD4927B0F(2) };
							uVar198 = unk_0x4D6B971C8AEE130C(unk_0x27D769C59BC9D030());
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
						unk_0x4523FDDB9926E1D8(fVar193, 1065353216);
						unk_0x0B28AEB595CB09AF(fVar194);
						unk_0x897AB63B69C06A1D(fVar193);
						unk_0xDB2C4154EE8453D9(fVar194);
						Var201 = { unk_0xBA52BEE23FDD4B7C() };
						Var204 = { unk_0xDD23360B0FA2E0E2() };
						fVar207 = unk_0x676D4CD42E0837CA(Var201, Var204, 1);
						iVar208 = unk_0xF2DB717A73826179((fVar207 * 1000f));
						uParam1->f_32 = 1;
					}
					if (uParam1->f_32)
					{
						unk_0x2723AEB7C6F73288();
						if (func_13(&(uParam1->f_34), 1, 1, 1, 0, 0, 0))
						{
						}
					}
				}
			}
			if (unk_0x8C819425CC4D7DD4(unk_0x27D769C59BC9D030(), unk_0x70ABFF261710305D(sVar178)) || iVar182)
			{
				if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
				{
					unk_0xF156AA2A744B309E(unk_0x27D769C59BC9D030());
					switch (uParam1->f_4)
					{
						case joaat("MotionState_Idle"):
							unk_0x9B6055629FB6CC23(unk_0x27D769C59BC9D030(), joaat("MotionState_Idle"), 1, 0, 0);
							unk_0xE4C30F469371ABE1(0, 0, 3, 0);
							break;
						
						case joaat("MotionState_Walk"):
							unk_0x9B6055629FB6CC23(unk_0x27D769C59BC9D030(), joaat("MotionState_Walk"), 1, 0, 0);
							unk_0x78779DB5F29147EE(unk_0x4D29100D094E5511(), 1f, 500, 0, 1, 0);
							if (unk_0x6A60A80D676F74A7() != 4)
							{
								if (uParam1->f_31 == 999f)
								{
									uParam1->f_30 = 0f;
								}
								if (uParam1->f_31 == 999f)
								{
									Var211 = { unk_0x9D0B637AD4927B0F(2) };
									uVar214 = unk_0x4D6B971C8AEE130C(unk_0x27D769C59BC9D030());
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
								unk_0x4523FDDB9926E1D8(fVar209, 1065353216);
								unk_0x0B28AEB595CB09AF(fVar210);
								Var217 = { unk_0xBA52BEE23FDD4B7C() };
								Var220 = { unk_0xDD23360B0FA2E0E2() };
								fVar223 = unk_0x676D4CD42E0837CA(Var217, Var220, 1);
								iVar224 = unk_0xF2DB717A73826179((fVar223 * 1000f));
								unk_0x04E786541E35ECB1(0, 1, iVar224, 0, 0, 0);
							}
							break;
						
						default:
							break;
					}
					if (unk_0xC2AE0A979757C34A(iVar4))
					{
						unk_0x2C463497D9FB00B0(iVar4);
						iVar4 = -1;
					}
				}
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (!func_43(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		unk_0x440E2095CD95D710(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 1);
	}
	unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), true, 0);
	if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
	{
		unk_0xF156AA2A744B309E(unk_0x27D769C59BC9D030());
	}
	bVar225 = unk_0x2ABDED714CA46493();
	bVar226 = false;
	if (uParam1->f_32)
	{
		unk_0x2723AEB7C6F73288();
		if (!func_13(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
		{
			bVar226 = true;
		}
	}
	if (bVar225 || bVar226)
	{
		while ((bVar225 || bVar226) && !unk_0x5D293E404CA20AA5())
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
			bVar225 = unk_0x2ABDED714CA46493();
			bVar226 = false;
			if (uParam1->f_32)
			{
				unk_0x2723AEB7C6F73288();
				if (!func_13(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
				{
					bVar226 = true;
				}
			}
		}
	}
	if (!unk_0x75CB9E30BA492FF0(uParam1->f_16))
	{
		unk_0x651E63BA2F4975EC(uParam1->f_16);
	}
	unk_0x651E63BA2F4975EC(*uParam1);
	unk_0x1D1A369233055AEC(uVar5, 0);
	func_10(&(uParam1->f_34));
	if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
	{
		unk_0xC908FA7A5EBB2825(unk_0x27D769C59BC9D030(), 77, iVar3);
		unk_0xDC994C828DF12354(unk_0x27D769C59BC9D030(), 0);
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
	if (unk_0x54DA78A82349F5AC(uParam0->f_1))
	{
		unk_0x1D1A369233055AEC(uParam0->f_1, 0);
	}
	if (unk_0x54DA78A82349F5AC(uParam0->f_2))
	{
		unk_0x1D1A369233055AEC(uParam0->f_2, 0);
	}
	if (unk_0x54DA78A82349F5AC(uParam0->f_3))
	{
		unk_0x1D1A369233055AEC(uParam0->f_3, 0);
	}
	if (unk_0x54DA78A82349F5AC(uParam0->f_4))
	{
		unk_0x1D1A369233055AEC(uParam0->f_4, 0);
	}
}

void func_12(int iParam0, int iParam1, int iParam2)
{
	unk_0xCFF471245AFEEDCE(iParam0, iParam1, 1);
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
			if (!unk_0x2006A8C1BA2AFE80(uParam0->f_5, 0))
			{
				func_11(uParam0);
				Var0 = { unk_0xBA52BEE23FDD4B7C() };
				if (bParam1)
				{
					Var0 = { Var0 + unk_0x73A52F9295BA1599(uParam0->f_5) * FtoV(unk_0xFF104D8C26C113A2()) };
				}
				Var3 = { unk_0x7CECDDECF10DF2AA(uParam0->f_5, Var0) };
				Var6 = { unk_0x9D0B637AD4927B0F(2) };
				Var9 = { Var6 + uParam0->f_9 };
				Var12 = { Var9 - unk_0x9A98AE1D9D8DEF06(uParam0->f_5, 2) };
				Var15 = { (-unk_0x0BADBFA3B172435F(Var9.f_2) * unk_0xD0FFB162F40A139C(Var9.f_0)), (unk_0xD0FFB162F40A139C(Var9.f_2) * unk_0xD0FFB162F40A139C(Var9.f_0)), unk_0x0BADBFA3B172435F(Var9.f_0) };
				Var18 = { (-unk_0x0BADBFA3B172435F(Var12.f_2) * unk_0xD0FFB162F40A139C(Var12.f_0)), (unk_0xD0FFB162F40A139C(Var12.f_2) * unk_0xD0FFB162F40A139C(Var12.f_0)), unk_0x0BADBFA3B172435F(Var12.f_0) };
				uVar21 = unk_0x64F087E24E3C699F();
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = unk_0xD8475FDA60C29E40(1775630800, 0);
				}
				uParam0->f_1 = unk_0xD8475FDA60C29E40(26379945, 1);
				if (bParam1)
				{
					unk_0x9A0D3C5EF599DE42(uParam0->f_1, uParam0->f_5, Var3, 1);
				}
				else
				{
					unk_0xA76CE456B0AC525B(uParam0->f_1, Var0);
				}
				unk_0xDA9442DEE6F3003E(uParam0->f_1, Var6, 2);
				unk_0x1FCE0CA03A463A36(uParam0->f_1, uVar21);
				uParam0->f_2 = unk_0xD8475FDA60C29E40(26379945, 1);
				if (bParam1 && !bParam4)
				{
					unk_0x9A0D3C5EF599DE42(uParam0->f_2, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12), 1);
				}
				else
				{
					unk_0xA76CE456B0AC525B(uParam0->f_2, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12));
				}
				unk_0xDA9442DEE6F3003E(uParam0->f_2, Var6, 2);
				unk_0x1FCE0CA03A463A36(uParam0->f_2, uVar21);
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = unk_0xD8475FDA60C29E40(26379945, 1);
					if (bParam1 && !bParam4)
					{
						unk_0x9A0D3C5EF599DE42(uParam0->f_4, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13), 1);
					}
					else
					{
						unk_0xA76CE456B0AC525B(uParam0->f_4, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13));
					}
					unk_0xDA9442DEE6F3003E(uParam0->f_4, Var6, 2);
					unk_0x1FCE0CA03A463A36(uParam0->f_4, uVar21);
				}
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					unk_0x2A932881B64740C0(uParam0->f_3, uParam0->f_1, 0, 2);
					if (iParam6 == 0)
					{
						unk_0x2A932881B64740C0(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
					}
					unk_0x2A932881B64740C0(uParam0->f_3, uParam0->f_2, (uParam0->f_14 - uParam0->f_17), 2);
					unk_0x1F1A3610B05115F6(uParam0->f_3, iParam6);
					unk_0xA931FF68636DF31C(uParam0->f_3, 1);
				}
				else
				{
					unk_0x5C309DFF11824A69(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
				unk_0x04E786541E35ECB1(1, 0, 3000, 1, 0, 0);
				uParam0->f_7 = unk_0xA0F74982C6AAA9D4();
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
					if (unk_0xA0F74982C6AAA9D4() >= (uParam0->f_7 + uParam0->f_16))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									unk_0xEC04D6F4A1ED71ED("CamPushInFranklin", 0, 0);
									break;
								
								case 0:
									unk_0xEC04D6F4A1ED71ED("CamPushInMichael", 0, 0);
									break;
								
								case 2:
									unk_0xEC04D6F4A1ED71ED("CamPushInTrevor", 0, 0);
									break;
							}
						}
						else
						{
							unk_0xEC04D6F4A1ED71ED("CamPushInNeutral", 0, 0);
						}
						unk_0x954BCDB8FDB0AC0F(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						uParam0->f_8 = 1;
					}
				}
			}
			if (unk_0xA0F74982C6AAA9D4() >= (uParam0->f_7 + uParam0->f_15))
			{
				if (bParam2)
				{
					func_11(uParam0);
					unk_0x04E786541E35ECB1(0, 0, 3000, 1, 0, 0);
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
	unk_0x6E6058A59531550F();
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
					unk_0x94DA6AACA7F07289(0);
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
		if (unk_0x1BF2632AED6B5924())
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
			unk_0xF17F4B0641AB2DE1(&Global_2283, 20);
			unk_0xF17F4B0641AB2DE1(&Global_2284, 17);
			unk_0xF17F4B0641AB2DE1(&Global_2285, 0);
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
			if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
			{
				if (unk_0x1FEDE585C0F25C08(unk_0x27D769C59BC9D030()))
				{
					return 0;
				}
				if (func_24())
				{
					return 0;
				}
				if (unk_0x431C14C947878B67(unk_0x27D769C59BC9D030()))
				{
					return 0;
				}
				if (unk_0xBD036012AF60D938(unk_0x27D769C59BC9D030()))
				{
					return 0;
				}
				if (unk_0x225B3357C492A629(unk_0x27D769C59BC9D030()))
				{
					return 0;
				}
				if (unk_0x397ABA0C937BB0B4(unk_0x27D769C59BC9D030(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69489)
				{
					if (unk_0xA8ED23ED7AA60A97(unk_0x27D769C59BC9D030()))
					{
						return 0;
					}
					if (unk_0x300FBC9A9F898890(unk_0x4D29100D094E5511()))
					{
						return 0;
					}
					if (unk_0xB0821632434D6AED(unk_0x27D769C59BC9D030()))
					{
						return 0;
					}
					if (unk_0x37C10326493962AC(unk_0x4D29100D094E5511()))
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
				if (unk_0xF426A5DE932B3BEE(Global_2283, 9))
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
	unk_0x94DA6AACA7F07289(0);
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
	unk_0xF17F4B0641AB2DE1(&Global_2284, 16);
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
	
	if (Global_69489)
	{
		iVar0 = 0;
		unk_0x4CF6F4DF2C64D299(unk_0x27D769C59BC9D030(), &iVar1, 1);
		if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x32B2DBD1EB9EECE3() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
	{
		if (unk_0xCDA4E7364CE84AA7(unk_0x27D769C59BC9D030(), 78, 1))
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
		if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
		{
			if (unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()) == Global_101154.f_32575[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()) == Global_101154.f_32575[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()) == Global_101154.f_32575[2 /*29*/])
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
		if (Global_69489)
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
	return Global_35711 == iParam0;
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
				return Global_1338622.f_203[iParam1];
			}
			break;
	}
	return unk_0xF426A5DE932B3BEE(Global_1338622.f_949, iParam0);
}

void func_29()
{
	unk_0xF022734652B12EB3();
	Global_16723 = 0;
	if ((unk_0x0EFEEF8E6B0B4E34() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0x94DA6AACA7F07289(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0x1BF2632AED6B5924())
	{
		unk_0x94DA6AACA7F07289(1);
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
	Global_36262 = (unk_0xA0F74982C6AAA9D4() + iParam0);
}

void func_32()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_35(0))
		{
			func_33(0);
		}
		unk_0x26545538B51562AD(&Global_2284, 2);
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
		unk_0x26545538B51562AD(&Global_2284, 16);
	}
	if (unk_0x0EFEEF8E6B0B4E34())
	{
		unk_0x94DA6AACA7F07289(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x26545538B51562AD(&Global_2283, 30);
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&Global_2283, 30);
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
				unk_0x38AAAA167C55B731(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xF10089C8CCEFDB7A(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xF10089C8CCEFDB7A(Global_14350);
		}
		else
		{
			unk_0xF10089C8CCEFDB7A(Global_14341);
		}
	}
}

int func_35(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xF426A5DE932B3BEE(Global_2283, 14))
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
	if (unk_0xD32535FA4397160F(joaat("cellphone_flashhand")) > 0)
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
	if (!Global_69489)
	{
		if (!unk_0xE4F7206742848BAF(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x6B8EBAC1C87F6645(iParam2, 0);
			}
			else
			{
				unk_0x6B8EBAC1C87F6645(iParam2, 1);
			}
		}
		if (!unk_0xE4F7206742848BAF(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xBDBBE2B9920C24A7(iParam2, 0);
			}
			else
			{
				unk_0xBDBBE2B9920C24A7(iParam2, 1);
			}
		}
	}
}

void func_37(char* sParam0, int iParam1)
{
	unk_0x3432AC8623AF4EAC(sParam0);
	unk_0x9785EE0D78241684(0, 0, 1, iParam1);
}

void func_38(int iParam0, var uParam1)
{
	if (func_39(uParam1, 1))
	{
		unk_0x0F5512BA4C732798(iParam0, "HOSPITAL_0", 0f, 1f);
	}
	if (func_39(uParam1, 2))
	{
		unk_0x0F5512BA4C732798(iParam0, "HOSPITAL_1", 0f, 1f);
	}
	if (func_39(uParam1, 4))
	{
		unk_0x0F5512BA4C732798(iParam0, "HOSPITAL_2", 0f, 1f);
	}
	if (func_39(uParam1, 8))
	{
		unk_0x0F5512BA4C732798(iParam0, "HOSPITAL_3", 0f, 1f);
	}
	if (func_39(uParam1, 16))
	{
		unk_0x0F5512BA4C732798(iParam0, "HOSPITAL_4", 0f, 1f);
	}
	if (func_39(uParam1, 32))
	{
		unk_0x0F5512BA4C732798(iParam0, "HOSPITAL_5", 0f, 1f);
	}
	if (func_39(uParam1, 64))
	{
		unk_0x0F5512BA4C732798(iParam0, "HOSPITAL_6", 0f, 1f);
	}
	if (func_39(uParam1, 128))
	{
		unk_0x0F5512BA4C732798(iParam0, "HOSPITAL_7", 0f, 1f);
	}
	if (func_39(uParam1, 256))
	{
		unk_0x0F5512BA4C732798(iParam0, "HOSPITAL_8", 0f, 1f);
	}
	if (func_39(uParam1, 512))
	{
		unk_0x0F5512BA4C732798(iParam0, "HOSPITAL_9", 0f, 1f);
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
	if (((Global_91278 == 13 || Global_91278 == 10) || Global_91278 == 11) || Global_91278 == 12)
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
		if (Global_88544[iVar0 /*17*/] && !Global_88544[iVar0 /*17*/].f_1)
		{
			if (Global_88544[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_88544[iVar0 /*17*/].f_5 != 88 && Global_88544[iVar0 /*17*/].f_5 != 89) && Global_88544[iVar0 /*17*/].f_5 != 92)
				{
					func_42(Global_88544[iVar0 /*17*/].f_5, 1);
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
			Global_85596[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85596[iParam0 /*2*/] = 0;
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
		iVar1 = Global_36642[iVar0 /*5*/];
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
		if (Global_36616[iVar2 /*5*/] == 0)
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
	if (!Global_36616[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36616[iParam0 /*5*/].f_1 == unk_0x27D769C59BC9D030())
		{
			Global_36837 = 0;
		}
	}
	Global_36616[iParam0 /*5*/] = 13;
	Global_36616[iParam0 /*5*/].f_1 = 0;
	Global_36616[iParam0 /*5*/].f_2 = 0;
	Global_36616[iParam0 /*5*/].f_3 = 0;
	Global_36616[iParam0 /*5*/].f_4 = 0;
	Global_36615 = (Global_36615 - 1);
	if (Global_36615 < 0)
	{
		Global_36615 = 0;
	}
}

int func_47(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
	{
		func_51(0);
		unk_0xEFA71310CAEBAE1F(Param0, 5f, 1, 0, 0, 0);
		if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()))
		{
			if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
			{
				unk_0x4EEE9D9427E70F4E(unk_0x27D769C59BC9D030(), Param0, 1, 0, 0, 1);
				unk_0xFBDCF3D5834B58D8(unk_0x27D769C59BC9D030(), uParam3);
				unk_0x4523FDDB9926E1D8(0f, 1065353216);
				unk_0x0B28AEB595CB09AF(0f);
			}
		}
		unk_0x9BDDAC2B68E13329(Param0, 4500f, 0);
		unk_0x4EDE34FBADD967A6(0);
		unk_0xEFA71310CAEBAE1F(Param0, 5000f, 1, 0, 0, 0);
		unk_0xBEE458FA951B0113(Param0, 5000f, 0);
		unk_0x19FAF10EF91E58C1(Param0, 5000f);
		unk_0x14EA3066FD050C45(Param0, 5000f);
		func_50();
		func_49();
		unk_0xC1B1E9A034A63A62(0);
		func_51(1);
		if (!unk_0x9A7F0D797C57AC34())
		{
			while (!unk_0x9BDDAC2B68E13329(Param0, 4500f, 0))
			{
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					unk_0x42B9806B3EED4C70(0);
					return 0;
				}
			}
		}
		unk_0xC1B1E9A034A63A62(0);
		while (!unk_0x22AC80586B658378())
		{
			unk_0x4EDE34FBADD967A6(0);
			if (unk_0x83666F9FB8FEBD4B() > 20000)
			{
				unk_0x42B9806B3EED4C70(0);
				if (unk_0x9A7F0D797C57AC34())
				{
					unk_0x18F9F40035A8905D();
				}
				return 0;
			}
		}
		if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()))
		{
			if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
			{
				if (unk_0x9A7F0D797C57AC34())
				{
					unk_0x18F9F40035A8905D();
				}
				unk_0x42B9806B3EED4C70(0);
				unk_0xC1B1E9A034A63A62(0);
				unk_0xD6217559B8657592();
				if (iParam5 == 1)
				{
					unk_0x1706FDF91A29B76C();
				}
				else
				{
					unk_0xC1B1E9A034A63A62(5000);
				}
				unk_0x305C16714CD924F9();
			}
		}
		while ((!unk_0x13C2F50C8DEB4321() && !func_48()) && unk_0x83666F9FB8FEBD4B() < 1500)
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
			unk_0xF1F1EBE69E9A0DE7(Param0, &(Param0.f_2), 0);
			unk_0xEFA71310CAEBAE1F(Param0, 5f, 1, 0, 0, 0);
			if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()))
			{
				if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
				{
					unk_0x4EEE9D9427E70F4E(unk_0x27D769C59BC9D030(), Param0, 1, 0, 0, 1);
					unk_0xFBDCF3D5834B58D8(unk_0x27D769C59BC9D030(), uParam3);
				}
			}
		}
		unk_0x4523FDDB9926E1D8(0f, 1065353216);
		unk_0x0B28AEB595CB09AF(0f);
		func_51(0);
		return 1;
	}
	func_51(0);
	return 0;
}

bool func_48()
{
	return !Global_68319.f_553;
}

void func_49()
{
	Global_68319.f_553 = 1;
	Global_68319.f_554 = 0;
}

void func_50()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		Global_68319[iVar0] = 0;
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
			if (!unk_0xF426A5DE932B3BEE(Global_91278.f_20, 2))
			{
				unk_0x42B9806B3EED4C70(1);
				unk_0x26545538B51562AD(&(Global_91278.f_20), 2);
			}
		}
		else if (unk_0xF426A5DE932B3BEE(Global_91278.f_20, 2))
		{
			unk_0x42B9806B3EED4C70(0);
			unk_0xF17F4B0641AB2DE1(&(Global_91278.f_20), 2);
		}
	}
}

int func_52()
{
	if (unk_0xF426A5DE932B3BEE(unk_0x3A5708FEE1B560A9(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

bool func_53(int iParam0)
{
	return unk_0xF426A5DE932B3BEE(Global_101154.f_5919[iParam0], 0);
}

int func_54(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_99.f_58[iParam0];
}

int func_55()
{
	if (Global_33077[11] == 1)
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
	return Global_101154.f_7775.f_330[iParam0 /*6*/];
}

int func_57()
{
	func_58();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_58()
{
	int iVar0;
	
	if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()))
	{
		if (func_61(Global_101154.f_1826.f_539.f_3549) != unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()))
		{
			iVar0 = func_60(unk_0x27D769C59BC9D030());
			if (func_59(iVar0) && (!func_26(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_59(Global_101154.f_1826.f_539.f_3549))
				{
					Global_101154.f_1826.f_539.f_3550 = Global_101154.f_1826.f_539.f_3549;
				}
				Global_101154.f_1826.f_539.f_3551 = iVar0;
				Global_101154.f_1826.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101154.f_1826.f_539.f_3549 != 145)
			{
				Global_101154.f_1826.f_539.f_3551 = Global_101154.f_1826.f_539.f_3549;
			}
			return;
		}
	}
	Global_101154.f_1826.f_539.f_3549 = 145;
}

bool func_59(int iParam0)
{
	return iParam0 < 3;
}

int func_60(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD2CFFE76B625AE55(iParam0))
	{
		iVar1 = unk_0x946C63BD9EF05437(iParam0);
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
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_62(bool bParam0)
{
	unk_0x34DEBA0AAEE7AD61(0f);
	unk_0x64E911B3993155DB(0f);
	unk_0x7E67E312BA5D0EF7(0f);
	unk_0xADBA33EFF2D3A2C1(1);
	unk_0x90F5DA557C0B2909(0f);
	unk_0x4DEAA070DDCEE958(1);
	unk_0x43150A41AF558DE2(0);
	if (unk_0x159730DB57D995D0("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0x354EC40268FD2071("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0x75CB9E30BA492FF0(&Global_36817))
	{
		if (unk_0x159730DB57D995D0(&Global_36817))
		{
			unk_0x354EC40268FD2071(&Global_36817);
		}
	}
	if (unk_0x54DA78A82349F5AC(Global_36806))
	{
		if (unk_0x09F63CC039551CF9(Global_36806))
		{
			unk_0x4DC38D1AEB85B2D9(Global_36806, 0f);
			unk_0x62A8B47253876150(Global_36806, 1);
		}
	}
	if (unk_0xD47A0DE770BBA7A6())
	{
		unk_0x8DC163BE005C64EB(0);
	}
	if (bParam0)
	{
		if (unk_0x1DA7469E15D75D67() != -1 || unk_0x3F2413A40CACC883() != -1)
		{
			unk_0xE4D2B0D96CFD2FBD();
		}
		else if (unk_0x5D293E404CA20AA5())
		{
			unk_0xE4D2B0D96CFD2FBD();
		}
	}
	Global_36812 = 0f;
	StringCopy(&Global_36813, "", 16);
	StringCopy(&Global_36817, "", 64);
	StringCopy(&Global_36833, "", 16);
	func_63();
}

void func_63()
{
	Global_36805 = 0;
	Global_36806 = 0;
	Global_36807 = 0;
	Global_36808 = 30000;
	Global_36809 = 0f;
	Global_36811 = 0f;
	Global_36810 = 0f;
	Global_36812 = 0f;
	StringCopy(&Global_36813, "", 16);
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
		if (unk_0xEE1EAEC68574EF2D())
		{
			unk_0x334FD925982DE56B(0);
		}
	}
	if (!unk_0x0E063DDE8855EC52())
	{
		uVar0 = iParam2;
		unk_0x9F805E4A6F671CEE(iParam0, bParam1, uVar0);
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
		if (unk_0x27C9C05A6B4E58D2(iParam0) && unk_0x2DB75A8F096AB1F1(iParam0))
		{
			iVar25 = unk_0xC834A7C58DEB59B4(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x0E063DDE8855EC52())
				{
					unk_0x28EC875B929FC59C(1);
				}
				else
				{
					unk_0xFBE386F7181B95E8(iVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0x0E063DDE8855EC52() && !bVar18)
					{
						unk_0x28EC875B929FC59C(0);
					}
					Global_2418472[iParam0 /*313*/].f_240 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_67(iVar25) && !unk_0x7047948B09B46E3F(iVar25))
				{
					if (!bVar21)
					{
						unk_0xF1919C21714E9FAF(iVar25, true, 0);
					}
				}
				if (!unk_0xBF99E4112970270F(iVar25))
				{
					if (!bVar20)
					{
						unk_0xA8CA82EB31D1626F(iVar25, false);
					}
					unk_0x77E24407E71C2B27(iVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0xA8CA82EB31D1626F(iVar25, false);
				}
				unk_0xFFD8329ED7A8E20C(iVar25, true);
				unk_0x4056514F44BCBB31(iParam0, 0);
				unk_0x27314B4B7D8FC0F7(iVar25);
				unk_0x64708EB51448F86F(iVar25, 1);
				func_66();
				func_65();
				if (unk_0xE30C357F61D580D9())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0x9A7F0D797C57AC34())
				{
				}
				Global_2418472[iParam0 /*313*/].f_241 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_67(iVar25) && !unk_0x7047948B09B46E3F(iVar25))
				{
					if (!bVar21)
					{
						unk_0xF1919C21714E9FAF(iVar25, !bVar14, 0);
					}
					if (!unk_0xBF99E4112970270F(iVar25))
					{
						if (!bVar20)
						{
							unk_0xA8CA82EB31D1626F(iVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0x77E24407E71C2B27(iVar25, 1);
						}
					}
				}
				if (bVar9)
				{
					unk_0x4056514F44BCBB31(iParam0, 0);
				}
				else
				{
					unk_0x4056514F44BCBB31(iParam0, 1);
				}
				unk_0xFFD8329ED7A8E20C(iVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0x5EF000E8611AB6E5(iVar25) && !unk_0x9A4E2270C2271219(iVar25, 0))
					{
						unk_0x09D2BE36C9D2B76F(iVar25);
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
			unk_0x9F805E4A6F671CEE(iParam0, bParam1, iVar26);
		}
	}
}

void func_65()
{
	struct<2> Var0;
	
	Global_2428492.f_724 = 0;
	Global_2428492.f_725 = 0;
	Global_2428492.f_726 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2404956.f_1673 = { Var0 };
}

void func_66()
{
	Global_2404956.f_626 = 0;
	Global_2404956.f_1714 = 0;
	Global_2404956.f_484 = 0;
	Global_2404956.f_558 = 0;
	Global_2418472[unk_0x4D29100D094E5511() /*313*/].f_205 = 0;
}

int func_67(int iParam0)
{
	int iVar0;
	
	if (unk_0x9A4E2270C2271219(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x810AFFABCBF31E2D(iParam0, -1794415470);
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
	if (!func_71(Global_36642[iLocal_64 /*5*/].f_2))
	{
		return;
	}
	iVar0 = unk_0x3A5708FEE1B560A9(500, 3000);
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
	if (unk_0xE4F7206742848BAF(Local_43.f_1))
	{
		if (unk_0x9A4E2270C2271219(Local_43.f_1, 0) || unk_0x0F74EBD810C90005(Local_43.f_1))
		{
			return 0;
		}
		if (unk_0x396C7323F60EA166(Local_43.f_1))
		{
			return 0;
		}
		if (func_78(Local_43.f_1))
		{
			return 0;
		}
	}
	if (Global_36642[iLocal_64 /*5*/].f_3 < 3 && Global_36642[iLocal_64 /*5*/].f_3 != 0)
	{
		return 0;
	}
	if (Global_36642[iLocal_64 /*5*/].f_4 < 9 && Global_36642[iLocal_64 /*5*/].f_4 != 0)
	{
		return 0;
	}
	uVar1 = func_77(iParam0);
	if (unk_0x75CB9E30BA492FF0(uVar1))
	{
		return 0;
	}
	if (func_78(Local_43.f_1))
	{
		return 0;
	}
	unk_0x945FF27138DBEABD(sVar1);
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
		if (!unk_0x75CB9E30BA492FF0(sVar2) && !unk_0x75CB9E30BA492FF0(sVar3))
		{
			unk_0x88172B3983EC5071(sVar2);
			while (!unk_0x482101C9B3483958(sVar2))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (!unk_0xE4F7206742848BAF(Local_43.f_1))
			{
				unk_0x878D12AEFBF5BAF0(Local_43.f_1, sVar2, sVar3, 1.5f, -1.5f, -1, 48, 0, 0, 0, 0);
				sLocal_54 = sVar3;
			}
		}
	}
	if (!unk_0xE59B2DB198441382(sVar1))
	{
		return 0;
	}
	if (unk_0xE4F7206742848BAF(Local_43.f_1))
	{
		return 0;
	}
	unk_0x560D2F1EE11E8AE2(Local_43.f_1, sVar1, 0.75f);
	if (unk_0x6A60A80D676F74A7() == 4)
	{
		unk_0xAA9F54C842014A10(Local_43.f_1, "move_ped_strafing_firstperson@drunk");
	}
	unk_0x9D11AB3EF79453A7(Local_43.f_1, 0, sVar1, "idle", 2f, 1);
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
			if (unk_0x30D6008994E431E8(Local_43.f_1))
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
			else if (unk_0xF8E2BA35959FB71C(Local_43.f_1))
			{
				iVar4 = "FACIALS@GEN_MALE@BASE";
			}
			else
			{
				iVar4 = "FACIALS@GEN_FEMALE@BASE";
			}
			break;
	}
	unk_0x0454843AF288553D(Local_43.f_1, "mood_drunk_1", iVar4);
	unk_0xC908FA7A5EBB2825(Local_43.f_1, 200, 1);
	unk_0xC908FA7A5EBB2825(Local_43.f_1, 46, 1);
	unk_0x6B8EBAC1C87F6645(Local_43.f_1, 0);
	unk_0x1545069170501814(Local_43.f_1, 262144, 1);
	unk_0x1A9766A82ADC4282(Local_43.f_1, 1);
	return 1;
}

bool func_72()
{
	return func_73(unk_0x4D29100D094E5511());
}

int func_73(int iParam0)
{
	if (unk_0x946C63BD9EF05437(unk_0xC834A7C58DEB59B4(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_74(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x9A4E2270C2271219(iParam0, 1) || unk_0x0F74EBD810C90005(iParam0))
	{
		return 0;
	}
	if (unk_0x810AFFABCBF31E2D(iParam0, -2017877118) != 7)
	{
		return 0;
	}
	if (unk_0x810AFFABCBF31E2D(iParam0, 1785177548) != 7)
	{
		return 0;
	}
	if (unk_0x7C2070521268C99E(iParam0))
	{
		return 0;
	}
	if (unk_0x0BAF34551BADE6DC(iParam0))
	{
		return 0;
	}
	if (unk_0xBD036012AF60D938(iParam0))
	{
		return 0;
	}
	if (unk_0x58D91178F8617B11(iParam0))
	{
		return 0;
	}
	if (Global_68058)
	{
		return 0;
	}
	if (func_76())
	{
		return 0;
	}
	if (iParam0 == unk_0x27D769C59BC9D030())
	{
		if (!unk_0x0983778BC2A02A2F(unk_0x4D29100D094E5511()))
		{
			return 0;
		}
		if (!unk_0x170C6E2649B67440(unk_0x4D29100D094E5511()))
		{
			return 0;
		}
		if (unk_0x8E06E8DFD2B57A05(unk_0x4D29100D094E5511()) || unk_0x102415F9164597E2(unk_0x4D29100D094E5511()))
		{
			return 0;
		}
		if (func_75())
		{
			return 0;
		}
	}
	Var0 = { unk_0x73A52F9295BA1599(iParam0) };
	if (unk_0xA8CEACB4F35AE058(Var0) >= (1f * 1f))
	{
		return 0;
	}
	return 1;
}

bool func_75()
{
	return Global_91330.f_297 > 0;
}

bool func_76()
{
	return unk_0xA0F74982C6AAA9D4() <= Global_17257.f_5745 + 100;
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
	if (unk_0x75CB9E30BA492FF0(Local_60.f_2))
	{
		if (unk_0x75CB9E30BA492FF0(uVar1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return unk_0xC1C5B83BB6719C6C(Local_60.f_2, sVar1);
}

int func_79(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!unk_0xD2CFFE76B625AE55(iParam0))
	{
		return -1;
	}
	iVar0 = func_81(iParam0);
	iVar1 = func_80(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36642[iVar1 /*5*/].f_2;
}

int func_80(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36642[iVar0 /*5*/] == iParam0)
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
		if (iParam0 == Global_36642[iVar0 /*5*/].f_1)
		{
			return Global_36642[iVar0 /*5*/];
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
	if (unk_0x2006A8C1BA2AFE80(Local_43.f_4, 0))
	{
		return 0;
	}
	Var0 = { unk_0xA8CFDE65C45F813B(Local_43.f_1, 1) };
	Var3 = { unk_0xA8CFDE65C45F813B(Local_43.f_4, 1) };
	fVar6 = unk_0x676D4CD42E0837CA(Var0, Var3, 1);
	return fVar6 < 7f;
}

void func_85()
{
	int iVar0;
	char* sVar1;
	
	if (Local_43.f_1 == unk_0x27D769C59BC9D030())
	{
		unk_0xCFF471245AFEEDCE(0, 36, 1);
		if (unk_0xA61FCE3E315489B7(Local_43.f_1))
		{
			if (Global_36642[iLocal_64 /*5*/].f_2 == 0 || Global_36642[iLocal_64 /*5*/].f_2 == 2)
			{
				unk_0x35E648675FC36FAE(Local_43.f_1, 0, 0);
			}
		}
		if (unk_0xDAA1E30B3CC41528(Local_43.f_1))
		{
			unk_0x1248D23AADA97359(Local_43.f_1, 0);
		}
	}
	if (Local_55.f_0 != -2)
	{
		if (Local_55.f_0 == -1)
		{
			if (Global_36642[iLocal_64 /*5*/].f_2 != 0)
			{
				Global_36642[iLocal_64 /*5*/].f_2 = 0;
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
			if (Global_36642[iLocal_64 /*5*/].f_2 == 0)
			{
				if (iVar0 < 30)
				{
					Global_36642[iLocal_64 /*5*/].f_2 = 2;
					if (!func_71(2))
					{
						Global_36642[iLocal_64 /*5*/].f_2 = 0;
						return;
					}
				}
			}
			if (Global_36642[iLocal_64 /*5*/].f_2 == 2)
			{
				if (iVar0 < 10)
				{
					Global_36642[iLocal_64 /*5*/].f_2 = 1;
					if (!func_71(2))
					{
						Global_36642[iLocal_64 /*5*/].f_2 = 2;
						return;
					}
				}
			}
			if (Global_36642[iLocal_64 /*5*/].f_2 == 1)
			{
			}
		}
	}
	else
	{
		return;
	}
	if (!unk_0x75CB9E30BA492FF0(sLocal_54))
	{
		if (!func_74(Local_43.f_1))
		{
			sVar1 = "MOVE_M@DRUNK@TRANSITIONS";
			if (unk_0xF4954568C87BA772(Local_43.f_1, sVar1, sLocal_54, 3))
			{
				unk_0x1B1FB642178B8CEE(Local_43.f_1, sVar1, sLocal_54, -4f);
			}
			sLocal_54 = "";
			return;
		}
	}
	if (Global_36642[iLocal_64 /*5*/].f_3 >= 10 || Global_36642[iLocal_64 /*5*/].f_4 >= 15)
	{
		if (unk_0x810AFFABCBF31E2D(Local_43.f_1, 1785177548) == 1)
		{
			return;
		}
		if (unk_0xBD5D1DC3ADCC7F23(Local_43.f_1))
		{
			return;
		}
		if (unk_0x9A4E2270C2271219(Local_43.f_1, 1))
		{
			if (Global_36642[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_36642[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_36642[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_36642[iLocal_64 /*5*/].f_4 = 14;
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
	
	if (!unk_0x57ADE64D2E3798F0(Local_43.f_1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = unk_0xD9FFE8E1642C81E2(Local_43.f_1, 0);
	if (!unk_0x0B4DDB992C7BCF57(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0x9297C590C99228DC(iVar0, -1) == Local_43.f_1)
	{
		return 0;
	}
	Local_43.f_4 = iVar0;
	Local_60.f_0 = 7;
	return 1;
}

void func_87()
{
	if (!unk_0x9A4E2270C2271219(Local_43.f_1, 0))
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
	if (!unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
	{
		return;
	}
	if (!unk_0x57ADE64D2E3798F0(unk_0x27D769C59BC9D030()))
	{
		return;
	}
	if (unk_0x14B5449970A1C2DA(unk_0x4D29100D094E5511(), 0))
	{
		return;
	}
	iVar0 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
	fVar1 = unk_0xECC01072E61D2F3A(iVar0);
	if (fVar1 < 5f)
	{
		return;
	}
	Var2 = { unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1) };
	Var5 = { Var2 - Vector(3f, 30f, 30f) };
	Var8 = { Var2 + Vector(3f, 30f, 30f) };
	if (!unk_0x47815B15B45B2F43(Var5, Var8) && !unk_0xD59C7C590E43DFAB(Var5, Var8))
	{
		return;
	}
	unk_0xB2758D8199128B65(unk_0x4D29100D094E5511(), 1, 0);
	unk_0x774840DEC1F0175E(unk_0x4D29100D094E5511(), 0);
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
	if (unk_0x9A4E2270C2271219(Local_43.f_1, 0))
	{
		iVar1 = unk_0xD9FFE8E1642C81E2(Local_43.f_1, 0);
		iVar2 = unk_0x9297C590C99228DC(iVar1, -1);
		if (!iVar2 == Local_43.f_1)
		{
			return;
		}
		if (unk_0x0E063DDE8855EC52() && !unk_0xFB1CEF9E7943CFF5(iVar1))
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!unk_0x27D769C59BC9D030() == Local_43.f_1)
	{
		return;
	}
	else if (!unk_0x6A60A80D676F74A7() == 4)
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
	if (unk_0x54F37403E01EFD97(iVar0))
	{
		Local_55.f_4 = unk_0x83666F9FB8FEBD4B() + 2000;
	}
	else
	{
		Local_55.f_4 = unk_0x83666F9FB8FEBD4B() + 1000;
	}
	fVar3 = unk_0xECC01072E61D2F3A(iVar0);
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
	
	fVar0 = unk_0x5C02660403071A83(-fParam1, fParam1);
	fVar1 = unk_0x5C02660403071A83(0f, fParam2);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 - fVar1);
	}
	else
	{
		fVar0 = (fVar0 + fVar1);
	}
	if (unk_0x54F37403E01EFD97(iParam0))
	{
		if (unk_0x431C14C947878B67(unk_0x97EA5EA3E7FE8500(iParam0)))
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
		iVar2 = unk_0x946C63BD9EF05437(iParam0);
		if (unk_0x6CCC9ABA9456E815(iVar2))
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
	if (unk_0x0E063DDE8855EC52() && !unk_0xFB1CEF9E7943CFF5(iParam0))
	{
		return;
	}
	if (unk_0x54F37403E01EFD97(iParam0))
	{
		unk_0x49F0E1F159312FD0(unk_0x97EA5EA3E7FE8500(iParam0), fParam1);
	}
	else if (unk_0x8F8858152A9B9959(iParam0))
	{
		unk_0x6041EECCC859EE13(unk_0x35E488C304B2E03E(iParam0), fParam1);
	}
}

void func_92()
{
	int iVar0;
	
	if (!unk_0x9A4E2270C2271219(Local_43.f_1, 0))
	{
		Local_60.f_0 = 4;
		return;
	}
	if (unk_0x0E063DDE8855EC52())
	{
		if (Global_36642[iLocal_64 /*5*/].f_3 >= 10 || Global_36642[iLocal_64 /*5*/].f_4 >= 15)
		{
			if (Global_36642[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_36642[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_36642[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_36642[iLocal_64 /*5*/].f_4 = 14;
			}
		}
	}
	if (bLocal_50)
	{
		return;
	}
	iVar0 = unk_0xD9FFE8E1642C81E2(Local_43.f_1, 0);
	if (!unk_0x0B4DDB992C7BCF57(iVar0, 0))
	{
		unk_0x550B00F01FC4ADF0(Local_43.f_1, 0, 0);
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
	iVar0 = unk_0x810AFFABCBF31E2D(unk_0x27D769C59BC9D030(), 355471868);
	if (!iVar0 == 7)
	{
		Local_55.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
		return;
	}
	if (!unk_0x9A4E2270C2271219(Local_43.f_1, 0))
	{
		Local_60.f_0 = 4;
		Local_55.f_3 = -2;
		return;
	}
	iVar1 = unk_0xD9FFE8E1642C81E2(Local_43.f_1, 0);
	iVar2 = unk_0x9297C590C99228DC(iVar1, -1);
	if (iVar2 == Local_43.f_1)
	{
		func_94();
		Local_55.f_3 = -2;
		return;
	}
	unk_0x2F4E6A5807842BEF(Local_43.f_1, iVar1);
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
	if (unk_0x57ADE64D2E3798F0(Local_43.f_1))
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
	if (bVar1 || unk_0x57ADE64D2E3798F0(Local_43.f_1))
	{
		if (!bLocal_50)
		{
		}
		iVar0 = unk_0xD9FFE8E1642C81E2(Local_43.f_1, 0);
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
				unk_0x550B00F01FC4ADF0(Local_43.f_1, 0, 0);
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
		iVar2 = unk_0x9297C590C99228DC(Local_43.f_4, -1);
		if (iVar2 == Local_43.f_1)
		{
			func_94();
			return;
		}
		unk_0x2F4E6A5807842BEF(Local_43.f_1, iVar0);
		Local_60.f_0 = 9;
		Local_55.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
		return;
	}
	if (!func_84())
	{
		unk_0xF156AA2A744B309E(Local_43.f_1);
		Local_60.f_0 = 4;
		return;
	}
	if (!bLocal_50)
	{
		iVar3 = unk_0x810AFFABCBF31E2D(Local_43.f_1, -1794415470);
		if (iVar3 == 7)
		{
			if (!unk_0x9A4E2270C2271219(Local_43.f_1, 0))
			{
				unk_0xF156AA2A744B309E(Local_43.f_1);
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
	if (!unk_0x0B4DDB992C7BCF57(Local_43.f_4, 0))
	{
		Local_43.f_4 = 0;
		Local_60.f_0 = 4;
		return;
	}
	Var0 = { unk_0xA8CFDE65C45F813B(Local_43.f_1, 1) };
	Var3 = { unk_0xA8CFDE65C45F813B(Local_43.f_4, 1) };
	fVar6 = unk_0x676D4CD42E0837CA(Var0, Var3, 1);
	if (fVar6 > 3f)
	{
		if (!func_71(Global_36642[iLocal_64 /*5*/].f_2))
		{
			Local_60.f_0 = 12;
			return;
		}
		Local_60.f_0 = 5;
		Local_55.f_2 = unk_0x83666F9FB8FEBD4B() + 2000;
		return;
	}
	iVar7 = unk_0x1AEADBB0240E0B51(Local_43.f_4);
	iVar8 = 0;
	bVar9 = true;
	iVar8 = 1;
	while (bVar9)
	{
		if (iVar8 < iVar7)
		{
			if (unk_0x32C6487B93CCAF4F(Local_43.f_4, iVar8))
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
	unk_0x835BBE043A81D6DD(Local_43.f_1, Local_43.f_4, -1, iVar8, 1073741824, 1, 0);
	Local_60.f_0 = 7;
}

void func_98()
{
	if (!unk_0xD2CFFE76B625AE55(Local_43.f_1))
	{
		return;
	}
	if (!unk_0xE4F7206742848BAF(Local_43.f_1))
	{
		unk_0x138F835BA3602081(Local_43.f_1, 1048576000);
		unk_0x9DDE691A0EB16FCA(Local_43.f_1);
		unk_0x5689F25AA4C2F0C6(Local_43.f_1, 0, -1056964608);
		Local_60.f_2 = "";
		unk_0x278D6EE3B6820D9B(Local_43.f_1);
		unk_0xC908FA7A5EBB2825(Local_43.f_1, 200, 0);
		unk_0xC908FA7A5EBB2825(Local_43.f_1, 46, 0);
		unk_0x6B8EBAC1C87F6645(Local_43.f_1, 1);
		unk_0x1545069170501814(Local_43.f_1, 262144, 0);
		unk_0x1A9766A82ADC4282(Local_43.f_1, 0);
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
	unk_0x138F835BA3602081(uParam0, 1048576000);
	unk_0x5689F25AA4C2F0C6(uParam0, 0, -1056964608);
	unk_0xC908FA7A5EBB2825(uParam0, 200, 0);
	unk_0x6B8EBAC1C87F6645(iParam0, 1);
	unk_0x1545069170501814(iParam0, 262144, 0);
	unk_0x1A9766A82ADC4282(iParam0, 0);
}

void func_102()
{
	int iVar0;
	
	if (Local_55.f_0 == -1)
	{
		Global_36642[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36642[iLocal_64 /*5*/].f_3 < 3 && Global_36642[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_36642[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_36642[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_36642[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_36642[iLocal_64 /*5*/].f_2 = 1;
		}
	}
	if (unk_0x9A4E2270C2271219(Local_43.f_1, 0))
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
	if (!func_71(Global_36642[iLocal_64 /*5*/].f_2))
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
		iVar0 = Global_36723[iVar1 /*5*/].f_2;
		if (!iVar0 == 6)
		{
			if (Global_36723[iVar1 /*5*/].f_1 == iLocal_48)
			{
				func_106(iVar1);
				func_105(iVar1);
			}
			else if (Global_36723[iVar1 /*5*/].f_1 == 2)
			{
				if (!iLocal_49 == -1)
				{
					if (iLocal_49 == Global_36723[iVar1 /*5*/])
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
	Global_36723[iParam0 /*5*/] = -1;
	Global_36723[iParam0 /*5*/].f_1 = -1;
	Global_36723[iParam0 /*5*/].f_2 = 6;
	Global_36723[iParam0 /*5*/].f_3 = 0;
	Global_36723[iParam0 /*5*/].f_4 = 0;
}

void func_106(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_36723[iParam0 /*5*/].f_2;
	switch (iVar0)
	{
		case 1:
			func_131();
			break;
		
		case 2:
			func_110(Global_36723[iParam0 /*5*/].f_4);
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
	
	Global_36642[iLocal_64 /*5*/].f_4++;
	if (Local_55.f_0 == -1)
	{
		Global_36642[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36642[iLocal_64 /*5*/].f_4 < 9 && Global_36642[iLocal_64 /*5*/].f_4 != 0)
	{
		Global_36642[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_36642[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_36642[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_36642[iLocal_64 /*5*/].f_2 = 1;
		}
		if (!func_78(Local_43.f_1))
		{
			func_71(Global_36642[iLocal_64 /*5*/].f_2);
		}
	}
}

void func_109()
{
	int iVar0;
	
	Global_36642[iLocal_64 /*5*/].f_3++;
	if (Local_55.f_0 == -1)
	{
		Global_36642[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36642[iLocal_64 /*5*/].f_3 < 3 && Global_36642[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_36642[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_36642[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_36642[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_36642[iLocal_64 /*5*/].f_2 = 1;
		}
		if (!func_78(Local_43.f_1))
		{
			func_71(Global_36642[iLocal_64 /*5*/].f_2);
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
		iLocal_63 = unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511());
		return;
	}
	iVar0 = unk_0xC6861DC0B749762A(unk_0x4D29100D094E5511());
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
		if (iParam0 == Global_36723[iVar0 /*5*/])
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
	if (!unk_0x2006A8C1BA2AFE80(Local_43.f_1, 0))
	{
		if (unk_0x57ADE64D2E3798F0(Local_43.f_1))
		{
			Local_60.f_0 = 10;
		}
	}
	if (bLocal_50)
	{
		func_122();
		func_8(71, 1);
		if (unk_0x0E063DDE8855EC52())
		{
			iVar0 = func_121(2049, -1, 0);
			iVar1 = (iVar0 / 10) + 1 * 10;
			if (iVar0 + 1 >= iVar1)
			{
				func_119(iVar1);
			}
			func_116(2049, iVar0 + 1, -1, 1);
		}
		else
		{
			iVar2 = 0;
			iVar3 = 0;
			iVar4 = 0;
			unk_0xD0D748C6C14C0E92(joaat("sp0_sp_num_times_drunk"), &iVar2, -1);
			unk_0xD0D748C6C14C0E92(joaat("sp1_sp_num_times_drunk"), &iVar3, -1);
			unk_0xD0D748C6C14C0E92(joaat("sp2_sp_num_times_drunk"), &iVar4, -1);
			iVar5 = ((iVar2 + iVar3) + iVar4);
			iVar6 = (iVar5 / 10) + 1 * 10;
			if (iVar5 + 1 >= iVar6)
			{
				func_119(iVar6);
			}
			switch (func_57())
			{
				case 0:
					unk_0xE2A8B026FA4DDFFF(joaat("sp0_sp_num_times_drunk"), iVar2 + 1, 1);
					break;
				
				case 1:
					unk_0xE2A8B026FA4DDFFF(joaat("sp1_sp_num_times_drunk"), iVar3 + 1, 1);
					break;
				
				case 2:
					unk_0xE2A8B026FA4DDFFF(joaat("sp2_sp_num_times_drunk"), iVar4 + 1, 1);
					break;
				}
		}
		Local_60.f_1 = 1;
		return;
	}
	Local_60.f_1 = 12;
	if (Local_55.f_0 == -1)
	{
		Global_36642[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36642[iLocal_64 /*5*/].f_3 < 3 && Global_36642[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_36642[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar7 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar7 <= 0)
		{
			iVar7 = 0;
		}
		iVar7 = (iVar7 / 1000) + 1;
		Global_36642[iLocal_64 /*5*/].f_2 = 0;
		if (iVar7 < 30)
		{
			Global_36642[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar7 < 10)
		{
			Global_36642[iLocal_64 /*5*/].f_2 = 1;
		}
	}
}

void func_116(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2469339[iParam0 /*5*/][func_117(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xE2A8B026FA4DDFFF(iVar0, iParam1, iParam3);
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
			Global_2469052 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2469052 = 1;
		}
	}
	return iVar0;
}

var func_118()
{
	return Global_1312747;
}

void func_119(int iParam0)
{
	int iVar0;
	
	iVar0 = func_120(81);
	Global_2411218[iVar0 /*83*/] = 81;
	Global_2411218[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2411218[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_120(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2411218[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2411218[iVar1 /*83*/] == 0)
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
	uVar0 = Global_2469339[iParam0 /*5*/][func_117(iParam1)];
	if (unk_0xD0D748C6C14C0E92(uVar0, &uVar1, -1))
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
	Global_36723[iVar0 /*5*/] = iParam0;
	Global_36723[iVar0 /*5*/].f_1 = iParam1;
	Global_36723[iVar0 /*5*/].f_2 = iParam2;
	Global_36723[iVar0 /*5*/].f_3 = iParam3;
	Global_36723[iVar0 /*5*/].f_4 = iParam4;
}

int func_126()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36723[iVar0 /*5*/].f_2 == 6)
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
		if (iParam2 == Global_36723[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36723[iVar0 /*5*/])
			{
				if (iParam1 == Global_36723[iVar0 /*5*/].f_1)
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
	if (Local_43.f_1 == unk_0x27D769C59BC9D030())
	{
		bLocal_50 = true;
		Global_36838 = 1;
		Global_36840++;
	}
	if (!unk_0x2006A8C1BA2AFE80(Local_43.f_1, 0))
	{
		iVar0 = func_60(Local_43.f_1);
		switch (iVar0)
		{
			case 17:
				unk_0x4410225696D7183B(Local_43.f_1, "AMANDA_DRUNK");
				break;
			
			case 19:
				unk_0x4410225696D7183B(Local_43.f_1, "LAMAR_DRUNK");
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
		if (!unk_0x2006A8C1BA2AFE80(Local_43.f_1, 0))
		{
			iVar0 = func_60(Local_43.f_1);
			if (Global_36642[iLocal_64 /*5*/].f_4 > 0)
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
					unk_0x4410225696D7183B(Local_43.f_1, "AMANDA_NORMAL");
					break;
				
				case 19:
					unk_0x4410225696D7183B(Local_43.f_1, "LAMAR_NORMAL");
					break;
				}
			}
	}
	func_98();
	if (bLocal_50)
	{
		Global_36838 = 0;
	}
	func_132();
	unk_0x651E63BA2F4975EC(func_77(0));
	unk_0x651E63BA2F4975EC(func_77(2));
	unk_0x651E63BA2F4975EC(func_77(1));
	Global_1724571 = 0;
	if (unk_0xD32535FA4397160F(joaat("appemail")) > 0)
	{
		func_33(0);
	}
	unk_0x7C3AA2D27E16E2AD();
}

void func_132()
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (unk_0x2006A8C1BA2AFE80(Local_43.f_1, 0))
	{
		return;
	}
	uVar0 = Local_43.f_1;
	if (unk_0x9A4E2270C2271219(Local_43.f_1, 0))
	{
		uVar1 = unk_0xD9FFE8E1642C81E2(Local_43.f_1, 0);
		iVar2 = unk_0x9297C590C99228DC(uVar1, -1);
		if (!Local_43.f_1 == iVar2)
		{
			return;
		}
		uVar0 = iVar1;
	}
	else if (!unk_0x6A60A80D676F74A7() == 4 || !unk_0x27D769C59BC9D030() == Local_43.f_1)
	{
		return;
	}
	fLocal_53 = 0f;
	func_91(uVar0, 0f);
}

void func_133(var uParam0, char* sParam1, int iParam2)
{
	unk_0x83983CFE8950EEAC(uParam0, sParam1, func_134(iParam2), 1);
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

