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
	if (unk_0x2C897F101BA20806(2))
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
		if ((unk_0x1DAD7CE53BEE7710() && !unk_0x7A75BEF6DA1EDF3D()) && !func_5())
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
	Global_2428577.f_629 = 1;
}

var func_3()
{
	return Global_2428577.f_608;
}

bool func_4()
{
	return unk_0x889D01384B54BCE3(Global_2428577.f_2, 11);
}

bool func_5()
{
	return unk_0x889D01384B54BCE3(Global_2429337.f_1.f_2808, 3);
}

void func_6()
{
	bool bVar0;
	
	if (unk_0xE44A580B551C3645(Local_42.f_1))
	{
		func_131();
	}
	if (bLocal_49)
	{
		if (!unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
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
	
	unk_0x34CD3EF298F72E05(Local_42.f_1, 3000, 3500, 0, 1, 1, 0);
	Global_1699182 = 1;
	if (!unk_0xF4C685E933068D23())
	{
		unk_0x271524E4281048DC(2500);
		while (unk_0xE9A5FF67266655B2())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (unk_0x1DAD7CE53BEE7710())
	{
		func_64(unk_0x1788E93557766241(), 0, 57344, 1);
		Global_2404570.f_1416 = 1;
		if (unk_0xB8E47EB7E42A6AA4(unk_0x1788E93557766241(), 0))
		{
			Global_2404570.f_1417 = 1;
		}
		else
		{
			Global_2404570.f_1417 = 0;
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
	if (!unk_0xE44A580B551C3645(Local_42.f_1))
	{
		unk_0x6C43BF7625967266(Local_42.f_1, Var1.f_5, 1, 0, 0, 1);
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
	if (Global_50501[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x1DAD7CE53BEE7710())
	{
		return;
	}
	if (Global_50501[iParam0 /*7*/])
	{
		unk_0x3ED04C9A60CBD249(Global_50501[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x680350124CC21957(Global_50501[iParam0 /*7*/].f_1, iVar0, 1);
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
	unk_0xC92B5D880C803814(unk_0x1788E93557766241(), false, 0);
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		unk_0xE31C4C317516E7A7(unk_0xA16EC202D9D35357(), 1);
	}
	unk_0xF831E40D76C85CCF(uParam1->f_5, 4500f);
	unk_0x3211CBD6CA142655(uParam1->f_5, 4500f);
	unk_0x84710FE7666EBF7B(uParam1->f_5, 5f, 1, 0, 0, 0);
	unk_0x6C43BF7625967266(unk_0xA16EC202D9D35357(), uParam1->f_5, 1, 0, 0, 1);
	unk_0x3CC3106305C40A28(unk_0xA16EC202D9D35357(), true);
	unk_0x4EDE34FBADD967A6(0);
	unk_0x8D033DA6320BDCF9(1);
	unk_0x3D28909AF30D70F4(*uParam1);
	if (unk_0x06771AF7795B3ECF(uParam1->f_16))
	{
	}
	else
	{
		unk_0x3D28909AF30D70F4(uParam1->f_16);
	}
	if (!unk_0xF4C685E933068D23())
	{
		unk_0x271524E4281048DC(0);
	}
	func_47(uParam1->f_5, uParam1->f_8.f_2, 0, 1);
	if (!unk_0xF4C685E933068D23())
	{
		unk_0x271524E4281048DC(0);
	}
	iVar1 = unk_0x09560C7DE2A384BD() + 20000;
	bVar2 = false;
	uParam1->f_33 = 0;
	while (!bVar2 && iVar1 > unk_0x09560C7DE2A384BD())
	{
		bVar2 = true;
		unk_0x3D28909AF30D70F4(*uParam1);
		if (!unk_0x6C47E32491756A1A(*uParam1))
		{
			bVar2 = false;
		}
		if (!unk_0x06771AF7795B3ECF(uParam1->f_16))
		{
			unk_0x3D28909AF30D70F4(uParam1->f_16);
			if (!unk_0x6C47E32491756A1A(uParam1->f_16))
			{
				bVar2 = false;
			}
		}
		if (!unk_0xF4C685E933068D23())
		{
			unk_0x271524E4281048DC(0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_44();
	if (!func_43(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		unk_0xD3590DDD9D1A8E0D(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 0, 1);
		unk_0x597CB55BA0825820(uParam1->f_5 + uParam1->f_19, (unk_0x652D2EEEF1D3E62C(uParam1->f_22) + 25f), 0, 0, 0, 0, 0);
		unk_0x84710FE7666EBF7B(uParam1->f_5 + uParam1->f_19, (unk_0x652D2EEEF1D3E62C(uParam1->f_22) + 25f), 1, 0, 0, 0);
	}
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		unk_0xB81B20C00BEE80D3(unk_0x1788E93557766241());
		unk_0xB4E8D4EA104CA059(unk_0xA16EC202D9D35357(), joaat("weapon_unarmed"), 1);
		unk_0x9AB8F163FA160890(unk_0xA16EC202D9D35357());
	}
	unk_0x3CC3106305C40A28(unk_0xA16EC202D9D35357(), false);
	unk_0x8D033DA6320BDCF9(0);
	unk_0x84710FE7666EBF7B(uParam1->f_5, 15f, 1, 0, 0, 0);
	unk_0x5B7A39233BA4D866();
	unk_0x24D95A4D5D165812();
	func_41();
	while (func_40())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x83B393DE31BAC8F0() && !unk_0x0FFB470AFBDA3DCD())
	{
		unk_0x5FE2A83120E8127F(250);
	}
	unk_0xD670C618E827153C(1);
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		iVar4 = unk_0x7D9AB6E493591276(uParam1->f_5, uParam1->f_8, 2);
		unk_0x3E26976B7A367C36(iVar4, 0);
		unk_0x3CEAE981C57EBDD4(iVar4, 0);
		uVar5 = unk_0xC45922BBDAA0638F("DEFAULT_ANIMATED_CAMERA", 1);
		iVar6 = 4;
		if (uParam1->f_4 != joaat("MotionState_Idle"))
		{
			iVar6 |= 2;
		}
		func_38(unk_0xA16EC202D9D35357(), uParam1->f_18);
		unk_0x10D8E64E13BD715C(unk_0xA16EC202D9D35357(), iVar4, *uParam1, uParam1->f_1, 1000f, -1.5f, iVar6, 0, 1148846080, 0);
		unk_0xCB49F8E4416E129D(unk_0xA16EC202D9D35357(), 1);
		unk_0xB560724F60FAD9E8(unk_0x1788E93557766241(), 1);
		iVar3 = unk_0xC71F63D1436E8CEC(unk_0xA16EC202D9D35357(), 77);
		unk_0x117411595F7E531A(unk_0xA16EC202D9D35357(), 77, 1);
		unk_0xC2A228A4CCC7B3B0(uVar5, iVar4, uParam1->f_2, *uParam1);
		unk_0x00B28313F1FACD2D(1, 0, 3000, 1, 0, 0);
		if (!unk_0x06771AF7795B3ECF(uParam1->f_16) && !unk_0x06771AF7795B3ECF(uParam1->f_17))
		{
			unk_0x5B5659C49032B96C(unk_0xA16EC202D9D35357(), uParam1->f_16, uParam1->f_17, 1000f, -1.5f, 10000, 33, 0, 0, 0, 0);
		}
	}
	else
	{
		iVar4 = -1;
	}
	if (!uParam1->f_25)
	{
		if (!unk_0x06771AF7795B3ECF(sParam2))
		{
			func_37(sParam2, -1);
			uParam1->f_25 = 1;
		}
	}
	bVar7 = false;
	bVar8 = false;
	uVar9 = 16;
	if (!unk_0x06771AF7795B3ECF(&(uParam1->f_11)))
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
		func_36(&uVar9, iVar175, unk_0xA16EC202D9D35357(), sVar176, 0, 1);
	}
	if (unk_0xCFC5CE3AD496DA0B(iVar4))
	{
		sVar177 = "WalkInterruptible";
		sVar178 = "ForceBlendout";
		while (unk_0xCFC5CE3AD496DA0B(iVar4) && !unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (!bVar8)
			{
				if (!unk_0xF4C685E933068D23())
				{
					if (!unk_0x06771AF7795B3ECF(uParam1->f_26))
					{
						unk_0xDF3B1A0343547226(uParam1->f_26, 0, 0);
						bVar8 = true;
					}
					if (!unk_0x06771AF7795B3ECF(uParam1->f_27))
					{
						if (!unk_0x06771AF7795B3ECF(uParam1->f_28))
						{
							unk_0xC2E1777941B4536E(-1, uParam1->f_28, uParam1->f_27, 0);
							bVar8 = true;
						}
						if (!unk_0x06771AF7795B3ECF(uParam1->f_29))
						{
							unk_0xC2E1777941B4536E(-1, uParam1->f_29, uParam1->f_27, 0);
							bVar8 = true;
						}
					}
				}
			}
			unk_0x6C5CE54692FA7CB8();
			unk_0x8A5A9834DB717F2D(18);
			unk_0x911BF103B900C76D();
			func_32();
			iVar179 = unk_0x09560C7DE2A384BD();
			if (iVar179 >= (Global_35466 - 500))
			{
				func_31(4000);
			}
			fVar180 = -1f;
			fVar181 = -1f;
			fVar0 = unk_0x0DF89B3B1CF0FDC1(iVar4);
			if (!unk_0x06771AF7795B3ECF(&(uParam1->f_11)))
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
			if (unk_0xE619D2B94AB9AC87(unk_0xA16EC202D9D35357(), unk_0xB793F1A0B6CC4AE1(sVar177)))
			{
				iVar183 = (unk_0x805905ED44A111AA(2, 195) - 128);
				iVar184 = (unk_0x805905ED44A111AA(2, 196) - 128);
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
			if (unk_0xB9B1005BA7733220() == 4 && uParam1->f_52 > 0f)
			{
				if (fVar0 >= uParam1->f_52)
				{
					if (!uParam1->f_32)
					{
						fVar185 = 1.5f;
						Var186 = { unk_0x2350B42564ED66B9() };
						Var189 = { unk_0xCDC62EA66023BC94(unk_0xA16EC202D9D35357(), 31086, 0f, 0f, 0f) };
						fVar192 = unk_0x4970185D4CC64616(Var186, Var189, 1);
						fVar185 = func_18(fVar185, 0.001f, (fVar192 - 0.75f));
						if (fVar185 < 0f)
						{
							fVar185 = 0.001f;
						}
						func_17(&(uParam1->f_34), unk_0xA16EC202D9D35357(), func_57(), 1E-06f, 300, 300, 0, 0, 1045220557);
						func_16(&(uParam1->f_34), uParam1->f_53);
						if (!uParam1->f_33)
						{
							uParam1->f_34 = 1;
							uParam1->f_34.f_7 = unk_0x09560C7DE2A384BD();
							uParam1->f_34.f_8 = 0;
							uParam1->f_33 = 1;
						}
						if (uParam1->f_57 == 999f)
						{
							uParam1->f_56 = 0f;
						}
						if (uParam1->f_57 == 999f)
						{
							Var195 = { unk_0x3093BF1CA6E5E16F(2) };
							uVar198 = unk_0xD1613577C809E98B(unk_0xA16EC202D9D35357());
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
						unk_0x60365B850FB7354F(fVar193, 1065353216);
						unk_0x20D6E0EA145DF751(fVar194);
						unk_0xA24D82792FADEEFF(fVar193);
						unk_0xC47AEC0E819C5B4E(fVar194);
						Var201 = { unk_0x2350B42564ED66B9() };
						Var204 = { unk_0x8F759040B8D528AF() };
						fVar207 = unk_0x4970185D4CC64616(Var201, Var204, 1);
						iVar208 = unk_0xF2DB717A73826179((fVar207 * 1000f));
						uParam1->f_32 = 1;
					}
					if (uParam1->f_32)
					{
						unk_0xA46083EE97A9EE65();
						if (func_13(&(uParam1->f_34), 1, 1, 1, 0, 0, 0))
						{
						}
					}
				}
			}
			if (unk_0xE619D2B94AB9AC87(unk_0xA16EC202D9D35357(), unk_0xB793F1A0B6CC4AE1(sVar178)) || iVar182)
			{
				if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
				{
					unk_0x937785D9C1929236(unk_0xA16EC202D9D35357());
					switch (uParam1->f_4)
					{
						case joaat("MotionState_Idle"):
							unk_0x86E7313D71D1A983(unk_0xA16EC202D9D35357(), joaat("MotionState_Idle"), 1, 0, 0);
							unk_0x4A34D7E241347461(0, 0, 3, 0);
							break;
						
						case joaat("MotionState_Walk"):
							unk_0x86E7313D71D1A983(unk_0xA16EC202D9D35357(), joaat("MotionState_Walk"), 1, 0, 0);
							unk_0xE642D0B9E7565C4A(unk_0x1788E93557766241(), 1f, 500, 0, 1, 0);
							if (unk_0xB9B1005BA7733220() != 4)
							{
								if (uParam1->f_31 == 999f)
								{
									uParam1->f_30 = 0f;
								}
								if (uParam1->f_31 == 999f)
								{
									Var211 = { unk_0x3093BF1CA6E5E16F(2) };
									uVar214 = unk_0xD1613577C809E98B(unk_0xA16EC202D9D35357());
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
								unk_0x60365B850FB7354F(fVar209, 1065353216);
								unk_0x20D6E0EA145DF751(fVar210);
								Var217 = { unk_0x2350B42564ED66B9() };
								Var220 = { unk_0x8F759040B8D528AF() };
								fVar223 = unk_0x4970185D4CC64616(Var217, Var220, 1);
								iVar224 = unk_0xF2DB717A73826179((fVar223 * 1000f));
								unk_0x00B28313F1FACD2D(0, 1, iVar224, 0, 0, 0);
							}
							break;
						
						default:
							break;
					}
					if (unk_0xCFC5CE3AD496DA0B(iVar4))
					{
						unk_0xE642CEBE4E7C3BF2(iVar4);
						iVar4 = -1;
					}
				}
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (!func_43(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		unk_0x46A747493835E815(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 1);
	}
	unk_0xC92B5D880C803814(unk_0x1788E93557766241(), true, 0);
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		unk_0x937785D9C1929236(unk_0xA16EC202D9D35357());
	}
	bVar225 = unk_0xFF9A3DC70D0FFB93();
	bVar226 = false;
	if (uParam1->f_32)
	{
		unk_0xA46083EE97A9EE65();
		if (!func_13(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
		{
			bVar226 = true;
		}
	}
	if (bVar225 || bVar226)
	{
		while ((bVar225 || bVar226) && !unk_0xB4B5BF5882A555F9())
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
			bVar225 = unk_0xFF9A3DC70D0FFB93();
			bVar226 = false;
			if (uParam1->f_32)
			{
				unk_0xA46083EE97A9EE65();
				if (!func_13(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
				{
					bVar226 = true;
				}
			}
		}
	}
	if (!unk_0x06771AF7795B3ECF(uParam1->f_16))
	{
		unk_0xB845ECB6BD2996BD(uParam1->f_16);
	}
	unk_0xB845ECB6BD2996BD(*uParam1);
	unk_0x27A62B1C26941E13(uVar5, 0);
	func_10(&(uParam1->f_34));
	if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
	{
		unk_0x117411595F7E531A(unk_0xA16EC202D9D35357(), 77, iVar3);
		unk_0xE31C4C317516E7A7(unk_0xA16EC202D9D35357(), 0);
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
	if (unk_0xBAB691F99A2A7346(uParam0->f_1))
	{
		unk_0x27A62B1C26941E13(uParam0->f_1, 0);
	}
	if (unk_0xBAB691F99A2A7346(uParam0->f_2))
	{
		unk_0x27A62B1C26941E13(uParam0->f_2, 0);
	}
	if (unk_0xBAB691F99A2A7346(uParam0->f_3))
	{
		unk_0x27A62B1C26941E13(uParam0->f_3, 0);
	}
	if (unk_0xBAB691F99A2A7346(uParam0->f_4))
	{
		unk_0x27A62B1C26941E13(uParam0->f_4, 0);
	}
}

void func_12(int iParam0, int iParam1, int iParam2)
{
	unk_0x4B404C739A9AFC7A(iParam0, iParam1, 1);
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
			if (!unk_0xE44A580B551C3645(uParam0->f_5))
			{
				func_11(uParam0);
				Var0 = { unk_0x2350B42564ED66B9() };
				if (bParam1)
				{
					Var0 = { Var0 + unk_0xC91C6BF96160A40B(uParam0->f_5) * FtoV(unk_0x0C380BB05B91042D()) };
				}
				Var3 = { unk_0x6FABF8E0B4B7C8EF(uParam0->f_5, Var0) };
				Var6 = { unk_0x3093BF1CA6E5E16F(2) };
				Var9 = { Var6 + uParam0->f_9 };
				Var12 = { Var9 - unk_0x1A6D58515B4120D5(uParam0->f_5, 2) };
				Var15 = { (-unk_0x0BADBFA3B172435F(Var9.f_2) * unk_0xD0FFB162F40A139C(Var9.f_0)), (unk_0xD0FFB162F40A139C(Var9.f_2) * unk_0xD0FFB162F40A139C(Var9.f_0)), unk_0x0BADBFA3B172435F(Var9.f_0) };
				Var18 = { (-unk_0x0BADBFA3B172435F(Var12.f_2) * unk_0xD0FFB162F40A139C(Var12.f_0)), (unk_0xD0FFB162F40A139C(Var12.f_2) * unk_0xD0FFB162F40A139C(Var12.f_0)), unk_0x0BADBFA3B172435F(Var12.f_0) };
				uVar21 = unk_0x9BD273C67DDFB939();
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = unk_0xBFDAFF4148D05E5C(1775630800, 0);
				}
				uParam0->f_1 = unk_0xBFDAFF4148D05E5C(26379945, 1);
				if (bParam1)
				{
					unk_0xA3CCB6D1FDD0DF5D(uParam0->f_1, uParam0->f_5, Var3, 1);
				}
				else
				{
					unk_0x7A77F1D5EE07F7AD(uParam0->f_1, Var0);
				}
				unk_0x2F60BEC0103AB8D0(uParam0->f_1, Var6, 2);
				unk_0xFDD170140EFC9F4C(uParam0->f_1, uVar21);
				uParam0->f_2 = unk_0xBFDAFF4148D05E5C(26379945, 1);
				if (bParam1 && !bParam4)
				{
					unk_0xA3CCB6D1FDD0DF5D(uParam0->f_2, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12), 1);
				}
				else
				{
					unk_0x7A77F1D5EE07F7AD(uParam0->f_2, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12));
				}
				unk_0x2F60BEC0103AB8D0(uParam0->f_2, Var6, 2);
				unk_0xFDD170140EFC9F4C(uParam0->f_2, uVar21);
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = unk_0xBFDAFF4148D05E5C(26379945, 1);
					if (bParam1 && !bParam4)
					{
						unk_0xA3CCB6D1FDD0DF5D(uParam0->f_4, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13), 1);
					}
					else
					{
						unk_0x7A77F1D5EE07F7AD(uParam0->f_4, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13));
					}
					unk_0x2F60BEC0103AB8D0(uParam0->f_4, Var6, 2);
					unk_0xFDD170140EFC9F4C(uParam0->f_4, uVar21);
				}
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					unk_0x290C9BCDD8E9607B(uParam0->f_3, uParam0->f_1, 0, 2);
					if (iParam6 == 0)
					{
						unk_0x290C9BCDD8E9607B(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
					}
					unk_0x290C9BCDD8E9607B(uParam0->f_3, uParam0->f_2, (uParam0->f_14 - uParam0->f_17), 2);
					unk_0xBE83888D5A2583A8(uParam0->f_3, iParam6);
					unk_0xC8CEF95C63B283EC(uParam0->f_3, 1);
				}
				else
				{
					unk_0x0069D19E3A367524(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
				unk_0x00B28313F1FACD2D(1, 0, 3000, 1, 0, 0);
				uParam0->f_7 = unk_0x09560C7DE2A384BD();
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
					if (unk_0x09560C7DE2A384BD() >= (uParam0->f_7 + uParam0->f_16))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									unk_0xDF3B1A0343547226("CamPushInFranklin", 0, 0);
									break;
								
								case 0:
									unk_0xDF3B1A0343547226("CamPushInMichael", 0, 0);
									break;
								
								case 2:
									unk_0xDF3B1A0343547226("CamPushInTrevor", 0, 0);
									break;
							}
						}
						else
						{
							unk_0xDF3B1A0343547226("CamPushInNeutral", 0, 0);
						}
						unk_0xC2E1777941B4536E(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						uParam0->f_8 = 1;
					}
				}
			}
			if (unk_0x09560C7DE2A384BD() >= (uParam0->f_7 + uParam0->f_15))
			{
				if (bParam2)
				{
					func_11(uParam0);
					unk_0x00B28313F1FACD2D(0, 0, 3000, 1, 0, 0);
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
	unk_0xA7CEB400EFD58154();
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
					unk_0x0D68C13151B68364(0);
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
		if (unk_0xD47B332729054512())
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
			unk_0x29DB79DD4D939B38(&Global_2264, 20);
			unk_0x29DB79DD4D939B38(&Global_2265, 17);
			unk_0x29DB79DD4D939B38(&Global_2266, 0);
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
			if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
			{
				if (unk_0x15383F5EDB73B6BB(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (func_24())
				{
					return 0;
				}
				if (unk_0xD7708B5D68A32CA0(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0xEAABEAE1DB589285(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0xD630B5603A1AED89(unk_0xA16EC202D9D35357()))
				{
					return 0;
				}
				if (unk_0x262A8E62D7274A0B(unk_0xA16EC202D9D35357(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68325)
				{
					if (unk_0x21FF064386DC6A0A(unk_0xA16EC202D9D35357()))
					{
						return 0;
					}
					if (unk_0x6CA3764368FA4573(unk_0x1788E93557766241()))
					{
						return 0;
					}
					if (unk_0x24C7291CDBC023F1(unk_0xA16EC202D9D35357()))
					{
						return 0;
					}
					if (unk_0x8ECFC7D353C3F775(unk_0x1788E93557766241()))
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
				if (unk_0x889D01384B54BCE3(Global_2264, 9))
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
	unk_0x0D68C13151B68364(0);
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
	unk_0x29DB79DD4D939B38(&Global_2265, 16);
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
	
	if (Global_68325)
	{
		iVar0 = 0;
		unk_0xC00D643B16552C4D(unk_0xA16EC202D9D35357(), &iVar1, 1);
		if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x76F7F25F198388A1() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		if (unk_0xFCCDE3C4E11113D7(unk_0xA16EC202D9D35357(), 78, 1))
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
		if (!unk_0xE44A580B551C3645(unk_0xA16EC202D9D35357()))
		{
			if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0xA609E58449080951(unk_0xA16EC202D9D35357()) == Global_97439.f_29795[2 /*29*/])
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
		if (Global_68325)
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
	return Global_34915 == iParam0;
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
				return Global_1327587.f_203[iParam1];
			}
			break;
	}
	return unk_0x889D01384B54BCE3(Global_1327587.f_949, iParam0);
}

void func_29()
{
	unk_0xD01024485E7AB68C();
	Global_16704 = 0;
	if ((unk_0xBE029393332523D7() || Global_14394.f_1 == 9) || Global_14393 == 1)
	{
		unk_0x0D68C13151B68364(0);
		Global_15693 = 6;
		Global_14394.f_1 = 3;
		return;
	}
	if (unk_0xD47B332729054512())
	{
		unk_0x0D68C13151B68364(1);
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
	Global_35466 = (unk_0x09560C7DE2A384BD() + iParam0);
}

void func_32()
{
	if (!Global_14394.f_1 == 1)
	{
		if (func_35(0))
		{
			func_33(0);
		}
		unk_0xD0E2BFCE93AE3ABD(&Global_2265, 2);
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
		unk_0xD0E2BFCE93AE3ABD(&Global_2265, 16);
	}
	if (unk_0xBE029393332523D7())
	{
		unk_0x0D68C13151B68364(0);
	}
	Global_15693 = 5;
	if (iParam0 == 1)
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_2264, 30);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&Global_2264, 30);
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
				unk_0x42F219BEF3DE3A7F(&Global_14331);
			}
			Global_14322 = { Global_14340[Global_14339 /*3*/] };
			unk_0x6CE18C954519D281(Global_14322);
		}
	}
	else if (Global_14552 == 1)
	{
		Global_14552 = 0;
		Global_14322 = { Global_14347[Global_14339 /*3*/] };
		if (bParam1)
		{
			unk_0x6CE18C954519D281(Global_14331);
		}
		else
		{
			unk_0x6CE18C954519D281(Global_14322);
		}
	}
}

int func_35(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x889D01384B54BCE3(Global_2264, 14))
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
	if (unk_0x16CDA1894CFE0781(joaat("cellphone_flashhand")) > 0)
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
	if (!Global_68325)
	{
		if (!unk_0x2DE0B96E966FD817(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x54CA1F435E64266A(iParam2, 0);
			}
			else
			{
				unk_0x54CA1F435E64266A(iParam2, 1);
			}
		}
		if (!unk_0x2DE0B96E966FD817(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7FFC0AE4D5A08F6(iParam2, 0);
			}
			else
			{
				unk_0xA7FFC0AE4D5A08F6(iParam2, 1);
			}
		}
	}
}

void func_37(char* sParam0, int iParam1)
{
	unk_0x5B4A49EA799C667F(sParam0);
	unk_0x644558F3AB755120(0, 0, 1, iParam1);
}

void func_38(int iParam0, var uParam1)
{
	if (func_39(uParam1, 1))
	{
		unk_0xA8CB9565815E74B7(iParam0, "HOSPITAL_0", 0f, 1f);
	}
	if (func_39(uParam1, 2))
	{
		unk_0xA8CB9565815E74B7(iParam0, "HOSPITAL_1", 0f, 1f);
	}
	if (func_39(uParam1, 4))
	{
		unk_0xA8CB9565815E74B7(iParam0, "HOSPITAL_2", 0f, 1f);
	}
	if (func_39(uParam1, 8))
	{
		unk_0xA8CB9565815E74B7(iParam0, "HOSPITAL_3", 0f, 1f);
	}
	if (func_39(uParam1, 16))
	{
		unk_0xA8CB9565815E74B7(iParam0, "HOSPITAL_4", 0f, 1f);
	}
	if (func_39(uParam1, 32))
	{
		unk_0xA8CB9565815E74B7(iParam0, "HOSPITAL_5", 0f, 1f);
	}
	if (func_39(uParam1, 64))
	{
		unk_0xA8CB9565815E74B7(iParam0, "HOSPITAL_6", 0f, 1f);
	}
	if (func_39(uParam1, 128))
	{
		unk_0xA8CB9565815E74B7(iParam0, "HOSPITAL_7", 0f, 1f);
	}
	if (func_39(uParam1, 256))
	{
		unk_0xA8CB9565815E74B7(iParam0, "HOSPITAL_8", 0f, 1f);
	}
	if (func_39(uParam1, 512))
	{
		unk_0xA8CB9565815E74B7(iParam0, "HOSPITAL_9", 0f, 1f);
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
	if (((Global_90042 == 13 || Global_90042 == 10) || Global_90042 == 11) || Global_90042 == 12)
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
		if (Global_87380[iVar0 /*17*/] && !Global_87380[iVar0 /*17*/].f_1)
		{
			if (Global_87380[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_87380[iVar0 /*17*/].f_5 != 88 && Global_87380[iVar0 /*17*/].f_5 != 89) && Global_87380[iVar0 /*17*/].f_5 != 92)
				{
					func_42(Global_87380[iVar0 /*17*/].f_5, 1);
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
			Global_84432[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_84432[iParam0 /*2*/] = 0;
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
		iVar1 = Global_35768[iVar0 /*5*/];
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
		if (Global_35742[iVar2 /*5*/] == 0)
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
	if (!Global_35742[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_35742[iParam0 /*5*/].f_1 == unk_0xA16EC202D9D35357())
		{
			Global_35963 = 0;
		}
	}
	Global_35742[iParam0 /*5*/] = 13;
	Global_35742[iParam0 /*5*/].f_1 = 0;
	Global_35742[iParam0 /*5*/].f_2 = 0;
	Global_35742[iParam0 /*5*/].f_3 = 0;
	Global_35742[iParam0 /*5*/].f_4 = 0;
	Global_35741 = (Global_35741 - 1);
	if (Global_35741 < 0)
	{
		Global_35741 = 0;
	}
}

int func_47(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	if (unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		func_51(0);
		unk_0x84710FE7666EBF7B(Param0, 5f, 1, 0, 0, 0);
		if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
		{
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				unk_0x6C43BF7625967266(unk_0xA16EC202D9D35357(), Param0, 1, 0, 0, 1);
				unk_0x34639238667C4381(unk_0xA16EC202D9D35357(), uParam3);
				unk_0x60365B850FB7354F(0f, 1065353216);
				unk_0x20D6E0EA145DF751(0f);
			}
		}
		unk_0xD3723C36F0F699D6(Param0, 4500f, 0);
		unk_0x4EDE34FBADD967A6(0);
		unk_0x84710FE7666EBF7B(Param0, 5000f, 1, 0, 0, 0);
		unk_0x035F3FE2F394644A(Param0, 5000f, 0);
		unk_0xF831E40D76C85CCF(Param0, 5000f);
		unk_0x3211CBD6CA142655(Param0, 5000f);
		func_50();
		func_49();
		unk_0xC1B1E9A034A63A62(0);
		func_51(1);
		if (!unk_0xA84F80DD9F675CED())
		{
			while (!unk_0xD3723C36F0F699D6(Param0, 4500f, 0))
			{
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					unk_0x8D033DA6320BDCF9(0);
					return 0;
				}
			}
		}
		unk_0xC1B1E9A034A63A62(0);
		while (!unk_0xDC7784B8DE7B58D5())
		{
			unk_0x4EDE34FBADD967A6(0);
			if (unk_0x83666F9FB8FEBD4B() > 20000)
			{
				unk_0x8D033DA6320BDCF9(0);
				if (unk_0xA84F80DD9F675CED())
				{
					unk_0x099E9F2D6F93D420();
				}
				return 0;
			}
		}
		if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
		{
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				if (unk_0xA84F80DD9F675CED())
				{
					unk_0x099E9F2D6F93D420();
				}
				unk_0x8D033DA6320BDCF9(0);
				unk_0xC1B1E9A034A63A62(0);
				unk_0x5B7A39233BA4D866();
				if (iParam5 == 1)
				{
					unk_0x24D95A4D5D165812();
				}
				else
				{
					unk_0xC1B1E9A034A63A62(5000);
				}
				unk_0x14BA6BC5DF2FCF4F();
			}
		}
		while ((!unk_0xAF2951FD7A3250FA() && !func_48()) && unk_0x83666F9FB8FEBD4B() < 1500)
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
			unk_0x21B0D803C4C9C45E(Param0, &(Param0.f_2), 0);
			unk_0x84710FE7666EBF7B(Param0, 5f, 1, 0, 0, 0);
			if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
			{
				if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
				{
					unk_0x6C43BF7625967266(unk_0xA16EC202D9D35357(), Param0, 1, 0, 0, 1);
					unk_0x34639238667C4381(unk_0xA16EC202D9D35357(), uParam3);
				}
			}
		}
		unk_0x60365B850FB7354F(0f, 1065353216);
		unk_0x20D6E0EA145DF751(0f);
		func_51(0);
		return 1;
	}
	func_51(0);
	return 0;
}

bool func_48()
{
	return !Global_67218.f_553;
}

void func_49()
{
	Global_67218.f_553 = 1;
	Global_67218.f_554 = 0;
}

void func_50()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		Global_67218[iVar0] = 0;
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
			if (!unk_0x889D01384B54BCE3(Global_90042.f_20, 2))
			{
				unk_0x8D033DA6320BDCF9(1);
				unk_0xD0E2BFCE93AE3ABD(&(Global_90042.f_20), 2);
			}
		}
		else if (unk_0x889D01384B54BCE3(Global_90042.f_20, 2))
		{
			unk_0x8D033DA6320BDCF9(0);
			unk_0x29DB79DD4D939B38(&(Global_90042.f_20), 2);
		}
	}
}

int func_52()
{
	if (unk_0x889D01384B54BCE3(unk_0x444ECD635D5FD45F(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

bool func_53(int iParam0)
{
	return unk_0x889D01384B54BCE3(Global_97439.f_5486[iParam0], 0);
}

int func_54(int iParam0)
{
	if (iParam0 == 144 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97439.f_7341.f_99.f_58[iParam0];
}

int func_55()
{
	if (Global_32362[11] == 1)
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
	return Global_97439.f_7341.f_328[iParam0 /*6*/];
}

int func_57()
{
	func_58();
	return Global_97439.f_1729.f_539.f_3213;
}

void func_58()
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
	{
		if (func_61(Global_97439.f_1729.f_539.f_3213) != unk_0xA609E58449080951(unk_0xA16EC202D9D35357()))
		{
			iVar0 = func_60(unk_0xA16EC202D9D35357());
			if (func_59(iVar0) && (!func_26(14) || Global_96391))
			{
				if (Global_97439.f_1729.f_539.f_3213 != iVar0 && func_59(Global_97439.f_1729.f_539.f_3213))
				{
					Global_97439.f_1729.f_539.f_3214 = Global_97439.f_1729.f_539.f_3213;
				}
				Global_97439.f_1729.f_539.f_3215 = iVar0;
				Global_97439.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97439.f_1729.f_539.f_3213 != 145)
			{
				Global_97439.f_1729.f_539.f_3215 = Global_97439.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97439.f_1729.f_539.f_3213 = 145;
}

bool func_59(int iParam0)
{
	return iParam0 < 3;
}

int func_60(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x538DF9E5B1DF01EB(iParam0))
	{
		iVar1 = unk_0xA609E58449080951(iParam0);
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
		return Global_97439.f_29795[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_62(bool bParam0)
{
	unk_0xA1D3E8BBFB4D4920(0f);
	unk_0x10B8CEB2B722BF40(0f);
	unk_0xAEED20447B8CECBE(0f);
	unk_0x32B9BE5C33D72403(1);
	unk_0x6826F3546F4ED44C(0f);
	unk_0x1AD37E488BC8D426(1);
	unk_0x9E450B87184E155A(0);
	if (unk_0x4CBFDAD06D630F7C("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0x124843CE93F39C27("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0x06771AF7795B3ECF(&Global_35943))
	{
		if (unk_0x4CBFDAD06D630F7C(&Global_35943))
		{
			unk_0x124843CE93F39C27(&Global_35943);
		}
	}
	if (unk_0xBAB691F99A2A7346(Global_35932))
	{
		if (unk_0xBFD41349389EDB4B(Global_35932))
		{
			unk_0xB37AA66899507900(Global_35932, 0f);
			unk_0x05F0ADDBF1E7785B(Global_35932, 1);
		}
	}
	if (bParam0)
	{
		if (unk_0xD6D9715C81634F0A() != -1 || unk_0xD58373CDEEC1F357() != -1)
		{
			unk_0x2116F20DFA679353();
		}
		else if (unk_0xB4B5BF5882A555F9())
		{
			unk_0x2116F20DFA679353();
		}
	}
	Global_35938 = 0f;
	StringCopy(&Global_35939, "", 16);
	StringCopy(&Global_35943, "", 64);
	StringCopy(&Global_35959, "", 16);
	func_63();
}

void func_63()
{
	Global_35931 = 0;
	Global_35932 = 0;
	Global_35933 = 0;
	Global_35934 = 30000;
	Global_35935 = 0f;
	Global_35937 = 0f;
	Global_35936 = 0f;
	Global_35938 = 0f;
	StringCopy(&Global_35939, "", 16);
}

void func_64(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
	int iVar24;
	int iVar25;
	
	if (bParam1)
	{
		if (unk_0x6A132B76AB7C7138())
		{
			unk_0xD2238E59B5C4A250(0);
		}
	}
	if (!unk_0x1DAD7CE53BEE7710())
	{
		uVar0 = iParam2;
		unk_0xC92B5D880C803814(iParam0, bParam1, uVar0);
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
		if (!func_68())
		{
			bVar23 = false;
			if (bParam1 == 1)
			{
				bVar23 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar23 = true;
			}
			if (bVar9 == 1)
			{
				bVar23 = true;
			}
			if (bVar23)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0x38FA37FE3518BA38(iParam0) && unk_0x2AF80829930084FD(iParam0))
		{
			iVar24 = unk_0xFF34D923BFB5E9FB(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x1DAD7CE53BEE7710())
				{
					unk_0x738AEBA425C3D093(1);
				}
				else
				{
					unk_0x423D1EBE54B18555(iVar24, !bVar13);
				}
				if (!bVar13)
				{
					if (unk_0x1DAD7CE53BEE7710() && !bVar18)
					{
						unk_0x738AEBA425C3D093(0);
					}
					Global_2414327[iParam0 /*255*/].f_238 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_67(iVar24) && !unk_0x3FE69FBCE43341D9(iVar24))
				{
					if (!bVar21)
					{
						unk_0x6A23C3306A8CF21B(iVar24, true, 0);
					}
				}
				if (!unk_0x5A6F774C8E17AA21(iVar24))
				{
					if (!bVar20)
					{
						unk_0x3CC3106305C40A28(iVar24, false);
					}
					unk_0x940C6B8BF42B190B(iVar24, 1);
				}
				else if (!bVar20)
				{
					unk_0x3CC3106305C40A28(iVar24, false);
				}
				unk_0xA8BC819B54F5B824(iVar24, true);
				unk_0x68068FC275E8AC83(iParam0, 0);
				unk_0xEDD99DCB19EC7C49(iVar24);
				unk_0x551186C5C186D1DC(iVar24, 1);
				func_66();
				func_65();
				if (unk_0xA5B13BF6970E2A56())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0xA84F80DD9F675CED())
				{
				}
				Global_2414327[iParam0 /*255*/].f_239 = 0;
				if (bParam3)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_67(iVar24) && !unk_0x3FE69FBCE43341D9(iVar24))
				{
					if (!bVar21)
					{
						unk_0x6A23C3306A8CF21B(iVar24, !bVar14, 0);
					}
					if (!unk_0x5A6F774C8E17AA21(iVar24))
					{
						if (!bVar20)
						{
							unk_0x3CC3106305C40A28(iVar24, bVar15);
						}
						if (!bVar15)
						{
							unk_0x940C6B8BF42B190B(iVar24, 1);
						}
					}
				}
				if (bVar9)
				{
					unk_0x68068FC275E8AC83(iParam0, 0);
				}
				else
				{
					unk_0x68068FC275E8AC83(iParam0, 1);
				}
				unk_0xA8BC819B54F5B824(iVar24, bVar16);
				if (bVar2)
				{
					if (!unk_0xF10879F2BBA41065(iVar24) && !unk_0x202EF5D8203705EF(iVar24, 0))
					{
						unk_0x9AB8F163FA160890(iVar24);
					}
				}
			}
			iVar25 = 0;
			if (bVar1)
			{
				iVar25 |= 2;
			}
			if (bVar2)
			{
				iVar25 |= 4;
			}
			if (bVar3)
			{
				iVar25 |= 8;
			}
			if (bVar4)
			{
				iVar25 |= 16;
			}
			if (bVar5)
			{
				iVar25 |= 32;
			}
			if (bVar6)
			{
				iVar25 |= 64;
			}
			if (bVar7)
			{
				iVar25 |= 128;
			}
			if (bVar8)
			{
				iVar25 |= 256;
			}
			if (bVar9)
			{
				iVar25 |= 512;
			}
			if (bVar10)
			{
				iVar25 |= 1024;
			}
			if (bVar11)
			{
				iVar25 |= 2048;
			}
			if (bVar12)
			{
				iVar25 |= 4096;
			}
			unk_0xC92B5D880C803814(iParam0, bParam1, iVar25);
		}
	}
}

void func_65()
{
	struct<2> Var0;
	
	Global_2422491.f_689 = 0;
	Global_2422491.f_690 = 0;
	Global_2422491.f_691 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2404570.f_1419 = { Var0 };
}

void func_66()
{
	Global_2404570.f_580 = 0;
	Global_2404570.f_1460 = 0;
	Global_2404570.f_453 = 0;
	Global_2414327[unk_0x1788E93557766241() /*255*/].f_204 = 0;
}

int func_67(int iParam0)
{
	int iVar0;
	
	if (unk_0x202EF5D8203705EF(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x221AC1EF116F6053(iParam0, -1794415470);
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
	if (!func_71(Global_35768[iLocal_63 /*5*/].f_2))
	{
		return;
	}
	iVar0 = unk_0x444ECD635D5FD45F(500, 3000);
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
	if (unk_0x2DE0B96E966FD817(Local_42.f_1))
	{
		if (unk_0x202EF5D8203705EF(Local_42.f_1, 0) || unk_0x5E01840EE8DA8D5B(Local_42.f_1))
		{
			return 0;
		}
		if (unk_0x3E2CBC76562DEC80(Local_42.f_1))
		{
			return 0;
		}
		if (func_78(Local_42.f_1))
		{
			return 0;
		}
	}
	if (Global_35768[iLocal_63 /*5*/].f_3 < 3 && Global_35768[iLocal_63 /*5*/].f_3 != 0)
	{
		return 0;
	}
	if (Global_35768[iLocal_63 /*5*/].f_4 < 9 && Global_35768[iLocal_63 /*5*/].f_4 != 0)
	{
		return 0;
	}
	uVar1 = func_77(iParam0);
	if (unk_0x06771AF7795B3ECF(uVar1))
	{
		return 0;
	}
	if (func_78(Local_42.f_1))
	{
		return 0;
	}
	unk_0x660D567D3EB18812(sVar1);
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
		if (!unk_0x06771AF7795B3ECF(sVar2) && !unk_0x06771AF7795B3ECF(sVar3))
		{
			unk_0x3D28909AF30D70F4(sVar2);
			while (!unk_0x6C47E32491756A1A(sVar2))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (!unk_0x2DE0B96E966FD817(Local_42.f_1))
			{
				unk_0x5B5659C49032B96C(Local_42.f_1, sVar2, sVar3, 1.5f, -1.5f, -1, 48, 0, 0, 0, 0);
				sLocal_53 = sVar3;
			}
		}
	}
	if (!unk_0x307330CEB84DD3AE(sVar1))
	{
		return 0;
	}
	if (unk_0x2DE0B96E966FD817(Local_42.f_1))
	{
		return 0;
	}
	unk_0xA956F9A1F0F9C2EC(Local_42.f_1, sVar1, 0.75f);
	if (unk_0xB9B1005BA7733220() == 4)
	{
		unk_0x8D6A1A3EB49F3208(Local_42.f_1, "move_ped_strafing_firstperson@drunk");
	}
	unk_0x6BD9B34A6ACA9744(Local_42.f_1, 0, sVar1, "idle", 2f, 1);
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
			if (unk_0x2303B9FE7CF81971(Local_42.f_1))
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
			else if (unk_0x998FA6EE0C28BE23(Local_42.f_1))
			{
				iVar4 = "FACIALS@GEN_MALE@BASE";
			}
			else
			{
				iVar4 = "FACIALS@GEN_FEMALE@BASE";
			}
			break;
	}
	unk_0xBEB7C924FCBF3C50(Local_42.f_1, "mood_drunk_1", iVar4);
	unk_0x117411595F7E531A(Local_42.f_1, 200, 1);
	unk_0x117411595F7E531A(Local_42.f_1, 46, 1);
	unk_0x54CA1F435E64266A(Local_42.f_1, 0);
	unk_0xDEB0A02F25120B62(Local_42.f_1, 262144, 1);
	unk_0x408018F4DA0FBE7C(Local_42.f_1, 1);
	return 1;
}

bool func_72()
{
	return func_73(unk_0x1788E93557766241());
}

int func_73(int iParam0)
{
	if (unk_0xA609E58449080951(unk_0xFF34D923BFB5E9FB(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_74(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x202EF5D8203705EF(iParam0, 1) || unk_0x5E01840EE8DA8D5B(iParam0))
	{
		return 0;
	}
	if (unk_0x221AC1EF116F6053(iParam0, -2017877118) != 7)
	{
		return 0;
	}
	if (unk_0x221AC1EF116F6053(iParam0, 1785177548) != 7)
	{
		return 0;
	}
	if (unk_0x7D0624057C8895A0(iParam0))
	{
		return 0;
	}
	if (unk_0x7F40BDE5E3EA9E62(iParam0))
	{
		return 0;
	}
	if (unk_0xEAABEAE1DB589285(iParam0))
	{
		return 0;
	}
	if (unk_0x048742CFEDBEF960(iParam0))
	{
		return 0;
	}
	if (Global_67066)
	{
		return 0;
	}
	if (func_76())
	{
		return 0;
	}
	if (iParam0 == unk_0xA16EC202D9D35357())
	{
		if (!unk_0x6C6597C80E466BC6(unk_0x1788E93557766241()))
		{
			return 0;
		}
		if (!unk_0x94E1FA8CDE39A74B(unk_0x1788E93557766241()))
		{
			return 0;
		}
		if (unk_0xC121BFE894DB4BDB(unk_0x1788E93557766241()) || unk_0xDE31A932C72990F1(unk_0x1788E93557766241()))
		{
			return 0;
		}
		if (func_75())
		{
			return 0;
		}
	}
	Var0 = { unk_0xC91C6BF96160A40B(iParam0) };
	if (unk_0xA8CEACB4F35AE058(Var0) >= (1f * 1f))
	{
		return 0;
	}
	return 1;
}

bool func_75()
{
	return Global_90094.f_291 > 0;
}

bool func_76()
{
	return unk_0x09560C7DE2A384BD() <= Global_17238.f_5130 + 100;
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
	if (unk_0x06771AF7795B3ECF(Local_59.f_2))
	{
		if (unk_0x06771AF7795B3ECF(uVar1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return unk_0x9BA82E09A986BA4B(Local_59.f_2, sVar1);
}

int func_79(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!unk_0x538DF9E5B1DF01EB(iParam0))
	{
		return -1;
	}
	iVar0 = func_81(iParam0);
	iVar1 = func_80(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_35768[iVar1 /*5*/].f_2;
}

int func_80(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_35768[iVar0 /*5*/] == iParam0)
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
		if (iParam0 == Global_35768[iVar0 /*5*/].f_1)
		{
			return Global_35768[iVar0 /*5*/];
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
	if (unk_0xE44A580B551C3645(Local_42.f_4))
	{
		return 0;
	}
	Var0 = { unk_0xBF8499F46AD9093A(Local_42.f_1, 1) };
	Var3 = { unk_0xBF8499F46AD9093A(Local_42.f_4, 1) };
	fVar6 = unk_0x4970185D4CC64616(Var0, Var3, 1);
	return fVar6 < 7f;
}

void func_85()
{
	int iVar0;
	char* sVar1;
	
	if (Local_42.f_1 == unk_0xA16EC202D9D35357())
	{
		unk_0x4B404C739A9AFC7A(0, 36, 1);
		if (unk_0x690EB620C80E4D58(Local_42.f_1))
		{
			if (Global_35768[iLocal_63 /*5*/].f_2 == 0 || Global_35768[iLocal_63 /*5*/].f_2 == 2)
			{
				unk_0xAE5253EA258993E7(Local_42.f_1, 0, 0);
			}
		}
		if (unk_0x03C806A12329A320(Local_42.f_1))
		{
			unk_0x7C8D5BBFB6F2CD4B(Local_42.f_1, 0);
		}
	}
	if (Local_54.f_0 != -2)
	{
		if (Local_54.f_0 == -1)
		{
			if (Global_35768[iLocal_63 /*5*/].f_2 != 0)
			{
				Global_35768[iLocal_63 /*5*/].f_2 = 0;
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
			if (Global_35768[iLocal_63 /*5*/].f_2 == 0)
			{
				if (iVar0 < 30)
				{
					Global_35768[iLocal_63 /*5*/].f_2 = 2;
					if (!func_71(2))
					{
						Global_35768[iLocal_63 /*5*/].f_2 = 0;
						return;
					}
				}
			}
			if (Global_35768[iLocal_63 /*5*/].f_2 == 2)
			{
				if (iVar0 < 10)
				{
					Global_35768[iLocal_63 /*5*/].f_2 = 1;
					if (!func_71(2))
					{
						Global_35768[iLocal_63 /*5*/].f_2 = 2;
						return;
					}
				}
			}
			if (Global_35768[iLocal_63 /*5*/].f_2 == 1)
			{
			}
		}
	}
	else
	{
		return;
	}
	if (!unk_0x06771AF7795B3ECF(sLocal_53))
	{
		if (!func_74(Local_42.f_1))
		{
			sVar1 = "MOVE_M@DRUNK@TRANSITIONS";
			if (unk_0x95EDB2DEFA5BB405(Local_42.f_1, sVar1, sLocal_53, 3))
			{
				unk_0x5A8C213A1384C077(Local_42.f_1, sVar1, sLocal_53, -4f);
			}
			sLocal_53 = "";
			return;
		}
	}
	if (Global_35768[iLocal_63 /*5*/].f_3 >= 10 || Global_35768[iLocal_63 /*5*/].f_4 >= 15)
	{
		if (unk_0x221AC1EF116F6053(Local_42.f_1, 1785177548) == 1)
		{
			return;
		}
		if (unk_0x2E7891B765D55582(Local_42.f_1))
		{
			return;
		}
		if (unk_0x202EF5D8203705EF(Local_42.f_1, 1))
		{
			if (Global_35768[iLocal_63 /*5*/].f_3 >= 10)
			{
				Global_35768[iLocal_63 /*5*/].f_3 = 9;
			}
			if (Global_35768[iLocal_63 /*5*/].f_4 >= 15)
			{
				Global_35768[iLocal_63 /*5*/].f_4 = 14;
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
	
	if (!unk_0x74AE4BA75DB7653F(Local_42.f_1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = unk_0x6ADAC08D70C79DE5(Local_42.f_1, 0);
	if (!unk_0xECFECDAD51A6184F(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0xD8A521688BDBE867(iVar0, -1) == Local_42.f_1)
	{
		return 0;
	}
	Local_42.f_4 = iVar0;
	Local_59.f_0 = 7;
	return 1;
}

void func_87()
{
	if (!unk_0x202EF5D8203705EF(Local_42.f_1, 0))
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
	if (!unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
	{
		return;
	}
	if (!unk_0x74AE4BA75DB7653F(unk_0xA16EC202D9D35357()))
	{
		return;
	}
	if (unk_0xB8E47EB7E42A6AA4(unk_0x1788E93557766241(), 0))
	{
		return;
	}
	iVar0 = unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0);
	fVar1 = unk_0x5AF66EDEBFA76B9B(iVar0);
	if (fVar1 < 5f)
	{
		return;
	}
	Var2 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 1) };
	Var5 = { Var2 - Vector(3f, 30f, 30f) };
	Var8 = { Var2 + Vector(3f, 30f, 30f) };
	if (!unk_0xD398EB65A5D325DF(Var5, Var8) && !unk_0xCA34E4192F6CE2E9(Var5, Var8))
	{
		return;
	}
	unk_0x3F0BA82186A21202(unk_0x1788E93557766241(), 1, 0);
	unk_0x20B787477FD9ECB2(unk_0x1788E93557766241(), 0);
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
	if (unk_0x202EF5D8203705EF(Local_42.f_1, 0))
	{
		iVar1 = unk_0x6ADAC08D70C79DE5(Local_42.f_1, 0);
		iVar2 = unk_0xD8A521688BDBE867(iVar1, -1);
		if (!iVar2 == Local_42.f_1)
		{
			return;
		}
		if (unk_0x1DAD7CE53BEE7710() && !unk_0xC7402AE8FD6AACA2(iVar1))
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!unk_0xA16EC202D9D35357() == Local_42.f_1)
	{
		return;
	}
	else if (!unk_0xB9B1005BA7733220() == 4)
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
	if (unk_0xA34B85701D8A1FA8(iVar0))
	{
		Local_54.f_4 = unk_0x83666F9FB8FEBD4B() + 2000;
	}
	else
	{
		Local_54.f_4 = unk_0x83666F9FB8FEBD4B() + 1000;
	}
	fVar3 = unk_0x5AF66EDEBFA76B9B(iVar0);
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
	
	fVar0 = unk_0x1E253A1A83763D22(-fParam1, fParam1);
	fVar1 = unk_0x1E253A1A83763D22(0f, fParam2);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 - fVar1);
	}
	else
	{
		fVar0 = (fVar0 + fVar1);
	}
	if (unk_0xA34B85701D8A1FA8(iParam0))
	{
		if (unk_0xD7708B5D68A32CA0(unk_0xA7CC89FF539E1376(iParam0)))
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
		iVar2 = unk_0xA609E58449080951(iParam0);
		if (unk_0x2FDD93A1F5E63663(iVar2))
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
	if (unk_0x1DAD7CE53BEE7710() && !unk_0xC7402AE8FD6AACA2(iParam0))
	{
		return;
	}
	if (unk_0xA34B85701D8A1FA8(iParam0))
	{
		unk_0xFDB3B3EA37869E5F(unk_0xA7CC89FF539E1376(iParam0), fParam1);
	}
	else if (unk_0x9FF5D51C24AD2308(iParam0))
	{
		unk_0x1E1B24BEA272008E(unk_0xF22EE5E4C0C2704B(iParam0), fParam1);
	}
}

void func_92()
{
	int iVar0;
	
	if (!unk_0x202EF5D8203705EF(Local_42.f_1, 0))
	{
		Local_59.f_0 = 4;
		return;
	}
	if (unk_0x1DAD7CE53BEE7710())
	{
		if (Global_35768[iLocal_63 /*5*/].f_3 >= 10 || Global_35768[iLocal_63 /*5*/].f_4 >= 15)
		{
			if (Global_35768[iLocal_63 /*5*/].f_3 >= 10)
			{
				Global_35768[iLocal_63 /*5*/].f_3 = 9;
			}
			if (Global_35768[iLocal_63 /*5*/].f_4 >= 15)
			{
				Global_35768[iLocal_63 /*5*/].f_4 = 14;
			}
		}
	}
	if (bLocal_49)
	{
		return;
	}
	iVar0 = unk_0x6ADAC08D70C79DE5(Local_42.f_1, 0);
	if (!unk_0xECFECDAD51A6184F(iVar0, 0))
	{
		unk_0xBB5AA994E06B28E2(Local_42.f_1, 0, 0);
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
	iVar0 = unk_0x221AC1EF116F6053(unk_0xA16EC202D9D35357(), 355471868);
	if (!iVar0 == 7)
	{
		Local_54.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
		return;
	}
	if (!unk_0x202EF5D8203705EF(Local_42.f_1, 0))
	{
		Local_59.f_0 = 4;
		Local_54.f_3 = -2;
		return;
	}
	iVar1 = unk_0x6ADAC08D70C79DE5(Local_42.f_1, 0);
	iVar2 = unk_0xD8A521688BDBE867(iVar1, -1);
	if (iVar2 == Local_42.f_1)
	{
		func_94();
		Local_54.f_3 = -2;
		return;
	}
	unk_0xE8AD4366EEC5C2B2(Local_42.f_1, iVar1);
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
	if (unk_0x74AE4BA75DB7653F(Local_42.f_1))
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
	if (bVar1 || unk_0x74AE4BA75DB7653F(Local_42.f_1))
	{
		if (!bLocal_49)
		{
		}
		iVar0 = unk_0x6ADAC08D70C79DE5(Local_42.f_1, 0);
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
				unk_0xBB5AA994E06B28E2(Local_42.f_1, 0, 0);
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
		iVar2 = unk_0xD8A521688BDBE867(Local_42.f_4, -1);
		if (iVar2 == Local_42.f_1)
		{
			func_94();
			return;
		}
		unk_0xE8AD4366EEC5C2B2(Local_42.f_1, iVar0);
		Local_59.f_0 = 9;
		Local_54.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
		return;
	}
	if (!func_84())
	{
		unk_0x937785D9C1929236(Local_42.f_1);
		Local_59.f_0 = 4;
		return;
	}
	if (!bLocal_49)
	{
		iVar3 = unk_0x221AC1EF116F6053(Local_42.f_1, -1794415470);
		if (iVar3 == 7)
		{
			if (!unk_0x202EF5D8203705EF(Local_42.f_1, 0))
			{
				unk_0x937785D9C1929236(Local_42.f_1);
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
	if (!unk_0xECFECDAD51A6184F(Local_42.f_4, 0))
	{
		Local_42.f_4 = 0;
		Local_59.f_0 = 4;
		return;
	}
	Var0 = { unk_0xBF8499F46AD9093A(Local_42.f_1, 1) };
	Var3 = { unk_0xBF8499F46AD9093A(Local_42.f_4, 1) };
	fVar6 = unk_0x4970185D4CC64616(Var0, Var3, 1);
	if (fVar6 > 3f)
	{
		if (!func_71(Global_35768[iLocal_63 /*5*/].f_2))
		{
			Local_59.f_0 = 12;
			return;
		}
		Local_59.f_0 = 5;
		Local_54.f_2 = unk_0x83666F9FB8FEBD4B() + 2000;
		return;
	}
	iVar7 = unk_0xE3C88401E17BFBB2(Local_42.f_4);
	iVar8 = 0;
	bVar9 = true;
	iVar8 = 1;
	while (bVar9)
	{
		if (iVar8 < iVar7)
		{
			if (unk_0x557C6E696286C67A(Local_42.f_4, iVar8))
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
	unk_0xA34C986DDC3D92F1(Local_42.f_1, Local_42.f_4, -1, iVar8, 1073741824, 1, 0);
	Local_59.f_0 = 7;
}

void func_98()
{
	if (!unk_0x538DF9E5B1DF01EB(Local_42.f_1))
	{
		return;
	}
	if (!unk_0x2DE0B96E966FD817(Local_42.f_1))
	{
		unk_0xBD489EEEE752CD58(Local_42.f_1, 1048576000);
		unk_0x7B53E41AFEC81CDF(Local_42.f_1);
		unk_0xA8FE3DB7FAC4DE1B(Local_42.f_1, 0, -1056964608);
		Local_59.f_2 = "";
		unk_0xC645CDA4EE3EECBC(Local_42.f_1);
		unk_0x117411595F7E531A(Local_42.f_1, 200, 0);
		unk_0x117411595F7E531A(Local_42.f_1, 46, 0);
		unk_0x54CA1F435E64266A(Local_42.f_1, 1);
		unk_0xDEB0A02F25120B62(Local_42.f_1, 262144, 0);
		unk_0x408018F4DA0FBE7C(Local_42.f_1, 0);
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
	unk_0xBD489EEEE752CD58(uParam0, 1048576000);
	unk_0xA8FE3DB7FAC4DE1B(uParam0, 0, -1056964608);
	unk_0x117411595F7E531A(uParam0, 200, 0);
	unk_0x54CA1F435E64266A(iParam0, 1);
	unk_0xDEB0A02F25120B62(iParam0, 262144, 0);
	unk_0x408018F4DA0FBE7C(iParam0, 0);
}

void func_102()
{
	int iVar0;
	
	if (Local_54.f_0 == -1)
	{
		Global_35768[iLocal_63 /*5*/].f_2 = 0;
	}
	else if (Global_35768[iLocal_63 /*5*/].f_3 < 3 && Global_35768[iLocal_63 /*5*/].f_3 != 0)
	{
		Global_35768[iLocal_63 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_54.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_35768[iLocal_63 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_35768[iLocal_63 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_35768[iLocal_63 /*5*/].f_2 = 1;
		}
	}
	if (unk_0x202EF5D8203705EF(Local_42.f_1, 0))
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
	if (!func_71(Global_35768[iLocal_63 /*5*/].f_2))
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
		iVar0 = Global_35849[iVar1 /*5*/].f_2;
		if (!iVar0 == 6)
		{
			if (Global_35849[iVar1 /*5*/].f_1 == iLocal_47)
			{
				func_106(iVar1);
				func_105(iVar1);
			}
			else if (Global_35849[iVar1 /*5*/].f_1 == 2)
			{
				if (!iLocal_48 == -1)
				{
					if (iLocal_48 == Global_35849[iVar1 /*5*/])
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
	Global_35849[iParam0 /*5*/] = -1;
	Global_35849[iParam0 /*5*/].f_1 = -1;
	Global_35849[iParam0 /*5*/].f_2 = 6;
	Global_35849[iParam0 /*5*/].f_3 = 0;
	Global_35849[iParam0 /*5*/].f_4 = 0;
}

void func_106(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_35849[iParam0 /*5*/].f_2;
	switch (iVar0)
	{
		case 1:
			func_131();
			break;
		
		case 2:
			func_110(Global_35849[iParam0 /*5*/].f_4);
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
	
	Global_35768[iLocal_63 /*5*/].f_4++;
	if (Local_54.f_0 == -1)
	{
		Global_35768[iLocal_63 /*5*/].f_2 = 0;
	}
	else if (Global_35768[iLocal_63 /*5*/].f_4 < 9 && Global_35768[iLocal_63 /*5*/].f_4 != 0)
	{
		Global_35768[iLocal_63 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_54.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_35768[iLocal_63 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_35768[iLocal_63 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_35768[iLocal_63 /*5*/].f_2 = 1;
		}
		if (!func_78(Local_42.f_1))
		{
			func_71(Global_35768[iLocal_63 /*5*/].f_2);
		}
	}
}

void func_109()
{
	int iVar0;
	
	Global_35768[iLocal_63 /*5*/].f_3++;
	if (Local_54.f_0 == -1)
	{
		Global_35768[iLocal_63 /*5*/].f_2 = 0;
	}
	else if (Global_35768[iLocal_63 /*5*/].f_3 < 3 && Global_35768[iLocal_63 /*5*/].f_3 != 0)
	{
		Global_35768[iLocal_63 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_54.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_35768[iLocal_63 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_35768[iLocal_63 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_35768[iLocal_63 /*5*/].f_2 = 1;
		}
		if (!func_78(Local_42.f_1))
		{
			func_71(Global_35768[iLocal_63 /*5*/].f_2);
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
		iLocal_62 = unk_0xD25129559B94E910(unk_0x1788E93557766241());
		return;
	}
	iVar0 = unk_0xD25129559B94E910(unk_0x1788E93557766241());
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
		if (iParam0 == Global_35849[iVar0 /*5*/])
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
	if (!unk_0xE44A580B551C3645(Local_42.f_1))
	{
		if (unk_0x74AE4BA75DB7653F(Local_42.f_1))
		{
			Local_59.f_0 = 10;
		}
	}
	if (bLocal_49)
	{
		func_122();
		func_8(71, 1);
		if (unk_0x1DAD7CE53BEE7710())
		{
			iVar0 = func_121(2050, -1, 0);
			iVar1 = (iVar0 / 10) + 1 * 10;
			if (iVar0 + 1 >= iVar1)
			{
				func_119(iVar1);
			}
			func_116(2050, iVar0 + 1, -1, 1);
		}
		else
		{
			iVar2 = 0;
			iVar3 = 0;
			iVar4 = 0;
			unk_0x3ED04C9A60CBD249(joaat("sp0_sp_num_times_drunk"), &iVar2, -1);
			unk_0x3ED04C9A60CBD249(joaat("sp1_sp_num_times_drunk"), &iVar3, -1);
			unk_0x3ED04C9A60CBD249(joaat("sp2_sp_num_times_drunk"), &iVar4, -1);
			iVar5 = ((iVar2 + iVar3) + iVar4);
			iVar6 = (iVar5 / 10) + 1 * 10;
			if (iVar5 + 1 >= iVar6)
			{
				func_119(iVar6);
			}
			switch (func_57())
			{
				case 0:
					unk_0x680350124CC21957(joaat("sp0_sp_num_times_drunk"), iVar2 + 1, 1);
					break;
				
				case 1:
					unk_0x680350124CC21957(joaat("sp1_sp_num_times_drunk"), iVar3 + 1, 1);
					break;
				
				case 2:
					unk_0x680350124CC21957(joaat("sp2_sp_num_times_drunk"), iVar4 + 1, 1);
					break;
				}
		}
		Local_59.f_1 = 1;
		return;
	}
	Local_59.f_1 = 12;
	if (Local_54.f_0 == -1)
	{
		Global_35768[iLocal_63 /*5*/].f_2 = 0;
	}
	else if (Global_35768[iLocal_63 /*5*/].f_3 < 3 && Global_35768[iLocal_63 /*5*/].f_3 != 0)
	{
		Global_35768[iLocal_63 /*5*/].f_2 = -1;
	}
	else
	{
		iVar7 = (Local_54.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar7 <= 0)
		{
			iVar7 = 0;
		}
		iVar7 = (iVar7 / 1000) + 1;
		Global_35768[iLocal_63 /*5*/].f_2 = 0;
		if (iVar7 < 30)
		{
			Global_35768[iLocal_63 /*5*/].f_2 = 2;
		}
		if (iVar7 < 10)
		{
			Global_35768[iLocal_63 /*5*/].f_2 = 1;
		}
	}
}

void func_116(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2455246[iParam0 /*5*/][func_117(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x680350124CC21957(iVar0, iParam1, iParam3);
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
			Global_2454959 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454959 = 1;
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
	Global_2408985[iVar0 /*83*/] = 81;
	Global_2408985[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2408985[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_120(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2408985[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2408985[iVar1 /*83*/] == 0)
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
	uVar0 = Global_2455246[iParam0 /*5*/][func_117(iParam1)];
	if (unk_0x3ED04C9A60CBD249(uVar0, &uVar1, -1))
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
	Global_35849[iVar0 /*5*/] = iParam0;
	Global_35849[iVar0 /*5*/].f_1 = iParam1;
	Global_35849[iVar0 /*5*/].f_2 = iParam2;
	Global_35849[iVar0 /*5*/].f_3 = iParam3;
	Global_35849[iVar0 /*5*/].f_4 = iParam4;
}

int func_126()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_35849[iVar0 /*5*/].f_2 == 6)
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
		if (iParam2 == Global_35849[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_35849[iVar0 /*5*/])
			{
				if (iParam1 == Global_35849[iVar0 /*5*/].f_1)
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
	if (Local_42.f_1 == unk_0xA16EC202D9D35357())
	{
		bLocal_49 = true;
		Global_35964 = 1;
		Global_35966++;
	}
	if (!unk_0xE44A580B551C3645(Local_42.f_1))
	{
		iVar0 = func_60(Local_42.f_1);
		switch (iVar0)
		{
			case 17:
				unk_0x3E99D575EE07FDB3(Local_42.f_1, "AMANDA_DRUNK");
				break;
			
			case 19:
				unk_0x3E99D575EE07FDB3(Local_42.f_1, "LAMAR_DRUNK");
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
		if (!unk_0xE44A580B551C3645(Local_42.f_1))
		{
			iVar0 = func_60(Local_42.f_1);
			if (Global_35768[iLocal_63 /*5*/].f_4 > 0)
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
					unk_0x3E99D575EE07FDB3(Local_42.f_1, "AMANDA_NORMAL");
					break;
				
				case 19:
					unk_0x3E99D575EE07FDB3(Local_42.f_1, "LAMAR_NORMAL");
					break;
				}
			}
	}
	func_98();
	if (bLocal_49)
	{
		Global_35964 = 0;
	}
	func_132();
	unk_0xB845ECB6BD2996BD(func_77(0));
	unk_0xB845ECB6BD2996BD(func_77(2));
	unk_0xB845ECB6BD2996BD(func_77(1));
	Global_1699182 = 0;
	if (unk_0x16CDA1894CFE0781(joaat("appemail")) > 0)
	{
		func_33(0);
	}
	unk_0x82706E6C897B0FA1();
}

void func_132()
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (unk_0xE44A580B551C3645(Local_42.f_1))
	{
		return;
	}
	uVar0 = Local_42.f_1;
	if (unk_0x202EF5D8203705EF(Local_42.f_1, 0))
	{
		uVar1 = unk_0x6ADAC08D70C79DE5(Local_42.f_1, 0);
		iVar2 = unk_0xD8A521688BDBE867(uVar1, -1);
		if (!Local_42.f_1 == iVar2)
		{
			return;
		}
		uVar0 = iVar1;
	}
	else if (!unk_0xB9B1005BA7733220() == 4 || !unk_0xA16EC202D9D35357() == Local_42.f_1)
	{
		return;
	}
	fLocal_52 = 0f;
	func_91(uVar0, 0f);
}

void func_133(var uParam0, char* sParam1, int iParam2)
{
	unk_0xD550A19A432377FF(uParam0, sParam1, func_134(iParam2), 1);
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

