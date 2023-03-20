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
	var uLocal_17[3] = { 0, 0, 0 };
	int iLocal_21 = 0;
	var uLocal_22[3] = { 0, 0, 0 };
	int iLocal_26 = 0;
	int iLocal_27 = 0;
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
	if (unk_0xC968670BFACE42D9(2))
	{
		func_11();
	}
	while (true)
	{
		unk_0x4EDE34FBADD967A6(250);
		switch (iLocal_26)
		{
			case 0:
				if (uLocal_17[0])
				{
					StringCopy(&(Global_16811[1 /*42*/]), "CL_C1A", 16);
					StringCopy(&(Global_16811[1 /*42*/].f_4), "CL_C1A_BR", 16);
					Global_16811[1 /*42*/].f_8 = 0;
					Global_16811[1 /*42*/].f_9 = 2;
					StringCopy(&(Global_16811[1 /*42*/].f_10[1 /*4*/]), "CL_C1A_J1", 16);
					Global_16811[1 /*42*/].f_37[1] = 0;
					Global_16811[1 /*42*/].f_32[1] = 3;
					Global_16811[1 /*42*/].f_27[1] = 0;
					StringCopy(&(Global_16811[1 /*42*/].f_10[2 /*4*/]), "CL_C1A_J2", 16);
					Global_16811[1 /*42*/].f_37[2] = 0;
					Global_16811[1 /*42*/].f_32[2] = 3;
					Global_16811[1 /*42*/].f_27[2] = 0;
					iLocal_21 = 0;
					while (iLocal_21 < Global_16811[1 /*42*/].f_32[1])
					{
						Global_24498[iLocal_21] = 0;
						Global_24494[iLocal_21] = 0;
						iLocal_21++;
					}
					func_4(1, 1, 1, 1);
					func_3("CL_ADDED", "CL_C1A", 3000, 1);
					iLocal_26 = 1;
				}
				break;
			
			case 1:
				iLocal_21 = 0;
				while (iLocal_21 < Global_16811[1 /*42*/].f_32[1])
				{
					if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
					{
						if (unk_0x7239B21A38F536BA(uLocal_22[iLocal_21]))
						{
							if (unk_0x84A2DD9AC37C35C1(uLocal_22[iLocal_21]))
							{
								if (unk_0xC86D67D52A707CF8(uLocal_22[iLocal_21], unk_0xD80958FC74E988A6(), true))
								{
									if (!Global_24494[iLocal_21])
									{
										Global_16811[1 /*42*/].f_27[1]++;
										func_2("CL_C1A_J1", Global_16811[1 /*42*/].f_27[1], Global_16811[1 /*42*/].f_32[1], 2000, 1);
										Global_24494[iLocal_21] = 1;
									}
									if (unk_0x5F9532F3B5CC2551(uLocal_22[iLocal_21]))
									{
										if (!Global_24498[iLocal_21])
										{
											if (unk_0x439E9BC95B7E7FBE(uLocal_22[iLocal_21]) && func_1())
											{
												Global_16811[1 /*42*/].f_27[2]++;
												func_2("CL_C1A_J2", Global_16811[1 /*42*/].f_27[2], Global_16811[1 /*42*/].f_32[2], 2000, 1);
												Global_24498[iLocal_21] = 1;
											}
										}
									}
									if (Global_16811[1 /*42*/].f_27[1] >= Global_16811[1 /*42*/].f_32[1] && Global_16811[1 /*42*/].f_27[2] >= Global_16811[1 /*42*/].f_32[2])
									{
										func_3("CL_COMPLETE", "CL_C1A", 3000, 1);
										Global_16811[1 /*42*/].f_8 = 1;
										iLocal_26 = 2;
									}
								}
							}
						}
					}
					iLocal_21++;
				}
				break;
			
			case 2:
				break;
		}
		unk_0x4EDE34FBADD967A6(250);
		switch (iLocal_27)
		{
			case 0:
				if (uLocal_17[1])
				{
					StringCopy(&(Global_16811[2 /*42*/]), "CL_C1B", 16);
					StringCopy(&(Global_16811[2 /*42*/].f_4), "CL_C1B_BR", 16);
					Global_16811[2 /*42*/].f_8 = 0;
					Global_16811[2 /*42*/].f_9 = 3;
					StringCopy(&(Global_16811[2 /*42*/].f_10[1 /*4*/]), "CL_C1B_J1", 16);
					Global_16811[2 /*42*/].f_37[1] = 0;
					Global_16811[2 /*42*/].f_32[1] = -1;
					Global_16811[2 /*42*/].f_27[1] = -1;
					StringCopy(&(Global_16811[2 /*42*/].f_10[2 /*4*/]), "CL_C1B_J2", 16);
					Global_16811[2 /*42*/].f_37[2] = 0;
					Global_16811[2 /*42*/].f_32[2] = -1;
					Global_16811[2 /*42*/].f_27[2] = -1;
					StringCopy(&(Global_16811[2 /*42*/].f_10[3 /*4*/]), "CL_C1B_J3", 16);
					Global_16811[2 /*42*/].f_37[3] = 0;
					Global_16811[2 /*42*/].f_32[3] = -1;
					Global_16811[2 /*42*/].f_27[3] = -1;
					func_4(136, 2, 1, 1);
					func_3("CL_ADDED", "CL_C1B", 3000, 1);
					iLocal_27 = 1;
				}
				break;
			
			case 1:
				if (!Global_16811[2 /*42*/].f_37[1])
				{
				}
				if (!Global_16811[2 /*42*/].f_37[2])
				{
				}
				if (!Global_16811[2 /*42*/].f_37[3])
				{
				}
				if ((Global_16811[2 /*42*/].f_37[1] == 1 && Global_16811[2 /*42*/].f_37[2] == 1) && Global_16811[2 /*42*/].f_37[3] == 1)
				{
					func_3("CL_COMPLETE", "CL_C1B", 3000, 1);
					Global_16811[2 /*42*/].f_8 = 1;
					iLocal_27 = 2;
				}
				break;
			
			case 2:
				break;
		}
	}
}

