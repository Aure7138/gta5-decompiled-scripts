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
	if (unk_0x89522B8E487D4EF9(19))
	{
		func_19();
	}
	if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		func_18();
	}
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 200;
	iVar6 = unk_0x9D40BBF80D8F5E8A();
	while (true)
	{
		if (!func_9())
		{
			func_19();
		}
		if ((unk_0x9D40BBF80D8F5E8A() - iVar6) > 100)
		{
			if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
			{
				Var0 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 0) };
				if (func_8(iLocal_79[iVar3]))
				{
					if (unk_0xB7A628320EFF8E47(Var0, unk_0x1141852D07400777(iLocal_79[iVar3], 0)) >= IntToFloat((iVar5 * iVar5)) && unk_0x51AAB57E2FC16B14(iLocal_79[iVar3]))
					{
						func_7(&(Local_104[iVar3 /*8*/]));
						func_6(&(iLocal_79[iVar3]), 1, 0, 1);
					}
					else
					{
						func_5(iLocal_79[iVar3], &(Local_104[iVar3 /*8*/]), -1, 0, 0, 0, -1082130432, 0, -1);
					}
				}
				else if (unk_0xD51CFE69539DB6D8(iLocal_79[iVar3]))
				{
					func_6(&(iLocal_79[iVar3]), 1, 0, 1);
				}
				if (func_3(iLocal_79.f_5[iVar4]))
				{
					if (unk_0xB7A628320EFF8E47(Var0, Local_88[iVar4 /*3*/]) >= IntToFloat((iVar5 * iVar5)))
					{
						if (unk_0x51AAB57E2FC16B14(iLocal_79.f_5[iVar4]) || unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iLocal_79.f_5[iVar4], 0))
						{
							func_2(&(iLocal_79.f_5[iVar4]));
						}
					}
				}
				else if (unk_0xD51CFE69539DB6D8(iLocal_79.f_5[iVar4]))
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
			iVar6 = unk_0x9D40BBF80D8F5E8A();
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
		if (unk_0xD51CFE69539DB6D8(iLocal_79.f_5[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_79 - 1))
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_79[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_2(var uParam0)
{
	if (unk_0xD51CFE69539DB6D8(*uParam0))
	{
		unk_0x76B2D234F1895632(*uParam0);
		if (unk_0x28D33422BA6C479D(*uParam0) && unk_0x4C5CA989AEF3A14C(*uParam0, 1))
		{
			unk_0xC1F2137782A816E9(uParam0);
		}
	}
}

int func_3(var uParam0)
{
	if (func_4(uParam0))
	{
		if (unk_0xC45A34912542C4EB(uParam0, 0))
		{
			if (!unk_0x9DD85FBDD5BC3BF1(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_4(var uParam0)
{
	if (unk_0xD51CFE69539DB6D8(uParam0))
	{
		if (!unk_0x76B2D234F1895632(uParam0))
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
		iParam3 = unk_0xBFAE5F9DEC53DAE2();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0xAF437D7C802AB246(uParam0))
	{
		if (!unk_0x0B25DF5D53C8A538(uParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x566A0CB935F3EEA8(uParam0, 1);
			}
			else
			{
				unk_0xB4D355A7DFE15BFC(uParam0, 1, iParam8);
			}
			uParam1->f_7 = uParam0;
			unk_0x2EFEB3EA1D6A46DE(uParam0, iParam2);
			unk_0xBE0219028260E31F(uParam0, fParam6);
			if (unk_0xD11595488376CB53(*uParam1))
			{
				unk_0xA09285173B92875E(*uParam1, 7);
			}
		}
		unk_0x83F4881BA5450FEF(uParam0, iParam4);
		unk_0xDCDE8A1D95BAAF08(uParam0, iParam5);
		*uParam1 = unk_0x7DAA0D3B6BB8AD16(uParam0);
		if (!unk_0xB519E5386FBF69E5(uParam1->f_6, 2))
		{
			if (unk_0xD11595488376CB53(*uParam1))
			{
				if (!unk_0xF6917DE0E003509D(iParam7))
				{
					unk_0xD514AD97CE4B7796("MCUSTBLIP");
					unk_0x63E8D6007C32E426(iParam7);
					unk_0x33A8A7C6E127D3D4(*uParam1);
				}
				unk_0x9956FB0E4B50ECB8(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x51374A0BB2871E6E(uParam0, 0))
		{
			uParam1->f_1 = unk_0x2BC40A9A0319DB0F(uParam0);
			if (!unk_0xB519E5386FBF69E5(uParam1->f_6, 3))
			{
				if (unk_0xD11595488376CB53(uParam1->f_1))
				{
					unk_0xA09285173B92875E(uParam1->f_1, 7);
					unk_0x9956FB0E4B50ECB8(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0xD11595488376CB53(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x73817D396768E4C6(&(uParam1->f_6), 3);
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
	if (unk_0xD51CFE69539DB6D8(*uParam0))
	{
		if (!unk_0xAF437D7C802AB246(*uParam0))
		{
			unk_0xC602CB510D8B9EAE(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0xAA6742AEFA0B2BC4(*uParam0);
			}
			unk_0x8D6671D78D1F569B(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x9BEE7E791BC4D38B(*uParam0, 0);
			}
		}
		unk_0x506D42CB68AE4EA5(uParam0);
	}
}

void func_7(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xD11595488376CB53(*uParam0))
	{
		unk_0x5B62CAB9B0D6ABF1(uParam0);
		bVar0 = true;
	}
	if (unk_0xD11595488376CB53(uParam0->f_1))
	{
		unk_0x5B62CAB9B0D6ABF1(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xD51CFE69539DB6D8(uParam0->f_7))
	{
		if (!unk_0xAF437D7C802AB246(uParam0->f_7))
		{
			if (unk_0x0B25DF5D53C8A538(uParam0->f_7))
			{
				unk_0x566A0CB935F3EEA8(uParam0->f_7, 0);
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
		if (!unk_0xAF437D7C802AB246(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_9()
{
	if (unk_0xFF6891E21E7FC193(joaat("bailbond2")) == 0)
	{
		if (!func_16(4))
		{
			return 0;
		}
	}
	if (Global_88278 == 1)
	{
		return 0;
	}
	if (unk_0x2DFE588AA3727FE3())
	{
		return 0;
	}
	if (Global_25036)
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
	return Global_99155.f_1750.f_539.f_3549;
}

void func_11()
{
	int iVar0;
	
	if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
	{
		if (func_15(Global_99155.f_1750.f_539.f_3549) != unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()))
		{
			iVar0 = func_14(unk_0xE7869D5D7816A9B6());
			if (func_13(iVar0) && (!func_12(14) || Global_98107))
			{
				if (Global_99155.f_1750.f_539.f_3549 != iVar0 && func_13(Global_99155.f_1750.f_539.f_3549))
				{
					Global_99155.f_1750.f_539.f_3550 = Global_99155.f_1750.f_539.f_3549;
				}
				Global_99155.f_1750.f_539.f_3551 = iVar0;
				Global_99155.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_99155.f_1750.f_539.f_3549 != 145)
			{
				Global_99155.f_1750.f_539.f_3551 = Global_99155.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_99155.f_1750.f_539.f_3549 = 145;
}

bool func_12(int iParam0)
{
	return Global_35619 == iParam0;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD51CFE69539DB6D8(uParam0))
	{
		iVar1 = unk_0x1B2DC87EFB36DF80(uParam0);
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
		return Global_99155.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_16(int iParam0)
{
	return func_17(iParam0, Global_35619);
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
	
	unk_0x103FCC2BD24292A3("ENEMIES", &iLocal_145);
	unk_0xA9CA101B50B90993(5, joaat("player"), iLocal_145);
	unk_0xA9CA101B50B90993(5, iLocal_145, joaat("player"));
	iVar0 = 0;
	while (iVar0 <= (iLocal_79.f_5 - 1))
	{
		if (func_3(iLocal_79.f_5[iVar0]))
		{
			unk_0x20BB4B94CC6DDC9A(iLocal_79.f_5[iVar0], 1, 1);
			Local_88[iVar0 /*3*/] = { unk_0x1141852D07400777(iLocal_79.f_5[iVar0], 0) };
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_79 - 1))
	{
		if (func_8(iLocal_79[iVar0]))
		{
			unk_0x20BB4B94CC6DDC9A(iLocal_79[iVar0], 1, 1);
			unk_0x690C5239500171FE(iLocal_79[iVar0], iLocal_145);
			func_5(iLocal_79[iVar0], &(Local_104[iVar0 /*8*/]), -1, 0, 0, 0, -1082130432, 0, -1);
		}
		iVar0++;
	}
}

void func_19()
{
	int iVar0;
	
	unk_0x0BC9F7BA2AD16D6D(5, joaat("player"), iLocal_145);
	unk_0x0BC9F7BA2AD16D6D(5, iLocal_145, joaat("player"));
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
	unk_0x52F20802944F8DCE();
}

