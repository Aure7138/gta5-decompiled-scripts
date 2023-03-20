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
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	bool bLocal_39 = 0;
	bool bLocal_40 = 0;
	struct<8> Local_41 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	struct<11> Local_54[30];
	int iLocal_385 = 0;
	var uLocal_386 = 0;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	var uLocal_389 = 0;
	int iLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392[4] = { 0, 0, 0, 0 };
	float fLocal_397[4] = { 0f, 0f, 0f, 0f };
	float fLocal_402 = 0f;
	float fLocal_403 = 0f;
	float fLocal_404 = 0f;
	int iLocal_405 = 0;
	bool bLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
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
	sLocal_20 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_37 = 3;
	bLocal_39 = true;
	bLocal_40 = true;
	iLocal_387 = -1;
	iLocal_405 = 1;
	uLocal_407 = unk_0x50798E25F4813F2F();
	if (unk_0xD63E63DFACCEB80E(210))
	{
		func_77(1);
	}
	if (unk_0x7B47A371E2D93C2C(joaat("ambient_diving")) > 1)
	{
		unk_0xE60DEFFB2A853900();
	}
	func_76(27);
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		if (func_73(0))
		{
			if (!iLocal_411)
			{
				func_77(0);
				iLocal_411 = 1;
			}
		}
		else
		{
			iLocal_411 = 0;
			func_72(unk_0x9F92518438215DD0());
			switch (iLocal_385)
			{
				case 0:
					func_67();
					break;
				
				case 1:
					func_64();
					func_55();
					func_1();
					break;
				
				case 2:
					func_55();
					break;
				
				case 3:
					func_77(1);
					break;
				}
		}
	}
}

void func_1()
{
	if (func_18(&Local_41, &Local_54) || func_17(110) == 1)
	{
		if (func_16())
		{
			func_15(0);
		}
		func_8(298, 0, 0);
		if (!func_17(110))
		{
			if (!bLocal_406)
			{
				bLocal_406 = func_3(1303349750, 1, 1, 16, 3, 1000, 10000, 1256519626, -1, 163, -1, 0);
			}
		}
		func_2(2);
	}
}

void func_2(int iParam0)
{
	iLocal_385 = iParam0;
}

