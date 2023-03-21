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
	if (unk_0xD4BE58A7E3E102AC(19))
	{
		func_20();
	}
	if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
	{
		func_19();
	}
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 200;
	iVar6 = unk_0x9B35D07DCD0F0B43();
	while (true)
	{
		if (!func_9())
		{
			func_20();
		}
		if ((unk_0x9B35D07DCD0F0B43() - iVar6) > 100)
		{
			if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
			{
				Var0 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0) };
				if (func_8(iLocal_79[iVar3]))
				{
					if (unk_0xB7A628320EFF8E47(Var0, unk_0xACE5E491FC1B0D37(iLocal_79[iVar3], 0)) >= IntToFloat((iVar5 * iVar5)) && unk_0x7FB035B5755E076D(iLocal_79[iVar3]))
					{
						func_7(&(Local_104[iVar3 /*8*/]));
						func_6(&(iLocal_79[iVar3]), 1, 0, 1);
					}
					else
					{
						func_5(iLocal_79[iVar3], &(Local_104[iVar3 /*8*/]), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1);
					}
				}
				else if (unk_0xD4B321D9096B01FC(iLocal_79[iVar3]))
				{
					func_6(&(iLocal_79[iVar3]), 1, 0, 1);
				}
				if (func_3(iLocal_79.f_5[iVar4]))
				{
					if (unk_0xB7A628320EFF8E47(Var0, Local_88[iVar4 /*3*/]) >= IntToFloat((iVar5 * iVar5)))
					{
						if (unk_0x7FB035B5755E076D(iLocal_79.f_5[iVar4]) || unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iLocal_79.f_5[iVar4], 0))
						{
							func_2(&(iLocal_79.f_5[iVar4]));
						}
					}
				}
				else if (unk_0xD4B321D9096B01FC(iLocal_79.f_5[iVar4]))
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
					func_20();
				}
			}
			iVar6 = unk_0x9B35D07DCD0F0B43();
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
		if (unk_0xD4B321D9096B01FC(iLocal_79.f_5[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_79 - 1))
	{
		if (unk_0xD4B321D9096B01FC(iLocal_79[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_2(var uParam0)
{
	if (unk_0xD4B321D9096B01FC(*uParam0))
	{
		unk_0xF4B969E0807E76C7(*uParam0, 0);
		if (unk_0x00123AB82C5FAC28(*uParam0) && unk_0x532AFD85DAA91F63(*uParam0, 1))
		{
			unk_0xF25956700ADFD77F(uParam0);
		}
	}
}

int func_3(var uParam0)
{
	if (func_4(uParam0))
	{
		if (unk_0xD960230552BC4165(uParam0, 0))
		{
			if (!unk_0xCFBE5B663F1567A7(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_4(var uParam0)
{
	if (unk_0xD4B321D9096B01FC(uParam0))
	{
		if (!unk_0xF4B969E0807E76C7(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_5(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x7A8732CFB5113E77();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x2BF5E63466422C38(uParam0))
	{
		if (!unk_0xD16F58ECC1C52CA2(uParam0))
		{
			if (iParam8 == -1)
			{
				unk_0xE780F376C4EE1889(uParam0, 1);
			}
			else
			{
				unk_0x07AAE308C469D4B9(uParam0, 1, iParam8);
			}
			uParam1->f_7 = uParam0;
			unk_0x432AB2F1478809C8(uParam0, iParam2);
			unk_0x78AA771D23BD33D0(uParam0, fParam6);
			if (unk_0x39A01A052D9B5FF0(*uParam1))
			{
				unk_0x6089156CDC87FE4B(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0xB37778208305A9B0(uParam0, iParam9);
		}
		unk_0x6E5905FC20A8345C(uParam0, iParam4);
		unk_0x5D4D921D98B0E72C(uParam0, iParam5);
		*uParam1 = unk_0x561AE37FE7777958(uParam0);
		if (!iParam9 == -1)
		{
			if (unk_0x39A01A052D9B5FF0(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x088577CF98F96D05(*uParam1, iParam8);
				}
				if (!unk_0x9591DE0F00127F2A(iParam7))
				{
					unk_0xD84B23397AD07105("STRING");
					if (bParam10)
					{
						unk_0xA89C789CC9FEF523(iParam7);
					}
					else
					{
						unk_0x0AC9F8E1AFCEC860(iParam7);
					}
					unk_0xC2DE1B83E9D17024(*uParam1);
				}
				unk_0x6089156CDC87FE4B(*uParam1, 7);
			}
		}
		if (!unk_0xA2BC31158C8CEFD2(uParam1->f_6, 2))
		{
			if (unk_0x39A01A052D9B5FF0(*uParam1))
			{
				unk_0xA1E7A40E1F56E511(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x5294582CE404D3F4(uParam0, 0))
		{
			uParam1->f_1 = unk_0xD63A0ACEC4E5647D(uParam0);
			if (!unk_0xA2BC31158C8CEFD2(uParam1->f_6, 3))
			{
				if (unk_0x39A01A052D9B5FF0(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0x088577CF98F96D05(uParam1->f_1, iParam8);
					}
					if (!unk_0x9591DE0F00127F2A(iParam7))
					{
						unk_0xD84B23397AD07105("STRING");
						if (bParam10)
						{
							unk_0xA89C789CC9FEF523(iParam7);
						}
						else
						{
							unk_0x0AC9F8E1AFCEC860(iParam7);
						}
						unk_0xC2DE1B83E9D17024(uParam1->f_1);
					}
					unk_0x6089156CDC87FE4B(uParam1->f_1, 7);
					unk_0xA1E7A40E1F56E511(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0x39A01A052D9B5FF0(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0x3B76114EC84D5812(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0x39A01A052D9B5FF0(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x3B76114EC84D5812(&(uParam1->f_6), 3);
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
	if (unk_0xD4B321D9096B01FC(*uParam0))
	{
		if (!unk_0x2BF5E63466422C38(*uParam0))
		{
			unk_0xDA778D908FD69EEE(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0xB46600A5F9F79CE8(*uParam0);
			}
			unk_0x7D81B41B134BD6F2(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xCC94EE23853F38E4(*uParam0, 0);
			}
		}
		unk_0x0FFB05DA97E810B5(uParam0);
	}
}

void func_7(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0x39A01A052D9B5FF0(*uParam0))
	{
		unk_0xAA2276003B2ADF1B(uParam0);
		bVar0 = true;
	}
	if (unk_0x39A01A052D9B5FF0(uParam0->f_1))
	{
		unk_0xAA2276003B2ADF1B(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xD4B321D9096B01FC(uParam0->f_7))
	{
		if (!unk_0xF4B969E0807E76C7(uParam0->f_7, 0))
		{
			if (unk_0xD16F58ECC1C52CA2(uParam0->f_7))
			{
				unk_0xE780F376C4EE1889(uParam0->f_7, 0);
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
		if (!unk_0x2BF5E63466422C38(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_9()
{
	if (unk_0x222F76006659B0EB(joaat("bailbond2")) == 0)
	{
		if (!func_17(4))
		{
			return 0;
		}
	}
	if (Global_95619 == 1)
	{
		return 0;
	}
	if (unk_0x33D7ABC47E81DCF9())
	{
		return 0;
	}
	if (Global_30738)
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
	return Global_111560.f_2358.f_539.f_4321;
}

void func_11()
{
	int iVar0;
	
	if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
	{
		if (func_15(Global_111560.f_2358.f_539.f_4321) != unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()))
		{
			iVar0 = func_14(unk_0x0FA8183DAD2B3203());
			if (func_13(iVar0) && (!func_12(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_13(Global_111560.f_2358.f_539.f_4321))
				{
					Global_111560.f_2358.f_539.f_4322 = Global_111560.f_2358.f_539.f_4321;
				}
				Global_111560.f_2358.f_539.f_4323 = iVar0;
				Global_111560.f_2358.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111560.f_2358.f_539.f_4321 != 145)
			{
				Global_111560.f_2358.f_539.f_4323 = Global_111560.f_2358.f_539.f_4321;
			}
			return;
		}
	}
	Global_111560.f_2358.f_539.f_4321 = 145;
}

bool func_12(int iParam0)
{
	return Global_41396 == iParam0;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD4B321D9096B01FC(uParam0))
	{
		iVar1 = unk_0x7F375072508F738F(uParam0);
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
		return func_16(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_16(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

bool func_17(int iParam0)
{
	return func_18(iParam0, Global_41396);
}

int func_18(int iParam0, int iParam1)
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

void func_19()
{
	int iVar0;
	
	unk_0x8CBD7ED64E4A522F("ENEMIES", &iLocal_145);
	unk_0x9B54A3CCAAB4F5FB(5, joaat("player"), iLocal_145);
	unk_0x9B54A3CCAAB4F5FB(5, iLocal_145, joaat("player"));
	iVar0 = 0;
	while (iVar0 <= (iLocal_79.f_5 - 1))
	{
		if (func_3(iLocal_79.f_5[iVar0]))
		{
			unk_0xE5C667CF3B4642D2(iLocal_79.f_5[iVar0], 1, 1);
			Local_88[iVar0 /*3*/] = { unk_0xACE5E491FC1B0D37(iLocal_79.f_5[iVar0], 0) };
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_79 - 1))
	{
		if (func_8(iLocal_79[iVar0]))
		{
			unk_0xE5C667CF3B4642D2(iLocal_79[iVar0], 1, 1);
			unk_0xDB889DCC8B0139E6(iLocal_79[iVar0], iLocal_145);
			func_5(iLocal_79[iVar0], &(Local_104[iVar0 /*8*/]), -1, 0, 0, 0, -1082130432, 0, -1, -1, 1);
		}
		iVar0++;
	}
}

void func_20()
{
	int iVar0;
	
	unk_0xC6AE124658CBC895(5, joaat("player"), iLocal_145);
	unk_0xC6AE124658CBC895(5, iLocal_145, joaat("player"));
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
	unk_0x9C9E32388A7886A2();
}

