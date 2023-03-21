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
	if (unk_0xE8A79675302ED812(2))
	{
		func_155();
	}
	Local_43 = { ScriptParam_0 };
	func_154();
	func_153();
	func_148(iLocal_48, 0, 0);
	unk_0xC1B1E9A034A63A62(0);
	func_147();
	func_143();
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_142(iLocal_48);
		func_141();
		func_139();
		func_132();
		func_148(iLocal_48, 0, 0);
		func_154();
		func_9();
		if ((unk_0x7AF0088ABFA713B6() && !unk_0x517823CA390A19F6()) && !func_8())
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
	if ((!func_4() && !func_3()) && Global_2448722)
	{
		Global_4456448.f_126776 = 0;
	}
}

bool func_3()
{
	return Global_2447942.f_579;
}

bool func_4()
{
	return Global_1589291[unk_0xB5CEFD608600A09F() /*770*/].f_196 != 0;
}

void func_5()
{
	Global_2447942.f_643 = 1;
}

var func_6()
{
	return Global_2447942.f_622;
}

bool func_7()
{
	return unk_0xFA30DFD0084E92FE(Global_2447942.f_2, 11);
}

bool func_8()
{
	return unk_0xFA30DFD0084E92FE(Global_2448723.f_1.f_2810, 3);
}

