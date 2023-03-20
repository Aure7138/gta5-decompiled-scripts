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
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	bool bLocal_28 = 0;
	bool bLocal_29 = 0;
	int iLocal_30 = 0;
	bool bLocal_31 = 0;
	var uLocal_32 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	var uVar9;
	
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_27 = -1;
	bLocal_31 = true;
	if (unk_0x16CDA1894CFE0781(joaat("exile_city_denial")) > 1)
	{
		Global_34880 = 0;
		unk_0x82706E6C897B0FA1();
	}
	func_36(18);
	func_35();
	unk_0xC1B1E9A034A63A62(0);
	unk_0x5AE11BC36633DE4E(0);
	iVar0 = 2;
	iVar1 = 0;
	while (!iLocal_30)
	{
		iLocal_30 = 1;
		if (unk_0x2C897F101BA20806(83))
		{
			Global_34880 = 0;
			if (!func_34(130))
			{
				func_33(18);
				func_32();
			}
			else if (func_34(131))
			{
				func_33(18);
				func_32();
			}
			switch (unk_0xFD54CAF11B66B874())
			{
				case 16:
					func_33(18);
					func_32();
					break;
				
				case 2:
					func_32();
					break;
				
				case 1:
					func_24(1628462442);
					func_24(1791324372);
					func_24(-240877892);
					func_24(1806999335);
					func_24(2054503592);
					func_24(-2009081795);
					bLocal_28 = false;
					while (!unk_0x2AF80829930084FD(unk_0x1788E93557766241()))
					{
						unk_0x4EDE34FBADD967A6(1000);
					}
					iLocal_30 = 0;
					break;
				}
		}
	}
	while (true)
	{
		if (iVar1 > 0)
		{
			iVar1 = (iVar1 - unk_0x83666F9FB8FEBD4B());
			unk_0xC1B1E9A034A63A62(0);
			if (iVar1 < 0)
			{
				iVar1 = 0;
			}
		}
		Var2 = { unk_0xBF8499F46AD9093A(unk_0xA16EC202D9D35357(), 0) };
		bLocal_28 = func_23(Var2, &bLocal_31);
		if (Global_68594 || Global_68594.f_1)
		{
			bLocal_28 = false;
		}
		bVar5 = false;
		bVar6 = false;
		if (func_34(131))
		{
			bVar5 = true;
		}
		if (!func_34(130))
		{
			bVar5 = true;
		}
		if (bVar5)
		{
			Global_34880 = 0;
			func_33(18);
			func_32();
		}
		if (func_21() == 1)
		{
			bVar6 = true;
		}
		Global_34880 = bLocal_28;
		if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
		{
			if (unk_0x0F32E31F2FEA17D2(unk_0xA16EC202D9D35357()) || unk_0x3FE7F56EBD3E8BCB(unk_0xA16EC202D9D35357()))
			{
				if (unk_0x7F40BDE5E3EA9E62(unk_0x6ADAC08D70C79DE5(unk_0xA16EC202D9D35357(), 0)))
				{
					bLocal_28 = false;
				}
			}
		}
		if (bLocal_29 != bLocal_28)
		{
			if (!bLocal_28)
			{
				func_19();
			}
			if (bLocal_28 && !bVar6)
			{
				bVar7 = false;
				bVar8 = true;
				while (bVar8)
				{
					switch (func_17(&iLocal_27, 6, 12, 0, 0))
					{
						case 0:
							bVar8 = false;
							bVar7 = false;
							break;
						
						case 1:
							bVar8 = false;
							bVar7 = true;
							break;
						
						default:
							unk_0x4EDE34FBADD967A6(0);
							break;
					}
					if (Global_68325)
					{
						unk_0x82706E6C897B0FA1();
					}
				}
				if (bVar7)
				{
					unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357());
					if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
					{
						uVar9 = unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357());
						while (unk_0xF7037F2CC07D58B0(uVar9))
						{
							unk_0x4EDE34FBADD967A6(5000);
							unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357());
							if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
							{
								uVar9 = unk_0x05681B6F593F0A9C(unk_0xA16EC202D9D35357());
							}
						}
					}
					if (func_15(unk_0xA16EC202D9D35357()) == 0)
					{
						if (!unk_0x889D01384B54BCE3(Global_97439.f_5944.f_923, 0))
						{
							func_10(1628462442, 7, 1, 31, 3, 10000, 20000, -1, -1, 150, -1, 1024);
						}
						else if (!unk_0x889D01384B54BCE3(Global_97439.f_5944.f_923, 1))
						{
							func_10(1791324372, 7, 1, 31, 3, 10000, 20000, -1, -1, 150, -1, 1024);
						}
						else if (!unk_0x889D01384B54BCE3(Global_97439.f_5944.f_923, 2))
						{
							func_10(-240877892, 7, 1, 31, 3, 10000, 20000, -1, -1, 150, -1, 1024);
						}
					}
					else if (func_15(unk_0xA16EC202D9D35357()) == 2)
					{
						if (!unk_0x889D01384B54BCE3(Global_97439.f_5944.f_923, 3))
						{
							func_10(1806999335, 7, 4, 31, 3, 10000, 20000, -1, -1, 151, -1, 1024);
						}
						else if (!unk_0x889D01384B54BCE3(Global_97439.f_5944.f_923, 4))
						{
							func_10(2054503592, 7, 4, 31, 3, 10000, 20000, -1, -1, 151, -1, 1024);
						}
						else if (!unk_0x889D01384B54BCE3(Global_97439.f_5944.f_923, 4))
						{
							func_10(-2009081795, 7, 4, 31, 3, 10000, 20000, -1, -1, 151, -1, 1024);
						}
					}
					if (iVar1 == 0 && !bVar6)
					{
						if ((!func_9(0) && !func_9(4)) && !func_9(3))
						{
							if (unk_0x76A43C22BFA206F8(11) < 256)
							{
								if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
								{
									if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
									{
										unk_0x5A62ACF1A0701002(11, unk_0xA16EC202D9D35357(), iVar0, 0f, &uLocal_32);
									}
								}
							}
							if (unk_0x83B393DE31BAC8F0())
							{
								if (bLocal_31)
								{
									func_8("CITDENAL", -1);
								}
								else
								{
									func_8("CITDENAL_R", -1);
								}
								iVar1 = 120000;
							}
						}
					}
				}
				else
				{
					bLocal_28 = false;
				}
			}
			else
			{
				func_19();
			}
		}
		if (bLocal_28)
		{
			if (!unk_0x2603AEA1B0EFBB87(uLocal_32))
			{
				if (unk_0x76A43C22BFA206F8(11) < 256)
				{
					if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
					{
						if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
						{
							unk_0x5A62ACF1A0701002(11, unk_0xA16EC202D9D35357(), iVar0, 0f, &uLocal_32);
						}
					}
				}
			}
		}
		if (bLocal_28 && unk_0xC9D9444186B5A374() > 60000)
		{
			unk_0x5AE11BC36633DE4E(0);
			iVar0 = (iVar0 + unk_0x444ECD635D5FD45F(1, 2));
			if (iVar0 < 8)
			{
				if (unk_0x2603AEA1B0EFBB87(uLocal_32))
				{
					unk_0xC2A0F075F5A5633C(uLocal_32, 11, iVar0);
				}
				else if (unk_0x76A43C22BFA206F8(11) < 256)
				{
					if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
					{
						if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
						{
							unk_0x5A62ACF1A0701002(11, unk_0xA16EC202D9D35357(), iVar0, 0f, &uLocal_32);
						}
					}
				}
			}
			else
			{
				iVar0 = 8;
			}
		}
		bLocal_29 = bLocal_28;
		if (bVar6)
		{
			Global_34880 = 0;
			if (bLocal_28)
			{
				func_19();
			}
			func_4();
			while (func_21() == 1)
			{
				unk_0x4EDE34FBADD967A6(2000);
			}
			func_35();
			bVar6 = false;
		}
		if (bLocal_28)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		else
		{
			unk_0x4EDE34FBADD967A6(10000);
		}
		if (func_1(12) && !func_9(12))
		{
			if (bLocal_28)
			{
				func_19();
			}
			while (func_9(0) || func_9(4))
			{
				unk_0x4EDE34FBADD967A6(8000);
			}
		}
	}
	func_4();
}

