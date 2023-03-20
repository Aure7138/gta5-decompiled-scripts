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
	var uLocal_18[3] = { 0, 0, 0 };
	int iLocal_22 = 0;
	var uLocal_23[3] = { 0, 0, 0 };
	int iLocal_27 = 0;
	int iLocal_28 = 0;
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
	if (unk_0x524AF15206846700(2))
	{
		func_11();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(250);
		switch (iLocal_27)
		{
			case 0:
				if (uLocal_18[0])
				{
					StringCopy(&(Global_16831[1 /*42*/]), "CL_C1A", 16);
					StringCopy(&(Global_16831[1 /*42*/].f_4), "CL_C1A_BR", 16);
					Global_16831[1 /*42*/].f_8 = 0;
					Global_16831[1 /*42*/].f_9 = 2;
					StringCopy(&(Global_16831[1 /*42*/].f_10[1 /*4*/]), "CL_C1A_J1", 16);
					Global_16831[1 /*42*/].f_37[1] = 0;
					Global_16831[1 /*42*/].f_32[1] = 3;
					Global_16831[1 /*42*/].f_27[1] = 0;
					StringCopy(&(Global_16831[1 /*42*/].f_10[2 /*4*/]), "CL_C1A_J2", 16);
					Global_16831[1 /*42*/].f_37[2] = 0;
					Global_16831[1 /*42*/].f_32[2] = 3;
					Global_16831[1 /*42*/].f_27[2] = 0;
					iLocal_22 = 0;
					while (iLocal_22 < Global_16831[1 /*42*/].f_32[1])
					{
						Global_25174[iLocal_22] = 0;
						Global_25170[iLocal_22] = 0;
						iLocal_22++;
					}
					func_4(1, 1, 1, 1);
					func_3("CL_ADDED", "CL_C1A", 3000, 1);
					iLocal_27 = 1;
				}
				break;
			
			case 1:
				iLocal_22 = 0;
				while (iLocal_22 < Global_16831[1 /*42*/].f_32[1])
				{
					if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
					{
						if (unk_0xD2CFFE76B625AE55(uLocal_23[iLocal_22]))
						{
							if (unk_0xE4F7206742848BAF(uLocal_23[iLocal_22]))
							{
								if (unk_0x77F1B7F6C32990D6(uLocal_23[iLocal_22], unk_0x27D769C59BC9D030(), 1))
								{
									if (!Global_25170[iLocal_22])
									{
										Global_16831[1 /*42*/].f_27[1]++;
										func_2("CL_C1A_J1", Global_16831[1 /*42*/].f_27[1], Global_16831[1 /*42*/].f_32[1], 2000, 1);
										Global_25170[iLocal_22] = 1;
									}
									if (unk_0x2006A8C1BA2AFE80(uLocal_23[iLocal_22], 0))
									{
										if (!Global_25174[iLocal_22])
										{
											if (unk_0xD53EE4D6F61E44C4(uLocal_23[iLocal_22]) && func_1())
											{
												Global_16831[1 /*42*/].f_27[2]++;
												func_2("CL_C1A_J2", Global_16831[1 /*42*/].f_27[2], Global_16831[1 /*42*/].f_32[2], 2000, 1);
												Global_25174[iLocal_22] = 1;
											}
										}
									}
									if (Global_16831[1 /*42*/].f_27[1] >= Global_16831[1 /*42*/].f_32[1] && Global_16831[1 /*42*/].f_27[2] >= Global_16831[1 /*42*/].f_32[2])
									{
										func_3("CL_COMPLETE", "CL_C1A", 3000, 1);
										Global_16831[1 /*42*/].f_8 = 1;
										iLocal_27 = 2;
									}
								}
							}
						}
					}
					iLocal_22++;
				}
				break;
			
			case 2:
				break;
		}
		unk_0x4EDE34FBADD967A6(250);
		switch (iLocal_28)
		{
			case 0:
				if (uLocal_18[1])
				{
					StringCopy(&(Global_16831[2 /*42*/]), "CL_C1B", 16);
					StringCopy(&(Global_16831[2 /*42*/].f_4), "CL_C1B_BR", 16);
					Global_16831[2 /*42*/].f_8 = 0;
					Global_16831[2 /*42*/].f_9 = 3;
					StringCopy(&(Global_16831[2 /*42*/].f_10[1 /*4*/]), "CL_C1B_J1", 16);
					Global_16831[2 /*42*/].f_37[1] = 0;
					Global_16831[2 /*42*/].f_32[1] = -1;
					Global_16831[2 /*42*/].f_27[1] = -1;
					StringCopy(&(Global_16831[2 /*42*/].f_10[2 /*4*/]), "CL_C1B_J2", 16);
					Global_16831[2 /*42*/].f_37[2] = 0;
					Global_16831[2 /*42*/].f_32[2] = -1;
					Global_16831[2 /*42*/].f_27[2] = -1;
					StringCopy(&(Global_16831[2 /*42*/].f_10[3 /*4*/]), "CL_C1B_J3", 16);
					Global_16831[2 /*42*/].f_37[3] = 0;
					Global_16831[2 /*42*/].f_32[3] = -1;
					Global_16831[2 /*42*/].f_27[3] = -1;
					func_4(136, 2, 1, 1);
					func_3("CL_ADDED", "CL_C1B", 3000, 1);
					iLocal_28 = 1;
				}
				break;
			
			case 1:
				if (!Global_16831[2 /*42*/].f_37[1])
				{
				}
				if (!Global_16831[2 /*42*/].f_37[2])
				{
				}
				if (!Global_16831[2 /*42*/].f_37[3])
				{
				}
				if ((Global_16831[2 /*42*/].f_37[1] == 1 && Global_16831[2 /*42*/].f_37[2] == 1) && Global_16831[2 /*42*/].f_37[3] == 1)
				{
					func_3("CL_COMPLETE", "CL_C1B", 3000, 1);
					Global_16831[2 /*42*/].f_8 = 1;
					iLocal_28 = 2;
				}
				break;
			
			case 2:
				break;
		}
	}
}

