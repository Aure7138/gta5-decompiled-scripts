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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 10;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
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
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
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
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	int iLocal_79 = 4;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 3;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	struct<3> Local_88[5];
	struct<8> Local_104[5];
	int iLocal_145 = 0;
	struct<9> ScriptParam_0 = { 4, 0, 0, 0, 0, 3, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_79 = { ScriptParam_0 };
	if (unk_0x4B4BD87E3D30C50D(19))
	{
		func_19();
	}
	if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
	{
		func_18();
	}
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 200;
	iVar6 = unk_0x3EAC9995EC220C5A();
	while (true)
	{
		if (!func_9())
		{
			func_19();
		}
		if ((unk_0x3EAC9995EC220C5A() - iVar6) > 100)
		{
			if (!unk_0x1E80C02AC16B6622(unk_0x77F050A399DB77ED()))
			{
				Var0 = { unk_0xAF99169F0F5AE41D(unk_0x77F050A399DB77ED(), 0) };
				if (func_8(iLocal_79[iVar3]))
				{
					if (unk_0xB7A628320EFF8E47(Var0, unk_0xAF99169F0F5AE41D(iLocal_79[iVar3], 0)) >= IntToFloat((iVar5 * iVar5)) && unk_0x3D8234BA64B54520(iLocal_79[iVar3]))
					{
						func_7(&(Local_104[iVar3 /*8*/]));
						func_6(&(iLocal_79[iVar3]), 1, 0, 1);
					}
					else
					{
						func_5(iLocal_79[iVar3], &(Local_104[iVar3 /*8*/]), -1, 0, 0, 0, -1082130432, 0, -1);
					}
				}
				else if (unk_0x1F2158D615BC4B25(iLocal_79[iVar3]))
				{
					func_6(&(iLocal_79[iVar3]), 1, 0, 1);
				}
				if (func_3(iLocal_79.f_5[iVar4]))
				{
					if (unk_0xB7A628320EFF8E47(Var0, Local_88[iVar4 /*3*/]) >= IntToFloat((iVar5 * iVar5)))
					{
						if (unk_0x3D8234BA64B54520(iLocal_79.f_5[iVar4]) || unk_0xE5FADE1166052251(unk_0x77F050A399DB77ED(), iLocal_79.f_5[iVar4], 0))
						{
							func_2(&(iLocal_79.f_5[iVar4]));
						}
					}
				}
				else if (unk_0x1F2158D615BC4B25(iLocal_79.f_5[iVar4]))
				{
					func_2(&(iLocal_79.f_5[iVar4]));
				}
				iVar3++;
				if (iVar3 == iLocal_79)
				{
					iVar3 = 0;
				}
				iVar4++;
				if (iVar4 == iLocal_79.f_5)
				{
					iVar4 = 0;
				}
				if (func_1())
				{
					func_19();
				}
			}
			iVar6 = unk_0x3EAC9995EC220C5A();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

int func_1()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_79.f_5 - 1))
	{
		if (unk_0x1F2158D615BC4B25(iLocal_79.f_5[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_79 - 1))
	{
		if (unk_0x1F2158D615BC4B25(iLocal_79[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_2(var uParam0)
{
	if (unk_0x1F2158D615BC4B25(*uParam0))
	{
		unk_0x0B6E83A9A7ED3EBA(*uParam0);
		if (unk_0x335346A332B62CA2(*uParam0) && unk_0x95CBA891BCA778AA(*uParam0, 1))
		{
			unk_0xB84D4C251623B60C(uParam0);
		}
	}
}

int func_3(var uParam0)
{
	if (func_4(uParam0))
	{
		if (unk_0x968EA16107097324(uParam0, 0))
		{
			if (!unk_0x01CB02EE3F3F9481(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_4(var uParam0)
{
	if (unk_0x1F2158D615BC4B25(uParam0))
	{
		if (!unk_0x0B6E83A9A7ED3EBA(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_5(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x7F3E348C0892D8D2();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x1E80C02AC16B6622(uParam0))
	{
		if (!unk_0xD675556257571125(uParam0))
		{
			if (iParam8 == -1)
			{
				unk_0xC1308ED0850C6E89(uParam0, 1);
			}
			else
			{
				unk_0x07FB03636D0CBEAE(uParam0, 1, iParam8);
			}
			uParam1->f_7 = uParam0;
			unk_0xDAE3958B68D6DD03(uParam0, iParam2);
			unk_0x782AE41FA2D15C01(uParam0, fParam6);
			if (unk_0xC3B073777B46C61A(*uParam1))
			{
				unk_0x18EA864BF4963320(*uParam1, 7);
			}
		}
		unk_0x7FA7C8ADA78A47ED(uParam0, iParam4);
		unk_0x27E6B8FD4CF9944B(uParam0, iParam5);
		*uParam1 = unk_0xD0E6E703B35436FF(uParam0);
		if (!unk_0xB56FEBC510E7E9DE(uParam1->f_6, 2))
		{
			if (unk_0xC3B073777B46C61A(*uParam1))
			{
				if (!unk_0x0AAC2160036975D9(iParam7))
				{
					unk_0xA3F22F6C926AF60E("MCUSTBLIP");
					unk_0x82E0649BF28E05D3(iParam7);
					unk_0x86225F57FDF18DA4(*uParam1);
				}
				unk_0x573691DB812DC8AA(&(uParam1->f_6), 2);
			}
		}
		if (unk_0xB42592B9FFEB5EDE(uParam0, 0))
		{
			uParam1->f_1 = unk_0x349AB49DF6AFA81C(uParam0);
			if (!unk_0xB56FEBC510E7E9DE(uParam1->f_6, 3))
			{
				if (unk_0xC3B073777B46C61A(uParam1->f_1))
				{
					unk_0x18EA864BF4963320(uParam1->f_1, 7);
					unk_0x573691DB812DC8AA(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0xC3B073777B46C61A(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0xA5F70A8B83BDFA49(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_6(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x1F2158D615BC4B25(*uParam0))
	{
		if (!unk_0x1E80C02AC16B6622(*uParam0))
		{
			unk_0xA09672E91FA74DCA(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0x5A499E160A1878DC(*uParam0);
			}
			unk_0x112CD899A3BEE719(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x9526D9575C237F2F(*uParam0, 0);
			}
		}
		unk_0xA29D53AF339F4CD0(uParam0);
	}
}

void func_7(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xC3B073777B46C61A(*uParam0))
	{
		unk_0x296CDA10C549A502(uParam0);
		bVar0 = true;
	}
	if (unk_0xC3B073777B46C61A(uParam0->f_1))
	{
		unk_0x296CDA10C549A502(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x1F2158D615BC4B25(uParam0->f_7))
	{
		if (!unk_0x1E80C02AC16B6622(uParam0->f_7))
		{
			if (unk_0xD675556257571125(uParam0->f_7))
			{
				unk_0xC1308ED0850C6E89(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_8(var uParam0)
{
	if (func_4(uParam0))
	{
		if (!unk_0x1E80C02AC16B6622(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_9()
{
	if (unk_0xB1A77D5C890711F9(joaat("bailbond2")) == 0)
	{
		if (!func_16(4))
		{
			return 0;
		}
	}
	if (Global_88359 == 1)
	{
		return 0;
	}
	if (unk_0x7B8549A4F94FA4C8())
	{
		return 0;
	}
	if (Global_25117)
	{
		return 0;
	}
	if (func_10() != 2)
	{
		return 0;
	}
	return 1;
}

int func_10()
{
	func_11();
	return Global_99250.f_1754.f_539.f_3549;
}

void func_11()
{
	int iVar0;
	
	if (unk_0x1F2158D615BC4B25(unk_0x77F050A399DB77ED()))
	{
		if (func_15(Global_99250.f_1754.f_539.f_3549) != unk_0xDF1398076E26B0E4(unk_0x77F050A399DB77ED()))
		{
			iVar0 = func_14(unk_0x77F050A399DB77ED());
			if (func_13(iVar0) && (!func_12(14) || Global_98202))
			{
				if (Global_99250.f_1754.f_539.f_3549 != iVar0 && func_13(Global_99250.f_1754.f_539.f_3549))
				{
					Global_99250.f_1754.f_539.f_3550 = Global_99250.f_1754.f_539.f_3549;
				}
				Global_99250.f_1754.f_539.f_3551 = iVar0;
				Global_99250.f_1754.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_99250.f_1754.f_539.f_3549 != 145)
			{
				Global_99250.f_1754.f_539.f_3551 = Global_99250.f_1754.f_539.f_3549;
			}
			return;
		}
	}
	Global_99250.f_1754.f_539.f_3549 = 145;
}

bool func_12(int iParam0)
{
	return Global_35700 == iParam0;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1F2158D615BC4B25(uParam0))
	{
		iVar1 = unk_0xDF1398076E26B0E4(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)
{
	if (func_13(iParam0))
	{
		return Global_99250.f_32503[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_16(int iParam0)
{
	return func_17(iParam0, Global_35700);
}

int func_17(int iParam0, int iParam1)
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

void func_18()
{
	int iVar0;
	
	unk_0x72FAE653AFC04E97("ENEMIES", &iLocal_145);
	unk_0x329C14474C072D19(5, joaat("player"), iLocal_145);
	unk_0x329C14474C072D19(5, iLocal_145, joaat("player"));
	iVar0 = 0;
	while (iVar0 <= (iLocal_79.f_5 - 1))
	{
		if (func_3(iLocal_79.f_5[iVar0]))
		{
			unk_0x8D429A827A931AC9(iLocal_79.f_5[iVar0], 1, 1);
			Local_88[iVar0 /*3*/] = { unk_0xAF99169F0F5AE41D(iLocal_79.f_5[iVar0], 0) };
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_79 - 1))
	{
		if (func_8(iLocal_79[iVar0]))
		{
			unk_0x8D429A827A931AC9(iLocal_79[iVar0], 1, 1);
			unk_0x054E434B0AECBDA6(iLocal_79[iVar0], iLocal_145);
			func_5(iLocal_79[iVar0], &(Local_104[iVar0 /*8*/]), -1, 0, 0, 0, -1082130432, 0, -1);
		}
		iVar0++;
	}
}

void func_19()
{
	int iVar0;
	
	unk_0x219AD1D1E2795890(5, joaat("player"), iLocal_145);
	unk_0x219AD1D1E2795890(5, iLocal_145, joaat("player"));
	iVar0 = 0;
	while (iVar0 <= (iLocal_79 - 1))
	{
		func_7(&(Local_104[iVar0 /*8*/]));
		func_6(&(iLocal_79[iVar0]), 1, 0, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_79.f_5 - 1))
	{
		func_2(&(iLocal_79.f_5[iVar0]));
		iVar0++;
	}
	unk_0x2F798BA2098FDADE();
}