int func_1(int iParam0)
{
	if (Global_34915 == 15)
	{
		return 0;
	}
	if (func_2(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_2(int iParam0)
{
	return func_3(iParam0, Global_34915);
}

int func_3(int iParam0, int iParam1)
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

void func_4()
{
	func_7(0, 1);
	func_7(2, 1);
	func_7(1, 1);
	func_5(0, 1);
	func_5(1, 1);
	func_5(3, 1);
	func_5(2, 1);
}

void func_5(int iParam0, bool bParam1)
{
	if (iParam0 == 7)
	{
		return;
	}
	if (bParam1)
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_5486.f_17[iParam0]), 0);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&(Global_97439.f_5486.f_17[iParam0]), 0);
	}
	unk_0xE6E555C348E71DD0(Global_85586[iParam0 /*9*/].f_8, !bParam1);
	func_6(Global_85586[iParam0 /*9*/].f_7, 0, 0);
}

void func_6(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = unk_0x889D01384B54BCE3(Global_24750[iVar0 /*23*/].f_11, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0x889D01384B54BCE3(Global_24750[iVar0 /*23*/].f_11, 0))
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_24750[iVar0 /*23*/].f_11), 18);
		if (Global_24747 == 1)
		{
			Global_24748 = 1;
		}
		Global_24747 = 1;
	}
	if (bParam1)
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_24750[iVar0 /*23*/].f_11), 0);
		unk_0xD0E2BFCE93AE3ABD(&(Global_24750[iVar0 /*23*/].f_11), 15);
		unk_0xD0E2BFCE93AE3ABD(&(Global_24750[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&(Global_24750[iVar0 /*23*/].f_11), 0);
		unk_0x29DB79DD4D939B38(&(Global_24750[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0x889D01384B54BCE3(Global_24750[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0x5660C8AFDD9C1721(Global_24750[iVar0 /*23*/].f_19))
		{
			unk_0xB2135CBD0B4F6058(1);
			unk_0xB6FB9702660D84F6(&(Global_24750[iVar0 /*23*/].f_19));
			unk_0xB2135CBD0B4F6058(0);
		}
	}
}

void func_7(int iParam0, bool bParam1)
{
	if (iParam0 == 5)
	{
		return;
	}
	if (bParam1)
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_5486.f_11[iParam0]), 0);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&(Global_97439.f_5486.f_11[iParam0]), 0);
	}
	unk_0xD65B530D4109B216(Global_85650[iParam0 /*9*/].f_8, !bParam1);
	func_6(Global_85650[iParam0 /*9*/].f_7, 0, 0);
}

