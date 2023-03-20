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
	if (unk_0x24862A9CDC8F8874(2))
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
		if ((unk_0xBBAE3E0C60A8AD4B() && !unk_0xDC9A5ADFE0C41DD2()) && !func_5())
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
	Global_2433098.f_631 = 1;
}

var func_3()
{
	return Global_2433098.f_610;
}

bool func_4()
{
	return unk_0xDCC86F723E82125E(Global_2433098.f_2, 11);
}

bool func_5()
{
	return unk_0xDCC86F723E82125E(Global_2433864.f_1.f_2809, 3);
}

void func_6()
{
	bool bVar0;
	
	if (unk_0xB6900B8CB0ABBD2B(Local_43.f_1))
	{
		func_131();
	}
	if (bLocal_50)
	{
		if (!unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
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
	
	unk_0xE76A2B916A59E1A8(Local_43.f_1, 3000, 3500, 0, 1, 1, 0);
	Global_1719224 = 1;
	if (!unk_0xD5DFCA69ACAA20E3())
	{
		unk_0x00F9843B9C06C2E9(2500);
		while (unk_0xE71FCE10773CF7B0())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		func_64(unk_0xA34E7C2A5118D638(), 0, 57344);
		Global_2404919.f_1664 = 1;
		if (unk_0x719D80C8C2BB7B0A(unk_0xA34E7C2A5118D638(), 0))
		{
			Global_2404919.f_1665 = 1;
		}
		else
		{
			Global_2404919.f_1665 = 0;
		}
		if (unk_0x48F1EC063D38EB03())
		{
			unk_0xF88B48D85C78AF92(0);
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
	if (!unk_0xB6900B8CB0ABBD2B(Local_43.f_1))
	{
		unk_0xC76B5C68AB6DC7DF(Local_43.f_1, Var1.f_5, 1, 0, 0, 1);
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
	if (Global_51402[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		return;
	}
	if (Global_51402[iParam0 /*7*/])
	{
		unk_0x5F0618A5FDAD55C4(Global_51402[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x071958EFED9481F5(Global_51402[iParam0 /*7*/].f_1, iVar0, 1);
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
	unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), false, 0);
	if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		unk_0xEE6504C7ECC425AB(unk_0xC8B93D94F8954288(), 1);
	}
	unk_0x213270B65D2FC4D2(uParam1->f_5, 4500f);
	unk_0x463EC802525767F5(uParam1->f_5, 4500f);
	unk_0x98371F41D43CDFA9(uParam1->f_5, 5f, 1, 0, 0, 0);
	unk_0xC76B5C68AB6DC7DF(unk_0xC8B93D94F8954288(), uParam1->f_5, 1, 0, 0, 1);
	unk_0xB7A2078CD1C9A82F(unk_0xC8B93D94F8954288(), true);
	unk_0x4EDE34FBADD967A6(0);
	unk_0x6F9EF355924EC498(1);
	unk_0xC0E8B67A4385D37D(*uParam1);
	if (unk_0xB8A06E7E729EED0A(uParam1->f_16))
	{
	}
	else
	{
		unk_0xC0E8B67A4385D37D(uParam1->f_16);
	}
	if (!unk_0xD5DFCA69ACAA20E3())
	{
		unk_0x00F9843B9C06C2E9(0);
	}
	func_47(uParam1->f_5, uParam1->f_8.f_2, 0, 1);
	if (!unk_0xD5DFCA69ACAA20E3())
	{
		unk_0x00F9843B9C06C2E9(0);
	}
	iVar1 = unk_0x693EBB4F13506457() + 20000;
	bVar2 = false;
	uParam1->f_33 = 0;
	while (!bVar2 && iVar1 > unk_0x693EBB4F13506457())
	{
		bVar2 = true;
		unk_0xC0E8B67A4385D37D(*uParam1);
		if (!unk_0xF9B86DC1728F1339(*uParam1))
		{
			bVar2 = false;
		}
		if (!unk_0xB8A06E7E729EED0A(uParam1->f_16))
		{
			unk_0xC0E8B67A4385D37D(uParam1->f_16);
			if (!unk_0xF9B86DC1728F1339(uParam1->f_16))
			{
				bVar2 = false;
			}
		}
		if (!unk_0xD5DFCA69ACAA20E3())
		{
			unk_0x00F9843B9C06C2E9(0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_44();
	if (!func_43(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		unk_0xB7A03E3BBB19D493(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 0, 1);
		unk_0x3FC9316FEF4E4720(uParam1->f_5 + uParam1->f_19, (unk_0x652D2EEEF1D3E62C(uParam1->f_22) + 25f), 0, 0, 0, 0, 0);
		unk_0x98371F41D43CDFA9(uParam1->f_5 + uParam1->f_19, (unk_0x652D2EEEF1D3E62C(uParam1->f_22) + 25f), 1, 0, 0, 0);
	}
	if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		unk_0xE6827001F6663087(unk_0xA34E7C2A5118D638());
		unk_0x80423B6A45BF05DA(unk_0xC8B93D94F8954288(), joaat("weapon_unarmed"), 1);
		unk_0xBA73099E237C7E5E(unk_0xC8B93D94F8954288());
	}
	unk_0xB7A2078CD1C9A82F(unk_0xC8B93D94F8954288(), false);
	unk_0x6F9EF355924EC498(0);
	unk_0x98371F41D43CDFA9(uParam1->f_5, 15f, 1, 0, 0, 0);
	unk_0x9D41CE02C66A7F3C();
	unk_0x38CBD3F595DFA2A6();
	func_41();
	while (func_40())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0xB66DD474AA9E764E() && !unk_0x2230725B418B1240())
	{
		unk_0x31E6EB2040318451(250);
	}
	unk_0x0F976C80D8B6703E(1);
	if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		iVar4 = unk_0x0B15BB6DFB729046(uParam1->f_5, uParam1->f_8, 2);
		unk_0x53DDB73894A6597A(iVar4, 0);
		unk_0x4528D7AA6C2BEF06(iVar4, 0);
		uVar5 = unk_0xFE4F2696906F18A3("DEFAULT_ANIMATED_CAMERA", 1);
		iVar6 = 4;
		if (uParam1->f_4 != joaat("MotionState_Idle"))
		{
			iVar6 |= 2;
		}
		func_38(unk_0xC8B93D94F8954288(), uParam1->f_18);
		unk_0xA5666A46C1079EFE(unk_0xC8B93D94F8954288(), iVar4, *uParam1, uParam1->f_1, 1000f, -1.5f, iVar6, 0, 1148846080, 0);
		unk_0x6BAA84ADA3480094(unk_0xC8B93D94F8954288(), 1);
		unk_0x6001133F57C3A844(unk_0xA34E7C2A5118D638(), 1);
		iVar3 = unk_0x9882DE58C89C6CF8(unk_0xC8B93D94F8954288(), 77);
		unk_0x1F64302AA4F597A7(unk_0xC8B93D94F8954288(), 77, 1);
		unk_0xEC805A65A86B9D68(uVar5, iVar4, uParam1->f_2, *uParam1);
		unk_0x2544549FDE4C3A7E(1, 0, 3000, 1, 0, 0);
		if (!unk_0xB8A06E7E729EED0A(uParam1->f_16) && !unk_0xB8A06E7E729EED0A(uParam1->f_17))
		{
			unk_0x5323F488E6A1B660(unk_0xC8B93D94F8954288(), uParam1->f_16, uParam1->f_17, 1000f, -1.5f, 10000, 33, 0, 0, 0, 0);
		}
	}
	else
	{
		iVar4 = -1;
	}
	if (!uParam1->f_25)
	{
		if (!unk_0xB8A06E7E729EED0A(sParam2))
		{
			func_37(sParam2, -1);
			uParam1->f_25 = 1;
		}
	}
	bVar7 = false;
	bVar8 = false;
	uVar9 = 16;
	if (!unk_0xB8A06E7E729EED0A(&(uParam1->f_11)))
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
		func_36(&uVar9, iVar175, unk_0xC8B93D94F8954288(), sVar176, 0, 1);
	}
	if (unk_0xBC6B93737FCDC466(iVar4))
	{
		sVar177 = "WalkInterruptible";
		sVar178 = "ForceBlendout";
		while (unk_0xBC6B93737FCDC466(iVar4) && !unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
		{
			if (!bVar8)
			{
				if (!unk_0xD5DFCA69ACAA20E3())
				{
					if (!unk_0xB8A06E7E729EED0A(uParam1->f_26))
					{
						unk_0xD7F5001BB6D13A64(uParam1->f_26, 0, 0);
						bVar8 = true;
					}
					if (!unk_0xB8A06E7E729EED0A(uParam1->f_27))
					{
						if (!unk_0xB8A06E7E729EED0A(uParam1->f_28))
						{
							unk_0xC4EE38A4CFF7544C(-1, uParam1->f_28, uParam1->f_27, 0);
							bVar8 = true;
						}
						if (!unk_0xB8A06E7E729EED0A(uParam1->f_29))
						{
							unk_0xC4EE38A4CFF7544C(-1, uParam1->f_29, uParam1->f_27, 0);
							bVar8 = true;
						}
					}
				}
			}
			unk_0xC5E066210BF7DEBB();
			unk_0x68A38902ADFD05FE(18);
			unk_0xE8C8E065C7BBD936();
			func_32();
			iVar179 = unk_0x693EBB4F13506457();
			if (iVar179 >= (Global_36251 - 500))
			{
				func_31(4000);
			}
			fVar180 = -1f;
			fVar181 = -1f;
			fVar0 = unk_0x2091E42376999826(iVar4);
			if (!unk_0xB8A06E7E729EED0A(&(uParam1->f_11)))
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
			if (unk_0x1E13AB82EFC29B1D(unk_0xC8B93D94F8954288(), unk_0x7CBED6EFED40E7EB(sVar177)))
			{
				iVar183 = (unk_0x01153D747C13A17C(2, 195) - 128);
				iVar184 = (unk_0x01153D747C13A17C(2, 196) - 128);
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
			if (unk_0xB548555C3ED3CEBE() == 4 && uParam1->f_52 > 0f)
			{
				if (fVar0 >= uParam1->f_52)
				{
					if (!uParam1->f_32)
					{
						fVar185 = 1.5f;
						Var186 = { unk_0xA92021E6D6BD54F8() };
						Var189 = { unk_0xB867FC7DBA46C0F1(unk_0xC8B93D94F8954288(), 31086, 0f, 0f, 0f) };
						fVar192 = unk_0x4F982ED5336EA899(Var186, Var189, 1);
						fVar185 = func_18(fVar185, 0.001f, (fVar192 - 0.75f));
						if (fVar185 < 0f)
						{
							fVar185 = 0.001f;
						}
						func_17(&(uParam1->f_34), unk_0xC8B93D94F8954288(), func_57(), 1E-06f, 300, 300, 0, 0, 1045220557);
						func_16(&(uParam1->f_34), uParam1->f_53);
						if (!uParam1->f_33)
						{
							uParam1->f_34 = 1;
							uParam1->f_34.f_7 = unk_0x693EBB4F13506457();
							uParam1->f_34.f_8 = 0;
							uParam1->f_33 = 1;
						}
						if (uParam1->f_57 == 999f)
						{
							uParam1->f_56 = 0f;
						}
						if (uParam1->f_57 == 999f)
						{
							Var195 = { unk_0xFD51B6DD7EA5FAA4(2) };
							uVar198 = unk_0x59DD203239FBDCAD(unk_0xC8B93D94F8954288());
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
						unk_0x0F9FDCEB321235AB(fVar193, 1065353216);
						unk_0x8C67D2FDE360FBCA(fVar194);
						unk_0xE7F9A0D2CAE4E0A1(fVar193);
						unk_0x65624B4C67A5FE53(fVar194);
						Var201 = { unk_0xA92021E6D6BD54F8() };
						Var204 = { unk_0xE81835FB046A7978() };
						fVar207 = unk_0x4F982ED5336EA899(Var201, Var204, 1);
						iVar208 = unk_0xF2DB717A73826179((fVar207 * 1000f));
						uParam1->f_32 = 1;
					}
					if (uParam1->f_32)
					{
						unk_0x7119FC74139A8711();
						if (func_13(&(uParam1->f_34), 1, 1, 1, 0, 0, 0))
						{
						}
					}
				}
			}
			if (unk_0x1E13AB82EFC29B1D(unk_0xC8B93D94F8954288(), unk_0x7CBED6EFED40E7EB(sVar178)) || iVar182)
			{
				if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
				{
					unk_0x5124C5FA52D2AF3E(unk_0xC8B93D94F8954288());
					switch (uParam1->f_4)
					{
						case joaat("MotionState_Idle"):
							unk_0x447955D97DC49D70(unk_0xC8B93D94F8954288(), joaat("MotionState_Idle"), 1, 0, 0);
							unk_0xCEDE7EE5970B48B8(0, 0, 3, 0);
							break;
						
						case joaat("MotionState_Walk"):
							unk_0x447955D97DC49D70(unk_0xC8B93D94F8954288(), joaat("MotionState_Walk"), 1, 0, 0);
							unk_0x1A039EB9A3399D1C(unk_0xA34E7C2A5118D638(), 1f, 500, 0, 1, 0);
							if (unk_0xB548555C3ED3CEBE() != 4)
							{
								if (uParam1->f_31 == 999f)
								{
									uParam1->f_30 = 0f;
								}
								if (uParam1->f_31 == 999f)
								{
									Var211 = { unk_0xFD51B6DD7EA5FAA4(2) };
									uVar214 = unk_0x59DD203239FBDCAD(unk_0xC8B93D94F8954288());
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
								unk_0x0F9FDCEB321235AB(fVar209, 1065353216);
								unk_0x8C67D2FDE360FBCA(fVar210);
								Var217 = { unk_0xA92021E6D6BD54F8() };
								Var220 = { unk_0xE81835FB046A7978() };
								fVar223 = unk_0x4F982ED5336EA899(Var217, Var220, 1);
								iVar224 = unk_0xF2DB717A73826179((fVar223 * 1000f));
								unk_0x2544549FDE4C3A7E(0, 1, iVar224, 0, 0, 0);
							}
							break;
						
						default:
							break;
					}
					if (unk_0xBC6B93737FCDC466(iVar4))
					{
						unk_0xA41A6CFE2060B6F8(iVar4);
						iVar4 = -1;
					}
				}
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (!func_43(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		unk_0x5C6AA4866046D391(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 1);
	}
	unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), true, 0);
	if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		unk_0x5124C5FA52D2AF3E(unk_0xC8B93D94F8954288());
	}
	bVar225 = unk_0x8943AADB51F23E95();
	bVar226 = false;
	if (uParam1->f_32)
	{
		unk_0x7119FC74139A8711();
		if (!func_13(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
		{
			bVar226 = true;
		}
	}
	if (bVar225 || bVar226)
	{
		while ((bVar225 || bVar226) && !unk_0xA8D4B6BDCF6DE72B())
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
			bVar225 = unk_0x8943AADB51F23E95();
			bVar226 = false;
			if (uParam1->f_32)
			{
				unk_0x7119FC74139A8711();
				if (!func_13(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
				{
					bVar226 = true;
				}
			}
		}
	}
	if (!unk_0xB8A06E7E729EED0A(uParam1->f_16))
	{
		unk_0x3ECF1E41E6ED71D8(uParam1->f_16);
	}
	unk_0x3ECF1E41E6ED71D8(*uParam1);
	unk_0x5CF5A880ED809DDA(uVar5, 0);
	func_10(&(uParam1->f_34));
	if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
	{
		unk_0x1F64302AA4F597A7(unk_0xC8B93D94F8954288(), 77, iVar3);
		unk_0xEE6504C7ECC425AB(unk_0xC8B93D94F8954288(), 0);
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
	if (unk_0x844838E5D8A21336(uParam0->f_1))
	{
		unk_0x5CF5A880ED809DDA(uParam0->f_1, 0);
	}
	if (unk_0x844838E5D8A21336(uParam0->f_2))
	{
		unk_0x5CF5A880ED809DDA(uParam0->f_2, 0);
	}
	if (unk_0x844838E5D8A21336(uParam0->f_3))
	{
		unk_0x5CF5A880ED809DDA(uParam0->f_3, 0);
	}
	if (unk_0x844838E5D8A21336(uParam0->f_4))
	{
		unk_0x5CF5A880ED809DDA(uParam0->f_4, 0);
	}
}

void func_12(int iParam0, int iParam1, int iParam2)
{
	unk_0x2BE3C7FA4FCCA784(iParam0, iParam1, 1);
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
			if (!unk_0xB6900B8CB0ABBD2B(uParam0->f_5))
			{
				func_11(uParam0);
				Var0 = { unk_0xA92021E6D6BD54F8() };
				if (bParam1)
				{
					Var0 = { Var0 + unk_0x3A5C3B481EEBA95F(uParam0->f_5) * FtoV(unk_0x6CE7EDC8B5C46819()) };
				}
				Var3 = { unk_0xEABAE14292BF78FB(uParam0->f_5, Var0) };
				Var6 = { unk_0xFD51B6DD7EA5FAA4(2) };
				Var9 = { Var6 + uParam0->f_9 };
				Var12 = { Var9 - unk_0xF57992155BDFCC67(uParam0->f_5, 2) };
				Var15 = { (-unk_0x0BADBFA3B172435F(Var9.f_2) * unk_0xD0FFB162F40A139C(Var9.f_0)), (unk_0xD0FFB162F40A139C(Var9.f_2) * unk_0xD0FFB162F40A139C(Var9.f_0)), unk_0x0BADBFA3B172435F(Var9.f_0) };
				Var18 = { (-unk_0x0BADBFA3B172435F(Var12.f_2) * unk_0xD0FFB162F40A139C(Var12.f_0)), (unk_0xD0FFB162F40A139C(Var12.f_2) * unk_0xD0FFB162F40A139C(Var12.f_0)), unk_0x0BADBFA3B172435F(Var12.f_0) };
				uVar21 = unk_0x2606A7C2E89D9950();
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = unk_0xC2BD7C2F6D9648EB(1775630800, 0);
				}
				uParam0->f_1 = unk_0xC2BD7C2F6D9648EB(26379945, 1);
				if (bParam1)
				{
					unk_0x9260EF17CCEC43E4(uParam0->f_1, uParam0->f_5, Var3, 1);
				}
				else
				{
					unk_0x279ADEB173DD9DEE(uParam0->f_1, Var0);
				}
				unk_0xC990AF7C56A67ECD(uParam0->f_1, Var6, 2);
				unk_0xD9D8D5E5A50FF6D5(uParam0->f_1, uVar21);
				uParam0->f_2 = unk_0xC2BD7C2F6D9648EB(26379945, 1);
				if (bParam1 && !bParam4)
				{
					unk_0x9260EF17CCEC43E4(uParam0->f_2, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12), 1);
				}
				else
				{
					unk_0x279ADEB173DD9DEE(uParam0->f_2, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12));
				}
				unk_0xC990AF7C56A67ECD(uParam0->f_2, Var6, 2);
				unk_0xD9D8D5E5A50FF6D5(uParam0->f_2, uVar21);
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = unk_0xC2BD7C2F6D9648EB(26379945, 1);
					if (bParam1 && !bParam4)
					{
						unk_0x9260EF17CCEC43E4(uParam0->f_4, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13), 1);
					}
					else
					{
						unk_0x279ADEB173DD9DEE(uParam0->f_4, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13));
					}
					unk_0xC990AF7C56A67ECD(uParam0->f_4, Var6, 2);
					unk_0xD9D8D5E5A50FF6D5(uParam0->f_4, uVar21);
				}
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					unk_0xC3648C170824C834(uParam0->f_3, uParam0->f_1, 0, 2);
					if (iParam6 == 0)
					{
						unk_0xC3648C170824C834(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
					}
					unk_0xC3648C170824C834(uParam0->f_3, uParam0->f_2, (uParam0->f_14 - uParam0->f_17), 2);
					unk_0x654A507585051BDA(uParam0->f_3, iParam6);
					unk_0x7D1795B1E14EDFFD(uParam0->f_3, 1);
				}
				else
				{
					unk_0xB306DBE9AFBD23A6(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
				unk_0x2544549FDE4C3A7E(1, 0, 3000, 1, 0, 0);
				uParam0->f_7 = unk_0x693EBB4F13506457();
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
					if (unk_0x693EBB4F13506457() >= (uParam0->f_7 + uParam0->f_16))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									unk_0xD7F5001BB6D13A64("CamPushInFranklin", 0, 0);
									break;
								
								case 0:
									unk_0xD7F5001BB6D13A64("CamPushInMichael", 0, 0);
									break;
								
								case 2:
									unk_0xD7F5001BB6D13A64("CamPushInTrevor", 0, 0);
									break;
							}
						}
						else
						{
							unk_0xD7F5001BB6D13A64("CamPushInNeutral", 0, 0);
						}
						unk_0xC4EE38A4CFF7544C(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						uParam0->f_8 = 1;
					}
				}
			}
			if (unk_0x693EBB4F13506457() >= (uParam0->f_7 + uParam0->f_15))
			{
				if (bParam2)
				{
					func_11(uParam0);
					unk_0x2544549FDE4C3A7E(0, 0, 3000, 1, 0, 0);
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
	unk_0x5B53B03A14798328();
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
					unk_0xB518E9C8553B1D2B(0);
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
		if (unk_0x2964A62922189B93())
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
			unk_0x77621132305B133B(&Global_2283, 20);
			unk_0x77621132305B133B(&Global_2284, 17);
			unk_0x77621132305B133B(&Global_2285, 0);
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
			if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
			{
				if (unk_0x7E515EEFC038658D(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (func_24())
				{
					return 0;
				}
				if (unk_0x50CB4D478D09ED89(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (unk_0x5E161494BC10595F(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (unk_0x68A7CE67BDF5E83C(unk_0xC8B93D94F8954288(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69317)
				{
					if (unk_0xEE473B4B88D6F842(unk_0xC8B93D94F8954288()))
					{
						return 0;
					}
					if (unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638()))
					{
						return 0;
					}
					if (unk_0x3A2AAB26205C2C37(unk_0xC8B93D94F8954288()))
					{
						return 0;
					}
					if (unk_0x4887094DDBD415E7(unk_0xA34E7C2A5118D638()))
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
				if (unk_0xDCC86F723E82125E(Global_2283, 9))
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
	unk_0xB518E9C8553B1D2B(0);
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
	unk_0x77621132305B133B(&Global_2284, 16);
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
	
	if (Global_69317)
	{
		iVar0 = 0;
		unk_0xA51F11E1DC7307BB(unk_0xC8B93D94F8954288(), &iVar1, 1);
		if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xA4860063B4E6B963() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		if (unk_0x0917C1C640BB7484(unk_0xC8B93D94F8954288(), 78, 1))
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
		if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
		{
			if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[2 /*29*/])
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
		if (Global_69317)
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
	return Global_35700 == iParam0;
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
				return Global_1338611.f_203[iParam1];
			}
			break;
	}
	return unk_0xDCC86F723E82125E(Global_1338611.f_949, iParam0);
}

void func_29()
{
	unk_0xE9A2B98CC2F095D6();
	Global_16723 = 0;
	if ((unk_0x44E93B894936152F() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xB518E9C8553B1D2B(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0x2964A62922189B93())
	{
		unk_0xB518E9C8553B1D2B(1);
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
	Global_36251 = (unk_0x693EBB4F13506457() + iParam0);
}

void func_32()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_35(0))
		{
			func_33(0);
		}
		unk_0x59A0729D503ED758(&Global_2284, 2);
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
		unk_0x59A0729D503ED758(&Global_2284, 16);
	}
	if (unk_0x44E93B894936152F())
	{
		unk_0xB518E9C8553B1D2B(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x59A0729D503ED758(&Global_2283, 30);
	}
	else
	{
		unk_0x77621132305B133B(&Global_2283, 30);
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
				unk_0xCE4D902766AE0E55(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xDA89C6AF8C0D7C39(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xDA89C6AF8C0D7C39(Global_14350);
		}
		else
		{
			unk_0xDA89C6AF8C0D7C39(Global_14341);
		}
	}
}

int func_35(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xDCC86F723E82125E(Global_2283, 14))
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
	if (unk_0xCBC8FFE55DC722B5(joaat("cellphone_flashhand")) > 0)
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
	if (!Global_69317)
	{
		if (!unk_0x2DC9BA2299B45EA6(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x8EB9A60FB4C37A34(iParam2, 0);
			}
			else
			{
				unk_0x8EB9A60FB4C37A34(iParam2, 1);
			}
		}
		if (!unk_0x2DC9BA2299B45EA6(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7EAD9630176BD15E(iParam2, 0);
			}
			else
			{
				unk_0x7EAD9630176BD15E(iParam2, 1);
			}
		}
	}
}

void func_37(char* sParam0, int iParam1)
{
	unk_0xF4A7F7324E8C92A2(sParam0);
	unk_0x31D76F87C39FB8DD(0, 0, 1, iParam1);
}

void func_38(int iParam0, var uParam1)
{
	if (func_39(uParam1, 1))
	{
		unk_0x9E0FC8089607100A(iParam0, "HOSPITAL_0", 0f, 1f);
	}
	if (func_39(uParam1, 2))
	{
		unk_0x9E0FC8089607100A(iParam0, "HOSPITAL_1", 0f, 1f);
	}
	if (func_39(uParam1, 4))
	{
		unk_0x9E0FC8089607100A(iParam0, "HOSPITAL_2", 0f, 1f);
	}
	if (func_39(uParam1, 8))
	{
		unk_0x9E0FC8089607100A(iParam0, "HOSPITAL_3", 0f, 1f);
	}
	if (func_39(uParam1, 16))
	{
		unk_0x9E0FC8089607100A(iParam0, "HOSPITAL_4", 0f, 1f);
	}
	if (func_39(uParam1, 32))
	{
		unk_0x9E0FC8089607100A(iParam0, "HOSPITAL_5", 0f, 1f);
	}
	if (func_39(uParam1, 64))
	{
		unk_0x9E0FC8089607100A(iParam0, "HOSPITAL_6", 0f, 1f);
	}
	if (func_39(uParam1, 128))
	{
		unk_0x9E0FC8089607100A(iParam0, "HOSPITAL_7", 0f, 1f);
	}
	if (func_39(uParam1, 256))
	{
		unk_0x9E0FC8089607100A(iParam0, "HOSPITAL_8", 0f, 1f);
	}
	if (func_39(uParam1, 512))
	{
		unk_0x9E0FC8089607100A(iParam0, "HOSPITAL_9", 0f, 1f);
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
	if (((Global_91106 == 13 || Global_91106 == 10) || Global_91106 == 11) || Global_91106 == 12)
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
		if (Global_88372[iVar0 /*17*/] && !Global_88372[iVar0 /*17*/].f_1)
		{
			if (Global_88372[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_88372[iVar0 /*17*/].f_5 != 88 && Global_88372[iVar0 /*17*/].f_5 != 89) && Global_88372[iVar0 /*17*/].f_5 != 92)
				{
					func_42(Global_88372[iVar0 /*17*/].f_5, 1);
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
			Global_85424[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85424[iParam0 /*2*/] = 0;
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
		iVar1 = Global_36553[iVar0 /*5*/];
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
		if (Global_36527[iVar2 /*5*/] == 0)
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
	if (!Global_36527[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36527[iParam0 /*5*/].f_1 == unk_0xC8B93D94F8954288())
		{
			Global_36748 = 0;
		}
	}
	Global_36527[iParam0 /*5*/] = 13;
	Global_36527[iParam0 /*5*/].f_1 = 0;
	Global_36527[iParam0 /*5*/].f_2 = 0;
	Global_36527[iParam0 /*5*/].f_3 = 0;
	Global_36527[iParam0 /*5*/].f_4 = 0;
	Global_36526 = (Global_36526 - 1);
	if (Global_36526 < 0)
	{
		Global_36526 = 0;
	}
}

int func_47(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		func_51(0);
		unk_0x98371F41D43CDFA9(Param0, 5f, 1, 0, 0, 0);
		if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
		{
			if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
			{
				unk_0xC76B5C68AB6DC7DF(unk_0xC8B93D94F8954288(), Param0, 1, 0, 0, 1);
				unk_0x765E3FA65D011F03(unk_0xC8B93D94F8954288(), uParam3);
				unk_0x0F9FDCEB321235AB(0f, 1065353216);
				unk_0x8C67D2FDE360FBCA(0f);
			}
		}
		unk_0xB28872CD570B6AE9(Param0, 4500f, 0);
		unk_0x4EDE34FBADD967A6(0);
		unk_0x98371F41D43CDFA9(Param0, 5000f, 1, 0, 0, 0);
		unk_0x83BD643811DA0EA8(Param0, 5000f, 0);
		unk_0x213270B65D2FC4D2(Param0, 5000f);
		unk_0x463EC802525767F5(Param0, 5000f);
		func_50();
		func_49();
		unk_0xC1B1E9A034A63A62(0);
		func_51(1);
		if (!unk_0x2394B86AAC723FB8())
		{
			while (!unk_0xB28872CD570B6AE9(Param0, 4500f, 0))
			{
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					unk_0x6F9EF355924EC498(0);
					return 0;
				}
			}
		}
		unk_0xC1B1E9A034A63A62(0);
		while (!unk_0xADC51AA62B8218E4())
		{
			unk_0x4EDE34FBADD967A6(0);
			if (unk_0x83666F9FB8FEBD4B() > 20000)
			{
				unk_0x6F9EF355924EC498(0);
				if (unk_0x2394B86AAC723FB8())
				{
					unk_0x11592AACD6BAEC7F();
				}
				return 0;
			}
		}
		if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
		{
			if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
			{
				if (unk_0x2394B86AAC723FB8())
				{
					unk_0x11592AACD6BAEC7F();
				}
				unk_0x6F9EF355924EC498(0);
				unk_0xC1B1E9A034A63A62(0);
				unk_0x9D41CE02C66A7F3C();
				if (iParam5 == 1)
				{
					unk_0x38CBD3F595DFA2A6();
				}
				else
				{
					unk_0xC1B1E9A034A63A62(5000);
				}
				unk_0x17AE05418177BAEA();
			}
		}
		while ((!unk_0x0312D5E0FF09ACD9() && !func_48()) && unk_0x83666F9FB8FEBD4B() < 1500)
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
			unk_0x32B7B9548CC32D81(Param0, &(Param0.f_2), 0);
			unk_0x98371F41D43CDFA9(Param0, 5f, 1, 0, 0, 0);
			if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
			{
				if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
				{
					unk_0xC76B5C68AB6DC7DF(unk_0xC8B93D94F8954288(), Param0, 1, 0, 0, 1);
					unk_0x765E3FA65D011F03(unk_0xC8B93D94F8954288(), uParam3);
				}
			}
		}
		unk_0x0F9FDCEB321235AB(0f, 1065353216);
		unk_0x8C67D2FDE360FBCA(0f);
		func_51(0);
		return 1;
	}
	func_51(0);
	return 0;
}

bool func_48()
{
	return !Global_68186.f_553;
}

void func_49()
{
	Global_68186.f_553 = 1;
	Global_68186.f_554 = 0;
}

void func_50()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		Global_68186[iVar0] = 0;
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
			if (!unk_0xDCC86F723E82125E(Global_91106.f_20, 2))
			{
				unk_0x6F9EF355924EC498(1);
				unk_0x59A0729D503ED758(&(Global_91106.f_20), 2);
			}
		}
		else if (unk_0xDCC86F723E82125E(Global_91106.f_20, 2))
		{
			unk_0x6F9EF355924EC498(0);
			unk_0x77621132305B133B(&(Global_91106.f_20), 2);
		}
	}
}

int func_52()
{
	if (unk_0xDCC86F723E82125E(unk_0x531444754C426278(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

bool func_53(int iParam0)
{
	return unk_0xDCC86F723E82125E(Global_100976.f_5863[iParam0], 0);
}

int func_54(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_100976.f_7719.f_99.f_58[iParam0];
}

int func_55()
{
	if (Global_33066[11] == 1)
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
	return Global_100976.f_7719.f_330[iParam0 /*6*/];
}

int func_57()
{
	func_58();
	return Global_100976.f_1770.f_539.f_3549;
}

void func_58()
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
	{
		if (func_61(Global_100976.f_1770.f_539.f_3549) != unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()))
		{
			iVar0 = func_60(unk_0xC8B93D94F8954288());
			if (func_59(iVar0) && (!func_26(14) || Global_99928))
			{
				if (Global_100976.f_1770.f_539.f_3549 != iVar0 && func_59(Global_100976.f_1770.f_539.f_3549))
				{
					Global_100976.f_1770.f_539.f_3550 = Global_100976.f_1770.f_539.f_3549;
				}
				Global_100976.f_1770.f_539.f_3551 = iVar0;
				Global_100976.f_1770.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_100976.f_1770.f_539.f_3549 != 145)
			{
				Global_100976.f_1770.f_539.f_3551 = Global_100976.f_1770.f_539.f_3549;
			}
			return;
		}
	}
	Global_100976.f_1770.f_539.f_3549 = 145;
}

bool func_59(int iParam0)
{
	return iParam0 < 3;
}

int func_60(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x95CCECA3948CFE7B(iParam0))
	{
		iVar1 = unk_0x6D5BB810CC209E15(iParam0);
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
		return Global_100976.f_32519[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_62(bool bParam0)
{
	unk_0x9B42304CF6BA754C(0f);
	unk_0x509885C9E540EEB1(0f);
	unk_0xB24A9C603103659F(0f);
	unk_0x764018CEDFACA24C(1);
	unk_0x00F9C495069B37C5(0f);
	unk_0x2342C8BD856DDFC7(1);
	unk_0x63E7027E4629C463(0);
	if (unk_0xB5F5536784683C33("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0xDB9D78E5137EE7AD("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0xB8A06E7E729EED0A(&Global_36728))
	{
		if (unk_0xB5F5536784683C33(&Global_36728))
		{
			unk_0xDB9D78E5137EE7AD(&Global_36728);
		}
	}
	if (unk_0x844838E5D8A21336(Global_36717))
	{
		if (unk_0x182287FAF327C182(Global_36717))
		{
			unk_0xBE191D8A04BC7DFF(Global_36717, 0f);
			unk_0x9F8E593BD9272C2E(Global_36717, 1);
		}
	}
	if (unk_0x48F1EC063D38EB03())
	{
		unk_0xF88B48D85C78AF92(0);
	}
	if (bParam0)
	{
		if (unk_0xE0FA5DECA3886F33() != -1 || unk_0x1C3E6739D384D123() != -1)
		{
			unk_0xBB221FC3969254DE();
		}
		else if (unk_0xA8D4B6BDCF6DE72B())
		{
			unk_0xBB221FC3969254DE();
		}
	}
	Global_36723 = 0f;
	StringCopy(&Global_36724, "", 16);
	StringCopy(&Global_36728, "", 64);
	StringCopy(&Global_36744, "", 16);
	func_63();
}

void func_63()
{
	Global_36716 = 0;
	Global_36717 = 0;
	Global_36718 = 0;
	Global_36719 = 30000;
	Global_36720 = 0f;
	Global_36722 = 0f;
	Global_36721 = 0f;
	Global_36723 = 0f;
	StringCopy(&Global_36724, "", 16);
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
		if (unk_0xFD790CCEB2024190())
		{
			unk_0x4A7FE215482FE126(0);
		}
	}
	if (!unk_0xBBAE3E0C60A8AD4B())
	{
		uVar0 = iParam2;
		unk_0x6C1CBBF18B93CB8E(iParam0, bParam1, uVar0);
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
		if (unk_0xDF73DA5E2287C499(iParam0) && unk_0x06972B20E75CBE06(iParam0))
		{
			iVar25 = unk_0xCF4C00513A86E840(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0xBBAE3E0C60A8AD4B())
				{
					unk_0x3C97CC6571B00B28(1);
				}
				else
				{
					unk_0x872B541D7953A19B(iVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0xBBAE3E0C60A8AD4B() && !bVar18)
					{
						unk_0x3C97CC6571B00B28(0);
					}
					Global_2417071[iParam0 /*306*/].f_240 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_67(iVar25) && !unk_0x2EB1FABE3FD7BD6D(iVar25))
				{
					if (!bVar21)
					{
						unk_0x8FB4254399424391(iVar25, true, 0);
					}
				}
				if (!unk_0xB0A9B470CE75BF12(iVar25))
				{
					if (!bVar20)
					{
						unk_0xB7A2078CD1C9A82F(iVar25, false);
					}
					unk_0x3907D4738A2C8ABD(iVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0xB7A2078CD1C9A82F(iVar25, false);
				}
				unk_0x58F516BB5E324590(iVar25, true);
				unk_0x9B5503F5CD2CEB12(iParam0, 0);
				unk_0xD18E3053ACCB190F(iVar25);
				unk_0xCE224502DAE6D698(iVar25, 1);
				func_66();
				func_65();
				if (unk_0x1E7B4B730C1981F4())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0x2394B86AAC723FB8())
				{
				}
				Global_2417071[iParam0 /*306*/].f_241 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_67(iVar25) && !unk_0x2EB1FABE3FD7BD6D(iVar25))
				{
					if (!bVar21)
					{
						unk_0x8FB4254399424391(iVar25, !bVar14, 0);
					}
					if (!unk_0xB0A9B470CE75BF12(iVar25))
					{
						if (!bVar20)
						{
							unk_0xB7A2078CD1C9A82F(iVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0x3907D4738A2C8ABD(iVar25, 1);
						}
					}
				}
				if (bVar9)
				{
					unk_0x9B5503F5CD2CEB12(iParam0, 0);
				}
				else
				{
					unk_0x9B5503F5CD2CEB12(iParam0, 1);
				}
				unk_0x58F516BB5E324590(iVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0xF3D6EAEF84D60393(iVar25) && !unk_0x277ECDA23D8CCEB4(iVar25, 0))
					{
						unk_0xBA73099E237C7E5E(iVar25);
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
			unk_0x6C1CBBF18B93CB8E(iParam0, bParam1, iVar26);
		}
	}
}

void func_65()
{
	struct<2> Var0;
	
	Global_2426867.f_691 = 0;
	Global_2426867.f_692 = 0;
	Global_2426867.f_693 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2404919.f_1668 = { Var0 };
}

void func_66()
{
	Global_2404919.f_622 = 0;
	Global_2404919.f_1709 = 0;
	Global_2404919.f_484 = 0;
	Global_2417071[unk_0xA34E7C2A5118D638() /*306*/].f_205 = 0;
}

int func_67(int iParam0)
{
	int iVar0;
	
	if (unk_0x277ECDA23D8CCEB4(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x090C65D5190A249D(iParam0, -1794415470);
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
	if (!func_71(Global_36553[iLocal_64 /*5*/].f_2))
	{
		return;
	}
	iVar0 = unk_0x531444754C426278(500, 3000);
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
	if (unk_0x2DC9BA2299B45EA6(Local_43.f_1))
	{
		if (unk_0x277ECDA23D8CCEB4(Local_43.f_1, 0) || unk_0xC0AE63CA97F3FF6A(Local_43.f_1))
		{
			return 0;
		}
		if (unk_0xEE2A6E4FAB1A1596(Local_43.f_1))
		{
			return 0;
		}
		if (func_78(Local_43.f_1))
		{
			return 0;
		}
	}
	if (Global_36553[iLocal_64 /*5*/].f_3 < 3 && Global_36553[iLocal_64 /*5*/].f_3 != 0)
	{
		return 0;
	}
	if (Global_36553[iLocal_64 /*5*/].f_4 < 9 && Global_36553[iLocal_64 /*5*/].f_4 != 0)
	{
		return 0;
	}
	uVar1 = func_77(iParam0);
	if (unk_0xB8A06E7E729EED0A(uVar1))
	{
		return 0;
	}
	if (func_78(Local_43.f_1))
	{
		return 0;
	}
	unk_0x841AF342F853B150(sVar1);
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
		if (!unk_0xB8A06E7E729EED0A(sVar2) && !unk_0xB8A06E7E729EED0A(sVar3))
		{
			unk_0xC0E8B67A4385D37D(sVar2);
			while (!unk_0xF9B86DC1728F1339(sVar2))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (!unk_0x2DC9BA2299B45EA6(Local_43.f_1))
			{
				unk_0x5323F488E6A1B660(Local_43.f_1, sVar2, sVar3, 1.5f, -1.5f, -1, 48, 0, 0, 0, 0);
				sLocal_54 = sVar3;
			}
		}
	}
	if (!unk_0x11896648C9E8F14F(sVar1))
	{
		return 0;
	}
	if (unk_0x2DC9BA2299B45EA6(Local_43.f_1))
	{
		return 0;
	}
	unk_0x9740820061E05C06(Local_43.f_1, sVar1, 0.75f);
	if (unk_0xB548555C3ED3CEBE() == 4)
	{
		unk_0x5361B2FB90592D0F(Local_43.f_1, "move_ped_strafing_firstperson@drunk");
	}
	unk_0xBECB5D1E29317CB7(Local_43.f_1, 0, sVar1, "idle", 2f, 1);
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
			if (unk_0xA815CBE767EFA3CB(Local_43.f_1))
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
			else if (unk_0xAC281E457992D7AB(Local_43.f_1))
			{
				iVar4 = "FACIALS@GEN_MALE@BASE";
			}
			else
			{
				iVar4 = "FACIALS@GEN_FEMALE@BASE";
			}
			break;
	}
	unk_0xF02F267005C980BB(Local_43.f_1, "mood_drunk_1", iVar4);
	unk_0x1F64302AA4F597A7(Local_43.f_1, 200, 1);
	unk_0x1F64302AA4F597A7(Local_43.f_1, 46, 1);
	unk_0x8EB9A60FB4C37A34(Local_43.f_1, 0);
	unk_0xF36EA652E4A6CED0(Local_43.f_1, 262144, 1);
	unk_0x7E1639F136BDE5F3(Local_43.f_1, 1);
	return 1;
}

bool func_72()
{
	return func_73(unk_0xA34E7C2A5118D638());
}

int func_73(int iParam0)
{
	if (unk_0x6D5BB810CC209E15(unk_0xCF4C00513A86E840(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_74(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x277ECDA23D8CCEB4(iParam0, 1) || unk_0xC0AE63CA97F3FF6A(iParam0))
	{
		return 0;
	}
	if (unk_0x090C65D5190A249D(iParam0, -2017877118) != 7)
	{
		return 0;
	}
	if (unk_0x090C65D5190A249D(iParam0, 1785177548) != 7)
	{
		return 0;
	}
	if (unk_0x1E8D3FA42E89ED72(iParam0))
	{
		return 0;
	}
	if (unk_0x25011B7D08ACD328(iParam0))
	{
		return 0;
	}
	if (unk_0x770AAB67BDD9C729(iParam0))
	{
		return 0;
	}
	if (unk_0x56A705EEDF9090AD(iParam0))
	{
		return 0;
	}
	if (Global_67968)
	{
		return 0;
	}
	if (func_76())
	{
		return 0;
	}
	if (iParam0 == unk_0xC8B93D94F8954288())
	{
		if (!unk_0x39E04B018A367AA4(unk_0xA34E7C2A5118D638()))
		{
			return 0;
		}
		if (!unk_0x0332C5816E3E66D5(unk_0xA34E7C2A5118D638()))
		{
			return 0;
		}
		if (unk_0x7B5DB83193A3B209(unk_0xA34E7C2A5118D638()) || unk_0x58474B48103C2968(unk_0xA34E7C2A5118D638()))
		{
			return 0;
		}
		if (func_75())
		{
			return 0;
		}
	}
	Var0 = { unk_0x3A5C3B481EEBA95F(iParam0) };
	if (unk_0xA8CEACB4F35AE058(Var0) >= (1f * 1f))
	{
		return 0;
	}
	return 1;
}

bool func_75()
{
	return Global_91158.f_297 > 0;
}

bool func_76()
{
	return unk_0x693EBB4F13506457() <= Global_17257.f_5745 + 100;
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
	if (unk_0xB8A06E7E729EED0A(Local_60.f_2))
	{
		if (unk_0xB8A06E7E729EED0A(uVar1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return unk_0xF8D041B05C3D1FD4(Local_60.f_2, sVar1);
}

int func_79(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!unk_0x95CCECA3948CFE7B(iParam0))
	{
		return -1;
	}
	iVar0 = func_81(iParam0);
	iVar1 = func_80(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36553[iVar1 /*5*/].f_2;
}

int func_80(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36553[iVar0 /*5*/] == iParam0)
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
		if (iParam0 == Global_36553[iVar0 /*5*/].f_1)
		{
			return Global_36553[iVar0 /*5*/];
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
	if (unk_0xB6900B8CB0ABBD2B(Local_43.f_4))
	{
		return 0;
	}
	Var0 = { unk_0x44C17CCB85A88A1F(Local_43.f_1, 1) };
	Var3 = { unk_0x44C17CCB85A88A1F(Local_43.f_4, 1) };
	fVar6 = unk_0x4F982ED5336EA899(Var0, Var3, 1);
	return fVar6 < 7f;
}

void func_85()
{
	int iVar0;
	char* sVar1;
	
	if (Local_43.f_1 == unk_0xC8B93D94F8954288())
	{
		unk_0x2BE3C7FA4FCCA784(0, 36, 1);
		if (unk_0x271A74D807F62BC0(Local_43.f_1))
		{
			if (Global_36553[iLocal_64 /*5*/].f_2 == 0 || Global_36553[iLocal_64 /*5*/].f_2 == 2)
			{
				unk_0x1D9B9237CA276DAD(Local_43.f_1, 0, 0);
			}
		}
		if (unk_0x8AF57B7CF7F1331B(Local_43.f_1))
		{
			unk_0xD6A1047C5FCFCEB6(Local_43.f_1, 0);
		}
	}
	if (Local_55.f_0 != -2)
	{
		if (Local_55.f_0 == -1)
		{
			if (Global_36553[iLocal_64 /*5*/].f_2 != 0)
			{
				Global_36553[iLocal_64 /*5*/].f_2 = 0;
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
			if (Global_36553[iLocal_64 /*5*/].f_2 == 0)
			{
				if (iVar0 < 30)
				{
					Global_36553[iLocal_64 /*5*/].f_2 = 2;
					if (!func_71(2))
					{
						Global_36553[iLocal_64 /*5*/].f_2 = 0;
						return;
					}
				}
			}
			if (Global_36553[iLocal_64 /*5*/].f_2 == 2)
			{
				if (iVar0 < 10)
				{
					Global_36553[iLocal_64 /*5*/].f_2 = 1;
					if (!func_71(2))
					{
						Global_36553[iLocal_64 /*5*/].f_2 = 2;
						return;
					}
				}
			}
			if (Global_36553[iLocal_64 /*5*/].f_2 == 1)
			{
			}
		}
	}
	else
	{
		return;
	}
	if (!unk_0xB8A06E7E729EED0A(sLocal_54))
	{
		if (!func_74(Local_43.f_1))
		{
			sVar1 = "MOVE_M@DRUNK@TRANSITIONS";
			if (unk_0xCD61E9D5CABC7E35(Local_43.f_1, sVar1, sLocal_54, 3))
			{
				unk_0xE80E983DE27B676E(Local_43.f_1, sVar1, sLocal_54, -4f);
			}
			sLocal_54 = "";
			return;
		}
	}
	if (Global_36553[iLocal_64 /*5*/].f_3 >= 10 || Global_36553[iLocal_64 /*5*/].f_4 >= 15)
	{
		if (unk_0x090C65D5190A249D(Local_43.f_1, 1785177548) == 1)
		{
			return;
		}
		if (unk_0x8EDA3A22D5F4C0BF(Local_43.f_1))
		{
			return;
		}
		if (unk_0x277ECDA23D8CCEB4(Local_43.f_1, 1))
		{
			if (Global_36553[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_36553[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_36553[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_36553[iLocal_64 /*5*/].f_4 = 14;
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
	
	if (!unk_0x7F13E3D2383CF15F(Local_43.f_1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = unk_0x275BEBE583A163B5(Local_43.f_1, 0);
	if (!unk_0x5D42322C7DB888D0(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0xC0ADAF0814175B68(iVar0, -1) == Local_43.f_1)
	{
		return 0;
	}
	Local_43.f_4 = iVar0;
	Local_60.f_0 = 7;
	return 1;
}

void func_87()
{
	if (!unk_0x277ECDA23D8CCEB4(Local_43.f_1, 0))
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
	if (!unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		return;
	}
	if (!unk_0x7F13E3D2383CF15F(unk_0xC8B93D94F8954288()))
	{
		return;
	}
	if (unk_0x719D80C8C2BB7B0A(unk_0xA34E7C2A5118D638(), 0))
	{
		return;
	}
	iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
	fVar1 = unk_0x9BA9222C7124CA04(iVar0);
	if (fVar1 < 5f)
	{
		return;
	}
	Var2 = { unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1) };
	Var5 = { Var2 - Vector(3f, 30f, 30f) };
	Var8 = { Var2 + Vector(3f, 30f, 30f) };
	if (!unk_0x315ACCD8574BBD32(Var5, Var8) && !unk_0x0C570E251979C1C4(Var5, Var8))
	{
		return;
	}
	unk_0x2C63BF89CC01C6D8(unk_0xA34E7C2A5118D638(), 1, 0);
	unk_0x1C9B7C3360143C4C(unk_0xA34E7C2A5118D638(), 0);
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
	if (unk_0x277ECDA23D8CCEB4(Local_43.f_1, 0))
	{
		iVar1 = unk_0x275BEBE583A163B5(Local_43.f_1, 0);
		iVar2 = unk_0xC0ADAF0814175B68(iVar1, -1);
		if (!iVar2 == Local_43.f_1)
		{
			return;
		}
		if (unk_0xBBAE3E0C60A8AD4B() && !unk_0xFE7BCFB02217DCDF(iVar1))
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!unk_0xC8B93D94F8954288() == Local_43.f_1)
	{
		return;
	}
	else if (!unk_0xB548555C3ED3CEBE() == 4)
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
	if (unk_0x96209AADF56E8FE8(iVar0))
	{
		Local_55.f_4 = unk_0x83666F9FB8FEBD4B() + 2000;
	}
	else
	{
		Local_55.f_4 = unk_0x83666F9FB8FEBD4B() + 1000;
	}
	fVar3 = unk_0x9BA9222C7124CA04(iVar0);
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
	
	fVar0 = unk_0xC6D38B918E72181E(-fParam1, fParam1);
	fVar1 = unk_0xC6D38B918E72181E(0f, fParam2);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 - fVar1);
	}
	else
	{
		fVar0 = (fVar0 + fVar1);
	}
	if (unk_0x96209AADF56E8FE8(iParam0))
	{
		if (unk_0x50CB4D478D09ED89(unk_0x4D3C2AC8339BFB4F(iParam0)))
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
		iVar2 = unk_0x6D5BB810CC209E15(iParam0);
		if (unk_0xE6CB12C10EE5D793(iVar2))
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
	if (unk_0xBBAE3E0C60A8AD4B() && !unk_0xFE7BCFB02217DCDF(iParam0))
	{
		return;
	}
	if (unk_0x96209AADF56E8FE8(iParam0))
	{
		unk_0xE2B2677B1FF4C11C(unk_0x4D3C2AC8339BFB4F(iParam0), fParam1);
	}
	else if (unk_0x18BDAFC0B20C2C9E(iParam0))
	{
		unk_0x28D2032C968F940B(unk_0xE6E6D9800E15A76C(iParam0), fParam1);
	}
}

void func_92()
{
	int iVar0;
	
	if (!unk_0x277ECDA23D8CCEB4(Local_43.f_1, 0))
	{
		Local_60.f_0 = 4;
		return;
	}
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		if (Global_36553[iLocal_64 /*5*/].f_3 >= 10 || Global_36553[iLocal_64 /*5*/].f_4 >= 15)
		{
			if (Global_36553[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_36553[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_36553[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_36553[iLocal_64 /*5*/].f_4 = 14;
			}
		}
	}
	if (bLocal_50)
	{
		return;
	}
	iVar0 = unk_0x275BEBE583A163B5(Local_43.f_1, 0);
	if (!unk_0x5D42322C7DB888D0(iVar0, 0))
	{
		unk_0xE5F6BE3F8E937ACE(Local_43.f_1, 0, 0);
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
	iVar0 = unk_0x090C65D5190A249D(unk_0xC8B93D94F8954288(), 355471868);
	if (!iVar0 == 7)
	{
		Local_55.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
		return;
	}
	if (!unk_0x277ECDA23D8CCEB4(Local_43.f_1, 0))
	{
		Local_60.f_0 = 4;
		Local_55.f_3 = -2;
		return;
	}
	iVar1 = unk_0x275BEBE583A163B5(Local_43.f_1, 0);
	iVar2 = unk_0xC0ADAF0814175B68(iVar1, -1);
	if (iVar2 == Local_43.f_1)
	{
		func_94();
		Local_55.f_3 = -2;
		return;
	}
	unk_0x2798F59E60097FDE(Local_43.f_1, iVar1);
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
	if (unk_0x7F13E3D2383CF15F(Local_43.f_1))
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
	if (bVar1 || unk_0x7F13E3D2383CF15F(Local_43.f_1))
	{
		if (!bLocal_50)
		{
		}
		iVar0 = unk_0x275BEBE583A163B5(Local_43.f_1, 0);
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
				unk_0xE5F6BE3F8E937ACE(Local_43.f_1, 0, 0);
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
		iVar2 = unk_0xC0ADAF0814175B68(Local_43.f_4, -1);
		if (iVar2 == Local_43.f_1)
		{
			func_94();
			return;
		}
		unk_0x2798F59E60097FDE(Local_43.f_1, iVar0);
		Local_60.f_0 = 9;
		Local_55.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
		return;
	}
	if (!func_84())
	{
		unk_0x5124C5FA52D2AF3E(Local_43.f_1);
		Local_60.f_0 = 4;
		return;
	}
	if (!bLocal_50)
	{
		iVar3 = unk_0x090C65D5190A249D(Local_43.f_1, -1794415470);
		if (iVar3 == 7)
		{
			if (!unk_0x277ECDA23D8CCEB4(Local_43.f_1, 0))
			{
				unk_0x5124C5FA52D2AF3E(Local_43.f_1);
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
	if (!unk_0x5D42322C7DB888D0(Local_43.f_4, 0))
	{
		Local_43.f_4 = 0;
		Local_60.f_0 = 4;
		return;
	}
	Var0 = { unk_0x44C17CCB85A88A1F(Local_43.f_1, 1) };
	Var3 = { unk_0x44C17CCB85A88A1F(Local_43.f_4, 1) };
	fVar6 = unk_0x4F982ED5336EA899(Var0, Var3, 1);
	if (fVar6 > 3f)
	{
		if (!func_71(Global_36553[iLocal_64 /*5*/].f_2))
		{
			Local_60.f_0 = 12;
			return;
		}
		Local_60.f_0 = 5;
		Local_55.f_2 = unk_0x83666F9FB8FEBD4B() + 2000;
		return;
	}
	iVar7 = unk_0x7EFD275DF858497F(Local_43.f_4);
	iVar8 = 0;
	bVar9 = true;
	iVar8 = 1;
	while (bVar9)
	{
		if (iVar8 < iVar7)
		{
			if (unk_0x74CAAD9E721B315D(Local_43.f_4, iVar8))
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
	unk_0x9CEFBE395E148A32(Local_43.f_1, Local_43.f_4, -1, iVar8, 1073741824, 1, 0);
	Local_60.f_0 = 7;
}

void func_98()
{
	if (!unk_0x95CCECA3948CFE7B(Local_43.f_1))
	{
		return;
	}
	if (!unk_0x2DC9BA2299B45EA6(Local_43.f_1))
	{
		unk_0x31D56B8BF9715256(Local_43.f_1, 1048576000);
		unk_0xA7F166E3DF911955(Local_43.f_1);
		unk_0xA987193861052B86(Local_43.f_1, 0, -1056964608);
		Local_60.f_2 = "";
		unk_0x67F64E3CEA59E586(Local_43.f_1);
		unk_0x1F64302AA4F597A7(Local_43.f_1, 200, 0);
		unk_0x1F64302AA4F597A7(Local_43.f_1, 46, 0);
		unk_0x8EB9A60FB4C37A34(Local_43.f_1, 1);
		unk_0xF36EA652E4A6CED0(Local_43.f_1, 262144, 0);
		unk_0x7E1639F136BDE5F3(Local_43.f_1, 0);
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
	unk_0x31D56B8BF9715256(uParam0, 1048576000);
	unk_0xA987193861052B86(uParam0, 0, -1056964608);
	unk_0x1F64302AA4F597A7(uParam0, 200, 0);
	unk_0x8EB9A60FB4C37A34(iParam0, 1);
	unk_0xF36EA652E4A6CED0(iParam0, 262144, 0);
	unk_0x7E1639F136BDE5F3(iParam0, 0);
}

void func_102()
{
	int iVar0;
	
	if (Local_55.f_0 == -1)
	{
		Global_36553[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36553[iLocal_64 /*5*/].f_3 < 3 && Global_36553[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_36553[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_36553[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_36553[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_36553[iLocal_64 /*5*/].f_2 = 1;
		}
	}
	if (unk_0x277ECDA23D8CCEB4(Local_43.f_1, 0))
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
	if (!func_71(Global_36553[iLocal_64 /*5*/].f_2))
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
		iVar0 = Global_36634[iVar1 /*5*/].f_2;
		if (!iVar0 == 6)
		{
			if (Global_36634[iVar1 /*5*/].f_1 == iLocal_48)
			{
				func_106(iVar1);
				func_105(iVar1);
			}
			else if (Global_36634[iVar1 /*5*/].f_1 == 2)
			{
				if (!iLocal_49 == -1)
				{
					if (iLocal_49 == Global_36634[iVar1 /*5*/])
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
	Global_36634[iParam0 /*5*/] = -1;
	Global_36634[iParam0 /*5*/].f_1 = -1;
	Global_36634[iParam0 /*5*/].f_2 = 6;
	Global_36634[iParam0 /*5*/].f_3 = 0;
	Global_36634[iParam0 /*5*/].f_4 = 0;
}

void func_106(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_36634[iParam0 /*5*/].f_2;
	switch (iVar0)
	{
		case 1:
			func_131();
			break;
		
		case 2:
			func_110(Global_36634[iParam0 /*5*/].f_4);
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
	
	Global_36553[iLocal_64 /*5*/].f_4++;
	if (Local_55.f_0 == -1)
	{
		Global_36553[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36553[iLocal_64 /*5*/].f_4 < 9 && Global_36553[iLocal_64 /*5*/].f_4 != 0)
	{
		Global_36553[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_36553[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_36553[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_36553[iLocal_64 /*5*/].f_2 = 1;
		}
		if (!func_78(Local_43.f_1))
		{
			func_71(Global_36553[iLocal_64 /*5*/].f_2);
		}
	}
}

void func_109()
{
	int iVar0;
	
	Global_36553[iLocal_64 /*5*/].f_3++;
	if (Local_55.f_0 == -1)
	{
		Global_36553[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36553[iLocal_64 /*5*/].f_3 < 3 && Global_36553[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_36553[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_36553[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_36553[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_36553[iLocal_64 /*5*/].f_2 = 1;
		}
		if (!func_78(Local_43.f_1))
		{
			func_71(Global_36553[iLocal_64 /*5*/].f_2);
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
		iLocal_63 = unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638());
		return;
	}
	iVar0 = unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638());
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
		if (iParam0 == Global_36634[iVar0 /*5*/])
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
	if (!unk_0xB6900B8CB0ABBD2B(Local_43.f_1))
	{
		if (unk_0x7F13E3D2383CF15F(Local_43.f_1))
		{
			Local_60.f_0 = 10;
		}
	}
	if (bLocal_50)
	{
		func_122();
		func_8(71, 1);
		if (unk_0xBBAE3E0C60A8AD4B())
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
			unk_0x5F0618A5FDAD55C4(joaat("sp0_sp_num_times_drunk"), &iVar2, -1);
			unk_0x5F0618A5FDAD55C4(joaat("sp1_sp_num_times_drunk"), &iVar3, -1);
			unk_0x5F0618A5FDAD55C4(joaat("sp2_sp_num_times_drunk"), &iVar4, -1);
			iVar5 = ((iVar2 + iVar3) + iVar4);
			iVar6 = (iVar5 / 10) + 1 * 10;
			if (iVar5 + 1 >= iVar6)
			{
				func_119(iVar6);
			}
			switch (func_57())
			{
				case 0:
					unk_0x071958EFED9481F5(joaat("sp0_sp_num_times_drunk"), iVar2 + 1, 1);
					break;
				
				case 1:
					unk_0x071958EFED9481F5(joaat("sp1_sp_num_times_drunk"), iVar3 + 1, 1);
					break;
				
				case 2:
					unk_0x071958EFED9481F5(joaat("sp2_sp_num_times_drunk"), iVar4 + 1, 1);
					break;
				}
		}
		Local_60.f_1 = 1;
		return;
	}
	Local_60.f_1 = 12;
	if (Local_55.f_0 == -1)
	{
		Global_36553[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36553[iLocal_64 /*5*/].f_3 < 3 && Global_36553[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_36553[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar7 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar7 <= 0)
		{
			iVar7 = 0;
		}
		iVar7 = (iVar7 / 1000) + 1;
		Global_36553[iLocal_64 /*5*/].f_2 = 0;
		if (iVar7 < 30)
		{
			Global_36553[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar7 < 10)
		{
			Global_36553[iLocal_64 /*5*/].f_2 = 1;
		}
	}
}

void func_116(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466774[iParam0 /*5*/][func_117(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x071958EFED9481F5(iVar0, iParam1, iParam3);
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
			Global_2466487 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2466487 = 1;
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
	Global_2409962[iVar0 /*83*/] = 81;
	Global_2409962[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2409962[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_120(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2409962[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2409962[iVar1 /*83*/] == 0)
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
	uVar0 = Global_2466774[iParam0 /*5*/][func_117(iParam1)];
	if (unk_0x5F0618A5FDAD55C4(uVar0, &uVar1, -1))
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
	Global_36634[iVar0 /*5*/] = iParam0;
	Global_36634[iVar0 /*5*/].f_1 = iParam1;
	Global_36634[iVar0 /*5*/].f_2 = iParam2;
	Global_36634[iVar0 /*5*/].f_3 = iParam3;
	Global_36634[iVar0 /*5*/].f_4 = iParam4;
}

int func_126()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36634[iVar0 /*5*/].f_2 == 6)
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
		if (iParam2 == Global_36634[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_36634[iVar0 /*5*/])
			{
				if (iParam1 == Global_36634[iVar0 /*5*/].f_1)
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
	if (Local_43.f_1 == unk_0xC8B93D94F8954288())
	{
		bLocal_50 = true;
		Global_36749 = 1;
		Global_36751++;
	}
	if (!unk_0xB6900B8CB0ABBD2B(Local_43.f_1))
	{
		iVar0 = func_60(Local_43.f_1);
		switch (iVar0)
		{
			case 17:
				unk_0xB7F5BF6BE1CE7627(Local_43.f_1, "AMANDA_DRUNK");
				break;
			
			case 19:
				unk_0xB7F5BF6BE1CE7627(Local_43.f_1, "LAMAR_DRUNK");
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
		if (!unk_0xB6900B8CB0ABBD2B(Local_43.f_1))
		{
			iVar0 = func_60(Local_43.f_1);
			if (Global_36553[iLocal_64 /*5*/].f_4 > 0)
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
					unk_0xB7F5BF6BE1CE7627(Local_43.f_1, "AMANDA_NORMAL");
					break;
				
				case 19:
					unk_0xB7F5BF6BE1CE7627(Local_43.f_1, "LAMAR_NORMAL");
					break;
				}
			}
	}
	func_98();
	if (bLocal_50)
	{
		Global_36749 = 0;
	}
	func_132();
	unk_0x3ECF1E41E6ED71D8(func_77(0));
	unk_0x3ECF1E41E6ED71D8(func_77(2));
	unk_0x3ECF1E41E6ED71D8(func_77(1));
	Global_1719224 = 0;
	if (unk_0xCBC8FFE55DC722B5(joaat("appemail")) > 0)
	{
		func_33(0);
	}
	unk_0xA4E0D8FD51F2A6F7();
}

void func_132()
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (unk_0xB6900B8CB0ABBD2B(Local_43.f_1))
	{
		return;
	}
	uVar0 = Local_43.f_1;
	if (unk_0x277ECDA23D8CCEB4(Local_43.f_1, 0))
	{
		uVar1 = unk_0x275BEBE583A163B5(Local_43.f_1, 0);
		iVar2 = unk_0xC0ADAF0814175B68(uVar1, -1);
		if (!Local_43.f_1 == iVar2)
		{
			return;
		}
		uVar0 = iVar1;
	}
	else if (!unk_0xB548555C3ED3CEBE() == 4 || !unk_0xC8B93D94F8954288() == Local_43.f_1)
	{
		return;
	}
	fLocal_53 = 0f;
	func_91(uVar0, 0f);
}

void func_133(var uParam0, char* sParam1, int iParam2)
{
	unk_0x7ABE44FB19CAE2E1(uParam0, sParam1, func_134(iParam2), 1);
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