void func_9()
{
	bool bVar0;
	
	if (unk_0x1D403DFADBC2DE3C(Local_43.f_1, 0))
	{
		func_155();
	}
	if (bLocal_50)
	{
		if (!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			func_155();
		}
	}
	func_131();
	bVar0 = true;
	switch (Local_60.f_0)
	{
		case 4:
			func_130();
			return;
		
		case 5:
			func_127();
			return;
		
		case 6:
			func_125();
			return;
		
		case 7:
			func_124();
			return;
		
		case 8:
			func_123();
			return;
		
		case 9:
			func_121();
			return;
		
		case 10:
			func_120();
			func_117();
			func_116();
			return;
		
		case 11:
			func_115();
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
			if (!func_114())
			{
				func_110();
				func_117();
			}
			break;
		
		case 2:
			func_108();
			break;
		
		case 12:
			func_95();
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
	
	unk_0x50FBC3BBBAC48D06(Local_43.f_1, 3000, 3500, 0, 1, 1, 0);
	Global_1662299 = 1;
	if (!unk_0x17FAADF9916EF741())
	{
		unk_0x7A41D32A383895D8(2500);
		while (unk_0x422F9EDE839E6ABB())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		func_94(&uVar0, 0, 0);
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()) && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			unk_0xA5F3B1C95DEB48C4(unk_0xBC25C936A095B5BA(), 0, 1);
		}
		while ((unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()) && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0)) && unk_0x86C7ABC4462AF150(unk_0xBC25C936A095B5BA()))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_84(unk_0xB5CEFD608600A09F(), 0, 57344);
		Global_2405070.f_2661 = 1;
		if (unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
		{
			Global_2405070.f_2662 = 1;
		}
		else
		{
			Global_2405070.f_2662 = 0;
		}
		if (unk_0x6CACA595557C5755())
		{
			unk_0x01EB6657F2BCE9D3(0);
		}
		if (func_80(1))
		{
			func_67(0);
		}
		func_65(1);
		func_155();
	}
	sVar2 = "";
	Var3.f_3 = 1064514355;
	Var3.f_30 = 1148829696;
	Var3.f_31 = 1148829696;
	Var3.f_52 = 1148829696;
	iVar61 = 7;
	switch (func_60())
	{
		case 0:
			if (func_58() != 2)
			{
				iVar61 = 0;
			}
			else
			{
				iVar61 = 1;
			}
			break;
		
		case 1:
			if (!func_57(126))
			{
				iVar61 = 2;
			}
			else
			{
				iVar61 = 3;
			}
			break;
		
		case 2:
			if (!func_56(4))
			{
				if (func_57(58))
				{
					iVar61 = 4;
				}
				if (func_57(59))
				{
					iVar61 = 5;
				}
				if (iVar61 == 7)
				{
					if (!func_55())
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
	if (!unk_0x1D403DFADBC2DE3C(Local_43.f_1, 0))
	{
		unk_0x641B19E156645A92(Local_43.f_1, Var3.f_5, 1, 0, 0, 1);
	}
	unk_0x4EDE34FBADD967A6(500);
	StringCopy(&(Var3.f_11), "", 16);
	Var3.f_15 = -1f;
	func_12(sVar2, &Var3, "");
	func_11(126, 1);
	func_155();
}

void func_11(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51709[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		return;
	}
	if (Global_51709[iParam0 /*7*/])
	{
		unk_0x6CB99B97664C3727(Global_51709[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x3A57956BCE003880(Global_51709[iParam0 /*7*/].f_1, iVar0, 1);
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
	unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), false, 0);
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), 1);
	}
	unk_0x5DEC86EE2E34A59D(uParam1->f_5, 4500f);
	unk_0x6A54FD861D871600(uParam1->f_5, 4500f);
	unk_0x6C5F5B5F6894CCE3(uParam1->f_5, 5f, 1, 0, 0, 0);
	unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), uParam1->f_5, 1, 0, 0, 1);
	unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), true);
	unk_0x4EDE34FBADD967A6(0);
	unk_0x121BBDEFA4F0C22B(1);
	unk_0x522053D86D6E1C7A(*uParam1);
	if (unk_0xF1734B55490E9045(uParam1->f_16))
	{
	}
	else
	{
		unk_0x522053D86D6E1C7A(uParam1->f_16);
	}
	if (!unk_0x17FAADF9916EF741())
	{
		unk_0x7A41D32A383895D8(0);
	}
	func_50(uParam1->f_5, uParam1->f_8.f_2, 0, 1);
	if (!unk_0x17FAADF9916EF741())
	{
		unk_0x7A41D32A383895D8(0);
	}
	iVar1 = unk_0x105601648511CC64() + 20000;
	bVar2 = false;
	uParam1->f_33 = 0;
	while (!bVar2 && iVar1 > unk_0x105601648511CC64())
	{
		bVar2 = true;
		unk_0x522053D86D6E1C7A(*uParam1);
		if (!unk_0xF9E082857622D91E(*uParam1))
		{
			bVar2 = false;
		}
		if (!unk_0xF1734B55490E9045(uParam1->f_16))
		{
			unk_0x522053D86D6E1C7A(uParam1->f_16);
			if (!unk_0xF9E082857622D91E(uParam1->f_16))
			{
				bVar2 = false;
			}
		}
		if (!unk_0x17FAADF9916EF741())
		{
			unk_0x7A41D32A383895D8(0);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
	func_47();
	if (!func_46(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		unk_0x6935EBF9868982DC(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 0, 1);
		unk_0xEDAD35A0D81ED3FB(uParam1->f_5 + uParam1->f_19, (unk_0x652D2EEEF1D3E62C(uParam1->f_22) + 25f), 0, 0, 0, 0, 0, 0);
		unk_0x6C5F5B5F6894CCE3(uParam1->f_5 + uParam1->f_19, (unk_0x652D2EEEF1D3E62C(uParam1->f_22) + 25f), 1, 0, 0, 0);
	}
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xA98B19EC1C93FC3C(unk_0xB5CEFD608600A09F());
		unk_0x8E25082A46F87892(unk_0xBC25C936A095B5BA(), joaat("weapon_unarmed"), 1);
		unk_0x49D46EE47C9CCB66(unk_0xBC25C936A095B5BA());
	}
	unk_0x346478B12F69D4E3(unk_0xBC25C936A095B5BA(), false);
	unk_0x121BBDEFA4F0C22B(0);
	unk_0x6C5F5B5F6894CCE3(uParam1->f_5, 15f, 1, 0, 0, 0);
	unk_0xDA1FC589059DA9F2();
	unk_0xEE1FDC041B0DABCC();
	func_44();
	while (func_43())
	{
		unk_0x4EDE34FBADD967A6(0);
	}
	if (!unk_0x726D9204B160D23E() && !unk_0x26641E1BFD792DBC())
	{
		unk_0x829FA4611BD56B44(250);
	}
	unk_0xC63520BF0B3FB162(1);
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		iVar4 = unk_0xD0D858E538FD01C3(uParam1->f_5, uParam1->f_8, 2);
		unk_0xC2BF3DE5E47F801D(iVar4, 0);
		unk_0x69D4A898629B0BDA(iVar4, 0);
		uVar5 = unk_0x578D5D08EC980893("DEFAULT_ANIMATED_CAMERA", 1);
		iVar6 = 4;
		if (uParam1->f_4 != joaat("MotionState_Idle"))
		{
			iVar6 |= 2;
		}
		func_41(unk_0xBC25C936A095B5BA(), uParam1->f_18);
		unk_0xB62398E536F695FC(unk_0xBC25C936A095B5BA(), iVar4, *uParam1, uParam1->f_1, 1000f, -1.5f, iVar6, 0, 1148846080, 0);
		unk_0xCF27C3A90021C5A5(unk_0xBC25C936A095B5BA(), 1);
		unk_0xCBB1B2FE4F8A5378(unk_0xB5CEFD608600A09F(), 1);
		iVar3 = unk_0xE5B7E3F1770AD404(unk_0xBC25C936A095B5BA(), 77);
		unk_0x2E9860A2B72187F5(unk_0xBC25C936A095B5BA(), 77, 1);
		unk_0xA4DB448107C6D171(uVar5, iVar4, uParam1->f_2, *uParam1);
		unk_0x062C9995BFD27B2A(1, 0, 3000, 1, 0, 0);
		if (!unk_0xF1734B55490E9045(uParam1->f_16) && !unk_0xF1734B55490E9045(uParam1->f_17))
		{
			unk_0xE896C0AD02364F2A(unk_0xBC25C936A095B5BA(), uParam1->f_16, uParam1->f_17, 1000f, -1.5f, 10000, 33, 0, 0, 0, 0);
		}
	}
	else
	{
		iVar4 = -1;
	}
	if (!uParam1->f_25)
	{
		if (!unk_0xF1734B55490E9045(sParam2))
		{
			func_40(sParam2, -1);
			uParam1->f_25 = 1;
		}
	}
	bVar7 = false;
	bVar8 = false;
	uVar9 = 16;
	if (!unk_0xF1734B55490E9045(&(uParam1->f_11)))
	{
		iVar174 = func_60();
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
		func_39(&uVar9, iVar175, unk_0xBC25C936A095B5BA(), sVar176, 0, 1);
	}
	if (unk_0x77FC50899603581D(iVar4))
	{
		sVar177 = "WalkInterruptible";
		sVar178 = "ForceBlendout";
		while (unk_0x77FC50899603581D(iVar4) && !unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (!bVar8)
			{
				if (!unk_0x17FAADF9916EF741())
				{
					if (!unk_0xF1734B55490E9045(uParam1->f_26))
					{
						unk_0x9216004FAC08D1DC(uParam1->f_26, 0, 0);
						bVar8 = true;
					}
					if (!unk_0xF1734B55490E9045(uParam1->f_27))
					{
						if (!unk_0xF1734B55490E9045(uParam1->f_28))
						{
							unk_0xC4BA30B532FE260F(-1, uParam1->f_28, uParam1->f_27, 0);
							bVar8 = true;
						}
						if (!unk_0xF1734B55490E9045(uParam1->f_29))
						{
							unk_0xC4BA30B532FE260F(-1, uParam1->f_29, uParam1->f_27, 0);
							bVar8 = true;
						}
					}
				}
			}
			unk_0xDE7B9CB38D019BF0();
			unk_0x4E0EC60D119222B1(18);
			unk_0x22461BAEAB7226C1();
			func_35(0);
			iVar179 = unk_0x105601648511CC64();
			if (iVar179 >= (Global_36456 - 500))
			{
				func_34(4000);
			}
			fVar180 = -1f;
			fVar181 = -1f;
			fVar0 = unk_0x8FD30584EB38411B(iVar4);
			if (!unk_0xF1734B55490E9045(&(uParam1->f_11)))
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
			if (unk_0x619CCA1A6FD0BC87(unk_0xBC25C936A095B5BA(), unk_0x56BEECB328B6D29D(sVar177)))
			{
				iVar183 = (unk_0x1B3AE5B27313855F(2, 195) - 128);
				iVar184 = (unk_0x1B3AE5B27313855F(2, 196) - 128);
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
			if (unk_0x7FCE28BE45D0735E() == 4 && uParam1->f_52 > 0f)
			{
				if (fVar0 >= uParam1->f_52)
				{
					if (!uParam1->f_32)
					{
						fVar185 = 1.5f;
						Var186 = { unk_0x8AB4E14F6E158D9D() };
						Var189 = { unk_0x823166D9421223CA(unk_0xBC25C936A095B5BA(), 31086, 0f, 0f, 0f) };
						fVar192 = unk_0xF0F2FC9DE291567F(Var186, Var189, 1);
						fVar185 = func_21(fVar185, 0.001f, (fVar192 - 0.75f));
						if (fVar185 < 0f)
						{
							fVar185 = 0.001f;
						}
						func_20(&(uParam1->f_34), unk_0xBC25C936A095B5BA(), func_60(), 1E-06f, 300, 300, 0, 0, 1045220557);
						func_19(&(uParam1->f_34), uParam1->f_53);
						if (!uParam1->f_33)
						{
							uParam1->f_34 = 1;
							uParam1->f_34.f_7 = unk_0x105601648511CC64();
							uParam1->f_34.f_8 = 0;
							uParam1->f_33 = 1;
						}
						if (uParam1->f_57 == 999f)
						{
							uParam1->f_56 = 0f;
						}
						if (uParam1->f_57 == 999f)
						{
							Var195 = { unk_0x51171D01E0465184(2) };
							uVar198 = unk_0x349C94FFF43E2979(unk_0xBC25C936A095B5BA());
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
						unk_0x2B9AEC08E469E384(fVar193, 1065353216);
						unk_0xF3F01A78937DC905(fVar194);
						unk_0x264EADF2C7FF8C54(fVar193);
						unk_0x8F76C59688D13CF0(fVar194);
						Var201 = { unk_0x8AB4E14F6E158D9D() };
						Var204 = { unk_0x4E95580B2DDCC7A9() };
						fVar207 = unk_0xF0F2FC9DE291567F(Var201, Var204, 1);
						iVar208 = unk_0xF2DB717A73826179((fVar207 * 1000f));
						uParam1->f_32 = 1;
					}
					if (uParam1->f_32)
					{
						unk_0xE236EA1E77255E8F();
						if (func_16(&(uParam1->f_34), 1, 1, 1, 0, 0, 0))
						{
						}
					}
				}
			}
			if (unk_0x619CCA1A6FD0BC87(unk_0xBC25C936A095B5BA(), unk_0x56BEECB328B6D29D(sVar178)) || iVar182)
			{
				if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
				{
					unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
					switch (uParam1->f_4)
					{
						case joaat("MotionState_Idle"):
							unk_0x3E2B7D349B5735D3(unk_0xBC25C936A095B5BA(), joaat("MotionState_Idle"), 1, 0, 0);
							unk_0x9CB4DD3D88846081(0, 0, 3, 0);
							break;
						
						case joaat("MotionState_Walk"):
							unk_0x3E2B7D349B5735D3(unk_0xBC25C936A095B5BA(), joaat("MotionState_Walk"), 1, 0, 0);
							unk_0x56EDA6006F1B166D(unk_0xB5CEFD608600A09F(), 1f, 500, 0, 1, 0);
							if (unk_0x7FCE28BE45D0735E() != 4)
							{
								if (uParam1->f_31 == 999f)
								{
									uParam1->f_30 = 0f;
								}
								if (uParam1->f_31 == 999f)
								{
									Var211 = { unk_0x51171D01E0465184(2) };
									uVar214 = unk_0x349C94FFF43E2979(unk_0xBC25C936A095B5BA());
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
								unk_0x2B9AEC08E469E384(fVar209, 1065353216);
								unk_0xF3F01A78937DC905(fVar210);
								Var217 = { unk_0x8AB4E14F6E158D9D() };
								Var220 = { unk_0x4E95580B2DDCC7A9() };
								fVar223 = unk_0xF0F2FC9DE291567F(Var217, Var220, 1);
								iVar224 = unk_0xF2DB717A73826179((fVar223 * 1000f));
								unk_0x062C9995BFD27B2A(0, 1, iVar224, 0, 0, 0);
							}
							break;
						
						default:
							break;
					}
					if (unk_0x77FC50899603581D(iVar4))
					{
						unk_0x2A7E436A4653E829(iVar4);
						iVar4 = -1;
					}
				}
			}
			unk_0x4EDE34FBADD967A6(0);
		}
	}
	if (!func_46(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		unk_0x832ADB79A274D4E9(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 1);
	}
	unk_0xDDCAA2E64649E083(unk_0xB5CEFD608600A09F(), true, 0);
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0xA4E856A8CD53B8DF(unk_0xBC25C936A095B5BA());
	}
	bVar225 = unk_0x4DAE8F727552BD64();
	bVar226 = false;
	if (uParam1->f_32)
	{
		unk_0xE236EA1E77255E8F();
		if (!func_16(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
		{
			bVar226 = true;
		}
	}
	if (bVar225 || bVar226)
	{
		while ((bVar225 || bVar226) && !unk_0x7930B3E9C919E90F())
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
			bVar225 = unk_0x4DAE8F727552BD64();
			bVar226 = false;
			if (uParam1->f_32)
			{
				unk_0xE236EA1E77255E8F();
				if (!func_16(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
				{
					bVar226 = true;
				}
			}
		}
	}
	if (!unk_0xF1734B55490E9045(uParam1->f_16))
	{
		unk_0x4EA570997E107F35(uParam1->f_16);
	}
	unk_0x4EA570997E107F35(*uParam1);
	unk_0x4EC087603E1DEF9C(uVar5, 0);
	func_13(&(uParam1->f_34));
	if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
	{
		unk_0x2E9860A2B72187F5(unk_0xBC25C936A095B5BA(), 77, iVar3);
		unk_0x1E5C2A1EAB944289(unk_0xBC25C936A095B5BA(), 0);
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
	if (unk_0xEF0E25DA0CB6E8FF(uParam0->f_1))
	{
		unk_0x4EC087603E1DEF9C(uParam0->f_1, 0);
	}
	if (unk_0xEF0E25DA0CB6E8FF(uParam0->f_2))
	{
		unk_0x4EC087603E1DEF9C(uParam0->f_2, 0);
	}
	if (unk_0xEF0E25DA0CB6E8FF(uParam0->f_3))
	{
		unk_0x4EC087603E1DEF9C(uParam0->f_3, 0);
	}
	if (unk_0xEF0E25DA0CB6E8FF(uParam0->f_4))
	{
		unk_0x4EC087603E1DEF9C(uParam0->f_4, 0);
	}
}

void func_15(int iParam0, int iParam1, int iParam2)
{
	unk_0xBBC4195AD74D153D(iParam0, iParam1, 1);
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
			if (!unk_0x1D403DFADBC2DE3C(uParam0->f_5, 0))
			{
				func_14(uParam0);
				Var0 = { unk_0x8AB4E14F6E158D9D() };
				if (bParam1)
				{
					Var0 = { Var0 + unk_0xB5D9AE572C19509E(uParam0->f_5) * FtoV(unk_0x11F9F9006143871A()) };
				}
				Var3 = { unk_0x1483995DFFF0DEEA(uParam0->f_5, Var0) };
				Var6 = { unk_0x51171D01E0465184(2) };
				Var9 = { Var6 + uParam0->f_9 };
				Var12 = { Var9 - unk_0xD7490CDEF40F3DA2(uParam0->f_5, 2) };
				Var15 = { (-unk_0x0BADBFA3B172435F(Var9.f_2) * unk_0xD0FFB162F40A139C(Var9.f_0)), (unk_0xD0FFB162F40A139C(Var9.f_2) * unk_0xD0FFB162F40A139C(Var9.f_0)), unk_0x0BADBFA3B172435F(Var9.f_0) };
				Var18 = { (-unk_0x0BADBFA3B172435F(Var12.f_2) * unk_0xD0FFB162F40A139C(Var12.f_0)), (unk_0xD0FFB162F40A139C(Var12.f_2) * unk_0xD0FFB162F40A139C(Var12.f_0)), unk_0x0BADBFA3B172435F(Var12.f_0) };
				uVar21 = unk_0x721971B93B6D1885();
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = unk_0x8932882019580516(1775630800, 0);
				}
				uParam0->f_1 = unk_0x8932882019580516(26379945, 1);
				if (bParam1)
				{
					unk_0x5BB58B645F7051F4(uParam0->f_1, uParam0->f_5, Var3, 1);
				}
				else
				{
					unk_0x6125108F6208C1F6(uParam0->f_1, Var0);
				}
				unk_0x3553F2A72957724E(uParam0->f_1, Var6, 2);
				unk_0x9DF315A9EFFF87AC(uParam0->f_1, uVar21);
				uParam0->f_2 = unk_0x8932882019580516(26379945, 1);
				if (bParam1 && !bParam4)
				{
					unk_0x5BB58B645F7051F4(uParam0->f_2, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12), 1);
				}
				else
				{
					unk_0x6125108F6208C1F6(uParam0->f_2, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12));
				}
				unk_0x3553F2A72957724E(uParam0->f_2, Var6, 2);
				unk_0x9DF315A9EFFF87AC(uParam0->f_2, uVar21);
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = unk_0x8932882019580516(26379945, 1);
					if (bParam1 && !bParam4)
					{
						unk_0x5BB58B645F7051F4(uParam0->f_4, uParam0->f_5, Var3 + Var18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13), 1);
					}
					else
					{
						unk_0x6125108F6208C1F6(uParam0->f_4, Var0 + Var15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13));
					}
					unk_0x3553F2A72957724E(uParam0->f_4, Var6, 2);
					unk_0x9DF315A9EFFF87AC(uParam0->f_4, uVar21);
				}
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					unk_0xF5ECA94DF1CEBB69(uParam0->f_3, uParam0->f_1, 0, 2);
					if (iParam6 == 0)
					{
						unk_0xF5ECA94DF1CEBB69(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
					}
					unk_0xF5ECA94DF1CEBB69(uParam0->f_3, uParam0->f_2, (uParam0->f_14 - uParam0->f_17), 2);
					unk_0x0EE3BD85F728F360(uParam0->f_3, iParam6);
					unk_0x348665177DBFB93B(uParam0->f_3, 1);
				}
				else
				{
					unk_0xAE099C1ADC89C331(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
				unk_0x062C9995BFD27B2A(1, 0, 3000, 1, 0, 0);
				uParam0->f_7 = unk_0x105601648511CC64();
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
					if (unk_0x105601648511CC64() >= (uParam0->f_7 + uParam0->f_16))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									unk_0x9216004FAC08D1DC("CamPushInFranklin", 0, 0);
									break;
								
								case 0:
									unk_0x9216004FAC08D1DC("CamPushInMichael", 0, 0);
									break;
								
								case 2:
									unk_0x9216004FAC08D1DC("CamPushInTrevor", 0, 0);
									break;
							}
						}
						else
						{
							unk_0x9216004FAC08D1DC("CamPushInNeutral", 0, 0);
						}
						unk_0xC4BA30B532FE260F(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						uParam0->f_8 = 1;
					}
				}
			}
			if (unk_0x105601648511CC64() >= (uParam0->f_7 + uParam0->f_15))
			{
				if (bParam2)
				{
					func_14(uParam0);
					unk_0x062C9995BFD27B2A(0, 0, 3000, 1, 0, 0);
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
	unk_0x2423B13D9CFAD1DD();
	func_18();
}

void func_18()
{
	Global_17206.f_134 = 1;
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
	Global_15807 = 0;
	Global_15809 = 0;
	Global_15814 = 0;
	Global_16791 = 0;
	Global_16793 = 0;
	Global_16797 = 0;
	Global_2621441 = 0;
	return func_23(sParam2, iParam3, 0);
}

int func_23(char* sParam0, int iParam1, bool bParam2)
{
	Global_15801 = 0;
	if (Global_15800 == 0 || Global_15802 == 2)
	{
		if (Global_15800 != 0)
		{
			if (iParam1 > Global_15802)
			{
				if (Global_15807 == 0)
				{
					unk_0x1E08809A5041F85B(0);
					Global_14493.f_1 = 3;
					Global_15800 = 0;
					Global_15801 = 1;
					Global_15853 = 0;
					Global_15796 = 0;
					Global_15797 = 0;
					Global_15811 = 0;
					Global_15810 = 0;
					Global_14492 = 0;
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
		if (unk_0xE6711F601F11B66B())
		{
			return 0;
		}
		if (func_31(8, -1))
		{
			return 0;
		}
		Global_15876 = { Global_15870 };
		func_30();
		Global_15089 = { Global_15254 };
		Global_15806 = Global_15807;
		Global_15813 = Global_15814;
		Global_2621442 = Global_2621441;
		Global_15815 = { Global_15831 };
		Global_15808 = Global_15809;
		Global_16790 = Global_16791;
		Global_16798 = { Global_16804 };
		Global_16792 = Global_16793;
		Global_16794 = Global_16795;
		Global_16796 = Global_16797;
		Global_15419.f_370 = Global_16789;
		Global_15419.f_368 = Global_16787;
		Global_15419.f_369 = Global_16788;
		Global_15796 = Global_15797;
		if (Global_15806)
		{
			unk_0x7CB6FD92BE491AD9(&Global_2363, 20);
			unk_0x7CB6FD92BE491AD9(&Global_2364, 17);
			unk_0x7CB6FD92BE491AD9(&Global_2365, 0);
			if (bParam2)
			{
				func_28();
				if (Global_3168[Global_14493 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14493.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14459 == 1)
			{
				return 0;
			}
			if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
			{
				if (unk_0xABB2AFD7539464EA(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (func_27())
				{
					return 0;
				}
				if (unk_0x7199482D96955B9E(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0x2CDE18D6C89522AD(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0x01666D754C368931(unk_0xBC25C936A095B5BA()))
				{
					return 0;
				}
				if (unk_0xE959459C9FB1C42E(unk_0xBC25C936A095B5BA(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70978)
				{
					if (unk_0x149E9368A11035DE(unk_0xBC25C936A095B5BA()))
					{
						return 0;
					}
					if (unk_0xFA46778B5FBCC3BB(unk_0xB5CEFD608600A09F()))
					{
						return 0;
					}
					if (unk_0x042228744678C7D4(unk_0xBC25C936A095B5BA()))
					{
						return 0;
					}
					if (unk_0x36210078ECC9DC40(unk_0xB5CEFD608600A09F()))
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
				switch (Global_14493.f_1)
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
				if (unk_0xFA30DFD0084E92FE(Global_2363, 9))
				{
					return 0;
				}
			}
			func_25();
			Global_15810 = bParam2;
		}
		Global_15802 = iParam1;
		StringCopy(&Global_15419, sParam0, 24);
		Global_14666 = 0;
		func_24();
		return 1;
	}
	if (Global_15800 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15802 || iParam1 == Global_15802)
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
		StringCopy(&(Global_14668[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x1E08809A5041F85B(0);
	Global_15800 = 1;
}

void func_25()
{
	Global_15853 = Global_15852;
	Global_15847 = Global_15848;
	Global_15894 = { Global_15882 };
	Global_15900 = { Global_15888 };
	Global_15855 = Global_15854;
	Global_15924 = { Global_15906 };
	Global_15930 = { Global_15912 };
	Global_15936 = { Global_15918 };
	Global_15942 = { Global_15948 };
	Global_1678 = Global_1679;
	Global_1680 = Global_1681;
	Global_15811 = Global_15812;
	Global_15813 = Global_15814;
	Global_15815 = { Global_15831 };
	Global_15804 = Global_15805;
	Global_16816 = 0;
	Global_15849 = 0;
	Global_15850 = 0;
	unk_0x7CB6FD92BE491AD9(&Global_2364, 16);
}

int func_26()
{
	if (Global_14493.f_1 == 1 || Global_14493.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_27()
{
	int iVar0;
	int iVar1;
	
	if (Global_70978)
	{
		iVar0 = 0;
		unk_0x9CDD10270A1ACF6F(unk_0xBC25C936A095B5BA(), &iVar1, 1);
		if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xCDE05E3688DE990D() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		if (unk_0xA0747FCBCF1D1424(unk_0xBC25C936A095B5BA(), 78, 1))
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
		if (!unk_0x1D403DFADBC2DE3C(unk_0xBC25C936A095B5BA(), 0))
		{
			if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[0 /*29*/])
			{
				Global_14493 = 0;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[1 /*29*/])
			{
				Global_14493 = 1;
			}
			else if (unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()) == Global_105220.f_28021[2 /*29*/])
			{
				Global_14493 = 2;
			}
			else
			{
				Global_14493 = 0;
			}
		}
	}
	else
	{
		Global_14493 = func_60();
		if (Global_14493 == 145)
		{
			Global_14493 = 3;
		}
		if (Global_70978)
		{
			Global_14493 = 3;
		}
		if (Global_14493 > 3)
		{
			Global_14493 = 3;
		}
	}
}

bool func_29(int iParam0)
{
	return Global_35905 == iParam0;
}

void func_30()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15089[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15089[iVar0 /*10*/].f_1), "", 24);
		Global_15089[iVar0 /*10*/].f_7 = 0;
		Global_15089[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15089.f_161 = -99;
	Global_15089.f_162 = { 0f, 0f, 0f };
}

bool func_31(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1363073.f_203[iParam1];
			}
			break;
	}
	return unk_0xFA30DFD0084E92FE(Global_1363073.f_1048, iParam0);
}

void func_32()
{
	unk_0x5C7DC611411E2CF9();
	Global_16811 = 0;
	if ((unk_0x58E7DDFF8D17A82A() || Global_14493.f_1 == 9) || Global_14492 == 1)
	{
		unk_0x1E08809A5041F85B(0);
		Global_15800 = 6;
		Global_14493.f_1 = 3;
		return;
	}
	if (unk_0xE6711F601F11B66B())
	{
		unk_0x1E08809A5041F85B(1);
		Global_15800 = 6;
		return;
	}
}

void func_33(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15254 = { *uParam0 };
	Global_1679 = iParam1;
	StringCopy(&Global_15870, sParam2, 24);
	Global_16789 = uParam5;
	if (iParam3 == 0)
	{
		Global_16787 = 1;
		Global_16785 = 0;
	}
	else
	{
		Global_16787 = 0;
		Global_16785 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16788 = 1;
		Global_16786 = 0;
	}
	else
	{
		Global_16788 = 0;
		Global_16786 = 1;
	}
}

void func_34(int iParam0)
{
	Global_36456 = (unk_0x105601648511CC64() + iParam0);
}

void func_35(int iParam0)
{
	if (!Global_14493.f_1 == 1)
	{
		if (func_38(0))
		{
			func_36(iParam0);
		}
		unk_0xF0059F27F7BB6680(&Global_2364, 2);
	}
}

void func_36(int iParam0)
{
	if (Global_14659)
	{
		func_37(0, 0);
	}
	if (Global_14493.f_1 == 10 || Global_14493.f_1 == 9)
	{
		unk_0xF0059F27F7BB6680(&Global_2364, 16);
	}
	if (unk_0x58E7DDFF8D17A82A())
	{
		unk_0x1E08809A5041F85B(0);
	}
	Global_15800 = 5;
	if (iParam0 == 1)
	{
		unk_0xF0059F27F7BB6680(&Global_2363, 30);
	}
	else
	{
		unk_0x7CB6FD92BE491AD9(&Global_2363, 30);
	}
	if (!func_26())
	{
		Global_14493.f_1 = 3;
	}
}

void func_37(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_38(0))
		{
			Global_14659 = 1;
			if (bParam1)
			{
				unk_0x652515566BB40BA9(&Global_14430);
			}
			Global_14421 = { Global_14439[Global_14438 /*3*/] };
			unk_0x3D7D94BDD4D22C14(Global_14421);
		}
	}
	else if (Global_14659 == 1)
	{
		Global_14659 = 0;
		Global_14421 = { Global_14446[Global_14438 /*3*/] };
		if (bParam1)
		{
			unk_0x3D7D94BDD4D22C14(Global_14430);
		}
		else
		{
			unk_0x3D7D94BDD4D22C14(Global_14421);
		}
	}
}

int func_38(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14493.f_1 > 3)
		{
			if (unk_0xFA30DFD0084E92FE(Global_2363, 14))
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
	if (unk_0xB731B8C5BCE89836(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14493.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_39(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70978)
	{
		if (!unk_0x36CEFBE9B745A58D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x8941EA87BBF38C6F(iParam2, 0);
			}
			else
			{
				unk_0x8941EA87BBF38C6F(iParam2, 1);
			}
		}
		if (!unk_0x36CEFBE9B745A58D(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7C7F4D01B6DB297B(iParam2, 0);
			}
			else
			{
				unk_0x7C7F4D01B6DB297B(iParam2, 1);
			}
		}
	}
}

void func_40(char* sParam0, int iParam1)
{
	unk_0x2F618BD43614DD0D(sParam0);
	unk_0x72F8FA06CC9EC899(0, 0, 1, iParam1);
}

void func_41(int iParam0, var uParam1)
{
	if (func_42(uParam1, 1))
	{
		unk_0x42806D7A5D645048(iParam0, "HOSPITAL_0", 0f, 1f);
	}
	if (func_42(uParam1, 2))
	{
		unk_0x42806D7A5D645048(iParam0, "HOSPITAL_1", 0f, 1f);
	}
	if (func_42(uParam1, 4))
	{
		unk_0x42806D7A5D645048(iParam0, "HOSPITAL_2", 0f, 1f);
	}
	if (func_42(uParam1, 8))
	{
		unk_0x42806D7A5D645048(iParam0, "HOSPITAL_3", 0f, 1f);
	}
	if (func_42(uParam1, 16))
	{
		unk_0x42806D7A5D645048(iParam0, "HOSPITAL_4", 0f, 1f);
	}
	if (func_42(uParam1, 32))
	{
		unk_0x42806D7A5D645048(iParam0, "HOSPITAL_5", 0f, 1f);
	}
	if (func_42(uParam1, 64))
	{
		unk_0x42806D7A5D645048(iParam0, "HOSPITAL_6", 0f, 1f);
	}
	if (func_42(uParam1, 128))
	{
		unk_0x42806D7A5D645048(iParam0, "HOSPITAL_7", 0f, 1f);
	}
	if (func_42(uParam1, 256))
	{
		unk_0x42806D7A5D645048(iParam0, "HOSPITAL_8", 0f, 1f);
	}
	if (func_42(uParam1, 512))
	{
		unk_0x42806D7A5D645048(iParam0, "HOSPITAL_9", 0f, 1f);
	}
	if (func_42(uParam1, 0))
	{
	}
}

bool func_42(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_43()
{
	if (((Global_92955 == 13 || Global_92955 == 10) || Global_92955 == 11) || Global_92955 == 12)
	{
		return 0;
	}
	return 1;
}

void func_44()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_90033[iVar0 /*17*/] && !Global_90033[iVar0 /*17*/].f_1)
		{
			if (Global_90033[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_90033[iVar0 /*17*/].f_5 != 88 && Global_90033[iVar0 /*17*/].f_5 != 89) && Global_90033[iVar0 /*17*/].f_5 != 92)
				{
					func_45(Global_90033[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_45(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_87085[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_87085[iParam0 /*2*/] = 0;
	}
}

bool func_46(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_47()
{
	func_48();
	func_65(1);
}

void func_48()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		iVar1 = Global_36844[iVar0 /*5*/];
		if (!iVar1 == -1)
		{
			func_148(1, iVar1, 1);
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_36818[iVar2 /*5*/] == 0)
		{
			func_49(iVar2);
		}
		iVar2++;
	}
}

void func_49(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_36818[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36818[iParam0 /*5*/].f_1 == unk_0xBC25C936A095B5BA())
		{
			Global_37055 = 0;
		}
	}
	Global_36818[iParam0 /*5*/] = 13;
	Global_36818[iParam0 /*5*/].f_1 = 0;
	Global_36818[iParam0 /*5*/].f_2 = 0;
	Global_36818[iParam0 /*5*/].f_3 = 0;
	Global_36818[iParam0 /*5*/].f_4 = 0;
	Global_36817 = (Global_36817 - 1);
	if (Global_36817 < 0)
	{
		Global_36817 = 0;
	}
}

int func_50(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	if (unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		func_54(0);
		unk_0x6C5F5B5F6894CCE3(Param0, 5f, 1, 0, 0, 0);
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), Param0, 1, 0, 0, 1);
				unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), uParam3);
				unk_0x2B9AEC08E469E384(0f, 1065353216);
				unk_0xF3F01A78937DC905(0f);
			}
		}
		unk_0x1732A8A5D2D39430(Param0, 4500f, 0);
		unk_0x4EDE34FBADD967A6(0);
		unk_0x6C5F5B5F6894CCE3(Param0, 5000f, 1, 0, 0, 0);
		unk_0x4516EDD0A096FB5B(Param0, 5000f, 0);
		unk_0x5DEC86EE2E34A59D(Param0, 5000f);
		unk_0x6A54FD861D871600(Param0, 5000f);
		func_53();
		func_52();
		unk_0xC1B1E9A034A63A62(0);
		func_54(1);
		if (!unk_0x719413B40BB63D86())
		{
			while (!unk_0x1732A8A5D2D39430(Param0, 4500f, 0))
			{
				unk_0x4EDE34FBADD967A6(0);
				if (unk_0x83666F9FB8FEBD4B() > 2000)
				{
					unk_0x121BBDEFA4F0C22B(0);
					return 0;
				}
			}
		}
		unk_0xC1B1E9A034A63A62(0);
		while (!unk_0xF220370B0C08EC20())
		{
			unk_0x4EDE34FBADD967A6(0);
			if (unk_0x83666F9FB8FEBD4B() > 20000)
			{
				unk_0x121BBDEFA4F0C22B(0);
				if (unk_0x719413B40BB63D86())
				{
					unk_0x13D5880CBA449AA9();
				}
				return 0;
			}
		}
		if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
		{
			if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
			{
				if (unk_0x719413B40BB63D86())
				{
					unk_0x13D5880CBA449AA9();
				}
				unk_0x121BBDEFA4F0C22B(0);
				unk_0xC1B1E9A034A63A62(0);
				unk_0xDA1FC589059DA9F2();
				if (iParam5 == 1)
				{
					unk_0xEE1FDC041B0DABCC();
				}
				else
				{
					unk_0xC1B1E9A034A63A62(5000);
				}
				unk_0x9FCCC18C27AFE848();
			}
		}
		while ((!unk_0x8D4597D12C9BB336() && !func_51()) && unk_0x83666F9FB8FEBD4B() < 1500)
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
			unk_0x2084D4C6C2DF616F(Param0, &(Param0.f_2), 0, 0);
			unk_0x6C5F5B5F6894CCE3(Param0, 5f, 1, 0, 0, 0);
			if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
			{
				if (!unk_0x36CEFBE9B745A58D(unk_0xBC25C936A095B5BA()))
				{
					unk_0x641B19E156645A92(unk_0xBC25C936A095B5BA(), Param0, 1, 0, 0, 1);
					unk_0x019CE76D5286C95C(unk_0xBC25C936A095B5BA(), uParam3);
				}
			}
		}
		unk_0x2B9AEC08E469E384(0f, 1065353216);
		unk_0xF3F01A78937DC905(0f);
		func_54(0);
		return 1;
	}
	func_54(0);
	return 0;
}

bool func_51()
{
	return !Global_69800.f_553;
}

void func_52()
{
	Global_69800.f_553 = 1;
	Global_69800.f_554 = 0;
}

void func_53()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		Global_69800[iVar0] = 0;
		iVar0++;
	}
}

void func_54(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!unk_0xFA30DFD0084E92FE(Global_92955.f_20, 2))
			{
				unk_0x121BBDEFA4F0C22B(1);
				unk_0xF0059F27F7BB6680(&(Global_92955.f_20), 2);
			}
		}
		else if (unk_0xFA30DFD0084E92FE(Global_92955.f_20, 2))
		{
			unk_0x121BBDEFA4F0C22B(0);
			unk_0x7CB6FD92BE491AD9(&(Global_92955.f_20), 2);
		}
	}
}

int func_55()
{
	if (unk_0xFA30DFD0084E92FE(unk_0x491B2241281A03B7(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

bool func_56(int iParam0)
{
	return unk_0xFA30DFD0084E92FE(Global_105220.f_7200[iParam0], 0);
}

int func_57(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_105220.f_9056.f_99.f_58[iParam0];
}

int func_58()
{
	if (Global_33270[11] == 1)
	{
		return 4;
	}
	if (!func_59(21))
	{
		return 0;
	}
	if (!func_57(130))
	{
		return 1;
	}
	if (!func_57(131))
	{
		return 2;
	}
	if (!func_59(22))
	{
		return 1;
	}
	if (!func_59(49))
	{
		return 3;
	}
	if (!func_59(28))
	{
		return 1;
	}
	return 3;
}

int func_59(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_105220.f_9056.f_330[iParam0 /*6*/];
}

int func_60()
{
	func_61();
	return Global_105220.f_2354.f_539.f_4301;
}

void func_61()
{
	int iVar0;
	
	if (unk_0x724D816EA203A79E(unk_0xBC25C936A095B5BA()))
	{
		if (func_64(Global_105220.f_2354.f_539.f_4301) != unk_0x6F79ECA8C83E4357(unk_0xBC25C936A095B5BA()))
		{
			iVar0 = func_63(unk_0xBC25C936A095B5BA());
			if (func_62(iVar0) && (!func_29(14) || Global_104171))
			{
				if (Global_105220.f_2354.f_539.f_4301 != iVar0 && func_62(Global_105220.f_2354.f_539.f_4301))
				{
					Global_105220.f_2354.f_539.f_4302 = Global_105220.f_2354.f_539.f_4301;
				}
				Global_105220.f_2354.f_539.f_4303 = iVar0;
				Global_105220.f_2354.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_105220.f_2354.f_539.f_4301 != 145)
			{
				Global_105220.f_2354.f_539.f_4303 = Global_105220.f_2354.f_539.f_4301;
			}
			return;
		}
	}
	Global_105220.f_2354.f_539.f_4301 = 145;
}

bool func_62(int iParam0)
{
	return iParam0 < 3;
}

int func_63(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x724D816EA203A79E(iParam0))
	{
		iVar1 = unk_0x6F79ECA8C83E4357(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_64(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_64(int iParam0)
{
	if (func_62(iParam0))
	{
		return Global_105220.f_28021[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_65(bool bParam0)
{
	unk_0xC0231BA8D252A9AE(0f);
	unk_0x07A21648E1E26132(0f);
	unk_0xC7B707F8F56F2EAA(0f);
	unk_0x7D9EA045634DD11D(1);
	unk_0x3B35C0FF76598EE9(0f);
	unk_0x99FD3E61CA8D5A34(1);
	unk_0xE752383E5104F3D0(0);
	if (unk_0x144E80F5C46A6B75("SAFEHOUSE_STONED_MICHAEL"))
	{
		unk_0xC1300D0F3A74E20B("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!unk_0xF1734B55490E9045(&Global_37035))
	{
		if (unk_0x144E80F5C46A6B75(&Global_37035))
		{
			unk_0xC1300D0F3A74E20B(&Global_37035);
		}
	}
	if (unk_0xEF0E25DA0CB6E8FF(Global_37024))
	{
		if (unk_0xA3AE65489EB30BF4(Global_37024))
		{
			unk_0xCE33D5EFE2BDE6EF(Global_37024, 0f);
			unk_0x2880294117B40FE9(Global_37024, 1);
		}
	}
	if (unk_0x6CACA595557C5755())
	{
		unk_0x01EB6657F2BCE9D3(0);
	}
	if (bParam0)
	{
		if (unk_0xAF37936E3740DA19() != -1 || unk_0x68A80623278A92F5() != -1)
		{
			unk_0x38505EF4199EB062();
		}
		else if (unk_0x7930B3E9C919E90F())
		{
			unk_0x38505EF4199EB062();
		}
	}
	Global_37030 = 0f;
	StringCopy(&Global_37031, "", 16);
	StringCopy(&Global_37035, "", 64);
	StringCopy(&Global_37051, "", 16);
	func_66();
}

void func_66()
{
	Global_37023 = 0;
	Global_37024 = 0;
	Global_37025 = 0;
	Global_37026 = 30000;
	Global_37027 = 0f;
	Global_37029 = 0f;
	Global_37028 = 0f;
	Global_37030 = 0f;
	StringCopy(&Global_37031, "", 16);
}

void func_67(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_262145.f_17063;
			break;
		
		case 1:
			iVar0 = Global_262145.f_17053;
			break;
		
		case 2:
			iVar0 = Global_262145.f_17064;
			break;
		
		case 3:
			iVar0 = Global_262145.f_17056;
			break;
		
		case 4:
			iVar0 = Global_262145.f_17052;
			break;
		
		case 6:
			iVar0 = 3;
			break;
		
		case 7:
			iVar0 = Global_262145.f_17067;
			break;
		
		case 8:
			iVar0 = Global_262145.f_17068;
			break;
		
		case 9:
			iVar0 = Global_262145.f_17071;
			break;
		
		case 22:
			iVar0 = Global_262145.f_17072;
			break;
		
		case 23:
			iVar0 = Global_262145.f_17065;
			break;
		
		case 25:
			iVar0 = Global_262145.f_17953;
			break;
		
		case 26:
			iVar0 = Global_262145.f_17952;
			break;
	}
	if (iVar0 != 0)
	{
		unk_0x0022CBDAA2EA4C4F(func_78(func_79()), func_76(func_79()), func_75(), func_74(), iParam0, iVar0);
	}
	func_73(iVar0);
	func_68(iVar0);
}

void func_68(int iParam0)
{
	int iVar0;
	
	iVar0 = func_72(3964, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1624079[unk_0xB5CEFD608600A09F() /*558*/].f_11.f_449 = iVar0;
	func_69(3964, iVar0, -1, 1, 0);
}

void func_69(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2530245[iParam0 /*3*/][func_70(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x3A57956BCE003880(iVar0, iParam1, iParam3);
	}
}

int func_70(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_71();
		if (iVar1 > -1)
		{
			Global_2529958 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2529958 = 1;
		}
	}
	return iVar0;
}

int func_71()
{
	return Global_1312736;
}

int func_72(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2530245[iParam0 /*3*/][func_70(iParam1)];
	if (unk_0x6CB99B97664C3727(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_73(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xB5CEFD608600A09F();
	Global_1624079[iVar0 /*558*/].f_11.f_448 = (Global_1624079[iVar0 /*558*/].f_11.f_448 + iParam0);
	if (Global_1624079[iVar0 /*558*/].f_11.f_448 < -9999)
	{
		Global_1624079[iVar0 /*558*/].f_11.f_448 = 9999;
	}
	else if (Global_1624079[iVar0 /*558*/].f_11.f_448 > 9999)
	{
		Global_1624079[iVar0 /*558*/].f_11.f_448 = 9999;
	}
}

int func_74()
{
	if (Global_1665352.f_3 != 0)
	{
		return Global_1665352.f_3;
	}
	return -1;
}

int func_75()
{
	if (Global_1665352.f_2 != 0)
	{
		return Global_1665352.f_2;
	}
	return -1;
}

int func_76(int iParam0)
{
	if (iParam0 == func_77())
	{
		return -1;
	}
	return Global_1624079[iParam0 /*558*/].f_11.f_8[1];
}

int func_77()
{
	return -1;
}

int func_78(int iParam0)
{
	if (iParam0 == func_77())
	{
		return -1;
	}
	return Global_1624079[iParam0 /*558*/].f_11.f_8[0];
}

int func_79()
{
	return Global_1624079[unk_0xB5CEFD608600A09F() /*558*/].f_11;
}

bool func_80(bool bParam0)
{
	return func_81(unk_0xB5CEFD608600A09F(), bParam0);
}

int func_81(int iParam0, bool bParam1)
{
	return func_82(iParam0, bParam1, 1);
}

int func_82(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_77())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_83(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1624079[iParam0 /*558*/].f_11;
	if (iVar0 != func_77() && Global_1624079[iVar0 /*558*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_83(int iParam0, int iParam1)
{
	if (iParam0 != func_77())
	{
		if (Global_1624079[iParam0 /*558*/].f_11 != func_77())
		{
			if (Global_1624079[iParam0 /*558*/].f_11 == iParam0 && Global_1624079[iParam0 /*558*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_84(int iParam0, bool bParam1, int iParam2)
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
		if (unk_0x778F0492FD6A3D74())
		{
			unk_0xC4248B71D9B26306(0);
		}
	}
	if (!unk_0x7AF0088ABFA713B6())
	{
		uVar0 = iParam2;
		unk_0xDDCAA2E64649E083(iParam0, bParam1, uVar0);
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
		if (!func_92())
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
		if (unk_0x96B1061E8F3CBC9A(iParam0) && unk_0x6A9CDB766DF7216F(iParam0))
		{
			iVar25 = unk_0xA95CF30C72EB526E(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x7AF0088ABFA713B6())
				{
					unk_0x32E44624A62DB55D(1);
				}
				else if (bVar13 || (!func_90(unk_0xB5CEFD608600A09F(), 0) && !func_89()))
				{
					unk_0xDC078F87049ECECE(iVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (unk_0x7AF0088ABFA713B6() && !bVar18)
					{
						unk_0x32E44624A62DB55D(0);
					}
					Global_2423644[iParam0 /*406*/].f_240 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_88(iVar25) && !unk_0xE55B9B1B2A172FD4(iVar25))
				{
					if (!bVar21)
					{
						unk_0xD434A01DEA38A939(iVar25, true, 0);
					}
				}
				if (!unk_0xE7E55F7532DEE345(iVar25))
				{
					if (!bVar20)
					{
						unk_0x346478B12F69D4E3(iVar25, false);
					}
					unk_0x656194E145691D3E(iVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0x346478B12F69D4E3(iVar25, false);
				}
				unk_0xB105531EDD3DE51B(iVar25, true);
				unk_0x3D7FF8418367D451(iParam0, 0);
				if (unk_0xE58FD1D062663A04(iVar25) && unk_0xCF9FD9F078487083(iVar25))
				{
					unk_0xF1B63714B0383791(iVar25);
				}
				unk_0xF1FC2182A76AD7FC(iVar25, 1);
				if (unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()) == 0)
				{
					func_87();
					func_86();
				}
				if (unk_0x9C8234ED756EFA0E())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0x719413B40BB63D86())
				{
				}
				Global_2423644[iParam0 /*406*/].f_241 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_88(iVar25) && !unk_0xE55B9B1B2A172FD4(iVar25))
				{
					if (!bVar21)
					{
						unk_0xD434A01DEA38A939(iVar25, !bVar14, 0);
					}
					if (!unk_0xE7E55F7532DEE345(iVar25))
					{
						if (!bVar20)
						{
							unk_0x346478B12F69D4E3(iVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0x656194E145691D3E(iVar25, 1);
						}
					}
					if (func_85(Global_4456448.f_148478))
					{
						unk_0x346478B12F69D4E3(iVar25, true);
					}
				}
				if (Global_1312831)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					unk_0x3D7FF8418367D451(iParam0, 0);
				}
				else
				{
					unk_0x3D7FF8418367D451(iParam0, 1);
				}
				unk_0xB105531EDD3DE51B(iVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0xC3532F7D5B045BFC(iVar25) && !unk_0x5237AF95232D78C5(iVar25, 0))
					{
						unk_0x49D46EE47C9CCB66(iVar25);
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
			unk_0xDDCAA2E64649E083(iParam0, bParam1, iVar26);
		}
	}
}

bool func_85(int iParam0)
{
	return iParam0 == 17;
}

void func_86()
{
	struct<3> Var0;
	
	Global_2436641.f_1228 = 0;
	Global_2436641.f_1229 = 0;
	Global_2436641.f_1230 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2436641.f_1235 = -1;
	Global_2436641.f_1236 = 0;
	Global_2405070.f_2671 = { Var0 };
}

void func_87()
{
	Global_2405070.f_690 = 0;
	Global_2405070.f_2714 = 0;
	Global_2405070.f_508 = 0;
	Global_2405070.f_596 = 0;
	Global_2423644[unk_0xB5CEFD608600A09F() /*406*/].f_203 = 0;
	Global_2405070.f_2670 = 0;
}

int func_88(int iParam0)
{
	int iVar0;
	
	if (unk_0x5237AF95232D78C5(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xF4FCC3C1048FF2AB(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_89()
{
	return unk_0xFA30DFD0084E92FE(Global_2359302, 3);
}

bool func_90(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xB5CEFD608600A09F())
	{
		bVar0 = func_91(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589291[iParam0 /*770*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x96B1061E8F3CBC9A(iParam0))
		{
			bVar0 = unk_0x343CB262BF0CDF5A(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_91(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_71();
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

int func_92()
{
	if (func_93() == 0)
	{
		return 1;
	}
	return 0;
}

int func_93()
{
	return Global_1312466.f_18;
}

void func_94(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x7AF0088ABFA713B6() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xED678C85A82F0AB9();
			}
			else
			{
				*uParam0 = unk_0x1C44CABA911F93F7();
			}
		}
		else
		{
			*uParam0 = unk_0x105601648511CC64();
		}
		uParam0->f_1 = 1;
	}
}

void func_95()
{
	int iVar0;
	
	if (bLocal_50)
	{
		return;
	}
	Local_43.f_4 = 0;
	if (!func_96(Global_36844[iLocal_64 /*5*/].f_2))
	{
		return;
	}
	iVar0 = unk_0x491B2241281A03B7(500, 3000);
	Local_60.f_0 = 5;
	Local_55.f_2 = (unk_0x83666F9FB8FEBD4B() + iVar0);
}

int func_96(int iParam0)
{
	int iVar0;
	var uVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	
	iVar0 = func_107();
	if (iVar0 == -2)
	{
		return 0;
	}
	if (unk_0x36CEFBE9B745A58D(Local_43.f_1))
	{
		if (unk_0x5237AF95232D78C5(Local_43.f_1, 0) || unk_0x8F1FDD0A40DC834A(Local_43.f_1))
		{
			return 0;
		}
		if (unk_0xF3160454EE16A1B1(Local_43.f_1))
		{
			return 0;
		}
		if (func_103(Local_43.f_1))
		{
			return 0;
		}
	}
	if ((Global_36844[iLocal_64 /*5*/].f_3 < 3 && Global_36844[iLocal_64 /*5*/].f_3 != 0) && Global_36844[iLocal_64 /*5*/].f_3 > Global_36844[iLocal_64 /*5*/].f_4)
	{
		return 0;
	}
	if ((Global_36844[iLocal_64 /*5*/].f_4 < 9 && Global_36844[iLocal_64 /*5*/].f_4 != 0) && Global_36844[iLocal_64 /*5*/].f_4 > Global_36844[iLocal_64 /*5*/].f_3)
	{
		return 0;
	}
	uVar1 = func_102(iParam0);
	if (unk_0xF1734B55490E9045(uVar1))
	{
		return 0;
	}
	if (func_103(Local_43.f_1))
	{
		return 0;
	}
	unk_0x37FA5A8A7F1136BA(sVar1);
	if (func_99(Local_43.f_1))
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
		if (!unk_0xF1734B55490E9045(sVar2) && !unk_0xF1734B55490E9045(sVar3))
		{
			unk_0x522053D86D6E1C7A(sVar2);
			while (!unk_0xF9E082857622D91E(sVar2))
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			if (!unk_0x36CEFBE9B745A58D(Local_43.f_1))
			{
				unk_0xE896C0AD02364F2A(Local_43.f_1, sVar2, sVar3, 1.5f, -1.5f, -1, 48, 0, 0, 0, 0);
				sLocal_54 = sVar3;
			}
		}
	}
	if (!unk_0x320539481B2F0121(sVar1))
	{
		return 0;
	}
	if (unk_0x36CEFBE9B745A58D(Local_43.f_1))
	{
		return 0;
	}
	unk_0x43B967881C60631D(Local_43.f_1, sVar1, 0.75f);
	if (unk_0x7FCE28BE45D0735E() == 4)
	{
		unk_0x5CCBDF674448F1F1(Local_43.f_1, "move_ped_strafing_firstperson@drunk");
	}
	unk_0x2ED10ACF200755F4(Local_43.f_1, 0, sVar1, "idle", 2f, 1);
	Local_60.f_2 = sVar1;
	bLocal_51 = true;
	iVar4 = 0;
	switch (func_63(Local_43.f_1))
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
			if (unk_0x15DBD981998D4FE1(Local_43.f_1))
			{
				if (!func_97())
				{
					iVar4 = "FACIALS@GEN_MALE@BASE";
				}
				else
				{
					iVar4 = "FACIALS@GEN_FEMALE@BASE";
				}
			}
			else if (unk_0xB6FD7D587FE0A1B4(Local_43.f_1))
			{
				iVar4 = "FACIALS@GEN_MALE@BASE";
			}
			else
			{
				iVar4 = "FACIALS@GEN_FEMALE@BASE";
			}
			break;
	}
	unk_0xA3860F0641D38992(Local_43.f_1, "mood_drunk_1", iVar4);
	unk_0x2E9860A2B72187F5(Local_43.f_1, 200, 1);
	unk_0x2E9860A2B72187F5(Local_43.f_1, 46, 1);
	unk_0x8941EA87BBF38C6F(Local_43.f_1, 0);
	unk_0xABA7AE40608505F2(Local_43.f_1, 262144, 1);
	unk_0x30A2BBDD27175C81(Local_43.f_1, 1);
	return 1;
}

bool func_97()
{
	return func_98(unk_0xB5CEFD608600A09F());
}

int func_98(int iParam0)
{
	if (unk_0x6F79ECA8C83E4357(unk_0xA95CF30C72EB526E(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_99(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x5237AF95232D78C5(iParam0, 1) || unk_0x8F1FDD0A40DC834A(iParam0))
	{
		return 0;
	}
	if (unk_0xF4FCC3C1048FF2AB(iParam0, -2017877118) != 7)
	{
		return 0;
	}
	if (unk_0xF4FCC3C1048FF2AB(iParam0, 1785177548) != 7)
	{
		return 0;
	}
	if (unk_0x32E373675659FDB0(iParam0))
	{
		return 0;
	}
	if (unk_0x2A348A3A98B80B13(iParam0))
	{
		return 0;
	}
	if (unk_0x2CDE18D6C89522AD(iParam0))
	{
		return 0;
	}
	if (unk_0x3BFD283B5133A140(iParam0))
	{
		return 0;
	}
	if (Global_68280)
	{
		return 0;
	}
	if (func_101())
	{
		return 0;
	}
	if (iParam0 == unk_0xBC25C936A095B5BA())
	{
		if (!unk_0x7C0DA819D1835E07(unk_0xB5CEFD608600A09F()))
		{
			return 0;
		}
		if (!unk_0x8CC5A4A5615C6420(unk_0xB5CEFD608600A09F()))
		{
			return 0;
		}
		if (unk_0xC2D39D2C720A03B0(unk_0xB5CEFD608600A09F()) || unk_0xE1C3A331B6951C3D(unk_0xB5CEFD608600A09F()))
		{
			return 0;
		}
		if (func_100())
		{
			return 0;
		}
	}
	Var0 = { unk_0xB5D9AE572C19509E(iParam0) };
	if (unk_0xA8CEACB4F35AE058(Var0) >= (1f * 1f))
	{
		return 0;
	}
	return 1;
}

bool func_100()
{
	return Global_93007.f_322 > 0;
}

bool func_101()
{
	return unk_0x105601648511CC64() <= Global_17345.f_5745 + 100;
}

char* func_102(int iParam0)
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

int func_103(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_104(iParam0);
	uVar1 = func_102(iVar0);
	if (unk_0xF1734B55490E9045(Local_60.f_2))
	{
		if (unk_0xF1734B55490E9045(uVar1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return unk_0x3362CDE8460ED38B(Local_60.f_2, sVar1);
}

int func_104(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!unk_0x724D816EA203A79E(iParam0))
	{
		return -1;
	}
	iVar0 = func_106(iParam0);
	iVar1 = func_105(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36844[iVar1 /*5*/].f_2;
}

int func_105(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36844[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_106(int iParam0)
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
		if (iParam0 == Global_36844[iVar0 /*5*/].f_1)
		{
			return Global_36844[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_107()
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

void func_108()
{
	if (bLocal_50)
	{
		return;
	}
	if (!func_109())
	{
		Local_60.f_0 = 5;
		Local_55.f_2 = unk_0x83666F9FB8FEBD4B() + 5000;
		return;
	}
	Local_60.f_0 = 6;
}

bool func_109()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (Local_43.f_4 == 0)
	{
		return 0;
	}
	if (unk_0x1D403DFADBC2DE3C(Local_43.f_4, 0))
	{
		return 0;
	}
	Var0 = { unk_0x541C2AEF053615BC(Local_43.f_1, 1) };
	Var3 = { unk_0x541C2AEF053615BC(Local_43.f_4, 1) };
	fVar6 = unk_0xF0F2FC9DE291567F(Var0, Var3, 1);
	return fVar6 < 7f;
}

void func_110()
{
	int iVar0;
	char* sVar1;
	
	if (Local_43.f_1 == unk_0xBC25C936A095B5BA())
	{
		unk_0xBBC4195AD74D153D(0, 36, 1);
		if (unk_0xB3B744D2D9D757D1(Local_43.f_1))
		{
			if (Global_36844[iLocal_64 /*5*/].f_2 == 0 || Global_36844[iLocal_64 /*5*/].f_2 == 2)
			{
				unk_0x4060A19D5551068A(Local_43.f_1, 0, 0);
			}
		}
		if (unk_0xFC1354EC06B3E9F8(Local_43.f_1))
		{
			unk_0x5845955B5CBDB595(Local_43.f_1, 0);
		}
	}
	if (Local_55.f_0 != -2)
	{
		if (Local_55.f_0 == -1)
		{
			if (Global_36844[iLocal_64 /*5*/].f_2 != 0)
			{
				Global_36844[iLocal_64 /*5*/].f_2 = 0;
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
			if (Global_36844[iLocal_64 /*5*/].f_2 == 0)
			{
				if (iVar0 < 30)
				{
					Global_36844[iLocal_64 /*5*/].f_2 = 2;
					if (!func_96(2))
					{
						Global_36844[iLocal_64 /*5*/].f_2 = 0;
						return;
					}
				}
			}
			if (Global_36844[iLocal_64 /*5*/].f_2 == 2)
			{
				if (iVar0 < 10)
				{
					Global_36844[iLocal_64 /*5*/].f_2 = 1;
					if (!func_96(2))
					{
						Global_36844[iLocal_64 /*5*/].f_2 = 2;
						return;
					}
				}
			}
			if (Global_36844[iLocal_64 /*5*/].f_2 == 1)
			{
			}
		}
	}
	else
	{
		return;
	}
	if (!unk_0xF1734B55490E9045(sLocal_54))
	{
		if (!func_99(Local_43.f_1))
		{
			sVar1 = "MOVE_M@DRUNK@TRANSITIONS";
			if (unk_0x96044E39418AAF17(Local_43.f_1, sVar1, sLocal_54, 3))
			{
				unk_0x08FA5F7132D73F6F(Local_43.f_1, sVar1, sLocal_54, -4f);
			}
			sLocal_54 = "";
			return;
		}
	}
	if (Global_36844[iLocal_64 /*5*/].f_3 >= 10 || Global_36844[iLocal_64 /*5*/].f_4 >= 15)
	{
		if (unk_0xF4FCC3C1048FF2AB(Local_43.f_1, 1785177548) == 1)
		{
			return;
		}
		if (unk_0x8C2668F45F2BB3F2(Local_43.f_1))
		{
			return;
		}
		if (unk_0x5237AF95232D78C5(Local_43.f_1, 1))
		{
			if (Global_36844[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_36844[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_36844[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_36844[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((unk_0x7AF0088ABFA713B6() && Local_43.f_1 == unk_0xBC25C936A095B5BA()) && func_111(unk_0xB5CEFD608600A09F())) && Global_262145.f_23177)
		{
			if (Global_36844[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_36844[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_36844[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_36844[iLocal_64 /*5*/].f_4 = 14;
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
	if (!func_103(Local_43.f_1))
	{
		return;
	}
}

int func_111(int iParam0)
{
	if (iParam0 != func_77())
	{
		if (func_113(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_112(Global_2423644[iParam0 /*406*/].f_305.f_1) == 11;
			}
		}
	}
	return 0;
}

int func_112(int iParam0)
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
	}
	return -1;
}

int func_113(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x96B1061E8F3CBC9A(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x6A9CDB766DF7216F(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436641.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_114()
{
	int iVar0;
	
	if (!unk_0xCBBE5AFE2CD2E9B6(Local_43.f_1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = unk_0x9FE9D386222EEE47(Local_43.f_1, 0);
	if (!unk_0xE59B7F5A03335350(iVar0, 0))
	{
		return 0;
	}
	if (!unk_0x3187EF5798B5D209(iVar0, -1, 0) == Local_43.f_1)
	{
		return 0;
	}
	Local_43.f_4 = iVar0;
	Local_60.f_0 = 7;
	return 1;
}

void func_115()
{
	if (!unk_0x5237AF95232D78C5(Local_43.f_1, 0))
	{
		Local_60.f_0 = 4;
		return;
	}
}

void func_116()
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
	if (!unk_0x6A9CDB766DF7216F(unk_0xB5CEFD608600A09F()))
	{
		return;
	}
	if (!unk_0xCBBE5AFE2CD2E9B6(unk_0xBC25C936A095B5BA()))
	{
		return;
	}
	if (unk_0x86B385F1E3450315(unk_0xB5CEFD608600A09F(), 0))
	{
		return;
	}
	iVar0 = unk_0x9FE9D386222EEE47(unk_0xBC25C936A095B5BA(), 0);
	fVar1 = unk_0x8910237449BB6F79(iVar0);
	if (fVar1 < 5f)
	{
		return;
	}
	Var2 = { unk_0x541C2AEF053615BC(unk_0xBC25C936A095B5BA(), 1) };
	Var5 = { Var2 - Vector(3f, 30f, 30f) };
	Var8 = { Var2 + Vector(3f, 30f, 30f) };
	if (!unk_0x89E5F484A37AE468(Var5, Var8) && !unk_0xBFED55DE95EA4B0C(Var5, Var8))
	{
		return;
	}
	unk_0xED946BB96C5E9C4A(unk_0xB5CEFD608600A09F(), 1, 0);
	unk_0xCE6A8FE7DACF8BD4(unk_0xB5CEFD608600A09F(), 0);
	func_11(73, 1);
}

void func_117()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = Local_43.f_1;
	if (unk_0x5237AF95232D78C5(Local_43.f_1, 0))
	{
		iVar1 = unk_0x9FE9D386222EEE47(Local_43.f_1, 0);
		iVar2 = unk_0x3187EF5798B5D209(iVar1, -1, 0);
		if (!iVar2 == Local_43.f_1)
		{
			return;
		}
		if (unk_0x7AF0088ABFA713B6() && !unk_0x4DF785C4DF542CD0(iVar1))
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!unk_0xBC25C936A095B5BA() == Local_43.f_1)
	{
		return;
	}
	else if (!unk_0x7FCE28BE45D0735E() == 4)
	{
		fLocal_53 = 0f;
		func_119(iVar0, 0f);
		return;
	}
	if (unk_0x83666F9FB8FEBD4B() < Local_55.f_4)
	{
		func_119(iVar0, fLocal_53);
		return;
	}
	if (unk_0x386592AF38881675(iVar0))
	{
		Local_55.f_4 = unk_0x83666F9FB8FEBD4B() + 2000;
	}
	else
	{
		Local_55.f_4 = unk_0x83666F9FB8FEBD4B() + 1000;
	}
	fVar3 = unk_0x8910237449BB6F79(iVar0);
	if (fVar3 < 0.04f)
	{
		fLocal_53 = 0f;
		func_119(iVar0, 0f);
		return;
	}
	if (Local_55.f_1 == -1)
	{
		fLocal_53 = func_118(iVar0, 0.13f, 0.06f);
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
			fLocal_53 = func_118(iVar0, 0.05f, 0.02f);
		}
		else if (iVar4 < 30000)
		{
			fLocal_53 = func_118(iVar0, 0.07f, 0.03f);
		}
		else if (iVar4 < 45000)
		{
			fLocal_53 = func_118(iVar0, 0.09f, 0.04f);
		}
		else if (iVar4 < 600000)
		{
			fLocal_53 = func_118(iVar0, 0.1f, 0.05f);
		}
		else
		{
			fLocal_53 = func_118(iVar0, 0.13f, 0.06f);
		}
	}
	func_119(iVar0, fLocal_53);
}

float func_118(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = unk_0x55AEFCD285ECC0F2(-fParam1, fParam1);
	fVar1 = unk_0x55AEFCD285ECC0F2(0f, fParam2);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 - fVar1);
	}
	else
	{
		fVar0 = (fVar0 + fVar1);
	}
	if (unk_0x386592AF38881675(iParam0))
	{
		if (unk_0x7199482D96955B9E(unk_0x399F7937FFE4DEBF(iParam0)))
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
		iVar2 = unk_0x6F79ECA8C83E4357(iParam0);
		if (unk_0x7512ED01F3F46714(iVar2))
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

void func_119(int iParam0, float fParam1)
{
	if (unk_0x7AF0088ABFA713B6() && !unk_0x4DF785C4DF542CD0(iParam0))
	{
		return;
	}
	if (unk_0x386592AF38881675(iParam0))
	{
		unk_0xEEA5BE3E827BD534(unk_0x399F7937FFE4DEBF(iParam0), fParam1);
	}
	else if (unk_0xD27AC0E9B78CFDD7(iParam0))
	{
		unk_0xCF883E5A10A252C1(unk_0x233ED4CD1F1A42C1(iParam0), fParam1);
	}
}

void func_120()
{
	int iVar0;
	
	if (!unk_0x5237AF95232D78C5(Local_43.f_1, 0))
	{
		Local_60.f_0 = 4;
		return;
	}
	if (unk_0x7AF0088ABFA713B6())
	{
		if (Global_36844[iLocal_64 /*5*/].f_3 >= 10 || Global_36844[iLocal_64 /*5*/].f_4 >= 15)
		{
			if (Global_36844[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_36844[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_36844[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_36844[iLocal_64 /*5*/].f_4 = 14;
			}
		}
	}
	if (bLocal_50)
	{
		return;
	}
	iVar0 = unk_0x9FE9D386222EEE47(Local_43.f_1, 0);
	if (!unk_0xE59B7F5A03335350(iVar0, 0))
	{
		unk_0xA3981DED4FC2E56E(Local_43.f_1, 0, 0);
		Local_60.f_0 = 11;
		return;
	}
}

void func_121()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x83666F9FB8FEBD4B() <= Local_55.f_3)
	{
		return;
	}
	iVar0 = unk_0xF4FCC3C1048FF2AB(unk_0xBC25C936A095B5BA(), 355471868);
	if (!iVar0 == 7)
	{
		Local_55.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
		return;
	}
	if (!unk_0x5237AF95232D78C5(Local_43.f_1, 0))
	{
		Local_60.f_0 = 4;
		Local_55.f_3 = -2;
		return;
	}
	iVar1 = unk_0x9FE9D386222EEE47(Local_43.f_1, 0);
	iVar2 = unk_0x3187EF5798B5D209(iVar1, -1, 0);
	if (iVar2 == Local_43.f_1)
	{
		func_122();
		Local_55.f_3 = -2;
		return;
	}
	unk_0x9BFB4F4439403039(Local_43.f_1, iVar1, 0);
	Local_60.f_0 = 9;
	Local_55.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
}

void func_122()
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
	func_148(iLocal_48, 2, 5);
	Local_55.f_4 = unk_0x83666F9FB8FEBD4B();
	fLocal_53 = 0f;
}

void func_123()
{
	if (unk_0xCBBE5AFE2CD2E9B6(Local_43.f_1))
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

void func_124()
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
	if (bVar1 || unk_0xCBBE5AFE2CD2E9B6(Local_43.f_1))
	{
		if (!bLocal_50)
		{
		}
		iVar0 = unk_0x9FE9D386222EEE47(Local_43.f_1, 0);
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
				unk_0xA3981DED4FC2E56E(Local_43.f_1, 0, 0);
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
			func_122();
			return;
		}
		if (!bLocal_50)
		{
			if (!bLocal_50)
			{
			}
			func_122();
			return;
		}
		if (!bLocal_50)
		{
		}
		iVar2 = unk_0x3187EF5798B5D209(Local_43.f_4, -1, 0);
		if (iVar2 == Local_43.f_1)
		{
			func_122();
			return;
		}
		unk_0x9BFB4F4439403039(Local_43.f_1, iVar0, 0);
		Local_60.f_0 = 9;
		Local_55.f_3 = unk_0x83666F9FB8FEBD4B() + 1000;
		return;
	}
	if (!func_109())
	{
		unk_0xA4E856A8CD53B8DF(Local_43.f_1);
		Local_60.f_0 = 4;
		return;
	}
	if (!bLocal_50)
	{
		iVar3 = unk_0xF4FCC3C1048FF2AB(Local_43.f_1, -1794415470);
		if (iVar3 == 7)
		{
			if (!unk_0x5237AF95232D78C5(Local_43.f_1, 0))
			{
				unk_0xA4E856A8CD53B8DF(Local_43.f_1);
				Local_60.f_0 = 4;
				return;
			}
		}
	}
}

void func_125()
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
	if (!unk_0xE59B7F5A03335350(Local_43.f_4, 0))
	{
		Local_43.f_4 = 0;
		Local_60.f_0 = 4;
		return;
	}
	Var0 = { unk_0x541C2AEF053615BC(Local_43.f_1, 1) };
	Var3 = { unk_0x541C2AEF053615BC(Local_43.f_4, 1) };
	fVar6 = unk_0xF0F2FC9DE291567F(Var0, Var3, 1);
	if (fVar6 > 3f)
	{
		if (!func_96(Global_36844[iLocal_64 /*5*/].f_2))
		{
			Local_60.f_0 = 12;
			return;
		}
		Local_60.f_0 = 5;
		Local_55.f_2 = unk_0x83666F9FB8FEBD4B() + 2000;
		return;
	}
	iVar7 = unk_0x524ABB0435146845(Local_43.f_4);
	iVar8 = 0;
	bVar9 = true;
	iVar8 = 1;
	while (bVar9)
	{
		if (iVar8 < iVar7)
		{
			if (unk_0x1AAF0C23233C57AF(Local_43.f_4, iVar8, 0))
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
	func_126();
	unk_0xD179FA0466FA4FE3(Local_43.f_1, Local_43.f_4, -1, iVar8, 1073741824, 1, 0);
	Local_60.f_0 = 7;
}

void func_126()
{
	if (!unk_0x724D816EA203A79E(Local_43.f_1))
	{
		return;
	}
	if (!unk_0x36CEFBE9B745A58D(Local_43.f_1))
	{
		unk_0x7FD552896FDFC9E4(Local_43.f_1, 1048576000);
		unk_0x58D1D67B673B070D(Local_43.f_1);
		unk_0x2396C3BAAE2ACE94(Local_43.f_1, 0, -1056964608);
		Local_60.f_2 = "";
		unk_0x851D6A4006011A10(Local_43.f_1);
		unk_0x2E9860A2B72187F5(Local_43.f_1, 200, 0);
		unk_0x2E9860A2B72187F5(Local_43.f_1, 46, 0);
		unk_0x8941EA87BBF38C6F(Local_43.f_1, 1);
		unk_0xABA7AE40608505F2(Local_43.f_1, 262144, 0);
		unk_0x30A2BBDD27175C81(Local_43.f_1, 0);
	}
	if (!bLocal_51)
	{
		return;
	}
	bLocal_51 = false;
}

void func_127()
{
	if (unk_0x83666F9FB8FEBD4B() < Local_55.f_2)
	{
		func_110();
		return;
	}
	func_128();
	Local_55.f_2 = -2;
	Local_60.f_0 = 12;
}

int func_128()
{
	if (!func_103(Local_43.f_1))
	{
		return 0;
	}
	if (!bLocal_51)
	{
		return 0;
	}
	func_129(Local_43.f_1);
	Local_60.f_2 = "";
	Global_2519572.f_4526 = 1;
	return 1;
}

void func_129(int iParam0)
{
	unk_0x7FD552896FDFC9E4(uParam0, 1048576000);
	unk_0x2396C3BAAE2ACE94(uParam0, 0, -1056964608);
	unk_0x2E9860A2B72187F5(uParam0, 200, 0);
	unk_0x8941EA87BBF38C6F(iParam0, 1);
	unk_0xABA7AE40608505F2(iParam0, 262144, 0);
	unk_0x30A2BBDD27175C81(iParam0, 0);
}

void func_130()
{
	int iVar0;
	
	if (Local_55.f_0 == -1)
	{
		Global_36844[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36844[iLocal_64 /*5*/].f_3 < 3 && Global_36844[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_36844[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_36844[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_36844[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_36844[iLocal_64 /*5*/].f_2 = 1;
		}
	}
	if (unk_0x5237AF95232D78C5(Local_43.f_1, 0))
	{
		Local_60.f_0 = 10;
		return;
	}
	if (func_103(Local_43.f_1))
	{
		Local_60.f_0 = 12;
		return;
	}
	if (Local_55.f_0 == -2)
	{
		return;
	}
	if (!func_96(Global_36844[iLocal_64 /*5*/].f_2))
	{
		return;
	}
	Local_60.f_0 = 12;
}

void func_131()
{
}

void func_132()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 6;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 16)
	{
		iVar0 = Global_36925[iVar1 /*6*/].f_2;
		if (!iVar0 == 6)
		{
			if (Global_36925[iVar1 /*6*/].f_1 == iLocal_48)
			{
				func_134(iVar1);
				func_133(iVar1);
			}
			else if (Global_36925[iVar1 /*6*/].f_1 == 2)
			{
				if (!iLocal_49 == -1)
				{
					if (iLocal_49 == Global_36925[iVar1 /*6*/])
					{
						func_134(iVar1);
					}
				}
			}
		}
		iVar1++;
	}
}

void func_133(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_36925[iParam0 /*6*/] = -1;
	Global_36925[iParam0 /*6*/].f_1 = -1;
	Global_36925[iParam0 /*6*/].f_2 = 6;
	Global_36925[iParam0 /*6*/].f_3 = 0;
	Global_36925[iParam0 /*6*/].f_4 = 0;
}

void func_134(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_36925[iParam0 /*6*/].f_2;
	switch (iVar0)
	{
		case 1:
			func_155();
			break;
		
		case 2:
			func_138(Global_36925[iParam0 /*6*/].f_4);
			break;
		
		case 3:
			func_137(Global_36925[iParam0 /*6*/].f_5);
			break;
		
		case 4:
			func_136();
			break;
		
		case 5:
			func_135();
			break;
		
		case 0:
			break;
		
		case 6:
			break;
		
		default:
			break;
	}
}

void func_135()
{
	Local_60.f_1 = 2;
}

void func_136()
{
	int iVar0;
	
	Global_36844[iLocal_64 /*5*/].f_4++;
	if (Local_55.f_0 == -1)
	{
		Global_36844[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36844[iLocal_64 /*5*/].f_4 < 9 && Global_36844[iLocal_64 /*5*/].f_4 != 0)
	{
		Global_36844[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_36844[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_36844[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_36844[iLocal_64 /*5*/].f_2 = 1;
		}
		if (!func_103(Local_43.f_1))
		{
			func_96(Global_36844[iLocal_64 /*5*/].f_2);
		}
	}
}

void func_137(int iParam0)
{
	int iVar0;
	
	Global_36844[iLocal_64 /*5*/].f_3 = (Global_36844[iLocal_64 /*5*/].f_3 + iParam0);
	if (Local_55.f_0 == -1)
	{
		Global_36844[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36844[iLocal_64 /*5*/].f_3 < 3 && Global_36844[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_36844[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_36844[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_36844[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_36844[iLocal_64 /*5*/].f_2 = 1;
		}
		if (!func_103(Local_43.f_1))
		{
			func_96(Global_36844[iLocal_64 /*5*/].f_2);
		}
	}
}

void func_138(int iParam0)
{
	Local_43.f_3 = (Local_43.f_3 + iParam0);
	Local_43.f_2 = (Local_43.f_2 + iParam0);
	Local_55.f_1 = (Local_55.f_1 + iParam0);
	Local_55.f_0 = (Local_55.f_0 + iParam0);
}

void func_139()
{
	int iVar0;
	
	if (!bLocal_50)
	{
		iLocal_63 = -1;
		return;
	}
	if (iLocal_63 < 0)
	{
		iLocal_63 = unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F());
		return;
	}
	iVar0 = unk_0x904E94842BB9E173(unk_0xB5CEFD608600A09F());
	if (iVar0 != iLocal_63)
	{
		if (iVar0 > iLocal_63)
		{
			func_140();
		}
		iLocal_63 = iVar0;
		return;
	}
}

void func_140()
{
}

void func_141()
{
	if (!Local_55.f_0 == -1)
	{
		if (!Local_55.f_0 == -2)
		{
			if (unk_0x83666F9FB8FEBD4B() >= Local_55.f_0)
			{
				func_126();
				Local_55.f_0 = -2;
				Local_60.f_0 = 12;
			}
		}
		if (unk_0x83666F9FB8FEBD4B() > Local_55.f_1)
		{
			func_155();
		}
	}
}

void func_142(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36925[iVar0 /*6*/])
		{
			func_133(iVar0);
		}
		iVar0++;
	}
}

void func_143()
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
	if (!unk_0x1D403DFADBC2DE3C(Local_43.f_1, 0))
	{
		if (unk_0xCBBE5AFE2CD2E9B6(Local_43.f_1))
		{
			Local_60.f_0 = 10;
		}
	}
	if (bLocal_50)
	{
		func_146();
		func_11(71, 1);
		if (unk_0x7AF0088ABFA713B6())
		{
			iVar0 = func_72(2057, -1, 0);
			iVar1 = (iVar0 / 10) + 1 * 10;
			if (iVar0 + 1 >= iVar1)
			{
				func_144(iVar1);
			}
			func_69(2057, iVar0 + 1, -1, 1, 0);
		}
		else
		{
			iVar2 = 0;
			iVar3 = 0;
			iVar4 = 0;
			unk_0x6CB99B97664C3727(joaat("sp0_sp_num_times_drunk"), &iVar2, -1);
			unk_0x6CB99B97664C3727(joaat("sp1_sp_num_times_drunk"), &iVar3, -1);
			unk_0x6CB99B97664C3727(joaat("sp2_sp_num_times_drunk"), &iVar4, -1);
			iVar5 = ((iVar2 + iVar3) + iVar4);
			iVar6 = (iVar5 / 10) + 1 * 10;
			if (iVar5 + 1 >= iVar6)
			{
				func_144(iVar6);
			}
			switch (func_60())
			{
				case 0:
					unk_0x3A57956BCE003880(joaat("sp0_sp_num_times_drunk"), iVar2 + 1, 1);
					break;
				
				case 1:
					unk_0x3A57956BCE003880(joaat("sp1_sp_num_times_drunk"), iVar3 + 1, 1);
					break;
				
				case 2:
					unk_0x3A57956BCE003880(joaat("sp2_sp_num_times_drunk"), iVar4 + 1, 1);
					break;
				}
		}
		Local_60.f_1 = 1;
		return;
	}
	Local_60.f_1 = 12;
	if (Local_55.f_0 == -1)
	{
		Global_36844[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_36844[iLocal_64 /*5*/].f_3 < 3 && Global_36844[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_36844[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar7 = (Local_55.f_0 - unk_0x83666F9FB8FEBD4B());
		if (iVar7 <= 0)
		{
			iVar7 = 0;
		}
		iVar7 = (iVar7 / 1000) + 1;
		Global_36844[iLocal_64 /*5*/].f_2 = 0;
		if (iVar7 < 30)
		{
			Global_36844[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar7 < 10)
		{
			Global_36844[iLocal_64 /*5*/].f_2 = 1;
		}
	}
}

void func_144(int iParam0)
{
	int iVar0;
	
	iVar0 = func_145(81);
	Global_2414147[iVar0 /*83*/] = 81;
	Global_2414147[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2414147[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_145(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2414147[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2414147[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_146()
{
}

void func_147()
{
	Local_55.f_0 = Local_43.f_2;
	Local_55.f_1 = Local_43.f_3;
	Local_55.f_2 = -2;
	Local_55.f_3 = -2;
}

void func_148(int iParam0, int iParam1, int iParam2)
{
	func_149(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_149(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_151(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_150();
	if (iVar0 == -1)
	{
		return;
	}
	Global_36925[iVar0 /*6*/] = iParam0;
	Global_36925[iVar0 /*6*/].f_1 = iParam1;
	Global_36925[iVar0 /*6*/].f_2 = iParam2;
	Global_36925[iVar0 /*6*/].f_3 = iParam3;
	Global_36925[iVar0 /*6*/].f_4 = iParam4;
	Global_36925[iVar0 /*6*/].f_5 = iParam5;
}

int func_150()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36925[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_151(int iParam0, int iParam1, int iParam2)
{
	if (func_152(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_152(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_36925[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_36925[iVar0 /*6*/])
			{
				if (iParam1 == Global_36925[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

void func_153()
{
	int iVar0;
	
	bLocal_50 = false;
	if (Local_43.f_1 == unk_0xBC25C936A095B5BA())
	{
		bLocal_50 = true;
		Global_37056 = 1;
		Global_37058++;
	}
	if (!unk_0x1D403DFADBC2DE3C(Local_43.f_1, 0))
	{
		iVar0 = func_63(Local_43.f_1);
		switch (iVar0)
		{
			case 17:
				unk_0x36C3B58DA78A2679(Local_43.f_1, "AMANDA_DRUNK");
				break;
			
			case 19:
				unk_0x36C3B58DA78A2679(Local_43.f_1, "LAMAR_DRUNK");
				break;
			}
	}
}

void func_154()
{
	if (!iLocal_48 == -1)
	{
		return;
	}
	iLocal_48 = func_106(Local_43.f_1);
	if (iLocal_48 == -1)
	{
		return;
	}
	iLocal_64 = func_105(iLocal_48);
}

void func_155()
{
	int iVar0;
	
	if (!func_29(0) && !func_29(3))
	{
		if (!unk_0x1D403DFADBC2DE3C(Local_43.f_1, 0))
		{
			iVar0 = func_63(Local_43.f_1);
			if (Global_36844[iLocal_64 /*5*/].f_4 > 0)
			{
				switch (iVar0)
				{
					case 0:
						func_157(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 1:
						func_157(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 2:
						func_157(Local_43.f_1, "POST_STONED", 24);
						break;
					}
			}
			switch (iVar0)
			{
				case 17:
					unk_0x36C3B58DA78A2679(Local_43.f_1, "AMANDA_NORMAL");
					break;
				
				case 19:
					unk_0x36C3B58DA78A2679(Local_43.f_1, "LAMAR_NORMAL");
					break;
				}
			}
	}
	func_126();
	if (bLocal_50)
	{
		Global_37056 = 0;
	}
	func_156();
	unk_0x4EA570997E107F35(func_102(0));
	unk_0x4EA570997E107F35(func_102(2));
	unk_0x4EA570997E107F35(func_102(1));
	Global_1662299 = 0;
	if (unk_0xB731B8C5BCE89836(joaat("appemail")) > 0)
	{
		func_36(0);
	}
	unk_0x95E4B6F3ED223F5A();
}

void func_156()
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (unk_0x1D403DFADBC2DE3C(Local_43.f_1, 0))
	{
		return;
	}
	uVar0 = Local_43.f_1;
	if (unk_0x5237AF95232D78C5(Local_43.f_1, 0))
	{
		uVar1 = unk_0x9FE9D386222EEE47(Local_43.f_1, 0);
		iVar2 = unk_0x3187EF5798B5D209(uVar1, -1, 0);
		if (!Local_43.f_1 == iVar2)
		{
			return;
		}
		uVar0 = iVar1;
	}
	else if (!unk_0x7FCE28BE45D0735E() == 4 || !unk_0xBC25C936A095B5BA() == Local_43.f_1)
	{
		return;
	}
	fLocal_53 = 0f;
	func_119(uVar0, 0f);
}

void func_157(var uParam0, char* sParam1, int iParam2)
{
	unk_0x53D8178763EDCE60(uParam0, sParam1, func_158(iParam2), 1);
}

int func_158(int iParam0)
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

