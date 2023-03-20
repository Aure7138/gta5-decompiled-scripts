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
	if (unk_0x524AF15206846700(50))
	{
		func_22();
	}
	while (true)
	{
		if (Global_101154.f_24935.f_145 > 0 || Global_99796)
		{
			if (!Global_99796)
			{
				if ((Global_35711 != 6 && Global_35711 != 15) && !Global_87618)
				{
					func_22();
				}
				if (!Global_99795)
				{
					if (Global_101154.f_24935.f_145 > 0)
					{
						if (func_19(&(Global_101154.f_24935[iLocal_37 /*16*/])))
						{
							if (func_17(func_18()))
							{
								if (unk_0xF426A5DE932B3BEE(Global_101154.f_24935[iLocal_37 /*16*/].f_11, func_12()))
								{
									if (Global_101154.f_24935[iLocal_37 /*16*/].f_12 == Global_101154.f_24935.f_146[func_12()])
									{
										if (unk_0xA0F74982C6AAA9D4() > Global_99798)
										{
											if (unk_0xA0F74982C6AAA9D4() > Global_101154.f_24935[iLocal_37 /*16*/].f_8)
											{
												if (unk_0xC1C5B83BB6719C6C(&(Global_101154.f_24935[iLocal_37 /*16*/].f_4), ""))
												{
													unk_0xF0D343C9131A14F2(1);
													func_11(&(Global_101154.f_24935[iLocal_37 /*16*/]));
												}
												else
												{
													unk_0xF0D343C9131A14F2(1);
													func_10(&(Global_101154.f_24935[iLocal_37 /*16*/]), &(Global_101154.f_24935[iLocal_37 /*16*/].f_4));
												}
												if (Global_101154.f_24935[iLocal_37 /*16*/].f_13 != 0)
												{
													func_9(Global_101154.f_24935[iLocal_37 /*16*/].f_13, 0);
												}
												Local_20 = { Global_101154.f_24935[iLocal_37 /*16*/] };
												Local_20.f_4 = { Global_101154.f_24935[iLocal_37 /*16*/].f_4 };
												Local_20.f_8 = Global_101154.f_24935[iLocal_37 /*16*/].f_8;
												Local_20.f_10 = Global_101154.f_24935[iLocal_37 /*16*/].f_10;
												Local_20.f_9 = Global_101154.f_24935[iLocal_37 /*16*/].f_9;
												Local_20.f_11 = Global_101154.f_24935[iLocal_37 /*16*/].f_11;
												Local_20.f_12 = Global_101154.f_24935[iLocal_37 /*16*/].f_12;
												Local_20.f_13 = Global_101154.f_24935[iLocal_37 /*16*/].f_13;
												Local_20.f_14 = Global_101154.f_24935[iLocal_37 /*16*/].f_14;
												Local_20.f_15 = Global_101154.f_24935[iLocal_37 /*16*/].f_15;
												Local_20.f_16 = 0;
												Global_99799 = { Global_101154.f_24935[iLocal_37 /*16*/] };
												Global_99797 = unk_0xA0F74982C6AAA9D4();
												iVar0 = iLocal_37;
												while (iVar0 <= (Global_101154.f_24935.f_145 - 2))
												{
													func_8(iVar0, iVar0 + 1);
													iVar0++;
												}
												func_7((Global_101154.f_24935.f_145 - 1));
												Global_101154.f_24935.f_145 = (Global_101154.f_24935.f_145 - 1);
												func_6();
												Global_99796 = 1;
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
				if (unk_0xC1C5B83BB6719C6C(&(Local_20.f_4), ""))
				{
					if (func_3(&Local_20))
					{
						unk_0x5BD150B52CE8D356(0);
					}
				}
				else if (func_2(&Local_20, &(Local_20.f_4)))
				{
					unk_0x5BD150B52CE8D356(0);
				}
				if ((unk_0xA0F74982C6AAA9D4() - Global_99797) > 4000 || Local_20.f_16)
				{
					if (Local_20.f_14 != 0)
					{
						func_9(Local_20.f_14, 0);
					}
					Global_99798 = unk_0xA0F74982C6AAA9D4() + 250;
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
				Global_99797 = 0;
				Global_99796 = 0;
			}
			if (!unk_0xC1C5B83BB6719C6C(&(Global_101154.f_24935[iLocal_37 /*16*/]), &Local_20) && !unk_0xC1C5B83BB6719C6C(&(Global_101154.f_24935[iLocal_37 /*16*/]), ""))
			{
				if (Global_101154.f_24935[iLocal_37 /*16*/].f_10 != -1)
				{
					if (unk_0xA0F74982C6AAA9D4() > Global_101154.f_24935[iLocal_37 /*16*/].f_10)
					{
						iVar2 = iLocal_37;
						while (iVar2 <= (Global_101154.f_24935.f_145 - 2))
						{
							func_8(iVar2, iVar2 + 1);
							iVar2++;
						}
						func_7((Global_101154.f_24935.f_145 - 1));
						Global_101154.f_24935.f_145 = (Global_101154.f_24935.f_145 - 1);
						func_6();
					}
				}
			}
			iLocal_37++;
			if (iLocal_37 >= Global_101154.f_24935.f_145)
			{
				iLocal_37 = 0;
			}
		}
		else if ((Global_35711 != 6 && Global_35711 != 15) && !Global_87618)
		{
			func_22();
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xC1C5B83BB6719C6C(sParam0, ""))
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
	while (iVar0 < Global_101154.f_24935.f_145)
	{
		if (unk_0xC1C5B83BB6719C6C(&(Global_101154.f_24935[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_101154.f_24935.f_145 < 9)
	{
		StringCopy(&(Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_4), sParam1, 16);
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_8 = (unk_0xA0F74982C6AAA9D4() + iParam3);
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_9 = iParam5;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_11 = iParam6;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_12 = uParam2;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_13 = iParam7;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_14 = iParam8;
		Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_10 = ((unk_0xA0F74982C6AAA9D4() + iParam3) + iParam4);
		}
		else
		{
			Global_101154.f_24935[Global_101154.f_24935.f_145 /*16*/].f_10 = -1;
		}
		Global_101154.f_24935.f_145++;
		func_6();
	}
}

bool func_2(var uParam0, var uParam1)
{
	unk_0x66F753896FC4EEC3(uParam0);
	unk_0x2B088D6251C2080D(uParam1);
	return unk_0xF2DBEB09EBAED1D6(0);
}

bool func_3(var uParam0)
{
	unk_0x66F753896FC4EEC3(uParam0);
	return unk_0xF2DBEB09EBAED1D6(0);
}

int func_4()
{
	if (unk_0x67FB99B1361E144E())
	{
		return 0;
	}
	if (func_5())
	{
		return 0;
	}
	if (Local_20.f_9 != -1 && (unk_0xA0F74982C6AAA9D4() - Global_99797) > Local_20.f_9)
	{
		return 0;
	}
	if (Global_99795)
	{
		return 0;
	}
	if (unk_0x67FB99B1361E144E())
	{
		return 0;
	}
	if (unk_0xC1C5B83BB6719C6C(&(Local_20.f_4), ""))
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
	if (unk_0xD32535FA4397160F(joaat("player_timetable_scene")) > 0)
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
		Global_101154.f_24935.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_101154.f_24935.f_145)
	{
		if (unk_0xF426A5DE932B3BEE(Global_101154.f_24935[iVar0 /*16*/].f_11, 0))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[0])
			{
				Global_101154.f_24935.f_146[0] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xF426A5DE932B3BEE(Global_101154.f_24935[iVar0 /*16*/].f_11, 1))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[1])
			{
				Global_101154.f_24935.f_146[1] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xF426A5DE932B3BEE(Global_101154.f_24935[iVar0 /*16*/].f_11, 2))
		{
			if (Global_101154.f_24935[iVar0 /*16*/].f_12 > Global_101154.f_24935.f_146[2])
			{
				Global_101154.f_24935.f_146[2] = Global_101154.f_24935[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_7(int iParam0)
{
	StringCopy(&(Global_101154.f_24935[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_101154.f_24935[iParam0 /*16*/].f_4), "", 16);
	Global_101154.f_24935[iParam0 /*16*/].f_8 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_9 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_11 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_10 = -1;
	Global_101154.f_24935[iParam0 /*16*/].f_12 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_13 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_14 = 0;
	Global_101154.f_24935[iParam0 /*16*/].f_15 = 0;
}

void func_8(int iParam0, int iParam1)
{
	Global_101154.f_24935[iParam0 /*16*/] = { Global_101154.f_24935[iParam1 /*16*/] };
	Global_101154.f_24935[iParam0 /*16*/].f_4 = { Global_101154.f_24935[iParam1 /*16*/].f_4 };
	Global_101154.f_24935[iParam0 /*16*/].f_8 = Global_101154.f_24935[iParam1 /*16*/].f_8;
	Global_101154.f_24935[iParam0 /*16*/].f_10 = Global_101154.f_24935[iParam1 /*16*/].f_10;
	Global_101154.f_24935[iParam0 /*16*/].f_9 = Global_101154.f_24935[iParam1 /*16*/].f_9;
	Global_101154.f_24935[iParam0 /*16*/].f_11 = Global_101154.f_24935[iParam1 /*16*/].f_11;
	Global_101154.f_24935[iParam0 /*16*/].f_12 = Global_101154.f_24935[iParam1 /*16*/].f_12;
	Global_101154.f_24935[iParam0 /*16*/].f_13 = Global_101154.f_24935[iParam1 /*16*/].f_13;
	Global_101154.f_24935[iParam0 /*16*/].f_14 = Global_101154.f_24935[iParam1 /*16*/].f_14;
	Global_101154.f_24935[iParam0 /*16*/].f_15 = Global_101154.f_24935[iParam1 /*16*/].f_15;
}

void func_9(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_101154.f_7303[iParam0] = 1;
	Global_101154.f_7303.f_236[iParam0] = (unk_0xA0F74982C6AAA9D4() + iParam1);
}

void func_10(var uParam0, var uParam1)
{
	unk_0x3432AC8623AF4EAC(uParam0);
	unk_0x2B088D6251C2080D(uParam1);
	unk_0x9785EE0D78241684(0, 1, 1, -1);
}

void func_11(var uParam0)
{
	unk_0x3432AC8623AF4EAC(uParam0);
	unk_0x9785EE0D78241684(0, 1, 1, -1);
}

int func_12()
{
	func_13();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_13()
{
	int iVar0;
	
	if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()))
	{
		if (func_16(Global_101154.f_1826.f_539.f_3549) != unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()))
		{
			iVar0 = func_15(unk_0x27D769C59BC9D030());
			if (func_17(iVar0) && (!func_14(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_17(Global_101154.f_1826.f_539.f_3549))
				{
					Global_101154.f_1826.f_539.f_3550 = Global_101154.f_1826.f_539.f_3549;
				}
				Global_101154.f_1826.f_539.f_3551 = iVar0;
				Global_101154.f_1826.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101154.f_1826.f_539.f_3549 != 145)
			{
				Global_101154.f_1826.f_539.f_3551 = Global_101154.f_1826.f_539.f_3549;
			}
			return;
		}
	}
	Global_101154.f_1826.f_539.f_3549 = 145;
}

bool func_14(int iParam0)
{
	return Global_35711 == iParam0;
}

int func_15(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD2CFFE76B625AE55(uParam0))
	{
		iVar1 = unk_0x946C63BD9EF05437(uParam0);
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
		return Global_101154.f_32575[iParam0 /*29*/];
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
	return Global_101154.f_1826.f_539.f_3549;
}

int func_19(var uParam0)
{
	if (unk_0x46768B1495288824())
	{
		return 0;
	}
	if (unk_0x67FB99B1361E144E())
	{
		return 0;
	}
	if (!unk_0xCBB243DDC0D132D1())
	{
		return 0;
	}
	if (unk_0xB5830E534335F40B())
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
		if (Global_69487)
		{
			return 0;
		}
		if (Global_88531)
		{
			return 0;
		}
		if (!unk_0xF426A5DE932B3BEE(uParam0->f_15, 1))
		{
			if (Global_88539)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_20()
{
	if (Global_69749)
	{
		return 1;
	}
	else if (Global_55743 && !Global_55749)
	{
		return 1;
	}
	return 0;
}

int func_21()
{
	if (!unk_0x0E063DDE8855EC52())
	{
		return Global_89089.f_44 == 1;
	}
	return 0;
}

void func_22()
{
	if (Global_99796)
	{
		if (unk_0xC1C5B83BB6719C6C(&(Local_20.f_4), ""))
		{
			if (func_3(&Local_20))
			{
				unk_0x5BD150B52CE8D356(1);
			}
		}
		else if (func_2(&Local_20, &(Local_20.f_4)))
		{
			unk_0x5BD150B52CE8D356(1);
		}
	}
	Global_99797 = 0;
	Global_99796 = 0;
	unk_0x7C3AA2D27E16E2AD();
}

