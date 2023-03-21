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
	if (unk_0x78BF2001491914AC(50))
	{
		func_22();
	}
	while (true)
	{
		if (Global_103236.f_20191.f_145 > 0 || Global_101878)
		{
			if (!Global_101878)
			{
				if ((Global_35813 != 6 && Global_35813 != 15) && !Global_87929)
				{
					func_22();
				}
				if (!Global_101877)
				{
					if (Global_103236.f_20191.f_145 > 0)
					{
						if (func_19(&(Global_103236.f_20191[iLocal_37 /*16*/])))
						{
							if (func_17(func_18()))
							{
								if (unk_0xAA4F14DA15DB0B51(Global_103236.f_20191[iLocal_37 /*16*/].f_11, func_12()))
								{
									if (Global_103236.f_20191[iLocal_37 /*16*/].f_12 == Global_103236.f_20191.f_146[func_12()])
									{
										if (unk_0x3732B96D7A1859B4() > Global_101880)
										{
											if (unk_0x3732B96D7A1859B4() > Global_103236.f_20191[iLocal_37 /*16*/].f_8)
											{
												if (unk_0x35302CD5A5D37EED(&(Global_103236.f_20191[iLocal_37 /*16*/].f_4), ""))
												{
													unk_0xB20FA976261BF996(1);
													func_11(&(Global_103236.f_20191[iLocal_37 /*16*/]));
												}
												else
												{
													unk_0xB20FA976261BF996(1);
													func_10(&(Global_103236.f_20191[iLocal_37 /*16*/]), &(Global_103236.f_20191[iLocal_37 /*16*/].f_4));
												}
												if (Global_103236.f_20191[iLocal_37 /*16*/].f_13 != 0)
												{
													func_9(Global_103236.f_20191[iLocal_37 /*16*/].f_13, 0);
												}
												Local_20 = { Global_103236.f_20191[iLocal_37 /*16*/] };
												Local_20.f_4 = { Global_103236.f_20191[iLocal_37 /*16*/].f_4 };
												Local_20.f_8 = Global_103236.f_20191[iLocal_37 /*16*/].f_8;
												Local_20.f_10 = Global_103236.f_20191[iLocal_37 /*16*/].f_10;
												Local_20.f_9 = Global_103236.f_20191[iLocal_37 /*16*/].f_9;
												Local_20.f_11 = Global_103236.f_20191[iLocal_37 /*16*/].f_11;
												Local_20.f_12 = Global_103236.f_20191[iLocal_37 /*16*/].f_12;
												Local_20.f_13 = Global_103236.f_20191[iLocal_37 /*16*/].f_13;
												Local_20.f_14 = Global_103236.f_20191[iLocal_37 /*16*/].f_14;
												Local_20.f_15 = Global_103236.f_20191[iLocal_37 /*16*/].f_15;
												Local_20.f_16 = 0;
												Global_101881 = { Global_103236.f_20191[iLocal_37 /*16*/] };
												Global_101879 = unk_0x3732B96D7A1859B4();
												iVar0 = iLocal_37;
												while (iVar0 <= (Global_103236.f_20191.f_145 - 2))
												{
													func_8(iVar0, iVar0 + 1);
													iVar0++;
												}
												func_7((Global_103236.f_20191.f_145 - 1));
												Global_103236.f_20191.f_145 = (Global_103236.f_20191.f_145 - 1);
												func_6();
												Global_101878 = 1;
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
				if (unk_0x35302CD5A5D37EED(&(Local_20.f_4), ""))
				{
					if (func_3(&Local_20))
					{
						unk_0x7D53B6FFAEDA810A(0);
					}
				}
				else if (func_2(&Local_20, &(Local_20.f_4)))
				{
					unk_0x7D53B6FFAEDA810A(0);
				}
				if ((unk_0x3732B96D7A1859B4() - Global_101879) > 4000 || Local_20.f_16)
				{
					if (Local_20.f_14 != 0)
					{
						func_9(Local_20.f_14, 0);
					}
					Global_101880 = unk_0x3732B96D7A1859B4() + 250;
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
				Global_101879 = 0;
				Global_101878 = 0;
			}
			if (!unk_0x35302CD5A5D37EED(&(Global_103236.f_20191[iLocal_37 /*16*/]), &Local_20) && !unk_0x35302CD5A5D37EED(&(Global_103236.f_20191[iLocal_37 /*16*/]), ""))
			{
				if (Global_103236.f_20191[iLocal_37 /*16*/].f_10 != -1)
				{
					if (unk_0x3732B96D7A1859B4() > Global_103236.f_20191[iLocal_37 /*16*/].f_10)
					{
						iVar2 = iLocal_37;
						while (iVar2 <= (Global_103236.f_20191.f_145 - 2))
						{
							func_8(iVar2, iVar2 + 1);
							iVar2++;
						}
						func_7((Global_103236.f_20191.f_145 - 1));
						Global_103236.f_20191.f_145 = (Global_103236.f_20191.f_145 - 1);
						func_6();
					}
				}
			}
			iLocal_37++;
			if (iLocal_37 >= Global_103236.f_20191.f_145)
			{
				iLocal_37 = 0;
			}
		}
		else if ((Global_35813 != 6 && Global_35813 != 15) && !Global_87929)
		{
			func_22();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x35302CD5A5D37EED(sParam0, ""))
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
	while (iVar0 < Global_103236.f_20191.f_145)
	{
		if (unk_0x35302CD5A5D37EED(&(Global_103236.f_20191[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_103236.f_20191.f_145 < 9)
	{
		StringCopy(&(Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_4), sParam1, 16);
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_8 = (unk_0x3732B96D7A1859B4() + iParam3);
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_9 = iParam5;
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_11 = iParam6;
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_12 = uParam2;
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_13 = iParam7;
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_14 = iParam8;
		Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_10 = ((unk_0x3732B96D7A1859B4() + iParam3) + iParam4);
		}
		else
		{
			Global_103236.f_20191[Global_103236.f_20191.f_145 /*16*/].f_10 = -1;
		}
		Global_103236.f_20191.f_145++;
		func_6();
	}
}

bool func_2(var uParam0, var uParam1)
{
	unk_0xCC4D66D4B9222F95(uParam0);
	unk_0xD5DA3EC5EEC78358(uParam1);
	return unk_0x95886DF60C19E1CC(0);
}

bool func_3(var uParam0)
{
	unk_0xCC4D66D4B9222F95(uParam0);
	return unk_0x95886DF60C19E1CC(0);
}

int func_4()
{
	if (unk_0x863D84AFAC2AB730())
	{
		return 0;
	}
	if (func_5())
	{
		return 0;
	}
	if (Local_20.f_9 != -1 && (unk_0x3732B96D7A1859B4() - Global_101879) > Local_20.f_9)
	{
		return 0;
	}
	if (Global_101877)
	{
		return 0;
	}
	if (unk_0x863D84AFAC2AB730())
	{
		return 0;
	}
	if (unk_0x35302CD5A5D37EED(&(Local_20.f_4), ""))
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
	if (unk_0x09952BA662A7629B(joaat("player_timetable_scene")) > 0)
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
		Global_103236.f_20191.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_103236.f_20191.f_145)
	{
		if (unk_0xAA4F14DA15DB0B51(Global_103236.f_20191[iVar0 /*16*/].f_11, 0))
		{
			if (Global_103236.f_20191[iVar0 /*16*/].f_12 > Global_103236.f_20191.f_146[0])
			{
				Global_103236.f_20191.f_146[0] = Global_103236.f_20191[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xAA4F14DA15DB0B51(Global_103236.f_20191[iVar0 /*16*/].f_11, 1))
		{
			if (Global_103236.f_20191[iVar0 /*16*/].f_12 > Global_103236.f_20191.f_146[1])
			{
				Global_103236.f_20191.f_146[1] = Global_103236.f_20191[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xAA4F14DA15DB0B51(Global_103236.f_20191[iVar0 /*16*/].f_11, 2))
		{
			if (Global_103236.f_20191[iVar0 /*16*/].f_12 > Global_103236.f_20191.f_146[2])
			{
				Global_103236.f_20191.f_146[2] = Global_103236.f_20191[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_7(int iParam0)
{
	StringCopy(&(Global_103236.f_20191[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_103236.f_20191[iParam0 /*16*/].f_4), "", 16);
	Global_103236.f_20191[iParam0 /*16*/].f_8 = 0;
	Global_103236.f_20191[iParam0 /*16*/].f_9 = 0;
	Global_103236.f_20191[iParam0 /*16*/].f_11 = 0;
	Global_103236.f_20191[iParam0 /*16*/].f_10 = -1;
	Global_103236.f_20191[iParam0 /*16*/].f_12 = 0;
	Global_103236.f_20191[iParam0 /*16*/].f_13 = 0;
	Global_103236.f_20191[iParam0 /*16*/].f_14 = 0;
	Global_103236.f_20191[iParam0 /*16*/].f_15 = 0;
}

void func_8(int iParam0, int iParam1)
{
	Global_103236.f_20191[iParam0 /*16*/] = { Global_103236.f_20191[iParam1 /*16*/] };
	Global_103236.f_20191[iParam0 /*16*/].f_4 = { Global_103236.f_20191[iParam1 /*16*/].f_4 };
	Global_103236.f_20191[iParam0 /*16*/].f_8 = Global_103236.f_20191[iParam1 /*16*/].f_8;
	Global_103236.f_20191[iParam0 /*16*/].f_10 = Global_103236.f_20191[iParam1 /*16*/].f_10;
	Global_103236.f_20191[iParam0 /*16*/].f_9 = Global_103236.f_20191[iParam1 /*16*/].f_9;
	Global_103236.f_20191[iParam0 /*16*/].f_11 = Global_103236.f_20191[iParam1 /*16*/].f_11;
	Global_103236.f_20191[iParam0 /*16*/].f_12 = Global_103236.f_20191[iParam1 /*16*/].f_12;
	Global_103236.f_20191[iParam0 /*16*/].f_13 = Global_103236.f_20191[iParam1 /*16*/].f_13;
	Global_103236.f_20191[iParam0 /*16*/].f_14 = Global_103236.f_20191[iParam1 /*16*/].f_14;
	Global_103236.f_20191[iParam0 /*16*/].f_15 = Global_103236.f_20191[iParam1 /*16*/].f_15;
}

void func_9(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_103236.f_8394[iParam0] = 1;
	Global_103236.f_8394.f_236[iParam0] = (unk_0x3732B96D7A1859B4() + iParam1);
}

void func_10(var uParam0, var uParam1)
{
	unk_0x2D1CC533F8B39221(uParam0);
	unk_0xD5DA3EC5EEC78358(uParam1);
	unk_0xED95966D04271FDA(0, 1, 1, -1);
}

void func_11(var uParam0)
{
	unk_0x2D1CC533F8B39221(uParam0);
	unk_0xED95966D04271FDA(0, 1, 1, -1);
}

int func_12()
{
	func_13();
	return Global_103236.f_2164.f_539.f_4301;
}

void func_13()
{
	int iVar0;
	
	if (unk_0x2137828D03306CAF(unk_0x2A5EB8B0FE590B91()))
	{
		if (func_16(Global_103236.f_2164.f_539.f_4301) != unk_0xD3B21CE53AA7BE51(unk_0x2A5EB8B0FE590B91()))
		{
			iVar0 = func_15(unk_0x2A5EB8B0FE590B91());
			if (func_17(iVar0) && (!func_14(14) || Global_102188))
			{
				if (Global_103236.f_2164.f_539.f_4301 != iVar0 && func_17(Global_103236.f_2164.f_539.f_4301))
				{
					Global_103236.f_2164.f_539.f_4302 = Global_103236.f_2164.f_539.f_4301;
				}
				Global_103236.f_2164.f_539.f_4303 = iVar0;
				Global_103236.f_2164.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_103236.f_2164.f_539.f_4301 != 145)
			{
				Global_103236.f_2164.f_539.f_4303 = Global_103236.f_2164.f_539.f_4301;
			}
			return;
		}
	}
	Global_103236.f_2164.f_539.f_4301 = 145;
}

bool func_14(int iParam0)
{
	return Global_35813 == iParam0;
}

int func_15(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x2137828D03306CAF(uParam0))
	{
		iVar1 = unk_0xD3B21CE53AA7BE51(uParam0);
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
		return Global_103236.f_27831[iParam0 /*29*/];
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
	return Global_103236.f_2164.f_539.f_4301;
}

int func_19(var uParam0)
{
	if (unk_0x6235C49EA2DBA22D())
	{
		return 0;
	}
	if (unk_0x863D84AFAC2AB730())
	{
		return 0;
	}
	if (!unk_0x0B21CC5276C2CE1B())
	{
		return 0;
	}
	if (unk_0x908783EBF098B817())
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
		if (Global_69798)
		{
			return 0;
		}
		if (Global_88842)
		{
			return 0;
		}
		if (!unk_0xAA4F14DA15DB0B51(uParam0->f_15, 1))
		{
			if (Global_88850)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_20()
{
	if (Global_70060)
	{
		return 1;
	}
	else if (Global_55848 && !Global_55854)
	{
		return 1;
	}
	return 0;
}

int func_21()
{
	if (!unk_0x591AF4C50B46E014())
	{
		return Global_89400.f_44 == 1;
	}
	return 0;
}

void func_22()
{
	if (Global_101878)
	{
		if (unk_0x35302CD5A5D37EED(&(Local_20.f_4), ""))
		{
			if (func_3(&Local_20))
			{
				unk_0x7D53B6FFAEDA810A(1);
			}
		}
		else if (func_2(&Local_20, &(Local_20.f_4)))
		{
			unk_0x7D53B6FFAEDA810A(1);
		}
	}
	Global_101879 = 0;
	Global_101878 = 0;
	unk_0xA232817B0B36F2E5();
}

