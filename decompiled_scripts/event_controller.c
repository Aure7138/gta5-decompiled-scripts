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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	float fLocal_47 = 0f;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 10;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 2;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 8;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 8;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	int iLocal_96 = 0;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_47 = ((0.05f + 0.275f) - 0.01f);
	if (unk_0x76BF814AB8D4CAB8(34))
	{
		unk_0x810C5D6462DD69E6();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_132();
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
	if (unk_0x60D6796E6B9FD3DB())
	{
		iVar2 = 0;
		while (iVar2 < unk_0x5B5D98FAAE6FEC3E(1))
		{
			iVar7 = unk_0xD8DDA9403FAEDB57(1, iVar2);
			switch (iVar7)
			{
				case 189:
					func_129();
					break;
				
				case 190:
					func_128();
					break;
				
				case 191:
					func_122(iVar2);
					break;
				
				case 192:
					func_121(iVar2);
					break;
				
				case 193:
					func_112(iVar2);
					break;
				
				case 211:
					func_3(iVar2);
					break;
			}
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < unk_0x5B5D98FAAE6FEC3E(0))
	{
		iVar0 = unk_0xD8DDA9403FAEDB57(0, iVar2);
		iLocal_96 = 1;
		switch (iVar0)
		{
			case 139:
				unk_0xF6A7C6FEAD04F4B3(0, iVar2, &uVar1, 1);
				if (unk_0x31F12808DC47A9E5(uVar1))
				{
					if (unk_0x978B4E1292EBBE41(uVar1))
					{
						if (func_2(iVar3))
						{
							Global_48152.f_1[iVar3] = uVar1;
							iVar3++;
						}
					}
					else if (unk_0xB6C2454233C8F532(uVar1))
					{
						if (func_2(iVar5))
						{
							Global_48152.f_25[iVar5] = uVar1;
							iVar5++;
						}
					}
				}
				break;
			
			case 140:
				unk_0xF6A7C6FEAD04F4B3(0, iVar2, &uVar1, 1);
				if (unk_0x31F12808DC47A9E5(uVar1))
				{
					if (unk_0x978B4E1292EBBE41(uVar1))
					{
						if (func_2(iVar4))
						{
							Global_48152.f_13[iVar4] = uVar1;
							iVar4++;
						}
					}
					else if (unk_0xB6C2454233C8F532(uVar1))
					{
						if (func_2(iVar6))
						{
							Global_48152.f_37[iVar6] = uVar1;
							iVar6++;
						}
					}
				}
				break;
		}
		iVar2++;
	}
	Global_48152 = iVar3;
	Global_48152.f_12 = iVar4;
	Global_48152.f_24 = iVar5;
	Global_48152.f_36 = iVar6;
}

bool func_2(int iParam0)
{
	return iParam0 < 10;
}

void func_3(int iParam0)
{
	struct<39> Var0;
	int iVar39;
	
	if (unk_0xF6A7C6FEAD04F4B3(1, iParam0, &Var0, 39))
	{
		iVar39 = unk_0xF0B0AE3E44C7F059(Var0.f_38);
		if (iVar39 >= 0 && iVar39 < unk_0xE10E7A0F655C6A4E())
		{
			if (unk_0x55007C41D53A0688(iVar39) || unk_0x514AAA6DE545E170(iVar39))
			{
				if (unk_0x514AAA6DE545E170(iVar39))
				{
					func_55(iVar39);
				}
				else
				{
					unk_0x972EF740398F1324(iVar39);
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
	var uVar75;
	bool bVar76;
	bool bVar77;
	bool bVar78;
	bool bVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	
	bVar0 = false;
	if (iParam37 >= 1000000)
	{
		iParam37 = (iParam37 - 1000000);
		bVar0 = true;
	}
	if (unk_0x44243F2E2F58B8E3())
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
	if (!unk_0x44243F2E2F58B8E3())
	{
		if (bVar0)
		{
		}
		else if (!unk_0x5AA8CFBEDE9B83FC(&Param23))
		{
			func_45(uParam22);
			return 0;
		}
		if (Global_14396)
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
	if (unk_0x44243F2E2F58B8E3())
	{
		if (!func_41(unk_0x8CFC7D6E1DA5D304()))
		{
			func_45(uParam22);
			return 0;
		}
	}
	if (unk_0xFAFFA408239A026B(&Param6))
	{
		func_45(uParam22);
		return 0;
	}
	if (unk_0xFAFFA408239A026B(&Param0))
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
	uVar19 = unk_0xF0B0AE3E44C7F059(uParam22);
	iVar20 = unk_0x4417728A3260AF6D(uVar19);
	iVar21 = 0;
	iVar21 = 0;
	while (iVar21 <= 11)
	{
		if (iVar20 == Global_2395292[iVar21 /*4*/].f_3 && unk_0x5AFB8ED811F05E4D() < Global_2395292[iVar21 /*4*/].f_2)
		{
			Global_2395292[iVar21 /*4*/].f_2 = unk_0x5AFB8ED811F05E4D() + 30000;
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
		uVar75 = func_24(&Var22);
		bVar76 = func_19(&Var22);
		if (!bVar76)
		{
			iVar72 = 1;
		}
	}
	else
	{
		bVar77 = false;
		if (func_17(unk_0x8CFC7D6E1DA5D304(), Param23))
		{
			if (!unk_0x44243F2E2F58B8E3())
			{
				bVar77 = true;
			}
			else
			{
				func_45(uParam22);
				func_15(0);
				return 0;
			}
		}
		if (!unk_0x929A0C5D6A986B4F())
		{
			if (!bVar77)
			{
				if (func_13(unk_0x8CFC7D6E1DA5D304(), Param23))
				{
					func_45(uParam22);
					func_15(0);
					return 0;
				}
			}
		}
		if (!func_12())
		{
			func_45(uParam22);
			bVar78 = true;
			func_15(bVar78);
			return 0;
		}
		bVar79 = false;
		if (!bVar77)
		{
			if (func_7(Param23, &bVar79, 1))
			{
				func_45(uParam22);
				func_15(bVar79);
				return 0;
			}
		}
		iVar70 = 1;
		iVar71 = 0;
		iVar69 = 1;
	}
	iVar80 = Global_1367583;
	if (iVar80 >= 12)
	{
		iVar80 = (iVar80 - 1);
	}
	iVar81 = (iVar80 - 1);
	while (iVar81 >= 0)
	{
		Global_2392991[iVar80 /*99*/] = { Global_2392991[iVar81 /*99*/] };
		iVar80 = (iVar80 - 1);
		iVar81 = (iVar81 - 1);
	}
	Global_1367583++;
	if (Global_1367583 > 12)
	{
		Global_1367583 = 12;
	}
	iVar82 = 0;
	Global_2392991[iVar82 /*99*/] = 0;
	Global_2392991[iVar82 /*99*/].f_1 = 0;
	Global_2392991[iVar82 /*99*/].f_5 = 0;
	Global_2392991[iVar82 /*99*/].f_2 = iVar70;
	Global_2392991[iVar82 /*99*/].f_3 = 0;
	Global_2392991[iVar82 /*99*/].f_4 = iVar71;
	Global_2392991[iVar82 /*99*/].f_6 = { Param0 };
	Global_2392991[iVar82 /*99*/].f_12 = uVar74;
	Global_2392991[iVar82 /*99*/].f_13 = uVar75;
	Global_2392991[iVar82 /*99*/].f_15 = { Param6 };
	StringCopy(&(Global_2392991[iVar82 /*99*/].f_31), "", 64);
	Global_2392991[iVar82 /*99*/].f_49 = iVar34;
	Global_2392991[iVar82 /*99*/].f_50 = iVar32;
	Global_2392991[iVar82 /*99*/].f_51 = iVar33;
	Global_2392991[iVar82 /*99*/].f_91 = uParam22;
	Global_2392991[iVar82 /*99*/].f_57 = { Var36 };
	Global_2392991[iVar82 /*99*/].f_73 = { Var52 };
	Global_2392991[iVar82 /*99*/].f_52 = iVar68;
	Global_2392991[iVar82 /*99*/].f_53 = 0;
	Global_2392991[iVar82 /*99*/].f_53.f_1 = 0;
	Global_2392991[iVar82 /*99*/].f_53.f_2 = 0;
	Global_2392991[iVar82 /*99*/].f_56 = iVar69;
	Global_2392991[iVar82 /*99*/].f_90 = uParam36;
	Global_2392991[iVar82 /*99*/].f_92 = -1;
	Global_2392991[iVar82 /*99*/].f_93 = iVar72;
	Global_2392991[iVar82 /*99*/].f_94 = Global_2395344;
	Global_2392991[iVar82 /*99*/].f_95 = iVar73;
	Global_2392991[iVar82 /*99*/].f_98 = unk_0x5AA8CFBEDE9B83FC(&Param23);
	if (Global_2392991[iVar82 /*99*/].f_50 == 0)
	{
		if (Global_2392991[iVar82 /*99*/].f_51 == 1)
		{
			Global_2392991[iVar82 /*99*/].f_56 = 0;
		}
	}
	Global_2392991[iVar82 /*99*/].f_96 = func_6(Param23, iVar82);
	Global_2392991[iVar82 /*99*/].f_97 = 0;
	Global_2392991[iVar82 /*99*/].f_89 = iParam37;
	Global_2395344++;
	Global_2392991[iVar82 /*99*/].f_47 = func_5(Param23);
	if (Global_2392991[iVar82 /*99*/].f_47 != -1)
	{
		Global_2392991[iVar82 /*99*/].f_48 = unk_0x5AFB8ED811F05E4D() + 15000;
	}
	return 1;
}

int func_5(struct<13> Param0)
{
	struct<13> Var0[1];
	int iVar14;
	
	if (!unk_0x929A0C5D6A986B4F())
	{
		return -1;
	}
	Var0[0 /*13*/] = { Param0 };
	iVar14 = unk_0x00BC2C8602FC8E92(&Var0, 1);
	if (iVar14 < 0)
	{
		return -1;
	}
	return iVar14;
}

int func_6(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	if (!unk_0x5AA8CFBEDE9B83FC(&uParam0))
	{
		return 0;
	}
	if (Global_2392991[iParam13 /*99*/].f_90 > 0)
	{
		return 0;
	}
	return 1;
}

int func_7(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13, bool bParam14)
{
	struct<13> Var0;
	
	*iParam13 = 0;
	if (func_11(0))
	{
		return 0;
	}
	if (unk_0x929A0C5D6A986B4F())
	{
		if (!func_10())
		{
			*iParam13 = 1;
			return 1;
		}
	}
	if (!func_9(1) && !bParam14)
	{
		return 1;
	}
	Var0 = { func_8(unk_0x8CFC7D6E1DA5D304()) };
	if (!bParam14 && !unk_0x9BFCAB639B5DFD02(&Var0, &uParam0))
	{
		if (!unk_0x5AA8CFBEDE9B83FC(&uParam0))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_8(int iParam0)
{
	struct<13> Var0;
	
	unk_0xAFA03929DD14DF46(iParam0, &Var0, 13);
	return Var0;
}

int func_9(int iParam0)
{
	if (unk_0xC57A05B38A912073() || (unk_0x0A8A596EB9C068FA() && iParam0 == 0))
	{
		if (unk_0xC8543F17BC4C0591(1) == 0 || unk_0x0C6CA5D78B6BA10E(1, -1) == 0)
		{
			return 0;
		}
	}
	else if (unk_0xC8543F17BC4C0591(1) == 0)
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
	if (unk_0xC57A05B38A912073() && unk_0x1D206D9B095EA01E())
	{
		return 1;
	}
	if (unk_0x35D499EE14C3D367() && unk_0x1D206D9B095EA01E())
	{
		return 1;
	}
	if ((unk_0x0A8A596EB9C068FA() && unk_0xE9A69EF13B00AA9D() == 0) && unk_0x1D206D9B095EA01E())
	{
		return 1;
	}
	if (unk_0x929A0C5D6A986B4F() && unk_0x1D206D9B095EA01E())
	{
		return 1;
	}
	if (unk_0xC339C5C5B5E8BC5B() && unk_0x1D206D9B095EA01E())
	{
		return 1;
	}
	return 0;
}

int func_11(int iParam0)
{
	if (unk_0xC57A05B38A912073() || (unk_0x0A8A596EB9C068FA() && iParam0 == 0))
	{
		if (unk_0xC8543F17BC4C0591(0) == 0 || unk_0x0C6CA5D78B6BA10E(0, -1) == 0)
		{
			return 0;
		}
	}
	else if (unk_0xC8543F17BC4C0591(0) == 0)
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
	if (!unk_0x35D499EE14C3D367())
	{
		return 1;
	}
	return unk_0x1D206D9B095EA01E();
}

int func_13(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	if (!func_14(iParam0))
	{
		if (unk_0x929A0C5D6A986B4F())
		{
			if (unk_0x3F46CD19F4C43D2A(&uParam1))
			{
				return 0;
			}
		}
		if (!unk_0xC8543F17BC4C0591(0))
		{
			if (!unk_0xC8543F17BC4C0591(1))
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
		if (!unk_0x35D499EE14C3D367())
		{
			return;
		}
	}
	if (unk_0x929A0C5D6A986B4F())
	{
		return;
	}
	iVar0 = unk_0x5AFB8ED811F05E4D();
	if (iVar0 < Global_2395341)
	{
		return;
	}
	if (unk_0x622E10ED992CEB95())
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
	Global_2395341 = (iVar0 + 1800000);
}

void func_16(char* sParam0, int iParam1)
{
	unk_0x2202872EA73499C3(sParam0);
	unk_0xF764171B43EBA5E4(0, 0, 1, iParam1);
}

int func_17(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	if (!func_14(iParam0))
	{
		if (unk_0x929A0C5D6A986B4F())
		{
			if (unk_0x3F46CD19F4C43D2A(&uParam1))
			{
				return 0;
			}
		}
		if (!func_18())
		{
			return 1;
		}
	}
	return 0;
}

int func_18()
{
	if (unk_0x68165ED8E69E975A() == 0)
	{
		return 0;
	}
	if (unk_0xC57A05B38A912073())
	{
		if (unk_0x0C6CA5D78B6BA10E(1, -1))
		{
			if (unk_0x1D206D9B095EA01E())
			{
				return 1;
			}
		}
	}
	if (unk_0x0A8A596EB9C068FA())
	{
		if (unk_0xC8543F17BC4C0591(1))
		{
			if (unk_0x1D206D9B095EA01E())
			{
				return 1;
			}
		}
	}
	if (unk_0x35D499EE14C3D367() || unk_0x929A0C5D6A986B4F())
	{
		if (unk_0xFD22D3369BAD2674(0, -3, 1))
		{
			return 1;
		}
	}
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (unk_0x0C6CA5D78B6BA10E(0, -1))
		{
			if (unk_0x1D206D9B095EA01E())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_19(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_23(uParam0))
	{
		return unk_0xB03A1684359C50A1(Global_2395346.f_356[uParam0->f_9 /*75*/].f_10.f_63, 14);
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return unk_0xB03A1684359C50A1(Global_2398103.f_1.f_63, 14);
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return unk_0xB03A1684359C50A1(Global_794708.f_4[iVar1 /*88*/].f_76, 14);
		
		case 62:
			return unk_0xB03A1684359C50A1(Global_907705.f_1204[iVar1 /*88*/].f_76, 14);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x8CFC7D6E1DA5D304())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_20(var uParam0)
{
	int iVar0;
	
	if (unk_0xFAFFA408239A026B(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (unk_0xB03A1684359C50A1(Global_794708.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0x9D39145AD645E383(&(Global_794708.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xB03A1684359C50A1(Global_794708.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1118)
			{
				if (unk_0xB03A1684359C50A1(Global_794708.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0x9D39145AD645E383(&(Global_794708.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (unk_0xB03A1684359C50A1(Global_907705.f_1204[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0x9D39145AD645E383(&(Global_907705.f_1204[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xB03A1684359C50A1(Global_907705.f_1204[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 200)
			{
				if (unk_0xB03A1684359C50A1(Global_907705.f_1204[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0x9D39145AD645E383(&(Global_907705.f_1204[iVar0 /*88*/]), &(uParam0->f_3)))
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
	if (uParam0->f_2 == unk_0x8CFC7D6E1DA5D304())
	{
		if (unk_0xB03A1684359C50A1(Global_950951.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (unk_0x9D39145AD645E383(&(Global_950951.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (unk_0xB03A1684359C50A1(Global_950951.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (unk_0xB03A1684359C50A1(Global_950951.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (unk_0x9D39145AD645E383(&(Global_950951.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
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

int func_21(var uParam0)
{
	if (Global_2398103)
	{
		if (unk_0x9D39145AD645E383(&(Global_2398103.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_22(int iParam0)
{
	return iParam0 == 9999;
}

int func_23(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0->f_9;
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!Global_2395346.f_356[iVar0 /*75*/])
	{
		return 0;
	}
	if (!unk_0x9D39145AD645E383(&(Global_2395346.f_356[iVar0 /*75*/].f_10), &(uParam0->f_3)))
	{
		return 0;
	}
	if (!unk_0xB03A1684359C50A1(Global_2395346.f_356[iVar0 /*75*/].f_5, 3))
	{
		return 0;
	}
	return 1;
}

int func_24(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794708.f_4[iVar1 /*88*/].f_80;
		
		case 62:
			return iVar0;
		
		default:
	}
	return iVar0;
}

int func_25(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	int iVar14;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = 0;
	iVar14 = func_20(uParam0);
	if (iVar14 == -1)
	{
		return iVar13;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_26(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar13;
		
		default:
	}
	return iVar13;
}

struct<13> func_26(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = func_20(uParam0);
	if (iVar13 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794708.f_98389[iVar13 /*13*/];
		
		case 62:
			return Global_907705.f_18805[iVar13 /*13*/];
		
		default:
	}
	return Var0;
}

int func_27(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_23(uParam0))
	{
		return unk_0xB03A1684359C50A1(Global_2395346.f_356[uParam0->f_9 /*75*/].f_10.f_63, 17);
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return unk_0xB03A1684359C50A1(Global_2398103.f_1.f_63, 17);
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return unk_0xB03A1684359C50A1(Global_794708.f_4[iVar1 /*88*/].f_76, 17);
		
		case 62:
			return unk_0xB03A1684359C50A1(Global_907705.f_1204[iVar1 /*88*/].f_76, 17);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x8CFC7D6E1DA5D304())
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
		if (func_23(uParam0))
		{
			if (unk_0xB03A1684359C50A1(Global_1311772.f_1[uParam0->f_9 /*2*/], 0))
			{
				return Global_2398237.f_513[uParam0->f_9];
			}
		}
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_2398103.f_1.f_54;
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return 0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794708.f_4[iVar1 /*88*/].f_54;
		
		case 62:
			return Global_907705.f_1204[iVar1 /*88*/].f_54;
		
		case 40:
			return 0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x8CFC7D6E1DA5D304())
	{
		return Global_950951.f_5[iVar1 /*88*/].f_54;
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
	if (func_23(uParam0))
	{
		return Global_2395346.f_356[uParam0->f_9 /*75*/].f_10.f_28;
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_2398103.f_1.f_28;
		}
		return Var0;
	}
	iVar16 = func_20(uParam0);
	if (iVar16 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794708.f_4[iVar16 /*88*/].f_38;
		
		case 62:
			return Global_907705.f_1204[iVar16 /*88*/].f_38;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x8CFC7D6E1DA5D304())
	{
		return Global_950951.f_5[iVar16 /*88*/].f_38;
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
		if (func_23(uParam0))
		{
			if (unk_0xB03A1684359C50A1(Global_1311772.f_1[uParam0->f_9 /*2*/], 0))
			{
				return Global_2398237[uParam0->f_9 /*16*/];
			}
			return Global_2395346.f_356[uParam0->f_9 /*75*/].f_10.f_12;
		}
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_2398103.f_1.f_12;
		}
		return Var0;
	}
	iVar16 = func_20(uParam0);
	if (iVar16 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794708.f_4[iVar16 /*88*/].f_22;
		
		case 62:
			return Global_907705.f_1204[iVar16 /*88*/].f_22;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x8CFC7D6E1DA5D304())
	{
		return Global_950951.f_5[iVar16 /*88*/].f_22;
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
	if (func_23(uParam0))
	{
		return Global_2395346.f_356[uParam0->f_9 /*75*/].f_10.f_55;
	}
	if (func_22(uParam0->f_1))
	{
		if (func_21(uParam0))
		{
			return Global_2398103.f_1.f_55;
		}
		return iVar0;
	}
	iVar1 = func_20(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794708.f_4[iVar1 /*88*/].f_68;
		
		case 62:
			return Global_907705.f_1204[iVar1 /*88*/].f_68;
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0x8CFC7D6E1DA5D304())
	{
		return Global_950951.f_5[iVar1 /*88*/].f_68;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_32(int iParam0, int iParam1)
{
	if (func_22(iParam1))
	{
		if (Global_2398103)
		{
			return Global_2398103.f_1.f_53;
		}
		return 236;
	}
	switch (iParam0)
	{
		case 63:
			return Global_794708.f_4[iParam1 /*88*/].f_65;
		
		case 62:
			return Global_907705.f_1204[iParam1 /*88*/].f_65;
		
		default:
	}
	if (iParam0 == unk_0x8CFC7D6E1DA5D304())
	{
		return Global_950951.f_5[iParam1 /*88*/].f_65;
	}
	else if (iParam0 < 32)
	{
		return 236;
	}
	return 236;
}

int func_33(char* sParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x44243F2E2F58B8E3())
	{
		return 0;
	}
	if (unk_0xFAFFA408239A026B(sParam0))
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
		if (unk_0xB03A1684359C50A1(Global_794708.f_4[iVar0 /*88*/].f_76, 13))
		{
			if (unk_0x9D39145AD645E383(&(Global_794708.f_4[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_794708.f_4[iVar0 /*88*/].f_65;
				*uParam1 = func_34(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 63;
				uParam1->f_3 = { Global_794708.f_4[iVar0 /*88*/] };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 200)
	{
		if (unk_0xB03A1684359C50A1(Global_907705.f_1204[iVar0 /*88*/].f_76, 13))
		{
			if (unk_0x9D39145AD645E383(&(Global_907705.f_1204[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_907705.f_1204[iVar0 /*88*/].f_65;
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
		if (unk_0xB03A1684359C50A1(Global_950951.f_5[iVar0 /*88*/].f_76, 13))
		{
			if (unk_0x9D39145AD645E383(&(Global_950951.f_5[iVar0 /*88*/]), sParam0))
			{
				iVar1 = Global_950951.f_5[iVar0 /*88*/].f_65;
				*uParam1 = func_34(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = unk_0x8CFC7D6E1DA5D304();
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
			return 131;
		
		case 14:
			return 132;
		
		case 122:
			return 136;
		
		case 11:
			return 133;
		
		case 13:
			return 134;
		
		case 12:
			return 135;
		
		case 8:
			return 138;
		
		case 1:
			return 139;
		
		case 5:
			return 137;
		
		case 6:
			return 140;
		
		case 3:
			return 143;
		
		case 0:
			return 141;
		
		case 2:
			return 142;
		
		case 148:
			return 49;
		
		case 151:
			return 52;
		
		case 152:
			return 53;
		
		case 157:
			return 54;
		
		case 153:
			return 55;
		
		case 154:
			return 56;
		
		case 155:
			return 57;
		
		case 159:
			return 58;
		
		case 162:
			return 51;
		
		case 142:
			return 60;
		
		case 160:
			return 62;
		
		case 164:
			return 63;
		
		case 163:
			return 64;
		
		case 166:
			return 65;
		
		case 167:
			return 66;
		
		case 168:
			return 67;
		
		case 169:
			return 68;
		
		case 170:
			return 69;
		
		case 171:
			return 70;
		
		case 172:
			return 71;
		
		case 173:
			return 72;
		
		case 178:
			return 73;
		
		case 188:
			return 74;
		
		case 214:
			return 75;
		
		case 215:
			return 76;
		
		case 216:
			return 77;
		
		case 217:
			return 78;
		
		case 218:
			return 79;
		
		case 219:
			return 80;
		
		case 220:
			return 81;
		
		case 221:
			return 82;
		
		case 179:
			return 84;
		
		case 189:
			return 83;
		
		case 180:
			return 85;
		
		case 182:
			return 86;
		
		case 183:
			return 87;
		
		case 185:
			return 88;
		
		case 186:
			return 89;
		
		case 190:
			return 90;
		
		case 191:
			return 91;
		
		case 192:
			return 92;
		
		case 193:
			return 93;
		
		case 205:
			return 101;
		
		case 194:
			return 94;
		
		case 197:
			return 95;
		
		case 198:
			return 96;
		
		case 195:
			return 97;
		
		case 199:
			return 98;
		
		case 200:
			return 99;
		
		case 201:
			return 100;
		
		case 207:
			return 102;
		
		case 208:
			return 103;
		
		case 209:
			return 104;
		
		case 210:
			return 105;
		
		case 225:
			return 106;
		
		case 226:
			return 107;
		
		case 227:
			return 108;
		
		case 229:
			return 109;
		
		case 230:
			return 110;
		
		case 233:
			return 112;
		
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
	
	if (unk_0xFAFFA408239A026B(uParam0))
	{
		return 0;
	}
	iVar0 = unk_0xA49B74E0C954F146(sParam0);
	if (!iVar0 > 12)
	{
		return 0;
	}
	StringCopy(&cVar1, unk_0xE9F37E041B0D3DDB(sParam0, 0, 5), 8);
	if (!unk_0x9D39145AD645E383(&cVar1, "FAKE_"))
	{
		return 0;
	}
	StringCopy(&cVar3, unk_0xE9F37E041B0D3DDB(sParam0, 5, 12), 16);
	if (unk_0x9D39145AD645E383(&cVar3, "GOLF___"))
	{
		*iParam1 = 11;
	}
	else if (unk_0x9D39145AD645E383(&cVar3, "TENNIS_"))
	{
		*iParam1 = 12;
	}
	else if (unk_0x9D39145AD645E383(&cVar3, "PILOTS_"))
	{
		*iParam1 = 122;
	}
	else if (unk_0x9D39145AD645E383(&cVar3, "SHOOTR_"))
	{
		*iParam1 = 13;
	}
	else if (unk_0x9D39145AD645E383(&cVar3, "DARTS__"))
	{
		*iParam1 = 14;
	}
	else if (unk_0x9D39145AD645E383(&cVar3, "ARMWRS_"))
	{
		*iParam1 = 15;
	}
	else
	{
		return 0;
	}
	StringCopy(&cVar7, unk_0xE9F37E041B0D3DDB(sParam0, 12, iVar0), 8);
	if (!unk_0x0C5437968165D150(&cVar7, iParam2))
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
	
	if (iParam0 >= Global_1367583)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (unk_0x5AFB8ED811F05E4D() > Global_2395292[iVar0 /*4*/].f_2 || Global_2395292[iVar0 /*4*/].f_2 == 0)
		{
			if (unk_0xE10E7A0F655C6A4E() > 0 && Global_2392991[iParam0 /*99*/].f_91 < unk_0xE10E7A0F655C6A4E())
			{
				Global_2395292[iVar0 /*4*/].f_3 = unk_0x4417728A3260AF6D(Global_2392991[iParam0 /*99*/].f_91);
				Global_2395292[iVar0 /*4*/].f_2 = unk_0x5AFB8ED811F05E4D() + 30000;
				iVar0 = 12;
			}
		}
		iVar0++;
	}
	if (Global_2392991[iParam0 /*99*/].f_92 != -1)
	{
		unk_0x1BEAF0E2DD876AA1(Global_2392991[iParam0 /*99*/].f_92);
	}
	if (!Global_2392991[iParam0 /*99*/].f_56)
	{
		if (Global_2392991[iParam0 /*99*/].f_52 != 0)
		{
			unk_0x7A4E3379D36198FB(Global_2392991[iParam0 /*99*/].f_52);
		}
	}
	func_45(Global_2392991[iParam0 /*99*/].f_91);
	iVar1 = iParam0;
	iVar2 = iVar1 + 1;
	while (iVar2 < Global_1367583)
	{
		Global_2392991[iVar1 /*99*/] = { Global_2392991[iVar2 /*99*/] };
		iVar1++;
		iVar2++;
	}
	func_39(iVar1);
	Global_1367583 = (Global_1367583 - 1);
	if (Global_1367556)
	{
		if (Global_1367554 > 0)
		{
			func_38();
		}
	}
}

void func_38()
{
	Global_1367556 = 0;
}

void func_39(int iParam0)
{
	Global_2392991[iParam0 /*99*/] = 0;
	Global_2392991[iParam0 /*99*/].f_1 = 0;
	Global_2392991[iParam0 /*99*/].f_5 = 0;
	StringCopy(&(Global_2392991[iParam0 /*99*/].f_15), "", 64);
	StringCopy(&(Global_2392991[iParam0 /*99*/].f_31), "", 64);
	Global_2392991[iParam0 /*99*/].f_47 = -1;
	Global_2392991[iParam0 /*99*/].f_48 = unk_0x5AFB8ED811F05E4D();
	Global_2392991[iParam0 /*99*/].f_49 = -1;
	Global_2392991[iParam0 /*99*/].f_50 = -1;
	Global_2392991[iParam0 /*99*/].f_51 = -1;
	Global_2392991[iParam0 /*99*/].f_52 = 0;
	Global_2392991[iParam0 /*99*/].f_53 = 0;
	Global_2392991[iParam0 /*99*/].f_53.f_1 = 0;
	Global_2392991[iParam0 /*99*/].f_53.f_2 = 0;
	Global_2392991[iParam0 /*99*/].f_56 = 0;
	StringCopy(&(Global_2392991[iParam0 /*99*/].f_57), "", 64);
	StringCopy(&(Global_2392991[iParam0 /*99*/].f_73), "", 64);
	Global_2392991[iParam0 /*99*/].f_89 = 0;
	Global_2392991[iParam0 /*99*/].f_90 = 0;
	Global_2392991[iParam0 /*99*/].f_91 = -1;
	Global_2392991[iParam0 /*99*/].f_92 = -1;
	Global_2392991[iParam0 /*99*/].f_93 = 0;
	Global_2392991[iParam0 /*99*/].f_94 = -1;
	Global_2392991[iParam0 /*99*/].f_95 = 0;
	Global_2392991[iParam0 /*99*/].f_96 = 0;
	Global_2392991[iParam0 /*99*/].f_97 = 0;
	Global_2392991[iParam0 /*99*/].f_98 = 0;
}

int func_40(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1367583)
	{
		if (unk_0x9D39145AD645E383(&uParam0, &(Global_2392991[iVar0 /*99*/].f_15)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_41(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_142, 22);
}

bool func_42(bool bParam0)
{
	if (!bParam0 && unk_0xE7FAF8E78F7D3A73(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB03A1684359C50A1(Global_71100, 0);
}

int func_43()
{
	if (Global_104551.f_9055.f_330[0 /*6*/])
	{
		return 1;
	}
	return 0;
}

bool func_44()
{
	return unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_142, 2);
}

void func_45(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0xF0B0AE3E44C7F059(uParam0);
	if (iVar0 < 0 || iVar0 >= unk_0xE10E7A0F655C6A4E())
	{
		return;
	}
	if (unk_0x9830B34990B06859(iVar0))
	{
		return;
	}
}

bool func_46()
{
	return Global_1312814 == 10;
}

int func_47()
{
	if (!Global_70852)
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
	
	uVar0 = Global_2547154[iParam0 /*3*/][func_50(iParam1)];
	if (unk_0xA17AF9F044C9C70E(uVar0, &uVar1, -1))
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

int func_51()
{
	return Global_1312736;
}

bool func_52()
{
	return Global_1312842;
}

bool func_53()
{
	return Global_1312844;
}

void func_54(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 == -1)
	{
		iVar0 = func_51();
	}
	Global_1312834[iVar0] = uParam0;
}

void func_55(int iParam0)
{
	func_105();
	if (func_104(1))
	{
		if (!func_95())
		{
			if (!func_84(1))
			{
				if (unk_0x13C2BC1B63ABBCD5())
				{
					func_83();
				}
				func_58(1, 0);
				unk_0x972EF740398F1324(iParam0);
				func_57();
				func_56();
			}
		}
	}
}

void func_56()
{
	Global_1794960.f_7 = 1;
}

void func_57()
{
	Global_1794960.f_6 = 1;
}

void func_58(int iParam0, bool bParam1)
{
	if (func_104(iParam0))
	{
		Global_1794960.f_16[iParam0 /*44*/].f_5 = 1;
		func_60(iParam0, 0);
		func_59();
		if (bParam1)
		{
			Global_1794960 = 1;
		}
	}
}

void func_59()
{
	Global_1794960.f_2 = 1;
}

void func_60(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	if (!unk_0x13C2BC1B63ABBCD5())
	{
		if (bParam1)
		{
			func_82();
			func_72(unk_0x8CFC7D6E1DA5D304(), 0, 81920);
			Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_98 = 8;
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
	StringCopy(&(Global_2447128.f_746), sParam0, 24);
	if (func_62())
	{
		StringCopy(&(Global_971063.f_42), sParam0, 24);
	}
}

bool func_62()
{
	return unk_0xB03A1684359C50A1(Global_2447908.f_1.f_2809, 5);
}

void func_63(int iParam0)
{
	Global_1794960.f_16[iParam0 /*44*/].f_3 = 1;
}

struct<6> func_64(int iParam0)
{
	return Global_1794960.f_16[iParam0 /*44*/].f_6;
}

void func_65()
{
	Global_2447128.f_6 = 100;
}

void func_66()
{
	unk_0xD2A9C3F486236CC5(&Global_2447128, 5);
	func_67();
}

void func_67()
{
	unk_0xD2A9C3F486236CC5(&Global_2447128, 8);
}

void func_68(var uParam0)
{
	Global_1794960.f_8 = uParam0;
}

void func_69(var uParam0)
{
	Global_1794960.f_9 = uParam0;
}

void func_70()
{
	Global_2455103.f_1 = 0;
}

void func_71()
{
	char* sVar0;
	
	StringCopy(&(Global_2447128.f_746), sVar0, 24);
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
		if (!func_80())
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
			uVar25 = unk_0x6604E096142B4B55(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x44243F2E2F58B8E3())
				{
					unk_0x710A8C8CDF18A4F9(1);
				}
				else if (bVar13 || (!func_78(unk_0x8CFC7D6E1DA5D304(), 0) && !func_77()))
				{
					unk_0xA12407EB7D7CF146(uVar25, !bVar13, 0);
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
				if (!func_76(uVar25) && !unk_0x4AA6B5B9E27A254A(uVar25))
				{
					if (!bVar21)
					{
						unk_0xF342BF6A7A4C7A8F(uVar25, true, 0);
					}
				}
				if (!unk_0x4A296E47F281D02F(uVar25))
				{
					if (!bVar20)
					{
						unk_0x73D7E57BF0ED7FEB(uVar25, false);
					}
					unk_0xB05881241072FEE6(uVar25, 1);
				}
				else if (!bVar20)
				{
					unk_0x73D7E57BF0ED7FEB(uVar25, false);
				}
				unk_0x44EB7E24C5D75087(uVar25, true);
				unk_0x36643EAE6212D16F(iParam0, 0);
				unk_0x0ACEE7BC79EA804E(uVar25);
				unk_0xBDFA8A71B1A23D86(uVar25, 1);
				func_75();
				func_74();
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
				if (!func_76(uVar25) && !unk_0x4AA6B5B9E27A254A(uVar25))
				{
					if (!bVar21)
					{
						unk_0xF342BF6A7A4C7A8F(uVar25, !bVar14, 0);
					}
					if (!unk_0x4A296E47F281D02F(uVar25))
					{
						if (!bVar20)
						{
							unk_0x73D7E57BF0ED7FEB(uVar25, bVar15);
						}
						if (!bVar15)
						{
							unk_0xB05881241072FEE6(uVar25, 1);
						}
					}
					if (func_73(Global_1646129.f_138609))
					{
						unk_0x73D7E57BF0ED7FEB(uVar25, true);
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
				unk_0x44EB7E24C5D75087(uVar25, bVar16);
				if (bVar2)
				{
					if (!unk_0x570C394C1E0D8834(uVar25) && !unk_0x657B649BA2AD3582(uVar25, 0))
					{
						unk_0xD9FCA20C1C5553F7(uVar25);
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

bool func_73(int iParam0)
{
	return iParam0 == 17;
}

void func_74()
{
	struct<3> Var0;
	
	Global_2436169.f_1117 = 0;
	Global_2436169.f_1118 = 0;
	Global_2436169.f_1119 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2436169.f_1124 = -1;
	Global_2436169.f_1125 = 0;
	Global_2405047.f_2648 = { Var0 };
}

void func_75()
{
	Global_2405047.f_674 = 0;
	Global_2405047.f_2691 = 0;
	Global_2405047.f_507 = 0;
	Global_2405047.f_586 = 0;
	Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_222 = 0;
}

int func_76(var uParam0)
{
	int iVar0;
	
	if (unk_0x657B649BA2AD3582(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x2BBAA45ECDE3DAE2(uParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_77()
{
	return unk_0xB03A1684359C50A1(Global_2359302, 3);
}

bool func_78(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x8CFC7D6E1DA5D304())
	{
		bVar0 = func_79(-1, 0) == 8;
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

int func_79(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_51();
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

int func_80()
{
	if (func_81() == 0)
	{
		return 1;
	}
	return 0;
}

int func_81()
{
	return Global_1312466.f_18;
}

void func_82()
{
	unk_0xD2A9C3F486236CC5(&Global_2447128, 7);
}

void func_83()
{
	unk_0xD2A9C3F486236CC5(&(Global_2447128.f_2), 15);
}

int func_84(int iParam0)
{
	if (iParam0 || func_94())
	{
		if (!func_86(1))
		{
			return 1;
		}
		if (!func_85())
		{
			return 1;
		}
		if (unk_0x12E47521EE5A4E11())
		{
			return 1;
		}
	}
	return 0;
}

bool func_85()
{
	return Global_1794960.f_4;
}

int func_86(bool bParam0)
{
	if (!func_91())
	{
		return 0;
	}
	if ((func_89(func_90(-1), 0) >= 1 || func_49(123, -1)) && func_49(133, -1))
	{
		func_88();
		return 1;
	}
	else if (bParam0)
	{
		func_87();
	}
	return 0;
}

void func_87()
{
	Global_1794960.f_5 = 1;
}

void func_88()
{
	Global_1794960.f_4 = 1;
}

int func_89(int iParam0, int iParam1)
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
		if (Global_284737[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_284737[iVar3] < iParam0)
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

int func_90(int iParam0)
{
	return Global_1367874[func_50(iParam0)];
}

int func_91()
{
	if (func_93() && func_92(0))
	{
		return 1;
	}
	return 0;
}

var func_92(int iParam0)
{
	return Global_1312373[iParam0];
}

var func_93()
{
	return func_92(func_51() + 1);
}

var func_94()
{
	return Global_1794960.f_2;
}

int func_95()
{
	if (((((func_103() || !func_101(-1)) || !func_99()) || !func_98()) || !func_97()) || func_96())
	{
		return 1;
	}
	return 0;
}

var func_96()
{
	return Global_2456794;
}

int func_97()
{
	if (unk_0x3A75EA627A024B7A(903) == 1)
	{
		return 1;
	}
	return 0;
}

int func_98()
{
	int iVar0;
	
	if (unk_0xCA65355F802C0B76(&iVar0) == 0)
	{
		if (iVar0 == 1)
		{
			return 0;
		}
	}
	return 1;
}

int func_99()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (func_100(iVar0) == 1)
		{
			iVar0 = 2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_100(int iParam0)
{
	if (func_49(76, iParam0) == 1)
	{
		return 1;
	}
	return 0;
}

int func_101(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_102(iParam0);
	uVar1 = unk_0x3A75EA627A024B7A(uVar0);
	if (unk_0xB03A1684359C50A1(uVar1, 1))
	{
		return 1;
	}
	return 0;
}

int func_102(int iParam0)
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

var func_103()
{
	return Global_2447128.f_630;
}

bool func_104(int iParam0)
{
	return Global_1794960.f_16[iParam0 /*44*/].f_4;
}

void func_105()
{
	int iVar0;
	int iVar1;
	
	func_111();
	if (unk_0x6C0E9542BCB33373() && !func_108())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = unk_0x2C40BDFDCF599967(func_107(iVar0));
			if (iVar1 > 0)
			{
				Global_1794960.f_16[iVar0 /*44*/] = iVar1;
				func_106(iVar0, iVar1);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Global_1794960.f_16[iVar0 /*44*/].f_4 = 0;
			iVar0++;
		}
	}
}

void func_106(int iParam0, int iParam1)
{
	bool bVar0;
	struct<16> Var1;
	var uVar17;
	
	bVar0 = true;
	if (unk_0x2BF358B6BF114E49(iParam1, "contentId", &Var1))
	{
		MemCopy(&(Global_1794960.f_16[iParam0 /*44*/].f_6), {Var1}, 6);
	}
	else
	{
		bVar0 = false;
	}
	if (unk_0x2BF358B6BF114E49(iParam1, "playlist", &Var1))
	{
		Global_1794960.f_16[iParam0 /*44*/].f_12 = { Var1 };
	}
	else
	{
		bVar0 = false;
	}
	if (unk_0xD36F5A5746ED14E5(iParam1, &Var1))
	{
		Global_1794960.f_16[iParam0 /*44*/].f_28 = { Var1 };
	}
	else
	{
		bVar0 = false;
	}
	if (iParam0 == 1)
	{
		if (unk_0x530D93C4759D89B3(iParam1, "coronaCountdown", &uVar17))
		{
			Global_1794960.f_16[iParam0 /*44*/].f_1 = uVar17;
		}
		else
		{
			Global_1794960.f_16[iParam0 /*44*/].f_1 = 120000;
		}
		Global_1794960.f_16[iParam0 /*44*/].f_2 = 0;
		if (unk_0x530D93C4759D89B3(iParam1, "eventSubType", &uVar17))
		{
			Global_1794960.f_16[iParam0 /*44*/].f_2 = uVar17;
		}
	}
	if (bVar0)
	{
		if (iParam0 != 1)
		{
			Global_1794960.f_1 = 1;
		}
		Global_1794960.f_16[iParam0 /*44*/].f_4 = 1;
	}
	else
	{
		Global_1794960.f_16[iParam0 /*44*/].f_4 = 0;
	}
}

char* func_107(int iParam0)
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

int func_108()
{
	if (!func_109())
	{
		return 1;
	}
	return 0;
}

int func_109()
{
	if (func_110())
	{
		return 0;
	}
	if (unk_0x9D67C2091DFDB507() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_110()
{
	return Global_2457277;
}

void func_111()
{
	struct<281> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_16 = 6;
	Global_1794960 = { Var0 };
}

void func_112(int iParam0)
{
	var uVar0;
	
	if (Global_70852)
	{
		unk_0x929C3CBA660376D5(-1, "Hang_Up", "Phone_SoundSet_Michael", 1);
	}
	else
	{
		unk_0x929C3CBA660376D5(-1, "Hang_Up", &Global_14442, 1);
	}
	if (unk_0xF6A7C6FEAD04F4B3(1, iParam0, &uVar0, 21))
	{
		func_114();
	}
	Global_2518483.f_1 = 0;
	Global_2518483.f_33 = -1;
	Global_2518483.f_34 = -1;
	StringCopy(&(Global_2518483.f_4), "", 64);
	func_113(&(Global_2518483.f_20));
}

void func_113(var uParam0)
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

void func_114()
{
	Global_2518483.f_2 = 1;
	Global_2518483.f_38 = 1;
	if (unk_0xA1C84586015AE5DB())
	{
		if (unk_0xF9817C8F3EA8ACFA())
		{
			while (unk_0x56084A31DC07B408())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0x846E40A2A310ADEB();
			Global_2518483 = 0;
			Global_2518483.f_2 = 0;
		}
		else if (func_120(Global_2518483.f_20))
		{
			if (unk_0x5AA8CFBEDE9B83FC(&(Global_2518483.f_20)))
			{
				if (!unk_0x9AD4F3A39CDEADAA(&(Global_2518483.f_20)))
				{
					func_119();
				}
			}
		}
		else
		{
			func_119();
		}
	}
	else
	{
		func_119();
	}
	if (Global_2518483.f_37)
	{
		func_115(0);
	}
	Global_2518483.f_37 = 0;
	Global_2518483.f_3 = 0;
}

void func_115(int iParam0)
{
	if (Global_14615)
	{
		func_117(0, 0);
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
	if (!func_116())
	{
		Global_14453.f_1 = 3;
	}
}

int func_116()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_117(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_118(0))
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

int func_118(int iParam0)
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

void func_119()
{
	Global_2518483.f_1 = 0;
	Global_2518483 = 0;
	Global_2518483.f_2 = 0;
	Global_2518483.f_33 = -1;
	Global_2518483.f_34 = -1;
	StringCopy(&(Global_2518483.f_4), "", 64);
	StringCopy(&(Global_2518483.f_39[0 /*16*/]), "", 64);
	Global_2518483.f_38 = 0;
	Global_2518483.f_56 = 0;
	Global_2518483.f_57 = 0;
	Global_2518483.f_58 = -2;
	Global_2518483.f_3 = 0;
	func_113(&(Global_2518483.f_20));
}

bool func_120(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xBD82AF3F842B99A5(&uParam0, 13);
}

void func_121(int iParam0)
{
	struct<2> Var0;
	
	if (unk_0xF6A7C6FEAD04F4B3(1, iParam0, &Var0, 15))
	{
		Global_2518483.f_33 = Var0.f_1;
		Global_2518483.f_34 = Var0.f_0;
	}
}

void func_122(int iParam0)
{
	struct<9> Var0;
	
	if (unk_0xF6A7C6FEAD04F4B3(1, iParam0, &Var0, 21))
	{
		if (Global_2518483.f_3 == 0)
		{
			if (!func_123(&(Var0.f_8)))
			{
				unk_0x829241FA64AB5FA1(0, 2);
			}
			else
			{
				Global_2518483.f_3 = 1;
				MemCopy(&(Global_2518483.f_4), {Var0}, 16);
				Global_2518483.f_20 = { Var0.f_8 };
				StringCopy(&(Global_2518483.f_39[0 /*16*/]), "", 64);
				Global_2518483.f_58 = -2;
				Global_2518483.f_56 = 0;
				Global_2518483.f_57 = 0;
			}
		}
		else if (!func_123(&(Var0.f_8)))
		{
			unk_0x829241FA64AB5FA1(0, 2);
		}
		else
		{
			Global_2518483.f_3 = 1;
			MemCopy(&(Global_2518483.f_4), {Var0}, 16);
			Global_2518483.f_20 = { Var0.f_8 };
			StringCopy(&(Global_2518483.f_39[0 /*16*/]), "", 64);
			Global_2518483.f_58 = -2;
			Global_2518483.f_56 = 0;
			Global_2518483.f_57 = 0;
		}
	}
}

int func_123(var uParam0)
{
	if (Global_70852)
	{
		if (func_48() == 0)
		{
			return 0;
		}
		if (func_127(unk_0x8CFC7D6E1DA5D304(), 1, 1))
		{
			if (unk_0xE1F715CDDC50FD7F(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xEED1A4324E97E6A8(unk_0x18F7BE9ACB7D08F4()) >= 1f)
				{
					return 0;
				}
			}
		}
	}
	if (unk_0x9D67C2091DFDB507() == 0)
	{
		return 0;
	}
	if (Global_2518483.f_1)
	{
	}
	if (Global_14623 == 1)
	{
		return 0;
	}
	if (Global_1574329)
	{
		return 0;
	}
	if (Global_2518483.f_36)
	{
		return 0;
	}
	if (func_116())
	{
		return 0;
	}
	if (((Global_35859 != 6 && Global_35859 != 8) && Global_35859 != 12) && Global_35859 != 15)
	{
		return 0;
	}
	if (func_126() && !func_125(12))
	{
		return 0;
	}
	if (unk_0x36328FCBA2944E1F())
	{
		return 0;
	}
	if (unk_0x61F9977B378C43BF())
	{
		return 0;
	}
	if (!func_124(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	if (unk_0xC83C302702976DCB())
	{
		return 0;
	}
	if (Global_71112)
	{
		return 0;
	}
	if (unk_0x4EBF0CEB194BA564())
	{
		if (!unk_0xCEFAEBE7BDF8F585(unk_0x8CFC7D6E1DA5D304()))
		{
			return 0;
		}
	}
	if (!unk_0xA1C84586015AE5DB())
	{
		return 0;
	}
	if (unk_0x09D29DA94049CC42(uParam0) || unk_0x7DADFA2EB9BED04C(uParam0))
	{
		return 0;
	}
	if (unk_0x01AEA15D74FA1212(uParam0) || unk_0xE9FB42656466112E(uParam0))
	{
		return 0;
	}
	if (unk_0x5701085C6C540A3B())
	{
		if (unk_0x929A0C5D6A986B4F())
		{
			if (unk_0xAE2FAE1C024B6088())
			{
				return 0;
			}
		}
		else if (unk_0x0A8A596EB9C068FA())
		{
			return 0;
		}
	}
	return 1;
}

int func_124(int iParam0)
{
	int iVar0;
	struct<13> Var1;
	
	if (unk_0x68165ED8E69E975A() == 0)
	{
		return 0;
	}
	iVar0 = -1;
	if (iParam0 != unk_0x8CFC7D6E1DA5D304())
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	if (unk_0xC57A05B38A912073() || unk_0x0A8A596EB9C068FA())
	{
		if (unk_0x0C6CA5D78B6BA10E(0, iVar0))
		{
			if (unk_0x1D206D9B095EA01E())
			{
				return 1;
			}
		}
	}
	if (unk_0x35D499EE14C3D367() || unk_0x929A0C5D6A986B4F())
	{
		if (iParam0 == unk_0x8CFC7D6E1DA5D304())
		{
			if (unk_0x7DB2DBF9F00F360B(0, -3, 1) || unk_0x0C6CA5D78B6BA10E(1, -1))
			{
				return 1;
			}
		}
		else
		{
			Var1 = { func_8(iParam0) };
			if (unk_0x0C6CA5D78B6BA10E(0, -1) || (unk_0x0C6CA5D78B6BA10E(1, -1) && unk_0x5AA8CFBEDE9B83FC(&Var1)))
			{
				return 1;
			}
		}
	}
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (unk_0x0C6CA5D78B6BA10E(0, iVar0))
		{
			if (unk_0x1D206D9B095EA01E())
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_125(int iParam0)
{
	return Global_35859 == iParam0;
}

int func_126()
{
	if (Global_35859 == 15)
	{
		return 0;
	}
	return 1;
}

int func_127(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0x4AF13BCD120BCDBC(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0x557001354138B7FB(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436169.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_128()
{
	func_119();
}

void func_129()
{
	Global_2518483.f_1 = 1;
	Global_2518483.f_33 = -1;
	Global_2518483.f_34 = -1;
	if (unk_0x5C716BBF766E1C70(Global_14434) == 1)
	{
		if (Global_14441)
		{
			func_130(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
			if (Global_14396)
			{
				func_130(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else
		{
			func_130(Global_14434, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		}
	}
}

void func_130(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x76F4FB5EFF5BDED5(uParam0, sParam1);
	unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xFAFFA408239A026B(sParam7))
	{
		func_131(sParam7);
	}
	if (!unk_0xFAFFA408239A026B(iParam8))
	{
		func_131(iParam8);
	}
	if (!unk_0xFAFFA408239A026B(iParam9))
	{
		func_131(iParam9);
	}
	if (!unk_0xFAFFA408239A026B(iParam10))
	{
		func_131(iParam10);
	}
	if (!unk_0xFAFFA408239A026B(iParam11))
	{
		func_131(iParam11);
	}
	unk_0xE2B30EB9B14EEAB2();
}

void func_131(var uParam0)
{
	unk_0x0ECBA72FAFCEBA59(uParam0);
	unk_0xC30401186AC91B01();
}

void func_132()
{
	int iVar0;
	
	if (iLocal_96)
	{
		Global_48152 = 0;
		Global_48152.f_12 = 0;
		Global_48152.f_24 = 0;
		Global_48152.f_36 = 0;
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_48152.f_1[iVar0] = 0;
			Global_48152.f_13[iVar0] = 0;
			Global_48152.f_25[iVar0] = 0;
			Global_48152.f_37[iVar0] = 0;
			iVar0++;
		}
		iLocal_96 = 0;
	}
}

