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
	if (unk_0xD63E63DFACCEB80E(34))
	{
		unk_0xE60DEFFB2A853900();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(0);
		func_127();
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
	if (unk_0x0AF1D13FCD3E5065())
	{
		iVar2 = 0;
		while (iVar2 < unk_0x2FAEA355B623BA14(1))
		{
			iVar7 = unk_0x18F85CAA17F9F9A1(1, iVar2);
			switch (iVar7)
			{
				case 186:
					func_124();
					break;
				
				case 187:
					func_123();
					break;
				
				case 188:
					func_117(iVar2);
					break;
				
				case 189:
					func_116(iVar2);
					break;
				
				case 190:
					func_107(iVar2);
					break;
				
				case 208:
					func_3(iVar2);
					break;
			}
			iVar2++;
		}
	}
	iVar2 = 0;
	while (iVar2 < unk_0x2FAEA355B623BA14(0))
	{
		iVar0 = unk_0x18F85CAA17F9F9A1(0, iVar2);
		iLocal_88 = 1;
		switch (iVar0)
		{
			case 139:
				unk_0x2E567DCD11FE0296(0, iVar2, &uVar1, 1);
				if (unk_0x746960881FB19A89(uVar1))
				{
					if (unk_0x2B1914308D0376C8(uVar1))
					{
						if (func_2(iVar3))
						{
							Global_47002.f_1[iVar3] = uVar1;
							iVar3++;
						}
					}
					else if (unk_0x4E178F5D4155391A(uVar1))
					{
						if (func_2(iVar5))
						{
							Global_47002.f_25[iVar5] = uVar1;
							iVar5++;
						}
					}
				}
				break;
			
			case 140:
				unk_0x2E567DCD11FE0296(0, iVar2, &uVar1, 1);
				if (unk_0x746960881FB19A89(uVar1))
				{
					if (unk_0x2B1914308D0376C8(uVar1))
					{
						if (func_2(iVar4))
						{
							Global_47002.f_13[iVar4] = uVar1;
							iVar4++;
						}
					}
					else if (unk_0x4E178F5D4155391A(uVar1))
					{
						if (func_2(iVar6))
						{
							Global_47002.f_37[iVar6] = uVar1;
							iVar6++;
						}
					}
				}
				break;
		}
		iVar2++;
	}
	Global_47002 = iVar3;
	Global_47002.f_12 = iVar4;
	Global_47002.f_24 = iVar5;
	Global_47002.f_36 = iVar6;
}

bool func_2(int iParam0)
{
	return iParam0 < 10;
}