void func_8(char* sParam0, int iParam1)
{
	unk_0x5B4A49EA799C667F(sParam0);
	unk_0x644558F3AB755120(0, 0, 1, iParam1);
}

bool func_9(int iParam0)
{
	return Global_34915 == iParam0;
}

int func_10(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	struct<15> Var0;
	int iVar15;
	
	if (func_14(0))
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
		if (unk_0x889D01384B54BCE3(iParam2, iParam3))
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
	if (Global_97439.f_5944.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		if (Global_97439.f_5944.f_911 == Var0.f_0)
		{
			Global_97439.f_5944.f_911 = -1;
		}
		Var0.f_3 = func_13(iParam1);
		Var0.f_1 = iParam11;
		Var0.f_2 = iParam2;
		Var0.f_4 = (unk_0x09560C7DE2A384BD() + iParam5);
		Var0.f_5 = iParam6;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = iParam7;
		Var0.f_11 = -1;
		Var0.f_7 = iParam8;
		Var0.f_8 = iParam9;
		Var0.f_9 = iParam10;
		unk_0x29DB79DD4D939B38(&(Var0.f_1), 1);
		unk_0x29DB79DD4D939B38(&(Var0.f_1), 0);
		if (iParam7 != -1)
		{
			unk_0xD0E2BFCE93AE3ABD(&(Var0.f_1), 11);
		}
		else if (iParam1 == 0)
		{
			unk_0xD0E2BFCE93AE3ABD(&(Var0.f_1), 10);
		}
		Global_97439.f_5944[Global_97439.f_5944.f_136 /*15*/] = { Var0 };
		Global_97439.f_5944.f_136++;
		iVar15 = 0;
		while (iVar15 < 3)
		{
			if (unk_0x889D01384B54BCE3(iParam2, iVar15))
			{
				func_11(iVar15);
			}
			iVar15++;
		}
		return 1;
	}
	return 0;
}