int func_1()
{
	if (Global_16748)
	{
		return 1;
	}
	return 0;
}

void func_2(char* sParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	iParam4 = iParam4;
	unk_0xA1F5C1FF1B6B5069(sParam0);
	unk_0x90805938ADF0F45C(uParam1);
	unk_0x90805938ADF0F45C(uParam2);
	unk_0xB1547516FF59A048(iParam3, 0);
}

void func_3(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xA1F5C1FF1B6B5069(sParam0);
	unk_0x2B088D6251C2080D(sParam1);
	unk_0xB1547516FF59A048(iParam2, 0);
}

int func_4(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_10())
	{
		return 0;
	}
	if (func_5(iParam0, iParam1, bParam2, iParam3) == 1)
	{
		return 1;
	}
	return 0;
}

int func_5(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	if (unk_0xD32535FA4397160F(joaat("appsidetask")) > 0)
	{
		return 0;
	}
	if (func_8() == 0)
	{
		func_7();
		return 0;
	}
	func_6(Global_16830);
	Global_17000[Global_16830 /*9*/].f_1 = uParam1;
	Global_17000[Global_16830 /*9*/] = uParam0;
	if (iParam3 == 0)
	{
	}
	else
	{
		Global_17000[Global_16830 /*9*/].f_8 = iParam3;
	}
	if (bParam2)
	{
	}
	return 1;
}

void func_6(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x2FADF5E93AB8D64B();
	uVar1 = unk_0x51C7DC141C5D0E6B();
	uVar2 = unk_0xEFEADD7EBD01C0A6();
	uVar3 = unk_0x388418AD39C0F4DE();
	uVar4 = unk_0xE3911478C9FE04B2() + 1;
	uVar5 = unk_0x8FB5B60BC869990E();
	Global_17000[iParam0 /*9*/].f_2 = uVar0;
	Global_17000[iParam0 /*9*/].f_2.f_1 = uVar1;
	Global_17000[iParam0 /*9*/].f_2.f_2 = uVar2;
	Global_17000[iParam0 /*9*/].f_2.f_3 = uVar3;
	Global_17000[iParam0 /*9*/].f_2.f_4 = uVar4;
	Global_17000[iParam0 /*9*/].f_2.f_5 = uVar5;
}

void func_7()
{
}

int func_8()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_17000[iVar0 /*9*/].f_8 == 0)
		{
			Global_16830 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	Global_16830 = 3;
	Global_17000[Global_16830 /*9*/].f_2 = -1;
	Global_17000[Global_16830 /*9*/].f_2.f_1 = 0;
	Global_17000[Global_16830 /*9*/].f_2.f_2 = 0;
	Global_17000[Global_16830 /*9*/].f_2.f_3 = 0;
	Global_17000[Global_16830 /*9*/].f_2.f_5 = 99999;
	while (iVar0 < 2)
	{
		if (Global_17000[iVar0 /*9*/].f_8 == 0 || Global_17000[iVar0 /*9*/].f_8 == 1)
		{
			if (!func_9(Global_17000[iVar0 /*9*/].f_2, Global_17000[Global_16830 /*9*/].f_2))
			{
				Global_16830 = iVar0;
			}
		}
		iVar0++;
	}
	if (Global_16830 == 3)
	{
		return 0;
	}
	return 1;
}

int func_9(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
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

int func_10()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_11()
{
	unk_0x7C3AA2D27E16E2AD();
}