void func_3(int iParam0)
{
	struct<39> Var0;
	int iVar39;
	
	if (unk_0x2E567DCD11FE0296(1, iParam0, &Var0, 39))
	{
		iVar39 = unk_0x0C66B3D5FEF6AC13(Var0.f_38);
		if (iVar39 >= 0 && iVar39 < unk_0x499F06E99E27AF30())
		{
			if (unk_0x53F7AD007E01D2C7(iVar39) || unk_0x9BECEABE58559010(iVar39))
			{
				if (unk_0x9BECEABE58559010(iVar39))
				{
					func_53(iVar39);
				}
				else
				{
					unk_0x690A26E696DA9BB7(iVar39);
				}
				func_52(Var0.f_37, -1);
			}
			else if (func_45())
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
	bool bVar74;
	bool bVar75;
	bool bVar76;
	bool bVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	
	bVar0 = false;
	if (iParam37 >= 1000000)
	{
		iParam37 = (iParam37 - 1000000);
		bVar0 = true;
	}
	if (unk_0x4B69FB3A5B09A1BA())
	{
		if (func_44())
		{
			func_43(uParam22);
			return 0;
		}
		if (func_42())
		{
			func_43(uParam22);
			return 0;
		}
	}
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		if (bVar0)
		{
		}
		else if (!unk_0x9E1C8024B80AA59C(&Param23))
		{
			func_43(uParam22);
			return 0;
		}
		if (Global_14336)
		{
			func_43(uParam22);
			return 0;
		}
		bVar1 = true;
		if (!func_41())
		{
			if (!func_40(0))
			{
				if (bVar1)
				{
					func_43(uParam22);
					return 0;
				}
			}
		}
	}
	if (unk_0x4B69FB3A5B09A1BA())
	{
		if (!func_39(unk_0xCFC72E446B0B3AD7()))
		{
			func_43(uParam22);
			return 0;
		}
	}
	if (unk_0x9E9AFDBF482248F6(&Param6))
	{
		func_43(uParam22);
		return 0;
	}
	if (unk_0x9E9AFDBF482248F6(&Param0))
	{
		func_43(uParam22);
		return 0;
	}
	Var2 = { Param6 };
	iVar18 = func_38(Var2);
	if (iVar18 != -1)
	{
		func_35(iVar18);
	}
	uVar19 = unk_0x0C66B3D5FEF6AC13(uParam22);
	iVar20 = unk_0xF1737EF6AAF8A3D1(uVar19);
	iVar21 = 0;
	iVar21 = 0;
	while (iVar21 <= 11)
	{
		if (iVar20 == Global_2394802[iVar21 /*4*/].f_3 && unk_0x17103F66FBB44C3C() < Global_2394802[iVar21 /*4*/].f_2)
		{
			Global_2394802[iVar21 /*4*/].f_2 = unk_0x17103F66FBB44C3C() + 30000;
			iVar21 = 12;
			func_43(uParam22);
			return 0;
		}
		iVar21++;
	}
	Var22.f_1 = -1;
	Var22.f_2 = -1;
	Var22.f_9 = -1;
	func_34(&Var22);
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
	if (func_33(&Param0, &iVar32, &iVar35))
	{
		iVar34 = 40;
		iVar69 = 0;
		iVar35 = iVar35;
	}
	else if (func_31(&Param0, &Var22, 0))
	{
		iVar34 = Var22.f_2;
		iVar32 = func_30(iVar34, Var22.f_1);
		iVar33 = func_29(&Var22);
		Var36 = { func_28(&Var22, 0) };
		Var52 = { func_27(&Var22) };
		iVar69 = 1;
		iVar68 = func_26(&Var22, 0);
		iVar73 = func_25(&Var22);
		bVar74 = func_20(&Var22);
		if (!bVar74)
		{
			iVar72 = 1;
		}
	}
	else
	{
		bVar75 = false;
		if (func_18(unk_0xCFC72E446B0B3AD7()))
		{
			if (!unk_0x4B69FB3A5B09A1BA())
			{
				bVar75 = true;
			}
			else
			{
				func_43(uParam22);
				if ((unk_0x1B54267BB477DB52() || unk_0x523427CCABD5EC9C()) && !unk_0x4B69FB3A5B09A1BA())
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
		if (!bVar75)
		{
			if (func_13(unk_0xCFC72E446B0B3AD7()))
			{
				func_43(uParam22);
				func_15(0);
				return 0;
			}
		}
		if (!func_12())
		{
			func_43(uParam22);
			bVar76 = true;
			func_15(bVar76);
			return 0;
		}
		bVar77 = false;
		if (!bVar75)
		{
			if (func_7(Param23, &bVar77))
			{
				func_43(uParam22);
				func_15(bVar77);
				return 0;
			}
		}
		iVar70 = 1;
		iVar71 = 0;
		iVar69 = 1;
	}
	iVar78 = Global_1335217;
	if (iVar78 >= 12)
	{
		iVar78 = (iVar78 - 1);
	}
	iVar79 = (iVar78 - 1);
	while (iVar79 >= 0)
	{
		Global_2392876[iVar78 /*95*/] = { Global_2392876[iVar79 /*95*/] };
		iVar78 = (iVar78 - 1);
		iVar79 = (iVar79 - 1);
	}
	Global_1335217++;
	if (Global_1335217 > 12)
	{
		Global_1335217 = 12;
	}
	iVar80 = 0;
	Global_2392876[iVar80 /*95*/] = 0;
	Global_2392876[iVar80 /*95*/].f_1 = 0;
	Global_2392876[iVar80 /*95*/].f_5 = 0;
	Global_2392876[iVar80 /*95*/].f_2 = iVar70;
	Global_2392876[iVar80 /*95*/].f_3 = 0;
	Global_2392876[iVar80 /*95*/].f_4 = iVar71;
	Global_2392876[iVar80 /*95*/].f_6 = { Param0 };
	Global_2392876[iVar80 /*95*/].f_12 = { Param6 };
	StringCopy(&(Global_2392876[iVar80 /*95*/].f_28), "", 64);
	Global_2392876[iVar80 /*95*/].f_46 = iVar34;
	Global_2392876[iVar80 /*95*/].f_47 = iVar32;
	Global_2392876[iVar80 /*95*/].f_48 = iVar33;
	Global_2392876[iVar80 /*95*/].f_88 = uParam22;
	Global_2392876[iVar80 /*95*/].f_54 = { Var36 };
	Global_2392876[iVar80 /*95*/].f_70 = { Var52 };
	Global_2392876[iVar80 /*95*/].f_49 = iVar68;
	Global_2392876[iVar80 /*95*/].f_50 = 0;
	Global_2392876[iVar80 /*95*/].f_50.f_1 = 0;
	Global_2392876[iVar80 /*95*/].f_50.f_2 = 0;
	Global_2392876[iVar80 /*95*/].f_53 = iVar69;
	Global_2392876[iVar80 /*95*/].f_87 = uParam36;
	Global_2392876[iVar80 /*95*/].f_89 = -1;
	Global_2392876[iVar80 /*95*/].f_90 = iVar72;
	Global_2392876[iVar80 /*95*/].f_91 = Global_2394854;
	Global_2392876[iVar80 /*95*/].f_92 = iVar73;
	if (Global_2392876[iVar80 /*95*/].f_47 == 0)
	{
		if (Global_2392876[iVar80 /*95*/].f_48 == 1)
		{
			Global_2392876[iVar80 /*95*/].f_53 = 0;
		}
	}
	Global_2392876[iVar80 /*95*/].f_93 = func_6(Param23, iVar80);
	Global_2392876[iVar80 /*95*/].f_94 = 0;
	Global_2392876[iVar80 /*95*/].f_86 = iParam37;
	Global_2394854++;
	Global_2392876[iVar80 /*95*/].f_44 = func_5(Param23);
	if (Global_2392876[iVar80 /*95*/].f_44 != -1)
	{
		Global_2392876[iVar80 /*95*/].f_45 = unk_0x17103F66FBB44C3C() + 15000;
	}
	return 1;
}

int func_5(struct<13> Param0)
{
	struct<13> Var0[1];
	int iVar14;
	
	if (!unk_0x035E2C7B598704F7())
	{
		return -1;
	}
	Var0[0 /*13*/] = { Param0 };
	iVar14 = unk_0x3A4971E8E6874549(&Var0, 1);
	if (iVar14 < 0)
	{
		return -1;
	}
	return iVar14;
}

int func_6(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	if (!unk_0x9E1C8024B80AA59C(&uParam0))
	{
		return 0;
	}
	if (Global_2392876[iParam13 /*95*/].f_87 > 0)
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
	if (unk_0x035E2C7B598704F7())
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
	Var0 = { func_8(unk_0xCFC72E446B0B3AD7()) };
	if (!unk_0x29DD83C9A6BDE75D(&Var0, &uParam0))
	{
		if (!unk_0x9E1C8024B80AA59C(&uParam0))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_8(int iParam0)
{
	struct<13> Var0;
	
	unk_0x4DB2D434F7F3C6B1(iParam0, &Var0, 13);
	return Var0;
}

int func_9(int iParam0)
{
	if (unk_0x523427CCABD5EC9C() || (unk_0x7F11C755C90EFEC5() && iParam0 == 0))
	{
		if (unk_0x9BAE9A1778D2A11D(1) == 0 || unk_0x70579BF82B8B3603(1, 0) == 0)
		{
			return 0;
		}
	}
	else if (unk_0x9BAE9A1778D2A11D(1) == 0)
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
	if (unk_0x523427CCABD5EC9C() && unk_0x635C7622AA1EA852())
	{
		return 1;
	}
	if (unk_0x1B54267BB477DB52() && unk_0x635C7622AA1EA852())
	{
		return 1;
	}
	if ((unk_0x7F11C755C90EFEC5() && unk_0x64F31E45B1E9B4A7() == 0) && unk_0x635C7622AA1EA852())
	{
		return 1;
	}
	if (unk_0x035E2C7B598704F7() && unk_0x635C7622AA1EA852())
	{
		return 1;
	}
	if (unk_0x708CE249B4F97BF8() && unk_0x635C7622AA1EA852())
	{
		return 1;
	}
	return 0;
}

int func_11(int iParam0)
{
	if (unk_0x523427CCABD5EC9C() || (unk_0x7F11C755C90EFEC5() && iParam0 == 0))
	{
		if (unk_0x9BAE9A1778D2A11D(0) == 0 || unk_0x70579BF82B8B3603(0, 0) == 0)
		{
			return 0;
		}
	}
	else if (unk_0x9BAE9A1778D2A11D(0) == 0)
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
	if (!unk_0x1B54267BB477DB52())
	{
		return 1;
	}
	return unk_0x635C7622AA1EA852();
}

int func_13(int iParam0)
{
	if (!func_14(iParam0))
	{
		if (!unk_0x9BAE9A1778D2A11D(0))
		{
			if (!unk_0x9BAE9A1778D2A11D(1))
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
		if (!unk_0x1B54267BB477DB52())
		{
			return;
		}
	}
	iVar0 = unk_0x17103F66FBB44C3C();
	if (iVar0 < Global_2394851)
	{
		return;
	}
	if (unk_0xC9EED58014EF1F40())
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
	Global_2394851 = (iVar0 + 1800000);
}

void func_16(char* sParam0, int iParam1)
{
	unk_0x21D4405986536E14(sParam0);
	unk_0x7BDC04B08D7A7FE0(0, 0, 1, iParam1);
}

void func_17()
{
	int iVar0;
	
	if (!unk_0x1B54267BB477DB52() && !unk_0x523427CCABD5EC9C())
	{
		return;
	}
	if (unk_0x4B69FB3A5B09A1BA())
	{
		return;
	}
	iVar0 = unk_0x17103F66FBB44C3C();
	if (iVar0 < Global_2394851)
	{
		return;
	}
	if (unk_0xC9EED58014EF1F40())
	{
		return;
	}
	func_16("INV_RESTRICT_SP", -1);
	Global_2394851 = (iVar0 + 1800000);
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
	if (unk_0xC8EC2BBF6FAB27CF() == 0)
	{
		return 0;
	}
	if (unk_0x523427CCABD5EC9C())
	{
		if (unk_0x70579BF82B8B3603(1, 0))
		{
			if (unk_0x635C7622AA1EA852())
			{
				return 1;
			}
		}
	}
	if (unk_0x7F11C755C90EFEC5())
	{
		if (unk_0x9BAE9A1778D2A11D(1))
		{
			if (unk_0x635C7622AA1EA852())
			{
				return 1;
			}
		}
	}
	if (unk_0x1B54267BB477DB52() || unk_0x035E2C7B598704F7())
	{
		if (unk_0x102D7B77874ABF1A(0, -3, 1))
		{
			return 1;
		}
	}
	if (unk_0x708CE249B4F97BF8())
	{
		if (unk_0x70579BF82B8B3603(0, 0))
		{
			if (unk_0x635C7622AA1EA852())
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
		return unk_0x94E72F17611BCD3C(Global_2394856.f_356[uParam0->f_9 /*75*/].f_10.f_63, 14);
	}
	if (func_23(uParam0->f_1))
	{
		if (func_22(uParam0))
		{
			return unk_0x94E72F17611BCD3C(Global_2397613.f_1.f_63, 14);
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
			return unk_0x94E72F17611BCD3C(Global_794538.f_4[iVar1 /*86*/].f_76, 14);
		
		case 62:
			return unk_0x94E72F17611BCD3C(Global_904178.f_1204[iVar1 /*86*/].f_76, 14);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0xCFC72E446B0B3AD7())
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
	
	if (unk_0x9E9AFDBF482248F6(&(uParam0->f_3)))
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
			if (unk_0x94E72F17611BCD3C(Global_794538.f_4[uParam0->f_1 /*86*/].f_76, 13))
			{
				if (unk_0x6B08EC9A88700FBB(&(Global_794538.f_4[uParam0->f_1 /*86*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0x94E72F17611BCD3C(Global_794538.f_4[uParam0->f_1 /*86*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1118)
			{
				if (unk_0x94E72F17611BCD3C(Global_794538.f_4[iVar0 /*86*/].f_76, 13))
				{
					if (unk_0x6B08EC9A88700FBB(&(Global_794538.f_4[iVar0 /*86*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (unk_0x94E72F17611BCD3C(Global_904178.f_1204[uParam0->f_1 /*86*/].f_76, 13))
			{
				if (unk_0x6B08EC9A88700FBB(&(Global_904178.f_1204[uParam0->f_1 /*86*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0x94E72F17611BCD3C(Global_904178.f_1204[uParam0->f_1 /*86*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 200)
			{
				if (unk_0x94E72F17611BCD3C(Global_904178.f_1204[iVar0 /*86*/].f_76, 13))
				{
					if (unk_0x6B08EC9A88700FBB(&(Global_904178.f_1204[iVar0 /*86*/]), &(uParam0->f_3)))
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
	if (uParam0->f_2 == unk_0xCFC72E446B0B3AD7())
	{
		if (unk_0x94E72F17611BCD3C(Global_946224.f_5[uParam0->f_1 /*86*/].f_76, 13))
		{
			if (unk_0x6B08EC9A88700FBB(&(Global_946224.f_5[uParam0->f_1 /*86*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (unk_0x94E72F17611BCD3C(Global_946224.f_5[uParam0->f_1 /*86*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (unk_0x94E72F17611BCD3C(Global_946224.f_5[iVar0 /*86*/].f_76, 13))
			{
				if (unk_0x6B08EC9A88700FBB(&(Global_946224.f_5[iVar0 /*86*/]), &(uParam0->f_3)))
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
	if (Global_2397613)
	{
		if (unk_0x6B08EC9A88700FBB(&(Global_2397613.f_1), &(uParam0->f_3)))
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
	if (!Global_2394856.f_356[iVar0 /*75*/])
	{
		return 0;
	}
	if (!unk_0x6B08EC9A88700FBB(&(Global_2394856.f_356[iVar0 /*75*/].f_10), &(uParam0->f_3)))
	{
		return 0;
	}
	if (!unk_0x94E72F17611BCD3C(Global_2394856.f_356[iVar0 /*75*/].f_5, 3))
	{
		return 0;
	}
	return 1;
}

int func_25(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (func_24(uParam0))
	{
		return unk_0x94E72F17611BCD3C(Global_2394856.f_356[uParam0->f_9 /*75*/].f_10.f_63, 17);
	}
	if (func_23(uParam0->f_1))
	{
		if (func_22(uParam0))
		{
			return unk_0x94E72F17611BCD3C(Global_2397613.f_1.f_63, 17);
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
			return unk_0x94E72F17611BCD3C(Global_794538.f_4[iVar1 /*86*/].f_76, 17);
		
		case 62:
			return unk_0x94E72F17611BCD3C(Global_904178.f_1204[iVar1 /*86*/].f_76, 17);
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0xCFC72E446B0B3AD7())
	{
		return iVar0;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_26(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!bParam1)
	{
		if (func_24(uParam0))
		{
			if (unk_0x94E72F17611BCD3C(Global_1311772.f_1[uParam0->f_9 /*2*/], 0))
			{
				return Global_2397747.f_513[uParam0->f_9];
			}
		}
	}
	if (func_23(uParam0->f_1))
	{
		if (func_22(uParam0))
		{
			return Global_2397613.f_1.f_54;
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
			return Global_794538.f_4[iVar1 /*86*/].f_54;
		
		case 62:
			return Global_904178.f_1204[iVar1 /*86*/].f_54;
		
		case 40:
			return 0;
		
		default:
	}
	if (uParam0->f_2 == unk_0xCFC72E446B0B3AD7())
	{
		return Global_946224.f_5[iVar1 /*86*/].f_54;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

struct<16> func_27(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "NO DESCRIPTION", 64);
	if (func_24(uParam0))
	{
		return Global_2394856.f_356[uParam0->f_9 /*75*/].f_10.f_28;
	}
	if (func_23(uParam0->f_1))
	{
		if (func_22(uParam0))
		{
			return Global_2397613.f_1.f_28;
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
			return Global_794538.f_4[iVar16 /*86*/].f_38;
		
		case 62:
			return Global_904178.f_1204[iVar16 /*86*/].f_38;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == unk_0xCFC72E446B0B3AD7())
	{
		return Global_946224.f_5[iVar16 /*86*/].f_38;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

struct<16> func_28(var uParam0, bool bParam1)
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
			if (unk_0x94E72F17611BCD3C(Global_1311772.f_1[uParam0->f_9 /*2*/], 0))
			{
				return Global_2397747[uParam0->f_9 /*16*/];
			}
			return Global_2394856.f_356[uParam0->f_9 /*75*/].f_10.f_12;
		}
	}
	if (func_23(uParam0->f_1))
	{
		if (func_22(uParam0))
		{
			return Global_2397613.f_1.f_12;
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
			return Global_794538.f_4[iVar16 /*86*/].f_22;
		
		case 62:
			return Global_904178.f_1204[iVar16 /*86*/].f_22;
		
		case 40:
			return Var0;
		
		default:
	}
	if (uParam0->f_2 == unk_0xCFC72E446B0B3AD7())
	{
		return Global_946224.f_5[iVar16 /*86*/].f_22;
	}
	else if (uParam0->f_2 < 32)
	{
		return Var0;
	}
	return Var0;
}

int func_29(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	if (func_24(uParam0))
	{
		return Global_2394856.f_356[uParam0->f_9 /*75*/].f_10.f_55;
	}
	if (func_23(uParam0->f_1))
	{
		if (func_22(uParam0))
		{
			return Global_2397613.f_1.f_55;
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
			return Global_794538.f_4[iVar1 /*86*/].f_68;
		
		case 62:
			return Global_904178.f_1204[iVar1 /*86*/].f_68;
		
		case 40:
			return iVar0;
		
		default:
	}
	if (uParam0->f_2 == unk_0xCFC72E446B0B3AD7())
	{
		return Global_946224.f_5[iVar1 /*86*/].f_68;
	}
	else if (uParam0->f_2 < 32)
	{
		return iVar0;
	}
	return iVar0;
}

int func_30(int iParam0, int iParam1)
{
	if (func_23(iParam1))
	{
		if (Global_2397613)
		{
			return Global_2397613.f_1.f_53;
		}
		return 146;
	}
	switch (iParam0)
	{
		case 63:
			return Global_794538.f_4[iParam1 /*86*/].f_65;
		
		case 62:
			return Global_904178.f_1204[iParam1 /*86*/].f_65;
		
		default:
	}
	if (iParam0 == unk_0xCFC72E446B0B3AD7())
	{
		return Global_946224.f_5[iParam1 /*86*/].f_65;
	}
	else if (iParam0 < 32)
	{
		return 146;
	}
	return 146;
}

int func_31(char* sParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		return 0;
	}
	if (unk_0x9E9AFDBF482248F6(sParam0))
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
		if (unk_0x94E72F17611BCD3C(Global_794538.f_4[iVar0 /*86*/].f_76, 13))
		{
			if (unk_0x6B08EC9A88700FBB(&(Global_794538.f_4[iVar0 /*86*/]), sParam0))
			{
				iVar1 = Global_794538.f_4[iVar0 /*86*/].f_65;
				*uParam1 = func_32(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = 63;
				uParam1->f_3 = { Global_794538.f_4[iVar0 /*86*/] };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 200)
	{
		if (unk_0x94E72F17611BCD3C(Global_904178.f_1204[iVar0 /*86*/].f_76, 13))
		{
			if (unk_0x6B08EC9A88700FBB(&(Global_904178.f_1204[iVar0 /*86*/]), sParam0))
			{
				iVar1 = Global_904178.f_1204[iVar0 /*86*/].f_65;
				*uParam1 = func_32(iVar1);
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
		if (unk_0x94E72F17611BCD3C(Global_946224.f_5[iVar0 /*86*/].f_76, 13))
		{
			if (unk_0x6B08EC9A88700FBB(&(Global_946224.f_5[iVar0 /*86*/]), sParam0))
			{
				iVar1 = Global_946224.f_5[iVar0 /*86*/].f_65;
				*uParam1 = func_32(iVar1);
				uParam1->f_1 = iVar0;
				uParam1->f_2 = unk_0xCFC72E446B0B3AD7();
				uParam1->f_3 = { *sParam0 };
				uParam1->f_9 = -1;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_32(int iParam0)
{
	switch (iParam0)
	{
		case 15:
			return 53;
		
		case 14:
			return 54;
		
		case 122:
			return 58;
		
		case 11:
			return 55;
		
		case 13:
			return 56;
		
		case 12:
			return 57;
		
		case 8:
			return 60;
		
		case 1:
			return 61;
		
		case 5:
			return 59;
		
		case 6:
			return 62;
		
		case 3:
			return 65;
		
		case 0:
			return 63;
		
		case 2:
			return 64;
		
		default:
	}
	return 0;
}

int func_33(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	char[] cVar1[8];
	char cVar3[16];
	char[] cVar7[8];
	
	if (unk_0x9E9AFDBF482248F6(uParam0))
	{
		return 0;
	}
	iVar0 = unk_0x6BD5B77CFC3C9B4B(sParam0);
	if (!iVar0 > 12)
	{
		return 0;
	}
	StringCopy(&cVar1, unk_0xECFC7416DAF7F6DA(sParam0, 0, 5), 8);
	if (!unk_0x6B08EC9A88700FBB(&cVar1, "FAKE_"))
	{
		return 0;
	}
	StringCopy(&cVar3, unk_0xECFC7416DAF7F6DA(sParam0, 5, 12), 16);
	if (unk_0x6B08EC9A88700FBB(&cVar3, "GOLF___"))
	{
		*iParam1 = 11;
	}
	else if (unk_0x6B08EC9A88700FBB(&cVar3, "TENNIS_"))
	{
		*iParam1 = 12;
	}
	else if (unk_0x6B08EC9A88700FBB(&cVar3, "PILOTS_"))
	{
		*iParam1 = 122;
	}
	else if (unk_0x6B08EC9A88700FBB(&cVar3, "SHOOTR_"))
	{
		*iParam1 = 13;
	}
	else if (unk_0x6B08EC9A88700FBB(&cVar3, "DARTS__"))
	{
		*iParam1 = 14;
	}
	else if (unk_0x6B08EC9A88700FBB(&cVar3, "ARMWRS_"))
	{
		*iParam1 = 15;
	}
	else
	{
		return 0;
	}
	StringCopy(&cVar7, unk_0xECFC7416DAF7F6DA(sParam0, 12, iVar0), 8);
	if (!unk_0x36935F8586BCB182(&cVar7, iParam2))
	{
		return 0;
	}
	return 1;
}

void func_34(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	StringCopy(&(uParam0->f_3), "", 24);
	uParam0->f_9 = -1;
}

void func_35(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 >= Global_1335217)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (unk_0x17103F66FBB44C3C() > Global_2394802[iVar0 /*4*/].f_2 || Global_2394802[iVar0 /*4*/].f_2 == 0)
		{
			if (unk_0x499F06E99E27AF30() > 0 && Global_2392876[iParam0 /*95*/].f_88 < unk_0x499F06E99E27AF30())
			{
				Global_2394802[iVar0 /*4*/].f_3 = unk_0xF1737EF6AAF8A3D1(Global_2392876[iParam0 /*95*/].f_88);
				Global_2394802[iVar0 /*4*/].f_2 = unk_0x17103F66FBB44C3C() + 30000;
				iVar0 = 12;
			}
		}
		iVar0++;
	}
	if (Global_2392876[iParam0 /*95*/].f_89 != -1)
	{
		unk_0x78CC79D76C58772C(Global_2392876[iParam0 /*95*/].f_89);
	}
	if (!Global_2392876[iParam0 /*95*/].f_53)
	{
		if (Global_2392876[iParam0 /*95*/].f_49 != 0)
		{
			unk_0x588B70DCBC3C88C8(Global_2392876[iParam0 /*95*/].f_49);
		}
	}
	func_43(Global_2392876[iParam0 /*95*/].f_88);
	iVar1 = iParam0;
	iVar2 = iVar1 + 1;
	while (iVar2 < Global_1335217)
	{
		Global_2392876[iVar1 /*95*/] = { Global_2392876[iVar2 /*95*/] };
		iVar1++;
		iVar2++;
	}
	func_37(iVar1);
	Global_1335217 = (Global_1335217 - 1);
	if (Global_1335190)
	{
		if (Global_1335188 > 0)
		{
			func_36();
		}
	}
}

void func_36()
{
	Global_1335190 = 0;
}

void func_37(int iParam0)
{
	Global_2392876[iParam0 /*95*/] = 0;
	Global_2392876[iParam0 /*95*/].f_1 = 0;
	Global_2392876[iParam0 /*95*/].f_5 = 0;
	StringCopy(&(Global_2392876[iParam0 /*95*/].f_12), "", 64);
	StringCopy(&(Global_2392876[iParam0 /*95*/].f_28), "", 64);
	Global_2392876[iParam0 /*95*/].f_44 = -1;
	Global_2392876[iParam0 /*95*/].f_45 = unk_0x17103F66FBB44C3C();
	Global_2392876[iParam0 /*95*/].f_46 = -1;
	Global_2392876[iParam0 /*95*/].f_47 = -1;
	Global_2392876[iParam0 /*95*/].f_48 = -1;
	Global_2392876[iParam0 /*95*/].f_49 = 0;
	Global_2392876[iParam0 /*95*/].f_50 = 0;
	Global_2392876[iParam0 /*95*/].f_50.f_1 = 0;
	Global_2392876[iParam0 /*95*/].f_50.f_2 = 0;
	Global_2392876[iParam0 /*95*/].f_53 = 0;
	StringCopy(&(Global_2392876[iParam0 /*95*/].f_54), "", 64);
	StringCopy(&(Global_2392876[iParam0 /*95*/].f_70), "", 64);
	Global_2392876[iParam0 /*95*/].f_86 = 0;
	Global_2392876[iParam0 /*95*/].f_87 = 0;
	Global_2392876[iParam0 /*95*/].f_88 = -1;
	Global_2392876[iParam0 /*95*/].f_89 = -1;
	Global_2392876[iParam0 /*95*/].f_90 = 0;
	Global_2392876[iParam0 /*95*/].f_91 = -1;
	Global_2392876[iParam0 /*95*/].f_92 = 0;
	Global_2392876[iParam0 /*95*/].f_93 = 0;
	Global_2392876[iParam0 /*95*/].f_94 = 0;
}

int func_38(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1335217)
	{
		if (unk_0x6B08EC9A88700FBB(&uParam0, &(Global_2392876[iVar0 /*95*/].f_12)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_39(int iParam0)
{
	return unk_0x94E72F17611BCD3C(Global_1582869[iParam0 /*332*/].f_124, 22);
}

bool func_40(bool bParam0)
{
	if (!bParam0 && unk_0x7B47A371E2D93C2C(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x94E72F17611BCD3C(Global_68493, 0);
}

int func_41()
{
	if (Global_97358.f_7341.f_328[0 /*6*/])
	{
		return 1;
	}
	return 0;
}

bool func_42()
{
	return unk_0x94E72F17611BCD3C(Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_124, 2);
}

void func_43(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x0C66B3D5FEF6AC13(uParam0);
	if (iVar0 < 0 || iVar0 >= unk_0x499F06E99E27AF30())
	{
		return;
	}
	if (unk_0xCD465FB9528A48BE(iVar0))
	{
		return;
	}
}

bool func_44()
{
	return Global_1315857 == 10;
}

int func_45()
{
	if (!Global_68245)
	{
		return 1;
	}
	else if (func_46())
	{
		return 1;
	}
	return 0;
}

int func_46()
{
	if (Global_1312448)
	{
		return 1;
	}
	if (func_51())
	{
		return 1;
	}
	if (func_50())
	{
		return 1;
	}
	return func_47(120, -1);
}

int func_47(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2474108[iParam0 /*6*/][func_48(iParam1)];
	if (unk_0xF02F9C69623F2904(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_48(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_49();
		if (iVar1 > -1)
		{
			Global_2454301 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454301 = 1;
		}
	}
	return iVar0;
}

int func_49()
{
	return Global_1312737;
}

bool func_50()
{
	return Global_1315888;
}

bool func_51()
{
	return Global_1315890;
}

void func_52(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 == -1)
	{
		iVar0 = func_49();
	}
	Global_1315877[iVar0] = uParam0;
}

void func_53(int iParam0)
{
	func_100();
	if (func_99(1))
	{
		if (!func_90())
		{
			if (!func_78(1))
			{
				if (unk_0x11D7DF356299D4F0())
				{
					func_77();
				}
				func_56(1, 0);
				unk_0x690A26E696DA9BB7(iParam0);
				func_55();
				func_54();
			}
		}
	}
}

void func_54()
{
	Global_1685347.f_7 = 1;
}

void func_55()
{
	Global_1685347.f_6 = 1;
}

void func_56(int iParam0, bool bParam1)
{
	if (func_99(iParam0))
	{
		Global_1685347.f_16[iParam0 /*44*/].f_5 = 1;
		func_58(iParam0, 0);
		func_57();
		if (bParam1)
		{
			Global_1685347 = 1;
		}
	}
}

void func_57()
{
	Global_1685347.f_2 = 1;
}

void func_58(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	if (!unk_0x11D7DF356299D4F0())
	{
		if (bParam1)
		{
			func_76();
			func_70(unk_0xCFC72E446B0B3AD7(), 0, 81920, 1);
			Global_1582869[unk_0xCFC72E446B0B3AD7() /*332*/].f_83 = 8;
			func_69();
			func_68();
		}
		func_67(iParam0);
		func_66(iParam0);
		func_64();
		func_63();
		func_57();
	}
	Var0 = { func_62(iParam0) };
	func_61(iParam0);
	func_59(&Var0);
}

void func_59(char* sParam0)
{
	StringCopy(&(Global_2428162.f_729), sParam0, 24);
	if (func_60())
	{
		StringCopy(&(Global_965784.f_42), sParam0, 24);
	}
}

bool func_60()
{
	return unk_0x94E72F17611BCD3C(Global_2428922.f_1.f_2807, 5);
}

void func_61(int iParam0)
{
	Global_1685347.f_16[iParam0 /*44*/].f_3 = 1;
}

struct<6> func_62(int iParam0)
{
	return Global_1685347.f_16[iParam0 /*44*/].f_6;
}

void func_63()
{
	Global_2428162.f_4 = 100;
}

void func_64()
{
	unk_0xEDB9A377CD8B7F03(&Global_2428162, 5);
	func_65();
}

void func_65()
{
	unk_0xEDB9A377CD8B7F03(&Global_2428162, 8);
}

void func_66(var uParam0)
{
	Global_1685347.f_8 = uParam0;
}

void func_67(var uParam0)
{
	Global_1685347.f_9 = uParam0;
}

void func_68()
{
	Global_2434606.f_1 = 0;
}

void func_69()
{
	char* sVar0;
	
	StringCopy(&(Global_2428162.f_729), sVar0, 24);
}

void func_70(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
	var uVar23;
	int iVar24;
	
	if (bParam1)
	{
		if (unk_0x5BB79C0A5EB6A6A3())
		{
			unk_0x0E294D1F9E68FE58(0);
		}
	}
	if (!unk_0x4B69FB3A5B09A1BA())
	{
		uVar0 = iParam2;
		unk_0xC70D4A06E38B2711(iParam0, bParam1, uVar0);
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
		if (!func_74())
		{
			bVar22 = false;
			if (bParam1 == 1)
			{
				bVar22 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar22 = true;
			}
			if (bVar9 == 1)
			{
				bVar22 = true;
			}
			if (bVar22)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (unk_0xCB29E1C3D086FBAE(iParam0) && unk_0x378E80A2B7D7C8DF(iParam0))
		{
			uVar23 = unk_0x4E6043D225B9C75F(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && unk_0x4B69FB3A5B09A1BA())
				{
					unk_0xEE9DD5051799E43F(1);
				}
				else
				{
					unk_0x407020DF5CAB33D3(uVar23, !bVar13);
				}
				if (!bVar13)
				{
					if (unk_0x4B69FB3A5B09A1BA() && !bVar18)
					{
						unk_0xEE9DD5051799E43F(0);
					}
					Global_2414035[iParam0 /*254*/].f_238 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_73(uVar23) && !unk_0xEDF5D32C98985A1B(uVar23))
				{
					if (!bVar21)
					{
						unk_0x4220BD8C5CDBF540(uVar23, true, 0);
					}
				}
				if (!unk_0xBB5C52611DD71292(uVar23))
				{
					if (!bVar20)
					{
						unk_0xD9B13F0A69759C12(uVar23, false);
					}
					unk_0x185D18DA9BC98757(uVar23, 1);
				}
				else if (!bVar20)
				{
					unk_0xD9B13F0A69759C12(uVar23, false);
				}
				unk_0x0CFE85F88BE373C8(uVar23, true);
				unk_0xC243E2F8392527C0(iParam0, 0);
				unk_0xBA3586BB63B045BD(uVar23);
				unk_0x29C0F4A5219281BA(uVar23, 1);
				func_72();
				func_71();
				if (unk_0x1F2747B7BCA7311C())
				{
				}
				if (unk_0x1032ED345FD7DD26())
				{
				}
				Global_2414035[iParam0 /*254*/].f_239 = 0;
				if (bParam3)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_73(uVar23) && !unk_0xEDF5D32C98985A1B(uVar23))
				{
					if (!bVar21)
					{
						unk_0x4220BD8C5CDBF540(uVar23, !bVar14, 0);
					}
					if (!unk_0xBB5C52611DD71292(uVar23))
					{
						if (!bVar20)
						{
							unk_0xD9B13F0A69759C12(uVar23, bVar15);
						}
						if (!bVar15)
						{
							unk_0x185D18DA9BC98757(uVar23, 1);
						}
					}
				}
				if (bVar9)
				{
					unk_0xC243E2F8392527C0(iParam0, 0);
				}
				else
				{
					unk_0xC243E2F8392527C0(iParam0, 1);
				}
				unk_0x0CFE85F88BE373C8(uVar23, bVar16);
				if (bVar2)
				{
					if (!unk_0xE11A81C5773CB579(uVar23) && !unk_0x827151D7B70CB853(uVar23, 0))
					{
						unk_0x71628E52718BD195(uVar23);
					}
				}
			}
			iVar24 = 0;
			if (bVar1)
			{
				iVar24 |= 2;
			}
			if (bVar2)
			{
				iVar24 |= 4;
			}
			if (bVar3)
			{
				iVar24 |= 8;
			}
			if (bVar4)
			{
				iVar24 |= 16;
			}
			if (bVar5)
			{
				iVar24 |= 32;
			}
			if (bVar6)
			{
				iVar24 |= 64;
			}
			if (bVar7)
			{
				iVar24 |= 128;
			}
			if (bVar8)
			{
				iVar24 |= 256;
			}
			if (bVar9)
			{
				iVar24 |= 512;
			}
			if (bVar10)
			{
				iVar24 |= 1024;
			}
			if (bVar11)
			{
				iVar24 |= 2048;
			}
			if (bVar12)
			{
				iVar24 |= 4096;
			}
			unk_0xC70D4A06E38B2711(iParam0, bParam1, iVar24);
		}
	}
}

void func_71()
{
	struct<2> Var0;
	
	Global_2422166.f_676 = 0;
	Global_2422166.f_677 = 0;
	Global_2422166.f_678 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2404554.f_1381 = { Var0 };
}

void func_72()
{
	Global_2404554.f_543 = 0;
	Global_2404554.f_1422 = 0;
	Global_2404554.f_423 = 0;
	Global_2414035[unk_0xCFC72E446B0B3AD7() /*254*/].f_204 = 0;
}

int func_73(var uParam0)
{
	int iVar0;
	
	if (unk_0x827151D7B70CB853(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0xE962BD784DD0E442(uParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_74()
{
	if (func_75() == 0)
	{
		return 1;
	}
	return 0;
}

int func_75()
{
	return Global_1312467.f_18;
}

void func_76()
{
	unk_0xEDB9A377CD8B7F03(&Global_2428162, 7);
}

void func_77()
{
	unk_0xEDB9A377CD8B7F03(&(Global_2428162.f_2), 15);
}

int func_78(int iParam0)
{
	if (iParam0 || func_89())
	{
		if (!func_88(0, 1))
		{
			return 1;
		}
		if (!func_80(1))
		{
			return 1;
		}
		if (!func_79())
		{
			return 1;
		}
		if (unk_0xD0270470788D0EB5())
		{
			return 1;
		}
	}
	return 0;
}

bool func_79()
{
	return Global_1685347.f_4;
}

int func_80(bool bParam0)
{
	if (!func_85())
	{
		return 0;
	}
	if ((func_83(func_84(-1), 0) >= 3 || func_47(123, -1)) && func_47(133, -1))
	{
		func_82();
		return 1;
	}
	else if (bParam0)
	{
		func_81();
	}
	return 0;
}

void func_81()
{
	Global_1685347.f_5 = 1;
}

void func_82()
{
	Global_1685347.f_4 = 1;
}

int func_83(int iParam0, int iParam1)
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
		if (Global_270816[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_270816[iVar3] < iParam0)
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

int func_84(int iParam0)
{
	return Global_1335605[func_48(iParam0)];
}

int func_85()
{
	if (func_87() && func_86(0))
	{
		return 1;
	}
	return 0;
}

var func_86(int iParam0)
{
	return Global_1312369[iParam0];
}

var func_87()
{
	return func_86(func_49() + 1);
}

int func_88(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (unk_0x94E72F17611BCD3C(Global_97358.f_668.f_683, 2))
		{
			return 1;
		}
	}
	if (unk_0x948B11D8CB0B9FB8())
	{
		if (!bParam1 || unk_0x6518D9FF7C996D2B())
		{
			if (!unk_0x523427CCABD5EC9C() && !unk_0x7F11C755C90EFEC5())
			{
				return 1;
			}
		}
	}
	if (bParam1)
	{
		if (unk_0x64F31E45B1E9B4A7())
		{
			return 0;
		}
	}
	if (unk_0x948B11D8CB0B9FB8())
	{
		return 1;
	}
	return 0;
}

var func_89()
{
	return Global_1685347.f_2;
}

int func_90()
{
	if (((((func_98() || !func_96(-1)) || !func_94()) || !func_93()) || !func_92()) || func_91())
	{
		return 1;
	}
	return 0;
}

var func_91()
{
	return Global_2435140;
}

int func_92()
{
	if (unk_0xF10205C2D28EABD5(903) == 1)
	{
		return 1;
	}
	return 0;
}

int func_93()
{
	int iVar0;
	
	if (unk_0xC8EF71FAD4111D6A(&iVar0) == 0)
	{
		if (iVar0 == 1)
		{
			return 0;
		}
	}
	return 1;
}

int func_94()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (func_95(iVar0) == 1)
		{
			iVar0 = 5;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_95(int iParam0)
{
	if (func_47(76, iParam0) == 1)
	{
		return 1;
	}
	return 0;
}

int func_96(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = func_97(iParam0);
	uVar1 = unk_0xF10205C2D28EABD5(uVar0);
	if (unk_0x94E72F17611BCD3C(uVar1, 1))
	{
		return 1;
	}
	return 0;
}

int func_97(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_49();
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

var func_98()
{
	return Global_2428162.f_616;
}

bool func_99(int iParam0)
{
	return Global_1685347.f_16[iParam0 /*44*/].f_4;
}

void func_100()
{
	int iVar0;
	int iVar1;
	
	func_106();
	if (unk_0x0FCEADAB660A915E() && !func_103())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = unk_0xE049EBF614FDF0D5(func_102(iVar0));
			if (iVar1 > 0)
			{
				Global_1685347.f_16[iVar0 /*44*/] = iVar1;
				func_101(iVar0, iVar1);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Global_1685347.f_16[iVar0 /*44*/].f_4 = 0;
			iVar0++;
		}
	}
}

void func_101(int iParam0, int iParam1)
{
	bool bVar0;
	struct<16> Var1;
	var uVar17;
	
	bVar0 = true;
	if (unk_0x7CC1CCAE500E6C05(iParam1, "contentId", &Var1))
	{
		MemCopy(&(Global_1685347.f_16[iParam0 /*44*/].f_6), {Var1}, 6);
	}
	else
	{
		bVar0 = false;
	}
	if (unk_0x7CC1CCAE500E6C05(iParam1, "playlist", &Var1))
	{
		Global_1685347.f_16[iParam0 /*44*/].f_12 = { Var1 };
	}
	else
	{
		bVar0 = false;
	}
	if (unk_0x4E939888F6221B9D(iParam1, &Var1))
	{
		Global_1685347.f_16[iParam0 /*44*/].f_28 = { Var1 };
	}
	else
	{
		bVar0 = false;
	}
	if (iParam0 == 1)
	{
		if (unk_0xA6B7C84B315C87F7(iParam1, "coronaCountdown", &uVar17))
		{
			Global_1685347.f_16[iParam0 /*44*/].f_1 = uVar17;
		}
		else
		{
			Global_1685347.f_16[iParam0 /*44*/].f_1 = 120000;
		}
		Global_1685347.f_16[iParam0 /*44*/].f_2 = 0;
		if (unk_0xA6B7C84B315C87F7(iParam1, "eventSubType", &uVar17))
		{
			Global_1685347.f_16[iParam0 /*44*/].f_2 = uVar17;
		}
	}
	if (bVar0)
	{
		if (iParam0 != 1)
		{
			Global_1685347.f_1 = 1;
		}
		Global_1685347.f_16[iParam0 /*44*/].f_4 = 1;
	}
	else
	{
		Global_1685347.f_16[iParam0 /*44*/].f_4 = 0;
	}
}

char* func_102(int iParam0)
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

int func_103()
{
	if (!func_104())
	{
		return 1;
	}
	return 0;
}

int func_104()
{
	if (func_105())
	{
		return 0;
	}
	if (unk_0x7F7C75BD0BC3CD70() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_105()
{
	return Global_2435198;
}

void func_106()
{
	struct<281> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_16 = 6;
	Global_1685347 = { Var0 };
}

void func_107(int iParam0)
{
	var uVar0;
	
	if (Global_68245)
	{
		unk_0x86F4B3D6FF8F65DE(-1, "Hang_Up", "Phone_SoundSet_Michael", 1);
	}
	else
	{
		unk_0x86F4B3D6FF8F65DE(-1, "Hang_Up", &Global_14382, 1);
	}
	if (unk_0x2E567DCD11FE0296(1, iParam0, &uVar0, 21))
	{
		func_109();
	}
	Global_2450998.f_1 = 0;
	Global_2450998.f_33 = -1;
	Global_2450998.f_34 = -1;
	StringCopy(&(Global_2450998.f_4), "", 64);
	func_108(&(Global_2450998.f_20));
}

void func_108(var uParam0)
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

void func_109()
{
	Global_2450998.f_2 = 1;
	Global_2450998.f_38 = 1;
	if (unk_0x6518D9FF7C996D2B())
	{
		if (unk_0x2EDEE9D0ECE8E918())
		{
			while (unk_0xE43E809AA780FBB1())
			{
				unk_0x4EDE34FBADD967A6(0);
			}
			unk_0xEF6C1D8378C8F2FF();
			Global_2450998 = 0;
			Global_2450998.f_2 = 0;
		}
		else if (func_115(Global_2450998.f_20))
		{
			if (unk_0x9E1C8024B80AA59C(&(Global_2450998.f_20)))
			{
				if (!unk_0x98C116D81F3E414F(&(Global_2450998.f_20)))
				{
					func_114();
				}
			}
		}
		else
		{
			func_114();
		}
	}
	else
	{
		func_114();
	}
	if (Global_2450998.f_37)
	{
		func_110(0);
	}
	Global_2450998.f_37 = 0;
	Global_2450998.f_3 = 0;
}

void func_110(int iParam0)
{
	if (Global_14551)
	{
		func_112(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2264, 16);
	}
	if (unk_0x71F866C9C77F9B9F())
	{
		unk_0xC318E8D9E0AA1394(0);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0xEDB9A377CD8B7F03(&Global_2263, 30);
	}
	else
	{
		unk_0xF76EE56D3E7DAF1B(&Global_2263, 30);
	}
	if (!func_111())
	{
		Global_14393.f_1 = 3;
	}
}

int func_111()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_112(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_113(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0xF490905A59C5583B(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x25CC5D98FBA7C72B(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x25CC5D98FBA7C72B(Global_14330);
		}
		else
		{
			unk_0x25CC5D98FBA7C72B(Global_14321);
		}
	}
}

int func_113(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x94E72F17611BCD3C(Global_2263, 14))
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
	if (unk_0x7B47A371E2D93C2C(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_114()
{
	Global_2450998.f_1 = 0;
	Global_2450998 = 0;
	Global_2450998.f_2 = 0;
	Global_2450998.f_33 = -1;
	Global_2450998.f_34 = -1;
	StringCopy(&(Global_2450998.f_4), "", 64);
	StringCopy(&(Global_2450998.f_39[0 /*16*/]), "", 64);
	Global_2450998.f_38 = 0;
	Global_2450998.f_56 = 0;
	Global_2450998.f_57 = 0;
	Global_2450998.f_58 = -2;
	Global_2450998.f_3 = 0;
	func_108(&(Global_2450998.f_20));
}

bool func_115(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x6E4DB7298A183787(&uParam0, 13);
}

void func_116(int iParam0)
{
	struct<2> Var0;
	
	if (unk_0x2E567DCD11FE0296(1, iParam0, &Var0, 15))
	{
		Global_2450998.f_33 = Var0.f_1;
		Global_2450998.f_34 = Var0.f_0;
	}
}

void func_117(int iParam0)
{
	struct<9> Var0;
	
	if (unk_0x2E567DCD11FE0296(1, iParam0, &Var0, 21))
	{
		if (Global_2450998.f_3 == 0)
		{
			if (!func_118(&(Var0.f_8)))
			{
				unk_0xC72DF46CD590A9E4(0, 2);
			}
			else
			{
				Global_2450998.f_3 = 1;
				MemCopy(&(Global_2450998.f_4), {Var0}, 16);
				Global_2450998.f_20 = { Var0.f_8 };
				StringCopy(&(Global_2450998.f_39[0 /*16*/]), "", 64);
				Global_2450998.f_58 = -2;
				Global_2450998.f_56 = 0;
				Global_2450998.f_57 = 0;
			}
		}
		else if (!func_118(&(Var0.f_8)))
		{
			unk_0xC72DF46CD590A9E4(0, 2);
		}
		else
		{
			Global_2450998.f_3 = 1;
			MemCopy(&(Global_2450998.f_4), {Var0}, 16);
			Global_2450998.f_20 = { Var0.f_8 };
			StringCopy(&(Global_2450998.f_39[0 /*16*/]), "", 64);
			Global_2450998.f_58 = -2;
			Global_2450998.f_56 = 0;
			Global_2450998.f_57 = 0;
		}
	}
}

int func_118(var uParam0)
{
	if (Global_68245)
	{
		if (func_46() == 0)
		{
			return 0;
		}
		if (func_122(unk_0xCFC72E446B0B3AD7(), 1, 1))
		{
			if (unk_0x5BFFEED2EB6664D5(unk_0x9F92518438215DD0()))
			{
				if (unk_0x1CFEFA649EF60E6E(unk_0x9F92518438215DD0()) >= 1f)
				{
					return 0;
				}
			}
		}
	}
	if (unk_0x7F7C75BD0BC3CD70() == 0)
	{
		return 0;
	}
	if (Global_2450998.f_1)
	{
	}
	if (Global_14559 == 1)
	{
		return 0;
	}
	if (Global_1573708)
	{
		return 0;
	}
	if (Global_2450998.f_36)
	{
		return 0;
	}
	if (func_111())
	{
		return 0;
	}
	if (((Global_34913 != 6 && Global_34913 != 8) && Global_34913 != 12) && Global_34913 != 15)
	{
		return 0;
	}
	if (func_121() && !func_120(12))
	{
		return 0;
	}
	if (unk_0x71F866C9C77F9B9F())
	{
		return 0;
	}
	if (unk_0x7F8517B594B45C45())
	{
		return 0;
	}
	if (!func_119(0))
	{
		return 0;
	}
	if (unk_0xC8557993A78C1B3E())
	{
		return 0;
	}
	if (Global_68505)
	{
		return 0;
	}
	if (unk_0x1E25E1B99314CB9A())
	{
		if (!unk_0x330D42760D8EFE6E(unk_0xCFC72E446B0B3AD7()))
		{
			return 0;
		}
	}
	if (!unk_0x6518D9FF7C996D2B())
	{
		return 0;
	}
	if (unk_0x7AEA561312E5DB84(uParam0) || unk_0x44EE292103EFB1BB(uParam0))
	{
		return 0;
	}
	if (unk_0x8F126E5B863C4280(uParam0) || unk_0x575730D152DF524E(uParam0))
	{
		return 0;
	}
	if (unk_0xB30526279D68AEF5())
	{
		if (unk_0x035E2C7B598704F7())
		{
			if (unk_0xB0109D1C67D405CB())
			{
				return 0;
			}
		}
		else if (unk_0x7F11C755C90EFEC5())
		{
			return 0;
		}
	}
	return 1;
}

int func_119(int iParam0)
{
	struct<13> Var0;
	
	if (unk_0xC8EC2BBF6FAB27CF() == 0)
	{
		return 0;
	}
	if (unk_0x523427CCABD5EC9C() || unk_0x7F11C755C90EFEC5())
	{
		if (unk_0x70579BF82B8B3603(0, iParam0))
		{
			if (unk_0x635C7622AA1EA852())
			{
				return 1;
			}
		}
	}
	if (unk_0x1B54267BB477DB52() || unk_0x035E2C7B598704F7())
	{
		if (iParam0 == 0 || iParam0 == unk_0xCFC72E446B0B3AD7())
		{
			if (unk_0x102D7B77874ABF1A(0, -3, 1) || unk_0x70579BF82B8B3603(1, 0))
			{
				return 1;
			}
		}
		else
		{
			Var0 = { func_8(iParam0) };
			if (unk_0x70579BF82B8B3603(0, 0) || (unk_0x70579BF82B8B3603(1, 0) && unk_0x9E1C8024B80AA59C(&Var0)))
			{
				return 1;
			}
		}
	}
	if (unk_0x708CE249B4F97BF8())
	{
		if (unk_0x70579BF82B8B3603(0, iParam0))
		{
			if (unk_0x635C7622AA1EA852())
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_120(int iParam0)
{
	return Global_34913 == iParam0;
}

int func_121()
{
	if (Global_34913 == 15)
	{
		return 0;
	}
	return 1;
}

int func_122(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (unk_0xCB29E1C3D086FBAE(uParam0))
	{
		if (bParam1)
		{
			if (!unk_0x378E80A2B7D7C8DF(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422166.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_123()
{
	func_114();
}

void func_124()
{
	Global_2450998.f_1 = 1;
	Global_2450998.f_33 = -1;
	Global_2450998.f_34 = -1;
	if (unk_0x5E3461E729DA646E(Global_14374) == 1)
	{
		if (Global_14381)
		{
			func_125(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
			if (Global_14336)
			{
				func_125(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
		else
		{
			func_125(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
		}
	}
}

void func_125(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	unk_0x48F299599202B77A(uParam0, sParam1);
	unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x4BD4D58838D3F8E5(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x9E9AFDBF482248F6(sParam7))
	{
		func_126(sParam7);
	}
	if (!unk_0x9E9AFDBF482248F6(iParam8))
	{
		func_126(iParam8);
	}
	if (!unk_0x9E9AFDBF482248F6(iParam9))
	{
		func_126(iParam9);
	}
	if (!unk_0x9E9AFDBF482248F6(iParam10))
	{
		func_126(iParam10);
	}
	if (!unk_0x9E9AFDBF482248F6(iParam11))
	{
		func_126(iParam11);
	}
	unk_0x7E86CE5F658823DB();
}

void func_126(var uParam0)
{
	unk_0x0F79C8080022554A(uParam0);
	unk_0xE6EC84BF3A7A64B6();
}

void func_127()
{
	int iVar0;
	
	if (iLocal_88)
	{
		Global_47002 = 0;
		Global_47002.f_12 = 0;
		Global_47002.f_24 = 0;
		Global_47002.f_36 = 0;
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_47002.f_1[iVar0] = 0;
			Global_47002.f_13[iVar0] = 0;
			Global_47002.f_25[iVar0] = 0;
			Global_47002.f_37[iVar0] = 0;
			iVar0++;
		}
		iLocal_88 = 0;
	}
}

