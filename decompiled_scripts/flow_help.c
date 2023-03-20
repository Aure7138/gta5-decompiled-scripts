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
	if (unk_0x89522B8E487D4EF9(50))
	{
		func_22();
	}
	while (true)
	{
		if (Global_99155.f_24859.f_145 > 0 || Global_97797)
		{
			if (!Global_97797)
			{
				if ((Global_35619 != 6 && Global_35619 != 15) && !Global_87365)
				{
					func_22();
				}
				if (!Global_97796)
				{
					if (Global_99155.f_24859.f_145 > 0)
					{
						if (func_19(&(Global_99155.f_24859[iLocal_37 /*16*/])))
						{
							if (func_17(func_18()))
							{
								if (unk_0xB519E5386FBF69E5(Global_99155.f_24859[iLocal_37 /*16*/].f_11, func_12()))
								{
									if (Global_99155.f_24859[iLocal_37 /*16*/].f_12 == Global_99155.f_24859.f_146[func_12()])
									{
										if (unk_0x9D40BBF80D8F5E8A() > Global_97799)
										{
											if (unk_0x9D40BBF80D8F5E8A() > Global_99155.f_24859[iLocal_37 /*16*/].f_8)
											{
												if (unk_0x04E7E853E31F41A3(&(Global_99155.f_24859[iLocal_37 /*16*/].f_4), ""))
												{
													unk_0x43BCF79209E64C09(1);
													func_11(&(Global_99155.f_24859[iLocal_37 /*16*/]));
												}
												else
												{
													unk_0x43BCF79209E64C09(1);
													func_10(&(Global_99155.f_24859[iLocal_37 /*16*/]), &(Global_99155.f_24859[iLocal_37 /*16*/].f_4));
												}
												if (Global_99155.f_24859[iLocal_37 /*16*/].f_13 != 0)
												{
													func_9(Global_99155.f_24859[iLocal_37 /*16*/].f_13, 0);
												}
												Local_20 = { Global_99155.f_24859[iLocal_37 /*16*/] };
												Local_20.f_4 = { Global_99155.f_24859[iLocal_37 /*16*/].f_4 };
												Local_20.f_8 = Global_99155.f_24859[iLocal_37 /*16*/].f_8;
												Local_20.f_10 = Global_99155.f_24859[iLocal_37 /*16*/].f_10;
												Local_20.f_9 = Global_99155.f_24859[iLocal_37 /*16*/].f_9;
												Local_20.f_11 = Global_99155.f_24859[iLocal_37 /*16*/].f_11;
												Local_20.f_12 = Global_99155.f_24859[iLocal_37 /*16*/].f_12;
												Local_20.f_13 = Global_99155.f_24859[iLocal_37 /*16*/].f_13;
												Local_20.f_14 = Global_99155.f_24859[iLocal_37 /*16*/].f_14;
												Local_20.f_15 = Global_99155.f_24859[iLocal_37 /*16*/].f_15;
												Local_20.f_16 = 0;
												Global_97800 = { Global_99155.f_24859[iLocal_37 /*16*/] };
												Global_97798 = unk_0x9D40BBF80D8F5E8A();
												iVar0 = iLocal_37;
												while (iVar0 <= (Global_99155.f_24859.f_145 - 2))
												{
													func_8(iVar0, iVar0 + 1);
													iVar0++;
												}
												func_7((Global_99155.f_24859.f_145 - 1));
												Global_99155.f_24859.f_145 = (Global_99155.f_24859.f_145 - 1);
												func_6();
												Global_97797 = 1;
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
				if (unk_0x04E7E853E31F41A3(&(Local_20.f_4), ""))
				{
					if (func_3(&Local_20))
					{
						unk_0x1D208E4A4E1D4FFE(0);
					}
				}
				else if (func_2(&Local_20, &(Local_20.f_4)))
				{
					unk_0x1D208E4A4E1D4FFE(0);
				}
				if ((unk_0x9D40BBF80D8F5E8A() - Global_97798) > 4000 || Local_20.f_16)
				{
					if (Local_20.f_14 != 0)
					{
						func_9(Local_20.f_14, 0);
					}
					Global_97799 = unk_0x9D40BBF80D8F5E8A() + 250;
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
				Global_97798 = 0;
				Global_97797 = 0;
			}
			if (!unk_0x04E7E853E31F41A3(&(Global_99155.f_24859[iLocal_37 /*16*/]), &Local_20) && !unk_0x04E7E853E31F41A3(&(Global_99155.f_24859[iLocal_37 /*16*/]), ""))
			{
				if (Global_99155.f_24859[iLocal_37 /*16*/].f_10 != -1)
				{
					if (unk_0x9D40BBF80D8F5E8A() > Global_99155.f_24859[iLocal_37 /*16*/].f_10)
					{
						iVar2 = iLocal_37;
						while (iVar2 <= (Global_99155.f_24859.f_145 - 2))
						{
							func_8(iVar2, iVar2 + 1);
							iVar2++;
						}
						func_7((Global_99155.f_24859.f_145 - 1));
						Global_99155.f_24859.f_145 = (Global_99155.f_24859.f_145 - 1);
						func_6();
					}
				}
			}
			iLocal_37++;
			if (iLocal_37 >= Global_99155.f_24859.f_145)
			{
				iLocal_37 = 0;
			}
		}
		else if ((Global_35619 != 6 && Global_35619 != 15) && !Global_87365)
		{
			func_22();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0x04E7E853E31F41A3(sParam0, ""))
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
	while (iVar0 < Global_99155.f_24859.f_145)
	{
		if (unk_0x04E7E853E31F41A3(&(Global_99155.f_24859[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_99155.f_24859.f_145 < 9)
	{
		StringCopy(&(Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_4), sParam1, 16);
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_8 = (unk_0x9D40BBF80D8F5E8A() + iParam3);
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_9 = iParam5;
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_11 = iParam6;
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_12 = uParam2;
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_13 = iParam7;
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_14 = iParam8;
		Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_10 = ((unk_0x9D40BBF80D8F5E8A() + iParam3) + iParam4);
		}
		else
		{
			Global_99155.f_24859[Global_99155.f_24859.f_145 /*16*/].f_10 = -1;
		}
		Global_99155.f_24859.f_145++;
		func_6();
	}
}

bool func_2(var uParam0, var uParam1)
{
	unk_0xAA8D087D7A86072A(uParam0);
	unk_0x9359E7CC54335EB9(uParam1);
	return unk_0x360D41DC76A83E6A(0);
}

bool func_3(var uParam0)
{
	unk_0xAA8D087D7A86072A(uParam0);
	return unk_0x360D41DC76A83E6A(0);
}

int func_4()
{
	if (unk_0x2DFE588AA3727FE3())
	{
		return 0;
	}
	if (func_5())
	{
		return 0;
	}
	if (Local_20.f_9 != -1 && (unk_0x9D40BBF80D8F5E8A() - Global_97798) > Local_20.f_9)
	{
		return 0;
	}
	if (Global_97796)
	{
		return 0;
	}
	if (unk_0x2DFE588AA3727FE3())
	{
		return 0;
	}
	if (unk_0x04E7E853E31F41A3(&(Local_20.f_4), ""))
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
	if (unk_0xFF6891E21E7FC193(joaat("player_timetable_scene")) > 0)
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
		Global_99155.f_24859.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_99155.f_24859.f_145)
	{
		if (unk_0xB519E5386FBF69E5(Global_99155.f_24859[iVar0 /*16*/].f_11, 0))
		{
			if (Global_99155.f_24859[iVar0 /*16*/].f_12 > Global_99155.f_24859.f_146[0])
			{
				Global_99155.f_24859.f_146[0] = Global_99155.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB519E5386FBF69E5(Global_99155.f_24859[iVar0 /*16*/].f_11, 1))
		{
			if (Global_99155.f_24859[iVar0 /*16*/].f_12 > Global_99155.f_24859.f_146[1])
			{
				Global_99155.f_24859.f_146[1] = Global_99155.f_24859[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xB519E5386FBF69E5(Global_99155.f_24859[iVar0 /*16*/].f_11, 2))
		{
			if (Global_99155.f_24859[iVar0 /*16*/].f_12 > Global_99155.f_24859.f_146[2])
			{
				Global_99155.f_24859.f_146[2] = Global_99155.f_24859[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_7(int iParam0)
{
	StringCopy(&(Global_99155.f_24859[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_99155.f_24859[iParam0 /*16*/].f_4), "", 16);
	Global_99155.f_24859[iParam0 /*16*/].f_8 = 0;
	Global_99155.f_24859[iParam0 /*16*/].f_9 = 0;
	Global_99155.f_24859[iParam0 /*16*/].f_11 = 0;
	Global_99155.f_24859[iParam0 /*16*/].f_10 = -1;
	Global_99155.f_24859[iParam0 /*16*/].f_12 = 0;
	Global_99155.f_24859[iParam0 /*16*/].f_13 = 0;
	Global_99155.f_24859[iParam0 /*16*/].f_14 = 0;
	Global_99155.f_24859[iParam0 /*16*/].f_15 = 0;
}

void func_8(int iParam0, int iParam1)
{
	Global_99155.f_24859[iParam0 /*16*/] = { Global_99155.f_24859[iParam1 /*16*/] };
	Global_99155.f_24859[iParam0 /*16*/].f_4 = { Global_99155.f_24859[iParam1 /*16*/].f_4 };
	Global_99155.f_24859[iParam0 /*16*/].f_8 = Global_99155.f_24859[iParam1 /*16*/].f_8;
	Global_99155.f_24859[iParam0 /*16*/].f_10 = Global_99155.f_24859[iParam1 /*16*/].f_10;
	Global_99155.f_24859[iParam0 /*16*/].f_9 = Global_99155.f_24859[iParam1 /*16*/].f_9;
	Global_99155.f_24859[iParam0 /*16*/].f_11 = Global_99155.f_24859[iParam1 /*16*/].f_11;
	Global_99155.f_24859[iParam0 /*16*/].f_12 = Global_99155.f_24859[iParam1 /*16*/].f_12;
	Global_99155.f_24859[iParam0 /*16*/].f_13 = Global_99155.f_24859[iParam1 /*16*/].f_13;
	Global_99155.f_24859[iParam0 /*16*/].f_14 = Global_99155.f_24859[iParam1 /*16*/].f_14;
	Global_99155.f_24859[iParam0 /*16*/].f_15 = Global_99155.f_24859[iParam1 /*16*/].f_15;
}

void func_9(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_99155.f_7227[iParam0] = 1;
	Global_99155.f_7227.f_236[iParam0] = (unk_0x9D40BBF80D8F5E8A() + iParam1);
}

void func_10(var uParam0, var uParam1)
{
	unk_0xCAFBB15049416379(uParam0);
	unk_0x9359E7CC54335EB9(uParam1);
	unk_0x7CBFB87C647743C3(0, 1, 1, -1);
}

void func_11(var uParam0)
{
	unk_0xCAFBB15049416379(uParam0);
	unk_0x7CBFB87C647743C3(0, 1, 1, -1);
}

int func_12()
{
	func_13();
	return Global_99155.f_1750.f_539.f_3549;
}

void func_13()
{
	int iVar0;
	
	if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
	{
		if (func_16(Global_99155.f_1750.f_539.f_3549) != unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()))
		{
			iVar0 = func_15(unk_0xE7869D5D7816A9B6());
			if (func_17(iVar0) && (!func_14(14) || Global_98107))
			{
				if (Global_99155.f_1750.f_539.f_3549 != iVar0 && func_17(Global_99155.f_1750.f_539.f_3549))
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

bool func_14(int iParam0)
{
	return Global_35619 == iParam0;
}

int func_15(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD51CFE69539DB6D8(uParam0))
	{
		iVar1 = unk_0x1B2DC87EFB36DF80(uParam0);
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
		return Global_99155.f_32499[iParam0 /*29*/];
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
	return Global_99155.f_1750.f_539.f_3549;
}

int func_19(var uParam0)
{
	if (unk_0x23741E39BEA32E66())
	{
		return 0;
	}
	if (unk_0x2DFE588AA3727FE3())
	{
		return 0;
	}
	if (!unk_0xDE185266FE919B68())
	{
		return 0;
	}
	if (unk_0xA42A6C736BEA9778())
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
		if (Global_69234)
		{
			return 0;
		}
		if (Global_88278)
		{
			return 0;
		}
		if (!unk_0xB519E5386FBF69E5(uParam0->f_15, 1))
		{
			if (Global_88286)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_20()
{
	if (Global_69496)
	{
		return 1;
	}
	else if (Global_55572 && !Global_55578)
	{
		return 1;
	}
	return 0;
}

int func_21()
{
	if (!unk_0x00AAD79B42B3E036())
	{
		return Global_88836.f_44 == 1;
	}
	return 0;
}

void func_22()
{
	if (Global_97797)
	{
		if (unk_0x04E7E853E31F41A3(&(Local_20.f_4), ""))
		{
			if (func_3(&Local_20))
			{
				unk_0x1D208E4A4E1D4FFE(1);
			}
		}
		else if (func_2(&Local_20, &(Local_20.f_4)))
		{
			unk_0x1D208E4A4E1D4FFE(1);
		}
	}
	Global_97798 = 0;
	Global_97797 = 0;
	unk_0x52F20802944F8DCE();
}

