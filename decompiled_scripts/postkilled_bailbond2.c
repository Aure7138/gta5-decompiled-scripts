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
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 10;
	var uLocal_37 = 0;
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
	int iLocal_78 = 4;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 3;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	struct<3> Local_87[5];
	struct<8> Local_103[5];
	int iLocal_144 = 0;
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
	sLocal_17 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	iLocal_78 = { ScriptParam_0 };
	if (unk_0x2C897F101BA20806(19))
	{
		func_19();
	}
	if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
	{
		func_18();
	}
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 200;
	iVar6 = unk_0x09560C7DE2A384BD();
	while (true)
	{
		if (!func_9())
		{
			func_19();
		}
		if ((unk_0x09560C7DE2A384BD() - iVar6) > 100)
		{
			if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
			{
				Var0 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0) };
				if (func_8(iLocal_78[iVar3]))
				{
					if (unk_0xB7A628320EFF8E47(Var0, unk_0xBF8499F46AD9093A(iLocal_78[iVar3], 0)) >= IntToFloat((iVar5 * iVar5)) && unk_0x0E7E162F5A49FAAA(iLocal_78[iVar3]))
					{
						func_7(&(Local_103[iVar3 /*8*/]));
						func_6(&(iLocal_78[iVar3]), 1, 0, 1);
					}
					else
					{
						func_5(iLocal_78[iVar3], &(Local_103[iVar3 /*8*/]), -1, 0, 0, 0, -1082130432, 0);
					}
				}
				else if (unk_0x538DF9E5B1DF01EB(iLocal_78[iVar3]))
				{
					func_6(&(iLocal_78[iVar3]), 1, 0, 1);
				}
				if (func_3(iLocal_78.f_5[iVar4]))
				{
					if (unk_0xB7A628320EFF8E47(Var0, Local_87[iVar4 /*3*/]) >= IntToFloat((iVar5 * iVar5)))
					{
						if (unk_0x0E7E162F5A49FAAA(iLocal_78.f_5[iVar4]) || unk_0xAD203DB71ADF6E57(unk_0xA16EC202D9D35357(), iLocal_78.f_5[iVar4], 0))
						{
							func_2(&(iLocal_78.f_5[iVar4]));
						}
					}
				}
				else if (unk_0x538DF9E5B1DF01EB(iLocal_78.f_5[iVar4]))
				{
					func_2(&(iLocal_78.f_5[iVar4]));
				}
				iVar3++;
				if (iVar3 == iLocal_78)
				{
					iVar3 = 0;
				}
				iVar4++;
				if (iVar4 == iLocal_78.f_5)
				{
					iVar4 = 0;
				}
				if (func_1())
				{
					func_19();
				}
			}
			iVar6 = unk_0x09560C7DE2A384BD();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

