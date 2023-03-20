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
	if (unk_0x2EC83C7ACA23E8A4(2))
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
					StringCopy(&(Global_16864[1 /*42*/]), "CL_C1A", 16);
					StringCopy(&(Global_16864[1 /*42*/].f_4), "CL_C1A_BR", 16);
					Global_16864[1 /*42*/].f_8 = 0;
					Global_16864[1 /*42*/].f_9 = 2;
					StringCopy(&(Global_16864[1 /*42*/].f_10[1 /*4*/]), "CL_C1A_J1", 16);
					Global_16864[1 /*42*/].f_37[1] = 0;
					Global_16864[1 /*42*/].f_32[1] = 3;
					Global_16864[1 /*42*/].f_27[1] = 0;
					StringCopy(&(Global_16864[1 /*42*/].f_10[2 /*4*/]), "CL_C1A_J2", 16);
					Global_16864[1 /*42*/].f_37[2] = 0;
					Global_16864[1 /*42*/].f_32[2] = 3;
					Global_16864[1 /*42*/].f_27[2] = 0;
					iLocal_22 = 0;
					while (iLocal_22 < Global_16864[1 /*42*/].f_32[1])
					{
						Global_25239[iLocal_22] = 0;
						Global_25235[iLocal_22] = 0;
						iLocal_22++;
					}
					func_4(1, 1, 1, 1);
					func_3("CL_ADDED", "CL_C1A", 3000, 1);
					iLocal_27 = 1;
				}
				break;
			
			case 1:
				iLocal_22 = 0;
				while (iLocal_22 < Global_16864[1 /*42*/].f_32[1])
				{
					if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
					{
						if (unk_0xD3FACCDA4D66AEAD(uLocal_23[iLocal_22]))
						{
							if (unk_0xEB361B4BD195A4D3(uLocal_23[iLocal_22]))
							{
								if (unk_0x4AEC0F4FC7FE62C7(uLocal_23[iLocal_22], unk_0xA0081090911D13E5(), 1))
								{
									if (!Global_25235[iLocal_22])
									{
										Global_16864[1 /*42*/].f_27[1]++;
										func_2("CL_C1A_J1", Global_16864[1 /*42*/].f_27[1], Global_16864[1 /*42*/].f_32[1], 2000, 1);
										Global_25235[iLocal_22] = 1;
									}
									if (unk_0x912AD5A10E7633F0(uLocal_23[iLocal_22], 0))
									{
										if (!Global_25239[iLocal_22])
										{
											if (unk_0x515065C4969FEF76(uLocal_23[iLocal_22]) && func_1())
											{
												Global_16864[1 /*42*/].f_27[2]++;
												func_2("CL_C1A_J2", Global_16864[1 /*42*/].f_27[2], Global_16864[1 /*42*/].f_32[2], 2000, 1);
												Global_25239[iLocal_22] = 1;
											}
										}
									}
									if (Global_16864[1 /*42*/].f_27[1] >= Global_16864[1 /*42*/].f_32[1] && Global_16864[1 /*42*/].f_27[2] >= Global_16864[1 /*42*/].f_32[2])
									{
										func_3("CL_COMPLETE", "CL_C1A", 3000, 1);
										Global_16864[1 /*42*/].f_8 = 1;
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
					StringCopy(&(Global_16864[2 /*42*/]), "CL_C1B", 16);
					StringCopy(&(Global_16864[2 /*42*/].f_4), "CL_C1B_BR", 16);
					Global_16864[2 /*42*/].f_8 = 0;
					Global_16864[2 /*42*/].f_9 = 3;
					StringCopy(&(Global_16864[2 /*42*/].f_10[1 /*4*/]), "CL_C1B_J1", 16);
					Global_16864[2 /*42*/].f_37[1] = 0;
					Global_16864[2 /*42*/].f_32[1] = -1;
					Global_16864[2 /*42*/].f_27[1] = -1;
					StringCopy(&(Global_16864[2 /*42*/].f_10[2 /*4*/]), "CL_C1B_J2", 16);
					Global_16864[2 /*42*/].f_37[2] = 0;
					Global_16864[2 /*42*/].f_32[2] = -1;
					Global_16864[2 /*42*/].f_27[2] = -1;
					StringCopy(&(Global_16864[2 /*42*/].f_10[3 /*4*/]), "CL_C1B_J3", 16);
					Global_16864[2 /*42*/].f_37[3] = 0;
					Global_16864[2 /*42*/].f_32[3] = -1;
					Global_16864[2 /*42*/].f_27[3] = -1;
					func_4(136, 2, 1, 1);
					func_3("CL_ADDED", "CL_C1B", 3000, 1);
					iLocal_28 = 1;
				}
				break;
			
			case 1:
				if (!Global_16864[2 /*42*/].f_37[1])
				{
				}
				if (!Global_16864[2 /*42*/].f_37[2])
				{
				}
				if (!Global_16864[2 /*42*/].f_37[3])
				{
				}
				if ((Global_16864[2 /*42*/].f_37[1] == 1 && Global_16864[2 /*42*/].f_37[2] == 1) && Global_16864[2 /*42*/].f_37[3] == 1)
				{
					func_3("CL_COMPLETE", "CL_C1B", 3000, 1);
					Global_16864[2 /*42*/].f_8 = 1;
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
	if (Global_16781)
	{
		return 1;
	}
	return 0;
}

void func_2(char* sParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	iParam4 = iParam4;
	unk_0x43ADD6E60AA2507B(sParam0);
	unk_0x3F9D1B882EC0B8AF(uParam1);
	unk_0x3F9D1B882EC0B8AF(uParam2);
	unk_0xAA85370CFA6D5384(iParam3, 0);
}

void func_3(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x43ADD6E60AA2507B(sParam0);
	unk_0xBDE6EEC5F6BDC060(sParam1);
	unk_0xAA85370CFA6D5384(iParam2, 0);
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
	if (unk_0xA96867DD0A63C62C(joaat("appsidetask")) > 0)
	{
		return 0;
	}
	if (func_8() == 0)
	{
		func_7();
		return 0;
	}
	func_6(Global_16863);
	Global_17033[Global_16863 /*9*/].f_1 = uParam1;
	Global_17033[Global_16863 /*9*/] = uParam0;
	if (iParam3 == 0)
	{
	}
	else
	{
		Global_17033[Global_16863 /*9*/].f_8 = iParam3;
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
	
	uVar0 = unk_0x8A1006B6887A61DE();
	uVar1 = unk_0x4A29A51562AC24A5();
	uVar2 = unk_0x7C42343912622BB6();
	uVar3 = unk_0x5EE1E0D1EBF5F7F6();
	uVar4 = unk_0x55ED786EB10EA740() + 1;
	uVar5 = unk_0x3258DF33389FB224();
	Global_17033[iParam0 /*9*/].f_2 = uVar0;
	Global_17033[iParam0 /*9*/].f_2.f_1 = uVar1;
	Global_17033[iParam0 /*9*/].f_2.f_2 = uVar2;
	Global_17033[iParam0 /*9*/].f_2.f_3 = uVar3;
	Global_17033[iParam0 /*9*/].f_2.f_4 = uVar4;
	Global_17033[iParam0 /*9*/].f_2.f_5 = uVar5;
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
		if (Global_17033[iVar0 /*9*/].f_8 == 0)
		{
			Global_16863 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	Global_16863 = 3;
	Global_17033[Global_16863 /*9*/].f_2 = -1;
	Global_17033[Global_16863 /*9*/].f_2.f_1 = 0;
	Global_17033[Global_16863 /*9*/].f_2.f_2 = 0;
	Global_17033[Global_16863 /*9*/].f_2.f_3 = 0;
	Global_17033[Global_16863 /*9*/].f_2.f_5 = 99999;
	while (iVar0 < 2)
	{
		if (Global_17033[iVar0 /*9*/].f_8 == 0 || Global_17033[iVar0 /*9*/].f_8 == 1)
		{
			if (!func_9(Global_17033[iVar0 /*9*/].f_2, Global_17033[Global_16863 /*9*/].f_2))
			{
				Global_16863 = iVar0;
			}
		}
		iVar0++;
	}
	if (Global_16863 == 3)
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
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_11()
{
	unk_0x78C587487CD40B92();
}

