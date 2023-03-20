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
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	float fLocal_46 = 0f;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 8;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 2;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 8;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 8;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	int iLocal_88 = 0;
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
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	fLocal_27 = 0f;
	fLocal_31 = -0.0375f;
	fLocal_32 = 0.17f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_46 = ((0.05f + 0.275f) - 0.01f);
	if (unk_0x8D841F1DD3FA555F(34))
	{
		unk_0xC23A229F78DAD92A();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_129();
		func_1();
	}
}

void func_1()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	if (unk_0x98465343DD18A1F7())
	{
		iVar2 = 0;
		while (iVar2 < unk_0x8D411F45C0269899(1))
		{
			iVar7 = unk_0xE22864B8883341B7(1, iVar2);
			switch (iVar7)
			{
				case 186:
					func_126();
					break;
				
				case 187:
					func_125();
					break;
				
				case 188:
					func_119(iVar2);
					break;
				
				case 189:
					func_118(iVar2);
					break;
				
				case 190:
					func_109(iVar2);
					break;
				
				case 208:
					func_3(iVar2);
					break;
			}
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < unk_0x8D411F45C0269899(0))
	{
		iVar0 = unk_0xE22864B8883341B7(0, iVar2);
		iLocal_88 = 1;
		switch (iVar0)
		{
			case 139:
				unk_0xDC8C46445C29336D(0, iVar2, &uVar1, 1);
				if (unk_0x86CCCD2FAE9D5E65(uVar1))
				{
					if (unk_0xCF8AA94BAD0F766A(uVar1))
					{
						if (func_2(iVar3))
						{
							Global_47654.f_1[iVar3] = uVar1;
							iVar3++;
						}
					}
					else if (unk_0xCF0C46D719D5302C(uVar1))
					{
						if (func_2(iVar5))
						{
							Global_47654.f_25[iVar5] = uVar1;
							iVar5++;
						}
					}
				}
				break;
			
			case 140:
				unk_0xDC8C46445C29336D(0, iVar2, &uVar1, 1);
				if (unk_0x86CCCD2FAE9D5E65(uVar1))
				{
					if (unk_0xCF8AA94BAD0F766A(uVar1))
					{
						if (func_2(iVar4))
						{
							Global_47654.f_13[iVar4] = uVar1;
							iVar4++;
						}
					}
					else if (unk_0xCF0C46D719D5302C(uVar1))
					{
						if (func_2(iVar6))
						{
							Global_47654.f_37[iVar6] = uVar1;
							iVar6++;
						}
					}
				}
				break;
		}
		iVar2++;
	}
	Global_47654 = iVar3;
	Global_47654.f_12 = iVar4;
	Global_47654.f_24 = iVar5;
	Global_47654.f_36 = iVar6;
}

bool func_2(int iParam0)
{
	return iParam0 < 10;
}

void func_3(int iParam0)
{
	struct<39> Var0;
	int iVar39;
	
	if (unk_0xDC8C46445C29336D(1, iParam0, &Var0, 39))
	{
		iVar39 = unk_0x1231A0610F1D884F(Var0.f_38);
		if (iVar39 >= 0 && iVar39 < unk_0x06BDBDC3FFA42807())
		{
			if (unk_0x415D1741DEFDD9B1(iVar39) || unk_0xD6FFEA81E4F42457(iVar39))
			{
				if (unk_0xD6FFEA81E4F42457(iVar39))
				{
					func_55(iVar39);
				}
				else
				{
					unk_0x030B38D268D23D87(iVar39);
				}
				func_54(Var0.f_37, -1);
			}
			else if (func_47())
			{
				func_4(Var0.f_29, Var0, Var0.f_38, Var0.f_16, Var0.f_35, Var0.f_36);
			}
		}
	}
}