int func_1()
{
	if (Global_16728)
	{
		return 1;
	}
	return 0;
}

void func_2(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iParam4 = iParam4;
	unk_0xB87A37EEB7FAA67D(sParam0);
	unk_0x03B504CF259931BC(iParam1);
	unk_0x03B504CF259931BC(iParam2);
	unk_0x9D77056A530643F6(iParam3, false);
}

void func_3(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xB87A37EEB7FAA67D(sParam0);
	unk_0xC63CD5D2920ACBE7(sParam1);
	unk_0x9D77056A530643F6(iParam2, false);
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
	if (unk_0x2C83A9DA6BFFC4F9(joaat("appsidetask")) > 0)
	{
		return 0;
	}
	if (func_8() == 0)
	{
		func_7();
		return 0;
	}
	func_6(Global_16810);
	Global_16980[Global_16810 /*9*/].f_1 = uParam1;
	Global_16980[Global_16810 /*9*/] = uParam0;
	if (iParam3 == 0)
	{
	}
	else
	{
		Global_16980[Global_16810 /*9*/].f_8 = iParam3;
	}
	if (bParam2)
	{
	}
	return 1;
}

void func_6(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = unk_0x494E97C2EF27C470();
	iVar1 = unk_0x13D2B8ADD79640F2();
	iVar2 = unk_0x25223CA6B4D20B7F();
	iVar3 = unk_0x3D10BC92A4DB1D35();
	uVar4 = unk_0xBBC72712E80257A1() + 1;
	iVar5 = unk_0x961777E64BDAF717();
	Global_16980[iParam0 /*9*/].f_2 = iVar0;
	Global_16980[iParam0 /*9*/].f_2.f_1 = iVar1;
	Global_16980[iParam0 /*9*/].f_2.f_2 = iVar2;
	Global_16980[iParam0 /*9*/].f_2.f_3 = iVar3;
	Global_16980[iParam0 /*9*/].f_2.f_4 = uVar4;
	Global_16980[iParam0 /*9*/].f_2.f_5 = iVar5;
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
		if (Global_16980[iVar0 /*9*/].f_8 == 0)
		{
			Global_16810 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	Global_16810 = 3;
	Global_16980[Global_16810 /*9*/].f_2 = -1;
	Global_16980[Global_16810 /*9*/].f_2.f_1 = 0;
	Global_16980[Global_16810 /*9*/].f_2.f_2 = 0;
	Global_16980[Global_16810 /*9*/].f_2.f_3 = 0;
	Global_16980[Global_16810 /*9*/].f_2.f_5 = 99999;
	while (iVar0 < 2)
	{
		if (Global_16980[iVar0 /*9*/].f_8 == 0 || Global_16980[iVar0 /*9*/].f_8 == 1)
		{
			if (!func_9(Global_16980[iVar0 /*9*/].f_2, Global_16980[Global_16810 /*9*/].f_2))
			{
				Global_16810 = iVar0;
			}
		}
		iVar0++;
	}
	if (Global_16810 == 3)
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
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_11()
{
	unk_0x1090044AD1DA76FA();
}

