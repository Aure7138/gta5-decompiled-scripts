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
	struct<17> Local_19 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_36 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
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
	if (unk_0x8D841F1DD3FA555F(50))
	{
		func_22();
	}
	while (true)
	{
		if (Global_98931.f_24859.f_145 > 0 || Global_97573)
		{
			if (!Global_97573)
			{
				if ((Global_35443 != 6 && Global_35443 != 15) && !Global_87149)
				{
					func_22();
				}
				if (!Global_97572)
				{
					if (Global_98931.f_24859.f_145 > 0)
					{
						if (func_19(&(Global_98931.f_24859[iLocal_36 /*16*/])))
						{
							if (func_17(func_18()))
							{
								if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iLocal_36 /*16*/].f_11, func_12()))
								{
									if (Global_98931.f_24859[iLocal_36 /*16*/].f_12 == Global_98931.f_24859.f_146[func_12()])
									{
										if (unk_0x48E480685981C7D4() > Global_97575)
										{
											if (unk_0x48E480685981C7D4() > Global_98931.f_24859[iLocal_36 /*16*/].f_8)
											{
												if (unk_0xD994929E13CC1ED5(&(Global_98931.f_24859[iLocal_36 /*16*/].f_4), ""))
												{
													unk_0xC5786EB19E5997C0(1);
													func_11(&(Global_98931.f_24859[iLocal_36 /*16*/]));
												}
												else
												{
													unk_0xC5786EB19E5997C0(1);
													func_10(&(Global_98931.f_24859[iLocal_36 /*16*/]), &(Global_98931.f_24859[iLocal_36 /*16*/].f_4));
												}
												if (Global_98931.f_24859[iLocal_36 /*16*/].f_13 != 0)
												{
													func_9(Global_98931.f_24859[iLocal_36 /*16*/].f_13, 0);
												}
												Local_19 = { Global_98931.f_24859[iLocal_36 /*16*/] };
												Local_19.f_4 = { Global_98931.f_24859[iLocal_36 /*16*/].f_4 };
												Local_19.f_8 = Global_98931.f_24859[iLocal_36 /*16*/].f_8;
												Local_19.f_10 = Global_98931.f_24859[iLocal_36 /*16*/].f_10;
												Local_19.f_9 = Global_98931.f_24859[iLocal_36 /*16*/].f_9;
												Local_19.f_11 = Global_98931.f_24859[iLocal_36 /*16*/].f_11;
												Local_19.f_12 = Global_98931.f_24859[iLocal_36 /*16*/].f_12;
												Local_19.f_13 = Global_98931.f_24859[iLocal_36 /*16*/].f_13;
												Local_19.f_14 = Global_98931.f_24859[iLocal_36 /*16*/].f_14;
												Local_19.f_15 = Global_98931.f_24859[iLocal_36 /*16*/].f_15;
												Local_19.f_16 = 0;
												Global_97576 = { Global_98931.f_24859[iLocal_36 /*16*/] };
												Global_97574 = unk_0x48E480685981C7D4();
												iVar0 = iLocal_36;
												while (iVar0 <= (Global_98931.f_24859.f_145 - 2))
												{
													func_8(iVar0, iVar0 + 1);
													iVar0++;
												}
												func_7((Global_98931.f_24859.f_145 - 1));
												Global_98931.f_24859.f_145 = (Global_98931.f_24859.f_145 - 1);
												func_6();
												Global_97573 = 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			else if (!func_4())
			{
				if (unk_0xD994929E13CC1ED5(&(Local_19.f_4), ""))
				{
					if (func_3(&Local_19))
					{
						unk_0xB8BB626315D394F5(0);
					}
				}
				else if (func_2(&Local_19, &(Local_19.f_4)))
				{
					unk_0xB8BB626315D394F5(0);
				}
				if ((unk_0x48E480685981C7D4() - Global_97574) > 4000 || Local_19.f_16)
				{
					if (Local_19.f_14 != 0)
					{
						func_9(Local_19.f_14, 0);
					}
					Global_97575 = unk_0x48E480685981C7D4() + 250;
				}
				else
				{
					if (Local_19.f_10 != -1)
					{
						iVar1 = 20000;
					}
					else
					{
						iVar1 = -1;
					}
					func_1(&Local_19, &(Local_19.f_4), Local_19.f_12, 1000, iVar1, Local_19.f_9, Local_19.f_11, Local_19.f_13, Local_19.f_14, Local_19.f_15);
				}
				StringCopy(&Local_19, "", 16);
				StringCopy(&(Local_19.f_4), "", 16);
				Local_19.f_8 = 0;
				Local_19.f_9 = 0;
				Local_19.f_10 = -1;
				Local_19.f_11 = 0;
				Local_19.f_12 = 0;
				Local_19.f_13 = 0;
				Local_19.f_14 = 0;
				Local_19.f_15 = 0;
				Local_19.f_16 = 0;
				Global_97574 = 0;
				Global_97573 = 0;
			}
			if (!unk_0xD994929E13CC1ED5(&(Global_98931.f_24859[iLocal_36 /*16*/]), &Local_19) && !unk_0xD994929E13CC1ED5(&(Global_98931.f_24859[iLocal_36 /*16*/]), ""))
			{
				if (Global_98931.f_24859[iLocal_36 /*16*/].f_10 != -1)
				{
					if (unk_0x48E480685981C7D4() > Global_98931.f_24859[iLocal_36 /*16*/].f_10)
					{
						iVar2 = iLocal_36;
						while (iVar2 <= (Global_98931.f_24859.f_145 - 2))
						{
							func_8(iVar2, iVar2 + 1);
							iVar2++;
						}
						func_7((Global_98931.f_24859.f_145 - 1));
						Global_98931.f_24859.f_145 = (Global_98931.f_24859.f_145 - 1);
						func_6();
					}
				}
			}
			iLocal_36++;
			if (iLocal_36 >= Global_98931.f_24859.f_145)
			{
				iLocal_36 = 0;
			}
		}
		else if ((Global_35443 != 6 && Global_35443 != 15) && !Global_87149)
		{
			func_22();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xD994929E13CC1ED5(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_98931.f_24859.f_145)
	{
		if (unk_0xD994929E13CC1ED5(&(Global_98931.f_24859[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_98931.f_24859.f_145 < 9)
	{
		StringCopy(&(Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_4), sParam1, 16);
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_8 = (unk_0x48E480685981C7D4() + iParam3);
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_9 = iParam5;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_11 = iParam6;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_12 = uParam2;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_13 = iParam7;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_14 = iParam8;
		Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_10 = ((unk_0x48E480685981C7D4() + iParam3) + iParam4);
		}
		else
		{
			Global_98931.f_24859[Global_98931.f_24859.f_145 /*16*/].f_10 = -1;
		}
		Global_98931.f_24859.f_145++;
		func_6();
	}
}

bool func_2(var uParam0, var uParam1)
{
	unk_0xF7F787102FC9BCAC(uParam0);
	unk_0x072D7B028D6C7A05(uParam1);
	return unk_0xEF468B98099969A5(0);
}

bool func_3(var uParam0)
{
	unk_0xF7F787102FC9BCAC(uParam0);
	return unk_0xEF468B98099969A5(0);
}

int func_4()
{
	if (unk_0x521385D8214D27C4())
	{
		return 0;
	}
	if (func_5())
	{
		return 0;
	}
	if (Local_19.f_9 != -1 && (unk_0x48E480685981C7D4() - Global_97574) > Local_19.f_9)
	{
		return 0;
	}
	if (Global_97572)
	{
		return 0;
	}
	if (unk_0x521385D8214D27C4())
	{
		return 0;
	}
	if (unk_0xD994929E13CC1ED5(&(Local_19.f_4), ""))
	{
		if (!func_3(&Local_19))
		{
			Local_19.f_16 = 1;
			return 0;
		}
	}
	else if (!func_2(&Local_19, &(Local_19.f_4)))
	{
		Local_19.f_16 = 1;
		return 0;
	}
	return 1;
}

int func_5()
{
	if (unk_0x968BF1C2C695B61A(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_6()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_98931.f_24859.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_98931.f_24859.f_145)
	{
		if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iVar0 /*16*/].f_11, 0))
		{
			if (Global_98931.f_24859[iVar0 /*16*/].f_12 > Global_98931.f_24859.f_146[0])
			{
				Global_98931.f_24859.f_146[0] = Global_98931.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iVar0 /*16*/].f_11, 1))
		{
			if (Global_98931.f_24859[iVar0 /*16*/].f_12 > Global_98931.f_24859.f_146[1])
			{
				Global_98931.f_24859.f_146[1] = Global_98931.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0x236D8AD7EE179F46(Global_98931.f_24859[iVar0 /*16*/].f_11, 2))
		{
			if (Global_98931.f_24859[iVar0 /*16*/].f_12 > Global_98931.f_24859.f_146[2])
			{
				Global_98931.f_24859.f_146[2] = Global_98931.f_24859[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_7(int iParam0)
{
	StringCopy(&(Global_98931.f_24859[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_98931.f_24859[iParam0 /*16*/].f_4), "", 16);
	Global_98931.f_24859[iParam0 /*16*/].f_8 = 0;
	Global_98931.f_24859[iParam0 /*16*/].f_9 = 0;
	Global_98931.f_24859[iParam0 /*16*/].f_11 = 0;
	Global_98931.f_24859[iParam0 /*16*/].f_10 = -1;
	Global_98931.f_24859[iParam0 /*16*/].f_12 = 0;
	Global_98931.f_24859[iParam0 /*16*/].f_13 = 0;
	Global_98931.f_24859[iParam0 /*16*/].f_14 = 0;
	Global_98931.f_24859[iParam0 /*16*/].f_15 = 0;
}

void func_8(int iParam0, int iParam1)
{
	Global_98931.f_24859[iParam0 /*16*/] = { Global_98931.f_24859[iParam1 /*16*/] };
	Global_98931.f_24859[iParam0 /*16*/].f_4 = { Global_98931.f_24859[iParam1 /*16*/].f_4 };
	Global_98931.f_24859[iParam0 /*16*/].f_8 = Global_98931.f_24859[iParam1 /*16*/].f_8;
	Global_98931.f_24859[iParam0 /*16*/].f_10 = Global_98931.f_24859[iParam1 /*16*/].f_10;
	Global_98931.f_24859[iParam0 /*16*/].f_9 = Global_98931.f_24859[iParam1 /*16*/].f_9;
	Global_98931.f_24859[iParam0 /*16*/].f_11 = Global_98931.f_24859[iParam1 /*16*/].f_11;
	Global_98931.f_24859[iParam0 /*16*/].f_12 = Global_98931.f_24859[iParam1 /*16*/].f_12;
	Global_98931.f_24859[iParam0 /*16*/].f_13 = Global_98931.f_24859[iParam1 /*16*/].f_13;
	Global_98931.f_24859[iParam0 /*16*/].f_14 = Global_98931.f_24859[iParam1 /*16*/].f_14;
	Global_98931.f_24859[iParam0 /*16*/].f_15 = Global_98931.f_24859[iParam1 /*16*/].f_15;
}

void func_9(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_98931.f_7227[iParam0] = 1;
	Global_98931.f_7227.f_236[iParam0] = (unk_0x48E480685981C7D4() + iParam1);
}

void func_10(var uParam0, var uParam1)
{
	unk_0x522099B37CAE9E12(uParam0);
	unk_0x072D7B028D6C7A05(uParam1);
	unk_0xC592EBAF1D879BDC(0, 1, 1, -1);
}

void func_11(var uParam0)
{
	unk_0x522099B37CAE9E12(uParam0);
	unk_0xC592EBAF1D879BDC(0, 1, 1, -1);
}

int func_12()
{
	func_13();
	return Global_98931.f_1750.f_539.f_3549;
}

void func_13()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_16(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_15(unk_0x81873881071CD9FE());
			if (func_17(iVar0) && (!func_14(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_17(Global_98931.f_1750.f_539.f_3549))
				{
					Global_98931.f_1750.f_539.f_3550 = Global_98931.f_1750.f_539.f_3549;
				}
				Global_98931.f_1750.f_539.f_3551 = iVar0;
				Global_98931.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_98931.f_1750.f_539.f_3549 != 145)
			{
				Global_98931.f_1750.f_539.f_3551 = Global_98931.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_98931.f_1750.f_539.f_3549 = 145;
}

bool func_14(int iParam0)
{
	return Global_35443 == iParam0;
}

int func_15(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(uParam0);
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
	if (func_17(iParam0))
	{
		return Global_98931.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_17(int iParam0)
{
	return iParam0 < 3;
}

int func_18()
{
	func_13();
	return Global_98931.f_1750.f_539.f_3549;
}

int func_19(var uParam0)
{
	if (unk_0xA83A609D74168B30())
	{
		return 0;
	}
	if (unk_0x521385D8214D27C4())
	{
		return 0;
	}
	if (!unk_0xECDEA377354CBDA4())
	{
		return 0;
	}
	if (unk_0x30D46D6512711A3E())
	{
		return 0;
	}
	if (func_21())
	{
		return 0;
	}
	if (func_5())
	{
		return 0;
	}
	if (uParam0->f_12 < 3)
	{
		if (func_20())
		{
			return 0;
		}
		if (Global_69018)
		{
			return 0;
		}
		if (Global_88062)
		{
			return 0;
		}
		if (!unk_0x236D8AD7EE179F46(uParam0->f_15, 1))
		{
			if (Global_88070)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_20()
{
	if (Global_69280)
	{
		return 1;
	}
	else if (Global_55396 && !Global_55402)
	{
		return 1;
	}
	return 0;
}

int func_21()
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		return Global_88620.f_44 == 1;
	}
	return 0;
}

void func_22()
{
	if (Global_97573)
	{
		if (unk_0xD994929E13CC1ED5(&(Local_19.f_4), ""))
		{
			if (func_3(&Local_19))
			{
				unk_0xB8BB626315D394F5(1);
			}
		}
		else if (func_2(&Local_19, &(Local_19.f_4)))
		{
			unk_0xB8BB626315D394F5(1);
		}
	}
	Global_97574 = 0;
	Global_97573 = 0;
	unk_0xC23A229F78DAD92A();
}