int func_3(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	struct<15> Var0;
	int iVar15;
	
	if (func_7(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam8 == 76)
	{
		return 0;
	}
	if (iParam9 == 235)
	{
		return 0;
	}
	if (iParam3 < 3)
	{
		if (unk_0x94E72F17611BCD3C(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam4 < 3)
	{
		if (iParam4 != iParam3)
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_97358.f_5944.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		if (Global_97358.f_5944.f_911 == Var0.f_0)
		{
			Global_97358.f_5944.f_911 = -1;
		}
		Var0.f_3 = func_6(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = (unk_0x17103F66FBB44C3C() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		unk_0xF76EE56D3E7DAF1B(&(Var0.f_1), 1);
		unk_0xF76EE56D3E7DAF1B(&(Var0.f_1), 0);
		if (iParam7 != -1)
		{
			unk_0xEDB9A377CD8B7F03(&(Var0.f_1), 11);
		}
		else if (iParam1 == 0)
		{
			unk_0xEDB9A377CD8B7F03(&(Var0.f_1), 10);
		}
		Global_97358.f_5944[Global_97358.f_5944.f_136 /*15*/] = { Var0 };
		Global_97358.f_5944.f_136++;
		iVar15 = 0;
		while (iVar15 < 3)
		{
			if (unk_0x94E72F17611BCD3C(iParam2, iVar15))
			{
				func_4(iVar15);
			}
			iVar15++;
		}
		return 1;
	}
	return 0;
}

void func_4(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_5(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_97358.f_5944.f_136)
	{
		if (unk_0x94E72F17611BCD3C(Global_97358.f_5944[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_97358.f_5944[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_97358.f_5944[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_97358.f_5944.f_764)
	{
		if (unk_0x94E72F17611BCD3C(Global_97358.f_5944.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_97358.f_5944.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_97358.f_5944.f_919[iParam0] = iVar1;
}

bool func_5(int iParam0)
{
	return iParam0 < 3;
}

int func_6(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

bool func_7(bool bParam0)
{
	if (!bParam0 && unk_0x7B47A371E2D93C2C(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x94E72F17611BCD3C(Global_68493, 0);
}

void func_8(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_13((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_97358.f_8448[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97358.f_8448[iParam0 /*12*/].f_6 == 11 || Global_97358.f_8448[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97358.f_8448[iParam0 /*12*/].f_5 = 1;
		Global_97358.f_8448[iParam0 /*12*/].f_10 = iParam1;
		Global_97358.f_8448[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0x21F0CE088EF06776(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0x21F0CE088EF06776(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0x21F0CE088EF06776(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_9();
	}
}

void func_9()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_97094 = 0;
	Global_97095 = 0;
	Global_97096 = 0;
	Global_97097 = 0;
	Global_97098 = 0;
	Global_97099 = 0;
	Global_97100 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97358.f_8448.f_3853;
	Global_97358.f_8448.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97358.f_8448[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97358.f_8448[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_97094++;
					fVar1 = (fVar1 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_97095++;
					fVar2 = (fVar2 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_97096++;
					fVar3 = (fVar3 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_97097++;
					fVar4 = (fVar4 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_97098++;
					fVar5 = (fVar5 + (Global_97358.f_8448[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_97099++;
					fVar6 = (fVar6 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_97100++;
					fVar7 = (fVar7 + Global_97358.f_8448[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_97077 > 0)
	{
		if (Global_97094 == Global_97077)
		{
			fVar1 = 55f;
		}
	}
	if (Global_97078 > 0)
	{
		if (Global_97095 == Global_97078)
		{
			fVar2 = 10f;
		}
	}
	if (Global_97079 > 0)
	{
		if (Global_97096 == Global_97079)
		{
			fVar3 = 0f;
		}
	}
	if (Global_97080 > 0)
	{
		if (Global_97097 == Global_97080)
		{
			fVar4 = 10f;
		}
	}
	if (Global_97081 > 0)
	{
		if (((Global_97098 == Global_97081 || (Global_97081 * 10 / Global_97098) < 41) || Global_97098 > Global_97084) || Global_97098 == Global_97084)
		{
			if (!unk_0x94E72F17611BCD3C(Global_97358.f_8448.f_3856, 14))
			{
				if (Global_97098 == Global_97081)
				{
					unk_0x21F0CE088EF06776(joaat("num_rndevents_completed"), Global_97081, 0);
					unk_0xEDB9A377CD8B7F03(&(Global_97358.f_8448.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_97082 > 0)
	{
		if (Global_97099 == Global_97082)
		{
			fVar6 = 15f;
		}
	}
	if (Global_97083 > 0)
	{
		if (Global_97100 == Global_97083)
		{
			fVar7 = 5f;
		}
	}
	Global_97358.f_8448.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_97098 > Global_97084 || Global_97098 == Global_97084)
	{
		iVar9 = Global_97084;
	}
	else
	{
		iVar9 = Global_97098;
	}
	unk_0xC46BDC34976E9532(joaat("num_missions_completed"), Global_97094, 1);
	unk_0xC46BDC34976E9532(joaat("num_missions_available"), Global_97077, 1);
	unk_0xC46BDC34976E9532(joaat("num_minigames_completed"), Global_97095, 1);
	unk_0xC46BDC34976E9532(joaat("num_minigames_available"), Global_97078, 1);
	unk_0xC46BDC34976E9532(joaat("num_oddjobs_completed"), Global_97096, 1);
	unk_0xC46BDC34976E9532(joaat("num_oddjobs_available"), Global_97079, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndpeople_completed"), Global_97097, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndpeople_available"), Global_97080, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0xC46BDC34976E9532(joaat("num_rndevents_available"), Global_97084, 1);
	unk_0xC46BDC34976E9532(joaat("num_misc_completed"), (Global_97100 + Global_97099), 1);
	unk_0xC46BDC34976E9532(joaat("num_misc_available"), (Global_97083 + Global_97082), 1);
	Global_97101 = (Global_97094 * 100 / Global_97077);
	Global_97103 = ((Global_97096 + Global_97095) * 100 / (Global_97079 + Global_97078));
	Global_97102 = ((Global_97097 + iVar9) * 100 / (Global_97080 + Global_97084));
	Global_97104 = ((Global_97099 + Global_97100) * 100 / (Global_97082 + Global_97083));
	unk_0xBCD0D59720958AE8(joaat("total_progress_made"), Global_97358.f_8448.f_3853, 1);
	unk_0xC46BDC34976E9532(joaat("percent_story_missions"), Global_97101, 1);
	unk_0xC46BDC34976E9532(joaat("percent_ambient_missions"), Global_97102, 1);
	unk_0xC46BDC34976E9532(joaat("percent_oddjobs"), Global_97103, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_97358.f_8448.f_3853))
	{
		func_12(13, unk_0xF34EE736CF047844(Global_97358.f_8448.f_3853));
	}
	if (!unk_0xE30896F28DC0733C())
	{
		if (!Global_68245)
		{
			if (func_11() == 2 == 0 && !unk_0x4B69FB3A5B09A1BA())
			{
				if (unk_0x7F7C75BD0BC3CD70())
				{
					Global_97092 = 0;
				}
				if (!Global_54750)
				{
					func_10();
				}
			}
		}
	}
}

int func_10()
{
	if (func_7(0))
	{
		return 0;
	}
	if (Global_90001.f_8)
	{
		if (Global_90001.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90001.f_10 > 1)
	{
		return 0;
	}
	Global_90001.f_10++;
	return 1;
}

int func_11()
{
	return Global_24444;
}

int func_12(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 61)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0xB52E39FB32049D7B(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x72E8D9153ACCB3F4(iParam0, iParam1);
	}
	return 0;
}

int func_13(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam2 == -1)
	{
		iParam2 = func_14();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x7565CDA85EDEC9B0((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xE2BC0DB4A5812A4A((iParam0 - 0)) * 64);
		iVar0 = unk_0xD231E78603975F31(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x7565CDA85EDEC9B0((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xE2BC0DB4A5812A4A((iParam0 - 192)) * 64);
		iVar0 = unk_0xD231E78603975F31(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x7565CDA85EDEC9B0((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xE2BC0DB4A5812A4A((iParam0 - 513)) * 64);
		iVar0 = unk_0xD231E78603975F31(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x7565CDA85EDEC9B0((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xE2BC0DB4A5812A4A((iParam0 - 705)) * 64);
		iVar0 = unk_0xD231E78603975F31(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x61264BB982D4A58A((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xE2BC0DB4A5812A4A((iParam0 - 3111)) * 64);
		iVar0 = unk_0xD231E78603975F31(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x61264BB982D4A58A((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xE2BC0DB4A5812A4A((iParam0 - 2919)) * 64);
		iVar0 = unk_0xD231E78603975F31(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4895 && iParam0 < 5023)
	{
		iVar8 = unk_0x35D7A57BD397F35B((iParam0 - 4895), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4895) - unk_0xE2BC0DB4A5812A4A((iParam0 - 4895)) * 64);
		iVar0 = unk_0xD231E78603975F31(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 5023 && iParam0 < 5087)
	{
		iVar9 = unk_0x35D7A57BD397F35B((iParam0 - 5023), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 5023) - unk_0xE2BC0DB4A5812A4A((iParam0 - 5023)) * 64);
		iVar0 = unk_0xD231E78603975F31(iVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_14()
{
	return Global_1312737;
}

void func_15(bool bParam0)
{
	if (bParam0)
	{
		Global_97358.f_12305.f_89 = 1;
	}
	else
	{
		Global_97358.f_12305.f_89 = 0;
	}
}

int func_16()
{
	if (unk_0x7B47A371E2D93C2C(joaat("apptrackify")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_17(int iParam0)
{
	if (iParam0 == 144 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97358.f_7341.f_99.f_58[iParam0];
}

int func_18(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	struct<3> Var2;
	struct<3> Var5;
	int iVar8;
	
	unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0());
	Var2 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) };
	iVar0 = 0;
	while (iVar0 < 1)
	{
		bVar1 = func_54(&(uParam0->f_1), uParam0->f_10);
		if (!(iParam1[uParam0->f_10 /*11*/])->f_10)
		{
			if (!bVar1)
			{
				if (!func_53((iParam1[uParam0->f_10 /*11*/])->f_6, 0f, 0f, 0f))
				{
					func_51(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 1, 0);
				}
				else
				{
					func_51(iParam1[uParam0->f_10 /*11*/], uParam0->f_7, joaat("pickup_custom_script"), 0, 0, 2);
				}
			}
		}
		else if (!bVar1)
		{
			func_36(uParam0, iParam1, Var2);
		}
		uParam0->f_10++;
		if (uParam0->f_10 >= *iParam1)
		{
			uParam0->f_10 = 0;
		}
		iVar0++;
	}
	if (uParam0->f_11)
	{
		if (!Global_68505)
		{
			func_26(&(uParam0->f_11), &(uParam0->f_12), &(uParam0->f_9), 5, &iLocal_388, &uLocal_386, "DIVING_TITLE", "DIVING_COLLECT");
		}
		if (!func_25(44))
		{
			Var5 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) };
			if (func_24(&Local_41, &Local_54, Var5, &iVar8))
			{
				if (unk_0x91EAD4F2F9B5B38A(func_23(iVar8), Var5, 0) > 200f)
				{
					func_20("DIVING_HELP4", 1, 7500, -1, 10000, 7, 0, 0, 0);
					func_19(44);
				}
			}
		}
	}
	if (!bLocal_406)
	{
		if (uParam0->f_1.f_4 >= uParam0->f_1.f_3)
		{
			bLocal_406 = func_3(1303349750, 1, 1, 16, 3, 1000, 10000, 1256519626, -1, 163, -1, 0);
		}
	}
	if (!uParam0->f_12 && !uParam0->f_11)
	{
		return uParam0->f_1.f_4 >= uParam0->f_1.f_3;
	}
	return 0;
}

void func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0xEDB9A377CD8B7F03(&(Global_97358.f_23635.f_150[iVar1]), iVar0);
	}
}

void func_20(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_21(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_21(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x6B08EC9A88700FBB(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_97358.f_23635.f_145)
	{
		if (unk_0x6B08EC9A88700FBB(&(Global_97358.f_23635[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97358.f_23635.f_145 < 9)
	{
		StringCopy(&(Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_4), sParam1, 16);
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_8 = (unk_0x17103F66FBB44C3C() + iParam3);
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_9 = iParam5;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_11 = iParam6;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_12 = uParam2;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_13 = iParam7;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_14 = iParam8;
		Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_10 = ((unk_0x17103F66FBB44C3C() + iParam3) + iParam4);
		}
		else
		{
			Global_97358.f_23635[Global_97358.f_23635.f_145 /*16*/].f_10 = -1;
		}
		Global_97358.f_23635.f_145++;
		func_22();
	}
}

void func_22()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97358.f_23635.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97358.f_23635.f_145)
	{
		if (unk_0x94E72F17611BCD3C(Global_97358.f_23635[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97358.f_23635[iVar0 /*16*/].f_12 > Global_97358.f_23635.f_146[0])
			{
				Global_97358.f_23635.f_146[0] = Global_97358.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x94E72F17611BCD3C(Global_97358.f_23635[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97358.f_23635[iVar0 /*16*/].f_12 > Global_97358.f_23635.f_146[1])
			{
				Global_97358.f_23635.f_146[1] = Global_97358.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x94E72F17611BCD3C(Global_97358.f_23635[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97358.f_23635[iVar0 /*16*/].f_12 > Global_97358.f_23635.f_146[2])
			{
				Global_97358.f_23635.f_146[2] = Global_97358.f_23635[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

Vector3 func_23(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1036.73f, 6735.72f, -100.52f;
			break;
		
		case 1:
			return -908.86f, 6655.98f, -34.35f;
			break;
		
		case 2:
			return -985.14f, 6697.71f, -41.57f;
			break;
		
		case 3:
			return 1825.73f, -2920.67f, -36.82f;
			break;
		
		case 4:
			return 1772.11f, -2967.72f, -46.81f;
			break;
		
		case 5:
			return 3198.59f, -385.05f, -31.49f;
			break;
		
		case 6:
			return 3170.43f, -302.21f, -25.99f;
			break;
		
		case 7:
			return 3157.44f, -268.54f, -28.07f;
			break;
		
		case 8:
			return -3180.2f, 3010.9f, -37.6f;
			break;
		
		case 9:
			return -3178.3f, 3044.86f, -39.96f;
			break;
		
		case 10:
			return 910.48f, -3471.21f, -17.57f;
			break;
		
		case 11:
			return 1338.76f, -3041.59f, -19.23f;
			break;
		
		case 12:
			return 1153.38f, -2864.51f, -18.96f;
			break;
		
		case 13:
			return 958.56f, -2847.78f, -22.05f;
			break;
		
		case 14:
			return 782.28f, -2872.81f, -9.577f;
			break;
		
		case 15:
			return 581.28f, -2471.5f, -9.44f;
			break;
		
		case 16:
			return 636.56f, -2214.49f, -7.87f;
			break;
		
		case 17:
			return 371.06f, -3226.67f, -19.6f;
			break;
		
		case 18:
			return 689.69f, -3451.07f, -27.85f;
			break;
		
		case 19:
			return 180.17f, -2255.91f, -2.54f;
			break;
		
		case 20:
			return -691.64f, -2836.86f, -15.67f;
			break;
		
		case 21:
			return -3397.5f, 3717.52f, -86.14f;
			break;
		
		case 22:
			return -3357.11f, 3710.79f, -96.14f;
			break;
		
		case 23:
			return -3282.21f, 3682.6f, -82.87f;
			break;
		
		case 24:
			return -3256.66f, 3672.29f, -35.06f;
			break;
		
		case 25:
			return -3142.19f, 3625.95f, -26.31f;
			break;
		
		case 26:
			return 3271.34f, 6420.78f, -50.78f;
			break;
		
		case 27:
			return 3237.83f, 6487.44f, -43.9f;
			break;
		
		case 28:
			return 1772.1f, -2997.12f, -50.44f;
			break;
		
		case 29:
			return 3207f, -415.17f, -32.01f;
			break;
	}
	return 0f, 0f, 0f;
}

bool func_24(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	iVar0 = 0;
	fVar1 = 0f;
	fVar2 = -1f;
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (!func_54(&(uParam0->f_1), iVar0))
		{
			fVar1 = unk_0xB7A628320EFF8E47(Param2, (iParam1[iVar0 /*11*/])->f_3);
			if (fVar2 == -1f || fVar1 < fVar2)
			{
				*iParam5 = iVar0;
				fVar2 = fVar1;
			}
		}
		iVar0++;
	}
	return *iParam5 != -1;
}

int func_25(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0x94E72F17611BCD3C(Global_97358.f_23635.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_26(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, char* sParam6, char* sParam7)
{
	var uVar0;
	
	func_35(0);
	if (*uParam0)
	{
		switch (*iParam4)
		{
			case 0:
				*uParam5 = unk_0xC97D787CE7726A2F("MIDSIZED_MESSAGE");
				if (unk_0x5E3461E729DA646E(*uParam5))
				{
					uVar0 = unk_0x50798E25F4813F2F();
					if (iParam3 == 6)
					{
						unk_0x86F4B3D6FF8F65DE(uVar0, "PEYOTE_COMPLETED", "HUD_AWARDS", 1);
					}
					else
					{
						unk_0x86F4B3D6FF8F65DE(uVar0, "COLLECTED", "HUD_AWARDS", 1);
					}
					*iParam4++;
				}
				break;
			
			case 1:
				unk_0x48F299599202B77A(*uParam5, "SHOW_SHARD_MIDSIZED_MESSAGE");
				unk_0x0F79C8080022554A(sParam6);
				unk_0xE6EC84BF3A7A64B6();
				unk_0x0F79C8080022554A(sParam7);
				unk_0x25585F3578FE81FC(func_28(iParam3));
				unk_0xE6EC84BF3A7A64B6();
				unk_0x7E86CE5F658823DB();
				*uParam2 = unk_0x17103F66FBB44C3C();
				*iParam4++;
				break;
			
			case 2:
				if ((unk_0x17103F66FBB44C3C() - *uParam2) > 7000)
				{
					unk_0x48F299599202B77A(*uParam5, "SHARD_ANIM_OUT");
					unk_0x4BD4D58838D3F8E5(1);
					unk_0xC4F81CF078CCB564(0.33f);
					unk_0x7E86CE5F658823DB();
					*iParam4++;
				}
				else if (!func_27())
				{
					if (unk_0x5E3461E729DA646E(*uParam5))
					{
						func_35(1);
						unk_0x10243718C63A4D3E(*uParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 3:
				if ((unk_0x17103F66FBB44C3C() - *uParam2) > 7500)
				{
					*iParam4++;
				}
				else if (!func_27())
				{
					if (unk_0x5E3461E729DA646E(*uParam5))
					{
						func_35(1);
						unk_0x10243718C63A4D3E(*uParam5, 100, 100, 100, 255, 0);
					}
				}
				break;
			
			case 4:
				if (unk_0x5E3461E729DA646E(*uParam5))
				{
					unk_0x76D57BAF1F432EA7(uParam5);
				}
				func_35(0);
				*uParam1 = 0;
				*uParam0 = 0;
				*iParam4 = 0;
				break;
			}
	}
}

int func_27()
{
	if (Global_68505)
	{
		return 1;
	}
	else if (Global_54744 && !Global_54750)
	{
		return 1;
	}
	return 0;
}

int func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 == 2)
	{
		iVar1 = 0;
		while (iVar1 < func_34(iParam0))
		{
			if (unk_0x94E72F17611BCD3C(Global_97358.f_8303.f_108, func_33(func_34(iParam0), iVar1)))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	else if (iParam0 == 6)
	{
		unk_0x39496A55977AA312(joaat("num_hidden_packages_5"), &iVar0, -1);
	}
	else if (iParam0 == 7)
	{
		unk_0x39496A55977AA312(joaat("num_hidden_packages_7"), &iVar0, -1);
	}
	else if (iParam0 == 8)
	{
		unk_0x39496A55977AA312(joaat("num_hidden_packages_6"), &iVar0, -1);
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < func_34(iParam0))
		{
			iVar2 = (func_32(iParam0) + iVar1);
			if (func_29(iVar2, -1, -1))
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	return iVar0;
}

int func_29(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	iVar1 = func_31(iParam0, iParam1);
	uVar2 = func_30(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x6132304E7C8C9267(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_30(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xE2BC0DB4A5812A4A((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xE2BC0DB4A5812A4A((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xE2BC0DB4A5812A4A((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xE2BC0DB4A5812A4A((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xE2BC0DB4A5812A4A((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xE2BC0DB4A5812A4A((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 5023 && iParam0 < 5087)
	{
		iVar0 = ((iParam0 - 5023) - unk_0xE2BC0DB4A5812A4A((iParam0 - 5023)) * 64);
	}
	else if (iParam0 >= 4895 && iParam0 < 5023)
	{
		iVar0 = ((iParam0 - 4895) - unk_0xE2BC0DB4A5812A4A((iParam0 - 4895)) * 64);
	}
	return iVar0;
}

int func_31(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_14();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x7565CDA85EDEC9B0((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x7565CDA85EDEC9B0((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x7565CDA85EDEC9B0((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x7565CDA85EDEC9B0((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x61264BB982D4A58A((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x61264BB982D4A58A((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 5023 && iParam0 < 5087)
	{
		iVar0 = unk_0x35D7A57BD397F35B((iParam0 - 5023), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4895 && iParam0 < 5023)
	{
		iVar0 = unk_0x35D7A57BD397F35B((iParam0 - 4895), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	return iVar0;
}

int func_32(int iParam0)
{
	if (iParam0 == 3)
	{
		return 815;
	}
	if (iParam0 == 5)
	{
		return 845;
	}
	if (iParam0 == 1)
	{
		return 705;
	}
	if (iParam0 == 0)
	{
		return 755;
	}
	return 805;
}

int func_33(int iParam0, int iParam1)
{
	if (iParam1 < 32)
	{
		return iParam1;
	}
	return (iParam0 - iParam1);
}

int func_34(int iParam0)
{
	if (iParam0 == 3)
	{
		return 30;
	}
	if (iParam0 == 1)
	{
		return 50;
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 4)
	{
		return 10;
	}
	if (iParam0 == 5)
	{
		return 30;
	}
	return 15;
}

void func_35(int iParam0)
{
	if (Global_68512 != iParam0)
	{
		Global_68512 = iParam0;
	}
}

int func_36(var uParam0, var uParam1, struct<3> Param2)
{
	int iVar0;
	
	iVar0 = uParam0->f_10;
	if ((uParam1[iVar0 /*11*/])->f_10)
	{
		if ((uParam1[iVar0 /*11*/])->f_1 != 0)
		{
			if (unk_0xB16891D2706A2EF7((uParam1[iVar0 /*11*/])->f_1) || func_49((uParam1[iVar0 /*11*/])->f_1))
			{
				func_39(uParam0, uParam1, iVar0);
				return 1;
			}
		}
	}
	if (unk_0x303D473D180EAA17((uParam1[iVar0 /*11*/])->f_1))
	{
		if ((unk_0xB7A628320EFF8E47(Param2, unk_0x2A4F10CF6F80EA9F((uParam1[iVar0 /*11*/])->f_1)) > (60f * 60f) || func_38(13)) || func_38(14))
		{
			func_37(&((uParam1[iVar0 /*11*/])->f_1));
			(uParam1[iVar0 /*11*/])->f_1 = 0;
			(uParam1[iVar0 /*11*/])->f_10 = 0;
		}
	}
	return 0;
}

void func_37(var uParam0)
{
	if (unk_0x303D473D180EAA17(*uParam0))
	{
		unk_0xCFEE915F16B66662(*uParam0);
	}
}

bool func_38(int iParam0)
{
	return Global_34913 == iParam0;
}

void func_39(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = (func_32(*uParam0) + iParam2);
	func_37(&((uParam1[iParam2 /*11*/])->f_1));
	func_48(&((uParam1[iParam2 /*11*/])->f_2));
	(uParam1[iParam2 /*11*/])->f_1 = 0;
	(uParam1[iParam2 /*11*/])->f_10 = 0;
	func_47(&(uParam0->f_1), iParam2, 1);
	if (*uParam0 == 1 || *uParam0 == 0)
	{
		func_46(*uParam0, iParam2, 1);
	}
	unk_0xA1571D45BF60560F(0, 200, 250);
	unk_0xDED50A15F91DE149(uParam0->f_6, 1f);
	if (bLocal_40)
	{
		func_45(&(uParam0->f_1), iParam2);
	}
	else
	{
		func_43(&(uParam0->f_1));
	}
	func_41();
	unk_0x78E58D286F477A12(iVar0);
	func_40(1, 0);
	func_10();
	uParam0->f_11 = 1;
}

void func_40(int iParam0, int iParam1)
{
	Global_90001.f_7 = iParam0;
	Global_90001.f_8 = iParam1;
}

void func_41()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = 0;
	unk_0x39496A55977AA312(func_42(0), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_12(18, iVar0);
	}
	unk_0x39496A55977AA312(func_42(1), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_12(19, iVar0);
	}
	unk_0x39496A55977AA312(func_42(3), &iVar0, -1);
	iVar1 = (iVar1 + iVar0);
	if (iVar0 > 0)
	{
		func_12(20, iVar0);
	}
	iVar2 = ((func_34(0) + func_34(1)) + func_34(3));
	if (iVar2 > 0)
	{
		iVar3 = (iVar1 * 100 / iVar2);
	}
	unk_0xC46BDC34976E9532(joaat("percent_hidden_packages"), iVar3, 1);
}

int func_42(int iParam0)
{
	if (iParam0 == 3)
	{
		return joaat("num_hidden_packages_3");
	}
	if (iParam0 == 1)
	{
		return joaat("num_hidden_packages_0");
	}
	if (iParam0 == 0)
	{
		return joaat("num_hidden_packages_1");
	}
	if (iParam0 == 5)
	{
		return joaat("num_hidden_packages_4");
	}
	return joaat("num_hidden_packages_2");
}

void func_43(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (uParam0->f_3 <= 0)
	{
	}
	if (uParam0->f_2 <= 0)
	{
	}
	if (bLocal_39)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (func_54(uParam0, iVar0))
		{
			iVar1++;
			func_13((uParam0->f_2 + iVar0), 1, -1, 1);
			if (bLocal_39)
			{
			}
		}
		iVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_39)
	{
	}
	if (iVar1 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_44(168, 0);
	}
}

void func_44(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_97358.f_6869[iParam0] = 1;
	Global_97358.f_6869.f_236[iParam0] = (unk_0x17103F66FBB44C3C() + iParam1);
}

void func_45(var uParam0, int iParam1)
{
	if (uParam0->f_3 <= 0)
	{
	}
	if (uParam0->f_2 <= 0)
	{
	}
	if (bLocal_39)
	{
	}
	if (iParam1 >= uParam0->f_3)
	{
	}
	if (func_54(uParam0, iParam1))
	{
		uParam0->f_4++;
		func_13((uParam0->f_2 + iParam1), 1, -1, 1);
		if (bLocal_39)
		{
		}
	}
	if (bLocal_39)
	{
	}
	if (uParam0->f_4 == uParam0->f_3 && uParam0->f_2 == 705)
	{
		func_44(168, 0);
	}
}

void func_46(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return;
	}
	if (iParam0 == 1)
	{
		if (iParam1 <= 31)
		{
			if (bParam2)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_8303.f_122), iParam1);
			}
			else
			{
				unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_8303.f_122), iParam1);
			}
			return;
		}
		if (bParam2)
		{
			unk_0xEDB9A377CD8B7F03(&(Global_97358.f_8303.f_122.f_1), (iParam1 - 32));
		}
		else
		{
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_8303.f_122.f_1), (iParam1 - 32));
		}
	}
	else if (iParam0 == 0)
	{
		if (iParam1 <= 31)
		{
			if (bParam2)
			{
				unk_0xEDB9A377CD8B7F03(&(Global_97358.f_8303.f_125), iParam1);
			}
			else
			{
				unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_8303.f_125), iParam1);
			}
			return;
		}
		if (bParam2)
		{
			unk_0xEDB9A377CD8B7F03(&(Global_97358.f_8303.f_125.f_1), (iParam1 - 32));
		}
		else
		{
			unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_8303.f_125.f_1), (iParam1 - 32));
		}
	}
}

void func_47(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return;
	}
	if (iParam1 <= 31)
	{
		if (bParam2)
		{
			unk_0xEDB9A377CD8B7F03(uParam0, iParam1);
		}
		else
		{
			unk_0xF76EE56D3E7DAF1B(uParam0, iParam1);
		}
		return;
	}
	if (bParam2)
	{
		unk_0xEDB9A377CD8B7F03(&(uParam0->f_1), (iParam1 - 32));
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&(uParam0->f_1), (iParam1 - 32));
	}
}

void func_48(var uParam0)
{
	if (unk_0x2E6E8D325977B3EC(*uParam0))
	{
		unk_0xD8EEE815F0120FCE(*uParam0, 0);
		unk_0x0451B5D93A4BDAA0(uParam0);
	}
}

int func_49(var uParam0)
{
	var uVar0;
	int iVar1;
	
	if (!unk_0x303D473D180EAA17(uParam0))
	{
		return 0;
	}
	if (func_50(unk_0x9F92518438215DD0()))
	{
		if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
		{
			uVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
			iVar1 = unk_0xB6A50C909A8FABC3(uVar0);
			if (iVar1 == joaat("submersible") || iVar1 == joaat("submersible2"))
			{
				if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), unk_0x2A4F10CF6F80EA9F(uParam0)) < (5f * 5f) || unk_0x30281E710B12FB9F(unk_0x9F92518438215DD0(), unk_0xDA11539EFDECDD36(uParam0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_50(var uParam0)
{
	if (unk_0x746960881FB19A89(uParam0))
	{
		if (!unk_0x0BA451447C3B1A8D(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_51(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	var uVar0;
	
	if (!uParam0->f_10)
	{
		if (!unk_0x3E0478C40AB5B38D(unk_0x9F92518438215DD0()))
		{
			if (!func_38(13) && !func_38(14))
			{
				if (!unk_0x303D473D180EAA17(uParam0->f_1))
				{
					if (unk_0xB7A628320EFF8E47(unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1), uParam0->f_3) <= (50f * 50f))
					{
						unk_0x3BC6D217451D6BB7(uParam1);
						while (!unk_0x149162179DBAEDB0(uParam1))
						{
							unk_0x3BC6D217451D6BB7(uParam1);
							unk_0x4EDE34FBADD967A6(0);
						}
						if (bParam3)
						{
							func_52(uParam0->f_3);
						}
						unk_0xFC90BEDEE248C76D(uParam0->f_3, 2.5f, 0, 0, 0, 0);
						if (bParam4)
						{
							unk_0xEDB9A377CD8B7F03(&uVar0, 1);
							uParam0->f_1 = unk_0xC4163BC5B413E6F6(joaat("pickup_custom_script"), uParam0->f_3, uParam0->f_6, uVar0, -1, iParam5, 1, uParam1);
						}
						else
						{
							unk_0xEDB9A377CD8B7F03(&uVar0, 3);
							unk_0xEDB9A377CD8B7F03(&uVar0, 4);
							unk_0xEDB9A377CD8B7F03(&uVar0, 8);
							unk_0xEDB9A377CD8B7F03(&uVar0, 1);
							uParam0->f_1 = unk_0xF8670CA33A75995A(iParam2, uParam0->f_3, uVar0, -1, 1, uParam1);
						}
						unk_0x0880E86251A44B7F(uParam1);
					}
				}
			}
			if (unk_0x303D473D180EAA17(uParam0->f_1))
			{
				uParam0->f_10 = 1;
			}
		}
	}
}

void func_52(struct<3> Param0)
{
	var uVar0;
	
	uVar0 = unk_0x8AE51093FA7FBE3F(Param0);
	if (unk_0xF67FA89DDC5D0BDC(uVar0))
	{
		unk_0x151286FE6ED20A12(uVar0);
		while (!unk_0x7CE60248D6135E74(uVar0))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x4EDE34FBADD967A6(0);
		unk_0xC70BF1179D8B6A50(uVar0);
	}
}

bool func_53(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_54(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 64)
	{
		return 0;
	}
	if (iParam1 <= 31)
	{
		return unk_0x94E72F17611BCD3C(*uParam0, iParam1);
	}
	return unk_0x94E72F17611BCD3C(uParam0->f_1, (iParam1 - 32));
}

void func_55()
{
	float fVar0;
	
	switch (iLocal_410)
	{
		case 0:
			if (func_62())
			{
				if (func_50(uLocal_408))
				{
					func_61();
					unk_0xF71B457C024DC47D(uLocal_408, 0);
					iLocal_410 = 1;
					if (iLocal_385 == 2)
					{
						func_2(3);
					}
				}
			}
			else if (func_50(uLocal_408) && func_50(unk_0x9F92518438215DD0()))
			{
				if (unk_0x5BFFEED2EB6664D5(unk_0x9F92518438215DD0()))
				{
					fVar0 = 500f;
				}
				else
				{
					fVar0 = 250f;
				}
				if (func_60(unk_0x9F92518438215DD0(), uLocal_408, 0) > fVar0)
				{
					func_59();
					if (iLocal_385 == 2)
					{
						func_2(3);
					}
				}
			}
			else
			{
				func_61();
				if (iLocal_385 == 2)
				{
					func_2(3);
				}
			}
			break;
		
		case 1:
			if (iLocal_385 == 2)
			{
				func_2(3);
			}
			if (!func_62())
			{
				if (func_50(uLocal_408))
				{
					if (!unk_0x2E6E8D325977B3EC(uLocal_409))
					{
						uLocal_409 = func_56(uLocal_408, 0, 0);
					}
					unk_0x6FD45FA39DD18625(uLocal_408, 0, 1);
					if (unk_0x567194A60F82D51A(unk_0xB6A50C909A8FABC3(uLocal_408)))
					{
						if (!unk_0x7F55198EDB8C65EC(uLocal_408))
						{
							unk_0xF71B457C024DC47D(uLocal_408, 1);
						}
					}
					iLocal_410 = 0;
				}
			}
			break;
	}
}

int func_56(var uParam0, bool bParam1, bool bParam2)
{
	return func_57(uParam0, !bParam1, bParam2);
}

int func_57(var uParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x746960881FB19A89(uParam0))
	{
		return 0;
	}
	uVar0 = unk_0x5304FE8A2CED6AE8(uParam0);
	if (unk_0x2B1914308D0376C8(uParam0))
	{
		unk_0xD4916ED85412C8D9(uVar0, func_58(unk_0x4B69FB3A5B09A1BA(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xFEE42298F5E238BE(uVar0, bParam1);
		}
		else
		{
			unk_0x016722B6E0559A9A(uVar0, 2);
		}
	}
	else if (unk_0x4E178F5D4155391A(uParam0))
	{
		unk_0xD4916ED85412C8D9(uVar0, func_58(unk_0x4B69FB3A5B09A1BA(), 0.7f, 0.7f));
		unk_0xFEE42298F5E238BE(uVar0, bParam1);
	}
	else if (unk_0xA6C29CC20CD3DCB4(uParam0))
	{
		unk_0xD4916ED85412C8D9(uVar0, func_58(unk_0x4B69FB3A5B09A1BA(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_58(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_59()
{
	func_61();
	if (func_50(uLocal_408))
	{
		if (unk_0x567194A60F82D51A(unk_0xB6A50C909A8FABC3(uLocal_408)))
		{
			unk_0xF71B457C024DC47D(uLocal_408, 0);
		}
		unk_0x98EB8368EBC56829(uLocal_408, 0);
		if (unk_0x34E74FF8690AA4B1(uLocal_408))
		{
			unk_0x9187463EB4918A4D(&uLocal_408);
		}
	}
}

float func_60(var uParam0, var uParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x0BA451447C3B1A8D(uParam0))
	{
		Var0 = { unk_0x77009B1C011405A9(uParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x77009B1C011405A9(uParam0, 0) };
	}
	if (!unk_0x0BA451447C3B1A8D(uParam1))
	{
		Var3 = { unk_0x77009B1C011405A9(uParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x77009B1C011405A9(uParam1, 0) };
	}
	return unk_0x91EAD4F2F9B5B38A(Var0, Var3, iParam2);
}

void func_61()
{
	if (unk_0x2E6E8D325977B3EC(uLocal_409))
	{
		unk_0x0451B5D93A4BDAA0(&uLocal_409);
	}
}

int func_62()
{
	if (func_50(unk_0x9F92518438215DD0()))
	{
		if (func_50(uLocal_408))
		{
			if (unk_0x44E080690DA76A2A(unk_0x9F92518438215DD0(), uLocal_408, 0))
			{
				return 1;
			}
		}
		else if (func_63())
		{
			uLocal_408 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
			if (unk_0x746960881FB19A89(uLocal_408))
			{
				unk_0x336AE92FD68DEF98(uLocal_408, 1, 1);
				unk_0x98EB8368EBC56829(uLocal_408, 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_63()
{
	var uVar0;
	
	if (unk_0x827151D7B70CB853(unk_0x9F92518438215DD0(), 0))
	{
		uVar0 = unk_0x1161215F69587BDA(unk_0x9F92518438215DD0(), 0);
		if (unk_0x746960881FB19A89(uVar0))
		{
			if (unk_0xB6A50C909A8FABC3(uVar0) == joaat("dinghy") || unk_0xB6A50C909A8FABC3(uVar0) == joaat("dinghy2"))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_64()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	int iVar7;
	
	Var0 = { unk_0x77009B1C011405A9(unk_0x9F92518438215DD0(), 1) };
	if (func_24(&Local_41, &Local_54, Var0, &iLocal_387))
	{
		Var3 = { func_23(iLocal_387) };
		fVar6 = unk_0x91EAD4F2F9B5B38A(Var3, Var0, 0);
		if (fVar6 > 200f)
		{
			func_66();
			if (!iLocal_405)
			{
				iLocal_405 = 1;
			}
			if (func_63())
			{
				if (!func_25(41))
				{
					func_20("DIVING_HELP1", 1, 0, -1, 10000, 7, 0, 0, 0);
					func_19(41);
				}
				if (iLocal_387 != iLocal_390)
				{
					if (unk_0x2E6E8D325977B3EC(uLocal_389))
					{
						unk_0x0451B5D93A4BDAA0(&uLocal_389);
					}
				}
				if (!unk_0x2E6E8D325977B3EC(uLocal_389))
				{
					uLocal_389 = unk_0x08E544BD3FF6AB64(Var3, 200f);
					unk_0xFBF7E9E330FE936E(uLocal_389, 128);
					unk_0x016722B6E0559A9A(uLocal_389, 2);
					unk_0x64CF07D8ED395F1B(uLocal_389, 0);
					unk_0x2A8C2BEEA4F7041F(uLocal_389, "B_WRE");
					unk_0x49101D6A0E39441B(uLocal_389, 0);
					iLocal_390 = iLocal_387;
				}
			}
			else if (unk_0x2E6E8D325977B3EC(uLocal_389))
			{
				unk_0x0451B5D93A4BDAA0(&uLocal_389);
			}
		}
		else
		{
			if (func_63())
			{
				if (!func_25(42))
				{
					func_20("DIVING_HELP2", 1, 0, -1, 10000, 7, 0, 0, 0);
					func_19(42);
				}
			}
			if (func_25(42))
			{
				if (!func_25(43))
				{
					if (unk_0x5BFFEED2EB6664D5(unk_0x9F92518438215DD0()) && !unk_0x02616AAC1A02E70E(unk_0x9F92518438215DD0()))
					{
						func_20("DIVING_HELP3", 1, 2000, -1, 10000, 7, 0, 0, 0);
						func_19(43);
					}
				}
			}
			if (unk_0x2E6E8D325977B3EC(uLocal_389))
			{
				unk_0x0451B5D93A4BDAA0(&uLocal_389);
			}
			if (iLocal_387 != iLocal_390)
			{
				func_66();
				iLocal_390 = iLocal_387;
				iLocal_405 = 1;
			}
			if (Local_41.f_1.f_4 < Local_41.f_1.f_3)
			{
				if (iLocal_405)
				{
					fLocal_402 = 0f;
					fLocal_403 = fVar6;
					if (func_63())
					{
						fLocal_403 = func_65(fLocal_403, 20f, 200f);
					}
					else
					{
						fLocal_403 = func_65(fLocal_403, 10f, 200f);
					}
					fLocal_404 = (fLocal_403 * 0.025f);
					iLocal_405 = 0;
					if (func_63())
					{
						unk_0x6687E59C6A0BB305(uLocal_407, "SINGLE_BLIP_FROM_BOAT", Var3, "ABIGAIL_SONAR_SOUNDSET", 0, 0, 0);
					}
					else
					{
						unk_0x6687E59C6A0BB305(uLocal_407, "SCRIPT_TRIGGERED_FROM_PROP", Var0, "ABIGAIL_SONAR_SOUNDSET", 0, 0, 0);
					}
				}
				else
				{
					fLocal_402 = (fLocal_402 + fLocal_404);
					fLocal_402 = func_65(fLocal_402, 0f, fLocal_403);
					if (!unk_0x2E6E8D325977B3EC(uLocal_391))
					{
						uLocal_391 = unk_0x08E544BD3FF6AB64(Var3, fLocal_402);
						unk_0xFBF7E9E330FE936E(uLocal_391, 255);
						unk_0x016722B6E0559A9A(uLocal_391, 4);
						unk_0xA4D5863487F4E816(uLocal_391, 1);
						unk_0xCED452E84000C137(uLocal_391, 1);
						unk_0x49101D6A0E39441B(uLocal_391, 0);
					}
					else
					{
						unk_0xD4916ED85412C8D9(uLocal_391, fLocal_402);
					}
					iVar7 = 0;
					if (func_63())
					{
						iVar7 = 0;
						while (iVar7 <= 3)
						{
							if (!unk_0x2E6E8D325977B3EC(uLocal_392[iVar7]))
							{
								uLocal_392[iVar7] = unk_0x08E544BD3FF6AB64(Var3, (fLocal_402 + fLocal_397[iVar7]));
								unk_0xFBF7E9E330FE936E(uLocal_392[iVar7], 255);
								unk_0x016722B6E0559A9A(uLocal_392[iVar7], 4);
								unk_0xA4D5863487F4E816(uLocal_392[iVar7], 1);
								unk_0xCED452E84000C137(uLocal_392[iVar7], 1);
								unk_0x49101D6A0E39441B(uLocal_392[iVar7], 0);
							}
							else
							{
								unk_0xD4916ED85412C8D9(uLocal_392[iVar7], (fLocal_402 + fLocal_397[iVar7]));
							}
							iVar7++;
						}
					}
					else
					{
						iVar7 = 0;
						while (iVar7 <= 3)
						{
							if (unk_0x2E6E8D325977B3EC(uLocal_392[iVar7]))
							{
								unk_0xD4916ED85412C8D9(uLocal_392[iVar7], fLocal_402);
							}
							iVar7++;
						}
					}
					if (fLocal_402 >= fLocal_403)
					{
						iLocal_405 = 1;
					}
				}
			}
			else
			{
				func_66();
			}
		}
	}
}

float func_65(float fParam0, float fParam1, float fParam2)
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

void func_66()
{
	int iVar0;
	
	if (unk_0x2E6E8D325977B3EC(uLocal_391))
	{
		unk_0x0451B5D93A4BDAA0(&uLocal_391);
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (unk_0x2E6E8D325977B3EC(uLocal_392[iVar0]))
		{
			unk_0x0451B5D93A4BDAA0(&(uLocal_392[iVar0]));
		}
		iVar0++;
	}
}

void func_67()
{
	iLocal_388 = 0;
	if (func_62())
	{
		iLocal_410 = 1;
	}
	else
	{
		iLocal_410 = 0;
	}
	func_71();
	func_70(&Local_41, 5, joaat("prop_sub_chunk_01"), "DIVING_COLLECT");
	func_68(&Local_41, joaat("num_hidden_packages_4"), 845, 30);
	func_2(1);
	fLocal_397[0] = 0.25f;
	fLocal_397[1] = 0.5f;
	fLocal_397[2] = 0.75f;
	fLocal_397[3] = 1f;
}

void func_68(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_6 = iParam1;
	func_69(&(uParam0->f_1), iParam2, iParam3);
}

void func_69(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = uParam1;
	uParam0->f_3 = uParam2;
	if (bLocal_39)
	{
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (func_29((uParam0->f_2 + iVar0), -1, -1))
		{
			iVar1++;
			func_47(uParam0, iVar0, 1);
			if (bLocal_39)
			{
			}
		}
		iVar0++;
	}
	uParam0->f_4 = iVar1;
	if (bLocal_39)
	{
	}
}

void func_70(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	*uParam0 = iParam1;
	uParam0->f_7 = iParam2;
	uParam0->f_8 = sParam3;
	uParam0->f_10 = 0;
}

void func_71()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Local_54[iVar0 /*11*/].f_3 = { func_23(iVar0) };
		Local_54[iVar0 /*11*/].f_10 = 0;
		iVar0++;
	}
	Local_54[0 /*11*/].f_6 = { -16.4f, 78.53f, -146.67f };
	Local_54[1 /*11*/].f_6 = { 0f, 45f, 10f };
	Local_54[2 /*11*/].f_6 = { 0.72f, 65.2f, -50.26f };
	Local_54[3 /*11*/].f_6 = { 0f, 15f, -132.16f };
	Local_54[4 /*11*/].f_6 = { 166.37f, -40f, 168.81f };
	Local_54[5 /*11*/].f_6 = { 90f, 56.2f, 90f };
	Local_54[6 /*11*/].f_6 = { -20f, 0f, 89.95f };
	Local_54[7 /*11*/].f_6 = { 4.08f, 54.9f, -65.35f };
	Local_54[8 /*11*/].f_6 = { 174.15f, -58.2f, -144.66f };
	Local_54[9 /*11*/].f_6 = { -28.22f, 36.11f, -90.22f };
	Local_54[10 /*11*/].f_6 = { -5f, 44f, 65f };
	Local_54[11 /*11*/].f_6 = { 0f, -108f, 45.36f };
	Local_54[12 /*11*/].f_6 = { -10.9f, 43.12f, 131.52f };
	Local_54[13 /*11*/].f_6 = { 12.37f, 49.66f, 126.88f };
	Local_54[14 /*11*/].f_6 = { 4.35f, 10.22f, 27.51f };
	Local_54[15 /*11*/].f_6 = { 0f, 10f, 60.73f };
	Local_54[16 /*11*/].f_6 = { 150.56f, -78.67f, -174.35f };
	Local_54[17 /*11*/].f_6 = { 0f, 50f, 46.41f };
	Local_54[18 /*11*/].f_6 = { 6.26f, 44.65f, 8.88f };
	Local_54[19 /*11*/].f_6 = { 90f, 78.5f, 16.04f };
	Local_54[20 /*11*/].f_6 = { -1.36f, 6.53f, -70.94f };
	Local_54[21 /*11*/].f_6 = { -61.86f, 78.61f, 126.5f };
	Local_54[22 /*11*/].f_6 = { -10f, -80.71f, 69.7f };
	Local_54[23 /*11*/].f_6 = { -76.43f, -70.02f, 29.74f };
	Local_54[24 /*11*/].f_6 = { -28f, -70f, 107.53f };
	Local_54[25 /*11*/].f_6 = { 4.19f, 6.46f, 110.43f };
	Local_54[26 /*11*/].f_6 = { -3.19f, 60.6f, 25f };
	Local_54[27 /*11*/].f_6 = { 0f, -81.68f, -20.16f };
	Local_54[28 /*11*/].f_6 = { 7.39f, 44.52f, 19.65f };
	Local_54[29 /*11*/].f_6 = { 89.74f, 80.95f, 151.74f };
}

bool func_72(var uParam0)
{
	if (!unk_0x746960881FB19A89(uParam0))
	{
		return 0;
	}
	return !unk_0x0BA451447C3B1A8D(uParam0);
}

int func_73(int iParam0)
{
	if (Global_34913 == 15)
	{
		return 0;
	}
	if (func_74(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_74(int iParam0)
{
	return func_75(iParam0, Global_34913);
}

int func_75(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0x94E72F17611BCD3C(Global_97358.f_7341.f_99.f_217[iVar0], iVar1))
	{
		return 0;
	}
	unk_0xEDB9A377CD8B7F03(&(Global_97358.f_7341.f_99.f_217[iVar0]), iVar1);
	return 1;
}

void func_77(bool bParam0)
{
	int iVar0;
	
	if (unk_0x2E6E8D325977B3EC(uLocal_389))
	{
		unk_0x0451B5D93A4BDAA0(&uLocal_389);
	}
	func_66();
	if (!unk_0x38DBC7C4442DA796(uLocal_407))
	{
		unk_0xC4370267C511F8E7(uLocal_407);
	}
	func_59();
	iVar0 = 0;
	while (iVar0 < Local_54.f_0)
	{
		func_48(&(Local_54[iVar0 /*11*/].f_2));
		func_37(&(Local_54[iVar0 /*11*/].f_1));
		Local_54[iVar0 /*11*/].f_1 = 0;
		iVar0++;
	}
	if (bParam0)
	{
		if (func_79(&(Local_41.f_1)) || func_17(110) == 1)
		{
			func_78(27);
		}
		unk_0x0880E86251A44B7F(Local_41.f_7);
		unk_0xE60DEFFB2A853900();
	}
	else
	{
		iLocal_385 = 0;
	}
}

int func_78(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (unk_0x94E72F17611BCD3C(Global_97358.f_7341.f_99.f_217[iVar0], iVar1))
	{
		unk_0xF76EE56D3E7DAF1B(&(Global_97358.f_7341.f_99.f_217[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

bool func_79(var uParam0)
{
	if (uParam0->f_3 <= 0)
	{
	}
	return uParam0->f_4 >= uParam0->f_3;
}