void func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_12(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_97439.f_5944.f_136)
	{
		if (unk_0x889D01384B54BCE3(Global_97439.f_5944[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_97439.f_5944[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_97439.f_5944[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_97439.f_5944.f_764)
	{
		if (unk_0x889D01384B54BCE3(Global_97439.f_5944.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_97439.f_5944.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_97439.f_5944.f_919[iParam0] = iVar1;
}

bool func_12(int iParam0)
{
	return iParam0 < 3;
}

int func_13(int iParam0)
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

bool func_14(bool bParam0)
{
	if (!bParam0 && unk_0x16CDA1894CFE0781(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x889D01384B54BCE3(Global_68573, 0);
}

int func_15(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		iVar1 = unk_0xA609E58449080951(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_16(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_16(int iParam0)
{
	if (func_12(iParam0))
	{
		return Global_97439.f_29795[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_17(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_87925.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_1(0))
		{
			return 0;
		}
		Global_34879++;
		*iParam0 = Global_34879;
		unk_0x68068FC275E8AC83(unk_0xA495B6AB6F2BF8C7(), 0);
		Global_17099.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x847CD74208BB719C(8);
		}
		Global_34915 = iParam2;
		Global_34877 = *iParam0;
		Global_34878 = iParam4;
		Global_34876 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_34876 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34876)
			{
				if (Global_34882[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34877 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_2(iParam2))
		{
			return 0;
		}
		if (Global_34876 == 8)
		{
			return 0;
		}
		Global_34879++;
		*iParam0 = Global_34879;
		Global_34882[Global_34876 /*4*/] = Global_34879;
		Global_34882[Global_34876 /*4*/].f_1 = iParam1;
		Global_34882[Global_34876 /*4*/].f_2 = iParam2;
		Global_34882[Global_34876 /*4*/].f_3 = 0;
		Global_34876++;
		if (iParam4 != 0)
		{
			func_18(iParam0, iParam4);
		}
	}
	return 2;
}

void func_18(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_34876 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34876)
	{
		if (Global_34882[iVar0 /*4*/] == *uParam0)
		{
			Global_34882[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

void func_19()
{
	if (iLocal_27 != -1)
	{
		func_20(&iLocal_27);
	}
	func_24(1628462442);
	func_24(1791324372);
	func_24(-240877892);
	func_24(1806999335);
	func_24(2054503592);
	func_24(-2009081795);
	bLocal_28 = false;
	bLocal_29 = false;
	Global_34880 = 0;
	unk_0x2E908E2391995181(uLocal_32);
}

void func_20(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_34877)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_34876 = 0;
	Global_34878 = 0;
	Global_34915 = 15;
	Global_54755 = 0;
	Global_54756 = 0;
}

int func_21()
{
	func_22();
	return Global_97439.f_1729.f_539.f_3213;
}

void func_22()
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(unk_0xA16EC202D9D35357()))
	{
		if (func_16(Global_97439.f_1729.f_539.f_3213) != unk_0xA609E58449080951(unk_0xA16EC202D9D35357()))
		{
			iVar0 = func_15(unk_0xA16EC202D9D35357());
			if (func_12(iVar0) && (!func_9(14) || Global_96391))
			{
				if (Global_97439.f_1729.f_539.f_3213 != iVar0 && func_12(Global_97439.f_1729.f_539.f_3213))
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

int func_23(struct<2> Param0, var uParam2, int iParam3)
{
	if (!(unk_0x83B393DE31BAC8F0() || unk_0x0FFB470AFBDA3DCD()))
	{
		return 0;
	}
	if (Param0.f_1 < 400f)
	{
		if (Param0.f_0 < 1400f)
		{
			if (Param0.f_0 > -1900f)
			{
				if (Param0.f_1 > -3500f)
				{
					*iParam3 = 1;
					return 1;
				}
			}
		}
	}
	if (Param0.f_0 < 1536.35f)
	{
		if (Param0.f_1 > 1016.18f)
		{
			if (Param0.f_1 < 1213.53f)
			{
				if (Param0.f_0 > 1278.08f)
				{
					*iParam3 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Global_97439.f_5944.f_136)
	{
		if (Global_97439.f_5944[iVar0 /*15*/] == iParam0)
		{
			if (Global_35462 != iVar0)
			{
				func_31(iVar0);
				func_28(iParam0);
				iVar1 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97439.f_5944.f_198)
	{
		if (Global_97439.f_5944.f_137[iVar0 /*15*/] == iParam0)
		{
			func_28(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97439.f_5944.f_650)
	{
		if (Global_97439.f_5944.f_199[iVar0 /*15*/] == iParam0)
		{
			func_27(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97439.f_5944.f_764)
	{
		if (Global_97439.f_5944.f_651[iVar0 /*14*/] == iParam0)
		{
			func_26(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97439.f_5944.f_866)
	{
		if (Global_97439.f_5944.f_765[iVar0 /*10*/] == iParam0)
		{
			func_25(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

void func_25(int iParam0)
{
	int iVar0;
	struct<10> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_97439.f_5944.f_866)
	{
		return;
	}
	if (Global_97439.f_5944.f_866 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_97439.f_5944.f_866 - 2))
		{
			Global_97439.f_5944.f_765[iVar0 /*10*/] = { Global_97439.f_5944.f_765[iVar0 + 1 /*10*/] };
			iVar0++;
		}
	}
	if (Global_97439.f_5944.f_866 > 0)
	{
		Global_97439.f_5944.f_765[(Global_97439.f_5944.f_866 - 1) /*10*/] = { Var1 };
		Global_97439.f_5944.f_866 = (Global_97439.f_5944.f_866 - 1);
	}
}

void func_26(int iParam0)
{
	int iVar0;
	struct<14> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_97439.f_5944.f_764)
	{
		return;
	}
	if (Global_97439.f_5944.f_764 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_97439.f_5944.f_764 - 2))
		{
			Global_97439.f_5944.f_651[iVar0 /*14*/] = { Global_97439.f_5944.f_651[iVar0 + 1 /*14*/] };
			iVar0++;
		}
	}
	if (Global_97439.f_5944.f_764 > 0)
	{
		Global_97439.f_5944.f_651[(Global_97439.f_5944.f_764 - 1) /*14*/] = { Var1 };
		Global_97439.f_5944.f_764 = (Global_97439.f_5944.f_764 - 1);
	}
	func_11(0);
	func_11(1);
	func_11(2);
}

void func_27(int iParam0)
{
	struct<15> Var0;
	int iVar15;
	int iVar16;
	
	iVar15 = 0;
	while (iVar15 < Global_97439.f_5944.f_650)
	{
		if (Global_97439.f_5944.f_199[iVar15 /*15*/] == iParam0)
		{
			iVar16 = iVar15;
			while (iVar16 <= (Global_97439.f_5944.f_650 - 2))
			{
				Global_97439.f_5944.f_199[iVar16 /*15*/] = { Global_97439.f_5944.f_199[iVar16 + 1 /*15*/] };
				iVar16++;
			}
			Global_97439.f_5944.f_199[(Global_97439.f_5944.f_650 - 1) /*15*/] = { Var0 };
			Global_97439.f_5944.f_650 = (Global_97439.f_5944.f_650 - 1);
			return;
		}
		iVar15++;
	}
}

void func_28(int iParam0)
{
	struct<15> Var0;
	int iVar15;
	int iVar16;
	
	iVar15 = 0;
	while (iVar15 < Global_97439.f_5944.f_198)
	{
		if (Global_97439.f_5944.f_137[iVar15 /*15*/] == iParam0)
		{
			func_29(Global_97439.f_5944.f_137[iVar15 /*15*/].f_6);
			iVar16 = iVar15;
			while (iVar16 <= (Global_97439.f_5944.f_198 - 2))
			{
				Global_97439.f_5944.f_137[iVar16 /*15*/] = { Global_97439.f_5944.f_137[iVar16 + 1 /*15*/] };
				iVar16++;
			}
			Global_97439.f_5944.f_137[(Global_97439.f_5944.f_198 - 1) /*15*/] = { Var0 };
			Global_97439.f_5944.f_198 = (Global_97439.f_5944.f_198 - 1);
			return;
		}
		iVar15++;
	}
}

int func_29(int iParam0)
{
	int iVar0;
	
	if (Global_98[iParam0 /*10*/].f_8 != 138)
	{
		if (Global_97439.f_29795[iParam0 /*29*/].f_19[Global_14394] == 1)
		{
			Global_97439.f_29795[iParam0 /*29*/].f_19[Global_14394] = 0;
			if (Global_97439.f_29795[iParam0 /*29*/].f_24[Global_14394] == 0)
			{
				iVar0 = Global_14394;
				func_30(iParam0, iVar0);
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_30(int iParam0, int iParam1)
{
	if (Global_98[iParam0 /*10*/].f_8 != 138)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_97439.f_29795[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_97439.f_29795[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

void func_31(int iParam0)
{
	int iVar0;
	var uVar1;
	struct<15> Var2;
	
	if (iParam0 < 0 || iParam0 >= Global_97439.f_5944.f_136)
	{
		return;
	}
	uVar1 = Global_97439.f_5944[iParam0 /*15*/].f_2;
	if (Global_97439.f_5944.f_136 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_97439.f_5944.f_136 - 2))
		{
			Global_97439.f_5944[iVar0 /*15*/] = { Global_97439.f_5944[iVar0 + 1 /*15*/] };
			iVar0++;
		}
	}
	if (Global_97439.f_5944.f_136 > 0)
	{
		Global_97439.f_5944[(Global_97439.f_5944.f_136 - 1) /*15*/] = { Var2 };
		Global_97439.f_5944.f_136 = (Global_97439.f_5944.f_136 - 1);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x889D01384B54BCE3(uVar1, iVar0))
		{
			func_11(iVar0);
		}
		iVar0++;
	}
}

void func_32()
{
	func_19();
	func_4();
	unk_0x82706E6C897B0FA1();
}

int func_33(int iParam0)
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
	if (unk_0x889D01384B54BCE3(Global_97439.f_7341.f_99.f_217[iVar0], iVar1))
	{
		unk_0x29DB79DD4D939B38(&(Global_97439.f_7341.f_99.f_217[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

int func_34(int iParam0)
{
	if (iParam0 == 144 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97439.f_7341.f_99.f_58[iParam0];
}

void func_35()
{
	func_7(0, 0);
	func_7(2, 0);
	func_7(1, 0);
	func_5(0, 0);
	func_5(1, 0);
	func_5(3, 0);
	func_5(2, 0);
}

int func_36(int iParam0)
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
	if (unk_0x889D01384B54BCE3(Global_97439.f_7341.f_99.f_217[iVar0], iVar1))
	{
		return 0;
	}
	unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_7341.f_99.f_217[iVar0]), iVar1);
	return 1;
}