int func_1()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_78.f_5 - 1))
	{
		if (unk_0x538DF9E5B1DF01EB(iLocal_78.f_5[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_78 - 1))
	{
		if (unk_0x538DF9E5B1DF01EB(iLocal_78[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_2(var uParam0)
{
	if (unk_0x538DF9E5B1DF01EB(*uParam0))
	{
		unk_0xE44A580B551C3645(*uParam0);
		if (unk_0x22349EC06EA5B08B(*uParam0) && unk_0xD8233CB95CB48A7C(*uParam0, 1))
		{
			unk_0x3A3C5A6572B3C611(uParam0);
		}
	}
}

int func_3(var uParam0)
{
	if (func_4(uParam0))
	{
		if (unk_0xECFECDAD51A6184F(uParam0, 0))
		{
			if (!unk_0x042EE007A41C88D4(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_4(var uParam0)
{
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		if (!unk_0xE44A580B551C3645(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_5(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0xA495B6AB6F2BF8C7();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x2DE0B96E966FD817(uParam0))
	{
		if (!unk_0x06C73C7722DE6B93(uParam0))
		{
			unk_0xD2127E08F7ECC647(uParam0, 1);
			uParam1->f_7 = uParam0;
			unk_0x684EAC33CF12840F(uParam0, iParam2);
			unk_0xA081E108449F36AF(uParam0, fParam6);
			if (unk_0x5660C8AFDD9C1721(*uParam1))
			{
				unk_0x85C00B9AEF9CC0BE(*uParam1, 7);
			}
		}
		unk_0xD8A5ADBA7F78DE98(uParam0, iParam4);
		unk_0x0E24447AB5E1E464(uParam0, iParam5);
		*uParam1 = unk_0xD02D41827B8C0615(uParam0);
		if (!unk_0x889D01384B54BCE3(uParam1->f_6, 2))
		{
			if (unk_0x5660C8AFDD9C1721(*uParam1))
			{
				if (!unk_0x06771AF7795B3ECF(iParam7))
				{
					unk_0xBF0178A0BBB67E93("MCUSTBLIP");
					unk_0x94E086BCAE8856C1(iParam7);
					unk_0x9658B68CC5D71D0C(*uParam1);
				}
				unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x202EF5D8203705EF(uParam0, 0))
		{
			uParam1->f_1 = unk_0xBA3EA247D2E688E5(uParam0);
			if (!unk_0x889D01384B54BCE3(uParam1->f_6, 3))
			{
				if (unk_0x5660C8AFDD9C1721(uParam1->f_1))
				{
					unk_0x85C00B9AEF9CC0BE(uParam1->f_1, 7);
					unk_0xD0E2BFCE93AE3ABD(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0x5660C8AFDD9C1721(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x29DB79DD4D939B38(&(uParam1->f_6), 3);
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
	if (unk_0x538DF9E5B1DF01EB(*uParam0))
	{
		if (!unk_0x2DE0B96E966FD817(*uParam0))
		{
			unk_0xDD56EF930C7A5863(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0x2A6FA367FED380C2(*uParam0);
			}
			unk_0x2686393074E14730(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x2C4E82CF88213975(*uParam0, 0);
			}
		}
		unk_0x6B3DDEE91652BE59(uParam0);
	}
}

void func_7(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0x5660C8AFDD9C1721(*uParam0))
	{
		unk_0xB6FB9702660D84F6(uParam0);
		bVar0 = true;
	}
	if (unk_0x5660C8AFDD9C1721(uParam0->f_1))
	{
		unk_0xB6FB9702660D84F6(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x538DF9E5B1DF01EB(uParam0->f_7))
	{
		if (!unk_0x2DE0B96E966FD817(uParam0->f_7))
		{
			if (unk_0x06C73C7722DE6B93(uParam0->f_7))
			{
				unk_0xD2127E08F7ECC647(uParam0->f_7, 0);
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
		if (!unk_0x2DE0B96E966FD817(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_9()
{
	if (unk_0x16CDA1894CFE0781(joaat("bailbond2")) == 0)
	{
		if (!func_16(4))
		{
			return 0;
		}
	}
	if (Global_87367 == 1)
	{
		return 0;
	}
	if (unk_0xEC35DAD55FA4EEF2())
	{
		return 0;
	}
	if (Global_24448)
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
	return Global_97439.f_1729.f_539.f_3213;
}

void func_11()
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
	{
		if (func_15(Global_97439.f_1729.f_539.f_3213) != unk_0xA609E58449080951(unk_0xA16EC202D9D35357()))
		{
			iVar0 = func_14(unk_0xA16EC202D9D35357());
			if (func_13(iVar0) && (!func_12(14) || Global_96391))
			{
				if (Global_97439.f_1729.f_539.f_3213 != iVar0 && func_13(Global_97439.f_1729.f_539.f_3213))
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

bool func_12(int iParam0)
{
	return Global_34915 == iParam0;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		iVar1 = unk_0xA609E58449080951(uParam0);
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
		return Global_97439.f_29795[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_16(int iParam0)
{
	return func_17(iParam0, Global_34915);
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
	
	unk_0x0B29CE7F19BFE6C0("ENEMIES", &iLocal_144);
	unk_0x2966D41514EAE84B(5, joaat("player"), iLocal_144);
	unk_0x2966D41514EAE84B(5, iLocal_144, joaat("player"));
	iVar0 = 0;
	while (iVar0 <= (iLocal_78.f_5 - 1))
	{
		if (func_3(iLocal_78.f_5[iVar0]))
		{
			unk_0x7B9576B4E099FB1F(iLocal_78.f_5[iVar0], 1, 1);
			Local_87[iVar0 /*3*/] = { unk_0xBF8499F46AD9093A(iLocal_78.f_5[iVar0], 0) };
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_78 - 1))
	{
		if (func_8(iLocal_78[iVar0]))
		{
			unk_0x7B9576B4E099FB1F(iLocal_78[iVar0], 1, 1);
			unk_0xA9465591B42213AE(iLocal_78[iVar0], iLocal_144);
			func_5(iLocal_78[iVar0], &(Local_103[iVar0 /*8*/]), -1, 0, 0, 0, -1082130432, 0);
		}
		iVar0++;
	}
}

void func_19()
{
	int iVar0;
	
	unk_0xCD7E4C2FC2240193(5, joaat("player"), iLocal_144);
	unk_0xCD7E4C2FC2240193(5, iLocal_144, joaat("player"));
	iVar0 = 0;
	while (iVar0 <= (iLocal_78 - 1))
	{
		func_7(&(Local_103[iVar0 /*8*/]));
		func_6(&(iLocal_78[iVar0]), 1, 0, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_78.f_5 - 1))
	{
		func_2(&(iLocal_78.f_5[iVar0]));
		iVar0++;
	}
	unk_0x82706E6C897B0FA1();
}