int func_4(struct<6> Param0, struct<16> Param6, var uParam22, struct<13> Param23, var uParam36, int iParam37)
{
	bool bVar0;
	bool bVar1;
	struct<16> Var2;
	int iVar18;
	var uVar19;
	int iVar20;
	int iVar21;
	struct<10> Var22;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	struct<16> Var36;
	struct<16> Var52;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	var uVar74;
	bool bVar75;
	bool bVar76;
	bool bVar77;
	bool bVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	
	bVar0 = false;
	if (iParam37 >= 1000000)
	{
		iParam37 = (iParam37 - 1000000);
		bVar0 = true;
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_46())
		{
			func_45(uParam22);
			return 0;
		}
		if (func_44())
		{
			func_45(uParam22);
			return 0;
		}
	}
	if (!unk_0x1C6DF6AD69BE853E())
	{
		if (bVar0)
		{
		}
		else if (!unk_0x5762EE910D467202(&Param23))
		{
			func_45(uParam22);
			return 0;
		}
		if (Global_14337)
		{
			func_45(uParam22);
			return 0;
		}
		bVar1 = true;
		if (!func_43())
		{
			if (!func_42(0))
			{
				if (bVar1)
				{
					func_45(uParam22);
					return 0;
				}
			}
		}
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		if (!func_41(unk_0x1329891157A54C63()))
		{
			func_45(uParam22);
			return 0;
		}
	}
	if (unk_0xB318FDA0D1ABDB20(&Param6))
	{
		func_45(uParam22);
		return 0;
	}
	if (unk_0xB318FDA0D1ABDB20(&Param0))
	{
		func_45(uParam22);
		return 0;
	}
	Var2 = { Param6 };
	iVar18 = func_40(Var2);
	if (iVar18 != -1)
	{
		func_37(iVar18);
	}
	uVar19 = unk_0x1231A0610F1D884F(uParam22);
	iVar20 = unk_0x1F1EB183D889F794(uVar19);
	iVar21 = 0;
	iVar21 = 0;
	while (iVar21 <= 11)
	{
		if (iVar20 == Global_2394854[iVar21 /*4*/].f_3 && unk_0x48E480685981C7D4() < Global_2394854[iVar21 /*4*/].f_2)
		{
			Global_2394854[iVar21 /*4*/].f_2 = unk_0x48E480685981C7D4() + 30000;
			iVar21 = 12;
			func_45(uParam22);
			return 0;
		}
		iVar21++;
	}
	Var22.f_1 = -1;
	Var22.f_2 = -1;
	Var22.f_9 = -1;
	func_36(&Var22);
	iVar32 = 0;
	iVar33 = 0;
	iVar34 = 63;
	iVar35 = 0;
	StringCopy(&Var36, "", 64);
	StringCopy(&Var52, "", 64);
	iVar68 = 0;
	iVar69 = 0;
	iVar70 = 0;
	iVar71 = 1;
	iVar72 = 0;
	iVar73 = 0;
	if (func_35(&Param0, &iVar32, &iVar35))
	{
		iVar34 = 40;
		iVar69 = 0;
		iVar35 = iVar35;
	}
	else if (func_33(&Param0, &Var22, 0))
	{
		iVar34 = Var22.f_2;
		iVar32 = func_32(iVar34, Var22.f_1);
		iVar33 = func_31(&Var22);
		Var36 = { func_30(&Var22, 0) };
		Var52 = { func_29(&Var22) };
		iVar69 = 1;
		iVar68 = func_28(&Var22, 0);
		iVar73 = func_27(&Var22);
		uVar74 = func_25(&Var22);
		bVar75 = func_20(&Var22);
		if (!bVar75)
		{
			iVar72 = 1;
		}
	}
	else
	{
		bVar76 = false;
		if (func_18(unk_0x1329891157A54C63()))
		{
			if (!unk_0x1C6DF6AD69BE853E())
			{
				bVar76 = true;
			}
			else
			{
				func_45(uParam22);
				if ((unk_0x9800AF1CCAFA4639() || unk_0x211AF631627DE2C5()) && !unk_0x1C6DF6AD69BE853E())
				{
					func_17();
				}
				else
				{
					func_15(0);
				}
				return 0;
			}
		}
		if (!bVar76)
		{
			if (func_13(unk_0x1329891157A54C63()))
			{
				func_45(uParam22);
				func_15(0);
				return 0;
			}
		}
		if (!func_12())
		{
			func_45(uParam22);
			bVar77 = true;
			func_15(bVar77);
			return 0;
		}
		bVar78 = false;
		if (!bVar76)
		{
			if (func_7(Param23, &bVar78))
			{
				func_45(uParam22);
				func_15(bVar78);
				return 0;
			}
		}
		iVar70 = 1;
		iVar71 = 0;
		iVar69 = 1;
	}
	iVar79 = Global_1343321;
	if (iVar79 >= 12)
	{
		iVar79 = (iVar79 - 1);
	}
	iVar80 = (iVar79 - 1);
	while (iVar80 >= 0)
	{
		Global_2392903[iVar79 /*97*/] = { Global_2392903[iVar80 /*97*/] };
		iVar79 = (iVar79 - 1);
		iVar80 = (iVar80 - 1);
	}
	Global_1343321++;
	if (Global_1343321 > 12)
	{
		Global_1343321 = 12;
	}
	iVar81 = 0;
	Global_2392903[iVar81 /*97*/] = 0;
	Global_2392903[iVar81 /*97*/].f_1 = 0;
	Global_2392903[iVar81 /*97*/].f_5 = 0;
	Global_2392903[iVar81 /*97*/].f_2 = iVar70;
	Global_2392903[iVar81 /*97*/].f_3 = 0;
	Global_2392903[iVar81 /*97*/].f_4 = iVar71;
	Global_2392903[iVar81 /*97*/].f_6 = { Param0 };
	Global_2392903[iVar81 /*97*/].f_12 = uVar74;
	Global_2392903[iVar81 /*97*/].f_13 = { Param6 };
	StringCopy(&(Global_2392903[iVar81 /*97*/].f_29), "", 64);
	Global_2392903[iVar81 /*97*/].f_47 = iVar34;
	Global_2392903[iVar81 /*97*/].f_48 = iVar32;
	Global_2392903[iVar81 /*97*/].f_49 = iVar33;
	Global_2392903[iVar81 /*97*/].f_89 = uParam22;
	Global_2392903[iVar81 /*97*/].f_55 = { Var36 };
	Global_2392903[iVar81 /*97*/].f_71 = { Var52 };
	Global_2392903[iVar81 /*97*/].f_50 = iVar68;
	Global_2392903[iVar81 /*97*/].f_51 = 0;
	Global_2392903[iVar81 /*97*/].f_51.f_1 = 0;
	Global_2392903[iVar81 /*97*/].f_51.f_2 = 0;
	Global_2392903[iVar81 /*97*/].f_54 = iVar69;
	Global_2392903[iVar81 /*97*/].f_88 = uParam36;
	Global_2392903[iVar81 /*97*/].f_90 = -1;
	Global_2392903[iVar81 /*97*/].f_91 = iVar72;
	Global_2392903[iVar81 /*97*/].f_92 = Global_2394906;
	Global_2392903[iVar81 /*97*/].f_93 = iVar73;
	Global_2392903[iVar81 /*97*/].f_96 = unk_0x5762EE910D467202(&Param23);
	if (Global_2392903[iVar81 /*97*/].f_48 == 0)
	{
		if (Global_2392903[iVar81 /*97*/].f_49 == 1)
		{
			Global_2392903[iVar81 /*97*/].f_54 = 0;
		}
	}
	Global_2392903[iVar81 /*97*/].f_94 = func_6(Param23, iVar81);
	Global_2392903[iVar81 /*97*/].f_95 = 0;
	Global_2392903[iVar81 /*97*/].f_87 = iParam37;
	Global_2394906++;
	Global_2392903[iVar81 /*97*/].f_45 = func_5(Param23);
	if (Global_2392903[iVar81 /*97*/].f_45 != -1)
	{
		Global_2392903[iVar81 /*97*/].f_46 = unk_0x48E480685981C7D4() + 15000;
	}
	return 1;
}

int func_5(struct<13> Param0)
{
	struct<13> Var0[1];
	int iVar14;
	
	if (!unk_0x3F0C224D3CC05EF2())
	{
		return -1;
	}
	Var0[0 /*13*/] = { Param0 };
	iVar14 = unk_0x02B93FDF330D4E8B(&Var0, 1);
	if (iVar14 < 0)
	{
		return -1;
	}
	return iVar14;
}

int func_6(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	if (!unk_0x5762EE910D467202(&uParam0))
	{
		return 0;
	}
	if (Global_2392903[iParam13 /*97*/].f_88 > 0)
	{
		return 0;
	}
	return 1;
}

