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
	if (unk_0xBCA819F9975BEDFA(2))
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
		if ((unk_0x63C468D583002D23() && !unk_0xF7271A9481CAC8E3()) && !func_5())
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
	Global_2443134.f_634 = 1;
}

var func_3()
{
	return Global_2443134.f_613;
}

bool func_4()
{
	return unk_0x48B8265059381CD0(Global_2443134.f_2, 11);
}

bool func_5()
{
	return unk_0x48B8265059381CD0(Global_2443905.f_1.f_2809, 3);
}

void func_6()
{
	bool bVar0;
	
	if (unk_0xA929B2923D14E2F8(Local_43.f_1, 0))
	{
		func_145();
	}
	if (bLocal_50)
	{
		if (!unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
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
	
	unk_0xE9062A1E9EC059E7(Local_43.f_1, 3000, 3500, 0, 1, 1, 0);
	Global_1760205 = 1;
	if (!unk_0x25BD4C26D84038CD())
	{
		unk_0x50FD1894558DE186(2500);
		while (unk_0x46EEE08565CE19CA())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (unk_0x63C468D583002D23())
	{
		func_81(unk_0xBE369BE1BC57A796(), 0, 57344);
		Global_2404994.f_2212 = 1;
		if (unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0))
		{
			Global_2404994.f_2213 = 1;
		}
		else
		{
			Global_2404994.f_2213 = 0;
		}
		if (unk_0xE77D3AC9C1449801())
		{
			unk_0x011AE968D1EA959B(0);
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
	if (!unk_0xA929B2923D14E2F8(Local_43.f_1, 0))
	{
		unk_0x5DC8C2F2F8A363C2(Local_43.f_1, Var1.f_5, 1, 0, 0, 1);
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
	if (Global_51564[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x63C468D583002D23())
	{
		return;
	}
	if (Global_51564[iParam0 /*7*/])
	{
		unk_0x7FE4F330D3D74809(Global_51564[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x731753D8494ABECD(Global_51564[iParam0 /*7*/].f_1, iVar0, 1);
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
	unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), false, 0);
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0xC6042F55A6EA17B2(unk_0x17B5CC8A8615737D(), 1);
	}
	unk_0x38130BEB2174F958(uParam1->f_5, 4500f);
	unk_0x794A3BB49F59DF31(uParam1->f_5, 4500f);
	unk_0x1B60289D0F2A2E3C(uParam1->f_5, 5f, 1, 0, 0, 0);
	unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), uParam1->f_5, 1, 0, 0, 1);
	unk_0x98F0FA127445E343(unk_0x17B5CC8A8615737D(), true);
	unk_0x4EDE34FBADD967A6(0);
	unk_0xD278B72A700DC2DC(1);
	unk_0xA0E7D0E8FE126EE8(*uParam1);
	if (unk_0x9C88EB7B70229335(uParam1->f_16))
	{
	}
	else
	{
		unk_0xA0E7D0E8FE126EE8(uParam1->f_16);
	}
	if (!unk_0x25BD4C26D84038CD())
	{
		unk_0x50FD1894558DE186(0);
	}
	func_47(uParam1->f_5, uParam1->f_8.f_2, 0, 1);
	if (!unk_0x25BD4C26D84038CD())
	{
		unk_0x50FD1894558DE186(0);
	}
	iVar1 = unk_0x94E3E074F38DF86C() + 20000;
	bVar2 = false;
	uParam1->f_33 = 0;
	while (!bVar2 && iVar1 > unk_0x94E3E074F38DF86C())
	{
		bVar2 = true;
		unk_0xA0E7D0E8FE126EE8(*uParam1);
		if (!unk_0xF4F8AE8DD0F08C1E(*uParam1))
		{
			bVar2 = false;
		}
		if (!unk_0x9C88EB7B70229335(uParam1->f_16))
		{
			unk_0xA0E7D0E8FE126EE8(uParam1->f_16);
			if (!unk_0xF4F8AE8DD0F08C1E(uParam1->f_16))
			{
				bVar2 = false;
			}
		}
		if (!unk_0x25BD4C26D84038CD())
		{
			unk_0x50FD1894558DE186(0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_44();
	if (!func_43(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		unk_0xE6FC8C18754D8C2D(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 0, 1);
		unk_0x0668B21A0C3A4821(uParam1->f_5 + uParam1->f_19, (unk_0x652D2EEEF1D3E62C(uParam1->f_22) + 25f), 0, 0, 0, 0, 0);
		unk_0x1B60289D0F2A2E3C(uParam1->f_5 + uParam1->f_19, (unk_0x652D2EEEF1D3E62C(uParam1->f_22) + 25f), 1, 0, 0, 0);
	}
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0x9A03DB8A4DBF9E88(unk_0xBE369BE1BC57A796());
		unk_0x0B25AB3A7FA0683C(unk_0x17B5CC8A8615737D(), joaat("weapon_unarmed"), 1);
		unk_0xBC8C26E1CC191108(unk_0x17B5CC8A8615737D());
	}
	unk_0x98F0FA127445E343(unk_0x17B5CC8A8615737D(), false);
	unk_0xD278B72A700DC2DC(0);
	unk_0x1B60289D0F2A2E3C(uParam1->f_5, 15f, 1, 0, 0, 0);
	unk_0x6E530062194EEB59();
	unk_0x8A4CC8A981660AC2();
	func_41();
	while (func_40())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x30F06AB0772AFB80() && !unk_0x5C0856D86B18EE57())
	{
		unk_0xC7845898207D067F(250);
	}
	unk_0x2359C336802E3CB4(1);
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		iVar4 = unk_0x356EABB012B22D07(uParam1->f_5, uParam1->f_8, 2);
		unk_0x8B06F7FDDA8B98FB(iVar4, 0);
		unk_0xD3BB86584359B533(iVar4, 0);
		uVar5 = unk_0xBD7A488D61CE4287("DEFAULT_ANIMATED_CAMERA", 1);
		iVar6 = 4;
		if (uParam1->f_4 != joaat("MotionState_Idle"))
		{
			iVar6 |= 2;
		}
		func_38(unk_0x17B5CC8A8615737D(), uParam1->f_18);
		unk_0xA17D768ED938600C(unk_0x17B5CC8A8615737D(), iVar4, *uParam1, uParam1->f_1, 1000f, -1.5f, iVar6, 0, 1148846080, 0);
		unk_0xEDCA12484954F971(unk_0x17B5CC8A8615737D(), 1);
		unk_0x8E9619F1D689D28F(unk_0xBE369BE1BC57A796(), 1);
		iVar3 = unk_0xD293AF5C0E169D20(unk_0x17B5CC8A8615737D(), 77);
		unk_0x0E21DA99F698AF06(unk_0x17B5CC8A8615737D(), 77, 1);
		unk_0x563AC676C8BDAD48(uVar5, iVar4, uParam1->f_2, *uParam1);
		unk_0x9274EF97A90581BE(1, 0, 3000, 1, 0, 0);
		if (!unk_0x9C88EB7B70229335(uParam1->f_16) && !unk_0x9C88EB7B70229335(uParam1->f_17))
		{
			unk_0xEB1EFACA68933402(unk_0x17B5CC8A8615737D(), uParam1->f_16, uParam1->f_17, 1000f, -1.5f, 10000, 33, 0, 0, 0, 0);
		}
	}
	else
	{
		iVar4 = -1;
	}
	if (!uParam1->f_25)
	{
		if (!unk_0x9C88EB7B70229335(sParam2))
		{
			func_37(sParam2, -1);
			uParam1->f_25 = 1;
		}
	}
	bVar7 = false;
	bVar8 = false;
	uVar9 = 16;
	if (!unk_0x9C88EB7B70229335(&(uParam1->f_11)))
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
		func_36(&uVar9, iVar175, unk_0x17B5CC8A8615737D(), sVar176, 0, 1);
	}
	if (unk_0x00743AFDA92F3B04(iVar4))
	{
		sVar177 = "WalkInterruptible";
		sVar178 = "ForceBlendout";
		while (unk_0x00743AFDA92F3B04(iVar4) && !unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			if (!bVar8)
			{
				if (!unk_0x25BD4C26D84038CD())
				{
					if (!unk_0x9C88EB7B70229335(uParam1->f_26))
					{
						unk_0x9AF1ABF0E97411BF(uParam1->f_26, 0, 0);
						bVar8 = true;
					}
					if (!unk_0x9C88EB7B70229335(uParam1->f_27))
					{
						if (!unk_0x9C88EB7B70229335(uParam1->f_28))
						{
							unk_0x4988C48537D1AE4F(-1, uParam1->f_28, uParam1->f_27, 0);
							bVar8 = true;
						}
						if (!unk_0x9C88EB7B70229335(uParam1->f_29))
						{
							unk_0x4988C48537D1AE4F(-1, uParam1->f_29, uParam1->f_27, 0);
							bVar8 = true;
						}
					}
				}
			}
			unk_0x6F9E2FAA0B24988A();
			unk_0xE57F94EA937AAD99(18);
			unk_0x24DB6E574207E4FC();
			func_32();
			iVar179 = unk_0x94E3E074F38DF86C();
			if (iVar179 >= (Global_36332 - 500))
			{
				func_31(4000);
			}
			fVar180 = -1f;
			fVar181 = -1f;
			fVar0 = unk_0x96F65998C0685177(iVar4);
			if (!unk_0x9C88EB7B70229335(&(uParam1->f_11)))
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
			if (unk_0x36D713BA3613126D(unk_0x17B5CC8A8615737D(), unk_0x765F5B806B517045(sVar177)))
			{
				iVar183 = (unk_0x6D95420A284C8601(2, 195) - 128);
				iVar184 = (unk_0x6D95420A284C8601(2, 196) - 128);
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
			if (unk_0x1066E7A58E2A0D9D() == 4 && uParam1->f_52 > 0f)
			{
				if (fVar0 >= uParam1->f_52)
				{
					if (!uParam1->f_32)
					{
						fVar185 = 1.5f;
						Var186 = { unk_0xF2AD13C8E9138D4B() };
						Var189 = { unk_0x425DAA25CBB7EDE2(unk_0x17B5CC8A8615737D(), 31086, 0f, 0f, 0f) };
						fVar192 = unk_0x3DC4639D5F23DEA2(Var186, Var189, 1);
						fVar185 = func_18(fVar185, 0.001f, (fVar192 - 0.75f));
						if (fVar185 < 0f)
						{
							fVar185 = 0.001f;
						}
						func_17(&(uParam1->f_34), unk_0x17B5CC8A8615737D(), func_57(), 1E-06f, 300, 300, 0, 0, 1045220557);
						func_16(&(uParam1->f_34), uParam1->f_53);
						if (!uParam1->f_33)
						{
							uParam1->f_34 = 1;
							uParam1->f_34.f_7 = unk_0x94E3E074F38DF86C();
							uParam1->f_34.f_8 = 0;
							uParam1->f_33 = 1;
						}
						if (uParam1->f_57 == 999f)
						{
							uParam1->f_56 = 0f;
						}
						if (uParam1->f_57 == 999f)
						{
							Var195 = { unk_0x985A4B24DCC9234C(2) };
							uVar198 = unk_0x638527C9799F2AE4(unk_0x17B5CC8A8615737D());
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
						unk_0x503F20CB07C55470(fVar193, 1065353216);
						unk_0xBA7CD73403732191(fVar194);
						unk_0x23277C93D66BD376(fVar193);
						unk_0xDC012705C7A18C5F(fVar194);
						Var201 = { unk_0xF2AD13C8E9138D4B() };
						Var204 = { unk_0x667FF09580838E25() };
						fVar207 = unk_0x3DC4639D5F23DEA2(Var201, Var204, 1);
						iVar208 = unk_0xF2DB717A73826179((fVar207 * 1000f));
						uParam1->f_32 = 1;
					}
					if (uParam1->f_32)
					{
						unk_0x39C93C3B090205B7();
						if (func_13(&(uParam1->f_34), 1, 1, 1, 0, 0, 0))
						{
						}
					}
				}
			}
			if (unk_0x36D713BA3613126D(unk_0x17B5CC8A8615737D(), unk_0x765F5B806B517045(sVar178)) || iVar182)
			{
				if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
				{
					unk_0x15848523A8959DBC(unk_0x17B5CC8A8615737D());
					switch (uParam1->f_4)
					{
						case joaat("MotionState_Idle"):
							unk_0x44B1CF13D39D96CE(unk_0x17B5CC8A8615737D(), joaat("MotionState_Idle"), 1, 0, 0);
							unk_0x2FCF54C709BA255D(0, 0, 3, 0);
							break;
						
						case joaat("MotionState_Walk"):
							unk_0x44B1CF13D39D96CE(unk_0x17B5CC8A8615737D(), joaat("MotionState_Walk"), 1, 0, 0);
							unk_0x5436326547492A67(unk_0xBE369BE1BC57A796(), 1f, 500, 0, 1, 0);
							if (unk_0x1066E7A58E2A0D9D() != 4)
							{
								if (uParam1->f_31 == 999f)
								{
									uParam1->f_30 = 0f;
								}
								if (uParam1->f_31 == 999f)
								{
									Var211 = { unk_0x985A4B24DCC9234C(2) };
									uVar214 = unk_0x638527C9799F2AE4(unk_0x17B5CC8A8615737D());
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
								unk_0x503F20CB07C55470(fVar209, 1065353216);
								unk_0xBA7CD73403732191(fVar210);
								Var217 = { unk_0xF2AD13C8E9138D4B() };
								Var220 = { unk_0x667FF09580838E25() };
								fVar223 = unk_0x3DC4639D5F23DEA2(Var217, Var220, 1);
								iVar224 = unk_0xF2DB717A73826179((fVar223 * 1000f));
								unk_0x9274EF97A90581BE(0, 1, iVar224, 0, 0, 0);
							}
							break;
						
						default:
							break;
					}
					if (unk_0x00743AFDA92F3B04(iVar4))
					{
						unk_0xEABBFB622128F3E7(iVar4);
						iVar4 = -1;
					}
				}
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (!func_43(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		unk_0xE7281B4166C6A4CD(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 1);
	}
	unk_0xC8C3338D4DBC00FE(unk_0xBE369BE1BC57A796(), true, 0);
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0x15848523A8959DBC(unk_0x17B5CC8A8615737D());
	}
	bVar225 = unk_0x5206C6C099078D7A();
	bVar226 = false;
	if (uParam1->f_32)
	{
		unk_0x39C93C3B090205B7();
		if (!func_13(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
		{
			bVar226 = true;
		}
	}
	if (bVar225 || bVar226)
	{
		while ((bVar225 || bVar226) && !unk_0xE9E6B5364105A000())
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
			bVar225 = unk_0x5206C6C099078D7A();
			bVar226 = false;
			if (uParam1->f_32)
			{
				unk_0x39C93C3B090205B7();
				if (!func_13(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
				{
					bVar226 = true;
				}
			}
		}
	}
	if (!unk_0x9C88EB7B70229335(uParam1->f_16))
	{
		unk_0xF9FFB9857F3120F8(uParam1->f_16);
	}
	unk_0xF9FFB9857F3120F8(*uParam1);
	unk_0x2BC4A4AFFC2D937D(uVar5, 0);
	func_10(&(uParam1->f_34));
	if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
	{
		unk_0x0E21DA99F698AF06(unk_0x17B5CC8A8615737D(), 77, iVar3);
		unk_0xC6042F55A6EA17B2(unk_0x17B5CC8A8615737D(), 0);
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
	if (unk_0x0F1BF24ED3B7ED40(uParam0->f_1))
	{
		unk_0x2BC4A4AFFC2D937D(uParam0->f_1, 0);
	}
	if (unk_0x0F1BF24ED3B7ED40(uParam0->f_2))
	{
		unk_0x2BC4A4AFFC2D937D(uParam0->f_2, 0);
	}
	if (unk_0x0F1BF24ED3B7ED40(uParam0->f_3))
	{
		unk_0x2BC4A4AFFC2D937D(uParam0->f_3, 0);
	}
	if (unk_0x0F1BF24ED3B7ED40(uParam0->f_4))
	{
		unk_0x2BC4A4AFFC2D937D(uParam0->f_4, 0);
	}
}

void func_12(int iParam0, int iParam1, int iParam2)
{
	unk_0xD1BB2AD73E7FC3A7(iParam0, iParam1, 1);
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
			if (!unk_0xA929B2923D14E2F8(uParam0->f_5, 0))
			{
				func_11(uParam0);
				Var0 = { unk_0xF2AD13C8E9138D4B() };
				if (bParam1)
				{
					Var0 = { Var0 + unk_0xACA666C39EA49E82(uParam0->f_5) * FtoV(unk_0xE9F97E1BC0CACE24()) };
				}
				Var3 = { unk_0x3ACAA2B62026685B(uParam0->f_5, Var0) };
				Var6 = { unk_0x985A4B24DCC9234C(2) };
				Var9 = { Var6 + uParam0->f_9 };
				Var12 = { Var9 - unk_0xED13B51A133E020F(uParam0->f_5, 2) };
				Var15 = { (-unk_0x0BADBFA3B172435F(Var9.f_2) * unk_0xD0FFB162F40A139C(Var9.f_0)), (unk_0xD0FFB162F40A139C(Var9.f_2) * unk_0xD0FFB162F40A139C(Var9.f_0)), unk_0x0BADBFA3B172435F(Var9.f_0) };
				Var18 = { (-unk_0x0BADBFA3B172435F(Var12.f_2) * unk_0xD0FFB162F40A139C(Var12.f_0)), (unk_0xD0FFB162F40A139C(Var12.f_2) * unk_0xD0FFB162F40A139C(Var12.f_0)), unk_0x0BADBFA3B172435F(Var12.f_0) };
				uVar21 = unk_0xF3A75749B3F96B25();
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = unk_0x9F2F24963A4C5E27(1775630800, 0);
				}
				uParam0->f_1 = unk_0x9F2F24963A4C5E27(26379945, 1);
				if (bParam1)
				{
					unk_0x3F63C992420F53CD(uParam0->f_1, uParam0->f_5, Var3, 1);
				}
				else
				{
					unk_0x451B3BE1DE87C4F5(uParam0->f_1, Var0);
				}
				unk_0xF612AE5AD0E3336E(uParam0->f_1, Var6, 2);
				unk_0x4BF6276065449F9C(uParam0->f_1, uVar21);
				uParam0->f_2 = unk_0x9F2F24963A4C5E27(26379945, 1);
				if (bParam1 && !bParam4)
				{
					unk_0x3F63C992420F53CD(uParam0->f_2, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12), 1);
				}
				else
				{
					unk_0x451B3BE1DE87C4F5(uParam0->f_2, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12));
				}
				unk_0xF612AE5AD0E3336E(uParam0->f_2, Var6, 2);
				unk_0x4BF6276065449F9C(uParam0->f_2, uVar21);
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = unk_0x9F2F24963A4C5E27(26379945, 1);
					if (bParam1 && !bParam4)
					{
						unk_0x3F63C992420F53CD(uParam0->f_4, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13), 1);
					}
					else
					{
						unk_0x451B3BE1DE87C4F5(uParam0->f_4, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13));
					}
					unk_0xF612AE5AD0E3336E(uParam0->f_4, Var6, 2);
					unk_0x4BF6276065449F9C(uParam0->f_4, uVar21);
				}
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					unk_0xF10334B4674D57A1(uParam0->f_3, uParam0->f_1, 0, 2);
					if (iParam6 == 0)
					{
						unk_0xF10334B4674D57A1(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
					}
					unk_0xF10334B4674D57A1(uParam0->f_3, uParam0->f_2, (uParam0->f_14 - uParam0->f_17), 2);
					unk_0x2FD33435045DF7BC(uParam0->f_3, iParam6);
					unk_0xA652CA24468EC747(uParam0->f_3, 1);
				}
				else
				{
					unk_0x6530B35F40F7E78B(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
				unk_0x9274EF97A90581BE(1, 0, 3000, 1, 0, 0);
				uParam0->f_7 = unk_0x94E3E074F38DF86C();
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
					if (unk_0x94E3E074F38DF86C() >= (uParam0->f_7 + uParam0->f_16))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									unk_0x9AF1ABF0E97411BF("CamPushInFranklin", 0, 0);
									break;
								
								case 0:
									unk_0x9AF1ABF0E97411BF("CamPushInMichael", 0, 0);
									break;
								
								case 2:
									unk_0x9AF1ABF0E97411BF("CamPushInTrevor", 0, 0);
									break;
							}
						}
						else
						{
							unk_0x9AF1ABF0E97411BF("CamPushInNeutral", 0, 0);
						}
						unk_0x4988C48537D1AE4F(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						uParam0->f_8 = 1;
					}
				}
			}
			if (unk_0x94E3E074F38DF86C() >= (uParam0->f_7 + uParam0->f_15))
			{
				if (bParam2)
				{
					func_11(uParam0);
					unk_0x9274EF97A90581BE(0, 0, 3000, 1, 0, 0);
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
	unk_0xF6EFB598FD123B39();
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
					unk_0x660E8E7836E95077(0);
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
		if (unk_0x55C74612BE548D78())
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
			unk_0x21E7933CCC7B3724(&Global_2313, 20);
			unk_0x21E7933CCC7B3724(&Global_2314, 17);
			unk_0x21E7933CCC7B3724(&Global_2315, 0);
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
			if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
			{
				if (unk_0x658CF746EFCB633E(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (func_24())
				{
					return 0;
				}
				if (unk_0x9D317EC24D9CDD2F(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0x7F4AE93855973529(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0xC3B1F1C9A58948C2(unk_0x17B5CC8A8615737D()))
				{
					return 0;
				}
				if (unk_0xBA11591586E3ABFF(unk_0x17B5CC8A8615737D(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69702)
				{
					if (unk_0xA77EE6C138A588EB(unk_0x17B5CC8A8615737D()))
					{
						return 0;
					}
					if (unk_0xA4FEB0448027296A(unk_0xBE369BE1BC57A796()))
					{
						return 0;
					}
					if (unk_0x95E290AF7BCBF364(unk_0x17B5CC8A8615737D()))
					{
						return 0;
					}
					if (unk_0xDB3C032119056A8B(unk_0xBE369BE1BC57A796()))
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
				if (unk_0x48B8265059381CD0(Global_2313, 9))
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
	unk_0x660E8E7836E95077(0);
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
	unk_0x21E7933CCC7B3724(&Global_2314, 16);
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
	
	if (Global_69702)
	{
		iVar0 = 0;
		unk_0x5CD8291F2C5E0AD1(unk_0x17B5CC8A8615737D(), &iVar1, 1);
		if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5053725CE851B850() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		if (unk_0x780A193B53AF21CF(unk_0x17B5CC8A8615737D(), 78, 1))
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
		if (!unk_0xA929B2923D14E2F8(unk_0x17B5CC8A8615737D(), 0))
		{
			if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()) == Global_101700.f_27009[2 /*29*/])
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
		if (Global_69702)
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
	return Global_35781 == iParam0;
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
				return Global_1353070.f_203[iParam1];
			}
			break;
	}
	return unk_0x48B8265059381CD0(Global_1353070.f_1015, iParam0);
}

void func_29()
{
	unk_0x5FB0B609B3A49840();
	Global_16756 = 0;
	if ((unk_0x3ED8A07C6FA41E1B() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x660E8E7836E95077(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x55C74612BE548D78())
	{
		unk_0x660E8E7836E95077(1);
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
	Global_36332 = (unk_0x94E3E074F38DF86C() + iParam0);
}

void func_32()
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_35(0))
		{
			func_33(0);
		}
		unk_0xEB79FECD9022AAF0(&Global_2314, 2);
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
		unk_0xEB79FECD9022AAF0(&Global_2314, 16);
	}
	if (unk_0x3ED8A07C6FA41E1B())
	{
		unk_0x660E8E7836E95077(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xEB79FECD9022AAF0(&Global_2313, 30);
	}
	else
	{
		unk_0x21E7933CCC7B3724(&Global_2313, 30);
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
				unk_0x4EA69F96033BA4FB(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0xBB4FC17174B4A105(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0xBB4FC17174B4A105(Global_14380);
		}
		else
		{
			unk_0xBB4FC17174B4A105(Global_14371);
		}
	}
}

int func_35(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x48B8265059381CD0(Global_2313, 14))
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
	if (unk_0x82F1A060D8F4583B(joaat("cellphone_flashhand")) > 0)
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
	if (!Global_69702)
	{
		if (!unk_0xCA41A00932714525(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xFB616ABA635A95B3(iParam2, 0);
			}
			else
			{
				unk_0xFB616ABA635A95B3(iParam2, 1);
			}
		}
		if (!unk_0xCA41A00932714525(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x8E601051A3FDE8ED(iParam2, 0);
			}
			else
			{
				unk_0x8E601051A3FDE8ED(iParam2, 1);
			}
		}
	}
}

void func_37(char* sParam0, int iParam1)
{
	unk_0x252D021C9D92DBA9(sParam0);
	unk_0x8B1500AADBA665BD(0, 0, 1, iParam1);
}

void func_38(int iParam0, var uParam1)
{
	if (func_39(uParam1, 1))
	{
		unk_0x85F7DD7836DF465E(iParam0, "HOSPITAL_0", 0f, 1f);
	}
	if (func_39(uParam1, 2))
	{
		unk_0x85F7DD7836DF465E(iParam0, "HOSPITAL_1", 0f, 1f);
	}
	if (func_39(uParam1, 4))
	{
		unk_0x85F7DD7836DF465E(iParam0, "HOSPITAL_2", 0f, 1f);
	}
	if (func_39(uParam1, 8))
	{
		unk_0x85F7DD7836DF465E(iParam0, "HOSPITAL_3", 0f, 1f);
	}
	if (func_39(uParam1, 16))
	{
		unk_0x85F7DD7836DF465E(iParam0, "HOSPITAL_4", 0f, 1f);
	}
	if (func_39(uParam1, 32))
	{
		unk_0x85F7DD7836DF465E(iParam0, "HOSPITAL_5", 0f, 1f);
	}
	if (func_39(uParam1, 64))
	{
		unk_0x85F7DD7836DF465E(iParam0, "HOSPITAL_6", 0f, 1f);
	}
	if (func_39(uParam1, 128))
	{
		unk_0x85F7DD7836DF465E(iParam0, "HOSPITAL_7", 0f, 1f);
	}
	if (func_39(uParam1, 256))
	{
		unk_0x85F7DD7836DF465E(iParam0, "HOSPITAL_8", 0f, 1f);
	}
	if (func_39(uParam1, 512))
	{
		unk_0x85F7DD7836DF465E(iParam0, "HOSPITAL_9", 0f, 1f);
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
	if (((Global_91491 == 13 || Global_91491 == 10) || Global_91491 == 11) || Global_91491 == 12)
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
		if (Global_88757[iVar0 /*17*/] && !Global_88757[iVar0 /*17*/].f_1)
		{
			if (Global_88757[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_88757[iVar0 /*17*/].f_5 != 88 && Global_88757[iVar0 /*17*/].f_5 != 89) && Global_88757[iVar0 /*17*/].f_5 != 92)
				{
					func_42(Global_88757[iVar0 /*17*/].f_5, 1);
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
			Global_85809[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85809[iParam0 /*2*/] = 0;
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
		iVar1 = Global_36715[iVar0 /*5*/];
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
		if (Global_36689[iVar2 /*5*/] == 0)
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
	if (!Global_36689[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36689[iParam0 /*5*/].f_1 == unk_0x17B5CC8A8615737D())
		{
			Global_36910 = 0;
		}
	}
	Global_36689[iParam0 /*5*/] = 13;
	Global_36689[iParam0 /*5*/].f_1 = 0;
	Global_36689[iParam0 /*5*/].f_2 = 0;
	Global_36689[iParam0 /*5*/].f_3 = 0;
	Global_36689[iParam0 /*5*/].f_4 = 0;
	Global_36688 = (Global_36688 - 1);
	if (Global_36688 < 0)
	{
		Global_36688 = 0;
	}
}

int func_47(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	if (unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		func_51(0);
		unk_0x1B60289D0F2A2E3C(Param0, 5f, 1, 0, 0, 0);
		if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
		{
			if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
			{
				unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), Param0, 1, 0, 0, 1);
				unk_0x0608D50823C6AA6D(unk_0x17B5CC8A8615737D(), uParam3);
				unk_0x503F20CB07C55470(0f, 1065353216);
				unk_0xBA7CD73403732191(0f);
			}
		}
		unk_0x779AA10AF23608EF(Param0, 4500f, 0);
		unk_0x4EDE34FBADD967A6(0);
		unk_0x1B60289D0F2A2E3C(Param0, 5000f, 1, 0, 0, 0);
		unk_0x3FE1DC991D646A3B(Param0, 5000f, 0);
		unk_0x38130BEB2174F958(Param0, 5000f);
		unk_0x794A3BB49F59DF31(Param0, 5000f);
		func_50();
		func_49();
		unk_0xC1B1E9A034A63A62(0);
		func_51(1);
		if (!unk_0xE41614517B6436B2())
		{
			while (!unk_0x779AA10AF23608EF(Param0, 4500f, 0))
			{
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					unk_0xD278B72A700DC2DC(0);
					return 0;
				}
			}
		}
		unk_0xC1B1E9A034A63A62(0);
		while (!unk_0xDDF188456A3373B2())
		{
			unk_0x4EDE34FBADD967A6(0);
			if (unk_0x83666F9FB8FEBD4B() > 20000)
			{
				unk_0xD278B72A700DC2DC(0);
				if (unk_0xE41614517B6436B2())
				{
					unk_0x772E33FE6031D858();
				}
				return 0;
			}
		}
		if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
		{
			if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
			{
				if (unk_0xE41614517B6436B2())
				{
					unk_0x772E33FE6031D858();
				}
				unk_0xD278B72A700DC2DC(0);
				unk_0xC1B1E9A034A63A62(0);
				unk_0x6E530062194EEB59();
				if (iParam5 == 1)
				{
					unk_0x8A4CC8A981660AC2();
				}
				else
				{
					unk_0xC1B1E9A034A63A62(5000);
				}
				unk_0x905B1DFCA22F9E69();
			}
		}
		while ((!unk_0xC8E02A4A24779EE9() && !func_48()) && unk_0x83666F9FB8FEBD4B() < 1500)
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
			unk_0x4F34E573D7F5024B(Param0, &(Param0.f_2), 0);
			unk_0x1B60289D0F2A2E3C(Param0, 5f, 1, 0, 0, 0);
			if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
			{
				if (!unk_0xCA41A00932714525(unk_0x17B5CC8A8615737D()))
				{
					unk_0x5DC8C2F2F8A363C2(unk_0x17B5CC8A8615737D(), Param0, 1, 0, 0, 1);
					unk_0x0608D50823C6AA6D(unk_0x17B5CC8A8615737D(), uParam3);
				}
			}
		}
		unk_0x503F20CB07C55470(0f, 1065353216);
		unk_0xBA7CD73403732191(0f);
		func_51(0);
		return 1;
	}
	func_51(0);
	return 0;
}

bool func_48()
{
	return !Global_68531.f_553;
}

void func_49()
{
	Global_68531.f_553 = 1;
	Global_68531.f_554 = 0;
}

void func_50()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		Global_68531[iVar0] = 0;
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
			if (!unk_0x48B8265059381CD0(Global_91491.f_20, 2))
			{
				unk_0xD278B72A700DC2DC(1);
				unk_0xEB79FECD9022AAF0(&(Global_91491.f_20), 2);
			}
		}
		else if (unk_0x48B8265059381CD0(Global_91491.f_20, 2))
		{
			unk_0xD278B72A700DC2DC(0);
			unk_0x21E7933CCC7B3724(&(Global_91491.f_20), 2);
		}
	}
}

int func_52()
{
	if (unk_0x48B8265059381CD0(unk_0x0E29C61F26D96FDB(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

bool func_53(int iParam0)
{
	return unk_0x48B8265059381CD0(Global_101700.f_6188[iParam0], 0);
}

int func_54(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101700.f_8044.f_99.f_58[iParam0];
}

int func_55()
{
	if (Global_33147[11] == 1)
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
	return Global_101700.f_8044.f_330[iParam0 /*6*/];
}

int func_57()
{
	func_58();
	return Global_101700.f_2095.f_539.f_3549;
}

void func_58()
{
	int iVar0;
	
	if (unk_0x23E9113C762466ED(unk_0x17B5CC8A8615737D()))
	{
		if (func_61(Global_101700.f_2095.f_539.f_3549) != unk_0x0324EEB10F81965F(unk_0x17B5CC8A8615737D()))
		{
			iVar0 = func_60(unk_0x17B5CC8A8615737D());
			if (func_59(iVar0) && (!func_26(14) || Global_100652))
			{
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_59(Global_101700.f_2095.f_539.f_3549))
				{
					Global_101700.f_2095.f_539.f_3550 = Global_101700.f_2095.f_539.f_3549;
				}
				Global_101700.f_2095.f_539.f_3551 = iVar0;
				Global_101700.f_2095.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101700.f_2095.f_539.f_3549 != 145)
			{
				Global_101700.f_2095.f_539.f_3551 = Global_101700.f_2095.f_539.f_3549;
			}
			return;
		}
	}
	Global_101700.f_2095.f_539.f_3549 = 145;
}

bool func_59(int iParam0)
{
	return iParam0 < 3;
}

int func_60(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x23E9113C762466ED(iParam0))
	{
		iVar1 = unk_0x0324EEB10F81965F(iParam0);
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
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_62(bool bParam0)
{
	unk_0x6BB28C952AFE4B00(0f);
	unk_0x53C8D69A01C4E4AD(0f);
	unk_0xB1C84F480C11C413(0f);
	unk_0xF1C53F353A5EB55F(1);
	unk_0x450C8FB521762758(0f);
	unk_0xFD6E64AFF9352C00(1);
	unk_0xC98DC0B52A9709C5(0);
	if (unk_0x4E1850F5FF023071("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0xB8CAC5F3774894A1("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0x9C88EB7B70229335(&Global_36890))
	{
		if (unk_0x4E1850F5FF023071(&Global_36890))
		{
			unk_0xB8CAC5F3774894A1(&Global_36890);
		}
	}
	if (unk_0x0F1BF24ED3B7ED40(Global_36879))
	{
		if (unk_0x0C1C2DD5505D4E04(Global_36879))
		{
			unk_0xB0655D4540B8DF38(Global_36879, 0f);
			unk_0x6E850356BCA62F5C(Global_36879, 1);
		}
	}
	if (unk_0xE77D3AC9C1449801())
	{
		unk_0x011AE968D1EA959B(0);
	}
	if (bParam0)
	{
		if (unk_0xAE38B3AA7D13F9CE() != -1 || unk_0x2F149D71502DBBB8() != -1)
		{
			unk_0xC1AB7E5821CAB578();
		}
		else if (unk_0xE9E6B5364105A000())
		{
			unk_0xC1AB7E5821CAB578();
		}
	}
	Global_36885 = 0f;
	StringCopy(&Global_36886, "", 16);
	StringCopy(&Global_36890, "", 64);
	StringCopy(&Global_36906, "", 16);
	func_63();
}

void func_63()
{
	Global_36878 = 0;
	Global_36879 = 0;
	Global_36880 = 0;
	Global_36881 = 30000;
	Global_36882 = 0f;
	Global_36884 = 0f;
	Global_36883 = 0f;
	Global_36885 = 0f;
	StringCopy(&Global_36886, "", 16);
}

void func_64(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_262145.f_15804;
			break;
		
		case 1:
			iVar0 = Global_262145.f_15794;
			break;
		
		case 2:
			iVar0 = Global_262145.f_15805;
			break;
		
		case 3:
			iVar0 = Global_262145.f_15797;
			break;
		
		case 4:
			iVar0 = Global_262145.f_15793;
			break;
		
		case 6:
			iVar0 = 3;
			break;
		
		case 7:
			iVar0 = Global_262145.f_15808;
			break;
		
		case 8:
			iVar0 = Global_262145.f_15809;
			break;
		
		case 9:
			iVar0 = Global_262145.f_15812;
			break;
		
		case 22:
			iVar0 = Global_262145.f_15813;
			break;
		
		case 23:
			iVar0 = Global_262145.f_15806;
			break;
		
		case 25:
			iVar0 = Global_262145.f_16694;
			break;
		
		case 26:
			iVar0 = Global_262145.f_16693;
			break;
	}
	if (iVar0 != 0)
	{
		unk_0x809988B0EDD4A6E9(func_75(func_76()), func_73(func_76()), func_72(), func_71(), iParam0, iVar0);
	}
	func_70(iVar0);
	func_65(iVar0);
}

void func_65(int iParam0)
{
	int iVar0;
	
	iVar0 = func_69(3940, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11.f_329 = iVar0;
	func_66(3940, iVar0, -1, 1, 0);
}

void func_66(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_67(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x731753D8494ABECD(iVar0, iParam1, iParam3);
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
			Global_2503539 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2503539 = 1;
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
	uVar0 = Global_2503826[iParam0 /*3*/][func_67(iParam1)];
	if (unk_0x7FE4F330D3D74809(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_70(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xBE369BE1BC57A796();
	Global_1619421[iVar0 /*390*/].f_11.f_328 = (Global_1619421[iVar0 /*390*/].f_11.f_328 + iParam0);
	if (Global_1619421[iVar0 /*390*/].f_11.f_328 < -9999)
	{
		Global_1619421[iVar0 /*390*/].f_11.f_328 = 9999;
	}
	else if (Global_1619421[iVar0 /*390*/].f_11.f_328 > 9999)
	{
		Global_1619421[iVar0 /*390*/].f_11.f_328 = 9999;
	}
}

int func_71()
{
	if (Global_1763183.f_3 != 0)
	{
		return Global_1763183.f_3;
	}
	return -1;
}

int func_72()
{
	if (Global_1763183.f_2 != 0)
	{
		return Global_1763183.f_2;
	}
	return -1;
}

int func_73(int iParam0)
{
	if (iParam0 == func_74())
	{
		return -1;
	}
	return Global_1619421[iParam0 /*390*/].f_11.f_7[1];
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
	return Global_1619421[iParam0 /*390*/].f_11.f_7[0];
}

int func_76()
{
	return Global_1619421[unk_0xBE369BE1BC57A796() /*390*/].f_11;
}

bool func_77(bool bParam0)
{
	return func_78(unk_0xBE369BE1BC57A796(), bParam0);
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
	iVar0 = Global_1619421[iParam0 /*390*/].f_11;
	if (iVar0 != func_74() && Global_1619421[iVar0 /*390*/].f_11.f_289 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_80(int iParam0, int iParam1)
{
	if (iParam0 != func_74())
	{
		if (Global_1619421[iParam0 /*390*/].f_11 != func_74())
		{
			if (Global_1619421[iParam0 /*390*/].f_11 == iParam0 && Global_1619421[iParam0 /*390*/].f_11.f_289 == iParam1)
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
		if (unk_0xEA585FE60D0854B3())
		{
			unk_0x97225621CA125FF2(0);
		}
	}
	if (!unk_0x63C468D583002D23())
	{
		uVar0 = iParam2;
		unk_0xC8C3338D4DBC00FE(iParam0, bParam1, uVar0);
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
		if (unk_0x7268A1112372AA44(iParam0) && unk_0xCF7855B965948E97(iParam0))
		{
			iVar25 = unk_0xDF7CE83326F434E9(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x63C468D583002D23())
				{
					unk_0xD629A0523A16EED3(1);
				}
				else
				{
					unk_0x027DB6817AB239EB(iVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0x63C468D583002D23() && !bVar18)
					{
						unk_0xD629A0523A16EED3(0);
					}
					Global_2421664[iParam0 /*358*/].f_247 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_85(iVar25) && !unk_0xE59622A0BE598996(iVar25))
				{
					if (!bVar21)
					{
						unk_0xCEDF2A713644AEDA(iVar25, true, 0);
					}
				}
				if (!unk_0xDDBA7A42B9B819EE(iVar25))
				{
					if (!bVar20)
					{
						unk_0x98F0FA127445E343(iVar25, false);
					}
					unk_0xBDE4C59FD939CE4E(iVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0x98F0FA127445E343(iVar25, false);
				}
				unk_0x6F65279C9BC14EDB(iVar25, true);
				unk_0xF7A1A67D26D29975(iParam0, 0);
				unk_0x5D3680D916012130(iVar25);
				unk_0x78F48B47DB1C3316(iVar25, 1);
				func_84();
				func_83();
				if (unk_0x86DB3331A7FB14B2())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0xE41614517B6436B2())
				{
				}
				Global_2421664[iParam0 /*358*/].f_248 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_85(iVar25) && !unk_0xE59622A0BE598996(iVar25))
				{
					if (!bVar21)
					{
						unk_0xCEDF2A713644AEDA(iVar25, !bVar14, 0);
					}
					if (!unk_0xDDBA7A42B9B819EE(iVar25))
					{
						if (!bVar20)
						{
							unk_0x98F0FA127445E343(iVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0xBDE4C59FD939CE4E(iVar25, 1);
						}
					}
					if (func_82(Global_1633501.f_107548))
					{
						unk_0x98F0FA127445E343(iVar25, true);
					}
				}
				if (bVar9)
				{
					unk_0xF7A1A67D26D29975(iParam0, 0);
				}
				else
				{
					unk_0xF7A1A67D26D29975(iParam0, 1);
				}
				unk_0x6F65279C9BC14EDB(iVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0x5315600F216E4653(iVar25) && !unk_0xFD0FE723227D5AB6(iVar25, 0))
					{
						unk_0xBC8C26E1CC191108(iVar25);
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
			unk_0xC8C3338D4DBC00FE(iParam0, bParam1, iVar26);
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
	
	Global_2433125.f_731 = 0;
	Global_2433125.f_732 = 0;
	Global_2433125.f_733 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2404994.f_2220 = { Var0 };
}

void func_84()
{
	Global_2404994.f_644 = 0;
	Global_2404994.f_2261 = 0;
	Global_2404994.f_501 = 0;
	Global_2404994.f_576 = 0;
	Global_2421664[unk_0xBE369BE1BC57A796() /*358*/].f_210 = 0;
}

int func_85(int iParam0)
{
	int iVar0;
	
	if (unk_0xFD0FE723227D5AB6(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x1F8F07D86DA1A701(iParam0, -1794415470);
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
	if (!func_89(Global_36715[iLocal_64 /*5*/].f_2))
	{
		return;
	}
	iVar0 = unk_0x0E29C61F26D96FDB(500, 3000);
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
	if (unk_0xCA41A00932714525(Local_43.f_1))
	{
		if (unk_0xFD0FE723227D5AB6(Local_43.f_1, 0) || unk_0x9172DCBCA2E183EC(Local_43.f_1))
		{
			return 0;
		}
		if (unk_0x8AE479EBB6CE5562(Local_43.f_1))
		{
			return 0;
		}
		if (func_96(Local_43.f_1))
		{
			return 0;
		}
	}
	if (Global_36715[iLocal_64 /*5*/].f_3 < 3 && Global_36715[iLocal_64 /*5*/].f_3 != 0)
	{
		return 0;
	}
	if (Global_36715[iLocal_64 /*5*/].f_4 < 9 && Global_36715[iLocal_64 /*5*/].f_4 != 0)
	{
		return 0;
	}
	uVar1 = func_95(iParam0);
	if (unk_0x9C88EB7B70229335(uVar1))
	{
		return 0;
	}
	if (func_96(Local_43.f_1))
	{
		return 0;
	}
	unk_0xFD2E59A7CCE66AB3(sVar1);
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
		if (!unk_0x9C88EB7B70229335(sVar2) && !unk_0x9C88EB7B70229335(sVar3))
		{
			unk_0xA0E7D0E8FE126EE8(sVar2);
			while (!unk_0xF4F8AE8DD0F08C1E(sVar2))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (!unk_0xCA41A00932714525(Local_43.f_1))
			{
				unk_0xEB1EFACA68933402(Local_43.f_1, sVar2, sVar3, 1.5f, -1.5f, -1, 48, 0, 0, 0, 0);
				sLocal_54 = sVar3;
			}
		}
	}
	if (!unk_0x69EB2CB272E0AD5D(sVar1))
	{
		return 0;
	}
	if (unk_0xCA41A00932714525(Local_43.f_1))
	{
		return 0;
	}
	unk_0x64A85DB6D037D644(Local_43.f_1, sVar1, 0.75f);
	if (unk_0x1066E7A58E2A0D9D() == 4)
	{
		unk_0x2F04D344EE0E0A31(Local_43.f_1, "move_ped_strafing_firstperson@drunk");
	}
	unk_0x01DDEEADA68830EB(Local_43.f_1, 0, sVar1, "idle", 2f, 1);
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
			if (unk_0x0764AC92F08BEC9E(Local_43.f_1))
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
			else if (unk_0x81E2E02C57D459E6(Local_43.f_1))
			{
				iVar4 = "FACIALS@GEN_MALE@BASE";
			}
			else
			{
				iVar4 = "FACIALS@GEN_FEMALE@BASE";
			}
			break;
	}
	unk_0xF2F66822E1357C31(Local_43.f_1, "mood_drunk_1", iVar4);
	unk_0x0E21DA99F698AF06(Local_43.f_1, 200, 1);
	unk_0x0E21DA99F698AF06(Local_43.f_1, 46, 1);
	unk_0xFB616ABA635A95B3(Local_43.f_1, 0);
	unk_0xB195EE9DB37DA7F2(Local_43.f_1, 262144, 1);
	unk_0x2B8E285BD54DCE56(Local_43.f_1, 1);
	return 1;
}

bool func_90()
{
	return func_91(unk_0xBE369BE1BC57A796());
}

int func_91(int iParam0)
{
	if (unk_0x0324EEB10F81965F(unk_0xDF7CE83326F434E9(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_92(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0xFD0FE723227D5AB6(iParam0, 1) || unk_0x9172DCBCA2E183EC(iParam0))
	{
		return 0;
	}
	if (unk_0x1F8F07D86DA1A701(iParam0, -2017877118) != 7)
	{
		return 0;
	}
	if (unk_0x1F8F07D86DA1A701(iParam0, 1785177548) != 7)
	{
		return 0;
	}
	if (unk_0x1B30FA4AAC96F398(iParam0))
	{
		return 0;
	}
	if (unk_0x14E01C4EC4170496(iParam0))
	{
		return 0;
	}
	if (unk_0x7F4AE93855973529(iParam0))
	{
		return 0;
	}
	if (unk_0xDBB75EFBFFEDB00D(iParam0))
	{
		return 0;
	}
	if (Global_68131)
	{
		return 0;
	}
	if (func_94())
	{
		return 0;
	}
	if (iParam0 == unk_0x17B5CC8A8615737D())
	{
		if (!unk_0x2AAAA411A3CBAFE2(unk_0xBE369BE1BC57A796()))
		{
			return 0;
		}
		if (!unk_0x94A5DEE82C898FDF(unk_0xBE369BE1BC57A796()))
		{
			return 0;
		}
		if (unk_0xE58A1B5558D2DC66(unk_0xBE369BE1BC57A796()) || unk_0x091275C60C62F17B(unk_0xBE369BE1BC57A796()))
		{
			return 0;
		}
		if (func_93())
		{
			return 0;
		}
	}
	Var0 = { unk_0xACA666C39EA49E82(iParam0) };
	if (unk_0xA8CEACB4F35AE058(Var0) >= (1f * 1f))
	{
		return 0;
	}
	return 1;
}

bool func_93()
{
	return Global_91543.f_304 > 0;
}

bool func_94()
{
	return unk_0x94E3E074F38DF86C() <= Global_17290.f_5745 + 100;
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
	if (unk_0x9C88EB7B70229335(Local_60.f_2))
	{
		if (unk_0x9C88EB7B70229335(uVar1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return unk_0x6A7B0D91FD88D9EE(Local_60.f_2, sVar1);
}

int func_97(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!unk_0x23E9113C762466ED(iParam0))
	{
		return -1;
	}
	iVar0 = func_99(iParam0);
	iVar1 = func_98(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36715[iVar1 /*5*/].f_2;
}

int func_98(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36715[iVar0 /*5*/] == iParam0)
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
		if (iParam0 == Global_36715[iVar0 /*5*/].f_1)
		{
			return Global_36715[iVar0 /*5*/];
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
	if (unk_0xA929B2923D14E2F8(Local_43.f_4, 0))
	{
		return 0;
	}
	Var0 = { unk_0x57240623C1BC6E88(Local_43.f_1, 1) };
	Var3 = { unk_0x57240623C1BC6E88(Local_43.f_4, 1) };
	fVar6 = unk_0x3DC4639D5F23DEA2(Var0, Var3, 1);
	return fVar6 < 7f;
}

void func_103()
{
	int iVar0;
	char* sVar1;
	
	if (Local_43.f_1 == unk_0x17B5CC8A8615737D())
	{
		unk_0xD1BB2AD73E7FC3A7(0, 36, 1);
		if (unk_0x4BF0D40F31431B8F(Local_43.f_1))
		{
			if (Global_36715[iLocal_64 /*5*/].f_2 == 0 || Global_36715[iLocal_64 /*5*/].f_2 == 2)
			{
				unk_0x4C1D7D2B3355D863(Local_43.f_1, 0, 0);
			}
		}
		if (unk_0xAC74327A3E5299B6(Local_43.f_1))
		{
			unk_0xE851CEA79471B7D0(Local_43.f_1, 0);
		}
	}
	if (Local_55.f_0 != -2)
	{
		if (Local_55.f_0 == -1)
		{
			if (Global_36715[iLocal_64 /*5*/].f_2 != 0)
			{
				Global_36715[iLocal_64 /*5*/].f_2 = 0;
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
			if (Global_36715[iLocal_64 /*5*/].f_2 == 0)
			{
				if (iVar0 < 30)
				{
					Global_36715[iLocal_64 /*5*/].f_2 = 2;
					if (!func_89(2))
					{
						Global_36715[iLocal_64 /*5*/].f_2 = 0;
						return;
					}
				}
			}
			if (Global_36715[iLocal_64 /*5*/].f_2 == 2)
			{
				if (iVar0 < 10)
				{
					Global_36715[iLocal_64 /*5*/].f_2 = 1;
					if (!func_89(2))
					{
						Global_36715[iLocal_64 /*5*/].f_2 = 2;
						return;
					}
				}
			}
			if (Global_36715[iLocal_64 /*5*/].f_2 == 1)
			{
			}
		}
	}
	else
	{
		return;
	}
	if (!unk_0x9C88EB7B70229335(sLocal_54))
	{
		if (!func_92(Local_43.f_1))
		{
			sVar1 = "MOVE_M@DRUNK@TRANSITIONS";
			if (unk_0x5132972D2BBC5A62(Local_43.f_1, sVar1, sLocal_54, 3))
			{
				unk_0xA587396DD8FB936E(Local_43.f_1, sVar1, sLocal_54, -4f);
			}
			sLocal_54 = "";
			return;
		}
	}
	if (Global_36715[iLocal_64 /*5*/].f_3 >= 10 || Global_36715[iLocal_64 /*5*/].f_4 >= 15)
	{
		if (unk_0x1F8F07D86DA1A701(Local_43.f_1, 1785177548) == 1)
		{
			return;
		}
		if (unk_0x0E6DD0328435009E(Local_43.f_1))
		{
			return;
		}
		if (unk_0xFD0FE723227D5AB6(Local_43.f_1, 1))
		{
			if (Global_36715[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_36715[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_36715[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_36715[iLocal_64 /*5*/].f_4 = 14;
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
	
	if (!unk_0xD035C652F0986F10(Local_43.f_1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = unk_0x60604E51E30D25B8(Local_43.f_1, 0);
	if (!unk_0x45CD66F0A131E554(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0x17206B315923243C(iVar0, -1, 0) == Local_43.f_1)
	{
		return 0;
	}
	Local_43.f_4 = iVar0;
	Local_60.f_0 = 7;
	return 1;
}

void func_105()
{
	if (!unk_0xFD0FE723227D5AB6(Local_43.f_1, 0))
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
	if (!unk_0xCF7855B965948E97(unk_0xBE369BE1BC57A796()))
	{
		return;
	}
	if (!unk_0xD035C652F0986F10(unk_0x17B5CC8A8615737D()))
	{
		return;
	}
	if (unk_0x0DD3F4C17D207474(unk_0xBE369BE1BC57A796(), 0))
	{
		return;
	}
	iVar0 = unk_0x60604E51E30D25B8(unk_0x17B5CC8A8615737D(), 0);
	fVar1 = unk_0x13B7ACE69D27E3E4(iVar0);
	if (fVar1 < 5f)
	{
		return;
	}
	Var2 = { unk_0x57240623C1BC6E88(unk_0x17B5CC8A8615737D(), 1) };
	Var5 = { Var2 - Vector(3f, 30f, 30f) };
	Var8 = { Var2 + Vector(3f, 30f, 30f) };
	if (!unk_0xD43437C32E35E124(Var5, Var8) && !unk_0xDE8297C170BC834C(Var5, Var8))
	{
		return;
	}
	unk_0x2B46008B9EA5E05B(unk_0xBE369BE1BC57A796(), 1, 0);
	unk_0xD189588DEC407D28(unk_0xBE369BE1BC57A796(), 0);
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
	if (unk_0xFD0FE723227D5AB6(Local_43.f_1, 0))
	{
		iVar1 = unk_0x60604E51E30D25B8(Local_43.f_1, 0);
		iVar2 = unk_0x17206B315923243C(iVar1, -1, 0);
		if (!iVar2 == Local_43.f_1)
		{
			return;
		}
		if (unk_0x63C468D583002D23() && !unk_0xC38F0FBE1914783C(iVar1))
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!unk_0x17B5CC8A8615737D() == Local_43.f_1)
	{
		return;
	}
	else if (!unk_0x1066E7A58E2A0D9D() == 4)
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
	if (unk_0x80E9CA64E9C8E070(iVar0))
	{
		Local_55.f_4 = unk_0x83666F9FB8FEBD4B() + 2000;
	}
	else
	{
		Local_55.f_4 = unk_0x83666F9FB8FEBD4B() + 1000;
	}
	fVar3 = unk_0x13B7ACE69D27E3E4(iVar0);
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
	
	fVar0 = unk_0x6B1497B2FDBC8466(-fParam1, fParam1);
	fVar1 = unk_0x6B1497B2FDBC8466(0f, fParam2);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 - fVar1);
	}
	else
	{
		fVar0 = (fVar0 + fVar1);
	}
	if (unk_0x80E9CA64E9C8E070(iParam0))
	{
		if (unk_0x9D317EC24D9CDD2F(unk_0xB80CAAF3D65FBC1F(iParam0)))
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
		iVar2 = unk_0x0324EEB10F81965F(iParam0);
		if (unk_0xD28959FE5BC2D14D(iVar2))
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
	if (unk_0x63C468D583002D23() && !unk_0xC38F0FBE1914783C(iParam0))
	{
		return;
	}
	if (unk_0x80E9CA64E9C8E070(iParam0))
	{
		unk_0xC3D5460F53F05D4E(unk_0xB80CAAF3D65FBC1F(iParam0), fParam1);
	}
	else if (unk_0x3983CCB0D958159C(iParam0))
	{
		unk_0x4BE5D7A6A9C8A632(unk_0xBFC71CD990E479DB(iParam0), fParam1);
	}
}

void func_110()
{
	int iVar0;
	
	if (!unk_0xFD0FE723227D5AB6(Local_43.f_1, 0))
	{
		Local_60.f_0 = 4;
		return;
	}
	if (unk_0x63C468D583002D23())
	{
		if (Global_36715[iLocal_64 /*5*/].f_3 >= 10 || Global_36715[iLocal_64 /*5*/].f_4 >= 15)
		{
			if (Global_36715[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_36715[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_36715[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_36715[iLocal_64 /*5*/].f_4 = 14;
			}
		}
	}
	if (bLocal_50)
	{
		return;
	}
	iVar0 = unk_0x60604E51E30D25B8(Local_43.f_1, 0);
	if (!unk_0x45CD66F0A131E554(iVar0, 0))
	{
		unk_0x83150B7E65C16AFE(Local_43.f_1, 0, 0);
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
	iVar0 = unk_0x1F8F07D86DA1A701(unk_0x17B5CC8A8615737D(), 355471868);
	if (!iVar0 == 7)
	{
		Local_55.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
		return;
	}
	if (!unk_0xFD0FE723227D5AB6(Local_43.f_1, 0))
	{
		Local_60.f_0 = 4;
		Local_55.f_3 = -2;
		return;
	}
	iVar1 = unk_0x60604E51E30D25B8(Local_43.f_1, 0);
	iVar2 = unk_0x17206B315923243C(iVar1, -1, 0);
	if (iVar2 == Local_43.f_1)
	{
		func_112();
		Local_55.f_3 = -2;
		return;
	}
	unk_0xB095A8770515915B(Local_43.f_1, iVar1);
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
	if (unk_0xD035C652F0986F10(Local_43.f_1))
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
	if (bVar1 || unk_0xD035C652F0986F10(Local_43.f_1))
	{
		if (!bLocal_50)
		{
		}
		iVar0 = unk_0x60604E51E30D25B8(Local_43.f_1, 0);
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
				unk_0x83150B7E65C16AFE(Local_43.f_1, 0, 0);
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
		iVar2 = unk_0x17206B315923243C(Local_43.f_4, -1, 0);
		if (iVar2 == Local_43.f_1)
		{
			func_112();
			return;
		}
		unk_0xB095A8770515915B(Local_43.f_1, iVar0);
		Local_60.f_0 = 9;
		Local_55.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
		return;
	}
	if (!func_102())
	{
		unk_0x15848523A8959DBC(Local_43.f_1);
		Local_60.f_0 = 4;
		return;
	}
	if (!bLocal_50)
	{
		iVar3 = unk_0x1F8F07D86DA1A701(Local_43.f_1, -1794415470);
		if (iVar3 == 7)
		{
			if (!unk_0xFD0FE723227D5AB6(Local_43.f_1, 0))
			{
				unk_0x15848523A8959DBC(Local_43.f_1);
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
	if (!unk_0x45CD66F0A131E554(Local_43.f_4, 0))
	{
		Local_43.f_4 = 0;
		Local_60.f_0 = 4;
		return;
	}
	Var0 = { unk_0x57240623C1BC6E88(Local_43.f_1, 1) };
	Var3 = { unk_0x57240623C1BC6E88(Local_43.f_4, 1) };
	fVar6 = unk_0x3DC4639D5F23DEA2(Var0, Var3, 1);
	if (fVar6 > 3f)
	{
		if (!func_89(Global_36715[iLocal_64 /*5*/].f_2))
		{
			Local_60.f_0 = 12;
			return;
		}
		Local_60.f_0 = 5;
		Local_55.f_2 = unk_0x83666F9FB8FEBD4B() + 2000;
		return;
	}
	iVar7 = unk_0x58060A1B26EA2597(Local_43.f_4);
	iVar8 = 0;
	bVar9 = true;
	iVar8 = 1;
	while (bVar9)
	{
		if (iVar8 < iVar7)
		{
			if (unk_0xC0FA8EEF6413F866(Local_43.f_4, iVar8, 0))
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
	unk_0x3AD5401AC8DD9226(Local_43.f_1, Local_43.f_4, -1, iVar8, 1073741824, 1, 0);
	Local_60.f_0 = 7;
}

void func_116()
{
	if (!unk_0x23E9113C762466ED(Local_43.f_1))
	{
		return;
	}
	if (!unk_0xCA41A00932714525(Local_43.f_1))
	{
		unk_0xCFEAF108FE47852A(Local_43.f_1, 1048576000);
		unk_0xD92A51DBA55B6784(Local_43.f_1);
		unk_0x2009870663964FB4(Local_43.f_1, 0, -1056964608);
		Local_60.f_2 = "";
		unk_0xE81FB651EA53A574(Local_43.f_1);
		unk_0x0E21DA99F698AF06(Local_43.f_1, 200, 0);
		unk_0x0E21DA99F698AF06(Local_43.f_1, 46, 0);
		unk_0xFB616ABA635A95B3(Local_43.f_1, 1);
		unk_0xB195EE9DB37DA7F2(Local_43.f_1, 262144, 0);
		unk_0x2B8E285BD54DCE56(Local_43.f_1, 0);
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
	unk_0xCFEAF108FE47852A(uParam0, 1048576000);
	unk_0x2009870663964FB4(uParam0, 0, -1056964608);
	unk_0x0E21DA99F698AF06(uParam0, 200, 0);
	unk_0xFB616ABA635A95B3(iParam0, 1);
	unk_0xB195EE9DB37DA7F2(iParam0, 262144, 0);
	unk_0x2B8E285BD54DCE56(iParam0, 0);
}

void func_120()
{
	int iVar0;
	
	if (Local_55.f_0 == -1)
	{
		Global_36715[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36715[iLocal_64 /*5*/].f_3 < 3 && Global_36715[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_36715[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_36715[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_36715[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_36715[iLocal_64 /*5*/].f_2 = 1;
		}
	}
	if (unk_0xFD0FE723227D5AB6(Local_43.f_1, 0))
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
	if (!func_89(Global_36715[iLocal_64 /*5*/].f_2))
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
		iVar0 = Global_36796[iVar1 /*5*/].f_2;
		if (!iVar0 == 6)
		{
			if (Global_36796[iVar1 /*5*/].f_1 == iLocal_48)
			{
				func_124(iVar1);
				func_123(iVar1);
			}
			else if (Global_36796[iVar1 /*5*/].f_1 == 2)
			{
				if (!iLocal_49 == -1)
				{
					if (iLocal_49 == Global_36796[iVar1 /*5*/])
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
	Global_36796[iParam0 /*5*/] = -1;
	Global_36796[iParam0 /*5*/].f_1 = -1;
	Global_36796[iParam0 /*5*/].f_2 = 6;
	Global_36796[iParam0 /*5*/].f_3 = 0;
	Global_36796[iParam0 /*5*/].f_4 = 0;
}

void func_124(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_36796[iParam0 /*5*/].f_2;
	switch (iVar0)
	{
		case 1:
			func_145();
			break;
		
		case 2:
			func_128(Global_36796[iParam0 /*5*/].f_4);
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
	
	Global_36715[iLocal_64 /*5*/].f_4++;
	if (Local_55.f_0 == -1)
	{
		Global_36715[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36715[iLocal_64 /*5*/].f_4 < 9 && Global_36715[iLocal_64 /*5*/].f_4 != 0)
	{
		Global_36715[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_36715[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_36715[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_36715[iLocal_64 /*5*/].f_2 = 1;
		}
		if (!func_96(Local_43.f_1))
		{
			func_89(Global_36715[iLocal_64 /*5*/].f_2);
		}
	}
}

void func_127()
{
	int iVar0;
	
	Global_36715[iLocal_64 /*5*/].f_3++;
	if (Local_55.f_0 == -1)
	{
		Global_36715[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36715[iLocal_64 /*5*/].f_3 < 3 && Global_36715[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_36715[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_36715[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_36715[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_36715[iLocal_64 /*5*/].f_2 = 1;
		}
		if (!func_96(Local_43.f_1))
		{
			func_89(Global_36715[iLocal_64 /*5*/].f_2);
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
		iLocal_63 = unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796());
		return;
	}
	iVar0 = unk_0xA54996763FD89E65(unk_0xBE369BE1BC57A796());
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
		if (iParam0 == Global_36796[iVar0 /*5*/])
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
	if (!unk_0xA929B2923D14E2F8(Local_43.f_1, 0))
	{
		if (unk_0xD035C652F0986F10(Local_43.f_1))
		{
			Local_60.f_0 = 10;
		}
	}
	if (bLocal_50)
	{
		func_136();
		func_8(71, 1);
		if (unk_0x63C468D583002D23())
		{
			iVar0 = func_69(2051, -1, 0);
			iVar1 = (iVar0 / 10) + 1 * 10;
			if (iVar0 + 1 >= iVar1)
			{
				func_134(iVar1);
			}
			func_66(2051, iVar0 + 1, -1, 1, 0);
		}
		else
		{
			iVar2 = 0;
			iVar3 = 0;
			iVar4 = 0;
			unk_0x7FE4F330D3D74809(joaat("sp0_sp_num_times_drunk"), &iVar2, -1);
			unk_0x7FE4F330D3D74809(joaat("sp1_sp_num_times_drunk"), &iVar3, -1);
			unk_0x7FE4F330D3D74809(joaat("sp2_sp_num_times_drunk"), &iVar4, -1);
			iVar5 = ((iVar2 + iVar3) + iVar4);
			iVar6 = (iVar5 / 10) + 1 * 10;
			if (iVar5 + 1 >= iVar6)
			{
				func_134(iVar6);
			}
			switch (func_57())
			{
				case 0:
					unk_0x731753D8494ABECD(joaat("sp0_sp_num_times_drunk"), iVar2 + 1, 1);
					break;
				
				case 1:
					unk_0x731753D8494ABECD(joaat("sp1_sp_num_times_drunk"), iVar3 + 1, 1);
					break;
				
				case 2:
					unk_0x731753D8494ABECD(joaat("sp2_sp_num_times_drunk"), iVar4 + 1, 1);
					break;
				}
		}
		Local_60.f_1 = 1;
		return;
	}
	Local_60.f_1 = 12;
	if (Local_55.f_0 == -1)
	{
		Global_36715[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36715[iLocal_64 /*5*/].f_3 < 3 && Global_36715[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_36715[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar7 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar7 <= 0)
		{
			iVar7 = 0;
		}
		iVar7 = (iVar7 / 1000) + 1;
		Global_36715[iLocal_64 /*5*/].f_2 = 0;
		if (iVar7 < 30)
		{
			Global_36715[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar7 < 10)
		{
			Global_36715[iLocal_64 /*5*/].f_2 = 1;
		}
	}
}

void func_134(int iParam0)
{
	int iVar0;
	
	iVar0 = func_135(81);
	Global_2413052[iVar0 /*83*/] = 81;
	Global_2413052[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2413052[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_135(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2413052[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2413052[iVar1 /*83*/] == 0)
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
	Global_36796[iVar0 /*5*/] = iParam0;
	Global_36796[iVar0 /*5*/].f_1 = iParam1;
	Global_36796[iVar0 /*5*/].f_2 = iParam2;
	Global_36796[iVar0 /*5*/].f_3 = iParam3;
	Global_36796[iVar0 /*5*/].f_4 = iParam4;
}

int func_140()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36796[iVar0 /*5*/].f_2 == 6)
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
		if (iParam2 == Global_36796[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36796[iVar0 /*5*/])
			{
				if (iParam1 == Global_36796[iVar0 /*5*/].f_1)
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
	if (Local_43.f_1 == unk_0x17B5CC8A8615737D())
	{
		bLocal_50 = true;
		Global_36911 = 1;
		Global_36913++;
	}
	if (!unk_0xA929B2923D14E2F8(Local_43.f_1, 0))
	{
		iVar0 = func_60(Local_43.f_1);
		switch (iVar0)
		{
			case 17:
				unk_0xA0E70AC53ABAB207(Local_43.f_1, "AMANDA_DRUNK");
				break;
			
			case 19:
				unk_0xA0E70AC53ABAB207(Local_43.f_1, "LAMAR_DRUNK");
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
		if (!unk_0xA929B2923D14E2F8(Local_43.f_1, 0))
		{
			iVar0 = func_60(Local_43.f_1);
			if (Global_36715[iLocal_64 /*5*/].f_4 > 0)
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
					unk_0xA0E70AC53ABAB207(Local_43.f_1, "AMANDA_NORMAL");
					break;
				
				case 19:
					unk_0xA0E70AC53ABAB207(Local_43.f_1, "LAMAR_NORMAL");
					break;
				}
			}
	}
	func_116();
	if (bLocal_50)
	{
		Global_36911 = 0;
	}
	func_146();
	unk_0xF9FFB9857F3120F8(func_95(0));
	unk_0xF9FFB9857F3120F8(func_95(2));
	unk_0xF9FFB9857F3120F8(func_95(1));
	Global_1760205 = 0;
	if (unk_0x82F1A060D8F4583B(joaat("appemail")) > 0)
	{
		func_33(0);
	}
	unk_0x921053BAF754303D();
}

void func_146()
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (unk_0xA929B2923D14E2F8(Local_43.f_1, 0))
	{
		return;
	}
	uVar0 = Local_43.f_1;
	if (unk_0xFD0FE723227D5AB6(Local_43.f_1, 0))
	{
		uVar1 = unk_0x60604E51E30D25B8(Local_43.f_1, 0);
		iVar2 = unk_0x17206B315923243C(uVar1, -1, 0);
		if (!Local_43.f_1 == iVar2)
		{
			return;
		}
		uVar0 = iVar1;
	}
	else if (!unk_0x1066E7A58E2A0D9D() == 4 || !unk_0x17B5CC8A8615737D() == Local_43.f_1)
	{
		return;
	}
	fLocal_53 = 0f;
	func_109(uVar0, 0f);
}

void func_147(var uParam0, char* sParam1, int iParam2)
{
	unk_0xE4C6605BC74297B4(uParam0, sParam1, func_148(iParam2), 1);
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

