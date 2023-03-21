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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	struct<17> Local_20 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_37 = 0;
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
	iLocal_17 = -1;
	if (unk_0x76BF814AB8D4CAB8(50))
	{
		func_22();
	}
	while (true)
	{
		if (Global_104551.f_20380.f_145 > 0 || Global_103191)
		{
			if (!Global_103191)
			{
				if ((Global_35859 != 6 && Global_35859 != 15) && !Global_88981)
				{
					func_22();
				}
				if (!Global_103190)
				{
					if (Global_104551.f_20380.f_145 > 0)
					{
						if (func_19(&(Global_104551.f_20380[iLocal_37 /*16*/])))
						{
							if (func_17(func_18()))
							{
								if (unk_0xB03A1684359C50A1(Global_104551.f_20380[iLocal_37 /*16*/].f_11, func_12()))
								{
									if (Global_104551.f_20380[iLocal_37 /*16*/].f_12 == Global_104551.f_20380.f_146[func_12()])
									{
										if (unk_0x5AFB8ED811F05E4D() > Global_103193)
										{
											if (unk_0x5AFB8ED811F05E4D() > Global_104551.f_20380[iLocal_37 /*16*/].f_8)
											{
												if (unk_0x9D39145AD645E383(&(Global_104551.f_20380[iLocal_37 /*16*/].f_4), ""))
												{
													unk_0x20FCC5A532CA7670(1);
													func_11(&(Global_104551.f_20380[iLocal_37 /*16*/]));
												}
												else
												{
													unk_0x20FCC5A532CA7670(1);
													func_10(&(Global_104551.f_20380[iLocal_37 /*16*/]), &(Global_104551.f_20380[iLocal_37 /*16*/].f_4));
												}
												if (Global_104551.f_20380[iLocal_37 /*16*/].f_13 != 0)
												{
													func_9(Global_104551.f_20380[iLocal_37 /*16*/].f_13, 0);
												}
												Local_20 = { Global_104551.f_20380[iLocal_37 /*16*/] };
												Local_20.f_4 = { Global_104551.f_20380[iLocal_37 /*16*/].f_4 };
												Local_20.f_8 = Global_104551.f_20380[iLocal_37 /*16*/].f_8;
												Local_20.f_10 = Global_104551.f_20380[iLocal_37 /*16*/].f_10;
												Local_20.f_9 = Global_104551.f_20380[iLocal_37 /*16*/].f_9;
												Local_20.f_11 = Global_104551.f_20380[iLocal_37 /*16*/].f_11;
												Local_20.f_12 = Global_104551.f_20380[iLocal_37 /*16*/].f_12;
												Local_20.f_13 = Global_104551.f_20380[iLocal_37 /*16*/].f_13;
												Local_20.f_14 = Global_104551.f_20380[iLocal_37 /*16*/].f_14;
												Local_20.f_15 = Global_104551.f_20380[iLocal_37 /*16*/].f_15;
												Local_20.f_16 = 0;
												Global_103194 = { Global_104551.f_20380[iLocal_37 /*16*/] };
												Global_103192 = unk_0x5AFB8ED811F05E4D();
												iVar0 = iLocal_37;
												while (iVar0 <= (Global_104551.f_20380.f_145 - 2))
												{
													func_8(iVar0, iVar0 + 1);
													iVar0++;
												}
												func_7((Global_104551.f_20380.f_145 - 1));
												Global_104551.f_20380.f_145 = (Global_104551.f_20380.f_145 - 1);
												func_6();
												Global_103191 = 1;
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
				if (unk_0x9D39145AD645E383(&(Local_20.f_4), ""))
				{
					if (func_3(&Local_20))
					{
						unk_0xEFF1F12403847394(0);
					}
				}
				else if (func_2(&Local_20, &(Local_20.f_4)))
				{
					unk_0xEFF1F12403847394(0);
				}
				if ((unk_0x5AFB8ED811F05E4D() - Global_103192) > 4000 || Local_20.f_16)
				{
					if (Local_20.f_14 != 0)
					{
						func_9(Local_20.f_14, 0);
					}
					Global_103193 = unk_0x5AFB8ED811F05E4D() + 250;
				}
				else
				{
					if (Local_20.f_10 != -1)
					{
						iVar1 = 20000;
					}
					else
					{
						iVar1 = -1;
					}
					func_1(&Local_20, &(Local_20.f_4), Local_20.f_12, 1000, iVar1, Local_20.f_9, Local_20.f_11, Local_20.f_13, Local_20.f_14, Local_20.f_15);
				}
				StringCopy(&Local_20, "", 16);
				StringCopy(&(Local_20.f_4), "", 16);
				Local_20.f_8 = 0;
				Local_20.f_9 = 0;
				Local_20.f_10 = -1;
				Local_20.f_11 = 0;
				Local_20.f_12 = 0;
				Local_20.f_13 = 0;
				Local_20.f_14 = 0;
				Local_20.f_15 = 0;
				Local_20.f_16 = 0;
				Global_103192 = 0;
				Global_103191 = 0;
			}
			if (!unk_0x9D39145AD645E383(&(Global_104551.f_20380[iLocal_37 /*16*/]), &Local_20) && !unk_0x9D39145AD645E383(&(Global_104551.f_20380[iLocal_37 /*16*/]), ""))
			{
				if (Global_104551.f_20380[iLocal_37 /*16*/].f_10 != -1)
				{
					if (unk_0x5AFB8ED811F05E4D() > Global_104551.f_20380[iLocal_37 /*16*/].f_10)
					{
						iVar2 = iLocal_37;
						while (iVar2 <= (Global_104551.f_20380.f_145 - 2))
						{
							func_8(iVar2, iVar2 + 1);
							iVar2++;
						}
						func_7((Global_104551.f_20380.f_145 - 1));
						Global_104551.f_20380.f_145 = (Global_104551.f_20380.f_145 - 1);
						func_6();
					}
				}
			}
			iLocal_37++;
			if (iLocal_37 >= Global_104551.f_20380.f_145)
			{
				iLocal_37 = 0;
			}
		}
		else if ((Global_35859 != 6 && Global_35859 != 15) && !Global_88981)
		{
			func_22();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x9D39145AD645E383(sParam0, ""))
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
	while (iVar0 < Global_104551.f_20380.f_145)
	{
		if (unk_0x9D39145AD645E383(&(Global_104551.f_20380[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_104551.f_20380.f_145 < 9)
	{
		StringCopy(&(Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_4), sParam1, 16);
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_8 = (unk_0x5AFB8ED811F05E4D() + iParam3);
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_9 = iParam5;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_11 = iParam6;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_12 = uParam2;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_13 = iParam7;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_14 = iParam8;
		Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_10 = ((unk_0x5AFB8ED811F05E4D() + iParam3) + iParam4);
		}
		else
		{
			Global_104551.f_20380[Global_104551.f_20380.f_145 /*16*/].f_10 = -1;
		}
		Global_104551.f_20380.f_145++;
		func_6();
	}
}

bool func_2(var uParam0, var uParam1)
{
	unk_0x24BB6189982CE7D6(uParam0);
	unk_0xBEFD1ED9B6BE5127(uParam1);
	return unk_0xF2850FB50EE28440(0);
}

bool func_3(var uParam0)
{
	unk_0x24BB6189982CE7D6(uParam0);
	return unk_0xF2850FB50EE28440(0);
}

int func_4()
{
	if (unk_0xEAE1A41FBC3984B1())
	{
		return 0;
	}
	if (func_5())
	{
		return 0;
	}
	if (Local_20.f_9 != -1 && (unk_0x5AFB8ED811F05E4D() - Global_103192) > Local_20.f_9)
	{
		return 0;
	}
	if (Global_103190)
	{
		return 0;
	}
	if (unk_0xEAE1A41FBC3984B1())
	{
		return 0;
	}
	if (unk_0x9D39145AD645E383(&(Local_20.f_4), ""))
	{
		if (!func_3(&Local_20))
		{
			Local_20.f_16 = 1;
			return 0;
		}
	}
	else if (!func_2(&Local_20, &(Local_20.f_4)))
	{
		Local_20.f_16 = 1;
		return 0;
	}
	return 1;
}

int func_5()
{
	if (unk_0xE7FAF8E78F7D3A73(joaat("player_timetable_scene")) > 0)
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
		Global_104551.f_20380.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_104551.f_20380.f_145)
	{
		if (unk_0xB03A1684359C50A1(Global_104551.f_20380[iVar0 /*16*/].f_11, 0))
		{
			if (Global_104551.f_20380[iVar0 /*16*/].f_12 > Global_104551.f_20380.f_146[0])
			{
				Global_104551.f_20380.f_146[0] = Global_104551.f_20380[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB03A1684359C50A1(Global_104551.f_20380[iVar0 /*16*/].f_11, 1))
		{
			if (Global_104551.f_20380[iVar0 /*16*/].f_12 > Global_104551.f_20380.f_146[1])
			{
				Global_104551.f_20380.f_146[1] = Global_104551.f_20380[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB03A1684359C50A1(Global_104551.f_20380[iVar0 /*16*/].f_11, 2))
		{
			if (Global_104551.f_20380[iVar0 /*16*/].f_12 > Global_104551.f_20380.f_146[2])
			{
				Global_104551.f_20380.f_146[2] = Global_104551.f_20380[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_7(int iParam0)
{
	StringCopy(&(Global_104551.f_20380[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_104551.f_20380[iParam0 /*16*/].f_4), "", 16);
	Global_104551.f_20380[iParam0 /*16*/].f_8 = 0;
	Global_104551.f_20380[iParam0 /*16*/].f_9 = 0;
	Global_104551.f_20380[iParam0 /*16*/].f_11 = 0;
	Global_104551.f_20380[iParam0 /*16*/].f_10 = -1;
	Global_104551.f_20380[iParam0 /*16*/].f_12 = 0;
	Global_104551.f_20380[iParam0 /*16*/].f_13 = 0;
	Global_104551.f_20380[iParam0 /*16*/].f_14 = 0;
	Global_104551.f_20380[iParam0 /*16*/].f_15 = 0;
}

void func_8(int iParam0, int iParam1)
{
	Global_104551.f_20380[iParam0 /*16*/] = { Global_104551.f_20380[iParam1 /*16*/] };
	Global_104551.f_20380[iParam0 /*16*/].f_4 = { Global_104551.f_20380[iParam1 /*16*/].f_4 };
	Global_104551.f_20380[iParam0 /*16*/].f_8 = Global_104551.f_20380[iParam1 /*16*/].f_8;
	Global_104551.f_20380[iParam0 /*16*/].f_10 = Global_104551.f_20380[iParam1 /*16*/].f_10;
	Global_104551.f_20380[iParam0 /*16*/].f_9 = Global_104551.f_20380[iParam1 /*16*/].f_9;
	Global_104551.f_20380[iParam0 /*16*/].f_11 = Global_104551.f_20380[iParam1 /*16*/].f_11;
	Global_104551.f_20380[iParam0 /*16*/].f_12 = Global_104551.f_20380[iParam1 /*16*/].f_12;
	Global_104551.f_20380[iParam0 /*16*/].f_13 = Global_104551.f_20380[iParam1 /*16*/].f_13;
	Global_104551.f_20380[iParam0 /*16*/].f_14 = Global_104551.f_20380[iParam1 /*16*/].f_14;
	Global_104551.f_20380[iParam0 /*16*/].f_15 = Global_104551.f_20380[iParam1 /*16*/].f_15;
}

void func_9(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_104551.f_8583[iParam0] = 1;
	Global_104551.f_8583.f_236[iParam0] = (unk_0x5AFB8ED811F05E4D() + iParam1);
}

void func_10(var uParam0, var uParam1)
{
	unk_0x2202872EA73499C3(uParam0);
	unk_0xBEFD1ED9B6BE5127(uParam1);
	unk_0xF764171B43EBA5E4(0, 1, 1, -1);
}

void func_11(var uParam0)
{
	unk_0x2202872EA73499C3(uParam0);
	unk_0xF764171B43EBA5E4(0, 1, 1, -1);
}

int func_12()
{
	func_13();
	return Global_104551.f_2353.f_539.f_4301;
}

void func_13()
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_16(Global_104551.f_2353.f_539.f_4301) != unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()))
		{
			iVar0 = func_15(unk_0x18F7BE9ACB7D08F4());
			if (func_17(iVar0) && (!func_14(14) || Global_103502))
			{
				if (Global_104551.f_2353.f_539.f_4301 != iVar0 && func_17(Global_104551.f_2353.f_539.f_4301))
				{
					Global_104551.f_2353.f_539.f_4302 = Global_104551.f_2353.f_539.f_4301;
				}
				Global_104551.f_2353.f_539.f_4303 = iVar0;
				Global_104551.f_2353.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_104551.f_2353.f_539.f_4301 != 145)
			{
				Global_104551.f_2353.f_539.f_4303 = Global_104551.f_2353.f_539.f_4301;
			}
			return;
		}
	}
	Global_104551.f_2353.f_539.f_4301 = 145;
}

bool func_14(int iParam0)
{
	return Global_35859 == iParam0;
}

int func_15(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x31F12808DC47A9E5(uParam0))
	{
		iVar1 = unk_0x4F69FBD64CDF125B(uParam0);
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
		return Global_104551.f_28020[iParam0 /*29*/];
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
	return Global_104551.f_2353.f_539.f_4301;
}

int func_19(var uParam0)
{
	if (unk_0x622E10ED992CEB95())
	{
		return 0;
	}
	if (unk_0xEAE1A41FBC3984B1())
	{
		return 0;
	}
	if (!unk_0xC8AB6A5E6C1E6613())
	{
		return 0;
	}
	if (unk_0xF45F7A07410EF1F5())
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
		if (Global_70850)
		{
			return 0;
		}
		if (Global_89894)
		{
			return 0;
		}
		if (!unk_0xB03A1684359C50A1(uParam0->f_15, 1))
		{
			if (Global_89902)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_20()
{
	if (Global_71112)
	{
		return 1;
	}
	else if (Global_55895 && !Global_55901)
	{
		return 1;
	}
	return 0;
}

int func_21()
{
	if (!unk_0x44243F2E2F58B8E3())
	{
		return Global_90452.f_44 == 1;
	}
	return 0;
}

void func_22()
{
	if (Global_103191)
	{
		if (unk_0x9D39145AD645E383(&(Local_20.f_4), ""))
		{
			if (func_3(&Local_20))
			{
				unk_0xEFF1F12403847394(1);
			}
		}
		else if (func_2(&Local_20, &(Local_20.f_4)))
		{
			unk_0xEFF1F12403847394(1);
		}
	}
	Global_103192 = 0;
	Global_103191 = 0;
	unk_0x810C5D6462DD69E6();
}