int func_7(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	struct<13> Var0;
	
	*iParam13 = 0;
	if (func_11(0))
	{
		return 0;
	}
	if (unk_0x3F0C224D3CC05EF2())
	{
		if (!func_10())
		{
			*iParam13 = 1;
			return 1;
		}
	}
	if (!func_9(1))
	{
		return 1;
	}
	Var0 = { func_8(unk_0x1329891157A54C63()) };
	if (!unk_0x4F493F24AAFFC673(&Var0, &uParam0))
	{
		if (!unk_0x5762EE910D467202(&uParam0))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_8(int iParam0)
{
	struct<13> Var0;
	
	unk_0x73231AB7B8BD1CD1(iParam0, &Var0, 13);
	return Var0;
}

int func_9(int iParam0)
{
	if (unk_0x211AF631627DE2C5() || (unk_0xEC209B562C5EFDB2() && iParam0 == 0))
	{
		if (unk_0xBEC1291D6B41868E(1) == 0 || unk_0xB37B5777B142DAF2(1, 0) == 0)
		{
			return 0;
		}
	}
	else if (unk_0xBEC1291D6B41868E(1) == 0)
	{
		return 0;
	}
	if (func_10() == 0)
	{
		return 0;
	}
	return 1;
}

int func_10()
{
	if (unk_0x211AF631627DE2C5() && unk_0x90D70709D2558B5A())
	{
		return 1;
	}
	if (unk_0x9800AF1CCAFA4639() && unk_0x90D70709D2558B5A())
	{
		return 1;
	}
	if ((unk_0xEC209B562C5EFDB2() && unk_0x145838334F50DC33() == 0) && unk_0x90D70709D2558B5A())
	{
		return 1;
	}
	if (unk_0x3F0C224D3CC05EF2() && unk_0x90D70709D2558B5A())
	{
		return 1;
	}
	if (unk_0x913B1C01C1BA6C6F() && unk_0x90D70709D2558B5A())
	{
		return 1;
	}
	return 0;
}

int func_11(int iParam0)
{
	if (unk_0x211AF631627DE2C5() || (unk_0xEC209B562C5EFDB2() && iParam0 == 0))
	{
		if (unk_0xBEC1291D6B41868E(0) == 0 || unk_0xB37B5777B142DAF2(0, 0) == 0)
		{
			return 0;
		}
	}
	else if (unk_0xBEC1291D6B41868E(0) == 0)
	{
		return 0;
	}
	if (func_10() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_12()
{
	if (!unk_0x9800AF1CCAFA4639())
	{
		return 1;
	}
	return unk_0x90D70709D2558B5A();
}

int func_13(int iParam0)
{
	if (!func_14(iParam0))
	{
		if (!unk_0xBEC1291D6B41868E(0))
		{
			if (!unk_0xBEC1291D6B41868E(1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_14(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 62:
		case 61:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

void func_15(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		if (!unk_0x9800AF1CCAFA4639())
		{
			return;
		}
	}
	iVar0 = unk_0x48E480685981C7D4();
	if (iVar0 < Global_2394903)
	{
		return;
	}
	if (unk_0xA83A609D74168B30())
	{
		return;
	}
	if (bParam0)
	{
		func_16("INV_NO_XBOXLIVE", -1);
	}
	else
	{
		func_16("INV_RESTRICT", -1);
	}
	Global_2394903 = (iVar0 + 1800000);
}

void func_16(char* sParam0, int iParam1)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0xC592EBAF1D879BDC(0, 0, 1, iParam1);
}

void func_17()
{
	int iVar0;
	
	if (!unk_0x9800AF1CCAFA4639() && !unk_0x211AF631627DE2C5())
	{
		return;
	}
	if (unk_0x1C6DF6AD69BE853E())
	{
		return;
	}
	iVar0 = unk_0x48E480685981C7D4();
	if (iVar0 < Global_2394903)
	{
		return;
	}
	if (unk_0xA83A609D74168B30())
	{
		return;
	}
	func_16("INV_RESTRICT_SP", -1);
	Global_2394903 = (iVar0 + 1800000);
}

int func_18(int iParam0)
{
	if (!func_14(iParam0))
	{
		if (!func_19())
		{
			return 1;
		}
	}
	return 0;
}

int func_19()
{
	if (unk_0xA1F908D11DFF15F6() == 0)
	{
		return 0;
	}
	if (unk_0x211AF631627DE2C5())
	{
		if (unk_0xB37B5777B142DAF2(1, 0))
		{
			if (unk_0x90D70709D2558B5A())
			{
				return 1;
			}
		}
	}
	if (unk_0xEC209B562C5EFDB2())
	{
		if (unk_0xBEC1291D6B41868E(1))
		{
			if (unk_0x90D70709D2558B5A())
			{
				return 1;
			}
		}
	}
	if (unk_0x9800AF1CCAFA4639() || unk_0x3F0C224D3CC05EF2())
	{
		if (unk_0xC573B3FF373BF370(0, -3, 1))
		{
			return 1;
		}
	}
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (unk_0xB37B5777B142DAF2(0, 0))
		{
			if (unk_0x90D70709D2558B5A())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_20(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_24(uParam0))
	{
		return unk_0x236D8AD7EE179F46(Global_2394908.f_356[uParam0->f_9 /*75*/].f_10.f_63, 14);
	}
	if (func_23(uParam0->f_1))
	{
		if (func_22(uParam0))
		{
			return unk_0x236D8AD7EE179F46(Global_2397665.f_1.f_63, 14);
		}
		return iVar0;
	}
	iVar1 = func_21(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return unk_0x236D8AD7EE179F46(Global_794573.f_4[iVar1 /*87*/].f_76, 14);
		
		case 62:
			return unk_0x236D8AD7EE179F46(Global_905334.f_1204[iVar1 /*87*/].f_76, 14);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x1329891157A54C63())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_21(var uParam0)
{
	int iVar0;
	
	if (unk_0xB318FDA0D1ABDB20(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_23(uParam0->f_1))
	{
		if (func_22(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (unk_0x236D8AD7EE179F46(Global_794573.f_4[uParam0->f_1 /*87*/].f_76, 13))
			{
				if (unk_0xD994929E13CC1ED5(&(Global_794573.f_4[uParam0->f_1 /*87*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0x236D8AD7EE179F46(Global_794573.f_4[uParam0->f_1 /*87*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1118)
			{
				if (unk_0x236D8AD7EE179F46(Global_794573.f_4[iVar0 /*87*/].f_76, 13))
				{
					if (unk_0xD994929E13CC1ED5(&(Global_794573.f_4[iVar0 /*87*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (unk_0x236D8AD7EE179F46(Global_905334.f_1204[uParam0->f_1 /*87*/].f_76, 13))
			{
				if (unk_0xD994929E13CC1ED5(&(Global_905334.f_1204[uParam0->f_1 /*87*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0x236D8AD7EE179F46(Global_905334.f_1204[uParam0->f_1 /*87*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 200)
			{
				if (unk_0x236D8AD7EE179F46(Global_905334.f_1204[iVar0 /*87*/].f_76, 13))
				{
					if (unk_0xD994929E13CC1ED5(&(Global_905334.f_1204[iVar0 /*87*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == unk_0x1329891157A54C63())
	{
		if (unk_0x236D8AD7EE179F46(Global_947780.f_5[uParam0->f_1 /*87*/].f_76, 13))
		{
			if (unk_0xD994929E13CC1ED5(&(Global_947780.f_5[uParam0->f_1 /*87*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (unk_0x236D8AD7EE179F46(Global_947780.f_5[uParam0->f_1 /*87*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (unk_0x236D8AD7EE179F46(Global_947780.f_5[iVar0 /*87*/].f_76, 13))
			{
				if (unk_0xD994929E13CC1ED5(&(Global_947780.f_5[iVar0 /*87*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_22(var uParam0)
{
	if (Global_2397665)
	{
		if (unk_0xD994929E13CC1ED5(&(Global_2397665.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_23(int iParam0)
{
	return iParam0 == 9999;
}

int func_24(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0->f_9;
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!Global_2394908.f_356[iVar0 /*75*/])
	{
		return 0;
	}
	if (!unk_0xD994929E13CC1ED5(&(Global_2394908.f_356[iVar0 /*75*/].f_10), &(uParam0->f_3)))
	{
		return 0;
	}
	if (!unk_0x236D8AD7EE179F46(Global_2394908.f_356[iVar0 /*75*/].f_5, 3))
	{
		return 0;
	}
	return 1;
}

int func_25(var uParam0)
{
	struct<12> Var0;
	int iVar12;
	int iVar13;
	
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_11 = -1;
	iVar12 = 0;
	iVar13 = func_21(uParam0);
	if (iVar13 == -1)
	{
		return iVar12;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_26(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar12;
		
		default:
	}
	return iVar12;
}

struct<12> func_26(var uParam0)
{
	struct<12> Var0;
	int iVar12;
	
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_11 = -1;
	iVar12 = func_21(uParam0);
	if (iVar12 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794573.f_97271[iVar12 /*12*/];
		
		case 62:
			return Global_905334.f_18605[iVar12 /*12*/];
		
		default:
	}
	return Var0;
}

int func_27(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_24(uParam0))
	{
		return unk_0x236D8AD7EE179F46(Global_2394908.f_356[uParam0->f_9 /*75*/].f_10.f_63, 17);
	}
	if (func_23(uParam0->f_1))
	{
		if (func_22(uParam0))
		{
			return unk_0x236D8AD7EE179F46(Global_2397665.f_1.f_63, 17);
		}
		return iVar0;
	}
	iVar1 = func_21(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return unk_0x236D8AD7EE179F46(Global_794573.f_4[iVar1 /*87*/].f_76, 17);
		
		case 62:
			return unk_0x236D8AD7EE179F46(Global_905334.f_1204[iVar1 /*87*/].f_76, 17);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x1329891157A54C63())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_28(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!bParam1)
	{
		if (func_24(uParam0))
		{
			if (unk_0x236D8AD7EE179F46(Global_1311772.f_1[uParam0->f_9 /*2*/], 0))
			{
				return Global_2397799.f_513[uParam0->f_9];
			}
		}
	}
	if (func_23(uParam0->f_1))
	{
		if (func_22(uParam0))
		{
			return Global_2397665.f_1.f_54;
		}
		return iVar0;
	}
	iVar1 = func_21(uParam0);
	if (iVar1 == -1)
	{
		return 0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794573.f_4[iVar1 /*87*/].f_54;
		
		case 62:
			return Global_905334.f_1204[iVar1 /*87*/].f_54;
		
		case 40:
			return 0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x1329891157A54C63())
	{
		return Global_947780.f_5[iVar1 /*87*/].f_54;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

struct<16> func_29(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "NO DESCRIPTION", 64);
	if (func_24(uParam0))
	{
		return Global_2394908.f_356[uParam0->f_9 /*75*/].f_10.f_28;
	}
	if (func_23(uParam0->f_1))
	{
		if (func_22(uParam0))
		{
			return Global_2397665.f_1.f_28;
		}
		return Var0;
	}
	iVar16 = func_21(uParam0);
	if (iVar16 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794573.f_4[iVar16 /*87*/].f_38;
		
		case 62:
			return Global_905334.f_1204[iVar16 /*87*/].f_38;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x1329891157A54C63())
	{
		return Global_947780.f_5[iVar16 /*87*/].f_38;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

struct<16> func_30(var uParam0, bool bParam1)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "UNKNOWN", 64);
	if (bParam1)
	{
		StringCopy(&Var0, "", 64);
	}
	if (!bParam1)
	{
		if (func_24(uParam0))
		{
			if (unk_0x236D8AD7EE179F46(Global_1311772.f_1[uParam0->f_9 /*2*/], 0))
			{
				return Global_2397799[uParam0->f_9 /*16*/];
			}
			return Global_2394908.f_356[uParam0->f_9 /*75*/].f_10.f_12;
		}
	}
	if (func_23(uParam0->f_1))
	{
		if (func_22(uParam0))
		{
			return Global_2397665.f_1.f_12;
		}
		return Var0;
	}
	iVar16 = func_21(uParam0);
	if (iVar16 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794573.f_4[iVar16 /*87*/].f_22;
		
		case 62:
			return Global_905334.f_1204[iVar16 /*87*/].f_22;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x1329891157A54C63())
	{
		return Global_947780.f_5[iVar16 /*87*/].f_22;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

int func_31(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	if (func_24(uParam0))
	{
		return Global_2394908.f_356[uParam0->f_9 /*75*/].f_10.f_55;
	}
	if (func_23(uParam0->f_1))
	{
		if (func_22(uParam0))
		{
			return Global_2397665.f_1.f_55;
		}
		return iVar0;
	}
	iVar1 = func_21(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794573.f_4[iVar1 /*87*/].f_68;
		
		case 62:
			return Global_905334.f_1204[iVar1 /*87*/].f_68;
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x1329891157A54C63())
	{
		return Global_947780.f_5[iVar1 /*87*/].f_68;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_32(int iParam0, int iParam1)
{
	if (func_23(iParam1))
	{
		if (Global_2397665)
		{
			return Global_2397665.f_1.f_53;
		}
		return 157;
	}
	switch (iParam0)
	{
		case 63:
			return Global_794573.f_4[iParam1 /*87*/].f_65;
		
		case 62:
			return Global_905334.f_1204[iParam1 /*87*/].f_65;
		
		default:
	}
	if (iParam0 == unk_0x1329891157A54C63())
	{
		return Global_947780.f_5[iParam1 /*87*/].f_65;
	}
	else if (iParam0 < 32)
	{
		return 157;
	}
	return 157;
}

int func_33(char* sParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x1C6DF6AD69BE853E())
	{
		return 0;
	}
	if (unk_0xB318FDA0D1ABDB20(sParam0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = 1118;
	if (!bParam2)
	{
		iVar2 = 1100;
	}
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (unk_0x236D8AD7EE179F46(Global_794573.f_4[iVar0 /*87*/].f_76, 13))
		{
			if (unk_0xD994929E13CC1ED5(&(Global_794573.f_4[iVar0 /*87*/]), sParam0))
			{
				iVar1 = Global_794573.f_4[iVar0 /*87*/].f_65;
				*uParam1 = func_34(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 63;
				uParam1->f_3 = { Global_794573.f_4[iVar0 /*87*/] };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 200)
	{
		if (unk_0x236D8AD7EE179F46(Global_905334.f_1204[iVar0 /*87*/].f_76, 13))
		{
			if (unk_0xD994929E13CC1ED5(&(Global_905334.f_1204[iVar0 /*87*/]), sParam0))
			{
				iVar1 = Global_905334.f_1204[iVar0 /*87*/].f_65;
				*uParam1 = func_34(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 62;
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 62)
	{
		if (unk_0x236D8AD7EE179F46(Global_947780.f_5[iVar0 /*87*/].f_76, 13))
		{
			if (unk_0xD994929E13CC1ED5(&(Global_947780.f_5[iVar0 /*87*/]), sParam0))
			{
				iVar1 = Global_947780.f_5[iVar0 /*87*/].f_65;
				*uParam1 = func_34(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = unk_0x1329891157A54C63();
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_34(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 66;
		
		case 14:
			return 67;
		
		case 122:
			return 71;
		
		case 11:
			return 68;
		
		case 13:
			return 69;
		
		case 12:
			return 70;
		
		case 8:
			return 73;
		
		case 1:
			return 74;
		
		case 5:
			return 72;
		
		case 6:
			return 75;
		
		case 3:
			return 78;
		
		case 0:
			return 76;
		
		case 2:
			return 77;
		
		default:
	}
	return 0;
}

int func_35(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	char[] cVar1[8];
	char cVar3[16];
	char[] cVar7[8];
	
	if (unk_0xB318FDA0D1ABDB20(uParam0))
	{
		return 0;
	}
	iVar0 = unk_0xA84EEA1DAC64D0D5(sParam0);
	if (!iVar0 > 12)
	{
		return 0;
	}
	StringCopy(&cVar1, unk_0x15A4E0B07B96AB6F(sParam0, 0, 5), 8);
	if (!unk_0xD994929E13CC1ED5(&cVar1, "FAKE_"))
	{
		return 0;
	}
	StringCopy(&cVar3, unk_0x15A4E0B07B96AB6F(sParam0, 5, 12), 16);
	if (unk_0xD994929E13CC1ED5(&cVar3, "GOLF___"))
	{
		*iParam1 = 11;
	}
	else if (unk_0xD994929E13CC1ED5(&cVar3, "TENNIS_"))
	{
		*iParam1 = 12;
	}
	else if (unk_0xD994929E13CC1ED5(&cVar3, "PILOTS_"))
	{
		*iParam1 = 122;
	}
	else if (unk_0xD994929E13CC1ED5(&cVar3, "SHOOTR_"))
	{
		*iParam1 = 13;
	}
	else if (unk_0xD994929E13CC1ED5(&cVar3, "DARTS__"))
	{
		*iParam1 = 14;
	}
	else if (unk_0xD994929E13CC1ED5(&cVar3, "ARMWRS_"))
	{
		*iParam1 = 15;
	}
	else
	{
		return 0;
	}
	StringCopy(&cVar7, unk_0x15A4E0B07B96AB6F(sParam0, 12, iVar0), 8);
	if (!unk_0xFCBFB2102F5D06DD(&cVar7, iParam2))
	{
		return 0;
	}
	return 1;
}

void func_36(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	StringCopy(&(uParam0->f_3), "", 24);
	uParam0->f_9 = -1;
}

void func_37(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 >= Global_1343321)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (unk_0x48E480685981C7D4() > Global_2394854[iVar0 /*4*/].f_2 || Global_2394854[iVar0 /*4*/].f_2 == 0)
		{
			if (unk_0x06BDBDC3FFA42807() > 0 && Global_2392903[iParam0 /*97*/].f_89 < unk_0x06BDBDC3FFA42807())
			{
				Global_2394854[iVar0 /*4*/].f_3 = unk_0x1F1EB183D889F794(Global_2392903[iParam0 /*97*/].f_89);
				Global_2394854[iVar0 /*4*/].f_2 = unk_0x48E480685981C7D4() + 30000;
				iVar0 = 12;
			}
		}
		iVar0++;
	}
	if (Global_2392903[iParam0 /*97*/].f_90 != -1)
	{
		unk_0x4474CF0FD32A90B2(Global_2392903[iParam0 /*97*/].f_90);
	}
	if (!Global_2392903[iParam0 /*97*/].f_54)
	{
		if (Global_2392903[iParam0 /*97*/].f_50 != 0)
		{
			unk_0xACB22420C9207146(Global_2392903[iParam0 /*97*/].f_50);
		}
	}
	func_45(Global_2392903[iParam0 /*97*/].f_89);
	iVar1 = iParam0;
	iVar2 = iVar1 + 1;
	while (iVar2 < Global_1343321)
	{
		Global_2392903[iVar1 /*97*/] = { Global_2392903[iVar2 /*97*/] };
		iVar1++;
		iVar2++;
	}
	func_39(iVar1);
	Global_1343321 = (Global_1343321 - 1);
	if (Global_1343294)
	{
		if (Global_1343292 > 0)
		{
			func_38();
		}
	}
}

void func_38()
{
	Global_1343294 = 0;
}

void func_39(int iParam0)
{
	Global_2392903[iParam0 /*97*/] = 0;
	Global_2392903[iParam0 /*97*/].f_1 = 0;
	Global_2392903[iParam0 /*97*/].f_5 = 0;
	StringCopy(&(Global_2392903[iParam0 /*97*/].f_13), "", 64);
	StringCopy(&(Global_2392903[iParam0 /*97*/].f_29), "", 64);
	Global_2392903[iParam0 /*97*/].f_45 = -1;
	Global_2392903[iParam0 /*97*/].f_46 = unk_0x48E480685981C7D4();
	Global_2392903[iParam0 /*97*/].f_47 = -1;
	Global_2392903[iParam0 /*97*/].f_48 = -1;
	Global_2392903[iParam0 /*97*/].f_49 = -1;
	Global_2392903[iParam0 /*97*/].f_50 = 0;
	Global_2392903[iParam0 /*97*/].f_51 = 0;
	Global_2392903[iParam0 /*97*/].f_51.f_1 = 0;
	Global_2392903[iParam0 /*97*/].f_51.f_2 = 0;
	Global_2392903[iParam0 /*97*/].f_54 = 0;
	StringCopy(&(Global_2392903[iParam0 /*97*/].f_55), "", 64);
	StringCopy(&(Global_2392903[iParam0 /*97*/].f_71), "", 64);
	Global_2392903[iParam0 /*97*/].f_87 = 0;
	Global_2392903[iParam0 /*97*/].f_88 = 0;
	Global_2392903[iParam0 /*97*/].f_89 = -1;
	Global_2392903[iParam0 /*97*/].f_90 = -1;
	Global_2392903[iParam0 /*97*/].f_91 = 0;
	Global_2392903[iParam0 /*97*/].f_92 = -1;
	Global_2392903[iParam0 /*97*/].f_93 = 0;
	Global_2392903[iParam0 /*97*/].f_94 = 0;
	Global_2392903[iParam0 /*97*/].f_95 = 0;
	Global_2392903[iParam0 /*97*/].f_96 = 0;
}

int func_40(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1343321)
	{
		if (unk_0xD994929E13CC1ED5(&uParam0, &(Global_2392903[iVar0 /*97*/].f_13)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_41(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_128, 22);
}

bool func_42(bool bParam0)
{
	if (!bParam0 && unk_0x968BF1C2C695B61A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x236D8AD7EE179F46(Global_69268, 0);
}

int func_43()
{
	if (Global_98931.f_7699.f_330[0 /*6*/])
	{
		return 1;
	}
	return 0;
}

bool func_44()
{
	return unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_128, 2);
}

void func_45(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x1231A0610F1D884F(uParam0);
	if (iVar0 < 0 || iVar0 >= unk_0x06BDBDC3FFA42807())
	{
		return;
	}
	if (unk_0x2FC341D0C965A1C2(iVar0))
	{
		return;
	}
}

bool func_46()
{
	return Global_1315850 == 10;
}

int func_47()
{
	if (!Global_69020)
	{
		return 1;
	}
	else if (func_48())
	{
		return 1;
	}
	return 0;
}

int func_48()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_53())
	{
		return 1;
	}
	if (func_52())
	{
		return 1;
	}
	return func_49(120, -1);
}

int func_49(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2478104[iParam0 /*5*/][func_50(iParam1)];
	if (unk_0xFD72912C9064BF1F(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_50(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_51();
		if (iVar1 > -1)
		{
			Global_2459480 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2459480 = 1;
		}
	}
	return iVar0;
}

int func_51()
{
	return Global_1312729;
}

bool func_52()
{
	return Global_1315880;
}

bool func_53()
{
	return Global_1315882;
}

void func_54(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 == -1)
	{
		iVar0 = func_51();
	}
	Global_1315870[iVar0] = uParam0;
}

void func_55(int iParam0)
{
	func_102();
	if (func_101(1))
	{
		if (!func_92())
		{
			if (!func_80(1))
			{
				if (unk_0x726DA50057167075())
				{
					func_79();
				}
				func_58(1, 0);
				unk_0x030B38D268D23D87(iParam0);
				func_57();
				func_56();
			}
		}
	}
}

void func_56()
{
	Global_1698884.f_7 = 1;
}

void func_57()
{
	Global_1698884.f_6 = 1;
}

void func_58(int iParam0, bool bParam1)
{
	if (func_101(iParam0))
	{
		Global_1698884.f_16[iParam0 /*44*/].f_5 = 1;
		func_60(iParam0, 0);
		func_59();
		if (bParam1)
		{
			Global_1698884 = 1;
		}
	}
}

void func_59()
{
	Global_1698884.f_2 = 1;
}

void func_60(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	if (!unk_0x726DA50057167075())
	{
		if (bParam1)
		{
			func_78();
			func_72(unk_0x1329891157A54C63(), 0, 81920);
			Global_1585045[unk_0x1329891157A54C63() /*400*/].f_84 = 8;
			func_71();
			func_70();
		}
		func_69(iParam0);
		func_68(iParam0);
		func_66();
		func_65();
		func_59();
	}
	Var0 = { func_64(iParam0) };
	func_63(iParam0);
	func_61(&Var0);
}

void func_61(char* sParam0)
{
	StringCopy(&(Global_2428865.f_730), sParam0, 24);
	if (func_62())
	{
		StringCopy(&(Global_967557.f_42), sParam0, 24);
	}
}

bool func_62()
{
	return unk_0x236D8AD7EE179F46(Global_2429626.f_1.f_2808, 5);
}

void func_63(int iParam0)
{
	Global_1698884.f_16[iParam0 /*44*/].f_3 = 1;
}

struct<6> func_64(int iParam0)
{
	return Global_1698884.f_16[iParam0 /*44*/].f_6;
}

void func_65()
{
	Global_2428865.f_4 = 100;
}

void func_66()
{
	unk_0xF3148AAF69AF9CBC(&Global_2428865, 5);
	func_67();
}

void func_67()
{
	unk_0xF3148AAF69AF9CBC(&Global_2428865, 8);
}

void func_68(var uParam0)
{
	Global_1698884.f_8 = uParam0;
}

void func_69(var uParam0)
{
	Global_1698884.f_9 = uParam0;
}

void func_70()
{
	Global_2435406.f_1 = 0;
}

void func_71()
{
	char* sVar0;
	
	StringCopy(&(Global_2428865.f_730), sVar0, 24);
}

void func_72(int iParam0, bool bParam1, int iParam2)
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
	var uVar25;
	int iVar26;
	
	if (bParam1)
	{
		if (unk_0xC04B59103F71021C())
		{
			unk_0xCFB703A5F752D1C3(0);
		}
	}
	if (!unk_0x1C6DF6AD69BE853E())
	{
		uVar0 = iParam2;
		unk_0x034205BA180B4E43(iParam0, bParam1, uVar0);
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
		if (!func_76())
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
		if (unk_0xA89AE5060232966A(iParam0) && unk_0x7DF7DE8C76D7F346(iParam0))
		{
			uVar25 = unk_0xE495E987CB2BE7EF(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x1C6DF6AD69BE853E())
				{
					unk_0xA62A443049FCB56D(1);
				}
				else
				{
					unk_0xABA9860C0161F3CD(uVar25, !bVar13);
				}
				if (!bVar13)
				{
					if (unk_0x1C6DF6AD69BE853E() && !bVar18)
					{
						unk_0xA62A443049FCB56D(0);
					}
					Global_2414506[iParam0 /*255*/].f_238 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_75(uVar25) && !unk_0x9274B3297D0AC71D(uVar25))
				{
					if (!bVar21)
					{
						unk_0x5CEA5F12775261F2(uVar25, true, 0);
					}
				}
				if (!unk_0xCB8B9E751036ECB2(uVar25))
				{
					if (!bVar20)
					{
						unk_0xA8F22633ACC22189(uVar25, false);
					}
					unk_0xEA89E72C99125D9C(uVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0xA8F22633ACC22189(uVar25, false);
				}
				unk_0x33B1E568CEF14B0D(uVar25, true);
				unk_0xE5BBA710593FB752(iParam0, 0);
				unk_0xDC96513B84DA05AA(uVar25);
				unk_0x1BFA331FECEC4F68(uVar25, 1);
				func_74();
				func_73();
				if (unk_0x91A2643FAECEA14A())
				{
					if (!bVar22)
					{
					}
				}
				if (unk_0x2CB3B76C90F08111())
				{
				}
				Global_2414506[iParam0 /*255*/].f_239 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_75(uVar25) && !unk_0x9274B3297D0AC71D(uVar25))
				{
					if (!bVar21)
					{
						unk_0x5CEA5F12775261F2(uVar25, !bVar14, 0);
					}
					if (!unk_0xCB8B9E751036ECB2(uVar25))
					{
						if (!bVar20)
						{
							unk_0xA8F22633ACC22189(uVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0xEA89E72C99125D9C(uVar25, 1);
						}
					}
				}
				if (bVar9)
				{
					unk_0xE5BBA710593FB752(iParam0, 0);
				}
				else
				{
					unk_0xE5BBA710593FB752(iParam0, 1);
				}
				unk_0x33B1E568CEF14B0D(uVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0x0B392DF1B3286590(uVar25) && !unk_0xE5AB05962FA1FF3F(uVar25, 0))
					{
						unk_0x1E2B48EE3EC55DCF(uVar25);
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
			unk_0x034205BA180B4E43(iParam0, bParam1, iVar26);
		}
	}
}

void func_73()
{
	struct<2> Var0;
	
	Global_2422670.f_690 = 0;
	Global_2422670.f_691 = 0;
	Global_2422670.f_692 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2404607.f_1447 = { Var0 };
}

void func_74()
{
	Global_2404607.f_608 = 0;
	Global_2404607.f_1488 = 0;
	Global_2404607.f_481 = 0;
	Global_2414506[unk_0x1329891157A54C63() /*255*/].f_204 = 0;
}

int func_75(var uParam0)
{
	int iVar0;
	
	if (unk_0xE5AB05962FA1FF3F(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xFA1212DE7C455679(uParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_76()
{
	if (func_77() == 0)
	{
		return 1;
	}
	return 0;
}

int func_77()
{
	return Global_1312466.f_18;
}

void func_78()
{
	unk_0xF3148AAF69AF9CBC(&Global_2428865, 7);
}

void func_79()
{
	unk_0xF3148AAF69AF9CBC(&(Global_2428865.f_2), 15);
}

int func_80(int iParam0)
{
	if (iParam0 || func_91())
	{
		if (!func_90(0, 1))
		{
			return 1;
		}
		if (!func_82(1))
		{
			return 1;
		}
		if (!func_81())
		{
			return 1;
		}
		if (unk_0x048404777B43DB4C())
		{
			return 1;
		}
	}
	return 0;
}

bool func_81()
{
	return Global_1698884.f_4;
}

int func_82(bool bParam0)
{
	if (!func_87())
	{
		return 0;
	}
	if ((func_85(func_86(-1), 0) >= 3 || func_49(123, -1)) && func_49(133, -1))
	{
		func_84();
		return 1;
	}
	else if (bParam0)
	{
		func_83();
	}
	return 0;
}

void func_83()
{
	Global_1698884.f_5 = 1;
}

void func_84()
{
	Global_1698884.f_4 = 1;
}

int func_85(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_272182[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_272182[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((unk_0xBBDA792448DB5A89(iVar1) - unk_0xBBDA792448DB5A89(iVar2)) / 2f) + unk_0xBBDA792448DB5A89(iVar2));
		iVar3 = unk_0xF2DB717A73826179(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_86(int iParam0)
{
	return Global_1343672[func_50(iParam0)];
}

int func_87()
{
	if (func_89() && func_88(0))
	{
		return 1;
	}
	return 0;
}

var func_88(int iParam0)
{
	return Global_1312369[iParam0];
}

var func_89()
{
	return func_88(func_51() + 1);
}

int func_90(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (unk_0x236D8AD7EE179F46(Global_98931.f_668.f_704, 2))
		{
			return 1;
		}
	}
	if (unk_0x9F80443939366966())
	{
		if (!bParam1 || unk_0x1F2C82EFDAD19C5D())
		{
			if (!unk_0x211AF631627DE2C5() && !unk_0xEC209B562C5EFDB2())
			{
				return 1;
			}
		}
	}
	if (bParam1)
	{
		if (unk_0x145838334F50DC33())
		{
			return 0;
		}
	}
	if (unk_0x9F80443939366966())
	{
		return 1;
	}
	return 0;
}

var func_91()
{
	return Global_1698884.f_2;
}

int func_92()
{
	if (((((func_100() || !func_98(-1)) || !func_96()) || !func_95()) || !func_94()) || func_93())
	{
		return 1;
	}
	return 0;
}

var func_93()
{
	return Global_2437000;
}

int func_94()
{
	if (unk_0xE19FDB171CBF814A(903) == 1)
	{
		return 1;
	}
	return 0;
}

int func_95()
{
	int iVar0;
	
	if (unk_0x79AF5FFA367FFB30(&iVar0) == 0)
	{
		if (iVar0 == 1)
		{
			return 0;
		}
	}
	return 1;
}

int func_96()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_97(iVar0) == 1)
		{
			iVar0 = 4;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_97(int iParam0)
{
	if (func_49(76, iParam0) == 1)
	{
		return 1;
	}
	return 0;
}

int func_98(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_99(iParam0);
	uVar1 = unk_0xE19FDB171CBF814A(uVar0);
	if (unk_0x236D8AD7EE179F46(uVar1, 1))
	{
		return 1;
	}
	return 0;
}

int func_99(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_51();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 914;
			break;
		
		case 1:
			iVar0 = 915;
			break;
		
		case 2:
			iVar0 = 916;
			break;
		
		case 3:
			iVar0 = 917;
			break;
		
		case 4:
			iVar0 = 918;
			break;
	}
	return iVar0;
}

var func_100()
{
	return Global_2428865.f_617;
}

bool func_101(int iParam0)
{
	return Global_1698884.f_16[iParam0 /*44*/].f_4;
}

void func_102()
{
	int iVar0;
	int iVar1;
	
	func_108();
	if (unk_0xF41D6CE4482624B3() && !func_105())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = unk_0x275153CED180A303(func_104(iVar0));
			if (iVar1 > 0)
			{
				Global_1698884.f_16[iVar0 /*44*/] = iVar1;
				func_103(iVar0, iVar1);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Global_1698884.f_16[iVar0 /*44*/].f_4 = 0;
			iVar0++;
		}
	}
}

void func_103(int iParam0, int iParam1)
{
	bool bVar0;
	struct<16> Var1;
	var uVar17;
	
	bVar0 = true;
	if (unk_0x75FCF8F115AEB9A2(iParam1, "contentId", &Var1))
	{
		MemCopy(&(Global_1698884.f_16[iParam0 /*44*/].f_6), {Var1}, 6);
	}
	else
	{
		bVar0 = false;
	}
	if (unk_0x75FCF8F115AEB9A2(iParam1, "playlist", &Var1))
	{
		Global_1698884.f_16[iParam0 /*44*/].f_12 = { Var1 };
	}
	else
	{
		bVar0 = false;
	}
	if (unk_0xE91B71CBD04BE631(iParam1, &Var1))
	{
		Global_1698884.f_16[iParam0 /*44*/].f_28 = { Var1 };
	}
	else
	{
		bVar0 = false;
	}
	if (iParam0 == 1)
	{
		if (unk_0xFCE7BBB12BFA4B3F(iParam1, "coronaCountdown", &uVar17))
		{
			Global_1698884.f_16[iParam0 /*44*/].f_1 = uVar17;
		}
		else
		{
			Global_1698884.f_16[iParam0 /*44*/].f_1 = 120000;
		}
		Global_1698884.f_16[iParam0 /*44*/].f_2 = 0;
		if (unk_0xFCE7BBB12BFA4B3F(iParam1, "eventSubType", &uVar17))
		{
			Global_1698884.f_16[iParam0 /*44*/].f_2 = uVar17;
		}
	}
	if (bVar0)
	{
		if (iParam0 != 1)
		{
			Global_1698884.f_1 = 1;
		}
		Global_1698884.f_16[iParam0 /*44*/].f_4 = 1;
	}
	else
	{
		Global_1698884.f_16[iParam0 /*44*/].f_4 = 0;
	}
}

char* func_104(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TournamentQualifying";
		
		case 1:
			return "Tournament";
		
		case 2:
			return "LiveStreaming";
		
		case 3:
			return "Sweepstakes";
		
		case 4:
			return "FeaturedPlaylist";
		
		default:
	}
	return "";
}

int func_105()
{
	if (!func_106())
	{
		return 1;
	}
	return 0;
}

int func_106()
{
	if (func_107())
	{
		return 0;
	}
	if (unk_0x847832409C9B7582() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_107()
{
	return Global_2437061;
}

void func_108()
{
	struct<281> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_16 = 6;
	Global_1698884 = { Var0 };
}

void func_109(int iParam0)
{
	var uVar0;
	
	if (Global_69020)
	{
		unk_0x35D7948F61AA3FEC(-1, "Hang_Up", "Phone_SoundSet_Michael", 1);
	}
	else
	{
		unk_0x35D7948F61AA3FEC(-1, "Hang_Up", &Global_14383, 1);
	}
	if (unk_0xDC8C46445C29336D(1, iParam0, &uVar0, 21))
	{
		func_111();
	}
	Global_2456109.f_1 = 0;
	Global_2456109.f_33 = -1;
	Global_2456109.f_34 = -1;
	StringCopy(&(Global_2456109.f_4), "", 64);
	func_110(&(Global_2456109.f_20));
}

void func_110(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

void func_111()
{
	Global_2456109.f_2 = 1;
	Global_2456109.f_38 = 1;
	if (unk_0x1F2C82EFDAD19C5D())
	{
		if (unk_0x23D17C8A7B207E72())
		{
			while (unk_0x8E46A86E6856C6C3())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0x37CE6B7510A18C70();
			Global_2456109 = 0;
			Global_2456109.f_2 = 0;
		}
		else if (func_117(Global_2456109.f_20))
		{
			if (unk_0x5762EE910D467202(&(Global_2456109.f_20)))
			{
				if (!unk_0x425AD5BC1887845B(&(Global_2456109.f_20)))
				{
					func_116();
				}
			}
		}
		else
		{
			func_116();
		}
	}
	else
	{
		func_116();
	}
	if (Global_2456109.f_37)
	{
		func_112(0);
	}
	Global_2456109.f_37 = 0;
	Global_2456109.f_3 = 0;
}

void func_112(int iParam0)
{
	if (Global_14552)
	{
		func_114(0, 0);
	}
	if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2265, 16);
	}
	if (unk_0xE0A43912E369FFA5())
	{
		unk_0x9E95048D8C96C1EA(0);
	}
	Global_15693 = 5;
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 30);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 30);
	}
	if (!func_113())
	{
		Global_14394.f_1 = 3;
	}
}

int func_113()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_114(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_115(0))
		{
			Global_14552 = 1;
			if (bParam1)
			{
				unk_0x2B4380FBF49E1B71(&Global_14331);
			}
			Global_14322 = { Global_14340[Global_14339 /*3*/] };
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
	else if (Global_14552 == 1)
	{
		Global_14552 = 0;
		Global_14322 = { Global_14347[Global_14339 /*3*/] };
		if (bParam1)
		{
			unk_0xB30AC22133A50DEE(Global_14331);
		}
		else
		{
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
}

int func_115(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14394.f_1 > 3)
		{
			if (unk_0x236D8AD7EE179F46(Global_2264, 14))
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
	if (unk_0x968BF1C2C695B61A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14394.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_116()
{
	Global_2456109.f_1 = 0;
	Global_2456109 = 0;
	Global_2456109.f_2 = 0;
	Global_2456109.f_33 = -1;
	Global_2456109.f_34 = -1;
	StringCopy(&(Global_2456109.f_4), "", 64);
	StringCopy(&(Global_2456109.f_39[0 /*16*/]), "", 64);
	Global_2456109.f_38 = 0;
	Global_2456109.f_56 = 0;
	Global_2456109.f_57 = 0;
	Global_2456109.f_58 = -2;
	Global_2456109.f_3 = 0;
	func_110(&(Global_2456109.f_20));
}

bool func_117(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x7BD139E6ED31A2EB(&uParam0, 13);
}

void func_118(int iParam0)
{
	struct<2> Var0;
	
	if (unk_0xDC8C46445C29336D(1, iParam0, &Var0, 15))
	{
		Global_2456109.f_33 = Var0.f_1;
		Global_2456109.f_34 = Var0.f_0;
	}
}

void func_119(int iParam0)
{
	struct<9> Var0;
	
	if (unk_0xDC8C46445C29336D(1, iParam0, &Var0, 21))
	{
		if (Global_2456109.f_3 == 0)
		{
			if (!func_120(&(Var0.f_8)))
			{
				unk_0x2EBAC32AEFF88698(0, 2);
			}
			else
			{
				Global_2456109.f_3 = 1;
				MemCopy(&(Global_2456109.f_4), {Var0}, 16);
				Global_2456109.f_20 = { Var0.f_8 };
				StringCopy(&(Global_2456109.f_39[0 /*16*/]), "", 64);
				Global_2456109.f_58 = -2;
				Global_2456109.f_56 = 0;
				Global_2456109.f_57 = 0;
			}
		}
		else if (!func_120(&(Var0.f_8)))
		{
			unk_0x2EBAC32AEFF88698(0, 2);
		}
		else
		{
			Global_2456109.f_3 = 1;
			MemCopy(&(Global_2456109.f_4), {Var0}, 16);
			Global_2456109.f_20 = { Var0.f_8 };
			StringCopy(&(Global_2456109.f_39[0 /*16*/]), "", 64);
			Global_2456109.f_58 = -2;
			Global_2456109.f_56 = 0;
			Global_2456109.f_57 = 0;
		}
	}
}

int func_120(var uParam0)
{
	if (Global_69020)
	{
		if (func_48() == 0)
		{
			return 0;
		}
		if (func_124(unk_0x1329891157A54C63(), 1, 1))
		{
			if (unk_0x2C237D28F05F0008(unk_0x81873881071CD9FE()))
			{
				if (unk_0xD964710E8A8DDECA(unk_0x81873881071CD9FE()) >= 1f)
				{
					return 0;
				}
			}
		}
	}
	if (unk_0x847832409C9B7582() == 0)
	{
		return 0;
	}
	if (Global_2456109.f_1)
	{
	}
	if (Global_14560 == 1)
	{
		return 0;
	}
	if (Global_1573843)
	{
		return 0;
	}
	if (Global_2456109.f_36)
	{
		return 0;
	}
	if (func_113())
	{
		return 0;
	}
	if (((Global_35443 != 6 && Global_35443 != 8) && Global_35443 != 12) && Global_35443 != 15)
	{
		return 0;
	}
	if (func_123() && !func_122(12))
	{
		return 0;
	}
	if (unk_0xE0A43912E369FFA5())
	{
		return 0;
	}
	if (unk_0xEF7A631CCBD01652())
	{
		return 0;
	}
	if (!func_121(0))
	{
		return 0;
	}
	if (unk_0xDB10DED5ABC4AA20())
	{
		return 0;
	}
	if (Global_69280)
	{
		return 0;
	}
	if (unk_0x39533D22A3A46B32())
	{
		if (!unk_0x825FC46BB1FBE9E0(unk_0x1329891157A54C63()))
		{
			return 0;
		}
	}
	if (!unk_0x1F2C82EFDAD19C5D())
	{
		return 0;
	}
	if (unk_0x6E5E82D7E6363134(uParam0) || unk_0xA2ACF1F8C161F103(uParam0))
	{
		return 0;
	}
	if (unk_0x6315C7BA3C69741D(uParam0) || unk_0xA82997874D76F3CB(uParam0))
	{
		return 0;
	}
	if (unk_0xF375D6EBBA1ECB11())
	{
		if (unk_0x3F0C224D3CC05EF2())
		{
			if (unk_0xBE068FAE14C0605B())
			{
				return 0;
			}
		}
		else if (unk_0xEC209B562C5EFDB2())
		{
			return 0;
		}
	}
	return 1;
}

int func_121(int iParam0)
{
	struct<13> Var0;
	
	if (unk_0xA1F908D11DFF15F6() == 0)
	{
		return 0;
	}
	if (unk_0x211AF631627DE2C5() || unk_0xEC209B562C5EFDB2())
	{
		if (unk_0xB37B5777B142DAF2(0, iParam0))
		{
			if (unk_0x90D70709D2558B5A())
			{
				return 1;
			}
		}
	}
	if (unk_0x9800AF1CCAFA4639() || unk_0x3F0C224D3CC05EF2())
	{
		if (iParam0 == 0 || iParam0 == unk_0x1329891157A54C63())
		{
			if (unk_0xC573B3FF373BF370(0, -3, 1) || unk_0xB37B5777B142DAF2(1, 0))
			{
				return 1;
			}
		}
		else
		{
			Var0 = { func_8(iParam0) };
			if (unk_0xB37B5777B142DAF2(0, 0) || (unk_0xB37B5777B142DAF2(1, 0) && unk_0x5762EE910D467202(&Var0)))
			{
				return 1;
			}
		}
	}
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (unk_0xB37B5777B142DAF2(0, iParam0))
		{
			if (unk_0x90D70709D2558B5A())
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_122(int iParam0)
{
	return Global_35443 == iParam0;
}

int func_123()
{
	if (Global_35443 == 15)
	{
		return 0;
	}
	return 1;
}

int func_124(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (unk_0xA89AE5060232966A(uParam0))
	{
		if (bParam1)
		{
			if (!unk_0x7DF7DE8C76D7F346(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422670.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_125()
{
	func_116();
}

void func_126()
{
	Global_2456109.f_1 = 1;
	Global_2456109.f_33 = -1;
	Global_2456109.f_34 = -1;
	if (unk_0xCC8E3BAC62A29F42(Global_14375) == 1)
	{
		if (Global_14382)
		{
			func_127(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
			if (Global_14337)
			{
				func_127(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else
		{
			func_127(Global_14375, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		}
	}
}

void func_127(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x21ED0FC9B5CC748B(uParam0, sParam1);
	unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0xBD0C54D89298454E(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xB318FDA0D1ABDB20(sParam7))
	{
		func_128(sParam7);
	}
	if (!unk_0xB318FDA0D1ABDB20(iParam8))
	{
		func_128(iParam8);
	}
	if (!unk_0xB318FDA0D1ABDB20(iParam9))
	{
		func_128(iParam9);
	}
	if (!unk_0xB318FDA0D1ABDB20(iParam10))
	{
		func_128(iParam10);
	}
	if (!unk_0xB318FDA0D1ABDB20(iParam11))
	{
		func_128(iParam11);
	}
	unk_0xBA9BA6181F2B6111();
}

void func_128(var uParam0)
{
	unk_0x6CE839BF5D87A428(uParam0);
	unk_0xC3822F70D0E7940B();
}

void func_129()
{
	int iVar0;
	
	if (iLocal_88)
	{
		Global_47654 = 0;
		Global_47654.f_12 = 0;
		Global_47654.f_24 = 0;
		Global_47654.f_36 = 0;
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_47654.f_1[iVar0] = 0;
			Global_47654.f_13[iVar0] = 0;
			Global_47654.f_25[iVar0] = 0;
			Global_47654.f_37[iVar0] = 0;
			iVar0++;
		}
		iLocal_88 = 0;
	}
}

